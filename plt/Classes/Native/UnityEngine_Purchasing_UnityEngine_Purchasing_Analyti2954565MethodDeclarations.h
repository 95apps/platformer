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

// UnityEngine.Purchasing.AnalyticsReporter
struct AnalyticsReporter_t2954565;
// UnityEngine.Purchasing.IUnityAnalytics
struct IUnityAnalytics_t1104563416;
// UnityEngine.Purchasing.Product
struct Product_t3127875693;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Prod3127875693.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Purc2097848363.h"
#include "mscorlib_System_String7231557.h"

// System.Void UnityEngine.Purchasing.AnalyticsReporter::.ctor(UnityEngine.Purchasing.IUnityAnalytics)
extern "C"  void AnalyticsReporter__ctor_m542232179 (AnalyticsReporter_t2954565 * __this, Il2CppObject * ___analytics0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.AnalyticsReporter::OnPurchaseSucceeded(UnityEngine.Purchasing.Product)
extern "C"  void AnalyticsReporter_OnPurchaseSucceeded_m3797465501 (AnalyticsReporter_t2954565 * __this, Product_t3127875693 * ___product0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.AnalyticsReporter::OnPurchaseFailed(UnityEngine.Purchasing.Product,UnityEngine.Purchasing.PurchaseFailureReason)
extern "C"  void AnalyticsReporter_OnPurchaseFailed_m3012130011 (AnalyticsReporter_t2954565 * __this, Product_t3127875693 * ___product0, int32_t ___reason1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.AnalyticsReporter::ExtractReceiptAndSignature(UnityEngine.Purchasing.Product,System.String&,System.String&)
extern "C"  void AnalyticsReporter_ExtractReceiptAndSignature_m3441574546 (AnalyticsReporter_t2954565 * __this, Product_t3127875693 * ___product0, String_t** ___receipt1, String_t** ___signature2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
