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

// UnityEngine.Purchasing.Extension.UnityUtil
struct UnityUtil_t1184763057;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;
// System.Action
struct Action_t3771233898;
// System.Object[]
struct ObjectU5BU5D_t1108656482;
// System.Action`1<System.Boolean>
struct Action_1_t872614854;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime4283661327.h"
#include "UnityEngine_UnityEngine_RuntimePlatform3050318497.h"
#include "UnityEngine_UnityEngine_DeviceType3959528308.h"
#include "System_Core_System_Action3771233898.h"
#include "mscorlib_System_String7231557.h"

// System.Void UnityEngine.Purchasing.Extension.UnityUtil::.ctor()
extern "C"  void UnityUtil__ctor_m273723344 (UnityUtil_t1184763057 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime UnityEngine.Purchasing.Extension.UnityUtil::get_currentTime()
extern "C"  DateTime_t4283661327  UnityUtil_get_currentTime_m4219742674 (UnityUtil_t1184763057 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Purchasing.Extension.UnityUtil::get_persistentDataPath()
extern "C"  String_t* UnityUtil_get_persistentDataPath_m1644608678 (UnityUtil_t1184763057 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RuntimePlatform UnityEngine.Purchasing.Extension.UnityUtil::get_platform()
extern "C"  int32_t UnityUtil_get_platform_m3806352783 (UnityUtil_t1184763057 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Purchasing.Extension.UnityUtil::get_isEditor()
extern "C"  bool UnityUtil_get_isEditor_m1852677392 (UnityUtil_t1184763057 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Purchasing.Extension.UnityUtil::get_deviceModel()
extern "C"  String_t* UnityUtil_get_deviceModel_m980708629 (UnityUtil_t1184763057 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Purchasing.Extension.UnityUtil::get_deviceName()
extern "C"  String_t* UnityUtil_get_deviceName_m3372737601 (UnityUtil_t1184763057 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.DeviceType UnityEngine.Purchasing.Extension.UnityUtil::get_deviceType()
extern "C"  int32_t UnityUtil_get_deviceType_m3049286731 (UnityUtil_t1184763057 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Purchasing.Extension.UnityUtil::get_operatingSystem()
extern "C"  String_t* UnityUtil_get_operatingSystem_m2440740274 (UnityUtil_t1184763057 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object UnityEngine.Purchasing.Extension.UnityUtil::Uniject.IUtil.InitiateCoroutine(System.Collections.IEnumerator)
extern "C"  Il2CppObject * UnityUtil_Uniject_IUtil_InitiateCoroutine_m902648622 (UnityUtil_t1184763057 * __this, Il2CppObject * ___start0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.Extension.UnityUtil::Uniject.IUtil.InitiateCoroutine(System.Collections.IEnumerator,System.Int32)
extern "C"  void UnityUtil_Uniject_IUtil_InitiateCoroutine_m3605778868 (UnityUtil_t1184763057 * __this, Il2CppObject * ___start0, int32_t ___delay1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.Extension.UnityUtil::RunOnMainThread(System.Action)
extern "C"  void UnityUtil_RunOnMainThread_m1292234082 (UnityUtil_t1184763057 * __this, Action_t3771233898 * ___runnable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object UnityEngine.Purchasing.Extension.UnityUtil::GetWaitForSeconds(System.Int32)
extern "C"  Il2CppObject * UnityUtil_GetWaitForSeconds_m1230489835 (UnityUtil_t1184763057 * __this, int32_t ___seconds0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.Extension.UnityUtil::Start()
extern "C"  void UnityUtil_Start_m3515828432 (UnityUtil_t1184763057 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Purchasing.Extension.UnityUtil::PcPlatform()
extern "C"  bool UnityUtil_PcPlatform_m1458864374 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.Extension.UnityUtil::DebugLog(System.String,System.Object[])
extern "C"  void UnityUtil_DebugLog_m1258456553 (Il2CppObject * __this /* static, unused */, String_t* ___message0, ObjectU5BU5D_t1108656482* ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.Purchasing.Extension.UnityUtil::DelayedCoroutine(System.Collections.IEnumerator,System.Int32)
extern "C"  Il2CppObject * UnityUtil_DelayedCoroutine_m3342802706 (UnityUtil_t1184763057 * __this, Il2CppObject * ___coroutine0, int32_t ___delay1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.Extension.UnityUtil::Update()
extern "C"  void UnityUtil_Update_m1622351165 (UnityUtil_t1184763057 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.Extension.UnityUtil::AddPauseListener(System.Action`1<System.Boolean>)
extern "C"  void UnityUtil_AddPauseListener_m1421910966 (UnityUtil_t1184763057 * __this, Action_1_t872614854 * ___runnable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.Extension.UnityUtil::OnApplicationPause(System.Boolean)
extern "C"  void UnityUtil_OnApplicationPause_m3328890160 (UnityUtil_t1184763057 * __this, bool ___paused0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.Extension.UnityUtil::.cctor()
extern "C"  void UnityUtil__cctor_m3708360157 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
