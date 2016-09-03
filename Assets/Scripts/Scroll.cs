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
    public GameObject selected;
    public BigScroll bigScroll; 

    // Use this for initialization
    void Start()
    {
        rectTransform = GetComponent<RectTransform>();
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