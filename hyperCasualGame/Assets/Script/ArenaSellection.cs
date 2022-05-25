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
    public  Button PlayButton;
   
    public GameObject Map1StarImage;
    public GameObject Map2StarImage;
    public GameObject Map3StarImage;
    public GameObject Map4StarImage;
    
      public GameObject Map1StarImageDead;
    public GameObject Map2StarImageDead;
    public GameObject Map3StarImageDead;
    public GameObject Map4StarImageDead;

    public  GameObject Playobject;
    private int SavedMapIndex=4; //save'yapınca buradan cekcez map indexini 1den5e 
    public static int GelecekSceneIndex=100;//oyun ici scene takibi;
    
     void Start()
    {
        ArenaSellectionPanel.SetActive(false);
    
      Map1StarImage.SetActive(false);
      Map2StarImage.SetActive(false);
      Map3StarImage.SetActive(false);
      Map4StarImage.SetActive(false);

      Map1StarImageDead.SetActive(false);
      Map2StarImageDead.SetActive(false);
      Map3StarImageDead.SetActive(false);
      Map4StarImageDead.SetActive(false);

      Map1Button.onClick.AddListener(Map1ButtonFunc);
      Map2Button.onClick.AddListener(Map2ButtonFunc);
      Map3Button.onClick.AddListener(Map3ButtonFunc);
      Map4Button.onClick.AddListener(Map4ButtonFunc);

      PlayButton.onClick.AddListener(PlayButtonFunc);

    if (SavedMapIndex==1)
    {
        Map1StarImage.SetActive(false);
        Map2StarImage.SetActive(false);
        Map3StarImage.SetActive(false);
        Map4StarImage.SetActive(false);

        Map1StarImageDead.SetActive(true);

        Map1Button.enabled=true;
        Map2Button.enabled=false;
        Map3Button.enabled=false;    //save sistemi gelince düzelt burayi
        Map4Button.enabled=false;
    }
    else if (SavedMapIndex==2)
    {
        Map1StarImage.SetActive(true);
        Map2StarImage.SetActive(false);
        Map3StarImage.SetActive(false);
        Map4StarImage.SetActive(false);

        Map2StarImageDead.SetActive(true);

        Map1Button.enabled=true;
        Map2Button.enabled=true;
        Map3Button.enabled=false;    //save sistemi gelince düzelt burayi
        Map4Button.enabled=false;
    }
    else if (SavedMapIndex==3)
    {
        Map1StarImage.SetActive(true);
        Map2StarImage.SetActive(true);
        Map3StarImage.SetActive(false);
        Map4StarImage.SetActive(false);

        Map3StarImageDead.SetActive(true);

        Map1Button.enabled=true;
        Map2Button.enabled=true;
        Map3Button.enabled=true;    //save sistemi gelince düzelt burayi
        Map4Button.enabled=false;
    }
    else if (SavedMapIndex==4)
    {
        Map1StarImage.SetActive(true);
        Map2StarImage.SetActive(true);
        Map3StarImage.SetActive(true);
        Map4StarImage.SetActive(false);

        Map4StarImageDead.SetActive(true);

        Map1Button.enabled=true;
        Map2Button.enabled=true;
        Map3Button.enabled=true;    //save sistemi gelince düzelt burayi
        Map4Button.enabled=true;
    }
      
      //print(SceneManager.GetActiveScene().buildIndex);
     /* if (SceneManager.GetActiveScene().buildIndex==1)
      {
          Invoke("LoadNextScene",1);
      }*/
     }
   
    

    private void Map1ButtonFunc()
    {
        print("map1calisti");
        //LoadMap1Scene();
        
    }
    private void Map2ButtonFunc()
    {
        print("map2calisti");
        //LoadNextScene();
        
    }
     private void Map3ButtonFunc()
    {
        print("map3calisti");
        //LoadNextScene();
        
    }
     private void Map4ButtonFunc()
    {
        print("map4calisti");
        //LoadNextScene();
        
    }
    private void PlayButtonFunc()
    {
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
