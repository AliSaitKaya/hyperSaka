using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PanelController : MonoBehaviour
{
    public static PanelController Instance;
    public GameObject _StartPanel;
    public GameObject _LevelsSelectionPanel;
    public GameObject _FailPanel;
    public GameObject _SuccessPanel;
    public GameObject _DeathLogPanel;
    public GameObject _SettingsPanel;

    List<GameObject> Panels = new List<GameObject>();

    public void Awake()
    {
        Instance = this;
    }

    public void Start()
    {
        //  Panels.Add(_StartPanel);
        Panels.Add(_LevelsSelectionPanel);
        Panels.Add(_FailPanel);
        Panels.Add(_SuccessPanel);
        Panels.Add(_DeathLogPanel);
        //   Panels.Add(_SettingsPanel);

        SetCloseOpenAllPanels();
        SetDeathLogPanel(true);
    }

    public void SetStartPanel(bool open)
    {
        _StartPanel.SetActive(open);
        //TODO ali
        //Panel açýkken addlistener eklenmeli. kapatýlýnca listenerdan çýkýlmalý. ama nasýl ?
        //Tüm paneller için aynýsý yapýlmalý. 
    }

    public void SetLevelsSelectionPanel(bool open)
    {
        _LevelsSelectionPanel.SetActive(open);
    }

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

    public void SetSettingsPanel(bool open)
    {
        _SettingsPanel.SetActive(open);
    }

    public void SetCloseOpenAllPanels()
    {
        foreach (GameObject panel in Panels)
        {
            panel.SetActive(false);
        }
    }

}
