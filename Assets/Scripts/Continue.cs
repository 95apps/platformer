using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class Continue : MonoBehaviour {

    public GameObject coinOption;
    public GameObject adOption;
    public GameObject continueOption;
    private bool toggle = false;
    private RectTransform adOptionRect;
    private RectTransform coinOptionRect;
    public Platforms platforms;
    private UnityEngine.UI.Text coinText;

	// Use this for initialization
	void Start () {
        adOptionRect = adOption.GetComponent<RectTransform>();
        coinOptionRect = coinOption.GetComponent<RectTransform>();
        coinOption.GetComponentInChildren<UnityEngine.UI.Text>().text = (25 + Mathf.CeilToInt(platforms.score/3)) + " Coins";
    }
	
    public void ShowOptions()
    {
        toggle = !toggle;
        
       
        
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
