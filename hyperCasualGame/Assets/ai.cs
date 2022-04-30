using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class ai : MonoBehaviour
{
    private NavMeshAgent agent;

    public float radius;
    private float distanceTargetPlayer;
    public GameObject Target;
    bool follow = false;
    public Animator animator;
    public ParticleSystem DefaultSkill;

    private float coolDownConstant = 3f;
    private bool AttackCooldown = true;
    int canAttackDistance = 5;  // saldýrabileceði max uzaklýk.
    private bool attackStatus = false;


    private void Start()
    {
        agent = GetComponent<NavMeshAgent>();

    }

    private void Update()
    {
        animator.SetBool("attack", attackStatus);
        attackStatus = false;

        distanceTargetPlayer = Vector3.Distance(Target.transform.position, transform.position);
        if (distanceTargetPlayer <= canAttackDistance)
            follow = true;
        if (!agent.hasPath && !follow)
        {
            agent.SetDestination(enemyPathMovement.Instance.GetRandomPoint());
            animator.SetBool("run", true);

            follow = false;
        }else if(follow)
        {

            if (AttackCooldown)
            {

                agent.SetDestination(Target.transform.position);
                DefaultSkill.transform.position = new Vector3(transform.position.x, transform.position.y + 1, transform.position.z);
                DefaultSkill.transform.position += 1.2f * transform.forward;   //atýlan skill kendi collider ýna çarpýyor diye
                                                                               //karakterin yüzünün dönük olduðu yere offset verildi. 
                DefaultSkill.transform.localScale = new Vector3(2, 2, 2);
                DefaultSkill.transform.rotation = Quaternion.Euler(transform.localEulerAngles.x, transform.localEulerAngles.y, transform.localEulerAngles.z);
                DefaultSkill.Play();
                attackStatus = true;

                AttackCooldown = false;
                follow = false;
                Invoke("ResetCooldown", coolDownConstant);
                
            }
               

            animator.SetBool("run", true);
        }else
        {
            animator.SetBool("run", false);

        }

           
    }
    void ResetCooldown()
    {
        AttackCooldown = true;
    }


#if UNITY_EDITOR
    private void OnGrawGizmos()
    {
        Gizmos.DrawWireSphere(transform.position , radius);
    }
#endif

}
