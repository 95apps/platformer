using UnityEngine;
using System.Collections;

public class Camera : MonoBehaviour {

	public Transform lookAt;
	public float smoothSpeed = 0.125f;

	private bool smooth = true;
	private Vector3 offset = new Vector3(0, 4f, -10f);

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void LateUpdate () {

		Vector3 desiredPosition = lookAt.transform.position + offset;

		if(smooth){
			transform.position = Vector3.Lerp(transform.position, desiredPosition, smoothSpeed);
		} else
		{
			transform.position = desiredPosition;
		}
	}
}
