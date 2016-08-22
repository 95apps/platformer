using UnityEngine;
using System.Collections;

public class Jukebox : MonoBehaviour {

    private AudioSource src;
    public AudioClip[] backgroundSounds;

   
    

    // Use this for initialization
    void Start () {
        src = GetComponent<AudioSource>();
        src.clip = backgroundSounds[UnityEngine.Random.Range(0, backgroundSounds.Length - 1)];

        


    }

    void Awake()
    {
        DontDestroyOnLoad(this);
       
    }

	// Update is called once per frame
	void Update () {
        if (!src.isPlaying)
        {
            src.Play();
            
        }
    }
}
