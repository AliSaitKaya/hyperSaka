using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class ai : MonoBehaviour
{
    private NavMeshAgent agent;

    public float radius;
    private float dist;
    public GameObject Target;
    bool follow = false;
    public Animator animator;

    private void Start()
    {
        agent = GetComponent<NavMeshAgent>();

    }

    private void Update()
    {
        dist = Vector3.Distance(Target.transform.position, transform.position);
        if (dist <= 5)
            follow = true;
        if (!agent.hasPath && !follow)
        {
            agent.SetDestination(enemyPathMovement.Instance.GetRandomPoint());
            animator.SetBool("run", true);
            follow = false;
        }else if(follow)
        {
            agent.SetDestination(Target.transform.position);
            animator.SetBool("run", true);
        }else
        {
            animator.SetBool("run", false);
        }

           
    }

#if UNITY_EDITOR
    private void OnGrawGizmos()
    {
        Gizmos.DrawWireSphere(transform.position , radius);
    }
#endif

}
