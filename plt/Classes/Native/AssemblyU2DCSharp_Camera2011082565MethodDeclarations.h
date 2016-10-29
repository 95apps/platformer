#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Camera
struct Camera_t2011082565;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

// System.Void Camera::.ctor()
extern "C"  void Camera__ctor_m3662222070 (Camera_t2011082565 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Camera::Start()
extern "C"  void Camera_Start_m2609359862 (Camera_t2011082565 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Camera::FixedUpdate()
extern "C"  void Camera_FixedUpdate_m452616177 (Camera_t2011082565 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Camera::RotateCamera()
extern "C"  void Camera_RotateCamera_m3132345070 (Camera_t2011082565 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Camera::Hermite(System.Single,System.Single,System.Single)
extern "C"  float Camera_Hermite_m4132487755 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Camera::Hermite(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t4282066566  Camera_Hermite_m3979831317 (Il2CppObject * __this /* static, unused */, Vector3_t4282066566  ___start0, Vector3_t4282066566  ___end1, float ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
