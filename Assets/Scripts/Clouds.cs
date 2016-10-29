using UnityEngine;
using System.Collections;

public class Clouds : MonoBehaviour {

    public GameObject[] clouds;
    private int amountOfClouds;
    public Platforms platforms;
    public GameObject player; 

	// Use this for initialization
	void Start () {
	
	}

    // Update is called once per frame
    void Update()
    {

    }

    public void SpawnClouds()
    {
        GameObject cloud = Instantiate(clouds[Random.Range(0, clouds.Length - 1)]) as GameObject;
        cloud.transform.position = new Vector3(Random.Range(-200, 200), player.transform.position.y + Random.Range(25, 50), Random.Range(-200, 200));
        cloud.transform.localEulerAngles = new Vector3(transform.localEulerAngles.x, Random.Range(0, 360), transform.localEulerAngles.z);
        cloud.transform.parent = transform;
    }



}
