using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class MarketPanels : MonoBehaviour
{
    public GameObject _FullHpPanel;
    public GameObject _MageBuffPanel; 

    List<GameObject> Panels = new List<GameObject>();

    public void Start()
    {
        //hpaddbutton buff ad button ekle

        Panels.Add(_FullHpPanel);
        Panels.Add(_MageBuffPanel);

        SetCloseOpenAllPanels();
    
    }

    public void SetFullHpPanel(bool open)
    {
        _FullHpPanel.SetActive(open);
    }
    public void SetMageBuffPanel(bool open)
    {
        _MageBuffPanel.SetActive(open);
    }

    
    public void SetCloseOpenAllPanels()
    {
        foreach (GameObject panel in Panels)
        {
            panel.SetActive(false);
        }
    }

    void OnTriggerEnter(Collider other)
    {
        print(other.gameObject.name);
        if (this.gameObject.tag=="FullHpCollider" && other.gameObject.tag == "Wizard")
        {
            print("hppanelacilsin");
            SetCloseOpenAllPanels();
            SetFullHpPanel(true);
            
        }
        if (this.gameObject.tag=="MageBuffCollider" && other.gameObject.tag == "Wizard")
        {
            print("magebuffpanel");
            SetCloseOpenAllPanels();
            SetMageBuffPanel(true);
            
        }
         if (this.gameObject.tag=="MarketNextScene" && other.gameObject.tag == "Wizard")
        {
            SetCloseOpenAllPanels();
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
        if (other.gameObject.tag == "Wizard")
        {
            SetCloseOpenAllPanels();

        }
    }
}
