using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class attack : MonoBehaviour
{
    cameraShaker shaker;
    public Animator animator;

    public ParticleSystem fire;
    public ParticleSystem water;
    public ParticleSystem lightning;
    public ParticleSystem DefaultSkill;

    public Button attackButton;

    public Button fireAttackButton;
    public Button waterAttackButton;
    public Button lightningAttackButton;
    
    public GameObject SkillSelectionPanel ;
    private bool attackStatus = false ;
    int AttackSelectionIndex = -1;

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

        //animator.SetBool("attack", attackStatus);
        attackStatus = false;

        /*if (!fire.isPlaying)
            fire.Stop();
        if (!water.isPlaying)
            water.Stop();
        if (!lightning.isPlaying)
            lightning.Stop();
        if (!DefaultSkill.isPlaying)
            DefaultSkill.Stop();*/

    }

    public void Attack()
    {
        //print(this.name+"usedattack");
        
        SkillSelectionPanel.SetActive(true);
        attackStatus = true;
        switch(AttackSelectionIndex)
        {
            case 0:
            

            
                fire.transform.position = new Vector3(this.transform.position.x, this.transform.position.y+1, this.transform.position.z);
                fire.transform.position += 5 * this.transform.forward;
                fire.transform.position = Vector3.Lerp(this.transform.forward, this.transform.forward, Time.deltaTime * 5);
                fire.transform.name=gameObject.name;
                
                     if (gameObject.tag=="enemyWizard")
                    {
                        print(fire.transform.name+"usedattack");
                        Invoke ("Denemefireball",1);
                        break;
                    }
                    else if (gameObject.tag=="Wizard")
                    {
                        print(fire.transform.name+"usedattack");
                        fire.Play();
                    }
        
                
                StartCoroutine(Shake(.15f, 2f));
                break;
            case 1:
                water.transform.position = new Vector3(transform.position.x, transform.position.y, transform.position.z);
                water.transform.position += 9 * transform.forward;
                water.Play();
                StartCoroutine(Shake(.15f, 2f));
                break;
            case 2:
                lightning.transform.position = new Vector3(transform.position.x, transform.position.y, transform.position.z);
                lightning.transform.position += 6 * transform.forward;
                lightning.Play();
                StartCoroutine(Shake(.15f, 2f));
                break;
            case 3:

                DefaultSkill.transform.position = new Vector3(transform.position.x, transform.position.y+1, transform.position.z+3);
                DefaultSkill.transform.localScale=new Vector3(2,2,2);
                DefaultSkill.transform.rotation = Quaternion.Euler(transform.localEulerAngles.x,transform.localEulerAngles.y,transform.localEulerAngles.z);
                //print(DefaultSkill.transform.rotation);
                //DefaultSkill.transform.position = new Vector3(11, 1, -12);
                //DefaultSkill.transform.position += 10 * transform.forward;
                DefaultSkill.Play();
                //StartCoroutine(Shake(.15f, 2f));
                break;
 
        }
        
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

    public void Denemefireball()
    {
        fire.transform.position = new Vector3(this.transform.position.x, this.transform.position.y+1, this.transform.position.z);
        //fire.transform.position += 5 * this.transform.forward;
        fire.Play();
    }
}
