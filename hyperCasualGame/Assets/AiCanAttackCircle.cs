using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class AiCanAttackCircle : MonoBehaviour
{
    public static AiCanAttackCircle Instance;
    public float Range;

    private void Awake()
    {
        Instance = this;
    }

    public void Update()
    {
        
    }

#if UNITY_EDITOR
    private void OnDrawGizmos()
    {
        Gizmos.color = Color.green;
        Gizmos.DrawWireSphere(transform.position, Range);
    }
#endif

    private void OnDrawGizmosSelected()
    {
        
    }
}
