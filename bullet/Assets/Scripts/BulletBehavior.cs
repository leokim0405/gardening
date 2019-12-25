using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BulletBehavior : MonoBehaviour
{
    public float speed = 10.0f;
    public float activeTime = 3.0f;
    public float spawnTime;

    // Start is called before the first frame update
    void Start()
    {
        
    }
    public void Spawn()
    {
        gameObject.SetActive(true);
        spawnTime = Time.time;
    }

    // Update is called once per frame
    void Update()
    {
        transform.Translate(Vector2.right * speed * Time.deltaTime);

        if(Time.time - spawnTime >= activeTime)
        {
            gameObject.SetActive(false);
        }
        else
        {
            transform.Translate(Vector2.right * speed * Time.deltaTime);
        }
    }
}
