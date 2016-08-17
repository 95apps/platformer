using UnityEngine;
using System.Collections;

public class DeathCube : MonoBehaviour
{

    // This is the player object used to move the platform.
    public Player player;
    public GameObject playerRef;
    public bool playerDead = false;
    private Rigidbody playerRb;
    private Vector3 initialPos;
    private Vector3 playerVelocity;
    public GameObject canvas;
    public GameObject city;
    private TrailRenderer trail;
    private float startWidth;
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
            city.SetActive(false);

            if (trail.startWidth <= 0.5)
            {

                trail.startWidth = startWidth += Time.deltaTime/2;
                trail.endWidth = startWidth += Time.deltaTime/2;

            }
            //canvas.SetActive(true);


            if (Input.GetMouseButton(0) || Input.GetKey("space"))
            {
                UnityEngine.SceneManagement.SceneManager.LoadScene("Game");
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
            if (deltaY < -10f)
            {
                playerRb.isKinematic = true;
                playerRb.useGravity = false;
                player.GetComponent<Renderer>().enabled = false;
            }
        }
    }

    void OnTriggerEnter(Collider col)
    {
        if (col.gameObject.tag == "Player")
        {
            //cameraComponent.ViewportPointToRay()
            playerDead = true;
            playerRef.transform.parent = transform.parent;
            playerVelocity = playerRb.velocity;
        }
    }
}