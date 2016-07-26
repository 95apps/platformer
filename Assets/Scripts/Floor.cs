using UnityEngine;
using System.Collections;

public class Floor : MonoBehaviour {

	// countDown variable that will tell how long it will take for the floor to disappear
	public float initialCountDown;

	private float countDown;

	// This is the platform object used to dictate when the floor should begin to disappear
	public Platform platform;

	// The renderer component of the platform used to change the color
	private Renderer platRender;

	// Use this for initialization
	void Start () {
        // Defines the platform renderer
        platRender = GetComponent<Renderer>();
		countDown = initialCountDown;
	}
	
	// Update is called once per frame
	void Update () {
		if(platform.startDisappear){
			countDown -= Time.deltaTime;
			DestroyGround();
		}
	}

    // This funciton changes the colour of and destroys the platform
    private void DestroyGround()
    {
        // Change the colour of the platform by linearly interpoplating between red and the original color by countDown / initialCountDown which will always return a number between 0 and 1
		Color currentColor = platRender.material.color;
        platRender.material.color = Color32.Lerp(Color.red, currentColor, (countDown / initialCountDown));
        // If countDown reaches 0, destroy the platform
        if (countDown <= 0f)
        {
            Destroy(this.gameObject);
        }
    }
}
