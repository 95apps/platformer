using UnityEngine;
using System.Collections;
using System;

public class Platform : MonoBehaviour
{
    // countDown variable that will change over time once the player has landed on top of the platform
    private float countDown;
    // countDown variable to be used as reference by the code as the beginning of the countDown time, this is set to the countdown variable of the "Platforms" empty
    private float initialCountDown;
    // The renderer component of the platform used to change the color
    private Renderer platRender;

    // Boolean variable to dictate whether the platform should start to disppear or not
    public bool startDisappear = false;

    // The variable assigned to the "Platforms" empty in unity
    public Platforms platforms;

    // This initialize funciton is called by the "platforms" empty when Instanciating a new platform 
    //in order to pass the empty into the platform's "platforms" variable
    public void Initialize(Platforms plats){
        platforms = plats;
    }

    // Use this for initialization
    void Start()
    {
        // Defines the platform renderer
        platRender = GetComponent<Renderer>();
        // Defines initialCountDown as the countDown on the "Platforms" empty, set in unity
        initialCountDown = platforms.countDown;
        countDown = initialCountDown;
    }

    // Update is called once per frame
    void Update()
    {
        // If the player has landed on the platform, make it start disappearing
        if (startDisappear)
        {
            // Lower countDown by the time it took to complete the last frame so that after 1 second worth of frames, countdown will have gone down by 1
            countDown -= Time.deltaTime;
            DestroyPlatform();
        }
    }

    // This funciton changes the colour of and destroys the platform
    private void DestroyPlatform()
    {
        // Change the colour of the platform by linearly interpoplating between red and white by countDown / initialCountDown which will always return a number between 0 and 1
        platRender.material.color = Color32.Lerp(Color.red, Color.white, (countDown / initialCountDown));
        // If countDown reaches 0, destroy the platform
        if (countDown <= 0f)
        {
            Destroy(this.gameObject);
        }
    }

    void OnCollisionEnter(Collision col)
    {
        // If the object that collided with this is the player (Which it always is, but its here for safety)...
        if (col.gameObject.tag == "Player")
        {

            // deltaY is the difference between the player's height and the platform's height
            float deltaY = col.gameObject.transform.position.y - transform.position.y;
            // If deltaY is greater than or equal to 0.9 (margin of error, there's probably a better way to do this) and less than or equal to 1 then make the platform start disappearing
            // We need this because when the player lands on the platform it doesn't instantly level out, it goes below for a few frames because of momentum
            if ((deltaY >= 0.9f) && (deltaY <= 1f))
            {
                // If the countDown equals initialCountDown (which it will, only the first time that the player touches the platform) then spawn another platform
                if (countDown == initialCountDown)
                {
                    platforms.consecutiveJumped++;
		            if(Array.IndexOf(new [] {0, 4, 8, 12}, platforms.consecutiveJumped) > -1){
			            platforms.rotationAngleMultiplier++;
		            }
                    platforms.score++;
                    print(platforms.score);
                    platforms.SpawnPlatform();
                }
                startDisappear = true;
            }
        }
    }
}