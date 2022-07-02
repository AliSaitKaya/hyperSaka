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
    private int projectiledangelendamagehero;
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
       //DeadFlag=0;
        projectiledangelendamagehero=other.gameObject.GetComponent<ProjectileMoveScript>().ProjectileDamage;
        switch(other.gameObject.tag)
        {
            case "defaultskillfinal":
            
            healthController.Damage(projectiledangelendamagehero);
            HealthUpdate();
            
            //print("enemywizardcani gitti");
            //print(other.gameObject.GetComponent<ProjectileMoveScript>().ProjectileAtanKisi);
            break;

            case "orb5orange":

            healthController.Damage(projectiledangelendamagehero);
            HealthUpdate();
            break;

            case "icespike":

            healthController.Damage(projectiledangelendamagehero);
            HealthUpdate();
            break;

            case "slashpurple":

            healthController.Damage(projectiledangelendamagehero);
            HealthUpdate();
            break;

            case "orb4blue":

            healthController.Damage(projectiledangelendamagehero);
            HealthUpdate();
            break;

            case "blackholered":

            healthController.Damage(projectiledangelendamagehero);
            HealthUpdate();
            break;

            case "orb1purple":

            healthController.Damage(projectiledangelendamagehero);
            HealthUpdate();
            break;

            case "fireball3orange":

            healthController.Damage(projectiledangelendamagehero);
            HealthUpdate();
            break;

            case "orb1red":

            healthController.Damage(projectiledangelendamagehero);
            HealthUpdate();
            break;

            case "waterballorange":

            healthController.Damage(projectiledangelendamagehero);
            HealthUpdate();
            break;

            case "waterballblue":

            healthController.Damage(projectiledangelendamagehero);
            HealthUpdate();
            break;
            default:
            //hicbirine girmezse buraya mi girecek ?
            break;

        

        }
        /*if (DeadFlag==1)
        {
            print("deadprint");
                if (other.gameObject.GetComponent<ProjectileMoveScript>().ProjectileAtanKisi=="Wizard")
                {
                    AttackScripterisim = GameObject.Find("Wizard");
                    AttackScripterisim.GetComponent<attack>().wizardKillMethod();
                }
                else
                {
                    aiScriptErisim=GameObject.Find(other.gameObject.GetComponent<ProjectileMoveScript>().ProjectileAtanKisi);
                    aiScriptErisim.GetComponent<ai>().aiKillMethod();
                }
        }
        */

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
