using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class ArenaSellection : MonoBehaviour
{
    // Start is called before the first frame update
    public  GameObject ArenaSellectionPanel;
    public  Button Map1Button;
    public  Button PlayButton;
     void Start()
    {
        ArenaSellectionPanel.SetActive(false);
      
      Map1Button.onClick.AddListener(Map1ButtonFunc);
      PlayButton.onClick.AddListener(PlayButtonFunc);
      //print(SceneManager.GetActiveScene().buildIndex);
      if (SceneManager.GetActiveScene().buildIndex==1)
      {
          Invoke("LoadNextScene",1);
      }
     }

    private void Map1ButtonFunc()
    {
        print("map1calisti");
        LoadNextScene();
        
    }
    private void PlayButtonFunc()
    {
        print("playbuttoncalisti");
        ArenaSellectionPanel.SetActive(true);
        
        
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
