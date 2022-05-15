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
        LoadLevel(2);
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
