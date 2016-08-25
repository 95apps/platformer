using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System;

public class Platform : MonoBehaviour
{
    // countDown variable that will change over time once the player has landed on top of the platform
    public float countDown;
    // countDown variable to be used as reference by the code as the beginning of the countDown time, this is set to the countdown variable of the "Platforms" empty
    private float initialCountDown =2;
    private float audioPitch;
    private float trafficTimer;
    public int direction;
    private int platsSpawned;
    private int platsPlaced;
    private int colorCounter;

    // The renderer component of the platform used to change the color
    private Renderer platRender;
    private Rigidbody rb;
    private bool playSound = true;
    private bool startMoving = false;
    private bool setIndicatorPosition = true;
    private bool highScorePlaying = false;
    private bool trafficLight = false;
    private bool trafficDestroy = false;
    private AudioSource src;

    public ParticleSystem ps;

    private Vector3 xPos1;
    private Vector3 xPos2;
    private Vector3 zPos1;
    private Vector3 zPos2;
    private Vector3 boxColDimensions;

    // Boolean variable to dictate whether the platform should start to disppear or not
    public bool startDisappear = false;

    // The variable assigned to the "Platforms" empty in unity
    public Platforms platforms;
    public int consecutivePlaced;

    public GameObject scoreText;
    public GameObject leftIndicator;
    public GameObject rightIndicator;

    public AudioClip[] fallSounds;

    public Renderer top;
    public Renderer bot;

    private ParticleSystem.EmissionModule em;
    float highscore;

    public Clouds clouds;
    public GameObject swiper;
    public GameObject bulletsGroup;
    public GameObject coin;
    public Color32[] trafficColors;
    public Player player;

    // This initialize funciton is called by the "platforms" empty when Instanciating a new platform 
    //in order to pass the empty into the platform's "platforms" variable
    public void Initialize(Platforms plats, int dir, int consecutiveSpawned, int consecutivePlaced, Clouds clouds, float pitch, Player player)
    {
        this.player = player;
        this.clouds = clouds;
        platforms = plats;
        audioPitch = pitch;
        if(pitch >= 4f){
            platforms.pitch = 0.5f;
            audioPitch = 4f;
        }
        direction = dir;
        platsSpawned = consecutiveSpawned;
        platsPlaced = consecutivePlaced;
        if (UnityEngine.Random.Range(0, 8) == 1 && !startMoving && platsSpawned >= 8 && platsSpawned <= 31)
        {
            swiper.SetActive(true);
        }
        else if (UnityEngine.Random.Range(0, 6) == 1 && !startMoving && platsSpawned >= 32 && ! swiper.activeInHierarchy)
        {
            swiper.SetActive(true);
        }

        if (UnityEngine.Random.Range(0, 6) == 1 && !swiper.activeInHierarchy && platsSpawned >= 24)
        {
            bulletsGroup.SetActive(true);
        }

        if(UnityEngine.Random.Range(0, 8) == 1 && !swiper.activeInHierarchy && !bulletsGroup.activeInHierarchy){
            trafficLight = true;
        }

        if (platsSpawned % 8 == 0)
        {
            if (platforms.countDown >= 0.5f)
            {
                platforms.countDown -= 0.1f;
            }
        }

        initialCountDown = platforms.countDown;
        countDown = initialCountDown;

        if (platsSpawned >= 8)
        {
            int randomNumber = UnityEngine.Random.Range(-1, 2);
            if (randomNumber == platsPlaced)
            {
                startMoving = true;
            }
            top.material = platforms.mats[0];
            bot.material = platforms.mats[0];
        }

        if (platsSpawned >= 16)
        {
            top.material = platforms.mats[1];
            bot.material = platforms.mats[1];
        }

        if (platsSpawned >= 24)
        {
            top.material = platforms.mats[2];
            bot.material = platforms.mats[2];
        }

        if (platsSpawned >= 32)
        {
            top.material = platforms.mats[3];
            bot.material = platforms.mats[3];
        }

        if (platsSpawned >= 40)
        {
            top.material = platforms.mats[4];
            bot.material = platforms.mats[4];
        }

        if (platsSpawned >= 48)
        {
            top.material = platforms.mats[5];
            bot.material = platforms.mats[5];
        }

        if (platsSpawned >= 56)
        {
            top.material = platforms.mats[6];
            bot.material = platforms.mats[6];
        }

        if (platsSpawned >= 64)
        {
            top.material = platforms.mats[7];
            bot.material = platforms.mats[7];
        }

        if (platsSpawned >= 72)
        {
            top.material = platforms.mats[8];
            bot.material = platforms.mats[8];
        }

        if (platsSpawned >= 80)
        {
            top.material = platforms.mats[9];
            bot.material = platforms.mats[9];
        }

        if (platsSpawned >= 88)
        {
            top.material = platforms.mats[10];
            bot.material = platforms.mats[10];
        }

        if (platsSpawned >= 96)
        {
            top.material = platforms.mats[11];
            bot.material = platforms.mats[11];
        }

        if (platsSpawned >= 104)
        {
            top.material = platforms.mats[12];
            bot.material = platforms.mats[12];
        }

        if (platsSpawned >= 112)
        {
            top.material = platforms.mats[13];
            bot.material = platforms.mats[13];
        }

        if (platsSpawned >= 120)
        {
            top.material = platforms.mats[14];
            bot.material = platforms.mats[14];
        }

        if (platsSpawned >= 128)
        {
            top.material = platforms.mats[15];
            bot.material = platforms.mats[15];
        }

        if (platsSpawned >= 136)
        {
            top.material = platforms.mats[16];
            bot.material = platforms.mats[16];
        }

        if (platsSpawned >= 144)
        {
            top.material = platforms.mats[16];
            bot.material = platforms.mats[16];
        }
    }

    // Use this for initialization
    void Start()
    {
        colorCounter = UnityEngine.Random.Range(0, 2);
        boxColDimensions = new Vector3(transform.localScale.x * 1.1f, transform.localScale.y, transform.localScale.z * 1.1f);
        xPos1 = new Vector3(transform.position.x + 3f, transform.position.y, transform.position.z);
        xPos2 = new Vector3(transform.position.x - 3f, transform.position.y, transform.position.z);
        zPos1 = new Vector3(transform.position.x, transform.position.y, transform.position.z + 3f);
        zPos2 = new Vector3(transform.position.x, transform.position.y, transform.position.z - 3f);
        // Defines the platform renderer
        platRender = GetComponent<Renderer>();
        // Defines initialCountDown as the countDown on the "Platforms" empty, set in unity
      
        rb = GetComponent<Rigidbody>();
        src = GetComponent<AudioSource>();

        em = ps.emission;
        em.enabled = false;

        highscore = PlayerPrefs.GetFloat("Highscore");
    }

    // Update is called once per frame
    void Update()
    {
        if(trafficLight){
            TrafficLight();
        }
        if(highScorePlaying && !src.isPlaying){
            src.pitch = audioPitch;
        }
        // If the player has landed on the platform, make it start disappearing
        if (startDisappear)
        {
            // Lower countDown by the time it took to complete the last frame so that after 1 second worth of frames, countdown will have gone down by 1
            countDown -= Time.deltaTime;
            DestroyPlatform();
        }
        if (startMoving)
        {
            Move();
        }

        if (platsSpawned == PlayerPrefs.GetFloat("Highscore"))
        {
            top.material = platforms.mats[16];
            bot.material = platforms.mats[16];

            em.enabled = true;
        }
    }

    private void Move()
    {
        if(setIndicatorPosition && (platsSpawned >= 8 && platsSpawned <= 24)){
            leftIndicator.SetActive(true);
            rightIndicator.SetActive(true);
            switch(direction){
                case 0:
                    leftIndicator.transform.position = new Vector3(transform.position.x - 3.9075f, transform.position.y, transform.position.z);
                    rightIndicator.transform.position = new Vector3(transform.position.x + 3.9075f, transform.position.y, transform.position.z);
                    break;
                case 1:
                    leftIndicator.transform.position = new Vector3(transform.position.x, transform.position.y, transform.position.z - 3.9075f);
                    rightIndicator.transform.position = new Vector3(transform.position.x, transform.position.y, transform.position.z + 3.9075f);
                    break;
                case 2:
                    leftIndicator.transform.position = new Vector3(transform.position.x + 3.9075f, transform.position.y, transform.position.z);
                    rightIndicator.transform.position = new Vector3(transform.position.x - 3.9075f, transform.position.y, transform.position.z);
                    break;
                case 3:
                    leftIndicator.transform.position = new Vector3(transform.position.x, transform.position.y, transform.position.z + 3.9075f);
                    rightIndicator.transform.position = new Vector3(transform.position.x, transform.position.y, transform.position.z - 3.9075f);
                    break;
                default:
                    Debug.Log("You broke the game");
                    break;
            }
            leftIndicator.transform.parent = transform.parent;
            rightIndicator.transform.parent = transform.parent;
            setIndicatorPosition = false;
        }
        switch (direction)
        {
            case 0:
                transform.position = Vector3.Lerp(xPos1, xPos2, Mathf.PingPong(Time.time * platforms.platSpeed, 1.0f));
                break;
            case 1:
                transform.position = Vector3.Lerp(zPos1, zPos2, Mathf.PingPong(Time.time * platforms.platSpeed, 1.0f));
                break;
            case 2:
                transform.position = Vector3.Lerp(xPos1, xPos2, Mathf.PingPong(Time.time * platforms.platSpeed, 1.0f));
                break;
            case 3:
                transform.position = Vector3.Lerp(zPos1, zPos2, Mathf.PingPong(Time.time * platforms.platSpeed, 1.0f));
                break;
            default:
                Debug.Log("You broke the game");
                break;
        }
    }

    private void TrafficLight(){
        platRender.material.color = trafficColors[colorCounter];
        trafficTimer += Time.deltaTime;
        if(trafficTimer >= 1f){
            trafficTimer = 0f;
            colorCounter ++;
            if(colorCounter > 2){
                colorCounter = 0;
            }
        }
        if(colorCounter == 2){
            countDown = 0;
        } else {
            countDown = initialCountDown;
        }
    }

    // This funciton changes the colour of and destroys the platform
    private void DestroyPlatform()
    {
        // Change the colour of the platform by linearly interpoplating between its starting color and white by countDown / initialCountDown which will always return a number between 0 and 1
        if(trafficDestroy){
            platRender.material.color = Color32.Lerp(trafficColors[colorCounter], Color.white, (countDown / initialCountDown));
        } else{
            platRender.material.color = Color32.Lerp(Color.red, Color.white, (countDown / initialCountDown));
        }
        // If countDown reaches 0, drop the platform
        if (countDown < 0f)
        {
            startMoving = false;
            rb.isKinematic = false;
            rb.useGravity = true;

            if (transform.position.y < -20)
            {
                Destroy(leftIndicator);
                Destroy(rightIndicator);
                Destroy(this.gameObject);
            }

            if (playSound)
            {
                src.PlayOneShot(fallSounds[0], 0.8f);
                playSound = false;
            }
        }
    }

    void OnCollisionStay(Collision col)
    {
        // If the object that collided with this is the player (Which it always is, but its here for safety)...
        if (col.gameObject.tag == "Player")
        {
            if(trafficLight){
                if(colorCounter == 2){
                    player.canJump = false;
                    player.GetComponent<Rigidbody>().constraints = RigidbodyConstraints.FreezePosition;
                }
                trafficDestroy = true;
                trafficLight = false;
            }
            // deltas are the differences between the player's xyz and the platform's xys axes
            float deltaX = col.gameObject.transform.position.x - transform.position.x;
            float deltaY = col.gameObject.transform.position.y - transform.position.y;
            float deltaZ = col.gameObject.transform.position.z - transform.position.z;
            Vector3 target = new Vector3(boxColDimensions.x / 2 + 0.5f, 0, boxColDimensions.z / 2 + 0.5f);
            // If deltaY is greater than or equal to 0.9 (margin of error, there's probably a better way to do this) and less than or equal to 1 then make the platform start disappearing
            // We need this because when the player lands on the platform it doesn't instantly level out, it goes below for a few frames because of momentum
            if ((deltaY >= 0.9f) && Math.Abs(deltaX) < target.x && Math.Abs(deltaZ) < target.z)
            {
                // If the countDown equals initialCountDown (which it will, only the first time that the player touches the platform) then spawn another platform
                if (countDown == initialCountDown)
                {
                    countDown -= Time.deltaTime;
                    if(platforms.score % 2 == 0)
                    {
                        clouds.SpawnClouds(); //rekt
                        clouds.SpawnClouds();
                        clouds.SpawnClouds();
                        clouds.SpawnClouds();
                        clouds.SpawnClouds();
                    }

                    platforms.consecutiveJumped++;
                    if (platforms.consecutiveJumped % 4 == 0)
                    {
                        platforms.rotationAngleMultiplier++;
                    }
                    platforms.score++;
                    print(platforms.score);

                    if (PlayerPrefs.GetFloat("Highscore") < platforms.score)
                    {

                        PlayerPrefs.SetFloat("Highscore", platforms.score);

                    }

                    if (platforms.score == highscore)
                    {
                        src.pitch = 1f;
                        src.PlayOneShot(fallSounds[fallSounds.Length - 1], 0.8f);
                        highScorePlaying = true;
                    }

                    platforms.SpawnPlatform();
                } else if(trafficDestroy){
                    player.GetComponent<Rigidbody>().constraints = RigidbodyConstraints.None;
                }
                startDisappear = true;
            }
        }
    }
}