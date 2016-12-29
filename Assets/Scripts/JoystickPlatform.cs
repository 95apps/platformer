using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class JoystickPlatform : MonoBehaviour {

	private RectTransform thisRectTransform;
	// Use this for initialization
	void Start () {
		this.gameObject.transform.localScale = new Vector3 (PlayerPrefs.GetFloat ("MovementRange") / 150, PlayerPrefs.GetFloat ("MovementRange") / 150, PlayerPrefs.GetFloat ("MovementRange") / 75);


	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
