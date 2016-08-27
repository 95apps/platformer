using UnityEngine;
using System.Collections;

public class Skydome : MonoBehaviour {
    
    public float scrollSpeed = 0.5F;
    public Renderer rend;
    public GameObject player;
    public Color32[] skyColors;

    public static Skydome Instance;

    private int currentColor;
    private float colorStep;

    void Start()
    {
        rend = GetComponent<Renderer>();
        currentColor = UnityEngine.Random.Range(0, 7);
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
        transform.position = player.transform.position + new Vector3(0, 118, 0);
        ChangeColor();
        scrollSpeed += Time.deltaTime * 0.1f;
        rend.material.mainTextureOffset = new Vector2(scrollSpeed, 0);
    }
    private void ChangeColor()
    {
        if(currentColor == 7)
        {
            rend.material.color = Color32.Lerp(skyColors[currentColor], skyColors[0], colorStep);
        } else
        {
            rend.material.color = Color32.Lerp(skyColors[currentColor], skyColors[currentColor + 1], colorStep);
        }
        colorStep += Time.deltaTime * 0.1f;
        if(colorStep > 1f)
        {
            currentColor += 1;
            if(currentColor > 7)
            {
                currentColor = 0;
            }
            colorStep = 0f;
        }
    }
}
