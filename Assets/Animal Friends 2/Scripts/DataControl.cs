﻿using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;

public class DataControl : MonoBehaviour {

    public GameObject Model;
    public Transform trModel;
    public CharData[] charData;
    public Transform[] charModel;
    public Vector3[] charModelSize;
    public string[] ModelName;
    public Animator[] charAnimator;

    public int charDataNum = 0;
    
    public CharControl charControl;
    public AniControl aniControl;
    
	// Use this for initialization
	void Start () {
        
        if (Model == null)
        {
            Debug.Log("Model == null");
        }
        else
        {
            trModel = Model.transform;
        }

        charData = new CharData[trModel.childCount];
        charModel = new Transform[trModel.childCount];
        ModelName = new string[trModel.childCount];
        charModelSize = new Vector3[trModel.childCount];
        charAnimator = new Animator[trModel.childCount];

        for (int i=0;i<charData.Length;i++)
        {
            charData[i] = trModel.GetChild(i).GetComponent<CharData>();
            charModel[i] = trModel.GetChild(i);
            ModelName[i] = charModel[i].name;
            charModelSize[i] = charModel[i].localScale;
            charAnimator[i] = charModel[i].GetComponent<Animator>();
            if (i > 0 )
            {
                //charModel[i].localScale = Vector3.zero;
				//charModel[i].localScale = new Vector3(0.01f, 0.01f, 0.01f);
				charModel[i].gameObject.SetActive(false);
            }
        }
        
        charControl.CharNum = charModel.Length;
        charControl.IsCharAni(ModelName);

        aniControl.charAniTotalNum = charData[charDataNum].aniamtionName.Length;
        aniControl.IsCharAni(charData[charDataNum].aniamtionName);

    }

    public void BtnChar(GameObject name)
    {
        Text text = name.GetComponent<Text>();
        for(int i=0; i<charModel.Length;i++)
        {

            if(text.text == charModel[i].name)
            {
                charDataNum = i;
                //charModel[i].localScale = charModelSize[i];
				charModel[i].gameObject.SetActive(true);
            }
            else
            {
                //charModel[i].localScale = Vector3.zero;
               //charModel[i].localScale = new Vector3(0.01f, 0.01f, 0.01f);
				charModel[i].gameObject.SetActive(false);
            }
        }

        aniControl.charAniTotalNum = charData[charDataNum].aniamtionName.Length;
        aniControl.CharAniNum = 0;
        aniControl.IsCharAni(charData[charDataNum].aniamtionName);
    }

    public void BtnAni(GameObject name)
    {
        Text text = name.GetComponent<Text>();

        for(int i=0; i<charData[charDataNum].aniamtionName.Length;i++)
        {
            if(text.text == charData[charDataNum].aniamtionName[i])
            {
                aniControl.CharAniNum = i;
                charAnimator[charDataNum].SetInteger("Status", i);
                break;
            }
        }
    }
}

