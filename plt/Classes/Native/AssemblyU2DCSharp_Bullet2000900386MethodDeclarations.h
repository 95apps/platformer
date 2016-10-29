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

// Bullet
struct Bullet_t2000900386;
// Bullets
struct Bullets_t1898369937;
// Platform
struct Platform_t1939328147;
// UnityEngine.Collision
struct Collision_t2494107688;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Bullets1898369937.h"
#include "AssemblyU2DCSharp_Platform1939328147.h"
#include "UnityEngine_UnityEngine_Collision2494107688.h"

// System.Void Bullet::.ctor()
extern "C"  void Bullet__ctor_m4277156281 (Bullet_t2000900386 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bullet::Start()
extern "C"  void Bullet_Start_m3224294073 (Bullet_t2000900386 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bullet::Update()
extern "C"  void Bullet_Update_m1174720628 (Bullet_t2000900386 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bullet::Initialize(Bullets,Platform)
extern "C"  void Bullet_Initialize_m3804687853 (Bullet_t2000900386 * __this, Bullets_t1898369937 * ___bullets0, Platform_t1939328147 * ___plat1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bullet::OnCollisionEnter(UnityEngine.Collision)
extern "C"  void Bullet_OnCollisionEnter_m4238071687 (Bullet_t2000900386 * __this, Collision_t2494107688 * ___col0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
