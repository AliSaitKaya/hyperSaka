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

        fire.Stop();
        water.Stop();
        lightning.Stop();
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

        if (!fire.isPlaying)
            fire.Stop();
        if (!water.isPlaying)
            water.Stop();
        if (!lightning.isPlaying)
            lightning.Stop();

    }

    public void Attack()
    {
        SkillSelectionPanel.SetActive(true);
        attackStatus = true;
        switch(AttackSelectionIndex)
        {
            case 0:
                fire.transform.position = new Vector3(transform.position.x, transform.position.y+1, transform.position.z);
                fire.transform.position += 5 * transform.forward;
                fire.Play();
                StartCoroutine(Shake(.15f, 3f));
                break;
            case 1:
                water.transform.position = new Vector3(transform.position.x, transform.position.y, transform.position.z);
                water.transform.position += 9 * transform.forward;
                water.Play();
                StartCoroutine(Shake(.15f, 3f));
                break;
            case 2:
                lightning.transform.position = new Vector3(transform.position.x, transform.position.y, transform.position.z);
                lightning.transform.position += 6 * transform.forward;
                lightning.Play();
                StartCoroutine(Shake(.15f, 3f));
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
}
