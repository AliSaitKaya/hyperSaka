using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.AI;

public class enemyHealthSystem1 : MonoBehaviour
{
    HealthController healthController = new HealthController(100, 100);
    Slider healthSlider;
    Text maxHealthText;
    Text currentHealthText;

    ParticleSystem bloodingAnim;
    ParticleSystem explosionAnim;
    public Animator animator;
    GameObject gravestone;
    bool graveStoneControl = true; //sürekli graveStone koymasýn diye

    public void Awake()
    {
        healthSlider = GetComponentInChildren<Slider>();
        maxHealthText = GetComponentsInChildren<Text>()[2];
        currentHealthText = GetComponentsInChildren<Text>()[0];
        bloodingAnim = GetComponentsInChildren<ParticleSystem>()[1];
        explosionAnim = GetComponentsInChildren<ParticleSystem>()[2];

        bloodingAnim.Stop();
        explosionAnim.Stop();

        gravestone = GameObject.FindGameObjectWithTag("Gravestone");

        healthSlider.value = healthController.GetHealthMax();
        maxHealthText.text = "" + healthController.GetHealthMax();

        InvokeRepeating("InvokeDamage", 1 , 1);
    }

    public void Update()
    {
        healthSlider.value = healthController.GetHealthCurrent();
        currentHealthText.text = "" + healthController.GetHealthCurrent();

        if (healthController.IsDead() && graveStoneControl)
        {
            DeadStatus();
            graveStoneControl = false;
        }

        if (!bloodingAnim.isPlaying)
            bloodingAnim.Stop();
        if (!explosionAnim.isPlaying)
            explosionAnim.Stop();
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
        //TODO ali. Ana karakter ölürse sorun var.

        print(this.name + "is dead");

        animator.SetBool("die", true);
        Invoke("",2);

        
        GetComponent<ai>().enabled = false;
        GetComponent<NavMeshAgent>().enabled = false;
        //Destroy(gameObject);

        GameObject graveStone = GameObject.Instantiate(gravestone);
        graveStone.transform.position = transform.position;
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
            explosionAnim.Play();
        }
       else if (other.gameObject.tag == "spikesAnim")
        {
            //print("ENTERdefaultanim");
            healthController.Damage(25);
            bloodingAnim.Play();
            explosionAnim.Play();
        }
         else if (other.gameObject.tag == "lightningAnim")
        {
            //print("ENTERdefaultanim");
            healthController.Damage(37);
            bloodingAnim.Play();
            explosionAnim.Play();
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
            explosionAnim.Play();
        }
           

    }

}
