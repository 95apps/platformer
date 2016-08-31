using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class Scroll : MonoBehaviour {

    private RectTransform rectTransform;
    public GameObject MaxRight;
    public GameObject MaxLeft;
    private bool stop = false;
    private bool toMove = false;

    
   

	// Use this for initialization
	void Start () {
        rectTransform = GetComponent<RectTransform>();

    
    
     
	}

    public void StopIt()
    {

        stop = !stop;
        
    }
	
	// Update is called once per frame

    void Update()
    {
        toMove = true;
    }
	void LateUpdate () {

        if (toMove == true)
        {

            if (stop == false)
            {
                rectTransform.Translate(Vector3.right * 3);
            }


            if (rectTransform.position.x >= MaxRight.transform.position.x)
            {
                rectTransform.position = MaxLeft.transform.position;
            }
        }

       

    }
}
