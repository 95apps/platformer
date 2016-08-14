using UnityEngine;
using UnityEngine.SceneManagement;
using System.Collections;

public class DeathCube : MonoBehaviour {

	// This is the player object used to move the platform.
	public Player player;

	public GameObject playerRef;

	private Rigidbody playerRb;

    private bool playerDead = false;
	private Vector3 initialPos;
	private Vector3 playerVelocity;

	// Use this for initialization
	void Start () {
		initialPos = transform.position;
		initialPos.y -= 0.5f;
		playerRb = player.GetComponent<Rigidbody>();
	}

    // Update is called once per frame
    void Update () {
		if(player != null){
			Vector3 playerPos = player.transform.position;
			transform.position = new Vector3(playerPos.x, transform.position.y, playerPos.z);
			if(! (playerPos.y + initialPos.y <= transform.position.y)){
				transform.position = new Vector3(playerPos.x, playerPos.y + initialPos.y, playerPos.z);
			}
			float deltaY = playerPos.y - transform.position.y;
			if (deltaY < -10f){
				Destroy(player.gameObject);


             
            }
		}
	}

	void OnTriggerEnter(Collider col){
		if(col.gameObject.tag == "Player"){
			playerRef.transform.parent = transform.parent;
			playerVelocity = playerRb.velocity;
		}
	}
}
