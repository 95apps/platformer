using UnityEngine;
using System.Collections;

public class Canvas : MonoBehaviour {

	public GameObject header;
	public GameObject botHeader;
	public GameObject continueOption;

	private RectTransform headerRect;
	private RectTransform botHeaderRect;

	private Vector2 headerStartPos;
	private Vector2 botHeaderStartPos;

	private float slideStep;

	private bool slide = true;


	// Use this for initialization
	void Start () {
		headerRect = header.GetComponent<RectTransform>();
		botHeaderRect = botHeader.GetComponent<RectTransform>();
		headerRect.sizeDelta = new Vector2(Screen.width, headerRect.sizeDelta.y);
		botHeaderRect.sizeDelta = new Vector2(Screen.width, botHeaderRect.sizeDelta.y);
		headerRect.anchoredPosition = new Vector2(Screen.width, headerRect.anchoredPosition.y);
		botHeaderRect.anchoredPosition = new Vector2(-Screen.width, botHeaderRect.anchoredPosition.y);
		headerStartPos = headerRect.anchoredPosition;
		botHeaderStartPos = botHeaderRect.anchoredPosition;
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