using UnityEngine;
using System.Collections;

public class Player : MonoBehaviour
{
    // Platforms empty
    public Platforms platforms;
    // Most of these variables are pretty self explanatory
    public float movingSpeed = 5.0f;
    public int jumpHeight;
    // Don't change jumpSpeed, jumpHeight is the only one that should be changed for different jump heights
    private float jumpSpeed;
    // rb is the RigidBody component of the player
    private Rigidbody rb;
    // This velocity variable is used in the jump function
    private Vector3 velocity;

    // Use this for initialization
    void Start()
    {
        // Assigns rb to the RigidBody component of the player
        rb = GetComponent<Rigidbody>();
        // Stops forces from affecting player rotation
        rb.freezeRotation = true;
        // Line I got from the internet, makes it so that jumpSpeed is euqal to the amount of force required to jump up to jumpHeight
        jumpSpeed = Mathf.Sqrt(-2 * Physics.gravity.y * jumpHeight) + 0.1f;
    }

    // Update is called once per frame
    void Update()
    {
        // This if statement wakes the player so that even if the player is idle the collisions functions will run
        if (rb.IsSleeping())
        {
            rb.WakeUp();
        }
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
        
        if(platforms.consecutiveJumped < 4){
            rb.velocity = new Vector3(moveRightLeft * movingSpeed, rb.velocity.y, moveUpDown * movingSpeed);
        } else if(platforms.consecutiveJumped >= 4 && platforms.consecutiveJumped <8){
            rb.velocity = new Vector3(moveUpDown * movingSpeed, rb.velocity.y, -(moveRightLeft * movingSpeed));
        } else if(platforms.consecutiveJumped >= 8 && platforms.consecutiveJumped <12){
            rb.velocity = new Vector3(-(moveRightLeft * movingSpeed), rb.velocity.y, -(moveUpDown * movingSpeed));
        } else if(platforms.consecutiveJumped >= 12 && platforms.consecutiveJumped <16){
            rb.velocity = new Vector3(-(moveUpDown * movingSpeed), rb.velocity.y, moveUpDown * movingSpeed);
        }
    }

    // Function to make the player jump
    private void Jump()
    {
        // If the player is on the ground (has no vertical velocity)...
        if (rb.velocity.y == 0)
        {
            // If the spacebar is pressed...
            if (Input.GetKeyDown(KeyCode.Space))
            {
                velocity = rb.velocity;
                // Changes the vertical velocity of the player to jumpSpeed
                velocity.y = jumpSpeed;
                rb.velocity = velocity;
            }
        }
    }
}
