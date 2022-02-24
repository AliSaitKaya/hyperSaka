using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class attack : MonoBehaviour
{
    cameraShaker shaker;
    public Animator animator;
    public ParticleSystem fire;

    public Button attackButton;
    private bool attackStatus = false ;


    // Start is called before the first frame update
    void Start()
    {
        attackButton.onClick.AddListener(Attack);
        fire.Stop();
    }


    // Update is called once per frame
    void Update()
    {

        animator.SetBool("attack", attackStatus);
        attackStatus = false;
        if (!fire.isPlaying)
            fire.Stop();

    }

    public void Attack()
    {
        attackStatus = true;
        fire.Play();
        StartCoroutine(Shake(.15f ,3f));
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
