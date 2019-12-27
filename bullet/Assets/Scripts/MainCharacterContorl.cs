using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MainCharacterContorl : MonoBehaviour
{
    public int speed = 20;

    private void OnTriggerEnter2D(Collider2D other)
    {
        if (other.gameObject.tag == "bullet")
        {
            Debug.Log("충돌");
           // Application.LoadLevel("ResultScene");
        }
    }

    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        Vector2 Position = transform.position;

        if (Position.x > 8) transform.position = new Vector2(-8, Position.y);
        if (Position.x < -8) transform.position = new Vector2(8, Position.y);
        if (Position.y > 5) transform.position = new Vector2(Position.x, -5);
        if (Position.y < -5) transform.position = new Vector2(Position.x, 5);
        if (Input.GetKey(KeyCode.W)) transform.Translate(Vector2.up * speed * Time.deltaTime);
        if (Input.GetKey(KeyCode.S)) transform.Translate(Vector2.down * speed * Time.deltaTime);
        if (Input.GetKey(KeyCode.A)) transform.Translate(Vector2.left * speed * Time.deltaTime);
        if (Input.GetKey(KeyCode.D)) transform.Translate(Vector2.right * speed * Time.deltaTime);
    }
}
