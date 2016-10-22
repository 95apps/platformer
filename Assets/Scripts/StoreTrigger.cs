using UnityEngine;
using System.Collections;

public class StoreTrigger : MonoBehaviour {

    public GameObject storeCanvas;
    public GameObject settingsCanvas;
    // Use this for initialization
    void Start () {
	
	}
	
   

	// Update is called once per frame
	void Update () {
	
	}

    public void Leave()
    {

        storeCanvas.SetActive(false);
        settingsCanvas.SetActive(false);

    }

    public void StoreCanvasActive()
    {
        settingsCanvas.SetActive(false);
        storeCanvas.SetActive(true);
   
        
    }

    public void SettingsCanvasActive()
    {

        if (settingsCanvas.activeInHierarchy == false)
        {
            settingsCanvas.SetActive(true);
        } else
        {
            settingsCanvas.SetActive(false);
        }

        

    }

}
