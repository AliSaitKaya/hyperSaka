using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class enemyHealthSystem1 : MonoBehaviour
{
    HealthController healthController = new HealthController(100, 100);
    Slider healthSlider;
    Text maxHealthText;
    Text currentHealthText;
    

    public void Start()
    {
        
        healthSlider = GetComponentInChildren<Slider>();
        maxHealthText = GetComponentsInChildren<Text>()[2];
        currentHealthText = GetComponentsInChildren<Text>()[0];

        //  healthSlider = GameObject.FindGameObjectWithTag("HealthSlider").GetComponent<Slider>();
   //     maxHealthText = GameObject.FindGameObjectWithTag("MaxHealthText").GetComponent<Text>();
    //    currentHealthText = GameObject.FindGameObjectWithTag("CurrentHealthText").GetComponent<Text>();
       
        healthSlider.value = healthController.GetHealthMax();
        maxHealthText.text = "" + healthController.GetHealthMax();

        InvokeRepeating("InvokeDamage", 1 , 1);
    }

    public void Update()
    {
        healthSlider.value = healthController.GetHealthCurrent();
        currentHealthText.text = "" + healthController.GetHealthCurrent();
        if (healthSlider.value<=0)
        {
            DeadStatus();
        }

    }

    public void InvokeDamage()
    {
        if(DamageCircle.IsOutsideCircle(transform.position) && !healthController.IsDead())
            healthController.Damage(5);
    }
     public void DeadStatus()
    {
        print(this.name);
            print("dead");
            Destroy(gameObject);
    }

    void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "atesnova")
        {
            //print("ENTER");
            //print(other.transform.name);
            //print(gameObject.name);
            healthController.Damage(5);
        }
       else if (other.gameObject.tag == "DefaultAnim")
        {
            //print("ENTERdefaultanim");
            healthController.Damage(50);
        }
    }
   /* void OnCollisionEnter(Collision other)
        
    {
        print("sa");
        if (other.gameObject.tag == "atesnova")
        {
            print("ENTER");
            healthController.Damage(5);
        }
       else if (other.gameObject.tag == "DefaultAnim")
        {
            print("ENTERdefaultanim");
            healthController.Damage(50);
        }
    }*/
    void OnTriggerStay(Collider other)
    {
        //edit gelebilir
    }
    void OnTriggerExit(Collider other)
    {
       /* if (other.gameObject.tag == "atesnova")
        {
            print("EXIT");
        }*/
    }
}
