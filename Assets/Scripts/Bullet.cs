using UnityEngine;
using System.Collections;

public class Bullet : MonoBehaviour {

public Bullets bullets;
public Platform platform;

private Rigidbody rb;
private float countDown = 5f;

	// Use this for initialization
	void Start () {
		rb = GetComponent<Rigidbody>();
	}
	
	// Update is called once per frame
	void Update () {
		//rb.AddForce(Vector3.right * 50, ForceMode.Impulse);
		switch (platform.direction){
			case 0:
				rb.velocity = Vector3.right * 10;
				break;
			case 1:
				rb.velocity = Vector3.back * 10;
				break;
			case 2:
				rb.velocity = Vector3.left * 10;
				break;
			case 3:
				rb.velocity = Vector3.forward * 10;
				break;
		}
		if(countDown <= 0f){
			Destroy(this.gameObject);
		}
		countDown -= Time.deltaTime;
	}

	public void Initialize(Bullets bullets, Platform plat){
		this.bullets = bullets;
		platform = plat;
	}
}