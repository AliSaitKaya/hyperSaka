using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameMain : MonoBehaviour
{
    // Start is called before the first frame update
    
    
    void Start()
    {
        
        Invoke("PlayerHealth",4);
        
    }

    void PlayerHealth()
    {
        //HealthSystem healthObj=new HealthSystem();
        //healthObj.GetComponent<HealthSystem>.Damage(7);
        //healthObj = GameObject.FindObjectOfType(typeof(HealthSystem)) as HealthSystem;
        //healthObj.Damage(7);
        gameObject.GetComponent<HealthSystem>().Damage(7);
        Debug.Log("GAMEMAIN");
    }
    // Update is called once per frame
    void Update()
    {
        
    }
}
