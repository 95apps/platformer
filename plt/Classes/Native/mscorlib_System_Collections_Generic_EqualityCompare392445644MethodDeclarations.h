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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct DefaultComparer_t392445644;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_21944668977.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor()
extern "C"  void DefaultComparer__ctor_m699473545_gshared (DefaultComparer_t392445644 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m699473545(__this, method) ((  void (*) (DefaultComparer_t392445644 *, const MethodInfo*))DefaultComparer__ctor_m699473545_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetHashCode(T)
extern "C"  int32_t DefaultComparer_GetHashCode_m782100810_gshared (DefaultComparer_t392445644 * __this, KeyValuePair_2_t1944668977  ___obj0, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m782100810(__this, ___obj0, method) ((  int32_t (*) (DefaultComparer_t392445644 *, KeyValuePair_2_t1944668977 , const MethodInfo*))DefaultComparer_GetHashCode_m782100810_gshared)(__this, ___obj0, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Equals(T,T)
extern "C"  bool DefaultComparer_Equals_m3661957278_gshared (DefaultComparer_t392445644 * __this, KeyValuePair_2_t1944668977  ___x0, KeyValuePair_2_t1944668977  ___y1, const MethodInfo* method);
#define DefaultComparer_Equals_m3661957278(__this, ___x0, ___y1, method) ((  bool (*) (DefaultComparer_t392445644 *, KeyValuePair_2_t1944668977 , KeyValuePair_2_t1944668977 , const MethodInfo*))DefaultComparer_Equals_m3661957278_gshared)(__this, ___x0, ___y1, method)
