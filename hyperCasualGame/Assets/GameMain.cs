using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameMain : MonoBehaviour
{
    public Text DeathLog1;
    public Text DeathLog2;

    public Text DeathLog3;
    public Image DeathSkull1;
    public Image DeathSkull2;
    public Image DeathSkull3;
    
    
    void Start()
    {
        DeathSkull1.enabled=false;
        DeathSkull2.enabled=false;
        DeathSkull3.enabled=false;
        
    }

    void PlayerHealth()
    {
        //HealthSystem healthObj=new HealthSystem();
        //healthObj.GetComponent<HealthSystem>.Damage(7);
        //healthObj = GameObject.FindObjectOfType(typeof(HealthSystem)) as HealthSystem;
        //healthObj.Damage(7);
       // gameObject.GetComponent<HealthSystem>().Damage(7);
       // Debug.Log("GAMEMAIN");
    }
    // Update is called once per frame
    void Update()
    {
        
    }
}
