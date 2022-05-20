using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class AiCanAttackCircle : MonoBehaviour
{
    public static AiCanAttackCircle Instance;

    private void Awake()
    {
        Instance = this;
    }

    
  void OnTriggerEnter(Collider other)
  {

    print("triggered.");
    if (other.CompareTag("enemyWizard") || other.CompareTag("Wizard") || other.CompareTag("enemyWizardCanAttackCollider"))
    {
        GetComponentInParent<ai>().Target = other.gameObject;
        print("target changed.");
    }
  }
  
}
