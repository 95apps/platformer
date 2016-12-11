using UnityEngine;
using System.Linq;
using System.Collections;
using System.Collections.Generic;

public class Selected : MonoBehaviour
{

    public Scroll selected;
    public GameObject rawImage;
    public GameObject big;
    public GameObject Equipped;
    public GameObject Equip;
    public GameObject PurchaseEquip;
    

    // Use this for initialization
    void Start()
    {
      
    }

    public void PurchaseThis()
    {
        selected.Purchase();
    }

    public void EquipThis()
    {
        selected.Equip();
    }

    

    // Update is called once per frame
    void LateUpdate()
    {
    }

    public void DisplayPrompt()
    {
        switch (PlayerPrefs.GetInt(selected.gameObject.name))
        {
            case 0:
                Equip.SetActive(false);
                Equipped.SetActive(false);
                PurchaseEquip.SetActive(true);
                break;
            case 1:
                Equip.SetActive(false);
                Equipped.SetActive(true);
                PurchaseEquip.SetActive(false);
                break;
            case 2:
                Equip.SetActive(true);
                Equipped.SetActive(false);
                PurchaseEquip.SetActive(false);
                break;
            default:
                //kek9
                break;
        }
    }
}
