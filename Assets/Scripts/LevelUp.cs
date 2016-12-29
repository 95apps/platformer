using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class LevelUp : MonoBehaviour
{

    public Color32[] rainbow;
    public Text levelUpText;
    public Platforms platforms;
    public Player player;

    private float rainbowStep = 0f;
    private float alphaStep = 0f;
    private float onTime = 0f;
    private int currentRainbowColor = 0;
    private int nextRainbowColor = 1;
    private AudioSource audioSrc;

    // Use this for initialization
    void Start()
    {
        levelUpText = GetComponent<Text>();
        //audioSrc = GetComponent<AudioSource>();
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

            rainbowStep += Time.deltaTime * 10;

            if (rainbowStep >= 1f)
            {
                rainbowStep = 0f;
                currentRainbowColor++;
                if (currentRainbowColor >= 7)
                {
                    currentRainbowColor = 0;
                }
                nextRainbowColor++;
                if (nextRainbowColor >= 7)
                {
                    nextRainbowColor = 0;
                }
            }

            byte r = System.Convert.ToByte(Mathf.RoundToInt(Mathf.Lerp(System.Convert.ToInt32(rainbow[currentRainbowColor].r), System.Convert.ToInt32(rainbow[nextRainbowColor].r), rainbowStep)));
            byte g = System.Convert.ToByte(Mathf.RoundToInt(Mathf.Lerp(System.Convert.ToInt32(rainbow[currentRainbowColor].g), System.Convert.ToInt32(rainbow[nextRainbowColor].g), rainbowStep)));
            byte b = System.Convert.ToByte(Mathf.RoundToInt(Mathf.Lerp(System.Convert.ToInt32(rainbow[currentRainbowColor].b), System.Convert.ToInt32(rainbow[nextRainbowColor].b), rainbowStep)));
            byte a = System.Convert.ToByte(Mathf.RoundToInt(Mathf.Lerp(0, 255, alphaStep)));
            levelUpText.color = new Color32(r, g, b, a);

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
        levelUpText.text = "LEVEL " + player.currentLevel.ToString();
        onTime = 0f;
        rainbowStep = 0f;
        alphaStep = 0f;
        //audioSrc.Play();
    }
}
