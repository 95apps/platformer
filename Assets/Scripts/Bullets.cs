using UnityEngine;
using System.Collections;

public class Bullets : MonoBehaviour {

	public Platform platform;
	public float timer;
	public bool spawnBullets = true;

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
		timer += Time.deltaTime;
		if(timer >= 2f){
			timer = 0f;
			SpawnBullets(0);
		}
	}

	public void SpawnBullets(int localY){
		GameObject bullet1 = Instantiate(Resources.Load("GameEntities/Bullet")) as GameObject;
		bullet1.transform.parent = transform;
		bullet1.transform.localPosition = new Vector3(-2, localY, 0);
		bullet1.GetComponent<Bullet>().Initialize(this, platform);
		GameObject bullet2 = Instantiate(Resources.Load("GameEntities/Bullet")) as GameObject;
		bullet2.transform.parent = transform;
		bullet2.transform.localPosition = new Vector3(-2.5f, localY, 0);
		bullet2.GetComponent<Bullet>().Initialize(this, platform);
		GameObject bullet3 = Instantiate(Resources.Load("GameEntities/Bullet")) as GameObject;
		bullet3.transform.parent = transform;
		bullet3.transform.localPosition = new Vector3(-3f, localY, 0);
		bullet3.GetComponent<Bullet>().Initialize(this, platform);
	}
}
