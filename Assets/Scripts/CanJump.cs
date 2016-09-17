using UnityEngine;
using System.Collections;

public class CanJump : MonoBehaviour {

    public Player player;

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {

	}

    void OnTriggerEnter(Collider col)
    {
        if(col.gameObject.tag == "Player")
        {
            //player.transform.eulerAngles = Vector3.zero;
            player.canJump = true;
            player.flipStep = 0f;
        }
    }

    void OnTriggerExit(Collider col)
    {
        if(col.gameObject.tag == "Player")
        {
            player.canJump = false;
        }
    }
}
