using UnityEngine;
using System.Collections;
using System;

public class Camera : MonoBehaviour {

	public Transform lookAt;
	public float smoothSpeed = 0.125f;
	public Platforms platforms;

	private bool smooth = true;
	private bool firstRotate = false;
	private Vector3 offset = new Vector3(0, 2.75f, -7.5f);
	private float angle = 180f;
	private float rotateToThis;

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update(){
	}
	void LateUpdate () {

		RotateCamera();

		Vector3 desiredPosition = lookAt.transform.position + offset;

		if(smooth){
			transform.position = Vector3.Lerp(transform.position, desiredPosition, smoothSpeed);
		} else
		{
			transform.position = desiredPosition;
		}
	}

	private void RotateCamera(){
		rotateToThis = platforms.rotationAngleMultiplier * 90;
		angle += 10;
		transform.eulerAngles = new Vector3(transform.eulerAngles.x, transform.eulerAngles.y + 10, transform.eulerAngles.z);
		if(angle >= rotateToThis){
			angle = rotateToThis;
			transform.eulerAngles = new Vector3(transform.eulerAngles.x, rotateToThis - 180, transform.eulerAngles.z);
		}
		double x = 7.5 * Mathf.Sin(angle * Mathf.PI / 180f);
		double z = 7.5 * Mathf.Cos(angle * Mathf.PI / 180f);
		offset = new Vector3((float) x, 2.75f, (float) z);
	}
}
