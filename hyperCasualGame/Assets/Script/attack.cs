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
    public List<GameObject> VFXs = new List<GameObject>();


    public Button attackButton;

    public Button fireAttackButton;
    public Button waterAttackButton;
    public Button lightningAttackButton;
    
    public GameObject SkillSelectionPanel ;
    private bool attackStatus = false ;
    private bool AttackCooldown=false;
    public Text coolDownText;
    private float coolDownConstant=1.0f;
    private float timeLeftCD;
    private double timeLeftrounded;
    int AttackSelectionIndex = 0;

    public static Vector3 TornadoRotationCek;

    private Vector3 TornadoAddingVector;

    // Start is called before the first frame update
    void Start()
    {
        attackButton.onClick.AddListener(Attack);
        fireAttackButton.onClick.AddListener(fireAttackSelect);
        waterAttackButton.onClick.AddListener(waterAttackSelect);
        lightningAttackButton.onClick.AddListener(lightningAttackSelect);
        SkillSelectionPanel.SetActive(false);

        FireBall.Stop();
        WaterBall.Stop();
        LightningBall.Stop();
        DefaultBall.Stop();

        AttackSelectionIndex = 0; //default skill
        
        
    
    }

    private void lightningAttackSelect()
    {
        AttackSelectionIndex = 2;
        SkillSelectionPanel.SetActive(false);
    }

    private void waterAttackSelect()
    {
        AttackSelectionIndex = 1;
        SkillSelectionPanel.SetActive(false);
    }

    private void fireAttackSelect()
    {
        AttackSelectionIndex = 0;
        SkillSelectionPanel.SetActive(false);
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
            SkillSelectionPanel.SetActive(true);
            attackStatus = true;
            
            //skill seçimi ve seçilen skilin kopyalanması
            vfx = Instantiate(VFXs[AttackSelectionIndex], transform.position, Quaternion.identity);
            vfx.GetComponent<ProjectileMoveScript>().speed = 10;
            vfx.transform.position = new Vector3(transform.position.x, transform.position.y + 1, transform.position.z);
            vfx.transform.position += 1.25f * transform.forward;
            vfx.transform.rotation = Quaternion.Euler(transform.localEulerAngles.x, transform.localEulerAngles.y, transform.localEulerAngles.z);

          
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
