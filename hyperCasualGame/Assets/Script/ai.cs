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

    private float coolDownConstant = 3f;
    private bool AttackCooldown = true;
    private bool attackStatus = false;
    int lastFrameCount;
    Vector3 firstTransformPosition;
    private void Start()
    {
        agent = GetComponent<NavMeshAgent>();
        agent.SetDestination(enemyPathMovement.Instance.GetRandomPoint());
        lastFrameCount = Time.frameCount;
        firstTransformPosition = transform.position;
    }

    private void Update()
    {
        animator.SetBool("attack", attackStatus);
        attackStatus = false;

        agentCheckStopped();
        agentCheckDestinationReached();
        attack();
    }
    void ResetCooldown()
    {
        AttackCooldown = true;
    }

    void agentCheckStopped()
    {

        // eğer enemy bir yerde 50 frame boyunca takılı kalırsa yeni destination alıyor.
        if (Time.frameCount - lastFrameCount > 50 && firstTransformPosition == transform.position)
        {
            lastFrameCount = Time.frameCount;
            agent.SetDestination(enemyPathMovement.Instance.GetRandomPoint());
            firstTransformPosition = transform.position;  
        }

    }

    void agentCheckDestinationReached()
    {    
        //hedefe vardığında yeni destination alması için gideceği yere kalan mesafesine bakıyor.
        if (agent.remainingDistance < 1)
        {
            agent.SetDestination(enemyPathMovement.Instance.GetRandomPoint());
        }

    }

    void attack()
    {
        GameObject vfx;

        int AttackSelectionIndex = Random.Range(0,3); // 0 1 2 sayılarını random çıkarır.

        if (AttackCooldown && Target != null)
        {
            agent.SetDestination(Target.transform.position);
            transform.LookAt(Target.transform.position);


            vfx = Instantiate(VFXs[AttackSelectionIndex], transform.position, Quaternion.identity);
            vfx.GetComponent<ProjectileMoveScript>().speed = 10;
            vfx.transform.position = new Vector3(transform.position.x, transform.position.y + 1, transform.position.z);
            vfx.transform.position += 1.25f * transform.forward;
            vfx.transform.rotation = Quaternion.Euler(transform.localEulerAngles.x, transform.localEulerAngles.y, transform.localEulerAngles.z);


            /*eski animasyonlu atak
            DefaultSkill.transform.position = new Vector3(transform.position.x, transform.position.y + 1, transform.position.z);

            DefaultSkill.transform.position += 1.25f * transform.forward;   //at�lan skill kendi collider �na �arp�yor diye
                                                                            //karakterin y�z�n�n d�n�k oldu�u yere offset verildi. 
            DefaultSkill.transform.localScale = new Vector3(4, 2, 4);
            DefaultSkill.transform.rotation = Quaternion.Euler(transform.localEulerAngles.x, transform.localEulerAngles.y, transform.localEulerAngles.z);
            DefaultSkill.Play();
            */
            attackStatus = true;

            AttackCooldown = false;
            Invoke("ResetCooldown", coolDownConstant);
        }

    }
}
