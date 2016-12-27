using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class SettingsCanvas : MonoBehaviour
{

    public GameObject musicMute;
    public Jukebox jukeBox;
    public Image settingImage;
    public Sprite[] muteSprites;
    public Player player;
    public GameObject HQImage;
    public GameObject LQImage;

    private AudioSource src;


    // Use this for initialization
    void Start()
    {
        jukeBox = GameObject.Find("Jukebox").GetComponent<Jukebox>();
        src = jukeBox.GetComponent<AudioSource>();
        if (PlayerPrefs.GetInt("quality") == 0)
        {
            LQImage.SetActive(true);
            HQImage.SetActive(false);
        }
        else
        {
            LQImage.SetActive(false);
            HQImage.SetActive(true);
        }
    }

    public void Mute()
    {
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

    public void ChangeQuality()
    {
        // If quality is set to high, make necessary changes and set it to low
        if (PlayerPrefs.GetInt("quality") == 2)
        {
            player.GetComponent<TrailRenderer>().minVertexDistance = 1;
            QualitySettings.SetQualityLevel(0, true);
            PlayerPrefs.SetInt("quality", 0);
            LQImage.SetActive(true);
            HQImage.SetActive(false);
            Debug.Log(QualitySettings.GetQualityLevel());
        }
        // If quality is set to low, make necessary changes and set it to high
        else if (PlayerPrefs.GetInt("quality") == 0)
        {
            player.GetComponent<TrailRenderer>().minVertexDistance = 0.1f;
            QualitySettings.SetQualityLevel(2, true);
            PlayerPrefs.SetInt("quality", 2);
            Debug.Log(QualitySettings.GetQualityLevel());
            LQImage.SetActive(false);
            HQImage.SetActive(true);
        }
    }
}
