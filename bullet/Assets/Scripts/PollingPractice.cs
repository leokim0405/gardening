using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PollingPractice : MonoBehaviour
{
    public GameObject BulletPrefab;
    public float spawnRateMin = 1f;
    public float spawnRateMax = 3f;

    private Transform target;
    private float spawnRate;
    private float timeAfterSpawn;

    // Start is called before the first frame update
    void Start()
    {
        timeAfterSpawn = 0f;
        spawnRate = Random.Range(spawnRateMin, spawnRateMax);
        target = FindObjectOfType<MainCharacterContorl>().transform;
    }
 


    // Update is called once per frame
    void Update()
    {
        timeAfterSpawn = timeAfterSpawn + Time.deltaTime;
        if(timeAfterSpawn >= spawnRate)
        {
            timeAfterSpawn = 0f;
            GameObject bullets = Instantiate(BulletPrefab, transform.position, transform.rotation);
            bullets.transform.LookAt(target);
            spawnRate = Random.Range(spawnRateMin, spawnRateMax);
        }
    }
}
