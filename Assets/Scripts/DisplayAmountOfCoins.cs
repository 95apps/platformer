using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class DisplayAmountOfCoins : MonoBehaviour {

    private UnityEngine.UI.Text myText;
    

	// Use this for initialization
	void Start () {
  
        SetCoin();
    }

    void Awake ()
    {
        
    }
   

    public void SetCoin()
    {
        myText = gameObject.GetComponentInChildren<UnityEngine.UI.Text>();
        myText.text = "Coins : " + PlayerPrefs.GetInt("Coins").ToString();
    }
	
	// Update is called once per frame
	
}
