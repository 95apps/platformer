using UnityEngine;
using System.Collections;

public class Bullets : MonoBehaviour {

	public float timer;
	public bool spawnBullets = true;

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
		timer += Time.deltaTime;
		if(spawnBullets && timer >= 1f){
			spawnBullets = false;
			timer = 0f;
		}
		if(!spawnBullets && timer >= 2f){
			spawnBullets = true;
			SpawnBullet(0f);
			SpawnBullet(0.75f);
			timer = 0f;
		}
	}

	public void SpawnBullet(float localY){
		GameObject newBullet = Instantiate(Resources.Load("Bullet")) as GameObject;
		newBullet.transform.parent = transform;
		newBullet.transform.localPosition = new Vector3(-2, localY, 0);
		newBullet.GetComponent<Bullet>().Initialize(this);
	}
}
