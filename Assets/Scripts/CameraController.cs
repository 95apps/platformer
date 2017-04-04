using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraController : MonoBehaviour {

    public Platforms platforms;
    public Player player;
    public bool beginRotating = false;

    private float startingAngle;
    private float rotateStep;

	// Use this for initialization
	void Start () {
        startingAngle = transform.eulerAngles.y;
        rotateStep = 0;
    }
	
	// Update is called once per frame
	void Update ()
    {
        if (beginRotating)
        {
            Rotate();
        }

        if (platforms.consecutiveJumped < 4)
        {
            transform.position = new Vector3(player.cameraXZ, player.transform.position.y, player.transform.position.z);
        }
        else if (platforms.consecutiveJumped >= 4 && platforms.consecutiveJumped < 8)
        {
            transform.position = new Vector3(player.transform.position.x, player.transform.position.y, player.cameraXZ);
        }
        else if (platforms.consecutiveJumped >= 8 && platforms.consecutiveJumped < 12)
        {
            transform.position = new Vector3(player.cameraXZ, player.transform.position.y, player.transform.position.z);
        }
        else if (platforms.consecutiveJumped >= 12 && platforms.consecutiveJumped < 16)
        {
            transform.position = new Vector3(player.transform.position.x, player.transform.position.y, player.cameraXZ);
        }
    }

    public void Rotate()
    {
        transform.eulerAngles = new Vector3(transform.eulerAngles.x, Hermite(startingAngle, startingAngle + 90f, rotateStep), transform.eulerAngles.z);
        rotateStep += Time.deltaTime * 4;
        if (rotateStep >= 1)
        {
            rotateStep = 0;
            beginRotating = false;
            startingAngle += 90;
            transform.eulerAngles = new Vector3(transform.eulerAngles.x, startingAngle, transform.eulerAngles.z);
        }
    }

    public static float Hermite(float start, float end, float value)
    {
        return Mathf.Lerp(start, end, value * value * (3.0f - 2.0f * value));
    }
}
