using UnityEngine;
using UnityEngine.Advertisements;
using System.Collections;

public class AdToContinue : MonoBehaviour
{

    public DeathCube deathcube;

    public void CoinToContinue()
    {
        PlayerPrefs.SetInt("Coins", PlayerPrefs.GetInt("Coins") - 25);
    }


    void Awake()
    {

        if (Advertisement.isSupported)
        {
            if (Application.platform == RuntimePlatform.Android)
            {
                Advertisement.Initialize("1126578", false);
            }
            else if (Application.platform == RuntimePlatform.IPhonePlayer)
            {
                Advertisement.Initialize("1126579", false);
            }

        }

    }

    public void ShowAdToContinue()
    {
        Debug.Log("yo");
        if (Advertisement.IsReady())
        {
            var options = new ShowOptions { resultCallback = HandleShowResult };
            Advertisement.Show(null, options);
        }
    }

    private void HandleShowResult(ShowResult result)
    {
        switch (result)
        {
            case ShowResult.Finished:
                Debug.Log("Player continued");
                deathcube.playerDead = false;
                
                break;

            case ShowResult.Skipped:
                Debug.Log("Ad not finished");
                break;

            case ShowResult.Failed:
               
                break;
        }
    }

    // Use this for initialization
    void Start()
    {

    }


}
