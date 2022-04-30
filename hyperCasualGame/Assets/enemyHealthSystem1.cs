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

    ParticleSystem bloodingAnim;

    public void Start()
    {
        healthSlider = GetComponentInChildren<Slider>();
        maxHealthText = GetComponentsInChildren<Text>()[2];
        currentHealthText = GetComponentsInChildren<Text>()[0];
        bloodingAnim = transform.GetChild(4).GetComponentInChildren<ParticleSystem>();

        bloodingAnim.Stop();

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

        if (!bloodingAnim.isPlaying)
            bloodingAnim.Stop();
    }

    public void InvokeDamage()
    {
        if(DamageCircle.IsOutsideCircle(transform.position) && !healthController.IsDead())
        { 
            healthController.Damage(5); 
            if(!bloodingAnim.isPlaying)
                bloodingAnim.Play(); 
        }
            
    }
     public void DeadStatus()
    {
        print(this.name);
            print("dead");
            Destroy(gameObject);
    }

    void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "tornadoAnim")
        {
            //print("ENTER");
            //print(other.transform.name);
            //print(gameObject.name);
            healthController.Damage(10);
            bloodingAnim.Play();
        }
       else if (other.gameObject.tag == "spikesAnim")
        {
            //print("ENTERdefaultanim");
            healthController.Damage(25);
            bloodingAnim.Play();
        }
         else if (other.gameObject.tag == "lightningAnim")
        {
            //print("ENTERdefaultanim");
            healthController.Damage(37);
            bloodingAnim.Play();
        }
       /* if (other.gameObject.tag == "fireballAnim")
        {
            //print("ENTER");
            //print(other.transform.name);
            //print(gameObject.name);
            print("triggerfireball");
            healthController.Damage(17);
        }*/
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
    void OnParticleCollision(GameObject other)
    {
        /* if (other.gameObject.tag == "atesnova")
         {
             print("EXIT");
         }*/

        if (other.gameObject.tag == "fireballAnim")
        {   
            healthController.Damage(7);
            bloodingAnim.Play();
        }
           

    }

}
