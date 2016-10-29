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

// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t696267445;
// System.Char[]
struct CharU5BU5D_t3324145743;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t1244034627;
// System.Text.StringBuilder
struct StringBuilder_t243639308;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t827649927;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array1146569071.h"
#include "Common_U3CModuleU3E86524790.h"
#include "Common_U3CModuleU3E86524790MethodDeclarations.h"
#include "Common_UnityEngine_Purchasing_MiniJson3631183983.h"
#include "Common_UnityEngine_Purchasing_MiniJson3631183983MethodDeclarations.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_String7231557MethodDeclarations.h"
#include "mscorlib_ArrayTypes.h"
#include "mscorlib_System_Char2862622538.h"
#include "mscorlib_System_Int321153838500.h"
#include "mscorlib_System_Boolean476798718.h"
#include "mscorlib_System_Text_StringBuilder243639308MethodDeclarations.h"
#include "mscorlib_System_Text_StringBuilder243639308.h"
#include "mscorlib_System_Void2863195528.h"
#include "mscorlib_System_Object4170816371MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_ge696267445.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_ge696267445MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_List_1_gen1244034627.h"
#include "mscorlib_System_Collections_Generic_List_1_gen1244034627MethodDeclarations.h"
#include "mscorlib_System_Boolean476798718MethodDeclarations.h"
#include "mscorlib_System_Double3868226565.h"
#include "mscorlib_System_Array1146569071MethodDeclarations.h"
#include "mscorlib_System_UInt3224667981MethodDeclarations.h"
#include "mscorlib_System_Char2862622538MethodDeclarations.h"
#include "mscorlib_System_UInt3224667981.h"
#include "mscorlib_System_Globalization_NumberStyles2609490573.h"
#include "mscorlib_System_Globalization_CultureInfo1065375142MethodDeclarations.h"
#include "mscorlib_System_Double3868226565MethodDeclarations.h"
#include "mscorlib_System_Globalization_CultureInfo1065375142.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_E2013590837.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_ge827649927.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_ge827649927MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_726430633.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_E2144973319.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_E2144973319MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_726430633MethodDeclarations.h"
#include "mscorlib_System_Type2863145774MethodDeclarations.h"
#include "mscorlib_System_Convert1363677321MethodDeclarations.h"
#include "mscorlib_System_Type2863145774.h"
#include "mscorlib_System_Decimal1954350631.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Object UnityEngine.Purchasing.MiniJson::JsonDecode(System.String)
extern Il2CppClass* MiniJson_t3631183983_il2cpp_TypeInfo_var;
extern const uint32_t MiniJson_JsonDecode_m2843783475_MetadataUsageId;
extern "C"  Il2CppObject * MiniJson_JsonDecode_m2843783475 (Il2CppObject * __this /* static, unused */, String_t* ___json0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (MiniJson_JsonDecode_m2843783475_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	CharU5BU5D_t3324145743* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	Il2CppObject * V_3 = NULL;
	Il2CppObject * V_4 = NULL;
	{
		String_t* L_0 = ___json0;
		IL2CPP_RUNTIME_CLASS_INIT(MiniJson_t3631183983_il2cpp_TypeInfo_var);
		((MiniJson_t3631183983_StaticFields*)MiniJson_t3631183983_il2cpp_TypeInfo_var->static_fields)->set_s_LastDecode_1(L_0);
		String_t* L_1 = ___json0;
		if (!L_1)
		{
			goto IL_0043;
		}
	}
	{
		String_t* L_2 = ___json0;
		NullCheck(L_2);
		CharU5BU5D_t3324145743* L_3 = String_ToCharArray_m1208288742(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		V_1 = 0;
		V_2 = (bool)1;
		CharU5BU5D_t3324145743* L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(MiniJson_t3631183983_il2cpp_TypeInfo_var);
		Il2CppObject * L_5 = MiniJson_ParseValue_m1578679080(NULL /*static, unused*/, L_4, (&V_1), (&V_2), /*hidden argument*/NULL);
		V_3 = L_5;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0035;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(MiniJson_t3631183983_il2cpp_TypeInfo_var);
		((MiniJson_t3631183983_StaticFields*)MiniJson_t3631183983_il2cpp_TypeInfo_var->static_fields)->set_s_LastErrorIndex_0((-1));
		goto IL_003b;
	}

IL_0035:
	{
		int32_t L_7 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(MiniJson_t3631183983_il2cpp_TypeInfo_var);
		((MiniJson_t3631183983_StaticFields*)MiniJson_t3631183983_il2cpp_TypeInfo_var->static_fields)->set_s_LastErrorIndex_0(L_7);
	}

IL_003b:
	{
		Il2CppObject * L_8 = V_3;
		V_4 = L_8;
		goto IL_004b;
	}

IL_0043:
	{
		V_4 = NULL;
		goto IL_004b;
	}

IL_004b:
	{
		Il2CppObject * L_9 = V_4;
		return L_9;
	}
}
// System.String UnityEngine.Purchasing.MiniJson::JsonEncode(System.Object)
extern Il2CppClass* StringBuilder_t243639308_il2cpp_TypeInfo_var;
extern Il2CppClass* MiniJson_t3631183983_il2cpp_TypeInfo_var;
extern const uint32_t MiniJson_JsonEncode_m2754210443_MetadataUsageId;
extern "C"  String_t* MiniJson_JsonEncode_m2754210443 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___json0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (MiniJson_JsonEncode_m2754210443_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	StringBuilder_t243639308 * V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	String_t* G_B3_0 = NULL;
	{
		StringBuilder_t243639308 * L_0 = (StringBuilder_t243639308 *)il2cpp_codegen_object_new(StringBuilder_t243639308_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3624398269(L_0, ((int32_t)2000), /*hidden argument*/NULL);
		V_0 = L_0;
		Il2CppObject * L_1 = ___json0;
		StringBuilder_t243639308 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(MiniJson_t3631183983_il2cpp_TypeInfo_var);
		bool L_3 = MiniJson_SerializeValue_m110904871(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0025;
		}
	}
	{
		StringBuilder_t243639308 * L_5 = V_0;
		NullCheck(L_5);
		String_t* L_6 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_5);
		G_B3_0 = L_6;
		goto IL_0026;
	}

IL_0025:
	{
		G_B3_0 = ((String_t*)(NULL));
	}

IL_0026:
	{
		V_2 = G_B3_0;
		goto IL_002c;
	}

IL_002c:
	{
		String_t* L_7 = V_2;
		return L_7;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Object> UnityEngine.Purchasing.MiniJson::ParseObject(System.Char[],System.Int32&)
extern Il2CppClass* Dictionary_2_t696267445_il2cpp_TypeInfo_var;
extern Il2CppClass* MiniJson_t3631183983_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m2794281015_MethodInfo_var;
extern const MethodInfo* Dictionary_2_set_Item_m3527884456_MethodInfo_var;
extern const uint32_t MiniJson_ParseObject_m1670910516_MetadataUsageId;
extern "C"  Dictionary_2_t696267445 * MiniJson_ParseObject_m1670910516 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t3324145743* ___json0, int32_t* ___index1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (MiniJson_ParseObject_m1670910516_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t696267445 * V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	Dictionary_2_t696267445 * V_3 = NULL;
	String_t* V_4 = NULL;
	bool V_5 = false;
	Il2CppObject * V_6 = NULL;
	{
		Dictionary_2_t696267445 * L_0 = (Dictionary_2_t696267445 *)il2cpp_codegen_object_new(Dictionary_2_t696267445_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2794281015(L_0, /*hidden argument*/Dictionary_2__ctor_m2794281015_MethodInfo_var);
		V_0 = L_0;
		CharU5BU5D_t3324145743* L_1 = ___json0;
		int32_t* L_2 = ___index1;
		IL2CPP_RUNTIME_CLASS_INIT(MiniJson_t3631183983_il2cpp_TypeInfo_var);
		MiniJson_NextToken_m3670730190(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		V_2 = (bool)0;
		goto IL_00ae;
	}

IL_0016:
	{
		CharU5BU5D_t3324145743* L_3 = ___json0;
		int32_t* L_4 = ___index1;
		IL2CPP_RUNTIME_CLASS_INIT(MiniJson_t3631183983_il2cpp_TypeInfo_var);
		int32_t L_5 = MiniJson_LookAhead_m3136306010(NULL /*static, unused*/, L_3, (*((int32_t*)L_4)), /*hidden argument*/NULL);
		V_1 = L_5;
		int32_t L_6 = V_1;
		if (L_6)
		{
			goto IL_002d;
		}
	}
	{
		V_3 = (Dictionary_2_t696267445 *)NULL;
		goto IL_00bb;
	}

IL_002d:
	{
		int32_t L_7 = V_1;
		if ((!(((uint32_t)L_7) == ((uint32_t)6))))
		{
			goto IL_0041;
		}
	}
	{
		CharU5BU5D_t3324145743* L_8 = ___json0;
		int32_t* L_9 = ___index1;
		IL2CPP_RUNTIME_CLASS_INIT(MiniJson_t3631183983_il2cpp_TypeInfo_var);
		MiniJson_NextToken_m3670730190(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		goto IL_00ad;
	}

IL_0041:
	{
		int32_t L_10 = V_1;
		if ((!(((uint32_t)L_10) == ((uint32_t)2))))
		{
			goto IL_0058;
		}
	}
	{
		CharU5BU5D_t3324145743* L_11 = ___json0;
		int32_t* L_12 = ___index1;
		IL2CPP_RUNTIME_CLASS_INIT(MiniJson_t3631183983_il2cpp_TypeInfo_var);
		MiniJson_NextToken_m3670730190(NULL /*static, unused*/, L_11, L_12, /*hidden argument*/NULL);
		Dictionary_2_t696267445 * L_13 = V_0;
		V_3 = L_13;
		goto IL_00bb;
	}

IL_0058:
	{
		CharU5BU5D_t3324145743* L_14 = ___json0;
		int32_t* L_15 = ___index1;
		IL2CPP_RUNTIME_CLASS_INIT(MiniJson_t3631183983_il2cpp_TypeInfo_var);
		String_t* L_16 = MiniJson_ParseString_m482909589(NULL /*static, unused*/, L_14, L_15, /*hidden argument*/NULL);
		V_4 = L_16;
		String_t* L_17 = V_4;
		if (L_17)
		{
			goto IL_0070;
		}
	}
	{
		V_3 = (Dictionary_2_t696267445 *)NULL;
		goto IL_00bb;
	}

IL_0070:
	{
		CharU5BU5D_t3324145743* L_18 = ___json0;
		int32_t* L_19 = ___index1;
		IL2CPP_RUNTIME_CLASS_INIT(MiniJson_t3631183983_il2cpp_TypeInfo_var);
		int32_t L_20 = MiniJson_NextToken_m3670730190(NULL /*static, unused*/, L_18, L_19, /*hidden argument*/NULL);
		V_1 = L_20;
		int32_t L_21 = V_1;
		if ((((int32_t)L_21) == ((int32_t)5)))
		{
			goto IL_0086;
		}
	}
	{
		V_3 = (Dictionary_2_t696267445 *)NULL;
		goto IL_00bb;
	}

IL_0086:
	{
		V_5 = (bool)1;
		CharU5BU5D_t3324145743* L_22 = ___json0;
		int32_t* L_23 = ___index1;
		IL2CPP_RUNTIME_CLASS_INIT(MiniJson_t3631183983_il2cpp_TypeInfo_var);
		Il2CppObject * L_24 = MiniJson_ParseValue_m1578679080(NULL /*static, unused*/, L_22, L_23, (&V_5), /*hidden argument*/NULL);
		V_6 = L_24;
		bool L_25 = V_5;
		if (L_25)
		{
			goto IL_00a2;
		}
	}
	{
		V_3 = (Dictionary_2_t696267445 *)NULL;
		goto IL_00bb;
	}

IL_00a2:
	{
		Dictionary_2_t696267445 * L_26 = V_0;
		String_t* L_27 = V_4;
		Il2CppObject * L_28 = V_6;
		NullCheck(L_26);
		Dictionary_2_set_Item_m3527884456(L_26, L_27, L_28, /*hidden argument*/Dictionary_2_set_Item_m3527884456_MethodInfo_var);
	}

IL_00ad:
	{
	}

IL_00ae:
	{
		bool L_29 = V_2;
		if (!L_29)
		{
			goto IL_0016;
		}
	}
	{
		Dictionary_2_t696267445 * L_30 = V_0;
		V_3 = L_30;
		goto IL_00bb;
	}

IL_00bb:
	{
		Dictionary_2_t696267445 * L_31 = V_3;
		return L_31;
	}
}
// System.Collections.Generic.List`1<System.Object> UnityEngine.Purchasing.MiniJson::ParseArray(System.Char[],System.Int32&)
extern Il2CppClass* List_1_t1244034627_il2cpp_TypeInfo_var;
extern Il2CppClass* MiniJson_t3631183983_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3149421882_MethodInfo_var;
extern const MethodInfo* List_1_Add_m2843782698_MethodInfo_var;
extern const uint32_t MiniJson_ParseArray_m3089123221_MetadataUsageId;
extern "C"  List_1_t1244034627 * MiniJson_ParseArray_m3089123221 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t3324145743* ___json0, int32_t* ___index1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (MiniJson_ParseArray_m3089123221_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t1244034627 * V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	List_1_t1244034627 * V_3 = NULL;
	bool V_4 = false;
	Il2CppObject * V_5 = NULL;
	{
		List_1_t1244034627 * L_0 = (List_1_t1244034627 *)il2cpp_codegen_object_new(List_1_t1244034627_il2cpp_TypeInfo_var);
		List_1__ctor_m3149421882(L_0, /*hidden argument*/List_1__ctor_m3149421882_MethodInfo_var);
		V_0 = L_0;
		CharU5BU5D_t3324145743* L_1 = ___json0;
		int32_t* L_2 = ___index1;
		IL2CPP_RUNTIME_CLASS_INIT(MiniJson_t3631183983_il2cpp_TypeInfo_var);
		MiniJson_NextToken_m3670730190(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		V_1 = (bool)0;
		goto IL_007d;
	}

IL_0016:
	{
		CharU5BU5D_t3324145743* L_3 = ___json0;
		int32_t* L_4 = ___index1;
		IL2CPP_RUNTIME_CLASS_INIT(MiniJson_t3631183983_il2cpp_TypeInfo_var);
		int32_t L_5 = MiniJson_LookAhead_m3136306010(NULL /*static, unused*/, L_3, (*((int32_t*)L_4)), /*hidden argument*/NULL);
		V_2 = L_5;
		int32_t L_6 = V_2;
		if (L_6)
		{
			goto IL_002d;
		}
	}
	{
		V_3 = (List_1_t1244034627 *)NULL;
		goto IL_008a;
	}

IL_002d:
	{
		int32_t L_7 = V_2;
		if ((!(((uint32_t)L_7) == ((uint32_t)6))))
		{
			goto IL_0041;
		}
	}
	{
		CharU5BU5D_t3324145743* L_8 = ___json0;
		int32_t* L_9 = ___index1;
		IL2CPP_RUNTIME_CLASS_INIT(MiniJson_t3631183983_il2cpp_TypeInfo_var);
		MiniJson_NextToken_m3670730190(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		goto IL_007c;
	}

IL_0041:
	{
		int32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) == ((uint32_t)4))))
		{
			goto IL_0056;
		}
	}
	{
		CharU5BU5D_t3324145743* L_11 = ___json0;
		int32_t* L_12 = ___index1;
		IL2CPP_RUNTIME_CLASS_INIT(MiniJson_t3631183983_il2cpp_TypeInfo_var);
		MiniJson_NextToken_m3670730190(NULL /*static, unused*/, L_11, L_12, /*hidden argument*/NULL);
		goto IL_0083;
	}

IL_0056:
	{
		V_4 = (bool)1;
		CharU5BU5D_t3324145743* L_13 = ___json0;
		int32_t* L_14 = ___index1;
		IL2CPP_RUNTIME_CLASS_INIT(MiniJson_t3631183983_il2cpp_TypeInfo_var);
		Il2CppObject * L_15 = MiniJson_ParseValue_m1578679080(NULL /*static, unused*/, L_13, L_14, (&V_4), /*hidden argument*/NULL);
		V_5 = L_15;
		bool L_16 = V_4;
		if (L_16)
		{
			goto IL_0073;
		}
	}
	{
		V_3 = (List_1_t1244034627 *)NULL;
		goto IL_008a;
	}

IL_0073:
	{
		List_1_t1244034627 * L_17 = V_0;
		Il2CppObject * L_18 = V_5;
		NullCheck(L_17);
		List_1_Add_m2843782698(L_17, L_18, /*hidden argument*/List_1_Add_m2843782698_MethodInfo_var);
	}

IL_007c:
	{
	}

IL_007d:
	{
		bool L_19 = V_1;
		if (!L_19)
		{
			goto IL_0016;
		}
	}

IL_0083:
	{
		List_1_t1244034627 * L_20 = V_0;
		V_3 = L_20;
		goto IL_008a;
	}

IL_008a:
	{
		List_1_t1244034627 * L_21 = V_3;
		return L_21;
	}
}
// System.Object UnityEngine.Purchasing.MiniJson::ParseValue(System.Char[],System.Int32&,System.Boolean&)
extern Il2CppClass* MiniJson_t3631183983_il2cpp_TypeInfo_var;
extern Il2CppClass* Double_t3868226565_il2cpp_TypeInfo_var;
extern Il2CppClass* Boolean_t476798718_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2583950;
extern Il2CppCodeGenString* _stringLiteral66658563;
extern const uint32_t MiniJson_ParseValue_m1578679080_MetadataUsageId;
extern "C"  Il2CppObject * MiniJson_ParseValue_m1578679080 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t3324145743* ___json0, int32_t* ___index1, bool* ___success2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (MiniJson_ParseValue_m1578679080_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Il2CppObject * V_1 = NULL;
	{
		CharU5BU5D_t3324145743* L_0 = ___json0;
		int32_t* L_1 = ___index1;
		IL2CPP_RUNTIME_CLASS_INIT(MiniJson_t3631183983_il2cpp_TypeInfo_var);
		int32_t L_2 = MiniJson_LookAhead_m3136306010(NULL /*static, unused*/, L_0, (*((int32_t*)L_1)), /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		if (L_3 == 0)
		{
			goto IL_00c7;
		}
		if (L_3 == 1)
		{
			goto IL_0064;
		}
		if (L_3 == 2)
		{
			goto IL_00cc;
		}
		if (L_3 == 3)
		{
			goto IL_0071;
		}
		if (L_3 == 4)
		{
			goto IL_00cc;
		}
		if (L_3 == 5)
		{
			goto IL_00cc;
		}
		if (L_3 == 6)
		{
			goto IL_00cc;
		}
		if (L_3 == 7)
		{
			goto IL_0045;
		}
		if (L_3 == 8)
		{
			goto IL_0052;
		}
		if (L_3 == 9)
		{
			goto IL_007e;
		}
		if (L_3 == 10)
		{
			goto IL_009b;
		}
		if (L_3 == 11)
		{
			goto IL_00b8;
		}
	}
	{
		goto IL_00cc;
	}

IL_0045:
	{
		CharU5BU5D_t3324145743* L_4 = ___json0;
		int32_t* L_5 = ___index1;
		IL2CPP_RUNTIME_CLASS_INIT(MiniJson_t3631183983_il2cpp_TypeInfo_var);
		String_t* L_6 = MiniJson_ParseString_m482909589(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		goto IL_00d6;
	}

IL_0052:
	{
		CharU5BU5D_t3324145743* L_7 = ___json0;
		int32_t* L_8 = ___index1;
		IL2CPP_RUNTIME_CLASS_INIT(MiniJson_t3631183983_il2cpp_TypeInfo_var);
		double L_9 = MiniJson_ParseNumber_m2837772573(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		double L_10 = L_9;
		Il2CppObject * L_11 = Box(Double_t3868226565_il2cpp_TypeInfo_var, &L_10);
		V_1 = L_11;
		goto IL_00d6;
	}

IL_0064:
	{
		CharU5BU5D_t3324145743* L_12 = ___json0;
		int32_t* L_13 = ___index1;
		IL2CPP_RUNTIME_CLASS_INIT(MiniJson_t3631183983_il2cpp_TypeInfo_var);
		Dictionary_2_t696267445 * L_14 = MiniJson_ParseObject_m1670910516(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/NULL);
		V_1 = L_14;
		goto IL_00d6;
	}

IL_0071:
	{
		CharU5BU5D_t3324145743* L_15 = ___json0;
		int32_t* L_16 = ___index1;
		IL2CPP_RUNTIME_CLASS_INIT(MiniJson_t3631183983_il2cpp_TypeInfo_var);
		List_1_t1244034627 * L_17 = MiniJson_ParseArray_m3089123221(NULL /*static, unused*/, L_15, L_16, /*hidden argument*/NULL);
		V_1 = L_17;
		goto IL_00d6;
	}

IL_007e:
	{
		CharU5BU5D_t3324145743* L_18 = ___json0;
		int32_t* L_19 = ___index1;
		IL2CPP_RUNTIME_CLASS_INIT(MiniJson_t3631183983_il2cpp_TypeInfo_var);
		MiniJson_NextToken_m3670730190(NULL /*static, unused*/, L_18, L_19, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Boolean_t476798718_il2cpp_TypeInfo_var);
		bool L_20 = Boolean_Parse_m3007515274(NULL /*static, unused*/, _stringLiteral2583950, /*hidden argument*/NULL);
		bool L_21 = L_20;
		Il2CppObject * L_22 = Box(Boolean_t476798718_il2cpp_TypeInfo_var, &L_21);
		V_1 = L_22;
		goto IL_00d6;
	}

IL_009b:
	{
		CharU5BU5D_t3324145743* L_23 = ___json0;
		int32_t* L_24 = ___index1;
		IL2CPP_RUNTIME_CLASS_INIT(MiniJson_t3631183983_il2cpp_TypeInfo_var);
		MiniJson_NextToken_m3670730190(NULL /*static, unused*/, L_23, L_24, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Boolean_t476798718_il2cpp_TypeInfo_var);
		bool L_25 = Boolean_Parse_m3007515274(NULL /*static, unused*/, _stringLiteral66658563, /*hidden argument*/NULL);
		bool L_26 = L_25;
		Il2CppObject * L_27 = Box(Boolean_t476798718_il2cpp_TypeInfo_var, &L_26);
		V_1 = L_27;
		goto IL_00d6;
	}

IL_00b8:
	{
		CharU5BU5D_t3324145743* L_28 = ___json0;
		int32_t* L_29 = ___index1;
		IL2CPP_RUNTIME_CLASS_INIT(MiniJson_t3631183983_il2cpp_TypeInfo_var);
		MiniJson_NextToken_m3670730190(NULL /*static, unused*/, L_28, L_29, /*hidden argument*/NULL);
		V_1 = NULL;
		goto IL_00d6;
	}

IL_00c7:
	{
		goto IL_00cc;
	}

IL_00cc:
	{
		bool* L_30 = ___success2;
		*((int8_t*)(L_30)) = (int8_t)0;
		V_1 = NULL;
		goto IL_00d6;
	}

IL_00d6:
	{
		Il2CppObject * L_31 = V_1;
		return L_31;
	}
}
// System.String UnityEngine.Purchasing.MiniJson::ParseString(System.Char[],System.Int32&)
extern Il2CppClass* MiniJson_t3631183983_il2cpp_TypeInfo_var;
extern Il2CppClass* Char_t2862622538_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* CharU5BU5D_t3324145743_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral0;
extern const uint32_t MiniJson_ParseString_m482909589_MetadataUsageId;
extern "C"  String_t* MiniJson_ParseString_m482909589 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t3324145743* ___json0, int32_t* ___index1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (MiniJson_ParseString_m482909589_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = NULL;
	Il2CppChar V_1 = 0x0;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	CharU5BU5D_t3324145743* V_5 = NULL;
	uint32_t V_6 = 0;
	String_t* V_7 = NULL;
	{
		V_0 = _stringLiteral0;
		CharU5BU5D_t3324145743* L_0 = ___json0;
		int32_t* L_1 = ___index1;
		IL2CPP_RUNTIME_CLASS_INIT(MiniJson_t3631183983_il2cpp_TypeInfo_var);
		MiniJson_EatWhitespace_m896961191(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		CharU5BU5D_t3324145743* L_2 = ___json0;
		int32_t* L_3 = ___index1;
		int32_t* L_4 = ___index1;
		int32_t L_5 = (*((int32_t*)L_4));
		V_2 = L_5;
		*((int32_t*)(L_3)) = (int32_t)((int32_t)((int32_t)L_5+(int32_t)1));
		int32_t L_6 = V_2;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_6);
		int32_t L_7 = L_6;
		uint16_t L_8 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_1 = L_8;
		V_3 = (bool)0;
		goto IL_01bd;
	}

IL_0021:
	{
		int32_t* L_9 = ___index1;
		CharU5BU5D_t3324145743* L_10 = ___json0;
		NullCheck(L_10);
		if ((!(((uint32_t)(*((int32_t*)L_9))) == ((uint32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_10)->max_length))))))))
		{
			goto IL_0031;
		}
	}
	{
		goto IL_01c3;
	}

IL_0031:
	{
		CharU5BU5D_t3324145743* L_11 = ___json0;
		int32_t* L_12 = ___index1;
		int32_t* L_13 = ___index1;
		int32_t L_14 = (*((int32_t*)L_13));
		V_2 = L_14;
		*((int32_t*)(L_12)) = (int32_t)((int32_t)((int32_t)L_14+(int32_t)1));
		int32_t L_15 = V_2;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_15);
		int32_t L_16 = L_15;
		uint16_t L_17 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_1 = L_17;
		Il2CppChar L_18 = V_1;
		if ((!(((uint32_t)L_18) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_004d;
		}
	}
	{
		V_3 = (bool)1;
		goto IL_01c3;
	}

IL_004d:
	{
		Il2CppChar L_19 = V_1;
		if ((!(((uint32_t)L_19) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_01af;
		}
	}
	{
		int32_t* L_20 = ___index1;
		CharU5BU5D_t3324145743* L_21 = ___json0;
		NullCheck(L_21);
		if ((!(((uint32_t)(*((int32_t*)L_20))) == ((uint32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_21)->max_length))))))))
		{
			goto IL_0065;
		}
	}
	{
		goto IL_01c3;
	}

IL_0065:
	{
		CharU5BU5D_t3324145743* L_22 = ___json0;
		int32_t* L_23 = ___index1;
		int32_t* L_24 = ___index1;
		int32_t L_25 = (*((int32_t*)L_24));
		V_2 = L_25;
		*((int32_t*)(L_23)) = (int32_t)((int32_t)((int32_t)L_25+(int32_t)1));
		int32_t L_26 = V_2;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, L_26);
		int32_t L_27 = L_26;
		uint16_t L_28 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		V_1 = L_28;
		Il2CppChar L_29 = V_1;
		if ((!(((uint32_t)L_29) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_008c;
		}
	}
	{
		String_t* L_30 = V_0;
		Il2CppChar L_31 = ((Il2CppChar)((int32_t)34));
		Il2CppObject * L_32 = Box(Char_t2862622538_il2cpp_TypeInfo_var, &L_31);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_33 = String_Concat_m389863537(NULL /*static, unused*/, L_30, L_32, /*hidden argument*/NULL);
		V_0 = L_33;
		goto IL_01a9;
	}

IL_008c:
	{
		Il2CppChar L_34 = V_1;
		if ((!(((uint32_t)L_34) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_00a7;
		}
	}
	{
		String_t* L_35 = V_0;
		Il2CppChar L_36 = ((Il2CppChar)((int32_t)92));
		Il2CppObject * L_37 = Box(Char_t2862622538_il2cpp_TypeInfo_var, &L_36);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_38 = String_Concat_m389863537(NULL /*static, unused*/, L_35, L_37, /*hidden argument*/NULL);
		V_0 = L_38;
		goto IL_01a9;
	}

IL_00a7:
	{
		Il2CppChar L_39 = V_1;
		if ((!(((uint32_t)L_39) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_00c2;
		}
	}
	{
		String_t* L_40 = V_0;
		Il2CppChar L_41 = ((Il2CppChar)((int32_t)47));
		Il2CppObject * L_42 = Box(Char_t2862622538_il2cpp_TypeInfo_var, &L_41);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_43 = String_Concat_m389863537(NULL /*static, unused*/, L_40, L_42, /*hidden argument*/NULL);
		V_0 = L_43;
		goto IL_01a9;
	}

IL_00c2:
	{
		Il2CppChar L_44 = V_1;
		if ((!(((uint32_t)L_44) == ((uint32_t)((int32_t)98)))))
		{
			goto IL_00dc;
		}
	}
	{
		String_t* L_45 = V_0;
		Il2CppChar L_46 = ((Il2CppChar)8);
		Il2CppObject * L_47 = Box(Char_t2862622538_il2cpp_TypeInfo_var, &L_46);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_48 = String_Concat_m389863537(NULL /*static, unused*/, L_45, L_47, /*hidden argument*/NULL);
		V_0 = L_48;
		goto IL_01a9;
	}

IL_00dc:
	{
		Il2CppChar L_49 = V_1;
		if ((!(((uint32_t)L_49) == ((uint32_t)((int32_t)102)))))
		{
			goto IL_00f7;
		}
	}
	{
		String_t* L_50 = V_0;
		Il2CppChar L_51 = ((Il2CppChar)((int32_t)12));
		Il2CppObject * L_52 = Box(Char_t2862622538_il2cpp_TypeInfo_var, &L_51);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_53 = String_Concat_m389863537(NULL /*static, unused*/, L_50, L_52, /*hidden argument*/NULL);
		V_0 = L_53;
		goto IL_01a9;
	}

IL_00f7:
	{
		Il2CppChar L_54 = V_1;
		if ((!(((uint32_t)L_54) == ((uint32_t)((int32_t)110)))))
		{
			goto IL_0112;
		}
	}
	{
		String_t* L_55 = V_0;
		Il2CppChar L_56 = ((Il2CppChar)((int32_t)10));
		Il2CppObject * L_57 = Box(Char_t2862622538_il2cpp_TypeInfo_var, &L_56);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_58 = String_Concat_m389863537(NULL /*static, unused*/, L_55, L_57, /*hidden argument*/NULL);
		V_0 = L_58;
		goto IL_01a9;
	}

IL_0112:
	{
		Il2CppChar L_59 = V_1;
		if ((!(((uint32_t)L_59) == ((uint32_t)((int32_t)114)))))
		{
			goto IL_012d;
		}
	}
	{
		String_t* L_60 = V_0;
		Il2CppChar L_61 = ((Il2CppChar)((int32_t)13));
		Il2CppObject * L_62 = Box(Char_t2862622538_il2cpp_TypeInfo_var, &L_61);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_63 = String_Concat_m389863537(NULL /*static, unused*/, L_60, L_62, /*hidden argument*/NULL);
		V_0 = L_63;
		goto IL_01a9;
	}

IL_012d:
	{
		Il2CppChar L_64 = V_1;
		if ((!(((uint32_t)L_64) == ((uint32_t)((int32_t)116)))))
		{
			goto IL_0148;
		}
	}
	{
		String_t* L_65 = V_0;
		Il2CppChar L_66 = ((Il2CppChar)((int32_t)9));
		Il2CppObject * L_67 = Box(Char_t2862622538_il2cpp_TypeInfo_var, &L_66);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_68 = String_Concat_m389863537(NULL /*static, unused*/, L_65, L_67, /*hidden argument*/NULL);
		V_0 = L_68;
		goto IL_01a9;
	}

IL_0148:
	{
		Il2CppChar L_69 = V_1;
		if ((!(((uint32_t)L_69) == ((uint32_t)((int32_t)117)))))
		{
			goto IL_01a9;
		}
	}
	{
		CharU5BU5D_t3324145743* L_70 = ___json0;
		NullCheck(L_70);
		int32_t* L_71 = ___index1;
		V_4 = ((int32_t)((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_70)->max_length))))-(int32_t)(*((int32_t*)L_71))));
		int32_t L_72 = V_4;
		if ((((int32_t)L_72) < ((int32_t)4)))
		{
			goto IL_01a3;
		}
	}
	{
		V_5 = ((CharU5BU5D_t3324145743*)SZArrayNew(CharU5BU5D_t3324145743_il2cpp_TypeInfo_var, (uint32_t)4));
		CharU5BU5D_t3324145743* L_73 = ___json0;
		int32_t* L_74 = ___index1;
		CharU5BU5D_t3324145743* L_75 = V_5;
		Array_Copy_m2598616668(NULL /*static, unused*/, (Il2CppArray *)(Il2CppArray *)L_73, (*((int32_t*)L_74)), (Il2CppArray *)(Il2CppArray *)L_75, 0, 4, /*hidden argument*/NULL);
		CharU5BU5D_t3324145743* L_76 = V_5;
		String_t* L_77 = String_CreateString_m578950865(NULL, L_76, /*hidden argument*/NULL);
		uint32_t L_78 = UInt32_Parse_m3754424175(NULL /*static, unused*/, L_77, ((int32_t)515), /*hidden argument*/NULL);
		V_6 = L_78;
		String_t* L_79 = V_0;
		uint32_t L_80 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(Char_t2862622538_il2cpp_TypeInfo_var);
		String_t* L_81 = Char_ConvertFromUtf32_m567781788(NULL /*static, unused*/, L_80, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_82 = String_Concat_m138640077(NULL /*static, unused*/, L_79, L_81, /*hidden argument*/NULL);
		V_0 = L_82;
		int32_t* L_83 = ___index1;
		int32_t* L_84 = ___index1;
		*((int32_t*)(L_83)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_84))+(int32_t)4));
		goto IL_01a8;
	}

IL_01a3:
	{
		goto IL_01c3;
	}

IL_01a8:
	{
	}

IL_01a9:
	{
		goto IL_01bc;
	}

IL_01af:
	{
		String_t* L_85 = V_0;
		Il2CppChar L_86 = V_1;
		Il2CppChar L_87 = L_86;
		Il2CppObject * L_88 = Box(Char_t2862622538_il2cpp_TypeInfo_var, &L_87);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_89 = String_Concat_m389863537(NULL /*static, unused*/, L_85, L_88, /*hidden argument*/NULL);
		V_0 = L_89;
	}

IL_01bc:
	{
	}

IL_01bd:
	{
		bool L_90 = V_3;
		if (!L_90)
		{
			goto IL_0021;
		}
	}

IL_01c3:
	{
		bool L_91 = V_3;
		if (L_91)
		{
			goto IL_01d1;
		}
	}
	{
		V_7 = (String_t*)NULL;
		goto IL_01d9;
	}

IL_01d1:
	{
		String_t* L_92 = V_0;
		V_7 = L_92;
		goto IL_01d9;
	}

IL_01d9:
	{
		String_t* L_93 = V_7;
		return L_93;
	}
}
// System.Double UnityEngine.Purchasing.MiniJson::ParseNumber(System.Char[],System.Int32&)
extern Il2CppClass* MiniJson_t3631183983_il2cpp_TypeInfo_var;
extern Il2CppClass* CharU5BU5D_t3324145743_il2cpp_TypeInfo_var;
extern Il2CppClass* CultureInfo_t1065375142_il2cpp_TypeInfo_var;
extern const uint32_t MiniJson_ParseNumber_m2837772573_MetadataUsageId;
extern "C"  double MiniJson_ParseNumber_m2837772573 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t3324145743* ___json0, int32_t* ___index1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (MiniJson_ParseNumber_m2837772573_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	CharU5BU5D_t3324145743* V_2 = NULL;
	double V_3 = 0.0;
	{
		CharU5BU5D_t3324145743* L_0 = ___json0;
		int32_t* L_1 = ___index1;
		IL2CPP_RUNTIME_CLASS_INIT(MiniJson_t3631183983_il2cpp_TypeInfo_var);
		MiniJson_EatWhitespace_m896961191(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		CharU5BU5D_t3324145743* L_2 = ___json0;
		int32_t* L_3 = ___index1;
		int32_t L_4 = MiniJson_GetLastIndexOfNumber_m922716904(NULL /*static, unused*/, L_2, (*((int32_t*)L_3)), /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5 = V_0;
		int32_t* L_6 = ___index1;
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)L_5-(int32_t)(*((int32_t*)L_6))))+(int32_t)1));
		int32_t L_7 = V_1;
		V_2 = ((CharU5BU5D_t3324145743*)SZArrayNew(CharU5BU5D_t3324145743_il2cpp_TypeInfo_var, (uint32_t)L_7));
		CharU5BU5D_t3324145743* L_8 = ___json0;
		int32_t* L_9 = ___index1;
		CharU5BU5D_t3324145743* L_10 = V_2;
		int32_t L_11 = V_1;
		Array_Copy_m2598616668(NULL /*static, unused*/, (Il2CppArray *)(Il2CppArray *)L_8, (*((int32_t*)L_9)), (Il2CppArray *)(Il2CppArray *)L_10, 0, L_11, /*hidden argument*/NULL);
		int32_t* L_12 = ___index1;
		int32_t L_13 = V_0;
		*((int32_t*)(L_12)) = (int32_t)((int32_t)((int32_t)L_13+(int32_t)1));
		CharU5BU5D_t3324145743* L_14 = V_2;
		String_t* L_15 = String_CreateString_m578950865(NULL, L_14, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1065375142_il2cpp_TypeInfo_var);
		CultureInfo_t1065375142 * L_16 = CultureInfo_get_InvariantCulture_m764001524(NULL /*static, unused*/, /*hidden argument*/NULL);
		double L_17 = Double_Parse_m2930245738(NULL /*static, unused*/, L_15, L_16, /*hidden argument*/NULL);
		V_3 = L_17;
		goto IL_0045;
	}

IL_0045:
	{
		double L_18 = V_3;
		return L_18;
	}
}
// System.Int32 UnityEngine.Purchasing.MiniJson::GetLastIndexOfNumber(System.Char[],System.Int32)
extern Il2CppCodeGenString* _stringLiteral2451559847;
extern const uint32_t MiniJson_GetLastIndexOfNumber_m922716904_MetadataUsageId;
extern "C"  int32_t MiniJson_GetLastIndexOfNumber_m922716904 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t3324145743* ___json0, int32_t ___index1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (MiniJson_GetLastIndexOfNumber_m922716904_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___index1;
		V_0 = L_0;
		goto IL_0026;
	}

IL_0008:
	{
		CharU5BU5D_t3324145743* L_1 = ___json0;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		uint16_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(_stringLiteral2451559847);
		int32_t L_5 = String_IndexOf_m2775210486(_stringLiteral2451559847, L_4, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)(-1)))))
		{
			goto IL_0021;
		}
	}
	{
		goto IL_002f;
	}

IL_0021:
	{
		int32_t L_6 = V_0;
		V_0 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_0026:
	{
		int32_t L_7 = V_0;
		CharU5BU5D_t3324145743* L_8 = ___json0;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_8)->max_length)))))))
		{
			goto IL_0008;
		}
	}

IL_002f:
	{
		int32_t L_9 = V_0;
		V_1 = ((int32_t)((int32_t)L_9-(int32_t)1));
		goto IL_0038;
	}

IL_0038:
	{
		int32_t L_10 = V_1;
		return L_10;
	}
}
// System.Void UnityEngine.Purchasing.MiniJson::EatWhitespace(System.Char[],System.Int32&)
extern Il2CppCodeGenString* _stringLiteral962284;
extern const uint32_t MiniJson_EatWhitespace_m896961191_MetadataUsageId;
extern "C"  void MiniJson_EatWhitespace_m896961191 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t3324145743* ___json0, int32_t* ___index1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (MiniJson_EatWhitespace_m896961191_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		goto IL_0027;
	}

IL_0006:
	{
		CharU5BU5D_t3324145743* L_0 = ___json0;
		int32_t* L_1 = ___index1;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, (*((int32_t*)L_1)));
		int32_t L_2 = (*((int32_t*)L_1));
		uint16_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(_stringLiteral962284);
		int32_t L_4 = String_IndexOf_m2775210486(_stringLiteral962284, L_3, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_4) == ((uint32_t)(-1)))))
		{
			goto IL_0020;
		}
	}
	{
		goto IL_0031;
	}

IL_0020:
	{
		int32_t* L_5 = ___index1;
		int32_t* L_6 = ___index1;
		*((int32_t*)(L_5)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_6))+(int32_t)1));
	}

IL_0027:
	{
		int32_t* L_7 = ___index1;
		CharU5BU5D_t3324145743* L_8 = ___json0;
		NullCheck(L_8);
		if ((((int32_t)(*((int32_t*)L_7))) < ((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_8)->max_length)))))))
		{
			goto IL_0006;
		}
	}

IL_0031:
	{
		return;
	}
}
// System.Int32 UnityEngine.Purchasing.MiniJson::LookAhead(System.Char[],System.Int32)
extern Il2CppClass* MiniJson_t3631183983_il2cpp_TypeInfo_var;
extern const uint32_t MiniJson_LookAhead_m3136306010_MetadataUsageId;
extern "C"  int32_t MiniJson_LookAhead_m3136306010 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t3324145743* ___json0, int32_t ___index1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (MiniJson_LookAhead_m3136306010_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___index1;
		V_0 = L_0;
		CharU5BU5D_t3324145743* L_1 = ___json0;
		IL2CPP_RUNTIME_CLASS_INIT(MiniJson_t3631183983_il2cpp_TypeInfo_var);
		int32_t L_2 = MiniJson_NextToken_m3670730190(NULL /*static, unused*/, L_1, (&V_0), /*hidden argument*/NULL);
		V_1 = L_2;
		goto IL_0011;
	}

IL_0011:
	{
		int32_t L_3 = V_1;
		return L_3;
	}
}
// System.Int32 UnityEngine.Purchasing.MiniJson::NextToken(System.Char[],System.Int32&)
extern Il2CppClass* MiniJson_t3631183983_il2cpp_TypeInfo_var;
extern const uint32_t MiniJson_NextToken_m3670730190_MetadataUsageId;
extern "C"  int32_t MiniJson_NextToken_m3670730190 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t3324145743* ___json0, int32_t* ___index1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (MiniJson_NextToken_m3670730190_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Il2CppChar V_1 = 0x0;
	int32_t V_2 = 0;
	{
		CharU5BU5D_t3324145743* L_0 = ___json0;
		int32_t* L_1 = ___index1;
		IL2CPP_RUNTIME_CLASS_INIT(MiniJson_t3631183983_il2cpp_TypeInfo_var);
		MiniJson_EatWhitespace_m896961191(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		int32_t* L_2 = ___index1;
		CharU5BU5D_t3324145743* L_3 = ___json0;
		NullCheck(L_3);
		if ((!(((uint32_t)(*((int32_t*)L_2))) == ((uint32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_3)->max_length))))))))
		{
			goto IL_0019;
		}
	}
	{
		V_0 = 0;
		goto IL_01d7;
	}

IL_0019:
	{
		CharU5BU5D_t3324145743* L_4 = ___json0;
		int32_t* L_5 = ___index1;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, (*((int32_t*)L_5)));
		int32_t L_6 = (*((int32_t*)L_5));
		uint16_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = L_7;
		int32_t* L_8 = ___index1;
		int32_t* L_9 = ___index1;
		*((int32_t*)(L_8)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_9))+(int32_t)1));
		Il2CppChar L_10 = V_1;
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)44))) == 0)
		{
			goto IL_00bc;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)44))) == 1)
		{
			goto IL_00ca;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)44))) == 2)
		{
			goto IL_0069;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)44))) == 3)
		{
			goto IL_0069;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)44))) == 4)
		{
			goto IL_00ca;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)44))) == 5)
		{
			goto IL_00ca;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)44))) == 6)
		{
			goto IL_00ca;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)44))) == 7)
		{
			goto IL_00ca;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)44))) == 8)
		{
			goto IL_00ca;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)44))) == 9)
		{
			goto IL_00ca;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)44))) == 10)
		{
			goto IL_00ca;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)44))) == 11)
		{
			goto IL_00ca;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)44))) == 12)
		{
			goto IL_00ca;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)44))) == 13)
		{
			goto IL_00ca;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)44))) == 14)
		{
			goto IL_00d1;
		}
	}

IL_0069:
	{
		Il2CppChar L_11 = V_1;
		if (((int32_t)((int32_t)L_11-(int32_t)((int32_t)91))) == 0)
		{
			goto IL_00ae;
		}
		if (((int32_t)((int32_t)L_11-(int32_t)((int32_t)91))) == 1)
		{
			goto IL_007e;
		}
		if (((int32_t)((int32_t)L_11-(int32_t)((int32_t)91))) == 2)
		{
			goto IL_00b5;
		}
	}

IL_007e:
	{
		Il2CppChar L_12 = V_1;
		if (((int32_t)((int32_t)L_12-(int32_t)((int32_t)123))) == 0)
		{
			goto IL_00a0;
		}
		if (((int32_t)((int32_t)L_12-(int32_t)((int32_t)123))) == 1)
		{
			goto IL_0093;
		}
		if (((int32_t)((int32_t)L_12-(int32_t)((int32_t)123))) == 2)
		{
			goto IL_00a7;
		}
	}

IL_0093:
	{
		Il2CppChar L_13 = V_1;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)34))))
		{
			goto IL_00c3;
		}
	}
	{
		goto IL_00d8;
	}

IL_00a0:
	{
		V_0 = 1;
		goto IL_01d7;
	}

IL_00a7:
	{
		V_0 = 2;
		goto IL_01d7;
	}

IL_00ae:
	{
		V_0 = 3;
		goto IL_01d7;
	}

IL_00b5:
	{
		V_0 = 4;
		goto IL_01d7;
	}

IL_00bc:
	{
		V_0 = 6;
		goto IL_01d7;
	}

IL_00c3:
	{
		V_0 = 7;
		goto IL_01d7;
	}

IL_00ca:
	{
		V_0 = 8;
		goto IL_01d7;
	}

IL_00d1:
	{
		V_0 = 5;
		goto IL_01d7;
	}

IL_00d8:
	{
		int32_t* L_14 = ___index1;
		int32_t* L_15 = ___index1;
		*((int32_t*)(L_14)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_15))-(int32_t)1));
		CharU5BU5D_t3324145743* L_16 = ___json0;
		NullCheck(L_16);
		int32_t* L_17 = ___index1;
		V_2 = ((int32_t)((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_16)->max_length))))-(int32_t)(*((int32_t*)L_17))));
		int32_t L_18 = V_2;
		if ((((int32_t)L_18) < ((int32_t)5)))
		{
			goto IL_013c;
		}
	}
	{
		CharU5BU5D_t3324145743* L_19 = ___json0;
		int32_t* L_20 = ___index1;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, (*((int32_t*)L_20)));
		int32_t L_21 = (*((int32_t*)L_20));
		uint16_t L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		if ((!(((uint32_t)L_22) == ((uint32_t)((int32_t)102)))))
		{
			goto IL_013b;
		}
	}
	{
		CharU5BU5D_t3324145743* L_23 = ___json0;
		int32_t* L_24 = ___index1;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, ((int32_t)((int32_t)(*((int32_t*)L_24))+(int32_t)1)));
		int32_t L_25 = ((int32_t)((int32_t)(*((int32_t*)L_24))+(int32_t)1));
		uint16_t L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		if ((!(((uint32_t)L_26) == ((uint32_t)((int32_t)97)))))
		{
			goto IL_013b;
		}
	}
	{
		CharU5BU5D_t3324145743* L_27 = ___json0;
		int32_t* L_28 = ___index1;
		NullCheck(L_27);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_27, ((int32_t)((int32_t)(*((int32_t*)L_28))+(int32_t)2)));
		int32_t L_29 = ((int32_t)((int32_t)(*((int32_t*)L_28))+(int32_t)2));
		uint16_t L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		if ((!(((uint32_t)L_30) == ((uint32_t)((int32_t)108)))))
		{
			goto IL_013b;
		}
	}
	{
		CharU5BU5D_t3324145743* L_31 = ___json0;
		int32_t* L_32 = ___index1;
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, ((int32_t)((int32_t)(*((int32_t*)L_32))+(int32_t)3)));
		int32_t L_33 = ((int32_t)((int32_t)(*((int32_t*)L_32))+(int32_t)3));
		uint16_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		if ((!(((uint32_t)L_34) == ((uint32_t)((int32_t)115)))))
		{
			goto IL_013b;
		}
	}
	{
		CharU5BU5D_t3324145743* L_35 = ___json0;
		int32_t* L_36 = ___index1;
		NullCheck(L_35);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_35, ((int32_t)((int32_t)(*((int32_t*)L_36))+(int32_t)4)));
		int32_t L_37 = ((int32_t)((int32_t)(*((int32_t*)L_36))+(int32_t)4));
		uint16_t L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		if ((!(((uint32_t)L_38) == ((uint32_t)((int32_t)101)))))
		{
			goto IL_013b;
		}
	}
	{
		int32_t* L_39 = ___index1;
		int32_t* L_40 = ___index1;
		*((int32_t*)(L_39)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_40))+(int32_t)5));
		V_0 = ((int32_t)10);
		goto IL_01d7;
	}

IL_013b:
	{
	}

IL_013c:
	{
		int32_t L_41 = V_2;
		if ((((int32_t)L_41) < ((int32_t)4)))
		{
			goto IL_0186;
		}
	}
	{
		CharU5BU5D_t3324145743* L_42 = ___json0;
		int32_t* L_43 = ___index1;
		NullCheck(L_42);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_42, (*((int32_t*)L_43)));
		int32_t L_44 = (*((int32_t*)L_43));
		uint16_t L_45 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		if ((!(((uint32_t)L_45) == ((uint32_t)((int32_t)116)))))
		{
			goto IL_0185;
		}
	}
	{
		CharU5BU5D_t3324145743* L_46 = ___json0;
		int32_t* L_47 = ___index1;
		NullCheck(L_46);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_46, ((int32_t)((int32_t)(*((int32_t*)L_47))+(int32_t)1)));
		int32_t L_48 = ((int32_t)((int32_t)(*((int32_t*)L_47))+(int32_t)1));
		uint16_t L_49 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		if ((!(((uint32_t)L_49) == ((uint32_t)((int32_t)114)))))
		{
			goto IL_0185;
		}
	}
	{
		CharU5BU5D_t3324145743* L_50 = ___json0;
		int32_t* L_51 = ___index1;
		NullCheck(L_50);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_50, ((int32_t)((int32_t)(*((int32_t*)L_51))+(int32_t)2)));
		int32_t L_52 = ((int32_t)((int32_t)(*((int32_t*)L_51))+(int32_t)2));
		uint16_t L_53 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		if ((!(((uint32_t)L_53) == ((uint32_t)((int32_t)117)))))
		{
			goto IL_0185;
		}
	}
	{
		CharU5BU5D_t3324145743* L_54 = ___json0;
		int32_t* L_55 = ___index1;
		NullCheck(L_54);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_54, ((int32_t)((int32_t)(*((int32_t*)L_55))+(int32_t)3)));
		int32_t L_56 = ((int32_t)((int32_t)(*((int32_t*)L_55))+(int32_t)3));
		uint16_t L_57 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		if ((!(((uint32_t)L_57) == ((uint32_t)((int32_t)101)))))
		{
			goto IL_0185;
		}
	}
	{
		int32_t* L_58 = ___index1;
		int32_t* L_59 = ___index1;
		*((int32_t*)(L_58)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_59))+(int32_t)4));
		V_0 = ((int32_t)9);
		goto IL_01d7;
	}

IL_0185:
	{
	}

IL_0186:
	{
		int32_t L_60 = V_2;
		if ((((int32_t)L_60) < ((int32_t)4)))
		{
			goto IL_01d0;
		}
	}
	{
		CharU5BU5D_t3324145743* L_61 = ___json0;
		int32_t* L_62 = ___index1;
		NullCheck(L_61);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_61, (*((int32_t*)L_62)));
		int32_t L_63 = (*((int32_t*)L_62));
		uint16_t L_64 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		if ((!(((uint32_t)L_64) == ((uint32_t)((int32_t)110)))))
		{
			goto IL_01cf;
		}
	}
	{
		CharU5BU5D_t3324145743* L_65 = ___json0;
		int32_t* L_66 = ___index1;
		NullCheck(L_65);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_65, ((int32_t)((int32_t)(*((int32_t*)L_66))+(int32_t)1)));
		int32_t L_67 = ((int32_t)((int32_t)(*((int32_t*)L_66))+(int32_t)1));
		uint16_t L_68 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		if ((!(((uint32_t)L_68) == ((uint32_t)((int32_t)117)))))
		{
			goto IL_01cf;
		}
	}
	{
		CharU5BU5D_t3324145743* L_69 = ___json0;
		int32_t* L_70 = ___index1;
		NullCheck(L_69);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_69, ((int32_t)((int32_t)(*((int32_t*)L_70))+(int32_t)2)));
		int32_t L_71 = ((int32_t)((int32_t)(*((int32_t*)L_70))+(int32_t)2));
		uint16_t L_72 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		if ((!(((uint32_t)L_72) == ((uint32_t)((int32_t)108)))))
		{
			goto IL_01cf;
		}
	}
	{
		CharU5BU5D_t3324145743* L_73 = ___json0;
		int32_t* L_74 = ___index1;
		NullCheck(L_73);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_73, ((int32_t)((int32_t)(*((int32_t*)L_74))+(int32_t)3)));
		int32_t L_75 = ((int32_t)((int32_t)(*((int32_t*)L_74))+(int32_t)3));
		uint16_t L_76 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_75));
		if ((!(((uint32_t)L_76) == ((uint32_t)((int32_t)108)))))
		{
			goto IL_01cf;
		}
	}
	{
		int32_t* L_77 = ___index1;
		int32_t* L_78 = ___index1;
		*((int32_t*)(L_77)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_78))+(int32_t)4));
		V_0 = ((int32_t)11);
		goto IL_01d7;
	}

IL_01cf:
	{
	}

IL_01d0:
	{
		V_0 = 0;
		goto IL_01d7;
	}

IL_01d7:
	{
		int32_t L_79 = V_0;
		return L_79;
	}
}
// System.Boolean UnityEngine.Purchasing.MiniJson::SerializeObject(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.Text.StringBuilder)
extern Il2CppClass* Enumerator_t2013590837_il2cpp_TypeInfo_var;
extern Il2CppClass* IDictionaryEnumerator_t951828701_il2cpp_TypeInfo_var;
extern Il2CppClass* MiniJson_t3631183983_il2cpp_TypeInfo_var;
extern Il2CppClass* IEnumerator_t3464575207_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2_GetEnumerator_m3528021229_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral123;
extern Il2CppCodeGenString* _stringLiteral1396;
extern Il2CppCodeGenString* _stringLiteral58;
extern Il2CppCodeGenString* _stringLiteral125;
extern const uint32_t MiniJson_SerializeObject_m656519076_MetadataUsageId;
extern "C"  bool MiniJson_SerializeObject_m656519076 (Il2CppObject * __this /* static, unused */, Dictionary_2_t696267445 * ___anObject0, StringBuilder_t243639308 * ___builder1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (MiniJson_SerializeObject_m656519076_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Il2CppObject * V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	Il2CppObject * V_3 = NULL;
	bool V_4 = false;
	{
		StringBuilder_t243639308 * L_0 = ___builder1;
		NullCheck(L_0);
		StringBuilder_Append_m3898090075(L_0, _stringLiteral123, /*hidden argument*/NULL);
		Dictionary_2_t696267445 * L_1 = ___anObject0;
		NullCheck(L_1);
		Enumerator_t2013590837  L_2 = Dictionary_2_GetEnumerator_m3528021229(L_1, /*hidden argument*/Dictionary_2_GetEnumerator_m3528021229_MethodInfo_var);
		Enumerator_t2013590837  L_3 = L_2;
		Il2CppObject * L_4 = Box(Enumerator_t2013590837_il2cpp_TypeInfo_var, &L_3);
		V_0 = (Il2CppObject *)L_4;
		V_1 = (bool)1;
		goto IL_0070;
	}

IL_0020:
	{
		Il2CppObject * L_5 = V_0;
		NullCheck(L_5);
		Il2CppObject * L_6 = InterfaceFuncInvoker0< Il2CppObject * >::Invoke(1 /* System.Object System.Collections.IDictionaryEnumerator::get_Key() */, IDictionaryEnumerator_t951828701_il2cpp_TypeInfo_var, L_5);
		NullCheck(L_6);
		String_t* L_7 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_6);
		V_2 = L_7;
		Il2CppObject * L_8 = V_0;
		NullCheck(L_8);
		Il2CppObject * L_9 = InterfaceFuncInvoker0< Il2CppObject * >::Invoke(2 /* System.Object System.Collections.IDictionaryEnumerator::get_Value() */, IDictionaryEnumerator_t951828701_il2cpp_TypeInfo_var, L_8);
		V_3 = L_9;
		bool L_10 = V_1;
		if (L_10)
		{
			goto IL_0046;
		}
	}
	{
		StringBuilder_t243639308 * L_11 = ___builder1;
		NullCheck(L_11);
		StringBuilder_Append_m3898090075(L_11, _stringLiteral1396, /*hidden argument*/NULL);
	}

IL_0046:
	{
		String_t* L_12 = V_2;
		StringBuilder_t243639308 * L_13 = ___builder1;
		IL2CPP_RUNTIME_CLASS_INIT(MiniJson_t3631183983_il2cpp_TypeInfo_var);
		MiniJson_SerializeString_m2250824353(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/NULL);
		StringBuilder_t243639308 * L_14 = ___builder1;
		NullCheck(L_14);
		StringBuilder_Append_m3898090075(L_14, _stringLiteral58, /*hidden argument*/NULL);
		Il2CppObject * L_15 = V_3;
		StringBuilder_t243639308 * L_16 = ___builder1;
		bool L_17 = MiniJson_SerializeValue_m110904871(NULL /*static, unused*/, L_15, L_16, /*hidden argument*/NULL);
		if (L_17)
		{
			goto IL_006d;
		}
	}
	{
		V_4 = (bool)0;
		goto IL_008f;
	}

IL_006d:
	{
		V_1 = (bool)0;
	}

IL_0070:
	{
		Il2CppObject * L_18 = V_0;
		NullCheck(L_18);
		bool L_19 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t3464575207_il2cpp_TypeInfo_var, L_18);
		if (L_19)
		{
			goto IL_0020;
		}
	}
	{
		StringBuilder_t243639308 * L_20 = ___builder1;
		NullCheck(L_20);
		StringBuilder_Append_m3898090075(L_20, _stringLiteral125, /*hidden argument*/NULL);
		V_4 = (bool)1;
		goto IL_008f;
	}

IL_008f:
	{
		bool L_21 = V_4;
		return L_21;
	}
}
// System.Boolean UnityEngine.Purchasing.MiniJson::SerializeDictionary(System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Text.StringBuilder)
extern Il2CppClass* MiniJson_t3631183983_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2_GetEnumerator_m3802874175_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m3915401289_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Key_m430014795_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Value_m766551710_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m432485462_MethodInfo_var;
extern const MethodInfo* Enumerator_Dispose_m2736541607_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral123;
extern Il2CppCodeGenString* _stringLiteral1396;
extern Il2CppCodeGenString* _stringLiteral58;
extern Il2CppCodeGenString* _stringLiteral125;
extern const uint32_t MiniJson_SerializeDictionary_m2310471245_MetadataUsageId;
extern "C"  bool MiniJson_SerializeDictionary_m2310471245 (Il2CppObject * __this /* static, unused */, Dictionary_2_t827649927 * ___dict0, StringBuilder_t243639308 * ___builder1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (MiniJson_SerializeDictionary_m2310471245_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	KeyValuePair_2_t726430633  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Enumerator_t2144973319  V_2;
	memset(&V_2, 0, sizeof(V_2));
	bool V_3 = false;
	Exception_t3991598821 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t3991598821 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		StringBuilder_t243639308 * L_0 = ___builder1;
		NullCheck(L_0);
		StringBuilder_Append_m3898090075(L_0, _stringLiteral123, /*hidden argument*/NULL);
		V_0 = (bool)1;
		Dictionary_2_t827649927 * L_1 = ___dict0;
		NullCheck(L_1);
		Enumerator_t2144973319  L_2 = Dictionary_2_GetEnumerator_m3802874175(L_1, /*hidden argument*/Dictionary_2_GetEnumerator_m3802874175_MethodInfo_var);
		V_2 = L_2;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0060;
		}

IL_001c:
		{
			KeyValuePair_2_t726430633  L_3 = Enumerator_get_Current_m3915401289((&V_2), /*hidden argument*/Enumerator_get_Current_m3915401289_MethodInfo_var);
			V_1 = L_3;
			bool L_4 = V_0;
			if (L_4)
			{
				goto IL_0037;
			}
		}

IL_002b:
		{
			StringBuilder_t243639308 * L_5 = ___builder1;
			NullCheck(L_5);
			StringBuilder_Append_m3898090075(L_5, _stringLiteral1396, /*hidden argument*/NULL);
		}

IL_0037:
		{
			String_t* L_6 = KeyValuePair_2_get_Key_m430014795((&V_1), /*hidden argument*/KeyValuePair_2_get_Key_m430014795_MethodInfo_var);
			StringBuilder_t243639308 * L_7 = ___builder1;
			IL2CPP_RUNTIME_CLASS_INIT(MiniJson_t3631183983_il2cpp_TypeInfo_var);
			MiniJson_SerializeString_m2250824353(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
			StringBuilder_t243639308 * L_8 = ___builder1;
			NullCheck(L_8);
			StringBuilder_Append_m3898090075(L_8, _stringLiteral58, /*hidden argument*/NULL);
			String_t* L_9 = KeyValuePair_2_get_Value_m766551710((&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m766551710_MethodInfo_var);
			StringBuilder_t243639308 * L_10 = ___builder1;
			MiniJson_SerializeString_m2250824353(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
			V_0 = (bool)0;
		}

IL_0060:
		{
			bool L_11 = Enumerator_MoveNext_m432485462((&V_2), /*hidden argument*/Enumerator_MoveNext_m432485462_MethodInfo_var);
			if (L_11)
			{
				goto IL_001c;
			}
		}

IL_006c:
		{
			IL2CPP_LEAVE(0x7F, FINALLY_0071);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t3991598821 *)e.ex;
		goto FINALLY_0071;
	}

FINALLY_0071:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m2736541607((&V_2), /*hidden argument*/Enumerator_Dispose_m2736541607_MethodInfo_var);
		IL2CPP_END_FINALLY(113)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(113)
	{
		IL2CPP_JUMP_TBL(0x7F, IL_007f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t3991598821 *)
	}

IL_007f:
	{
		StringBuilder_t243639308 * L_12 = ___builder1;
		NullCheck(L_12);
		StringBuilder_Append_m3898090075(L_12, _stringLiteral125, /*hidden argument*/NULL);
		V_3 = (bool)1;
		goto IL_0092;
	}

IL_0092:
	{
		bool L_13 = V_3;
		return L_13;
	}
}
// System.Boolean UnityEngine.Purchasing.MiniJson::SerializeArray(System.Collections.Generic.List`1<System.Object>,System.Text.StringBuilder)
extern Il2CppClass* MiniJson_t3631183983_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_get_Item_m3716831615_MethodInfo_var;
extern const MethodInfo* List_1_get_Count_m3656460310_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral91;
extern Il2CppCodeGenString* _stringLiteral1396;
extern Il2CppCodeGenString* _stringLiteral93;
extern const uint32_t MiniJson_SerializeArray_m2441991839_MetadataUsageId;
extern "C"  bool MiniJson_SerializeArray_m2441991839 (Il2CppObject * __this /* static, unused */, List_1_t1244034627 * ___anArray0, StringBuilder_t243639308 * ___builder1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (MiniJson_SerializeArray_m2441991839_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	Il2CppObject * V_2 = NULL;
	bool V_3 = false;
	{
		StringBuilder_t243639308 * L_0 = ___builder1;
		NullCheck(L_0);
		StringBuilder_Append_m3898090075(L_0, _stringLiteral91, /*hidden argument*/NULL);
		V_0 = (bool)1;
		V_1 = 0;
		goto IL_004b;
	}

IL_0016:
	{
		List_1_t1244034627 * L_1 = ___anArray0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		Il2CppObject * L_3 = List_1_get_Item_m3716831615(L_1, L_2, /*hidden argument*/List_1_get_Item_m3716831615_MethodInfo_var);
		V_2 = L_3;
		bool L_4 = V_0;
		if (L_4)
		{
			goto IL_0031;
		}
	}
	{
		StringBuilder_t243639308 * L_5 = ___builder1;
		NullCheck(L_5);
		StringBuilder_Append_m3898090075(L_5, _stringLiteral1396, /*hidden argument*/NULL);
	}

IL_0031:
	{
		Il2CppObject * L_6 = V_2;
		StringBuilder_t243639308 * L_7 = ___builder1;
		IL2CPP_RUNTIME_CLASS_INIT(MiniJson_t3631183983_il2cpp_TypeInfo_var);
		bool L_8 = MiniJson_SerializeValue_m110904871(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0044;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_006a;
	}

IL_0044:
	{
		V_0 = (bool)0;
		int32_t L_9 = V_1;
		V_1 = ((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_004b:
	{
		int32_t L_10 = V_1;
		List_1_t1244034627 * L_11 = ___anArray0;
		NullCheck(L_11);
		int32_t L_12 = List_1_get_Count_m3656460310(L_11, /*hidden argument*/List_1_get_Count_m3656460310_MethodInfo_var);
		if ((((int32_t)L_10) < ((int32_t)L_12)))
		{
			goto IL_0016;
		}
	}
	{
		StringBuilder_t243639308 * L_13 = ___builder1;
		NullCheck(L_13);
		StringBuilder_Append_m3898090075(L_13, _stringLiteral93, /*hidden argument*/NULL);
		V_3 = (bool)1;
		goto IL_006a;
	}

IL_006a:
	{
		bool L_14 = V_3;
		return L_14;
	}
}
// System.Boolean UnityEngine.Purchasing.MiniJson::SerializeValue(System.Object,System.Text.StringBuilder)
extern Il2CppClass* ObjectU5BU5D_t1108656482_il2cpp_TypeInfo_var;
extern Il2CppClass* List_1_t1244034627_il2cpp_TypeInfo_var;
extern Il2CppClass* MiniJson_t3631183983_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* Char_t2862622538_il2cpp_TypeInfo_var;
extern Il2CppClass* Convert_t1363677321_il2cpp_TypeInfo_var;
extern Il2CppClass* Int32_t1153838500_il2cpp_TypeInfo_var;
extern Il2CppClass* Double_t3868226565_il2cpp_TypeInfo_var;
extern Il2CppClass* Decimal_t1954350631_il2cpp_TypeInfo_var;
extern Il2CppClass* Dictionary_2_t696267445_il2cpp_TypeInfo_var;
extern Il2CppClass* Dictionary_2_t827649927_il2cpp_TypeInfo_var;
extern Il2CppClass* Boolean_t476798718_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m4113379540_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral3392903;
extern Il2CppCodeGenString* _stringLiteral3569038;
extern Il2CppCodeGenString* _stringLiteral97196323;
extern const uint32_t MiniJson_SerializeValue_m110904871_MetadataUsageId;
extern "C"  bool MiniJson_SerializeValue_m110904871 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, StringBuilder_t243639308 * ___builder1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (MiniJson_SerializeValue_m110904871_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	{
		Il2CppObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		StringBuilder_t243639308 * L_1 = ___builder1;
		NullCheck(L_1);
		StringBuilder_Append_m3898090075(L_1, _stringLiteral3392903, /*hidden argument*/NULL);
		goto IL_018b;
	}

IL_0018:
	{
		Il2CppObject * L_2 = ___value0;
		NullCheck(L_2);
		Type_t * L_3 = Object_GetType_m2022236990(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		bool L_4 = Type_get_IsArray_m837983873(L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_003f;
		}
	}
	{
		Il2CppObject * L_5 = ___value0;
		List_1_t1244034627 * L_6 = (List_1_t1244034627 *)il2cpp_codegen_object_new(List_1_t1244034627_il2cpp_TypeInfo_var);
		List_1__ctor_m4113379540(L_6, (Il2CppObject*)(Il2CppObject*)((ObjectU5BU5D_t1108656482*)Castclass(L_5, ObjectU5BU5D_t1108656482_il2cpp_TypeInfo_var)), /*hidden argument*/List_1__ctor_m4113379540_MethodInfo_var);
		StringBuilder_t243639308 * L_7 = ___builder1;
		IL2CPP_RUNTIME_CLASS_INIT(MiniJson_t3631183983_il2cpp_TypeInfo_var);
		MiniJson_SerializeArray_m2441991839(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		goto IL_018b;
	}

IL_003f:
	{
		Il2CppObject * L_8 = ___value0;
		if (!((String_t*)IsInstSealed(L_8, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_005b;
		}
	}
	{
		Il2CppObject * L_9 = ___value0;
		StringBuilder_t243639308 * L_10 = ___builder1;
		IL2CPP_RUNTIME_CLASS_INIT(MiniJson_t3631183983_il2cpp_TypeInfo_var);
		MiniJson_SerializeString_m2250824353(NULL /*static, unused*/, ((String_t*)CastclassSealed(L_9, String_t_il2cpp_TypeInfo_var)), L_10, /*hidden argument*/NULL);
		goto IL_018b;
	}

IL_005b:
	{
		Il2CppObject * L_11 = ___value0;
		if (!((Il2CppObject *)IsInstSealed(L_11, Char_t2862622538_il2cpp_TypeInfo_var)))
		{
			goto IL_007c;
		}
	}
	{
		Il2CppObject * L_12 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1363677321_il2cpp_TypeInfo_var);
		String_t* L_13 = Convert_ToString_m3462155176(NULL /*static, unused*/, ((*(Il2CppChar*)((Il2CppChar*)UnBox (L_12, Char_t2862622538_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		StringBuilder_t243639308 * L_14 = ___builder1;
		IL2CPP_RUNTIME_CLASS_INIT(MiniJson_t3631183983_il2cpp_TypeInfo_var);
		MiniJson_SerializeString_m2250824353(NULL /*static, unused*/, L_13, L_14, /*hidden argument*/NULL);
		goto IL_018b;
	}

IL_007c:
	{
		Il2CppObject * L_15 = ___value0;
		if (!((Il2CppObject *)IsInstSealed(L_15, Int32_t1153838500_il2cpp_TypeInfo_var)))
		{
			goto IL_009d;
		}
	}
	{
		Il2CppObject * L_16 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1363677321_il2cpp_TypeInfo_var);
		String_t* L_17 = Convert_ToString_m130449894(NULL /*static, unused*/, ((*(int32_t*)((int32_t*)UnBox (L_16, Int32_t1153838500_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		StringBuilder_t243639308 * L_18 = ___builder1;
		IL2CPP_RUNTIME_CLASS_INIT(MiniJson_t3631183983_il2cpp_TypeInfo_var);
		MiniJson_SerializeString_m2250824353(NULL /*static, unused*/, L_17, L_18, /*hidden argument*/NULL);
		goto IL_018b;
	}

IL_009d:
	{
		Il2CppObject * L_19 = ___value0;
		if (!((Il2CppObject *)IsInstSealed(L_19, Double_t3868226565_il2cpp_TypeInfo_var)))
		{
			goto IL_00be;
		}
	}
	{
		Il2CppObject * L_20 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1363677321_il2cpp_TypeInfo_var);
		double L_21 = Convert_ToDouble_m1150945613(NULL /*static, unused*/, ((*(double*)((double*)UnBox (L_20, Double_t3868226565_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		StringBuilder_t243639308 * L_22 = ___builder1;
		IL2CPP_RUNTIME_CLASS_INIT(MiniJson_t3631183983_il2cpp_TypeInfo_var);
		MiniJson_SerializeNumber_m3654937257(NULL /*static, unused*/, L_21, L_22, /*hidden argument*/NULL);
		goto IL_018b;
	}

IL_00be:
	{
		Il2CppObject * L_23 = ___value0;
		if (!((Il2CppObject *)IsInstSealed(L_23, Decimal_t1954350631_il2cpp_TypeInfo_var)))
		{
			goto IL_00df;
		}
	}
	{
		Il2CppObject * L_24 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1363677321_il2cpp_TypeInfo_var);
		String_t* L_25 = Convert_ToString_m851570371(NULL /*static, unused*/, ((*(Decimal_t1954350631 *)((Decimal_t1954350631 *)UnBox (L_24, Decimal_t1954350631_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		StringBuilder_t243639308 * L_26 = ___builder1;
		IL2CPP_RUNTIME_CLASS_INIT(MiniJson_t3631183983_il2cpp_TypeInfo_var);
		MiniJson_SerializeString_m2250824353(NULL /*static, unused*/, L_25, L_26, /*hidden argument*/NULL);
		goto IL_018b;
	}

IL_00df:
	{
		Il2CppObject * L_27 = ___value0;
		if (!((Dictionary_2_t696267445 *)IsInstClass(L_27, Dictionary_2_t696267445_il2cpp_TypeInfo_var)))
		{
			goto IL_00fc;
		}
	}
	{
		Il2CppObject * L_28 = ___value0;
		StringBuilder_t243639308 * L_29 = ___builder1;
		IL2CPP_RUNTIME_CLASS_INIT(MiniJson_t3631183983_il2cpp_TypeInfo_var);
		MiniJson_SerializeObject_m656519076(NULL /*static, unused*/, ((Dictionary_2_t696267445 *)CastclassClass(L_28, Dictionary_2_t696267445_il2cpp_TypeInfo_var)), L_29, /*hidden argument*/NULL);
		goto IL_018b;
	}

IL_00fc:
	{
		Il2CppObject * L_30 = ___value0;
		if (!((Dictionary_2_t827649927 *)IsInstClass(L_30, Dictionary_2_t827649927_il2cpp_TypeInfo_var)))
		{
			goto IL_0119;
		}
	}
	{
		Il2CppObject * L_31 = ___value0;
		StringBuilder_t243639308 * L_32 = ___builder1;
		IL2CPP_RUNTIME_CLASS_INIT(MiniJson_t3631183983_il2cpp_TypeInfo_var);
		MiniJson_SerializeDictionary_m2310471245(NULL /*static, unused*/, ((Dictionary_2_t827649927 *)CastclassClass(L_31, Dictionary_2_t827649927_il2cpp_TypeInfo_var)), L_32, /*hidden argument*/NULL);
		goto IL_018b;
	}

IL_0119:
	{
		Il2CppObject * L_33 = ___value0;
		if (!((List_1_t1244034627 *)IsInstClass(L_33, List_1_t1244034627_il2cpp_TypeInfo_var)))
		{
			goto IL_0136;
		}
	}
	{
		Il2CppObject * L_34 = ___value0;
		StringBuilder_t243639308 * L_35 = ___builder1;
		IL2CPP_RUNTIME_CLASS_INIT(MiniJson_t3631183983_il2cpp_TypeInfo_var);
		MiniJson_SerializeArray_m2441991839(NULL /*static, unused*/, ((List_1_t1244034627 *)CastclassClass(L_34, List_1_t1244034627_il2cpp_TypeInfo_var)), L_35, /*hidden argument*/NULL);
		goto IL_018b;
	}

IL_0136:
	{
		Il2CppObject * L_36 = ___value0;
		if (!((Il2CppObject *)IsInstSealed(L_36, Boolean_t476798718_il2cpp_TypeInfo_var)))
		{
			goto IL_015d;
		}
	}
	{
		Il2CppObject * L_37 = ___value0;
		if (!((*(bool*)((bool*)UnBox (L_37, Boolean_t476798718_il2cpp_TypeInfo_var)))))
		{
			goto IL_015d;
		}
	}
	{
		StringBuilder_t243639308 * L_38 = ___builder1;
		NullCheck(L_38);
		StringBuilder_Append_m3898090075(L_38, _stringLiteral3569038, /*hidden argument*/NULL);
		goto IL_018b;
	}

IL_015d:
	{
		Il2CppObject * L_39 = ___value0;
		if (!((Il2CppObject *)IsInstSealed(L_39, Boolean_t476798718_il2cpp_TypeInfo_var)))
		{
			goto IL_0184;
		}
	}
	{
		Il2CppObject * L_40 = ___value0;
		if (((*(bool*)((bool*)UnBox (L_40, Boolean_t476798718_il2cpp_TypeInfo_var)))))
		{
			goto IL_0184;
		}
	}
	{
		StringBuilder_t243639308 * L_41 = ___builder1;
		NullCheck(L_41);
		StringBuilder_Append_m3898090075(L_41, _stringLiteral97196323, /*hidden argument*/NULL);
		goto IL_018b;
	}

IL_0184:
	{
		V_0 = (bool)0;
		goto IL_0192;
	}

IL_018b:
	{
		V_0 = (bool)1;
		goto IL_0192;
	}

IL_0192:
	{
		bool L_42 = V_0;
		return L_42;
	}
}
// System.Void UnityEngine.Purchasing.MiniJson::SerializeString(System.String,System.Text.StringBuilder)
extern Il2CppClass* Convert_t1363677321_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral34;
extern Il2CppCodeGenString* _stringLiteral2886;
extern Il2CppCodeGenString* _stringLiteral2944;
extern Il2CppCodeGenString* _stringLiteral2950;
extern Il2CppCodeGenString* _stringLiteral2954;
extern Il2CppCodeGenString* _stringLiteral2962;
extern Il2CppCodeGenString* _stringLiteral2966;
extern Il2CppCodeGenString* _stringLiteral2968;
extern Il2CppCodeGenString* _stringLiteral2969;
extern const uint32_t MiniJson_SerializeString_m2250824353_MetadataUsageId;
extern "C"  void MiniJson_SerializeString_m2250824353 (Il2CppObject * __this /* static, unused */, String_t* ___aString0, StringBuilder_t243639308 * ___builder1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (MiniJson_SerializeString_m2250824353_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	CharU5BU5D_t3324145743* V_0 = NULL;
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	int32_t V_3 = 0;
	{
		StringBuilder_t243639308 * L_0 = ___builder1;
		NullCheck(L_0);
		StringBuilder_Append_m3898090075(L_0, _stringLiteral34, /*hidden argument*/NULL);
		String_t* L_1 = ___aString0;
		NullCheck(L_1);
		CharU5BU5D_t3324145743* L_2 = String_ToCharArray_m1208288742(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_011a;
	}

IL_001b:
	{
		CharU5BU5D_t3324145743* L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		uint16_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_2 = L_6;
		Il2CppChar L_7 = V_2;
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_0039;
		}
	}
	{
		StringBuilder_t243639308 * L_8 = ___builder1;
		NullCheck(L_8);
		StringBuilder_Append_m3898090075(L_8, _stringLiteral2886, /*hidden argument*/NULL);
		goto IL_0115;
	}

IL_0039:
	{
		Il2CppChar L_9 = V_2;
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_0052;
		}
	}
	{
		StringBuilder_t243639308 * L_10 = ___builder1;
		NullCheck(L_10);
		StringBuilder_Append_m3898090075(L_10, _stringLiteral2944, /*hidden argument*/NULL);
		goto IL_0115;
	}

IL_0052:
	{
		Il2CppChar L_11 = V_2;
		if ((!(((uint32_t)L_11) == ((uint32_t)8))))
		{
			goto IL_006a;
		}
	}
	{
		StringBuilder_t243639308 * L_12 = ___builder1;
		NullCheck(L_12);
		StringBuilder_Append_m3898090075(L_12, _stringLiteral2950, /*hidden argument*/NULL);
		goto IL_0115;
	}

IL_006a:
	{
		Il2CppChar L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)12)))))
		{
			goto IL_0083;
		}
	}
	{
		StringBuilder_t243639308 * L_14 = ___builder1;
		NullCheck(L_14);
		StringBuilder_Append_m3898090075(L_14, _stringLiteral2954, /*hidden argument*/NULL);
		goto IL_0115;
	}

IL_0083:
	{
		Il2CppChar L_15 = V_2;
		if ((!(((uint32_t)L_15) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_009c;
		}
	}
	{
		StringBuilder_t243639308 * L_16 = ___builder1;
		NullCheck(L_16);
		StringBuilder_Append_m3898090075(L_16, _stringLiteral2962, /*hidden argument*/NULL);
		goto IL_0115;
	}

IL_009c:
	{
		Il2CppChar L_17 = V_2;
		if ((!(((uint32_t)L_17) == ((uint32_t)((int32_t)13)))))
		{
			goto IL_00b5;
		}
	}
	{
		StringBuilder_t243639308 * L_18 = ___builder1;
		NullCheck(L_18);
		StringBuilder_Append_m3898090075(L_18, _stringLiteral2966, /*hidden argument*/NULL);
		goto IL_0115;
	}

IL_00b5:
	{
		Il2CppChar L_19 = V_2;
		if ((!(((uint32_t)L_19) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_00ce;
		}
	}
	{
		StringBuilder_t243639308 * L_20 = ___builder1;
		NullCheck(L_20);
		StringBuilder_Append_m3898090075(L_20, _stringLiteral2968, /*hidden argument*/NULL);
		goto IL_0115;
	}

IL_00ce:
	{
		Il2CppChar L_21 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1363677321_il2cpp_TypeInfo_var);
		int32_t L_22 = Convert_ToInt32_m100832938(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
		V_3 = L_22;
		int32_t L_23 = V_3;
		if ((((int32_t)L_23) < ((int32_t)((int32_t)32))))
		{
			goto IL_00f3;
		}
	}
	{
		int32_t L_24 = V_3;
		if ((((int32_t)L_24) > ((int32_t)((int32_t)126))))
		{
			goto IL_00f3;
		}
	}
	{
		StringBuilder_t243639308 * L_25 = ___builder1;
		Il2CppChar L_26 = V_2;
		NullCheck(L_25);
		StringBuilder_Append_m2143093878(L_25, L_26, /*hidden argument*/NULL);
		goto IL_0114;
	}

IL_00f3:
	{
		StringBuilder_t243639308 * L_27 = ___builder1;
		int32_t L_28 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1363677321_il2cpp_TypeInfo_var);
		String_t* L_29 = Convert_ToString_m3908657329(NULL /*static, unused*/, L_28, ((int32_t)16), /*hidden argument*/NULL);
		NullCheck(L_29);
		String_t* L_30 = String_PadLeft_m3268206439(L_29, 4, ((int32_t)48), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_31 = String_Concat_m138640077(NULL /*static, unused*/, _stringLiteral2969, L_30, /*hidden argument*/NULL);
		NullCheck(L_27);
		StringBuilder_Append_m3898090075(L_27, L_31, /*hidden argument*/NULL);
	}

IL_0114:
	{
	}

IL_0115:
	{
		int32_t L_32 = V_1;
		V_1 = ((int32_t)((int32_t)L_32+(int32_t)1));
	}

IL_011a:
	{
		int32_t L_33 = V_1;
		CharU5BU5D_t3324145743* L_34 = V_0;
		NullCheck(L_34);
		if ((((int32_t)L_33) < ((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_34)->max_length)))))))
		{
			goto IL_001b;
		}
	}
	{
		StringBuilder_t243639308 * L_35 = ___builder1;
		NullCheck(L_35);
		StringBuilder_Append_m3898090075(L_35, _stringLiteral34, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.MiniJson::SerializeNumber(System.Double,System.Text.StringBuilder)
extern Il2CppClass* Convert_t1363677321_il2cpp_TypeInfo_var;
extern const uint32_t MiniJson_SerializeNumber_m3654937257_MetadataUsageId;
extern "C"  void MiniJson_SerializeNumber_m3654937257 (Il2CppObject * __this /* static, unused */, double ___number0, StringBuilder_t243639308 * ___builder1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (MiniJson_SerializeNumber_m3654937257_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		StringBuilder_t243639308 * L_0 = ___builder1;
		double L_1 = ___number0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1363677321_il2cpp_TypeInfo_var);
		String_t* L_2 = Convert_ToString_m3932406093(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		StringBuilder_Append_m3898090075(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.MiniJson::.cctor()
extern Il2CppClass* MiniJson_t3631183983_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral0;
extern const uint32_t MiniJson__cctor_m3268821559_MetadataUsageId;
extern "C"  void MiniJson__cctor_m3268821559 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (MiniJson__cctor_m3268821559_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		((MiniJson_t3631183983_StaticFields*)MiniJson_t3631183983_il2cpp_TypeInfo_var->static_fields)->set_s_LastErrorIndex_0((-1));
		((MiniJson_t3631183983_StaticFields*)MiniJson_t3631183983_il2cpp_TypeInfo_var->static_fields)->set_s_LastDecode_1(_stringLiteral0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
