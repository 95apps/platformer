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

// UnityEngine.Analytics.UnityAnalyticsHandler
struct UnityAnalyticsHandler_t843015183;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t274140790;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Analytics_AnalyticsResult1592545689.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Decimal1954350631.h"

// UnityEngine.Analytics.UnityAnalyticsHandler UnityEngine.Analytics.Analytics::GetUnityAnalyticsHandler()
extern "C"  UnityAnalyticsHandler_t843015183 * Analytics_GetUnityAnalyticsHandler_m177521971 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Analytics::Transaction(System.String,System.Decimal,System.String,System.String,System.String)
extern "C"  int32_t Analytics_Transaction_m3695215468 (Il2CppObject * __this /* static, unused */, String_t* ___productId0, Decimal_t1954350631  ___amount1, String_t* ___currency2, String_t* ___receiptPurchaseData3, String_t* ___signature4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Analytics::CustomEvent(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  int32_t Analytics_CustomEvent_m458701863 (Il2CppObject * __this /* static, unused */, String_t* ___customEventName0, Il2CppObject* ___eventData1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
