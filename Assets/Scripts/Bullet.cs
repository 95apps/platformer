using UnityEngine;
using System.Collections;

public class Bullet : MonoBehaviour {

public Bullets bullets;

private bool spawnBullet = true;
private float step;

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
		transform.localPosition = Vector3.Lerp(new Vector3(-2f, transform.localPosition.y, 0), new Vector3(2f, transform.localPosition.y, 0), step);
		if(transform.localPosition.x >= -1f && spawnBullet && bullets.spawnBullets){
			bullets.SpawnBullet(transform.localPosition.y);
			spawnBullet = false;
		}
		if(transform.localPosition.x >= 2f){
			Destroy(this.gameObject);
		}
		step += Time.deltaTime;
	}

	public void Initialize(Bullets bullets){
		this.bullets = bullets;
	}
}