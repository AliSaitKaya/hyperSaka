using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;


public class SceneLoader : MonoBehaviour
{
    public Button playButton;
     void Start()
    {
      
      playButton.onClick.AddListener(playButtonFunc);
     }

    private void playButtonFunc()
    {
        print("selam");
        LoadNextScene();
        
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
