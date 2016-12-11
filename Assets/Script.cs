using UnityEngine;
using System.Collections;

public class Script : MonoBehaviour {

	public GameObject credits;
	public GameObject help;


	// Use this for initialization
	void Start () {
	
	}

	public void ToggleCredits(){
		credits.SetActive(!credits.activeInHierarchy);
		if (help.activeInHierarchy) {
			help.SetActive (false);
		}

	}

	public void ToggleHelp(){
		help.SetActive (!help.activeInHierarchy);
		if(credits.activeInHierarchy) {
			credits.SetActive(false);
		}
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
