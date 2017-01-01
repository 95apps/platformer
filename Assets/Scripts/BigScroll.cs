using UnityEngine;
using System.Collections;

public class BigScroll : MonoBehaviour {

    public bool centering = false;
    private RectTransform rectTrans;

    void Start()
    {
        rectTrans = GetComponent<RectTransform>();
        rectTrans.sizeDelta = new Vector2(8980, 100);
    }
}
