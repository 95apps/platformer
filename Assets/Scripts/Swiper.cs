using UnityEngine;
using System.Collections;

public class Swiper : MonoBehaviour
{
    public Platform platform;
    private Rigidbody rb;
    public Transform platformTransform;
    // Use this for initialization
    void Start()
    {
        rb = GetComponent<Rigidbody>();
    }

    // Update is called once per frame
    void Update()
    {

        if (platform.direction == 0 || platform.direction == 2)
        {
            transform.position = Vector3.Lerp(platformTransform.position + new Vector3(-5, 2f, 0), platformTransform.position + new Vector3(5, 2f, 0), Mathf.PingPong(Time.time * 0.5f, 1.0f));
        }
        else
        {
            transform.position = Vector3.Lerp(platformTransform.position + new Vector3(0, 2f, -5), platformTransform.position + new Vector3(0, 2f, 5), Mathf.PingPong(Time.time * 0.5f, 1.0f));
        }
    }
}