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
    ParticleSystem freezingAnim;
    public Animator animator;
    GameObject gravestone;
    Text deneme;
    bool graveStoneControl = true; //s�rekli graveStone koymas�n diye

    public void Awake()
    {
        healthSlider = GetComponentInChildren<Slider>();
        maxHealthText = GetComponentsInChildren<Text>()[2];
        currentHealthText = GetComponentsInChildren<Text>()[0];
        bloodingAnim = GetComponentsInChildren<ParticleSystem>()[1];
        explosionAnim = GetComponentsInChildren<ParticleSystem>()[2];
        freezingAnim = GetComponentsInChildren<ParticleSystem>()[3];


        

        HealthUpdate();
        bloodingAnim.Stop();
        explosionAnim.Stop();
        freezingAnim.Stop();

        gravestone = GameObject.FindGameObjectWithTag("Gravestone");

        healthSlider.value = healthController.GetHealthMax();
        maxHealthText.text = "" + healthController.GetHealthMax();

        InvokeRepeating("InvokeDamage", 1 , 1);
    }

    public void Update()
    {
        

        if (!bloodingAnim.isPlaying)
            bloodingAnim.Stop();
        if (!explosionAnim.isPlaying)
            explosionAnim.Stop();
    }
    public void HealthUpdate()
    {
        healthSlider.value = healthController.GetHealthCurrent();
        currentHealthText.text = "" + healthController.GetHealthCurrent();

        if (healthController.IsDead() && graveStoneControl)
        {
            DeadStatus();
            graveStoneControl = false;
        }
    }
    public void InvokeDamage()
    {
        if(DamageCircle.IsOutsideCircle(transform.position) && !healthController.IsDead())
        { 
            healthController.Damage(5);
            HealthUpdate(); 
            if(!bloodingAnim.isPlaying)
                bloodingAnim.Play();
        }
            
    }
     public void DeadStatus()
    {
        //TODO ali. Ana karakter �l�rse sorun var.

        print(this.name + "is dead");
        //GetComponent<GameMain>().DeathLog1.text="asd";
        //DeathLog1.GetComponent<UnityEngine.UI.Text>().text = "text";
        DeathLogTexts();
         
        animator.SetBool("die", true);
        Invoke("",2);

        
        GetComponent<ai>().enabled = false;
        GetComponent<NavMeshAgent>().enabled = false;
        //Destroy(gameObject);

        GameObject graveStone = GameObject.Instantiate(gravestone);
        graveStone.transform.position = transform.position;
    }
    public void DeathLogTexts()
    {
        GameObject xd = GameObject.Find("Main Camera");  //game main'den deathlogtextleri cekmek icin yapildi(main cam'de game main)
        DeathLogPanelController deathLog = xd.GetComponent<DeathLogPanelController>();
        deathLog.DeadStatus(this.name);
    }

    void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "tornadoAnim")
        {
            //print("ENTER");
            //print(other.transform.name);
            //print(gameObject.name);
            healthController.Damage(10);
            HealthUpdate();
            bloodingAnim.Play();
            explosionAnim.Play();
        }
       else if (other.gameObject.tag == "spikesAnim")
        {
            //print("ENTERdefaultanim");
            healthController.Damage(25);
            HealthUpdate();
            bloodingAnim.Play();
            explosionAnim.Play();
        }
         else if (other.gameObject.tag == "lightningAnim")
        {
            //print("ENTERdefaultanim");
            healthController.Damage(37);
            HealthUpdate();
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

        if (other.gameObject.tag == "DefaultBallAnim" || other.gameObject.tag=="DefaultBallAnimAI") 
        {   
            healthController.Damage(50);
            HealthUpdate();
            bloodingAnim.Play();
            explosionAnim.Play();
        }
        else if (other.gameObject.tag=="FireballAnim")
        {
            healthController.Damage(43);
            HealthUpdate();
            bloodingAnim.Play();
            explosionAnim.Play();
        }
         else if (other.gameObject.tag=="WaterballAnim")
        {
            healthController.Damage(33);
            HealthUpdate();
            bloodingAnim.Play();
            freezingAnim.Play();
        }
         else if (other.gameObject.tag=="LightningballAnim")
        {
            healthController.Damage(23);
            HealthUpdate();
            bloodingAnim.Play();
            explosionAnim.Play();
        }
           

    }

}
