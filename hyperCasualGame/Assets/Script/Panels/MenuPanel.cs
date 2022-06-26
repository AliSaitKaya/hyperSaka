using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class MenuPanel : MonoBehaviour
{

    Button RestartButton;
    Button HomeButton;

    public void Start()
    {
        RestartButton = GetComponentsInChildren<Button>()[0];
        HomeButton = GetComponentsInChildren<Button>()[1];

        RestartButton.onClick.AddListener(RestartAction);
        HomeButton.onClick.AddListener(HomeAction);
    }


    public void RestartAction()
    {
        SceneManager.LoadScene(SceneManager.GetActiveScene().name);
        RemoveAllListeners();
    }

    public void HomeAction()
    {
        SceneManager.LoadScene("MainMenu");
        RemoveAllListeners();
    }

    public void RemoveAllListeners()
    {
        RestartButton.onClick.RemoveListener(RestartAction);
        HomeButton.onClick.RemoveListener(HomeAction);
    }

}
