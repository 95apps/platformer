using UnityEngine;
using System.Collections;



public class Player : MonoBehaviour
{
    // Platforms empty
    public Platforms platforms;
    public DeathCube deathCube;
    public bool canJump = true;
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
    private Raycast Raycast;
    public AudioClip[] bounceSounds;
    private AudioSource mySound;
    private TrailRenderer trail;


    // Use this for initialization
    void Start()
    {
        lastFramePosition = transform.position;
        // Assigns rb to the RigidBody component of the player
        rb = GetComponent<Rigidbody>();
        // Stops forces from affecting player rotation
        rb.freezeRotation = true;
        // Line I got from the internet, makes it so that jumpSpeed is euqal to the amount of force required to jump up to jumpHeight
        jumpSpeed = Mathf.Sqrt(-2 * Physics.gravity.y *jumpHeight) + 0.1f;
        Raycast = GetComponent<Raycast>();
        mySound = GetComponent<AudioSource>();
        trail = GetComponent<TrailRenderer>();
    }

    // Update is called once per frame
    void Update()
    {
        
        // This if statement wakes the player so that even if the player is idle the collisions functions will run
        if (rb.IsSleeping())
        {
            rb.WakeUp();
        }
        trail.time += Time.deltaTime;

        

    }

    // Fixed update is called at consistant intervals(for example, every 0.1 seconds) instead of every frame, making the physics smoother.
    void FixedUpdate()
    {
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
            if (Input.GetKey(KeyCode.Space) && Raycast.onGround == true && canJump)
            {

                velocity = rb.velocity;
                // Changes the vertical velocity of the player to jumpSpeed
                velocity.y = jumpSpeed;
                rb.velocity = velocity;

                mySound.PlayOneShot(bounceSounds[Random.Range(0, bounceSounds.Length)], 0.8f);
            }
        }
    }
}