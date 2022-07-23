using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class LoadingPage : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        Invoke("LoadLevelInvoke",1);
        
    }
    void LoadLevelInvoke ()
    {
        print("market denemesi");
        if (ArenaSellection.GelecekSceneIndex==2)
        {
            LoadLevel(ArenaSellection.GelecekSceneIndex);
            print("marketteyiz");
            return;
        }
       print("markete gitmedi");
        if (ArenaSellection.CurrentMapIndex==1)
        {
            if (ArenaSellection.CurrentStageIndex==1)
            {
                ArenaSellection.GelecekSceneIndex=3;
            }
            else if (ArenaSellection.CurrentStageIndex==2)
            {
                ArenaSellection.GelecekSceneIndex=4;
            }
            else if (ArenaSellection.CurrentStageIndex==3)
            {
                ArenaSellection.GelecekSceneIndex=5;
            }
            
        }
        else if (ArenaSellection.CurrentMapIndex==2)
        {
            if (ArenaSellection.CurrentStageIndex==1)
            {
                ArenaSellection.GelecekSceneIndex=6;
            }
            else if (ArenaSellection.CurrentStageIndex==2)
            {
                ArenaSellection.GelecekSceneIndex=7;
            }
            else if (ArenaSellection.CurrentStageIndex==3)
            {
                ArenaSellection.GelecekSceneIndex=8;
            }
            
        }

         else if (ArenaSellection.CurrentMapIndex==3)
        {
            if (ArenaSellection.CurrentStageIndex==1)
            {
                ArenaSellection.GelecekSceneIndex=9;
            }
            else if (ArenaSellection.CurrentStageIndex==2)
            {
                ArenaSellection.GelecekSceneIndex=10;
            }
            else if (ArenaSellection.CurrentStageIndex==3)
            {
                ArenaSellection.GelecekSceneIndex=11;
            }
            
        }

         else if (ArenaSellection.CurrentMapIndex==4)
        {
            if (ArenaSellection.CurrentStageIndex==1)
            {
                ArenaSellection.GelecekSceneIndex=12;
            }
            else if (ArenaSellection.CurrentStageIndex==2)
            {
                ArenaSellection.GelecekSceneIndex=13;
            }
            else if (ArenaSellection.CurrentStageIndex==3)
            {
                ArenaSellection.GelecekSceneIndex=14;
            }
            
        }
        else if (ArenaSellection.CurrentMapIndex==5)
        {
            if (ArenaSellection.CurrentStageIndex==1)
            {
                ArenaSellection.GelecekSceneIndex=15;
            }
            else if (ArenaSellection.CurrentStageIndex==2)
            {
                ArenaSellection.GelecekSceneIndex=16;
            }
            else if (ArenaSellection.CurrentStageIndex==3)
            {
                ArenaSellection.GelecekSceneIndex=17;
            }
            
        }

         print("geleceksceneindex");
         
        print(ArenaSellection.GelecekSceneIndex);
        print("currentmapindex");
         
        print(ArenaSellection.CurrentMapIndex);
        print("currentstageindex");
         
        print(ArenaSellection.CurrentStageIndex);

        
        LoadLevel(ArenaSellection.GelecekSceneIndex);
    }
    void LoadLevel (int sceneIndex)
    {
        StartCoroutine(LoadAsynchronously(sceneIndex));
    }

    IEnumerator LoadAsynchronously (int sceneIndex)
    {
        AsyncOperation operation=SceneManager.LoadSceneAsync(sceneIndex);

        while(!operation.isDone)
        {
            yield return null;
        }
    }
    // Update is called once per frame
    void Update()
    {
        
    }
}
