#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif



#include "mscorlib_System_Array1146569071.h"
#include "Stores_UnityEngine_Purchasing_AndroidStore2837959106.h"

#pragma once
// UnityEngine.Purchasing.AndroidStore[]
struct AndroidStoreU5BU5D_t4148245751  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline int32_t* GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
