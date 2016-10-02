using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class Scroll : MonoBehaviour
{

    private float step;
    private float deltaX;
    private Vector3 target;
    private Vector3 startPos;
    private RectTransform rectTransform;
    private bool stop = false;
    private bool toMove = false;
    public RawImage rawImage;
    public GameObject big;
    public Selected selected;
    public BigScroll bigScroll;
    public int value;
    public int status;
    public DisplayAmountOfCoins displayAmountOfCoins;

    // Use this for initialization
    void Start()
    {
        rectTransform = GetComponent<RectTransform>();
        if (!PlayerPrefs.HasKey(gameObject.name))
        {
            PlayerPrefs.SetInt(gameObject.name, status);
        } 
    }

    public void Purchase()
    {
        PlayerPrefs.SetInt("Coins", PlayerPrefs.GetInt("Coins") - value);
        displayAmountOfCoins.SetCoin();
        PlayerPrefs.SetInt(gameObject.name, 1);
    }

    public void Equip()
    {
        if (PlayerPrefs.GetInt(gameObject.name) != 1)
        {
            PlayerPrefs.SetInt(gameObject.name, 1);
        } else
        {
            PlayerPrefs.SetInt(gameObject.name, 2);
        }
        
    }

    public void StopIt()
    {
        if (!bigScroll.centering && this.transform.position.x != selected.transform.position.x)
        {
            toMove = true;
            bigScroll.centering = true;
            startPos = big.transform.position;
            deltaX = selected.transform.position.x - transform.position.x;
            target = startPos + new Vector3(deltaX, 0, 0);
        }
    }

    // Update is called once per frame

    void Update()
    {
        deltaX = selected.transform.position.x - transform.position.x;
        if (Mathf.Abs(deltaX) <= 40f)
        {
            selected.selected = this;
        }


        if (toMove && transform.position.x != selected.transform.position.x)
        {
            big.transform.position = Vector3.Lerp(startPos, target, Hermite(0f, 1f, step));
            step += Time.deltaTime;
            if (step >= 1f)
            {
                step = 1f;
                toMove = false;
                bigScroll.centering = false;
            }
        }
        else
        {
            step = 0f;
            toMove = false;
        }
    }
    //Ease in out
    public static float Hermite(float start, float end, float value)
    {
        return Mathf.Lerp(start, end, value * value * (3.0f - 2.0f * value));
    }
}