using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class IAPModel : MonoBehaviour {

    public IAPManager iapManager;

    public Dropdown dropDown;
    public GameObject big;
    public GameObject Selected;
    public GameObject coinpackages;
    public UnityEngine.UI.Text text;

    public void OpenOptions()
    {
        if (coinpackages.activeInHierarchy)
        {
            coinpackages.SetActive(false);
            big.SetActive(true);
            Selected.SetActive(true);
            text.text = "Buy More Coins";

        } else
        {
            coinpackages.SetActive(true);
            big.SetActive(false);
            Selected.SetActive(false);
           
            text.text = "Back To Shop";
        }
    }


    public void BuyGold1000 ()
    {
        iapManager.Buy1000Gold();
        print("tec 9 armore");
    }

    public void BuyGold2000()
    {
        iapManager.Buy2000Gold();
        print("rash B");
    }

    public void BuyGold4000()
    {
        iapManager.Buy4000Gold();
        print("cyka blyat");
    }

    public void BuyGold8000()
    {
        iapManager.Buy8000Gold();
        print("ayy lmao");
    }

}
