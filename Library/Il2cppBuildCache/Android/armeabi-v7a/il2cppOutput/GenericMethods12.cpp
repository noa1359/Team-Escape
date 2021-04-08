#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>


template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// UniRx.Async.IAwaiter`1<System.Object>
struct IAwaiter_1_tFD5DC317421403235686D3A61F3BEAA1D8D6700D;
// UniRx.Async.UniTaskCompletionSource`1<System.Object>
struct UniTaskCompletionSource_1_t984D25C090F87D0F4F2EC31B0D74FEBADA702172;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// Naninovel.IConverter
struct IConverter_t1ADBBA43AA1244A7C8D5C04262CB7B7712A7E306;
// System.String
struct String_t;
// System.Type
struct Type_t;
// Naninovel.ProjectResourceProvider/TypeRedirector
struct TypeRedirector_t98848CB1F9DE28AC0C64784B2EBA6FE55BA6DD1C;

IL2CPP_EXTERN_C RuntimeClass* IConverter_t1ADBBA43AA1244A7C8D5C04262CB7B7712A7E306_il2cpp_TypeInfo_var;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


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

// Naninovel.ProjectResourceProvider/TypeRedirector
struct  TypeRedirector_t98848CB1F9DE28AC0C64784B2EBA6FE55BA6DD1C  : public RuntimeObject
{
public:
	// System.Type Naninovel.ProjectResourceProvider/TypeRedirector::<SourceType>k__BackingField
	Type_t * ___U3CSourceTypeU3Ek__BackingField_0;
	// System.Type Naninovel.ProjectResourceProvider/TypeRedirector::<RedirectType>k__BackingField
	Type_t * ___U3CRedirectTypeU3Ek__BackingField_1;
	// Naninovel.IConverter Naninovel.ProjectResourceProvider/TypeRedirector::<RedirectToSourceConverter>k__BackingField
	RuntimeObject* ___U3CRedirectToSourceConverterU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CSourceTypeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TypeRedirector_t98848CB1F9DE28AC0C64784B2EBA6FE55BA6DD1C, ___U3CSourceTypeU3Ek__BackingField_0)); }
	inline Type_t * get_U3CSourceTypeU3Ek__BackingField_0() const { return ___U3CSourceTypeU3Ek__BackingField_0; }
	inline Type_t ** get_address_of_U3CSourceTypeU3Ek__BackingField_0() { return &___U3CSourceTypeU3Ek__BackingField_0; }
	inline void set_U3CSourceTypeU3Ek__BackingField_0(Type_t * value)
	{
		___U3CSourceTypeU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSourceTypeU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CRedirectTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(TypeRedirector_t98848CB1F9DE28AC0C64784B2EBA6FE55BA6DD1C, ___U3CRedirectTypeU3Ek__BackingField_1)); }
	inline Type_t * get_U3CRedirectTypeU3Ek__BackingField_1() const { return ___U3CRedirectTypeU3Ek__BackingField_1; }
	inline Type_t ** get_address_of_U3CRedirectTypeU3Ek__BackingField_1() { return &___U3CRedirectTypeU3Ek__BackingField_1; }
	inline void set_U3CRedirectTypeU3Ek__BackingField_1(Type_t * value)
	{
		___U3CRedirectTypeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRedirectTypeU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CRedirectToSourceConverterU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(TypeRedirector_t98848CB1F9DE28AC0C64784B2EBA6FE55BA6DD1C, ___U3CRedirectToSourceConverterU3Ek__BackingField_2)); }
	inline RuntimeObject* get_U3CRedirectToSourceConverterU3Ek__BackingField_2() const { return ___U3CRedirectToSourceConverterU3Ek__BackingField_2; }
	inline RuntimeObject** get_address_of_U3CRedirectToSourceConverterU3Ek__BackingField_2() { return &___U3CRedirectToSourceConverterU3Ek__BackingField_2; }
	inline void set_U3CRedirectToSourceConverterU3Ek__BackingField_2(RuntimeObject* value)
	{
		___U3CRedirectToSourceConverterU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRedirectToSourceConverterU3Ek__BackingField_2), (void*)value);
	}
};


// UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Object>
struct  AsyncUniTaskMethodBuilder_1_tDD7DCA035B684680C606A9836E15BC201F62776F 
{
public:
	// T UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder`1::result
	RuntimeObject * ___result_0;
	// UniRx.Async.UniTaskCompletionSource`1<T> UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder`1::promise
	UniTaskCompletionSource_1_t984D25C090F87D0F4F2EC31B0D74FEBADA702172 * ___promise_1;
	// System.Action UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder`1::moveNext
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___moveNext_2;

public:
	inline static int32_t get_offset_of_result_0() { return static_cast<int32_t>(offsetof(AsyncUniTaskMethodBuilder_1_tDD7DCA035B684680C606A9836E15BC201F62776F, ___result_0)); }
	inline RuntimeObject * get_result_0() const { return ___result_0; }
	inline RuntimeObject ** get_address_of_result_0() { return &___result_0; }
	inline void set_result_0(RuntimeObject * value)
	{
		___result_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___result_0), (void*)value);
	}

	inline static int32_t get_offset_of_promise_1() { return static_cast<int32_t>(offsetof(AsyncUniTaskMethodBuilder_1_tDD7DCA035B684680C606A9836E15BC201F62776F, ___promise_1)); }
	inline UniTaskCompletionSource_1_t984D25C090F87D0F4F2EC31B0D74FEBADA702172 * get_promise_1() const { return ___promise_1; }
	inline UniTaskCompletionSource_1_t984D25C090F87D0F4F2EC31B0D74FEBADA702172 ** get_address_of_promise_1() { return &___promise_1; }
	inline void set_promise_1(UniTaskCompletionSource_1_t984D25C090F87D0F4F2EC31B0D74FEBADA702172 * value)
	{
		___promise_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___promise_1), (void*)value);
	}

	inline static int32_t get_offset_of_moveNext_2() { return static_cast<int32_t>(offsetof(AsyncUniTaskMethodBuilder_1_tDD7DCA035B684680C606A9836E15BC201F62776F, ___moveNext_2)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_moveNext_2() const { return ___moveNext_2; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_moveNext_2() { return &___moveNext_2; }
	inline void set_moveNext_2(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___moveNext_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___moveNext_2), (void*)value);
	}
};


// UniRx.Async.UniTask`1<System.Object>
struct  UniTask_1_t6FCD254D72D89CEC552D0DA951202E35E8C7923E 
{
public:
	// T UniRx.Async.UniTask`1::result
	RuntimeObject * ___result_0;
	// UniRx.Async.IAwaiter`1<T> UniRx.Async.UniTask`1::awaiter
	RuntimeObject* ___awaiter_1;

public:
	inline static int32_t get_offset_of_result_0() { return static_cast<int32_t>(offsetof(UniTask_1_t6FCD254D72D89CEC552D0DA951202E35E8C7923E, ___result_0)); }
	inline RuntimeObject * get_result_0() const { return ___result_0; }
	inline RuntimeObject ** get_address_of_result_0() { return &___result_0; }
	inline void set_result_0(RuntimeObject * value)
	{
		___result_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___result_0), (void*)value);
	}

	inline static int32_t get_offset_of_awaiter_1() { return static_cast<int32_t>(offsetof(UniTask_1_t6FCD254D72D89CEC552D0DA951202E35E8C7923E, ___awaiter_1)); }
	inline RuntimeObject* get_awaiter_1() const { return ___awaiter_1; }
	inline RuntimeObject** get_address_of_awaiter_1() { return &___awaiter_1; }
	inline void set_awaiter_1(RuntimeObject* value)
	{
		___awaiter_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___awaiter_1), (void*)value);
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


// UniRx.Async.UniTask`1/Awaiter<System.Object>
struct  Awaiter_tFB8E8133A57BB3B9C3FDFDF0BA2FE30DA1221D7D 
{
public:
	// UniRx.Async.UniTask`1<T> UniRx.Async.UniTask`1/Awaiter::task
	UniTask_1_t6FCD254D72D89CEC552D0DA951202E35E8C7923E  ___task_0;

public:
	inline static int32_t get_offset_of_task_0() { return static_cast<int32_t>(offsetof(Awaiter_tFB8E8133A57BB3B9C3FDFDF0BA2FE30DA1221D7D, ___task_0)); }
	inline UniTask_1_t6FCD254D72D89CEC552D0DA951202E35E8C7923E  get_task_0() const { return ___task_0; }
	inline UniTask_1_t6FCD254D72D89CEC552D0DA951202E35E8C7923E * get_address_of_task_0() { return &___task_0; }
	inline void set_task_0(UniTask_1_t6FCD254D72D89CEC552D0DA951202E35E8C7923E  value)
	{
		___task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___task_0))->___result_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___task_0))->___awaiter_1), (void*)NULL);
		#endif
	}
};


// Naninovel.ProjectResourceProvider/TypeRedirector/<ToSourceAsync>d__10`1<System.Object>
struct  U3CToSourceAsyncU3Ed__10_1_t499F49E024F38BEF4E7FF94AD14216DC013B9CA7 
{
public:
	// System.Int32 Naninovel.ProjectResourceProvider/TypeRedirector/<ToSourceAsync>d__10`1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder`1<TSource> Naninovel.ProjectResourceProvider/TypeRedirector/<ToSourceAsync>d__10`1::<>t__builder
	AsyncUniTaskMethodBuilder_1_tDD7DCA035B684680C606A9836E15BC201F62776F  ___U3CU3Et__builder_1;
	// Naninovel.ProjectResourceProvider/TypeRedirector Naninovel.ProjectResourceProvider/TypeRedirector/<ToSourceAsync>d__10`1::<>4__this
	TypeRedirector_t98848CB1F9DE28AC0C64784B2EBA6FE55BA6DD1C * ___U3CU3E4__this_2;
	// System.Object Naninovel.ProjectResourceProvider/TypeRedirector/<ToSourceAsync>d__10`1::obj
	RuntimeObject * ___obj_3;
	// System.String Naninovel.ProjectResourceProvider/TypeRedirector/<ToSourceAsync>d__10`1::name
	String_t* ___name_4;
	// UniRx.Async.UniTask`1/Awaiter<System.Object> Naninovel.ProjectResourceProvider/TypeRedirector/<ToSourceAsync>d__10`1::<>u__1
	Awaiter_tFB8E8133A57BB3B9C3FDFDF0BA2FE30DA1221D7D  ___U3CU3Eu__1_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CToSourceAsyncU3Ed__10_1_t499F49E024F38BEF4E7FF94AD14216DC013B9CA7, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CToSourceAsyncU3Ed__10_1_t499F49E024F38BEF4E7FF94AD14216DC013B9CA7, ___U3CU3Et__builder_1)); }
	inline AsyncUniTaskMethodBuilder_1_tDD7DCA035B684680C606A9836E15BC201F62776F  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncUniTaskMethodBuilder_1_tDD7DCA035B684680C606A9836E15BC201F62776F * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncUniTaskMethodBuilder_1_tDD7DCA035B684680C606A9836E15BC201F62776F  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___result_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___promise_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___moveNext_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CToSourceAsyncU3Ed__10_1_t499F49E024F38BEF4E7FF94AD14216DC013B9CA7, ___U3CU3E4__this_2)); }
	inline TypeRedirector_t98848CB1F9DE28AC0C64784B2EBA6FE55BA6DD1C * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline TypeRedirector_t98848CB1F9DE28AC0C64784B2EBA6FE55BA6DD1C ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(TypeRedirector_t98848CB1F9DE28AC0C64784B2EBA6FE55BA6DD1C * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_obj_3() { return static_cast<int32_t>(offsetof(U3CToSourceAsyncU3Ed__10_1_t499F49E024F38BEF4E7FF94AD14216DC013B9CA7, ___obj_3)); }
	inline RuntimeObject * get_obj_3() const { return ___obj_3; }
	inline RuntimeObject ** get_address_of_obj_3() { return &___obj_3; }
	inline void set_obj_3(RuntimeObject * value)
	{
		___obj_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___obj_3), (void*)value);
	}

	inline static int32_t get_offset_of_name_4() { return static_cast<int32_t>(offsetof(U3CToSourceAsyncU3Ed__10_1_t499F49E024F38BEF4E7FF94AD14216DC013B9CA7, ___name_4)); }
	inline String_t* get_name_4() const { return ___name_4; }
	inline String_t** get_address_of_name_4() { return &___name_4; }
	inline void set_name_4(String_t* value)
	{
		___name_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_5() { return static_cast<int32_t>(offsetof(U3CToSourceAsyncU3Ed__10_1_t499F49E024F38BEF4E7FF94AD14216DC013B9CA7, ___U3CU3Eu__1_5)); }
	inline Awaiter_tFB8E8133A57BB3B9C3FDFDF0BA2FE30DA1221D7D  get_U3CU3Eu__1_5() const { return ___U3CU3Eu__1_5; }
	inline Awaiter_tFB8E8133A57BB3B9C3FDFDF0BA2FE30DA1221D7D * get_address_of_U3CU3Eu__1_5() { return &___U3CU3Eu__1_5; }
	inline void set_U3CU3Eu__1_5(Awaiter_tFB8E8133A57BB3B9C3FDFDF0BA2FE30DA1221D7D  value)
	{
		___U3CU3Eu__1_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Eu__1_5))->___task_0))->___result_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Eu__1_5))->___task_0))->___awaiter_1), (void*)NULL);
		#endif
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif


// System.Void UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Object>::Start<Naninovel.ProjectResourceProvider/TypeRedirector/<ToSourceAsync>d__10`1<System.Object>>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_Start_TisU3CToSourceAsyncU3Ed__10_1_t499F49E024F38BEF4E7FF94AD14216DC013B9CA7_mAF26375374BBFA7220868948E8839C71807F1DC4_gshared (AsyncUniTaskMethodBuilder_1_tDD7DCA035B684680C606A9836E15BC201F62776F * __this, U3CToSourceAsyncU3Ed__10_1_t499F49E024F38BEF4E7FF94AD14216DC013B9CA7 * ___stateMachine0, const RuntimeMethod* method);
// UniRx.Async.UniTask`1<!0> UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Object>::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_t6FCD254D72D89CEC552D0DA951202E35E8C7923E  AsyncUniTaskMethodBuilder_1_get_Task_m3655B00E8C21E23D392033C21E67F6D25697B369_gshared (AsyncUniTaskMethodBuilder_1_tDD7DCA035B684680C606A9836E15BC201F62776F * __this, const RuntimeMethod* method);

// Naninovel.IConverter Naninovel.ProjectResourceProvider/TypeRedirector::get_RedirectToSourceConverter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TypeRedirector_get_RedirectToSourceConverter_mB528D48E7892F483BB7AF2540A66824EB93FF893_inline (TypeRedirector_t98848CB1F9DE28AC0C64784B2EBA6FE55BA6DD1C * __this, const RuntimeMethod* method);
// System.Void UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Object>::Start<Naninovel.ProjectResourceProvider/TypeRedirector/<ToSourceAsync>d__10`1<System.Object>>(!!0&)
inline void AsyncUniTaskMethodBuilder_1_Start_TisU3CToSourceAsyncU3Ed__10_1_t499F49E024F38BEF4E7FF94AD14216DC013B9CA7_mAF26375374BBFA7220868948E8839C71807F1DC4 (AsyncUniTaskMethodBuilder_1_tDD7DCA035B684680C606A9836E15BC201F62776F * __this, U3CToSourceAsyncU3Ed__10_1_t499F49E024F38BEF4E7FF94AD14216DC013B9CA7 * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_tDD7DCA035B684680C606A9836E15BC201F62776F *, U3CToSourceAsyncU3Ed__10_1_t499F49E024F38BEF4E7FF94AD14216DC013B9CA7 *, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_Start_TisU3CToSourceAsyncU3Ed__10_1_t499F49E024F38BEF4E7FF94AD14216DC013B9CA7_mAF26375374BBFA7220868948E8839C71807F1DC4_gshared)(__this, ___stateMachine0, method);
}
// UniRx.Async.UniTask`1<!0> UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Object>::get_Task()
inline UniTask_1_t6FCD254D72D89CEC552D0DA951202E35E8C7923E  AsyncUniTaskMethodBuilder_1_get_Task_m3655B00E8C21E23D392033C21E67F6D25697B369 (AsyncUniTaskMethodBuilder_1_tDD7DCA035B684680C606A9836E15BC201F62776F * __this, const RuntimeMethod* method)
{
	return ((  UniTask_1_t6FCD254D72D89CEC552D0DA951202E35E8C7923E  (*) (AsyncUniTaskMethodBuilder_1_tDD7DCA035B684680C606A9836E15BC201F62776F *, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_get_Task_m3655B00E8C21E23D392033C21E67F6D25697B369_gshared)(__this, method);
}
// TSource Naninovel.ProjectResourceProvider/TypeRedirector::ToSource<System.Object>(System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TypeRedirector_ToSource_TisRuntimeObject_mC3788C147B362615CBF3D5E1ED95381F7127B935_gshared (TypeRedirector_t98848CB1F9DE28AC0C64784B2EBA6FE55BA6DD1C * __this, RuntimeObject * ___obj0, String_t* ___name1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConverter_t1ADBBA43AA1244A7C8D5C04262CB7B7712A7E306_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (TSource)RedirectToSourceConverter.Convert(obj, name);
		NullCheck((TypeRedirector_t98848CB1F9DE28AC0C64784B2EBA6FE55BA6DD1C *)__this);
		RuntimeObject* L_0;
		L_0 = TypeRedirector_get_RedirectToSourceConverter_mB528D48E7892F483BB7AF2540A66824EB93FF893_inline((TypeRedirector_t98848CB1F9DE28AC0C64784B2EBA6FE55BA6DD1C *)__this, /*hidden argument*/NULL);
		RuntimeObject * L_1 = ___obj0;
		String_t* L_2 = ___name1;
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject * L_3;
		L_3 = InterfaceFuncInvoker2< RuntimeObject *, RuntimeObject *, String_t* >::Invoke(0 /* System.Object Naninovel.IConverter::Convert(System.Object,System.String) */, IConverter_t1ADBBA43AA1244A7C8D5C04262CB7B7712A7E306_il2cpp_TypeInfo_var, (RuntimeObject*)L_0, (RuntimeObject *)L_1, (String_t*)L_2);
		return (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
	}
}
// UniRx.Async.UniTask`1<TSource> Naninovel.ProjectResourceProvider/TypeRedirector::ToSourceAsync<System.Object>(System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_t6FCD254D72D89CEC552D0DA951202E35E8C7923E  TypeRedirector_ToSourceAsync_TisRuntimeObject_mC12BD274AECB4F8C450710C845B33E779883E3B1_gshared (TypeRedirector_t98848CB1F9DE28AC0C64784B2EBA6FE55BA6DD1C * __this, RuntimeObject * ___obj0, String_t* ___name1, const RuntimeMethod* method)
{
	U3CToSourceAsyncU3Ed__10_1_t499F49E024F38BEF4E7FF94AD14216DC013B9CA7  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncUniTaskMethodBuilder_1_tDD7DCA035B684680C606A9836E15BC201F62776F  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		RuntimeObject * L_0 = ___obj0;
		(&V_0)->set_obj_3(L_0);
		String_t* L_1 = ___name1;
		(&V_0)->set_name_4(L_1);
		AsyncUniTaskMethodBuilder_1_tDD7DCA035B684680C606A9836E15BC201F62776F  L_2;
		L_2 = ((  AsyncUniTaskMethodBuilder_1_tDD7DCA035B684680C606A9836E15BC201F62776F  (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		(&V_0)->set_U3CU3Et__builder_1(L_2);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CToSourceAsyncU3Ed__10_1_t499F49E024F38BEF4E7FF94AD14216DC013B9CA7  L_3 = V_0;
		AsyncUniTaskMethodBuilder_1_tDD7DCA035B684680C606A9836E15BC201F62776F  L_4 = (AsyncUniTaskMethodBuilder_1_tDD7DCA035B684680C606A9836E15BC201F62776F )L_3.get_U3CU3Et__builder_1();
		V_1 = (AsyncUniTaskMethodBuilder_1_tDD7DCA035B684680C606A9836E15BC201F62776F )L_4;
		AsyncUniTaskMethodBuilder_1_Start_TisU3CToSourceAsyncU3Ed__10_1_t499F49E024F38BEF4E7FF94AD14216DC013B9CA7_mAF26375374BBFA7220868948E8839C71807F1DC4((AsyncUniTaskMethodBuilder_1_tDD7DCA035B684680C606A9836E15BC201F62776F *)(AsyncUniTaskMethodBuilder_1_tDD7DCA035B684680C606A9836E15BC201F62776F *)(&V_1), (U3CToSourceAsyncU3Ed__10_1_t499F49E024F38BEF4E7FF94AD14216DC013B9CA7 *)(U3CToSourceAsyncU3Ed__10_1_t499F49E024F38BEF4E7FF94AD14216DC013B9CA7 *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		AsyncUniTaskMethodBuilder_1_tDD7DCA035B684680C606A9836E15BC201F62776F * L_5 = (AsyncUniTaskMethodBuilder_1_tDD7DCA035B684680C606A9836E15BC201F62776F *)(&V_0)->get_address_of_U3CU3Et__builder_1();
		UniTask_1_t6FCD254D72D89CEC552D0DA951202E35E8C7923E  L_6;
		L_6 = AsyncUniTaskMethodBuilder_1_get_Task_m3655B00E8C21E23D392033C21E67F6D25697B369((AsyncUniTaskMethodBuilder_1_tDD7DCA035B684680C606A9836E15BC201F62776F *)(AsyncUniTaskMethodBuilder_1_tDD7DCA035B684680C606A9836E15BC201F62776F *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3));
		return (UniTask_1_t6FCD254D72D89CEC552D0DA951202E35E8C7923E )L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TypeRedirector_get_RedirectToSourceConverter_mB528D48E7892F483BB7AF2540A66824EB93FF893_inline (TypeRedirector_t98848CB1F9DE28AC0C64784B2EBA6FE55BA6DD1C * __this, const RuntimeMethod* method)
{
	{
		// public IConverter RedirectToSourceConverter { get; }
		RuntimeObject* L_0 = __this->get_U3CRedirectToSourceConverterU3Ek__BackingField_2();
		return L_0;
	}
}
