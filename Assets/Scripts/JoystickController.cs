using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityStandardAssets.CrossPlatformInput;
using UnityEngine.EventSystems;

public class JoystickController : MonoBehaviour, IPointerDownHandler, IPointerUpHandler, IDragHandler
{

    public Joystick joystick;

    // Use this for initialization
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {

    }

    public void OnPointerDown(PointerEventData data)
    {
        joystick.OnPointerDown(data);
    }

    public void OnPointerUp(PointerEventData data)
    {
        joystick.OnPointerUp(data);
    }

    public void OnDrag(PointerEventData data)
    {
        joystick.OnDrag(data);
    }
}
