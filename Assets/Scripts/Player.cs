using UnityEngine;
using System.Collections;

public class Player : MonoBehaviour
{
	// Most of these variables are pretty self explanatory
	// rb is the RigidBody component of the player
	private Rigidbody rb;
	public float movingSpeed = 5.0f;
	// Don't change jumpSpeed, jumpHeight is the only one that should be changed for different jump heights
	private float jumpSpeed;
	public int jumpHeight;
	// This velocity variable is used in the jump function
	private Vector3 velocity;
	public Platforms platforms;
	public int consecutiveJumped;
	private Raycast Raycast;



	// Use this for initialization
	void Start()
	{
		// Assigns rb to the RigidBody component of the player
		rb = GetComponent<Rigidbody>();
		Raycast = GetComponent<Raycast> ();
		// Stops forces from affecting player rotation
		rb.freezeRotation = true;
		// Line I got from the internet, makes it so that jumpSpeed is euqal to the amount of force required to jump up to jumpHeight
		jumpSpeed = Mathf.Sqrt(-2 * Physics.gravity.y *  jumpHeight) + 0.1f;
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
	private void Move ()
	{
		// Sets variables to the arrow key inputs
		float moveRightLeft = Input.GetAxis ("Horizontal");
		float moveUpDown = Input.GetAxis ("Vertical");
		// Sets the velocity of the player to moveSpeed times arrow key input (0 to 1 or -1)



			rb.velocity = new Vector3 (moveRightLeft * movingSpeed, rb.velocity.y, moveUpDown *  movingSpeed);
	}






	// Function to make the player jump
	private void Jump()
	{
		// If the player is on the ground (has no vertical velocity)...
		if (rb.velocity.y == 0)
		{
			// If the spacebar is pressed...
			if (Input.GetKeyDown(KeyCode.Space) && Raycast.onGround == true)
			{
				velocity = rb.velocity;
				// Changes the vertical velocity of the player to jumpSpeed
				velocity.y = jumpSpeed;
				rb.velocity = velocity;
			}
		}


	}
}