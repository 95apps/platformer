using UnityEngine;
using System.Collections;


public class Floor : MonoBehaviour {

    public DeathCube deathCube;

    // countDown variable that will tell how long it will take for the floor to disappear
    public float initialCountDown;

	private float countDown;

	// This is the platform object used to dictate when the floor should begin to disappear
	public Platform platform;
    public Platforms platforms;
    private Rigidbody rb;
    private BoxCollider bc;
    
    

	// Use this for initialization
	void Start () {
        // Defines the platform renderer
		countDown = initialCountDown;
        rb = GetComponent<Rigidbody>();
        bc = GetComponent<BoxCollider>();
	}
	
	// Update is called once per frame
	void Update () {
		if(platform.startDisappear){
			DestroyGround();
		}

        if(transform.position.y < -15)
        {
            Destroy(gameObject);
        }

	}

    // This funciton changes the colour of and destroys the platform
    private void DestroyGround()
    {
            Destroy(bc);
            rb.useGravity = true;
            rb.isKinematic = false;
    }
}
