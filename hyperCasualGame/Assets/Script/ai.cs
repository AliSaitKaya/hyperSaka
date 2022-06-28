using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class ai : MonoBehaviour
{
    private NavMeshAgent agent;

    public GameObject Target = null;
    public Animator animator;
    public ParticleSystem DefaultSkill;
    public List<GameObject> VFXs = new List<GameObject>();
    public int AiKillCount=0;

    private float coolDownConstant = 2f;
    private bool AttackCooldown = true;
    private bool attackStatus = false;
    private bool setDestinationControl = false;
    private bool setDestinationControlForAttackCooldown = false;

    private int AiFireSelectCounter;
    private int AiIceSelectCounter;
    private int AiArcaneSelectCounter;
    private int AiAttackClassLevel;
    private int AiAttackSelectionIndex;

    int lastFrameCount;
    Vector3 firstTransformPosition;
    private void Start()
    {
        agent = GetComponent<NavMeshAgent>();
        agent.SetDestination(enemyPathMovement.Instance.GetRandomPoint());
        lastFrameCount = Time.frameCount;
        firstTransformPosition = transform.position;
        AiFireSelectCounter=0;
        AiIceSelectCounter=0;
        AiArcaneSelectCounter=0; // buraya current stage indexe gore if yazilacak!!!
        AiAttackClassLevel=0;
        AiAttackSelectionIndex=0;
    }

    private void FixedUpdate()
    {
        animator.SetBool("attack", attackStatus);
        attackStatus = false;

        AgentCheckStopped();
        AgentCheckDestinationReached();
        Attack();
    }
    private void ResetCooldown()
    {
        AttackCooldown = true;
    }
    public void aiKillMethod()
    {
        AiKillCount++;
        print(AiKillCount);
        int randomlazim = Random.Range(1,4);
        
        switch(randomlazim)
        {
            case 1:
            AiFireSelect();
            break;
            case 2:
            AiIceSelect();
            break;
            case 3:
            AiArcaneSelect();
            break;
        }
    }

    private void AgentCheckStopped()
    {

        // eğer enemy bir yerde 20 frame boyunca takılı kalırsa yeni destination alıyor.
        if (Time.frameCount - lastFrameCount > 20 && firstTransformPosition == transform.position)
        {
            lastFrameCount = Time.frameCount;
            agent.SetDestination(enemyPathMovement.Instance.GetRandomPoint());
            firstTransformPosition = transform.position;  
        }

    }

    private IEnumerator RotateWithWait(Quaternion originalRotation, Quaternion
            finalRotation, float duration)
    {
        //Vector3 direction = Target.transform.position - transform.position;
        //transform.rotation = Quaternion.LookRotation(direction);

        agent.SetDestination(Target.transform.position);
        if (duration > 0f)
        {
            float startTime = Time.time;
            float endTime = startTime + duration;
            transform.rotation = originalRotation;
            yield return null;
            while (Time.time < endTime)
            {
                float progress = (Time.time - startTime) / duration;
                // progress will equal 0 at startTime, 1 at endTime.
                transform.rotation = Quaternion.Slerp(originalRotation,
                finalRotation, progress);
                yield return null;
            }
        }
        transform.rotation = finalRotation;
        
        }


    private void AgentCheckDestinationReached()
    {    
        //hedefe vardığında yeni destination alması için gideceği yere kalan mesafesine bakıyor.
        if (agent.remainingDistance < 1)
        {
            agent.SetDestination(enemyPathMovement.Instance.GetRandomPoint());
        }

    }

    private void Attack()
    {
        GameObject vfx;

       // int AttackSelectionIndex = Random.Range(0,22); // 0 1 2 .. 21 sayılarını random çıkarır.
        //int AttackSelectionIndex=0; //geçici olarak default atıyorlar sil 

        //enemy savaş halinde circle dışında kalmayıp önceliği circle da kalmasına vermek için bu conditionu yazdık.
        // kod update de sürekli buraya girmesin diye kontrol için boolean setDestinationControl eklendi.
        if (DamageCircle.IsOutsideCircle(transform.position) && !setDestinationControl)
        {
            agent.SetDestination(enemyPathMovement.Instance.GetRandomPoint());
            setDestinationControl = true;
            return;
        }
        else if (!DamageCircle.IsOutsideCircle(transform.position))
        {
            setDestinationControl = false;
        }


        if (Target != null)
        {
            if (AttackCooldown)
            {
                agent.SetDestination(Target.transform.position);
                //   transform.LookAt(Target.transform.position);
                Vector3 direction = Target.transform.position - transform.position;
                transform.rotation = Quaternion.LookRotation(direction);

               // StartCoroutine(RotateWithWait(transform.rotation, Quaternion.LookRotation(direction),0.5f));
               
                //transform.rotation = Quaternion.RotateTowards(transform.rotation, targetRotation, 30);


                //kullanacağı skili prefabtan çekip kopyalıyor.
                vfx = Instantiate(VFXs[AiAttackSelectionIndex], transform.position, Quaternion.identity);
                vfx.GetComponent<ProjectileMoveScript>().speed = 10;
                
                vfx.GetComponent<ProjectileMoveScript>().ProjectileAtanKisi=this.name;
                vfx.transform.position = new Vector3(transform.position.x, transform.position.y + 1, transform.position.z);
                vfx.transform.position += 1.25f * transform.forward;
                vfx.transform.rotation = Quaternion.Euler(transform.localEulerAngles.x, transform.localEulerAngles.y, transform.localEulerAngles.z);

                //skili attıktan sonra hedefin olduğu yerin tam ters yönüne gitmesi için .
                 agent.SetDestination(Target.transform.position * -1);
               // agent.SetDestination(enemyPathMovement.Instance.GetRandomPoint());
        switch(AiAttackSelectionIndex)
          {
            case 0:
                vfx.GetComponent<ProjectileMoveScript>().ProjectileDamage = 35;
            break;
            case 1:
                vfx.GetComponent<ProjectileMoveScript>().ProjectileDamage = 50;
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

                attackStatus = true;

                AttackCooldown = false;
                setDestinationControlForAttackCooldown = false;
                Invoke("ResetCooldown", coolDownConstant);
            }
            else if(!setDestinationControlForAttackCooldown) //sürekli girmesin diye setDestinationControlForAttackCooldown değişkeni ile kontrol ediyoruz.
            {
                //enemy nin görüş alanı içerisinde hedef varsa ve cooldown dolmadıysa ters yönde kaçması için set destination veriyoruz.
                agent.SetDestination(Target.transform.position * -1);
                //agent.SetDestination(enemyPathMovement.Instance.GetRandomPoint());
                setDestinationControlForAttackCooldown = true;
            }
        }
 

    }

private void AiFireSelect()
    {
        AiFireSelectCounter++;
        if (AiAttackClassLevel==0)
        {
            AiAttackSelectionIndex = 1;
        }
        else if (AiAttackClassLevel==1)
        {
            if (AiFireSelectCounter==2)
            {
                AiAttackSelectionIndex=4;
            }
            else if (AiFireSelectCounter==1 && AiIceSelectCounter==1)
            {
                AiAttackSelectionIndex=5;
            }
            else if (AiFireSelectCounter==1 && AiArcaneSelectCounter==1)
            {
                AiAttackSelectionIndex=6;
            }
        }
        else if (AiAttackClassLevel==2)
        {
             if (AiFireSelectCounter==3)
            {
                AiAttackSelectionIndex=17;
            }
            else if (AiFireSelectCounter==2 && AiIceSelectCounter==1)
            {
                AiAttackSelectionIndex=10;
            }
            else if (AiFireSelectCounter==2 && AiArcaneSelectCounter==1)
            {
                AiAttackSelectionIndex=11;
            }
            else if (AiFireSelectCounter==1 && AiIceSelectCounter==1 && AiArcaneSelectCounter==1)
            {
                AiAttackSelectionIndex=12;
            }
            else if (AiFireSelectCounter==1 && AiArcaneSelectCounter==2)
            {
                AiAttackSelectionIndex=14;
            }
            else if (AiFireSelectCounter==1 && AiIceSelectCounter==2)
            {
                AiAttackSelectionIndex=15;
            }
        }
        
        
        AiAttackClassLevel++;
    }

    private void AiIceSelect()
    {
        AiIceSelectCounter++;
        if (AiAttackClassLevel==0)
        {
            AiAttackSelectionIndex = 2;
        }
        else if (AiAttackClassLevel==1)
        {
            if (AiIceSelectCounter==2)
            {
                AiAttackSelectionIndex=7;
            }
            else if (AiFireSelectCounter==1 && AiIceSelectCounter==1)
            {
                AiAttackSelectionIndex=5;
            }
            else if (AiIceSelectCounter==1 && AiArcaneSelectCounter==1)
            {
                AiAttackSelectionIndex=8;
            }
        }
        else if (AiAttackClassLevel==2)
        {
             if (AiIceSelectCounter==3)
            {
                AiAttackSelectionIndex=18;
            }
            else if (AiFireSelectCounter==2 && AiIceSelectCounter==1)
            {
                AiAttackSelectionIndex=10;
            }
            else if (AiIceSelectCounter==2 && AiArcaneSelectCounter==1)
            {
                AiAttackSelectionIndex=16;
            }
            else if (AiFireSelectCounter==1 && AiIceSelectCounter==1 && AiArcaneSelectCounter==1)
            {
                AiAttackSelectionIndex=12;
            }
            else if (AiIceSelectCounter==1 && AiArcaneSelectCounter==2)
            {
                AiAttackSelectionIndex=13;
            }
            else if (AiFireSelectCounter==1 && AiIceSelectCounter==2)
            {
                AiAttackSelectionIndex=15;
            }
        }
        
        AiAttackClassLevel++;
    }

    private void AiArcaneSelect()
    {
        AiArcaneSelectCounter++;
        if (AiAttackClassLevel==0)
        {
            AiAttackSelectionIndex = 3;
        }
        else if (AiAttackClassLevel==1)
        {
            if (AiArcaneSelectCounter==2)
            {
                AiAttackSelectionIndex=9;
            }
            else if (AiFireSelectCounter==1 && AiArcaneSelectCounter==1)
            {
                AiAttackSelectionIndex=6;
            }
            else if (AiIceSelectCounter==1 && AiArcaneSelectCounter==1)
            {
                AiAttackSelectionIndex=8;
            }
        }
        else if (AiAttackClassLevel==2)
        {
             if (AiArcaneSelectCounter==3)
            {
                AiAttackSelectionIndex=19;
            }
            else if (AiFireSelectCounter==2 && AiArcaneSelectCounter==1)
            {
                AiAttackSelectionIndex=11;
            }
            else if (AiIceSelectCounter==2 && AiArcaneSelectCounter==1)
            {
                AiAttackSelectionIndex=16;
            }
            else if (AiFireSelectCounter==1 && AiIceSelectCounter==1 && AiArcaneSelectCounter==1)
            {
                AiAttackSelectionIndex=12;
            }
            else if (AiIceSelectCounter==1 && AiArcaneSelectCounter==2)
            {
                AiAttackSelectionIndex=13;
            }
            else if (AiFireSelectCounter==1 && AiArcaneSelectCounter==2)
            {
                AiAttackSelectionIndex=14;
            }
        }
        
        AiAttackClassLevel++;
    }
    
}
