using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class SettingsCanvas : MonoBehaviour {

	public GameObject musicMute;
	public Jukebox jukeBox;
	public Image settingImage;
	public Sprite[] muteSprites;

	private AudioSource src;


	// Use this for initialization
	void Start () {
		jukeBox = GameObject.Find("Jukebox").GetComponent<Jukebox>();
		src = jukeBox.GetComponent<AudioSource>();
	}

	public void Mute(){
        if (PlayerPrefs.GetInt("muteMusic") == 0)
        {
            settingImage.sprite = muteSprites[1];
            src.mute = true;
            PlayerPrefs.SetInt("muteMusic", 1);
        }
        else if (PlayerPrefs.GetInt("muteMusic") == 1)
        {
            settingImage.sprite = muteSprites[0];
            src.mute = false;
            PlayerPrefs.SetInt("muteMusic", 0);
        }
	}
}
