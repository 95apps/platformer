using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class Continue : MonoBehaviour {

	public GameObject coinOption;
	public GameObject adOption;
	public GameObject continueOption;
	private bool toggle = false;
	private bool isToggling = false;
	private RectTransform adOptionRect;
	private RectTransform coinOptionRect;
	public Platforms platforms;
	private UnityEngine.UI.Text coinText;
	public Vector2 adOptionStartPos;
	public Vector2 coinOptionStartPos;
	public Vector2 adOptionEndPos;
	public Vector2 coinOptionEndPos;
	private float optionStep;


	// Use this for initialization
	void Start () {
		optionStep = 0f;
		adOptionRect = adOption.GetComponent<RectTransform>();
		coinOptionRect = coinOption.GetComponent<RectTransform>();
		coinOption.GetComponentInChildren<UnityEngine.UI.Text>().text = (25 + Mathf.CeilToInt(platforms.score/3)) + " Coins";
	}

	public void ShowOptions()
	{
		if (!isToggling){
			toggle = !toggle;
		}
		isToggling = true;
	}

	// Update is called once per frame
	void Update () {
		if (toggle == true)
		{
			coinOptionRect.anchoredPosition = new Vector2(Mathf.Lerp(coinOptionStartPos.x, coinOptionEndPos.x, Hermite(0, 1, optionStep)), 0);
			adOptionRect.anchoredPosition = new Vector2(Mathf.Lerp(adOptionStartPos.x, adOptionEndPos.x, Hermite(0, 1, optionStep)), 0);
			optionStep += Time.deltaTime;
			if (optionStep >= 1){
				optionStep = 1;
				isToggling = false;
			}
		} else if (toggle == false)
		{
			coinOptionRect.anchoredPosition = new Vector2(Mathf.Lerp(coinOptionStartPos.x, coinOptionEndPos.x, Hermite(0, 1, optionStep)), 0);
			adOptionRect.anchoredPosition = new Vector2(Mathf.Lerp(adOptionStartPos.x, adOptionEndPos.x, Hermite(0, 1, optionStep)), 0);
			optionStep -= Time.deltaTime;
			if (optionStep <= 0){
				optionStep = 0;
				isToggling = false;
			}
		}
	}
	public static float Hermite(float start, float end, float value)
	{
		return Mathf.Lerp(start, end, value * value * (3.0f - 2.0f * value));
	}
}