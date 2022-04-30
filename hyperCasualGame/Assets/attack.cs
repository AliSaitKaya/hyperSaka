using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class attack : MonoBehaviour
{
    cameraShaker shaker;
    public Animator animator;

    public ParticleSystem fire;
    public GameObject fireobject;
    public ParticleSystem water;
    public ParticleSystem lightning;
    public ParticleSystem DefaultSkill;

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
    int AttackSelectionIndex = -1;

    public static Vector3 AddingVectorDeneme;

    private Vector3 AddingVector;

    // Start is called before the first frame update
    void Start()
    {
        attackButton.onClick.AddListener(Attack);
        fireAttackButton.onClick.AddListener(fireAttackSelect);
        waterAttackButton.onClick.AddListener(waterAttackSelect);
        lightningAttackButton.onClick.AddListener(lightningAttackSelect);
        SkillSelectionPanel.SetActive(false);

        fire.Stop();
        water.Stop();
        lightning.Stop();
        DefaultSkill.Stop();

        AttackSelectionIndex = 3; //default skill
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


        //print(this.name+"usedattack");
        if (AttackCooldown==false)
        {
                    SkillSelectionPanel.SetActive(true);
                    attackStatus = true;
                    switch(AttackSelectionIndex)
                    {
                    case 0:
                    fireobject.SetActive(true);
                    AddingVectorDeneme =new Vector3(0,0,0);
                    AddingVectorDeneme.x=this.transform.localRotation.eulerAngles.y;
                   
                     
                    //fire.transform.rotation=this.transform.rotation;
                    
                    fire.transform.position = new Vector3(this.transform.position.x, this.transform.position.y+1, this.transform.position.z);
                    //fire.transform.position += 5 * this.transform.forward;
                    
                    //fire.transform.rotation = Quaternion.Euler(transform.localEulerAngles.x,transform.localEulerAngles.y,transform.localEulerAngles.z);
                    //fire.transform.rotation.x=this.transform.localRotation.eulerAngles.y;

                        fire.Play();
                                
                        InvokeRepeating("TornadoMove",0f,0.01f);
                        Invoke("cancelTornado",3f);
                        //fire.transform.position = Vector3.Lerp(this.transform.forward, this.transform.forward, Time.deltaTime * 5);
                        //fire.transform.name=gameObject.name;
                        
                            /*if (gameObject.tag=="enemyWizard")
                            {
                                print(fire.transform.name+"usedattack");
                                Invoke ("Denemefireball",1);
                                break;
                            }
                            else if (gameObject.tag=="Wizard")
                            {
                                print(fire.transform.name+"usedattack");
                                fire.Play();
                            }*/
                
                        
                        break;
                    case 1:
                        water.transform.position = new Vector3(transform.position.x, transform.position.y, transform.position.z);
                        water.transform.position += 9 * transform.forward;
                        water.Play();
                        break;
                    case 2:
                        lightning.transform.position = new Vector3(transform.position.x, transform.position.y, transform.position.z);
                        lightning.transform.position += 6 * transform.forward;
                        lightning.Play();
                        break;
                    case 3:

                        DefaultSkill.transform.position = new Vector3(transform.position.x, transform.position.y+1, transform.position.z);
                        DefaultSkill.transform.position += 1.2f * transform.forward;   //at�lan skill kendi collider �na �arp�yor diye
                                                                                       //karakterin y�z�n�n d�n�k oldu�u yere offset verildi. 
                        DefaultSkill.transform.localScale = new Vector3(2,2,2);
                        DefaultSkill.transform.rotation = Quaternion.Euler(transform.localEulerAngles.x,transform.localEulerAngles.y,transform.localEulerAngles.z);
                        print(DefaultSkill.transform.rotation);
                        //print(DefaultSkill.transform.rotation);
                        //DefaultSkill.transform.position = new Vector3(11, 1, -12);
                        //DefaultSkill.transform.position += 10 * transform.forward;
                        DefaultSkill.Play();
                        break;
            
        
                    }
            StartCoroutine(Shake(.15f, 2f));

            Invoke("ResetCooldown",coolDownConstant);
            InvokeRepeating("CoolDownText",0.0f,0.1f);
            AttackCooldown=true;
            attackButton.interactable=false;
            timeLeftCD=coolDownConstant;
 
        }
        
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
        fireobject.SetActive(false);
        CancelInvoke("TornadoMove");
        // print("enter");
     }
     void TornadoMove ()
     {
         //fire.Stop();
         //fireobject.SetActive(false);
         //fireobject.SetActive(true);
         //fire.Simulate(2f,true);
         print(AddingVectorDeneme.x);
         AddingVector=new Vector3(1f,0,1f);
         AddingVector.x=AddingVector.x*Mathf.Sin((AddingVectorDeneme.x*Mathf.PI)/180);
         AddingVector.z=AddingVector.z*Mathf.Cos((AddingVectorDeneme.x*Mathf.PI)/180);
                    print(Mathf.Sin((AddingVectorDeneme.x*Mathf.PI)/180));
         
        //AddingVector.y=this.transform.localRotation.eulerAngles.y;
       
        //print(AddingVector);
         
         //print(fire.transform.rotation);
        fire.transform.position=fire.transform.position+(AddingVector/20);
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
