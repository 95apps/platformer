using UnityEngine;
using UnityEngine.Advertisements;
using System.Collections;

public class AdToContinue : MonoBehaviour
{
    public Player player;
    public GameObject backGroundButton;
    public DeathCube deathcube;
    public GameObject continueOption;
    public GameObject adOption;
    public GameObject coinOption;
    public Platforms platforms;
    public AudioSource src;
    public AudioClip errorSound;
  
   

    public void CoinToContinue()
    {
        if (PlayerPrefs.GetInt("Coins") - 25 + Mathf.CeilToInt(platforms.score / 3) < 0)
        {
            if (!src.isPlaying)
            {
                src.PlayOneShot(errorSound);
            }
            
            
        } else
        {
            
            PlayerPrefs.SetInt("Coins", PlayerPrefs.GetInt("Coins") - 25 + Mathf.CeilToInt(platforms.score / 3));
            backGroundButton.SetActive(true);
            gameObject.SetActive(false);
            Debug.Log("Player continued");
            deathcube.playerDead = false;
            player.Resurrect();
            continueOption.SetActive(false);
            coinOption.SetActive(false);
            adOption.SetActive(false);
        }
        
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
            backGroundButton.SetActive(false);
            var options = new ShowOptions { resultCallback = HandleShowResult };
            Advertisement.Show(null, options);
        }

        continueOption.SetActive(false);
        coinOption.SetActive(false);
        adOption.SetActive(false);

    }

    private void HandleShowResult(ShowResult result)
    {
        switch (result)
        {
            case ShowResult.Finished:
                backGroundButton.SetActive(true);
                gameObject.SetActive(false);
                Debug.Log("Player continued");
                deathcube.playerDead = false;
                player.Resurrect();
                break;

            case ShowResult.Skipped:
                backGroundButton.SetActive(true);
                gameObject.SetActive(false);
                Debug.Log("Player continued");
                deathcube.playerDead = false;
                player.Resurrect();
                break;

            case ShowResult.Failed:
                backGroundButton.SetActive(true);
                break;
        }
    }

    // Use this for initialization
    void Start()
    {

    }


}
