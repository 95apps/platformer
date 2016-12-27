using UnityEngine;
using System.Collections;

public class Canvas : MonoBehaviour {

	public GameObject header;
	public GameObject botHeader;
	public GameObject continueOption;
	public GameObject adOption;
	public GameObject coinOption;

	private RectTransform headerRect;
	private RectTransform botHeaderRect;
	private RectTransform adOptionRect;
	private RectTransform coinOptionRect;

	private Vector2 headerStartPos;
	private Vector2 botHeaderStartPos;

	private float slideStep;

	private bool slide = true;


	// Use this for initialization
	void Start () {
		headerRect = header.GetComponent<RectTransform>();
		botHeaderRect = botHeader.GetComponent<RectTransform>();
		adOptionRect = adOption.GetComponent<RectTransform>();
		coinOptionRect = coinOption.GetComponent<RectTransform>();
		headerRect.sizeDelta = new Vector2(Screen.width, headerRect.sizeDelta.y);
		botHeaderRect.sizeDelta = new Vector2(Screen.width, botHeaderRect.sizeDelta.y);
		adOptionRect.sizeDelta = new Vector2(Mathf.Floor(Screen.width / 3), adOptionRect.sizeDelta.y);
		coinOptionRect.sizeDelta = new Vector2(Mathf.Floor(Screen.width / 3), coinOptionRect.sizeDelta.y);
		headerRect.anchoredPosition = new Vector2(Screen.width, headerRect.anchoredPosition.y);
		botHeaderRect.anchoredPosition = new Vector2(-Screen.width, botHeaderRect.anchoredPosition.y);
		adOptionRect.anchoredPosition = new Vector2(Mathf.Ceil(adOptionRect.sizeDelta.x / 2), 0);
		coinOptionRect.anchoredPosition = new Vector2(Mathf.Floor(-coinOptionRect.sizeDelta.x / 2), 0);
		headerStartPos = headerRect.anchoredPosition;
		botHeaderStartPos = botHeaderRect.anchoredPosition;
		continueOption.GetComponent<Continue>().adOptionStartPos = adOptionRect.anchoredPosition;
		continueOption.GetComponent<Continue>().coinOptionStartPos = coinOptionRect.anchoredPosition;
		continueOption.GetComponent<Continue>().adOptionEndPos = new Vector2(Mathf.Ceil(-adOptionRect.sizeDelta.x / 2), 0);
		continueOption.GetComponent<Continue>().coinOptionEndPos = new Vector2(Mathf.Floor(coinOptionRect.sizeDelta.x / 2), 0);
	}

	// Update is called once per frame
	void Update () {
		if (slide) {
			headerRect.anchoredPosition = new Vector2(Mathf.Lerp(headerStartPos.x, 0, slideStep), headerRect.anchoredPosition.y);
			botHeaderRect.anchoredPosition = new Vector2(Mathf.Lerp(botHeaderStartPos.x, 0, slideStep), botHeaderRect.anchoredPosition.y);
			slideStep += Time.deltaTime * 0.75f;
			if(slideStep > 1)
			{
				headerRect.anchoredPosition = new Vector2(0, headerRect.anchoredPosition.y);
				botHeaderRect.anchoredPosition = new Vector2(0, botHeaderRect.anchoredPosition.y);
				slide = false;
			}
		}
	}

	public void ifTouchisNotAButton()
	{

		UnityEngine.SceneManagement.SceneManager.LoadScene("Game");

	}

}