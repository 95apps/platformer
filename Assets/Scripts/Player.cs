using UnityEngine;
using UnityEngine.UI;
using System.Collections;



public class Player : MonoBehaviour
{
    // Platforms empty
    public Platforms platforms;
    public DeathCube deathCube;
    // Most of these variables are pretty self explanatory
    public float movingSpeed = 5.0f;
    public float jumpHeight;    // Don't change jumpSpeed, jumpHeight is the only one that should be changed for different jump heights
    private float jumpSpeed;
    private float distanceTravelled;
    // rb is the RigidBody component of the player
    private Rigidbody rb;
    // This velocity variable is used in the jump function
    private Vector3 velocity;
    private Vector3 lastFramePosition;
    private Vector3 firstPlatPos;
    private Raycast Raycast;
    public AudioClip[] bounceSounds;
    private AudioSource mySound;
    private TrailRenderer trail;
    public Skydome skydome;
    public GameObject mainCamera;
    public float trailLength;
    



    // Use this for initialization
    void Start()
    {
        lastFramePosition = transform.position;
        // Assigns rb to the RigidBody component of the player
        rb = GetComponent<Rigidbody>();
        // Stops forces from affecting player rotation
       
        // Line I got from the internet, makes it so that jumpSpeed is euqal to the amount of force required to jump up to jumpHeight
        jumpSpeed = Mathf.Sqrt(-2 * Physics.gravity.y *jumpHeight) + 0.1f;
        Raycast = GetComponent<Raycast>();
        mySound = GetComponent<AudioSource>();
        trail = GetComponent<TrailRenderer>();
        skydome = GameObject.Find("SkyDome").GetComponent<Skydome>();
        skydome.SetPlayer(gameObject);
        rb.freezeRotation = true;

    }

    // Update is called once per frame
    void Update()
    {
        trailLength += Vector3.Distance(lastFramePosition, transform.position)/3;
        lastFramePosition = transform.position;
        trail.time += Time.deltaTime;
        Move();
        Jump();
       
        
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
        if (rb.velocity.y == 0)
        {
            // If the spacebar is pressed...
            if (Input.GetKey(KeyCode.Space) && Raycast.onGround == true)
            {
                velocity = rb.velocity;
                // Changes the vertical velocity of the player to jumpSpeed
                velocity.y = jumpSpeed;
                rb.velocity = velocity;
                
                mySound.PlayOneShot(bounceSounds[Random.Range(0, bounceSounds.Length)], 0.8f);
            }

            

        }
    }

    public void Resurrect()
    {
        rb.useGravity = true;
        rb.isKinematic = false;
        transform.position = platforms.platforms[0].transform.position + Vector3.up * 2;
        transform.eulerAngles = Vector3.zero;
        rb.freezeRotation = true;
        GetComponent<Renderer>().enabled = true;
        mainCamera.GetComponent<Camera>().beginRevolving = false;
        mainCamera.GetComponent<Camera>().deathStep = 0f;
        mainCamera.GetComponent<Camera>().setPositions = true;
    }
}