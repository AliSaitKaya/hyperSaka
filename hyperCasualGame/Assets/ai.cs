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

    private float coolDownConstant = 3f;
    private bool AttackCooldown = true;
    private bool attackStatus = false;


    private void Start()
    {
        agent = GetComponent<NavMeshAgent>();

    }

    private void Update()
    {
        print("" + Target);
        animator.SetBool("attack", attackStatus);
        attackStatus = false;

        if (!agent.hasPath)
        {
            agent.SetDestination(enemyPathMovement.Instance.GetRandomPoint());
            animator.SetBool("run", true);

        }else if(Target != null || !Target.GetComponent<enemyHealthSystem1>().IsDead())
        {

            if (AttackCooldown)
            {

                agent.SetDestination(Target.transform.position);
                transform.LookAt(Target.transform.position);

                DefaultSkill.transform.position = new Vector3(transform.position.x, transform.position.y + 1, transform.position.z);

                DefaultSkill.transform.position += 1.25f * transform.forward;   //at�lan skill kendi collider �na �arp�yor diye
                                                                               //karakterin y�z�n�n d�n�k oldu�u yere offset verildi. 
                DefaultSkill.transform.localScale = new Vector3(4, 2, 4);
                DefaultSkill.transform.rotation = Quaternion.Euler(transform.localEulerAngles.x, transform.localEulerAngles.y, transform.localEulerAngles.z);
                DefaultSkill.Play();
                attackStatus = true;

                AttackCooldown = false;
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

}
