#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif




#pragma once
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const MethodInfo*);

	static inline R Invoke (const MethodInfo* method, void* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp::vm::Runtime::GetGenericInterfaceInvokeData (method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const MethodInfo*);

	static inline void Invoke (const MethodInfo* method, void* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp::vm::Runtime::GetGenericInterfaceInvokeData (method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
