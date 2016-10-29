using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class Highscore : MonoBehaviour {

    // Use this for initialization

    public TextMesh highscore;


	void Start () {
        highscore.text = "HIGHSCORE : " + PlayerPrefs.GetFloat("Highscore");
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
