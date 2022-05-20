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
   

    public  GameObject Playobject;
    
     void Start()
    {
        ArenaSellectionPanel.SetActive(false);
    
      
      Map1Button.onClick.AddListener(Map1ButtonFunc);
      Map2Button.onClick.AddListener(Map2ButtonFunc);
      PlayButton.onClick.AddListener(PlayButtonFunc);

       
      Map2Button.enabled=false;
      Map3Button.enabled=false;    //save sistemi gelince düzelt burayi
      Map4Button.enabled=false;
      //print(SceneManager.GetActiveScene().buildIndex);
     /* if (SceneManager.GetActiveScene().buildIndex==1)
      {
          Invoke("LoadNextScene",1);
      }*/
     }
   
    

    private void Map1ButtonFunc()
    {
        print("map1calisti");
        LoadNextScene();
        
    }
    private void Map2ButtonFunc()
    {
        print("map2calisti");
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

    public void LoadStartScene() 
    {
        SceneManager.LoadScene(0);
    }
}
