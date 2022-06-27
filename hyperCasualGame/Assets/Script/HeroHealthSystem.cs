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
        switch (other.gameObject.tag)
        {
            case "defaultskillfinal":

                healthController.Damage(20);
                HealthUpdate();
                break;

            case "Skill1":

                healthController.Damage(10);
                HealthUpdate();
                break;

            case "Skill2":

                healthController.Damage(10);
                HealthUpdate();
                break;

            case "Skill3":

                healthController.Damage(10);
                HealthUpdate();
                break;

            case "Skill4":

                healthController.Damage(10);
                HealthUpdate();
                break;

            case "Skill5":

                healthController.Damage(10);
                HealthUpdate();
                break;

            case "Skill6":

                healthController.Damage(10);
                HealthUpdate();
                break;

            case "Skill7":

                healthController.Damage(10);
                HealthUpdate();
                break;

            case "Skill9":

                healthController.Damage(10);
                HealthUpdate();
                break;

            case "Skill10":

                healthController.Damage(10);
                HealthUpdate();
                break;

            case "Skill11":

                healthController.Damage(10);
                HealthUpdate();
                break;

            case "Skill12":

                healthController.Damage(10);
                HealthUpdate();
                break;

            case "Skill13":

                healthController.Damage(10);
                HealthUpdate();
                break;

            case "Skill14":

                healthController.Damage(10);
                HealthUpdate();
                break;

            case "Skill15":

                healthController.Damage(10);
                HealthUpdate();
                break;

            case "Skill16":

                healthController.Damage(10);
                HealthUpdate();
                break;

            case "Skill17":

                healthController.Damage(10);
                HealthUpdate();
                break;

            case "Skill18":

                healthController.Damage(10);
                HealthUpdate();
                break;

            case "Skill19":

                healthController.Damage(10);
                HealthUpdate();
                break;

            case "Skill20":

                healthController.Damage(10);
                HealthUpdate();
                break;

            case "Skill21":

                healthController.Damage(10);
                HealthUpdate();
                break;




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
