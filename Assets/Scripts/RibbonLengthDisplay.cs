using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class RibbonLengthDisplay : MonoBehaviour {

    public UnityEngine.UI.Text ribbonLength;
    public Player player;
    // Use this for initialization
    void Start () {
		if (player.platforms.score != -1) {
			ribbonLength.text = "You have travelled " + Mathf.Round (player.trailLength) + " meters and reached block " + player.platforms.score;
		}
	}
	
	// Update is called once per frame
	void Update () {
		if (player.platforms.score != -1) {
			ribbonLength.text = "You have travelled : " + Mathf.Round (player.trailLength) + " meters and reached block " + player.platforms.score;
		}
	}
}
