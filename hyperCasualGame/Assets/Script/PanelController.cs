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
    public Button MapCompletedButton;
    public GameObject _DeathLogPanel;

    public GameObject _FullHpPanel;
    public GameObject _MageBuffPanel;
    public GameObject _MapCompletedPanel;

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
        MapCompletedButton.onClick.AddListener(MapCompletedButtonFunc);

        Panels.Add(_FailPanel);
        Panels.Add(_SuccessPanel);
        Panels.Add(_DeathLogPanel);
        Panels.Add(_MapCompletedPanel);

        Panels.Add(_FullHpPanel);
        Panels.Add(_MageBuffPanel);
        //   Panels.Add(_SettingsPanel);

        SetCloseOpenAllPanels();
        SetDeathLogPanel(true);
    }
    private void TurnToMenuButtonFunc()
    {
        print("map1calisti");
        SceneManager.LoadScene(0);
        
    }
    private void MapCompletedButtonFunc()
    {
        print("mapcompleted");
        SceneManager.LoadScene(0); // edit gelcek 
        
    }
    private void NextLevelButtonFunc()
    {
        if (ArenaSellection.CurrentStageIndex==1)
        {
            ArenaSellection.CurrentStageIndex=2;
        }
        else 
        {
            ArenaSellection.CurrentStageIndex=3;
        }

        
        ArenaSellection.GelecekSceneIndex=2;//markete gecirme kodu
        SceneManager.LoadScene(1);
        
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
    public void SetMapCompletedPanel(bool open)
    {
        _MapCompletedPanel.SetActive(open);
    }

    public void SetDeathLogPanel(bool open)
    {
        _DeathLogPanel.SetActive(open);
    }
    public void SetFullHpPanel(bool open)
    {
        _FullHpPanel.SetActive(open);
    }
    public void SetMageBuffPanel(bool open)
    {
        _MageBuffPanel.SetActive(open);
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

    void OnTriggerEnter(Collider other)
    {
        print("xd");
        print(other.gameObject.name);
        if (other.gameObject.tag == "FullHpPanel")
        {
            SetCloseOpenAllPanels();
            SetFullHpPanel(true);
            
        }
        else if (other.gameObject.tag == "MageBuffPanel")
        {
            SetCloseOpenAllPanels();
            SetMageBuffPanel(true);
            
        }
        else if (other.gameObject.tag == "MarketNextScene")
        {
            SetCloseOpenAllPanels();
            print("hey");
            ArenaSellection.GelecekSceneIndex=100;
            SceneManager.LoadScene(1);
            
            
        }

       /* else if (other.gameObject.tag == "MageBuffPanel")
        {
            SetMageBuffPanel(true);
            SetCloseOpenAllPanels();
        }*/
       
       
    }
    void OnTriggerExit(Collider other)
    {
        if (other.gameObject.tag == "FullHpPanel" || other.gameObject.tag == "MageBuffPanel")
        {
            SetCloseOpenAllPanels();

        }
    }

}
