using UnityEngine;
using System.Collections;

public class Raycast : MonoBehaviour {

	public float maxRayDistance = 1f;
	public bool onGround;
	public bool touchingSide;
	public bool toMove;


	void Start () {

	}

    // Update is called once per frame
    void Update () {
		Vector3 dwn = transform.TransformDirection (new Vector3(0, -0.6f, 0)); // Length and direction of line.
		// -0.5 would work but we want to give users fluidity when jumping.
		Vector3 corner1 = new Vector3 (-0.5f, 0, -0.5f);
		Vector3 corner2 = new Vector3 (0.5f, 0, -0.5f);
		Vector3 corner3 = new Vector3 (0.5f, 0, 0.5f);
		Vector3 corner4 = new Vector3 (-0.5f, 0, 0.5f);

		Debug.DrawLine (transform.position + corner1, transform.position + corner1 + dwn, Color.red);
		Debug.DrawLine (transform.position + corner2, transform.position + corner2 + dwn, Color.blue);
		Debug.DrawLine (transform.position + corner3, transform.position + corner3 + dwn, Color.yellow);
		Debug.DrawLine (transform.position + corner4, transform.position + corner4 + dwn, Color.white);


        if (
 //center raycast to fix potential bugs.
            Physics.Raycast (transform.position + corner1, dwn, 0.6f) ||
			Physics.Raycast (transform.position + corner2, dwn, 0.6f) ||
			Physics.Raycast (transform.position + corner3, dwn, 0.6f) ||
			Physics.Raycast (transform.position + corner4, dwn, 0.6f)) {

            
			onGround = true;
           

		} else {

			onGround = false;
		}


	}


}
