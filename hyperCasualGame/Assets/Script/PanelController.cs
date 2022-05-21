using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class PanelController : MonoBehaviour
{
    public static PanelController Instance;
    //public GameObject _StartPanel;
    //public GameObject _LevelsSelectionPanel;
    public GameObject _FailPanel;
    public GameObject _SuccessPanel;
    public Button TurnToMenuButton;
    public Button NextLevelButton;
    public GameObject _DeathLogPanel;

    public  Text AliveCountText;
    public static int AliveCountNumber;
    //public GameObject _SettingsPanel;

    List<GameObject> Panels = new List<GameObject>();

    public void Awake()
    {
        Instance = this;
        AliveCountNumber=int.Parse(AliveCountText.text);
        
    }

    public void Start()
    {
          //Panels.Add(_StartPanel);
        //Panels.Add(_LevelsSelectionPanel);
        TurnToMenuButton.onClick.AddListener(TurnToMenuButtonFunc);
        NextLevelButton.onClick.AddListener(NextLevelButtonFunc);
        Panels.Add(_FailPanel);
        Panels.Add(_SuccessPanel);
        Panels.Add(_DeathLogPanel);
        //   Panels.Add(_SettingsPanel);

        SetCloseOpenAllPanels();
        SetDeathLogPanel(true);
    }
    private void TurnToMenuButtonFunc()
    {
        print("map1calisti");
        SceneManager.LoadScene(0);
        
    }
    private void NextLevelButtonFunc()
    {
        print("map1calisti");
        SceneManager.LoadScene(0);
        
    }

    public void AliveCountUpdate()
    {
        AliveCountText.text=AliveCountNumber.ToString();
    }

    /*public void SetStartPanel(bool open)
    {
        _StartPanel.SetActive(open);
        //TODO ali
        //Panel a��kken addlistener eklenmeli. kapat�l�nca listenerdan ��k�lmal�. ama nas�l ?
        //T�m paneller i�in ayn�s� yap�lmal�. 
    }*/

    /*public void SetLevelsSelectionPanel(bool open)
    {
        _LevelsSelectionPanel.SetActive(open);
    }*/

    public void SetFailPanel(bool open)
    {
        _FailPanel.SetActive(open);
    }

    public void SetSuccessPanel(bool open)
    {
        _SuccessPanel.SetActive(open);
    }

    public void SetDeathLogPanel(bool open)
    {
        _DeathLogPanel.SetActive(open);
    }

    /*public void SetSettingsPanel(bool open)
    {
        _SettingsPanel.SetActive(open);
    }*/

    public void SetCloseOpenAllPanels()
    {
        foreach (GameObject panel in Panels)
        {
            panel.SetActive(false);
        }
    }

}
