using UnityEngine;
using UnityEngine.Advertisements;
using System.Collections;

public class PlayAd : MonoBehaviour {

    public DisplayAmountOfCoins displayCoins;

    void Awake ()
    {

        if(Advertisement.isSupported)
        {
            if(Application.platform == RuntimePlatform.Android)
            {
                Advertisement.Initialize("1126578", false);
            }else if (Application.platform == RuntimePlatform.IPhonePlayer)
            {
                Advertisement.Initialize("1126579", false);
            }

        }

    }

    public void ShowAd()
    {
        if(Advertisement.IsReady())
        {
            var options = new ShowOptions { resultCallback = HandleShowResult };
            Advertisement.Show(null, options);
        }
    }

    private void HandleShowResult (ShowResult result)
    {
        switch(result)
        {
            case ShowResult.Finished:
                Debug.Log("You have claimed your 10 coins!");
                PlayerPrefs.SetInt("Coins", PlayerPrefs.GetInt("Coins") + 5);
                displayCoins.SetCoin();
                break;

            case ShowResult.Skipped:
                Debug.Log("B");
                break;

            case ShowResult.Failed:
                break;
        }
    }

	// Use this for initialization
	void Start () {
	
	}
	
	
}
