using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BulletPooler : MonoBehaviour
{
    public float coolTime = 0.1f;
    public GameObject bullet;
    public int poolCount = 10;

    List<GameObject> bullets;

    // Start is called before the first frame update
    void Start()
    {
        bullets = new List<GameObject>();
        while(poolCount > 0)
        {
            GameObject obj = (GameObject)Instantiate(bullet, transform.position, Quaternion.identity);
            obj.SetActive(false);
            bullets.Add(obj);
            poolCount++;
        }
    }

    // Update is called once per frame
    void Update()
    {
        foreach (GameObject bullet in bullets)
        {
            if(!bullet.activeInHierarchy)
            {
                bullet.transform.position = gameObject.transform.position;
                bullet.GetComponent<BulletBehavior>().Spawn();
                break;
            }
        }
    }
}
