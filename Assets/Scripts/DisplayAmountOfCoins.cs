using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class DisplayAmountOfCoins : MonoBehaviour {

    private UnityEngine.UI.Text myText;

	// Use this for initialization
	void Start () {
        myText = GetComponent<UnityEngine.UI.Text>();
        SetCoin();
    }

    public void SetCoin()
    {
        myText.text = "Coins : " + PlayerPrefs.GetInt("Coins").ToString();
    }
	
	// Update is called once per frame
	
}
