using UnityEngine;
using System.Collections;

public class Clouds : MonoBehaviour {

    public GameObject[] clouds;
    private int amountOfClouds;
    public Platforms platforms; 

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
        cloud.transform.position = new Vector3(Random.Range(-400, 400), Random.Range(60, 1000), Random.Range(-400, 400));
        cloud.transform.parent = transform;
    }



}
