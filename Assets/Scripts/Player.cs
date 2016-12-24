using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using UnityStandardAssets.CrossPlatformInput;



public class Player : MonoBehaviour
{
	// Platforms empty
	public Platforms platforms;
	public DeathCube deathCube;
	public bool isResurrecting = false;
	public bool canJump = true;
	public bool tapJumping = false;
	public bool isSpawnTrail = true;
	// Most of these variables are pretty self explanatory
	public float movingSpeed = 0.1f;
	public float jumpHeight;    // Don't change jumpSpeed, jumpHeight is the only one that should be changed for different jump heights
	private float jumpSpeed;
	private float distanceTravelled;
	private float hookTimer;
	private float hookAngle;
	private float trailTimer;
	public float asteroidTimer;
	// rb is the RigidBody component of the player
	private Rigidbody rb;
	// This velocity variable is used in the jump function
	private Vector3 velocity;
	private Vector3 lastFramePosition;
	private Vector3 firstPlatPos;
	private Vector3 hookTarget;
	private Vector3 hookEnd;
	private Raycast Raycast;
	public AudioClip[] bounceSounds;
	private AudioSource mySound;
	private TrailRenderer trail;
	public Skydome skydome;
	public GameObject mainCamera;
	public GameObject big;
	public GameObject asteroidPrefab;
	public float flipStep;
	public float trailLength;
	public Color32[] trailColors;
	public Gradient playingTrailGradient;
	private bool hooking = false;
	private bool setHookEnd = false;
	private bool setHookTarget = false;
	private bool canFlip = false;
	private int asteroidSetting = PlayerPrefs.GetInt("AsteroidSetting");
	public GameObject asteroidOffPicture;



	// Use this for initialization
	void Start()
	{
		canFlip = true;
		lastFramePosition = transform.position;
		// Assigns rb to the RigidBody component of the player
		rb = GetComponent<Rigidbody>();
		// Stops forces from affecting player rotation

		// Line I got from the internet, makes it so that jumpSpeed is euqal to the amount of force required to jump up to jumpHeight
		jumpSpeed = Mathf.Sqrt(-2 * Physics.gravity.y * jumpHeight) + 0.1f;
		Raycast = GetComponent<Raycast>();
		mySound = GetComponent<AudioSource>();
		trail = GetComponent<TrailRenderer>();
		skydome = GameObject.Find("SkyDome").GetComponent<Skydome>();
		skydome.SetPlayer(gameObject);
		rb.freezeRotation = true;

		foreach (Transform child in big.transform)
		{
			if (PlayerPrefs.GetInt(child.name) == 1 && !child.gameObject.GetComponent<Scroll>().isTrail)
			{
				child.GetComponent<Scroll>().EquipModel();
			}
			else if(PlayerPrefs.GetInt(child.name) == 1 && child.gameObject.GetComponent<Scroll>().isTrail)
			{
				child.GetComponent<Scroll>().EquipTrail();
			}
		}

		if (PlayerPrefs.GetInt ("AsteroidSetting") == 1) {
			asteroidOffPicture.SetActive (false);
		} else {
			asteroidOffPicture.SetActive (true);
		}

	}

	public void ToggleAsteroidSetting(){


		if (PlayerPrefs.GetInt("AsteroidSetting")==0) {

			PlayerPrefs.SetInt ("AsteroidSetting", 1);
			asteroidOffPicture.SetActive (false);
		} else {

			PlayerPrefs.SetInt ("AsteroidSetting", 0);
			asteroidOffPicture.SetActive (true);
			foreach (GameObject asteroid in GameObject.FindGameObjectsWithTag("Asteroid")){
				Destroy(asteroid);
			}
		}
	}

	// Update is called once per frame
	void Update()
	{
		if(platforms.score >= 0)
		{
			trailLength += Vector3.Distance(lastFramePosition, transform.position) / 3;
			lastFramePosition = transform.position;
			trail.time += Time.deltaTime;
		}

		Move();

		if (tapJumping || Input.GetKey(KeyCode.Space))
		{
			Jump();
		}
		if (hooking)
		{
			Hook();
		}


		if (PlayerPrefs.GetInt("AsteroidSetting") == 1) {
			asteroidTimer += Time.deltaTime;

			if (asteroidTimer >= 2) {
				asteroidTimer = 0;
				SpawnAsteroid ();
			}
		}

		/*if (canJump == false)
        {
            transform.eulerAngles = new Vector3(Mathf.Lerp(0, 180, flipStep), 0, 0);
            flipStep += Time.deltaTime * 2;
            if(flipStep > 1f)
            {
                flipStep = 1f;
            }
        }*/
	}


	private void SpawnAsteroid()
	{
		GameObject asteroid = Instantiate(asteroidPrefab);
		Rigidbody asteroidRb = asteroid.GetComponent<Rigidbody>();
		asteroid.transform.parent = transform;
		asteroid.transform.eulerAngles = new Vector3(Random.Range(0, 360), Random.Range(0, 360), Random.Range(0, 360));
		int forceMultiplier = Random.Range(8, 20);
		asteroidRb.AddTorque(Random.Range(-10, 10), Random.Range(-10, 10), Random.Range(-10, 10) * forceMultiplier / 2, ForceMode.Impulse);
		if (platforms.consecutiveJumped < 4)
		{
			asteroid.transform.localPosition = new Vector3(Random.Range(-40, 40), 20, Random.Range(30, 45));
			if (asteroid.transform.localPosition.x <= -15)
			{
				int forceAngle = Random.Range(-80, -10);
				float y = Mathf.Sin(forceAngle * Mathf.PI / 180f);
				float xz = Mathf.Cos(forceAngle * Mathf.PI / 180f);
				asteroid.transform.parent = transform.parent;
				asteroidRb.AddForce(new Vector3(xz, y, 0) * forceMultiplier, ForceMode.Impulse);
			}
			else if (asteroid.transform.localPosition.x > -15 && asteroid.transform.localPosition.x < 15)
			{
				int forceAngle = Random.Range(-170, -10);
				float y = Mathf.Sin(forceAngle * Mathf.PI / 180f);
				float xz = Mathf.Cos(forceAngle * Mathf.PI / 180f);
				asteroid.transform.parent = transform.parent;
				asteroidRb.AddForce(new Vector3(xz, y, 0) * forceMultiplier, ForceMode.Impulse);
			}
			else if (asteroid.transform.localPosition.x >= 15)
			{
				int forceAngle = Random.Range(-170, -110);
				float y = Mathf.Sin(forceAngle * Mathf.PI / 180f);
				float xz = Mathf.Cos(forceAngle * Mathf.PI / 180f);
				asteroid.transform.parent = transform.parent;
				asteroidRb.AddForce(new Vector3(xz, y, 0) * forceMultiplier, ForceMode.Impulse);
			}
		}
		else if (platforms.consecutiveJumped >= 4 && platforms.consecutiveJumped < 8)
		{
			asteroid.transform.localPosition = new Vector3(Random.Range(30, 45), 20, Random.Range(-40, 40));
			if (asteroid.transform.localPosition.x >= 15)
			{
				int forceAngle = Random.Range(-170, -110);
				float y = Mathf.Sin(forceAngle * Mathf.PI / 180f);
				float xz = Mathf.Cos(forceAngle * Mathf.PI / 180f);
				asteroid.transform.parent = transform.parent;
				asteroidRb.AddForce(new Vector3(0, y, xz) * forceMultiplier, ForceMode.Impulse);
			}
			else if (asteroid.transform.localPosition.x < 15 && asteroid.transform.localPosition.x > -15)
			{
				int forceAngle = Random.Range(-170, -10);
				float y = Mathf.Sin(forceAngle * Mathf.PI / 180f);
				float xz = Mathf.Cos(forceAngle * Mathf.PI / 180f);
				asteroid.transform.parent = transform.parent;
				asteroidRb.AddForce(new Vector3(0, y, xz) * forceMultiplier, ForceMode.Impulse);
			}
			else if (asteroid.transform.localPosition.x <= -15)
			{
				int forceAngle = Random.Range(-80, -10);
				float y = Mathf.Sin(forceAngle * Mathf.PI / 180f);
				float xz = Mathf.Cos(forceAngle * Mathf.PI / 180f);
				asteroid.transform.parent = transform.parent;
				asteroidRb.AddForce(new Vector3(0, y, xz) * forceMultiplier, ForceMode.Impulse);
			}
		}
		else if (platforms.consecutiveJumped >= 8 && platforms.consecutiveJumped < 12)
		{
			asteroid.transform.localPosition = new Vector3(Random.Range(-40, 40), 20, Random.Range(-30, -45));
			if (asteroid.transform.localPosition.x <= -15)
			{
				int forceAngle = Random.Range(-80, -10);
				float y = Mathf.Sin(forceAngle * Mathf.PI / 180f);
				float xz = Mathf.Cos(forceAngle * Mathf.PI / 180f);
				asteroid.transform.parent = transform.parent;
				asteroidRb.AddForce(new Vector3(xz, y, 0) * forceMultiplier, ForceMode.Impulse);
			}
			else if (asteroid.transform.localPosition.x > -15 && asteroid.transform.localPosition.x < 15)
			{
				int forceAngle = Random.Range(-170, -10);
				float y = Mathf.Sin(forceAngle * Mathf.PI / 180f);
				float xz = Mathf.Cos(forceAngle * Mathf.PI / 180f);
				asteroid.transform.parent = transform.parent;
				asteroidRb.AddForce(new Vector3(xz, y, 0) * forceMultiplier, ForceMode.Impulse);
			}
			else if (asteroid.transform.localPosition.x >= 15)
			{
				int forceAngle = Random.Range(-170, -110);
				float y = Mathf.Sin(forceAngle * Mathf.PI / 180f);
				float xz = Mathf.Cos(forceAngle * Mathf.PI / 180f);
				asteroid.transform.parent = transform.parent;
				asteroidRb.AddForce(new Vector3(xz, y, 0) * forceMultiplier, ForceMode.Impulse);
			}
		}
		else if (platforms.consecutiveJumped >= 12 && platforms.consecutiveJumped < 16)
		{
			asteroid.transform.localPosition = new Vector3(Random.Range(30, 45), 20, Random.Range(-40, 40));
			if (asteroid.transform.localPosition.x >= 15)
			{
				int forceAngle = Random.Range(-170, -110);
				float y = Mathf.Sin(forceAngle * Mathf.PI / 180f);
				float xz = Mathf.Cos(forceAngle * Mathf.PI / 180f);
				asteroid.transform.parent = transform.parent;
				asteroidRb.AddForce(new Vector3(0, y, xz) * forceMultiplier, ForceMode.Impulse);
			}
			else if (asteroid.transform.localPosition.x < 15 && asteroid.transform.localPosition.x > -15)
			{
				int forceAngle = Random.Range(-170, -10);
				float y = Mathf.Sin(forceAngle * Mathf.PI / 180f);
				float xz = Mathf.Cos(forceAngle * Mathf.PI / 180f);
				asteroid.transform.parent = transform.parent;
				asteroidRb.AddForce(new Vector3(0, y, xz) * forceMultiplier, ForceMode.Impulse);
			}
			else if (asteroid.transform.localPosition.x <= -15)
			{
				int forceAngle = Random.Range(-80, -10);
				float y = Mathf.Sin(forceAngle * Mathf.PI / 180f);
				float xz = Mathf.Cos(forceAngle * Mathf.PI / 180f);
				asteroid.transform.parent = transform.parent;
				asteroidRb.AddForce(new Vector3(0, y, xz) * forceMultiplier, ForceMode.Impulse);
			}
		}
	}


	// Function to move the player.
	private void Move()
	{
		// Sets variables to the arrow key inputs
		float moveRightLeft = Input.GetAxis("Horizontal");
		float moveUpDown = Input.GetAxis("Vertical");
		//float moveRightLeft = (CrossPlatformInputManager.GetAxis("Horizontal"));
		//float moveUpDown = (CrossPlatformInputManager.GetAxis("Vertical"));


		// Sets the velocity of the player to moveSpeed times arrow key input (0 to 1 or -1)
		if (platforms.consecutiveJumped < 4)
		{
			rb.velocity = new Vector3(moveRightLeft * movingSpeed, rb.velocity.y, moveUpDown * movingSpeed);
		}
		else if (platforms.consecutiveJumped >= 4 && platforms.consecutiveJumped < 8)
		{
			rb.velocity = new Vector3(moveUpDown * movingSpeed, rb.velocity.y, -(moveRightLeft * movingSpeed));
		}
		else if (platforms.consecutiveJumped >= 8 && platforms.consecutiveJumped < 12)
		{
			rb.velocity = new Vector3(-(moveRightLeft * movingSpeed), rb.velocity.y, -(moveUpDown * movingSpeed));
		}
		else if (platforms.consecutiveJumped >= 12 && platforms.consecutiveJumped < 16)
		{
			rb.velocity = new Vector3(-(moveUpDown * movingSpeed), rb.velocity.y, moveRightLeft * movingSpeed);
		}
		if (platforms.consecutiveJumped == 16)
		{
			platforms.consecutiveJumped = 0;
		}
	}

	// Function to make the player jump
	public void Jump()
	{
		if (canJump)
		{
			canJump = false;
			velocity = rb.velocity;
			// Changes the vertical velocity of the player to jumpSpeed
			velocity.y = jumpSpeed;
			rb.velocity = velocity;

			mySound.PlayOneShot(bounceSounds[Random.Range(0, bounceSounds.Length)], 0.8f);
		}
	}

	public void OnPointerDown()
	{
		tapJumping = true;
	}

	public void OnPointerUp()
	{
		tapJumping = false;
	}

	public void Resurrect()
	{
		rb.useGravity = true;
		rb.isKinematic = false;
		//transform.position = platforms.platforms[0].transform.position + Vector3.up * 2;
		transform.eulerAngles = Vector3.zero;
		rb.freezeRotation = true;
		GetComponent<Renderer>().enabled = true;
		mainCamera.GetComponent<Camera>().beginRevolving = false;
		mainCamera.GetComponent<Camera>().deathStep = 0f;
		mainCamera.GetComponent<Camera>().setPositions = true;
		hooking = true;
		hookTimer = 0f;
		hookAngle = 0f;
		setHookEnd = true;
		setHookTarget = true;
		isResurrecting = true;
		foreach (Transform child in big.transform)
		{
			if (PlayerPrefs.GetInt(child.name) == 1 && !child.gameObject.GetComponent<Scroll>().isTrail)
			{
				child.GetComponent<Scroll>().EquipModel();
			}
		}
	}

	private void Hook()
	{
		if (setHookTarget)
		{
			if (platforms.consecutiveJumped < 4)
			{
				hookTarget = transform.position + Vector3.right;
				hookAngle = 90;
			}
			else if (platforms.consecutiveJumped >= 4 && platforms.consecutiveJumped < 8)
			{
				hookTarget = transform.position + Vector3.forward;
				hookAngle = 90;
			}
			else if (platforms.consecutiveJumped >= 8 && platforms.consecutiveJumped < 12)
			{
				hookTarget = transform.position + Vector3.left;
				hookAngle = 90;
			}
			else if (platforms.consecutiveJumped >= 12 && platforms.consecutiveJumped < 16)
			{
				hookTarget = transform.position + Vector3.back;
				hookAngle = 90;
			}
			setHookTarget = false;
		}
		if (hookTimer <= 3f)
		{ //SET hookTimer TO ZERO
			if (hookTimer <= 2f)
			{
				if (platforms.consecutiveJumped < 4)
				{
					float xz = (float)Mathf.Sin(hookAngle * Mathf.PI / 180f);
					float y = (float)Mathf.Cos(hookAngle * Mathf.PI / 180f);
					transform.position = new Vector3(hookTarget.x - xz, hookTarget.y + y, transform.position.z);
				}
				else if (platforms.consecutiveJumped >= 4 && platforms.consecutiveJumped < 8)
				{
					float xz = (float)Mathf.Sin(hookAngle * Mathf.PI / 180f);
					float y = (float)Mathf.Cos(hookAngle * Mathf.PI / 180f);
					transform.position = new Vector3(transform.position.x, hookTarget.y + y, hookTarget.z - xz);
				}
				else if (platforms.consecutiveJumped >= 8 && platforms.consecutiveJumped < 12)
				{
					float xz = (float)Mathf.Sin(hookAngle * Mathf.PI / 180f);
					float y = (float)Mathf.Cos(hookAngle * Mathf.PI / 180f);
					transform.position = new Vector3(hookTarget.x + xz, hookTarget.y + y, transform.position.z);
				}
				else if (platforms.consecutiveJumped >= 12 && platforms.consecutiveJumped < 16)
				{
					float xz = (float)Mathf.Sin(hookAngle * Mathf.PI / 180f);
					float y = (float)Mathf.Cos(hookAngle * Mathf.PI / 180f);
					transform.position = new Vector3(transform.position.x, hookTarget.y + y, hookTarget.z + xz);
				}
				hookAngle += 90 * Time.deltaTime; //SET TO ZERO
			}
			if (hookTimer >= 2f && hookTimer <= 3f)
			{
				if (setHookEnd)
				{
					hookEnd = transform.position;
					setHookEnd = false; //SET TO TRUE ONCE RESURRECTION IS COMPLETE
				}
				transform.position = Vector3.Lerp(hookEnd, platforms.platforms[0].transform.position + Vector3.up * 2, hookTimer - 2f);
			}
			hookTimer += Time.deltaTime;
		}
		else
		{
			rb.useGravity = true;
			rb.isKinematic = false;
			isResurrecting = false;
		}
	}
}