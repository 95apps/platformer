using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Sensitivity : MonoBehaviour {

	public GameObject Joystick;
	public float MovementRange =150;
	public UnityEngine.UI.Slider slider;
	public RectTransform JoystickPlatform;
	private int value1 = 150;

	// Use this for initialization
	void Start () {
		MovementRange = 150;
		value1 = 150;
		//JoystickPlatform.sizeDelta = new Vector2 ((PlayerPrefs.GetFloat ("MovementRange") / 150)*100, (PlayerPrefs.GetFloat ("MovementRange") / 150)*100);
		JoystickPlatform.transform.localScale = new Vector3 (PlayerPrefs.GetFloat ("MovementRange") / 150, PlayerPrefs.GetFloat ("MovementRange") / 150, PlayerPrefs.GetFloat ("MovementRange") / 75);
		slider.value = PlayerPrefs.GetFloat("MovementRange");
	}
	
	// Update is called once per frame
	void Update () {
		Debug.Log (MovementRange);
		Debug.Log(value1);
	}

	public void changeMovementRange(float value1) {
		MovementRange = value1;
		//JoystickPlatform.sizeDelta = new Vector2 ((PlayerPrefs.GetFloat ("MovementRange") / 150)*100, (PlayerPrefs.GetFloat ("MovementRange") / 150)*100);
		JoystickPlatform.transform.localScale = new Vector3 (PlayerPrefs.GetFloat ("MovementRange") / 150, PlayerPrefs.GetFloat ("MovementRange") / 150, PlayerPrefs.GetFloat ("MovementRange") / 75);
		PlayerPrefs.SetFloat ("MovementRange", MovementRange);
	}
}
