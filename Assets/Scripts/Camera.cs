﻿using UnityEngine;
using System.Collections;
using System;

public class Camera : MonoBehaviour
{

    public Transform lookAt;
    public float smoothSpeed = 0.125f;
    public float deathStep;
    public Platforms platforms;
    public DeathCube deathCube;
    public Vector3 deathRotateTarget;
    public UnityEngine.Camera cameraComponent;
    public bool beginRevolving = false;
    public bool setPositions = true;
    
    private int distance;
    private bool smooth = true;
    private bool firstRotate = false;
    private Vector3 offset = new Vector3(0, 2.75f, -7.5f);
    private Vector3 playerStartPos;
    private Vector3 playerEndPos;
    private Vector3 playerAvgPos;
    private Vector3 playerDeadRotateStart;
    private Vector3 startDeathPos;
    private Vector3 deathTarget;
    private float midCamDistance;
    private float angle = 180f;
    private float rotateToThis;
    private float revolvingAngle;



    // Use this for initialization
    void Start()
    {
        playerStartPos = lookAt.transform.position;
    }

    // Update is called once per frame
   
    void FixedUpdate()
    {
        if(!beginRevolving){
            RotateCamera();
        }

        Vector3 desiredPosition = lookAt.transform.position + offset;

        if (smooth)
        {
            transform.position = Vector3.Lerp(transform.position, desiredPosition, smoothSpeed);
        }
        else
        {
            transform.position = desiredPosition;
        }

        if (deathCube.playerDead)
        {
            if (setPositions)
            {
                playerEndPos = lookAt.position;
                playerAvgPos = Vector3.Lerp(playerStartPos, playerEndPos, 0.5f);
                midCamDistance = Vector3.Distance(playerAvgPos, transform.position);
                playerDeadRotateStart = cameraComponent.ViewportToWorldPoint(new Vector3(0.5f, 0.5f, midCamDistance));
                startDeathPos = transform.position;
                distance = platforms.score + 20;
                if (platforms.consecutiveJumped < 4)
                {
                    deathTarget = playerAvgPos + new Vector3(0, distance, -distance);
                    revolvingAngle = 180f;
                }
                else if (platforms.consecutiveJumped >= 4 && platforms.consecutiveJumped < 8)
                {
                    deathTarget = playerAvgPos + new Vector3(-distance, distance, 0);
                    revolvingAngle = 270f;
                }
                else if (platforms.consecutiveJumped >= 8 && platforms.consecutiveJumped < 12)
                {
                    deathTarget = playerAvgPos + new Vector3(0, distance, distance);
                    revolvingAngle = 0f;
                }
                else if (platforms.consecutiveJumped >= 12 && platforms.consecutiveJumped < 16)
                {
                    deathTarget = playerAvgPos + new Vector3(distance, distance, 0);
                    revolvingAngle = 90f;
                }
                setPositions = false;
            }
            transform.LookAt(Hermite(playerDeadRotateStart, playerAvgPos, deathStep));
            transform.position = Hermite(startDeathPos, deathTarget, deathStep);
            deathStep += Time.deltaTime * 0.3f;
            if (deathStep > 1f)
            {
                revolvingAngle += Time.deltaTime * 10;
                deathStep = 1f;
                double x = distance * Mathf.Sin(revolvingAngle * Mathf.PI / 180f) + playerAvgPos.x;
                double z = distance * Mathf.Cos(revolvingAngle * Mathf.PI / 180f) + playerAvgPos.z;
                deathTarget = new Vector3((float) x, deathTarget.y, (float) z);
                beginRevolving = true;
            }
        }
    }

    private void RotateCamera()
    {
        rotateToThis = platforms.rotationAngleMultiplier * 90;
        angle += 720 * Time.deltaTime;
        transform.eulerAngles = new Vector3(20, transform.eulerAngles.y + 10, 0);
        if (angle >= rotateToThis)
        {
            angle = rotateToThis;
            transform.eulerAngles = new Vector3(20, rotateToThis - 180, 0);
        }
        double x = 5 * Mathf.Sin(angle * Mathf.PI / 180f);
        double z = 5 * Mathf.Cos(angle * Mathf.PI / 180f);
        offset = new Vector3((float)x, 2f, (float)z);
    }

    public static float Hermite(float start, float end, float value)
    {
        return Mathf.Lerp(start, end, value * value * (3.0f - 2.0f * value));
    }

    public static Vector3 Hermite(Vector3 start, Vector3 end, float value)
    {
        return new Vector3(Hermite(start.x, end.x, value), Hermite(start.y, end.y, value), Hermite(start.z, end.z, value));
    }
}