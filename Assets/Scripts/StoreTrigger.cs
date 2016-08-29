using UnityEngine;
using System.Collections;

public class StoreTrigger : MonoBehaviour {

    public GameObject storeCanvas;

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

    void OnTriggerStay(Collider col)
    {
        if (col.gameObject.tag == "Player")
        {
            storeCanvas.SetActive(true);
        }
    }

    void OnTriggerExit(Collider col)
    {
        if (col.gameObject.tag == "Player")
        {
           
            storeCanvas.SetActive(false);
        }

    }

}
