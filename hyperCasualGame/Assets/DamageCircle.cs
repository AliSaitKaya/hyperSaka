using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DamageCircle : MonoBehaviour
{
    [SerializeField] private Transform targetCircleTransform;
        private static DamageCircle instance;
     private Transform circleTransform;
    private Transform topTransform;
    private Transform bottomTransform;
     private Transform leftTransform;
    private Transform rightTransform;

    private static Vector3 circleSize;
    private static Vector3 circlePosition;
    private Vector3 targetCircleSize;
    private Vector3 targetCirclePosition;
    private float circleShrinkSpeed = 2f;
    private float shrinkTimer;
    GameObject wizard;
    public ParticleSystem bloodAnim;
    //public HealthSystem healthObj;
    GameObject enemyCanWalkingCircleArea;
     

    public void Awake() {
        instance = this;
       
        bloodAnim.Stop();
        circleTransform = GameObject.FindWithTag("circle").transform;
        topTransform = GameObject.FindWithTag("top").transform;
        bottomTransform = GameObject.FindWithTag("bottom").transform;
        leftTransform = GameObject.FindWithTag("left").transform;
        rightTransform = GameObject.FindWithTag("right").transform;

        wizard = GameObject.FindWithTag("Wizard");

        enemyCanWalkingCircleArea = GameObject.FindWithTag("EnemyCanWalkingCircleArea");

        SetCircleSize(new Vector3(0, 0.1f, 0), new Vector3(120, 120)); 

        SetTargetCircle(new Vector3(0,0.1f, 0), new Vector3(60, 60), 5f);
    }

    public void Update() {
        shrinkTimer -= Time.deltaTime;

        if (shrinkTimer < 0) {
            Vector3 sizeChangeVector = (targetCircleSize - circleSize).normalized;
            Vector3 newCircleSize = circleSize + sizeChangeVector * Time.deltaTime * circleShrinkSpeed;

            Vector3 circleMoveDir = (targetCirclePosition - circlePosition).normalized;
            Vector3 newCirclePosition = circlePosition + circleMoveDir * Time.deltaTime * circleShrinkSpeed;

            SetCircleSize(newCirclePosition, newCircleSize);
            SetAiCanAttackCirclePosSize(newCirclePosition, newCircleSize/2);

            float distanceTestAmount = .1f;
            if (Vector3.Distance(newCircleSize, targetCircleSize) < distanceTestAmount && Vector3.Distance(newCirclePosition, targetCirclePosition) < distanceTestAmount) {
                GenerateTargetCircleDeneme();
            }


        }

    }

    private void GenerateTargetCircle() {
        float shrinkSizeAmount = Random.Range(3f, 12f);
        Vector3 generatedTargetCircleSize = circleSize - new Vector3(shrinkSizeAmount, shrinkSizeAmount) * 2f;

        // Set a minimum size
        if (generatedTargetCircleSize.x < 10f) generatedTargetCircleSize = Vector3.one * 10f;

        Vector3 generatedTargetCirclePosition = circlePosition + 
            new Vector3(Random.Range(-shrinkSizeAmount, shrinkSizeAmount),0, Random.Range(-shrinkSizeAmount, shrinkSizeAmount));

        float shrinkTime = Random.Range(1f, 6f);

        generatedTargetCirclePosition.z=generatedTargetCirclePosition.y-40f;
        generatedTargetCirclePosition.y=0;

        SetTargetCircle(generatedTargetCirclePosition, generatedTargetCircleSize, shrinkTime);
    }
     private void GenerateTargetCircleDeneme() {
        float shrinkSizeAmount = Random.Range(8f, 10f);
        Vector3 generatedTargetCircleSize = circleSize - new Vector3(shrinkSizeAmount, shrinkSizeAmount) * 2f;

        // Set a minimum size
        if (generatedTargetCircleSize.x < 10f) generatedTargetCircleSize = Vector3.one * 10f;

        Vector3 generatedTargetCirclePosition = circlePosition;
            

        float shrinkTime = Random.Range(4f, 8f);
        generatedTargetCirclePosition.x= circlePosition.x+Random.Range(-(circleSize.x)/5,(circleSize.x)/5);
        generatedTargetCirclePosition.z= circlePosition.z+Random.Range(-(circleSize.x)/5,(circleSize.x)/5);
        generatedTargetCirclePosition.y=0.1f;

        SetTargetCircle(generatedTargetCirclePosition, generatedTargetCircleSize, shrinkTime);
    }
 private void SetCircleSize(Vector3 position, Vector3 size) {
        circlePosition = position;
        circleSize = size;

        circleTransform.position = position;
    
        circleTransform.localScale = size;
        
        topTransform.localScale = new Vector3(300,300);
        topTransform.localPosition = new Vector3(circleTransform.position.x+topTransform.localScale.x*0.5f+size.x*0.5f,topTransform.position.y,circleTransform.position.z);
        
        
        bottomTransform.localScale = new Vector3(300, 300);
        bottomTransform.localPosition = new Vector3(circleTransform.position.x-bottomTransform.localScale.x*0.5f-size.x*0.5f,bottomTransform.position.y,circleTransform.position.z);

        leftTransform.localScale = new Vector3(300, 300);
        leftTransform.localPosition = new Vector3(circleTransform.position.x,leftTransform.position.y,circleTransform.position.z+leftTransform.localScale.y*0.5f+size.y*0.5f);

        rightTransform.localScale = new Vector3(300, 300);
        rightTransform.localPosition = new Vector3(circleTransform.position.x,rightTransform.position.y,circleTransform.position.z-rightTransform.localScale.y*0.5f-size.y*0.5f);

    }

 private void SetTargetCircle(Vector3 position, Vector3 size,float shrinkTimer) {
        
        this.shrinkTimer = shrinkTimer;

        targetCircleTransform.position = position;
        targetCircleTransform.localScale = size;
        
        targetCirclePosition = position;
        targetCircleSize = size;  

    }

    private void SetAiCanAttackCirclePosSize(Vector3 position, Vector3 size)
    {

        enemyCanWalkingCircleArea.transform.position = position;

        Debug.Log("enemy walking around range: " + enemyPathMovement.Instance.getRange());
        enemyPathMovement.Instance.setRange(size.x -5);
    }
        
    public static bool IsOutsideCircle(Vector3 position) {

        return Vector3.Distance(position, circlePosition) > circleSize.x * .5f;
        
    }
// player classından burayı cağır !!!

}
