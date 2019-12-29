using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class BulletBehavior : MonoBehaviour
{
    public float speed = 8.0f;
    public float activeTime = 3.0f;
    public float spawnTime;

    private void OnTriggerEnter2D(Collider2D other)
    {
        if (other.gameObject.tag == "Player")
        {
            Debug.Log("충돌");
            SceneManager.LoadScene("ResultScene");
        }
    }

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
        //transform.Translate(Vector2.right * speed * Time.deltaTime);
        Vector2 BulletDirection = MainCharacterContorl.Position;
       // transform.Translate(BulletDirection);
        

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
