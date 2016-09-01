using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class Scroll : MonoBehaviour {

    private RectTransform rectTransform;
    public GameObject MaxRight;
    public GameObject MaxLeft;
    private bool stop = false;
    private bool toMove = false;
    public RawImage rawImage;
    public GameObject big;
    public GameObject Selected;
    

    
   

	// Use this for initialization
	void Start () {
        rectTransform = GetComponent<RectTransform>();
        big.GetComponent<Transform>();




    }

    public void StopIt()
    {
        if(this.transform.position.x != Selected.transform.position.x)
        {
            toMove = true;
        } else
        {
            toMove = false;
        }

        



    }
	
	// Update is called once per frame

    void Update()
    {
        if (toMove == true)
        {
           
            big.transform.position = Vector3.MoveTowards(big.transform.position, Selected.transform.position, );
        }
    }
  

       

    }

