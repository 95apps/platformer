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

// System.String
struct String_t;
// UnityEngine.Advertisements.ShowOptions
struct ShowOptions_t4227685023;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "UnityEngine_Advertisements_UnityEngine_Advertiseme4169299268.h"
#include "UnityEngine_Advertisements_UnityEngine_Advertiseme4227685023.h"
#include "UnityEngine_Advertisements_UnityEngine_Advertiseme3091118442.h"

// System.Void UnityEngine.Advertisements.Advertisement::.cctor()
extern "C"  void Advertisement__cctor_m3748510935 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Advertisement::LoadRuntime()
extern "C"  void Advertisement_LoadRuntime_m1153764358 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Advertisement::LoadEditor(System.String,System.Boolean)
extern "C"  void Advertisement_LoadEditor_m1462697244 (Il2CppObject * __this /* static, unused */, String_t* ___extensionPath0, bool ___supportedPlatform1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Advertisement::Load()
extern "C"  void Advertisement_Load_m2111767636 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Advertisements.Advertisement::get_initializeOnStartup()
extern "C"  bool Advertisement_get_initializeOnStartup_m258615511 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Advertisement::RegisterNative()
extern "C"  void Advertisement_RegisterNative_m3772220104 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Advertisements.Advertisement/DebugLevel UnityEngine.Advertisements.Advertisement::get_debugLevel()
extern "C"  int32_t Advertisement_get_debugLevel_m1607111063 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Advertisement::set_debugLevel(UnityEngine.Advertisements.Advertisement/DebugLevel)
extern "C"  void Advertisement_set_debugLevel_m2156200626 (Il2CppObject * __this /* static, unused */, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Advertisements.Advertisement::get_isSupported()
extern "C"  bool Advertisement_get_isSupported_m2336831501 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Advertisements.Advertisement::IsEnabled()
extern "C"  bool Advertisement_IsEnabled_m1759809833 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Advertisements.Advertisement::get_isInitialized()
extern "C"  bool Advertisement_get_isInitialized_m388766003 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Advertisement::Initialize(System.String)
extern "C"  void Advertisement_Initialize_m2553209092 (Il2CppObject * __this /* static, unused */, String_t* ___appId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Advertisement::Initialize(System.String,System.Boolean)
extern "C"  void Advertisement_Initialize_m194693625 (Il2CppObject * __this /* static, unused */, String_t* ___appId0, bool ___testMode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Advertisement::Show()
extern "C"  void Advertisement_Show_m2306142379 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Advertisement::Show(System.String)
extern "C"  void Advertisement_Show_m362306615 (Il2CppObject * __this /* static, unused */, String_t* ___zoneId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Advertisement::Show(System.String,UnityEngine.Advertisements.ShowOptions)
extern "C"  void Advertisement_Show_m3360971095 (Il2CppObject * __this /* static, unused */, String_t* ___zoneId0, ShowOptions_t4227685023 * ___options1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Advertisements.Advertisement::IsReady()
extern "C"  bool Advertisement_IsReady_m3183471819 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Advertisements.Advertisement::IsReady(System.String)
extern "C"  bool Advertisement_IsReady_m935334935 (Il2CppObject * __this /* static, unused */, String_t* ___zoneId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Advertisements.Advertisement::get_isShowing()
extern "C"  bool Advertisement_get_isShowing_m1176000740 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Advertisement::SetCampaignDataURL(System.String)
extern "C"  void Advertisement_SetCampaignDataURL_m2685547969 (Il2CppObject * __this /* static, unused */, String_t* ___url0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Advertisement::OnHide()
extern "C"  void Advertisement_OnHide_m1520829743 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Advertisement::OnShow()
extern "C"  void Advertisement_OnShow_m1835171882 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Advertisement::OnVideoCompleted(System.String,System.Boolean)
extern "C"  void Advertisement_OnVideoCompleted_m3415528504 (Il2CppObject * __this /* static, unused */, String_t* ___rewardItemKey0, bool ___skipped1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Advertisements.Advertisement::get_testMode()
extern "C"  bool Advertisement_get_testMode_m1196318894 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Advertisements.Advertisement::get_gameId()
extern "C"  String_t* Advertisement_get_gameId_m3573419751 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Advertisement::DeliverResult(UnityEngine.Advertisements.ShowResult)
extern "C"  void Advertisement_DeliverResult_m1423967449 (Il2CppObject * __this /* static, unused */, int32_t ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
