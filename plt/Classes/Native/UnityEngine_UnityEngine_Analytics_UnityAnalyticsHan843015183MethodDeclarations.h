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
// UnityEngine.Analytics.CustomEventData
struct CustomEventData_t3951762249;
struct UnityAnalyticsHandler_t843015183_marshaled_pinvoke;
struct UnityAnalyticsHandler_t843015183_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Analytics_AnalyticsResult1592545689.h"
#include "mscorlib_System_String7231557.h"
#include "UnityEngine_UnityEngine_Analytics_CustomEventData3951762249.h"

// System.Void UnityEngine.Analytics.UnityAnalyticsHandler::.ctor()
extern "C"  void UnityAnalyticsHandler__ctor_m1939763592 (UnityAnalyticsHandler_t843015183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.UnityAnalyticsHandler::InternalCreate()
extern "C"  void UnityAnalyticsHandler_InternalCreate_m1771744469 (UnityAnalyticsHandler_t843015183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.UnityAnalyticsHandler::InternalDestroy()
extern "C"  void UnityAnalyticsHandler_InternalDestroy_m477950883 (UnityAnalyticsHandler_t843015183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.UnityAnalyticsHandler::Finalize()
extern "C"  void UnityAnalyticsHandler_Finalize_m3109675482 (UnityAnalyticsHandler_t843015183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Analytics.UnityAnalyticsHandler::Dispose()
extern "C"  void UnityAnalyticsHandler_Dispose_m4290255813 (UnityAnalyticsHandler_t843015183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.UnityAnalyticsHandler::Transaction(System.String,System.Double,System.String,System.String,System.String)
extern "C"  int32_t UnityAnalyticsHandler_Transaction_m284769375 (UnityAnalyticsHandler_t843015183 * __this, String_t* ___productId0, double ___amount1, String_t* ___currency2, String_t* ___receiptPurchaseData3, String_t* ___signature4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.UnityAnalyticsHandler::InternalTransaction(System.String,System.Double,System.String,System.String,System.String)
extern "C"  int32_t UnityAnalyticsHandler_InternalTransaction_m2733118972 (UnityAnalyticsHandler_t843015183 * __this, String_t* ___productId0, double ___amount1, String_t* ___currency2, String_t* ___receiptPurchaseData3, String_t* ___signature4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.UnityAnalyticsHandler::CustomEvent(System.String)
extern "C"  int32_t UnityAnalyticsHandler_CustomEvent_m3240791044 (UnityAnalyticsHandler_t843015183 * __this, String_t* ___customEventName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.UnityAnalyticsHandler::CustomEvent(UnityEngine.Analytics.CustomEventData)
extern "C"  int32_t UnityAnalyticsHandler_CustomEvent_m432267040 (UnityAnalyticsHandler_t843015183 * __this, CustomEventData_t3951762249 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.UnityAnalyticsHandler::SendCustomEventName(System.String)
extern "C"  int32_t UnityAnalyticsHandler_SendCustomEventName_m2006790177 (UnityAnalyticsHandler_t843015183 * __this, String_t* ___customEventName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.UnityAnalyticsHandler::SendCustomEvent(UnityEngine.Analytics.CustomEventData)
extern "C"  int32_t UnityAnalyticsHandler_SendCustomEvent_m4010705608 (UnityAnalyticsHandler_t843015183 * __this, CustomEventData_t3951762249 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct UnityAnalyticsHandler_t843015183;
struct UnityAnalyticsHandler_t843015183_marshaled_pinvoke;

extern "C" void UnityAnalyticsHandler_t843015183_marshal_pinvoke(const UnityAnalyticsHandler_t843015183& unmarshaled, UnityAnalyticsHandler_t843015183_marshaled_pinvoke& marshaled);
extern "C" void UnityAnalyticsHandler_t843015183_marshal_pinvoke_back(const UnityAnalyticsHandler_t843015183_marshaled_pinvoke& marshaled, UnityAnalyticsHandler_t843015183& unmarshaled);
extern "C" void UnityAnalyticsHandler_t843015183_marshal_pinvoke_cleanup(UnityAnalyticsHandler_t843015183_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct UnityAnalyticsHandler_t843015183;
struct UnityAnalyticsHandler_t843015183_marshaled_com;

extern "C" void UnityAnalyticsHandler_t843015183_marshal_com(const UnityAnalyticsHandler_t843015183& unmarshaled, UnityAnalyticsHandler_t843015183_marshaled_com& marshaled);
extern "C" void UnityAnalyticsHandler_t843015183_marshal_com_back(const UnityAnalyticsHandler_t843015183_marshaled_com& marshaled, UnityAnalyticsHandler_t843015183& unmarshaled);
extern "C" void UnityAnalyticsHandler_t843015183_marshal_com_cleanup(UnityAnalyticsHandler_t843015183_marshaled_com& marshaled);
