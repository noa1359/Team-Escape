using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PlayerController : MonoBehaviour
{
    public Joystick joystickHorizontal;
    public Joystick joysticVertical;

    private Rigidbody2D rb;
    public float jumpForce;
    public float speed = 48f;
    private float moveInput;

    private bool isGrounded;
    public Transform feetPos;
    public float checkRadius;
    public LayerMask whatIsGround;

    public  GameObject DustEffect;
    public  GameObject TrailEffect;
    bool spawnDust;
    float timeBtwTrail;
    public float startTimeBtwTrail;

    private float jumpTimeCounter;
    public float jumpTime;
    private bool isJumping;
    bool isWalking;

    public Animator anim;

    private AudioSource source;
    public AudioSource charaSource;
    public AudioClip landingSound;
    public AudioClip walkingTileSound;

    // Start is called before the first frame update
    void Start()
    {
        source = GetComponent<AudioSource>();
        rb = GetComponent<Rigidbody2D>();
    }

    void FixedUpdate()
    {
        rb.velocity = new Vector2(moveInput * speed, rb.velocity.y);
    }

    void Update()
    {
        moveInput = joystickHorizontal.Horizontal;

        if (moveInput == 0)
        {
            anim.SetBool("isRunning", false);
            isWalking = false;
        }
        else
        {
            anim.SetBool("isRunning", true);
            isWalking = true;
            if (timeBtwTrail <= 0)
            {
                Instantiate(TrailEffect, feetPos.position, Quaternion.identity);
                timeBtwTrail = startTimeBtwTrail;
            }
            else
            {
                timeBtwTrail -= Time.deltaTime;
            }
        }

        if (isWalking)
        {
            if (!charaSource.isPlaying)
            {
                charaSource.Play();
            }
        }
        else
        {
            charaSource.Stop();
        }

        isGrounded = Physics2D.OverlapCircle(feetPos.position, checkRadius, whatIsGround);

        if (isGrounded == true)
        {
            if (spawnDust == true)
            {
                source.clip = landingSound;
                source.Play();
                Instantiate(DustEffect, feetPos.position, Quaternion.identity);
                spawnDust = false;
            }
            anim.SetBool("isJumping", false);
        }
        else
        {
            spawnDust = true;
            anim.SetBool("isJumping", true);
        }

        if(moveInput > 0)
        {
            transform.eulerAngles = new Vector3(0, 0, 0);
        }
        else if(moveInput < 0)
        {
            transform.eulerAngles = new Vector3(0, 180, 0);
        }
        
        if(isGrounded == true && joysticVertical.Vertical > 0f)
        {
            Instantiate(DustEffect, feetPos.position, Quaternion.identity);
            anim.SetTrigger("takeOf");
            isJumping = true;
            jumpTimeCounter = jumpTime;
            rb.velocity = Vector2.up * jumpForce;
        }

        if(joysticVertical.Vertical > 0f && isJumping == true)
        {
            if(jumpTimeCounter > 0)
            {
                rb.velocity = Vector2.up * jumpForce;
                jumpTimeCounter -= Time.deltaTime;
            }
            else
            {
                isJumping = false;
            }
            
        }

        if(joysticVertical.Vertical <= 0f)
        {
            isJumping = false;
        }
    }
}
