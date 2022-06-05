using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.AI;
using UnityEngine.SceneManagement;

public class HeroHealthSystem : MonoBehaviour
{
    HealthController healthController = new HealthController(300, 300);

    Slider healthSlider;
    Text maxHealthText;
    Text currentHealthText;

    ParticleSystem poisionAnim;
    ParticleSystem explosionAnim;
    ParticleSystem freezingAnim;
    public Animator animator;
    public GameObject enemies;
    GameObject gravestone;
    Text deneme;
    bool graveStoneControl = true; //s�rekli graveStone koymas�n diye
 
    
    public void Awake()
    {
        healthSlider = GetComponentInChildren<Slider>();
        maxHealthText = GetComponentsInChildren<Text>()[2];
        currentHealthText = GetComponentsInChildren<Text>()[0];
        poisionAnim = GetComponentsInChildren<ParticleSystem>()[1];
        explosionAnim = GetComponentsInChildren<ParticleSystem>()[2];
        freezingAnim = GetComponentsInChildren<ParticleSystem>()[3];

        HealthUpdate();
        poisionAnim.Stop();
        explosionAnim.Stop();
        freezingAnim.Stop();

        gravestone = GameObject.FindGameObjectWithTag("Gravestone");

        healthSlider.value = healthController.GetHealthMax();
        maxHealthText.text = "" + healthController.GetHealthMax();

        InvokeRepeating("InvokeDamage", 1 , 1);
    }

    public void Update()
    {
        if (!DamageCircle.IsOutsideCircle(transform.position) && !healthController.IsDead())
        {
            poisionAnim.Stop();  // poision kesintisiz olsun diye loop olarak başlatılıp sonra durduruluyor.
        }

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
        if(SceneManager.GetActiveScene().name=="MarketScene")
        {
            return;
        }
        

        
        if (DamageCircle.IsOutsideCircle(transform.position) && !healthController.IsDead())
        {
            healthController.Damage(5);
            HealthUpdate();
            poisionAnim.Play();
        }

    }
    public bool IsDead()
    {
        return healthController.IsDead();
    }

    public void DeadStatus()
    {

        animator.SetBool("die", true);
        Invoke("", 2);
        
        GetComponent<Animator>().enabled = false;
        GetComponent<move>().enabled = false;
        GetComponent<attack>().enabled = false;
        GetComponent<NavMeshObstacle>().enabled = false;
        GetComponent<BoxCollider>().enabled = false;
        
        PanelController.Instance.SetCloseOpenAllPanels();
        PanelController.Instance.SetFailPanel(true);
            
        Destroy(gameObject);
        Destroy(enemies);

       // GameObject graveStone = GameObject.Instantiate(gravestone);
       // graveStone.transform.position = transform.position;
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
            explosionAnim.Play();
        }
        else if (other.gameObject.tag == "spikesAnim")
        {
            //print("ENTERdefaultanim");
            healthController.Damage(25);
            HealthUpdate();
            explosionAnim.Play();
        }
        else if (other.gameObject.tag == "lightningAnim")
        {
            //print("ENTERdefaultanim");
            healthController.Damage(37);
            HealthUpdate();
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
     void OnCollisionEnter(Collision other)

     {
        /*
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
         }*/

        if (other.gameObject.tag == "DefaultBallAnim" || other.gameObject.tag == "DefaultBallAnimAI")
        {
            healthController.Damage(50);
            HealthUpdate();
            explosionAnim.Play();
        }
        else if (other.gameObject.tag == "FireballAnim")
        {
            healthController.Damage(43);
            HealthUpdate();
            explosionAnim.Play();
        }
        else if (other.gameObject.tag == "WaterballAnim")
        {
            healthController.Damage(33);
            HealthUpdate();
            freezingAnim.Play();
        }
        else if (other.gameObject.tag == "LightningballAnim")
        {
            healthController.Damage(23);
            HealthUpdate();
            explosionAnim.Play();
        }

    }
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

        if (other.gameObject.tag == "DefaultBallAnim" || other.gameObject.tag == "DefaultBallAnimAI")
        {
            healthController.Damage(50);
            HealthUpdate();
            explosionAnim.Play();
        }
        else if (other.gameObject.tag == "FireballAnim")
        {
            healthController.Damage(43);
            HealthUpdate();
            explosionAnim.Play();
        }
        else if (other.gameObject.tag == "WaterballAnim")
        {
            healthController.Damage(33);
            HealthUpdate();
            freezingAnim.Play();
        }
        else if (other.gameObject.tag == "LightningballAnim")
        {
            healthController.Damage(23);
            HealthUpdate();
            explosionAnim.Play();
        }


    }
}
