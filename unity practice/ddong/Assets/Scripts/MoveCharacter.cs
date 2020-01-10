using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MoveCharacter : MonoBehaviour
{
    private new Rigidbody2D rigidbody;
    private float speed = 8;
    private float horizontal;

    private new SpriteRenderer renderer;
    // Start is called before the first frame update
    void Start()
    {
        rigidbody = GetComponent<Rigidbody2D>();
        renderer = GetComponent<SpriteRenderer>();
    }

    // Update is called once per frame
    void Update()
    {
        horizontal = Input.GetAxis("Horizontal");
        //Debug.Log(horizontal);
        PlayerMove();
        ScreenChk();
    }

    private void PlayerMove()
    {
        if(horizontal < 0)
        {
            renderer.flipX = true; // 뒤집기
        }
        else
        {
            renderer.flipX = false;
        }
        rigidbody.velocity = new Vector2(horizontal * speed, rigidbody.velocity.y);
    }

    private void ScreenChk()
    {
        Vector3 worlpos = Camera.main.WorldToViewportPoint(transform.position);
        if(worlpos.x < 0.05f)
        {
            worlpos.x = 0.05f;
        }
        if(worlpos.x > 0.95f)
        {
            worlpos.x = 0.95f;
        }
        this.transform.position = Camera.main.ViewportToWorldPoint(worlpos);
    }
}
