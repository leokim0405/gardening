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

    public GameObject player;

    // Start is called before the first frame update
    void Start()
    {
        timeAfterSpawn = 0f;
        spawnRate = Random.Range(spawnRateMin, spawnRateMax);
        //target = FindObjectOfType<MainCharacterContorl>().transform;
        target = player.transform;
    }
 
    // Update is called once per frame
    void Update()
    {
        CreateBullet();
    }
    private void CreateBullet()
    {
        Vector3 pos = new Vector3(0,0,0);
        int PullerNumber = UnityEngine.Random.Range(0, 4);

        if(PullerNumber <= 1)
        {
            pos = new Vector3(7f, 4f,0f);
        }
        else if(PullerNumber <= 2)
        {
            pos = new Vector3(-7f, 4f,0f);
        }
        else if(PullerNumber <=3 )
        {
            pos = new Vector3(7f, -4f,0f);
        }
        else if(PullerNumber <=4 )
        {
            pos = new Vector3(-7f, -4f,0f);
        }
        timeAfterSpawn = timeAfterSpawn + Time.deltaTime;
        //transform.position = pos;
        if(timeAfterSpawn >= spawnRate)
        {
            timeAfterSpawn = 0f;
            
            GameObject bullets = Instantiate(BulletPrefab, pos, transform.rotation);
            
            bullets.transform.LookAt(target);
            spawnRate = Random.Range(spawnRateMin, spawnRateMax);
            Debug.Log("activated");
        }
    }
}
