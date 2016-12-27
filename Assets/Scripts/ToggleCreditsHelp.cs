using UnityEngine;
using System.Collections;

public class ToggleCreditsHelp : MonoBehaviour {


	public GameObject help;


	// Use this for initialization
	void Start () {
	
	}

	public void ToggleHelp(){

		if (!help.activeInHierarchy) {
			help.SetActive (true);
		} else {
			help.SetActive (false);
		}

	}


	// Update is called once per frame
	void Update () {
	
	}
}
