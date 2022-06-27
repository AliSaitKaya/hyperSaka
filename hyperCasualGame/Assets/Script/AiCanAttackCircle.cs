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

        if (!other.CompareTag(this.transform.parent.tag))
        {
            GetComponentInParent<ai>().Target = other.gameObject;
        }
    }
    void OnTriggerStay(Collider other)
    {

        if (!other.CompareTag(this.transform.parent.tag))
        {
          
            GetComponentInParent<ai>().Target = other.gameObject;
            /*
            print("stay "+other.tag);
            print("this.tag " + this.tag);
            */
            //print("this.parent.tag =  " + this.transform.parent.tag);
            
        }
    }


    private void OnTriggerExit(Collider other)
    {
        
        if (!other.CompareTag(this.transform.parent.tag))
        {
            GetComponentInParent<ai>().Target = null;
        }
    }

}
