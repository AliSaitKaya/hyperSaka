using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.AI;

public class enemyHealthSystem1 : MonoBehaviour
{
    public PanelController PanelSc;
    HealthController healthController = new HealthController(100, 100);
    Slider healthSlider;
    Text maxHealthText;
    Text currentHealthText;

    ParticleSystem poisonAnim;
    ParticleSystem explosionAnim;
    ParticleSystem freezingAnim;
    public Animator animator;
    GameObject gravestone;
    Text deneme;

    public static int AliveCount;
    bool graveStoneControl = true; //s�rekli graveStone koymas�n diye

    public void Awake()
    {
        healthSlider = GetComponentInChildren<Slider>();
        maxHealthText = GetComponentsInChildren<Text>()[2];
        currentHealthText = GetComponentsInChildren<Text>()[0];
        poisonAnim = GetComponentsInChildren<ParticleSystem>()[1];
        explosionAnim = GetComponentsInChildren<ParticleSystem>()[2];
        freezingAnim = GetComponentsInChildren<ParticleSystem>()[3];

        HealthUpdate();
        poisonAnim.Stop();
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
            poisonAnim.Stop();  // poision kesintisiz olsun diye loop olarak başlatılıp sonra durduruluyor.
        }

        if (!explosionAnim.isPlaying)
            explosionAnim.Stop();
    }
    public bool IsDead()
    {
        return healthController.IsDead();
    }

    public void HealthUpdate()
    {
        healthSlider.value = healthController.GetHealthCurrent();
        currentHealthText.text = "" + healthController.GetHealthCurrent();

        if (IsDead() && graveStoneControl)
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
            poisonAnim.Play();
        }
            
    }
     public void DeadStatus()
    {
        //TODO ali. Ana karakter �l�rse sorun var.
        //print(PanelController.AliveCountText.text);
        PanelController.AliveCountNumber=PanelController.AliveCountNumber-1;
        PanelSc.AliveCountUpdate();
        if (PanelController.AliveCountNumber==1)
        {
            LevelPassed();
        }
           
        print(this.name + "is dead");
         this.healthSlider.gameObject.SetActive(false);
        //GetComponent<GameMain>().DeathLog1.text="asd";
        //DeathLog1.GetComponent<UnityEngine.UI.Text>().text = "text";
        DeathLogTexts();
         
        animator.SetBool("die", true);
        Invoke("",2);

        
        GetComponent<ai>().enabled = false;
        GetComponent<enemyHealthSystem1>().enabled = false;
        GetComponent<NavMeshAgent>().enabled = false;
        GetComponent<BoxCollider>().enabled = false;
        GetComponentInChildren<AiCanAttackCircle>().enabled = false;
        //Destroy(gameObject);

        GameObject graveStone = GameObject.Instantiate(gravestone);
        graveStone.transform.position = transform.position;

        
    }
    void LevelPassed()
    {
        PanelController.Instance.SetCloseOpenAllPanels();
        if (ArenaSellection.CurrentStageIndex==3)
        {
            ArenaSellection.SavedMapIndex=ArenaSellection.SavedMapIndex+1;
            print(ArenaSellection.SavedMapIndex);
            PanelController.Instance.SetMapCompletedPanel(true);
        }
        else
        {
            PanelController.Instance.SetSuccessPanel(true);
        }
        
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
            explosionAnim.Play();
        }
        else if (other.gameObject.tag=="FireballAnim")
        {
            healthController.Damage(43);
            HealthUpdate();
            explosionAnim.Play();
        }
         else if (other.gameObject.tag=="WaterballAnim")
        {
            healthController.Damage(33);
            HealthUpdate();
            freezingAnim.Play();
        }
         else if (other.gameObject.tag=="LightningballAnim")
        {
            healthController.Damage(23);
            HealthUpdate();
            explosionAnim.Play();
        }
           

    }

}
