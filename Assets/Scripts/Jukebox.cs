using UnityEngine;
using System.Collections;

public class Jukebox : MonoBehaviour {

    private AudioSource src;
    public AudioClip[] backgroundSounds;

    public static Jukebox Instance;
    

    // Use this for initialization
    void Start () {
        src = GetComponent<AudioSource>();
        

        


    }

    void Awake()
    {
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
	void Update () {
        if (!src.isPlaying)
        {
            src.clip = backgroundSounds[UnityEngine.Random.Range(0, backgroundSounds.Length - 1)];
            src.Play();
            
        }
    }
}
