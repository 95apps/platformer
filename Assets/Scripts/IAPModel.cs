using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class IAPModel : MonoBehaviour {

    public IAPManager iapManager;

    public Dropdown dropDown;
    

    public void BuyGold (int value)
    {
        value = dropDown.value;
        switch (value)
        {
            case 0:
                iapManager.Buy1000Gold();
                print("rash B");
                break;
            case 1:
                iapManager.Buy2000Gold();
                print("cyka");
                break;
            case 2:
                iapManager.Buy3000Gold();
                print("blyat");
                break;
        }
    }

   

}
