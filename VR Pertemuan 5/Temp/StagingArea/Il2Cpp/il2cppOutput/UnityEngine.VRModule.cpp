﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>



// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Action`1<System.String>
struct Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3;
// System.Delegate
struct Delegate_t;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRDevice_t2C2B952750A66CA935A8A94FD6B022F629D0B9CA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t XRDevice_InvokeDeviceLoaded_m3BDF6825A2A56E4923D4E6593C7BA2949B6A3581_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRDevice__cctor_mC83C1293819B81E68EC72D01A5CC107DFE29B98C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRDevice_add_deviceLoaded_m47278AC2DA3262370FFDFF1F7FDAFE5F002DA528_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRDevice_remove_deviceLoaded_m8F6F831CFE19F69A5DD1ACFEC34918912302E25E_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t48EDC7BC6664810A516BA165C1DF8F3DE2ECA8E0 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.String
struct  String_t  : public RuntimeObject
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
struct  ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
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

// UnityEngine.XR.XRDevice
struct  XRDevice_t2C2B952750A66CA935A8A94FD6B022F629D0B9CA  : public RuntimeObject
{
public:

public:
};

struct XRDevice_t2C2B952750A66CA935A8A94FD6B022F629D0B9CA_StaticFields
{
public:
	// System.Action`1<System.String> UnityEngine.XR.XRDevice::deviceLoaded
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___deviceLoaded_0;

public:
	inline static int32_t get_offset_of_deviceLoaded_0() { return static_cast<int32_t>(offsetof(XRDevice_t2C2B952750A66CA935A8A94FD6B022F629D0B9CA_StaticFields, ___deviceLoaded_0)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_deviceLoaded_0() const { return ___deviceLoaded_0; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_deviceLoaded_0() { return &___deviceLoaded_0; }
	inline void set_deviceLoaded_0(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___deviceLoaded_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___deviceLoaded_0), (void*)value);
	}
};


// UnityEngine.XR.XRSettings
struct  XRSettings_tD290B0A8EE92908DFAA8B103B157FEAF60AE0350  : public RuntimeObject
{
public:

public:
};


// System.Boolean
struct  Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
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


// System.Int32
struct  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Void
struct  Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
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


// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.Action`1<System.String>
struct  Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Action`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);

// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4 (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Void System.Action`1<System.String>::Invoke(!0)
inline void Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6 (Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * __this, String_t* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 *, String_t*, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.IntPtr UnityEngine.XR.XRDevice::GetNativePtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t XRDevice_GetNativePtr_m4ACC65CAD3503CD14ED7682F6682458AA146951D (const RuntimeMethod* method)
{
	typedef intptr_t (*XRDevice_GetNativePtr_m4ACC65CAD3503CD14ED7682F6682458AA146951D_ftn) ();
	static XRDevice_GetNativePtr_m4ACC65CAD3503CD14ED7682F6682458AA146951D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (XRDevice_GetNativePtr_m4ACC65CAD3503CD14ED7682F6682458AA146951D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.XRDevice::GetNativePtr()");
	intptr_t retVal = _il2cpp_icall_func();
	return retVal;
}
// System.Void UnityEngine.XR.XRDevice::add_deviceLoaded(System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDevice_add_deviceLoaded_m47278AC2DA3262370FFDFF1F7FDAFE5F002DA528 (Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRDevice_add_deviceLoaded_m47278AC2DA3262370FFDFF1F7FDAFE5F002DA528_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * V_0 = NULL;
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * V_1 = NULL;
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(XRDevice_t2C2B952750A66CA935A8A94FD6B022F629D0B9CA_il2cpp_TypeInfo_var);
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_0 = ((XRDevice_t2C2B952750A66CA935A8A94FD6B022F629D0B9CA_StaticFields*)il2cpp_codegen_static_fields_for(XRDevice_t2C2B952750A66CA935A8A94FD6B022F629D0B9CA_il2cpp_TypeInfo_var))->get_deviceLoaded_0();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_1 = V_0;
		V_1 = L_1;
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_2 = V_1;
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 *)CastclassSealed((RuntimeObject*)L_4, Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3_il2cpp_TypeInfo_var));
		IL2CPP_RUNTIME_CLASS_INIT(XRDevice_t2C2B952750A66CA935A8A94FD6B022F629D0B9CA_il2cpp_TypeInfo_var);
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_5 = V_2;
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_6 = V_1;
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_7 = InterlockedCompareExchangeImpl<Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 *>((Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 **)(((XRDevice_t2C2B952750A66CA935A8A94FD6B022F629D0B9CA_StaticFields*)il2cpp_codegen_static_fields_for(XRDevice_t2C2B952750A66CA935A8A94FD6B022F629D0B9CA_il2cpp_TypeInfo_var))->get_address_of_deviceLoaded_0()), L_5, L_6);
		V_0 = L_7;
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_8 = V_0;
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 *)L_8) == ((RuntimeObject*)(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.XR.XRDevice::remove_deviceLoaded(System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDevice_remove_deviceLoaded_m8F6F831CFE19F69A5DD1ACFEC34918912302E25E (Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRDevice_remove_deviceLoaded_m8F6F831CFE19F69A5DD1ACFEC34918912302E25E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * V_0 = NULL;
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * V_1 = NULL;
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(XRDevice_t2C2B952750A66CA935A8A94FD6B022F629D0B9CA_il2cpp_TypeInfo_var);
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_0 = ((XRDevice_t2C2B952750A66CA935A8A94FD6B022F629D0B9CA_StaticFields*)il2cpp_codegen_static_fields_for(XRDevice_t2C2B952750A66CA935A8A94FD6B022F629D0B9CA_il2cpp_TypeInfo_var))->get_deviceLoaded_0();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_1 = V_0;
		V_1 = L_1;
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_2 = V_1;
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 *)CastclassSealed((RuntimeObject*)L_4, Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3_il2cpp_TypeInfo_var));
		IL2CPP_RUNTIME_CLASS_INIT(XRDevice_t2C2B952750A66CA935A8A94FD6B022F629D0B9CA_il2cpp_TypeInfo_var);
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_5 = V_2;
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_6 = V_1;
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_7 = InterlockedCompareExchangeImpl<Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 *>((Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 **)(((XRDevice_t2C2B952750A66CA935A8A94FD6B022F629D0B9CA_StaticFields*)il2cpp_codegen_static_fields_for(XRDevice_t2C2B952750A66CA935A8A94FD6B022F629D0B9CA_il2cpp_TypeInfo_var))->get_address_of_deviceLoaded_0()), L_5, L_6);
		V_0 = L_7;
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_8 = V_0;
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 *)L_8) == ((RuntimeObject*)(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.XR.XRDevice::InvokeDeviceLoaded(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDevice_InvokeDeviceLoaded_m3BDF6825A2A56E4923D4E6593C7BA2949B6A3581 (String_t* ___loadedDeviceName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRDevice_InvokeDeviceLoaded_m3BDF6825A2A56E4923D4E6593C7BA2949B6A3581_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		IL2CPP_RUNTIME_CLASS_INIT(XRDevice_t2C2B952750A66CA935A8A94FD6B022F629D0B9CA_il2cpp_TypeInfo_var);
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_0 = ((XRDevice_t2C2B952750A66CA935A8A94FD6B022F629D0B9CA_StaticFields*)il2cpp_codegen_static_fields_for(XRDevice_t2C2B952750A66CA935A8A94FD6B022F629D0B9CA_il2cpp_TypeInfo_var))->get_deviceLoaded_0();
		V_0 = (bool)((!(((RuntimeObject*)(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XRDevice_t2C2B952750A66CA935A8A94FD6B022F629D0B9CA_il2cpp_TypeInfo_var);
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_2 = ((XRDevice_t2C2B952750A66CA935A8A94FD6B022F629D0B9CA_StaticFields*)il2cpp_codegen_static_fields_for(XRDevice_t2C2B952750A66CA935A8A94FD6B022F629D0B9CA_il2cpp_TypeInfo_var))->get_deviceLoaded_0();
		String_t* L_3 = ___loadedDeviceName0;
		NullCheck(L_2);
		Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6(L_2, L_3, /*hidden argument*/Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var);
	}

IL_001b:
	{
		return;
	}
}
// System.Void UnityEngine.XR.XRDevice::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDevice__cctor_mC83C1293819B81E68EC72D01A5CC107DFE29B98C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRDevice__cctor_mC83C1293819B81E68EC72D01A5CC107DFE29B98C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((XRDevice_t2C2B952750A66CA935A8A94FD6B022F629D0B9CA_StaticFields*)il2cpp_codegen_static_fields_for(XRDevice_t2C2B952750A66CA935A8A94FD6B022F629D0B9CA_il2cpp_TypeInfo_var))->set_deviceLoaded_0((Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 *)NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.XR.XRSettings::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRSettings_get_enabled_m970BB98BF899D943776BE6EB66FE40AA9C12A902 (const RuntimeMethod* method)
{
	typedef bool (*XRSettings_get_enabled_m970BB98BF899D943776BE6EB66FE40AA9C12A902_ftn) ();
	static XRSettings_get_enabled_m970BB98BF899D943776BE6EB66FE40AA9C12A902_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (XRSettings_get_enabled_m970BB98BF899D943776BE6EB66FE40AA9C12A902_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.XRSettings::get_enabled()");
	bool retVal = _il2cpp_icall_func();
	return retVal;
}
// System.Int32 UnityEngine.XR.XRSettings::get_eyeTextureWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRSettings_get_eyeTextureWidth_m6202CB8B350531730FAFBBC6CF64EECCA3CBD860 (const RuntimeMethod* method)
{
	typedef int32_t (*XRSettings_get_eyeTextureWidth_m6202CB8B350531730FAFBBC6CF64EECCA3CBD860_ftn) ();
	static XRSettings_get_eyeTextureWidth_m6202CB8B350531730FAFBBC6CF64EECCA3CBD860_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (XRSettings_get_eyeTextureWidth_m6202CB8B350531730FAFBBC6CF64EECCA3CBD860_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.XRSettings::get_eyeTextureWidth()");
	int32_t retVal = _il2cpp_icall_func();
	return retVal;
}
// System.Int32 UnityEngine.XR.XRSettings::get_eyeTextureHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRSettings_get_eyeTextureHeight_m045874DF2D8935D59582C65D8EA9A0A3D96D091A (const RuntimeMethod* method)
{
	typedef int32_t (*XRSettings_get_eyeTextureHeight_m045874DF2D8935D59582C65D8EA9A0A3D96D091A_ftn) ();
	static XRSettings_get_eyeTextureHeight_m045874DF2D8935D59582C65D8EA9A0A3D96D091A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (XRSettings_get_eyeTextureHeight_m045874DF2D8935D59582C65D8EA9A0A3D96D091A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.XRSettings::get_eyeTextureHeight()");
	int32_t retVal = _il2cpp_icall_func();
	return retVal;
}
// System.String UnityEngine.XR.XRSettings::get_loadedDeviceName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XRSettings_get_loadedDeviceName_m1E091DB259635ACAE9C3B77980CDB00AC06B6D4C (const RuntimeMethod* method)
{
	typedef String_t* (*XRSettings_get_loadedDeviceName_m1E091DB259635ACAE9C3B77980CDB00AC06B6D4C_ftn) ();
	static XRSettings_get_loadedDeviceName_m1E091DB259635ACAE9C3B77980CDB00AC06B6D4C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (XRSettings_get_loadedDeviceName_m1E091DB259635ACAE9C3B77980CDB00AC06B6D4C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.XRSettings::get_loadedDeviceName()");
	String_t* retVal = _il2cpp_icall_func();
	return retVal;
}
// System.String[] UnityEngine.XR.XRSettings::get_supportedDevices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* XRSettings_get_supportedDevices_m48F7F0CC911EB45AD210523FA957A4E8412AE93F (const RuntimeMethod* method)
{
	typedef StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* (*XRSettings_get_supportedDevices_m48F7F0CC911EB45AD210523FA957A4E8412AE93F_ftn) ();
	static XRSettings_get_supportedDevices_m48F7F0CC911EB45AD210523FA957A4E8412AE93F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (XRSettings_get_supportedDevices_m48F7F0CC911EB45AD210523FA957A4E8412AE93F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.XRSettings::get_supportedDevices()");
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* retVal = _il2cpp_icall_func();
	return retVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
