using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class attack : MonoBehaviour
{
    cameraShaker shaker;
    public Animator animator;
    public ParticleSystem DefaultBall;
    public ParticleSystem FireBall;
    public ParticleSystem WaterBall;
    public ParticleSystem LightningBall;
    public ParticleSystem Tornado;

    public GameObject TornadoObject;
    public GameObject BlackHoleBall;
    public int wizardKillCount=0;
    public Text wizardKillText;
    public List<GameObject> VFXs = new List<GameObject>();


    public Button attackButton;

    public Button FireSelectButton;
    public Button IceSelectButton;
    public Button ArcaneSelectButton;
    
    public GameObject SkillSelectionPanel ;
    public GameObject HpBuffPanel;
    public GameObject SpeedBuffPanel;
    public Button MaxHpBuffButton;
    public Button CurrentHpBuffButton;
    public Button SpeedBuffButton;
    public Button DamageBuffButton;
    private bool attackStatus = false ;
    private bool AttackCooldown=false;
    private int AttackClassLevel;
    public Text coolDownText;
    private float coolDownConstant=2f;
    private float timeLeftCD;
    private double timeLeftrounded;
    private int FireSelectCounter;
    private int IceSelectCounter;
    private int ArcaneSelectCounter;
    int AttackSelectionIndex = 0;

    public static Vector3 TornadoRotationCek;

    private Vector3 TornadoAddingVector;

    // Start is called before the first frame update
    void Start()
    {
        attackButton.onClick.AddListener(Attack);
        FireSelectButton.onClick.AddListener(FireSelect);
        IceSelectButton.onClick.AddListener(IceSelect);
        ArcaneSelectButton.onClick.AddListener(ArcaneSelect);

        MaxHpBuffButton.onClick.AddListener(MaxHpBuff);
        CurrentHpBuffButton.onClick.AddListener(CurrenttHpBuff);
        SpeedBuffButton.onClick.AddListener(SpeedBuff);
        DamageBuffButton.onClick.AddListener(DamageBuff);

        SkillSelectionPanel.SetActive(false);
        HpBuffPanel.SetActive(false);
        SpeedBuffPanel.SetActive(false);

        AttackSelectionIndex = 0; //default skill
        AttackClassLevel=0; // 1 2 3 diye artacak. panel her açıldığında.seviye takip.
        FireSelectCounter=0;
        IceSelectCounter=0;
        ArcaneSelectCounter=0;
        
        
    
    }

    
    private void FireSelect()
    {
        FireSelectCounter++;
        if (AttackClassLevel==0)
        {
            AttackSelectionIndex = 1;
        }
        else if (AttackClassLevel==1)
        {
            if (FireSelectCounter==2)
            {
                AttackSelectionIndex=4;
            }
            else if (FireSelectCounter==1 && IceSelectCounter==1)
            {
                AttackSelectionIndex=5;
            }
            else if (FireSelectCounter==1 && ArcaneSelectCounter==1)
            {
                AttackSelectionIndex=6;
            }
        }
        else if (AttackClassLevel==2)
        {
             if (FireSelectCounter==3)
            {
                AttackSelectionIndex=17;
            }
            else if (FireSelectCounter==2 && IceSelectCounter==1)
            {
                AttackSelectionIndex=10;
            }
            else if (FireSelectCounter==2 && ArcaneSelectCounter==1)
            {
                AttackSelectionIndex=11;
            }
            else if (FireSelectCounter==1 && IceSelectCounter==1 && ArcaneSelectCounter==1)
            {
                AttackSelectionIndex=12;
            }
            else if (FireSelectCounter==1 && ArcaneSelectCounter==2)
            {
                AttackSelectionIndex=14;
            }
            else if (FireSelectCounter==1 && IceSelectCounter==2)
            {
                AttackSelectionIndex=15;
            }
        }
        
        SkillSelectionPanel.SetActive(false);
        AttackClassLevel++;
    }

    private void IceSelect()
    {
        IceSelectCounter++;
        if (AttackClassLevel==0)
        {
            AttackSelectionIndex = 2;
        }
        else if (AttackClassLevel==1)
        {
            if (IceSelectCounter==2)
            {
                AttackSelectionIndex=7;
            }
            else if (FireSelectCounter==1 && IceSelectCounter==1)
            {
                AttackSelectionIndex=5;
            }
            else if (IceSelectCounter==1 && ArcaneSelectCounter==1)
            {
                AttackSelectionIndex=8;
            }
        }
        else if (AttackClassLevel==2)
        {
             if (IceSelectCounter==3)
            {
                AttackSelectionIndex=18;
            }
            else if (FireSelectCounter==2 && IceSelectCounter==1)
            {
                AttackSelectionIndex=10;
            }
            else if (IceSelectCounter==2 && ArcaneSelectCounter==1)
            {
                AttackSelectionIndex=16;
            }
            else if (FireSelectCounter==1 && IceSelectCounter==1 && ArcaneSelectCounter==1)
            {
                AttackSelectionIndex=12;
            }
            else if (IceSelectCounter==1 && ArcaneSelectCounter==2)
            {
                AttackSelectionIndex=13;
            }
            else if (FireSelectCounter==1 && IceSelectCounter==2)
            {
                AttackSelectionIndex=15;
            }
        }
        SkillSelectionPanel.SetActive(false);
        AttackClassLevel++;
    }

    private void ArcaneSelect()
    {
        ArcaneSelectCounter++;
        if (AttackClassLevel==0)
        {
            AttackSelectionIndex = 3;
        }
        else if (AttackClassLevel==1)
        {
            if (ArcaneSelectCounter==2)
            {
                AttackSelectionIndex=9;
            }
            else if (FireSelectCounter==1 && ArcaneSelectCounter==1)
            {
                AttackSelectionIndex=6;
            }
            else if (IceSelectCounter==1 && ArcaneSelectCounter==1)
            {
                AttackSelectionIndex=8;
            }
        }
        else if (AttackClassLevel==2)
        {
             if (ArcaneSelectCounter==3)
            {
                AttackSelectionIndex=19;
            }
            else if (FireSelectCounter==2 && ArcaneSelectCounter==1)
            {
                AttackSelectionIndex=11;
            }
            else if (IceSelectCounter==2 && ArcaneSelectCounter==1)
            {
                AttackSelectionIndex=16;
            }
            else if (FireSelectCounter==1 && IceSelectCounter==1 && ArcaneSelectCounter==1)
            {
                AttackSelectionIndex=12;
            }
            else if (IceSelectCounter==1 && ArcaneSelectCounter==2)
            {
                AttackSelectionIndex=13;
            }
            else if (FireSelectCounter==1 && ArcaneSelectCounter==2)
            {
                AttackSelectionIndex=14;
            }
        }
        SkillSelectionPanel.SetActive(false);
        AttackClassLevel++;
    }
    


    // Update is called once per frame
    void Update()
    {
        animator.SetBool("attack", attackStatus);
        attackStatus = false;

        //if (!fire.isPlaying)
        // fire.Stop();
        /*if (!water.isPlaying)
            water.Stop();
        if (!lightning.isPlaying)
            lightning.Stop();
        if (!DefaultSkill.isPlaying)
            DefaultSkill.Stop();*/

    }

    public void Attack()
    {
        GameObject vfx;

        //print(this.name+"usedattack");
        if (AttackCooldown==false)
        {
            
            attackStatus = true;
            //SkillSelectionPanel.SetActive(true); // gecici sil
            //skill seçimi ve seçilen skilin kopyalanması
            vfx = Instantiate(VFXs[AttackSelectionIndex], transform.position, Quaternion.identity);
            vfx.GetComponent<ProjectileMoveScript>().speed = 10;
            vfx.GetComponent<ProjectileMoveScript>().ProjectileAtanKisi=this.name;
            //print(vfx.GetComponent<ProjectileMoveScript>().ProjectileAtanKisi);
            
            
        
            
            vfx.transform.position = new Vector3(transform.position.x, transform.position.y + 1, transform.position.z);
            vfx.transform.position += 1.25f * transform.forward;
            vfx.transform.rotation = Quaternion.Euler(transform.localEulerAngles.x, transform.localEulerAngles.y, transform.localEulerAngles.z);

          switch(AttackSelectionIndex)
          {
            case 0:
                vfx.GetComponent<ProjectileMoveScript>().ProjectileDamage = 100;
            break;
            case 1:
                vfx.GetComponent<ProjectileMoveScript>().ProjectileDamage = 100;
                vfx.GetComponent<ProjectileMoveScript>().projectilescale = new Vector3(0.5f,0.5f,0.5f);
            break;
            case 2:
                vfx.GetComponent<ProjectileMoveScript>().ProjectileDamage = 50;
                vfx.GetComponent<ProjectileMoveScript>().projectilescale = new Vector3(0.5f,0.5f,0.5f);
            break;
            case 3:
                vfx.GetComponent<ProjectileMoveScript>().ProjectileDamage = 50;
                vfx.GetComponent<ProjectileMoveScript>().projectilescale = new Vector3(0.5f,0.5f,0.5f);
            break;
            case 4:
                vfx.GetComponent<ProjectileMoveScript>().ProjectileDamage = 75;

            break;
            case 5:
                vfx.GetComponent<ProjectileMoveScript>().ProjectileDamage = 75;
            break;
            case 6:
                vfx.GetComponent<ProjectileMoveScript>().ProjectileDamage = 75;
                vfx.GetComponent<ProjectileMoveScript>().projectilescale = new Vector3(0.7f,0.7f,0.7f);
            break;
            case 7:
                vfx.GetComponent<ProjectileMoveScript>().ProjectileDamage = 75;
            break;
            case 8:
                vfx.GetComponent<ProjectileMoveScript>().ProjectileDamage = 75;
            break;
            case 9:
                vfx.GetComponent<ProjectileMoveScript>().ProjectileDamage = 75;
            break;
            case 10:
                vfx.GetComponent<ProjectileMoveScript>().ProjectileDamage = 100;
                vfx.GetComponent<ProjectileMoveScript>().projectilescale = new Vector3(2f,2f,2f);
            break;
            case 11:
                vfx.GetComponent<ProjectileMoveScript>().ProjectileDamage = 100;
                vfx.GetComponent<ProjectileMoveScript>().projectilescale = new Vector3(1.5f,1.5f,1.5f);
            break;
            case 12:
                vfx.GetComponent<ProjectileMoveScript>().ProjectileDamage = 100;
            break;
            case 13:
                vfx.GetComponent<ProjectileMoveScript>().ProjectileDamage = 100;
                vfx.GetComponent<ProjectileMoveScript>().projectilescale = new Vector3(2f,2f,2f);
            break;
            case 14:
                vfx.GetComponent<ProjectileMoveScript>().ProjectileDamage = 100;
                vfx.GetComponent<ProjectileMoveScript>().projectilescale = new Vector3(2f,2f,2f);
            break;
            case 15:
                vfx.GetComponent<ProjectileMoveScript>().ProjectileDamage = 100;
            break;
            case 16:
                vfx.GetComponent<ProjectileMoveScript>().ProjectileDamage = 100;
            break;
            case 17:
                vfx.GetComponent<ProjectileMoveScript>().ProjectileDamage = 100;
                vfx.GetComponent<ProjectileMoveScript>().projectilescale = new Vector3(2f,2f,2f);
            break;
            case 18:
                vfx.GetComponent<ProjectileMoveScript>().ProjectileDamage = 100;
                vfx.GetComponent<ProjectileMoveScript>().projectilescale = new Vector3(2f,2f,2f);
            break;
            case 19:
                vfx.GetComponent<ProjectileMoveScript>().ProjectileDamage = 100;
                vfx.GetComponent<ProjectileMoveScript>().projectilescale = new Vector3(2f,2f,2f);
            break;
          }
            //switch (AttackSelectionIndex)
            //        {

            //        case 0:
            //        /*
            //        DefaultBall.transform.position = new Vector3(transform.position.x, transform.position.y+1, transform.position.z);
            //        DefaultBall.transform.position += 1.2f * transform.forward;   //collider carpmaması icin offset

            //        //var DefaultColor=DefaultSkill.main;
            //        //DefaultColor.startColor = new Color( 0.33f,0.64f,0.64f,1f ); renk degistirme lazımsa 
                    


            //        DefaultBall.transform.localScale = new Vector3(2,2,2);
            //        DefaultBall.transform.rotation = Quaternion.Euler(transform.localEulerAngles.x,transform.localEulerAngles.y,transform.localEulerAngles.z);
                        
            //        DefaultBall.Play();

            //        */

            //        break;

            //        case 1:
            //        /*
            //        FireBall.transform.position = new Vector3(transform.position.x, transform.position.y+1, transform.position.z);
            //        FireBall.transform.position += 1.2f * transform.forward;   //collider carpmaması icin offset
                                                                            
            //        FireBall.transform.localScale = new Vector3(3,2,3);
            //        FireBall.transform.rotation = Quaternion.Euler(transform.localEulerAngles.x,transform.localEulerAngles.y,transform.localEulerAngles.z);
                        
            //        FireBall.Play();
            //            */
            //        skillParticleSelection(FireBall);
            //        break;

            //        case 2:
            //        /*
            //        WaterBall.transform.position = new Vector3(transform.position.x, transform.position.y+1, transform.position.z);
            //        WaterBall.transform.position += 1.2f * transform.forward;   //collider carpmaması icin offset
                                                                            
            //        WaterBall.transform.localScale = new Vector3(3,2,3);
            //        WaterBall.transform.rotation = Quaternion.Euler(transform.localEulerAngles.x,transform.localEulerAngles.y,transform.localEulerAngles.z);
                        
            //        WaterBall.Play();
            //        */
            //        skillParticleSelection(WaterBall);
            //        break;

            //        case 3:
            //        /*
            //        LightningBall.transform.position = new Vector3(transform.position.x, transform.position.y+1, transform.position.z);
            //        LightningBall.transform.position += 1.2f * transform.forward;   //collider carpmaması icin offset
                                                                            
            //        LightningBall.transform.localScale = new Vector3(3,2,3);
            //        LightningBall.transform.rotation = Quaternion.Euler(transform.localEulerAngles.x,transform.localEulerAngles.y,transform.localEulerAngles.z);
                        
            //        LightningBall.Play();
            //        */
            //        skillParticleSelection(LightningBall);
            //        break;

            //        case 4:
            //            TornadoObject.SetActive(true);
            //            TornadoRotationCek =new Vector3(0,0,0);
            //            TornadoRotationCek.x=this.transform.localRotation.eulerAngles.y;
                   
                    
            //            Tornado.transform.position = new Vector3(this.transform.position.x, this.transform.position.y+1, this.transform.position.z);
            //            Tornado.transform.position += 2 * transform.forward;
                    

            //            Tornado.Play();
                                
            //            InvokeRepeating("TornadoMove",0f,0.01f);
            //            Invoke("cancelTornado",3f);
            //        break;
        
            //        }
        
           // StartCoroutine(Shake(.15f, 2f));  // vibration close

            Invoke("ResetCooldown",coolDownConstant);
            InvokeRepeating("CoolDownText",0.0f,0.1f);
            AttackCooldown=true;
            attackButton.interactable=false;
            timeLeftCD=coolDownConstant;
 
        }
        
    }

    void skillParticleSelection(ParticleSystem skill)
    {
        skill.transform.position = new Vector3(transform.position.x, transform.position.y + 1, transform.position.z);
        skill.transform.position += 1.2f * transform.forward;   //collider carpmaması icin offset

        skill.transform.localScale = new Vector3(3, 2, 3);
        skill.transform.rotation = Quaternion.Euler(transform.localEulerAngles.x, transform.localEulerAngles.y, transform.localEulerAngles.z);

        skill.Play();
    }
     void ResetCooldown()
     {
     AttackCooldown = false;
     attackButton.interactable=true;
     
     }

     void CoolDownText()
     {
         timeLeftCD=timeLeftCD-0.1f;
         timeLeftrounded=System.Math.Round(timeLeftCD,2);
        coolDownText.text=(timeLeftrounded).ToString();
        if(timeLeftCD<=0)
        {
        CancelInvoke("CoolDownText");
        timeLeftCD=0.0f;
        coolDownText.text=" ";
        }
        
        

     }

     public void wizardKillMethod()
     {
        wizardKillCount++;
        if (wizardKillCount%2==1)
        {
            SkillSelectionPanel.SetActive(true); // 1-3-5 killcountta bir acilacak duzenle
        }
        else if (wizardKillCount%4==0)
        {
            print("buffspeedpanelaciliyor");
            SpeedBuffPanel.SetActive(true);
        }
        else if((wizardKillCount+2)%4==0)
        {
            print("buffhppanelaciliyor");
            HpBuffPanel.SetActive(true);
        }
        
        print(wizardKillCount);
        wizardKillText.text=wizardKillCount.ToString();
     }
     private void MaxHpBuff()
     {
        print("max hp buff");
        HpBuffPanel.SetActive(false);
     }
     private void CurrenttHpBuff()
     {
        print("currenthp buff");
        HpBuffPanel.SetActive(false);
     }
     private void SpeedBuff()
     {
        print("speed buff");
        SpeedBuffPanel.SetActive(false);
     }
     private void DamageBuff()
     {
        print("damage buff");
        SpeedBuffPanel.SetActive(false);
     }
     void cancelTornado()
     {
        TornadoObject.SetActive(false);
        CancelInvoke("TornadoMove");
        // print("enter");
     }
     void TornadoMove ()
     {
         //fire.Stop();
         //fireobject.SetActive(false);
         //fireobject.SetActive(true);
         //fire.Simulate(2f,true);
         print(TornadoRotationCek.x);
         TornadoAddingVector=new Vector3(1f,0,1f);
         TornadoAddingVector.x=TornadoAddingVector.x*Mathf.Sin((TornadoRotationCek.x*Mathf.PI)/180);
         TornadoAddingVector.z=TornadoAddingVector.z*Mathf.Cos((TornadoRotationCek.x*Mathf.PI)/180);
                    print(Mathf.Sin((TornadoRotationCek.x*Mathf.PI)/180));
         
        //AddingVector.y=this.transform.localRotation.eulerAngles.y;
       
        //print(AddingVector);
         
         //print(fire.transform.rotation);
            Tornado.transform.position=Tornado.transform.position+(TornadoAddingVector/20);
         //fire.transform.position = new Vector3(fire.transform.position.x+0.01f, fire.transform.position.y, fire.transform.position.z+0.01f);
            
            //fire.Play(true);
         //fire.Stop(true,ParticleSystemStopBehavior.StopEmitting);
         
         //fire.transform.position = new Vector3(fire.transform.position.x+1f, fire.transform.position.y, fire.transform.position.z+1f);
         
         //print("tornadamove");
         //print(fire.transform.position);
         
     }

    IEnumerator Shake(float duration, float magnitude)

    {
        Vector3 originalPos = Camera.main.transform.localPosition;
        float elapsed = 0.0f;
        while (elapsed < duration)
        {
            float x = Random.Range(-.1f, .1f) * magnitude;
            float y = Random.Range(-.1f, .1f) * magnitude;
            float z = Random.Range(-.1f, .1f) * magnitude;

            Camera.main.transform.localPosition = originalPos + new Vector3(x, y, z);
            elapsed += Time.deltaTime;

            yield return null;
        }

        Camera.main.transform.localPosition = originalPos;
    }

    /*public void Denemefireball()
    {
        fire.transform.position = new Vector3(this.transform.position.x, this.transform.position.y+1, this.transform.position.z);
        //fire.transform.position += 5 * this.transform.forward;
        fire.Play();
    }*/
}
