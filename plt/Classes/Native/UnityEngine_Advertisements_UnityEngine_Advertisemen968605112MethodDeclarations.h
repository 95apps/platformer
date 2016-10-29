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

// UnityEngine.Advertisements.UnityAdsEditor
struct UnityAdsEditor_t968605112;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;
// System.Action`1<UnityEngine.WWW>
struct Action_1_t3530437141;
// UnityEngine.WWW
struct WWW_t3134621005;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t901821544;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t274140790;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "UnityEngine_UnityEngine_WWW3134621005.h"
#include "UnityEngine_Advertisements_UnityEngine_Advertiseme4169299268.h"

// System.Void UnityEngine.Advertisements.UnityAdsEditor::.ctor()
extern "C"  void UnityAdsEditor__ctor_m3976139971 (UnityAdsEditor_t968605112 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnityAdsEditor::RegisterNative(System.String)
extern "C"  void UnityAdsEditor_RegisterNative_m4194002087 (UnityAdsEditor_t968605112 * __this, String_t* ___extensionPath0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnityAdsEditor::Init(System.String,System.Boolean)
extern "C"  void UnityAdsEditor_Init_m1629594092 (UnityAdsEditor_t968605112 * __this, String_t* ___gameId0, bool ___testModeEnabled1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.Advertisements.UnityAdsEditor::GetAdPlan(System.String,System.Action`1<UnityEngine.WWW>)
extern "C"  Il2CppObject * UnityAdsEditor_GetAdPlan_m2752032585 (UnityAdsEditor_t968605112 * __this, String_t* ___URL0, Action_1_t3530437141 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnityAdsEditor::HandleResponse(UnityEngine.WWW)
extern "C"  void UnityAdsEditor_HandleResponse_m4023781576 (UnityAdsEditor_t968605112 * __this, WWW_t3134621005 * ___www0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<System.String> UnityEngine.Advertisements.UnityAdsEditor::CollectZoneIds(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  Il2CppObject* UnityAdsEditor_CollectZoneIds_m4005528395 (UnityAdsEditor_t968605112 * __this, Il2CppObject* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Advertisements.UnityAdsEditor::CanShowAds(System.String)
extern "C"  bool UnityAdsEditor_CanShowAds_m4140735712 (UnityAdsEditor_t968605112 * __this, String_t* ___zoneId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnityAdsEditor::SetLogLevel(UnityEngine.Advertisements.Advertisement/DebugLevel)
extern "C"  void UnityAdsEditor_SetLogLevel_m1404868299 (UnityAdsEditor_t968605112 * __this, int32_t ___logLevel0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnityAdsEditor::SetCampaignDataURL(System.String)
extern "C"  void UnityAdsEditor_SetCampaignDataURL_m2172730030 (UnityAdsEditor_t968605112 * __this, String_t* ___url0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Advertisements.UnityAdsEditor::Show(System.String,System.String)
extern "C"  bool UnityAdsEditor_Show_m1284236386 (UnityAdsEditor_t968605112 * __this, String_t* ___zoneId0, String_t* ___gamerSid1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
