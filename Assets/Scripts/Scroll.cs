using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class Scroll : MonoBehaviour {

    private RectTransform rectTransform;

	// Use this for initialization
	void Start () {
        rectTransform = GetComponent<RectTransform>();
	}
	
	// Update is called once per frame
	void Update () {
	   if(rectTransform.localPosition.y > 250)
        {
            rectTransform.localPosition = new Vector3(0, -250, 0);
        }

        if(rectTransform.localPosition.y < -500)
        {
            rectTransform.localPosition = new Vector3(0, -250, 0);
        }
    }
}
