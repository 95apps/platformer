using UnityEngine;
using UnityEngine.UI;
using System.Collections;



public class Player : MonoBehaviour
{
    // Platforms empty
    public Platforms platforms;
    public DeathCube deathCube;
    public bool isResurrecting = false;
    public bool canJump = true;
    // Most of these variables are pretty self explanatory
    public float movingSpeed = 5.0f;
    public float jumpHeight;    // Don't change jumpSpeed, jumpHeight is the only one that should be changed for different jump heights
    private float jumpSpeed;
    private float distanceTravelled;
    private float hookTimer;
    private float hookAngle;
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
    public float flipStep;
    public float trailLength;
    //public Animation anim;
    private bool hooking = false;
    private bool setHookEnd = false;
    private bool setHookTarget = false;
    private bool canFlip = false;


    // Use this for initialization
    void Start()
    {
        //anim = GetComponent<Animation>();
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

        foreach(Transform child in big.transform)
        {
            if(PlayerPrefs.GetInt(child.name) == 1)
            {
                child.GetComponent<Scroll>().EquipModel();
            }
        }
    }

    // Update is called once per frame
    void Update()
    {
        trailLength += Vector3.Distance(lastFramePosition, transform.position)/3;
        lastFramePosition = transform.position;
        trail.time += Time.deltaTime;
        Move();
        Jump();
        if (hooking)
        {
            Hook();
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
    
    // Function to move the player.
    private void Move()
    {
        // Sets variables to the arrow key inputs
        float moveRightLeft = Input.GetAxis("Horizontal");
        float moveUpDown = Input.GetAxis("Vertical");

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
    private void Jump()
    {
        // If the player is on the ground (has no vertical velocity)...
            // If the spacebar is pressed...
        if (Input.GetKey(KeyCode.Space) && canJump)
        {
            canJump = false;
            velocity = rb.velocity;
            // Changes the vertical velocity of the player to jumpSpeed
            velocity.y = jumpSpeed;
            rb.velocity = velocity;
            
            mySound.PlayOneShot(bounceSounds[Random.Range(0, bounceSounds.Length)], 0.8f);
        }
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