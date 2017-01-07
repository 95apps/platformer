using UnityEngine;
using System.Collections;

public class DeathCube : MonoBehaviour
{

    // This is the player object used to move the platform.
    public Player player;
    public bool playerDead = false;
    private Rigidbody playerRb;
    private Vector3 initialPos;
    private Vector3 currentPlat;
    public GameObject canvas;
    public StoreTrigger StoreTrigger;
    public GameObject FloorCanvas;
    public UnityEngine.UI.Text continueOptionText;
    private float trailWidth;


    private TrailRenderer trail;
    public Platforms platforms;

    // Use this for initialization
    void Start()
    {
        initialPos = transform.position;
        initialPos.y -= 0.5f;
        playerRb = player.GetComponent<Rigidbody>();
        trail = player.GetComponent<TrailRenderer>();
        trailWidth = trail.startWidth;
    }

    // Update is called once per frame
    void Update()
    {
        if (playerDead)
        {

            if (trail.startWidth <= 0.8f)
            {
                trail.startWidth += Time.deltaTime / 2;
                trail.endWidth += Time.deltaTime / 2;
            }

        }

        else if (trail.startWidth > trailWidth)
        {
            trail.startWidth -= Time.deltaTime / 2;
            trail.endWidth -= Time.deltaTime / 2;
        }

        if (player != null)
        {
            Vector3 playerPos = player.transform.position;
            transform.position = new Vector3(playerPos.x, currentPlat.y - 10, playerPos.z);
            /*
            if (!(currentPlat.y + initialPos.y <= transform.position.y))
            {
                transform.position = new Vector3(currentPlat.x, currentPlat.y + initialPos.y, currentPlat.z);
            }
            */
            float deltaY = playerPos.y - transform.position.y;
            if (deltaY < -5 && playerDead)
            {
                playerRb.isKinematic = true;
                playerRb.useGravity = false;
                player.GetComponent<Renderer>().enabled = false;
            }
            else
            {
                player.GetComponent<Renderer>().enabled = true;
            }
        }
    }

    public void UpdatePosition()
    {
        currentPlat = platforms.platforms[0].transform.position;
    }

    void OnTriggerEnter(Collider col)
    {
        if (col.gameObject.tag == "Player" && !player.isResurrecting)
        {
            playerDead = true;
            StoreTrigger.Leave();
            FloorCanvas.SetActive(false);
            canvas.SetActive(true);
            continueOptionText.text = "Continue\nfrom " + (platforms.score + 1);
        }
    }
}