#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// UnityEngine.Purchasing.Default.WinProductDescription
struct WinProductDescription_t3536383323;

#include "mscorlib_System_Array1146569071.h"
#include "winrt_UnityEngine_Purchasing_Default_WinProductDes3536383323.h"

#pragma once
// UnityEngine.Purchasing.Default.WinProductDescription[]
struct WinProductDescriptionU5BU5D_t922002138  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) WinProductDescription_t3536383323 * m_Items[1];

public:
	inline WinProductDescription_t3536383323 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline WinProductDescription_t3536383323 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, WinProductDescription_t3536383323 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
