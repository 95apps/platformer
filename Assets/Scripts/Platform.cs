using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System;

public class Platform : MonoBehaviour
{
    // countDown variable that will change over time once the player has landed on top of the platform
    public float countDown;
    // countDown variable to be used as reference by the code as the beginning of the countDown time, this is set to the countdown variable of the "Platforms" empty
    private float initialCountDown = 2.2f;
    private float audioPitch;
	public float trafficTimer;
    public int direction;
    public int platsSpawned;
    private int platsPlaced;
	public int colorCounter;
    public GameObject FloorCanvas;
    // The renderer component of the platform used to change the color
    private Renderer platRender;
    private Rigidbody rb;
    private bool playSound = true;
    private bool startMoving = false;
    private bool setIndicatorPosition = true;
    private bool highScorePlaying = false;
	public bool trafficLight = false;
    private bool trafficDestroy = false;
    private AudioSource src;

    public ParticleSystem ps;

    private Vector3 xPos1;
    private Vector3 xPos2;
    private Vector3 yPos1;
    private Vector3 yPos2;
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
    public Color32 fallColor;
    public Player player;
    public GameObject arrows;
    public LevelUp levelUpText;
    private float bobStep;
    private bool toBob = true;

    // This initialize funciton is called by the "platforms" empty when Instanciating a new platform 
    //in order to pass the empty into the platform's "platforms" variable
    public void Initialize(Platforms plats, int dir, int consecutiveSpawned, int consecutivePlaced, Clouds clouds, float pitch, Player player, LevelUp levelUpText)
    {
        this.levelUpText = levelUpText;
        this.player = player;
        this.clouds = clouds;
        platforms = plats;
        audioPitch = pitch;
        if (pitch >= 4f)
        {
            platforms.pitch = 0.5f;
            audioPitch = 4f;
        }
        direction = dir;
        platsSpawned = consecutiveSpawned;
        platsPlaced = consecutivePlaced;



        if (platsSpawned % 8 == 0)
        {
            if (platforms.countDown >= 1.5f)
            {
                platforms.countDown -= 0.1f;
            }
        }

        if (consecutivePlaced == 3)
        {
            arrows.SetActive(true);
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

        if (UnityEngine.Random.Range(0, 8) == 1 && !startMoving && platsSpawned >= 8 && platsSpawned <= 31 && platforms.swiperCounter <= 1)
        {
            swiper.SetActive(true);
            platforms.swiperCounter++;
        }
        else if (UnityEngine.Random.Range(0, 6) == 1 && !startMoving && platsSpawned >= 32 && !swiper.activeInHierarchy && platforms.swiperCounter <= 1)
        {
            swiper.SetActive(true);
            platforms.swiperCounter++;
        }
        else
        {
            platforms.swiperCounter = 0;
        }

        if (UnityEngine.Random.Range(0, 6) == 1 && !swiper.activeInHierarchy && platsSpawned >= 24)
        {
            bulletsGroup.SetActive(true);
        }

        if (UnityEngine.Random.Range(0, 8) == 1 && !swiper.activeInHierarchy && !bulletsGroup.activeInHierarchy)
        {
            trafficLight = true;
        }
    }

    // Use this for initialization
    void Start()
    {
        bobStep = UnityEngine.Random.Range(0f, 1f);
        colorCounter = UnityEngine.Random.Range(0, 2);
        boxColDimensions = new Vector3(transform.localScale.x * 1.1f, transform.localScale.y, transform.localScale.z * 1.1f);
        xPos1 = new Vector3(transform.position.x + 3f, transform.position.y, transform.position.z);
        xPos2 = new Vector3(transform.position.x - 3f, transform.position.y, transform.position.z);
        zPos1 = new Vector3(transform.position.x, transform.position.y, transform.position.z + 3f);
        zPos2 = new Vector3(transform.position.x, transform.position.y, transform.position.z - 3f);
        yPos1 = new Vector3(transform.position.x, transform.position.y + UnityEngine.Random.Range(0, 0.3f), transform.position.z);
        yPos2 = new Vector3(transform.position.x, transform.position.y + UnityEngine.Random.Range(0, -0.3f), transform.position.z);
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

    public static float Hermite(float start, float end, float value)
    {
        return Mathf.Lerp(start, end, value * value * (3.0f - 2.0f * value));
    }


    void Update()
    {
        if (toBob == true)
        {
            transform.position = Vector3.Lerp(yPos1, yPos2, Hermite(0, 1, Mathf.PingPong(bobStep, 1)));
            bobStep += Time.deltaTime;

        }



		if (trafficLight) {
			TrafficLight ();

		} 
        if (highScorePlaying && !src.isPlaying)
        {
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
        if (setIndicatorPosition && (platsSpawned >= 8 && platsSpawned <= 24))
        {
            leftIndicator.SetActive(true);
            rightIndicator.SetActive(true);
            switch (direction)
            {
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

	public void TrafficLight()
    {
        platRender.material.color = trafficColors[colorCounter];
        trafficTimer += Time.deltaTime;

        float limit;
        if (colorCounter == 0)
        {
            limit = 2f;
        }
        else
        {
            limit = 1f;
        }

        if (trafficTimer >= limit)
        {
            trafficTimer = 0f;
            colorCounter++;
            if (colorCounter > 2)
            {
                colorCounter = 0;
            }
        }
        if (colorCounter == 2)
        {
            countDown = 0;
            gameObject.layer = 2;
        }
        else
        {
            countDown = initialCountDown;
            gameObject.layer = 0;
        }
    }

    // This funciton changes the colour of and destroys the platform
    private void DestroyPlatform()
    {
        // Change the colour of the platform by linearly interpoplating between its starting color and white by countDown / initialCountDown which will always return a number between 0 and 1
        if (trafficDestroy)
        {
            platRender.material.color = Color32.Lerp(fallColor, trafficColors[colorCounter], (countDown / initialCountDown));
        }
        else
        {
            platRender.material.color = Color32.Lerp(fallColor, Color.white, (countDown / initialCountDown));
        }
        // If countDown reaches 0, drop the platform
        if (countDown < 0f)
        {
            if (startMoving)
            {
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
            startMoving = false;
            toBob = false;
            rb.useGravity = true;
            rb.isKinematic = false;

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

    public void NotTraffic()
    {
        colorCounter = 0;
        trafficTimer = 0f;
        TrafficLight();
        trafficLight = false;
    }

    void OnTriggerEnter(Collider col)
    {
        // If the object that collided with this is the player (Which it always is, but its here for safety)...
        if (col.gameObject.tag == "Player" && !player.isResurrecting)
        {

            if (platforms.platforms.IndexOf(gameObject) > 0)
            {
                for (int i = 0; i < platforms.platforms.IndexOf(gameObject); i++)
                {
                    platforms.platforms[0].GetComponent<Platform>().OnTriggerEnter(player.GetComponent<Collider>());
                }
            }

            if (colorCounter != 2)
            {
                player.canJump = true;
                //player.transform.eulerAngles = Vector3.zero;
                player.flipStep = 0f;
            }

            if (trafficLight)
            {
                if (colorCounter == 2)
                {
                    platforms.platforms.Remove(gameObject);
                    platforms.consecutiveJumped++;
                    if (platforms.consecutiveJumped % 4 == 0)
                    {
                        platforms.rotationAngleMultiplier++;
                    }
                }
                trafficDestroy = true;
                trafficLight = false;
            }

            // If the countDown equals initialCountDown (which it will, only the first time that the player touches the platform) then spawn another platform
            if (countDown == initialCountDown)
            {

                if (player.isSpawnTrail)
                {
                    player.GetComponent<TrailRenderer>().colorGradient = player.playingTrailGradient;
                    player.isSpawnTrail = false;
                }
                countDown -= Time.deltaTime;
                if (platforms.score % 4 == 0 && platforms.score <= 60)
                {
                    clouds.SpawnClouds(); 

                }

                platforms.consecutiveJumped++;
                if (platforms.consecutiveJumped % 4 == 0)
                {
                    platforms.rotationAngleMultiplier++;
                }
                platforms.score++;
                print(platforms.score);

                if (platforms.score % 16 == 0 && platforms.score != 0)
                {
                    player.currentLevel++;
                    player.levelingUp = true;
                    levelUpText.UpLevel();
                    Debug.Log(platforms.score);
                }

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

                if (platforms.score == 0)
                {
                    FloorCanvas.SetActive(false);
                }

                platforms.SpawnPlatform();
                platforms.platforms.Remove(gameObject);
            }
            else if (trafficDestroy)
            {
                player.GetComponent<Rigidbody>().constraints = RigidbodyConstraints.FreezeRotation;
            }
            startDisappear = true;
        }
    }

    void OnTriggerExit(Collider col)
    {
        if (col.gameObject.tag == "Player")
        {
            player.canJump = false;
            //player.anim.Play(PlayMode.StopSameLayer);
        }
    }
}