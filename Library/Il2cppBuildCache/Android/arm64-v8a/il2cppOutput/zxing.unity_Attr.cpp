#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>



// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Reflection.AssemblyCompanyAttribute
struct AssemblyCompanyAttribute_t642AAB097D7DEAAB623BEBE4664327E9B01D1DE4;
// System.Reflection.AssemblyCopyrightAttribute
struct AssemblyCopyrightAttribute_tA6A09319EF50B48D962810032000DEE7B12904EC;
// System.Reflection.AssemblyDescriptionAttribute
struct AssemblyDescriptionAttribute_tF4460CCB289F6E2F71841792BBC7E6907DF612B3;
// System.Reflection.AssemblyFileVersionAttribute
struct AssemblyFileVersionAttribute_tCC1036D0566155DC5688D9230EF3C07D82A1896F;
// System.Reflection.AssemblyProductAttribute
struct AssemblyProductAttribute_t6BB0E0F76C752E14A4C26B4D1E230019068601CA;
// System.Reflection.AssemblyTitleAttribute
struct AssemblyTitleAttribute_tABB894D0792C7F307694CC796C8AE5D6A20382E7;
// System.Reflection.AssemblyTrademarkAttribute
struct AssemblyTrademarkAttribute_t0602679435F8EBECC5DDB55CFE3A7A4A4CA2B5E2;
// System.CLSCompliantAttribute
struct CLSCompliantAttribute_tA28EF6D4ADBD3C5C429DE9A70DD1E927C8906249;
// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
struct CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF;
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
struct CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C;
// System.Diagnostics.DebuggableAttribute
struct DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B;
// System.Reflection.DefaultMemberAttribute
struct DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5;
// System.FlagsAttribute
struct FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36;
// System.Runtime.InteropServices.GuidAttribute
struct GuidAttribute_tBB494B31270577CCD589ABBB159C18CDAE20D063;
// System.ParamArrayAttribute
struct ParamArrayAttribute_t9DCEB4CDDB8EDDB1124171D4C51FA6069EEA5C5F;
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
struct RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80;
// System.String
struct String_t;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.Reflection.AssemblyCompanyAttribute
struct AssemblyCompanyAttribute_t642AAB097D7DEAAB623BEBE4664327E9B01D1DE4  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Reflection.AssemblyCompanyAttribute::m_company
	String_t* ___m_company_0;

public:
	inline static int32_t get_offset_of_m_company_0() { return static_cast<int32_t>(offsetof(AssemblyCompanyAttribute_t642AAB097D7DEAAB623BEBE4664327E9B01D1DE4, ___m_company_0)); }
	inline String_t* get_m_company_0() const { return ___m_company_0; }
	inline String_t** get_address_of_m_company_0() { return &___m_company_0; }
	inline void set_m_company_0(String_t* value)
	{
		___m_company_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_company_0), (void*)value);
	}
};


// System.Reflection.AssemblyCopyrightAttribute
struct AssemblyCopyrightAttribute_tA6A09319EF50B48D962810032000DEE7B12904EC  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Reflection.AssemblyCopyrightAttribute::m_copyright
	String_t* ___m_copyright_0;

public:
	inline static int32_t get_offset_of_m_copyright_0() { return static_cast<int32_t>(offsetof(AssemblyCopyrightAttribute_tA6A09319EF50B48D962810032000DEE7B12904EC, ___m_copyright_0)); }
	inline String_t* get_m_copyright_0() const { return ___m_copyright_0; }
	inline String_t** get_address_of_m_copyright_0() { return &___m_copyright_0; }
	inline void set_m_copyright_0(String_t* value)
	{
		___m_copyright_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_copyright_0), (void*)value);
	}
};


// System.Reflection.AssemblyDescriptionAttribute
struct AssemblyDescriptionAttribute_tF4460CCB289F6E2F71841792BBC7E6907DF612B3  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Reflection.AssemblyDescriptionAttribute::m_description
	String_t* ___m_description_0;

public:
	inline static int32_t get_offset_of_m_description_0() { return static_cast<int32_t>(offsetof(AssemblyDescriptionAttribute_tF4460CCB289F6E2F71841792BBC7E6907DF612B3, ___m_description_0)); }
	inline String_t* get_m_description_0() const { return ___m_description_0; }
	inline String_t** get_address_of_m_description_0() { return &___m_description_0; }
	inline void set_m_description_0(String_t* value)
	{
		___m_description_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_description_0), (void*)value);
	}
};


// System.Reflection.AssemblyFileVersionAttribute
struct AssemblyFileVersionAttribute_tCC1036D0566155DC5688D9230EF3C07D82A1896F  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Reflection.AssemblyFileVersionAttribute::_version
	String_t* ____version_0;

public:
	inline static int32_t get_offset_of__version_0() { return static_cast<int32_t>(offsetof(AssemblyFileVersionAttribute_tCC1036D0566155DC5688D9230EF3C07D82A1896F, ____version_0)); }
	inline String_t* get__version_0() const { return ____version_0; }
	inline String_t** get_address_of__version_0() { return &____version_0; }
	inline void set__version_0(String_t* value)
	{
		____version_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____version_0), (void*)value);
	}
};


// System.Reflection.AssemblyProductAttribute
struct AssemblyProductAttribute_t6BB0E0F76C752E14A4C26B4D1E230019068601CA  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Reflection.AssemblyProductAttribute::m_product
	String_t* ___m_product_0;

public:
	inline static int32_t get_offset_of_m_product_0() { return static_cast<int32_t>(offsetof(AssemblyProductAttribute_t6BB0E0F76C752E14A4C26B4D1E230019068601CA, ___m_product_0)); }
	inline String_t* get_m_product_0() const { return ___m_product_0; }
	inline String_t** get_address_of_m_product_0() { return &___m_product_0; }
	inline void set_m_product_0(String_t* value)
	{
		___m_product_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_product_0), (void*)value);
	}
};


// System.Reflection.AssemblyTitleAttribute
struct AssemblyTitleAttribute_tABB894D0792C7F307694CC796C8AE5D6A20382E7  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Reflection.AssemblyTitleAttribute::m_title
	String_t* ___m_title_0;

public:
	inline static int32_t get_offset_of_m_title_0() { return static_cast<int32_t>(offsetof(AssemblyTitleAttribute_tABB894D0792C7F307694CC796C8AE5D6A20382E7, ___m_title_0)); }
	inline String_t* get_m_title_0() const { return ___m_title_0; }
	inline String_t** get_address_of_m_title_0() { return &___m_title_0; }
	inline void set_m_title_0(String_t* value)
	{
		___m_title_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_title_0), (void*)value);
	}
};


// System.Reflection.AssemblyTrademarkAttribute
struct AssemblyTrademarkAttribute_t0602679435F8EBECC5DDB55CFE3A7A4A4CA2B5E2  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Reflection.AssemblyTrademarkAttribute::m_trademark
	String_t* ___m_trademark_0;

public:
	inline static int32_t get_offset_of_m_trademark_0() { return static_cast<int32_t>(offsetof(AssemblyTrademarkAttribute_t0602679435F8EBECC5DDB55CFE3A7A4A4CA2B5E2, ___m_trademark_0)); }
	inline String_t* get_m_trademark_0() const { return ___m_trademark_0; }
	inline String_t** get_address_of_m_trademark_0() { return &___m_trademark_0; }
	inline void set_m_trademark_0(String_t* value)
	{
		___m_trademark_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_trademark_0), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.CLSCompliantAttribute
struct CLSCompliantAttribute_tA28EF6D4ADBD3C5C429DE9A70DD1E927C8906249  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Boolean System.CLSCompliantAttribute::m_compliant
	bool ___m_compliant_0;

public:
	inline static int32_t get_offset_of_m_compliant_0() { return static_cast<int32_t>(offsetof(CLSCompliantAttribute_tA28EF6D4ADBD3C5C429DE9A70DD1E927C8906249, ___m_compliant_0)); }
	inline bool get_m_compliant_0() const { return ___m_compliant_0; }
	inline bool* get_address_of_m_compliant_0() { return &___m_compliant_0; }
	inline void set_m_compliant_0(bool value)
	{
		___m_compliant_0 = value;
	}
};


// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
struct CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Int32 System.Runtime.CompilerServices.CompilationRelaxationsAttribute::m_relaxations
	int32_t ___m_relaxations_0;

public:
	inline static int32_t get_offset_of_m_relaxations_0() { return static_cast<int32_t>(offsetof(CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF, ___m_relaxations_0)); }
	inline int32_t get_m_relaxations_0() const { return ___m_relaxations_0; }
	inline int32_t* get_address_of_m_relaxations_0() { return &___m_relaxations_0; }
	inline void set_m_relaxations_0(int32_t value)
	{
		___m_relaxations_0 = value;
	}
};


// System.Runtime.CompilerServices.CompilerGeneratedAttribute
struct CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Reflection.DefaultMemberAttribute
struct DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Reflection.DefaultMemberAttribute::m_memberName
	String_t* ___m_memberName_0;

public:
	inline static int32_t get_offset_of_m_memberName_0() { return static_cast<int32_t>(offsetof(DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5, ___m_memberName_0)); }
	inline String_t* get_m_memberName_0() const { return ___m_memberName_0; }
	inline String_t** get_address_of_m_memberName_0() { return &___m_memberName_0; }
	inline void set_m_memberName_0(String_t* value)
	{
		___m_memberName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_memberName_0), (void*)value);
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.FlagsAttribute
struct FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Runtime.InteropServices.GuidAttribute
struct GuidAttribute_tBB494B31270577CCD589ABBB159C18CDAE20D063  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Runtime.InteropServices.GuidAttribute::_val
	String_t* ____val_0;

public:
	inline static int32_t get_offset_of__val_0() { return static_cast<int32_t>(offsetof(GuidAttribute_tBB494B31270577CCD589ABBB159C18CDAE20D063, ____val_0)); }
	inline String_t* get__val_0() const { return ____val_0; }
	inline String_t** get_address_of__val_0() { return &____val_0; }
	inline void set__val_0(String_t* value)
	{
		____val_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____val_0), (void*)value);
	}
};


// System.ParamArrayAttribute
struct ParamArrayAttribute_t9DCEB4CDDB8EDDB1124171D4C51FA6069EEA5C5F  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
struct RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Boolean System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::m_wrapNonExceptionThrows
	bool ___m_wrapNonExceptionThrows_0;

public:
	inline static int32_t get_offset_of_m_wrapNonExceptionThrows_0() { return static_cast<int32_t>(offsetof(RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80, ___m_wrapNonExceptionThrows_0)); }
	inline bool get_m_wrapNonExceptionThrows_0() const { return ___m_wrapNonExceptionThrows_0; }
	inline bool* get_address_of_m_wrapNonExceptionThrows_0() { return &___m_wrapNonExceptionThrows_0; }
	inline void set_m_wrapNonExceptionThrows_0(bool value)
	{
		___m_wrapNonExceptionThrows_0 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// System.Diagnostics.DebuggableAttribute/DebuggingModes
struct DebuggingModes_t279D5B9C012ABA935887CB73C5A63A1F46AF08A8 
{
public:
	// System.Int32 System.Diagnostics.DebuggableAttribute/DebuggingModes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DebuggingModes_t279D5B9C012ABA935887CB73C5A63A1F46AF08A8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Diagnostics.DebuggableAttribute
struct DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Diagnostics.DebuggableAttribute/DebuggingModes System.Diagnostics.DebuggableAttribute::m_debuggingModes
	int32_t ___m_debuggingModes_0;

public:
	inline static int32_t get_offset_of_m_debuggingModes_0() { return static_cast<int32_t>(offsetof(DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B, ___m_debuggingModes_0)); }
	inline int32_t get_m_debuggingModes_0() const { return ___m_debuggingModes_0; }
	inline int32_t* get_address_of_m_debuggingModes_0() { return &___m_debuggingModes_0; }
	inline void set_m_debuggingModes_0(int32_t value)
	{
		___m_debuggingModes_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Void System.CLSCompliantAttribute::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CLSCompliantAttribute__ctor_m340EDA4DA5E45506AD631FE84241ADFB6B3F0270 (CLSCompliantAttribute_tA28EF6D4ADBD3C5C429DE9A70DD1E927C8906249 * __this, bool ___isCompliant0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.GuidAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GuidAttribute__ctor_mCCEF3938DF601B23B5791CEE8F7AF05C98B6AFEA (GuidAttribute_tBB494B31270577CCD589ABBB159C18CDAE20D063 * __this, String_t* ___guid0, const RuntimeMethod* method);
// System.Void System.Reflection.AssemblyTrademarkAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssemblyTrademarkAttribute__ctor_m6FBD5AAE48F00120043AD8BECF2586896CFB6C02 (AssemblyTrademarkAttribute_t0602679435F8EBECC5DDB55CFE3A7A4A4CA2B5E2 * __this, String_t* ___trademark0, const RuntimeMethod* method);
// System.Void System.Reflection.AssemblyCopyrightAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssemblyCopyrightAttribute__ctor_mB0B5F5C1A7A8B172289CC694E2711F07A37CE3F3 (AssemblyCopyrightAttribute_tA6A09319EF50B48D962810032000DEE7B12904EC * __this, String_t* ___copyright0, const RuntimeMethod* method);
// System.Void System.Reflection.AssemblyProductAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssemblyProductAttribute__ctor_m26DF1EBC1C86E7DA4786C66B44123899BE8DBCB8 (AssemblyProductAttribute_t6BB0E0F76C752E14A4C26B4D1E230019068601CA * __this, String_t* ___product0, const RuntimeMethod* method);
// System.Void System.Reflection.AssemblyCompanyAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssemblyCompanyAttribute__ctor_m435C9FEC405646617645636E67860598A0C46FF0 (AssemblyCompanyAttribute_t642AAB097D7DEAAB623BEBE4664327E9B01D1DE4 * __this, String_t* ___company0, const RuntimeMethod* method);
// System.Void System.Reflection.AssemblyDescriptionAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssemblyDescriptionAttribute__ctor_m3A0BD500FF352A67235FBA499FBA58EFF15B1F25 (AssemblyDescriptionAttribute_tF4460CCB289F6E2F71841792BBC7E6907DF612B3 * __this, String_t* ___description0, const RuntimeMethod* method);
// System.Void System.Reflection.AssemblyTitleAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssemblyTitleAttribute__ctor_mE239F206B3B369C48AE1F3B4211688778FE99E8D (AssemblyTitleAttribute_tABB894D0792C7F307694CC796C8AE5D6A20382E7 * __this, String_t* ___title0, const RuntimeMethod* method);
// System.Void System.Diagnostics.DebuggableAttribute::.ctor(System.Diagnostics.DebuggableAttribute/DebuggingModes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebuggableAttribute__ctor_m7FF445C8435494A4847123A668D889E692E55550 (DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B * __this, int32_t ___modes0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute__ctor_m551DDF1438CE97A984571949723F30F44CF7317C (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::set_WrapNonExceptionThrows(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.CompilationRelaxationsAttribute::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompilationRelaxationsAttribute__ctor_mAC3079EBC4EEAB474EED8208EF95DB39C922333B (CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF * __this, int32_t ___relaxations0, const RuntimeMethod* method);
// System.Void System.Reflection.AssemblyFileVersionAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssemblyFileVersionAttribute__ctor_mF855AEBC51CB72F4FF913499256741AE57B0F13D (AssemblyFileVersionAttribute_tCC1036D0566155DC5688D9230EF3C07D82A1896F * __this, String_t* ___version0, const RuntimeMethod* method);
// System.Void System.Reflection.DefaultMemberAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultMemberAttribute__ctor_mA025B6F5B3A9292696E01108027840C8DFF7F4D7 (DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5 * __this, String_t* ___memberName0, const RuntimeMethod* method);
// System.Void System.FlagsAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlagsAttribute__ctor_mE8DCBA1BE0E6B0424FEF5E5F249733CF6A0E1229 (FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.CompilerGeneratedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35 (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * __this, const RuntimeMethod* method);
// System.Void System.ParamArrayAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParamArrayAttribute__ctor_mCC72AFF718185BA7B87FD8D9471F1274400C5719 (ParamArrayAttribute_t9DCEB4CDDB8EDDB1124171D4C51FA6069EEA5C5F * __this, const RuntimeMethod* method);
static void zxing_unity_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CLSCompliantAttribute_tA28EF6D4ADBD3C5C429DE9A70DD1E927C8906249 * tmp = (CLSCompliantAttribute_tA28EF6D4ADBD3C5C429DE9A70DD1E927C8906249 *)cache->attributes[0];
		CLSCompliantAttribute__ctor_m340EDA4DA5E45506AD631FE84241ADFB6B3F0270(tmp, true, NULL);
	}
	{
		GuidAttribute_tBB494B31270577CCD589ABBB159C18CDAE20D063 * tmp = (GuidAttribute_tBB494B31270577CCD589ABBB159C18CDAE20D063 *)cache->attributes[1];
		GuidAttribute__ctor_mCCEF3938DF601B23B5791CEE8F7AF05C98B6AFEA(tmp, il2cpp_codegen_string_new_wrapper("\x45\x43\x45\x33\x41\x42\x37\x34\x2D\x39\x44\x44\x31\x2D\x34\x43\x46\x42\x2D\x39\x44\x34\x38\x2D\x46\x43\x42\x46\x42\x33\x30\x45\x30\x36\x44\x36"), NULL);
	}
	{
		AssemblyTrademarkAttribute_t0602679435F8EBECC5DDB55CFE3A7A4A4CA2B5E2 * tmp = (AssemblyTrademarkAttribute_t0602679435F8EBECC5DDB55CFE3A7A4A4CA2B5E2 *)cache->attributes[2];
		AssemblyTrademarkAttribute__ctor_m6FBD5AAE48F00120043AD8BECF2586896CFB6C02(tmp, il2cpp_codegen_string_new_wrapper(""), NULL);
	}
	{
		AssemblyCopyrightAttribute_tA6A09319EF50B48D962810032000DEE7B12904EC * tmp = (AssemblyCopyrightAttribute_tA6A09319EF50B48D962810032000DEE7B12904EC *)cache->attributes[3];
		AssemblyCopyrightAttribute__ctor_mB0B5F5C1A7A8B172289CC694E2711F07A37CE3F3(tmp, il2cpp_codegen_string_new_wrapper("\x43\x6F\x70\x79\x72\x69\x67\x68\x74\x20\xC2\xA9\x20\x32\x30\x31\x32"), NULL);
	}
	{
		AssemblyProductAttribute_t6BB0E0F76C752E14A4C26B4D1E230019068601CA * tmp = (AssemblyProductAttribute_t6BB0E0F76C752E14A4C26B4D1E230019068601CA *)cache->attributes[4];
		AssemblyProductAttribute__ctor_m26DF1EBC1C86E7DA4786C66B44123899BE8DBCB8(tmp, il2cpp_codegen_string_new_wrapper("\x5A\x58\x69\x6E\x67\x2E\x4E\x65\x74"), NULL);
	}
	{
		AssemblyCompanyAttribute_t642AAB097D7DEAAB623BEBE4664327E9B01D1DE4 * tmp = (AssemblyCompanyAttribute_t642AAB097D7DEAAB623BEBE4664327E9B01D1DE4 *)cache->attributes[5];
		AssemblyCompanyAttribute__ctor_m435C9FEC405646617645636E67860598A0C46FF0(tmp, il2cpp_codegen_string_new_wrapper("\x5A\x58\x69\x6E\x67\x2E\x4E\x65\x74\x20\x44\x65\x76\x65\x6C\x6F\x70\x6D\x65\x6E\x74"), NULL);
	}
	{
		AssemblyDescriptionAttribute_tF4460CCB289F6E2F71841792BBC7E6907DF612B3 * tmp = (AssemblyDescriptionAttribute_tF4460CCB289F6E2F71841792BBC7E6907DF612B3 *)cache->attributes[6];
		AssemblyDescriptionAttribute__ctor_m3A0BD500FF352A67235FBA499FBA58EFF15B1F25(tmp, il2cpp_codegen_string_new_wrapper("\x70\x6F\x72\x74\x20\x6F\x66\x20\x74\x68\x65\x20\x6A\x61\x76\x61\x20\x62\x61\x73\x65\x64\x20\x62\x61\x72\x63\x6F\x64\x65\x20\x73\x63\x61\x6E\x6E\x69\x6E\x67\x20\x6C\x69\x62\x72\x61\x72\x79\x20\x66\x6F\x72\x20\x2E\x6E\x65\x74\x20\x28\x6A\x61\x76\x61\x20\x7A\x78\x69\x6E\x67\x20\x30\x38\x2E\x31\x32\x2E\x32\x30\x32\x31\x20\x31\x36\x3A\x31\x31\x3A\x30\x34\x29"), NULL);
	}
	{
		AssemblyTitleAttribute_tABB894D0792C7F307694CC796C8AE5D6A20382E7 * tmp = (AssemblyTitleAttribute_tABB894D0792C7F307694CC796C8AE5D6A20382E7 *)cache->attributes[7];
		AssemblyTitleAttribute__ctor_mE239F206B3B369C48AE1F3B4211688778FE99E8D(tmp, il2cpp_codegen_string_new_wrapper("\x7A\x78\x69\x6E\x67\x2E\x6E\x65\x74\x20\x66\x6F\x72\x20\x2E\x6E\x65\x74\x20\x33\x2E\x35\x20\x61\x6E\x64\x20\x75\x6E\x69\x74\x79\x20\x28\x77\x2F\x6F\x20\x53\x79\x73\x74\x65\x6D\x2E\x44\x72\x61\x77\x69\x6E\x67\x29"), NULL);
	}
	{
		DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B * tmp = (DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B *)cache->attributes[8];
		DebuggableAttribute__ctor_m7FF445C8435494A4847123A668D889E692E55550(tmp, 2LL, NULL);
	}
	{
		RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * tmp = (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 *)cache->attributes[9];
		RuntimeCompatibilityAttribute__ctor_m551DDF1438CE97A984571949723F30F44CF7317C(tmp, NULL);
		RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline(tmp, true, NULL);
	}
	{
		CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF * tmp = (CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF *)cache->attributes[10];
		CompilationRelaxationsAttribute__ctor_mAC3079EBC4EEAB474EED8208EF95DB39C922333B(tmp, 8LL, NULL);
	}
	{
		AssemblyFileVersionAttribute_tCC1036D0566155DC5688D9230EF3C07D82A1896F * tmp = (AssemblyFileVersionAttribute_tCC1036D0566155DC5688D9230EF3C07D82A1896F *)cache->attributes[11];
		AssemblyFileVersionAttribute__ctor_mF855AEBC51CB72F4FF913499256741AE57B0F13D(tmp, il2cpp_codegen_string_new_wrapper("\x30\x2E\x31\x36\x2E\x38\x2E\x30"), NULL);
	}
}
static void DigitContainer_tF84501CBD85A7A63C10598FD9061BD88D3665D17_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5 * tmp = (DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5 *)cache->attributes[0];
		DefaultMemberAttribute__ctor_mA025B6F5B3A9292696E01108027840C8DFF7F4D7(tmp, il2cpp_codegen_string_new_wrapper("\x49\x74\x65\x6D"), NULL);
	}
}
static void DigitContainer_t50C731888338FE97335D5C9E6BDCAF01A9843BC0_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5 * tmp = (DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5 *)cache->attributes[0];
		DefaultMemberAttribute__ctor_mA025B6F5B3A9292696E01108027840C8DFF7F4D7(tmp, il2cpp_codegen_string_new_wrapper("\x49\x74\x65\x6D"), NULL);
	}
}
static void BarcodeFormat_t2544A294A6148C2B73E7C7F0AB5B6E5B8C22598A_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36 * tmp = (FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36 *)cache->attributes[0];
		FlagsAttribute__ctor_mE8DCBA1BE0E6B0424FEF5E5F249733CF6A0E1229(tmp, NULL);
	}
}
static void BarcodeReader_tEA542E949AA77CF7C0E0DBA0FDE6AF312501B483_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CLSCompliantAttribute_tA28EF6D4ADBD3C5C429DE9A70DD1E927C8906249 * tmp = (CLSCompliantAttribute_tA28EF6D4ADBD3C5C429DE9A70DD1E927C8906249 *)cache->attributes[0];
		CLSCompliantAttribute__ctor_m340EDA4DA5E45506AD631FE84241ADFB6B3F0270(tmp, false, NULL);
	}
}
static void U3CU3Ec_t3E3E7F318F4760076A40D35A3CF594B73233D815_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BarcodeReaderGeneric_t54B047361034AA8EF7B236C3D79FC3629A9B6DD4_CustomAttributesCacheGenerator_ResultFound(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BarcodeReaderGeneric_t54B047361034AA8EF7B236C3D79FC3629A9B6DD4_CustomAttributesCacheGenerator_U3CAutoRotateU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BarcodeReaderGeneric_t54B047361034AA8EF7B236C3D79FC3629A9B6DD4_CustomAttributesCacheGenerator_BarcodeReaderGeneric_get_AutoRotate_mF31DD670E7EDCC55B01582B835EDA3E01B4BCF1C(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BarcodeReaderGeneric_t54B047361034AA8EF7B236C3D79FC3629A9B6DD4_CustomAttributesCacheGenerator_BarcodeReaderGeneric_U3Cget_OptionsU3Eb__8_0_m56E1D7731279A89BF86A010762EE555F25B13240(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CU3Ec_t9C480924125C6CC1EC2ECE391F1425F43A43B42A_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IBarcodeReader_t02DF49DEE8B2D9573343E8001DBA606D02164B7F_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CLSCompliantAttribute_tA28EF6D4ADBD3C5C429DE9A70DD1E927C8906249 * tmp = (CLSCompliantAttribute_tA28EF6D4ADBD3C5C429DE9A70DD1E927C8906249 *)cache->attributes[0];
		CLSCompliantAttribute__ctor_m340EDA4DA5E45506AD631FE84241ADFB6B3F0270(tmp, false, NULL);
	}
}
static void IBarcodeReader_t02DF49DEE8B2D9573343E8001DBA606D02164B7F_CustomAttributesCacheGenerator_IBarcodeReader_Decode_m9AD39D8A974A9353A90992B6A3FFB0C131E108F6(CustomAttributesCache* cache)
{
	{
		CLSCompliantAttribute_tA28EF6D4ADBD3C5C429DE9A70DD1E927C8906249 * tmp = (CLSCompliantAttribute_tA28EF6D4ADBD3C5C429DE9A70DD1E927C8906249 *)cache->attributes[0];
		CLSCompliantAttribute__ctor_m340EDA4DA5E45506AD631FE84241ADFB6B3F0270(tmp, false, NULL);
	}
}
static void Result_t5F9FAADABC4B826C06B527EBC60C13BE0BF3C56C_CustomAttributesCacheGenerator_U3CTextU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Result_t5F9FAADABC4B826C06B527EBC60C13BE0BF3C56C_CustomAttributesCacheGenerator_U3CRawBytesU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Result_t5F9FAADABC4B826C06B527EBC60C13BE0BF3C56C_CustomAttributesCacheGenerator_U3CResultPointsU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Result_t5F9FAADABC4B826C06B527EBC60C13BE0BF3C56C_CustomAttributesCacheGenerator_U3CBarcodeFormatU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Result_t5F9FAADABC4B826C06B527EBC60C13BE0BF3C56C_CustomAttributesCacheGenerator_U3CResultMetadataU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Result_t5F9FAADABC4B826C06B527EBC60C13BE0BF3C56C_CustomAttributesCacheGenerator_U3CTimestampU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Result_t5F9FAADABC4B826C06B527EBC60C13BE0BF3C56C_CustomAttributesCacheGenerator_U3CNumBitsU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Result_t5F9FAADABC4B826C06B527EBC60C13BE0BF3C56C_CustomAttributesCacheGenerator_Result_get_Text_m76CDDCAE7CDC310478D17BE2DA1D870D43EBFFEE(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Result_t5F9FAADABC4B826C06B527EBC60C13BE0BF3C56C_CustomAttributesCacheGenerator_Result_set_Text_m0787D6779B9D7C7ACE90DE45845A5A118CA272C5(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Result_t5F9FAADABC4B826C06B527EBC60C13BE0BF3C56C_CustomAttributesCacheGenerator_Result_get_RawBytes_m88A2C19AC1B4C864E786856903D7315A8F236825(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Result_t5F9FAADABC4B826C06B527EBC60C13BE0BF3C56C_CustomAttributesCacheGenerator_Result_set_RawBytes_mBF21B968C1DA3624356B8D4B4FC3B3B75028ABA2(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Result_t5F9FAADABC4B826C06B527EBC60C13BE0BF3C56C_CustomAttributesCacheGenerator_Result_get_ResultPoints_mA9459ACA87A8035D3E75CB2D793E3059BAA3F453(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Result_t5F9FAADABC4B826C06B527EBC60C13BE0BF3C56C_CustomAttributesCacheGenerator_Result_set_ResultPoints_m8BF00B5CC39F58878A8B4BEA2BBD007A8D0050F5(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Result_t5F9FAADABC4B826C06B527EBC60C13BE0BF3C56C_CustomAttributesCacheGenerator_Result_get_BarcodeFormat_m385ED046CC8746A8B5A135A751DE0B45B171FAD9(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Result_t5F9FAADABC4B826C06B527EBC60C13BE0BF3C56C_CustomAttributesCacheGenerator_Result_set_BarcodeFormat_mDEFA6F970EE7CEECBFEBFF3C191C033FC109CCB5(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Result_t5F9FAADABC4B826C06B527EBC60C13BE0BF3C56C_CustomAttributesCacheGenerator_Result_get_ResultMetadata_mC6F98151CD2E39E1ADC109A5EA899DA69A5BB3E6(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Result_t5F9FAADABC4B826C06B527EBC60C13BE0BF3C56C_CustomAttributesCacheGenerator_Result_set_ResultMetadata_mC9A0EB8D7B33CDB3A95053A191BAF457D5C92D3C(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Result_t5F9FAADABC4B826C06B527EBC60C13BE0BF3C56C_CustomAttributesCacheGenerator_Result_set_Timestamp_mDA0F77F9E808D1274009E81482CE020254AF522A(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Result_t5F9FAADABC4B826C06B527EBC60C13BE0BF3C56C_CustomAttributesCacheGenerator_Result_set_NumBits_mFE3210F321AF2C0DA62B3D2A9DA7F904BBA30AA0(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Color32LuminanceSource_t4DF3A94A905C31E3E118041127E4C39F2F0CF898_CustomAttributesCacheGenerator_Color32LuminanceSource__ctor_m881C474B3782058C32A86E92A960E1045BED194E(CustomAttributesCache* cache)
{
	{
		CLSCompliantAttribute_tA28EF6D4ADBD3C5C429DE9A70DD1E927C8906249 * tmp = (CLSCompliantAttribute_tA28EF6D4ADBD3C5C429DE9A70DD1E927C8906249 *)cache->attributes[0];
		CLSCompliantAttribute__ctor_m340EDA4DA5E45506AD631FE84241ADFB6B3F0270(tmp, false, NULL);
	}
}
static void Color32LuminanceSource_t4DF3A94A905C31E3E118041127E4C39F2F0CF898_CustomAttributesCacheGenerator_Color32LuminanceSource_SetPixels_mCFE425859BE40D0288E027B3E9FAAE9900579BF8(CustomAttributesCache* cache)
{
	{
		CLSCompliantAttribute_tA28EF6D4ADBD3C5C429DE9A70DD1E927C8906249 * tmp = (CLSCompliantAttribute_tA28EF6D4ADBD3C5C429DE9A70DD1E927C8906249 *)cache->attributes[0];
		CLSCompliantAttribute__ctor_m340EDA4DA5E45506AD631FE84241ADFB6B3F0270(tmp, false, NULL);
	}
}
static void U3CU3Ec_t2AE300DF17E6F95B5FDE3E8E86537DE5DC044F54_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Mode_t295E71C45382DB54E3C2FDE89B76FF3140300545_CustomAttributesCacheGenerator_U3CNameU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Mode_t295E71C45382DB54E3C2FDE89B76FF3140300545_CustomAttributesCacheGenerator_U3CBitsU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Mode_t295E71C45382DB54E3C2FDE89B76FF3140300545_CustomAttributesCacheGenerator_Mode_get_Name_m55CBC9FDBCE00DCE11A5F149204FA0CB436B2EC3(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Mode_t295E71C45382DB54E3C2FDE89B76FF3140300545_CustomAttributesCacheGenerator_Mode_set_Name_m43D135B6B63366F69FD2F3CA08B4872C987DDF91(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Mode_t295E71C45382DB54E3C2FDE89B76FF3140300545_CustomAttributesCacheGenerator_Mode_set_Bits_m48A07AF5CD5831F496FF88AE8757A48F3841378D(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Version_tAAE1FF0C7BC9E8EF7A41F6C0CB4E5CDF2461B8EE_CustomAttributesCacheGenerator_Version__ctor_m0A9D06FE0DE5B4742904A4F96CC301C59F134BF0____ecBlocks2(CustomAttributesCache* cache)
{
	{
		ParamArrayAttribute_t9DCEB4CDDB8EDDB1124171D4C51FA6069EEA5C5F * tmp = (ParamArrayAttribute_t9DCEB4CDDB8EDDB1124171D4C51FA6069EEA5C5F *)cache->attributes[0];
		ParamArrayAttribute__ctor_mCC72AFF718185BA7B87FD8D9471F1274400C5719(tmp, NULL);
	}
}
static void ECBlocks_t77C16AD393F680BE93AD01344E32228D99DE873A_CustomAttributesCacheGenerator_ECBlocks__ctor_m15B484185F4FCC853872DA366D6806A1CE99803D____ecBlocks1(CustomAttributesCache* cache)
{
	{
		ParamArrayAttribute_t9DCEB4CDDB8EDDB1124171D4C51FA6069EEA5C5F * tmp = (ParamArrayAttribute_t9DCEB4CDDB8EDDB1124171D4C51FA6069EEA5C5F *)cache->attributes[0];
		ParamArrayAttribute__ctor_mCC72AFF718185BA7B87FD8D9471F1274400C5719(tmp, NULL);
	}
}
static void PDF417ResultMetadata_tF819078F25032D06C1A3D921C3D47AD3E6EA4C0C_CustomAttributesCacheGenerator_U3CSegmentIndexU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PDF417ResultMetadata_tF819078F25032D06C1A3D921C3D47AD3E6EA4C0C_CustomAttributesCacheGenerator_U3CFileIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PDF417ResultMetadata_tF819078F25032D06C1A3D921C3D47AD3E6EA4C0C_CustomAttributesCacheGenerator_U3CIsLastSegmentU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PDF417ResultMetadata_tF819078F25032D06C1A3D921C3D47AD3E6EA4C0C_CustomAttributesCacheGenerator_U3CSegmentCountU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PDF417ResultMetadata_tF819078F25032D06C1A3D921C3D47AD3E6EA4C0C_CustomAttributesCacheGenerator_U3CSenderU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PDF417ResultMetadata_tF819078F25032D06C1A3D921C3D47AD3E6EA4C0C_CustomAttributesCacheGenerator_U3CAddresseeU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PDF417ResultMetadata_tF819078F25032D06C1A3D921C3D47AD3E6EA4C0C_CustomAttributesCacheGenerator_U3CFileNameU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PDF417ResultMetadata_tF819078F25032D06C1A3D921C3D47AD3E6EA4C0C_CustomAttributesCacheGenerator_U3CFileSizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PDF417ResultMetadata_tF819078F25032D06C1A3D921C3D47AD3E6EA4C0C_CustomAttributesCacheGenerator_U3CChecksumU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PDF417ResultMetadata_tF819078F25032D06C1A3D921C3D47AD3E6EA4C0C_CustomAttributesCacheGenerator_U3CTimestampU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PDF417ResultMetadata_tF819078F25032D06C1A3D921C3D47AD3E6EA4C0C_CustomAttributesCacheGenerator_PDF417ResultMetadata_get_SegmentIndex_mB34698035D3AD70804D97F159D8D6352FC582CA7(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PDF417ResultMetadata_tF819078F25032D06C1A3D921C3D47AD3E6EA4C0C_CustomAttributesCacheGenerator_PDF417ResultMetadata_set_SegmentIndex_m7D3CF0018C8CA3F4E4014714AF446876051131F6(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PDF417ResultMetadata_tF819078F25032D06C1A3D921C3D47AD3E6EA4C0C_CustomAttributesCacheGenerator_PDF417ResultMetadata_get_FileId_mA89AB33C350F4E2092F499BD52D53CADF73A2EC2(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PDF417ResultMetadata_tF819078F25032D06C1A3D921C3D47AD3E6EA4C0C_CustomAttributesCacheGenerator_PDF417ResultMetadata_set_FileId_m638D90013FAA8933F0FC3CD06448089F52AEAF8A(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PDF417ResultMetadata_tF819078F25032D06C1A3D921C3D47AD3E6EA4C0C_CustomAttributesCacheGenerator_PDF417ResultMetadata_get_IsLastSegment_m210998BEED78A9420E6990F32355E8AEEFF022F8(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PDF417ResultMetadata_tF819078F25032D06C1A3D921C3D47AD3E6EA4C0C_CustomAttributesCacheGenerator_PDF417ResultMetadata_set_IsLastSegment_m76D5DBB165E5CBB539CCB180481F2927559E386A(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PDF417ResultMetadata_tF819078F25032D06C1A3D921C3D47AD3E6EA4C0C_CustomAttributesCacheGenerator_PDF417ResultMetadata_get_SegmentCount_m20C45F2C3DED43AEB5AEE2C032B2D8AAA966BB0C(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PDF417ResultMetadata_tF819078F25032D06C1A3D921C3D47AD3E6EA4C0C_CustomAttributesCacheGenerator_PDF417ResultMetadata_set_SegmentCount_m9CA6BA5919F79F2A3F13295B764E9823859DEA8C(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PDF417ResultMetadata_tF819078F25032D06C1A3D921C3D47AD3E6EA4C0C_CustomAttributesCacheGenerator_PDF417ResultMetadata_get_Sender_m1D1DE6B0A3D49AD1E361B45B3EE025A258E9F1BC(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PDF417ResultMetadata_tF819078F25032D06C1A3D921C3D47AD3E6EA4C0C_CustomAttributesCacheGenerator_PDF417ResultMetadata_set_Sender_m64154DBAF8CED6E3F4FFE54BF7D5AEA6F22D6155(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PDF417ResultMetadata_tF819078F25032D06C1A3D921C3D47AD3E6EA4C0C_CustomAttributesCacheGenerator_PDF417ResultMetadata_get_Addressee_mFA460026D4ECA0C63BD712F7EFCB61FE479AB104(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PDF417ResultMetadata_tF819078F25032D06C1A3D921C3D47AD3E6EA4C0C_CustomAttributesCacheGenerator_PDF417ResultMetadata_set_Addressee_mA36AFF3EBD0655324B223BACAABD4898A616315A(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PDF417ResultMetadata_tF819078F25032D06C1A3D921C3D47AD3E6EA4C0C_CustomAttributesCacheGenerator_PDF417ResultMetadata_get_FileName_m1E1A853B06760C86F9F79D8231EDCA9AE235112A(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PDF417ResultMetadata_tF819078F25032D06C1A3D921C3D47AD3E6EA4C0C_CustomAttributesCacheGenerator_PDF417ResultMetadata_set_FileName_m7BA619EC3F70400B8C01379E6A0DFAA6A5823E80(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PDF417ResultMetadata_tF819078F25032D06C1A3D921C3D47AD3E6EA4C0C_CustomAttributesCacheGenerator_PDF417ResultMetadata_get_FileSize_m3E7683684E992CEC6DB5E1A5FAF1F65B5E94AA33(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PDF417ResultMetadata_tF819078F25032D06C1A3D921C3D47AD3E6EA4C0C_CustomAttributesCacheGenerator_PDF417ResultMetadata_set_FileSize_mDEE6ABC170A62FE590DD852757239187A4D94973(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PDF417ResultMetadata_tF819078F25032D06C1A3D921C3D47AD3E6EA4C0C_CustomAttributesCacheGenerator_PDF417ResultMetadata_get_Checksum_m47505AEC61FAB76D6857094D993CA031A64451BE(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PDF417ResultMetadata_tF819078F25032D06C1A3D921C3D47AD3E6EA4C0C_CustomAttributesCacheGenerator_PDF417ResultMetadata_set_Checksum_m19564122E479E742B1C92EE56215DCE31A1E4200(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PDF417ResultMetadata_tF819078F25032D06C1A3D921C3D47AD3E6EA4C0C_CustomAttributesCacheGenerator_PDF417ResultMetadata_get_Timestamp_mED14540D0547A909BB2B98D308C6D43D98C9C66D(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PDF417ResultMetadata_tF819078F25032D06C1A3D921C3D47AD3E6EA4C0C_CustomAttributesCacheGenerator_PDF417ResultMetadata_set_Timestamp_mB136155F5300EED58BEB6B96D93717882ABBBF55(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BarcodeMetadata_tFFE5787D13615EC003D403976EE05A12473E183C_CustomAttributesCacheGenerator_U3CColumnCountU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BarcodeMetadata_tFFE5787D13615EC003D403976EE05A12473E183C_CustomAttributesCacheGenerator_U3CErrorCorrectionLevelU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BarcodeMetadata_tFFE5787D13615EC003D403976EE05A12473E183C_CustomAttributesCacheGenerator_U3CRowCountUpperU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BarcodeMetadata_tFFE5787D13615EC003D403976EE05A12473E183C_CustomAttributesCacheGenerator_U3CRowCountLowerU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BarcodeMetadata_tFFE5787D13615EC003D403976EE05A12473E183C_CustomAttributesCacheGenerator_U3CRowCountU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BarcodeMetadata_tFFE5787D13615EC003D403976EE05A12473E183C_CustomAttributesCacheGenerator_BarcodeMetadata_get_ColumnCount_m7AD8E7B0AD84396D5CDC1A063F8EF7428853D111(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BarcodeMetadata_tFFE5787D13615EC003D403976EE05A12473E183C_CustomAttributesCacheGenerator_BarcodeMetadata_set_ColumnCount_m5F0B4D5970BE52203E9CB0EFA4FF26F85C2512E6(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BarcodeMetadata_tFFE5787D13615EC003D403976EE05A12473E183C_CustomAttributesCacheGenerator_BarcodeMetadata_get_ErrorCorrectionLevel_m95833A2B8E125F7EE13383198866E864762164BC(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BarcodeMetadata_tFFE5787D13615EC003D403976EE05A12473E183C_CustomAttributesCacheGenerator_BarcodeMetadata_set_ErrorCorrectionLevel_m073802C5D4F3473AE5CA4DC1A16B2867DD47C6A7(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BarcodeMetadata_tFFE5787D13615EC003D403976EE05A12473E183C_CustomAttributesCacheGenerator_BarcodeMetadata_get_RowCountUpper_mD3BC775CF9AE70994A126E861F95B4E44CE80338(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BarcodeMetadata_tFFE5787D13615EC003D403976EE05A12473E183C_CustomAttributesCacheGenerator_BarcodeMetadata_set_RowCountUpper_m51A8A5CC6BDBC0BE494A8FD2B85F0B701846039A(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BarcodeMetadata_tFFE5787D13615EC003D403976EE05A12473E183C_CustomAttributesCacheGenerator_BarcodeMetadata_get_RowCountLower_m2786BD28818F6F7C766401F43B0642349659A394(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BarcodeMetadata_tFFE5787D13615EC003D403976EE05A12473E183C_CustomAttributesCacheGenerator_BarcodeMetadata_set_RowCountLower_mA656ADBD857E468B359EBC67CB789B6E24967782(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BarcodeMetadata_tFFE5787D13615EC003D403976EE05A12473E183C_CustomAttributesCacheGenerator_BarcodeMetadata_get_RowCount_mD487E4E1D829D730C0F31C21C7A925832B9982CC(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BarcodeMetadata_tFFE5787D13615EC003D403976EE05A12473E183C_CustomAttributesCacheGenerator_BarcodeMetadata_set_RowCount_mFCF5EB80076101003085CD6301D211A051627D4B(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BoundingBox_t4EB3D52A233D0AC0FD485A2E5E3E5C62E277D1A2_CustomAttributesCacheGenerator_U3CTopLeftU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BoundingBox_t4EB3D52A233D0AC0FD485A2E5E3E5C62E277D1A2_CustomAttributesCacheGenerator_U3CTopRightU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BoundingBox_t4EB3D52A233D0AC0FD485A2E5E3E5C62E277D1A2_CustomAttributesCacheGenerator_U3CBottomLeftU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BoundingBox_t4EB3D52A233D0AC0FD485A2E5E3E5C62E277D1A2_CustomAttributesCacheGenerator_U3CBottomRightU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BoundingBox_t4EB3D52A233D0AC0FD485A2E5E3E5C62E277D1A2_CustomAttributesCacheGenerator_U3CMinXU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BoundingBox_t4EB3D52A233D0AC0FD485A2E5E3E5C62E277D1A2_CustomAttributesCacheGenerator_U3CMaxXU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BoundingBox_t4EB3D52A233D0AC0FD485A2E5E3E5C62E277D1A2_CustomAttributesCacheGenerator_U3CMinYU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BoundingBox_t4EB3D52A233D0AC0FD485A2E5E3E5C62E277D1A2_CustomAttributesCacheGenerator_U3CMaxYU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BoundingBox_t4EB3D52A233D0AC0FD485A2E5E3E5C62E277D1A2_CustomAttributesCacheGenerator_BoundingBox_get_TopLeft_m1D56775ADE6BE531AA506F488030C8693F24303D(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BoundingBox_t4EB3D52A233D0AC0FD485A2E5E3E5C62E277D1A2_CustomAttributesCacheGenerator_BoundingBox_set_TopLeft_m89E0DE932492E3C8FD4C07B535E81B8F10AEE4CB(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BoundingBox_t4EB3D52A233D0AC0FD485A2E5E3E5C62E277D1A2_CustomAttributesCacheGenerator_BoundingBox_get_TopRight_m6288B9F11E4A879665ADD338C6528454DBE8B2CC(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BoundingBox_t4EB3D52A233D0AC0FD485A2E5E3E5C62E277D1A2_CustomAttributesCacheGenerator_BoundingBox_set_TopRight_m2C62D1F1F43569D80CDDDE61A492C1658BDB4762(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BoundingBox_t4EB3D52A233D0AC0FD485A2E5E3E5C62E277D1A2_CustomAttributesCacheGenerator_BoundingBox_get_BottomLeft_mE0899C4670B10F1B98CDB331288632A092864043(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BoundingBox_t4EB3D52A233D0AC0FD485A2E5E3E5C62E277D1A2_CustomAttributesCacheGenerator_BoundingBox_set_BottomLeft_mF93C53C17E0D0B16C2537D1465F75329C68F5D2C(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BoundingBox_t4EB3D52A233D0AC0FD485A2E5E3E5C62E277D1A2_CustomAttributesCacheGenerator_BoundingBox_get_BottomRight_mA995E37EEBA4DE64CE5984B4A71C525BB3AC8947(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BoundingBox_t4EB3D52A233D0AC0FD485A2E5E3E5C62E277D1A2_CustomAttributesCacheGenerator_BoundingBox_set_BottomRight_mAE4EE13F693D5F37491414FD0FAC9FD37796A89C(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BoundingBox_t4EB3D52A233D0AC0FD485A2E5E3E5C62E277D1A2_CustomAttributesCacheGenerator_BoundingBox_get_MinX_m9BBA655A1B0727CD925E8D16F5C1492649410317(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BoundingBox_t4EB3D52A233D0AC0FD485A2E5E3E5C62E277D1A2_CustomAttributesCacheGenerator_BoundingBox_set_MinX_m15FD0FCDC838ACF3748902065D8ED6CEF878C09F(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BoundingBox_t4EB3D52A233D0AC0FD485A2E5E3E5C62E277D1A2_CustomAttributesCacheGenerator_BoundingBox_get_MaxX_m9AE9CDC25A4BB54643B55815920069D77323AF26(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BoundingBox_t4EB3D52A233D0AC0FD485A2E5E3E5C62E277D1A2_CustomAttributesCacheGenerator_BoundingBox_set_MaxX_m29A8A43AA5CEC54ED34684DBD3E112123F808F05(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BoundingBox_t4EB3D52A233D0AC0FD485A2E5E3E5C62E277D1A2_CustomAttributesCacheGenerator_BoundingBox_get_MinY_mD0B7D6E754E7ECBE3CF604C43E107849FCC8ADFB(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BoundingBox_t4EB3D52A233D0AC0FD485A2E5E3E5C62E277D1A2_CustomAttributesCacheGenerator_BoundingBox_set_MinY_m7E57A22444F2718B428C8F99675840D8A71898DE(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BoundingBox_t4EB3D52A233D0AC0FD485A2E5E3E5C62E277D1A2_CustomAttributesCacheGenerator_BoundingBox_get_MaxY_m73CEC954ED89CF88CA457F68EC678C1A1BDADC58(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BoundingBox_t4EB3D52A233D0AC0FD485A2E5E3E5C62E277D1A2_CustomAttributesCacheGenerator_BoundingBox_set_MaxY_mA51494467B72148901EBBEF81DA032A4D32A5B15(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Codeword_tF748CCACAEA64E4D12DCBAD5D806DBE8D5307416_CustomAttributesCacheGenerator_U3CStartXU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Codeword_tF748CCACAEA64E4D12DCBAD5D806DBE8D5307416_CustomAttributesCacheGenerator_U3CEndXU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Codeword_tF748CCACAEA64E4D12DCBAD5D806DBE8D5307416_CustomAttributesCacheGenerator_U3CBucketU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Codeword_tF748CCACAEA64E4D12DCBAD5D806DBE8D5307416_CustomAttributesCacheGenerator_U3CValueU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Codeword_tF748CCACAEA64E4D12DCBAD5D806DBE8D5307416_CustomAttributesCacheGenerator_U3CRowNumberU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Codeword_tF748CCACAEA64E4D12DCBAD5D806DBE8D5307416_CustomAttributesCacheGenerator_Codeword_get_StartX_m616EE06C2DBD96E53A345F969A8C83394CDC33CD(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Codeword_tF748CCACAEA64E4D12DCBAD5D806DBE8D5307416_CustomAttributesCacheGenerator_Codeword_set_StartX_m8B1D31CCB5B090F6FC9591CC97C394A26512C0DB(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Codeword_tF748CCACAEA64E4D12DCBAD5D806DBE8D5307416_CustomAttributesCacheGenerator_Codeword_get_EndX_mDC3365EB1AF9CF2FACBA8FE20A131A7C0DB01A4F(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Codeword_tF748CCACAEA64E4D12DCBAD5D806DBE8D5307416_CustomAttributesCacheGenerator_Codeword_set_EndX_mC9B07309F5FA7D9DF03C08B37865DBB6F0CF7832(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Codeword_tF748CCACAEA64E4D12DCBAD5D806DBE8D5307416_CustomAttributesCacheGenerator_Codeword_get_Bucket_mC09F1E523EB9CCA8D3E64B49CAA8A8BB95856DD9(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Codeword_tF748CCACAEA64E4D12DCBAD5D806DBE8D5307416_CustomAttributesCacheGenerator_Codeword_set_Bucket_mC20FA26D8AD2349D242D72D94943065C6B8A654B(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Codeword_tF748CCACAEA64E4D12DCBAD5D806DBE8D5307416_CustomAttributesCacheGenerator_Codeword_get_Value_m85BB8E03B1D88A2232B005843692850273EED5A9(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Codeword_tF748CCACAEA64E4D12DCBAD5D806DBE8D5307416_CustomAttributesCacheGenerator_Codeword_set_Value_mCF54E454B722ECDFAA46C5EDF4DB6D2688706578(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Codeword_tF748CCACAEA64E4D12DCBAD5D806DBE8D5307416_CustomAttributesCacheGenerator_Codeword_get_RowNumber_m38234098F615E1D9A9C7C9882940CD1C64F8153E(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Codeword_tF748CCACAEA64E4D12DCBAD5D806DBE8D5307416_CustomAttributesCacheGenerator_Codeword_set_RowNumber_m8207256866CB12EEBBBC1436955AC012C958A78D(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DetectionResult_t89B116BFBDAC73D4092FA90A4674426220FF7256_CustomAttributesCacheGenerator_U3CMetadataU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DetectionResult_t89B116BFBDAC73D4092FA90A4674426220FF7256_CustomAttributesCacheGenerator_U3CDetectionResultColumnsU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DetectionResult_t89B116BFBDAC73D4092FA90A4674426220FF7256_CustomAttributesCacheGenerator_U3CBoxU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DetectionResult_t89B116BFBDAC73D4092FA90A4674426220FF7256_CustomAttributesCacheGenerator_U3CColumnCountU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DetectionResult_t89B116BFBDAC73D4092FA90A4674426220FF7256_CustomAttributesCacheGenerator_DetectionResult_get_Metadata_mC1AC22879297CD83169860DA0FE02F246042094F(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DetectionResult_t89B116BFBDAC73D4092FA90A4674426220FF7256_CustomAttributesCacheGenerator_DetectionResult_set_Metadata_mED904D02D9F3170AF14374CA140A986177527DA5(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DetectionResult_t89B116BFBDAC73D4092FA90A4674426220FF7256_CustomAttributesCacheGenerator_DetectionResult_get_DetectionResultColumns_m62DC4DAF73600F3FD7C8E441FEE1780CC96BE4E2(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DetectionResult_t89B116BFBDAC73D4092FA90A4674426220FF7256_CustomAttributesCacheGenerator_DetectionResult_set_DetectionResultColumns_mA125D162D4287AABAABCFDC18A264A82C1757257(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DetectionResult_t89B116BFBDAC73D4092FA90A4674426220FF7256_CustomAttributesCacheGenerator_DetectionResult_get_Box_m202AF0E109132F81649A91EB8CC6BBBDF3FFFEBF(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DetectionResult_t89B116BFBDAC73D4092FA90A4674426220FF7256_CustomAttributesCacheGenerator_DetectionResult_set_Box_mF76BEF39CDDD378AFCB29B588AC8063446E63ED5(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DetectionResult_t89B116BFBDAC73D4092FA90A4674426220FF7256_CustomAttributesCacheGenerator_DetectionResult_get_ColumnCount_m2CFF0C3F80668DCB230CF869AEF35246AA2E6377(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DetectionResult_t89B116BFBDAC73D4092FA90A4674426220FF7256_CustomAttributesCacheGenerator_DetectionResult_set_ColumnCount_m95458AB400ED2C9EE929180F5F485DD26DCFFFBB(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DetectionResultColumn_tBB67600AEDCB3384E23DAEC274225DCA9880DE74_CustomAttributesCacheGenerator_U3CBoxU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DetectionResultColumn_tBB67600AEDCB3384E23DAEC274225DCA9880DE74_CustomAttributesCacheGenerator_U3CCodewordsU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DetectionResultColumn_tBB67600AEDCB3384E23DAEC274225DCA9880DE74_CustomAttributesCacheGenerator_DetectionResultColumn_get_Box_mB68C79B67D3BC17DA40F7C54D2940E50553A855C(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DetectionResultColumn_tBB67600AEDCB3384E23DAEC274225DCA9880DE74_CustomAttributesCacheGenerator_DetectionResultColumn_set_Box_mD3967138A67695D8CF10D22AFE2A7D3549BFE2C4(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DetectionResultColumn_tBB67600AEDCB3384E23DAEC274225DCA9880DE74_CustomAttributesCacheGenerator_DetectionResultColumn_get_Codewords_mC0ABE4198D74CBEC6B41B3A0291BB28B40C70AA3(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DetectionResultColumn_tBB67600AEDCB3384E23DAEC274225DCA9880DE74_CustomAttributesCacheGenerator_DetectionResultColumn_set_Codewords_mB0A0EE0CEBD9E6F18D0F4E18CA0EBCF2CAE80FDD(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DetectionResultRowIndicatorColumn_t4FCC0F16D2C06107AA30C159B1B24E9A294157E8_CustomAttributesCacheGenerator_U3CIsLeftU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DetectionResultRowIndicatorColumn_t4FCC0F16D2C06107AA30C159B1B24E9A294157E8_CustomAttributesCacheGenerator_DetectionResultRowIndicatorColumn_get_IsLeft_m9EF6ADAB2BE25DA525AC1674C4A536D5CA48C611(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DetectionResultRowIndicatorColumn_t4FCC0F16D2C06107AA30C159B1B24E9A294157E8_CustomAttributesCacheGenerator_DetectionResultRowIndicatorColumn_set_IsLeft_m83C2A6ADFB516EEBABDD2B84C59718C7009A40D9(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PDF417DetectorResult_t2C2D71EF3BAF7CDBC1E8D99F2BFDD043FE03A363_CustomAttributesCacheGenerator_U3CBitsU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PDF417DetectorResult_t2C2D71EF3BAF7CDBC1E8D99F2BFDD043FE03A363_CustomAttributesCacheGenerator_U3CPointsU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PDF417DetectorResult_t2C2D71EF3BAF7CDBC1E8D99F2BFDD043FE03A363_CustomAttributesCacheGenerator_PDF417DetectorResult_get_Bits_m982A4305B3481EC5B46569142AC0608868B00EE3(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PDF417DetectorResult_t2C2D71EF3BAF7CDBC1E8D99F2BFDD043FE03A363_CustomAttributesCacheGenerator_PDF417DetectorResult_set_Bits_m7CD28C3D1B20A7F9D13A4B3F6505A38508FE0D2F(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PDF417DetectorResult_t2C2D71EF3BAF7CDBC1E8D99F2BFDD043FE03A363_CustomAttributesCacheGenerator_PDF417DetectorResult_get_Points_m76CBAA3720F8FDFA3B46F933622ABB9637D5A417(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PDF417DetectorResult_t2C2D71EF3BAF7CDBC1E8D99F2BFDD043FE03A363_CustomAttributesCacheGenerator_PDF417DetectorResult_set_Points_mD0BE2873FFDF0FA2C9DCE46F9683D92B31B2F6C0(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ModulusGF_t6E6B8C73AD6FD583B9480A16CC94D6789F8C73BF_CustomAttributesCacheGenerator_U3CZeroU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ModulusGF_t6E6B8C73AD6FD583B9480A16CC94D6789F8C73BF_CustomAttributesCacheGenerator_U3COneU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ModulusGF_t6E6B8C73AD6FD583B9480A16CC94D6789F8C73BF_CustomAttributesCacheGenerator_ModulusGF_get_Zero_m16BA66DAA48C7A31839DB986D49A0ED95765EC74(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ModulusGF_t6E6B8C73AD6FD583B9480A16CC94D6789F8C73BF_CustomAttributesCacheGenerator_ModulusGF_set_Zero_mAE0C0E383FE58D7EA8F56BE27B7F6F1916423181(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ModulusGF_t6E6B8C73AD6FD583B9480A16CC94D6789F8C73BF_CustomAttributesCacheGenerator_ModulusGF_get_One_mF51C281D84650D74E98C51AED8663E60B51E3539(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ModulusGF_t6E6B8C73AD6FD583B9480A16CC94D6789F8C73BF_CustomAttributesCacheGenerator_ModulusGF_set_One_m2ECE50B18A94A7FC1274CFCAE33D851541A8F4D7(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PixelInterval_t99980BE2D22617E1B6B24AEFA4FE89966563E7B0_CustomAttributesCacheGenerator_U3CColorU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PixelInterval_t99980BE2D22617E1B6B24AEFA4FE89966563E7B0_CustomAttributesCacheGenerator_U3CLengthU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PixelInterval_t99980BE2D22617E1B6B24AEFA4FE89966563E7B0_CustomAttributesCacheGenerator_U3CSimilarU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PixelInterval_t99980BE2D22617E1B6B24AEFA4FE89966563E7B0_CustomAttributesCacheGenerator_U3CSmallU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PixelInterval_t99980BE2D22617E1B6B24AEFA4FE89966563E7B0_CustomAttributesCacheGenerator_U3CLargeU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PixelInterval_t99980BE2D22617E1B6B24AEFA4FE89966563E7B0_CustomAttributesCacheGenerator_PixelInterval_get_Color_m8708BEB411769799ABDFC40347A32A77D1C3BDE9(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PixelInterval_t99980BE2D22617E1B6B24AEFA4FE89966563E7B0_CustomAttributesCacheGenerator_PixelInterval_set_Color_m8FAAAC43540503D22DAF36FDE5AC033EDD3BA0C9(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PixelInterval_t99980BE2D22617E1B6B24AEFA4FE89966563E7B0_CustomAttributesCacheGenerator_PixelInterval_get_Length_m8DB67D4086D8955C0341CFEB4BB28CE2ADAA4482(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PixelInterval_t99980BE2D22617E1B6B24AEFA4FE89966563E7B0_CustomAttributesCacheGenerator_PixelInterval_set_Length_m13EB2DAA4CCABA8F903CCF45047FDDEE03519E8C(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PixelInterval_t99980BE2D22617E1B6B24AEFA4FE89966563E7B0_CustomAttributesCacheGenerator_PixelInterval_get_Similar_mF60CF02997F01CFEAD3640191ECE0106EF927E1A(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PixelInterval_t99980BE2D22617E1B6B24AEFA4FE89966563E7B0_CustomAttributesCacheGenerator_PixelInterval_set_Similar_m63F18D273DA9C6EE440442B96F362A9469B27337(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PixelInterval_t99980BE2D22617E1B6B24AEFA4FE89966563E7B0_CustomAttributesCacheGenerator_PixelInterval_get_Small_mB863D272F2441A10369DC68E3C33B2EFAEC3D565(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PixelInterval_t99980BE2D22617E1B6B24AEFA4FE89966563E7B0_CustomAttributesCacheGenerator_PixelInterval_set_Small_m395DB7F4A42FC8CAC1BF81395455717A07CE8B85(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PixelInterval_t99980BE2D22617E1B6B24AEFA4FE89966563E7B0_CustomAttributesCacheGenerator_PixelInterval_get_Large_mBF1F1B57A8E80FA824E0A20198FE36B6F2C92258(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PixelInterval_t99980BE2D22617E1B6B24AEFA4FE89966563E7B0_CustomAttributesCacheGenerator_PixelInterval_set_Large_m00D6ED687EC3525B26D1E9854648ADBCFD870EB1(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DataCharacter_tA76B872C13B69E1DC53EBD34B49293A269392239_CustomAttributesCacheGenerator_U3CValueU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DataCharacter_tA76B872C13B69E1DC53EBD34B49293A269392239_CustomAttributesCacheGenerator_U3CChecksumPortionU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DataCharacter_tA76B872C13B69E1DC53EBD34B49293A269392239_CustomAttributesCacheGenerator_DataCharacter_get_Value_m7FFE714D7CC8D619564873D916F165B88BA99214(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DataCharacter_tA76B872C13B69E1DC53EBD34B49293A269392239_CustomAttributesCacheGenerator_DataCharacter_set_Value_mC6AF9578AA0C12A1D099F4B49640C497A828C135(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DataCharacter_tA76B872C13B69E1DC53EBD34B49293A269392239_CustomAttributesCacheGenerator_DataCharacter_get_ChecksumPortion_m215CDF0FC4761367BC13BC47408472196AFE0515(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DataCharacter_tA76B872C13B69E1DC53EBD34B49293A269392239_CustomAttributesCacheGenerator_DataCharacter_set_ChecksumPortion_mBBA1F0EA0C433CFAF501E3660684BE29F896BB95(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void FinderPattern_t31A9A7B1B1A2FD960A3D5132DF100E97A6DFC11B_CustomAttributesCacheGenerator_U3CValueU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void FinderPattern_t31A9A7B1B1A2FD960A3D5132DF100E97A6DFC11B_CustomAttributesCacheGenerator_U3CStartEndU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void FinderPattern_t31A9A7B1B1A2FD960A3D5132DF100E97A6DFC11B_CustomAttributesCacheGenerator_U3CResultPointsU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void FinderPattern_t31A9A7B1B1A2FD960A3D5132DF100E97A6DFC11B_CustomAttributesCacheGenerator_FinderPattern_get_Value_m852B92F7EC8973832C7E37D7613539488CCAAEE1(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void FinderPattern_t31A9A7B1B1A2FD960A3D5132DF100E97A6DFC11B_CustomAttributesCacheGenerator_FinderPattern_set_Value_mA9F2279D9A3FBD0D2C0BB4E263A707FD3AA96B3F(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void FinderPattern_t31A9A7B1B1A2FD960A3D5132DF100E97A6DFC11B_CustomAttributesCacheGenerator_FinderPattern_get_StartEnd_mC2627DE3208F0D07EE6B3232348D8E418CA5B1A1(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void FinderPattern_t31A9A7B1B1A2FD960A3D5132DF100E97A6DFC11B_CustomAttributesCacheGenerator_FinderPattern_set_StartEnd_mAF3A86C3999E169C163B26234F2E365D6D10E05F(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void FinderPattern_t31A9A7B1B1A2FD960A3D5132DF100E97A6DFC11B_CustomAttributesCacheGenerator_FinderPattern_get_ResultPoints_mE4F2A82288E521D0060BDACEF3B93427E4AAD15F(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void FinderPattern_t31A9A7B1B1A2FD960A3D5132DF100E97A6DFC11B_CustomAttributesCacheGenerator_FinderPattern_set_ResultPoints_m14EE9FE73BC619DA9AE7AAFC83A380DA74A82BE6(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Pair_t741C0356FF339CF37E2BFEAFC0C729AF9583ED98_CustomAttributesCacheGenerator_U3CFinderPatternU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Pair_t741C0356FF339CF37E2BFEAFC0C729AF9583ED98_CustomAttributesCacheGenerator_U3CCountU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Pair_t741C0356FF339CF37E2BFEAFC0C729AF9583ED98_CustomAttributesCacheGenerator_Pair_get_FinderPattern_mFD874D712D4F8F95C082264A4E3AEECFF376B487(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Pair_t741C0356FF339CF37E2BFEAFC0C729AF9583ED98_CustomAttributesCacheGenerator_Pair_set_FinderPattern_mC5E35083999DD8A2C3A108B84C4797D328B33B9F(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Pair_t741C0356FF339CF37E2BFEAFC0C729AF9583ED98_CustomAttributesCacheGenerator_Pair_get_Count_mABD9399214DDE984DEF191F8DB2B4C526FF897E7(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Pair_t741C0356FF339CF37E2BFEAFC0C729AF9583ED98_CustomAttributesCacheGenerator_Pair_set_Count_m6584A0EEA9D20843325B3563E55DB27F4257CE1F(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ExpandedPair_t958AFF28DA7AC1446C4EDF55F03CE35613401A97_CustomAttributesCacheGenerator_U3CLeftCharU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ExpandedPair_t958AFF28DA7AC1446C4EDF55F03CE35613401A97_CustomAttributesCacheGenerator_U3CRightCharU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ExpandedPair_t958AFF28DA7AC1446C4EDF55F03CE35613401A97_CustomAttributesCacheGenerator_U3CFinderPatternU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ExpandedPair_t958AFF28DA7AC1446C4EDF55F03CE35613401A97_CustomAttributesCacheGenerator_ExpandedPair_get_LeftChar_m0DD0286048B68105D48C28881C68BA014C974DFA(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ExpandedPair_t958AFF28DA7AC1446C4EDF55F03CE35613401A97_CustomAttributesCacheGenerator_ExpandedPair_set_LeftChar_mE10107AE8A1CB9421D1A985D7F4ED439B1117E25(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ExpandedPair_t958AFF28DA7AC1446C4EDF55F03CE35613401A97_CustomAttributesCacheGenerator_ExpandedPair_get_RightChar_m5E513E6701CC198F7A38DBEE7495EE7DE9CC3039(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ExpandedPair_t958AFF28DA7AC1446C4EDF55F03CE35613401A97_CustomAttributesCacheGenerator_ExpandedPair_set_RightChar_m1BE538427C4793FAFC99326B0D6D2C110A5D1D6A(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ExpandedPair_t958AFF28DA7AC1446C4EDF55F03CE35613401A97_CustomAttributesCacheGenerator_ExpandedPair_get_FinderPattern_mA4C7BD8D8048A4D4F7C314E6C3FAF793A36567C8(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ExpandedPair_t958AFF28DA7AC1446C4EDF55F03CE35613401A97_CustomAttributesCacheGenerator_ExpandedPair_set_FinderPattern_m1EEDE7EA6DD7E4C80F88FFCC3C7CCD3666A265FA(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ExpandedRow_tF28264F6E0472ACA214AD0DA7FC7FA4541E646EA_CustomAttributesCacheGenerator_U3CPairsU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ExpandedRow_tF28264F6E0472ACA214AD0DA7FC7FA4541E646EA_CustomAttributesCacheGenerator_U3CRowNumberU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ExpandedRow_tF28264F6E0472ACA214AD0DA7FC7FA4541E646EA_CustomAttributesCacheGenerator_ExpandedRow_get_Pairs_mA24E0F8C6CE9B9D630D38A53D73E676589AE62FE(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ExpandedRow_tF28264F6E0472ACA214AD0DA7FC7FA4541E646EA_CustomAttributesCacheGenerator_ExpandedRow_set_Pairs_mB5D70462F0645C83D9EF43AF1803E7EC9EE181B3(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ExpandedRow_tF28264F6E0472ACA214AD0DA7FC7FA4541E646EA_CustomAttributesCacheGenerator_ExpandedRow_get_RowNumber_m809177D35CD6B84621472F930BE26092FAD702F5(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ExpandedRow_tF28264F6E0472ACA214AD0DA7FC7FA4541E646EA_CustomAttributesCacheGenerator_ExpandedRow_set_RowNumber_m2C42F011532BCC37F085364D221F0590BF3858DC(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DecodedObject_t537D4CFA94FAF61CD6DC3BBC6C1DDAF4725C094D_CustomAttributesCacheGenerator_U3CNewPositionU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DecodedObject_t537D4CFA94FAF61CD6DC3BBC6C1DDAF4725C094D_CustomAttributesCacheGenerator_DecodedObject_get_NewPosition_mC2E997B208EE9F880F5044E736C8355141BEBDA5(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DecodedObject_t537D4CFA94FAF61CD6DC3BBC6C1DDAF4725C094D_CustomAttributesCacheGenerator_DecodedObject_set_NewPosition_m3F94148A720BB104A2BBBA7FCFDCAB1ABA039957(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BitArray_t4E33745E535700123E839CBA617A95B893A8514A_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5 * tmp = (DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5 *)cache->attributes[0];
		DefaultMemberAttribute__ctor_mA025B6F5B3A9292696E01108027840C8DFF7F4D7(tmp, il2cpp_codegen_string_new_wrapper("\x49\x74\x65\x6D"), NULL);
	}
}
static void BitMatrix_t271707D1BECA21927E57761EE5ABBCB3CD615C8B_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5 * tmp = (DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5 *)cache->attributes[0];
		DefaultMemberAttribute__ctor_mA025B6F5B3A9292696E01108027840C8DFF7F4D7(tmp, il2cpp_codegen_string_new_wrapper("\x49\x74\x65\x6D"), NULL);
	}
}
static void DecoderResult_t1CAC762E272C436712087AAE5325E7C8A2E4B1DA_CustomAttributesCacheGenerator_U3CRawBytesU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DecoderResult_t1CAC762E272C436712087AAE5325E7C8A2E4B1DA_CustomAttributesCacheGenerator_U3CNumBitsU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DecoderResult_t1CAC762E272C436712087AAE5325E7C8A2E4B1DA_CustomAttributesCacheGenerator_U3CTextU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DecoderResult_t1CAC762E272C436712087AAE5325E7C8A2E4B1DA_CustomAttributesCacheGenerator_U3CByteSegmentsU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DecoderResult_t1CAC762E272C436712087AAE5325E7C8A2E4B1DA_CustomAttributesCacheGenerator_U3CECLevelU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DecoderResult_t1CAC762E272C436712087AAE5325E7C8A2E4B1DA_CustomAttributesCacheGenerator_U3CErrorsCorrectedU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DecoderResult_t1CAC762E272C436712087AAE5325E7C8A2E4B1DA_CustomAttributesCacheGenerator_U3CStructuredAppendSequenceNumberU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DecoderResult_t1CAC762E272C436712087AAE5325E7C8A2E4B1DA_CustomAttributesCacheGenerator_U3CErasuresU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DecoderResult_t1CAC762E272C436712087AAE5325E7C8A2E4B1DA_CustomAttributesCacheGenerator_U3CStructuredAppendParityU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DecoderResult_t1CAC762E272C436712087AAE5325E7C8A2E4B1DA_CustomAttributesCacheGenerator_U3COtherU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DecoderResult_t1CAC762E272C436712087AAE5325E7C8A2E4B1DA_CustomAttributesCacheGenerator_U3CSymbologyModifierU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DecoderResult_t1CAC762E272C436712087AAE5325E7C8A2E4B1DA_CustomAttributesCacheGenerator_DecoderResult_get_RawBytes_mF7FA690AE86183F4428EBADA2EEBCBF28FEBEADE(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DecoderResult_t1CAC762E272C436712087AAE5325E7C8A2E4B1DA_CustomAttributesCacheGenerator_DecoderResult_set_RawBytes_mEFD8C760341F88C314EE6EE10678A8801AC8D2C0(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DecoderResult_t1CAC762E272C436712087AAE5325E7C8A2E4B1DA_CustomAttributesCacheGenerator_DecoderResult_get_NumBits_mAE4F51BB964E5659D83DB7D69085606D66EC1DF1(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DecoderResult_t1CAC762E272C436712087AAE5325E7C8A2E4B1DA_CustomAttributesCacheGenerator_DecoderResult_set_NumBits_m43F728385B4D4CBB33DFC5398B3A86D0FA5134A1(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DecoderResult_t1CAC762E272C436712087AAE5325E7C8A2E4B1DA_CustomAttributesCacheGenerator_DecoderResult_get_Text_m9AED75CD91C6E7E3BD952E7A76361B511C3B402C(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DecoderResult_t1CAC762E272C436712087AAE5325E7C8A2E4B1DA_CustomAttributesCacheGenerator_DecoderResult_set_Text_m7B4C4FE653A6AFAA06BBF195DAAA2F3CAC965B73(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DecoderResult_t1CAC762E272C436712087AAE5325E7C8A2E4B1DA_CustomAttributesCacheGenerator_DecoderResult_get_ByteSegments_mB4A9F290CAC25AE57BE2BED6E903FBEF3B30243F(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DecoderResult_t1CAC762E272C436712087AAE5325E7C8A2E4B1DA_CustomAttributesCacheGenerator_DecoderResult_set_ByteSegments_mFC5F9FC29F14E41EE2BE193E87D4F03DE35847CD(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DecoderResult_t1CAC762E272C436712087AAE5325E7C8A2E4B1DA_CustomAttributesCacheGenerator_DecoderResult_get_ECLevel_mBA68B487B47116DE6CB510DF44BFD819EE864033(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DecoderResult_t1CAC762E272C436712087AAE5325E7C8A2E4B1DA_CustomAttributesCacheGenerator_DecoderResult_set_ECLevel_m447FEFBCA0746728AB2FB578245D1403FF146857(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DecoderResult_t1CAC762E272C436712087AAE5325E7C8A2E4B1DA_CustomAttributesCacheGenerator_DecoderResult_set_ErrorsCorrected_m1617059DEB029E4B71D382BA7E434C5EAE4FF20A(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DecoderResult_t1CAC762E272C436712087AAE5325E7C8A2E4B1DA_CustomAttributesCacheGenerator_DecoderResult_get_StructuredAppendSequenceNumber_m9F8414944E85835F2ACC378C0732B030A9E588FA(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DecoderResult_t1CAC762E272C436712087AAE5325E7C8A2E4B1DA_CustomAttributesCacheGenerator_DecoderResult_set_StructuredAppendSequenceNumber_m61B945E545676EDC7E13E9B16530177AE5F63AAF(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DecoderResult_t1CAC762E272C436712087AAE5325E7C8A2E4B1DA_CustomAttributesCacheGenerator_DecoderResult_set_Erasures_mE8749CC95E2649914426913FE18013604AB056AE(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DecoderResult_t1CAC762E272C436712087AAE5325E7C8A2E4B1DA_CustomAttributesCacheGenerator_DecoderResult_get_StructuredAppendParity_m7C0FDE7BA33749117E384A4DEE167B1353F8577C(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DecoderResult_t1CAC762E272C436712087AAE5325E7C8A2E4B1DA_CustomAttributesCacheGenerator_DecoderResult_set_StructuredAppendParity_m89A3C187CA49C134A7F634D852C40D6304FE346B(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DecoderResult_t1CAC762E272C436712087AAE5325E7C8A2E4B1DA_CustomAttributesCacheGenerator_DecoderResult_get_Other_mDE327F5BB01BA3DF7E831F1A1917496033D59BEE(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DecoderResult_t1CAC762E272C436712087AAE5325E7C8A2E4B1DA_CustomAttributesCacheGenerator_DecoderResult_set_Other_m337C20BDA0CD2D17C8CE14D3069A648802BC298E(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DecoderResult_t1CAC762E272C436712087AAE5325E7C8A2E4B1DA_CustomAttributesCacheGenerator_DecoderResult_get_SymbologyModifier_m754AECA6ECAD6A54302F799851F217E61E2F44E5(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DecoderResult_t1CAC762E272C436712087AAE5325E7C8A2E4B1DA_CustomAttributesCacheGenerator_DecoderResult_set_SymbologyModifier_mD6980F56E54A53422C6F49249934578F195961CF(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DecodingOptions_tEAA3E91644D65B18CC7341B46AE894075533074F_CustomAttributesCacheGenerator_U3CHintsU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DecodingOptions_tEAA3E91644D65B18CC7341B46AE894075533074F_CustomAttributesCacheGenerator_ValueChanged(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DecodingOptions_tEAA3E91644D65B18CC7341B46AE894075533074F_CustomAttributesCacheGenerator_DecodingOptions_get_Hints_m1959D55199A7A244C47D926C64B36C8E215DC153(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DecodingOptions_tEAA3E91644D65B18CC7341B46AE894075533074F_CustomAttributesCacheGenerator_DecodingOptions_set_Hints_m6980A360300AAA446309415BCCC303BFA8FA03B7(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DecodingOptions_tEAA3E91644D65B18CC7341B46AE894075533074F_CustomAttributesCacheGenerator_DecodingOptions_add_ValueChanged_m5AC9E066F66F36F91FC0ECFC59A34781D5D439D5(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DecodingOptions_tEAA3E91644D65B18CC7341B46AE894075533074F_CustomAttributesCacheGenerator_DecodingOptions_remove_ValueChanged_m1A9DCF62466C21A279CAF59D158C4F96BF9FDB41(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DecodingOptions_tEAA3E91644D65B18CC7341B46AE894075533074F_CustomAttributesCacheGenerator_DecodingOptions_U3C_ctorU3Eb__46_0_m003851246DD3D2088D6DC10C4AD93FB41D08F5BC(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ChangeNotifyDictionary_2_t5712305817400B6A06E92291E1454CD94208D4E3_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5 * tmp = (DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5 *)cache->attributes[0];
		DefaultMemberAttribute__ctor_mA025B6F5B3A9292696E01108027840C8DFF7F4D7(tmp, il2cpp_codegen_string_new_wrapper("\x49\x74\x65\x6D"), NULL);
	}
}
static void ChangeNotifyDictionary_2_t5712305817400B6A06E92291E1454CD94208D4E3_CustomAttributesCacheGenerator_ValueChanged(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ChangeNotifyDictionary_2_t5712305817400B6A06E92291E1454CD94208D4E3_CustomAttributesCacheGenerator_ChangeNotifyDictionary_2_add_ValueChanged_m36DF2EA8249369582E19E9D63A212F8FDC9A2298(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ChangeNotifyDictionary_2_t5712305817400B6A06E92291E1454CD94208D4E3_CustomAttributesCacheGenerator_ChangeNotifyDictionary_2_remove_ValueChanged_m580E80BCC89A8420752432F271910B7C02F02051(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DetectorResult_tED40CA49A9C9E96F892F38E5B0D76770E075D81D_CustomAttributesCacheGenerator_U3CBitsU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DetectorResult_tED40CA49A9C9E96F892F38E5B0D76770E075D81D_CustomAttributesCacheGenerator_U3CPointsU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DetectorResult_tED40CA49A9C9E96F892F38E5B0D76770E075D81D_CustomAttributesCacheGenerator_DetectorResult_get_Bits_m885E433A11A13ABEAD3F04E4E1DF74F6CFC097CA(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DetectorResult_tED40CA49A9C9E96F892F38E5B0D76770E075D81D_CustomAttributesCacheGenerator_DetectorResult_set_Bits_m098EC2951D69BD5DC096274A24800185B5C2C211(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DetectorResult_tED40CA49A9C9E96F892F38E5B0D76770E075D81D_CustomAttributesCacheGenerator_DetectorResult_get_Points_m98E6699846FCA7D0A8D00CAD7A9C03A7D796A712(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DetectorResult_tED40CA49A9C9E96F892F38E5B0D76770E075D81D_CustomAttributesCacheGenerator_DetectorResult_set_Points_m61791A3B1B86E2752E597C50FDE0D50A3CCA0FC5(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ECI_tBE692321BCD31A4C3F277BEA39D55BCD73299095_CustomAttributesCacheGenerator_U3CValueU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ECI_tBE692321BCD31A4C3F277BEA39D55BCD73299095_CustomAttributesCacheGenerator_ECI_set_Value_m447A0ADA94F80C968545239339A03EA1027A1B9C(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void AztecResultMetadata_t3B8DA7D3E5D16BB415913F6E7387236DD3C5D0FB_CustomAttributesCacheGenerator_U3CCompactU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void AztecResultMetadata_t3B8DA7D3E5D16BB415913F6E7387236DD3C5D0FB_CustomAttributesCacheGenerator_U3CDatablocksU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void AztecResultMetadata_t3B8DA7D3E5D16BB415913F6E7387236DD3C5D0FB_CustomAttributesCacheGenerator_U3CLayersU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void AztecResultMetadata_t3B8DA7D3E5D16BB415913F6E7387236DD3C5D0FB_CustomAttributesCacheGenerator_AztecResultMetadata_get_Compact_m292F978F6ED24B5D42F11D15C9E10931012C3F6A(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void AztecResultMetadata_t3B8DA7D3E5D16BB415913F6E7387236DD3C5D0FB_CustomAttributesCacheGenerator_AztecResultMetadata_set_Compact_m9E2B03DED424282855FA366F8F2F941F181FDF65(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void AztecResultMetadata_t3B8DA7D3E5D16BB415913F6E7387236DD3C5D0FB_CustomAttributesCacheGenerator_AztecResultMetadata_get_Datablocks_m6050AF0BE2134F6FFE861CFD540E6BCA25BA869D(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void AztecResultMetadata_t3B8DA7D3E5D16BB415913F6E7387236DD3C5D0FB_CustomAttributesCacheGenerator_AztecResultMetadata_set_Datablocks_m268DC44E2F03FB61F79DE6EB545FF60DF3185865(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void AztecResultMetadata_t3B8DA7D3E5D16BB415913F6E7387236DD3C5D0FB_CustomAttributesCacheGenerator_AztecResultMetadata_get_Layers_mA75EE605308FAEFA901CD8BA6B9113749279BEF4(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void AztecResultMetadata_t3B8DA7D3E5D16BB415913F6E7387236DD3C5D0FB_CustomAttributesCacheGenerator_AztecResultMetadata_set_Layers_m9346A8DCCB2B8F75DDD1CE5083D1FBA127C79B63(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void AztecDetectorResult_t55555880874319C051A55841C383CFD05B6D95B3_CustomAttributesCacheGenerator_U3CCompactU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void AztecDetectorResult_t55555880874319C051A55841C383CFD05B6D95B3_CustomAttributesCacheGenerator_U3CNbDatablocksU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void AztecDetectorResult_t55555880874319C051A55841C383CFD05B6D95B3_CustomAttributesCacheGenerator_U3CNbLayersU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void AztecDetectorResult_t55555880874319C051A55841C383CFD05B6D95B3_CustomAttributesCacheGenerator_AztecDetectorResult_get_Compact_m6EEB82B48E9427FF4BF0802AA964B478B81D7E24(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void AztecDetectorResult_t55555880874319C051A55841C383CFD05B6D95B3_CustomAttributesCacheGenerator_AztecDetectorResult_set_Compact_mF4D733A81E81036B7C77AED6E1D725270278A626(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void AztecDetectorResult_t55555880874319C051A55841C383CFD05B6D95B3_CustomAttributesCacheGenerator_AztecDetectorResult_get_NbDatablocks_m96CD2F5F7E575E781A4B3C87496B9B54F7346DE6(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void AztecDetectorResult_t55555880874319C051A55841C383CFD05B6D95B3_CustomAttributesCacheGenerator_AztecDetectorResult_set_NbDatablocks_mFC955E5CEFE4AD39ECCD4CC7C48A503C30E9EB49(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void AztecDetectorResult_t55555880874319C051A55841C383CFD05B6D95B3_CustomAttributesCacheGenerator_AztecDetectorResult_get_NbLayers_mFE74EC9DE0FD796013BE36AC35A03196CDCD279C(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void AztecDetectorResult_t55555880874319C051A55841C383CFD05B6D95B3_CustomAttributesCacheGenerator_AztecDetectorResult_set_NbLayers_mD623304B6B4DE66982010099E10FA61D1A12B991(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Point_tF2A77FD35758540F7C9FBD96819DB1CCAFA02AD2_CustomAttributesCacheGenerator_U3CXU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Point_tF2A77FD35758540F7C9FBD96819DB1CCAFA02AD2_CustomAttributesCacheGenerator_U3CYU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Point_tF2A77FD35758540F7C9FBD96819DB1CCAFA02AD2_CustomAttributesCacheGenerator_Point_get_X_mB5773A034271B65F35B0EBE8D176EBED31BDD77F(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Point_tF2A77FD35758540F7C9FBD96819DB1CCAFA02AD2_CustomAttributesCacheGenerator_Point_set_X_m54B94C67233FD5F97B7E0306D871EF782BD0F1B0(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Point_tF2A77FD35758540F7C9FBD96819DB1CCAFA02AD2_CustomAttributesCacheGenerator_Point_get_Y_mBD8045EA82B318BB7CF10C0254034BC1DB371005(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Point_tF2A77FD35758540F7C9FBD96819DB1CCAFA02AD2_CustomAttributesCacheGenerator_Point_set_Y_mE3DBCC44273FA7B7767B4ECC39A617F073DF116D(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CPrivateImplementationDetailsU3E_tC7E485DD3FEF27C2261B36BEBCC8CF402F08578A_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
IL2CPP_EXTERN_C const CustomAttributesCacheGenerator g_zxing_unity_AttributeGenerators[];
const CustomAttributesCacheGenerator g_zxing_unity_AttributeGenerators[290] = 
{
	DigitContainer_tF84501CBD85A7A63C10598FD9061BD88D3665D17_CustomAttributesCacheGenerator,
	DigitContainer_t50C731888338FE97335D5C9E6BDCAF01A9843BC0_CustomAttributesCacheGenerator,
	BarcodeFormat_t2544A294A6148C2B73E7C7F0AB5B6E5B8C22598A_CustomAttributesCacheGenerator,
	BarcodeReader_tEA542E949AA77CF7C0E0DBA0FDE6AF312501B483_CustomAttributesCacheGenerator,
	U3CU3Ec_t3E3E7F318F4760076A40D35A3CF594B73233D815_CustomAttributesCacheGenerator,
	U3CU3Ec_t9C480924125C6CC1EC2ECE391F1425F43A43B42A_CustomAttributesCacheGenerator,
	IBarcodeReader_t02DF49DEE8B2D9573343E8001DBA606D02164B7F_CustomAttributesCacheGenerator,
	U3CU3Ec_t2AE300DF17E6F95B5FDE3E8E86537DE5DC044F54_CustomAttributesCacheGenerator,
	BitArray_t4E33745E535700123E839CBA617A95B893A8514A_CustomAttributesCacheGenerator,
	BitMatrix_t271707D1BECA21927E57761EE5ABBCB3CD615C8B_CustomAttributesCacheGenerator,
	ChangeNotifyDictionary_2_t5712305817400B6A06E92291E1454CD94208D4E3_CustomAttributesCacheGenerator,
	U3CPrivateImplementationDetailsU3E_tC7E485DD3FEF27C2261B36BEBCC8CF402F08578A_CustomAttributesCacheGenerator,
	BarcodeReaderGeneric_t54B047361034AA8EF7B236C3D79FC3629A9B6DD4_CustomAttributesCacheGenerator_ResultFound,
	BarcodeReaderGeneric_t54B047361034AA8EF7B236C3D79FC3629A9B6DD4_CustomAttributesCacheGenerator_U3CAutoRotateU3Ek__BackingField,
	Result_t5F9FAADABC4B826C06B527EBC60C13BE0BF3C56C_CustomAttributesCacheGenerator_U3CTextU3Ek__BackingField,
	Result_t5F9FAADABC4B826C06B527EBC60C13BE0BF3C56C_CustomAttributesCacheGenerator_U3CRawBytesU3Ek__BackingField,
	Result_t5F9FAADABC4B826C06B527EBC60C13BE0BF3C56C_CustomAttributesCacheGenerator_U3CResultPointsU3Ek__BackingField,
	Result_t5F9FAADABC4B826C06B527EBC60C13BE0BF3C56C_CustomAttributesCacheGenerator_U3CBarcodeFormatU3Ek__BackingField,
	Result_t5F9FAADABC4B826C06B527EBC60C13BE0BF3C56C_CustomAttributesCacheGenerator_U3CResultMetadataU3Ek__BackingField,
	Result_t5F9FAADABC4B826C06B527EBC60C13BE0BF3C56C_CustomAttributesCacheGenerator_U3CTimestampU3Ek__BackingField,
	Result_t5F9FAADABC4B826C06B527EBC60C13BE0BF3C56C_CustomAttributesCacheGenerator_U3CNumBitsU3Ek__BackingField,
	Mode_t295E71C45382DB54E3C2FDE89B76FF3140300545_CustomAttributesCacheGenerator_U3CNameU3Ek__BackingField,
	Mode_t295E71C45382DB54E3C2FDE89B76FF3140300545_CustomAttributesCacheGenerator_U3CBitsU3Ek__BackingField,
	PDF417ResultMetadata_tF819078F25032D06C1A3D921C3D47AD3E6EA4C0C_CustomAttributesCacheGenerator_U3CSegmentIndexU3Ek__BackingField,
	PDF417ResultMetadata_tF819078F25032D06C1A3D921C3D47AD3E6EA4C0C_CustomAttributesCacheGenerator_U3CFileIdU3Ek__BackingField,
	PDF417ResultMetadata_tF819078F25032D06C1A3D921C3D47AD3E6EA4C0C_CustomAttributesCacheGenerator_U3CIsLastSegmentU3Ek__BackingField,
	PDF417ResultMetadata_tF819078F25032D06C1A3D921C3D47AD3E6EA4C0C_CustomAttributesCacheGenerator_U3CSegmentCountU3Ek__BackingField,
	PDF417ResultMetadata_tF819078F25032D06C1A3D921C3D47AD3E6EA4C0C_CustomAttributesCacheGenerator_U3CSenderU3Ek__BackingField,
	PDF417ResultMetadata_tF819078F25032D06C1A3D921C3D47AD3E6EA4C0C_CustomAttributesCacheGenerator_U3CAddresseeU3Ek__BackingField,
	PDF417ResultMetadata_tF819078F25032D06C1A3D921C3D47AD3E6EA4C0C_CustomAttributesCacheGenerator_U3CFileNameU3Ek__BackingField,
	PDF417ResultMetadata_tF819078F25032D06C1A3D921C3D47AD3E6EA4C0C_CustomAttributesCacheGenerator_U3CFileSizeU3Ek__BackingField,
	PDF417ResultMetadata_tF819078F25032D06C1A3D921C3D47AD3E6EA4C0C_CustomAttributesCacheGenerator_U3CChecksumU3Ek__BackingField,
	PDF417ResultMetadata_tF819078F25032D06C1A3D921C3D47AD3E6EA4C0C_CustomAttributesCacheGenerator_U3CTimestampU3Ek__BackingField,
	BarcodeMetadata_tFFE5787D13615EC003D403976EE05A12473E183C_CustomAttributesCacheGenerator_U3CColumnCountU3Ek__BackingField,
	BarcodeMetadata_tFFE5787D13615EC003D403976EE05A12473E183C_CustomAttributesCacheGenerator_U3CErrorCorrectionLevelU3Ek__BackingField,
	BarcodeMetadata_tFFE5787D13615EC003D403976EE05A12473E183C_CustomAttributesCacheGenerator_U3CRowCountUpperU3Ek__BackingField,
	BarcodeMetadata_tFFE5787D13615EC003D403976EE05A12473E183C_CustomAttributesCacheGenerator_U3CRowCountLowerU3Ek__BackingField,
	BarcodeMetadata_tFFE5787D13615EC003D403976EE05A12473E183C_CustomAttributesCacheGenerator_U3CRowCountU3Ek__BackingField,
	BoundingBox_t4EB3D52A233D0AC0FD485A2E5E3E5C62E277D1A2_CustomAttributesCacheGenerator_U3CTopLeftU3Ek__BackingField,
	BoundingBox_t4EB3D52A233D0AC0FD485A2E5E3E5C62E277D1A2_CustomAttributesCacheGenerator_U3CTopRightU3Ek__BackingField,
	BoundingBox_t4EB3D52A233D0AC0FD485A2E5E3E5C62E277D1A2_CustomAttributesCacheGenerator_U3CBottomLeftU3Ek__BackingField,
	BoundingBox_t4EB3D52A233D0AC0FD485A2E5E3E5C62E277D1A2_CustomAttributesCacheGenerator_U3CBottomRightU3Ek__BackingField,
	BoundingBox_t4EB3D52A233D0AC0FD485A2E5E3E5C62E277D1A2_CustomAttributesCacheGenerator_U3CMinXU3Ek__BackingField,
	BoundingBox_t4EB3D52A233D0AC0FD485A2E5E3E5C62E277D1A2_CustomAttributesCacheGenerator_U3CMaxXU3Ek__BackingField,
	BoundingBox_t4EB3D52A233D0AC0FD485A2E5E3E5C62E277D1A2_CustomAttributesCacheGenerator_U3CMinYU3Ek__BackingField,
	BoundingBox_t4EB3D52A233D0AC0FD485A2E5E3E5C62E277D1A2_CustomAttributesCacheGenerator_U3CMaxYU3Ek__BackingField,
	Codeword_tF748CCACAEA64E4D12DCBAD5D806DBE8D5307416_CustomAttributesCacheGenerator_U3CStartXU3Ek__BackingField,
	Codeword_tF748CCACAEA64E4D12DCBAD5D806DBE8D5307416_CustomAttributesCacheGenerator_U3CEndXU3Ek__BackingField,
	Codeword_tF748CCACAEA64E4D12DCBAD5D806DBE8D5307416_CustomAttributesCacheGenerator_U3CBucketU3Ek__BackingField,
	Codeword_tF748CCACAEA64E4D12DCBAD5D806DBE8D5307416_CustomAttributesCacheGenerator_U3CValueU3Ek__BackingField,
	Codeword_tF748CCACAEA64E4D12DCBAD5D806DBE8D5307416_CustomAttributesCacheGenerator_U3CRowNumberU3Ek__BackingField,
	DetectionResult_t89B116BFBDAC73D4092FA90A4674426220FF7256_CustomAttributesCacheGenerator_U3CMetadataU3Ek__BackingField,
	DetectionResult_t89B116BFBDAC73D4092FA90A4674426220FF7256_CustomAttributesCacheGenerator_U3CDetectionResultColumnsU3Ek__BackingField,
	DetectionResult_t89B116BFBDAC73D4092FA90A4674426220FF7256_CustomAttributesCacheGenerator_U3CBoxU3Ek__BackingField,
	DetectionResult_t89B116BFBDAC73D4092FA90A4674426220FF7256_CustomAttributesCacheGenerator_U3CColumnCountU3Ek__BackingField,
	DetectionResultColumn_tBB67600AEDCB3384E23DAEC274225DCA9880DE74_CustomAttributesCacheGenerator_U3CBoxU3Ek__BackingField,
	DetectionResultColumn_tBB67600AEDCB3384E23DAEC274225DCA9880DE74_CustomAttributesCacheGenerator_U3CCodewordsU3Ek__BackingField,
	DetectionResultRowIndicatorColumn_t4FCC0F16D2C06107AA30C159B1B24E9A294157E8_CustomAttributesCacheGenerator_U3CIsLeftU3Ek__BackingField,
	PDF417DetectorResult_t2C2D71EF3BAF7CDBC1E8D99F2BFDD043FE03A363_CustomAttributesCacheGenerator_U3CBitsU3Ek__BackingField,
	PDF417DetectorResult_t2C2D71EF3BAF7CDBC1E8D99F2BFDD043FE03A363_CustomAttributesCacheGenerator_U3CPointsU3Ek__BackingField,
	ModulusGF_t6E6B8C73AD6FD583B9480A16CC94D6789F8C73BF_CustomAttributesCacheGenerator_U3CZeroU3Ek__BackingField,
	ModulusGF_t6E6B8C73AD6FD583B9480A16CC94D6789F8C73BF_CustomAttributesCacheGenerator_U3COneU3Ek__BackingField,
	PixelInterval_t99980BE2D22617E1B6B24AEFA4FE89966563E7B0_CustomAttributesCacheGenerator_U3CColorU3Ek__BackingField,
	PixelInterval_t99980BE2D22617E1B6B24AEFA4FE89966563E7B0_CustomAttributesCacheGenerator_U3CLengthU3Ek__BackingField,
	PixelInterval_t99980BE2D22617E1B6B24AEFA4FE89966563E7B0_CustomAttributesCacheGenerator_U3CSimilarU3Ek__BackingField,
	PixelInterval_t99980BE2D22617E1B6B24AEFA4FE89966563E7B0_CustomAttributesCacheGenerator_U3CSmallU3Ek__BackingField,
	PixelInterval_t99980BE2D22617E1B6B24AEFA4FE89966563E7B0_CustomAttributesCacheGenerator_U3CLargeU3Ek__BackingField,
	DataCharacter_tA76B872C13B69E1DC53EBD34B49293A269392239_CustomAttributesCacheGenerator_U3CValueU3Ek__BackingField,
	DataCharacter_tA76B872C13B69E1DC53EBD34B49293A269392239_CustomAttributesCacheGenerator_U3CChecksumPortionU3Ek__BackingField,
	FinderPattern_t31A9A7B1B1A2FD960A3D5132DF100E97A6DFC11B_CustomAttributesCacheGenerator_U3CValueU3Ek__BackingField,
	FinderPattern_t31A9A7B1B1A2FD960A3D5132DF100E97A6DFC11B_CustomAttributesCacheGenerator_U3CStartEndU3Ek__BackingField,
	FinderPattern_t31A9A7B1B1A2FD960A3D5132DF100E97A6DFC11B_CustomAttributesCacheGenerator_U3CResultPointsU3Ek__BackingField,
	Pair_t741C0356FF339CF37E2BFEAFC0C729AF9583ED98_CustomAttributesCacheGenerator_U3CFinderPatternU3Ek__BackingField,
	Pair_t741C0356FF339CF37E2BFEAFC0C729AF9583ED98_CustomAttributesCacheGenerator_U3CCountU3Ek__BackingField,
	ExpandedPair_t958AFF28DA7AC1446C4EDF55F03CE35613401A97_CustomAttributesCacheGenerator_U3CLeftCharU3Ek__BackingField,
	ExpandedPair_t958AFF28DA7AC1446C4EDF55F03CE35613401A97_CustomAttributesCacheGenerator_U3CRightCharU3Ek__BackingField,
	ExpandedPair_t958AFF28DA7AC1446C4EDF55F03CE35613401A97_CustomAttributesCacheGenerator_U3CFinderPatternU3Ek__BackingField,
	ExpandedRow_tF28264F6E0472ACA214AD0DA7FC7FA4541E646EA_CustomAttributesCacheGenerator_U3CPairsU3Ek__BackingField,
	ExpandedRow_tF28264F6E0472ACA214AD0DA7FC7FA4541E646EA_CustomAttributesCacheGenerator_U3CRowNumberU3Ek__BackingField,
	DecodedObject_t537D4CFA94FAF61CD6DC3BBC6C1DDAF4725C094D_CustomAttributesCacheGenerator_U3CNewPositionU3Ek__BackingField,
	DecoderResult_t1CAC762E272C436712087AAE5325E7C8A2E4B1DA_CustomAttributesCacheGenerator_U3CRawBytesU3Ek__BackingField,
	DecoderResult_t1CAC762E272C436712087AAE5325E7C8A2E4B1DA_CustomAttributesCacheGenerator_U3CNumBitsU3Ek__BackingField,
	DecoderResult_t1CAC762E272C436712087AAE5325E7C8A2E4B1DA_CustomAttributesCacheGenerator_U3CTextU3Ek__BackingField,
	DecoderResult_t1CAC762E272C436712087AAE5325E7C8A2E4B1DA_CustomAttributesCacheGenerator_U3CByteSegmentsU3Ek__BackingField,
	DecoderResult_t1CAC762E272C436712087AAE5325E7C8A2E4B1DA_CustomAttributesCacheGenerator_U3CECLevelU3Ek__BackingField,
	DecoderResult_t1CAC762E272C436712087AAE5325E7C8A2E4B1DA_CustomAttributesCacheGenerator_U3CErrorsCorrectedU3Ek__BackingField,
	DecoderResult_t1CAC762E272C436712087AAE5325E7C8A2E4B1DA_CustomAttributesCacheGenerator_U3CStructuredAppendSequenceNumberU3Ek__BackingField,
	DecoderResult_t1CAC762E272C436712087AAE5325E7C8A2E4B1DA_CustomAttributesCacheGenerator_U3CErasuresU3Ek__BackingField,
	DecoderResult_t1CAC762E272C436712087AAE5325E7C8A2E4B1DA_CustomAttributesCacheGenerator_U3CStructuredAppendParityU3Ek__BackingField,
	DecoderResult_t1CAC762E272C436712087AAE5325E7C8A2E4B1DA_CustomAttributesCacheGenerator_U3COtherU3Ek__BackingField,
	DecoderResult_t1CAC762E272C436712087AAE5325E7C8A2E4B1DA_CustomAttributesCacheGenerator_U3CSymbologyModifierU3Ek__BackingField,
	DecodingOptions_tEAA3E91644D65B18CC7341B46AE894075533074F_CustomAttributesCacheGenerator_U3CHintsU3Ek__BackingField,
	DecodingOptions_tEAA3E91644D65B18CC7341B46AE894075533074F_CustomAttributesCacheGenerator_ValueChanged,
	ChangeNotifyDictionary_2_t5712305817400B6A06E92291E1454CD94208D4E3_CustomAttributesCacheGenerator_ValueChanged,
	DetectorResult_tED40CA49A9C9E96F892F38E5B0D76770E075D81D_CustomAttributesCacheGenerator_U3CBitsU3Ek__BackingField,
	DetectorResult_tED40CA49A9C9E96F892F38E5B0D76770E075D81D_CustomAttributesCacheGenerator_U3CPointsU3Ek__BackingField,
	ECI_tBE692321BCD31A4C3F277BEA39D55BCD73299095_CustomAttributesCacheGenerator_U3CValueU3Ek__BackingField,
	AztecResultMetadata_t3B8DA7D3E5D16BB415913F6E7387236DD3C5D0FB_CustomAttributesCacheGenerator_U3CCompactU3Ek__BackingField,
	AztecResultMetadata_t3B8DA7D3E5D16BB415913F6E7387236DD3C5D0FB_CustomAttributesCacheGenerator_U3CDatablocksU3Ek__BackingField,
	AztecResultMetadata_t3B8DA7D3E5D16BB415913F6E7387236DD3C5D0FB_CustomAttributesCacheGenerator_U3CLayersU3Ek__BackingField,
	AztecDetectorResult_t55555880874319C051A55841C383CFD05B6D95B3_CustomAttributesCacheGenerator_U3CCompactU3Ek__BackingField,
	AztecDetectorResult_t55555880874319C051A55841C383CFD05B6D95B3_CustomAttributesCacheGenerator_U3CNbDatablocksU3Ek__BackingField,
	AztecDetectorResult_t55555880874319C051A55841C383CFD05B6D95B3_CustomAttributesCacheGenerator_U3CNbLayersU3Ek__BackingField,
	Point_tF2A77FD35758540F7C9FBD96819DB1CCAFA02AD2_CustomAttributesCacheGenerator_U3CXU3Ek__BackingField,
	Point_tF2A77FD35758540F7C9FBD96819DB1CCAFA02AD2_CustomAttributesCacheGenerator_U3CYU3Ek__BackingField,
	BarcodeReaderGeneric_t54B047361034AA8EF7B236C3D79FC3629A9B6DD4_CustomAttributesCacheGenerator_BarcodeReaderGeneric_get_AutoRotate_mF31DD670E7EDCC55B01582B835EDA3E01B4BCF1C,
	BarcodeReaderGeneric_t54B047361034AA8EF7B236C3D79FC3629A9B6DD4_CustomAttributesCacheGenerator_BarcodeReaderGeneric_U3Cget_OptionsU3Eb__8_0_m56E1D7731279A89BF86A010762EE555F25B13240,
	IBarcodeReader_t02DF49DEE8B2D9573343E8001DBA606D02164B7F_CustomAttributesCacheGenerator_IBarcodeReader_Decode_m9AD39D8A974A9353A90992B6A3FFB0C131E108F6,
	Result_t5F9FAADABC4B826C06B527EBC60C13BE0BF3C56C_CustomAttributesCacheGenerator_Result_get_Text_m76CDDCAE7CDC310478D17BE2DA1D870D43EBFFEE,
	Result_t5F9FAADABC4B826C06B527EBC60C13BE0BF3C56C_CustomAttributesCacheGenerator_Result_set_Text_m0787D6779B9D7C7ACE90DE45845A5A118CA272C5,
	Result_t5F9FAADABC4B826C06B527EBC60C13BE0BF3C56C_CustomAttributesCacheGenerator_Result_get_RawBytes_m88A2C19AC1B4C864E786856903D7315A8F236825,
	Result_t5F9FAADABC4B826C06B527EBC60C13BE0BF3C56C_CustomAttributesCacheGenerator_Result_set_RawBytes_mBF21B968C1DA3624356B8D4B4FC3B3B75028ABA2,
	Result_t5F9FAADABC4B826C06B527EBC60C13BE0BF3C56C_CustomAttributesCacheGenerator_Result_get_ResultPoints_mA9459ACA87A8035D3E75CB2D793E3059BAA3F453,
	Result_t5F9FAADABC4B826C06B527EBC60C13BE0BF3C56C_CustomAttributesCacheGenerator_Result_set_ResultPoints_m8BF00B5CC39F58878A8B4BEA2BBD007A8D0050F5,
	Result_t5F9FAADABC4B826C06B527EBC60C13BE0BF3C56C_CustomAttributesCacheGenerator_Result_get_BarcodeFormat_m385ED046CC8746A8B5A135A751DE0B45B171FAD9,
	Result_t5F9FAADABC4B826C06B527EBC60C13BE0BF3C56C_CustomAttributesCacheGenerator_Result_set_BarcodeFormat_mDEFA6F970EE7CEECBFEBFF3C191C033FC109CCB5,
	Result_t5F9FAADABC4B826C06B527EBC60C13BE0BF3C56C_CustomAttributesCacheGenerator_Result_get_ResultMetadata_mC6F98151CD2E39E1ADC109A5EA899DA69A5BB3E6,
	Result_t5F9FAADABC4B826C06B527EBC60C13BE0BF3C56C_CustomAttributesCacheGenerator_Result_set_ResultMetadata_mC9A0EB8D7B33CDB3A95053A191BAF457D5C92D3C,
	Result_t5F9FAADABC4B826C06B527EBC60C13BE0BF3C56C_CustomAttributesCacheGenerator_Result_set_Timestamp_mDA0F77F9E808D1274009E81482CE020254AF522A,
	Result_t5F9FAADABC4B826C06B527EBC60C13BE0BF3C56C_CustomAttributesCacheGenerator_Result_set_NumBits_mFE3210F321AF2C0DA62B3D2A9DA7F904BBA30AA0,
	Color32LuminanceSource_t4DF3A94A905C31E3E118041127E4C39F2F0CF898_CustomAttributesCacheGenerator_Color32LuminanceSource__ctor_m881C474B3782058C32A86E92A960E1045BED194E,
	Color32LuminanceSource_t4DF3A94A905C31E3E118041127E4C39F2F0CF898_CustomAttributesCacheGenerator_Color32LuminanceSource_SetPixels_mCFE425859BE40D0288E027B3E9FAAE9900579BF8,
	Mode_t295E71C45382DB54E3C2FDE89B76FF3140300545_CustomAttributesCacheGenerator_Mode_get_Name_m55CBC9FDBCE00DCE11A5F149204FA0CB436B2EC3,
	Mode_t295E71C45382DB54E3C2FDE89B76FF3140300545_CustomAttributesCacheGenerator_Mode_set_Name_m43D135B6B63366F69FD2F3CA08B4872C987DDF91,
	Mode_t295E71C45382DB54E3C2FDE89B76FF3140300545_CustomAttributesCacheGenerator_Mode_set_Bits_m48A07AF5CD5831F496FF88AE8757A48F3841378D,
	PDF417ResultMetadata_tF819078F25032D06C1A3D921C3D47AD3E6EA4C0C_CustomAttributesCacheGenerator_PDF417ResultMetadata_get_SegmentIndex_mB34698035D3AD70804D97F159D8D6352FC582CA7,
	PDF417ResultMetadata_tF819078F25032D06C1A3D921C3D47AD3E6EA4C0C_CustomAttributesCacheGenerator_PDF417ResultMetadata_set_SegmentIndex_m7D3CF0018C8CA3F4E4014714AF446876051131F6,
	PDF417ResultMetadata_tF819078F25032D06C1A3D921C3D47AD3E6EA4C0C_CustomAttributesCacheGenerator_PDF417ResultMetadata_get_FileId_mA89AB33C350F4E2092F499BD52D53CADF73A2EC2,
	PDF417ResultMetadata_tF819078F25032D06C1A3D921C3D47AD3E6EA4C0C_CustomAttributesCacheGenerator_PDF417ResultMetadata_set_FileId_m638D90013FAA8933F0FC3CD06448089F52AEAF8A,
	PDF417ResultMetadata_tF819078F25032D06C1A3D921C3D47AD3E6EA4C0C_CustomAttributesCacheGenerator_PDF417ResultMetadata_get_IsLastSegment_m210998BEED78A9420E6990F32355E8AEEFF022F8,
	PDF417ResultMetadata_tF819078F25032D06C1A3D921C3D47AD3E6EA4C0C_CustomAttributesCacheGenerator_PDF417ResultMetadata_set_IsLastSegment_m76D5DBB165E5CBB539CCB180481F2927559E386A,
	PDF417ResultMetadata_tF819078F25032D06C1A3D921C3D47AD3E6EA4C0C_CustomAttributesCacheGenerator_PDF417ResultMetadata_get_SegmentCount_m20C45F2C3DED43AEB5AEE2C032B2D8AAA966BB0C,
	PDF417ResultMetadata_tF819078F25032D06C1A3D921C3D47AD3E6EA4C0C_CustomAttributesCacheGenerator_PDF417ResultMetadata_set_SegmentCount_m9CA6BA5919F79F2A3F13295B764E9823859DEA8C,
	PDF417ResultMetadata_tF819078F25032D06C1A3D921C3D47AD3E6EA4C0C_CustomAttributesCacheGenerator_PDF417ResultMetadata_get_Sender_m1D1DE6B0A3D49AD1E361B45B3EE025A258E9F1BC,
	PDF417ResultMetadata_tF819078F25032D06C1A3D921C3D47AD3E6EA4C0C_CustomAttributesCacheGenerator_PDF417ResultMetadata_set_Sender_m64154DBAF8CED6E3F4FFE54BF7D5AEA6F22D6155,
	PDF417ResultMetadata_tF819078F25032D06C1A3D921C3D47AD3E6EA4C0C_CustomAttributesCacheGenerator_PDF417ResultMetadata_get_Addressee_mFA460026D4ECA0C63BD712F7EFCB61FE479AB104,
	PDF417ResultMetadata_tF819078F25032D06C1A3D921C3D47AD3E6EA4C0C_CustomAttributesCacheGenerator_PDF417ResultMetadata_set_Addressee_mA36AFF3EBD0655324B223BACAABD4898A616315A,
	PDF417ResultMetadata_tF819078F25032D06C1A3D921C3D47AD3E6EA4C0C_CustomAttributesCacheGenerator_PDF417ResultMetadata_get_FileName_m1E1A853B06760C86F9F79D8231EDCA9AE235112A,
	PDF417ResultMetadata_tF819078F25032D06C1A3D921C3D47AD3E6EA4C0C_CustomAttributesCacheGenerator_PDF417ResultMetadata_set_FileName_m7BA619EC3F70400B8C01379E6A0DFAA6A5823E80,
	PDF417ResultMetadata_tF819078F25032D06C1A3D921C3D47AD3E6EA4C0C_CustomAttributesCacheGenerator_PDF417ResultMetadata_get_FileSize_m3E7683684E992CEC6DB5E1A5FAF1F65B5E94AA33,
	PDF417ResultMetadata_tF819078F25032D06C1A3D921C3D47AD3E6EA4C0C_CustomAttributesCacheGenerator_PDF417ResultMetadata_set_FileSize_mDEE6ABC170A62FE590DD852757239187A4D94973,
	PDF417ResultMetadata_tF819078F25032D06C1A3D921C3D47AD3E6EA4C0C_CustomAttributesCacheGenerator_PDF417ResultMetadata_get_Checksum_m47505AEC61FAB76D6857094D993CA031A64451BE,
	PDF417ResultMetadata_tF819078F25032D06C1A3D921C3D47AD3E6EA4C0C_CustomAttributesCacheGenerator_PDF417ResultMetadata_set_Checksum_m19564122E479E742B1C92EE56215DCE31A1E4200,
	PDF417ResultMetadata_tF819078F25032D06C1A3D921C3D47AD3E6EA4C0C_CustomAttributesCacheGenerator_PDF417ResultMetadata_get_Timestamp_mED14540D0547A909BB2B98D308C6D43D98C9C66D,
	PDF417ResultMetadata_tF819078F25032D06C1A3D921C3D47AD3E6EA4C0C_CustomAttributesCacheGenerator_PDF417ResultMetadata_set_Timestamp_mB136155F5300EED58BEB6B96D93717882ABBBF55,
	BarcodeMetadata_tFFE5787D13615EC003D403976EE05A12473E183C_CustomAttributesCacheGenerator_BarcodeMetadata_get_ColumnCount_m7AD8E7B0AD84396D5CDC1A063F8EF7428853D111,
	BarcodeMetadata_tFFE5787D13615EC003D403976EE05A12473E183C_CustomAttributesCacheGenerator_BarcodeMetadata_set_ColumnCount_m5F0B4D5970BE52203E9CB0EFA4FF26F85C2512E6,
	BarcodeMetadata_tFFE5787D13615EC003D403976EE05A12473E183C_CustomAttributesCacheGenerator_BarcodeMetadata_get_ErrorCorrectionLevel_m95833A2B8E125F7EE13383198866E864762164BC,
	BarcodeMetadata_tFFE5787D13615EC003D403976EE05A12473E183C_CustomAttributesCacheGenerator_BarcodeMetadata_set_ErrorCorrectionLevel_m073802C5D4F3473AE5CA4DC1A16B2867DD47C6A7,
	BarcodeMetadata_tFFE5787D13615EC003D403976EE05A12473E183C_CustomAttributesCacheGenerator_BarcodeMetadata_get_RowCountUpper_mD3BC775CF9AE70994A126E861F95B4E44CE80338,
	BarcodeMetadata_tFFE5787D13615EC003D403976EE05A12473E183C_CustomAttributesCacheGenerator_BarcodeMetadata_set_RowCountUpper_m51A8A5CC6BDBC0BE494A8FD2B85F0B701846039A,
	BarcodeMetadata_tFFE5787D13615EC003D403976EE05A12473E183C_CustomAttributesCacheGenerator_BarcodeMetadata_get_RowCountLower_m2786BD28818F6F7C766401F43B0642349659A394,
	BarcodeMetadata_tFFE5787D13615EC003D403976EE05A12473E183C_CustomAttributesCacheGenerator_BarcodeMetadata_set_RowCountLower_mA656ADBD857E468B359EBC67CB789B6E24967782,
	BarcodeMetadata_tFFE5787D13615EC003D403976EE05A12473E183C_CustomAttributesCacheGenerator_BarcodeMetadata_get_RowCount_mD487E4E1D829D730C0F31C21C7A925832B9982CC,
	BarcodeMetadata_tFFE5787D13615EC003D403976EE05A12473E183C_CustomAttributesCacheGenerator_BarcodeMetadata_set_RowCount_mFCF5EB80076101003085CD6301D211A051627D4B,
	BoundingBox_t4EB3D52A233D0AC0FD485A2E5E3E5C62E277D1A2_CustomAttributesCacheGenerator_BoundingBox_get_TopLeft_m1D56775ADE6BE531AA506F488030C8693F24303D,
	BoundingBox_t4EB3D52A233D0AC0FD485A2E5E3E5C62E277D1A2_CustomAttributesCacheGenerator_BoundingBox_set_TopLeft_m89E0DE932492E3C8FD4C07B535E81B8F10AEE4CB,
	BoundingBox_t4EB3D52A233D0AC0FD485A2E5E3E5C62E277D1A2_CustomAttributesCacheGenerator_BoundingBox_get_TopRight_m6288B9F11E4A879665ADD338C6528454DBE8B2CC,
	BoundingBox_t4EB3D52A233D0AC0FD485A2E5E3E5C62E277D1A2_CustomAttributesCacheGenerator_BoundingBox_set_TopRight_m2C62D1F1F43569D80CDDDE61A492C1658BDB4762,
	BoundingBox_t4EB3D52A233D0AC0FD485A2E5E3E5C62E277D1A2_CustomAttributesCacheGenerator_BoundingBox_get_BottomLeft_mE0899C4670B10F1B98CDB331288632A092864043,
	BoundingBox_t4EB3D52A233D0AC0FD485A2E5E3E5C62E277D1A2_CustomAttributesCacheGenerator_BoundingBox_set_BottomLeft_mF93C53C17E0D0B16C2537D1465F75329C68F5D2C,
	BoundingBox_t4EB3D52A233D0AC0FD485A2E5E3E5C62E277D1A2_CustomAttributesCacheGenerator_BoundingBox_get_BottomRight_mA995E37EEBA4DE64CE5984B4A71C525BB3AC8947,
	BoundingBox_t4EB3D52A233D0AC0FD485A2E5E3E5C62E277D1A2_CustomAttributesCacheGenerator_BoundingBox_set_BottomRight_mAE4EE13F693D5F37491414FD0FAC9FD37796A89C,
	BoundingBox_t4EB3D52A233D0AC0FD485A2E5E3E5C62E277D1A2_CustomAttributesCacheGenerator_BoundingBox_get_MinX_m9BBA655A1B0727CD925E8D16F5C1492649410317,
	BoundingBox_t4EB3D52A233D0AC0FD485A2E5E3E5C62E277D1A2_CustomAttributesCacheGenerator_BoundingBox_set_MinX_m15FD0FCDC838ACF3748902065D8ED6CEF878C09F,
	BoundingBox_t4EB3D52A233D0AC0FD485A2E5E3E5C62E277D1A2_CustomAttributesCacheGenerator_BoundingBox_get_MaxX_m9AE9CDC25A4BB54643B55815920069D77323AF26,
	BoundingBox_t4EB3D52A233D0AC0FD485A2E5E3E5C62E277D1A2_CustomAttributesCacheGenerator_BoundingBox_set_MaxX_m29A8A43AA5CEC54ED34684DBD3E112123F808F05,
	BoundingBox_t4EB3D52A233D0AC0FD485A2E5E3E5C62E277D1A2_CustomAttributesCacheGenerator_BoundingBox_get_MinY_mD0B7D6E754E7ECBE3CF604C43E107849FCC8ADFB,
	BoundingBox_t4EB3D52A233D0AC0FD485A2E5E3E5C62E277D1A2_CustomAttributesCacheGenerator_BoundingBox_set_MinY_m7E57A22444F2718B428C8F99675840D8A71898DE,
	BoundingBox_t4EB3D52A233D0AC0FD485A2E5E3E5C62E277D1A2_CustomAttributesCacheGenerator_BoundingBox_get_MaxY_m73CEC954ED89CF88CA457F68EC678C1A1BDADC58,
	BoundingBox_t4EB3D52A233D0AC0FD485A2E5E3E5C62E277D1A2_CustomAttributesCacheGenerator_BoundingBox_set_MaxY_mA51494467B72148901EBBEF81DA032A4D32A5B15,
	Codeword_tF748CCACAEA64E4D12DCBAD5D806DBE8D5307416_CustomAttributesCacheGenerator_Codeword_get_StartX_m616EE06C2DBD96E53A345F969A8C83394CDC33CD,
	Codeword_tF748CCACAEA64E4D12DCBAD5D806DBE8D5307416_CustomAttributesCacheGenerator_Codeword_set_StartX_m8B1D31CCB5B090F6FC9591CC97C394A26512C0DB,
	Codeword_tF748CCACAEA64E4D12DCBAD5D806DBE8D5307416_CustomAttributesCacheGenerator_Codeword_get_EndX_mDC3365EB1AF9CF2FACBA8FE20A131A7C0DB01A4F,
	Codeword_tF748CCACAEA64E4D12DCBAD5D806DBE8D5307416_CustomAttributesCacheGenerator_Codeword_set_EndX_mC9B07309F5FA7D9DF03C08B37865DBB6F0CF7832,
	Codeword_tF748CCACAEA64E4D12DCBAD5D806DBE8D5307416_CustomAttributesCacheGenerator_Codeword_get_Bucket_mC09F1E523EB9CCA8D3E64B49CAA8A8BB95856DD9,
	Codeword_tF748CCACAEA64E4D12DCBAD5D806DBE8D5307416_CustomAttributesCacheGenerator_Codeword_set_Bucket_mC20FA26D8AD2349D242D72D94943065C6B8A654B,
	Codeword_tF748CCACAEA64E4D12DCBAD5D806DBE8D5307416_CustomAttributesCacheGenerator_Codeword_get_Value_m85BB8E03B1D88A2232B005843692850273EED5A9,
	Codeword_tF748CCACAEA64E4D12DCBAD5D806DBE8D5307416_CustomAttributesCacheGenerator_Codeword_set_Value_mCF54E454B722ECDFAA46C5EDF4DB6D2688706578,
	Codeword_tF748CCACAEA64E4D12DCBAD5D806DBE8D5307416_CustomAttributesCacheGenerator_Codeword_get_RowNumber_m38234098F615E1D9A9C7C9882940CD1C64F8153E,
	Codeword_tF748CCACAEA64E4D12DCBAD5D806DBE8D5307416_CustomAttributesCacheGenerator_Codeword_set_RowNumber_m8207256866CB12EEBBBC1436955AC012C958A78D,
	DetectionResult_t89B116BFBDAC73D4092FA90A4674426220FF7256_CustomAttributesCacheGenerator_DetectionResult_get_Metadata_mC1AC22879297CD83169860DA0FE02F246042094F,
	DetectionResult_t89B116BFBDAC73D4092FA90A4674426220FF7256_CustomAttributesCacheGenerator_DetectionResult_set_Metadata_mED904D02D9F3170AF14374CA140A986177527DA5,
	DetectionResult_t89B116BFBDAC73D4092FA90A4674426220FF7256_CustomAttributesCacheGenerator_DetectionResult_get_DetectionResultColumns_m62DC4DAF73600F3FD7C8E441FEE1780CC96BE4E2,
	DetectionResult_t89B116BFBDAC73D4092FA90A4674426220FF7256_CustomAttributesCacheGenerator_DetectionResult_set_DetectionResultColumns_mA125D162D4287AABAABCFDC18A264A82C1757257,
	DetectionResult_t89B116BFBDAC73D4092FA90A4674426220FF7256_CustomAttributesCacheGenerator_DetectionResult_get_Box_m202AF0E109132F81649A91EB8CC6BBBDF3FFFEBF,
	DetectionResult_t89B116BFBDAC73D4092FA90A4674426220FF7256_CustomAttributesCacheGenerator_DetectionResult_set_Box_mF76BEF39CDDD378AFCB29B588AC8063446E63ED5,
	DetectionResult_t89B116BFBDAC73D4092FA90A4674426220FF7256_CustomAttributesCacheGenerator_DetectionResult_get_ColumnCount_m2CFF0C3F80668DCB230CF869AEF35246AA2E6377,
	DetectionResult_t89B116BFBDAC73D4092FA90A4674426220FF7256_CustomAttributesCacheGenerator_DetectionResult_set_ColumnCount_m95458AB400ED2C9EE929180F5F485DD26DCFFFBB,
	DetectionResultColumn_tBB67600AEDCB3384E23DAEC274225DCA9880DE74_CustomAttributesCacheGenerator_DetectionResultColumn_get_Box_mB68C79B67D3BC17DA40F7C54D2940E50553A855C,
	DetectionResultColumn_tBB67600AEDCB3384E23DAEC274225DCA9880DE74_CustomAttributesCacheGenerator_DetectionResultColumn_set_Box_mD3967138A67695D8CF10D22AFE2A7D3549BFE2C4,
	DetectionResultColumn_tBB67600AEDCB3384E23DAEC274225DCA9880DE74_CustomAttributesCacheGenerator_DetectionResultColumn_get_Codewords_mC0ABE4198D74CBEC6B41B3A0291BB28B40C70AA3,
	DetectionResultColumn_tBB67600AEDCB3384E23DAEC274225DCA9880DE74_CustomAttributesCacheGenerator_DetectionResultColumn_set_Codewords_mB0A0EE0CEBD9E6F18D0F4E18CA0EBCF2CAE80FDD,
	DetectionResultRowIndicatorColumn_t4FCC0F16D2C06107AA30C159B1B24E9A294157E8_CustomAttributesCacheGenerator_DetectionResultRowIndicatorColumn_get_IsLeft_m9EF6ADAB2BE25DA525AC1674C4A536D5CA48C611,
	DetectionResultRowIndicatorColumn_t4FCC0F16D2C06107AA30C159B1B24E9A294157E8_CustomAttributesCacheGenerator_DetectionResultRowIndicatorColumn_set_IsLeft_m83C2A6ADFB516EEBABDD2B84C59718C7009A40D9,
	PDF417DetectorResult_t2C2D71EF3BAF7CDBC1E8D99F2BFDD043FE03A363_CustomAttributesCacheGenerator_PDF417DetectorResult_get_Bits_m982A4305B3481EC5B46569142AC0608868B00EE3,
	PDF417DetectorResult_t2C2D71EF3BAF7CDBC1E8D99F2BFDD043FE03A363_CustomAttributesCacheGenerator_PDF417DetectorResult_set_Bits_m7CD28C3D1B20A7F9D13A4B3F6505A38508FE0D2F,
	PDF417DetectorResult_t2C2D71EF3BAF7CDBC1E8D99F2BFDD043FE03A363_CustomAttributesCacheGenerator_PDF417DetectorResult_get_Points_m76CBAA3720F8FDFA3B46F933622ABB9637D5A417,
	PDF417DetectorResult_t2C2D71EF3BAF7CDBC1E8D99F2BFDD043FE03A363_CustomAttributesCacheGenerator_PDF417DetectorResult_set_Points_mD0BE2873FFDF0FA2C9DCE46F9683D92B31B2F6C0,
	ModulusGF_t6E6B8C73AD6FD583B9480A16CC94D6789F8C73BF_CustomAttributesCacheGenerator_ModulusGF_get_Zero_m16BA66DAA48C7A31839DB986D49A0ED95765EC74,
	ModulusGF_t6E6B8C73AD6FD583B9480A16CC94D6789F8C73BF_CustomAttributesCacheGenerator_ModulusGF_set_Zero_mAE0C0E383FE58D7EA8F56BE27B7F6F1916423181,
	ModulusGF_t6E6B8C73AD6FD583B9480A16CC94D6789F8C73BF_CustomAttributesCacheGenerator_ModulusGF_get_One_mF51C281D84650D74E98C51AED8663E60B51E3539,
	ModulusGF_t6E6B8C73AD6FD583B9480A16CC94D6789F8C73BF_CustomAttributesCacheGenerator_ModulusGF_set_One_m2ECE50B18A94A7FC1274CFCAE33D851541A8F4D7,
	PixelInterval_t99980BE2D22617E1B6B24AEFA4FE89966563E7B0_CustomAttributesCacheGenerator_PixelInterval_get_Color_m8708BEB411769799ABDFC40347A32A77D1C3BDE9,
	PixelInterval_t99980BE2D22617E1B6B24AEFA4FE89966563E7B0_CustomAttributesCacheGenerator_PixelInterval_set_Color_m8FAAAC43540503D22DAF36FDE5AC033EDD3BA0C9,
	PixelInterval_t99980BE2D22617E1B6B24AEFA4FE89966563E7B0_CustomAttributesCacheGenerator_PixelInterval_get_Length_m8DB67D4086D8955C0341CFEB4BB28CE2ADAA4482,
	PixelInterval_t99980BE2D22617E1B6B24AEFA4FE89966563E7B0_CustomAttributesCacheGenerator_PixelInterval_set_Length_m13EB2DAA4CCABA8F903CCF45047FDDEE03519E8C,
	PixelInterval_t99980BE2D22617E1B6B24AEFA4FE89966563E7B0_CustomAttributesCacheGenerator_PixelInterval_get_Similar_mF60CF02997F01CFEAD3640191ECE0106EF927E1A,
	PixelInterval_t99980BE2D22617E1B6B24AEFA4FE89966563E7B0_CustomAttributesCacheGenerator_PixelInterval_set_Similar_m63F18D273DA9C6EE440442B96F362A9469B27337,
	PixelInterval_t99980BE2D22617E1B6B24AEFA4FE89966563E7B0_CustomAttributesCacheGenerator_PixelInterval_get_Small_mB863D272F2441A10369DC68E3C33B2EFAEC3D565,
	PixelInterval_t99980BE2D22617E1B6B24AEFA4FE89966563E7B0_CustomAttributesCacheGenerator_PixelInterval_set_Small_m395DB7F4A42FC8CAC1BF81395455717A07CE8B85,
	PixelInterval_t99980BE2D22617E1B6B24AEFA4FE89966563E7B0_CustomAttributesCacheGenerator_PixelInterval_get_Large_mBF1F1B57A8E80FA824E0A20198FE36B6F2C92258,
	PixelInterval_t99980BE2D22617E1B6B24AEFA4FE89966563E7B0_CustomAttributesCacheGenerator_PixelInterval_set_Large_m00D6ED687EC3525B26D1E9854648ADBCFD870EB1,
	DataCharacter_tA76B872C13B69E1DC53EBD34B49293A269392239_CustomAttributesCacheGenerator_DataCharacter_get_Value_m7FFE714D7CC8D619564873D916F165B88BA99214,
	DataCharacter_tA76B872C13B69E1DC53EBD34B49293A269392239_CustomAttributesCacheGenerator_DataCharacter_set_Value_mC6AF9578AA0C12A1D099F4B49640C497A828C135,
	DataCharacter_tA76B872C13B69E1DC53EBD34B49293A269392239_CustomAttributesCacheGenerator_DataCharacter_get_ChecksumPortion_m215CDF0FC4761367BC13BC47408472196AFE0515,
	DataCharacter_tA76B872C13B69E1DC53EBD34B49293A269392239_CustomAttributesCacheGenerator_DataCharacter_set_ChecksumPortion_mBBA1F0EA0C433CFAF501E3660684BE29F896BB95,
	FinderPattern_t31A9A7B1B1A2FD960A3D5132DF100E97A6DFC11B_CustomAttributesCacheGenerator_FinderPattern_get_Value_m852B92F7EC8973832C7E37D7613539488CCAAEE1,
	FinderPattern_t31A9A7B1B1A2FD960A3D5132DF100E97A6DFC11B_CustomAttributesCacheGenerator_FinderPattern_set_Value_mA9F2279D9A3FBD0D2C0BB4E263A707FD3AA96B3F,
	FinderPattern_t31A9A7B1B1A2FD960A3D5132DF100E97A6DFC11B_CustomAttributesCacheGenerator_FinderPattern_get_StartEnd_mC2627DE3208F0D07EE6B3232348D8E418CA5B1A1,
	FinderPattern_t31A9A7B1B1A2FD960A3D5132DF100E97A6DFC11B_CustomAttributesCacheGenerator_FinderPattern_set_StartEnd_mAF3A86C3999E169C163B26234F2E365D6D10E05F,
	FinderPattern_t31A9A7B1B1A2FD960A3D5132DF100E97A6DFC11B_CustomAttributesCacheGenerator_FinderPattern_get_ResultPoints_mE4F2A82288E521D0060BDACEF3B93427E4AAD15F,
	FinderPattern_t31A9A7B1B1A2FD960A3D5132DF100E97A6DFC11B_CustomAttributesCacheGenerator_FinderPattern_set_ResultPoints_m14EE9FE73BC619DA9AE7AAFC83A380DA74A82BE6,
	Pair_t741C0356FF339CF37E2BFEAFC0C729AF9583ED98_CustomAttributesCacheGenerator_Pair_get_FinderPattern_mFD874D712D4F8F95C082264A4E3AEECFF376B487,
	Pair_t741C0356FF339CF37E2BFEAFC0C729AF9583ED98_CustomAttributesCacheGenerator_Pair_set_FinderPattern_mC5E35083999DD8A2C3A108B84C4797D328B33B9F,
	Pair_t741C0356FF339CF37E2BFEAFC0C729AF9583ED98_CustomAttributesCacheGenerator_Pair_get_Count_mABD9399214DDE984DEF191F8DB2B4C526FF897E7,
	Pair_t741C0356FF339CF37E2BFEAFC0C729AF9583ED98_CustomAttributesCacheGenerator_Pair_set_Count_m6584A0EEA9D20843325B3563E55DB27F4257CE1F,
	ExpandedPair_t958AFF28DA7AC1446C4EDF55F03CE35613401A97_CustomAttributesCacheGenerator_ExpandedPair_get_LeftChar_m0DD0286048B68105D48C28881C68BA014C974DFA,
	ExpandedPair_t958AFF28DA7AC1446C4EDF55F03CE35613401A97_CustomAttributesCacheGenerator_ExpandedPair_set_LeftChar_mE10107AE8A1CB9421D1A985D7F4ED439B1117E25,
	ExpandedPair_t958AFF28DA7AC1446C4EDF55F03CE35613401A97_CustomAttributesCacheGenerator_ExpandedPair_get_RightChar_m5E513E6701CC198F7A38DBEE7495EE7DE9CC3039,
	ExpandedPair_t958AFF28DA7AC1446C4EDF55F03CE35613401A97_CustomAttributesCacheGenerator_ExpandedPair_set_RightChar_m1BE538427C4793FAFC99326B0D6D2C110A5D1D6A,
	ExpandedPair_t958AFF28DA7AC1446C4EDF55F03CE35613401A97_CustomAttributesCacheGenerator_ExpandedPair_get_FinderPattern_mA4C7BD8D8048A4D4F7C314E6C3FAF793A36567C8,
	ExpandedPair_t958AFF28DA7AC1446C4EDF55F03CE35613401A97_CustomAttributesCacheGenerator_ExpandedPair_set_FinderPattern_m1EEDE7EA6DD7E4C80F88FFCC3C7CCD3666A265FA,
	ExpandedRow_tF28264F6E0472ACA214AD0DA7FC7FA4541E646EA_CustomAttributesCacheGenerator_ExpandedRow_get_Pairs_mA24E0F8C6CE9B9D630D38A53D73E676589AE62FE,
	ExpandedRow_tF28264F6E0472ACA214AD0DA7FC7FA4541E646EA_CustomAttributesCacheGenerator_ExpandedRow_set_Pairs_mB5D70462F0645C83D9EF43AF1803E7EC9EE181B3,
	ExpandedRow_tF28264F6E0472ACA214AD0DA7FC7FA4541E646EA_CustomAttributesCacheGenerator_ExpandedRow_get_RowNumber_m809177D35CD6B84621472F930BE26092FAD702F5,
	ExpandedRow_tF28264F6E0472ACA214AD0DA7FC7FA4541E646EA_CustomAttributesCacheGenerator_ExpandedRow_set_RowNumber_m2C42F011532BCC37F085364D221F0590BF3858DC,
	DecodedObject_t537D4CFA94FAF61CD6DC3BBC6C1DDAF4725C094D_CustomAttributesCacheGenerator_DecodedObject_get_NewPosition_mC2E997B208EE9F880F5044E736C8355141BEBDA5,
	DecodedObject_t537D4CFA94FAF61CD6DC3BBC6C1DDAF4725C094D_CustomAttributesCacheGenerator_DecodedObject_set_NewPosition_m3F94148A720BB104A2BBBA7FCFDCAB1ABA039957,
	DecoderResult_t1CAC762E272C436712087AAE5325E7C8A2E4B1DA_CustomAttributesCacheGenerator_DecoderResult_get_RawBytes_mF7FA690AE86183F4428EBADA2EEBCBF28FEBEADE,
	DecoderResult_t1CAC762E272C436712087AAE5325E7C8A2E4B1DA_CustomAttributesCacheGenerator_DecoderResult_set_RawBytes_mEFD8C760341F88C314EE6EE10678A8801AC8D2C0,
	DecoderResult_t1CAC762E272C436712087AAE5325E7C8A2E4B1DA_CustomAttributesCacheGenerator_DecoderResult_get_NumBits_mAE4F51BB964E5659D83DB7D69085606D66EC1DF1,
	DecoderResult_t1CAC762E272C436712087AAE5325E7C8A2E4B1DA_CustomAttributesCacheGenerator_DecoderResult_set_NumBits_m43F728385B4D4CBB33DFC5398B3A86D0FA5134A1,
	DecoderResult_t1CAC762E272C436712087AAE5325E7C8A2E4B1DA_CustomAttributesCacheGenerator_DecoderResult_get_Text_m9AED75CD91C6E7E3BD952E7A76361B511C3B402C,
	DecoderResult_t1CAC762E272C436712087AAE5325E7C8A2E4B1DA_CustomAttributesCacheGenerator_DecoderResult_set_Text_m7B4C4FE653A6AFAA06BBF195DAAA2F3CAC965B73,
	DecoderResult_t1CAC762E272C436712087AAE5325E7C8A2E4B1DA_CustomAttributesCacheGenerator_DecoderResult_get_ByteSegments_mB4A9F290CAC25AE57BE2BED6E903FBEF3B30243F,
	DecoderResult_t1CAC762E272C436712087AAE5325E7C8A2E4B1DA_CustomAttributesCacheGenerator_DecoderResult_set_ByteSegments_mFC5F9FC29F14E41EE2BE193E87D4F03DE35847CD,
	DecoderResult_t1CAC762E272C436712087AAE5325E7C8A2E4B1DA_CustomAttributesCacheGenerator_DecoderResult_get_ECLevel_mBA68B487B47116DE6CB510DF44BFD819EE864033,
	DecoderResult_t1CAC762E272C436712087AAE5325E7C8A2E4B1DA_CustomAttributesCacheGenerator_DecoderResult_set_ECLevel_m447FEFBCA0746728AB2FB578245D1403FF146857,
	DecoderResult_t1CAC762E272C436712087AAE5325E7C8A2E4B1DA_CustomAttributesCacheGenerator_DecoderResult_set_ErrorsCorrected_m1617059DEB029E4B71D382BA7E434C5EAE4FF20A,
	DecoderResult_t1CAC762E272C436712087AAE5325E7C8A2E4B1DA_CustomAttributesCacheGenerator_DecoderResult_get_StructuredAppendSequenceNumber_m9F8414944E85835F2ACC378C0732B030A9E588FA,
	DecoderResult_t1CAC762E272C436712087AAE5325E7C8A2E4B1DA_CustomAttributesCacheGenerator_DecoderResult_set_StructuredAppendSequenceNumber_m61B945E545676EDC7E13E9B16530177AE5F63AAF,
	DecoderResult_t1CAC762E272C436712087AAE5325E7C8A2E4B1DA_CustomAttributesCacheGenerator_DecoderResult_set_Erasures_mE8749CC95E2649914426913FE18013604AB056AE,
	DecoderResult_t1CAC762E272C436712087AAE5325E7C8A2E4B1DA_CustomAttributesCacheGenerator_DecoderResult_get_StructuredAppendParity_m7C0FDE7BA33749117E384A4DEE167B1353F8577C,
	DecoderResult_t1CAC762E272C436712087AAE5325E7C8A2E4B1DA_CustomAttributesCacheGenerator_DecoderResult_set_StructuredAppendParity_m89A3C187CA49C134A7F634D852C40D6304FE346B,
	DecoderResult_t1CAC762E272C436712087AAE5325E7C8A2E4B1DA_CustomAttributesCacheGenerator_DecoderResult_get_Other_mDE327F5BB01BA3DF7E831F1A1917496033D59BEE,
	DecoderResult_t1CAC762E272C436712087AAE5325E7C8A2E4B1DA_CustomAttributesCacheGenerator_DecoderResult_set_Other_m337C20BDA0CD2D17C8CE14D3069A648802BC298E,
	DecoderResult_t1CAC762E272C436712087AAE5325E7C8A2E4B1DA_CustomAttributesCacheGenerator_DecoderResult_get_SymbologyModifier_m754AECA6ECAD6A54302F799851F217E61E2F44E5,
	DecoderResult_t1CAC762E272C436712087AAE5325E7C8A2E4B1DA_CustomAttributesCacheGenerator_DecoderResult_set_SymbologyModifier_mD6980F56E54A53422C6F49249934578F195961CF,
	DecodingOptions_tEAA3E91644D65B18CC7341B46AE894075533074F_CustomAttributesCacheGenerator_DecodingOptions_get_Hints_m1959D55199A7A244C47D926C64B36C8E215DC153,
	DecodingOptions_tEAA3E91644D65B18CC7341B46AE894075533074F_CustomAttributesCacheGenerator_DecodingOptions_set_Hints_m6980A360300AAA446309415BCCC303BFA8FA03B7,
	DecodingOptions_tEAA3E91644D65B18CC7341B46AE894075533074F_CustomAttributesCacheGenerator_DecodingOptions_add_ValueChanged_m5AC9E066F66F36F91FC0ECFC59A34781D5D439D5,
	DecodingOptions_tEAA3E91644D65B18CC7341B46AE894075533074F_CustomAttributesCacheGenerator_DecodingOptions_remove_ValueChanged_m1A9DCF62466C21A279CAF59D158C4F96BF9FDB41,
	DecodingOptions_tEAA3E91644D65B18CC7341B46AE894075533074F_CustomAttributesCacheGenerator_DecodingOptions_U3C_ctorU3Eb__46_0_m003851246DD3D2088D6DC10C4AD93FB41D08F5BC,
	ChangeNotifyDictionary_2_t5712305817400B6A06E92291E1454CD94208D4E3_CustomAttributesCacheGenerator_ChangeNotifyDictionary_2_add_ValueChanged_m36DF2EA8249369582E19E9D63A212F8FDC9A2298,
	ChangeNotifyDictionary_2_t5712305817400B6A06E92291E1454CD94208D4E3_CustomAttributesCacheGenerator_ChangeNotifyDictionary_2_remove_ValueChanged_m580E80BCC89A8420752432F271910B7C02F02051,
	DetectorResult_tED40CA49A9C9E96F892F38E5B0D76770E075D81D_CustomAttributesCacheGenerator_DetectorResult_get_Bits_m885E433A11A13ABEAD3F04E4E1DF74F6CFC097CA,
	DetectorResult_tED40CA49A9C9E96F892F38E5B0D76770E075D81D_CustomAttributesCacheGenerator_DetectorResult_set_Bits_m098EC2951D69BD5DC096274A24800185B5C2C211,
	DetectorResult_tED40CA49A9C9E96F892F38E5B0D76770E075D81D_CustomAttributesCacheGenerator_DetectorResult_get_Points_m98E6699846FCA7D0A8D00CAD7A9C03A7D796A712,
	DetectorResult_tED40CA49A9C9E96F892F38E5B0D76770E075D81D_CustomAttributesCacheGenerator_DetectorResult_set_Points_m61791A3B1B86E2752E597C50FDE0D50A3CCA0FC5,
	ECI_tBE692321BCD31A4C3F277BEA39D55BCD73299095_CustomAttributesCacheGenerator_ECI_set_Value_m447A0ADA94F80C968545239339A03EA1027A1B9C,
	AztecResultMetadata_t3B8DA7D3E5D16BB415913F6E7387236DD3C5D0FB_CustomAttributesCacheGenerator_AztecResultMetadata_get_Compact_m292F978F6ED24B5D42F11D15C9E10931012C3F6A,
	AztecResultMetadata_t3B8DA7D3E5D16BB415913F6E7387236DD3C5D0FB_CustomAttributesCacheGenerator_AztecResultMetadata_set_Compact_m9E2B03DED424282855FA366F8F2F941F181FDF65,
	AztecResultMetadata_t3B8DA7D3E5D16BB415913F6E7387236DD3C5D0FB_CustomAttributesCacheGenerator_AztecResultMetadata_get_Datablocks_m6050AF0BE2134F6FFE861CFD540E6BCA25BA869D,
	AztecResultMetadata_t3B8DA7D3E5D16BB415913F6E7387236DD3C5D0FB_CustomAttributesCacheGenerator_AztecResultMetadata_set_Datablocks_m268DC44E2F03FB61F79DE6EB545FF60DF3185865,
	AztecResultMetadata_t3B8DA7D3E5D16BB415913F6E7387236DD3C5D0FB_CustomAttributesCacheGenerator_AztecResultMetadata_get_Layers_mA75EE605308FAEFA901CD8BA6B9113749279BEF4,
	AztecResultMetadata_t3B8DA7D3E5D16BB415913F6E7387236DD3C5D0FB_CustomAttributesCacheGenerator_AztecResultMetadata_set_Layers_m9346A8DCCB2B8F75DDD1CE5083D1FBA127C79B63,
	AztecDetectorResult_t55555880874319C051A55841C383CFD05B6D95B3_CustomAttributesCacheGenerator_AztecDetectorResult_get_Compact_m6EEB82B48E9427FF4BF0802AA964B478B81D7E24,
	AztecDetectorResult_t55555880874319C051A55841C383CFD05B6D95B3_CustomAttributesCacheGenerator_AztecDetectorResult_set_Compact_mF4D733A81E81036B7C77AED6E1D725270278A626,
	AztecDetectorResult_t55555880874319C051A55841C383CFD05B6D95B3_CustomAttributesCacheGenerator_AztecDetectorResult_get_NbDatablocks_m96CD2F5F7E575E781A4B3C87496B9B54F7346DE6,
	AztecDetectorResult_t55555880874319C051A55841C383CFD05B6D95B3_CustomAttributesCacheGenerator_AztecDetectorResult_set_NbDatablocks_mFC955E5CEFE4AD39ECCD4CC7C48A503C30E9EB49,
	AztecDetectorResult_t55555880874319C051A55841C383CFD05B6D95B3_CustomAttributesCacheGenerator_AztecDetectorResult_get_NbLayers_mFE74EC9DE0FD796013BE36AC35A03196CDCD279C,
	AztecDetectorResult_t55555880874319C051A55841C383CFD05B6D95B3_CustomAttributesCacheGenerator_AztecDetectorResult_set_NbLayers_mD623304B6B4DE66982010099E10FA61D1A12B991,
	Point_tF2A77FD35758540F7C9FBD96819DB1CCAFA02AD2_CustomAttributesCacheGenerator_Point_get_X_mB5773A034271B65F35B0EBE8D176EBED31BDD77F,
	Point_tF2A77FD35758540F7C9FBD96819DB1CCAFA02AD2_CustomAttributesCacheGenerator_Point_set_X_m54B94C67233FD5F97B7E0306D871EF782BD0F1B0,
	Point_tF2A77FD35758540F7C9FBD96819DB1CCAFA02AD2_CustomAttributesCacheGenerator_Point_get_Y_mBD8045EA82B318BB7CF10C0254034BC1DB371005,
	Point_tF2A77FD35758540F7C9FBD96819DB1CCAFA02AD2_CustomAttributesCacheGenerator_Point_set_Y_mE3DBCC44273FA7B7767B4ECC39A617F073DF116D,
	Version_tAAE1FF0C7BC9E8EF7A41F6C0CB4E5CDF2461B8EE_CustomAttributesCacheGenerator_Version__ctor_m0A9D06FE0DE5B4742904A4F96CC301C59F134BF0____ecBlocks2,
	ECBlocks_t77C16AD393F680BE93AD01344E32228D99DE873A_CustomAttributesCacheGenerator_ECBlocks__ctor_m15B484185F4FCC853872DA366D6806A1CE99803D____ecBlocks1,
	zxing_unity_CustomAttributesCacheGenerator,
};
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_m_wrapNonExceptionThrows_0(L_0);
		return;
	}
}
