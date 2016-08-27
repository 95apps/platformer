using UnityEngine;
using System.Collections;

public class Skydome : MonoBehaviour {


    public float scrollSpeed = 0.5F;
    public Renderer rend;
    public GameObject player;

    public static Skydome Instance;

    void Start()
    {
        rend = GetComponent<Renderer>();
        
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

    void Update()
    {
        
        scrollSpeed += 0.0001f;
        rend.material.mainTextureOffset = new Vector2(scrollSpeed, 0);
       
    }
}
