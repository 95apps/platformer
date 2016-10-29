using UnityEngine;
using System.Collections;

public class Bullet : MonoBehaviour {

public Bullets bullets;
public Platform platform;

private Rigidbody rb;
private float countDown = 5f;
private Vector3 forceDirection;

	// Use this for initialization
	void Start () {
		rb = GetComponent<Rigidbody>();
	}
	
	// Update is called once per frame
	void Update () {
		switch (platform.direction){
			case 0:
				forceDirection = Vector3.right;
				transform.eulerAngles = new Vector3(0, 0, 0);
				break;
			case 1:
				forceDirection = Vector3.back;
				transform.eulerAngles = new Vector3(0, 90, 0);
				break;
			case 2:
				forceDirection = Vector3.left;
				transform.eulerAngles = new Vector3(0, 180, 0);
				break;
			case 3:
				forceDirection = Vector3.forward;
				transform.eulerAngles = new Vector3(0, 270, 0);
				break;
		}
		rb.AddForce(forceDirection * 10, ForceMode.Impulse);
		if(countDown <= 0f){
			Destroy(this.gameObject);
		}
		countDown -= Time.deltaTime;
	}

	public void Initialize(Bullets bullets, Platform plat){
		this.bullets = bullets;
		platform = plat;
	}
	void OnCollisionEnter(Collision col){
		if(col.gameObject.tag == "Player"){
			col.gameObject.GetComponent<Rigidbody>().freezeRotation = false;
		}
	}
}