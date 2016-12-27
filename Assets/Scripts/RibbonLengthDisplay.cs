using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class RibbonLengthDisplay : MonoBehaviour {

    public UnityEngine.UI.Text ribbonLength;
    public Player player;
    // Use this for initialization
    void Start () {
        ribbonLength.text = "You have travelled : " + Mathf.Round(player.trailLength) + " meters";
	}
	
	// Update is called once per frame
	void Update () {
		ribbonLength.text = "You have travelled : " + Mathf.Round(player.trailLength) + " meters";
	}
}
