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

    int lastFrameCount;
    Vector3 firstTransformPosition;
    private void Start()
    {
        agent = GetComponent<NavMeshAgent>();
        agent.SetDestination(enemyPathMovement.Instance.GetRandomPoint());
        lastFrameCount = Time.frameCount;
        firstTransformPosition = transform.position;
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
        int AttackSelectionIndex=0; //geçici olarak default atıyorlar sil 

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
                vfx = Instantiate(VFXs[AttackSelectionIndex], transform.position, Quaternion.identity);
                vfx.GetComponent<ProjectileMoveScript>().speed = 10;
                vfx.GetComponent<ProjectileMoveScript>().ProjectileAtanKisi=this.name;
                vfx.transform.position = new Vector3(transform.position.x, transform.position.y + 1, transform.position.z);
                vfx.transform.position += 1.25f * transform.forward;
                vfx.transform.rotation = Quaternion.Euler(transform.localEulerAngles.x, transform.localEulerAngles.y, transform.localEulerAngles.z);

                //skili attıktan sonra hedefin olduğu yerin tam ters yönüne gitmesi için .
                 agent.SetDestination(Target.transform.position * -1);
               // agent.SetDestination(enemyPathMovement.Instance.GetRandomPoint());


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
}
