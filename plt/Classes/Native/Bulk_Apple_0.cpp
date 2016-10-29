#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// UnityEngine.Purchasing.iOSStoreBindings
struct iOSStoreBindings_t2359759090;
// System.String
struct String_t;
// UnityEngine.Purchasing.UnityPurchasingCallback
struct UnityPurchasingCallback_t2986617270;
// UnityEngine.Purchasing.OSXStoreBindings
struct OSXStoreBindings_t1956192619;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array1146569071.h"
#include "Apple_U3CModuleU3E86524790.h"
#include "Apple_U3CModuleU3E86524790MethodDeclarations.h"
#include "Apple_UnityEngine_Purchasing_iOSStoreBindings2359759090.h"
#include "Apple_UnityEngine_Purchasing_iOSStoreBindings2359759090MethodDeclarations.h"
#include "mscorlib_System_Void2863195528.h"
#include "mscorlib_System_Object4170816371MethodDeclarations.h"
#include "mscorlib_System_String7231557.h"
#include "Apple_UnityEngine_Purchasing_UnityPurchasingCallba2986617270.h"
#include "Apple_UnityEngine_Purchasing_OSXStoreBindings1956192619.h"
#include "Apple_UnityEngine_Purchasing_OSXStoreBindings1956192619MethodDeclarations.h"
#include "mscorlib_System_Boolean476798718.h"
#include "Apple_UnityEngine_Purchasing_UnityPurchasingCallba2986617270MethodDeclarations.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Purchasing.iOSStoreBindings::.ctor()
extern "C"  void iOSStoreBindings__ctor_m2068005060 (iOSStoreBindings_t2359759090 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1772956182(__this, /*hidden argument*/NULL);
		return;
	}
}
extern "C" void DEFAULT_CALL unityPurchasingRetrieveProducts(char*);
// System.Void UnityEngine.Purchasing.iOSStoreBindings::unityPurchasingRetrieveProducts(System.String)
extern "C"  void iOSStoreBindings_unityPurchasingRetrieveProducts_m1724542061 (Il2CppObject * __this /* static, unused */, String_t* ___json0, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___json0' to native representation
	char* ____json0_marshaled = NULL;
	____json0_marshaled = il2cpp_codegen_marshal_string(___json0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(unityPurchasingRetrieveProducts)(____json0_marshaled);

	// Marshaling cleanup of parameter '___json0' native representation
	il2cpp_codegen_marshal_free(____json0_marshaled);
	____json0_marshaled = NULL;

}
extern "C" void DEFAULT_CALL unityPurchasingPurchase(char*, char*);
// System.Void UnityEngine.Purchasing.iOSStoreBindings::unityPurchasingPurchase(System.String,System.String)
extern "C"  void iOSStoreBindings_unityPurchasingPurchase_m3984262728 (Il2CppObject * __this /* static, unused */, String_t* ___json0, String_t* ___developerPayload1, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*);

	// Marshaling of parameter '___json0' to native representation
	char* ____json0_marshaled = NULL;
	____json0_marshaled = il2cpp_codegen_marshal_string(___json0);

	// Marshaling of parameter '___developerPayload1' to native representation
	char* ____developerPayload1_marshaled = NULL;
	____developerPayload1_marshaled = il2cpp_codegen_marshal_string(___developerPayload1);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(unityPurchasingPurchase)(____json0_marshaled, ____developerPayload1_marshaled);

	// Marshaling cleanup of parameter '___json0' native representation
	il2cpp_codegen_marshal_free(____json0_marshaled);
	____json0_marshaled = NULL;

	// Marshaling cleanup of parameter '___developerPayload1' native representation
	il2cpp_codegen_marshal_free(____developerPayload1_marshaled);
	____developerPayload1_marshaled = NULL;

}
extern "C" void DEFAULT_CALL unityPurchasingFinishTransaction(char*, char*);
// System.Void UnityEngine.Purchasing.iOSStoreBindings::unityPurchasingFinishTransaction(System.String,System.String)
extern "C"  void iOSStoreBindings_unityPurchasingFinishTransaction_m890609062 (Il2CppObject * __this /* static, unused */, String_t* ___productJSON0, String_t* ___transactionId1, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*);

	// Marshaling of parameter '___productJSON0' to native representation
	char* ____productJSON0_marshaled = NULL;
	____productJSON0_marshaled = il2cpp_codegen_marshal_string(___productJSON0);

	// Marshaling of parameter '___transactionId1' to native representation
	char* ____transactionId1_marshaled = NULL;
	____transactionId1_marshaled = il2cpp_codegen_marshal_string(___transactionId1);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(unityPurchasingFinishTransaction)(____productJSON0_marshaled, ____transactionId1_marshaled);

	// Marshaling cleanup of parameter '___productJSON0' native representation
	il2cpp_codegen_marshal_free(____productJSON0_marshaled);
	____productJSON0_marshaled = NULL;

	// Marshaling cleanup of parameter '___transactionId1' native representation
	il2cpp_codegen_marshal_free(____transactionId1_marshaled);
	____transactionId1_marshaled = NULL;

}
extern "C" void DEFAULT_CALL unityPurchasingRestoreTransactions();
// System.Void UnityEngine.Purchasing.iOSStoreBindings::unityPurchasingRestoreTransactions()
extern "C"  void iOSStoreBindings_unityPurchasingRestoreTransactions_m2981115088 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(unityPurchasingRestoreTransactions)();

}
extern "C" void DEFAULT_CALL unityPurchasingAddTransactionObserver();
// System.Void UnityEngine.Purchasing.iOSStoreBindings::unityPurchasingAddTransactionObserver()
extern "C"  void iOSStoreBindings_unityPurchasingAddTransactionObserver_m4154641576 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(unityPurchasingAddTransactionObserver)();

}
extern "C" void DEFAULT_CALL setUnityPurchasingCallback(Il2CppMethodPointer);
// System.Void UnityEngine.Purchasing.iOSStoreBindings::setUnityPurchasingCallback(UnityEngine.Purchasing.UnityPurchasingCallback)
extern "C"  void iOSStoreBindings_setUnityPurchasingCallback_m709066903 (Il2CppObject * __this /* static, unused */, UnityPurchasingCallback_t2986617270 * ___AsyncCallback0, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___AsyncCallback0' to native representation
	Il2CppMethodPointer ____AsyncCallback0_marshaled = NULL;
	____AsyncCallback0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<Il2CppCodeGenMulticastDelegate*>(___AsyncCallback0));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(setUnityPurchasingCallback)(____AsyncCallback0_marshaled);

}
// System.Void UnityEngine.Purchasing.iOSStoreBindings::SetUnityPurchasingCallback(UnityEngine.Purchasing.UnityPurchasingCallback)
extern "C"  void iOSStoreBindings_SetUnityPurchasingCallback_m3693370551 (iOSStoreBindings_t2359759090 * __this, UnityPurchasingCallback_t2986617270 * ___AsyncCallback0, const MethodInfo* method)
{
	{
		UnityPurchasingCallback_t2986617270 * L_0 = ___AsyncCallback0;
		iOSStoreBindings_setUnityPurchasingCallback_m709066903(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.iOSStoreBindings::RetrieveProducts(System.String)
extern "C"  void iOSStoreBindings_RetrieveProducts_m1168744386 (iOSStoreBindings_t2359759090 * __this, String_t* ___json0, const MethodInfo* method)
{
	{
		String_t* L_0 = ___json0;
		iOSStoreBindings_unityPurchasingRetrieveProducts_m1724542061(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.iOSStoreBindings::Purchase(System.String,System.String)
extern "C"  void iOSStoreBindings_Purchase_m1465492957 (iOSStoreBindings_t2359759090 * __this, String_t* ___productJSON0, String_t* ___developerPayload1, const MethodInfo* method)
{
	{
		String_t* L_0 = ___productJSON0;
		String_t* L_1 = ___developerPayload1;
		iOSStoreBindings_unityPurchasingPurchase_m3984262728(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.iOSStoreBindings::FinishTransaction(System.String,System.String)
extern "C"  void iOSStoreBindings_FinishTransaction_m3505960369 (iOSStoreBindings_t2359759090 * __this, String_t* ___productJSON0, String_t* ___transactionId1, const MethodInfo* method)
{
	{
		String_t* L_0 = ___productJSON0;
		String_t* L_1 = ___transactionId1;
		iOSStoreBindings_unityPurchasingFinishTransaction_m890609062(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.iOSStoreBindings::RestoreTransactions()
extern "C"  void iOSStoreBindings_RestoreTransactions_m2695011941 (iOSStoreBindings_t2359759090 * __this, const MethodInfo* method)
{
	{
		iOSStoreBindings_unityPurchasingRestoreTransactions_m2981115088(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.iOSStoreBindings::AddTransactionObserver()
extern "C"  void iOSStoreBindings_AddTransactionObserver_m2070904563 (iOSStoreBindings_t2359759090 * __this, const MethodInfo* method)
{
	{
		iOSStoreBindings_unityPurchasingAddTransactionObserver_m4154641576(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.OSXStoreBindings::.ctor()
extern "C"  void OSXStoreBindings__ctor_m1901701227 (OSXStoreBindings_t1956192619 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1772956182(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Purchasing.OSXStoreBindings::unityPurchasingRetrieveProducts(System.String)
extern "C"  bool OSXStoreBindings_unityPurchasingRetrieveProducts_m4188065242 (Il2CppObject * __this /* static, unused */, String_t* ___json0, const MethodInfo* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (char*);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("unitypurchasing"), "unityPurchasingRetrieveProducts", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'unityPurchasingRetrieveProducts'"));
		}
	}

	// Marshaling of parameter '___json0' to native representation
	char* ____json0_marshaled = NULL;
	____json0_marshaled = il2cpp_codegen_marshal_string(___json0);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(____json0_marshaled);

	// Marshaling cleanup of parameter '___json0' native representation
	il2cpp_codegen_marshal_free(____json0_marshaled);
	____json0_marshaled = NULL;

	return returnValue;
}
// System.Boolean UnityEngine.Purchasing.OSXStoreBindings::unityPurchasingPurchase(System.String,System.String)
extern "C"  bool OSXStoreBindings_unityPurchasingPurchase_m1246487029 (Il2CppObject * __this /* static, unused */, String_t* ___json0, String_t* ___developerPayload1, const MethodInfo* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (char*, char*);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(char*) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("unitypurchasing"), "unityPurchasingPurchase", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'unityPurchasingPurchase'"));
		}
	}

	// Marshaling of parameter '___json0' to native representation
	char* ____json0_marshaled = NULL;
	____json0_marshaled = il2cpp_codegen_marshal_string(___json0);

	// Marshaling of parameter '___developerPayload1' to native representation
	char* ____developerPayload1_marshaled = NULL;
	____developerPayload1_marshaled = il2cpp_codegen_marshal_string(___developerPayload1);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(____json0_marshaled, ____developerPayload1_marshaled);

	// Marshaling cleanup of parameter '___json0' native representation
	il2cpp_codegen_marshal_free(____json0_marshaled);
	____json0_marshaled = NULL;

	// Marshaling cleanup of parameter '___developerPayload1' native representation
	il2cpp_codegen_marshal_free(____developerPayload1_marshaled);
	____developerPayload1_marshaled = NULL;

	return returnValue;
}
// System.Boolean UnityEngine.Purchasing.OSXStoreBindings::unityPurchasingFinishTransaction(System.String,System.String)
extern "C"  bool OSXStoreBindings_unityPurchasingFinishTransaction_m732730521 (Il2CppObject * __this /* static, unused */, String_t* ___productJSON0, String_t* ___transactionId1, const MethodInfo* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (char*, char*);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(char*) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("unitypurchasing"), "unityPurchasingFinishTransaction", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'unityPurchasingFinishTransaction'"));
		}
	}

	// Marshaling of parameter '___productJSON0' to native representation
	char* ____productJSON0_marshaled = NULL;
	____productJSON0_marshaled = il2cpp_codegen_marshal_string(___productJSON0);

	// Marshaling of parameter '___transactionId1' to native representation
	char* ____transactionId1_marshaled = NULL;
	____transactionId1_marshaled = il2cpp_codegen_marshal_string(___transactionId1);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(____productJSON0_marshaled, ____transactionId1_marshaled);

	// Marshaling cleanup of parameter '___productJSON0' native representation
	il2cpp_codegen_marshal_free(____productJSON0_marshaled);
	____productJSON0_marshaled = NULL;

	// Marshaling cleanup of parameter '___transactionId1' native representation
	il2cpp_codegen_marshal_free(____transactionId1_marshaled);
	____transactionId1_marshaled = NULL;

	return returnValue;
}
// System.Void UnityEngine.Purchasing.OSXStoreBindings::unityPurchasingRestoreTransactions()
extern "C"  void OSXStoreBindings_unityPurchasingRestoreTransactions_m621486729 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("unitypurchasing"), "unityPurchasingRestoreTransactions", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'unityPurchasingRestoreTransactions'"));
		}
	}

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void UnityEngine.Purchasing.OSXStoreBindings::unityPurchasingAddTransactionObserver()
extern "C"  void OSXStoreBindings_unityPurchasingAddTransactionObserver_m4195932239 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("unitypurchasing"), "unityPurchasingAddTransactionObserver", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'unityPurchasingAddTransactionObserver'"));
		}
	}

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void UnityEngine.Purchasing.OSXStoreBindings::setUnityPurchasingCallback(UnityEngine.Purchasing.UnityPurchasingCallback)
extern "C"  void OSXStoreBindings_setUnityPurchasingCallback_m1891064720 (Il2CppObject * __this /* static, unused */, UnityPurchasingCallback_t2986617270 * ___AsyncCallback0, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("unitypurchasing"), "setUnityPurchasingCallback", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'setUnityPurchasingCallback'"));
		}
	}

	// Marshaling of parameter '___AsyncCallback0' to native representation
	Il2CppMethodPointer ____AsyncCallback0_marshaled = NULL;
	____AsyncCallback0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<Il2CppCodeGenMulticastDelegate*>(___AsyncCallback0));

	// Native function invocation
	il2cppPInvokeFunc(____AsyncCallback0_marshaled);

}
// System.Void UnityEngine.Purchasing.OSXStoreBindings::SetUnityPurchasingCallback(UnityEngine.Purchasing.UnityPurchasingCallback)
extern "C"  void OSXStoreBindings_SetUnityPurchasingCallback_m580401072 (OSXStoreBindings_t1956192619 * __this, UnityPurchasingCallback_t2986617270 * ___AsyncCallback0, const MethodInfo* method)
{
	{
		UnityPurchasingCallback_t2986617270 * L_0 = ___AsyncCallback0;
		OSXStoreBindings_setUnityPurchasingCallback_m1891064720(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.OSXStoreBindings::RetrieveProducts(System.String)
extern "C"  void OSXStoreBindings_RetrieveProducts_m2218607209 (OSXStoreBindings_t1956192619 * __this, String_t* ___json0, const MethodInfo* method)
{
	{
		String_t* L_0 = ___json0;
		OSXStoreBindings_unityPurchasingRetrieveProducts_m4188065242(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.OSXStoreBindings::Purchase(System.String,System.String)
extern "C"  void OSXStoreBindings_Purchase_m1331457860 (OSXStoreBindings_t1956192619 * __this, String_t* ___productJSON0, String_t* ___developerPayload1, const MethodInfo* method)
{
	{
		String_t* L_0 = ___productJSON0;
		String_t* L_1 = ___developerPayload1;
		OSXStoreBindings_unityPurchasingPurchase_m1246487029(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.OSXStoreBindings::FinishTransaction(System.String,System.String)
extern "C"  void OSXStoreBindings_FinishTransaction_m2928971818 (OSXStoreBindings_t1956192619 * __this, String_t* ___productJSON0, String_t* ___transactionId1, const MethodInfo* method)
{
	{
		String_t* L_0 = ___productJSON0;
		String_t* L_1 = ___transactionId1;
		OSXStoreBindings_unityPurchasingFinishTransaction_m732730521(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.OSXStoreBindings::RestoreTransactions()
extern "C"  void OSXStoreBindings_RestoreTransactions_m505091532 (OSXStoreBindings_t1956192619 * __this, const MethodInfo* method)
{
	{
		OSXStoreBindings_unityPurchasingRestoreTransactions_m621486729(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.OSXStoreBindings::AddTransactionObserver()
extern "C"  void OSXStoreBindings_AddTransactionObserver_m2705226284 (OSXStoreBindings_t1956192619 * __this, const MethodInfo* method)
{
	{
		OSXStoreBindings_unityPurchasingAddTransactionObserver_m4195932239(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.UnityPurchasingCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void UnityPurchasingCallback__ctor_m2606218906 (UnityPurchasingCallback_t2986617270 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method)
{
	__this->set_method_ptr_0((Il2CppMethodPointer)((MethodInfo*)___method1.get_m_value_0())->methodPointer);
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Purchasing.UnityPurchasingCallback::Invoke(System.String,System.String,System.String,System.String)
extern "C"  void UnityPurchasingCallback_Invoke_m3351568450 (UnityPurchasingCallback_t2986617270 * __this, String_t* ___subject0, String_t* ___payload1, String_t* ___receipt2, String_t* ___transactionId3, const MethodInfo* method)
{
	if(__this->get_prev_9() != NULL)
	{
		UnityPurchasingCallback_Invoke_m3351568450((UnityPurchasingCallback_t2986617270 *)__this->get_prev_9(),___subject0, ___payload1, ___receipt2, ___transactionId3, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	if (__this->get_m_target_2() != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Il2CppObject *, void* __this, String_t* ___subject0, String_t* ___payload1, String_t* ___receipt2, String_t* ___transactionId3, const MethodInfo* method);
		((FunctionPointerType)__this->get_method_ptr_0())(NULL,il2cpp_codegen_get_delegate_this(__this),___subject0, ___payload1, ___receipt2, ___transactionId3,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
	else if (__this->get_m_target_2() != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (void* __this, String_t* ___subject0, String_t* ___payload1, String_t* ___receipt2, String_t* ___transactionId3, const MethodInfo* method);
		((FunctionPointerType)__this->get_method_ptr_0())(il2cpp_codegen_get_delegate_this(__this),___subject0, ___payload1, ___receipt2, ___transactionId3,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
	else
	{
		typedef void (*FunctionPointerType) (void* __this, String_t* ___payload1, String_t* ___receipt2, String_t* ___transactionId3, const MethodInfo* method);
		((FunctionPointerType)__this->get_method_ptr_0())(___subject0, ___payload1, ___receipt2, ___transactionId3,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
}
extern "C"  void DelegatePInvokeWrapper_UnityPurchasingCallback_t2986617270 (UnityPurchasingCallback_t2986617270 * __this, String_t* ___subject0, String_t* ___payload1, String_t* ___receipt2, String_t* ___transactionId3, const MethodInfo* method)
{
	typedef void (STDCALL *PInvokeFunc)(char*, char*, char*, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((Il2CppDelegate*)__this)->method->methodPointer);

	// Marshaling of parameter '___subject0' to native representation
	char* ____subject0_marshaled = NULL;
	____subject0_marshaled = il2cpp_codegen_marshal_string(___subject0);

	// Marshaling of parameter '___payload1' to native representation
	char* ____payload1_marshaled = NULL;
	____payload1_marshaled = il2cpp_codegen_marshal_string(___payload1);

	// Marshaling of parameter '___receipt2' to native representation
	char* ____receipt2_marshaled = NULL;
	____receipt2_marshaled = il2cpp_codegen_marshal_string(___receipt2);

	// Marshaling of parameter '___transactionId3' to native representation
	char* ____transactionId3_marshaled = NULL;
	____transactionId3_marshaled = il2cpp_codegen_marshal_string(___transactionId3);

	// Native function invocation
	il2cppPInvokeFunc(____subject0_marshaled, ____payload1_marshaled, ____receipt2_marshaled, ____transactionId3_marshaled);

	// Marshaling cleanup of parameter '___subject0' native representation
	il2cpp_codegen_marshal_free(____subject0_marshaled);
	____subject0_marshaled = NULL;

	// Marshaling cleanup of parameter '___payload1' native representation
	il2cpp_codegen_marshal_free(____payload1_marshaled);
	____payload1_marshaled = NULL;

	// Marshaling cleanup of parameter '___receipt2' native representation
	il2cpp_codegen_marshal_free(____receipt2_marshaled);
	____receipt2_marshaled = NULL;

	// Marshaling cleanup of parameter '___transactionId3' native representation
	il2cpp_codegen_marshal_free(____transactionId3_marshaled);
	____transactionId3_marshaled = NULL;

}
// System.IAsyncResult UnityEngine.Purchasing.UnityPurchasingCallback::BeginInvoke(System.String,System.String,System.String,System.String,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * UnityPurchasingCallback_BeginInvoke_m1881739807 (UnityPurchasingCallback_t2986617270 * __this, String_t* ___subject0, String_t* ___payload1, String_t* ___receipt2, String_t* ___transactionId3, AsyncCallback_t1369114871 * ___callback4, Il2CppObject * ___object5, const MethodInfo* method)
{
	void *__d_args[5] = {0};
	__d_args[0] = ___subject0;
	__d_args[1] = ___payload1;
	__d_args[2] = ___receipt2;
	__d_args[3] = ___transactionId3;
	return (Il2CppObject *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback4, (Il2CppObject*)___object5);
}
// System.Void UnityEngine.Purchasing.UnityPurchasingCallback::EndInvoke(System.IAsyncResult)
extern "C"  void UnityPurchasingCallback_EndInvoke_m2822147498 (UnityPurchasingCallback_t2986617270 * __this, Il2CppObject * ___result0, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
