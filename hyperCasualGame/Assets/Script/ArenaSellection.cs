using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class ArenaSellection : MonoBehaviour
{
    // Start is called before the first frame update
    public  GameObject ArenaSellectionPanel;
    public  Button Map1Button;
    public  Button Map2Button;
    public  Button Map3Button;
    public  Button Map4Button;
    public  Button Map5Button;
    public  Button PlayButton;
   
    public GameObject Map1StarImage;
    public GameObject Map2StarImage;
    public GameObject Map3StarImage;
    public GameObject Map4StarImage;
    public GameObject Map5StarImage;
    
      public GameObject Map1StarImageDead;
    public GameObject Map2StarImageDead;
    public GameObject Map3StarImageDead;
    public GameObject Map4StarImageDead;
    public GameObject Map5StarImageDead;

    public GameObject Map2LockImage;
    public GameObject Map3LockImage;
    public GameObject Map4LockImage;
    public GameObject Map5LockImage;

    public  GameObject Playobject;
    public static int SavedMapIndex=1; //save'yapınca buradan cekcez map indexini 1den5e 

    public static int CurrentMapIndex=0;
    public static int GelecekSceneIndex=100;//oyun ici scene takibi;
    public static int CurrentStageIndex=1; // 1-2-3, 3 son stage
    
     void Start()
    {
        ArenaSellectionPanel.SetActive(false);
        

      Map1StarImage.SetActive(false);
      Map2StarImage.SetActive(false);
      Map3StarImage.SetActive(false);
      Map4StarImage.SetActive(false);
      Map5StarImage.SetActive(false);

      Map1StarImageDead.SetActive(false);
      Map2StarImageDead.SetActive(false);
      Map3StarImageDead.SetActive(false);
      Map4StarImageDead.SetActive(false);
      Map5StarImageDead.SetActive(false);

      Map2LockImage.SetActive(false);
      Map3LockImage.SetActive(false);
      Map4LockImage.SetActive(false);
      Map5LockImage.SetActive(false);

      Map1Button.onClick.AddListener(Map1ButtonFunc);
      Map2Button.onClick.AddListener(Map2ButtonFunc);
      Map3Button.onClick.AddListener(Map3ButtonFunc);
      Map4Button.onClick.AddListener(Map4ButtonFunc);
      Map5Button.onClick.AddListener(Map5ButtonFunc);

      PlayButton.onClick.AddListener(PlayButtonFunc);

    if (SavedMapIndex==1)
    {
        Map1StarImage.SetActive(false);
        Map2StarImage.SetActive(false);
        Map3StarImage.SetActive(false);
        Map4StarImage.SetActive(false);
        Map5StarImage.SetActive(false);

        Map1StarImageDead.SetActive(true);

        Map1Button.enabled=true;
        Map2Button.enabled=false;
        Map3Button.enabled=false;    //save sistemi gelince düzelt burayi
        Map4Button.enabled=false;
        Map5Button.enabled=false;

        Map2LockImage.SetActive(true);
        Map3LockImage.SetActive(true);
        Map4LockImage.SetActive(true);
        Map5LockImage.SetActive(true);
    }
    else if (SavedMapIndex==2)
    {
        Map1StarImage.SetActive(true);
        Map2StarImage.SetActive(false);
        Map3StarImage.SetActive(false);
        Map4StarImage.SetActive(false);
        Map5StarImage.SetActive(false);

        Map2StarImageDead.SetActive(true);

        Map1Button.enabled=true;
        Map2Button.enabled=true;
        Map3Button.enabled=false;    //save sistemi gelince düzelt burayi
        Map4Button.enabled=false;
        Map5Button.enabled=false;

        Map3LockImage.SetActive(true);
        Map4LockImage.SetActive(true);
        Map5LockImage.SetActive(true);
    }
    else if (SavedMapIndex==3)
    {
        Map1StarImage.SetActive(true);
        Map2StarImage.SetActive(true);
        Map3StarImage.SetActive(false);
        Map4StarImage.SetActive(false);
        Map5StarImage.SetActive(false);

        Map3StarImageDead.SetActive(true);

        Map1Button.enabled=true;
        Map2Button.enabled=true;
        Map3Button.enabled=true;    //save sistemi gelince düzelt burayi
        Map4Button.enabled=false;
        Map5Button.enabled=false;

        Map4LockImage.SetActive(true);
        Map5LockImage.SetActive(true);
    }
    else if (SavedMapIndex==4)
    {
        Map1StarImage.SetActive(true);
        Map2StarImage.SetActive(true);
        Map3StarImage.SetActive(true);
        Map4StarImage.SetActive(false);
        Map5StarImage.SetActive(false);

        Map4StarImageDead.SetActive(true);

        Map1Button.enabled=true;
        Map2Button.enabled=true;
        Map3Button.enabled=true;    //save sistemi gelince düzelt burayi
        Map4Button.enabled=true;
        Map5Button.enabled=false;

        Map5LockImage.SetActive(true);
    }
    else if (SavedMapIndex==5)
    {
        Map1StarImage.SetActive(true);
        Map2StarImage.SetActive(true);
        Map3StarImage.SetActive(true);
        Map4StarImage.SetActive(true);
        Map5StarImage.SetActive(false);

        Map5StarImageDead.SetActive(true);

        Map1Button.enabled=true;
        Map2Button.enabled=true;
        Map3Button.enabled=true;    //save sistemi gelince düzelt burayi
        Map4Button.enabled=true;
        Map5Button.enabled=true;

        Map5LockImage.SetActive(false);
    }
      
      //print(SceneManager.GetActiveScene().buildIndex);
     /* if (SceneManager.GetActiveScene().buildIndex==1)
      {
          Invoke("LoadNextScene",1);
      }*/
     }
   
    

    private void Map1ButtonFunc()
    {
        CurrentMapIndex=1;
        print("map1calisti");
        
        SceneManager.LoadScene(1);
        //LoadMap1Scene();
        
    }
    private void Map2ButtonFunc()
    {
        CurrentMapIndex=2;
        print("map2calisti");
        SceneManager.LoadScene(1);
        //LoadNextScene();
        
    }
     private void Map3ButtonFunc()
    {
        CurrentMapIndex=3;
        print("map3calisti");
        //LoadNextScene();
        
    }
     private void Map4ButtonFunc()
    {
        CurrentMapIndex=4;
        print("map4calisti");
        //LoadNextScene();
        
    }
     private void Map5ButtonFunc()
    {
        CurrentMapIndex=5;
        print("map5calisti");
        //LoadNextScene();
        
    }
    private void PlayButtonFunc()
    {
        CurrentStageIndex=1;
        print("playbuttoncalisti");
        ArenaSellectionPanel.SetActive(true);
        
        SettingsControl SettingsDeneme=gameObject.GetComponent<SettingsControl>();
        SettingsDeneme.SettingsPanel.SetActive(false);
        SettingsDeneme.SettingsButton.gameObject.SetActive(false);
        
        
    }
    public void LoadNextScene() 
    {
        int currentSceneIndex = SceneManager.GetActiveScene().buildIndex;
        SceneManager.LoadScene(currentSceneIndex + 1);
     }
     public void LoadMap1Scene() 
    {
        //int currentSceneIndex = SceneManager.GetActiveScene().buildIndex;
        SceneManager.LoadScene(3);
     }

    public void LoadStartScene() 
    {
        SceneManager.LoadScene(0);
    }
}
