using UnityEngine;
using System.Collections;

public class Continue : MonoBehaviour {

    public GameObject coinOption;
    public GameObject adOption;
    public GameObject continueOption;
    private bool toggle = false;
    private RectTransform adOptionRect;
    private RectTransform coinOptionRect;
	// Use this for initialization
	void Start () {
        adOptionRect = adOption.GetComponent<RectTransform>();
        coinOptionRect = coinOption.GetComponent<RectTransform>();
	}
	
    public void ShowOptions()
    {
        toggle = !toggle;
        
       
        
    }

    public void chooseAd()
    {

    }

    public void chooseCoin()
    {

    }

	// Update is called once per frame
	void Update () {
        if (toggle == true)
        {
            if (coinOption.transform.position.x <= 170)
            {
                
                coinOption.transform.Translate(Vector3.right * 5);
                adOption.transform.Translate(Vector3.left * 5);
            } 
        } else if (toggle == false)
        {
            if (coinOption.transform.position.x >= -215)
            {

                coinOption.transform.Translate(Vector3.left * 5);
                adOption.transform.Translate(Vector3.right * 5);
            }
        }
    }
}
