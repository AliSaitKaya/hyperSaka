using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameMain : MonoBehaviour
{
    // Start is called before the first frame update

    
    void Start()
    {
        HealthSystem healthObj=new HealthSystem (100);
        healthObj.Damage(10);
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
