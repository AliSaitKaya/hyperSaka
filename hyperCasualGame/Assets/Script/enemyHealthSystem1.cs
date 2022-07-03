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
    public GameObject gravestone;
    public GameObject heart;

    public GameObject AttackScripterisim;
    public GameObject aiScriptErisim;
    private int DeadFlag;
    private int Projectiledangelendamage;
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
    public void Heal(int HealNumber)
    {
        healthController.Heal(HealNumber);
        HealthUpdate();
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
        GetComponentInChildren<AiCanAttackCircle>().GetComponent<BoxCollider>().enabled = false;
        //Destroy(gameObject);

        GameObject graveStone = GameObject.Instantiate(gravestone);
        graveStone.transform.position = transform.position;

        GameObject heartCopy = GameObject.Instantiate(heart);
        heartCopy.transform.position = transform.position;

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
    void OnCollisionEnter(Collision other)
        
    {
        DeadFlag=0;
        Projectiledangelendamage=other.gameObject.GetComponent<ProjectileMoveScript>().ProjectileDamage;
        switch(other.gameObject.tag)
        {
            case "defaultskillfinal":
            
            healthController.Damage(Projectiledangelendamage);
            HealthUpdate();
            
            //print("enemywizardcani gitti");
            //print(other.gameObject.GetComponent<ProjectileMoveScript>().ProjectileAtanKisi);
            if (IsDead())
            {
                DeadFlag=1;
            }
            

            break;

            case "orb5orange":

            healthController.Damage(Projectiledangelendamage);
            HealthUpdate();
            if (IsDead())
            {
                DeadFlag=1;
            }
            break;

            case "icespike":

            healthController.Damage(Projectiledangelendamage);
            HealthUpdate();
            if (IsDead())
            {
                DeadFlag=1;
            }
            break;

            case "slashpurple":

            healthController.Damage(Projectiledangelendamage);
            HealthUpdate();
            if (IsDead())
            {
                DeadFlag=1;
            }
            break;

            case "orb4blue":

            healthController.Damage(Projectiledangelendamage);
            HealthUpdate();
            if (IsDead())
            {
                DeadFlag=1;
            }
            break;

            case "blackholered":

            healthController.Damage(Projectiledangelendamage);
            HealthUpdate();
            if (IsDead())
            {
                DeadFlag=1;
            }
            break;

            case "orb1purple":

            healthController.Damage(Projectiledangelendamage);
            HealthUpdate();
            if (IsDead())
            {
                DeadFlag=1;
            }
            break;

            case "fireball3orange":

            healthController.Damage(Projectiledangelendamage);
            HealthUpdate();
            if (IsDead())
            {
                DeadFlag=1;
            }
            break;

            case "orb1red":

            healthController.Damage(Projectiledangelendamage);
            HealthUpdate();
            if (IsDead())
            {
                DeadFlag=1;
            }
            break;

            case "waterballorange":

            healthController.Damage(Projectiledangelendamage);
            HealthUpdate();
            if (IsDead())
            {
                DeadFlag=1;
            }
            break;

            case "waterballblue":

            healthController.Damage(Projectiledangelendamage);
            HealthUpdate();
            if (IsDead())
            {
                DeadFlag=1;
            }
            break;

        

        }
        if (DeadFlag==1)
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
    }
    void OnTriggerStay(Collider other)
    {
        //edit gelebilir
    }
    void OnParticleCollision(GameObject other)
    {
        
    }
    
    void KillKimdeKaldi()
    {
        
    }

}
