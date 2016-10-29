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

// Platform
struct Platform_t1939328147;
// Platforms
struct Platforms_t4284597824;
// Clouds
struct Clouds_t2021315838;
// Player
struct Player_t2393081601;
// UnityEngine.Collider
struct Collider_t2939674232;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Platforms4284597824.h"
#include "AssemblyU2DCSharp_Clouds2021315838.h"
#include "AssemblyU2DCSharp_Player2393081601.h"
#include "UnityEngine_UnityEngine_Collider2939674232.h"

// System.Void Platform::.ctor()
extern "C"  void Platform__ctor_m2065327976 (Platform_t1939328147 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Platform::Initialize(Platforms,System.Int32,System.Int32,System.Int32,Clouds,System.Single,Player)
extern "C"  void Platform_Initialize_m1251886281 (Platform_t1939328147 * __this, Platforms_t4284597824 * ___plats0, int32_t ___dir1, int32_t ___consecutiveSpawned2, int32_t ___consecutivePlaced3, Clouds_t2021315838 * ___clouds4, float ___pitch5, Player_t2393081601 * ___player6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Platform::Start()
extern "C"  void Platform_Start_m1012465768 (Platform_t1939328147 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Platform::Hermite(System.Single,System.Single,System.Single)
extern "C"  float Platform_Hermite_m1392482201 (Il2CppObject * __this /* static, unused */, float ___start0, float ___end1, float ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Platform::Update()
extern "C"  void Platform_Update_m1327519909 (Platform_t1939328147 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Platform::Move()
extern "C"  void Platform_Move_m133973101 (Platform_t1939328147 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Platform::TrafficLight()
extern "C"  void Platform_TrafficLight_m1524868277 (Platform_t1939328147 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Platform::DestroyPlatform()
extern "C"  void Platform_DestroyPlatform_m3141029267 (Platform_t1939328147 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Platform::OnTriggerEnter(UnityEngine.Collider)
extern "C"  void Platform_OnTriggerEnter_m3086261520 (Platform_t1939328147 * __this, Collider_t2939674232 * ___col0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Platform::OnTriggerExit(UnityEngine.Collider)
extern "C"  void Platform_OnTriggerExit_m2243331730 (Platform_t1939328147 * __this, Collider_t2939674232 * ___col0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
