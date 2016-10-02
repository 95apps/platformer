using UnityEngine;
using System.Collections;

public class Canvas : MonoBehaviour {

    public GameObject header1;
    public GameObject header2;
    public GameObject botHeader1;
    public GameObject botHeader2;
    public GameObject continueOption;


    // Use this for initialization
    void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {

        if (header1.transform.position.x > botHeader1.transform.position.x)
        {
            header1.transform.Translate(Vector3.left * 16);

            botHeader1.transform.Translate(Vector3.right * 16);
            continueOption.transform.Translate(Vector3.right * 16);

        }



       
    }

    public void ifTouchisNotAButton()
    {
        
            UnityEngine.SceneManagement.SceneManager.LoadScene("Game");
        
    }

}
