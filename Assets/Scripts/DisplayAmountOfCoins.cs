using UnityEngine;
using System.Collections;

public class DisplayAmountOfCoins : MonoBehaviour {

    private TextMesh myText;

	// Use this for initialization
	void Start () {
        myText = GetComponent<TextMesh>();
	}
	
	// Update is called once per frame
	void Update () {
        myText.text = "Coins : " + PlayerPrefs.GetInt("Coins").ToString();
	}
}
