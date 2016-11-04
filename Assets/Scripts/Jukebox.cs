using UnityEngine;
using System.Collections;

public class Jukebox : MonoBehaviour
{

    private AudioSource src;
    public AudioClip[] backgroundSounds;

    public static Jukebox Instance;
    public Sprite[] muteSprites;
    public UnityEngine.UI.Image settingImage;


    // Use this for initialization
    void Start()
    {
        src = GetComponent<AudioSource>();
        if (!PlayerPrefs.HasKey("muteMusic"))
        {
            PlayerPrefs.SetInt("muteMusic", 0);
        }
        if (PlayerPrefs.GetInt("muteMusic") == 0)
        {
            settingImage.sprite = muteSprites[0];
            src.mute = false;
        }
        else if (PlayerPrefs.GetInt("muteMusic") == 1)
        {
            settingImage.sprite = muteSprites[1];
            src.mute = true;
        }
    }

    void Awake()
    {
        src = GetComponent<AudioSource>();
        if (Instance)
        {
            DestroyImmediate(gameObject);
        }
        else
        {
            DontDestroyOnLoad(gameObject);
            Instance = this;
        }
    }

    // Update is called once per frame
    void Update()
    {
        if (!src.isPlaying)
        {
            src.clip = backgroundSounds[UnityEngine.Random.Range(0, backgroundSounds.Length - 1)];
            src.Play();

        }
    }
}
