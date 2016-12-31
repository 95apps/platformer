using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class LevelUp : MonoBehaviour
{
    
    public Text levelUpText;
    public RawImage levelUpBack;
    public Platforms platforms;
    public Player player;
    
    private float alphaStep = 0f;
    private float onTime = 0f;
    private AudioSource audioSrc;

    // Use this for initialization
    void Start()
    {
        levelUpText = GetComponent<Text>();
    }

    // Update is called once per frame
    void Update()
    {
        if (player.levelingUp)
        {
            if (0 <= onTime && onTime <= 1 && alphaStep <= 1)
            {
                alphaStep += Time.deltaTime;
            }
            else if (3 <= onTime && onTime <= 4 && alphaStep >= 0)
            {
                alphaStep -= Time.deltaTime;
            }

            byte textAlpha = System.Convert.ToByte(Mathf.RoundToInt(Mathf.Lerp(0, 255, alphaStep)));
            byte backAlpha = System.Convert.ToByte(Mathf.RoundToInt(Mathf.Lerp(0, 33, alphaStep)));
            levelUpText.color = new Color32(255, 255, 255, textAlpha);
            levelUpBack.color = new Color32(255, 255, 255, backAlpha);

            onTime += Time.deltaTime;
            if (onTime >= 4f)
            {
                player.levelingUp = false;
                gameObject.SetActive(false);
            }
        }
    }

    public void UpLevel()
    {
        gameObject.SetActive(true);
        levelUpText.gameObject.SetActive(true);
        levelUpText.text = "LEVEL " + player.currentLevel.ToString();
        onTime = 0f;
        alphaStep = 0f;
    }
}
