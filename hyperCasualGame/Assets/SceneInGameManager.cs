using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class SceneInGameManager : MonoBehaviour
{
    //private AudioSource ingameaudio;
    
   //public Button playButton;
     void Start()
    {

        //AudioPlayerManager.mainmenuaudio
        //ingameaudio = GetComponent<AudioSource>();
         //ingameaudio.Play();
      //playButton.onClick.AddListener(playButtonFunc);
      //print(SceneManager.GetActiveScene().buildIndex);
      if (SceneManager.GetActiveScene().buildIndex==5)
      {
          Invoke("LoadNextScene",1);
      }
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
