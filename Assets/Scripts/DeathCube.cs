using UnityEngine;
using System.Collections;

public class DeathCube : MonoBehaviour
{

    // This is the player object used to move the platform.
    public Player player;
    public bool playerDead = false;
    private Rigidbody playerRb;
    private Vector3 initialPos;
    private Vector3 playerVelocity;
    public GameObject canvas;
    public StoreTrigger StoreTrigger;
    public GameObject FloorCanvas;



    private TrailRenderer trail;
    private float startWidth;
    public Platforms platforms;
    // Use this for initialization
    void Start()
    {
        initialPos = transform.position;
        initialPos.y -= 0.5f;
        playerRb = player.GetComponent<Rigidbody>();
        trail = player.GetComponent<TrailRenderer>();
        //cameraComponent = mainCamera.GetComponent<UnityEngine.Camera>();
    }

    // Update is called once per frame
    void Update()
    {
        if (playerDead)
        {
            StoreTrigger.Leave();
            FloorCanvas.SetActive(false);
            canvas.SetActive(true);
          
            if (trail.startWidth <= 0.5f)
            {
                trail.startWidth = startWidth += Time.deltaTime/2;
                trail.endWidth = startWidth += Time.deltaTime/2;
            }
            //canvas.SetActive(true);
        } else
        {
            if (trail.startWidth > 0.4f)
            {
                trail.startWidth = startWidth -= Time.deltaTime / 2;
                trail.endWidth = startWidth -= Time.deltaTime / 2;
            }
        }
        if (player != null)
        {
            Vector3 playerPos = player.transform.position;
            transform.position = new Vector3(playerPos.x, transform.position.y, playerPos.z);
            if (!(playerPos.y + initialPos.y <= transform.position.y))
            {
                transform.position = new Vector3(playerPos.x, playerPos.y + initialPos.y, playerPos.z);
            }
            float deltaY = playerPos.y - transform.position.y;
            if (deltaY < -10f && playerDead)
            {
                playerRb.isKinematic = true;
                playerRb.useGravity = false;
                player.GetComponent<Renderer>().enabled = false;
            } else
            {
                player.GetComponent<Renderer>().enabled = true;
            }
        }
    }

    void OnTriggerEnter(Collider col)
    {
        if (col.gameObject.tag == "Player" && !player.isResurrecting)
        {
            playerDead = true;
            playerVelocity = playerRb.velocity;
        }
    }
}