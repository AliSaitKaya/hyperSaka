using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class DeathLogPanelController : MonoBehaviour
{

    public GameObject DeathLogPanel;
    
    public Text DeathLogText1;
    public Text DeathLogText2;
    public Text DeathLogText3;

    public Image DeathSkull1;
    public Image DeathSkull2;
    public Image DeathSkull3;


    void Start()
    {
        DeathLogText1 = DeathLogPanel.GetComponentsInChildren<Text>()[0];
        DeathLogText2 = DeathLogPanel.GetComponentsInChildren<Text>()[1];
        DeathLogText3 = DeathLogPanel.GetComponentsInChildren<Text>()[2];

        DeathSkull1 = DeathLogPanel.GetComponentsInChildren<Image>()[1];
        DeathSkull2 = DeathLogPanel.GetComponentsInChildren<Image>()[2];
        DeathSkull3 = DeathLogPanel.GetComponentsInChildren<Image>()[3];

        DeathSkull1.enabled = false;
        DeathSkull2.enabled = false;
        DeathSkull3.enabled = false;
    }
 
    public void DeadStatus(string name)
    {
        if ( DeathLogText1.text == "")
        {
             DeathSkull1.enabled = true;
             DeathLogText1.text = name;
        }
        else if ( DeathLogText2.text == "")
        {
             DeathSkull2.enabled = true;
             DeathLogText2.text = name;
        }
        else if ( DeathLogText3.text == "")
        {
             DeathSkull3.enabled = true;
             DeathLogText3.text = name;
        }
        else
        {
             DeathSkull1.enabled = false;
             DeathSkull2.enabled = false;
             DeathSkull3.enabled = false;
             DeathLogText1.text = name;
             DeathLogText2.text = "";
             DeathLogText3.text = "";

        }
    }

}
