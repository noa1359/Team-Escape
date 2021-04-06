﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct VirtFuncInvoker6
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericVirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo>
struct AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349;
// System.Comparison`1<System.TimeZoneInfo/AdjustmentRule>
struct Comparison_1_tDAC4CC47FDC3DBE8E8A9DF5789C71CAA2B42AEC1;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Threading.Tasks.TaskScheduler,System.Object>
struct ConditionalWeakTable_2_t93AD246458B1FCACF9EE33160B2DB2E06AB42CD8;
// System.Collections.Generic.Dictionary`2<System.Threading.IAsyncLocal,System.Object>
struct Dictionary_2_tED8EC0DF62452D89154D9584AC19F62C79BF3938;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162;
// System.EventHandler`1<System.Threading.Tasks.UnobservedTaskExceptionEventArgs>
struct EventHandler_1_t7DFDECE3AD515844324382F8BBCAC2975ABEE63A;
// System.Func`1<System.Threading.ManualResetEvent>
struct Func_1_t5676838A0CF4B34BFAE91E1902234AA2C5C4BE05;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Int32>>
struct Func_2_t53CFE8804C8D1C2FE8CC9204CF5DA5B98EC444D0;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.String>>
struct Func_2_tC39B0B05F6B9D37E14D29C14F1C4BCEAE6381FAC;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>>
struct Func_2_t59E5EE359C575BAE84083A82848C07C4F342D995;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>>
struct Func_2_t99C75F5817AC4490145734D823B7E8ED9A840728;
// System.Func`2<System.Object,System.Int32>
struct Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C;
// System.Func`2<System.Object,System.String>
struct Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82;
// System.Collections.Generic.IEnumerable`1<System.Threading.IThreadPoolWorkItem>
struct IEnumerable_1_t451115FF3A7A124BC57DB9E571D397027C46E032;
// System.Collections.Generic.IEnumerable`1<System.Threading.Tasks.Task>
struct IEnumerable_1_t82E05038F75AC719F3B4316F5EAA7D69D4B4058D;
// System.Collections.Generic.IEnumerator`1<System.Threading.IThreadPoolWorkItem>
struct IEnumerator_1_t82C37FF5CC100049B753E6D34F8FF8D8BD37D587;
// System.Collections.Generic.IEnumerator`1<System.Threading.Tasks.Task>
struct IEnumerator_1_tF23571ED34DA49129D62E2DC30D791E4E7247784;
// System.Collections.Generic.IList`1<System.Threading.Tasks.Task>
struct IList_1_tE4D1BB8BFE34E53959D1BBDB304176E3D5816699;
// System.Collections.Generic.List`1<System.Threading.IAsyncLocal>
struct List_1_t053589A158AAF0B471CF80825616560409AF43D4;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<System.Threading.Tasks.Task>
struct List_1_tA3E7ECFCA71D1B53362EA1A7ED7D095F0C221DFB;
// System.Collections.Generic.List`1<System.Threading.Timer>
struct List_1_t537143C180C9FB69517B6C26205D2AA824591563;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// System.Threading.Tasks.Shared`1<System.Threading.CancellationTokenRegistration>
struct Shared_1_t333C4F81656CB6CBFC971E543F8E9995A08F400B;
// System.Threading.SparselyPopulatedArrayFragment`1<System.Threading.CancellationCallbackInfo>
struct SparselyPopulatedArrayFragment_1_t93197EF47D6A025755987003D5D62F3AED371C21;
// System.Threading.Tasks.TaskFactory`1<System.Int32>
struct TaskFactory_1_tCA6286B86C0D5D6C00D5A0DFE56F7E48A482DD5E;
// System.Threading.Tasks.TaskFactory`1<System.String>
struct TaskFactory_1_t9179B7311982EC4F85FDFBA0C89416AB321E74CB;
// System.Threading.Tasks.TaskFactory`1<System.Threading.Tasks.Task>
struct TaskFactory_1_t4720246ADD352D9004AFCAA652A1A240B620DE4E;
// System.Threading.Tasks.TaskFactory`1<System.Threading.Tasks.VoidTaskResult>
struct TaskFactory_1_tFD6C5BE88624171209DEA49929EA276401AC9F4B;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17;
// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>
struct Task_1_t24E932728D4BE67BFA41487F43AE4FAEBBAC7284;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3;
// System.Tuple`2<System.Object,System.Char>
struct Tuple_2_t844F36656ADFD9CCC9527B1F549244BD1884E5F6;
// System.Tuple`2<System.Object,System.Object>
struct Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1;
// System.Tuple`2<System.IO.TextWriter,System.Char>
struct Tuple_2_t633ADA252A8DAC01B7681557DA2442C7F355B339;
// System.Tuple`2<System.IO.TextWriter,System.String>
struct Tuple_2_t1E2E0182AF85006F49B500E9CD9188F1FB239A36;
// System.Tuple`4<System.Object,System.Object,System.Int32,System.Int32>
struct Tuple_4_t936566050E79A53330A93469CAF15575A12A114D;
// System.Tuple`4<System.IO.TextReader,System.Char[],System.Int32,System.Int32>
struct Tuple_4_t16778489594C50623A8E8690A84D09A8BB36D31E;
// System.Tuple`4<System.IO.TextWriter,System.Char[],System.Int32,System.Int32>
struct Tuple_4_t8910349157062B8CCD348478BF6EC6BE8593A207;
// System.Boolean[]
struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Threading.IThreadPoolWorkItem[]
struct IThreadPoolWorkItemU5BU5D_tA8F5E15B9A678486C494BA29BA2B36165FF28738;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.SByte[]
struct SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Threading.Timer[]
struct TimerU5BU5D_t205623A7C76F326689222249DAF432D18EB88387;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.Threading.ThreadPoolWorkQueue/WorkStealingQueue[]
struct WorkStealingQueueU5BU5D_t0A012EBE228687C2D6BB90870F783BA69EEFBD8C;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056;
// System.Globalization.Calendar
struct Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A;
// System.Threading.CancellationCallbackInfo
struct CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3;
// System.Char
struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E;
// System.Globalization.CompareInfo
struct CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// System.Globalization.CultureData
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529;
// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90;
// System.Text.DecoderFallback
struct DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D;
// System.Text.DecoderFallbackBuffer
struct DecoderFallbackBuffer_t236B3D4172A9BAD1C2150ED78958227F8F20C94B;
// System.Text.DecoderNLS
struct DecoderNLS_tE5B1B7D68B698C0B65FBEE94EAE2453FFD3D538A;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Text.EncoderFallback
struct EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4;
// System.Text.EncoderFallbackBuffer
struct EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0;
// System.Text.EncoderNLS
struct EncoderNLS_tB071198C3F300408FDED1BD2C822F46A25115712;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// System.Threading.EventWaitHandle
struct EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C;
// System.Exception
struct Exception_t;
// System.Threading.ExecutionContext
struct ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_tAE063F84A60E1058FCA4E3EA9F555D3462641F7D;
// System.Collections.IComparer
struct IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// System.IFormatProvider
struct IFormatProvider_tF2AECC4B14F41D36718920D67F930CED940412DF;
// System.Runtime.Serialization.IFormatterConverter
struct IFormatterConverter_t2A667D8777429024D8A3CB3D9AE29EA79FEA6176;
// System.Security.Principal.IPrincipal
struct IPrincipal_t850ACE1F48327B64F266DD2C6FD8C5F56E4889E2;
// System.Threading.IThreadPoolWorkItem
struct IThreadPoolWorkItem_t03798D5DAC916ADE8FBCBF44C0FD3C307C571C36;
// System.Runtime.Remoting.Messaging.IllogicalCallContext
struct IllogicalCallContext_tFC01A2B688E85D44897206E4ACD81E050D25846E;
// System.Threading.InternalThread
struct InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB;
// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB;
// System.Collections.ListDictionaryInternal
struct ListDictionaryInternal_t41BC521E191A070D69C4D98B996314424BBFDA8A;
// System.LocalDataStoreHolder
struct LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146;
// System.LocalDataStoreMgr
struct LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A;
// System.Runtime.Remoting.Messaging.LogicalCallContext
struct LogicalCallContext_tB537C2A13F19FCC7EBC74757A415F2CA5C8FA1C3;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA;
// System.Threading.ManualResetEventSlim
struct ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.MulticastDelegate
struct MulticastDelegate_t;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1;
// System.Runtime.Serialization.SerializationException
struct SerializationException_tDB38C13A2ABF407C381E3F332D197AC1AD097A92;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1;
// System.Collections.SortedList
struct SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165;
// System.Threading.Tasks.StackGuard
struct StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Threading.SynchronizationContext
struct SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069;
// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60;
// System.Threading.Tasks.TaskExceptionHolder
struct TaskExceptionHolder_tDB382D854702E5F90A8C3764236EF24FD6016684;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D;
// System.Globalization.TextInfo
struct TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C;
// System.IO.TextReader
struct TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F;
// System.IO.TextWriter
struct TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643;
// System.Threading.Thread
struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414;
// System.Threading.ThreadStart
struct ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687;
// System.Threading.Timer
struct Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB;
// System.Threading.TimerCallback
struct TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814;
// System.Type
struct Type_t;
// System.TypeName
struct TypeName_t714DD2B9BA4134CE17349D95281A1F750D78D60F;
// System.Text.UTF32Encoding
struct UTF32Encoding_t54B51C8FAC5B2EAB4BDFACBBA06DB6117A38D014;
// System.Text.UTF7Encoding
struct UTF7Encoding_tA5454D96973119953BD301F20B9E59C77B5FA076;
// System.Text.UTF8Encoding
struct UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282;
// System.Text.UnicodeEncoding
struct UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.Threading.WaitCallback
struct WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319;
// System.Collections.ListDictionaryInternal/DictionaryNode
struct DictionaryNode_t9A01FA01782F6D162BA158736A5FB81CB893A33C;
// System.Collections.SortedList/KeyList
struct KeyList_t90FF026A62D56329DEFC1B768358977E70839881;
// System.Collections.SortedList/ValueList
struct ValueList_t3A0529729679D12F7F3AF77C48E10D5E6009CD3D;
// System.Threading.Tasks.SynchronizationContextAwaitTaskContinuation/<>c
struct U3CU3Ec_t97DE2C4F7EF16C425D7DB74D03F1E0947B3D9AF2;
// System.Threading.Tasks.Task/<>c
struct U3CU3Ec_t92C182BCED0D720544B8BEB755769004B9E0CA12;
// System.Threading.Tasks.Task/<>c__DisplayClass178_0
struct U3CU3Ec__DisplayClass178_0_t26DA6AADD06D410B9511EEAE86E81BB72E13577B;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;
// System.Threading.Tasks.Task/DelayPromise
struct DelayPromise_t9761A33FC8F83592A4D61777C23985D6958E25D8;
// System.Threading.Tasks.Task/SetOnInvokeMres
struct SetOnInvokeMres_t1C10274710F867516EE9E1EC3ABF0BA5EEF9ABAD;
// System.Threading.Tasks.TaskFactory/CompleteOnInvokePromise
struct CompleteOnInvokePromise_tCEBDCB9BD36D0EF373E5ACBC9262935A6EED4C18;
// System.Threading.Tasks.TaskScheduler/SystemThreadingTasks_TaskSchedulerDebugView
struct SystemThreadingTasks_TaskSchedulerDebugView_t27B3B8AEFC0238C9F9C58E238DA86DCC58279612;
// System.Threading.Tasks.TaskSchedulerAwaitTaskContinuation/<>c
struct U3CU3Ec_t832C49A1D40F5D7429F13CAA78ADF77459CA87FE;
// System.IO.TextReader/<>c
struct U3CU3Ec_t5ECA46CBAA9AA77646C20CB57E986587D87A71BF;
// System.IO.TextReader/NullTextReader
struct NullTextReader_tFC192D86C5C095C98156DAF472F7520472039F95;
// System.IO.TextReader/SyncTextReader
struct SyncTextReader_tA4C7DEEF5A129E5D1287BDE2D5335AD7F8EEAA84;
// System.IO.TextWriter/<>c
struct U3CU3Ec_t1A707D491A359996794A63E517A0665899B4893A;
// System.IO.TextWriter/NullTextWriter
struct NullTextWriter_t1D00E99220711EA2E249B67A50372CED994A125F;
// System.IO.TextWriter/SyncTextWriter
struct SyncTextWriter_t4B1FF6119ABECE598E0666C85337FA3F11FF785D;
// System.Threading.ThreadPool/<EnumerateQueuedWorkItems>d__21
struct U3CEnumerateQueuedWorkItemsU3Ed__21_tF069F486DA9CB1A00C0998401737C7FA776F53BD;
// System.Threading.Tasks.ThreadPoolTaskScheduler/<FilterTasksFromWorkItems>d__7
struct U3CFilterTasksFromWorkItemsU3Ed__7_tD560179E466F2CE2E14AD67C91EC9739A58C9040;
// System.Threading.ThreadPoolWorkQueue/QueueSegment
struct QueueSegment_tBF384DF1C15001FBEDB17378EB22EA233A89A0A4;
// System.Threading.ThreadPoolWorkQueue/WorkStealingQueue
struct WorkStealingQueue_t0D430FD823CAB6C050301484CE7516E1573728A0;
// System.TimeZoneInfo/<>c
struct U3CU3Ec_t24F903F915888347E8B19C16314DF4C75387324E;
// System.TimeZoneInfo/AdjustmentRule
struct AdjustmentRule_t15EC10F91D4E8CC287CF8610D8D24BD636A23304;
// System.TimeZoneInfo/TIME_ZONE_INFORMATION
struct TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578;
// System.Threading.Timer/Scheduler
struct Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8;
// System.Threading.Timer/TimerComparer
struct TimerComparer_t1899647CFE875978843BE8ABA01C10956F1E740B;
// System.TypeIdentifiers/Display
struct Display_tB07FE33B5E37AC259B2FCC8EC820AC5CEDEAC41E;
// System.TypeNames/ATypeName
struct ATypeName_t19F245ED1619C78770F92C899C4FE364DBF30861;
// System.Text.UTF32Encoding/UTF32Decoder
struct UTF32Decoder_t38867B08AD03138702C713129B79529EC4528DB7;
// System.Text.UTF7Encoding/Decoder
struct Decoder_t6C0639E0DF1E52128429AC770CA9F2557A8E54C9;
// System.Text.UTF7Encoding/DecoderUTF7Fallback
struct DecoderUTF7Fallback_tBEF9A09732FAB23368825AE7C14C0EBF1F9028A8;
// System.Text.UTF7Encoding/DecoderUTF7FallbackBuffer
struct DecoderUTF7FallbackBuffer_tED3431DB4A6B4F48D1F1433A8E672F8B110D819A;
// System.Text.UTF7Encoding/Encoder
struct Encoder_tF895184EA91019AA3995A8547FD56A3E0D16D1B4;
// System.Text.UTF8Encoding/UTF8Decoder
struct UTF8Decoder_tD2359F0F52206B911EBC3222E627191C829F4C65;
// System.Text.UTF8Encoding/UTF8Encoder
struct UTF8Encoder_t3408DBF93D79A981F50954F660E33BA13FE29FD3;
// System.Text.UnicodeEncoding/Decoder
struct Decoder_tC3DC16951ED8FCF98278FC7F0804070A9C218109;
// Microsoft.Win32.Win32Native/WIN32_FIND_DATA
struct WIN32_FIND_DATA_tE88493B22E1CDD2E595CA4F800949555399AB3C7;
// System.Console/WindowsConsole/WindowsCancelHandler
struct WindowsCancelHandler_tFD0F0B721F93ACA04D9CD9340DA39075A8FF2ACF;
// System.Collections.ListDictionaryInternal/NodeKeyValueCollection/NodeKeyValueEnumerator
struct NodeKeyValueEnumerator_tE6977A5C0AF3F0E001B951488690F2693BAB3955;
// System.IO.Stream/SynchronousAsyncResult/<>c
struct U3CU3Ec_t0B9BA392160C64553C28F93C014479CD7CDC88CB;

IL2CPP_EXTERN_C RuntimeClass* Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AdjustmentRule_t15EC10F91D4E8CC287CF8610D8D24BD636A23304_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DayOfWeek_t9E9D87E7A85C119F741167E9F8C613ABFB0A4AC7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DecoderUTF7FallbackBuffer_tED3431DB4A6B4F48D1F1433A8E672F8B110D819A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DecoderUTF7Fallback_tBEF9A09732FAB23368825AE7C14C0EBF1F9028A8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DelayPromise_t9761A33FC8F83592A4D61777C23985D6958E25D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t170EC74C9EBD063821F8431C6A942A9387BC7BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t451115FF3A7A124BC57DB9E571D397027C46E032_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t82C37FF5CC100049B753E6D34F8FF8D8BD37D587_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_tE4D1BB8BFE34E53959D1BBDB304176E3D5816699_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IThreadPoolWorkItemU5BU5D_tA8F5E15B9A678486C494BA29BA2B36165FF28738_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t537143C180C9FB69517B6C26205D2AA824591563_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SerializationException_tDB38C13A2ABF407C381E3F332D197AC1AD097A92_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_1_t24E932728D4BE67BFA41487F43AE4FAEBBAC7284_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ThreadAbortException_t16772A32C3654FCFF0399F11874CB783CC51C153_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimerComparer_t1899647CFE875978843BE8ABA01C10956F1E740B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Tuple_2_t1E2E0182AF85006F49B500E9CD9188F1FB239A36_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Tuple_2_t633ADA252A8DAC01B7681557DA2442C7F355B339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Tuple_4_t16778489594C50623A8E8690A84D09A8BB36D31E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Tuple_4_t8910349157062B8CCD348478BF6EC6BE8593A207_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeName_t714DD2B9BA4134CE17349D95281A1F750D78D60F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CEnumerateQueuedWorkItemsU3Ed__21_tF069F486DA9CB1A00C0998401737C7FA776F53BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CFilterTasksFromWorkItemsU3Ed__7_tD560179E466F2CE2E14AD67C91EC9739A58C9040_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t0B9BA392160C64553C28F93C014479CD7CDC88CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t1A707D491A359996794A63E517A0665899B4893A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t24F903F915888347E8B19C16314DF4C75387324E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t5ECA46CBAA9AA77646C20CB57E986587D87A71BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t832C49A1D40F5D7429F13CAA78ADF77459CA87FE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t92C182BCED0D720544B8BEB755769004B9E0CA12_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t97DE2C4F7EF16C425D7DB74D03F1E0947B3D9AF2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral018504CD3A7D232B591A18D6B7B570DEE8B65BAB;
IL2CPP_EXTERN_C String_t* _stringLiteral01AC6AAA845493AD30953C71C8C9EABF0D0124E4;
IL2CPP_EXTERN_C String_t* _stringLiteral0763FE5EB1EAC35DDF3CD44B5645A71888066226;
IL2CPP_EXTERN_C String_t* _stringLiteral0A2679566878DB123603B221EB69443EBD3A7BCB;
IL2CPP_EXTERN_C String_t* _stringLiteral1450C988C6B4D028AF5A543FC4A7A8FA9BA62F30;
IL2CPP_EXTERN_C String_t* _stringLiteral1C55B63DB181316212E6D01717E65E1FB557B6B8;
IL2CPP_EXTERN_C String_t* _stringLiteral27898ED9175E943FDE24F2BF2E86B60EEDFF15D2;
IL2CPP_EXTERN_C String_t* _stringLiteral2920727F7824CA7782C4813D6F7312ABCDA53CCD;
IL2CPP_EXTERN_C String_t* _stringLiteral29988D0F9BCADFABFF66CBF5AB73096D1CAE3128;
IL2CPP_EXTERN_C String_t* _stringLiteral30D99F99F1F4688CE08A3BF1B034C9CD49C19174;
IL2CPP_EXTERN_C String_t* _stringLiteral315818C03CCC2B10070DF2D4EBD09EB6C4C66E58;
IL2CPP_EXTERN_C String_t* _stringLiteral35FD9409286E50999789090A9930776FD3F2B13E;
IL2CPP_EXTERN_C String_t* _stringLiteral3AF0F65A629E1F9641A341CFA19B861690DA71B5;
IL2CPP_EXTERN_C String_t* _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0;
IL2CPP_EXTERN_C String_t* _stringLiteral431A6DC9FA01E172478A6640BA406614BE30DE93;
IL2CPP_EXTERN_C String_t* _stringLiteral445399A595B24C0202D28AE23969D8FFF38F572A;
IL2CPP_EXTERN_C String_t* _stringLiteral494836B9EFC41FFD5CB7E6CA5BA325833F323668;
IL2CPP_EXTERN_C String_t* _stringLiteral49D64DCFE768AFB45BCA7F089DBB249FA1DA859C;
IL2CPP_EXTERN_C String_t* _stringLiteral4B63EF6929AE971A204D72191783C54436124C51;
IL2CPP_EXTERN_C String_t* _stringLiteral592EDDBE99E3B537ABCB79EA8611A7CB7989097F;
IL2CPP_EXTERN_C String_t* _stringLiteral63FC874122847D14784CB3ADBE59A08B9558FA97;
IL2CPP_EXTERN_C String_t* _stringLiteral645F0B83FF7CADECF44AD1B83B13002DA97FBA1E;
IL2CPP_EXTERN_C String_t* _stringLiteral74D560302B70C9D57AC7C2692A505F648FD1B1A4;
IL2CPP_EXTERN_C String_t* _stringLiteral76EE6AC9CE84AB75E1822F990EDC05A4A83E34CD;
IL2CPP_EXTERN_C String_t* _stringLiteral79C59F2479E52A939A8A16D011943BDBDFBEE65E;
IL2CPP_EXTERN_C String_t* _stringLiteral83A0203482067140327BBF852248E02658CAE786;
IL2CPP_EXTERN_C String_t* _stringLiteral83DC2909B9E8CF20AD23217F95DC9967B22DD3F5;
IL2CPP_EXTERN_C String_t* _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D;
IL2CPP_EXTERN_C String_t* _stringLiteral8994D295B1EC3F358FB1CDEB6465D3A478A7F949;
IL2CPP_EXTERN_C String_t* _stringLiteral8BB31BB6FEE4CFF323F9B357F30EDA29E1B5CBA7;
IL2CPP_EXTERN_C String_t* _stringLiteral91A84CFC28DE4E260ED3B9388BE19E585D150D7F;
IL2CPP_EXTERN_C String_t* _stringLiteral92057E8211A0EA82031051D2B0E70ADB04D156C7;
IL2CPP_EXTERN_C String_t* _stringLiteral97788FC356CCFD978CEEDA2BF269D6954F4D0740;
IL2CPP_EXTERN_C String_t* _stringLiteral9C4034C5C6F417782BE8DF6DD6771CA6B67948DF;
IL2CPP_EXTERN_C String_t* _stringLiteralA4236146F56D25D2D915B8BCD28F0936D3257EE6;
IL2CPP_EXTERN_C String_t* _stringLiteralA50A38EF2D7858A83B908FDB41C862EF6FD5FAE1;
IL2CPP_EXTERN_C String_t* _stringLiteralA595476C6F6D3E2C3406DD69BC73859EA4408F2F;
IL2CPP_EXTERN_C String_t* _stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085;
IL2CPP_EXTERN_C String_t* _stringLiteralA7CB599B22D521F814BCCB6E5B683D86AA12640B;
IL2CPP_EXTERN_C String_t* _stringLiteralAF00BC34B67009EEE0394C51F26D6D5457EC69F6;
IL2CPP_EXTERN_C String_t* _stringLiteralB5411972E9968E9978EF95EF84FB5F5FE4F0F734;
IL2CPP_EXTERN_C String_t* _stringLiteralBBB31482D41D285020BA23976960A4694899C4A4;
IL2CPP_EXTERN_C String_t* _stringLiteralBDC4CEC2209B63293A24317DF536AF666EAC59E5;
IL2CPP_EXTERN_C String_t* _stringLiteralC093A43C681B135B2CCBFD21AF1C61BC84B52631;
IL2CPP_EXTERN_C String_t* _stringLiteralC53416666C40B3D2D91E53EAD804974383702533;
IL2CPP_EXTERN_C String_t* _stringLiteralC71EEB076C9C234A1E39FDB9B0DCFC8851BA4D7F;
IL2CPP_EXTERN_C String_t* _stringLiteralC760D2328BD1CF4750B1C22486E5906ACA0DD030;
IL2CPP_EXTERN_C String_t* _stringLiteralD08F78ED8610B5137CB74E4B8EE06DCA431A6DF5;
IL2CPP_EXTERN_C String_t* _stringLiteralD3EDB56B30B60F6E6107AB89FE5358A528045F13;
IL2CPP_EXTERN_C String_t* _stringLiteralD41010780259F355E00BAB0A989D365B9CD48A8F;
IL2CPP_EXTERN_C String_t* _stringLiteralD5E0D3D064AAABFE3EC781EFE9126A80D40BED15;
IL2CPP_EXTERN_C String_t* _stringLiteralD5FECA9C07F11E0EFEDB17DCA043A555B4DD4FF2;
IL2CPP_EXTERN_C String_t* _stringLiteralD62A6E8579B9E226105A0C28889FEEC94AAE3E9A;
IL2CPP_EXTERN_C String_t* _stringLiteralD94C250F2B1277449096D60BF52D91C01BC28947;
IL2CPP_EXTERN_C String_t* _stringLiteralE5A6B5B780158F734FA0A11A802E762EF7BDD272;
IL2CPP_EXTERN_C String_t* _stringLiteralEA8C788F462D3BDFF1A2C0A8B053AAA9567571BA;
IL2CPP_EXTERN_C String_t* _stringLiteralF1FA676B434A01F8B0C76AACD342F3261CDB272A;
IL2CPP_EXTERN_C String_t* _stringLiteralF38018A5E6704152C358CEE388C935AA44BFE927;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C String_t* _stringLiteralF8D08FCF1537043BF0289FA98C51BF5A3AC7C618;
IL2CPP_EXTERN_C const RuntimeMethod* AdjustmentRule_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m17BE62BEC7C588C0B755CBB5426287665986474D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AdjustmentRule_System_Runtime_Serialization_ISerializable_GetObjectData_mCF3E994E8DEAF796477DCA219855A09423139754_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AdjustmentRule_ValidateAdjustmentRule_m2D1CE9572A7AA306E36ADD93AA2CEA2858B77023_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AdjustmentRule__ctor_m2A972339AE991722C67C074B585F461F0AECEF3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2_TisU3CReadToEndAsyncU3Ed__14_tD16259CAE393A0DA787F6304386A41E7F88A1B45_m2C52B14607DF9BDF2A7044E5BF355C1F7189DA2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_mF736FFAC649614B42D89C5FE96F9E9D8EF69D962_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_mED41A75B510B80C4E8D4766516ABB37736D7ADF6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_mEE799A2BCC831F9D2A73AD58553306A24516B3F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaitable_1_GetAwaiter_m8FA39505FC2099C60148C0F029CB49792690A0D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaiter_GetResult_m0927E49E03619C51620F396FE1DD5DBD41AC6681_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaiter_get_IsCompleted_m4192DC0E89B48FF93421FFF4EB52C21C42687999_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DecoderUTF7FallbackBuffer_InternalFallback_mED8FF7722E62493ABE76E8CE1887618F6A720300_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Decoder_System_Runtime_Serialization_ISerializable_GetObjectData_m3ED01524C080A21879E3BB557F043586DA3C2AE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Decoder_System_Runtime_Serialization_ISerializable_GetObjectData_mFEA452EA85957C6375B8F3E3551D2DA9317E1165_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Decoder__ctor_m30B1EA2BF40A4E5A3F4BF3C7B6FE7377380A1038_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Decoder__ctor_m8A1BF2DA9101627DEFF9629F0E16F8A0A8917DE1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Encoder_System_Runtime_Serialization_ISerializable_GetObjectData_m6092B473125DCAB361E2692A0A37F4F175154463_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Encoder__ctor_mD7BEBE37C16C8C8BFFFFDB86681B51F2142A8F7E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mB29575CEA902024C74743A09C2AD6A27C71FA14C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mC1A3BC5C09490DE7BD41BBE1BFD81F870F508CC0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m883AB85828B7C88FE9A8C7802E93E6CE979EA000_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Capacity_mD0C25FAD6973D3D67381859E776ECAE953FDFD6B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m9F4CBA17931C03FCCABF06CE8F29187F98D1F260_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m9C036D14366E9BBB52436252522EDE206DC6EB35_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Capacity_mEA0D56662D94226185342D2A0FD7C1860C5FFA7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NodeKeyValueEnumerator_MoveNext_mA39E1A22D0DAD6C05709B603A264DEAD6F5560DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NodeKeyValueEnumerator_Reset_m9F789418938587F29F3B212BCAF8112317FA5943_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NodeKeyValueEnumerator_get_Current_m3D7CD1472E9AEA82F13366746FA675E0DCA7565A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Scheduler_SchedulerThread_mDB9CB3C0FCB84658BB01FFF19F5995869778D8C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Scheduler_TimerCB_mFF78E60DAA18DD3E772F2113D46FB51241C957A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_ConfigureAwait_m9637E2990F98EDC90D1A03B57A4954CE2171C4E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_TrySetCanceled_mB49D47FE8A080526EB1C12CA90F19C58ACADD931_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_TrySetResult_m0D282AA0AA9602D0FCFA46141CEEAAE8533D2788_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_TrySetResult_m6795B42289D80646AF4939781DEEF626F532726D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1__ctor_m2FE7FA66D68629FF8472B1548D3760C56B736AF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1__ctor_mCE309147068C1ECA3D92C5133444D805F5B04AF1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_FromResult_TisString_t_mB2118B0DB57948278B3D179FBE4FE5E1E321B906_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TransitionTime_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m7531877356A7E49F851E7C075B15905C94DBA18B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TransitionTime_System_Runtime_Serialization_ISerializable_GetObjectData_mF3DC458CCBC82FA8027E237CE05A4B3D44E6D614_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TransitionTime_ValidateTransitionTime_m26FF63A3CD81059DCD206740F4C55820E979F844_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TransitionTime__ctor_mBE66AC04B8264C98E4EE51D0939F7CD57A3CBBC3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tuple_2_get_Item1_m9D657D0F7331BC11763A6BE128C502D8290263C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tuple_2_get_Item1_mEF1895FA4BFB0311A1B8E9C8B859CC76A27C3B07_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tuple_2_get_Item2_m0128C0E032DA4707781C1EAB65135574999431D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tuple_2_get_Item2_m9296C76ABF5ACF73224A566E32C5C4B2830DD6D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tuple_4_get_Item1_m3B33EC22891078C028C0573820148CDF02C3DEED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tuple_4_get_Item1_m94F53C4967C93EF0E383CF30D29E7D45111BB1CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tuple_4_get_Item2_m3D91D1A59E47371BF6761E4B8111DE2646ABCD59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tuple_4_get_Item2_m5BCA3CF7548FE8F0EFAFDE8E5100725C8DFC40F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tuple_4_get_Item3_m2881060CC27F53A82A6535EA27E41EE752CC60DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tuple_4_get_Item3_mB491A91FB7CA996232B01C7E2EC571605A9C6C2D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tuple_4_get_Item4_m623080FEB0168E7827752353D3A232D1AAC5F7E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tuple_4_get_Item4_mA5A7B9AEC93D270D9CB237F89C023BDF08E90350_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CEnumerateQueuedWorkItemsU3Ed__21_System_Collections_IEnumerator_Reset_m9C6144E53943499F1049D9F8A26104884B91A22F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFilterTasksFromWorkItemsU3Ed__7_System_Collections_IEnumerator_Reset_m3F62A621D9462B90A2EAC42EAFE37D5B780467BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UTF8Decoder_System_Runtime_Serialization_ISerializable_GetObjectData_m660874DE4EB3E16DF79AF02610D1DCA0D9A2E4BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UTF8Decoder__ctor_mF827B4315912C53F248B79A77CFDE99759111353_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UTF8Encoder_System_Runtime_Serialization_ISerializable_GetObjectData_m2EB22FA8BBBFC1038DA48A6014DDFD6FF57D93D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UTF8Encoder__ctor_m21812FB83AD489EC7871F626BC251F3DEDFC8506_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* DayOfWeek_t9E9D87E7A85C119F741167E9F8C613ABFB0A4AC7_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A_0_0_0_var;
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_com;
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_pinvoke;
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com;
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578;;
struct TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578_marshaled_com;
struct TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578_marshaled_com;;
struct TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578_marshaled_pinvoke;
struct TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578_marshaled_pinvoke;;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct IThreadPoolWorkItemU5BU5D_tA8F5E15B9A678486C494BA29BA2B36165FF28738;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct WorkStealingQueueU5BU5D_t0A012EBE228687C2D6BB90870F783BA69EEFBD8C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.List`1<System.Object>
struct  List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Threading.Timer>
struct  List_1_t537143C180C9FB69517B6C26205D2AA824591563  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TimerU5BU5D_t205623A7C76F326689222249DAF432D18EB88387* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t537143C180C9FB69517B6C26205D2AA824591563, ____items_1)); }
	inline TimerU5BU5D_t205623A7C76F326689222249DAF432D18EB88387* get__items_1() const { return ____items_1; }
	inline TimerU5BU5D_t205623A7C76F326689222249DAF432D18EB88387** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TimerU5BU5D_t205623A7C76F326689222249DAF432D18EB88387* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t537143C180C9FB69517B6C26205D2AA824591563, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t537143C180C9FB69517B6C26205D2AA824591563, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t537143C180C9FB69517B6C26205D2AA824591563, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t537143C180C9FB69517B6C26205D2AA824591563_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	TimerU5BU5D_t205623A7C76F326689222249DAF432D18EB88387* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t537143C180C9FB69517B6C26205D2AA824591563_StaticFields, ____emptyArray_5)); }
	inline TimerU5BU5D_t205623A7C76F326689222249DAF432D18EB88387* get__emptyArray_5() const { return ____emptyArray_5; }
	inline TimerU5BU5D_t205623A7C76F326689222249DAF432D18EB88387** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(TimerU5BU5D_t205623A7C76F326689222249DAF432D18EB88387* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Tuple`2<System.Object,System.Char>
struct  Tuple_2_t844F36656ADFD9CCC9527B1F549244BD1884E5F6  : public RuntimeObject
{
public:
	// T1 System.Tuple`2::m_Item1
	RuntimeObject * ___m_Item1_0;
	// T2 System.Tuple`2::m_Item2
	Il2CppChar ___m_Item2_1;

public:
	inline static int32_t get_offset_of_m_Item1_0() { return static_cast<int32_t>(offsetof(Tuple_2_t844F36656ADFD9CCC9527B1F549244BD1884E5F6, ___m_Item1_0)); }
	inline RuntimeObject * get_m_Item1_0() const { return ___m_Item1_0; }
	inline RuntimeObject ** get_address_of_m_Item1_0() { return &___m_Item1_0; }
	inline void set_m_Item1_0(RuntimeObject * value)
	{
		___m_Item1_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Item1_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Item2_1() { return static_cast<int32_t>(offsetof(Tuple_2_t844F36656ADFD9CCC9527B1F549244BD1884E5F6, ___m_Item2_1)); }
	inline Il2CppChar get_m_Item2_1() const { return ___m_Item2_1; }
	inline Il2CppChar* get_address_of_m_Item2_1() { return &___m_Item2_1; }
	inline void set_m_Item2_1(Il2CppChar value)
	{
		___m_Item2_1 = value;
	}
};


// System.Tuple`2<System.Object,System.Object>
struct  Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1  : public RuntimeObject
{
public:
	// T1 System.Tuple`2::m_Item1
	RuntimeObject * ___m_Item1_0;
	// T2 System.Tuple`2::m_Item2
	RuntimeObject * ___m_Item2_1;

public:
	inline static int32_t get_offset_of_m_Item1_0() { return static_cast<int32_t>(offsetof(Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1, ___m_Item1_0)); }
	inline RuntimeObject * get_m_Item1_0() const { return ___m_Item1_0; }
	inline RuntimeObject ** get_address_of_m_Item1_0() { return &___m_Item1_0; }
	inline void set_m_Item1_0(RuntimeObject * value)
	{
		___m_Item1_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Item1_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Item2_1() { return static_cast<int32_t>(offsetof(Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1, ___m_Item2_1)); }
	inline RuntimeObject * get_m_Item2_1() const { return ___m_Item2_1; }
	inline RuntimeObject ** get_address_of_m_Item2_1() { return &___m_Item2_1; }
	inline void set_m_Item2_1(RuntimeObject * value)
	{
		___m_Item2_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Item2_1), (void*)value);
	}
};


// System.Tuple`2<System.IO.TextWriter,System.Char>
struct  Tuple_2_t633ADA252A8DAC01B7681557DA2442C7F355B339  : public RuntimeObject
{
public:
	// T1 System.Tuple`2::m_Item1
	TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * ___m_Item1_0;
	// T2 System.Tuple`2::m_Item2
	Il2CppChar ___m_Item2_1;

public:
	inline static int32_t get_offset_of_m_Item1_0() { return static_cast<int32_t>(offsetof(Tuple_2_t633ADA252A8DAC01B7681557DA2442C7F355B339, ___m_Item1_0)); }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * get_m_Item1_0() const { return ___m_Item1_0; }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 ** get_address_of_m_Item1_0() { return &___m_Item1_0; }
	inline void set_m_Item1_0(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * value)
	{
		___m_Item1_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Item1_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Item2_1() { return static_cast<int32_t>(offsetof(Tuple_2_t633ADA252A8DAC01B7681557DA2442C7F355B339, ___m_Item2_1)); }
	inline Il2CppChar get_m_Item2_1() const { return ___m_Item2_1; }
	inline Il2CppChar* get_address_of_m_Item2_1() { return &___m_Item2_1; }
	inline void set_m_Item2_1(Il2CppChar value)
	{
		___m_Item2_1 = value;
	}
};


// System.Tuple`2<System.IO.TextWriter,System.String>
struct  Tuple_2_t1E2E0182AF85006F49B500E9CD9188F1FB239A36  : public RuntimeObject
{
public:
	// T1 System.Tuple`2::m_Item1
	TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * ___m_Item1_0;
	// T2 System.Tuple`2::m_Item2
	String_t* ___m_Item2_1;

public:
	inline static int32_t get_offset_of_m_Item1_0() { return static_cast<int32_t>(offsetof(Tuple_2_t1E2E0182AF85006F49B500E9CD9188F1FB239A36, ___m_Item1_0)); }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * get_m_Item1_0() const { return ___m_Item1_0; }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 ** get_address_of_m_Item1_0() { return &___m_Item1_0; }
	inline void set_m_Item1_0(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * value)
	{
		___m_Item1_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Item1_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Item2_1() { return static_cast<int32_t>(offsetof(Tuple_2_t1E2E0182AF85006F49B500E9CD9188F1FB239A36, ___m_Item2_1)); }
	inline String_t* get_m_Item2_1() const { return ___m_Item2_1; }
	inline String_t** get_address_of_m_Item2_1() { return &___m_Item2_1; }
	inline void set_m_Item2_1(String_t* value)
	{
		___m_Item2_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Item2_1), (void*)value);
	}
};


// System.Tuple`4<System.Object,System.Object,System.Int32,System.Int32>
struct  Tuple_4_t936566050E79A53330A93469CAF15575A12A114D  : public RuntimeObject
{
public:
	// T1 System.Tuple`4::m_Item1
	RuntimeObject * ___m_Item1_0;
	// T2 System.Tuple`4::m_Item2
	RuntimeObject * ___m_Item2_1;
	// T3 System.Tuple`4::m_Item3
	int32_t ___m_Item3_2;
	// T4 System.Tuple`4::m_Item4
	int32_t ___m_Item4_3;

public:
	inline static int32_t get_offset_of_m_Item1_0() { return static_cast<int32_t>(offsetof(Tuple_4_t936566050E79A53330A93469CAF15575A12A114D, ___m_Item1_0)); }
	inline RuntimeObject * get_m_Item1_0() const { return ___m_Item1_0; }
	inline RuntimeObject ** get_address_of_m_Item1_0() { return &___m_Item1_0; }
	inline void set_m_Item1_0(RuntimeObject * value)
	{
		___m_Item1_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Item1_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Item2_1() { return static_cast<int32_t>(offsetof(Tuple_4_t936566050E79A53330A93469CAF15575A12A114D, ___m_Item2_1)); }
	inline RuntimeObject * get_m_Item2_1() const { return ___m_Item2_1; }
	inline RuntimeObject ** get_address_of_m_Item2_1() { return &___m_Item2_1; }
	inline void set_m_Item2_1(RuntimeObject * value)
	{
		___m_Item2_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Item2_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Item3_2() { return static_cast<int32_t>(offsetof(Tuple_4_t936566050E79A53330A93469CAF15575A12A114D, ___m_Item3_2)); }
	inline int32_t get_m_Item3_2() const { return ___m_Item3_2; }
	inline int32_t* get_address_of_m_Item3_2() { return &___m_Item3_2; }
	inline void set_m_Item3_2(int32_t value)
	{
		___m_Item3_2 = value;
	}

	inline static int32_t get_offset_of_m_Item4_3() { return static_cast<int32_t>(offsetof(Tuple_4_t936566050E79A53330A93469CAF15575A12A114D, ___m_Item4_3)); }
	inline int32_t get_m_Item4_3() const { return ___m_Item4_3; }
	inline int32_t* get_address_of_m_Item4_3() { return &___m_Item4_3; }
	inline void set_m_Item4_3(int32_t value)
	{
		___m_Item4_3 = value;
	}
};


// System.Tuple`4<System.IO.TextReader,System.Char[],System.Int32,System.Int32>
struct  Tuple_4_t16778489594C50623A8E8690A84D09A8BB36D31E  : public RuntimeObject
{
public:
	// T1 System.Tuple`4::m_Item1
	TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * ___m_Item1_0;
	// T2 System.Tuple`4::m_Item2
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___m_Item2_1;
	// T3 System.Tuple`4::m_Item3
	int32_t ___m_Item3_2;
	// T4 System.Tuple`4::m_Item4
	int32_t ___m_Item4_3;

public:
	inline static int32_t get_offset_of_m_Item1_0() { return static_cast<int32_t>(offsetof(Tuple_4_t16778489594C50623A8E8690A84D09A8BB36D31E, ___m_Item1_0)); }
	inline TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * get_m_Item1_0() const { return ___m_Item1_0; }
	inline TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F ** get_address_of_m_Item1_0() { return &___m_Item1_0; }
	inline void set_m_Item1_0(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * value)
	{
		___m_Item1_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Item1_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Item2_1() { return static_cast<int32_t>(offsetof(Tuple_4_t16778489594C50623A8E8690A84D09A8BB36D31E, ___m_Item2_1)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_m_Item2_1() const { return ___m_Item2_1; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_m_Item2_1() { return &___m_Item2_1; }
	inline void set_m_Item2_1(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___m_Item2_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Item2_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Item3_2() { return static_cast<int32_t>(offsetof(Tuple_4_t16778489594C50623A8E8690A84D09A8BB36D31E, ___m_Item3_2)); }
	inline int32_t get_m_Item3_2() const { return ___m_Item3_2; }
	inline int32_t* get_address_of_m_Item3_2() { return &___m_Item3_2; }
	inline void set_m_Item3_2(int32_t value)
	{
		___m_Item3_2 = value;
	}

	inline static int32_t get_offset_of_m_Item4_3() { return static_cast<int32_t>(offsetof(Tuple_4_t16778489594C50623A8E8690A84D09A8BB36D31E, ___m_Item4_3)); }
	inline int32_t get_m_Item4_3() const { return ___m_Item4_3; }
	inline int32_t* get_address_of_m_Item4_3() { return &___m_Item4_3; }
	inline void set_m_Item4_3(int32_t value)
	{
		___m_Item4_3 = value;
	}
};


// System.Tuple`4<System.IO.TextWriter,System.Char[],System.Int32,System.Int32>
struct  Tuple_4_t8910349157062B8CCD348478BF6EC6BE8593A207  : public RuntimeObject
{
public:
	// T1 System.Tuple`4::m_Item1
	TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * ___m_Item1_0;
	// T2 System.Tuple`4::m_Item2
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___m_Item2_1;
	// T3 System.Tuple`4::m_Item3
	int32_t ___m_Item3_2;
	// T4 System.Tuple`4::m_Item4
	int32_t ___m_Item4_3;

public:
	inline static int32_t get_offset_of_m_Item1_0() { return static_cast<int32_t>(offsetof(Tuple_4_t8910349157062B8CCD348478BF6EC6BE8593A207, ___m_Item1_0)); }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * get_m_Item1_0() const { return ___m_Item1_0; }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 ** get_address_of_m_Item1_0() { return &___m_Item1_0; }
	inline void set_m_Item1_0(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * value)
	{
		___m_Item1_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Item1_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Item2_1() { return static_cast<int32_t>(offsetof(Tuple_4_t8910349157062B8CCD348478BF6EC6BE8593A207, ___m_Item2_1)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_m_Item2_1() const { return ___m_Item2_1; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_m_Item2_1() { return &___m_Item2_1; }
	inline void set_m_Item2_1(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___m_Item2_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Item2_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Item3_2() { return static_cast<int32_t>(offsetof(Tuple_4_t8910349157062B8CCD348478BF6EC6BE8593A207, ___m_Item3_2)); }
	inline int32_t get_m_Item3_2() const { return ___m_Item3_2; }
	inline int32_t* get_address_of_m_Item3_2() { return &___m_Item3_2; }
	inline void set_m_Item3_2(int32_t value)
	{
		___m_Item3_2 = value;
	}

	inline static int32_t get_offset_of_m_Item4_3() { return static_cast<int32_t>(offsetof(Tuple_4_t8910349157062B8CCD348478BF6EC6BE8593A207, ___m_Item4_3)); }
	inline int32_t get_m_Item4_3() const { return ___m_Item4_3; }
	inline int32_t* get_address_of_m_Item4_3() { return &___m_Item4_3; }
	inline void set_m_Item4_3(int32_t value)
	{
		___m_Item4_3 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct  CriticalFinalizerObject_tA3367C832FFE7434EB3C15C7136AF25524150997  : public RuntimeObject
{
public:

public:
};


// System.Globalization.CultureInfo
struct  CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;

public:
	inline static int32_t get_offset_of_m_isReadOnly_3() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_isReadOnly_3)); }
	inline bool get_m_isReadOnly_3() const { return ___m_isReadOnly_3; }
	inline bool* get_address_of_m_isReadOnly_3() { return &___m_isReadOnly_3; }
	inline void set_m_isReadOnly_3(bool value)
	{
		___m_isReadOnly_3 = value;
	}

	inline static int32_t get_offset_of_cultureID_4() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___cultureID_4)); }
	inline int32_t get_cultureID_4() const { return ___cultureID_4; }
	inline int32_t* get_address_of_cultureID_4() { return &___cultureID_4; }
	inline void set_cultureID_4(int32_t value)
	{
		___cultureID_4 = value;
	}

	inline static int32_t get_offset_of_parent_lcid_5() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___parent_lcid_5)); }
	inline int32_t get_parent_lcid_5() const { return ___parent_lcid_5; }
	inline int32_t* get_address_of_parent_lcid_5() { return &___parent_lcid_5; }
	inline void set_parent_lcid_5(int32_t value)
	{
		___parent_lcid_5 = value;
	}

	inline static int32_t get_offset_of_datetime_index_6() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___datetime_index_6)); }
	inline int32_t get_datetime_index_6() const { return ___datetime_index_6; }
	inline int32_t* get_address_of_datetime_index_6() { return &___datetime_index_6; }
	inline void set_datetime_index_6(int32_t value)
	{
		___datetime_index_6 = value;
	}

	inline static int32_t get_offset_of_number_index_7() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___number_index_7)); }
	inline int32_t get_number_index_7() const { return ___number_index_7; }
	inline int32_t* get_address_of_number_index_7() { return &___number_index_7; }
	inline void set_number_index_7(int32_t value)
	{
		___number_index_7 = value;
	}

	inline static int32_t get_offset_of_default_calendar_type_8() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___default_calendar_type_8)); }
	inline int32_t get_default_calendar_type_8() const { return ___default_calendar_type_8; }
	inline int32_t* get_address_of_default_calendar_type_8() { return &___default_calendar_type_8; }
	inline void set_default_calendar_type_8(int32_t value)
	{
		___default_calendar_type_8 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_9() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_useUserOverride_9)); }
	inline bool get_m_useUserOverride_9() const { return ___m_useUserOverride_9; }
	inline bool* get_address_of_m_useUserOverride_9() { return &___m_useUserOverride_9; }
	inline void set_m_useUserOverride_9(bool value)
	{
		___m_useUserOverride_9 = value;
	}

	inline static int32_t get_offset_of_numInfo_10() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___numInfo_10)); }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * get_numInfo_10() const { return ___numInfo_10; }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D ** get_address_of_numInfo_10() { return &___numInfo_10; }
	inline void set_numInfo_10(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * value)
	{
		___numInfo_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numInfo_10), (void*)value);
	}

	inline static int32_t get_offset_of_dateTimeInfo_11() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___dateTimeInfo_11)); }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * get_dateTimeInfo_11() const { return ___dateTimeInfo_11; }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 ** get_address_of_dateTimeInfo_11() { return &___dateTimeInfo_11; }
	inline void set_dateTimeInfo_11(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * value)
	{
		___dateTimeInfo_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dateTimeInfo_11), (void*)value);
	}

	inline static int32_t get_offset_of_textInfo_12() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___textInfo_12)); }
	inline TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * get_textInfo_12() const { return ___textInfo_12; }
	inline TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C ** get_address_of_textInfo_12() { return &___textInfo_12; }
	inline void set_textInfo_12(TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * value)
	{
		___textInfo_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textInfo_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_name_13() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_name_13)); }
	inline String_t* get_m_name_13() const { return ___m_name_13; }
	inline String_t** get_address_of_m_name_13() { return &___m_name_13; }
	inline void set_m_name_13(String_t* value)
	{
		___m_name_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_name_13), (void*)value);
	}

	inline static int32_t get_offset_of_englishname_14() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___englishname_14)); }
	inline String_t* get_englishname_14() const { return ___englishname_14; }
	inline String_t** get_address_of_englishname_14() { return &___englishname_14; }
	inline void set_englishname_14(String_t* value)
	{
		___englishname_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___englishname_14), (void*)value);
	}

	inline static int32_t get_offset_of_nativename_15() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___nativename_15)); }
	inline String_t* get_nativename_15() const { return ___nativename_15; }
	inline String_t** get_address_of_nativename_15() { return &___nativename_15; }
	inline void set_nativename_15(String_t* value)
	{
		___nativename_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nativename_15), (void*)value);
	}

	inline static int32_t get_offset_of_iso3lang_16() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___iso3lang_16)); }
	inline String_t* get_iso3lang_16() const { return ___iso3lang_16; }
	inline String_t** get_address_of_iso3lang_16() { return &___iso3lang_16; }
	inline void set_iso3lang_16(String_t* value)
	{
		___iso3lang_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso3lang_16), (void*)value);
	}

	inline static int32_t get_offset_of_iso2lang_17() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___iso2lang_17)); }
	inline String_t* get_iso2lang_17() const { return ___iso2lang_17; }
	inline String_t** get_address_of_iso2lang_17() { return &___iso2lang_17; }
	inline void set_iso2lang_17(String_t* value)
	{
		___iso2lang_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso2lang_17), (void*)value);
	}

	inline static int32_t get_offset_of_win3lang_18() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___win3lang_18)); }
	inline String_t* get_win3lang_18() const { return ___win3lang_18; }
	inline String_t** get_address_of_win3lang_18() { return &___win3lang_18; }
	inline void set_win3lang_18(String_t* value)
	{
		___win3lang_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___win3lang_18), (void*)value);
	}

	inline static int32_t get_offset_of_territory_19() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___territory_19)); }
	inline String_t* get_territory_19() const { return ___territory_19; }
	inline String_t** get_address_of_territory_19() { return &___territory_19; }
	inline void set_territory_19(String_t* value)
	{
		___territory_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___territory_19), (void*)value);
	}

	inline static int32_t get_offset_of_native_calendar_names_20() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___native_calendar_names_20)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_native_calendar_names_20() const { return ___native_calendar_names_20; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_native_calendar_names_20() { return &___native_calendar_names_20; }
	inline void set_native_calendar_names_20(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___native_calendar_names_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_calendar_names_20), (void*)value);
	}

	inline static int32_t get_offset_of_compareInfo_21() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___compareInfo_21)); }
	inline CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * get_compareInfo_21() const { return ___compareInfo_21; }
	inline CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 ** get_address_of_compareInfo_21() { return &___compareInfo_21; }
	inline void set_compareInfo_21(CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * value)
	{
		___compareInfo_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___compareInfo_21), (void*)value);
	}

	inline static int32_t get_offset_of_textinfo_data_22() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___textinfo_data_22)); }
	inline void* get_textinfo_data_22() const { return ___textinfo_data_22; }
	inline void** get_address_of_textinfo_data_22() { return &___textinfo_data_22; }
	inline void set_textinfo_data_22(void* value)
	{
		___textinfo_data_22 = value;
	}

	inline static int32_t get_offset_of_m_dataItem_23() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_dataItem_23)); }
	inline int32_t get_m_dataItem_23() const { return ___m_dataItem_23; }
	inline int32_t* get_address_of_m_dataItem_23() { return &___m_dataItem_23; }
	inline void set_m_dataItem_23(int32_t value)
	{
		___m_dataItem_23 = value;
	}

	inline static int32_t get_offset_of_calendar_24() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___calendar_24)); }
	inline Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * get_calendar_24() const { return ___calendar_24; }
	inline Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A ** get_address_of_calendar_24() { return &___calendar_24; }
	inline void set_calendar_24(Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * value)
	{
		___calendar_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___calendar_24), (void*)value);
	}

	inline static int32_t get_offset_of_parent_culture_25() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___parent_culture_25)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_parent_culture_25() const { return ___parent_culture_25; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_parent_culture_25() { return &___parent_culture_25; }
	inline void set_parent_culture_25(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___parent_culture_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_culture_25), (void*)value);
	}

	inline static int32_t get_offset_of_constructed_26() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___constructed_26)); }
	inline bool get_constructed_26() const { return ___constructed_26; }
	inline bool* get_address_of_constructed_26() { return &___constructed_26; }
	inline void set_constructed_26(bool value)
	{
		___constructed_26 = value;
	}

	inline static int32_t get_offset_of_cached_serialized_form_27() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___cached_serialized_form_27)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_cached_serialized_form_27() const { return ___cached_serialized_form_27; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_cached_serialized_form_27() { return &___cached_serialized_form_27; }
	inline void set_cached_serialized_form_27(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___cached_serialized_form_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cached_serialized_form_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_cultureData_28() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_cultureData_28)); }
	inline CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * get_m_cultureData_28() const { return ___m_cultureData_28; }
	inline CultureData_t53CDF1C5F789A28897415891667799420D3C5529 ** get_address_of_m_cultureData_28() { return &___m_cultureData_28; }
	inline void set_m_cultureData_28(CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * value)
	{
		___m_cultureData_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cultureData_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_isInherited_29() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_isInherited_29)); }
	inline bool get_m_isInherited_29() const { return ___m_isInherited_29; }
	inline bool* get_address_of_m_isInherited_29() { return &___m_isInherited_29; }
	inline void set_m_isInherited_29(bool value)
	{
		___m_isInherited_29 = value;
	}
};

struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields
{
public:
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject * ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___s_DefaultThreadCurrentUICulture_33;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___s_DefaultThreadCurrentCulture_34;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * ___shared_by_number_35;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * ___shared_by_name_36;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_37;

public:
	inline static int32_t get_offset_of_invariant_culture_info_0() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___invariant_culture_info_0)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_invariant_culture_info_0() const { return ___invariant_culture_info_0; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_invariant_culture_info_0() { return &___invariant_culture_info_0; }
	inline void set_invariant_culture_info_0(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___invariant_culture_info_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invariant_culture_info_0), (void*)value);
	}

	inline static int32_t get_offset_of_shared_table_lock_1() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_table_lock_1)); }
	inline RuntimeObject * get_shared_table_lock_1() const { return ___shared_table_lock_1; }
	inline RuntimeObject ** get_address_of_shared_table_lock_1() { return &___shared_table_lock_1; }
	inline void set_shared_table_lock_1(RuntimeObject * value)
	{
		___shared_table_lock_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_table_lock_1), (void*)value);
	}

	inline static int32_t get_offset_of_default_current_culture_2() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___default_current_culture_2)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_default_current_culture_2() const { return ___default_current_culture_2; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_default_current_culture_2() { return &___default_current_culture_2; }
	inline void set_default_current_culture_2(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___default_current_culture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___default_current_culture_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentUICulture_33() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___s_DefaultThreadCurrentUICulture_33)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_s_DefaultThreadCurrentUICulture_33() const { return ___s_DefaultThreadCurrentUICulture_33; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_s_DefaultThreadCurrentUICulture_33() { return &___s_DefaultThreadCurrentUICulture_33; }
	inline void set_s_DefaultThreadCurrentUICulture_33(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___s_DefaultThreadCurrentUICulture_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentUICulture_33), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentCulture_34() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___s_DefaultThreadCurrentCulture_34)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_s_DefaultThreadCurrentCulture_34() const { return ___s_DefaultThreadCurrentCulture_34; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_s_DefaultThreadCurrentCulture_34() { return &___s_DefaultThreadCurrentCulture_34; }
	inline void set_s_DefaultThreadCurrentCulture_34(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___s_DefaultThreadCurrentCulture_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentCulture_34), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_number_35() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_by_number_35)); }
	inline Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * get_shared_by_number_35() const { return ___shared_by_number_35; }
	inline Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 ** get_address_of_shared_by_number_35() { return &___shared_by_number_35; }
	inline void set_shared_by_number_35(Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * value)
	{
		___shared_by_number_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_number_35), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_name_36() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_by_name_36)); }
	inline Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * get_shared_by_name_36() const { return ___shared_by_name_36; }
	inline Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC ** get_address_of_shared_by_name_36() { return &___shared_by_name_36; }
	inline void set_shared_by_name_36(Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * value)
	{
		___shared_by_name_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_name_36), (void*)value);
	}

	inline static int32_t get_offset_of_IsTaiwanSku_37() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___IsTaiwanSku_37)); }
	inline bool get_IsTaiwanSku_37() const { return ___IsTaiwanSku_37; }
	inline bool* get_address_of_IsTaiwanSku_37() { return &___IsTaiwanSku_37; }
	inline void set_IsTaiwanSku_37(bool value)
	{
		___IsTaiwanSku_37 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// System.Text.Decoder
struct  Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370  : public RuntimeObject
{
public:
	// System.Text.DecoderFallback System.Text.Decoder::m_fallback
	DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * ___m_fallback_0;
	// System.Text.DecoderFallbackBuffer System.Text.Decoder::m_fallbackBuffer
	DecoderFallbackBuffer_t236B3D4172A9BAD1C2150ED78958227F8F20C94B * ___m_fallbackBuffer_1;

public:
	inline static int32_t get_offset_of_m_fallback_0() { return static_cast<int32_t>(offsetof(Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370, ___m_fallback_0)); }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * get_m_fallback_0() const { return ___m_fallback_0; }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D ** get_address_of_m_fallback_0() { return &___m_fallback_0; }
	inline void set_m_fallback_0(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * value)
	{
		___m_fallback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fallback_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_fallbackBuffer_1() { return static_cast<int32_t>(offsetof(Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370, ___m_fallbackBuffer_1)); }
	inline DecoderFallbackBuffer_t236B3D4172A9BAD1C2150ED78958227F8F20C94B * get_m_fallbackBuffer_1() const { return ___m_fallbackBuffer_1; }
	inline DecoderFallbackBuffer_t236B3D4172A9BAD1C2150ED78958227F8F20C94B ** get_address_of_m_fallbackBuffer_1() { return &___m_fallbackBuffer_1; }
	inline void set_m_fallbackBuffer_1(DecoderFallbackBuffer_t236B3D4172A9BAD1C2150ED78958227F8F20C94B * value)
	{
		___m_fallbackBuffer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fallbackBuffer_1), (void*)value);
	}
};


// System.Text.DecoderFallback
struct  DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D  : public RuntimeObject
{
public:
	// System.Boolean System.Text.DecoderFallback::bIsMicrosoftBestFitFallback
	bool ___bIsMicrosoftBestFitFallback_0;

public:
	inline static int32_t get_offset_of_bIsMicrosoftBestFitFallback_0() { return static_cast<int32_t>(offsetof(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D, ___bIsMicrosoftBestFitFallback_0)); }
	inline bool get_bIsMicrosoftBestFitFallback_0() const { return ___bIsMicrosoftBestFitFallback_0; }
	inline bool* get_address_of_bIsMicrosoftBestFitFallback_0() { return &___bIsMicrosoftBestFitFallback_0; }
	inline void set_bIsMicrosoftBestFitFallback_0(bool value)
	{
		___bIsMicrosoftBestFitFallback_0 = value;
	}
};

struct DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D_StaticFields
{
public:
	// System.Text.DecoderFallback modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.DecoderFallback::replacementFallback
	DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * ___replacementFallback_1;
	// System.Text.DecoderFallback modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.DecoderFallback::exceptionFallback
	DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * ___exceptionFallback_2;
	// System.Object System.Text.DecoderFallback::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_3;

public:
	inline static int32_t get_offset_of_replacementFallback_1() { return static_cast<int32_t>(offsetof(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D_StaticFields, ___replacementFallback_1)); }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * get_replacementFallback_1() const { return ___replacementFallback_1; }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D ** get_address_of_replacementFallback_1() { return &___replacementFallback_1; }
	inline void set_replacementFallback_1(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * value)
	{
		___replacementFallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___replacementFallback_1), (void*)value);
	}

	inline static int32_t get_offset_of_exceptionFallback_2() { return static_cast<int32_t>(offsetof(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D_StaticFields, ___exceptionFallback_2)); }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * get_exceptionFallback_2() const { return ___exceptionFallback_2; }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D ** get_address_of_exceptionFallback_2() { return &___exceptionFallback_2; }
	inline void set_exceptionFallback_2(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * value)
	{
		___exceptionFallback_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___exceptionFallback_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_3() { return static_cast<int32_t>(offsetof(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D_StaticFields, ___s_InternalSyncObject_3)); }
	inline RuntimeObject * get_s_InternalSyncObject_3() const { return ___s_InternalSyncObject_3; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_3() { return &___s_InternalSyncObject_3; }
	inline void set_s_InternalSyncObject_3(RuntimeObject * value)
	{
		___s_InternalSyncObject_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_3), (void*)value);
	}
};


// System.Text.DecoderFallbackBuffer
struct  DecoderFallbackBuffer_t236B3D4172A9BAD1C2150ED78958227F8F20C94B  : public RuntimeObject
{
public:
	// System.Byte* System.Text.DecoderFallbackBuffer::byteStart
	uint8_t* ___byteStart_0;
	// System.Char* System.Text.DecoderFallbackBuffer::charEnd
	Il2CppChar* ___charEnd_1;

public:
	inline static int32_t get_offset_of_byteStart_0() { return static_cast<int32_t>(offsetof(DecoderFallbackBuffer_t236B3D4172A9BAD1C2150ED78958227F8F20C94B, ___byteStart_0)); }
	inline uint8_t* get_byteStart_0() const { return ___byteStart_0; }
	inline uint8_t** get_address_of_byteStart_0() { return &___byteStart_0; }
	inline void set_byteStart_0(uint8_t* value)
	{
		___byteStart_0 = value;
	}

	inline static int32_t get_offset_of_charEnd_1() { return static_cast<int32_t>(offsetof(DecoderFallbackBuffer_t236B3D4172A9BAD1C2150ED78958227F8F20C94B, ___charEnd_1)); }
	inline Il2CppChar* get_charEnd_1() const { return ___charEnd_1; }
	inline Il2CppChar** get_address_of_charEnd_1() { return &___charEnd_1; }
	inline void set_charEnd_1(Il2CppChar* value)
	{
		___charEnd_1 = value;
	}
};


// System.Text.Encoder
struct  Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A  : public RuntimeObject
{
public:
	// System.Text.EncoderFallback System.Text.Encoder::m_fallback
	EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * ___m_fallback_0;
	// System.Text.EncoderFallbackBuffer System.Text.Encoder::m_fallbackBuffer
	EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0 * ___m_fallbackBuffer_1;

public:
	inline static int32_t get_offset_of_m_fallback_0() { return static_cast<int32_t>(offsetof(Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A, ___m_fallback_0)); }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * get_m_fallback_0() const { return ___m_fallback_0; }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 ** get_address_of_m_fallback_0() { return &___m_fallback_0; }
	inline void set_m_fallback_0(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * value)
	{
		___m_fallback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fallback_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_fallbackBuffer_1() { return static_cast<int32_t>(offsetof(Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A, ___m_fallbackBuffer_1)); }
	inline EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0 * get_m_fallbackBuffer_1() const { return ___m_fallbackBuffer_1; }
	inline EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0 ** get_address_of_m_fallbackBuffer_1() { return &___m_fallbackBuffer_1; }
	inline void set_m_fallbackBuffer_1(EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0 * value)
	{
		___m_fallbackBuffer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fallbackBuffer_1), (void*)value);
	}
};


// System.Text.EncoderFallback
struct  EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4  : public RuntimeObject
{
public:
	// System.Boolean System.Text.EncoderFallback::bIsMicrosoftBestFitFallback
	bool ___bIsMicrosoftBestFitFallback_0;

public:
	inline static int32_t get_offset_of_bIsMicrosoftBestFitFallback_0() { return static_cast<int32_t>(offsetof(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4, ___bIsMicrosoftBestFitFallback_0)); }
	inline bool get_bIsMicrosoftBestFitFallback_0() const { return ___bIsMicrosoftBestFitFallback_0; }
	inline bool* get_address_of_bIsMicrosoftBestFitFallback_0() { return &___bIsMicrosoftBestFitFallback_0; }
	inline void set_bIsMicrosoftBestFitFallback_0(bool value)
	{
		___bIsMicrosoftBestFitFallback_0 = value;
	}
};

struct EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4_StaticFields
{
public:
	// System.Text.EncoderFallback modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.EncoderFallback::replacementFallback
	EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * ___replacementFallback_1;
	// System.Text.EncoderFallback modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.EncoderFallback::exceptionFallback
	EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * ___exceptionFallback_2;
	// System.Object System.Text.EncoderFallback::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_3;

public:
	inline static int32_t get_offset_of_replacementFallback_1() { return static_cast<int32_t>(offsetof(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4_StaticFields, ___replacementFallback_1)); }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * get_replacementFallback_1() const { return ___replacementFallback_1; }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 ** get_address_of_replacementFallback_1() { return &___replacementFallback_1; }
	inline void set_replacementFallback_1(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * value)
	{
		___replacementFallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___replacementFallback_1), (void*)value);
	}

	inline static int32_t get_offset_of_exceptionFallback_2() { return static_cast<int32_t>(offsetof(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4_StaticFields, ___exceptionFallback_2)); }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * get_exceptionFallback_2() const { return ___exceptionFallback_2; }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 ** get_address_of_exceptionFallback_2() { return &___exceptionFallback_2; }
	inline void set_exceptionFallback_2(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * value)
	{
		___exceptionFallback_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___exceptionFallback_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_3() { return static_cast<int32_t>(offsetof(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4_StaticFields, ___s_InternalSyncObject_3)); }
	inline RuntimeObject * get_s_InternalSyncObject_3() const { return ___s_InternalSyncObject_3; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_3() { return &___s_InternalSyncObject_3; }
	inline void set_s_InternalSyncObject_3(RuntimeObject * value)
	{
		___s_InternalSyncObject_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_3), (void*)value);
	}
};


// System.Text.EncoderFallbackBuffer
struct  EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0  : public RuntimeObject
{
public:
	// System.Char* System.Text.EncoderFallbackBuffer::charStart
	Il2CppChar* ___charStart_0;
	// System.Char* System.Text.EncoderFallbackBuffer::charEnd
	Il2CppChar* ___charEnd_1;
	// System.Text.EncoderNLS System.Text.EncoderFallbackBuffer::encoder
	EncoderNLS_tB071198C3F300408FDED1BD2C822F46A25115712 * ___encoder_2;
	// System.Boolean System.Text.EncoderFallbackBuffer::setEncoder
	bool ___setEncoder_3;
	// System.Boolean System.Text.EncoderFallbackBuffer::bUsedEncoder
	bool ___bUsedEncoder_4;
	// System.Boolean System.Text.EncoderFallbackBuffer::bFallingBack
	bool ___bFallingBack_5;
	// System.Int32 System.Text.EncoderFallbackBuffer::iRecursionCount
	int32_t ___iRecursionCount_6;

public:
	inline static int32_t get_offset_of_charStart_0() { return static_cast<int32_t>(offsetof(EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0, ___charStart_0)); }
	inline Il2CppChar* get_charStart_0() const { return ___charStart_0; }
	inline Il2CppChar** get_address_of_charStart_0() { return &___charStart_0; }
	inline void set_charStart_0(Il2CppChar* value)
	{
		___charStart_0 = value;
	}

	inline static int32_t get_offset_of_charEnd_1() { return static_cast<int32_t>(offsetof(EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0, ___charEnd_1)); }
	inline Il2CppChar* get_charEnd_1() const { return ___charEnd_1; }
	inline Il2CppChar** get_address_of_charEnd_1() { return &___charEnd_1; }
	inline void set_charEnd_1(Il2CppChar* value)
	{
		___charEnd_1 = value;
	}

	inline static int32_t get_offset_of_encoder_2() { return static_cast<int32_t>(offsetof(EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0, ___encoder_2)); }
	inline EncoderNLS_tB071198C3F300408FDED1BD2C822F46A25115712 * get_encoder_2() const { return ___encoder_2; }
	inline EncoderNLS_tB071198C3F300408FDED1BD2C822F46A25115712 ** get_address_of_encoder_2() { return &___encoder_2; }
	inline void set_encoder_2(EncoderNLS_tB071198C3F300408FDED1BD2C822F46A25115712 * value)
	{
		___encoder_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoder_2), (void*)value);
	}

	inline static int32_t get_offset_of_setEncoder_3() { return static_cast<int32_t>(offsetof(EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0, ___setEncoder_3)); }
	inline bool get_setEncoder_3() const { return ___setEncoder_3; }
	inline bool* get_address_of_setEncoder_3() { return &___setEncoder_3; }
	inline void set_setEncoder_3(bool value)
	{
		___setEncoder_3 = value;
	}

	inline static int32_t get_offset_of_bUsedEncoder_4() { return static_cast<int32_t>(offsetof(EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0, ___bUsedEncoder_4)); }
	inline bool get_bUsedEncoder_4() const { return ___bUsedEncoder_4; }
	inline bool* get_address_of_bUsedEncoder_4() { return &___bUsedEncoder_4; }
	inline void set_bUsedEncoder_4(bool value)
	{
		___bUsedEncoder_4 = value;
	}

	inline static int32_t get_offset_of_bFallingBack_5() { return static_cast<int32_t>(offsetof(EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0, ___bFallingBack_5)); }
	inline bool get_bFallingBack_5() const { return ___bFallingBack_5; }
	inline bool* get_address_of_bFallingBack_5() { return &___bFallingBack_5; }
	inline void set_bFallingBack_5(bool value)
	{
		___bFallingBack_5 = value;
	}

	inline static int32_t get_offset_of_iRecursionCount_6() { return static_cast<int32_t>(offsetof(EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0, ___iRecursionCount_6)); }
	inline int32_t get_iRecursionCount_6() const { return ___iRecursionCount_6; }
	inline int32_t* get_address_of_iRecursionCount_6() { return &___iRecursionCount_6; }
	inline void set_iRecursionCount_6(int32_t value)
	{
		___iRecursionCount_6 = value;
	}
};


// System.Text.Encoding
struct  Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * ___decoderFallback_14;

public:
	inline static int32_t get_offset_of_m_codePage_9() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_codePage_9)); }
	inline int32_t get_m_codePage_9() const { return ___m_codePage_9; }
	inline int32_t* get_address_of_m_codePage_9() { return &___m_codePage_9; }
	inline void set_m_codePage_9(int32_t value)
	{
		___m_codePage_9 = value;
	}

	inline static int32_t get_offset_of_dataItem_10() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___dataItem_10)); }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * get_dataItem_10() const { return ___dataItem_10; }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E ** get_address_of_dataItem_10() { return &___dataItem_10; }
	inline void set_dataItem_10(CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * value)
	{
		___dataItem_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataItem_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_11() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_deserializedFromEverett_11)); }
	inline bool get_m_deserializedFromEverett_11() const { return ___m_deserializedFromEverett_11; }
	inline bool* get_address_of_m_deserializedFromEverett_11() { return &___m_deserializedFromEverett_11; }
	inline void set_m_deserializedFromEverett_11(bool value)
	{
		___m_deserializedFromEverett_11 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_12() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_isReadOnly_12)); }
	inline bool get_m_isReadOnly_12() const { return ___m_isReadOnly_12; }
	inline bool* get_address_of_m_isReadOnly_12() { return &___m_isReadOnly_12; }
	inline void set_m_isReadOnly_12(bool value)
	{
		___m_isReadOnly_12 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_13() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___encoderFallback_13)); }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * get_encoderFallback_13() const { return ___encoderFallback_13; }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 ** get_address_of_encoderFallback_13() { return &___encoderFallback_13; }
	inline void set_encoderFallback_13(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * value)
	{
		___encoderFallback_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoderFallback_13), (void*)value);
	}

	inline static int32_t get_offset_of_decoderFallback_14() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___decoderFallback_14)); }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * get_decoderFallback_14() const { return ___decoderFallback_14; }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D ** get_address_of_decoderFallback_14() { return &___decoderFallback_14; }
	inline void set_decoderFallback_14(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * value)
	{
		___decoderFallback_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoderFallback_14), (void*)value);
	}
};

struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_15;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultEncoding_0), (void*)value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unicodeEncoding_1), (void*)value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bigEndianUnicode_2), (void*)value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf7Encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf8Encoding_4), (void*)value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf32Encoding_5), (void*)value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asciiEncoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___latin1Encoding_7), (void*)value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___encodings_8)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodings_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_15() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___s_InternalSyncObject_15)); }
	inline RuntimeObject * get_s_InternalSyncObject_15() const { return ___s_InternalSyncObject_15; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_15() { return &___s_InternalSyncObject_15; }
	inline void set_s_InternalSyncObject_15(RuntimeObject * value)
	{
		___s_InternalSyncObject_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_15), (void*)value);
	}
};


// System.Collections.ListDictionaryInternal
struct  ListDictionaryInternal_t41BC521E191A070D69C4D98B996314424BBFDA8A  : public RuntimeObject
{
public:
	// System.Collections.ListDictionaryInternal/DictionaryNode System.Collections.ListDictionaryInternal::head
	DictionaryNode_t9A01FA01782F6D162BA158736A5FB81CB893A33C * ___head_0;
	// System.Int32 System.Collections.ListDictionaryInternal::version
	int32_t ___version_1;
	// System.Int32 System.Collections.ListDictionaryInternal::count
	int32_t ___count_2;
	// System.Object System.Collections.ListDictionaryInternal::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of_head_0() { return static_cast<int32_t>(offsetof(ListDictionaryInternal_t41BC521E191A070D69C4D98B996314424BBFDA8A, ___head_0)); }
	inline DictionaryNode_t9A01FA01782F6D162BA158736A5FB81CB893A33C * get_head_0() const { return ___head_0; }
	inline DictionaryNode_t9A01FA01782F6D162BA158736A5FB81CB893A33C ** get_address_of_head_0() { return &___head_0; }
	inline void set_head_0(DictionaryNode_t9A01FA01782F6D162BA158736A5FB81CB893A33C * value)
	{
		___head_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___head_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(ListDictionaryInternal_t41BC521E191A070D69C4D98B996314424BBFDA8A, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(ListDictionaryInternal_t41BC521E191A070D69C4D98B996314424BBFDA8A, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(ListDictionaryInternal_t41BC521E191A070D69C4D98B996314424BBFDA8A, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_3), (void*)value);
	}
};


// System.MarshalByRefObject
struct  MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.Runtime.Serialization.SerializationInfo
struct  SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1  : public RuntimeObject
{
public:
	// System.String[] System.Runtime.Serialization.SerializationInfo::m_members
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___m_members_3;
	// System.Object[] System.Runtime.Serialization.SerializationInfo::m_data
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_data_4;
	// System.Type[] System.Runtime.Serialization.SerializationInfo::m_types
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___m_types_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Serialization.SerializationInfo::m_nameToIndex
	Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * ___m_nameToIndex_6;
	// System.Int32 System.Runtime.Serialization.SerializationInfo::m_currMember
	int32_t ___m_currMember_7;
	// System.Runtime.Serialization.IFormatterConverter System.Runtime.Serialization.SerializationInfo::m_converter
	RuntimeObject* ___m_converter_8;
	// System.String System.Runtime.Serialization.SerializationInfo::m_fullTypeName
	String_t* ___m_fullTypeName_9;
	// System.String System.Runtime.Serialization.SerializationInfo::m_assemName
	String_t* ___m_assemName_10;
	// System.Type System.Runtime.Serialization.SerializationInfo::objectType
	Type_t * ___objectType_11;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isFullTypeNameSetExplicit
	bool ___isFullTypeNameSetExplicit_12;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isAssemblyNameSetExplicit
	bool ___isAssemblyNameSetExplicit_13;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::requireSameTokenInPartialTrust
	bool ___requireSameTokenInPartialTrust_14;

public:
	inline static int32_t get_offset_of_m_members_3() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_members_3)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_m_members_3() const { return ___m_members_3; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_m_members_3() { return &___m_members_3; }
	inline void set_m_members_3(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___m_members_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_members_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_data_4() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_data_4)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_data_4() const { return ___m_data_4; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_data_4() { return &___m_data_4; }
	inline void set_m_data_4(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_data_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_data_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_types_5() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_types_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_m_types_5() const { return ___m_types_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_m_types_5() { return &___m_types_5; }
	inline void set_m_types_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___m_types_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_types_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_nameToIndex_6() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_nameToIndex_6)); }
	inline Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * get_m_nameToIndex_6() const { return ___m_nameToIndex_6; }
	inline Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 ** get_address_of_m_nameToIndex_6() { return &___m_nameToIndex_6; }
	inline void set_m_nameToIndex_6(Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * value)
	{
		___m_nameToIndex_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_nameToIndex_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_currMember_7() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_currMember_7)); }
	inline int32_t get_m_currMember_7() const { return ___m_currMember_7; }
	inline int32_t* get_address_of_m_currMember_7() { return &___m_currMember_7; }
	inline void set_m_currMember_7(int32_t value)
	{
		___m_currMember_7 = value;
	}

	inline static int32_t get_offset_of_m_converter_8() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_converter_8)); }
	inline RuntimeObject* get_m_converter_8() const { return ___m_converter_8; }
	inline RuntimeObject** get_address_of_m_converter_8() { return &___m_converter_8; }
	inline void set_m_converter_8(RuntimeObject* value)
	{
		___m_converter_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_converter_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_fullTypeName_9() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_fullTypeName_9)); }
	inline String_t* get_m_fullTypeName_9() const { return ___m_fullTypeName_9; }
	inline String_t** get_address_of_m_fullTypeName_9() { return &___m_fullTypeName_9; }
	inline void set_m_fullTypeName_9(String_t* value)
	{
		___m_fullTypeName_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fullTypeName_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_assemName_10() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_assemName_10)); }
	inline String_t* get_m_assemName_10() const { return ___m_assemName_10; }
	inline String_t** get_address_of_m_assemName_10() { return &___m_assemName_10; }
	inline void set_m_assemName_10(String_t* value)
	{
		___m_assemName_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_assemName_10), (void*)value);
	}

	inline static int32_t get_offset_of_objectType_11() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___objectType_11)); }
	inline Type_t * get_objectType_11() const { return ___objectType_11; }
	inline Type_t ** get_address_of_objectType_11() { return &___objectType_11; }
	inline void set_objectType_11(Type_t * value)
	{
		___objectType_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objectType_11), (void*)value);
	}

	inline static int32_t get_offset_of_isFullTypeNameSetExplicit_12() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___isFullTypeNameSetExplicit_12)); }
	inline bool get_isFullTypeNameSetExplicit_12() const { return ___isFullTypeNameSetExplicit_12; }
	inline bool* get_address_of_isFullTypeNameSetExplicit_12() { return &___isFullTypeNameSetExplicit_12; }
	inline void set_isFullTypeNameSetExplicit_12(bool value)
	{
		___isFullTypeNameSetExplicit_12 = value;
	}

	inline static int32_t get_offset_of_isAssemblyNameSetExplicit_13() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___isAssemblyNameSetExplicit_13)); }
	inline bool get_isAssemblyNameSetExplicit_13() const { return ___isAssemblyNameSetExplicit_13; }
	inline bool* get_address_of_isAssemblyNameSetExplicit_13() { return &___isAssemblyNameSetExplicit_13; }
	inline void set_isAssemblyNameSetExplicit_13(bool value)
	{
		___isAssemblyNameSetExplicit_13 = value;
	}

	inline static int32_t get_offset_of_requireSameTokenInPartialTrust_14() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___requireSameTokenInPartialTrust_14)); }
	inline bool get_requireSameTokenInPartialTrust_14() const { return ___requireSameTokenInPartialTrust_14; }
	inline bool* get_address_of_requireSameTokenInPartialTrust_14() { return &___requireSameTokenInPartialTrust_14; }
	inline void set_requireSameTokenInPartialTrust_14(bool value)
	{
		___requireSameTokenInPartialTrust_14 = value;
	}
};


// System.Collections.SortedList
struct  SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165  : public RuntimeObject
{
public:
	// System.Object[] System.Collections.SortedList::keys
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___keys_0;
	// System.Object[] System.Collections.SortedList::values
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___values_1;
	// System.Int32 System.Collections.SortedList::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.SortedList::version
	int32_t ___version_3;
	// System.Collections.IComparer System.Collections.SortedList::comparer
	RuntimeObject* ___comparer_4;
	// System.Collections.SortedList/KeyList System.Collections.SortedList::keyList
	KeyList_t90FF026A62D56329DEFC1B768358977E70839881 * ___keyList_5;
	// System.Collections.SortedList/ValueList System.Collections.SortedList::valueList
	ValueList_t3A0529729679D12F7F3AF77C48E10D5E6009CD3D * ___valueList_6;
	// System.Object System.Collections.SortedList::_syncRoot
	RuntimeObject * ____syncRoot_7;

public:
	inline static int32_t get_offset_of_keys_0() { return static_cast<int32_t>(offsetof(SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165, ___keys_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_keys_0() const { return ___keys_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_keys_0() { return &___keys_0; }
	inline void set_keys_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___keys_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_0), (void*)value);
	}

	inline static int32_t get_offset_of_values_1() { return static_cast<int32_t>(offsetof(SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165, ___values_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_values_1() const { return ___values_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_values_1() { return &___values_1; }
	inline void set_values_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___values_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_comparer_4() { return static_cast<int32_t>(offsetof(SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165, ___comparer_4)); }
	inline RuntimeObject* get_comparer_4() const { return ___comparer_4; }
	inline RuntimeObject** get_address_of_comparer_4() { return &___comparer_4; }
	inline void set_comparer_4(RuntimeObject* value)
	{
		___comparer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_4), (void*)value);
	}

	inline static int32_t get_offset_of_keyList_5() { return static_cast<int32_t>(offsetof(SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165, ___keyList_5)); }
	inline KeyList_t90FF026A62D56329DEFC1B768358977E70839881 * get_keyList_5() const { return ___keyList_5; }
	inline KeyList_t90FF026A62D56329DEFC1B768358977E70839881 ** get_address_of_keyList_5() { return &___keyList_5; }
	inline void set_keyList_5(KeyList_t90FF026A62D56329DEFC1B768358977E70839881 * value)
	{
		___keyList_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyList_5), (void*)value);
	}

	inline static int32_t get_offset_of_valueList_6() { return static_cast<int32_t>(offsetof(SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165, ___valueList_6)); }
	inline ValueList_t3A0529729679D12F7F3AF77C48E10D5E6009CD3D * get_valueList_6() const { return ___valueList_6; }
	inline ValueList_t3A0529729679D12F7F3AF77C48E10D5E6009CD3D ** get_address_of_valueList_6() { return &___valueList_6; }
	inline void set_valueList_6(ValueList_t3A0529729679D12F7F3AF77C48E10D5E6009CD3D * value)
	{
		___valueList_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___valueList_6), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_7() { return static_cast<int32_t>(offsetof(SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165, ____syncRoot_7)); }
	inline RuntimeObject * get__syncRoot_7() const { return ____syncRoot_7; }
	inline RuntimeObject ** get_address_of__syncRoot_7() { return &____syncRoot_7; }
	inline void set__syncRoot_7(RuntimeObject * value)
	{
		____syncRoot_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_7), (void*)value);
	}
};

struct SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165_StaticFields
{
public:
	// System.Object[] System.Collections.SortedList::emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___emptyArray_9;

public:
	inline static int32_t get_offset_of_emptyArray_9() { return static_cast<int32_t>(offsetof(SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165_StaticFields, ___emptyArray_9)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_emptyArray_9() const { return ___emptyArray_9; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_emptyArray_9() { return &___emptyArray_9; }
	inline void set_emptyArray_9(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___emptyArray_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___emptyArray_9), (void*)value);
	}
};


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


// System.Text.StringBuilder
struct  StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkChars_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkPrevious_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
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

// System.Collections.ListDictionaryInternal/DictionaryNode
struct  DictionaryNode_t9A01FA01782F6D162BA158736A5FB81CB893A33C  : public RuntimeObject
{
public:
	// System.Object System.Collections.ListDictionaryInternal/DictionaryNode::key
	RuntimeObject * ___key_0;
	// System.Object System.Collections.ListDictionaryInternal/DictionaryNode::value
	RuntimeObject * ___value_1;
	// System.Collections.ListDictionaryInternal/DictionaryNode System.Collections.ListDictionaryInternal/DictionaryNode::next
	DictionaryNode_t9A01FA01782F6D162BA158736A5FB81CB893A33C * ___next_2;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(DictionaryNode_t9A01FA01782F6D162BA158736A5FB81CB893A33C, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(DictionaryNode_t9A01FA01782F6D162BA158736A5FB81CB893A33C, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}

	inline static int32_t get_offset_of_next_2() { return static_cast<int32_t>(offsetof(DictionaryNode_t9A01FA01782F6D162BA158736A5FB81CB893A33C, ___next_2)); }
	inline DictionaryNode_t9A01FA01782F6D162BA158736A5FB81CB893A33C * get_next_2() const { return ___next_2; }
	inline DictionaryNode_t9A01FA01782F6D162BA158736A5FB81CB893A33C ** get_address_of_next_2() { return &___next_2; }
	inline void set_next_2(DictionaryNode_t9A01FA01782F6D162BA158736A5FB81CB893A33C * value)
	{
		___next_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___next_2), (void*)value);
	}
};


// System.Threading.Tasks.SynchronizationContextAwaitTaskContinuation/<>c
struct  U3CU3Ec_t97DE2C4F7EF16C425D7DB74D03F1E0947B3D9AF2  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t97DE2C4F7EF16C425D7DB74D03F1E0947B3D9AF2_StaticFields
{
public:
	// System.Threading.Tasks.SynchronizationContextAwaitTaskContinuation/<>c System.Threading.Tasks.SynchronizationContextAwaitTaskContinuation/<>c::<>9
	U3CU3Ec_t97DE2C4F7EF16C425D7DB74D03F1E0947B3D9AF2 * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t97DE2C4F7EF16C425D7DB74D03F1E0947B3D9AF2_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t97DE2C4F7EF16C425D7DB74D03F1E0947B3D9AF2 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t97DE2C4F7EF16C425D7DB74D03F1E0947B3D9AF2 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t97DE2C4F7EF16C425D7DB74D03F1E0947B3D9AF2 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};


// System.Threading.Tasks.Task/<>c
struct  U3CU3Ec_t92C182BCED0D720544B8BEB755769004B9E0CA12  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t92C182BCED0D720544B8BEB755769004B9E0CA12_StaticFields
{
public:
	// System.Threading.Tasks.Task/<>c System.Threading.Tasks.Task/<>c::<>9
	U3CU3Ec_t92C182BCED0D720544B8BEB755769004B9E0CA12 * ___U3CU3E9_0;
	// System.Action`1<System.Object> System.Threading.Tasks.Task/<>c::<>9__276_0
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___U3CU3E9__276_0_1;
	// System.Threading.TimerCallback System.Threading.Tasks.Task/<>c::<>9__276_1
	TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814 * ___U3CU3E9__276_1_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t92C182BCED0D720544B8BEB755769004B9E0CA12_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t92C182BCED0D720544B8BEB755769004B9E0CA12 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t92C182BCED0D720544B8BEB755769004B9E0CA12 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t92C182BCED0D720544B8BEB755769004B9E0CA12 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__276_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t92C182BCED0D720544B8BEB755769004B9E0CA12_StaticFields, ___U3CU3E9__276_0_1)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_U3CU3E9__276_0_1() const { return ___U3CU3E9__276_0_1; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_U3CU3E9__276_0_1() { return &___U3CU3E9__276_0_1; }
	inline void set_U3CU3E9__276_0_1(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___U3CU3E9__276_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__276_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__276_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t92C182BCED0D720544B8BEB755769004B9E0CA12_StaticFields, ___U3CU3E9__276_1_2)); }
	inline TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814 * get_U3CU3E9__276_1_2() const { return ___U3CU3E9__276_1_2; }
	inline TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814 ** get_address_of_U3CU3E9__276_1_2() { return &___U3CU3E9__276_1_2; }
	inline void set_U3CU3E9__276_1_2(TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814 * value)
	{
		___U3CU3E9__276_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__276_1_2), (void*)value);
	}
};


// System.Threading.Tasks.TaskScheduler/SystemThreadingTasks_TaskSchedulerDebugView
struct  SystemThreadingTasks_TaskSchedulerDebugView_t27B3B8AEFC0238C9F9C58E238DA86DCC58279612  : public RuntimeObject
{
public:
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskScheduler/SystemThreadingTasks_TaskSchedulerDebugView::m_taskScheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___m_taskScheduler_0;

public:
	inline static int32_t get_offset_of_m_taskScheduler_0() { return static_cast<int32_t>(offsetof(SystemThreadingTasks_TaskSchedulerDebugView_t27B3B8AEFC0238C9F9C58E238DA86DCC58279612, ___m_taskScheduler_0)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_m_taskScheduler_0() const { return ___m_taskScheduler_0; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_m_taskScheduler_0() { return &___m_taskScheduler_0; }
	inline void set_m_taskScheduler_0(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___m_taskScheduler_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_taskScheduler_0), (void*)value);
	}
};


// System.Threading.Tasks.TaskSchedulerAwaitTaskContinuation/<>c
struct  U3CU3Ec_t832C49A1D40F5D7429F13CAA78ADF77459CA87FE  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t832C49A1D40F5D7429F13CAA78ADF77459CA87FE_StaticFields
{
public:
	// System.Threading.Tasks.TaskSchedulerAwaitTaskContinuation/<>c System.Threading.Tasks.TaskSchedulerAwaitTaskContinuation/<>c::<>9
	U3CU3Ec_t832C49A1D40F5D7429F13CAA78ADF77459CA87FE * ___U3CU3E9_0;
	// System.Action`1<System.Object> System.Threading.Tasks.TaskSchedulerAwaitTaskContinuation/<>c::<>9__2_0
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___U3CU3E9__2_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t832C49A1D40F5D7429F13CAA78ADF77459CA87FE_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t832C49A1D40F5D7429F13CAA78ADF77459CA87FE * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t832C49A1D40F5D7429F13CAA78ADF77459CA87FE ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t832C49A1D40F5D7429F13CAA78ADF77459CA87FE * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__2_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t832C49A1D40F5D7429F13CAA78ADF77459CA87FE_StaticFields, ___U3CU3E9__2_0_1)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_U3CU3E9__2_0_1() const { return ___U3CU3E9__2_0_1; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_U3CU3E9__2_0_1() { return &___U3CU3E9__2_0_1; }
	inline void set_U3CU3E9__2_0_1(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___U3CU3E9__2_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__2_0_1), (void*)value);
	}
};


// System.IO.TextReader/<>c
struct  U3CU3Ec_t5ECA46CBAA9AA77646C20CB57E986587D87A71BF  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t5ECA46CBAA9AA77646C20CB57E986587D87A71BF_StaticFields
{
public:
	// System.IO.TextReader/<>c System.IO.TextReader/<>c::<>9
	U3CU3Ec_t5ECA46CBAA9AA77646C20CB57E986587D87A71BF * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t5ECA46CBAA9AA77646C20CB57E986587D87A71BF_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t5ECA46CBAA9AA77646C20CB57E986587D87A71BF * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t5ECA46CBAA9AA77646C20CB57E986587D87A71BF ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t5ECA46CBAA9AA77646C20CB57E986587D87A71BF * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};


// System.IO.TextWriter/<>c
struct  U3CU3Ec_t1A707D491A359996794A63E517A0665899B4893A  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t1A707D491A359996794A63E517A0665899B4893A_StaticFields
{
public:
	// System.IO.TextWriter/<>c System.IO.TextWriter/<>c::<>9
	U3CU3Ec_t1A707D491A359996794A63E517A0665899B4893A * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t1A707D491A359996794A63E517A0665899B4893A_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t1A707D491A359996794A63E517A0665899B4893A * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t1A707D491A359996794A63E517A0665899B4893A ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t1A707D491A359996794A63E517A0665899B4893A * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};


// System.Threading.ThreadPool/<EnumerateQueuedWorkItems>d__21
struct  U3CEnumerateQueuedWorkItemsU3Ed__21_tF069F486DA9CB1A00C0998401737C7FA776F53BD  : public RuntimeObject
{
public:
	// System.Int32 System.Threading.ThreadPool/<EnumerateQueuedWorkItems>d__21::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Threading.IThreadPoolWorkItem System.Threading.ThreadPool/<EnumerateQueuedWorkItems>d__21::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Int32 System.Threading.ThreadPool/<EnumerateQueuedWorkItems>d__21::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Threading.ThreadPoolWorkQueue/WorkStealingQueue[] System.Threading.ThreadPool/<EnumerateQueuedWorkItems>d__21::wsQueues
	WorkStealingQueueU5BU5D_t0A012EBE228687C2D6BB90870F783BA69EEFBD8C* ___wsQueues_3;
	// System.Threading.ThreadPoolWorkQueue/WorkStealingQueue[] System.Threading.ThreadPool/<EnumerateQueuedWorkItems>d__21::<>3__wsQueues
	WorkStealingQueueU5BU5D_t0A012EBE228687C2D6BB90870F783BA69EEFBD8C* ___U3CU3E3__wsQueues_4;
	// System.Threading.IThreadPoolWorkItem[] System.Threading.ThreadPool/<EnumerateQueuedWorkItems>d__21::<items>5__1
	IThreadPoolWorkItemU5BU5D_tA8F5E15B9A678486C494BA29BA2B36165FF28738* ___U3CitemsU3E5__1_5;
	// System.Int32 System.Threading.ThreadPool/<EnumerateQueuedWorkItems>d__21::<i>5__2
	int32_t ___U3CiU3E5__2_6;
	// System.Threading.ThreadPoolWorkQueue/QueueSegment System.Threading.ThreadPool/<EnumerateQueuedWorkItems>d__21::globalQueueTail
	QueueSegment_tBF384DF1C15001FBEDB17378EB22EA233A89A0A4 * ___globalQueueTail_7;
	// System.Threading.ThreadPoolWorkQueue/QueueSegment System.Threading.ThreadPool/<EnumerateQueuedWorkItems>d__21::<>3__globalQueueTail
	QueueSegment_tBF384DF1C15001FBEDB17378EB22EA233A89A0A4 * ___U3CU3E3__globalQueueTail_8;
	// System.Threading.IThreadPoolWorkItem[] System.Threading.ThreadPool/<EnumerateQueuedWorkItems>d__21::<items>5__3
	IThreadPoolWorkItemU5BU5D_tA8F5E15B9A678486C494BA29BA2B36165FF28738* ___U3CitemsU3E5__3_9;
	// System.Int32 System.Threading.ThreadPool/<EnumerateQueuedWorkItems>d__21::<i>5__4
	int32_t ___U3CiU3E5__4_10;
	// System.Threading.ThreadPoolWorkQueue/QueueSegment System.Threading.ThreadPool/<EnumerateQueuedWorkItems>d__21::<segment>5__5
	QueueSegment_tBF384DF1C15001FBEDB17378EB22EA233A89A0A4 * ___U3CsegmentU3E5__5_11;
	// System.Threading.ThreadPoolWorkQueue/WorkStealingQueue[] System.Threading.ThreadPool/<EnumerateQueuedWorkItems>d__21::<>7__wrap1
	WorkStealingQueueU5BU5D_t0A012EBE228687C2D6BB90870F783BA69EEFBD8C* ___U3CU3E7__wrap1_12;
	// System.Int32 System.Threading.ThreadPool/<EnumerateQueuedWorkItems>d__21::<>7__wrap2
	int32_t ___U3CU3E7__wrap2_13;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CEnumerateQueuedWorkItemsU3Ed__21_tF069F486DA9CB1A00C0998401737C7FA776F53BD, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CEnumerateQueuedWorkItemsU3Ed__21_tF069F486DA9CB1A00C0998401737C7FA776F53BD, ___U3CU3E2__current_1)); }
	inline RuntimeObject* get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject* value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CEnumerateQueuedWorkItemsU3Ed__21_tF069F486DA9CB1A00C0998401737C7FA776F53BD, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_wsQueues_3() { return static_cast<int32_t>(offsetof(U3CEnumerateQueuedWorkItemsU3Ed__21_tF069F486DA9CB1A00C0998401737C7FA776F53BD, ___wsQueues_3)); }
	inline WorkStealingQueueU5BU5D_t0A012EBE228687C2D6BB90870F783BA69EEFBD8C* get_wsQueues_3() const { return ___wsQueues_3; }
	inline WorkStealingQueueU5BU5D_t0A012EBE228687C2D6BB90870F783BA69EEFBD8C** get_address_of_wsQueues_3() { return &___wsQueues_3; }
	inline void set_wsQueues_3(WorkStealingQueueU5BU5D_t0A012EBE228687C2D6BB90870F783BA69EEFBD8C* value)
	{
		___wsQueues_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___wsQueues_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__wsQueues_4() { return static_cast<int32_t>(offsetof(U3CEnumerateQueuedWorkItemsU3Ed__21_tF069F486DA9CB1A00C0998401737C7FA776F53BD, ___U3CU3E3__wsQueues_4)); }
	inline WorkStealingQueueU5BU5D_t0A012EBE228687C2D6BB90870F783BA69EEFBD8C* get_U3CU3E3__wsQueues_4() const { return ___U3CU3E3__wsQueues_4; }
	inline WorkStealingQueueU5BU5D_t0A012EBE228687C2D6BB90870F783BA69EEFBD8C** get_address_of_U3CU3E3__wsQueues_4() { return &___U3CU3E3__wsQueues_4; }
	inline void set_U3CU3E3__wsQueues_4(WorkStealingQueueU5BU5D_t0A012EBE228687C2D6BB90870F783BA69EEFBD8C* value)
	{
		___U3CU3E3__wsQueues_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__wsQueues_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CitemsU3E5__1_5() { return static_cast<int32_t>(offsetof(U3CEnumerateQueuedWorkItemsU3Ed__21_tF069F486DA9CB1A00C0998401737C7FA776F53BD, ___U3CitemsU3E5__1_5)); }
	inline IThreadPoolWorkItemU5BU5D_tA8F5E15B9A678486C494BA29BA2B36165FF28738* get_U3CitemsU3E5__1_5() const { return ___U3CitemsU3E5__1_5; }
	inline IThreadPoolWorkItemU5BU5D_tA8F5E15B9A678486C494BA29BA2B36165FF28738** get_address_of_U3CitemsU3E5__1_5() { return &___U3CitemsU3E5__1_5; }
	inline void set_U3CitemsU3E5__1_5(IThreadPoolWorkItemU5BU5D_tA8F5E15B9A678486C494BA29BA2B36165FF28738* value)
	{
		___U3CitemsU3E5__1_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CitemsU3E5__1_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CiU3E5__2_6() { return static_cast<int32_t>(offsetof(U3CEnumerateQueuedWorkItemsU3Ed__21_tF069F486DA9CB1A00C0998401737C7FA776F53BD, ___U3CiU3E5__2_6)); }
	inline int32_t get_U3CiU3E5__2_6() const { return ___U3CiU3E5__2_6; }
	inline int32_t* get_address_of_U3CiU3E5__2_6() { return &___U3CiU3E5__2_6; }
	inline void set_U3CiU3E5__2_6(int32_t value)
	{
		___U3CiU3E5__2_6 = value;
	}

	inline static int32_t get_offset_of_globalQueueTail_7() { return static_cast<int32_t>(offsetof(U3CEnumerateQueuedWorkItemsU3Ed__21_tF069F486DA9CB1A00C0998401737C7FA776F53BD, ___globalQueueTail_7)); }
	inline QueueSegment_tBF384DF1C15001FBEDB17378EB22EA233A89A0A4 * get_globalQueueTail_7() const { return ___globalQueueTail_7; }
	inline QueueSegment_tBF384DF1C15001FBEDB17378EB22EA233A89A0A4 ** get_address_of_globalQueueTail_7() { return &___globalQueueTail_7; }
	inline void set_globalQueueTail_7(QueueSegment_tBF384DF1C15001FBEDB17378EB22EA233A89A0A4 * value)
	{
		___globalQueueTail_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___globalQueueTail_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__globalQueueTail_8() { return static_cast<int32_t>(offsetof(U3CEnumerateQueuedWorkItemsU3Ed__21_tF069F486DA9CB1A00C0998401737C7FA776F53BD, ___U3CU3E3__globalQueueTail_8)); }
	inline QueueSegment_tBF384DF1C15001FBEDB17378EB22EA233A89A0A4 * get_U3CU3E3__globalQueueTail_8() const { return ___U3CU3E3__globalQueueTail_8; }
	inline QueueSegment_tBF384DF1C15001FBEDB17378EB22EA233A89A0A4 ** get_address_of_U3CU3E3__globalQueueTail_8() { return &___U3CU3E3__globalQueueTail_8; }
	inline void set_U3CU3E3__globalQueueTail_8(QueueSegment_tBF384DF1C15001FBEDB17378EB22EA233A89A0A4 * value)
	{
		___U3CU3E3__globalQueueTail_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__globalQueueTail_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CitemsU3E5__3_9() { return static_cast<int32_t>(offsetof(U3CEnumerateQueuedWorkItemsU3Ed__21_tF069F486DA9CB1A00C0998401737C7FA776F53BD, ___U3CitemsU3E5__3_9)); }
	inline IThreadPoolWorkItemU5BU5D_tA8F5E15B9A678486C494BA29BA2B36165FF28738* get_U3CitemsU3E5__3_9() const { return ___U3CitemsU3E5__3_9; }
	inline IThreadPoolWorkItemU5BU5D_tA8F5E15B9A678486C494BA29BA2B36165FF28738** get_address_of_U3CitemsU3E5__3_9() { return &___U3CitemsU3E5__3_9; }
	inline void set_U3CitemsU3E5__3_9(IThreadPoolWorkItemU5BU5D_tA8F5E15B9A678486C494BA29BA2B36165FF28738* value)
	{
		___U3CitemsU3E5__3_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CitemsU3E5__3_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CiU3E5__4_10() { return static_cast<int32_t>(offsetof(U3CEnumerateQueuedWorkItemsU3Ed__21_tF069F486DA9CB1A00C0998401737C7FA776F53BD, ___U3CiU3E5__4_10)); }
	inline int32_t get_U3CiU3E5__4_10() const { return ___U3CiU3E5__4_10; }
	inline int32_t* get_address_of_U3CiU3E5__4_10() { return &___U3CiU3E5__4_10; }
	inline void set_U3CiU3E5__4_10(int32_t value)
	{
		___U3CiU3E5__4_10 = value;
	}

	inline static int32_t get_offset_of_U3CsegmentU3E5__5_11() { return static_cast<int32_t>(offsetof(U3CEnumerateQueuedWorkItemsU3Ed__21_tF069F486DA9CB1A00C0998401737C7FA776F53BD, ___U3CsegmentU3E5__5_11)); }
	inline QueueSegment_tBF384DF1C15001FBEDB17378EB22EA233A89A0A4 * get_U3CsegmentU3E5__5_11() const { return ___U3CsegmentU3E5__5_11; }
	inline QueueSegment_tBF384DF1C15001FBEDB17378EB22EA233A89A0A4 ** get_address_of_U3CsegmentU3E5__5_11() { return &___U3CsegmentU3E5__5_11; }
	inline void set_U3CsegmentU3E5__5_11(QueueSegment_tBF384DF1C15001FBEDB17378EB22EA233A89A0A4 * value)
	{
		___U3CsegmentU3E5__5_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsegmentU3E5__5_11), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_12() { return static_cast<int32_t>(offsetof(U3CEnumerateQueuedWorkItemsU3Ed__21_tF069F486DA9CB1A00C0998401737C7FA776F53BD, ___U3CU3E7__wrap1_12)); }
	inline WorkStealingQueueU5BU5D_t0A012EBE228687C2D6BB90870F783BA69EEFBD8C* get_U3CU3E7__wrap1_12() const { return ___U3CU3E7__wrap1_12; }
	inline WorkStealingQueueU5BU5D_t0A012EBE228687C2D6BB90870F783BA69EEFBD8C** get_address_of_U3CU3E7__wrap1_12() { return &___U3CU3E7__wrap1_12; }
	inline void set_U3CU3E7__wrap1_12(WorkStealingQueueU5BU5D_t0A012EBE228687C2D6BB90870F783BA69EEFBD8C* value)
	{
		___U3CU3E7__wrap1_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap1_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap2_13() { return static_cast<int32_t>(offsetof(U3CEnumerateQueuedWorkItemsU3Ed__21_tF069F486DA9CB1A00C0998401737C7FA776F53BD, ___U3CU3E7__wrap2_13)); }
	inline int32_t get_U3CU3E7__wrap2_13() const { return ___U3CU3E7__wrap2_13; }
	inline int32_t* get_address_of_U3CU3E7__wrap2_13() { return &___U3CU3E7__wrap2_13; }
	inline void set_U3CU3E7__wrap2_13(int32_t value)
	{
		___U3CU3E7__wrap2_13 = value;
	}
};


// System.Threading.Tasks.ThreadPoolTaskScheduler/<FilterTasksFromWorkItems>d__7
struct  U3CFilterTasksFromWorkItemsU3Ed__7_tD560179E466F2CE2E14AD67C91EC9739A58C9040  : public RuntimeObject
{
public:
	// System.Int32 System.Threading.Tasks.ThreadPoolTaskScheduler/<FilterTasksFromWorkItems>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Threading.Tasks.Task System.Threading.Tasks.ThreadPoolTaskScheduler/<FilterTasksFromWorkItems>d__7::<>2__current
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___U3CU3E2__current_1;
	// System.Int32 System.Threading.Tasks.ThreadPoolTaskScheduler/<FilterTasksFromWorkItems>d__7::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Collections.Generic.IEnumerable`1<System.Threading.IThreadPoolWorkItem> System.Threading.Tasks.ThreadPoolTaskScheduler/<FilterTasksFromWorkItems>d__7::tpwItems
	RuntimeObject* ___tpwItems_3;
	// System.Collections.Generic.IEnumerable`1<System.Threading.IThreadPoolWorkItem> System.Threading.Tasks.ThreadPoolTaskScheduler/<FilterTasksFromWorkItems>d__7::<>3__tpwItems
	RuntimeObject* ___U3CU3E3__tpwItems_4;
	// System.Collections.Generic.IEnumerator`1<System.Threading.IThreadPoolWorkItem> System.Threading.Tasks.ThreadPoolTaskScheduler/<FilterTasksFromWorkItems>d__7::<>7__wrap1
	RuntimeObject* ___U3CU3E7__wrap1_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CFilterTasksFromWorkItemsU3Ed__7_tD560179E466F2CE2E14AD67C91EC9739A58C9040, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CFilterTasksFromWorkItemsU3Ed__7_tD560179E466F2CE2E14AD67C91EC9739A58C9040, ___U3CU3E2__current_1)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CFilterTasksFromWorkItemsU3Ed__7_tD560179E466F2CE2E14AD67C91EC9739A58C9040, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_tpwItems_3() { return static_cast<int32_t>(offsetof(U3CFilterTasksFromWorkItemsU3Ed__7_tD560179E466F2CE2E14AD67C91EC9739A58C9040, ___tpwItems_3)); }
	inline RuntimeObject* get_tpwItems_3() const { return ___tpwItems_3; }
	inline RuntimeObject** get_address_of_tpwItems_3() { return &___tpwItems_3; }
	inline void set_tpwItems_3(RuntimeObject* value)
	{
		___tpwItems_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tpwItems_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__tpwItems_4() { return static_cast<int32_t>(offsetof(U3CFilterTasksFromWorkItemsU3Ed__7_tD560179E466F2CE2E14AD67C91EC9739A58C9040, ___U3CU3E3__tpwItems_4)); }
	inline RuntimeObject* get_U3CU3E3__tpwItems_4() const { return ___U3CU3E3__tpwItems_4; }
	inline RuntimeObject** get_address_of_U3CU3E3__tpwItems_4() { return &___U3CU3E3__tpwItems_4; }
	inline void set_U3CU3E3__tpwItems_4(RuntimeObject* value)
	{
		___U3CU3E3__tpwItems_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__tpwItems_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_5() { return static_cast<int32_t>(offsetof(U3CFilterTasksFromWorkItemsU3Ed__7_tD560179E466F2CE2E14AD67C91EC9739A58C9040, ___U3CU3E7__wrap1_5)); }
	inline RuntimeObject* get_U3CU3E7__wrap1_5() const { return ___U3CU3E7__wrap1_5; }
	inline RuntimeObject** get_address_of_U3CU3E7__wrap1_5() { return &___U3CU3E7__wrap1_5; }
	inline void set_U3CU3E7__wrap1_5(RuntimeObject* value)
	{
		___U3CU3E7__wrap1_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap1_5), (void*)value);
	}
};


// System.TimeZoneInfo/<>c
struct  U3CU3Ec_t24F903F915888347E8B19C16314DF4C75387324E  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t24F903F915888347E8B19C16314DF4C75387324E_StaticFields
{
public:
	// System.TimeZoneInfo/<>c System.TimeZoneInfo/<>c::<>9
	U3CU3Ec_t24F903F915888347E8B19C16314DF4C75387324E * ___U3CU3E9_0;
	// System.Comparison`1<System.TimeZoneInfo/AdjustmentRule> System.TimeZoneInfo/<>c::<>9__19_0
	Comparison_1_tDAC4CC47FDC3DBE8E8A9DF5789C71CAA2B42AEC1 * ___U3CU3E9__19_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t24F903F915888347E8B19C16314DF4C75387324E_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t24F903F915888347E8B19C16314DF4C75387324E * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t24F903F915888347E8B19C16314DF4C75387324E ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t24F903F915888347E8B19C16314DF4C75387324E * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__19_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t24F903F915888347E8B19C16314DF4C75387324E_StaticFields, ___U3CU3E9__19_0_1)); }
	inline Comparison_1_tDAC4CC47FDC3DBE8E8A9DF5789C71CAA2B42AEC1 * get_U3CU3E9__19_0_1() const { return ___U3CU3E9__19_0_1; }
	inline Comparison_1_tDAC4CC47FDC3DBE8E8A9DF5789C71CAA2B42AEC1 ** get_address_of_U3CU3E9__19_0_1() { return &___U3CU3E9__19_0_1; }
	inline void set_U3CU3E9__19_0_1(Comparison_1_tDAC4CC47FDC3DBE8E8A9DF5789C71CAA2B42AEC1 * value)
	{
		___U3CU3E9__19_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__19_0_1), (void*)value);
	}
};


// System.Threading.Timer/Scheduler
struct  Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8  : public RuntimeObject
{
public:
	// System.Collections.SortedList System.Threading.Timer/Scheduler::list
	SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 * ___list_1;
	// System.Threading.ManualResetEvent System.Threading.Timer/Scheduler::changed
	ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * ___changed_2;

public:
	inline static int32_t get_offset_of_list_1() { return static_cast<int32_t>(offsetof(Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8, ___list_1)); }
	inline SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 * get_list_1() const { return ___list_1; }
	inline SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 ** get_address_of_list_1() { return &___list_1; }
	inline void set_list_1(SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 * value)
	{
		___list_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_1), (void*)value);
	}

	inline static int32_t get_offset_of_changed_2() { return static_cast<int32_t>(offsetof(Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8, ___changed_2)); }
	inline ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * get_changed_2() const { return ___changed_2; }
	inline ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA ** get_address_of_changed_2() { return &___changed_2; }
	inline void set_changed_2(ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * value)
	{
		___changed_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___changed_2), (void*)value);
	}
};

struct Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8_StaticFields
{
public:
	// System.Threading.Timer/Scheduler System.Threading.Timer/Scheduler::instance
	Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * ___instance_0;

public:
	inline static int32_t get_offset_of_instance_0() { return static_cast<int32_t>(offsetof(Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8_StaticFields, ___instance_0)); }
	inline Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * get_instance_0() const { return ___instance_0; }
	inline Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 ** get_address_of_instance_0() { return &___instance_0; }
	inline void set_instance_0(Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * value)
	{
		___instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_0), (void*)value);
	}
};


// System.Threading.Timer/TimerComparer
struct  TimerComparer_t1899647CFE875978843BE8ABA01C10956F1E740B  : public RuntimeObject
{
public:

public:
};


// System.TypeNames/ATypeName
struct  ATypeName_t19F245ED1619C78770F92C899C4FE364DBF30861  : public RuntimeObject
{
public:

public:
};


// System.ValueType/Internal
struct  Internal_t48A28F7C101FB385B26992A7FC1A89F498F717DB  : public RuntimeObject
{
public:

public:
};

struct Internal_t48A28F7C101FB385B26992A7FC1A89F498F717DB_StaticFields
{
public:
	// System.Int32 System.ValueType/Internal::hash_code_of_ptr_seed
	int32_t ___hash_code_of_ptr_seed_0;

public:
	inline static int32_t get_offset_of_hash_code_of_ptr_seed_0() { return static_cast<int32_t>(offsetof(Internal_t48A28F7C101FB385B26992A7FC1A89F498F717DB_StaticFields, ___hash_code_of_ptr_seed_0)); }
	inline int32_t get_hash_code_of_ptr_seed_0() const { return ___hash_code_of_ptr_seed_0; }
	inline int32_t* get_address_of_hash_code_of_ptr_seed_0() { return &___hash_code_of_ptr_seed_0; }
	inline void set_hash_code_of_ptr_seed_0(int32_t value)
	{
		___hash_code_of_ptr_seed_0 = value;
	}
};


// Microsoft.Win32.Win32Native/WIN32_FIND_DATA
struct  WIN32_FIND_DATA_tE88493B22E1CDD2E595CA4F800949555399AB3C7  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.Win32.Win32Native/WIN32_FIND_DATA::dwFileAttributes
	int32_t ___dwFileAttributes_0;
	// System.String Microsoft.Win32.Win32Native/WIN32_FIND_DATA::cFileName
	String_t* ___cFileName_1;

public:
	inline static int32_t get_offset_of_dwFileAttributes_0() { return static_cast<int32_t>(offsetof(WIN32_FIND_DATA_tE88493B22E1CDD2E595CA4F800949555399AB3C7, ___dwFileAttributes_0)); }
	inline int32_t get_dwFileAttributes_0() const { return ___dwFileAttributes_0; }
	inline int32_t* get_address_of_dwFileAttributes_0() { return &___dwFileAttributes_0; }
	inline void set_dwFileAttributes_0(int32_t value)
	{
		___dwFileAttributes_0 = value;
	}

	inline static int32_t get_offset_of_cFileName_1() { return static_cast<int32_t>(offsetof(WIN32_FIND_DATA_tE88493B22E1CDD2E595CA4F800949555399AB3C7, ___cFileName_1)); }
	inline String_t* get_cFileName_1() const { return ___cFileName_1; }
	inline String_t** get_address_of_cFileName_1() { return &___cFileName_1; }
	inline void set_cFileName_1(String_t* value)
	{
		___cFileName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cFileName_1), (void*)value);
	}
};


// System.Collections.ListDictionaryInternal/NodeKeyValueCollection/NodeKeyValueEnumerator
struct  NodeKeyValueEnumerator_tE6977A5C0AF3F0E001B951488690F2693BAB3955  : public RuntimeObject
{
public:
	// System.Collections.ListDictionaryInternal System.Collections.ListDictionaryInternal/NodeKeyValueCollection/NodeKeyValueEnumerator::list
	ListDictionaryInternal_t41BC521E191A070D69C4D98B996314424BBFDA8A * ___list_0;
	// System.Collections.ListDictionaryInternal/DictionaryNode System.Collections.ListDictionaryInternal/NodeKeyValueCollection/NodeKeyValueEnumerator::current
	DictionaryNode_t9A01FA01782F6D162BA158736A5FB81CB893A33C * ___current_1;
	// System.Int32 System.Collections.ListDictionaryInternal/NodeKeyValueCollection/NodeKeyValueEnumerator::version
	int32_t ___version_2;
	// System.Boolean System.Collections.ListDictionaryInternal/NodeKeyValueCollection/NodeKeyValueEnumerator::isKeys
	bool ___isKeys_3;
	// System.Boolean System.Collections.ListDictionaryInternal/NodeKeyValueCollection/NodeKeyValueEnumerator::start
	bool ___start_4;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(NodeKeyValueEnumerator_tE6977A5C0AF3F0E001B951488690F2693BAB3955, ___list_0)); }
	inline ListDictionaryInternal_t41BC521E191A070D69C4D98B996314424BBFDA8A * get_list_0() const { return ___list_0; }
	inline ListDictionaryInternal_t41BC521E191A070D69C4D98B996314424BBFDA8A ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ListDictionaryInternal_t41BC521E191A070D69C4D98B996314424BBFDA8A * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_current_1() { return static_cast<int32_t>(offsetof(NodeKeyValueEnumerator_tE6977A5C0AF3F0E001B951488690F2693BAB3955, ___current_1)); }
	inline DictionaryNode_t9A01FA01782F6D162BA158736A5FB81CB893A33C * get_current_1() const { return ___current_1; }
	inline DictionaryNode_t9A01FA01782F6D162BA158736A5FB81CB893A33C ** get_address_of_current_1() { return &___current_1; }
	inline void set_current_1(DictionaryNode_t9A01FA01782F6D162BA158736A5FB81CB893A33C * value)
	{
		___current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_1), (void*)value);
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(NodeKeyValueEnumerator_tE6977A5C0AF3F0E001B951488690F2693BAB3955, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_isKeys_3() { return static_cast<int32_t>(offsetof(NodeKeyValueEnumerator_tE6977A5C0AF3F0E001B951488690F2693BAB3955, ___isKeys_3)); }
	inline bool get_isKeys_3() const { return ___isKeys_3; }
	inline bool* get_address_of_isKeys_3() { return &___isKeys_3; }
	inline void set_isKeys_3(bool value)
	{
		___isKeys_3 = value;
	}

	inline static int32_t get_offset_of_start_4() { return static_cast<int32_t>(offsetof(NodeKeyValueEnumerator_tE6977A5C0AF3F0E001B951488690F2693BAB3955, ___start_4)); }
	inline bool get_start_4() const { return ___start_4; }
	inline bool* get_address_of_start_4() { return &___start_4; }
	inline void set_start_4(bool value)
	{
		___start_4 = value;
	}
};


// System.IO.Stream/SynchronousAsyncResult/<>c
struct  U3CU3Ec_t0B9BA392160C64553C28F93C014479CD7CDC88CB  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t0B9BA392160C64553C28F93C014479CD7CDC88CB_StaticFields
{
public:
	// System.IO.Stream/SynchronousAsyncResult/<>c System.IO.Stream/SynchronousAsyncResult/<>c::<>9
	U3CU3Ec_t0B9BA392160C64553C28F93C014479CD7CDC88CB * ___U3CU3E9_0;
	// System.Func`1<System.Threading.ManualResetEvent> System.IO.Stream/SynchronousAsyncResult/<>c::<>9__12_0
	Func_1_t5676838A0CF4B34BFAE91E1902234AA2C5C4BE05 * ___U3CU3E9__12_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t0B9BA392160C64553C28F93C014479CD7CDC88CB_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t0B9BA392160C64553C28F93C014479CD7CDC88CB * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t0B9BA392160C64553C28F93C014479CD7CDC88CB ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t0B9BA392160C64553C28F93C014479CD7CDC88CB * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__12_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t0B9BA392160C64553C28F93C014479CD7CDC88CB_StaticFields, ___U3CU3E9__12_0_1)); }
	inline Func_1_t5676838A0CF4B34BFAE91E1902234AA2C5C4BE05 * get_U3CU3E9__12_0_1() const { return ___U3CU3E9__12_0_1; }
	inline Func_1_t5676838A0CF4B34BFAE91E1902234AA2C5C4BE05 ** get_address_of_U3CU3E9__12_0_1() { return &___U3CU3E9__12_0_1; }
	inline void set_U3CU3E9__12_0_1(Func_1_t5676838A0CF4B34BFAE91E1902234AA2C5C4BE05 * value)
	{
		___U3CU3E9__12_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__12_0_1), (void*)value);
	}
};


// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Int32>
struct  ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_task
	Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2, ___m_task_0)); }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_continueOnCapturedContext_1() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2, ___m_continueOnCapturedContext_1)); }
	inline bool get_m_continueOnCapturedContext_1() const { return ___m_continueOnCapturedContext_1; }
	inline bool* get_address_of_m_continueOnCapturedContext_1() { return &___m_continueOnCapturedContext_1; }
	inline void set_m_continueOnCapturedContext_1(bool value)
	{
		___m_continueOnCapturedContext_1 = value;
	}
};


// System.Threading.SparselyPopulatedArrayAddInfo`1<System.Threading.CancellationCallbackInfo>
struct  SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0 
{
public:
	// System.Threading.SparselyPopulatedArrayFragment`1<T> System.Threading.SparselyPopulatedArrayAddInfo`1::m_source
	SparselyPopulatedArrayFragment_1_t93197EF47D6A025755987003D5D62F3AED371C21 * ___m_source_0;
	// System.Int32 System.Threading.SparselyPopulatedArrayAddInfo`1::m_index
	int32_t ___m_index_1;

public:
	inline static int32_t get_offset_of_m_source_0() { return static_cast<int32_t>(offsetof(SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0, ___m_source_0)); }
	inline SparselyPopulatedArrayFragment_1_t93197EF47D6A025755987003D5D62F3AED371C21 * get_m_source_0() const { return ___m_source_0; }
	inline SparselyPopulatedArrayFragment_1_t93197EF47D6A025755987003D5D62F3AED371C21 ** get_address_of_m_source_0() { return &___m_source_0; }
	inline void set_m_source_0(SparselyPopulatedArrayFragment_1_t93197EF47D6A025755987003D5D62F3AED371C21 * value)
	{
		___m_source_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_source_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_index_1() { return static_cast<int32_t>(offsetof(SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0, ___m_index_1)); }
	inline int32_t get_m_index_1() const { return ___m_index_1; }
	inline int32_t* get_address_of_m_index_1() { return &___m_index_1; }
	inline void set_m_index_1(int32_t value)
	{
		___m_index_1 = value;
	}
};


// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct  AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 
{
public:
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___m_defaultContextAction_1;

public:
	inline static int32_t get_offset_of_m_stateMachine_0() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34, ___m_stateMachine_0)); }
	inline RuntimeObject* get_m_stateMachine_0() const { return ___m_stateMachine_0; }
	inline RuntimeObject** get_address_of_m_stateMachine_0() { return &___m_stateMachine_0; }
	inline void set_m_stateMachine_0(RuntimeObject* value)
	{
		___m_stateMachine_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateMachine_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_defaultContextAction_1() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34, ___m_defaultContextAction_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_m_defaultContextAction_1() const { return ___m_defaultContextAction_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_m_defaultContextAction_1() { return &___m_defaultContextAction_1; }
	inline void set_m_defaultContextAction_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___m_defaultContextAction_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultContextAction_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
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


// System.Byte
struct  Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Threading.CancellationToken
struct  CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD 
{
public:
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::m_source
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;

public:
	inline static int32_t get_offset_of_m_source_0() { return static_cast<int32_t>(offsetof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD, ___m_source_0)); }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * get_m_source_0() const { return ___m_source_0; }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 ** get_address_of_m_source_0() { return &___m_source_0; }
	inline void set_m_source_0(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * value)
	{
		___m_source_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_source_0), (void*)value);
	}
};

struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_StaticFields
{
public:
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_ActionToActionObjShunt
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_ActionToActionObjShunt_1;

public:
	inline static int32_t get_offset_of_s_ActionToActionObjShunt_1() { return static_cast<int32_t>(offsetof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_StaticFields, ___s_ActionToActionObjShunt_1)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_ActionToActionObjShunt_1() const { return ___s_ActionToActionObjShunt_1; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_ActionToActionObjShunt_1() { return &___s_ActionToActionObjShunt_1; }
	inline void set_s_ActionToActionObjShunt_1(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_ActionToActionObjShunt_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ActionToActionObjShunt_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshaled_pinvoke
{
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshaled_com
{
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;
};

// System.Char
struct  Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// System.DateTime
struct  DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MinValue_31)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MaxValue_32)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MaxValue_32 = value;
	}
};


// System.Text.DecoderNLS
struct  DecoderNLS_tE5B1B7D68B698C0B65FBEE94EAE2453FFD3D538A  : public Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370
{
public:
	// System.Text.Encoding System.Text.DecoderNLS::m_encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___m_encoding_2;
	// System.Boolean System.Text.DecoderNLS::m_mustFlush
	bool ___m_mustFlush_3;
	// System.Boolean System.Text.DecoderNLS::m_throwOnOverflow
	bool ___m_throwOnOverflow_4;
	// System.Int32 System.Text.DecoderNLS::m_bytesUsed
	int32_t ___m_bytesUsed_5;

public:
	inline static int32_t get_offset_of_m_encoding_2() { return static_cast<int32_t>(offsetof(DecoderNLS_tE5B1B7D68B698C0B65FBEE94EAE2453FFD3D538A, ___m_encoding_2)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_m_encoding_2() const { return ___m_encoding_2; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_m_encoding_2() { return &___m_encoding_2; }
	inline void set_m_encoding_2(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___m_encoding_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_encoding_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_mustFlush_3() { return static_cast<int32_t>(offsetof(DecoderNLS_tE5B1B7D68B698C0B65FBEE94EAE2453FFD3D538A, ___m_mustFlush_3)); }
	inline bool get_m_mustFlush_3() const { return ___m_mustFlush_3; }
	inline bool* get_address_of_m_mustFlush_3() { return &___m_mustFlush_3; }
	inline void set_m_mustFlush_3(bool value)
	{
		___m_mustFlush_3 = value;
	}

	inline static int32_t get_offset_of_m_throwOnOverflow_4() { return static_cast<int32_t>(offsetof(DecoderNLS_tE5B1B7D68B698C0B65FBEE94EAE2453FFD3D538A, ___m_throwOnOverflow_4)); }
	inline bool get_m_throwOnOverflow_4() const { return ___m_throwOnOverflow_4; }
	inline bool* get_address_of_m_throwOnOverflow_4() { return &___m_throwOnOverflow_4; }
	inline void set_m_throwOnOverflow_4(bool value)
	{
		___m_throwOnOverflow_4 = value;
	}

	inline static int32_t get_offset_of_m_bytesUsed_5() { return static_cast<int32_t>(offsetof(DecoderNLS_tE5B1B7D68B698C0B65FBEE94EAE2453FFD3D538A, ___m_bytesUsed_5)); }
	inline int32_t get_m_bytesUsed_5() const { return ___m_bytesUsed_5; }
	inline int32_t* get_address_of_m_bytesUsed_5() { return &___m_bytesUsed_5; }
	inline void set_m_bytesUsed_5(int32_t value)
	{
		___m_bytesUsed_5 = value;
	}
};


// System.Text.EncoderNLS
struct  EncoderNLS_tB071198C3F300408FDED1BD2C822F46A25115712  : public Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A
{
public:
	// System.Char System.Text.EncoderNLS::charLeftOver
	Il2CppChar ___charLeftOver_2;
	// System.Text.Encoding System.Text.EncoderNLS::m_encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___m_encoding_3;
	// System.Boolean System.Text.EncoderNLS::m_mustFlush
	bool ___m_mustFlush_4;
	// System.Boolean System.Text.EncoderNLS::m_throwOnOverflow
	bool ___m_throwOnOverflow_5;
	// System.Int32 System.Text.EncoderNLS::m_charsUsed
	int32_t ___m_charsUsed_6;

public:
	inline static int32_t get_offset_of_charLeftOver_2() { return static_cast<int32_t>(offsetof(EncoderNLS_tB071198C3F300408FDED1BD2C822F46A25115712, ___charLeftOver_2)); }
	inline Il2CppChar get_charLeftOver_2() const { return ___charLeftOver_2; }
	inline Il2CppChar* get_address_of_charLeftOver_2() { return &___charLeftOver_2; }
	inline void set_charLeftOver_2(Il2CppChar value)
	{
		___charLeftOver_2 = value;
	}

	inline static int32_t get_offset_of_m_encoding_3() { return static_cast<int32_t>(offsetof(EncoderNLS_tB071198C3F300408FDED1BD2C822F46A25115712, ___m_encoding_3)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_m_encoding_3() const { return ___m_encoding_3; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_m_encoding_3() { return &___m_encoding_3; }
	inline void set_m_encoding_3(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___m_encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_mustFlush_4() { return static_cast<int32_t>(offsetof(EncoderNLS_tB071198C3F300408FDED1BD2C822F46A25115712, ___m_mustFlush_4)); }
	inline bool get_m_mustFlush_4() const { return ___m_mustFlush_4; }
	inline bool* get_address_of_m_mustFlush_4() { return &___m_mustFlush_4; }
	inline void set_m_mustFlush_4(bool value)
	{
		___m_mustFlush_4 = value;
	}

	inline static int32_t get_offset_of_m_throwOnOverflow_5() { return static_cast<int32_t>(offsetof(EncoderNLS_tB071198C3F300408FDED1BD2C822F46A25115712, ___m_throwOnOverflow_5)); }
	inline bool get_m_throwOnOverflow_5() const { return ___m_throwOnOverflow_5; }
	inline bool* get_address_of_m_throwOnOverflow_5() { return &___m_throwOnOverflow_5; }
	inline void set_m_throwOnOverflow_5(bool value)
	{
		___m_throwOnOverflow_5 = value;
	}

	inline static int32_t get_offset_of_m_charsUsed_6() { return static_cast<int32_t>(offsetof(EncoderNLS_tB071198C3F300408FDED1BD2C822F46A25115712, ___m_charsUsed_6)); }
	inline int32_t get_m_charsUsed_6() const { return ___m_charsUsed_6; }
	inline int32_t* get_address_of_m_charsUsed_6() { return &___m_charsUsed_6; }
	inline void set_m_charsUsed_6(int32_t value)
	{
		___m_charsUsed_6 = value;
	}
};


// System.Enum
struct  Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
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


// System.Int64
struct  Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
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


// System.Threading.SpinWait
struct  SpinWait_tEBEEDAE5AEEBBDDEA635932A22308A8398C9AED9 
{
public:
	// System.Int32 System.Threading.SpinWait::m_count
	int32_t ___m_count_0;

public:
	inline static int32_t get_offset_of_m_count_0() { return static_cast<int32_t>(offsetof(SpinWait_tEBEEDAE5AEEBBDDEA635932A22308A8398C9AED9, ___m_count_0)); }
	inline int32_t get_m_count_0() const { return ___m_count_0; }
	inline int32_t* get_address_of_m_count_0() { return &___m_count_0; }
	inline void set_m_count_0(int32_t value)
	{
		___m_count_0 = value;
	}
};


// System.IO.TextReader
struct  TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:

public:
};

struct TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields
{
public:
	// System.Func`2<System.Object,System.String> System.IO.TextReader::_ReadLineDelegate
	Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * ____ReadLineDelegate_1;
	// System.Func`2<System.Object,System.Int32> System.IO.TextReader::_ReadDelegate
	Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * ____ReadDelegate_2;
	// System.IO.TextReader System.IO.TextReader::Null
	TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * ___Null_3;

public:
	inline static int32_t get_offset_of__ReadLineDelegate_1() { return static_cast<int32_t>(offsetof(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields, ____ReadLineDelegate_1)); }
	inline Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * get__ReadLineDelegate_1() const { return ____ReadLineDelegate_1; }
	inline Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 ** get_address_of__ReadLineDelegate_1() { return &____ReadLineDelegate_1; }
	inline void set__ReadLineDelegate_1(Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * value)
	{
		____ReadLineDelegate_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ReadLineDelegate_1), (void*)value);
	}

	inline static int32_t get_offset_of__ReadDelegate_2() { return static_cast<int32_t>(offsetof(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields, ____ReadDelegate_2)); }
	inline Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * get__ReadDelegate_2() const { return ____ReadDelegate_2; }
	inline Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C ** get_address_of__ReadDelegate_2() { return &____ReadDelegate_2; }
	inline void set__ReadDelegate_2(Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * value)
	{
		____ReadDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ReadDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of_Null_3() { return static_cast<int32_t>(offsetof(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields, ___Null_3)); }
	inline TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * get_Null_3() const { return ___Null_3; }
	inline TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F ** get_address_of_Null_3() { return &___Null_3; }
	inline void set_Null_3(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * value)
	{
		___Null_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_3), (void*)value);
	}
};


// System.IO.TextWriter
struct  TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.Char[] System.IO.TextWriter::CoreNewLine
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___CoreNewLine_9;
	// System.IFormatProvider System.IO.TextWriter::InternalFormatProvider
	RuntimeObject* ___InternalFormatProvider_10;

public:
	inline static int32_t get_offset_of_CoreNewLine_9() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643, ___CoreNewLine_9)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_CoreNewLine_9() const { return ___CoreNewLine_9; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_CoreNewLine_9() { return &___CoreNewLine_9; }
	inline void set_CoreNewLine_9(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___CoreNewLine_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CoreNewLine_9), (void*)value);
	}

	inline static int32_t get_offset_of_InternalFormatProvider_10() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643, ___InternalFormatProvider_10)); }
	inline RuntimeObject* get_InternalFormatProvider_10() const { return ___InternalFormatProvider_10; }
	inline RuntimeObject** get_address_of_InternalFormatProvider_10() { return &___InternalFormatProvider_10; }
	inline void set_InternalFormatProvider_10(RuntimeObject* value)
	{
		___InternalFormatProvider_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InternalFormatProvider_10), (void*)value);
	}
};

struct TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields
{
public:
	// System.IO.TextWriter System.IO.TextWriter::Null
	TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * ___Null_1;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteCharDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteCharDelegate_2;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteStringDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteStringDelegate_3;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteCharArrayRangeDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteCharArrayRangeDelegate_4;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineCharDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteLineCharDelegate_5;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineStringDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteLineStringDelegate_6;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineCharArrayRangeDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteLineCharArrayRangeDelegate_7;
	// System.Action`1<System.Object> System.IO.TextWriter::_FlushDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____FlushDelegate_8;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ___Null_1)); }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * get_Null_1() const { return ___Null_1; }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}

	inline static int32_t get_offset_of__WriteCharDelegate_2() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteCharDelegate_2)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteCharDelegate_2() const { return ____WriteCharDelegate_2; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteCharDelegate_2() { return &____WriteCharDelegate_2; }
	inline void set__WriteCharDelegate_2(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteCharDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteCharDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of__WriteStringDelegate_3() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteStringDelegate_3)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteStringDelegate_3() const { return ____WriteStringDelegate_3; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteStringDelegate_3() { return &____WriteStringDelegate_3; }
	inline void set__WriteStringDelegate_3(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteStringDelegate_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteStringDelegate_3), (void*)value);
	}

	inline static int32_t get_offset_of__WriteCharArrayRangeDelegate_4() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteCharArrayRangeDelegate_4)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteCharArrayRangeDelegate_4() const { return ____WriteCharArrayRangeDelegate_4; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteCharArrayRangeDelegate_4() { return &____WriteCharArrayRangeDelegate_4; }
	inline void set__WriteCharArrayRangeDelegate_4(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteCharArrayRangeDelegate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteCharArrayRangeDelegate_4), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineCharDelegate_5() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteLineCharDelegate_5)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteLineCharDelegate_5() const { return ____WriteLineCharDelegate_5; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteLineCharDelegate_5() { return &____WriteLineCharDelegate_5; }
	inline void set__WriteLineCharDelegate_5(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteLineCharDelegate_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineCharDelegate_5), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineStringDelegate_6() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteLineStringDelegate_6)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteLineStringDelegate_6() const { return ____WriteLineStringDelegate_6; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteLineStringDelegate_6() { return &____WriteLineStringDelegate_6; }
	inline void set__WriteLineStringDelegate_6(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteLineStringDelegate_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineStringDelegate_6), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineCharArrayRangeDelegate_7() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteLineCharArrayRangeDelegate_7)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteLineCharArrayRangeDelegate_7() const { return ____WriteLineCharArrayRangeDelegate_7; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteLineCharArrayRangeDelegate_7() { return &____WriteLineCharArrayRangeDelegate_7; }
	inline void set__WriteLineCharArrayRangeDelegate_7(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteLineCharArrayRangeDelegate_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineCharArrayRangeDelegate_7), (void*)value);
	}

	inline static int32_t get_offset_of__FlushDelegate_8() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____FlushDelegate_8)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__FlushDelegate_8() const { return ____FlushDelegate_8; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__FlushDelegate_8() { return &____FlushDelegate_8; }
	inline void set__FlushDelegate_8(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____FlushDelegate_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____FlushDelegate_8), (void*)value);
	}
};


// System.Threading.Thread
struct  Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414  : public CriticalFinalizerObject_tA3367C832FFE7434EB3C15C7136AF25524150997
{
public:
	// System.Threading.InternalThread System.Threading.Thread::internal_thread
	InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB * ___internal_thread_6;
	// System.Object System.Threading.Thread::m_ThreadStartArg
	RuntimeObject * ___m_ThreadStartArg_7;
	// System.Object System.Threading.Thread::pending_exception
	RuntimeObject * ___pending_exception_8;
	// System.Security.Principal.IPrincipal System.Threading.Thread::principal
	RuntimeObject* ___principal_9;
	// System.Int32 System.Threading.Thread::principal_version
	int32_t ___principal_version_10;
	// System.MulticastDelegate System.Threading.Thread::m_Delegate
	MulticastDelegate_t * ___m_Delegate_12;
	// System.Threading.ExecutionContext System.Threading.Thread::m_ExecutionContext
	ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * ___m_ExecutionContext_13;
	// System.Boolean System.Threading.Thread::m_ExecutionContextBelongsToOuterScope
	bool ___m_ExecutionContextBelongsToOuterScope_14;

public:
	inline static int32_t get_offset_of_internal_thread_6() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___internal_thread_6)); }
	inline InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB * get_internal_thread_6() const { return ___internal_thread_6; }
	inline InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB ** get_address_of_internal_thread_6() { return &___internal_thread_6; }
	inline void set_internal_thread_6(InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB * value)
	{
		___internal_thread_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___internal_thread_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_ThreadStartArg_7() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___m_ThreadStartArg_7)); }
	inline RuntimeObject * get_m_ThreadStartArg_7() const { return ___m_ThreadStartArg_7; }
	inline RuntimeObject ** get_address_of_m_ThreadStartArg_7() { return &___m_ThreadStartArg_7; }
	inline void set_m_ThreadStartArg_7(RuntimeObject * value)
	{
		___m_ThreadStartArg_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ThreadStartArg_7), (void*)value);
	}

	inline static int32_t get_offset_of_pending_exception_8() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___pending_exception_8)); }
	inline RuntimeObject * get_pending_exception_8() const { return ___pending_exception_8; }
	inline RuntimeObject ** get_address_of_pending_exception_8() { return &___pending_exception_8; }
	inline void set_pending_exception_8(RuntimeObject * value)
	{
		___pending_exception_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pending_exception_8), (void*)value);
	}

	inline static int32_t get_offset_of_principal_9() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___principal_9)); }
	inline RuntimeObject* get_principal_9() const { return ___principal_9; }
	inline RuntimeObject** get_address_of_principal_9() { return &___principal_9; }
	inline void set_principal_9(RuntimeObject* value)
	{
		___principal_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___principal_9), (void*)value);
	}

	inline static int32_t get_offset_of_principal_version_10() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___principal_version_10)); }
	inline int32_t get_principal_version_10() const { return ___principal_version_10; }
	inline int32_t* get_address_of_principal_version_10() { return &___principal_version_10; }
	inline void set_principal_version_10(int32_t value)
	{
		___principal_version_10 = value;
	}

	inline static int32_t get_offset_of_m_Delegate_12() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___m_Delegate_12)); }
	inline MulticastDelegate_t * get_m_Delegate_12() const { return ___m_Delegate_12; }
	inline MulticastDelegate_t ** get_address_of_m_Delegate_12() { return &___m_Delegate_12; }
	inline void set_m_Delegate_12(MulticastDelegate_t * value)
	{
		___m_Delegate_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Delegate_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_ExecutionContext_13() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___m_ExecutionContext_13)); }
	inline ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * get_m_ExecutionContext_13() const { return ___m_ExecutionContext_13; }
	inline ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 ** get_address_of_m_ExecutionContext_13() { return &___m_ExecutionContext_13; }
	inline void set_m_ExecutionContext_13(ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * value)
	{
		___m_ExecutionContext_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ExecutionContext_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_ExecutionContextBelongsToOuterScope_14() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___m_ExecutionContextBelongsToOuterScope_14)); }
	inline bool get_m_ExecutionContextBelongsToOuterScope_14() const { return ___m_ExecutionContextBelongsToOuterScope_14; }
	inline bool* get_address_of_m_ExecutionContextBelongsToOuterScope_14() { return &___m_ExecutionContextBelongsToOuterScope_14; }
	inline void set_m_ExecutionContextBelongsToOuterScope_14(bool value)
	{
		___m_ExecutionContextBelongsToOuterScope_14 = value;
	}
};

struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_StaticFields
{
public:
	// System.LocalDataStoreMgr System.Threading.Thread::s_LocalDataStoreMgr
	LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A * ___s_LocalDataStoreMgr_0;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentCulture
	AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * ___s_asyncLocalCurrentCulture_4;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentUICulture
	AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * ___s_asyncLocalCurrentUICulture_5;

public:
	inline static int32_t get_offset_of_s_LocalDataStoreMgr_0() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_StaticFields, ___s_LocalDataStoreMgr_0)); }
	inline LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A * get_s_LocalDataStoreMgr_0() const { return ___s_LocalDataStoreMgr_0; }
	inline LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A ** get_address_of_s_LocalDataStoreMgr_0() { return &___s_LocalDataStoreMgr_0; }
	inline void set_s_LocalDataStoreMgr_0(LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A * value)
	{
		___s_LocalDataStoreMgr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_LocalDataStoreMgr_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncLocalCurrentCulture_4() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_StaticFields, ___s_asyncLocalCurrentCulture_4)); }
	inline AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * get_s_asyncLocalCurrentCulture_4() const { return ___s_asyncLocalCurrentCulture_4; }
	inline AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 ** get_address_of_s_asyncLocalCurrentCulture_4() { return &___s_asyncLocalCurrentCulture_4; }
	inline void set_s_asyncLocalCurrentCulture_4(AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * value)
	{
		___s_asyncLocalCurrentCulture_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_asyncLocalCurrentCulture_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncLocalCurrentUICulture_5() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_StaticFields, ___s_asyncLocalCurrentUICulture_5)); }
	inline AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * get_s_asyncLocalCurrentUICulture_5() const { return ___s_asyncLocalCurrentUICulture_5; }
	inline AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 ** get_address_of_s_asyncLocalCurrentUICulture_5() { return &___s_asyncLocalCurrentUICulture_5; }
	inline void set_s_asyncLocalCurrentUICulture_5(AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * value)
	{
		___s_asyncLocalCurrentUICulture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_asyncLocalCurrentUICulture_5), (void*)value);
	}
};

struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields
{
public:
	// System.LocalDataStoreHolder System.Threading.Thread::s_LocalDataStore
	LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146 * ___s_LocalDataStore_1;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentCulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___m_CurrentCulture_2;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentUICulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___m_CurrentUICulture_3;
	// System.Threading.Thread System.Threading.Thread::current_thread
	Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * ___current_thread_11;

public:
	inline static int32_t get_offset_of_s_LocalDataStore_1() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields, ___s_LocalDataStore_1)); }
	inline LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146 * get_s_LocalDataStore_1() const { return ___s_LocalDataStore_1; }
	inline LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146 ** get_address_of_s_LocalDataStore_1() { return &___s_LocalDataStore_1; }
	inline void set_s_LocalDataStore_1(LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146 * value)
	{
		___s_LocalDataStore_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_LocalDataStore_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentCulture_2() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields, ___m_CurrentCulture_2)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_m_CurrentCulture_2() const { return ___m_CurrentCulture_2; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_m_CurrentCulture_2() { return &___m_CurrentCulture_2; }
	inline void set_m_CurrentCulture_2(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___m_CurrentCulture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentCulture_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentUICulture_3() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields, ___m_CurrentUICulture_3)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_m_CurrentUICulture_3() const { return ___m_CurrentUICulture_3; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_m_CurrentUICulture_3() { return &___m_CurrentUICulture_3; }
	inline void set_m_CurrentUICulture_3(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___m_CurrentUICulture_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentUICulture_3), (void*)value);
	}

	inline static int32_t get_offset_of_current_thread_11() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields, ___current_thread_11)); }
	inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * get_current_thread_11() const { return ___current_thread_11; }
	inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 ** get_address_of_current_thread_11() { return &___current_thread_11; }
	inline void set_current_thread_11(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * value)
	{
		___current_thread_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_thread_11), (void*)value);
	}
};


// System.Threading.Timer
struct  Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.Threading.TimerCallback System.Threading.Timer::callback
	TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814 * ___callback_2;
	// System.Object System.Threading.Timer::state
	RuntimeObject * ___state_3;
	// System.Int64 System.Threading.Timer::due_time_ms
	int64_t ___due_time_ms_4;
	// System.Int64 System.Threading.Timer::period_ms
	int64_t ___period_ms_5;
	// System.Int64 System.Threading.Timer::next_run
	int64_t ___next_run_6;
	// System.Boolean System.Threading.Timer::disposed
	bool ___disposed_7;

public:
	inline static int32_t get_offset_of_callback_2() { return static_cast<int32_t>(offsetof(Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB, ___callback_2)); }
	inline TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814 * get_callback_2() const { return ___callback_2; }
	inline TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814 ** get_address_of_callback_2() { return &___callback_2; }
	inline void set_callback_2(TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814 * value)
	{
		___callback_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_2), (void*)value);
	}

	inline static int32_t get_offset_of_state_3() { return static_cast<int32_t>(offsetof(Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB, ___state_3)); }
	inline RuntimeObject * get_state_3() const { return ___state_3; }
	inline RuntimeObject ** get_address_of_state_3() { return &___state_3; }
	inline void set_state_3(RuntimeObject * value)
	{
		___state_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___state_3), (void*)value);
	}

	inline static int32_t get_offset_of_due_time_ms_4() { return static_cast<int32_t>(offsetof(Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB, ___due_time_ms_4)); }
	inline int64_t get_due_time_ms_4() const { return ___due_time_ms_4; }
	inline int64_t* get_address_of_due_time_ms_4() { return &___due_time_ms_4; }
	inline void set_due_time_ms_4(int64_t value)
	{
		___due_time_ms_4 = value;
	}

	inline static int32_t get_offset_of_period_ms_5() { return static_cast<int32_t>(offsetof(Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB, ___period_ms_5)); }
	inline int64_t get_period_ms_5() const { return ___period_ms_5; }
	inline int64_t* get_address_of_period_ms_5() { return &___period_ms_5; }
	inline void set_period_ms_5(int64_t value)
	{
		___period_ms_5 = value;
	}

	inline static int32_t get_offset_of_next_run_6() { return static_cast<int32_t>(offsetof(Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB, ___next_run_6)); }
	inline int64_t get_next_run_6() const { return ___next_run_6; }
	inline int64_t* get_address_of_next_run_6() { return &___next_run_6; }
	inline void set_next_run_6(int64_t value)
	{
		___next_run_6 = value;
	}

	inline static int32_t get_offset_of_disposed_7() { return static_cast<int32_t>(offsetof(Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB, ___disposed_7)); }
	inline bool get_disposed_7() const { return ___disposed_7; }
	inline bool* get_address_of_disposed_7() { return &___disposed_7; }
	inline void set_disposed_7(bool value)
	{
		___disposed_7 = value;
	}
};

struct Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB_StaticFields
{
public:
	// System.Threading.Timer/Scheduler System.Threading.Timer::scheduler
	Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * ___scheduler_1;

public:
	inline static int32_t get_offset_of_scheduler_1() { return static_cast<int32_t>(offsetof(Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB_StaticFields, ___scheduler_1)); }
	inline Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * get_scheduler_1() const { return ___scheduler_1; }
	inline Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 ** get_address_of_scheduler_1() { return &___scheduler_1; }
	inline void set_scheduler_1(Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * value)
	{
		___scheduler_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scheduler_1), (void*)value);
	}
};


// System.UInt64
struct  UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};


// System.Text.UTF32Encoding
struct  UTF32Encoding_t54B51C8FAC5B2EAB4BDFACBBA06DB6117A38D014  : public Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827
{
public:
	// System.Boolean System.Text.UTF32Encoding::emitUTF32ByteOrderMark
	bool ___emitUTF32ByteOrderMark_16;
	// System.Boolean System.Text.UTF32Encoding::isThrowException
	bool ___isThrowException_17;
	// System.Boolean System.Text.UTF32Encoding::bigEndian
	bool ___bigEndian_18;

public:
	inline static int32_t get_offset_of_emitUTF32ByteOrderMark_16() { return static_cast<int32_t>(offsetof(UTF32Encoding_t54B51C8FAC5B2EAB4BDFACBBA06DB6117A38D014, ___emitUTF32ByteOrderMark_16)); }
	inline bool get_emitUTF32ByteOrderMark_16() const { return ___emitUTF32ByteOrderMark_16; }
	inline bool* get_address_of_emitUTF32ByteOrderMark_16() { return &___emitUTF32ByteOrderMark_16; }
	inline void set_emitUTF32ByteOrderMark_16(bool value)
	{
		___emitUTF32ByteOrderMark_16 = value;
	}

	inline static int32_t get_offset_of_isThrowException_17() { return static_cast<int32_t>(offsetof(UTF32Encoding_t54B51C8FAC5B2EAB4BDFACBBA06DB6117A38D014, ___isThrowException_17)); }
	inline bool get_isThrowException_17() const { return ___isThrowException_17; }
	inline bool* get_address_of_isThrowException_17() { return &___isThrowException_17; }
	inline void set_isThrowException_17(bool value)
	{
		___isThrowException_17 = value;
	}

	inline static int32_t get_offset_of_bigEndian_18() { return static_cast<int32_t>(offsetof(UTF32Encoding_t54B51C8FAC5B2EAB4BDFACBBA06DB6117A38D014, ___bigEndian_18)); }
	inline bool get_bigEndian_18() const { return ___bigEndian_18; }
	inline bool* get_address_of_bigEndian_18() { return &___bigEndian_18; }
	inline void set_bigEndian_18(bool value)
	{
		___bigEndian_18 = value;
	}
};


// System.Text.UTF7Encoding
struct  UTF7Encoding_tA5454D96973119953BD301F20B9E59C77B5FA076  : public Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827
{
public:
	// System.Byte[] System.Text.UTF7Encoding::base64Bytes
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___base64Bytes_16;
	// System.SByte[] System.Text.UTF7Encoding::base64Values
	SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* ___base64Values_17;
	// System.Boolean[] System.Text.UTF7Encoding::directEncode
	BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* ___directEncode_18;
	// System.Boolean System.Text.UTF7Encoding::m_allowOptionals
	bool ___m_allowOptionals_19;

public:
	inline static int32_t get_offset_of_base64Bytes_16() { return static_cast<int32_t>(offsetof(UTF7Encoding_tA5454D96973119953BD301F20B9E59C77B5FA076, ___base64Bytes_16)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_base64Bytes_16() const { return ___base64Bytes_16; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_base64Bytes_16() { return &___base64Bytes_16; }
	inline void set_base64Bytes_16(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___base64Bytes_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___base64Bytes_16), (void*)value);
	}

	inline static int32_t get_offset_of_base64Values_17() { return static_cast<int32_t>(offsetof(UTF7Encoding_tA5454D96973119953BD301F20B9E59C77B5FA076, ___base64Values_17)); }
	inline SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* get_base64Values_17() const { return ___base64Values_17; }
	inline SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7** get_address_of_base64Values_17() { return &___base64Values_17; }
	inline void set_base64Values_17(SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* value)
	{
		___base64Values_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___base64Values_17), (void*)value);
	}

	inline static int32_t get_offset_of_directEncode_18() { return static_cast<int32_t>(offsetof(UTF7Encoding_tA5454D96973119953BD301F20B9E59C77B5FA076, ___directEncode_18)); }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* get_directEncode_18() const { return ___directEncode_18; }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C** get_address_of_directEncode_18() { return &___directEncode_18; }
	inline void set_directEncode_18(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* value)
	{
		___directEncode_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___directEncode_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_allowOptionals_19() { return static_cast<int32_t>(offsetof(UTF7Encoding_tA5454D96973119953BD301F20B9E59C77B5FA076, ___m_allowOptionals_19)); }
	inline bool get_m_allowOptionals_19() const { return ___m_allowOptionals_19; }
	inline bool* get_address_of_m_allowOptionals_19() { return &___m_allowOptionals_19; }
	inline void set_m_allowOptionals_19(bool value)
	{
		___m_allowOptionals_19 = value;
	}
};


// System.Text.UTF8Encoding
struct  UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282  : public Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827
{
public:
	// System.Boolean System.Text.UTF8Encoding::emitUTF8Identifier
	bool ___emitUTF8Identifier_16;
	// System.Boolean System.Text.UTF8Encoding::isThrowException
	bool ___isThrowException_17;

public:
	inline static int32_t get_offset_of_emitUTF8Identifier_16() { return static_cast<int32_t>(offsetof(UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282, ___emitUTF8Identifier_16)); }
	inline bool get_emitUTF8Identifier_16() const { return ___emitUTF8Identifier_16; }
	inline bool* get_address_of_emitUTF8Identifier_16() { return &___emitUTF8Identifier_16; }
	inline void set_emitUTF8Identifier_16(bool value)
	{
		___emitUTF8Identifier_16 = value;
	}

	inline static int32_t get_offset_of_isThrowException_17() { return static_cast<int32_t>(offsetof(UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282, ___isThrowException_17)); }
	inline bool get_isThrowException_17() const { return ___isThrowException_17; }
	inline bool* get_address_of_isThrowException_17() { return &___isThrowException_17; }
	inline void set_isThrowException_17(bool value)
	{
		___isThrowException_17 = value;
	}
};


// System.Text.UnicodeEncoding
struct  UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68  : public Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827
{
public:
	// System.Boolean System.Text.UnicodeEncoding::isThrowException
	bool ___isThrowException_16;
	// System.Boolean System.Text.UnicodeEncoding::bigEndian
	bool ___bigEndian_17;
	// System.Boolean System.Text.UnicodeEncoding::byteOrderMark
	bool ___byteOrderMark_18;

public:
	inline static int32_t get_offset_of_isThrowException_16() { return static_cast<int32_t>(offsetof(UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68, ___isThrowException_16)); }
	inline bool get_isThrowException_16() const { return ___isThrowException_16; }
	inline bool* get_address_of_isThrowException_16() { return &___isThrowException_16; }
	inline void set_isThrowException_16(bool value)
	{
		___isThrowException_16 = value;
	}

	inline static int32_t get_offset_of_bigEndian_17() { return static_cast<int32_t>(offsetof(UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68, ___bigEndian_17)); }
	inline bool get_bigEndian_17() const { return ___bigEndian_17; }
	inline bool* get_address_of_bigEndian_17() { return &___bigEndian_17; }
	inline void set_bigEndian_17(bool value)
	{
		___bigEndian_17 = value;
	}

	inline static int32_t get_offset_of_byteOrderMark_18() { return static_cast<int32_t>(offsetof(UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68, ___byteOrderMark_18)); }
	inline bool get_byteOrderMark_18() const { return ___byteOrderMark_18; }
	inline bool* get_address_of_byteOrderMark_18() { return &___byteOrderMark_18; }
	inline void set_byteOrderMark_18(bool value)
	{
		___byteOrderMark_18 = value;
	}
};

struct UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68_StaticFields
{
public:
	// System.UInt64 System.Text.UnicodeEncoding::highLowPatternMask
	uint64_t ___highLowPatternMask_19;

public:
	inline static int32_t get_offset_of_highLowPatternMask_19() { return static_cast<int32_t>(offsetof(UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68_StaticFields, ___highLowPatternMask_19)); }
	inline uint64_t get_highLowPatternMask_19() const { return ___highLowPatternMask_19; }
	inline uint64_t* get_address_of_highLowPatternMask_19() { return &___highLowPatternMask_19; }
	inline void set_highLowPatternMask_19(uint64_t value)
	{
		___highLowPatternMask_19 = value;
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


// System.Threading.Tasks.VoidTaskResult
struct  VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004 
{
public:
	union
	{
		struct
		{
		};
		uint8_t VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004__padding[1];
	};

public:
};


// System.Globalization.TimeSpanFormat/FormatLiterals
struct  FormatLiterals_t8EC4E080425C3E3AE6627A6BB7F5B487680E3C94 
{
public:
	// System.String System.Globalization.TimeSpanFormat/FormatLiterals::AppCompatLiteral
	String_t* ___AppCompatLiteral_0;
	// System.Int32 System.Globalization.TimeSpanFormat/FormatLiterals::dd
	int32_t ___dd_1;
	// System.Int32 System.Globalization.TimeSpanFormat/FormatLiterals::hh
	int32_t ___hh_2;
	// System.Int32 System.Globalization.TimeSpanFormat/FormatLiterals::mm
	int32_t ___mm_3;
	// System.Int32 System.Globalization.TimeSpanFormat/FormatLiterals::ss
	int32_t ___ss_4;
	// System.Int32 System.Globalization.TimeSpanFormat/FormatLiterals::ff
	int32_t ___ff_5;
	// System.String[] System.Globalization.TimeSpanFormat/FormatLiterals::literals
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___literals_6;

public:
	inline static int32_t get_offset_of_AppCompatLiteral_0() { return static_cast<int32_t>(offsetof(FormatLiterals_t8EC4E080425C3E3AE6627A6BB7F5B487680E3C94, ___AppCompatLiteral_0)); }
	inline String_t* get_AppCompatLiteral_0() const { return ___AppCompatLiteral_0; }
	inline String_t** get_address_of_AppCompatLiteral_0() { return &___AppCompatLiteral_0; }
	inline void set_AppCompatLiteral_0(String_t* value)
	{
		___AppCompatLiteral_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AppCompatLiteral_0), (void*)value);
	}

	inline static int32_t get_offset_of_dd_1() { return static_cast<int32_t>(offsetof(FormatLiterals_t8EC4E080425C3E3AE6627A6BB7F5B487680E3C94, ___dd_1)); }
	inline int32_t get_dd_1() const { return ___dd_1; }
	inline int32_t* get_address_of_dd_1() { return &___dd_1; }
	inline void set_dd_1(int32_t value)
	{
		___dd_1 = value;
	}

	inline static int32_t get_offset_of_hh_2() { return static_cast<int32_t>(offsetof(FormatLiterals_t8EC4E080425C3E3AE6627A6BB7F5B487680E3C94, ___hh_2)); }
	inline int32_t get_hh_2() const { return ___hh_2; }
	inline int32_t* get_address_of_hh_2() { return &___hh_2; }
	inline void set_hh_2(int32_t value)
	{
		___hh_2 = value;
	}

	inline static int32_t get_offset_of_mm_3() { return static_cast<int32_t>(offsetof(FormatLiterals_t8EC4E080425C3E3AE6627A6BB7F5B487680E3C94, ___mm_3)); }
	inline int32_t get_mm_3() const { return ___mm_3; }
	inline int32_t* get_address_of_mm_3() { return &___mm_3; }
	inline void set_mm_3(int32_t value)
	{
		___mm_3 = value;
	}

	inline static int32_t get_offset_of_ss_4() { return static_cast<int32_t>(offsetof(FormatLiterals_t8EC4E080425C3E3AE6627A6BB7F5B487680E3C94, ___ss_4)); }
	inline int32_t get_ss_4() const { return ___ss_4; }
	inline int32_t* get_address_of_ss_4() { return &___ss_4; }
	inline void set_ss_4(int32_t value)
	{
		___ss_4 = value;
	}

	inline static int32_t get_offset_of_ff_5() { return static_cast<int32_t>(offsetof(FormatLiterals_t8EC4E080425C3E3AE6627A6BB7F5B487680E3C94, ___ff_5)); }
	inline int32_t get_ff_5() const { return ___ff_5; }
	inline int32_t* get_address_of_ff_5() { return &___ff_5; }
	inline void set_ff_5(int32_t value)
	{
		___ff_5 = value;
	}

	inline static int32_t get_offset_of_literals_6() { return static_cast<int32_t>(offsetof(FormatLiterals_t8EC4E080425C3E3AE6627A6BB7F5B487680E3C94, ___literals_6)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_literals_6() const { return ___literals_6; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_literals_6() { return &___literals_6; }
	inline void set_literals_6(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___literals_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___literals_6), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Globalization.TimeSpanFormat/FormatLiterals
struct FormatLiterals_t8EC4E080425C3E3AE6627A6BB7F5B487680E3C94_marshaled_pinvoke
{
	char* ___AppCompatLiteral_0;
	int32_t ___dd_1;
	int32_t ___hh_2;
	int32_t ___mm_3;
	int32_t ___ss_4;
	int32_t ___ff_5;
	char** ___literals_6;
};
// Native definition for COM marshalling of System.Globalization.TimeSpanFormat/FormatLiterals
struct FormatLiterals_t8EC4E080425C3E3AE6627A6BB7F5B487680E3C94_marshaled_com
{
	Il2CppChar* ___AppCompatLiteral_0;
	int32_t ___dd_1;
	int32_t ___hh_2;
	int32_t ___mm_3;
	int32_t ___ss_4;
	int32_t ___ff_5;
	Il2CppChar** ___literals_6;
};

// System.TimeZoneInfo/SYSTEMTIME
struct  SYSTEMTIME_tDB5B1D262445C33D2FE644CCC1353DFB26184BA4 
{
public:
	// System.UInt16 System.TimeZoneInfo/SYSTEMTIME::wYear
	uint16_t ___wYear_0;
	// System.UInt16 System.TimeZoneInfo/SYSTEMTIME::wMonth
	uint16_t ___wMonth_1;
	// System.UInt16 System.TimeZoneInfo/SYSTEMTIME::wDayOfWeek
	uint16_t ___wDayOfWeek_2;
	// System.UInt16 System.TimeZoneInfo/SYSTEMTIME::wDay
	uint16_t ___wDay_3;
	// System.UInt16 System.TimeZoneInfo/SYSTEMTIME::wHour
	uint16_t ___wHour_4;
	// System.UInt16 System.TimeZoneInfo/SYSTEMTIME::wMinute
	uint16_t ___wMinute_5;
	// System.UInt16 System.TimeZoneInfo/SYSTEMTIME::wSecond
	uint16_t ___wSecond_6;
	// System.UInt16 System.TimeZoneInfo/SYSTEMTIME::wMilliseconds
	uint16_t ___wMilliseconds_7;

public:
	inline static int32_t get_offset_of_wYear_0() { return static_cast<int32_t>(offsetof(SYSTEMTIME_tDB5B1D262445C33D2FE644CCC1353DFB26184BA4, ___wYear_0)); }
	inline uint16_t get_wYear_0() const { return ___wYear_0; }
	inline uint16_t* get_address_of_wYear_0() { return &___wYear_0; }
	inline void set_wYear_0(uint16_t value)
	{
		___wYear_0 = value;
	}

	inline static int32_t get_offset_of_wMonth_1() { return static_cast<int32_t>(offsetof(SYSTEMTIME_tDB5B1D262445C33D2FE644CCC1353DFB26184BA4, ___wMonth_1)); }
	inline uint16_t get_wMonth_1() const { return ___wMonth_1; }
	inline uint16_t* get_address_of_wMonth_1() { return &___wMonth_1; }
	inline void set_wMonth_1(uint16_t value)
	{
		___wMonth_1 = value;
	}

	inline static int32_t get_offset_of_wDayOfWeek_2() { return static_cast<int32_t>(offsetof(SYSTEMTIME_tDB5B1D262445C33D2FE644CCC1353DFB26184BA4, ___wDayOfWeek_2)); }
	inline uint16_t get_wDayOfWeek_2() const { return ___wDayOfWeek_2; }
	inline uint16_t* get_address_of_wDayOfWeek_2() { return &___wDayOfWeek_2; }
	inline void set_wDayOfWeek_2(uint16_t value)
	{
		___wDayOfWeek_2 = value;
	}

	inline static int32_t get_offset_of_wDay_3() { return static_cast<int32_t>(offsetof(SYSTEMTIME_tDB5B1D262445C33D2FE644CCC1353DFB26184BA4, ___wDay_3)); }
	inline uint16_t get_wDay_3() const { return ___wDay_3; }
	inline uint16_t* get_address_of_wDay_3() { return &___wDay_3; }
	inline void set_wDay_3(uint16_t value)
	{
		___wDay_3 = value;
	}

	inline static int32_t get_offset_of_wHour_4() { return static_cast<int32_t>(offsetof(SYSTEMTIME_tDB5B1D262445C33D2FE644CCC1353DFB26184BA4, ___wHour_4)); }
	inline uint16_t get_wHour_4() const { return ___wHour_4; }
	inline uint16_t* get_address_of_wHour_4() { return &___wHour_4; }
	inline void set_wHour_4(uint16_t value)
	{
		___wHour_4 = value;
	}

	inline static int32_t get_offset_of_wMinute_5() { return static_cast<int32_t>(offsetof(SYSTEMTIME_tDB5B1D262445C33D2FE644CCC1353DFB26184BA4, ___wMinute_5)); }
	inline uint16_t get_wMinute_5() const { return ___wMinute_5; }
	inline uint16_t* get_address_of_wMinute_5() { return &___wMinute_5; }
	inline void set_wMinute_5(uint16_t value)
	{
		___wMinute_5 = value;
	}

	inline static int32_t get_offset_of_wSecond_6() { return static_cast<int32_t>(offsetof(SYSTEMTIME_tDB5B1D262445C33D2FE644CCC1353DFB26184BA4, ___wSecond_6)); }
	inline uint16_t get_wSecond_6() const { return ___wSecond_6; }
	inline uint16_t* get_address_of_wSecond_6() { return &___wSecond_6; }
	inline void set_wSecond_6(uint16_t value)
	{
		___wSecond_6 = value;
	}

	inline static int32_t get_offset_of_wMilliseconds_7() { return static_cast<int32_t>(offsetof(SYSTEMTIME_tDB5B1D262445C33D2FE644CCC1353DFB26184BA4, ___wMilliseconds_7)); }
	inline uint16_t get_wMilliseconds_7() const { return ___wMilliseconds_7; }
	inline uint16_t* get_address_of_wMilliseconds_7() { return &___wMilliseconds_7; }
	inline void set_wMilliseconds_7(uint16_t value)
	{
		___wMilliseconds_7 = value;
	}
};


// System.TypeIdentifiers/Display
struct  Display_tB07FE33B5E37AC259B2FCC8EC820AC5CEDEAC41E  : public ATypeName_t19F245ED1619C78770F92C899C4FE364DBF30861
{
public:
	// System.String System.TypeIdentifiers/Display::displayName
	String_t* ___displayName_0;
	// System.String System.TypeIdentifiers/Display::internal_name
	String_t* ___internal_name_1;

public:
	inline static int32_t get_offset_of_displayName_0() { return static_cast<int32_t>(offsetof(Display_tB07FE33B5E37AC259B2FCC8EC820AC5CEDEAC41E, ___displayName_0)); }
	inline String_t* get_displayName_0() const { return ___displayName_0; }
	inline String_t** get_address_of_displayName_0() { return &___displayName_0; }
	inline void set_displayName_0(String_t* value)
	{
		___displayName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___displayName_0), (void*)value);
	}

	inline static int32_t get_offset_of_internal_name_1() { return static_cast<int32_t>(offsetof(Display_tB07FE33B5E37AC259B2FCC8EC820AC5CEDEAC41E, ___internal_name_1)); }
	inline String_t* get_internal_name_1() const { return ___internal_name_1; }
	inline String_t** get_address_of_internal_name_1() { return &___internal_name_1; }
	inline void set_internal_name_1(String_t* value)
	{
		___internal_name_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___internal_name_1), (void*)value);
	}
};


// System.Text.UTF7Encoding/DecoderUTF7Fallback
struct  DecoderUTF7Fallback_tBEF9A09732FAB23368825AE7C14C0EBF1F9028A8  : public DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D
{
public:

public:
};


// System.Text.UTF7Encoding/DecoderUTF7FallbackBuffer
struct  DecoderUTF7FallbackBuffer_tED3431DB4A6B4F48D1F1433A8E672F8B110D819A  : public DecoderFallbackBuffer_t236B3D4172A9BAD1C2150ED78958227F8F20C94B
{
public:
	// System.Char System.Text.UTF7Encoding/DecoderUTF7FallbackBuffer::cFallback
	Il2CppChar ___cFallback_2;
	// System.Int32 System.Text.UTF7Encoding/DecoderUTF7FallbackBuffer::iCount
	int32_t ___iCount_3;
	// System.Int32 System.Text.UTF7Encoding/DecoderUTF7FallbackBuffer::iSize
	int32_t ___iSize_4;

public:
	inline static int32_t get_offset_of_cFallback_2() { return static_cast<int32_t>(offsetof(DecoderUTF7FallbackBuffer_tED3431DB4A6B4F48D1F1433A8E672F8B110D819A, ___cFallback_2)); }
	inline Il2CppChar get_cFallback_2() const { return ___cFallback_2; }
	inline Il2CppChar* get_address_of_cFallback_2() { return &___cFallback_2; }
	inline void set_cFallback_2(Il2CppChar value)
	{
		___cFallback_2 = value;
	}

	inline static int32_t get_offset_of_iCount_3() { return static_cast<int32_t>(offsetof(DecoderUTF7FallbackBuffer_tED3431DB4A6B4F48D1F1433A8E672F8B110D819A, ___iCount_3)); }
	inline int32_t get_iCount_3() const { return ___iCount_3; }
	inline int32_t* get_address_of_iCount_3() { return &___iCount_3; }
	inline void set_iCount_3(int32_t value)
	{
		___iCount_3 = value;
	}

	inline static int32_t get_offset_of_iSize_4() { return static_cast<int32_t>(offsetof(DecoderUTF7FallbackBuffer_tED3431DB4A6B4F48D1F1433A8E672F8B110D819A, ___iSize_4)); }
	inline int32_t get_iSize_4() const { return ___iSize_4; }
	inline int32_t* get_address_of_iSize_4() { return &___iSize_4; }
	inline void set_iSize_4(int32_t value)
	{
		___iSize_4 = value;
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>
struct  AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020, ___m_task_2)); }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>
struct  AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F, ___m_task_2)); }
	inline Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Int32>
struct  ConfiguredTaskAwaitable_1_t95CB4612A5B70DDFE0643FA38A73D6B984DD68EC 
{
public:
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::m_configuredTaskAwaiter
	ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2  ___m_configuredTaskAwaiter_0;

public:
	inline static int32_t get_offset_of_m_configuredTaskAwaiter_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaitable_1_t95CB4612A5B70DDFE0643FA38A73D6B984DD68EC, ___m_configuredTaskAwaiter_0)); }
	inline ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2  get_m_configuredTaskAwaiter_0() const { return ___m_configuredTaskAwaiter_0; }
	inline ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2 * get_address_of_m_configuredTaskAwaiter_0() { return &___m_configuredTaskAwaiter_0; }
	inline void set_m_configuredTaskAwaiter_0(ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2  value)
	{
		___m_configuredTaskAwaiter_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_configuredTaskAwaiter_0))->___m_task_0), (void*)NULL);
	}
};


// System.Threading.Tasks.AsyncCausalityStatus
struct  AsyncCausalityStatus_tB4918F222DA36F8D1AFD305EEBD3DE3C6FA1631F 
{
public:
	// System.Int32 System.Threading.Tasks.AsyncCausalityStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AsyncCausalityStatus_tB4918F222DA36F8D1AFD305EEBD3DE3C6FA1631F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.BindingFlags
struct  BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.CancellationTokenRegistration
struct  CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A 
{
public:
	// System.Threading.CancellationCallbackInfo System.Threading.CancellationTokenRegistration::m_callbackInfo
	CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * ___m_callbackInfo_0;
	// System.Threading.SparselyPopulatedArrayAddInfo`1<System.Threading.CancellationCallbackInfo> System.Threading.CancellationTokenRegistration::m_registrationInfo
	SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0  ___m_registrationInfo_1;

public:
	inline static int32_t get_offset_of_m_callbackInfo_0() { return static_cast<int32_t>(offsetof(CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A, ___m_callbackInfo_0)); }
	inline CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * get_m_callbackInfo_0() const { return ___m_callbackInfo_0; }
	inline CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B ** get_address_of_m_callbackInfo_0() { return &___m_callbackInfo_0; }
	inline void set_m_callbackInfo_0(CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * value)
	{
		___m_callbackInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_callbackInfo_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_registrationInfo_1() { return static_cast<int32_t>(offsetof(CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A, ___m_registrationInfo_1)); }
	inline SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0  get_m_registrationInfo_1() const { return ___m_registrationInfo_1; }
	inline SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0 * get_address_of_m_registrationInfo_1() { return &___m_registrationInfo_1; }
	inline void set_m_registrationInfo_1(SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0  value)
	{
		___m_registrationInfo_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_registrationInfo_1))->___m_source_0), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of System.Threading.CancellationTokenRegistration
struct CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A_marshaled_pinvoke
{
	CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * ___m_callbackInfo_0;
	SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0  ___m_registrationInfo_1;
};
// Native definition for COM marshalling of System.Threading.CancellationTokenRegistration
struct CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A_marshaled_com
{
	CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * ___m_callbackInfo_0;
	SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0  ___m_registrationInfo_1;
};

// System.Threading.Tasks.CausalityRelation
struct  CausalityRelation_t5EFB44045C7D3054B11B2E94CCAE40BE1FFAE63E 
{
public:
	// System.Int32 System.Threading.Tasks.CausalityRelation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CausalityRelation_t5EFB44045C7D3054B11B2E94CCAE40BE1FFAE63E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.Tasks.CausalityTraceLevel
struct  CausalityTraceLevel_t01DEED18A37C591FB2E53F2ADD89E2145ED8A9CD 
{
public:
	// System.Int32 System.Threading.Tasks.CausalityTraceLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CausalityTraceLevel_t01DEED18A37C591FB2E53F2ADD89E2145ED8A9CD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.DateTimeKind
struct  DateTimeKind_tA0B5F3F88991AC3B7F24393E15B54062722571D0 
{
public:
	// System.Int32 System.DateTimeKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DateTimeKind_tA0B5F3F88991AC3B7F24393E15B54062722571D0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.DayOfWeek
struct  DayOfWeek_t9E9D87E7A85C119F741167E9F8C613ABFB0A4AC7 
{
public:
	// System.Int32 System.DayOfWeek::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DayOfWeek_t9E9D87E7A85C119F741167E9F8C613ABFB0A4AC7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.Threading.Tasks.InternalTaskOptions
struct  InternalTaskOptions_tE9869E444962B12AAF216CDE276D379BD57D5EEF 
{
public:
	// System.Int32 System.Threading.Tasks.InternalTaskOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InternalTaskOptions_tE9869E444962B12AAF216CDE276D379BD57D5EEF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.ManualResetEventSlim
struct  ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E  : public RuntimeObject
{
public:
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.ManualResetEventSlim::m_lock
	RuntimeObject * ___m_lock_0;
	// System.Threading.ManualResetEvent modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.ManualResetEventSlim::m_eventObj
	ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * ___m_eventObj_1;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.ManualResetEventSlim::m_combinedState
	int32_t ___m_combinedState_2;

public:
	inline static int32_t get_offset_of_m_lock_0() { return static_cast<int32_t>(offsetof(ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E, ___m_lock_0)); }
	inline RuntimeObject * get_m_lock_0() const { return ___m_lock_0; }
	inline RuntimeObject ** get_address_of_m_lock_0() { return &___m_lock_0; }
	inline void set_m_lock_0(RuntimeObject * value)
	{
		___m_lock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_lock_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_eventObj_1() { return static_cast<int32_t>(offsetof(ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E, ___m_eventObj_1)); }
	inline ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * get_m_eventObj_1() const { return ___m_eventObj_1; }
	inline ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA ** get_address_of_m_eventObj_1() { return &___m_eventObj_1; }
	inline void set_m_eventObj_1(ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * value)
	{
		___m_eventObj_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_eventObj_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_combinedState_2() { return static_cast<int32_t>(offsetof(ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E, ___m_combinedState_2)); }
	inline int32_t get_m_combinedState_2() const { return ___m_combinedState_2; }
	inline int32_t* get_address_of_m_combinedState_2() { return &___m_combinedState_2; }
	inline void set_m_combinedState_2(int32_t value)
	{
		___m_combinedState_2 = value;
	}
};

struct ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E_StaticFields
{
public:
	// System.Action`1<System.Object> System.Threading.ManualResetEventSlim::s_cancellationTokenCallback
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_cancellationTokenCallback_3;

public:
	inline static int32_t get_offset_of_s_cancellationTokenCallback_3() { return static_cast<int32_t>(offsetof(ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E_StaticFields, ___s_cancellationTokenCallback_3)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_cancellationTokenCallback_3() const { return ___s_cancellationTokenCallback_3; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_cancellationTokenCallback_3() { return &___s_cancellationTokenCallback_3; }
	inline void set_s_cancellationTokenCallback_3(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_cancellationTokenCallback_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_cancellationTokenCallback_3), (void*)value);
	}
};


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.Threading.SpinLock
struct  SpinLock_t9860D503E59EFE08CF5241E2BA0C33397BF78F5D 
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.SpinLock::m_owner
	int32_t ___m_owner_0;

public:
	inline static int32_t get_offset_of_m_owner_0() { return static_cast<int32_t>(offsetof(SpinLock_t9860D503E59EFE08CF5241E2BA0C33397BF78F5D, ___m_owner_0)); }
	inline int32_t get_m_owner_0() const { return ___m_owner_0; }
	inline int32_t* get_address_of_m_owner_0() { return &___m_owner_0; }
	inline void set_m_owner_0(int32_t value)
	{
		___m_owner_0 = value;
	}
};

struct SpinLock_t9860D503E59EFE08CF5241E2BA0C33397BF78F5D_StaticFields
{
public:
	// System.Int32 System.Threading.SpinLock::MAXIMUM_WAITERS
	int32_t ___MAXIMUM_WAITERS_1;

public:
	inline static int32_t get_offset_of_MAXIMUM_WAITERS_1() { return static_cast<int32_t>(offsetof(SpinLock_t9860D503E59EFE08CF5241E2BA0C33397BF78F5D_StaticFields, ___MAXIMUM_WAITERS_1)); }
	inline int32_t get_MAXIMUM_WAITERS_1() const { return ___MAXIMUM_WAITERS_1; }
	inline int32_t* get_address_of_MAXIMUM_WAITERS_1() { return &___MAXIMUM_WAITERS_1; }
	inline void set_MAXIMUM_WAITERS_1(int32_t value)
	{
		___MAXIMUM_WAITERS_1 = value;
	}
};


// System.Runtime.Serialization.StreamingContextStates
struct  StreamingContextStates_tF4C7FE6D6121BD4C67699869C8269A60B36B42C3 
{
public:
	// System.Int32 System.Runtime.Serialization.StreamingContextStates::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StreamingContextStates_tF4C7FE6D6121BD4C67699869C8269A60B36B42C3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.Tasks.Task
struct  Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_4;
	// System.Object System.Threading.Tasks.Task::m_action
	RuntimeObject * ___m_action_5;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject * ___m_stateObject_6;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___m_taskScheduler_7;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_parent_8;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_9;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject * ___m_continuationObject_10;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * ___m_contingentProperties_15;

public:
	inline static int32_t get_offset_of_m_taskId_4() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskId_4)); }
	inline int32_t get_m_taskId_4() const { return ___m_taskId_4; }
	inline int32_t* get_address_of_m_taskId_4() { return &___m_taskId_4; }
	inline void set_m_taskId_4(int32_t value)
	{
		___m_taskId_4 = value;
	}

	inline static int32_t get_offset_of_m_action_5() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_action_5)); }
	inline RuntimeObject * get_m_action_5() const { return ___m_action_5; }
	inline RuntimeObject ** get_address_of_m_action_5() { return &___m_action_5; }
	inline void set_m_action_5(RuntimeObject * value)
	{
		___m_action_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_action_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateObject_6() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateObject_6)); }
	inline RuntimeObject * get_m_stateObject_6() const { return ___m_stateObject_6; }
	inline RuntimeObject ** get_address_of_m_stateObject_6() { return &___m_stateObject_6; }
	inline void set_m_stateObject_6(RuntimeObject * value)
	{
		___m_stateObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_taskScheduler_7() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskScheduler_7)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_m_taskScheduler_7() const { return ___m_taskScheduler_7; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_m_taskScheduler_7() { return &___m_taskScheduler_7; }
	inline void set_m_taskScheduler_7(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___m_taskScheduler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_taskScheduler_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_parent_8() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_parent_8)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_parent_8() const { return ___m_parent_8; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_parent_8() { return &___m_parent_8; }
	inline void set_m_parent_8(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_parent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_parent_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateFlags_9() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateFlags_9)); }
	inline int32_t get_m_stateFlags_9() const { return ___m_stateFlags_9; }
	inline int32_t* get_address_of_m_stateFlags_9() { return &___m_stateFlags_9; }
	inline void set_m_stateFlags_9(int32_t value)
	{
		___m_stateFlags_9 = value;
	}

	inline static int32_t get_offset_of_m_continuationObject_10() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_continuationObject_10)); }
	inline RuntimeObject * get_m_continuationObject_10() const { return ___m_continuationObject_10; }
	inline RuntimeObject ** get_address_of_m_continuationObject_10() { return &___m_continuationObject_10; }
	inline void set_m_continuationObject_10(RuntimeObject * value)
	{
		___m_continuationObject_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_continuationObject_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_contingentProperties_15() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_contingentProperties_15)); }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * get_m_contingentProperties_15() const { return ___m_contingentProperties_15; }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 ** get_address_of_m_contingentProperties_15() { return &___m_contingentProperties_15; }
	inline void set_m_contingentProperties_15(ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * value)
	{
		___m_contingentProperties_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_contingentProperties_15), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields
{
public:
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_2;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::s_factory
	TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * ___s_factory_3;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject * ___s_taskCompletionSentinel_11;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_12;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * ___s_currentActiveTasks_13;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject * ___s_activeTasksLock_14;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_taskCancelCallback_16;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * ___s_createContingentProperties_17;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::s_completedTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___s_completedTask_18;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * ___s_IsExceptionObservedByParentPredicate_19;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * ___s_ecCallback_20;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___s_IsTaskContinuationNullPredicate_21;

public:
	inline static int32_t get_offset_of_s_taskIdCounter_2() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskIdCounter_2)); }
	inline int32_t get_s_taskIdCounter_2() const { return ___s_taskIdCounter_2; }
	inline int32_t* get_address_of_s_taskIdCounter_2() { return &___s_taskIdCounter_2; }
	inline void set_s_taskIdCounter_2(int32_t value)
	{
		___s_taskIdCounter_2 = value;
	}

	inline static int32_t get_offset_of_s_factory_3() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_factory_3)); }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * get_s_factory_3() const { return ___s_factory_3; }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B ** get_address_of_s_factory_3() { return &___s_factory_3; }
	inline void set_s_factory_3(TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * value)
	{
		___s_factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_factory_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCompletionSentinel_11() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCompletionSentinel_11)); }
	inline RuntimeObject * get_s_taskCompletionSentinel_11() const { return ___s_taskCompletionSentinel_11; }
	inline RuntimeObject ** get_address_of_s_taskCompletionSentinel_11() { return &___s_taskCompletionSentinel_11; }
	inline void set_s_taskCompletionSentinel_11(RuntimeObject * value)
	{
		___s_taskCompletionSentinel_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCompletionSentinel_11), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncDebuggingEnabled_12() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_asyncDebuggingEnabled_12)); }
	inline bool get_s_asyncDebuggingEnabled_12() const { return ___s_asyncDebuggingEnabled_12; }
	inline bool* get_address_of_s_asyncDebuggingEnabled_12() { return &___s_asyncDebuggingEnabled_12; }
	inline void set_s_asyncDebuggingEnabled_12(bool value)
	{
		___s_asyncDebuggingEnabled_12 = value;
	}

	inline static int32_t get_offset_of_s_currentActiveTasks_13() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_currentActiveTasks_13)); }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * get_s_currentActiveTasks_13() const { return ___s_currentActiveTasks_13; }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 ** get_address_of_s_currentActiveTasks_13() { return &___s_currentActiveTasks_13; }
	inline void set_s_currentActiveTasks_13(Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * value)
	{
		___s_currentActiveTasks_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_currentActiveTasks_13), (void*)value);
	}

	inline static int32_t get_offset_of_s_activeTasksLock_14() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_activeTasksLock_14)); }
	inline RuntimeObject * get_s_activeTasksLock_14() const { return ___s_activeTasksLock_14; }
	inline RuntimeObject ** get_address_of_s_activeTasksLock_14() { return &___s_activeTasksLock_14; }
	inline void set_s_activeTasksLock_14(RuntimeObject * value)
	{
		___s_activeTasksLock_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTasksLock_14), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCancelCallback_16() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCancelCallback_16)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_taskCancelCallback_16() const { return ___s_taskCancelCallback_16; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_taskCancelCallback_16() { return &___s_taskCancelCallback_16; }
	inline void set_s_taskCancelCallback_16(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_taskCancelCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCancelCallback_16), (void*)value);
	}

	inline static int32_t get_offset_of_s_createContingentProperties_17() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_createContingentProperties_17)); }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * get_s_createContingentProperties_17() const { return ___s_createContingentProperties_17; }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B ** get_address_of_s_createContingentProperties_17() { return &___s_createContingentProperties_17; }
	inline void set_s_createContingentProperties_17(Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * value)
	{
		___s_createContingentProperties_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_createContingentProperties_17), (void*)value);
	}

	inline static int32_t get_offset_of_s_completedTask_18() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_completedTask_18)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_s_completedTask_18() const { return ___s_completedTask_18; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_s_completedTask_18() { return &___s_completedTask_18; }
	inline void set_s_completedTask_18(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___s_completedTask_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_completedTask_18), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsExceptionObservedByParentPredicate_19() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsExceptionObservedByParentPredicate_19)); }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * get_s_IsExceptionObservedByParentPredicate_19() const { return ___s_IsExceptionObservedByParentPredicate_19; }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD ** get_address_of_s_IsExceptionObservedByParentPredicate_19() { return &___s_IsExceptionObservedByParentPredicate_19; }
	inline void set_s_IsExceptionObservedByParentPredicate_19(Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * value)
	{
		___s_IsExceptionObservedByParentPredicate_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsExceptionObservedByParentPredicate_19), (void*)value);
	}

	inline static int32_t get_offset_of_s_ecCallback_20() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_ecCallback_20)); }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * get_s_ecCallback_20() const { return ___s_ecCallback_20; }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B ** get_address_of_s_ecCallback_20() { return &___s_ecCallback_20; }
	inline void set_s_ecCallback_20(ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * value)
	{
		___s_ecCallback_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ecCallback_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsTaskContinuationNullPredicate_21() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsTaskContinuationNullPredicate_21)); }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * get_s_IsTaskContinuationNullPredicate_21() const { return ___s_IsTaskContinuationNullPredicate_21; }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB ** get_address_of_s_IsTaskContinuationNullPredicate_21() { return &___s_IsTaskContinuationNullPredicate_21; }
	inline void set_s_IsTaskContinuationNullPredicate_21(Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * value)
	{
		___s_IsTaskContinuationNullPredicate_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsTaskContinuationNullPredicate_21), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___t_currentTask_0;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * ___t_stackGuard_1;

public:
	inline static int32_t get_offset_of_t_currentTask_0() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_currentTask_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_t_currentTask_0() const { return ___t_currentTask_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_t_currentTask_0() { return &___t_currentTask_0; }
	inline void set_t_currentTask_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___t_currentTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_currentTask_0), (void*)value);
	}

	inline static int32_t get_offset_of_t_stackGuard_1() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_stackGuard_1)); }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * get_t_stackGuard_1() const { return ___t_stackGuard_1; }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D ** get_address_of_t_stackGuard_1() { return &___t_stackGuard_1; }
	inline void set_t_stackGuard_1(StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * value)
	{
		___t_stackGuard_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_stackGuard_1), (void*)value);
	}
};


// System.Threading.Tasks.TaskCreationOptions
struct  TaskCreationOptions_t469019F1B0F93FA60337952E265311E8048D2112 
{
public:
	// System.Int32 System.Threading.Tasks.TaskCreationOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TaskCreationOptions_t469019F1B0F93FA60337952E265311E8048D2112, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.Tasks.TaskScheduler
struct  TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.TaskScheduler::m_taskSchedulerId
	int32_t ___m_taskSchedulerId_3;

public:
	inline static int32_t get_offset_of_m_taskSchedulerId_3() { return static_cast<int32_t>(offsetof(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D, ___m_taskSchedulerId_3)); }
	inline int32_t get_m_taskSchedulerId_3() const { return ___m_taskSchedulerId_3; }
	inline int32_t* get_address_of_m_taskSchedulerId_3() { return &___m_taskSchedulerId_3; }
	inline void set_m_taskSchedulerId_3(int32_t value)
	{
		___m_taskSchedulerId_3 = value;
	}
};

struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_StaticFields
{
public:
	// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Threading.Tasks.TaskScheduler,System.Object> System.Threading.Tasks.TaskScheduler::s_activeTaskSchedulers
	ConditionalWeakTable_2_t93AD246458B1FCACF9EE33160B2DB2E06AB42CD8 * ___s_activeTaskSchedulers_0;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskScheduler::s_defaultTaskScheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___s_defaultTaskScheduler_1;
	// System.Int32 System.Threading.Tasks.TaskScheduler::s_taskSchedulerIdCounter
	int32_t ___s_taskSchedulerIdCounter_2;
	// System.EventHandler`1<System.Threading.Tasks.UnobservedTaskExceptionEventArgs> System.Threading.Tasks.TaskScheduler::_unobservedTaskException
	EventHandler_1_t7DFDECE3AD515844324382F8BBCAC2975ABEE63A * ____unobservedTaskException_4;
	// System.Object System.Threading.Tasks.TaskScheduler::_unobservedTaskExceptionLockObject
	RuntimeObject * ____unobservedTaskExceptionLockObject_5;

public:
	inline static int32_t get_offset_of_s_activeTaskSchedulers_0() { return static_cast<int32_t>(offsetof(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_StaticFields, ___s_activeTaskSchedulers_0)); }
	inline ConditionalWeakTable_2_t93AD246458B1FCACF9EE33160B2DB2E06AB42CD8 * get_s_activeTaskSchedulers_0() const { return ___s_activeTaskSchedulers_0; }
	inline ConditionalWeakTable_2_t93AD246458B1FCACF9EE33160B2DB2E06AB42CD8 ** get_address_of_s_activeTaskSchedulers_0() { return &___s_activeTaskSchedulers_0; }
	inline void set_s_activeTaskSchedulers_0(ConditionalWeakTable_2_t93AD246458B1FCACF9EE33160B2DB2E06AB42CD8 * value)
	{
		___s_activeTaskSchedulers_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTaskSchedulers_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_defaultTaskScheduler_1() { return static_cast<int32_t>(offsetof(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_StaticFields, ___s_defaultTaskScheduler_1)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_s_defaultTaskScheduler_1() const { return ___s_defaultTaskScheduler_1; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_s_defaultTaskScheduler_1() { return &___s_defaultTaskScheduler_1; }
	inline void set_s_defaultTaskScheduler_1(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___s_defaultTaskScheduler_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultTaskScheduler_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskSchedulerIdCounter_2() { return static_cast<int32_t>(offsetof(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_StaticFields, ___s_taskSchedulerIdCounter_2)); }
	inline int32_t get_s_taskSchedulerIdCounter_2() const { return ___s_taskSchedulerIdCounter_2; }
	inline int32_t* get_address_of_s_taskSchedulerIdCounter_2() { return &___s_taskSchedulerIdCounter_2; }
	inline void set_s_taskSchedulerIdCounter_2(int32_t value)
	{
		___s_taskSchedulerIdCounter_2 = value;
	}

	inline static int32_t get_offset_of__unobservedTaskException_4() { return static_cast<int32_t>(offsetof(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_StaticFields, ____unobservedTaskException_4)); }
	inline EventHandler_1_t7DFDECE3AD515844324382F8BBCAC2975ABEE63A * get__unobservedTaskException_4() const { return ____unobservedTaskException_4; }
	inline EventHandler_1_t7DFDECE3AD515844324382F8BBCAC2975ABEE63A ** get_address_of__unobservedTaskException_4() { return &____unobservedTaskException_4; }
	inline void set__unobservedTaskException_4(EventHandler_1_t7DFDECE3AD515844324382F8BBCAC2975ABEE63A * value)
	{
		____unobservedTaskException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____unobservedTaskException_4), (void*)value);
	}

	inline static int32_t get_offset_of__unobservedTaskExceptionLockObject_5() { return static_cast<int32_t>(offsetof(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_StaticFields, ____unobservedTaskExceptionLockObject_5)); }
	inline RuntimeObject * get__unobservedTaskExceptionLockObject_5() const { return ____unobservedTaskExceptionLockObject_5; }
	inline RuntimeObject ** get_address_of__unobservedTaskExceptionLockObject_5() { return &____unobservedTaskExceptionLockObject_5; }
	inline void set__unobservedTaskExceptionLockObject_5(RuntimeObject * value)
	{
		____unobservedTaskExceptionLockObject_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____unobservedTaskExceptionLockObject_5), (void*)value);
	}
};


// System.TimeSpan
struct  TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;

public:
	inline static int32_t get_offset_of__ticks_22() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203, ____ticks_22)); }
	inline int64_t get__ticks_22() const { return ____ticks_22; }
	inline int64_t* get_address_of__ticks_22() { return &____ticks_22; }
	inline void set__ticks_22(int64_t value)
	{
		____ticks_22 = value;
	}
};

struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MinValue_21;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_24;

public:
	inline static int32_t get_offset_of_Zero_19() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___Zero_19)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_Zero_19() const { return ___Zero_19; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_Zero_19() { return &___Zero_19; }
	inline void set_Zero_19(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___Zero_19 = value;
	}

	inline static int32_t get_offset_of_MaxValue_20() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MaxValue_20)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MaxValue_20() const { return ___MaxValue_20; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MaxValue_20() { return &___MaxValue_20; }
	inline void set_MaxValue_20(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MaxValue_20 = value;
	}

	inline static int32_t get_offset_of_MinValue_21() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MinValue_21)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MinValue_21() const { return ___MinValue_21; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MinValue_21() { return &___MinValue_21; }
	inline void set_MinValue_21(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MinValue_21 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_23() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyConfigChecked_23)); }
	inline bool get__legacyConfigChecked_23() const { return ____legacyConfigChecked_23; }
	inline bool* get_address_of__legacyConfigChecked_23() { return &____legacyConfigChecked_23; }
	inline void set__legacyConfigChecked_23(bool value)
	{
		____legacyConfigChecked_23 = value;
	}

	inline static int32_t get_offset_of__legacyMode_24() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyMode_24)); }
	inline bool get__legacyMode_24() const { return ____legacyMode_24; }
	inline bool* get_address_of__legacyMode_24() { return &____legacyMode_24; }
	inline void set__legacyMode_24(bool value)
	{
		____legacyMode_24 = value;
	}
};


// System.Threading.WaitHandle
struct  WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IntPtr System.Threading.WaitHandle::waitHandle
	intptr_t ___waitHandle_3;
	// Microsoft.Win32.SafeHandles.SafeWaitHandle modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.WaitHandle::safeWaitHandle
	SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 * ___safeWaitHandle_4;
	// System.Boolean System.Threading.WaitHandle::hasThreadAffinity
	bool ___hasThreadAffinity_5;

public:
	inline static int32_t get_offset_of_waitHandle_3() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842, ___waitHandle_3)); }
	inline intptr_t get_waitHandle_3() const { return ___waitHandle_3; }
	inline intptr_t* get_address_of_waitHandle_3() { return &___waitHandle_3; }
	inline void set_waitHandle_3(intptr_t value)
	{
		___waitHandle_3 = value;
	}

	inline static int32_t get_offset_of_safeWaitHandle_4() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842, ___safeWaitHandle_4)); }
	inline SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 * get_safeWaitHandle_4() const { return ___safeWaitHandle_4; }
	inline SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 ** get_address_of_safeWaitHandle_4() { return &___safeWaitHandle_4; }
	inline void set_safeWaitHandle_4(SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 * value)
	{
		___safeWaitHandle_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___safeWaitHandle_4), (void*)value);
	}

	inline static int32_t get_offset_of_hasThreadAffinity_5() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842, ___hasThreadAffinity_5)); }
	inline bool get_hasThreadAffinity_5() const { return ___hasThreadAffinity_5; }
	inline bool* get_address_of_hasThreadAffinity_5() { return &___hasThreadAffinity_5; }
	inline void set_hasThreadAffinity_5(bool value)
	{
		___hasThreadAffinity_5 = value;
	}
};

struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_StaticFields
{
public:
	// System.IntPtr System.Threading.WaitHandle::InvalidHandle
	intptr_t ___InvalidHandle_10;

public:
	inline static int32_t get_offset_of_InvalidHandle_10() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_StaticFields, ___InvalidHandle_10)); }
	inline intptr_t get_InvalidHandle_10() const { return ___InvalidHandle_10; }
	inline intptr_t* get_address_of_InvalidHandle_10() { return &___InvalidHandle_10; }
	inline void set_InvalidHandle_10(intptr_t value)
	{
		___InvalidHandle_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Threading.WaitHandle
struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_marshaled_pinvoke : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};
// Native definition for COM marshalling of System.Threading.WaitHandle
struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_marshaled_com : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};

// System.Threading.ExecutionContext/Flags
struct  Flags_t84E4B7439C575026B3A9D10B43AC61B9709011E4 
{
public:
	// System.Int32 System.Threading.ExecutionContext/Flags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_t84E4B7439C575026B3A9D10B43AC61B9709011E4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.Tasks.Task/ContingentProperties
struct  ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0  : public RuntimeObject
{
public:
	// System.Threading.ExecutionContext System.Threading.Tasks.Task/ContingentProperties::m_capturedContext
	ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * ___m_capturedContext_0;
	// System.Threading.ManualResetEventSlim modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task/ContingentProperties::m_completionEvent
	ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E * ___m_completionEvent_1;
	// System.Threading.Tasks.TaskExceptionHolder modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task/ContingentProperties::m_exceptionsHolder
	TaskExceptionHolder_tDB382D854702E5F90A8C3764236EF24FD6016684 * ___m_exceptionsHolder_2;
	// System.Threading.CancellationToken System.Threading.Tasks.Task/ContingentProperties::m_cancellationToken
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___m_cancellationToken_3;
	// System.Threading.Tasks.Shared`1<System.Threading.CancellationTokenRegistration> System.Threading.Tasks.Task/ContingentProperties::m_cancellationRegistration
	Shared_1_t333C4F81656CB6CBFC971E543F8E9995A08F400B * ___m_cancellationRegistration_4;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task/ContingentProperties::m_internalCancellationRequested
	int32_t ___m_internalCancellationRequested_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task/ContingentProperties::m_completionCountdown
	int32_t ___m_completionCountdown_6;
	// System.Collections.Generic.List`1<System.Threading.Tasks.Task> modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task/ContingentProperties::m_exceptionalChildren
	List_1_tA3E7ECFCA71D1B53362EA1A7ED7D095F0C221DFB * ___m_exceptionalChildren_7;

public:
	inline static int32_t get_offset_of_m_capturedContext_0() { return static_cast<int32_t>(offsetof(ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0, ___m_capturedContext_0)); }
	inline ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * get_m_capturedContext_0() const { return ___m_capturedContext_0; }
	inline ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 ** get_address_of_m_capturedContext_0() { return &___m_capturedContext_0; }
	inline void set_m_capturedContext_0(ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * value)
	{
		___m_capturedContext_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_capturedContext_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_completionEvent_1() { return static_cast<int32_t>(offsetof(ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0, ___m_completionEvent_1)); }
	inline ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E * get_m_completionEvent_1() const { return ___m_completionEvent_1; }
	inline ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E ** get_address_of_m_completionEvent_1() { return &___m_completionEvent_1; }
	inline void set_m_completionEvent_1(ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E * value)
	{
		___m_completionEvent_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_completionEvent_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_exceptionsHolder_2() { return static_cast<int32_t>(offsetof(ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0, ___m_exceptionsHolder_2)); }
	inline TaskExceptionHolder_tDB382D854702E5F90A8C3764236EF24FD6016684 * get_m_exceptionsHolder_2() const { return ___m_exceptionsHolder_2; }
	inline TaskExceptionHolder_tDB382D854702E5F90A8C3764236EF24FD6016684 ** get_address_of_m_exceptionsHolder_2() { return &___m_exceptionsHolder_2; }
	inline void set_m_exceptionsHolder_2(TaskExceptionHolder_tDB382D854702E5F90A8C3764236EF24FD6016684 * value)
	{
		___m_exceptionsHolder_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_exceptionsHolder_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_cancellationToken_3() { return static_cast<int32_t>(offsetof(ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0, ___m_cancellationToken_3)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get_m_cancellationToken_3() const { return ___m_cancellationToken_3; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of_m_cancellationToken_3() { return &___m_cancellationToken_3; }
	inline void set_m_cancellationToken_3(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		___m_cancellationToken_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_cancellationToken_3))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_cancellationRegistration_4() { return static_cast<int32_t>(offsetof(ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0, ___m_cancellationRegistration_4)); }
	inline Shared_1_t333C4F81656CB6CBFC971E543F8E9995A08F400B * get_m_cancellationRegistration_4() const { return ___m_cancellationRegistration_4; }
	inline Shared_1_t333C4F81656CB6CBFC971E543F8E9995A08F400B ** get_address_of_m_cancellationRegistration_4() { return &___m_cancellationRegistration_4; }
	inline void set_m_cancellationRegistration_4(Shared_1_t333C4F81656CB6CBFC971E543F8E9995A08F400B * value)
	{
		___m_cancellationRegistration_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cancellationRegistration_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_internalCancellationRequested_5() { return static_cast<int32_t>(offsetof(ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0, ___m_internalCancellationRequested_5)); }
	inline int32_t get_m_internalCancellationRequested_5() const { return ___m_internalCancellationRequested_5; }
	inline int32_t* get_address_of_m_internalCancellationRequested_5() { return &___m_internalCancellationRequested_5; }
	inline void set_m_internalCancellationRequested_5(int32_t value)
	{
		___m_internalCancellationRequested_5 = value;
	}

	inline static int32_t get_offset_of_m_completionCountdown_6() { return static_cast<int32_t>(offsetof(ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0, ___m_completionCountdown_6)); }
	inline int32_t get_m_completionCountdown_6() const { return ___m_completionCountdown_6; }
	inline int32_t* get_address_of_m_completionCountdown_6() { return &___m_completionCountdown_6; }
	inline void set_m_completionCountdown_6(int32_t value)
	{
		___m_completionCountdown_6 = value;
	}

	inline static int32_t get_offset_of_m_exceptionalChildren_7() { return static_cast<int32_t>(offsetof(ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0, ___m_exceptionalChildren_7)); }
	inline List_1_tA3E7ECFCA71D1B53362EA1A7ED7D095F0C221DFB * get_m_exceptionalChildren_7() const { return ___m_exceptionalChildren_7; }
	inline List_1_tA3E7ECFCA71D1B53362EA1A7ED7D095F0C221DFB ** get_address_of_m_exceptionalChildren_7() { return &___m_exceptionalChildren_7; }
	inline void set_m_exceptionalChildren_7(List_1_tA3E7ECFCA71D1B53362EA1A7ED7D095F0C221DFB * value)
	{
		___m_exceptionalChildren_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_exceptionalChildren_7), (void*)value);
	}
};


// System.IO.TextReader/NullTextReader
struct  NullTextReader_tFC192D86C5C095C98156DAF472F7520472039F95  : public TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F
{
public:

public:
};


// System.IO.TextReader/SyncTextReader
struct  SyncTextReader_tA4C7DEEF5A129E5D1287BDE2D5335AD7F8EEAA84  : public TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F
{
public:
	// System.IO.TextReader System.IO.TextReader/SyncTextReader::_in
	TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * ____in_4;

public:
	inline static int32_t get_offset_of__in_4() { return static_cast<int32_t>(offsetof(SyncTextReader_tA4C7DEEF5A129E5D1287BDE2D5335AD7F8EEAA84, ____in_4)); }
	inline TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * get__in_4() const { return ____in_4; }
	inline TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F ** get_address_of__in_4() { return &____in_4; }
	inline void set__in_4(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * value)
	{
		____in_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____in_4), (void*)value);
	}
};


// System.IO.TextWriter/NullTextWriter
struct  NullTextWriter_t1D00E99220711EA2E249B67A50372CED994A125F  : public TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643
{
public:

public:
};


// System.IO.TextWriter/SyncTextWriter
struct  SyncTextWriter_t4B1FF6119ABECE598E0666C85337FA3F11FF785D  : public TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643
{
public:
	// System.IO.TextWriter System.IO.TextWriter/SyncTextWriter::_out
	TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * ____out_11;

public:
	inline static int32_t get_offset_of__out_11() { return static_cast<int32_t>(offsetof(SyncTextWriter_t4B1FF6119ABECE598E0666C85337FA3F11FF785D, ____out_11)); }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * get__out_11() const { return ____out_11; }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 ** get_address_of__out_11() { return &____out_11; }
	inline void set__out_11(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * value)
	{
		____out_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____out_11), (void*)value);
	}
};


// System.Threading.ThreadPoolWorkQueue/QueueSegment
struct  QueueSegment_tBF384DF1C15001FBEDB17378EB22EA233A89A0A4  : public RuntimeObject
{
public:
	// System.Threading.IThreadPoolWorkItem[] System.Threading.ThreadPoolWorkQueue/QueueSegment::nodes
	IThreadPoolWorkItemU5BU5D_tA8F5E15B9A678486C494BA29BA2B36165FF28738* ___nodes_0;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.ThreadPoolWorkQueue/QueueSegment::indexes
	int32_t ___indexes_1;
	// System.Threading.ThreadPoolWorkQueue/QueueSegment modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.ThreadPoolWorkQueue/QueueSegment::Next
	QueueSegment_tBF384DF1C15001FBEDB17378EB22EA233A89A0A4 * ___Next_2;

public:
	inline static int32_t get_offset_of_nodes_0() { return static_cast<int32_t>(offsetof(QueueSegment_tBF384DF1C15001FBEDB17378EB22EA233A89A0A4, ___nodes_0)); }
	inline IThreadPoolWorkItemU5BU5D_tA8F5E15B9A678486C494BA29BA2B36165FF28738* get_nodes_0() const { return ___nodes_0; }
	inline IThreadPoolWorkItemU5BU5D_tA8F5E15B9A678486C494BA29BA2B36165FF28738** get_address_of_nodes_0() { return &___nodes_0; }
	inline void set_nodes_0(IThreadPoolWorkItemU5BU5D_tA8F5E15B9A678486C494BA29BA2B36165FF28738* value)
	{
		___nodes_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nodes_0), (void*)value);
	}

	inline static int32_t get_offset_of_indexes_1() { return static_cast<int32_t>(offsetof(QueueSegment_tBF384DF1C15001FBEDB17378EB22EA233A89A0A4, ___indexes_1)); }
	inline int32_t get_indexes_1() const { return ___indexes_1; }
	inline int32_t* get_address_of_indexes_1() { return &___indexes_1; }
	inline void set_indexes_1(int32_t value)
	{
		___indexes_1 = value;
	}

	inline static int32_t get_offset_of_Next_2() { return static_cast<int32_t>(offsetof(QueueSegment_tBF384DF1C15001FBEDB17378EB22EA233A89A0A4, ___Next_2)); }
	inline QueueSegment_tBF384DF1C15001FBEDB17378EB22EA233A89A0A4 * get_Next_2() const { return ___Next_2; }
	inline QueueSegment_tBF384DF1C15001FBEDB17378EB22EA233A89A0A4 ** get_address_of_Next_2() { return &___Next_2; }
	inline void set_Next_2(QueueSegment_tBF384DF1C15001FBEDB17378EB22EA233A89A0A4 * value)
	{
		___Next_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Next_2), (void*)value);
	}
};


// System.Globalization.TimeSpanFormat/Pattern
struct  Pattern_t5B2F35E57DF8A6B732D89E5723D12E2C100B6D2C 
{
public:
	// System.Int32 System.Globalization.TimeSpanFormat/Pattern::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Pattern_t5B2F35E57DF8A6B732D89E5723D12E2C100B6D2C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.TimeZoneInfo/TIME_ZONE_INFORMATION
struct  TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578 
{
public:
	// System.Int32 System.TimeZoneInfo/TIME_ZONE_INFORMATION::Bias
	int32_t ___Bias_0;
	// System.String System.TimeZoneInfo/TIME_ZONE_INFORMATION::StandardName
	String_t* ___StandardName_1;
	// System.TimeZoneInfo/SYSTEMTIME System.TimeZoneInfo/TIME_ZONE_INFORMATION::StandardDate
	SYSTEMTIME_tDB5B1D262445C33D2FE644CCC1353DFB26184BA4  ___StandardDate_2;
	// System.Int32 System.TimeZoneInfo/TIME_ZONE_INFORMATION::StandardBias
	int32_t ___StandardBias_3;
	// System.String System.TimeZoneInfo/TIME_ZONE_INFORMATION::DaylightName
	String_t* ___DaylightName_4;
	// System.TimeZoneInfo/SYSTEMTIME System.TimeZoneInfo/TIME_ZONE_INFORMATION::DaylightDate
	SYSTEMTIME_tDB5B1D262445C33D2FE644CCC1353DFB26184BA4  ___DaylightDate_5;
	// System.Int32 System.TimeZoneInfo/TIME_ZONE_INFORMATION::DaylightBias
	int32_t ___DaylightBias_6;

public:
	inline static int32_t get_offset_of_Bias_0() { return static_cast<int32_t>(offsetof(TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578, ___Bias_0)); }
	inline int32_t get_Bias_0() const { return ___Bias_0; }
	inline int32_t* get_address_of_Bias_0() { return &___Bias_0; }
	inline void set_Bias_0(int32_t value)
	{
		___Bias_0 = value;
	}

	inline static int32_t get_offset_of_StandardName_1() { return static_cast<int32_t>(offsetof(TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578, ___StandardName_1)); }
	inline String_t* get_StandardName_1() const { return ___StandardName_1; }
	inline String_t** get_address_of_StandardName_1() { return &___StandardName_1; }
	inline void set_StandardName_1(String_t* value)
	{
		___StandardName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StandardName_1), (void*)value);
	}

	inline static int32_t get_offset_of_StandardDate_2() { return static_cast<int32_t>(offsetof(TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578, ___StandardDate_2)); }
	inline SYSTEMTIME_tDB5B1D262445C33D2FE644CCC1353DFB26184BA4  get_StandardDate_2() const { return ___StandardDate_2; }
	inline SYSTEMTIME_tDB5B1D262445C33D2FE644CCC1353DFB26184BA4 * get_address_of_StandardDate_2() { return &___StandardDate_2; }
	inline void set_StandardDate_2(SYSTEMTIME_tDB5B1D262445C33D2FE644CCC1353DFB26184BA4  value)
	{
		___StandardDate_2 = value;
	}

	inline static int32_t get_offset_of_StandardBias_3() { return static_cast<int32_t>(offsetof(TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578, ___StandardBias_3)); }
	inline int32_t get_StandardBias_3() const { return ___StandardBias_3; }
	inline int32_t* get_address_of_StandardBias_3() { return &___StandardBias_3; }
	inline void set_StandardBias_3(int32_t value)
	{
		___StandardBias_3 = value;
	}

	inline static int32_t get_offset_of_DaylightName_4() { return static_cast<int32_t>(offsetof(TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578, ___DaylightName_4)); }
	inline String_t* get_DaylightName_4() const { return ___DaylightName_4; }
	inline String_t** get_address_of_DaylightName_4() { return &___DaylightName_4; }
	inline void set_DaylightName_4(String_t* value)
	{
		___DaylightName_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaylightName_4), (void*)value);
	}

	inline static int32_t get_offset_of_DaylightDate_5() { return static_cast<int32_t>(offsetof(TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578, ___DaylightDate_5)); }
	inline SYSTEMTIME_tDB5B1D262445C33D2FE644CCC1353DFB26184BA4  get_DaylightDate_5() const { return ___DaylightDate_5; }
	inline SYSTEMTIME_tDB5B1D262445C33D2FE644CCC1353DFB26184BA4 * get_address_of_DaylightDate_5() { return &___DaylightDate_5; }
	inline void set_DaylightDate_5(SYSTEMTIME_tDB5B1D262445C33D2FE644CCC1353DFB26184BA4  value)
	{
		___DaylightDate_5 = value;
	}

	inline static int32_t get_offset_of_DaylightBias_6() { return static_cast<int32_t>(offsetof(TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578, ___DaylightBias_6)); }
	inline int32_t get_DaylightBias_6() const { return ___DaylightBias_6; }
	inline int32_t* get_address_of_DaylightBias_6() { return &___DaylightBias_6; }
	inline void set_DaylightBias_6(int32_t value)
	{
		___DaylightBias_6 = value;
	}
};

// Native definition for P/Invoke marshalling of System.TimeZoneInfo/TIME_ZONE_INFORMATION
struct TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578_marshaled_pinvoke
{
	int32_t ___Bias_0;
	Il2CppChar ___StandardName_1[32];
	SYSTEMTIME_tDB5B1D262445C33D2FE644CCC1353DFB26184BA4  ___StandardDate_2;
	int32_t ___StandardBias_3;
	Il2CppChar ___DaylightName_4[32];
	SYSTEMTIME_tDB5B1D262445C33D2FE644CCC1353DFB26184BA4  ___DaylightDate_5;
	int32_t ___DaylightBias_6;
};
// Native definition for COM marshalling of System.TimeZoneInfo/TIME_ZONE_INFORMATION
struct TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578_marshaled_com
{
	int32_t ___Bias_0;
	Il2CppChar ___StandardName_1[32];
	SYSTEMTIME_tDB5B1D262445C33D2FE644CCC1353DFB26184BA4  ___StandardDate_2;
	int32_t ___StandardBias_3;
	Il2CppChar ___DaylightName_4[32];
	SYSTEMTIME_tDB5B1D262445C33D2FE644CCC1353DFB26184BA4  ___DaylightDate_5;
	int32_t ___DaylightBias_6;
};

// System.TypeSpec/DisplayNameFormat
struct  DisplayNameFormat_tF42BE9AF429E47348F6DF90A17947869EF4D0077 
{
public:
	// System.Int32 System.TypeSpec/DisplayNameFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DisplayNameFormat_tF42BE9AF429E47348F6DF90A17947869EF4D0077, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Text.UTF32Encoding/UTF32Decoder
struct  UTF32Decoder_t38867B08AD03138702C713129B79529EC4528DB7  : public DecoderNLS_tE5B1B7D68B698C0B65FBEE94EAE2453FFD3D538A
{
public:
	// System.Int32 System.Text.UTF32Encoding/UTF32Decoder::iChar
	int32_t ___iChar_6;
	// System.Int32 System.Text.UTF32Encoding/UTF32Decoder::readByteCount
	int32_t ___readByteCount_7;

public:
	inline static int32_t get_offset_of_iChar_6() { return static_cast<int32_t>(offsetof(UTF32Decoder_t38867B08AD03138702C713129B79529EC4528DB7, ___iChar_6)); }
	inline int32_t get_iChar_6() const { return ___iChar_6; }
	inline int32_t* get_address_of_iChar_6() { return &___iChar_6; }
	inline void set_iChar_6(int32_t value)
	{
		___iChar_6 = value;
	}

	inline static int32_t get_offset_of_readByteCount_7() { return static_cast<int32_t>(offsetof(UTF32Decoder_t38867B08AD03138702C713129B79529EC4528DB7, ___readByteCount_7)); }
	inline int32_t get_readByteCount_7() const { return ___readByteCount_7; }
	inline int32_t* get_address_of_readByteCount_7() { return &___readByteCount_7; }
	inline void set_readByteCount_7(int32_t value)
	{
		___readByteCount_7 = value;
	}
};


// System.Text.UTF7Encoding/Decoder
struct  Decoder_t6C0639E0DF1E52128429AC770CA9F2557A8E54C9  : public DecoderNLS_tE5B1B7D68B698C0B65FBEE94EAE2453FFD3D538A
{
public:
	// System.Int32 System.Text.UTF7Encoding/Decoder::bits
	int32_t ___bits_6;
	// System.Int32 System.Text.UTF7Encoding/Decoder::bitCount
	int32_t ___bitCount_7;
	// System.Boolean System.Text.UTF7Encoding/Decoder::firstByte
	bool ___firstByte_8;

public:
	inline static int32_t get_offset_of_bits_6() { return static_cast<int32_t>(offsetof(Decoder_t6C0639E0DF1E52128429AC770CA9F2557A8E54C9, ___bits_6)); }
	inline int32_t get_bits_6() const { return ___bits_6; }
	inline int32_t* get_address_of_bits_6() { return &___bits_6; }
	inline void set_bits_6(int32_t value)
	{
		___bits_6 = value;
	}

	inline static int32_t get_offset_of_bitCount_7() { return static_cast<int32_t>(offsetof(Decoder_t6C0639E0DF1E52128429AC770CA9F2557A8E54C9, ___bitCount_7)); }
	inline int32_t get_bitCount_7() const { return ___bitCount_7; }
	inline int32_t* get_address_of_bitCount_7() { return &___bitCount_7; }
	inline void set_bitCount_7(int32_t value)
	{
		___bitCount_7 = value;
	}

	inline static int32_t get_offset_of_firstByte_8() { return static_cast<int32_t>(offsetof(Decoder_t6C0639E0DF1E52128429AC770CA9F2557A8E54C9, ___firstByte_8)); }
	inline bool get_firstByte_8() const { return ___firstByte_8; }
	inline bool* get_address_of_firstByte_8() { return &___firstByte_8; }
	inline void set_firstByte_8(bool value)
	{
		___firstByte_8 = value;
	}
};


// System.Text.UTF7Encoding/Encoder
struct  Encoder_tF895184EA91019AA3995A8547FD56A3E0D16D1B4  : public EncoderNLS_tB071198C3F300408FDED1BD2C822F46A25115712
{
public:
	// System.Int32 System.Text.UTF7Encoding/Encoder::bits
	int32_t ___bits_7;
	// System.Int32 System.Text.UTF7Encoding/Encoder::bitCount
	int32_t ___bitCount_8;

public:
	inline static int32_t get_offset_of_bits_7() { return static_cast<int32_t>(offsetof(Encoder_tF895184EA91019AA3995A8547FD56A3E0D16D1B4, ___bits_7)); }
	inline int32_t get_bits_7() const { return ___bits_7; }
	inline int32_t* get_address_of_bits_7() { return &___bits_7; }
	inline void set_bits_7(int32_t value)
	{
		___bits_7 = value;
	}

	inline static int32_t get_offset_of_bitCount_8() { return static_cast<int32_t>(offsetof(Encoder_tF895184EA91019AA3995A8547FD56A3E0D16D1B4, ___bitCount_8)); }
	inline int32_t get_bitCount_8() const { return ___bitCount_8; }
	inline int32_t* get_address_of_bitCount_8() { return &___bitCount_8; }
	inline void set_bitCount_8(int32_t value)
	{
		___bitCount_8 = value;
	}
};


// System.Text.UTF8Encoding/UTF8Decoder
struct  UTF8Decoder_tD2359F0F52206B911EBC3222E627191C829F4C65  : public DecoderNLS_tE5B1B7D68B698C0B65FBEE94EAE2453FFD3D538A
{
public:
	// System.Int32 System.Text.UTF8Encoding/UTF8Decoder::bits
	int32_t ___bits_6;

public:
	inline static int32_t get_offset_of_bits_6() { return static_cast<int32_t>(offsetof(UTF8Decoder_tD2359F0F52206B911EBC3222E627191C829F4C65, ___bits_6)); }
	inline int32_t get_bits_6() const { return ___bits_6; }
	inline int32_t* get_address_of_bits_6() { return &___bits_6; }
	inline void set_bits_6(int32_t value)
	{
		___bits_6 = value;
	}
};


// System.Text.UTF8Encoding/UTF8Encoder
struct  UTF8Encoder_t3408DBF93D79A981F50954F660E33BA13FE29FD3  : public EncoderNLS_tB071198C3F300408FDED1BD2C822F46A25115712
{
public:
	// System.Int32 System.Text.UTF8Encoding/UTF8Encoder::surrogateChar
	int32_t ___surrogateChar_7;

public:
	inline static int32_t get_offset_of_surrogateChar_7() { return static_cast<int32_t>(offsetof(UTF8Encoder_t3408DBF93D79A981F50954F660E33BA13FE29FD3, ___surrogateChar_7)); }
	inline int32_t get_surrogateChar_7() const { return ___surrogateChar_7; }
	inline int32_t* get_address_of_surrogateChar_7() { return &___surrogateChar_7; }
	inline void set_surrogateChar_7(int32_t value)
	{
		___surrogateChar_7 = value;
	}
};


// System.Text.UnicodeEncoding/Decoder
struct  Decoder_tC3DC16951ED8FCF98278FC7F0804070A9C218109  : public DecoderNLS_tE5B1B7D68B698C0B65FBEE94EAE2453FFD3D538A
{
public:
	// System.Int32 System.Text.UnicodeEncoding/Decoder::lastByte
	int32_t ___lastByte_6;
	// System.Char System.Text.UnicodeEncoding/Decoder::lastChar
	Il2CppChar ___lastChar_7;

public:
	inline static int32_t get_offset_of_lastByte_6() { return static_cast<int32_t>(offsetof(Decoder_tC3DC16951ED8FCF98278FC7F0804070A9C218109, ___lastByte_6)); }
	inline int32_t get_lastByte_6() const { return ___lastByte_6; }
	inline int32_t* get_address_of_lastByte_6() { return &___lastByte_6; }
	inline void set_lastByte_6(int32_t value)
	{
		___lastByte_6 = value;
	}

	inline static int32_t get_offset_of_lastChar_7() { return static_cast<int32_t>(offsetof(Decoder_tC3DC16951ED8FCF98278FC7F0804070A9C218109, ___lastChar_7)); }
	inline Il2CppChar get_lastChar_7() const { return ___lastChar_7; }
	inline Il2CppChar* get_address_of_lastChar_7() { return &___lastChar_7; }
	inline void set_lastChar_7(Il2CppChar value)
	{
		___lastChar_7 = value;
	}
};


// System.Threading.Tasks.Shared`1<System.Threading.CancellationTokenRegistration>
struct  Shared_1_t333C4F81656CB6CBFC971E543F8E9995A08F400B  : public RuntimeObject
{
public:
	// T System.Threading.Tasks.Shared`1::Value
	CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A  ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(Shared_1_t333C4F81656CB6CBFC971E543F8E9995A08F400B, ___Value_0)); }
	inline CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A  get_Value_0() const { return ___Value_0; }
	inline CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A * get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A  value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___Value_0))->___m_callbackInfo_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___Value_0))->___m_registrationInfo_1))->___m_source_0), (void*)NULL);
		#endif
	}
};


// System.Threading.Tasks.Task`1<System.Int32>
struct  Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	int32_t ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725, ___m_result_22)); }
	inline int32_t get_m_result_22() const { return ___m_result_22; }
	inline int32_t* get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(int32_t value)
	{
		___m_result_22 = value;
	}
};

struct Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_tCA6286B86C0D5D6C00D5A0DFE56F7E48A482DD5E * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t53CFE8804C8D1C2FE8CC9204CF5DA5B98EC444D0 * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_tCA6286B86C0D5D6C00D5A0DFE56F7E48A482DD5E * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_tCA6286B86C0D5D6C00D5A0DFE56F7E48A482DD5E ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_tCA6286B86C0D5D6C00D5A0DFE56F7E48A482DD5E * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_t53CFE8804C8D1C2FE8CC9204CF5DA5B98EC444D0 * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_t53CFE8804C8D1C2FE8CC9204CF5DA5B98EC444D0 ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_t53CFE8804C8D1C2FE8CC9204CF5DA5B98EC444D0 * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.String>
struct  Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	String_t* ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3, ___m_result_22)); }
	inline String_t* get_m_result_22() const { return ___m_result_22; }
	inline String_t** get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(String_t* value)
	{
		___m_result_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_22), (void*)value);
	}
};

struct Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t9179B7311982EC4F85FDFBA0C89416AB321E74CB * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_tC39B0B05F6B9D37E14D29C14F1C4BCEAE6381FAC * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_t9179B7311982EC4F85FDFBA0C89416AB321E74CB * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_t9179B7311982EC4F85FDFBA0C89416AB321E74CB ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_t9179B7311982EC4F85FDFBA0C89416AB321E74CB * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_tC39B0B05F6B9D37E14D29C14F1C4BCEAE6381FAC * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_tC39B0B05F6B9D37E14D29C14F1C4BCEAE6381FAC ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_tC39B0B05F6B9D37E14D29C14F1C4BCEAE6381FAC * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>
struct  Task_1_t24E932728D4BE67BFA41487F43AE4FAEBBAC7284  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_t24E932728D4BE67BFA41487F43AE4FAEBBAC7284, ___m_result_22)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_result_22() const { return ___m_result_22; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_result_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_22), (void*)value);
	}
};

struct Task_1_t24E932728D4BE67BFA41487F43AE4FAEBBAC7284_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t4720246ADD352D9004AFCAA652A1A240B620DE4E * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t59E5EE359C575BAE84083A82848C07C4F342D995 * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_t24E932728D4BE67BFA41487F43AE4FAEBBAC7284_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_t4720246ADD352D9004AFCAA652A1A240B620DE4E * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_t4720246ADD352D9004AFCAA652A1A240B620DE4E ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_t4720246ADD352D9004AFCAA652A1A240B620DE4E * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_t24E932728D4BE67BFA41487F43AE4FAEBBAC7284_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_t59E5EE359C575BAE84083A82848C07C4F342D995 * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_t59E5EE359C575BAE84083A82848C07C4F342D995 ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_t59E5EE359C575BAE84083A82848C07C4F342D995 * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct  Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004  ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3, ___m_result_22)); }
	inline VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004  get_m_result_22() const { return ___m_result_22; }
	inline VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004 * get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004  value)
	{
		___m_result_22 = value;
	}
};

struct Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_tFD6C5BE88624171209DEA49929EA276401AC9F4B * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t99C75F5817AC4490145734D823B7E8ED9A840728 * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_tFD6C5BE88624171209DEA49929EA276401AC9F4B * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_tFD6C5BE88624171209DEA49929EA276401AC9F4B ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_tFD6C5BE88624171209DEA49929EA276401AC9F4B * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_t99C75F5817AC4490145734D823B7E8ED9A840728 * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_t99C75F5817AC4490145734D823B7E8ED9A840728 ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_t99C75F5817AC4490145734D823B7E8ED9A840728 * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
	}
};


// System.Threading.EventWaitHandle
struct  EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C  : public WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842
{
public:

public:
};


// System.Threading.ExecutionContext
struct  ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414  : public RuntimeObject
{
public:
	// System.Threading.SynchronizationContext System.Threading.ExecutionContext::_syncContext
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ____syncContext_0;
	// System.Threading.SynchronizationContext System.Threading.ExecutionContext::_syncContextNoFlow
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ____syncContextNoFlow_1;
	// System.Runtime.Remoting.Messaging.LogicalCallContext System.Threading.ExecutionContext::_logicalCallContext
	LogicalCallContext_tB537C2A13F19FCC7EBC74757A415F2CA5C8FA1C3 * ____logicalCallContext_2;
	// System.Runtime.Remoting.Messaging.IllogicalCallContext System.Threading.ExecutionContext::_illogicalCallContext
	IllogicalCallContext_tFC01A2B688E85D44897206E4ACD81E050D25846E * ____illogicalCallContext_3;
	// System.Threading.ExecutionContext/Flags System.Threading.ExecutionContext::_flags
	int32_t ____flags_4;
	// System.Collections.Generic.Dictionary`2<System.Threading.IAsyncLocal,System.Object> System.Threading.ExecutionContext::_localValues
	Dictionary_2_tED8EC0DF62452D89154D9584AC19F62C79BF3938 * ____localValues_5;
	// System.Collections.Generic.List`1<System.Threading.IAsyncLocal> System.Threading.ExecutionContext::_localChangeNotifications
	List_1_t053589A158AAF0B471CF80825616560409AF43D4 * ____localChangeNotifications_6;

public:
	inline static int32_t get_offset_of__syncContext_0() { return static_cast<int32_t>(offsetof(ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414, ____syncContext_0)); }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * get__syncContext_0() const { return ____syncContext_0; }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 ** get_address_of__syncContext_0() { return &____syncContext_0; }
	inline void set__syncContext_0(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * value)
	{
		____syncContext_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncContext_0), (void*)value);
	}

	inline static int32_t get_offset_of__syncContextNoFlow_1() { return static_cast<int32_t>(offsetof(ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414, ____syncContextNoFlow_1)); }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * get__syncContextNoFlow_1() const { return ____syncContextNoFlow_1; }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 ** get_address_of__syncContextNoFlow_1() { return &____syncContextNoFlow_1; }
	inline void set__syncContextNoFlow_1(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * value)
	{
		____syncContextNoFlow_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncContextNoFlow_1), (void*)value);
	}

	inline static int32_t get_offset_of__logicalCallContext_2() { return static_cast<int32_t>(offsetof(ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414, ____logicalCallContext_2)); }
	inline LogicalCallContext_tB537C2A13F19FCC7EBC74757A415F2CA5C8FA1C3 * get__logicalCallContext_2() const { return ____logicalCallContext_2; }
	inline LogicalCallContext_tB537C2A13F19FCC7EBC74757A415F2CA5C8FA1C3 ** get_address_of__logicalCallContext_2() { return &____logicalCallContext_2; }
	inline void set__logicalCallContext_2(LogicalCallContext_tB537C2A13F19FCC7EBC74757A415F2CA5C8FA1C3 * value)
	{
		____logicalCallContext_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____logicalCallContext_2), (void*)value);
	}

	inline static int32_t get_offset_of__illogicalCallContext_3() { return static_cast<int32_t>(offsetof(ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414, ____illogicalCallContext_3)); }
	inline IllogicalCallContext_tFC01A2B688E85D44897206E4ACD81E050D25846E * get__illogicalCallContext_3() const { return ____illogicalCallContext_3; }
	inline IllogicalCallContext_tFC01A2B688E85D44897206E4ACD81E050D25846E ** get_address_of__illogicalCallContext_3() { return &____illogicalCallContext_3; }
	inline void set__illogicalCallContext_3(IllogicalCallContext_tFC01A2B688E85D44897206E4ACD81E050D25846E * value)
	{
		____illogicalCallContext_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____illogicalCallContext_3), (void*)value);
	}

	inline static int32_t get_offset_of__flags_4() { return static_cast<int32_t>(offsetof(ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414, ____flags_4)); }
	inline int32_t get__flags_4() const { return ____flags_4; }
	inline int32_t* get_address_of__flags_4() { return &____flags_4; }
	inline void set__flags_4(int32_t value)
	{
		____flags_4 = value;
	}

	inline static int32_t get_offset_of__localValues_5() { return static_cast<int32_t>(offsetof(ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414, ____localValues_5)); }
	inline Dictionary_2_tED8EC0DF62452D89154D9584AC19F62C79BF3938 * get__localValues_5() const { return ____localValues_5; }
	inline Dictionary_2_tED8EC0DF62452D89154D9584AC19F62C79BF3938 ** get_address_of__localValues_5() { return &____localValues_5; }
	inline void set__localValues_5(Dictionary_2_tED8EC0DF62452D89154D9584AC19F62C79BF3938 * value)
	{
		____localValues_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____localValues_5), (void*)value);
	}

	inline static int32_t get_offset_of__localChangeNotifications_6() { return static_cast<int32_t>(offsetof(ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414, ____localChangeNotifications_6)); }
	inline List_1_t053589A158AAF0B471CF80825616560409AF43D4 * get__localChangeNotifications_6() const { return ____localChangeNotifications_6; }
	inline List_1_t053589A158AAF0B471CF80825616560409AF43D4 ** get_address_of__localChangeNotifications_6() { return &____localChangeNotifications_6; }
	inline void set__localChangeNotifications_6(List_1_t053589A158AAF0B471CF80825616560409AF43D4 * value)
	{
		____localChangeNotifications_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____localChangeNotifications_6), (void*)value);
	}
};

struct ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414_StaticFields
{
public:
	// System.Threading.ExecutionContext System.Threading.ExecutionContext::s_dummyDefaultEC
	ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * ___s_dummyDefaultEC_7;

public:
	inline static int32_t get_offset_of_s_dummyDefaultEC_7() { return static_cast<int32_t>(offsetof(ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414_StaticFields, ___s_dummyDefaultEC_7)); }
	inline ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * get_s_dummyDefaultEC_7() const { return ___s_dummyDefaultEC_7; }
	inline ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 ** get_address_of_s_dummyDefaultEC_7() { return &___s_dummyDefaultEC_7; }
	inline void set_s_dummyDefaultEC_7(ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * value)
	{
		___s_dummyDefaultEC_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_dummyDefaultEC_7), (void*)value);
	}
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

// System.Runtime.Serialization.StreamingContext
struct  StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505 
{
public:
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject * ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;

public:
	inline static int32_t get_offset_of_m_additionalContext_0() { return static_cast<int32_t>(offsetof(StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505, ___m_additionalContext_0)); }
	inline RuntimeObject * get_m_additionalContext_0() const { return ___m_additionalContext_0; }
	inline RuntimeObject ** get_address_of_m_additionalContext_0() { return &___m_additionalContext_0; }
	inline void set_m_additionalContext_0(RuntimeObject * value)
	{
		___m_additionalContext_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_additionalContext_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_state_1() { return static_cast<int32_t>(offsetof(StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505, ___m_state_1)); }
	inline int32_t get_m_state_1() const { return ___m_state_1; }
	inline int32_t* get_address_of_m_state_1() { return &___m_state_1; }
	inline void set_m_state_1(int32_t value)
	{
		___m_state_1 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};

// System.SystemException
struct  SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// System.Threading.Tasks.Task/<>c__DisplayClass178_0
struct  U3CU3Ec__DisplayClass178_0_t26DA6AADD06D410B9511EEAE86E81BB72E13577B  : public RuntimeObject
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.Task/<>c__DisplayClass178_0::root
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___root_0;
	// System.Boolean System.Threading.Tasks.Task/<>c__DisplayClass178_0::replicasAreQuitting
	bool ___replicasAreQuitting_1;
	// System.Action`1<System.Object> System.Threading.Tasks.Task/<>c__DisplayClass178_0::taskReplicaDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___taskReplicaDelegate_2;
	// System.Threading.Tasks.TaskCreationOptions System.Threading.Tasks.Task/<>c__DisplayClass178_0::creationOptionsForReplicas
	int32_t ___creationOptionsForReplicas_3;
	// System.Threading.Tasks.InternalTaskOptions System.Threading.Tasks.Task/<>c__DisplayClass178_0::internalOptionsForReplicas
	int32_t ___internalOptionsForReplicas_4;

public:
	inline static int32_t get_offset_of_root_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass178_0_t26DA6AADD06D410B9511EEAE86E81BB72E13577B, ___root_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_root_0() const { return ___root_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_root_0() { return &___root_0; }
	inline void set_root_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___root_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___root_0), (void*)value);
	}

	inline static int32_t get_offset_of_replicasAreQuitting_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass178_0_t26DA6AADD06D410B9511EEAE86E81BB72E13577B, ___replicasAreQuitting_1)); }
	inline bool get_replicasAreQuitting_1() const { return ___replicasAreQuitting_1; }
	inline bool* get_address_of_replicasAreQuitting_1() { return &___replicasAreQuitting_1; }
	inline void set_replicasAreQuitting_1(bool value)
	{
		___replicasAreQuitting_1 = value;
	}

	inline static int32_t get_offset_of_taskReplicaDelegate_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass178_0_t26DA6AADD06D410B9511EEAE86E81BB72E13577B, ___taskReplicaDelegate_2)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_taskReplicaDelegate_2() const { return ___taskReplicaDelegate_2; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_taskReplicaDelegate_2() { return &___taskReplicaDelegate_2; }
	inline void set_taskReplicaDelegate_2(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___taskReplicaDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___taskReplicaDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of_creationOptionsForReplicas_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass178_0_t26DA6AADD06D410B9511EEAE86E81BB72E13577B, ___creationOptionsForReplicas_3)); }
	inline int32_t get_creationOptionsForReplicas_3() const { return ___creationOptionsForReplicas_3; }
	inline int32_t* get_address_of_creationOptionsForReplicas_3() { return &___creationOptionsForReplicas_3; }
	inline void set_creationOptionsForReplicas_3(int32_t value)
	{
		___creationOptionsForReplicas_3 = value;
	}

	inline static int32_t get_offset_of_internalOptionsForReplicas_4() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass178_0_t26DA6AADD06D410B9511EEAE86E81BB72E13577B, ___internalOptionsForReplicas_4)); }
	inline int32_t get_internalOptionsForReplicas_4() const { return ___internalOptionsForReplicas_4; }
	inline int32_t* get_address_of_internalOptionsForReplicas_4() { return &___internalOptionsForReplicas_4; }
	inline void set_internalOptionsForReplicas_4(int32_t value)
	{
		___internalOptionsForReplicas_4 = value;
	}
};


// System.Threading.Tasks.Task/SetOnInvokeMres
struct  SetOnInvokeMres_t1C10274710F867516EE9E1EC3ABF0BA5EEF9ABAD  : public ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E
{
public:

public:
};


// System.IO.TextReader/<ReadToEndAsync>d__14
struct  U3CReadToEndAsyncU3Ed__14_tD16259CAE393A0DA787F6304386A41E7F88A1B45 
{
public:
	// System.Int32 System.IO.TextReader/<ReadToEndAsync>d__14::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String> System.IO.TextReader/<ReadToEndAsync>d__14::<>t__builder
	AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F  ___U3CU3Et__builder_1;
	// System.Text.StringBuilder System.IO.TextReader/<ReadToEndAsync>d__14::<sb>5__1
	StringBuilder_t * ___U3CsbU3E5__1_2;
	// System.Char[] System.IO.TextReader/<ReadToEndAsync>d__14::<chars>5__2
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___U3CcharsU3E5__2_3;
	// System.Int32 System.IO.TextReader/<ReadToEndAsync>d__14::<len>5__3
	int32_t ___U3ClenU3E5__3_4;
	// System.IO.TextReader System.IO.TextReader/<ReadToEndAsync>d__14::<>4__this
	TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * ___U3CU3E4__this_5;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Int32> System.IO.TextReader/<ReadToEndAsync>d__14::<>u__1
	ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2  ___U3CU3Eu__1_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CReadToEndAsyncU3Ed__14_tD16259CAE393A0DA787F6304386A41E7F88A1B45, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CReadToEndAsyncU3Ed__14_tD16259CAE393A0DA787F6304386A41E7F88A1B45, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CsbU3E5__1_2() { return static_cast<int32_t>(offsetof(U3CReadToEndAsyncU3Ed__14_tD16259CAE393A0DA787F6304386A41E7F88A1B45, ___U3CsbU3E5__1_2)); }
	inline StringBuilder_t * get_U3CsbU3E5__1_2() const { return ___U3CsbU3E5__1_2; }
	inline StringBuilder_t ** get_address_of_U3CsbU3E5__1_2() { return &___U3CsbU3E5__1_2; }
	inline void set_U3CsbU3E5__1_2(StringBuilder_t * value)
	{
		___U3CsbU3E5__1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsbU3E5__1_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcharsU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CReadToEndAsyncU3Ed__14_tD16259CAE393A0DA787F6304386A41E7F88A1B45, ___U3CcharsU3E5__2_3)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_U3CcharsU3E5__2_3() const { return ___U3CcharsU3E5__2_3; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_U3CcharsU3E5__2_3() { return &___U3CcharsU3E5__2_3; }
	inline void set_U3CcharsU3E5__2_3(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___U3CcharsU3E5__2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcharsU3E5__2_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3ClenU3E5__3_4() { return static_cast<int32_t>(offsetof(U3CReadToEndAsyncU3Ed__14_tD16259CAE393A0DA787F6304386A41E7F88A1B45, ___U3ClenU3E5__3_4)); }
	inline int32_t get_U3ClenU3E5__3_4() const { return ___U3ClenU3E5__3_4; }
	inline int32_t* get_address_of_U3ClenU3E5__3_4() { return &___U3ClenU3E5__3_4; }
	inline void set_U3ClenU3E5__3_4(int32_t value)
	{
		___U3ClenU3E5__3_4 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_5() { return static_cast<int32_t>(offsetof(U3CReadToEndAsyncU3Ed__14_tD16259CAE393A0DA787F6304386A41E7F88A1B45, ___U3CU3E4__this_5)); }
	inline TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * get_U3CU3E4__this_5() const { return ___U3CU3E4__this_5; }
	inline TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F ** get_address_of_U3CU3E4__this_5() { return &___U3CU3E4__this_5; }
	inline void set_U3CU3E4__this_5(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * value)
	{
		___U3CU3E4__this_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_6() { return static_cast<int32_t>(offsetof(U3CReadToEndAsyncU3Ed__14_tD16259CAE393A0DA787F6304386A41E7F88A1B45, ___U3CU3Eu__1_6)); }
	inline ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2  get_U3CU3Eu__1_6() const { return ___U3CU3Eu__1_6; }
	inline ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2 * get_address_of_U3CU3Eu__1_6() { return &___U3CU3Eu__1_6; }
	inline void set_U3CU3Eu__1_6(ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2  value)
	{
		___U3CU3Eu__1_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_6))->___m_task_0), (void*)NULL);
	}
};


// System.Threading.ThreadPoolWorkQueue/WorkStealingQueue
struct  WorkStealingQueue_t0D430FD823CAB6C050301484CE7516E1573728A0  : public RuntimeObject
{
public:
	// System.Threading.IThreadPoolWorkItem[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.ThreadPoolWorkQueue/WorkStealingQueue::m_array
	IThreadPoolWorkItemU5BU5D_tA8F5E15B9A678486C494BA29BA2B36165FF28738* ___m_array_0;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.ThreadPoolWorkQueue/WorkStealingQueue::m_mask
	int32_t ___m_mask_1;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.ThreadPoolWorkQueue/WorkStealingQueue::m_headIndex
	int32_t ___m_headIndex_2;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.ThreadPoolWorkQueue/WorkStealingQueue::m_tailIndex
	int32_t ___m_tailIndex_3;
	// System.Threading.SpinLock System.Threading.ThreadPoolWorkQueue/WorkStealingQueue::m_foreignLock
	SpinLock_t9860D503E59EFE08CF5241E2BA0C33397BF78F5D  ___m_foreignLock_4;

public:
	inline static int32_t get_offset_of_m_array_0() { return static_cast<int32_t>(offsetof(WorkStealingQueue_t0D430FD823CAB6C050301484CE7516E1573728A0, ___m_array_0)); }
	inline IThreadPoolWorkItemU5BU5D_tA8F5E15B9A678486C494BA29BA2B36165FF28738* get_m_array_0() const { return ___m_array_0; }
	inline IThreadPoolWorkItemU5BU5D_tA8F5E15B9A678486C494BA29BA2B36165FF28738** get_address_of_m_array_0() { return &___m_array_0; }
	inline void set_m_array_0(IThreadPoolWorkItemU5BU5D_tA8F5E15B9A678486C494BA29BA2B36165FF28738* value)
	{
		___m_array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_array_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_mask_1() { return static_cast<int32_t>(offsetof(WorkStealingQueue_t0D430FD823CAB6C050301484CE7516E1573728A0, ___m_mask_1)); }
	inline int32_t get_m_mask_1() const { return ___m_mask_1; }
	inline int32_t* get_address_of_m_mask_1() { return &___m_mask_1; }
	inline void set_m_mask_1(int32_t value)
	{
		___m_mask_1 = value;
	}

	inline static int32_t get_offset_of_m_headIndex_2() { return static_cast<int32_t>(offsetof(WorkStealingQueue_t0D430FD823CAB6C050301484CE7516E1573728A0, ___m_headIndex_2)); }
	inline int32_t get_m_headIndex_2() const { return ___m_headIndex_2; }
	inline int32_t* get_address_of_m_headIndex_2() { return &___m_headIndex_2; }
	inline void set_m_headIndex_2(int32_t value)
	{
		___m_headIndex_2 = value;
	}

	inline static int32_t get_offset_of_m_tailIndex_3() { return static_cast<int32_t>(offsetof(WorkStealingQueue_t0D430FD823CAB6C050301484CE7516E1573728A0, ___m_tailIndex_3)); }
	inline int32_t get_m_tailIndex_3() const { return ___m_tailIndex_3; }
	inline int32_t* get_address_of_m_tailIndex_3() { return &___m_tailIndex_3; }
	inline void set_m_tailIndex_3(int32_t value)
	{
		___m_tailIndex_3 = value;
	}

	inline static int32_t get_offset_of_m_foreignLock_4() { return static_cast<int32_t>(offsetof(WorkStealingQueue_t0D430FD823CAB6C050301484CE7516E1573728A0, ___m_foreignLock_4)); }
	inline SpinLock_t9860D503E59EFE08CF5241E2BA0C33397BF78F5D  get_m_foreignLock_4() const { return ___m_foreignLock_4; }
	inline SpinLock_t9860D503E59EFE08CF5241E2BA0C33397BF78F5D * get_address_of_m_foreignLock_4() { return &___m_foreignLock_4; }
	inline void set_m_foreignLock_4(SpinLock_t9860D503E59EFE08CF5241E2BA0C33397BF78F5D  value)
	{
		___m_foreignLock_4 = value;
	}
};


// System.TimeZoneInfo/DYNAMIC_TIME_ZONE_INFORMATION
struct  DYNAMIC_TIME_ZONE_INFORMATION_t2A935E4357B99965B322E468058134B139805895 
{
public:
	// System.TimeZoneInfo/TIME_ZONE_INFORMATION System.TimeZoneInfo/DYNAMIC_TIME_ZONE_INFORMATION::TZI
	TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578  ___TZI_0;
	// System.String System.TimeZoneInfo/DYNAMIC_TIME_ZONE_INFORMATION::TimeZoneKeyName
	String_t* ___TimeZoneKeyName_1;
	// System.Byte System.TimeZoneInfo/DYNAMIC_TIME_ZONE_INFORMATION::DynamicDaylightTimeDisabled
	uint8_t ___DynamicDaylightTimeDisabled_2;

public:
	inline static int32_t get_offset_of_TZI_0() { return static_cast<int32_t>(offsetof(DYNAMIC_TIME_ZONE_INFORMATION_t2A935E4357B99965B322E468058134B139805895, ___TZI_0)); }
	inline TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578  get_TZI_0() const { return ___TZI_0; }
	inline TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578 * get_address_of_TZI_0() { return &___TZI_0; }
	inline void set_TZI_0(TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578  value)
	{
		___TZI_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___TZI_0))->___StandardName_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___TZI_0))->___DaylightName_4), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_TimeZoneKeyName_1() { return static_cast<int32_t>(offsetof(DYNAMIC_TIME_ZONE_INFORMATION_t2A935E4357B99965B322E468058134B139805895, ___TimeZoneKeyName_1)); }
	inline String_t* get_TimeZoneKeyName_1() const { return ___TimeZoneKeyName_1; }
	inline String_t** get_address_of_TimeZoneKeyName_1() { return &___TimeZoneKeyName_1; }
	inline void set_TimeZoneKeyName_1(String_t* value)
	{
		___TimeZoneKeyName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TimeZoneKeyName_1), (void*)value);
	}

	inline static int32_t get_offset_of_DynamicDaylightTimeDisabled_2() { return static_cast<int32_t>(offsetof(DYNAMIC_TIME_ZONE_INFORMATION_t2A935E4357B99965B322E468058134B139805895, ___DynamicDaylightTimeDisabled_2)); }
	inline uint8_t get_DynamicDaylightTimeDisabled_2() const { return ___DynamicDaylightTimeDisabled_2; }
	inline uint8_t* get_address_of_DynamicDaylightTimeDisabled_2() { return &___DynamicDaylightTimeDisabled_2; }
	inline void set_DynamicDaylightTimeDisabled_2(uint8_t value)
	{
		___DynamicDaylightTimeDisabled_2 = value;
	}
};

// Native definition for P/Invoke marshalling of System.TimeZoneInfo/DYNAMIC_TIME_ZONE_INFORMATION
struct DYNAMIC_TIME_ZONE_INFORMATION_t2A935E4357B99965B322E468058134B139805895_marshaled_pinvoke
{
	TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578_marshaled_pinvoke ___TZI_0;
	Il2CppChar ___TimeZoneKeyName_1[128];
	uint8_t ___DynamicDaylightTimeDisabled_2;
};
// Native definition for COM marshalling of System.TimeZoneInfo/DYNAMIC_TIME_ZONE_INFORMATION
struct DYNAMIC_TIME_ZONE_INFORMATION_t2A935E4357B99965B322E468058134B139805895_marshaled_com
{
	TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578_marshaled_com ___TZI_0;
	Il2CppChar ___TimeZoneKeyName_1[128];
	uint8_t ___DynamicDaylightTimeDisabled_2;
};

// System.TimeZoneInfo/TransitionTime
struct  TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A 
{
public:
	// System.DateTime System.TimeZoneInfo/TransitionTime::m_timeOfDay
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___m_timeOfDay_0;
	// System.Byte System.TimeZoneInfo/TransitionTime::m_month
	uint8_t ___m_month_1;
	// System.Byte System.TimeZoneInfo/TransitionTime::m_week
	uint8_t ___m_week_2;
	// System.Byte System.TimeZoneInfo/TransitionTime::m_day
	uint8_t ___m_day_3;
	// System.DayOfWeek System.TimeZoneInfo/TransitionTime::m_dayOfWeek
	int32_t ___m_dayOfWeek_4;
	// System.Boolean System.TimeZoneInfo/TransitionTime::m_isFixedDateRule
	bool ___m_isFixedDateRule_5;

public:
	inline static int32_t get_offset_of_m_timeOfDay_0() { return static_cast<int32_t>(offsetof(TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A, ___m_timeOfDay_0)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_m_timeOfDay_0() const { return ___m_timeOfDay_0; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_m_timeOfDay_0() { return &___m_timeOfDay_0; }
	inline void set_m_timeOfDay_0(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___m_timeOfDay_0 = value;
	}

	inline static int32_t get_offset_of_m_month_1() { return static_cast<int32_t>(offsetof(TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A, ___m_month_1)); }
	inline uint8_t get_m_month_1() const { return ___m_month_1; }
	inline uint8_t* get_address_of_m_month_1() { return &___m_month_1; }
	inline void set_m_month_1(uint8_t value)
	{
		___m_month_1 = value;
	}

	inline static int32_t get_offset_of_m_week_2() { return static_cast<int32_t>(offsetof(TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A, ___m_week_2)); }
	inline uint8_t get_m_week_2() const { return ___m_week_2; }
	inline uint8_t* get_address_of_m_week_2() { return &___m_week_2; }
	inline void set_m_week_2(uint8_t value)
	{
		___m_week_2 = value;
	}

	inline static int32_t get_offset_of_m_day_3() { return static_cast<int32_t>(offsetof(TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A, ___m_day_3)); }
	inline uint8_t get_m_day_3() const { return ___m_day_3; }
	inline uint8_t* get_address_of_m_day_3() { return &___m_day_3; }
	inline void set_m_day_3(uint8_t value)
	{
		___m_day_3 = value;
	}

	inline static int32_t get_offset_of_m_dayOfWeek_4() { return static_cast<int32_t>(offsetof(TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A, ___m_dayOfWeek_4)); }
	inline int32_t get_m_dayOfWeek_4() const { return ___m_dayOfWeek_4; }
	inline int32_t* get_address_of_m_dayOfWeek_4() { return &___m_dayOfWeek_4; }
	inline void set_m_dayOfWeek_4(int32_t value)
	{
		___m_dayOfWeek_4 = value;
	}

	inline static int32_t get_offset_of_m_isFixedDateRule_5() { return static_cast<int32_t>(offsetof(TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A, ___m_isFixedDateRule_5)); }
	inline bool get_m_isFixedDateRule_5() const { return ___m_isFixedDateRule_5; }
	inline bool* get_address_of_m_isFixedDateRule_5() { return &___m_isFixedDateRule_5; }
	inline void set_m_isFixedDateRule_5(bool value)
	{
		___m_isFixedDateRule_5 = value;
	}
};

// Native definition for P/Invoke marshalling of System.TimeZoneInfo/TransitionTime
struct TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A_marshaled_pinvoke
{
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___m_timeOfDay_0;
	uint8_t ___m_month_1;
	uint8_t ___m_week_2;
	uint8_t ___m_day_3;
	int32_t ___m_dayOfWeek_4;
	int32_t ___m_isFixedDateRule_5;
};
// Native definition for COM marshalling of System.TimeZoneInfo/TransitionTime
struct TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A_marshaled_com
{
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___m_timeOfDay_0;
	uint8_t ___m_month_1;
	uint8_t ___m_week_2;
	uint8_t ___m_day_3;
	int32_t ___m_dayOfWeek_4;
	int32_t ___m_isFixedDateRule_5;
};

// System.Action`1<System.Object>
struct  Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC  : public MulticastDelegate_t
{
public:

public:
};


// System.Action
struct  Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentException
struct  ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.AsyncCallback
struct  AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// System.InvalidOperationException
struct  InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.Threading.ManualResetEvent
struct  ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA  : public EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C
{
public:

public:
};


// System.NotSupportedException
struct  NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.Runtime.Serialization.SerializationException
struct  SerializationException_tDB38C13A2ABF407C381E3F332D197AC1AD097A92  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};

struct SerializationException_tDB38C13A2ABF407C381E3F332D197AC1AD097A92_StaticFields
{
public:
	// System.String System.Runtime.Serialization.SerializationException::_nullMessage
	String_t* ____nullMessage_17;

public:
	inline static int32_t get_offset_of__nullMessage_17() { return static_cast<int32_t>(offsetof(SerializationException_tDB38C13A2ABF407C381E3F332D197AC1AD097A92_StaticFields, ____nullMessage_17)); }
	inline String_t* get__nullMessage_17() const { return ____nullMessage_17; }
	inline String_t** get_address_of__nullMessage_17() { return &____nullMessage_17; }
	inline void set__nullMessage_17(String_t* value)
	{
		____nullMessage_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____nullMessage_17), (void*)value);
	}
};


// System.Threading.ThreadAbortException
struct  ThreadAbortException_t16772A32C3654FCFF0399F11874CB783CC51C153  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.Threading.ThreadStart
struct  ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687  : public MulticastDelegate_t
{
public:

public:
};


// System.Threading.TimerCallback
struct  TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814  : public MulticastDelegate_t
{
public:

public:
};


// System.Threading.WaitCallback
struct  WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319  : public MulticastDelegate_t
{
public:

public:
};


// System.Threading.Tasks.Task/DelayPromise
struct  DelayPromise_t9761A33FC8F83592A4D61777C23985D6958E25D8  : public Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3
{
public:
	// System.Threading.CancellationToken System.Threading.Tasks.Task/DelayPromise::Token
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___Token_25;
	// System.Threading.CancellationTokenRegistration System.Threading.Tasks.Task/DelayPromise::Registration
	CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A  ___Registration_26;
	// System.Threading.Timer System.Threading.Tasks.Task/DelayPromise::Timer
	Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * ___Timer_27;

public:
	inline static int32_t get_offset_of_Token_25() { return static_cast<int32_t>(offsetof(DelayPromise_t9761A33FC8F83592A4D61777C23985D6958E25D8, ___Token_25)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get_Token_25() const { return ___Token_25; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of_Token_25() { return &___Token_25; }
	inline void set_Token_25(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		___Token_25 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___Token_25))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_Registration_26() { return static_cast<int32_t>(offsetof(DelayPromise_t9761A33FC8F83592A4D61777C23985D6958E25D8, ___Registration_26)); }
	inline CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A  get_Registration_26() const { return ___Registration_26; }
	inline CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A * get_address_of_Registration_26() { return &___Registration_26; }
	inline void set_Registration_26(CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A  value)
	{
		___Registration_26 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___Registration_26))->___m_callbackInfo_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___Registration_26))->___m_registrationInfo_1))->___m_source_0), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_Timer_27() { return static_cast<int32_t>(offsetof(DelayPromise_t9761A33FC8F83592A4D61777C23985D6958E25D8, ___Timer_27)); }
	inline Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * get_Timer_27() const { return ___Timer_27; }
	inline Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB ** get_address_of_Timer_27() { return &___Timer_27; }
	inline void set_Timer_27(Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * value)
	{
		___Timer_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Timer_27), (void*)value);
	}
};


// System.Threading.Tasks.TaskFactory/CompleteOnInvokePromise
struct  CompleteOnInvokePromise_tCEBDCB9BD36D0EF373E5ACBC9262935A6EED4C18  : public Task_1_t24E932728D4BE67BFA41487F43AE4FAEBBAC7284
{
public:
	// System.Collections.Generic.IList`1<System.Threading.Tasks.Task> System.Threading.Tasks.TaskFactory/CompleteOnInvokePromise::_tasks
	RuntimeObject* ____tasks_25;
	// System.Int32 System.Threading.Tasks.TaskFactory/CompleteOnInvokePromise::m_firstTaskAlreadyCompleted
	int32_t ___m_firstTaskAlreadyCompleted_26;

public:
	inline static int32_t get_offset_of__tasks_25() { return static_cast<int32_t>(offsetof(CompleteOnInvokePromise_tCEBDCB9BD36D0EF373E5ACBC9262935A6EED4C18, ____tasks_25)); }
	inline RuntimeObject* get__tasks_25() const { return ____tasks_25; }
	inline RuntimeObject** get_address_of__tasks_25() { return &____tasks_25; }
	inline void set__tasks_25(RuntimeObject* value)
	{
		____tasks_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tasks_25), (void*)value);
	}

	inline static int32_t get_offset_of_m_firstTaskAlreadyCompleted_26() { return static_cast<int32_t>(offsetof(CompleteOnInvokePromise_tCEBDCB9BD36D0EF373E5ACBC9262935A6EED4C18, ___m_firstTaskAlreadyCompleted_26)); }
	inline int32_t get_m_firstTaskAlreadyCompleted_26() const { return ___m_firstTaskAlreadyCompleted_26; }
	inline int32_t* get_address_of_m_firstTaskAlreadyCompleted_26() { return &___m_firstTaskAlreadyCompleted_26; }
	inline void set_m_firstTaskAlreadyCompleted_26(int32_t value)
	{
		___m_firstTaskAlreadyCompleted_26 = value;
	}
};


// System.TimeZoneInfo/AdjustmentRule
struct  AdjustmentRule_t15EC10F91D4E8CC287CF8610D8D24BD636A23304  : public RuntimeObject
{
public:
	// System.DateTime System.TimeZoneInfo/AdjustmentRule::m_dateStart
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___m_dateStart_0;
	// System.DateTime System.TimeZoneInfo/AdjustmentRule::m_dateEnd
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___m_dateEnd_1;
	// System.TimeSpan System.TimeZoneInfo/AdjustmentRule::m_daylightDelta
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___m_daylightDelta_2;
	// System.TimeZoneInfo/TransitionTime System.TimeZoneInfo/AdjustmentRule::m_daylightTransitionStart
	TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  ___m_daylightTransitionStart_3;
	// System.TimeZoneInfo/TransitionTime System.TimeZoneInfo/AdjustmentRule::m_daylightTransitionEnd
	TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  ___m_daylightTransitionEnd_4;
	// System.TimeSpan System.TimeZoneInfo/AdjustmentRule::m_baseUtcOffsetDelta
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___m_baseUtcOffsetDelta_5;

public:
	inline static int32_t get_offset_of_m_dateStart_0() { return static_cast<int32_t>(offsetof(AdjustmentRule_t15EC10F91D4E8CC287CF8610D8D24BD636A23304, ___m_dateStart_0)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_m_dateStart_0() const { return ___m_dateStart_0; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_m_dateStart_0() { return &___m_dateStart_0; }
	inline void set_m_dateStart_0(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___m_dateStart_0 = value;
	}

	inline static int32_t get_offset_of_m_dateEnd_1() { return static_cast<int32_t>(offsetof(AdjustmentRule_t15EC10F91D4E8CC287CF8610D8D24BD636A23304, ___m_dateEnd_1)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_m_dateEnd_1() const { return ___m_dateEnd_1; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_m_dateEnd_1() { return &___m_dateEnd_1; }
	inline void set_m_dateEnd_1(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___m_dateEnd_1 = value;
	}

	inline static int32_t get_offset_of_m_daylightDelta_2() { return static_cast<int32_t>(offsetof(AdjustmentRule_t15EC10F91D4E8CC287CF8610D8D24BD636A23304, ___m_daylightDelta_2)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_m_daylightDelta_2() const { return ___m_daylightDelta_2; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_m_daylightDelta_2() { return &___m_daylightDelta_2; }
	inline void set_m_daylightDelta_2(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___m_daylightDelta_2 = value;
	}

	inline static int32_t get_offset_of_m_daylightTransitionStart_3() { return static_cast<int32_t>(offsetof(AdjustmentRule_t15EC10F91D4E8CC287CF8610D8D24BD636A23304, ___m_daylightTransitionStart_3)); }
	inline TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  get_m_daylightTransitionStart_3() const { return ___m_daylightTransitionStart_3; }
	inline TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A * get_address_of_m_daylightTransitionStart_3() { return &___m_daylightTransitionStart_3; }
	inline void set_m_daylightTransitionStart_3(TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  value)
	{
		___m_daylightTransitionStart_3 = value;
	}

	inline static int32_t get_offset_of_m_daylightTransitionEnd_4() { return static_cast<int32_t>(offsetof(AdjustmentRule_t15EC10F91D4E8CC287CF8610D8D24BD636A23304, ___m_daylightTransitionEnd_4)); }
	inline TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  get_m_daylightTransitionEnd_4() const { return ___m_daylightTransitionEnd_4; }
	inline TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A * get_address_of_m_daylightTransitionEnd_4() { return &___m_daylightTransitionEnd_4; }
	inline void set_m_daylightTransitionEnd_4(TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  value)
	{
		___m_daylightTransitionEnd_4 = value;
	}

	inline static int32_t get_offset_of_m_baseUtcOffsetDelta_5() { return static_cast<int32_t>(offsetof(AdjustmentRule_t15EC10F91D4E8CC287CF8610D8D24BD636A23304, ___m_baseUtcOffsetDelta_5)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_m_baseUtcOffsetDelta_5() const { return ___m_baseUtcOffsetDelta_5; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_m_baseUtcOffsetDelta_5() { return &___m_baseUtcOffsetDelta_5; }
	inline void set_m_baseUtcOffsetDelta_5(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___m_baseUtcOffsetDelta_5 = value;
	}
};


// System.Console/WindowsConsole/WindowsCancelHandler
struct  WindowsCancelHandler_tFD0F0B721F93ACA04D9CD9340DA39075A8FF2ACF  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentNullException
struct  ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:

public:
};


// System.ArgumentOutOfRangeException
struct  ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:
	// System.Object System.ArgumentOutOfRangeException::m_actualValue
	RuntimeObject * ___m_actualValue_19;

public:
	inline static int32_t get_offset_of_m_actualValue_19() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8, ___m_actualValue_19)); }
	inline RuntimeObject * get_m_actualValue_19() const { return ___m_actualValue_19; }
	inline RuntimeObject ** get_address_of_m_actualValue_19() { return &___m_actualValue_19; }
	inline void set_m_actualValue_19(RuntimeObject * value)
	{
		___m_actualValue_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_actualValue_19), (void*)value);
	}
};

struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields
{
public:
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.ArgumentOutOfRangeException::_rangeMessage
	String_t* ____rangeMessage_18;

public:
	inline static int32_t get_offset_of__rangeMessage_18() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields, ____rangeMessage_18)); }
	inline String_t* get__rangeMessage_18() const { return ____rangeMessage_18; }
	inline String_t** get_address_of__rangeMessage_18() { return &____rangeMessage_18; }
	inline void set__rangeMessage_18(String_t* value)
	{
		____rangeMessage_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rangeMessage_18), (void*)value);
	}
};


// System.ObjectDisposedException
struct  ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A  : public InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB
{
public:
	// System.String System.ObjectDisposedException::objectName
	String_t* ___objectName_17;

public:
	inline static int32_t get_offset_of_objectName_17() { return static_cast<int32_t>(offsetof(ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A, ___objectName_17)); }
	inline String_t* get_objectName_17() const { return ___objectName_17; }
	inline String_t** get_address_of_objectName_17() { return &___objectName_17; }
	inline void set_objectName_17(String_t* value)
	{
		___objectName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objectName_17), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.Threading.ThreadPoolWorkQueue/WorkStealingQueue[]
struct WorkStealingQueueU5BU5D_t0A012EBE228687C2D6BB90870F783BA69EEFBD8C  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) WorkStealingQueue_t0D430FD823CAB6C050301484CE7516E1573728A0 * m_Items[1];

public:
	inline WorkStealingQueue_t0D430FD823CAB6C050301484CE7516E1573728A0 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline WorkStealingQueue_t0D430FD823CAB6C050301484CE7516E1573728A0 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, WorkStealingQueue_t0D430FD823CAB6C050301484CE7516E1573728A0 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline WorkStealingQueue_t0D430FD823CAB6C050301484CE7516E1573728A0 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline WorkStealingQueue_t0D430FD823CAB6C050301484CE7516E1573728A0 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, WorkStealingQueue_t0D430FD823CAB6C050301484CE7516E1573728A0 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Threading.IThreadPoolWorkItem[]
struct IThreadPoolWorkItemU5BU5D_tA8F5E15B9A678486C494BA29BA2B36165FF28738  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

public:
	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};

IL2CPP_EXTERN_C void TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578_marshal_pinvoke(const TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578& unmarshaled, TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578_marshal_pinvoke_back(const TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578_marshaled_pinvoke& marshaled, TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578& unmarshaled);
IL2CPP_EXTERN_C void TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578_marshal_pinvoke_cleanup(TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578_marshal_com(const TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578& unmarshaled, TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578_marshaled_com& marshaled);
IL2CPP_EXTERN_C void TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578_marshal_com_back(const TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578_marshaled_com& marshaled, TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578& unmarshaled);
IL2CPP_EXTERN_C void TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578_marshal_com_cleanup(TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578_marshaled_com& marshaled);

// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__ctor_mCE309147068C1ECA3D92C5133444D805F5B04AF1_gshared (Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * __this, const RuntimeMethod* method);
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>::TrySetCanceled(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_1_TrySetCanceled_mB49D47FE8A080526EB1C12CA90F19C58ACADD931_gshared (Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * __this, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___tokenToRecord0, const RuntimeMethod* method);
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>::TrySetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_1_TrySetResult_m0D282AA0AA9602D0FCFA46141CEEAAE8533D2788_gshared (Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * __this, VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004  ___result0, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.Task`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__ctor_m0E154B54952313C68BE249DC65272D106C202E8C_gshared (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * __this, const RuntimeMethod* method);
// System.Boolean System.Threading.Tasks.Task`1<System.Object>::TrySetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_1_TrySetResult_m1050FBF178389A5D03D30C4C53B7E3E097A56B42_gshared (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * __this, RuntimeObject * ___result0, const RuntimeMethod* method);
// T1 System.Tuple`4<System.Object,System.Object,System.Int32,System.Int32>::get_Item1()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Tuple_4_get_Item1_m5F32E198862372BC9F9C510790E5098584906CAC_gshared_inline (Tuple_4_t936566050E79A53330A93469CAF15575A12A114D * __this, const RuntimeMethod* method);
// T2 System.Tuple`4<System.Object,System.Object,System.Int32,System.Int32>::get_Item2()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Tuple_4_get_Item2_m70E2FD23ACE5513A49D47582782076A592E0A1AF_gshared_inline (Tuple_4_t936566050E79A53330A93469CAF15575A12A114D * __this, const RuntimeMethod* method);
// T3 System.Tuple`4<System.Object,System.Object,System.Int32,System.Int32>::get_Item3()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Tuple_4_get_Item3_mB8D130AFCEE1037111D5F6387BF34F7893848F45_gshared_inline (Tuple_4_t936566050E79A53330A93469CAF15575A12A114D * __this, const RuntimeMethod* method);
// T4 System.Tuple`4<System.Object,System.Object,System.Int32,System.Int32>::get_Item4()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Tuple_4_get_Item4_mCB7860299592F8FA0F6F60C1EBA20767982B16DB_gshared_inline (Tuple_4_t936566050E79A53330A93469CAF15575A12A114D * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<TResult> System.Threading.Tasks.Task`1<System.Int32>::ConfigureAwait(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfiguredTaskAwaitable_1_t95CB4612A5B70DDFE0643FA38A73D6B984DD68EC  Task_1_ConfigureAwait_m9637E2990F98EDC90D1A03B57A4954CE2171C4E2_gshared (Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * __this, bool ___continueOnCapturedContext0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Int32>::GetAwaiter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2  ConfiguredTaskAwaitable_1_GetAwaiter_m8FA39505FC2099C60148C0F029CB49792690A0D5_gshared_inline (ConfiguredTaskAwaitable_1_t95CB4612A5B70DDFE0643FA38A73D6B984DD68EC * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Int32>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConfiguredTaskAwaiter_get_IsCompleted_m4192DC0E89B48FF93421FFF4EB52C21C42687999_gshared (ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Int32>,System.IO.TextReader/<ReadToEndAsync>d__14>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2_TisU3CReadToEndAsyncU3Ed__14_tD16259CAE393A0DA787F6304386A41E7F88A1B45_mED6FFB69B42EEC174F03718A7D27944A972E8527_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2 * ___awaiter0, U3CReadToEndAsyncU3Ed__14_tD16259CAE393A0DA787F6304386A41E7F88A1B45 * ___stateMachine1, const RuntimeMethod* method);
// TResult System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Int32>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConfiguredTaskAwaiter_GetResult_m0927E49E03619C51620F396FE1DD5DBD41AC6681_gshared (ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_m29521EB618E38AF72FF0C4094070C1489F4129B3_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m3E4AB12877D4FE377F26708CF6899C49360007FA_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, RuntimeObject * ___result0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_m736C84D61B4AB2FCD150BD3945C6874471A9224D_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::FromResult<System.Object>(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * Task_FromResult_TisRuntimeObject_m5FD118CD21188E7E9BC317D50B8AC800C0C0C591_gshared (RuntimeObject * ___result0, const RuntimeMethod* method);
// T1 System.Tuple`2<System.Object,System.Char>::get_Item1()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Tuple_2_get_Item1_m83FF713DB4A914365CB9A6D213C1D31B46269057_gshared_inline (Tuple_2_t844F36656ADFD9CCC9527B1F549244BD1884E5F6 * __this, const RuntimeMethod* method);
// T2 System.Tuple`2<System.Object,System.Char>::get_Item2()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppChar Tuple_2_get_Item2_m79AB8B3DC587FA8796EC216A623D10DC71A6E202_gshared_inline (Tuple_2_t844F36656ADFD9CCC9527B1F549244BD1884E5F6 * __this, const RuntimeMethod* method);
// T1 System.Tuple`2<System.Object,System.Object>::get_Item1()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Tuple_2_get_Item1_m80928C585ED22044C6E5DB8B8BFA895284E2BD9A_gshared_inline (Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 * __this, const RuntimeMethod* method);
// T2 System.Tuple`2<System.Object,System.Object>::get_Item2()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Tuple_2_get_Item2_m2A49F263317603E4A770D5B34222FFCCCB6AE4EB_gshared_inline (Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mFEB2301A6F28290A828A979BA9CC847B16B3D538_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Capacity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Capacity_mE316E0DB641CFB093F0309D091D773047F81B2CC_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_m7A81900F3492DE11874B0EA9A0E5454F897E3079_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___value0, const RuntimeMethod* method);

// System.Void System.Threading.Tasks.SynchronizationContextAwaitTaskContinuation/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mE0E68B002589E98A89FB87B81F9B8277CE30869D (U3CU3Ec_t97DE2C4F7EF16C425D7DB74D03F1E0947B3D9AF2 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.Task/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m88F7758B7F22376D5BC85288C6471CCB85D812F2 (U3CU3Ec_t92C182BCED0D720544B8BEB755769004B9E0CA12 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.Task/DelayPromise::Complete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelayPromise_Complete_m7AA94F353994825D13EF0C75D5707B386B4A813C (DelayPromise_t9761A33FC8F83592A4D61777C23985D6958E25D8 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.Task/ContingentProperties::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContingentProperties__ctor_m78940CF3290806990B2F081F86C42783A0533896 (ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * __this, const RuntimeMethod* method);
// System.Boolean System.Threading.Tasks.Task::get_IsExceptionObservedByParent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_get_IsExceptionObservedByParent_m93E14B9BEB66F98452C322294ED443AA889F85A7 (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, const RuntimeMethod* method);
// System.Threading.Tasks.Task System.Threading.Tasks.Task::get_InternalCurrent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * Task_get_InternalCurrent_m557FDDC9AA0F289D2E00266B3E231DF5299A719D_inline (const RuntimeMethod* method);
// System.Threading.ExecutionContext System.Threading.Tasks.Task::get_CapturedContext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * Task_get_CapturedContext_m1F34ADF8839D17A2D3ED72A19AF269A6CB47BA11 (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, const RuntimeMethod* method);
// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::get_ExecutingTaskScheduler()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * Task_get_ExecutingTaskScheduler_m95D238D843CD999FD8899BF6A98F5E84F4212C4C_inline (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, const RuntimeMethod* method);
// System.Threading.ExecutionContext System.Threading.Tasks.Task::CopyExecutionContext(System.Threading.ExecutionContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * Task_CopyExecutionContext_m7C28024C0D80F35735C462BC120605C775D2D515 (ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * ___capturedContext0, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.Task::set_CapturedContext(System.Threading.ExecutionContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_set_CapturedContext_m225BD08A66090C8F18C3D60BC24A95427BC3270B (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * ___value0, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.Task::ScheduleAndStart(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_ScheduleAndStart_m8B0BB3CA33030ADE7C6873A4F2CEEC7D50A070CB (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, bool ___needsProtection0, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.Task::InnerInvokeWithArg(System.Threading.Tasks.Task)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Task_InnerInvokeWithArg_m9034746B1D674E7F70ED323DDF3BD6B73A80E2E0 (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___childTask0, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.Task::HandleException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_HandleException_m516F404205F109E8518A15005828E94C39152D82 (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, Exception_t * ___unhandledException0, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.Task::FinishThreadAbortedTask(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_FinishThreadAbortedTask_mD4E2816A8E8E8D547EF8C727AD3FCE47D5E797B0 (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, bool ___bTAEAddedToExceptionHolder0, bool ___delegateRan1, const RuntimeMethod* method);
// System.Boolean System.Threading.Tasks.Task::InternalCancel(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_InternalCancel_m7B57FC75E03B2466152070C8A27AB8B2CBF9B106 (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, bool ___bCancelNonExecutingOnly0, const RuntimeMethod* method);
// System.Void System.Threading.ManualResetEventSlim::Set()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetEventSlim_Set_m088BFECDA60A46336CBA4E5FF1696D99CB8786FE (ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E * __this, const RuntimeMethod* method);
// System.Void System.Threading.CancellationTokenRegistration::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationTokenRegistration_Dispose_mAE8E6F50C883B44EFF2F74E9EA4AD31E9571743F (CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>::.ctor()
inline void Task_1__ctor_mCE309147068C1ECA3D92C5133444D805F5B04AF1 (Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * __this, const RuntimeMethod* method)
{
	((  void (*) (Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 *, const RuntimeMethod*))Task_1__ctor_mCE309147068C1ECA3D92C5133444D805F5B04AF1_gshared)(__this, method);
}
// System.Boolean System.Threading.Tasks.AsyncCausalityTracer::get_LoggingOn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncCausalityTracer_get_LoggingOn_mE0A03E121425371B1D1B65640172137C3B8EEA15 (const RuntimeMethod* method);
// System.Int32 System.Threading.Tasks.Task::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Task_get_Id_m34DAC27D91939B78DCD73A26085505A0B4D7235C (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.AsyncCausalityTracer::TraceOperationCreation(System.Threading.Tasks.CausalityTraceLevel,System.Int32,System.String,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void AsyncCausalityTracer_TraceOperationCreation_m3A018DC27992C4559B10283C06CC11513825898A (int32_t ___traceLevel0, int32_t ___taskId1, String_t* ___operationName2, uint64_t ___relatedContext3, const RuntimeMethod* method);
// System.Boolean System.Threading.Tasks.Task::AddToActiveTasks(System.Threading.Tasks.Task)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_AddToActiveTasks_m29D7B0C1AD029D86736A92EC7E36BE87209748FD (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___task0, const RuntimeMethod* method);
// System.Boolean System.Threading.CancellationToken::get_IsCancellationRequested()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CancellationToken_get_IsCancellationRequested_mC0A51CBEAEDE8789A0D04A79B20884ADABEB0D90 (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * __this, const RuntimeMethod* method);
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>::TrySetCanceled(System.Threading.CancellationToken)
inline bool Task_1_TrySetCanceled_mB49D47FE8A080526EB1C12CA90F19C58ACADD931 (Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * __this, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___tokenToRecord0, const RuntimeMethod* method)
{
	return ((  bool (*) (Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 *, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD , const RuntimeMethod*))Task_1_TrySetCanceled_mB49D47FE8A080526EB1C12CA90F19C58ACADD931_gshared)(__this, ___tokenToRecord0, method);
}
// System.Void System.Threading.Tasks.AsyncCausalityTracer::TraceOperationCompletion(System.Threading.Tasks.CausalityTraceLevel,System.Int32,System.Threading.Tasks.AsyncCausalityStatus)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void AsyncCausalityTracer_TraceOperationCompletion_m0C6FCD513830A060B436A11137CE4C7B114F26FC (int32_t ___traceLevel0, int32_t ___taskId1, int32_t ___status2, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.Task::RemoveFromActiveTasks(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_RemoveFromActiveTasks_m04918871919D56DC087D50937093E8FA992CAE3F (int32_t ___taskId0, const RuntimeMethod* method);
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>::TrySetResult(TResult)
inline bool Task_1_TrySetResult_m0D282AA0AA9602D0FCFA46141CEEAAE8533D2788 (Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * __this, VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004  ___result0, const RuntimeMethod* method)
{
	return ((  bool (*) (Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 *, VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004 , const RuntimeMethod*))Task_1_TrySetResult_m0D282AA0AA9602D0FCFA46141CEEAAE8533D2788_gshared)(__this, ___result0, method);
}
// System.Void System.Threading.Timer::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timer_Dispose_m89DE06BE1C2F2AF372D469826A0AA3560665B571 (Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * __this, const RuntimeMethod* method);
// System.Void System.Threading.ManualResetEventSlim::.ctor(System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetEventSlim__ctor_m06178709FE4A098D061C4B414FD72FA900AA9E4F (ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E * __this, bool ___initialState0, int32_t ___spinCount1, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>::.ctor()
inline void Task_1__ctor_m2FE7FA66D68629FF8472B1548D3760C56B736AF3 (Task_1_t24E932728D4BE67BFA41487F43AE4FAEBBAC7284 * __this, const RuntimeMethod* method)
{
	((  void (*) (Task_1_t24E932728D4BE67BFA41487F43AE4FAEBBAC7284 *, const RuntimeMethod*))Task_1__ctor_m0E154B54952313C68BE249DC65272D106C202E8C_gshared)(__this, method);
}
// System.Int32 System.Threading.Interlocked::CompareExchange(System.Int32&,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_CompareExchange_m317AD9524376B7BE74DD9069346E345F2B131382 (int32_t* ___location10, int32_t ___value1, int32_t ___comparand2, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.AsyncCausalityTracer::TraceOperationRelation(System.Threading.Tasks.CausalityTraceLevel,System.Int32,System.Threading.Tasks.CausalityRelation)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void AsyncCausalityTracer_TraceOperationRelation_m02292CC8909AD62A9B3292C224943E396AC1821E (int32_t ___traceLevel0, int32_t ___taskId1, int32_t ___relation2, const RuntimeMethod* method);
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>::TrySetResult(TResult)
inline bool Task_1_TrySetResult_m6795B42289D80646AF4939781DEEF626F532726D (Task_1_t24E932728D4BE67BFA41487F43AE4FAEBBAC7284 * __this, Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___result0, const RuntimeMethod* method)
{
	return ((  bool (*) (Task_1_t24E932728D4BE67BFA41487F43AE4FAEBBAC7284 *, Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *, const RuntimeMethod*))Task_1_TrySetResult_m1050FBF178389A5D03D30C4C53B7E3E097A56B42_gshared)(__this, ___result0, method);
}
// System.Boolean System.Threading.Tasks.Task::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_get_IsCompleted_m7EF73EE6C4F400997345371FFB10137D8E9B4E1E (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.Task::RemoveContinuation(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_RemoveContinuation_m94A37A95DB74604DD0B72D23D007C205B2FE6F41 (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, RuntimeObject * ___continuationObject0, const RuntimeMethod* method);
// System.Int32 System.Threading.Tasks.TaskScheduler::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TaskScheduler_get_Id_m2DC6D2CF6E1D683698EDBE0EA8CEB7E27919FA3F (TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskSchedulerAwaitTaskContinuation/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mDCDFB12A1CFECE84AEA46CDFB77A67EED2876908 (U3CU3Ec_t832C49A1D40F5D7429F13CAA78ADF77459CA87FE * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.AwaitTaskContinuation::ThrowAsyncIfNecessary(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AwaitTaskContinuation_ThrowAsyncIfNecessary_mA92F6B1DD1757CDAAF066A7F55ED9575D2DFD293 (Exception_t * ___exc0, const RuntimeMethod* method);
// System.Void System.IO.TextReader/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mD0B5ABBD8C044099D82A52E34C40524ECC4E5CB0 (U3CU3Ec_t5ECA46CBAA9AA77646C20CB57E986587D87A71BF * __this, const RuntimeMethod* method);
// T1 System.Tuple`4<System.IO.TextReader,System.Char[],System.Int32,System.Int32>::get_Item1()
inline TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * Tuple_4_get_Item1_m94F53C4967C93EF0E383CF30D29E7D45111BB1CC_inline (Tuple_4_t16778489594C50623A8E8690A84D09A8BB36D31E * __this, const RuntimeMethod* method)
{
	return ((  TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * (*) (Tuple_4_t16778489594C50623A8E8690A84D09A8BB36D31E *, const RuntimeMethod*))Tuple_4_get_Item1_m5F32E198862372BC9F9C510790E5098584906CAC_gshared_inline)(__this, method);
}
// T2 System.Tuple`4<System.IO.TextReader,System.Char[],System.Int32,System.Int32>::get_Item2()
inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* Tuple_4_get_Item2_m3D91D1A59E47371BF6761E4B8111DE2646ABCD59_inline (Tuple_4_t16778489594C50623A8E8690A84D09A8BB36D31E * __this, const RuntimeMethod* method)
{
	return ((  CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* (*) (Tuple_4_t16778489594C50623A8E8690A84D09A8BB36D31E *, const RuntimeMethod*))Tuple_4_get_Item2_m70E2FD23ACE5513A49D47582782076A592E0A1AF_gshared_inline)(__this, method);
}
// T3 System.Tuple`4<System.IO.TextReader,System.Char[],System.Int32,System.Int32>::get_Item3()
inline int32_t Tuple_4_get_Item3_mB491A91FB7CA996232B01C7E2EC571605A9C6C2D_inline (Tuple_4_t16778489594C50623A8E8690A84D09A8BB36D31E * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Tuple_4_t16778489594C50623A8E8690A84D09A8BB36D31E *, const RuntimeMethod*))Tuple_4_get_Item3_mB8D130AFCEE1037111D5F6387BF34F7893848F45_gshared_inline)(__this, method);
}
// T4 System.Tuple`4<System.IO.TextReader,System.Char[],System.Int32,System.Int32>::get_Item4()
inline int32_t Tuple_4_get_Item4_mA5A7B9AEC93D270D9CB237F89C023BDF08E90350_inline (Tuple_4_t16778489594C50623A8E8690A84D09A8BB36D31E * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Tuple_4_t16778489594C50623A8E8690A84D09A8BB36D31E *, const RuntimeMethod*))Tuple_4_get_Item4_mCB7860299592F8FA0F6F60C1EBA20767982B16DB_gshared_inline)(__this, method);
}
// System.Void System.Text.StringBuilder::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_mEDFFE2D378A15F6DAB54D52661C84C1B52E7BA2E (StringBuilder_t * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m4B771D7BFE8A65C9A504EC5847A699EB678B02DB (StringBuilder_t * __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___value0, int32_t ___startIndex1, int32_t ___charCount2, const RuntimeMethod* method);
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<TResult> System.Threading.Tasks.Task`1<System.Int32>::ConfigureAwait(System.Boolean)
inline ConfiguredTaskAwaitable_1_t95CB4612A5B70DDFE0643FA38A73D6B984DD68EC  Task_1_ConfigureAwait_m9637E2990F98EDC90D1A03B57A4954CE2171C4E2 (Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * __this, bool ___continueOnCapturedContext0, const RuntimeMethod* method)
{
	return ((  ConfiguredTaskAwaitable_1_t95CB4612A5B70DDFE0643FA38A73D6B984DD68EC  (*) (Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 *, bool, const RuntimeMethod*))Task_1_ConfigureAwait_m9637E2990F98EDC90D1A03B57A4954CE2171C4E2_gshared)(__this, ___continueOnCapturedContext0, method);
}
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Int32>::GetAwaiter()
inline ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2  ConfiguredTaskAwaitable_1_GetAwaiter_m8FA39505FC2099C60148C0F029CB49792690A0D5_inline (ConfiguredTaskAwaitable_1_t95CB4612A5B70DDFE0643FA38A73D6B984DD68EC * __this, const RuntimeMethod* method)
{
	return ((  ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2  (*) (ConfiguredTaskAwaitable_1_t95CB4612A5B70DDFE0643FA38A73D6B984DD68EC *, const RuntimeMethod*))ConfiguredTaskAwaitable_1_GetAwaiter_m8FA39505FC2099C60148C0F029CB49792690A0D5_gshared_inline)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Int32>::get_IsCompleted()
inline bool ConfiguredTaskAwaiter_get_IsCompleted_m4192DC0E89B48FF93421FFF4EB52C21C42687999 (ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2 *, const RuntimeMethod*))ConfiguredTaskAwaiter_get_IsCompleted_m4192DC0E89B48FF93421FFF4EB52C21C42687999_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Int32>,System.IO.TextReader/<ReadToEndAsync>d__14>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2_TisU3CReadToEndAsyncU3Ed__14_tD16259CAE393A0DA787F6304386A41E7F88A1B45_m2C52B14607DF9BDF2A7044E5BF355C1F7189DA2A (AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F * __this, ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2 * ___awaiter0, U3CReadToEndAsyncU3Ed__14_tD16259CAE393A0DA787F6304386A41E7F88A1B45 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F *, ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2 *, U3CReadToEndAsyncU3Ed__14_tD16259CAE393A0DA787F6304386A41E7F88A1B45 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2_TisU3CReadToEndAsyncU3Ed__14_tD16259CAE393A0DA787F6304386A41E7F88A1B45_mED6FFB69B42EEC174F03718A7D27944A972E8527_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// TResult System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Int32>::GetResult()
inline int32_t ConfiguredTaskAwaiter_GetResult_m0927E49E03619C51620F396FE1DD5DBD41AC6681 (ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2 *, const RuntimeMethod*))ConfiguredTaskAwaiter_GetResult_m0927E49E03619C51620F396FE1DD5DBD41AC6681_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_mF736FFAC649614B42D89C5FE96F9E9D8EF69D962 (AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F * __this, Exception_t * ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F *, Exception_t *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_m29521EB618E38AF72FF0C4094070C1489F4129B3_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>::SetResult(TResult)
inline void AsyncTaskMethodBuilder_1_SetResult_mED41A75B510B80C4E8D4766516ABB37736D7ADF6 (AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F * __this, String_t* ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F *, String_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m3E4AB12877D4FE377F26708CF6899C49360007FA_gshared)(__this, ___result0, method);
}
// System.Void System.IO.TextReader/<ReadToEndAsync>d__14::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReadToEndAsyncU3Ed__14_MoveNext_m52916E41018117AF76E19621E9D9241F3370FB1E (U3CReadToEndAsyncU3Ed__14_tD16259CAE393A0DA787F6304386A41E7F88A1B45 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_mEE799A2BCC831F9D2A73AD58553306A24516B3F5 (AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F *, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m736C84D61B4AB2FCD150BD3945C6874471A9224D_gshared)(__this, ___stateMachine0, method);
}
// System.Void System.IO.TextReader/<ReadToEndAsync>d__14::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReadToEndAsyncU3Ed__14_SetStateMachine_m657671BFE4DCA9BED3AB80544B316BF32E0E0C8F (U3CReadToEndAsyncU3Ed__14_tD16259CAE393A0DA787F6304386A41E7F88A1B45 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.IO.TextReader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextReader__ctor_m6DFFA45D57F3E5A8FA3995BB40A2BC765AB2795A (TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * __this, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::FromResult<System.String>(TResult)
inline Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * Task_FromResult_TisString_t_mB2118B0DB57948278B3D179FBE4FE5E1E321B906 (String_t* ___result0, const RuntimeMethod* method)
{
	return ((  Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * (*) (String_t*, const RuntimeMethod*))Task_FromResult_TisRuntimeObject_m5FD118CD21188E7E9BC317D50B8AC800C0C0C591_gshared)(___result0, method);
}
// System.Void System.IO.TextWriter/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mCCA301B78BA58766C800243F770CB58781F5C62C (U3CU3Ec_t1A707D491A359996794A63E517A0665899B4893A * __this, const RuntimeMethod* method);
// T1 System.Tuple`2<System.IO.TextWriter,System.Char>::get_Item1()
inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * Tuple_2_get_Item1_mEF1895FA4BFB0311A1B8E9C8B859CC76A27C3B07_inline (Tuple_2_t633ADA252A8DAC01B7681557DA2442C7F355B339 * __this, const RuntimeMethod* method)
{
	return ((  TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * (*) (Tuple_2_t633ADA252A8DAC01B7681557DA2442C7F355B339 *, const RuntimeMethod*))Tuple_2_get_Item1_m83FF713DB4A914365CB9A6D213C1D31B46269057_gshared_inline)(__this, method);
}
// T2 System.Tuple`2<System.IO.TextWriter,System.Char>::get_Item2()
inline Il2CppChar Tuple_2_get_Item2_m0128C0E032DA4707781C1EAB65135574999431D1_inline (Tuple_2_t633ADA252A8DAC01B7681557DA2442C7F355B339 * __this, const RuntimeMethod* method)
{
	return ((  Il2CppChar (*) (Tuple_2_t633ADA252A8DAC01B7681557DA2442C7F355B339 *, const RuntimeMethod*))Tuple_2_get_Item2_m79AB8B3DC587FA8796EC216A623D10DC71A6E202_gshared_inline)(__this, method);
}
// T1 System.Tuple`2<System.IO.TextWriter,System.String>::get_Item1()
inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * Tuple_2_get_Item1_m9D657D0F7331BC11763A6BE128C502D8290263C4_inline (Tuple_2_t1E2E0182AF85006F49B500E9CD9188F1FB239A36 * __this, const RuntimeMethod* method)
{
	return ((  TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * (*) (Tuple_2_t1E2E0182AF85006F49B500E9CD9188F1FB239A36 *, const RuntimeMethod*))Tuple_2_get_Item1_m80928C585ED22044C6E5DB8B8BFA895284E2BD9A_gshared_inline)(__this, method);
}
// T2 System.Tuple`2<System.IO.TextWriter,System.String>::get_Item2()
inline String_t* Tuple_2_get_Item2_m9296C76ABF5ACF73224A566E32C5C4B2830DD6D9_inline (Tuple_2_t1E2E0182AF85006F49B500E9CD9188F1FB239A36 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Tuple_2_t1E2E0182AF85006F49B500E9CD9188F1FB239A36 *, const RuntimeMethod*))Tuple_2_get_Item2_m2A49F263317603E4A770D5B34222FFCCCB6AE4EB_gshared_inline)(__this, method);
}
// T1 System.Tuple`4<System.IO.TextWriter,System.Char[],System.Int32,System.Int32>::get_Item1()
inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * Tuple_4_get_Item1_m3B33EC22891078C028C0573820148CDF02C3DEED_inline (Tuple_4_t8910349157062B8CCD348478BF6EC6BE8593A207 * __this, const RuntimeMethod* method)
{
	return ((  TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * (*) (Tuple_4_t8910349157062B8CCD348478BF6EC6BE8593A207 *, const RuntimeMethod*))Tuple_4_get_Item1_m5F32E198862372BC9F9C510790E5098584906CAC_gshared_inline)(__this, method);
}
// T2 System.Tuple`4<System.IO.TextWriter,System.Char[],System.Int32,System.Int32>::get_Item2()
inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* Tuple_4_get_Item2_m5BCA3CF7548FE8F0EFAFDE8E5100725C8DFC40F0_inline (Tuple_4_t8910349157062B8CCD348478BF6EC6BE8593A207 * __this, const RuntimeMethod* method)
{
	return ((  CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* (*) (Tuple_4_t8910349157062B8CCD348478BF6EC6BE8593A207 *, const RuntimeMethod*))Tuple_4_get_Item2_m70E2FD23ACE5513A49D47582782076A592E0A1AF_gshared_inline)(__this, method);
}
// T3 System.Tuple`4<System.IO.TextWriter,System.Char[],System.Int32,System.Int32>::get_Item3()
inline int32_t Tuple_4_get_Item3_m2881060CC27F53A82A6535EA27E41EE752CC60DF_inline (Tuple_4_t8910349157062B8CCD348478BF6EC6BE8593A207 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Tuple_4_t8910349157062B8CCD348478BF6EC6BE8593A207 *, const RuntimeMethod*))Tuple_4_get_Item3_mB8D130AFCEE1037111D5F6387BF34F7893848F45_gshared_inline)(__this, method);
}
// T4 System.Tuple`4<System.IO.TextWriter,System.Char[],System.Int32,System.Int32>::get_Item4()
inline int32_t Tuple_4_get_Item4_m623080FEB0168E7827752353D3A232D1AAC5F7E1_inline (Tuple_4_t8910349157062B8CCD348478BF6EC6BE8593A207 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Tuple_4_t8910349157062B8CCD348478BF6EC6BE8593A207 *, const RuntimeMethod*))Tuple_4_get_Item4_mCB7860299592F8FA0F6F60C1EBA20767982B16DB_gshared_inline)(__this, method);
}
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164 (const RuntimeMethod* method);
// System.Void System.IO.TextWriter::.ctor(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextWriter__ctor_m93B03125D61D24EF37FD6E27897D7C4033BC7090 (TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * __this, RuntimeObject* ___formatProvider0, const RuntimeMethod* method);
// System.Threading.Tasks.Task System.Threading.Tasks.Task::get_CompletedTask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * Task_get_CompletedTask_m50A6B866A113BC922674893991DC4E80CB629C1D (const RuntimeMethod* method);
// System.Int32 System.Environment::get_CurrentManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D (const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void System.Threading.ThreadPool/<EnumerateQueuedWorkItems>d__21::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateQueuedWorkItemsU3Ed__21__ctor_m2522F8A938E01AC237E0B403198B366F5E139A24 (U3CEnumerateQueuedWorkItemsU3Ed__21_tF069F486DA9CB1A00C0998401737C7FA776F53BD * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<System.Threading.IThreadPoolWorkItem> System.Threading.ThreadPool/<EnumerateQueuedWorkItems>d__21::System.Collections.Generic.IEnumerable<System.Threading.IThreadPoolWorkItem>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEnumerateQueuedWorkItemsU3Ed__21_System_Collections_Generic_IEnumerableU3CSystem_Threading_IThreadPoolWorkItemU3E_GetEnumerator_mE6330DF22C4294D87DE0EA64D1414DCE751DDFE1 (U3CEnumerateQueuedWorkItemsU3Ed__21_tF069F486DA9CB1A00C0998401737C7FA776F53BD * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.ThreadPoolTaskScheduler/<FilterTasksFromWorkItems>d__7::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFilterTasksFromWorkItemsU3Ed__7_U3CU3Em__Finally1_m476099EA43DB4B5AF00D9DA5540DB07E04AB2AD2 (U3CFilterTasksFromWorkItemsU3Ed__7_tD560179E466F2CE2E14AD67C91EC9739A58C9040 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.ThreadPoolTaskScheduler/<FilterTasksFromWorkItems>d__7::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFilterTasksFromWorkItemsU3Ed__7_System_IDisposable_Dispose_m26961A724928D49280CDA83AC6365DDCF3C4BA5F (U3CFilterTasksFromWorkItemsU3Ed__7_tD560179E466F2CE2E14AD67C91EC9739A58C9040 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.ThreadPoolTaskScheduler/<FilterTasksFromWorkItems>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFilterTasksFromWorkItemsU3Ed__7__ctor_m03A64629D95A588A0FFE43D8881C698928A4173E (U3CFilterTasksFromWorkItemsU3Ed__7_tD560179E466F2CE2E14AD67C91EC9739A58C9040 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<System.Threading.Tasks.Task> System.Threading.Tasks.ThreadPoolTaskScheduler/<FilterTasksFromWorkItems>d__7::System.Collections.Generic.IEnumerable<System.Threading.Tasks.Task>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFilterTasksFromWorkItemsU3Ed__7_System_Collections_Generic_IEnumerableU3CSystem_Threading_Tasks_TaskU3E_GetEnumerator_m88EBD0527BD0EF15970DCC796BA5E96971A8F263 (U3CFilterTasksFromWorkItemsU3Ed__7_tD560179E466F2CE2E14AD67C91EC9739A58C9040 * __this, const RuntimeMethod* method);
// System.Void System.Threading.ThreadPoolWorkQueue/QueueSegment::GetIndexes(System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QueueSegment_GetIndexes_m178DEB794F799E4BEF2A971A973455C5BC17EE65 (QueueSegment_tBF384DF1C15001FBEDB17378EB22EA233A89A0A4 * __this, int32_t* ___upper0, int32_t* ___lower1, const RuntimeMethod* method);
// System.Boolean System.Threading.ThreadPoolWorkQueue/QueueSegment::CompareExchangeIndexes(System.Int32&,System.Int32,System.Int32&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool QueueSegment_CompareExchangeIndexes_mBC9DF7132FB083719B384F82B3DBE4D044EC348A (QueueSegment_tBF384DF1C15001FBEDB17378EB22EA233A89A0A4 * __this, int32_t* ___prevUpper0, int32_t ___newUpper1, int32_t* ___prevLower2, int32_t ___newLower3, const RuntimeMethod* method);
// System.Void System.Threading.SpinWait::SpinOnce()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpinWait_SpinOnce_m79A8F770ED24E400B6AEFA421A33084CA54E59DB (SpinWait_tEBEEDAE5AEEBBDDEA635932A22308A8398C9AED9 * __this, const RuntimeMethod* method);
// System.Void System.Threading.SpinLock::Enter(System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpinLock_Enter_mB10F73DB34FFE5F8FC85FA8B85A14ED48379C96C (SpinLock_t9860D503E59EFE08CF5241E2BA0C33397BF78F5D * __this, bool* ___lockTaken0, const RuntimeMethod* method);
// System.Void System.Threading.SpinLock::Exit(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpinLock_Exit_m1E557B43BDB04736F956C50716DF29AEF2A14B4D (SpinLock_t9860D503E59EFE08CF5241E2BA0C33397BF78F5D * __this, bool ___useMemoryBarrier0, const RuntimeMethod* method);
// System.Boolean System.Threading.ThreadPoolWorkQueue/WorkStealingQueue::LocalPop(System.Threading.IThreadPoolWorkItem&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WorkStealingQueue_LocalPop_mAEB4C62E33AEED00E90F4FA1B027A9F1BCA450F8 (WorkStealingQueue_t0D430FD823CAB6C050301484CE7516E1573728A0 * __this, RuntimeObject** ___obj0, const RuntimeMethod* method);
// System.Int32 System.Threading.Interlocked::Exchange(System.Int32&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_Exchange_mCB69CAC317F723A1CB6B52194C5917B49C456794 (int32_t* ___location10, int32_t ___value1, const RuntimeMethod* method);
// System.Boolean System.Threading.ThreadPoolWorkQueue/WorkStealingQueue::TrySteal(System.Threading.IThreadPoolWorkItem&,System.Boolean&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WorkStealingQueue_TrySteal_m3ACAA9B2078703F8217D3B2702EDDE8D054897BD (WorkStealingQueue_t0D430FD823CAB6C050301484CE7516E1573728A0 * __this, RuntimeObject** ___obj0, bool* ___missedSteal1, int32_t ___millisecondsTimeout2, const RuntimeMethod* method);
// System.Void System.Threading.SpinLock::TryEnter(System.Int32,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpinLock_TryEnter_mF817DF2D24635A1E69D35F97F4F03F6DE788A114 (SpinLock_t9860D503E59EFE08CF5241E2BA0C33397BF78F5D * __this, int32_t ___millisecondsTimeout0, bool* ___lockTaken1, const RuntimeMethod* method);
// System.Void System.Threading.SpinLock::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpinLock__ctor_mA76B573975917A3D78DC878D6281196065FC9128 (SpinLock_t9860D503E59EFE08CF5241E2BA0C33397BF78F5D * __this, bool ___enableThreadOwnerTracking0, const RuntimeMethod* method);
// System.String System.Globalization.TimeSpanFormat/FormatLiterals::get_Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FormatLiterals_get_Start_mB169F5FF4FD7C471F34E7EE859C5CA7F8432E512 (FormatLiterals_t8EC4E080425C3E3AE6627A6BB7F5B487680E3C94 * __this, const RuntimeMethod* method);
// System.String System.Globalization.TimeSpanFormat/FormatLiterals::get_DayHourSep()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FormatLiterals_get_DayHourSep_m2A4A99E937519106A2AA821B9C8928D736697C68 (FormatLiterals_t8EC4E080425C3E3AE6627A6BB7F5B487680E3C94 * __this, const RuntimeMethod* method);
// System.String System.Globalization.TimeSpanFormat/FormatLiterals::get_HourMinuteSep()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FormatLiterals_get_HourMinuteSep_m123BD98C8CF1851406FF198FEA43C4C9593DDD00 (FormatLiterals_t8EC4E080425C3E3AE6627A6BB7F5B487680E3C94 * __this, const RuntimeMethod* method);
// System.String System.Globalization.TimeSpanFormat/FormatLiterals::get_MinuteSecondSep()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FormatLiterals_get_MinuteSecondSep_m2E9860660A09ABE847E39D1277964283BC4EF376 (FormatLiterals_t8EC4E080425C3E3AE6627A6BB7F5B487680E3C94 * __this, const RuntimeMethod* method);
// System.String System.Globalization.TimeSpanFormat/FormatLiterals::get_SecondFractionSep()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FormatLiterals_get_SecondFractionSep_m72BAC4DFC9E58C6772D714202BAB62B743E2F74B (FormatLiterals_t8EC4E080425C3E3AE6627A6BB7F5B487680E3C94 * __this, const RuntimeMethod* method);
// System.String System.Globalization.TimeSpanFormat/FormatLiterals::get_End()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FormatLiterals_get_End_mE6A0DE290B82190D563606780CA7AA9FA847443B (FormatLiterals_t8EC4E080425C3E3AE6627A6BB7F5B487680E3C94 * __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilderCache::Acquire(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilderCache_Acquire_mC7C5506CB542A20FEEBF48E654255C5368462D1A (int32_t ___capacity0, const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70 (String_t* __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::set_Length(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder_set_Length_m7C1756193B05DCA5A23C5DC98EE90A9FC685A27A (StringBuilder_t * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E (StringBuilder_t * __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void System.Text.StringBuilderCache::Release(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilderCache_Release_m9CE702E4E7FD914B49F59963B031A597EFE4D8EE (StringBuilder_t * ___sb0, const RuntimeMethod* method);
// System.Void System.Globalization.TimeSpanFormat/FormatLiterals::Init(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FormatLiterals_Init_m7359DC89B4E47BCC6116B0D67E3C2C329BBF3D8A (FormatLiterals_t8EC4E080425C3E3AE6627A6BB7F5B487680E3C94 * __this, String_t* ___format0, bool ___useInvariantFieldLengths1, const RuntimeMethod* method);
// System.Void System.TimeZoneInfo/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m9DEEDA6DA97B7B98E7E8FFBDFFD70D67023DD420 (U3CU3Ec_t24F903F915888347E8B19C16314DF4C75387324E * __this, const RuntimeMethod* method);
// System.DateTime System.TimeZoneInfo/AdjustmentRule::get_DateStart()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  AdjustmentRule_get_DateStart_m05FFD9D69391EC287D299B23A549FFB1F9FB14EE_inline (AdjustmentRule_t15EC10F91D4E8CC287CF8610D8D24BD636A23304 * __this, const RuntimeMethod* method);
// System.Int32 System.DateTime::CompareTo(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_CompareTo_m2864B0ABAE4B8748D4092D1D16AE56EE0B248F93 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value0, const RuntimeMethod* method);
// System.Boolean System.DateTime::op_Equality(System.DateTime,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTime_op_Equality_m07957AECB8C66EA047B16511BF560DD9EDA1DA44 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___d10, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___d21, const RuntimeMethod* method);
// System.Boolean System.TimeSpan::op_Equality(System.TimeSpan,System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TimeSpan_op_Equality_m8229F4B63064E2D43B244C6E82D55CB2B0360BB1 (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___t10, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___t21, const RuntimeMethod* method);
// System.Boolean System.TimeZoneInfo/TransitionTime::Equals(System.TimeZoneInfo/TransitionTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransitionTime_Equals_m4976405B1B8F5E7A5C269D4760CD239DC18E5631 (TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A * __this, TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  ___other0, const RuntimeMethod* method);
// System.Int32 System.DateTime::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_GetHashCode_mC94DC52667BB5C0DE7A78C53BE24FDF5469BA49D (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, const RuntimeMethod* method);
// System.Void System.TimeZoneInfo/AdjustmentRule::ValidateAdjustmentRule(System.DateTime,System.DateTime,System.TimeSpan,System.TimeZoneInfo/TransitionTime,System.TimeZoneInfo/TransitionTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustmentRule_ValidateAdjustmentRule_m2D1CE9572A7AA306E36ADD93AA2CEA2858B77023 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___dateStart0, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___dateEnd1, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___daylightDelta2, TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  ___daylightTransitionStart3, TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  ___daylightTransitionEnd4, const RuntimeMethod* method);
// System.Void System.TimeZoneInfo/AdjustmentRule::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustmentRule__ctor_m6768FD1CD669E0678EC84422E516891EE71528CC (AdjustmentRule_t15EC10F91D4E8CC287CF8610D8D24BD636A23304 * __this, const RuntimeMethod* method);
// System.TimeZoneInfo/AdjustmentRule System.TimeZoneInfo/AdjustmentRule::CreateAdjustmentRule(System.DateTime,System.DateTime,System.TimeSpan,System.TimeZoneInfo/TransitionTime,System.TimeZoneInfo/TransitionTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdjustmentRule_t15EC10F91D4E8CC287CF8610D8D24BD636A23304 * AdjustmentRule_CreateAdjustmentRule_mC90086998B3DF5F9492A4B2281CFEDED04E1E6AE (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___dateStart0, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___dateEnd1, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___daylightDelta2, TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  ___daylightTransitionStart3, TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  ___daylightTransitionEnd4, const RuntimeMethod* method);
// System.DateTimeKind System.DateTime::get_Kind()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Kind_mC7EC1A788CC9A875094117214C5A0C153A39F496 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, const RuntimeMethod* method);
// System.String System.Environment::GetResourceString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Environment_GetResourceString_m8DFF827596B5FD533D3FE56900FA095F7D674617 (String_t* ___key0, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Boolean System.DateTime::op_GreaterThan(System.DateTime,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTime_op_GreaterThan_m87A988E247EFDFFE61474088700F29840758E3DD (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___t10, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___t21, const RuntimeMethod* method);
// System.Boolean System.TimeZoneInfo::UtcOffsetOutOfRange(System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TimeZoneInfo_UtcOffsetOutOfRange_m1691F47564A06BA9E8B774DA68430FDBEE363BA8 (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___offset0, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m7C5B3BE7792B7C73E7D82C4DBAD4ACA2DAE71AA9 (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * __this, String_t* ___paramName0, RuntimeObject * ___actualValue1, String_t* ___message2, const RuntimeMethod* method);
// System.Int64 System.TimeSpan::get_Ticks()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t TimeSpan_get_Ticks_mE4C9E1F27DC794028CEDCF7CB5BD092D16DBACD4_inline (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * __this, const RuntimeMethod* method);
// System.TimeSpan System.DateTime::get_TimeOfDay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  DateTime_get_TimeOfDay_mE6A177963C8D8AA8AA2830239F1C7B3D11AFC645 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, const RuntimeMethod* method);
// System.Boolean System.TimeSpan::op_Inequality(System.TimeSpan,System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TimeSpan_op_Inequality_mDE127E1886D092054E24EA873CEE64D0857CD04C (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___t10, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___t21, const RuntimeMethod* method);
// System.Void System.Runtime.Serialization.SerializationException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationException__ctor_m03F01FDBEB6469CCD85942C5C62BD46FFC6CE11C (SerializationException_tDB38C13A2ABF407C381E3F332D197AC1AD097A92 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m4E39B61DB324BA16CB228942756352329286C40B (SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * __this, String_t* ___name0, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value1, const RuntimeMethod* method);
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_mA50C2668EF700C2239DDC362F8DB409020BB763D (SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * __this, String_t* ___name0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Object System.Runtime.Serialization.SerializationInfo::GetValue(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * SerializationInfo_GetValue_mF6E311779D55AD7C80B2D19FF2A7E9683AEF2A99 (SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * __this, String_t* ___name0, Type_t * ___type1, const RuntimeMethod* method);
// System.Object System.Runtime.Serialization.SerializationInfo::GetValueNoThrow(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * SerializationInfo_GetValueNoThrow_mA1F5663511899C588B39643FF53002717A84DFF3 (SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * __this, String_t* ___name0, Type_t * ___type1, const RuntimeMethod* method);
// System.DateTime System.TimeZoneInfo/TransitionTime::get_TimeOfDay()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  TransitionTime_get_TimeOfDay_m95ECA2E981CA772D9D1DECC7F7421241D4144F44_inline (TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A * __this, const RuntimeMethod* method);
// System.Int32 System.TimeZoneInfo/TransitionTime::get_Month()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TransitionTime_get_Month_m1E127ECF7312277ED31CEB769A6DC0503F1FAB2B_inline (TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A * __this, const RuntimeMethod* method);
// System.Int32 System.TimeZoneInfo/TransitionTime::get_Week()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TransitionTime_get_Week_m9271C2A79DC390EF07020F63CAB641FA36E304BA_inline (TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A * __this, const RuntimeMethod* method);
// System.Int32 System.TimeZoneInfo/TransitionTime::get_Day()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TransitionTime_get_Day_mF663C24FEFF09012299FA76BE6D65CC6C455C87C_inline (TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A * __this, const RuntimeMethod* method);
// System.DayOfWeek System.TimeZoneInfo/TransitionTime::get_DayOfWeek()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TransitionTime_get_DayOfWeek_mDC32F75FFCC4AAE5826AFBBC11840C8290E08E52_inline (TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A * __this, const RuntimeMethod* method);
// System.Boolean System.TimeZoneInfo/TransitionTime::get_IsFixedDateRule()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TransitionTime_get_IsFixedDateRule_m4E7A489F0B8E60893C80A70E768F36A10258E9FB_inline (TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A * __this, const RuntimeMethod* method);
// System.Boolean System.TimeZoneInfo/TransitionTime::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransitionTime_Equals_mD63D4051F9FCD2B6277B194A42CCA50934E7C2B6 (TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 System.TimeZoneInfo/TransitionTime::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TransitionTime_GetHashCode_m375A0DD95EB4F4A3139592E11E0BDB1C8B99F36E (TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A * __this, const RuntimeMethod* method);
// System.TimeZoneInfo/TransitionTime System.TimeZoneInfo/TransitionTime::CreateTransitionTime(System.DateTime,System.Int32,System.Int32,System.Int32,System.DayOfWeek,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  TransitionTime_CreateTransitionTime_m3B9B63724B97DF42141B69B6B561D36AE629434E (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___timeOfDay0, int32_t ___month1, int32_t ___week2, int32_t ___day3, int32_t ___dayOfWeek4, bool ___isFixedDateRule5, const RuntimeMethod* method);
// System.Void System.TimeZoneInfo/TransitionTime::ValidateTransitionTime(System.DateTime,System.Int32,System.Int32,System.Int32,System.DayOfWeek)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransitionTime_ValidateTransitionTime_m26FF63A3CD81059DCD206740F4C55820E979F844 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___timeOfDay0, int32_t ___month1, int32_t ___week2, int32_t ___day3, int32_t ___dayOfWeek4, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mE43AFC74F5F3932913C023A04B24905E093C5005 (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method);
// System.Int32 System.DateTime::get_Year()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Year_m977F96B53C996797BFBDCAA5679B8DCBA61AC185 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, const RuntimeMethod* method);
// System.Int32 System.DateTime::get_Month()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Month_m46CC2AED3F24A91104919B1F6B5103DD1F8BBAE8 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, const RuntimeMethod* method);
// System.Int32 System.DateTime::get_Day()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Day_m9D698CA2A7D1FBEE7BEC0A982A119239F513CBA8 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, const RuntimeMethod* method);
// System.Int64 System.DateTime::get_Ticks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t DateTime_get_Ticks_m175EDB41A50DB06872CC48CAB603FEBD1DFF46A9 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, const RuntimeMethod* method);
// System.Void System.TimeZoneInfo/TransitionTime::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransitionTime_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m7531877356A7E49F851E7C075B15905C94DBA18B (TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A * __this, RuntimeObject * ___sender0, const RuntimeMethod* method);
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_mBE03953B805B6CE513241C7F4656F90DF5313979 (SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * __this, String_t* ___name0, uint8_t ___value1, const RuntimeMethod* method);
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m324F3E0B02B746D5F460499F5A25988FD608AD7B (SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method);
// System.Void System.TimeZoneInfo/TransitionTime::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransitionTime_System_Runtime_Serialization_ISerializable_GetObjectData_mF3DC458CCBC82FA8027E237CE05A4B3D44E6D614 (TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A * __this, SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ___info0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, const RuntimeMethod* method);
// System.Void System.TimeZoneInfo/TransitionTime::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransitionTime__ctor_mBE66AC04B8264C98E4EE51D0939F7CD57A3CBBC3 (TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A * __this, SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ___info0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, const RuntimeMethod* method);
// System.Void System.Threading.Timer/Scheduler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scheduler__ctor_mFA8C77435650B38315E392A0D1C66EC7DC974E82 (Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * __this, const RuntimeMethod* method);
// System.Void System.Threading.ManualResetEvent::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetEvent__ctor_mF80BD5B0955BDA8CD514F48EBFF48698E5D03850 (ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * __this, bool ___initialState0, const RuntimeMethod* method);
// System.Void System.Threading.Timer/TimerComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerComparer__ctor_mB4F0DB5CDEB7A6E93F59950E0FB1D19BB4BBA0B4 (TimerComparer_t1899647CFE875978843BE8ABA01C10956F1E740B * __this, const RuntimeMethod* method);
// System.Void System.Collections.SortedList::.ctor(System.Collections.IComparer,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedList__ctor_m0E1B0737647DC8D8B3E9FAD5F81168878E92E9F4 (SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 * __this, RuntimeObject* ___comparer0, int32_t ___capacity1, const RuntimeMethod* method);
// System.Void System.Threading.ThreadStart::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadStart__ctor_m360F4EED0AD96A27D6A9612BF79671F26B30411F (ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Threading.Thread::.ctor(System.Threading.ThreadStart)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread__ctor_mF22465F0D0E47C11EF25DB552D1047402750BE90 (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * __this, ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687 * ___start0, const RuntimeMethod* method);
// System.Void System.Threading.Thread::set_IsBackground(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_set_IsBackground_m8CAEC157A236A574FE83FDB22D693AB1681B01B0 (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Threading.Thread::Start()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Thread_Start_m490124B23F5EFD0BB2BED8CA12C77195B9CD9E1B (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4 (RuntimeObject * ___obj0, bool* ___lockTaken1, const RuntimeMethod* method);
// System.Int32 System.Threading.Timer/Scheduler::InternalRemove(System.Threading.Timer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scheduler_InternalRemove_m3154F260BA70D6D62BB855662FD4E59EBF25C538 (Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * __this, Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * ___timer0, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Threading.Timer/Scheduler::Add(System.Threading.Timer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scheduler_Add_m97B241DC232711E7C7D9057DA0BF7D657808D981 (Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * __this, Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * ___timer0, const RuntimeMethod* method);
// System.Boolean System.Threading.EventWaitHandle::Set()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventWaitHandle_Set_m81764C887F38A1153224557B26CD688B59987B38 (EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * __this, const RuntimeMethod* method);
// System.Int32 System.Threading.Timer/Scheduler::FindByDueTime(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scheduler_FindByDueTime_m97EC1ECDEE06ABC0ADD1CD8D4C3B6F057680F677 (Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * __this, int64_t ___nr0, const RuntimeMethod* method);
// System.Void System.Threading.TimerCallback::Invoke(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerCallback_Invoke_m1318C110BA930390E8F61C8BAAAC8F1CA8776CFD (TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814 * __this, RuntimeObject * ___state0, const RuntimeMethod* method);
// System.Threading.Thread System.Threading.Thread::get_CurrentThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * Thread_get_CurrentThread_m80236D2457FBCC1F76A08711E059A0B738DA71EC (const RuntimeMethod* method);
// System.Void System.Threading.Thread::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_set_Name_m920049DFD1306F42613F13CF7AD74C03661F4BAE (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Threading.Timer>::.ctor(System.Int32)
inline void List_1__ctor_m883AB85828B7C88FE9A8C7802E93E6CE979EA000 (List_1_t537143C180C9FB69517B6C26205D2AA824591563 * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t537143C180C9FB69517B6C26205D2AA824591563 *, int32_t, const RuntimeMethod*))List_1__ctor_mFEB2301A6F28290A828A979BA9CC847B16B3D538_gshared)(__this, ___capacity0, method);
}
// System.Int64 System.Threading.Timer::GetTimeMonotonic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Timer_GetTimeMonotonic_m085737FA1918F06DE8264E85C1C2B8DFF2B65298 (const RuntimeMethod* method);
// System.Boolean System.Threading.EventWaitHandle::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventWaitHandle_Reset_m535429D7CC172C0B95EB8B7B9126B3F3761E2D30 (EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * __this, const RuntimeMethod* method);
// System.Void System.Threading.WaitCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitCallback__ctor_m50EFFE5096DF1DE733EA9895CEEC8EB6F142D5D5 (WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Boolean System.Threading.ThreadPool::UnsafeQueueUserWorkItem(System.Threading.WaitCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR bool ThreadPool_UnsafeQueueUserWorkItem_m9B9388DD623D33685D415D639455591D4DD967C6 (WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319 * ___callBack0, RuntimeObject * ___state1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Threading.Timer>::Add(T)
inline void List_1_Add_mB29575CEA902024C74743A09C2AD6A27C71FA14C (List_1_t537143C180C9FB69517B6C26205D2AA824591563 * __this, Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t537143C180C9FB69517B6C26205D2AA824591563 *, Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Threading.Timer>::get_Count()
inline int32_t List_1_get_Count_m9F4CBA17931C03FCCABF06CE8F29187F98D1F260_inline (List_1_t537143C180C9FB69517B6C26205D2AA824591563 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t537143C180C9FB69517B6C26205D2AA824591563 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<System.Threading.Timer>::get_Item(System.Int32)
inline Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * List_1_get_Item_m9C036D14366E9BBB52436252522EDE206DC6EB35_inline (List_1_t537143C180C9FB69517B6C26205D2AA824591563 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * (*) (List_1_t537143C180C9FB69517B6C26205D2AA824591563 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<System.Threading.Timer>::Clear()
inline void List_1_Clear_mC1A3BC5C09490DE7BD41BBE1BFD81F870F508CC0 (List_1_t537143C180C9FB69517B6C26205D2AA824591563 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t537143C180C9FB69517B6C26205D2AA824591563 *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// System.Void System.Threading.Timer/Scheduler::ShrinkIfNeeded(System.Collections.Generic.List`1<System.Threading.Timer>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scheduler_ShrinkIfNeeded_m053057191CA310785B2C8EC2E8FB07A7E00E499C (Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * __this, List_1_t537143C180C9FB69517B6C26205D2AA824591563 * ___list0, int32_t ___initial1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Threading.Timer>::get_Capacity()
inline int32_t List_1_get_Capacity_mD0C25FAD6973D3D67381859E776ECAE953FDFD6B (List_1_t537143C180C9FB69517B6C26205D2AA824591563 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t537143C180C9FB69517B6C26205D2AA824591563 *, const RuntimeMethod*))List_1_get_Capacity_mE316E0DB641CFB093F0309D091D773047F81B2CC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Threading.Timer>::set_Capacity(System.Int32)
inline void List_1_set_Capacity_mEA0D56662D94226185342D2A0FD7C1860C5FFA7F (List_1_t537143C180C9FB69517B6C26205D2AA824591563 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t537143C180C9FB69517B6C26205D2AA824591563 *, int32_t, const RuntimeMethod*))List_1_set_Capacity_m7A81900F3492DE11874B0EA9A0E5454F897E3079_gshared)(__this, ___value0, method);
}
// System.Void System.TypeNames/ATypeName::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATypeName__ctor_m8F74703C78999B18C60B25DC9E5FAAFA777C48EC (ATypeName_t19F245ED1619C78770F92C899C4FE364DBF30861 * __this, const RuntimeMethod* method);
// System.String System.TypeIdentifiers/Display::GetInternalName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Display_GetInternalName_mD79548CF3F783D092209AED9C54C91E81DB87970 (Display_tB07FE33B5E37AC259B2FCC8EC820AC5CEDEAC41E * __this, const RuntimeMethod* method);
// System.String System.TypeSpec::UnescapeInternalName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TypeSpec_UnescapeInternalName_mA948D42382EE159391CEFB85748A7EFF37CE53A9 (String_t* ___displayName0, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Boolean System.TypeNames/ATypeName::Equals(System.TypeName)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ATypeName_Equals_m6BDE7D1613B8F351AC3DCB2C9BDE29C23A92CC22 (ATypeName_t19F245ED1619C78770F92C899C4FE364DBF30861 * __this, RuntimeObject* ___other0, const RuntimeMethod* method);
// System.Void System.Text.DecoderNLS::.ctor(System.Text.Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DecoderNLS__ctor_mC526CB146E620885CBC054C3921E27A7949B2046 (DecoderNLS_tE5B1B7D68B698C0B65FBEE94EAE2453FFD3D538A * __this, Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___encoding0, const RuntimeMethod* method);
// System.Void System.Text.DecoderNLS::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DecoderNLS__ctor_mDD4D4880457E73F1575479F8B309F9BB25BA0F4D (DecoderNLS_tE5B1B7D68B698C0B65FBEE94EAE2453FFD3D538A * __this, const RuntimeMethod* method);
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m3DF5B182A63FFCD12287E97EA38944D0C6405BB5 (SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * __this, String_t* ___name0, int32_t ___value1, const RuntimeMethod* method);
// System.Void System.Text.DecoderFallback::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DecoderFallback__ctor_m748C2C19AD4595C13154F9EEDF89AC2A2C10727E (DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * __this, const RuntimeMethod* method);
// System.Void System.Text.UTF7Encoding/DecoderUTF7FallbackBuffer::.ctor(System.Text.UTF7Encoding/DecoderUTF7Fallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DecoderUTF7FallbackBuffer__ctor_mFA2B62E208804BB64A4893F1F91D8481B5C5BCB0 (DecoderUTF7FallbackBuffer_tED3431DB4A6B4F48D1F1433A8E672F8B110D819A * __this, DecoderUTF7Fallback_tBEF9A09732FAB23368825AE7C14C0EBF1F9028A8 * ___fallback0, const RuntimeMethod* method);
// System.Void System.Text.DecoderFallbackBuffer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DecoderFallbackBuffer__ctor_m4944ABFBCC6CDED8F244EC1E5EA6B1F229C3495C (DecoderFallbackBuffer_t236B3D4172A9BAD1C2150ED78958227F8F20C94B * __this, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Text.EncoderNLS::.ctor(System.Text.Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncoderNLS__ctor_mF9B45DA23BADBDD417E3F741C6C9BB45F3021513 (EncoderNLS_tB071198C3F300408FDED1BD2C822F46A25115712 * __this, Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___encoding0, const RuntimeMethod* method);
// System.Void System.Text.EncoderNLS::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncoderNLS__ctor_m78E59E5DDEAE418A3936D0EAD2D2DB3D15E75CEF (EncoderNLS_tB071198C3F300408FDED1BD2C822F46A25115712 * __this, const RuntimeMethod* method);
// System.Void System.Text.UnicodeEncoding::.ctor(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnicodeEncoding__ctor_mE077368843CAFC47B2C4AFC3C771F5B51F3B8DD0 (UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68 * __this, bool ___bigEndian0, bool ___byteOrderMark1, const RuntimeMethod* method);
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m7B2342989B501DBA05C63C0D6E4FBD63541D4C38 (SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * __this, String_t* ___name0, Il2CppChar ___value1, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.IO.Stream/SynchronousAsyncResult/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m25FD09827E688A2665AA1918B69FB7B2421E8235 (U3CU3Ec_t0B9BA392160C64553C28F93C014479CD7CDC88CB * __this, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Threading.Tasks.SynchronizationContextAwaitTaskContinuation/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m30039D77EA05DE0D229AF6CBE4F4AAD4F0E6A452 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t97DE2C4F7EF16C425D7DB74D03F1E0947B3D9AF2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t97DE2C4F7EF16C425D7DB74D03F1E0947B3D9AF2 * L_0 = (U3CU3Ec_t97DE2C4F7EF16C425D7DB74D03F1E0947B3D9AF2 *)il2cpp_codegen_object_new(U3CU3Ec_t97DE2C4F7EF16C425D7DB74D03F1E0947B3D9AF2_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mE0E68B002589E98A89FB87B81F9B8277CE30869D(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t97DE2C4F7EF16C425D7DB74D03F1E0947B3D9AF2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t97DE2C4F7EF16C425D7DB74D03F1E0947B3D9AF2_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void System.Threading.Tasks.SynchronizationContextAwaitTaskContinuation/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mE0E68B002589E98A89FB87B81F9B8277CE30869D (U3CU3Ec_t97DE2C4F7EF16C425D7DB74D03F1E0947B3D9AF2 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.Tasks.SynchronizationContextAwaitTaskContinuation/<>c::<.cctor>b__7_0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__7_0_m0B62ED556B3855D4C64C5D7E638D6ED8AB0C4A88 (U3CU3Ec_t97DE2C4F7EF16C425D7DB74D03F1E0947B3D9AF2 * __this, RuntimeObject * ___state0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___state0;
		NullCheck(((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_0, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var)));
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_0, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
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
// System.Void System.Threading.Tasks.Task/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m8EBB2F0FB71AB397600480C3F6E471D40140962E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t92C182BCED0D720544B8BEB755769004B9E0CA12_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t92C182BCED0D720544B8BEB755769004B9E0CA12 * L_0 = (U3CU3Ec_t92C182BCED0D720544B8BEB755769004B9E0CA12 *)il2cpp_codegen_object_new(U3CU3Ec_t92C182BCED0D720544B8BEB755769004B9E0CA12_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m88F7758B7F22376D5BC85288C6471CCB85D812F2(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t92C182BCED0D720544B8BEB755769004B9E0CA12_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t92C182BCED0D720544B8BEB755769004B9E0CA12_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void System.Threading.Tasks.Task/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m88F7758B7F22376D5BC85288C6471CCB85D812F2 (U3CU3Ec_t92C182BCED0D720544B8BEB755769004B9E0CA12 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.Tasks.Task/<>c::<Delay>b__276_0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CDelayU3Eb__276_0_mC86A3448EBE6C0E9CA8FE4D6B4E43F673F291A04 (U3CU3Ec_t92C182BCED0D720544B8BEB755769004B9E0CA12 * __this, RuntimeObject * ___state0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DelayPromise_t9761A33FC8F83592A4D61777C23985D6958E25D8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___state0;
		NullCheck(((DelayPromise_t9761A33FC8F83592A4D61777C23985D6958E25D8 *)CastclassSealed((RuntimeObject*)L_0, DelayPromise_t9761A33FC8F83592A4D61777C23985D6958E25D8_il2cpp_TypeInfo_var)));
		DelayPromise_Complete_m7AA94F353994825D13EF0C75D5707B386B4A813C(((DelayPromise_t9761A33FC8F83592A4D61777C23985D6958E25D8 *)CastclassSealed((RuntimeObject*)L_0, DelayPromise_t9761A33FC8F83592A4D61777C23985D6958E25D8_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.Tasks.Task/<>c::<Delay>b__276_1(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CDelayU3Eb__276_1_mCFA5C90859E8A447B31869AC4AAA4EFABEE9C410 (U3CU3Ec_t92C182BCED0D720544B8BEB755769004B9E0CA12 * __this, RuntimeObject * ___state0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DelayPromise_t9761A33FC8F83592A4D61777C23985D6958E25D8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___state0;
		NullCheck(((DelayPromise_t9761A33FC8F83592A4D61777C23985D6958E25D8 *)CastclassSealed((RuntimeObject*)L_0, DelayPromise_t9761A33FC8F83592A4D61777C23985D6958E25D8_il2cpp_TypeInfo_var)));
		DelayPromise_Complete_m7AA94F353994825D13EF0C75D5707B386B4A813C(((DelayPromise_t9761A33FC8F83592A4D61777C23985D6958E25D8 *)CastclassSealed((RuntimeObject*)L_0, DelayPromise_t9761A33FC8F83592A4D61777C23985D6958E25D8_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return;
	}
}
// System.Threading.Tasks.Task/ContingentProperties System.Threading.Tasks.Task/<>c::<.cctor>b__295_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * U3CU3Ec_U3C_cctorU3Eb__295_0_m3B77CCC73A01400D2599B7301DD0F7F820903EDD (U3CU3Ec_t92C182BCED0D720544B8BEB755769004B9E0CA12 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * L_0 = (ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 *)il2cpp_codegen_object_new(ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0_il2cpp_TypeInfo_var);
		ContingentProperties__ctor_m78940CF3290806990B2F081F86C42783A0533896(L_0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean System.Threading.Tasks.Task/<>c::<.cctor>b__295_1(System.Threading.Tasks.Task)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3C_cctorU3Eb__295_1_m4A438C0B1A5F36DA7DFC29B60D8206D312885AA9 (U3CU3Ec_t92C182BCED0D720544B8BEB755769004B9E0CA12 * __this, Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___t0, const RuntimeMethod* method)
{
	{
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_0 = ___t0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Task_get_IsExceptionObservedByParent_m93E14B9BEB66F98452C322294ED443AA889F85A7(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean System.Threading.Tasks.Task/<>c::<.cctor>b__295_2(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3C_cctorU3Eb__295_2_mE00B624125AD99C97AE308F825F34C085CB00284 (U3CU3Ec_t92C182BCED0D720544B8BEB755769004B9E0CA12 * __this, RuntimeObject * ___tc0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___tc0;
		return (bool)((((RuntimeObject*)(RuntimeObject *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
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
// System.Void System.Threading.Tasks.Task/<>c__DisplayClass178_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass178_0__ctor_m2709CC81258C868A16AE0A5DCB0A8000897474CA (U3CU3Ec__DisplayClass178_0_t26DA6AADD06D410B9511EEAE86E81BB72E13577B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.Tasks.Task/<>c__DisplayClass178_0::<ExecuteSelfReplicating>b__0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass178_0_U3CExecuteSelfReplicatingU3Eb__0_m12E23E8B74898BCBFBDB813657213652BC4360AB (U3CU3Ec__DisplayClass178_0_t26DA6AADD06D410B9511EEAE86E81BB72E13577B * __this, RuntimeObject * ___U3Cp0U3E0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * V_0 = NULL;
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * V_3 = NULL;
	Exception_t * V_4 = NULL;
	ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * V_5 = NULL;
	Exception_t * V_6 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_0;
		L_0 = Task_get_InternalCurrent_m557FDDC9AA0F289D2E00266B3E231DF5299A719D_inline(/*hidden argument*/NULL);
		V_0 = L_0;
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_1 = V_0;
		NullCheck(L_1);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_2;
		L_2 = VirtFuncInvoker0< Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * >::Invoke(17 /* System.Threading.Tasks.Task System.Threading.Tasks.Task::get_HandedOverChildReplica() */, L_1);
		V_1 = L_2;
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_3 = V_1;
		if (L_3)
		{
			goto IL_0085;
		}
	}
	{
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_4 = __this->get_root_0();
		NullCheck(L_4);
		bool L_5;
		L_5 = VirtFuncInvoker0< bool >::Invoke(13 /* System.Boolean System.Threading.Tasks.Task::ShouldReplicate() */, L_4);
		if (L_5)
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		bool* L_6 = __this->get_address_of_replicasAreQuitting_1();
		bool L_7;
		L_7 = VolatileRead((bool*)L_6);
		if (!L_7)
		{
			goto IL_002c;
		}
	}
	{
		return;
	}

IL_002c:
	{
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_8 = __this->get_root_0();
		NullCheck(L_8);
		ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * L_9;
		L_9 = Task_get_CapturedContext_m1F34ADF8839D17A2D3ED72A19AF269A6CB47BA11(L_8, /*hidden argument*/NULL);
		V_3 = L_9;
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_10 = __this->get_root_0();
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_11 = __this->get_taskReplicaDelegate_2();
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_12 = __this->get_root_0();
		NullCheck(L_12);
		RuntimeObject * L_13 = L_12->get_m_stateObject_6();
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_14 = __this->get_root_0();
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_15 = __this->get_root_0();
		NullCheck(L_15);
		TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * L_16;
		L_16 = Task_get_ExecutingTaskScheduler_m95D238D843CD999FD8899BF6A98F5E84F4212C4C_inline(L_15, /*hidden argument*/NULL);
		int32_t L_17 = __this->get_creationOptionsForReplicas_3();
		int32_t L_18 = __this->get_internalOptionsForReplicas_4();
		NullCheck(L_10);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_19;
		L_19 = VirtFuncInvoker6< Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *, Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *, RuntimeObject *, Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *, TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D *, int32_t, int32_t >::Invoke(14 /* System.Threading.Tasks.Task System.Threading.Tasks.Task::CreateReplicaTask(System.Action`1<System.Object>,System.Object,System.Threading.Tasks.Task,System.Threading.Tasks.TaskScheduler,System.Threading.Tasks.TaskCreationOptions,System.Threading.Tasks.InternalTaskOptions) */, L_10, L_11, L_13, L_14, L_16, L_17, L_18);
		V_1 = L_19;
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_20 = V_1;
		ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * L_21 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * L_22;
		L_22 = Task_CopyExecutionContext_m7C28024C0D80F35735C462BC120605C775D2D515(L_21, /*hidden argument*/NULL);
		NullCheck(L_20);
		Task_set_CapturedContext_m225BD08A66090C8F18C3D60BC24A95427BC3270B(L_20, L_22, /*hidden argument*/NULL);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_23 = V_1;
		NullCheck(L_23);
		Task_ScheduleAndStart_m8B0BB3CA33030ADE7C6873A4F2CEEC7D50A070CB(L_23, (bool)0, /*hidden argument*/NULL);
	}

IL_0085:
	{
	}

IL_0086:
	try
	{ // begin try (depth: 1)
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_24 = __this->get_root_0();
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_25 = V_0;
		NullCheck(L_24);
		Task_InnerInvokeWithArg_m9034746B1D674E7F70ED323DDF3BD6B73A80E2E0(L_24, L_25, /*hidden argument*/NULL);
		goto IL_00b6;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0094;
		}
		throw e;
	}

CATCH_0094:
	{ // begin catch(System.Exception)
		{
			V_4 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_26 = __this->get_root_0();
			Exception_t * L_27 = V_4;
			NullCheck(L_26);
			Task_HandleException_m516F404205F109E8518A15005828E94C39152D82(L_26, L_27, /*hidden argument*/NULL);
			Exception_t * L_28 = V_4;
			if (!((ThreadAbortException_t16772A32C3654FCFF0399F11874CB783CC51C153 *)IsInstSealed((RuntimeObject*)L_28, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThreadAbortException_t16772A32C3654FCFF0399F11874CB783CC51C153_il2cpp_TypeInfo_var)))))
			{
				goto IL_00b4;
			}
		}

IL_00ac:
		{
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_29 = V_0;
			NullCheck(L_29);
			Task_FinishThreadAbortedTask_mD4E2816A8E8E8D547EF8C727AD3FCE47D5E797B0(L_29, (bool)0, (bool)1, /*hidden argument*/NULL);
		}

IL_00b4:
		{
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_00b6;
		}
	} // end catch (depth: 1)

IL_00b6:
	{
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_30 = V_0;
		NullCheck(L_30);
		RuntimeObject * L_31;
		L_31 = VirtFuncInvoker0< RuntimeObject * >::Invoke(15 /* System.Object System.Threading.Tasks.Task::get_SavedStateForNextReplica() */, L_30);
		V_2 = L_31;
		RuntimeObject * L_32 = V_2;
		if (!L_32)
		{
			goto IL_0128;
		}
	}
	{
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_33 = __this->get_root_0();
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_34 = __this->get_taskReplicaDelegate_2();
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_35 = __this->get_root_0();
		NullCheck(L_35);
		RuntimeObject * L_36 = L_35->get_m_stateObject_6();
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_37 = __this->get_root_0();
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_38 = __this->get_root_0();
		NullCheck(L_38);
		TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * L_39;
		L_39 = Task_get_ExecutingTaskScheduler_m95D238D843CD999FD8899BF6A98F5E84F4212C4C_inline(L_38, /*hidden argument*/NULL);
		int32_t L_40 = __this->get_creationOptionsForReplicas_3();
		int32_t L_41 = __this->get_internalOptionsForReplicas_4();
		NullCheck(L_33);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_42;
		L_42 = VirtFuncInvoker6< Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *, Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *, RuntimeObject *, Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *, TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D *, int32_t, int32_t >::Invoke(14 /* System.Threading.Tasks.Task System.Threading.Tasks.Task::CreateReplicaTask(System.Action`1<System.Object>,System.Object,System.Threading.Tasks.Task,System.Threading.Tasks.TaskScheduler,System.Threading.Tasks.TaskCreationOptions,System.Threading.Tasks.InternalTaskOptions) */, L_33, L_34, L_36, L_37, L_39, L_40, L_41);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_43 = __this->get_root_0();
		NullCheck(L_43);
		ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * L_44;
		L_44 = Task_get_CapturedContext_m1F34ADF8839D17A2D3ED72A19AF269A6CB47BA11(L_43, /*hidden argument*/NULL);
		V_5 = L_44;
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_45 = L_42;
		ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * L_46 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * L_47;
		L_47 = Task_CopyExecutionContext_m7C28024C0D80F35735C462BC120605C775D2D515(L_46, /*hidden argument*/NULL);
		NullCheck(L_45);
		Task_set_CapturedContext_m225BD08A66090C8F18C3D60BC24A95427BC3270B(L_45, L_47, /*hidden argument*/NULL);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_48 = L_45;
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_49 = V_1;
		NullCheck(L_48);
		VirtActionInvoker1< Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * >::Invoke(18 /* System.Void System.Threading.Tasks.Task::set_HandedOverChildReplica(System.Threading.Tasks.Task) */, L_48, L_49);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_50 = L_48;
		RuntimeObject * L_51 = V_2;
		NullCheck(L_50);
		VirtActionInvoker1< RuntimeObject * >::Invoke(16 /* System.Void System.Threading.Tasks.Task::set_SavedStateFromPreviousReplica(System.Object) */, L_50, L_51);
		NullCheck(L_50);
		Task_ScheduleAndStart_m8B0BB3CA33030ADE7C6873A4F2CEEC7D50A070CB(L_50, (bool)0, /*hidden argument*/NULL);
		return;
	}

IL_0128:
	{
		__this->set_replicasAreQuitting_1((bool)1);
	}

IL_012f:
	try
	{ // begin try (depth: 1)
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_52 = V_1;
		NullCheck(L_52);
		bool L_53;
		L_53 = Task_InternalCancel_m7B57FC75E03B2466152070C8A27AB8B2CBF9B106(L_52, (bool)1, /*hidden argument*/NULL);
		goto IL_014a;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0139;
		}
		throw e;
	}

CATCH_0139:
	{ // begin catch(System.Exception)
		V_6 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_54 = __this->get_root_0();
		Exception_t * L_55 = V_6;
		NullCheck(L_54);
		Task_HandleException_m516F404205F109E8518A15005828E94C39152D82(L_54, L_55, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_014a;
	} // end catch (depth: 1)

IL_014a:
	{
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
// System.Void System.Threading.Tasks.Task/ContingentProperties::SetCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContingentProperties_SetCompleted_m44A115EBFE52BF43F884D212036223DF50F8A591 (ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * __this, const RuntimeMethod* method)
{
	ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E * V_0 = NULL;
	{
		ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E * L_0 = __this->get_m_completionEvent_1();
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E * L_2 = V_0;
		NullCheck(L_2);
		ManualResetEventSlim_Set_m088BFECDA60A46336CBA4E5FF1696D99CB8786FE(L_2, /*hidden argument*/NULL);
	}

IL_0012:
	{
		return;
	}
}
// System.Void System.Threading.Tasks.Task/ContingentProperties::DeregisterCancellationCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContingentProperties_DeregisterCancellationCallback_m7DCD41EE69408CDA3517899D459742622D1E8A12 (ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * __this, const RuntimeMethod* method)
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		Shared_1_t333C4F81656CB6CBFC971E543F8E9995A08F400B * L_0 = __this->get_m_cancellationRegistration_4();
		if (!L_0)
		{
			goto IL_0024;
		}
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		Shared_1_t333C4F81656CB6CBFC971E543F8E9995A08F400B * L_1 = __this->get_m_cancellationRegistration_4();
		NullCheck(L_1);
		CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A * L_2 = L_1->get_address_of_Value_0();
		CancellationTokenRegistration_Dispose_mAE8E6F50C883B44EFF2F74E9EA4AD31E9571743F((CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A *)L_2, /*hidden argument*/NULL);
		goto IL_001d;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_001a;
		}
		throw e;
	}

CATCH_001a:
	{ // begin catch(System.ObjectDisposedException)
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_001d;
	} // end catch (depth: 1)

IL_001d:
	{
		__this->set_m_cancellationRegistration_4((Shared_1_t333C4F81656CB6CBFC971E543F8E9995A08F400B *)NULL);
	}

IL_0024:
	{
		return;
	}
}
// System.Void System.Threading.Tasks.Task/ContingentProperties::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContingentProperties__ctor_m78940CF3290806990B2F081F86C42783A0533896 (ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * __this, const RuntimeMethod* method)
{
	{
		il2cpp_codegen_memory_barrier();
		__this->set_m_completionCountdown_6(1);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void System.Threading.Tasks.Task/DelayPromise::.ctor(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelayPromise__ctor_m3A5D9D3BEE920EAB2987556F44E61F05C5531911 (DelayPromise_t9761A33FC8F83592A4D61777C23985D6958E25D8 * __this, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___token0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1__ctor_mCE309147068C1ECA3D92C5133444D805F5B04AF1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBB31482D41D285020BA23976960A4694899C4A4);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3_il2cpp_TypeInfo_var);
		Task_1__ctor_mCE309147068C1ECA3D92C5133444D805F5B04AF1(__this, /*hidden argument*/Task_1__ctor_mCE309147068C1ECA3D92C5133444D805F5B04AF1_RuntimeMethod_var);
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_0 = ___token0;
		__this->set_Token_25(L_0);
		bool L_1;
		L_1 = AsyncCausalityTracer_get_LoggingOn_mE0A03E121425371B1D1B65640172137C3B8EEA15(/*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_2;
		L_2 = Task_get_Id_m34DAC27D91939B78DCD73A26085505A0B4D7235C(__this, /*hidden argument*/NULL);
		AsyncCausalityTracer_TraceOperationCreation_m3A018DC27992C4559B10283C06CC11513825898A(0, L_2, _stringLiteralBBB31482D41D285020BA23976960A4694899C4A4, ((int64_t)((int64_t)0)), /*hidden argument*/NULL);
	}

IL_0027:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		bool L_3 = ((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields*)il2cpp_codegen_static_fields_for(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var))->get_s_asyncDebuggingEnabled_12();
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Task_AddToActiveTasks_m29D7B0C1AD029D86736A92EC7E36BE87209748FD(__this, /*hidden argument*/NULL);
	}

IL_0035:
	{
		return;
	}
}
// System.Void System.Threading.Tasks.Task/DelayPromise::Complete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelayPromise_Complete_m7AA94F353994825D13EF0C75D5707B386B4A813C (DelayPromise_t9761A33FC8F83592A4D61777C23985D6958E25D8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_TrySetCanceled_mB49D47FE8A080526EB1C12CA90F19C58ACADD931_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_TrySetResult_m0D282AA0AA9602D0FCFA46141CEEAAE8533D2788_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  V_1;
	memset((&V_1), 0, sizeof(V_1));
	VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_0 = __this->get_Token_25();
		V_1 = L_0;
		bool L_1;
		L_1 = CancellationToken_get_IsCancellationRequested_mC0A51CBEAEDE8789A0D04A79B20884ADABEB0D90((CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD *)(&V_1), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_2 = __this->get_Token_25();
		bool L_3;
		L_3 = Task_1_TrySetCanceled_mB49D47FE8A080526EB1C12CA90F19C58ACADD931(__this, L_2, /*hidden argument*/Task_1_TrySetCanceled_mB49D47FE8A080526EB1C12CA90F19C58ACADD931_RuntimeMethod_var);
		V_0 = L_3;
		goto IL_0055;
	}

IL_001f:
	{
		bool L_4;
		L_4 = AsyncCausalityTracer_get_LoggingOn_mE0A03E121425371B1D1B65640172137C3B8EEA15(/*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_5;
		L_5 = Task_get_Id_m34DAC27D91939B78DCD73A26085505A0B4D7235C(__this, /*hidden argument*/NULL);
		AsyncCausalityTracer_TraceOperationCompletion_m0C6FCD513830A060B436A11137CE4C7B114F26FC(0, L_5, 1, /*hidden argument*/NULL);
	}

IL_0033:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		bool L_6 = ((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields*)il2cpp_codegen_static_fields_for(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var))->get_s_asyncDebuggingEnabled_12();
		if (!L_6)
		{
			goto IL_0045;
		}
	}
	{
		int32_t L_7;
		L_7 = Task_get_Id_m34DAC27D91939B78DCD73A26085505A0B4D7235C(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		Task_RemoveFromActiveTasks_m04918871919D56DC087D50937093E8FA992CAE3F(L_7, /*hidden argument*/NULL);
	}

IL_0045:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004 ));
		VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004  L_8 = V_2;
		bool L_9;
		L_9 = Task_1_TrySetResult_m0D282AA0AA9602D0FCFA46141CEEAAE8533D2788(__this, L_8, /*hidden argument*/Task_1_TrySetResult_m0D282AA0AA9602D0FCFA46141CEEAAE8533D2788_RuntimeMethod_var);
		V_0 = L_9;
	}

IL_0055:
	{
		bool L_10 = V_0;
		if (!L_10)
		{
			goto IL_0076;
		}
	}
	{
		Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_11 = __this->get_Timer_27();
		if (!L_11)
		{
			goto IL_006b;
		}
	}
	{
		Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_12 = __this->get_Timer_27();
		NullCheck(L_12);
		Timer_Dispose_m89DE06BE1C2F2AF372D469826A0AA3560665B571(L_12, /*hidden argument*/NULL);
	}

IL_006b:
	{
		CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A * L_13 = __this->get_address_of_Registration_26();
		CancellationTokenRegistration_Dispose_mAE8E6F50C883B44EFF2F74E9EA4AD31E9571743F((CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A *)L_13, /*hidden argument*/NULL);
	}

IL_0076:
	{
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
// System.Void System.Threading.Tasks.Task/SetOnInvokeMres::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetOnInvokeMres__ctor_m8CE5594E4DDB4DAB7199114339D9D74A93EABD6F (SetOnInvokeMres_t1C10274710F867516EE9E1EC3ABF0BA5EEF9ABAD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E_il2cpp_TypeInfo_var);
		ManualResetEventSlim__ctor_m06178709FE4A098D061C4B414FD72FA900AA9E4F(__this, (bool)0, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.Tasks.Task/SetOnInvokeMres::Invoke(System.Threading.Tasks.Task)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetOnInvokeMres_Invoke_mDA6456006F17511CC08E631BA7A180F125BF31B7 (SetOnInvokeMres_t1C10274710F867516EE9E1EC3ABF0BA5EEF9ABAD * __this, Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___completingTask0, const RuntimeMethod* method)
{
	{
		ManualResetEventSlim_Set_m088BFECDA60A46336CBA4E5FF1696D99CB8786FE(__this, /*hidden argument*/NULL);
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
// System.Void System.Threading.Tasks.TaskFactory/CompleteOnInvokePromise::.ctor(System.Collections.Generic.IList`1<System.Threading.Tasks.Task>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompleteOnInvokePromise__ctor_m01E9A704FD15B314769F6A1BA0FF765C53C2D751 (CompleteOnInvokePromise_tCEBDCB9BD36D0EF373E5ACBC9262935A6EED4C18 * __this, RuntimeObject* ___tasks0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1__ctor_m2FE7FA66D68629FF8472B1548D3760C56B736AF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_t24E932728D4BE67BFA41487F43AE4FAEBBAC7284_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral431A6DC9FA01E172478A6640BA406614BE30DE93);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Task_1_t24E932728D4BE67BFA41487F43AE4FAEBBAC7284_il2cpp_TypeInfo_var);
		Task_1__ctor_m2FE7FA66D68629FF8472B1548D3760C56B736AF3(__this, /*hidden argument*/Task_1__ctor_m2FE7FA66D68629FF8472B1548D3760C56B736AF3_RuntimeMethod_var);
		RuntimeObject* L_0 = ___tasks0;
		__this->set__tasks_25(L_0);
		bool L_1;
		L_1 = AsyncCausalityTracer_get_LoggingOn_mE0A03E121425371B1D1B65640172137C3B8EEA15(/*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_2;
		L_2 = Task_get_Id_m34DAC27D91939B78DCD73A26085505A0B4D7235C(__this, /*hidden argument*/NULL);
		AsyncCausalityTracer_TraceOperationCreation_m3A018DC27992C4559B10283C06CC11513825898A(0, L_2, _stringLiteral431A6DC9FA01E172478A6640BA406614BE30DE93, ((int64_t)((int64_t)0)), /*hidden argument*/NULL);
	}

IL_0027:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		bool L_3 = ((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields*)il2cpp_codegen_static_fields_for(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var))->get_s_asyncDebuggingEnabled_12();
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Task_AddToActiveTasks_m29D7B0C1AD029D86736A92EC7E36BE87209748FD(__this, /*hidden argument*/NULL);
	}

IL_0035:
	{
		return;
	}
}
// System.Void System.Threading.Tasks.TaskFactory/CompleteOnInvokePromise::Invoke(System.Threading.Tasks.Task)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompleteOnInvokePromise_Invoke_m18B7ECE0269649D7BB3FF6A39ED8066D22B7ED1D (CompleteOnInvokePromise_tCEBDCB9BD36D0EF373E5ACBC9262935A6EED4C18 * __this, Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___completingTask0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t170EC74C9EBD063821F8431C6A942A9387BC7BAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_tE4D1BB8BFE34E53959D1BBDB304176E3D5816699_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_TrySetResult_m6795B42289D80646AF4939781DEEF626F532726D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * V_3 = NULL;
	{
		int32_t* L_0 = __this->get_address_of_m_firstTaskAlreadyCompleted_26();
		int32_t L_1;
		L_1 = Interlocked_CompareExchange_m317AD9524376B7BE74DD9069346E345F2B131382((int32_t*)L_0, 1, 0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0085;
		}
	}
	{
		bool L_2;
		L_2 = AsyncCausalityTracer_get_LoggingOn_mE0A03E121425371B1D1B65640172137C3B8EEA15(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_3;
		L_3 = Task_get_Id_m34DAC27D91939B78DCD73A26085505A0B4D7235C(__this, /*hidden argument*/NULL);
		AsyncCausalityTracer_TraceOperationRelation_m02292CC8909AD62A9B3292C224943E396AC1821E(1, L_3, 2, /*hidden argument*/NULL);
		int32_t L_4;
		L_4 = Task_get_Id_m34DAC27D91939B78DCD73A26085505A0B4D7235C(__this, /*hidden argument*/NULL);
		AsyncCausalityTracer_TraceOperationCompletion_m0C6FCD513830A060B436A11137CE4C7B114F26FC(0, L_4, 1, /*hidden argument*/NULL);
	}

IL_0030:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		bool L_5 = ((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields*)il2cpp_codegen_static_fields_for(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var))->get_s_asyncDebuggingEnabled_12();
		if (!L_5)
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_6;
		L_6 = Task_get_Id_m34DAC27D91939B78DCD73A26085505A0B4D7235C(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		Task_RemoveFromActiveTasks_m04918871919D56DC087D50937093E8FA992CAE3F(L_6, /*hidden argument*/NULL);
	}

IL_0042:
	{
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_7 = ___completingTask0;
		bool L_8;
		L_8 = Task_1_TrySetResult_m6795B42289D80646AF4939781DEEF626F532726D(__this, L_7, /*hidden argument*/Task_1_TrySetResult_m6795B42289D80646AF4939781DEEF626F532726D_RuntimeMethod_var);
		RuntimeObject* L_9 = __this->get__tasks_25();
		V_0 = L_9;
		RuntimeObject* L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Threading.Tasks.Task>::get_Count() */, ICollection_1_t170EC74C9EBD063821F8431C6A942A9387BC7BAB_il2cpp_TypeInfo_var, L_10);
		V_1 = L_11;
		V_2 = 0;
		goto IL_007a;
	}

IL_005c:
	{
		RuntimeObject* L_12 = V_0;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_14;
		L_14 = InterfaceFuncInvoker1< Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<System.Threading.Tasks.Task>::get_Item(System.Int32) */, IList_1_tE4D1BB8BFE34E53959D1BBDB304176E3D5816699_il2cpp_TypeInfo_var, L_12, L_13);
		V_3 = L_14;
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_15 = V_3;
		if (!L_15)
		{
			goto IL_0076;
		}
	}
	{
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_16 = V_3;
		NullCheck(L_16);
		bool L_17;
		L_17 = Task_get_IsCompleted_m7EF73EE6C4F400997345371FFB10137D8E9B4E1E(L_16, /*hidden argument*/NULL);
		if (L_17)
		{
			goto IL_0076;
		}
	}
	{
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_18 = V_3;
		NullCheck(L_18);
		Task_RemoveContinuation_m94A37A95DB74604DD0B72D23D007C205B2FE6F41(L_18, __this, /*hidden argument*/NULL);
	}

IL_0076:
	{
		int32_t L_19 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_007a:
	{
		int32_t L_20 = V_2;
		int32_t L_21 = V_1;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_005c;
		}
	}
	{
		__this->set__tasks_25((RuntimeObject*)NULL);
	}

IL_0085:
	{
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
// System.Void System.Threading.Tasks.TaskScheduler/SystemThreadingTasks_TaskSchedulerDebugView::.ctor(System.Threading.Tasks.TaskScheduler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemThreadingTasks_TaskSchedulerDebugView__ctor_m7283389831753300608C0B2152424A9DC3EDE2F1 (SystemThreadingTasks_TaskSchedulerDebugView_t27B3B8AEFC0238C9F9C58E238DA86DCC58279612 * __this, TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___scheduler0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * L_0 = ___scheduler0;
		__this->set_m_taskScheduler_0(L_0);
		return;
	}
}
// System.Int32 System.Threading.Tasks.TaskScheduler/SystemThreadingTasks_TaskSchedulerDebugView::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemThreadingTasks_TaskSchedulerDebugView_get_Id_m04047BC3B1600A41A2D672D203C45F8D0D25A4AB (SystemThreadingTasks_TaskSchedulerDebugView_t27B3B8AEFC0238C9F9C58E238DA86DCC58279612 * __this, const RuntimeMethod* method)
{
	{
		TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * L_0 = __this->get_m_taskScheduler_0();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = TaskScheduler_get_Id_m2DC6D2CF6E1D683698EDBE0EA8CEB7E27919FA3F(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Threading.Tasks.Task> System.Threading.Tasks.TaskScheduler/SystemThreadingTasks_TaskSchedulerDebugView::get_ScheduledTasks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SystemThreadingTasks_TaskSchedulerDebugView_get_ScheduledTasks_mF212B0D469CFD36FBAC8C43A11528A829DFAC50B (SystemThreadingTasks_TaskSchedulerDebugView_t27B3B8AEFC0238C9F9C58E238DA86DCC58279612 * __this, const RuntimeMethod* method)
{
	{
		TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * L_0 = __this->get_m_taskScheduler_0();
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = VirtFuncInvoker0< RuntimeObject* >::Invoke(6 /* System.Collections.Generic.IEnumerable`1<System.Threading.Tasks.Task> System.Threading.Tasks.TaskScheduler::GetScheduledTasks() */, L_0);
		return L_1;
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
// System.Void System.Threading.Tasks.TaskSchedulerAwaitTaskContinuation/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m99290C1E2AC6E20C97FB116B7ED28FF371CB8486 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t832C49A1D40F5D7429F13CAA78ADF77459CA87FE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t832C49A1D40F5D7429F13CAA78ADF77459CA87FE * L_0 = (U3CU3Ec_t832C49A1D40F5D7429F13CAA78ADF77459CA87FE *)il2cpp_codegen_object_new(U3CU3Ec_t832C49A1D40F5D7429F13CAA78ADF77459CA87FE_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mDCDFB12A1CFECE84AEA46CDFB77A67EED2876908(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t832C49A1D40F5D7429F13CAA78ADF77459CA87FE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t832C49A1D40F5D7429F13CAA78ADF77459CA87FE_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void System.Threading.Tasks.TaskSchedulerAwaitTaskContinuation/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mDCDFB12A1CFECE84AEA46CDFB77A67EED2876908 (U3CU3Ec_t832C49A1D40F5D7429F13CAA78ADF77459CA87FE * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.Tasks.TaskSchedulerAwaitTaskContinuation/<>c::<Run>b__2_0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CRunU3Eb__2_0_mB045B5DF114E6640C1B2744806A379BB8ADEE951 (U3CU3Ec_t832C49A1D40F5D7429F13CAA78ADF77459CA87FE * __this, RuntimeObject * ___state0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		RuntimeObject * L_0 = ___state0;
		NullCheck(((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_0, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var)));
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_0, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		goto IL_0014;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_000d;
		}
		throw e;
	}

CATCH_000d:
	{ // begin catch(System.Exception)
		AwaitTaskContinuation_ThrowAsyncIfNecessary_mA92F6B1DD1757CDAAF066A7F55ED9575D2DFD293(((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *)), /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0014;
	} // end catch (depth: 1)

IL_0014:
	{
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
// System.Void System.IO.TextReader/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m257A78A363CA7A4B4296A74188D0E5D8A7C90B0F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t5ECA46CBAA9AA77646C20CB57E986587D87A71BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t5ECA46CBAA9AA77646C20CB57E986587D87A71BF * L_0 = (U3CU3Ec_t5ECA46CBAA9AA77646C20CB57E986587D87A71BF *)il2cpp_codegen_object_new(U3CU3Ec_t5ECA46CBAA9AA77646C20CB57E986587D87A71BF_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mD0B5ABBD8C044099D82A52E34C40524ECC4E5CB0(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t5ECA46CBAA9AA77646C20CB57E986587D87A71BF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t5ECA46CBAA9AA77646C20CB57E986587D87A71BF_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void System.IO.TextReader/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mD0B5ABBD8C044099D82A52E34C40524ECC4E5CB0 (U3CU3Ec_t5ECA46CBAA9AA77646C20CB57E986587D87A71BF * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String System.IO.TextReader/<>c::<.cctor>b__22_0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3C_cctorU3Eb__22_0_m8B1950498E03CD4157A33D0ADEE773F1A14C4BC5 (U3CU3Ec_t5ECA46CBAA9AA77646C20CB57E986587D87A71BF * __this, RuntimeObject * ___state0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___state0;
		NullCheck(((TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F *)CastclassClass((RuntimeObject*)L_0, TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_il2cpp_TypeInfo_var)));
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(12 /* System.String System.IO.TextReader::ReadLine() */, ((TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F *)CastclassClass((RuntimeObject*)L_0, TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_il2cpp_TypeInfo_var)));
		return L_1;
	}
}
// System.Int32 System.IO.TextReader/<>c::<.cctor>b__22_1(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3C_cctorU3Eb__22_1_m3D99D7166F51F47A5F56748216153A5AA8632443 (U3CU3Ec_t5ECA46CBAA9AA77646C20CB57E986587D87A71BF * __this, RuntimeObject * ___state0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_4_get_Item1_m94F53C4967C93EF0E383CF30D29E7D45111BB1CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_4_get_Item2_m3D91D1A59E47371BF6761E4B8111DE2646ABCD59_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_4_get_Item3_mB491A91FB7CA996232B01C7E2EC571605A9C6C2D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_4_get_Item4_mA5A7B9AEC93D270D9CB237F89C023BDF08E90350_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_4_t16778489594C50623A8E8690A84D09A8BB36D31E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Tuple_4_t16778489594C50623A8E8690A84D09A8BB36D31E * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___state0;
		V_0 = ((Tuple_4_t16778489594C50623A8E8690A84D09A8BB36D31E *)CastclassClass((RuntimeObject*)L_0, Tuple_4_t16778489594C50623A8E8690A84D09A8BB36D31E_il2cpp_TypeInfo_var));
		Tuple_4_t16778489594C50623A8E8690A84D09A8BB36D31E * L_1 = V_0;
		NullCheck(L_1);
		TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * L_2;
		L_2 = Tuple_4_get_Item1_m94F53C4967C93EF0E383CF30D29E7D45111BB1CC_inline(L_1, /*hidden argument*/Tuple_4_get_Item1_m94F53C4967C93EF0E383CF30D29E7D45111BB1CC_RuntimeMethod_var);
		Tuple_4_t16778489594C50623A8E8690A84D09A8BB36D31E * L_3 = V_0;
		NullCheck(L_3);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_4;
		L_4 = Tuple_4_get_Item2_m3D91D1A59E47371BF6761E4B8111DE2646ABCD59_inline(L_3, /*hidden argument*/Tuple_4_get_Item2_m3D91D1A59E47371BF6761E4B8111DE2646ABCD59_RuntimeMethod_var);
		Tuple_4_t16778489594C50623A8E8690A84D09A8BB36D31E * L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Tuple_4_get_Item3_mB491A91FB7CA996232B01C7E2EC571605A9C6C2D_inline(L_5, /*hidden argument*/Tuple_4_get_Item3_mB491A91FB7CA996232B01C7E2EC571605A9C6C2D_RuntimeMethod_var);
		Tuple_4_t16778489594C50623A8E8690A84D09A8BB36D31E * L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = Tuple_4_get_Item4_mA5A7B9AEC93D270D9CB237F89C023BDF08E90350_inline(L_7, /*hidden argument*/Tuple_4_get_Item4_mA5A7B9AEC93D270D9CB237F89C023BDF08E90350_RuntimeMethod_var);
		NullCheck(L_2);
		int32_t L_9;
		L_9 = VirtFuncInvoker3< int32_t, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*, int32_t, int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read(System.Char[],System.Int32,System.Int32) */, L_2, L_4, L_6, L_8);
		return L_9;
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
// System.Void System.IO.TextReader/<ReadToEndAsync>d__14::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReadToEndAsyncU3Ed__14_MoveNext_m52916E41018117AF76E19621E9D9241F3370FB1E (U3CReadToEndAsyncU3Ed__14_tD16259CAE393A0DA787F6304386A41E7F88A1B45 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2_TisU3CReadToEndAsyncU3Ed__14_tD16259CAE393A0DA787F6304386A41E7F88A1B45_m2C52B14607DF9BDF2A7044E5BF355C1F7189DA2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_mED41A75B510B80C4E8D4766516ABB37736D7ADF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaitable_1_GetAwaiter_m8FA39505FC2099C60148C0F029CB49792690A0D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaiter_GetResult_m0927E49E03619C51620F396FE1DD5DBD41AC6681_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaiter_get_IsCompleted_m4192DC0E89B48FF93421FFF4EB52C21C42687999_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_ConfigureAwait_m9637E2990F98EDC90D1A03B57A4954CE2171C4E2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * V_1 = NULL;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2  V_4;
	memset((&V_4), 0, sizeof(V_4));
	ConfiguredTaskAwaitable_1_t95CB4612A5B70DDFE0643FA38A73D6B984DD68EC  V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	Exception_t * V_7 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * L_1 = __this->get_U3CU3E4__this_5();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_009f;
			}
		}

IL_0014:
		{
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_3 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)((int32_t)4096));
			__this->set_U3CcharsU3E5__2_3(L_3);
			StringBuilder_t * L_4 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
			StringBuilder__ctor_mEDFFE2D378A15F6DAB54D52661C84C1B52E7BA2E(L_4, ((int32_t)4096), /*hidden argument*/NULL);
			__this->set_U3CsbU3E5__1_2(L_4);
			goto IL_004f;
		}

IL_0036:
		{
			StringBuilder_t * L_5 = __this->get_U3CsbU3E5__1_2();
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_6 = __this->get_U3CcharsU3E5__2_3();
			int32_t L_7 = __this->get_U3ClenU3E5__3_4();
			NullCheck(L_5);
			StringBuilder_t * L_8;
			L_8 = StringBuilder_Append_m4B771D7BFE8A65C9A504EC5847A699EB678B02DB(L_5, L_6, 0, L_7, /*hidden argument*/NULL);
		}

IL_004f:
		{
			TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * L_9 = V_1;
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_10 = __this->get_U3CcharsU3E5__2_3();
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_11 = __this->get_U3CcharsU3E5__2_3();
			NullCheck(L_11);
			NullCheck(L_9);
			Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * L_12;
			L_12 = VirtFuncInvoker3< Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 *, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*, int32_t, int32_t >::Invoke(14 /* System.Threading.Tasks.Task`1<System.Int32> System.IO.TextReader::ReadAsyncInternal(System.Char[],System.Int32,System.Int32) */, L_9, L_10, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))));
			NullCheck(L_12);
			ConfiguredTaskAwaitable_1_t95CB4612A5B70DDFE0643FA38A73D6B984DD68EC  L_13;
			L_13 = Task_1_ConfigureAwait_m9637E2990F98EDC90D1A03B57A4954CE2171C4E2(L_12, (bool)0, /*hidden argument*/Task_1_ConfigureAwait_m9637E2990F98EDC90D1A03B57A4954CE2171C4E2_RuntimeMethod_var);
			V_5 = L_13;
			ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2  L_14;
			L_14 = ConfiguredTaskAwaitable_1_GetAwaiter_m8FA39505FC2099C60148C0F029CB49792690A0D5_inline((ConfiguredTaskAwaitable_1_t95CB4612A5B70DDFE0643FA38A73D6B984DD68EC *)(&V_5), /*hidden argument*/ConfiguredTaskAwaitable_1_GetAwaiter_m8FA39505FC2099C60148C0F029CB49792690A0D5_RuntimeMethod_var);
			V_4 = L_14;
			bool L_15;
			L_15 = ConfiguredTaskAwaiter_get_IsCompleted_m4192DC0E89B48FF93421FFF4EB52C21C42687999((ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2 *)(&V_4), /*hidden argument*/ConfiguredTaskAwaiter_get_IsCompleted_m4192DC0E89B48FF93421FFF4EB52C21C42687999_RuntimeMethod_var);
			if (L_15)
			{
				goto IL_00bc;
			}
		}

IL_007e:
		{
			int32_t L_16 = 0;
			V_0 = L_16;
			__this->set_U3CU3E1__state_0(L_16);
			ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2  L_17 = V_4;
			__this->set_U3CU3Eu__1_6(L_17);
			AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F * L_18 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2_TisU3CReadToEndAsyncU3Ed__14_tD16259CAE393A0DA787F6304386A41E7F88A1B45_m2C52B14607DF9BDF2A7044E5BF355C1F7189DA2A((AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F *)L_18, (ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2 *)(&V_4), (U3CReadToEndAsyncU3Ed__14_tD16259CAE393A0DA787F6304386A41E7F88A1B45 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2_TisU3CReadToEndAsyncU3Ed__14_tD16259CAE393A0DA787F6304386A41E7F88A1B45_m2C52B14607DF9BDF2A7044E5BF355C1F7189DA2A_RuntimeMethod_var);
			goto IL_0110;
		}

IL_009f:
		{
			ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2  L_19 = __this->get_U3CU3Eu__1_6();
			V_4 = L_19;
			ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2 * L_20 = __this->get_address_of_U3CU3Eu__1_6();
			il2cpp_codegen_initobj(L_20, sizeof(ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2 ));
			int32_t L_21 = (-1);
			V_0 = L_21;
			__this->set_U3CU3E1__state_0(L_21);
		}

IL_00bc:
		{
			int32_t L_22;
			L_22 = ConfiguredTaskAwaiter_GetResult_m0927E49E03619C51620F396FE1DD5DBD41AC6681((ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2 *)(&V_4), /*hidden argument*/ConfiguredTaskAwaiter_GetResult_m0927E49E03619C51620F396FE1DD5DBD41AC6681_RuntimeMethod_var);
			V_3 = L_22;
			int32_t L_23 = V_3;
			int32_t L_24 = L_23;
			V_6 = L_24;
			__this->set_U3ClenU3E5__3_4(L_24);
			int32_t L_25 = V_6;
			if (L_25)
			{
				goto IL_0036;
			}
		}

IL_00d5:
		{
			StringBuilder_t * L_26 = __this->get_U3CsbU3E5__1_2();
			NullCheck(L_26);
			String_t* L_27;
			L_27 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_26);
			V_2 = L_27;
			goto IL_00fc;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e3;
		}
		throw e;
	}

CATCH_00e3:
	{ // begin catch(System.Exception)
		V_7 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F * L_28 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_29 = V_7;
		AsyncTaskMethodBuilder_1_SetException_mF736FFAC649614B42D89C5FE96F9E9D8EF69D962((AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F *)L_28, L_29, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_mF736FFAC649614B42D89C5FE96F9E9D8EF69D962_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0110;
	} // end catch (depth: 1)

IL_00fc:
	{
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F * L_30 = __this->get_address_of_U3CU3Et__builder_1();
		String_t* L_31 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_mED41A75B510B80C4E8D4766516ABB37736D7ADF6((AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F *)L_30, L_31, /*hidden argument*/AsyncTaskMethodBuilder_1_SetResult_mED41A75B510B80C4E8D4766516ABB37736D7ADF6_RuntimeMethod_var);
	}

IL_0110:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CReadToEndAsyncU3Ed__14_MoveNext_m52916E41018117AF76E19621E9D9241F3370FB1E_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CReadToEndAsyncU3Ed__14_tD16259CAE393A0DA787F6304386A41E7F88A1B45 * _thisAdjusted = reinterpret_cast<U3CReadToEndAsyncU3Ed__14_tD16259CAE393A0DA787F6304386A41E7F88A1B45 *>(__this + _offset);
	U3CReadToEndAsyncU3Ed__14_MoveNext_m52916E41018117AF76E19621E9D9241F3370FB1E(_thisAdjusted, method);
}
// System.Void System.IO.TextReader/<ReadToEndAsync>d__14::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReadToEndAsyncU3Ed__14_SetStateMachine_m657671BFE4DCA9BED3AB80544B316BF32E0E0C8F (U3CReadToEndAsyncU3Ed__14_tD16259CAE393A0DA787F6304386A41E7F88A1B45 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_mEE799A2BCC831F9D2A73AD58553306A24516B3F5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_mEE799A2BCC831F9D2A73AD58553306A24516B3F5((AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F *)L_0, L_1, /*hidden argument*/AsyncTaskMethodBuilder_1_SetStateMachine_mEE799A2BCC831F9D2A73AD58553306A24516B3F5_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CReadToEndAsyncU3Ed__14_SetStateMachine_m657671BFE4DCA9BED3AB80544B316BF32E0E0C8F_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CReadToEndAsyncU3Ed__14_tD16259CAE393A0DA787F6304386A41E7F88A1B45 * _thisAdjusted = reinterpret_cast<U3CReadToEndAsyncU3Ed__14_tD16259CAE393A0DA787F6304386A41E7F88A1B45 *>(__this + _offset);
	U3CReadToEndAsyncU3Ed__14_SetStateMachine_m657671BFE4DCA9BED3AB80544B316BF32E0E0C8F(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.IO.TextReader/NullTextReader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullTextReader__ctor_m3CE6B1DC97A121C3DC449F72E8AF4855BBBF5FE6 (NullTextReader_tFC192D86C5C095C98156DAF472F7520472039F95 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_il2cpp_TypeInfo_var);
		TextReader__ctor_m6DFFA45D57F3E5A8FA3995BB40A2BC765AB2795A(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 System.IO.TextReader/NullTextReader::Read(System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NullTextReader_Read_m891C00E14E71CA2D822159D15C56CD2ADC256323 (NullTextReader_tFC192D86C5C095C98156DAF472F7520472039F95 * __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___buffer0, int32_t ___index1, int32_t ___count2, const RuntimeMethod* method)
{
	{
		return 0;
	}
}
// System.String System.IO.TextReader/NullTextReader::ReadLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NullTextReader_ReadLine_m012BCAA3D80C19A6D8B6C4454A3F494787FC9A2E (NullTextReader_tFC192D86C5C095C98156DAF472F7520472039F95 * __this, const RuntimeMethod* method)
{
	{
		return (String_t*)NULL;
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
// System.Void System.IO.TextReader/SyncTextReader::.ctor(System.IO.TextReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncTextReader__ctor_m7B72734A7D04A300E3B68A6F14CF4BDFB049FE8B (SyncTextReader_tA4C7DEEF5A129E5D1287BDE2D5335AD7F8EEAA84 * __this, TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_il2cpp_TypeInfo_var);
		TextReader__ctor_m6DFFA45D57F3E5A8FA3995BB40A2BC765AB2795A(__this, /*hidden argument*/NULL);
		TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * L_0 = ___t0;
		__this->set__in_4(L_0);
		return;
	}
}
// System.Void System.IO.TextReader/SyncTextReader::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncTextReader_Dispose_mCA7D9315420A173D1D9E8D39988650CEE11A7B3A (SyncTextReader_tA4C7DEEF5A129E5D1287BDE2D5335AD7F8EEAA84 * __this, bool ___disposing0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___disposing0;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * L_1 = __this->get__in_4();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_1);
	}

IL_000e:
	{
		return;
	}
}
// System.Int32 System.IO.TextReader/SyncTextReader::Peek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SyncTextReader_Peek_mC190477D89534FBDDAD4358C38AEE50E0DFEC6E2 (SyncTextReader_tA4C7DEEF5A129E5D1287BDE2D5335AD7F8EEAA84 * __this, const RuntimeMethod* method)
{
	{
		TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * L_0 = __this->get__in_4();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.IO.TextReader::Peek() */, L_0);
		return L_1;
	}
}
// System.Int32 System.IO.TextReader/SyncTextReader::Read()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SyncTextReader_Read_m9B4F9965A2A65EDA5B02E87C633405DB5E3BC9C4 (SyncTextReader_tA4C7DEEF5A129E5D1287BDE2D5335AD7F8EEAA84 * __this, const RuntimeMethod* method)
{
	{
		TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * L_0 = __this->get__in_4();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Read() */, L_0);
		return L_1;
	}
}
// System.Int32 System.IO.TextReader/SyncTextReader::Read(System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SyncTextReader_Read_mD9E6E4528105AE2386364FA8F2415F965B6A7912 (SyncTextReader_tA4C7DEEF5A129E5D1287BDE2D5335AD7F8EEAA84 * __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___buffer0, int32_t ___index1, int32_t ___count2, const RuntimeMethod* method)
{
	{
		TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * L_0 = __this->get__in_4();
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_1 = ___buffer0;
		int32_t L_2 = ___index1;
		int32_t L_3 = ___count2;
		NullCheck(L_0);
		int32_t L_4;
		L_4 = VirtFuncInvoker3< int32_t, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*, int32_t, int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read(System.Char[],System.Int32,System.Int32) */, L_0, L_1, L_2, L_3);
		return L_4;
	}
}
// System.String System.IO.TextReader/SyncTextReader::ReadLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SyncTextReader_ReadLine_mA93A8942D4F3029DFC4A77ACF657E94E55D4AC5B (SyncTextReader_tA4C7DEEF5A129E5D1287BDE2D5335AD7F8EEAA84 * __this, const RuntimeMethod* method)
{
	{
		TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * L_0 = __this->get__in_4();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(12 /* System.String System.IO.TextReader::ReadLine() */, L_0);
		return L_1;
	}
}
// System.String System.IO.TextReader/SyncTextReader::ReadToEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SyncTextReader_ReadToEnd_mAE82E5F24E30C2652EDE0082AF0226C5B4AAEDE7 (SyncTextReader_tA4C7DEEF5A129E5D1287BDE2D5335AD7F8EEAA84 * __this, const RuntimeMethod* method)
{
	{
		TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * L_0 = __this->get__in_4();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.IO.TextReader::ReadToEnd() */, L_0);
		return L_1;
	}
}
// System.Threading.Tasks.Task`1<System.String> System.IO.TextReader/SyncTextReader::ReadToEndAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * SyncTextReader_ReadToEndAsync_m4F82A124E212DE35A819A89ED7D74474E11FF3A7 (SyncTextReader_tA4C7DEEF5A129E5D1287BDE2D5335AD7F8EEAA84 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_FromResult_TisString_t_mB2118B0DB57948278B3D179FBE4FE5E1E321B906_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.IO.TextReader::ReadToEnd() */, __this);
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * L_1;
		L_1 = Task_FromResult_TisString_t_mB2118B0DB57948278B3D179FBE4FE5E1E321B906(L_0, /*hidden argument*/Task_FromResult_TisString_t_mB2118B0DB57948278B3D179FBE4FE5E1E321B906_RuntimeMethod_var);
		return L_1;
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
// System.Void System.IO.TextWriter/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m6975E7179CDDD1A19B918E9271EBC1C1C092FB2E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t1A707D491A359996794A63E517A0665899B4893A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t1A707D491A359996794A63E517A0665899B4893A * L_0 = (U3CU3Ec_t1A707D491A359996794A63E517A0665899B4893A *)il2cpp_codegen_object_new(U3CU3Ec_t1A707D491A359996794A63E517A0665899B4893A_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mCCA301B78BA58766C800243F770CB58781F5C62C(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t1A707D491A359996794A63E517A0665899B4893A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1A707D491A359996794A63E517A0665899B4893A_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void System.IO.TextWriter/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mCCA301B78BA58766C800243F770CB58781F5C62C (U3CU3Ec_t1A707D491A359996794A63E517A0665899B4893A * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.IO.TextWriter/<>c::<.cctor>b__73_0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__73_0_mF69E83E941B8BF0A57039EEF2EE95D31A96FE98B (U3CU3Ec_t1A707D491A359996794A63E517A0665899B4893A * __this, RuntimeObject * ___state0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_2_get_Item1_mEF1895FA4BFB0311A1B8E9C8B859CC76A27C3B07_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_2_get_Item2_m0128C0E032DA4707781C1EAB65135574999431D1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_2_t633ADA252A8DAC01B7681557DA2442C7F355B339_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Tuple_2_t633ADA252A8DAC01B7681557DA2442C7F355B339 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___state0;
		V_0 = ((Tuple_2_t633ADA252A8DAC01B7681557DA2442C7F355B339 *)CastclassClass((RuntimeObject*)L_0, Tuple_2_t633ADA252A8DAC01B7681557DA2442C7F355B339_il2cpp_TypeInfo_var));
		Tuple_2_t633ADA252A8DAC01B7681557DA2442C7F355B339 * L_1 = V_0;
		NullCheck(L_1);
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_2;
		L_2 = Tuple_2_get_Item1_mEF1895FA4BFB0311A1B8E9C8B859CC76A27C3B07_inline(L_1, /*hidden argument*/Tuple_2_get_Item1_mEF1895FA4BFB0311A1B8E9C8B859CC76A27C3B07_RuntimeMethod_var);
		Tuple_2_t633ADA252A8DAC01B7681557DA2442C7F355B339 * L_3 = V_0;
		NullCheck(L_3);
		Il2CppChar L_4;
		L_4 = Tuple_2_get_Item2_m0128C0E032DA4707781C1EAB65135574999431D1_inline(L_3, /*hidden argument*/Tuple_2_get_Item2_m0128C0E032DA4707781C1EAB65135574999431D1_RuntimeMethod_var);
		NullCheck(L_2);
		VirtActionInvoker1< Il2CppChar >::Invoke(11 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_2, L_4);
		return;
	}
}
// System.Void System.IO.TextWriter/<>c::<.cctor>b__73_1(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__73_1_m761845B1FD68B0F107CB196CC661FB46FC893552 (U3CU3Ec_t1A707D491A359996794A63E517A0665899B4893A * __this, RuntimeObject * ___state0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_2_get_Item1_m9D657D0F7331BC11763A6BE128C502D8290263C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_2_get_Item2_m9296C76ABF5ACF73224A566E32C5C4B2830DD6D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_2_t1E2E0182AF85006F49B500E9CD9188F1FB239A36_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Tuple_2_t1E2E0182AF85006F49B500E9CD9188F1FB239A36 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___state0;
		V_0 = ((Tuple_2_t1E2E0182AF85006F49B500E9CD9188F1FB239A36 *)CastclassClass((RuntimeObject*)L_0, Tuple_2_t1E2E0182AF85006F49B500E9CD9188F1FB239A36_il2cpp_TypeInfo_var));
		Tuple_2_t1E2E0182AF85006F49B500E9CD9188F1FB239A36 * L_1 = V_0;
		NullCheck(L_1);
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_2;
		L_2 = Tuple_2_get_Item1_m9D657D0F7331BC11763A6BE128C502D8290263C4_inline(L_1, /*hidden argument*/Tuple_2_get_Item1_m9D657D0F7331BC11763A6BE128C502D8290263C4_RuntimeMethod_var);
		Tuple_2_t1E2E0182AF85006F49B500E9CD9188F1FB239A36 * L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = Tuple_2_get_Item2_m9296C76ABF5ACF73224A566E32C5C4B2830DD6D9_inline(L_3, /*hidden argument*/Tuple_2_get_Item2_m9296C76ABF5ACF73224A566E32C5C4B2830DD6D9_RuntimeMethod_var);
		NullCheck(L_2);
		VirtActionInvoker1< String_t* >::Invoke(14 /* System.Void System.IO.TextWriter::Write(System.String) */, L_2, L_4);
		return;
	}
}
// System.Void System.IO.TextWriter/<>c::<.cctor>b__73_2(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__73_2_m084626BFAE932C893D5B3AB92E094C9A07FEC459 (U3CU3Ec_t1A707D491A359996794A63E517A0665899B4893A * __this, RuntimeObject * ___state0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_4_get_Item1_m3B33EC22891078C028C0573820148CDF02C3DEED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_4_get_Item2_m5BCA3CF7548FE8F0EFAFDE8E5100725C8DFC40F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_4_get_Item3_m2881060CC27F53A82A6535EA27E41EE752CC60DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_4_get_Item4_m623080FEB0168E7827752353D3A232D1AAC5F7E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_4_t8910349157062B8CCD348478BF6EC6BE8593A207_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Tuple_4_t8910349157062B8CCD348478BF6EC6BE8593A207 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___state0;
		V_0 = ((Tuple_4_t8910349157062B8CCD348478BF6EC6BE8593A207 *)CastclassClass((RuntimeObject*)L_0, Tuple_4_t8910349157062B8CCD348478BF6EC6BE8593A207_il2cpp_TypeInfo_var));
		Tuple_4_t8910349157062B8CCD348478BF6EC6BE8593A207 * L_1 = V_0;
		NullCheck(L_1);
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_2;
		L_2 = Tuple_4_get_Item1_m3B33EC22891078C028C0573820148CDF02C3DEED_inline(L_1, /*hidden argument*/Tuple_4_get_Item1_m3B33EC22891078C028C0573820148CDF02C3DEED_RuntimeMethod_var);
		Tuple_4_t8910349157062B8CCD348478BF6EC6BE8593A207 * L_3 = V_0;
		NullCheck(L_3);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_4;
		L_4 = Tuple_4_get_Item2_m5BCA3CF7548FE8F0EFAFDE8E5100725C8DFC40F0_inline(L_3, /*hidden argument*/Tuple_4_get_Item2_m5BCA3CF7548FE8F0EFAFDE8E5100725C8DFC40F0_RuntimeMethod_var);
		Tuple_4_t8910349157062B8CCD348478BF6EC6BE8593A207 * L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Tuple_4_get_Item3_m2881060CC27F53A82A6535EA27E41EE752CC60DF_inline(L_5, /*hidden argument*/Tuple_4_get_Item3_m2881060CC27F53A82A6535EA27E41EE752CC60DF_RuntimeMethod_var);
		Tuple_4_t8910349157062B8CCD348478BF6EC6BE8593A207 * L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = Tuple_4_get_Item4_m623080FEB0168E7827752353D3A232D1AAC5F7E1_inline(L_7, /*hidden argument*/Tuple_4_get_Item4_m623080FEB0168E7827752353D3A232D1AAC5F7E1_RuntimeMethod_var);
		NullCheck(L_2);
		VirtActionInvoker3< CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*, int32_t, int32_t >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.Char[],System.Int32,System.Int32) */, L_2, L_4, L_6, L_8);
		return;
	}
}
// System.Void System.IO.TextWriter/<>c::<.cctor>b__73_3(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__73_3_m51AF8DB8089E20C0A9109EF031B63C5D80560D29 (U3CU3Ec_t1A707D491A359996794A63E517A0665899B4893A * __this, RuntimeObject * ___state0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_2_get_Item1_mEF1895FA4BFB0311A1B8E9C8B859CC76A27C3B07_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_2_get_Item2_m0128C0E032DA4707781C1EAB65135574999431D1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_2_t633ADA252A8DAC01B7681557DA2442C7F355B339_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Tuple_2_t633ADA252A8DAC01B7681557DA2442C7F355B339 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___state0;
		V_0 = ((Tuple_2_t633ADA252A8DAC01B7681557DA2442C7F355B339 *)CastclassClass((RuntimeObject*)L_0, Tuple_2_t633ADA252A8DAC01B7681557DA2442C7F355B339_il2cpp_TypeInfo_var));
		Tuple_2_t633ADA252A8DAC01B7681557DA2442C7F355B339 * L_1 = V_0;
		NullCheck(L_1);
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_2;
		L_2 = Tuple_2_get_Item1_mEF1895FA4BFB0311A1B8E9C8B859CC76A27C3B07_inline(L_1, /*hidden argument*/Tuple_2_get_Item1_mEF1895FA4BFB0311A1B8E9C8B859CC76A27C3B07_RuntimeMethod_var);
		Tuple_2_t633ADA252A8DAC01B7681557DA2442C7F355B339 * L_3 = V_0;
		NullCheck(L_3);
		Il2CppChar L_4;
		L_4 = Tuple_2_get_Item2_m0128C0E032DA4707781C1EAB65135574999431D1_inline(L_3, /*hidden argument*/Tuple_2_get_Item2_m0128C0E032DA4707781C1EAB65135574999431D1_RuntimeMethod_var);
		NullCheck(L_2);
		VirtActionInvoker1< Il2CppChar >::Invoke(16 /* System.Void System.IO.TextWriter::WriteLine(System.Char) */, L_2, L_4);
		return;
	}
}
// System.Void System.IO.TextWriter/<>c::<.cctor>b__73_4(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__73_4_m41042017C017B7E7AF208C3E2904A4F94981D1C4 (U3CU3Ec_t1A707D491A359996794A63E517A0665899B4893A * __this, RuntimeObject * ___state0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_2_get_Item1_m9D657D0F7331BC11763A6BE128C502D8290263C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_2_get_Item2_m9296C76ABF5ACF73224A566E32C5C4B2830DD6D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_2_t1E2E0182AF85006F49B500E9CD9188F1FB239A36_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Tuple_2_t1E2E0182AF85006F49B500E9CD9188F1FB239A36 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___state0;
		V_0 = ((Tuple_2_t1E2E0182AF85006F49B500E9CD9188F1FB239A36 *)CastclassClass((RuntimeObject*)L_0, Tuple_2_t1E2E0182AF85006F49B500E9CD9188F1FB239A36_il2cpp_TypeInfo_var));
		Tuple_2_t1E2E0182AF85006F49B500E9CD9188F1FB239A36 * L_1 = V_0;
		NullCheck(L_1);
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_2;
		L_2 = Tuple_2_get_Item1_m9D657D0F7331BC11763A6BE128C502D8290263C4_inline(L_1, /*hidden argument*/Tuple_2_get_Item1_m9D657D0F7331BC11763A6BE128C502D8290263C4_RuntimeMethod_var);
		Tuple_2_t1E2E0182AF85006F49B500E9CD9188F1FB239A36 * L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = Tuple_2_get_Item2_m9296C76ABF5ACF73224A566E32C5C4B2830DD6D9_inline(L_3, /*hidden argument*/Tuple_2_get_Item2_m9296C76ABF5ACF73224A566E32C5C4B2830DD6D9_RuntimeMethod_var);
		NullCheck(L_2);
		VirtActionInvoker1< String_t* >::Invoke(18 /* System.Void System.IO.TextWriter::WriteLine(System.String) */, L_2, L_4);
		return;
	}
}
// System.Void System.IO.TextWriter/<>c::<.cctor>b__73_5(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__73_5_m90BC93DDE78C79063E7CCCE4DB34D812560559E9 (U3CU3Ec_t1A707D491A359996794A63E517A0665899B4893A * __this, RuntimeObject * ___state0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_4_get_Item1_m3B33EC22891078C028C0573820148CDF02C3DEED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_4_get_Item2_m5BCA3CF7548FE8F0EFAFDE8E5100725C8DFC40F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_4_get_Item3_m2881060CC27F53A82A6535EA27E41EE752CC60DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_4_get_Item4_m623080FEB0168E7827752353D3A232D1AAC5F7E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_4_t8910349157062B8CCD348478BF6EC6BE8593A207_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Tuple_4_t8910349157062B8CCD348478BF6EC6BE8593A207 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___state0;
		V_0 = ((Tuple_4_t8910349157062B8CCD348478BF6EC6BE8593A207 *)CastclassClass((RuntimeObject*)L_0, Tuple_4_t8910349157062B8CCD348478BF6EC6BE8593A207_il2cpp_TypeInfo_var));
		Tuple_4_t8910349157062B8CCD348478BF6EC6BE8593A207 * L_1 = V_0;
		NullCheck(L_1);
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_2;
		L_2 = Tuple_4_get_Item1_m3B33EC22891078C028C0573820148CDF02C3DEED_inline(L_1, /*hidden argument*/Tuple_4_get_Item1_m3B33EC22891078C028C0573820148CDF02C3DEED_RuntimeMethod_var);
		Tuple_4_t8910349157062B8CCD348478BF6EC6BE8593A207 * L_3 = V_0;
		NullCheck(L_3);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_4;
		L_4 = Tuple_4_get_Item2_m5BCA3CF7548FE8F0EFAFDE8E5100725C8DFC40F0_inline(L_3, /*hidden argument*/Tuple_4_get_Item2_m5BCA3CF7548FE8F0EFAFDE8E5100725C8DFC40F0_RuntimeMethod_var);
		Tuple_4_t8910349157062B8CCD348478BF6EC6BE8593A207 * L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Tuple_4_get_Item3_m2881060CC27F53A82A6535EA27E41EE752CC60DF_inline(L_5, /*hidden argument*/Tuple_4_get_Item3_m2881060CC27F53A82A6535EA27E41EE752CC60DF_RuntimeMethod_var);
		Tuple_4_t8910349157062B8CCD348478BF6EC6BE8593A207 * L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = Tuple_4_get_Item4_m623080FEB0168E7827752353D3A232D1AAC5F7E1_inline(L_7, /*hidden argument*/Tuple_4_get_Item4_m623080FEB0168E7827752353D3A232D1AAC5F7E1_RuntimeMethod_var);
		NullCheck(L_2);
		VirtActionInvoker3< CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*, int32_t, int32_t >::Invoke(17 /* System.Void System.IO.TextWriter::WriteLine(System.Char[],System.Int32,System.Int32) */, L_2, L_4, L_6, L_8);
		return;
	}
}
// System.Void System.IO.TextWriter/<>c::<.cctor>b__73_6(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__73_6_m69DD8FBED8D27F85525CB88464980BA20D55DFBE (U3CU3Ec_t1A707D491A359996794A63E517A0665899B4893A * __this, RuntimeObject * ___state0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___state0;
		NullCheck(((TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 *)CastclassClass((RuntimeObject*)L_0, TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_il2cpp_TypeInfo_var)));
		VirtActionInvoker0::Invoke(10 /* System.Void System.IO.TextWriter::Flush() */, ((TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 *)CastclassClass((RuntimeObject*)L_0, TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_il2cpp_TypeInfo_var)));
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
// System.Void System.IO.TextWriter/NullTextWriter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullTextWriter__ctor_m33C654ED7A4B2CBB6C50AE4865CA0FB8878D50E7 (NullTextWriter_t1D00E99220711EA2E249B67A50372CED994A125F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_0;
		L_0 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_il2cpp_TypeInfo_var);
		TextWriter__ctor_m93B03125D61D24EF37FD6E27897D7C4033BC7090(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.IO.TextWriter/NullTextWriter::Write(System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullTextWriter_Write_m493EE00D3B51210265EA2DE6D0F0D796165B0B45 (NullTextWriter_t1D00E99220711EA2E249B67A50372CED994A125F * __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___buffer0, int32_t ___index1, int32_t ___count2, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void System.IO.TextWriter/NullTextWriter::Write(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullTextWriter_Write_m807B8A728917FCF59AC93A6AAE505A013BCA4CD9 (NullTextWriter_t1D00E99220711EA2E249B67A50372CED994A125F * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void System.IO.TextWriter/NullTextWriter::WriteLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullTextWriter_WriteLine_mDB1B01F3D332E47F0B0E41563C8806486533A230 (NullTextWriter_t1D00E99220711EA2E249B67A50372CED994A125F * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void System.IO.TextWriter/NullTextWriter::WriteLine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullTextWriter_WriteLine_mEAA56AF2FEAE33EA58C0E290E37304AD28760E3E (NullTextWriter_t1D00E99220711EA2E249B67A50372CED994A125F * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void System.IO.TextWriter/NullTextWriter::WriteLine(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullTextWriter_WriteLine_m1DC37463767A23CC29DC3EBEE707BFA5C62997DA (NullTextWriter_t1D00E99220711EA2E249B67A50372CED994A125F * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
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
// System.Void System.IO.TextWriter/SyncTextWriter::.ctor(System.IO.TextWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncTextWriter__ctor_m1775BA6F4E71F5D255B9658621EC0EFEA66D448B (SyncTextWriter_t4B1FF6119ABECE598E0666C85337FA3F11FF785D * __this, TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_0 = ___t0;
		NullCheck(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_il2cpp_TypeInfo_var);
		RuntimeObject* L_1;
		L_1 = VirtFuncInvoker0< RuntimeObject* >::Invoke(7 /* System.IFormatProvider System.IO.TextWriter::get_FormatProvider() */, L_0);
		TextWriter__ctor_m93B03125D61D24EF37FD6E27897D7C4033BC7090(__this, L_1, /*hidden argument*/NULL);
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_2 = ___t0;
		__this->set__out_11(L_2);
		return;
	}
}
// System.IFormatProvider System.IO.TextWriter/SyncTextWriter::get_FormatProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SyncTextWriter_get_FormatProvider_m6AAE4013D720074E9197D1FB71FBAED8C67C42E4 (SyncTextWriter_t4B1FF6119ABECE598E0666C85337FA3F11FF785D * __this, const RuntimeMethod* method)
{
	{
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_0 = __this->get__out_11();
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = VirtFuncInvoker0< RuntimeObject* >::Invoke(7 /* System.IFormatProvider System.IO.TextWriter::get_FormatProvider() */, L_0);
		return L_1;
	}
}
// System.Void System.IO.TextWriter/SyncTextWriter::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncTextWriter_Close_m04559C91D86134E01A44FAE26B100692F89A75B1 (SyncTextWriter_t4B1FF6119ABECE598E0666C85337FA3F11FF785D * __this, const RuntimeMethod* method)
{
	{
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_0 = __this->get__out_11();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(8 /* System.Void System.IO.TextWriter::Close() */, L_0);
		return;
	}
}
// System.Void System.IO.TextWriter/SyncTextWriter::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncTextWriter_Dispose_m95C091999E1C42216AD1A1EBC72F96F64B1EFC41 (SyncTextWriter_t4B1FF6119ABECE598E0666C85337FA3F11FF785D * __this, bool ___disposing0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___disposing0;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_1 = __this->get__out_11();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_1);
	}

IL_000e:
	{
		return;
	}
}
// System.Void System.IO.TextWriter/SyncTextWriter::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncTextWriter_Flush_m0457CE8CE906AD31BB7663F48A9B2F596B2771AD (SyncTextWriter_t4B1FF6119ABECE598E0666C85337FA3F11FF785D * __this, const RuntimeMethod* method)
{
	{
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_0 = __this->get__out_11();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(10 /* System.Void System.IO.TextWriter::Flush() */, L_0);
		return;
	}
}
// System.Void System.IO.TextWriter/SyncTextWriter::Write(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncTextWriter_Write_m809EA23083B8E2B5CF6CF2CBBF867426B75D1A07 (SyncTextWriter_t4B1FF6119ABECE598E0666C85337FA3F11FF785D * __this, Il2CppChar ___value0, const RuntimeMethod* method)
{
	{
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_0 = __this->get__out_11();
		Il2CppChar L_1 = ___value0;
		NullCheck(L_0);
		VirtActionInvoker1< Il2CppChar >::Invoke(11 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_0, L_1);
		return;
	}
}
// System.Void System.IO.TextWriter/SyncTextWriter::Write(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncTextWriter_Write_m7E6D7F263561A9AF49A48FE13AC29EC676ED8153 (SyncTextWriter_t4B1FF6119ABECE598E0666C85337FA3F11FF785D * __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___buffer0, const RuntimeMethod* method)
{
	{
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_0 = __this->get__out_11();
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_1 = ___buffer0;
		NullCheck(L_0);
		VirtActionInvoker1< CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.Char[]) */, L_0, L_1);
		return;
	}
}
// System.Void System.IO.TextWriter/SyncTextWriter::Write(System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncTextWriter_Write_mEA19F63F81AD88F51C985804E5C3C7F50EFD500A (SyncTextWriter_t4B1FF6119ABECE598E0666C85337FA3F11FF785D * __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___buffer0, int32_t ___index1, int32_t ___count2, const RuntimeMethod* method)
{
	{
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_0 = __this->get__out_11();
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_1 = ___buffer0;
		int32_t L_2 = ___index1;
		int32_t L_3 = ___count2;
		NullCheck(L_0);
		VirtActionInvoker3< CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*, int32_t, int32_t >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.Char[],System.Int32,System.Int32) */, L_0, L_1, L_2, L_3);
		return;
	}
}
// System.Void System.IO.TextWriter/SyncTextWriter::Write(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncTextWriter_Write_mBA2B936EAACED347DD1CFE48AAD6EFF2CCFEB22C (SyncTextWriter_t4B1FF6119ABECE598E0666C85337FA3F11FF785D * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_0 = __this->get__out_11();
		String_t* L_1 = ___value0;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(14 /* System.Void System.IO.TextWriter::Write(System.String) */, L_0, L_1);
		return;
	}
}
// System.Void System.IO.TextWriter/SyncTextWriter::WriteLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncTextWriter_WriteLine_m7DE2A1B3CCC8D07563A720F1F35EBAAF7D2760C2 (SyncTextWriter_t4B1FF6119ABECE598E0666C85337FA3F11FF785D * __this, const RuntimeMethod* method)
{
	{
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_0 = __this->get__out_11();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(15 /* System.Void System.IO.TextWriter::WriteLine() */, L_0);
		return;
	}
}
// System.Void System.IO.TextWriter/SyncTextWriter::WriteLine(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncTextWriter_WriteLine_mC7DFBD17F51C94A6C91E91E9EB7965BD8C8428AD (SyncTextWriter_t4B1FF6119ABECE598E0666C85337FA3F11FF785D * __this, Il2CppChar ___value0, const RuntimeMethod* method)
{
	{
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_0 = __this->get__out_11();
		Il2CppChar L_1 = ___value0;
		NullCheck(L_0);
		VirtActionInvoker1< Il2CppChar >::Invoke(16 /* System.Void System.IO.TextWriter::WriteLine(System.Char) */, L_0, L_1);
		return;
	}
}
// System.Void System.IO.TextWriter/SyncTextWriter::WriteLine(System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncTextWriter_WriteLine_mD583D488E5050081FA52918F4066B1EFFF17D0F2 (SyncTextWriter_t4B1FF6119ABECE598E0666C85337FA3F11FF785D * __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___buffer0, int32_t ___index1, int32_t ___count2, const RuntimeMethod* method)
{
	{
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_0 = __this->get__out_11();
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_1 = ___buffer0;
		int32_t L_2 = ___index1;
		int32_t L_3 = ___count2;
		NullCheck(L_0);
		VirtActionInvoker3< CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*, int32_t, int32_t >::Invoke(17 /* System.Void System.IO.TextWriter::WriteLine(System.Char[],System.Int32,System.Int32) */, L_0, L_1, L_2, L_3);
		return;
	}
}
// System.Void System.IO.TextWriter/SyncTextWriter::WriteLine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncTextWriter_WriteLine_mD2640CB20F1049042A0E35B23DC97AFD72EE19D5 (SyncTextWriter_t4B1FF6119ABECE598E0666C85337FA3F11FF785D * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_0 = __this->get__out_11();
		String_t* L_1 = ___value0;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(18 /* System.Void System.IO.TextWriter::WriteLine(System.String) */, L_0, L_1);
		return;
	}
}
// System.Void System.IO.TextWriter/SyncTextWriter::WriteLine(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncTextWriter_WriteLine_mDE4F75E908ABCB110753702773113557E6CCF465 (SyncTextWriter_t4B1FF6119ABECE598E0666C85337FA3F11FF785D * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_0 = __this->get__out_11();
		RuntimeObject * L_1 = ___value0;
		NullCheck(L_0);
		VirtActionInvoker1< RuntimeObject * >::Invoke(19 /* System.Void System.IO.TextWriter::WriteLine(System.Object) */, L_0, L_1);
		return;
	}
}
// System.Void System.IO.TextWriter/SyncTextWriter::WriteLine(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncTextWriter_WriteLine_m72409BAF6C86FCD80EE66F84C3A0D993093D97F9 (SyncTextWriter_t4B1FF6119ABECE598E0666C85337FA3F11FF785D * __this, String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method)
{
	{
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_0 = __this->get__out_11();
		String_t* L_1 = ___format0;
		RuntimeObject * L_2 = ___arg01;
		NullCheck(L_0);
		VirtActionInvoker2< String_t*, RuntimeObject * >::Invoke(20 /* System.Void System.IO.TextWriter::WriteLine(System.String,System.Object) */, L_0, L_1, L_2);
		return;
	}
}
// System.Void System.IO.TextWriter/SyncTextWriter::WriteLine(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncTextWriter_WriteLine_m43C0A333EE3D120C9EC634FF10CB4E2CB2E895B6 (SyncTextWriter_t4B1FF6119ABECE598E0666C85337FA3F11FF785D * __this, String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method)
{
	{
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_0 = __this->get__out_11();
		String_t* L_1 = ___format0;
		RuntimeObject * L_2 = ___arg01;
		RuntimeObject * L_3 = ___arg12;
		NullCheck(L_0);
		VirtActionInvoker3< String_t*, RuntimeObject *, RuntimeObject * >::Invoke(21 /* System.Void System.IO.TextWriter::WriteLine(System.String,System.Object,System.Object) */, L_0, L_1, L_2, L_3);
		return;
	}
}
// System.Threading.Tasks.Task System.IO.TextWriter/SyncTextWriter::WriteAsync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * SyncTextWriter_WriteAsync_m078E0E10AF75F059C154822FBB3EE76A0AF7753A (SyncTextWriter_t4B1FF6119ABECE598E0666C85337FA3F11FF785D * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___value0;
		VirtActionInvoker1< String_t* >::Invoke(14 /* System.Void System.IO.TextWriter::Write(System.String) */, __this, L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_1;
		L_1 = Task_get_CompletedTask_m50A6B866A113BC922674893991DC4E80CB629C1D(/*hidden argument*/NULL);
		return L_1;
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
// System.Void System.Threading.ThreadPool/<EnumerateQueuedWorkItems>d__21::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateQueuedWorkItemsU3Ed__21__ctor_m2522F8A938E01AC237E0B403198B366F5E139A24 (U3CEnumerateQueuedWorkItemsU3Ed__21_tF069F486DA9CB1A00C0998401737C7FA776F53BD * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_1);
		return;
	}
}
// System.Void System.Threading.ThreadPool/<EnumerateQueuedWorkItems>d__21::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateQueuedWorkItemsU3Ed__21_System_IDisposable_Dispose_m943B7869BFF2C609A6D0F13D347E15D07E21FCFD (U3CEnumerateQueuedWorkItemsU3Ed__21_tF069F486DA9CB1A00C0998401737C7FA776F53BD * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean System.Threading.ThreadPool/<EnumerateQueuedWorkItems>d__21::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CEnumerateQueuedWorkItemsU3Ed__21_MoveNext_mD3F9A3F8C72ED89C9480254ECEE9AFC60834F676 (U3CEnumerateQueuedWorkItemsU3Ed__21_tF069F486DA9CB1A00C0998401737C7FA776F53BD * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	WorkStealingQueue_t0D430FD823CAB6C050301484CE7516E1573728A0 * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_0098;
			}
			case 2:
			{
				goto IL_0145;
			}
		}
	}
	{
		return (bool)0;
	}

IL_001b:
	{
		__this->set_U3CU3E1__state_0((-1));
		WorkStealingQueueU5BU5D_t0A012EBE228687C2D6BB90870F783BA69EEFBD8C* L_2 = __this->get_wsQueues_3();
		if (!L_2)
		{
			goto IL_00ee;
		}
	}
	{
		WorkStealingQueueU5BU5D_t0A012EBE228687C2D6BB90870F783BA69EEFBD8C* L_3 = __this->get_wsQueues_3();
		__this->set_U3CU3E7__wrap1_12(L_3);
		__this->set_U3CU3E7__wrap2_13(0);
		goto IL_00d4;
	}

IL_0045:
	{
		WorkStealingQueueU5BU5D_t0A012EBE228687C2D6BB90870F783BA69EEFBD8C* L_4 = __this->get_U3CU3E7__wrap1_12();
		int32_t L_5 = __this->get_U3CU3E7__wrap2_13();
		NullCheck(L_4);
		int32_t L_6 = L_5;
		WorkStealingQueue_t0D430FD823CAB6C050301484CE7516E1573728A0 * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = L_7;
		WorkStealingQueue_t0D430FD823CAB6C050301484CE7516E1573728A0 * L_8 = V_1;
		if (!L_8)
		{
			goto IL_00c6;
		}
	}
	{
		WorkStealingQueue_t0D430FD823CAB6C050301484CE7516E1573728A0 * L_9 = V_1;
		NullCheck(L_9);
		IThreadPoolWorkItemU5BU5D_tA8F5E15B9A678486C494BA29BA2B36165FF28738* L_10 = L_9->get_m_array_0();
		il2cpp_codegen_memory_barrier();
		if (!L_10)
		{
			goto IL_00c6;
		}
	}
	{
		WorkStealingQueue_t0D430FD823CAB6C050301484CE7516E1573728A0 * L_11 = V_1;
		NullCheck(L_11);
		IThreadPoolWorkItemU5BU5D_tA8F5E15B9A678486C494BA29BA2B36165FF28738* L_12 = L_11->get_m_array_0();
		il2cpp_codegen_memory_barrier();
		__this->set_U3CitemsU3E5__1_5(L_12);
		__this->set_U3CiU3E5__2_6(0);
		goto IL_00af;
	}

IL_0077:
	{
		IThreadPoolWorkItemU5BU5D_tA8F5E15B9A678486C494BA29BA2B36165FF28738* L_13 = __this->get_U3CitemsU3E5__1_5();
		int32_t L_14 = __this->get_U3CiU3E5__2_6();
		NullCheck(L_13);
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_2 = L_16;
		RuntimeObject* L_17 = V_2;
		if (!L_17)
		{
			goto IL_009f;
		}
	}
	{
		RuntimeObject* L_18 = V_2;
		__this->set_U3CU3E2__current_1(L_18);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0098:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_009f:
	{
		int32_t L_19 = __this->get_U3CiU3E5__2_6();
		V_3 = L_19;
		int32_t L_20 = V_3;
		__this->set_U3CiU3E5__2_6(((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1)));
	}

IL_00af:
	{
		int32_t L_21 = __this->get_U3CiU3E5__2_6();
		IThreadPoolWorkItemU5BU5D_tA8F5E15B9A678486C494BA29BA2B36165FF28738* L_22 = __this->get_U3CitemsU3E5__1_5();
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length))))))
		{
			goto IL_0077;
		}
	}
	{
		__this->set_U3CitemsU3E5__1_5((IThreadPoolWorkItemU5BU5D_tA8F5E15B9A678486C494BA29BA2B36165FF28738*)NULL);
	}

IL_00c6:
	{
		int32_t L_23 = __this->get_U3CU3E7__wrap2_13();
		__this->set_U3CU3E7__wrap2_13(((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1)));
	}

IL_00d4:
	{
		int32_t L_24 = __this->get_U3CU3E7__wrap2_13();
		WorkStealingQueueU5BU5D_t0A012EBE228687C2D6BB90870F783BA69EEFBD8C* L_25 = __this->get_U3CU3E7__wrap1_12();
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length))))))
		{
			goto IL_0045;
		}
	}
	{
		__this->set_U3CU3E7__wrap1_12((WorkStealingQueueU5BU5D_t0A012EBE228687C2D6BB90870F783BA69EEFBD8C*)NULL);
	}

IL_00ee:
	{
		QueueSegment_tBF384DF1C15001FBEDB17378EB22EA233A89A0A4 * L_26 = __this->get_globalQueueTail_7();
		if (!L_26)
		{
			goto IL_0198;
		}
	}
	{
		QueueSegment_tBF384DF1C15001FBEDB17378EB22EA233A89A0A4 * L_27 = __this->get_globalQueueTail_7();
		__this->set_U3CsegmentU3E5__5_11(L_27);
		goto IL_0186;
	}

IL_0107:
	{
		QueueSegment_tBF384DF1C15001FBEDB17378EB22EA233A89A0A4 * L_28 = __this->get_U3CsegmentU3E5__5_11();
		NullCheck(L_28);
		IThreadPoolWorkItemU5BU5D_tA8F5E15B9A678486C494BA29BA2B36165FF28738* L_29 = L_28->get_nodes_0();
		__this->set_U3CitemsU3E5__3_9(L_29);
		__this->set_U3CiU3E5__4_10(0);
		goto IL_015c;
	}

IL_0121:
	{
		IThreadPoolWorkItemU5BU5D_tA8F5E15B9A678486C494BA29BA2B36165FF28738* L_30 = __this->get_U3CitemsU3E5__3_9();
		int32_t L_31 = __this->get_U3CiU3E5__4_10();
		NullCheck(L_30);
		int32_t L_32 = L_31;
		RuntimeObject* L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		V_4 = L_33;
		RuntimeObject* L_34 = V_4;
		if (!L_34)
		{
			goto IL_014c;
		}
	}
	{
		RuntimeObject* L_35 = V_4;
		__this->set_U3CU3E2__current_1(L_35);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_0145:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_014c:
	{
		int32_t L_36 = __this->get_U3CiU3E5__4_10();
		V_3 = L_36;
		int32_t L_37 = V_3;
		__this->set_U3CiU3E5__4_10(((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)1)));
	}

IL_015c:
	{
		int32_t L_38 = __this->get_U3CiU3E5__4_10();
		IThreadPoolWorkItemU5BU5D_tA8F5E15B9A678486C494BA29BA2B36165FF28738* L_39 = __this->get_U3CitemsU3E5__3_9();
		NullCheck(L_39);
		if ((((int32_t)L_38) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_39)->max_length))))))
		{
			goto IL_0121;
		}
	}
	{
		__this->set_U3CitemsU3E5__3_9((IThreadPoolWorkItemU5BU5D_tA8F5E15B9A678486C494BA29BA2B36165FF28738*)NULL);
		QueueSegment_tBF384DF1C15001FBEDB17378EB22EA233A89A0A4 * L_40 = __this->get_U3CsegmentU3E5__5_11();
		NullCheck(L_40);
		QueueSegment_tBF384DF1C15001FBEDB17378EB22EA233A89A0A4 * L_41 = L_40->get_Next_2();
		il2cpp_codegen_memory_barrier();
		__this->set_U3CsegmentU3E5__5_11(L_41);
	}

IL_0186:
	{
		QueueSegment_tBF384DF1C15001FBEDB17378EB22EA233A89A0A4 * L_42 = __this->get_U3CsegmentU3E5__5_11();
		if (L_42)
		{
			goto IL_0107;
		}
	}
	{
		__this->set_U3CsegmentU3E5__5_11((QueueSegment_tBF384DF1C15001FBEDB17378EB22EA233A89A0A4 *)NULL);
	}

IL_0198:
	{
		return (bool)0;
	}
}
// System.Threading.IThreadPoolWorkItem System.Threading.ThreadPool/<EnumerateQueuedWorkItems>d__21::System.Collections.Generic.IEnumerator<System.Threading.IThreadPoolWorkItem>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEnumerateQueuedWorkItemsU3Ed__21_System_Collections_Generic_IEnumeratorU3CSystem_Threading_IThreadPoolWorkItemU3E_get_Current_m70EE5D198B66CD4B8E250F517D51A918B59B2803 (U3CEnumerateQueuedWorkItemsU3Ed__21_tF069F486DA9CB1A00C0998401737C7FA776F53BD * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void System.Threading.ThreadPool/<EnumerateQueuedWorkItems>d__21::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateQueuedWorkItemsU3Ed__21_System_Collections_IEnumerator_Reset_m9C6144E53943499F1049D9F8A26104884B91A22F (U3CEnumerateQueuedWorkItemsU3Ed__21_tF069F486DA9CB1A00C0998401737C7FA776F53BD * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CEnumerateQueuedWorkItemsU3Ed__21_System_Collections_IEnumerator_Reset_m9C6144E53943499F1049D9F8A26104884B91A22F_RuntimeMethod_var)));
	}
}
// System.Object System.Threading.ThreadPool/<EnumerateQueuedWorkItems>d__21::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CEnumerateQueuedWorkItemsU3Ed__21_System_Collections_IEnumerator_get_Current_m2CBB0080A04593267D6887FC35D7DC9145EA573F (U3CEnumerateQueuedWorkItemsU3Ed__21_tF069F486DA9CB1A00C0998401737C7FA776F53BD * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Threading.IThreadPoolWorkItem> System.Threading.ThreadPool/<EnumerateQueuedWorkItems>d__21::System.Collections.Generic.IEnumerable<System.Threading.IThreadPoolWorkItem>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEnumerateQueuedWorkItemsU3Ed__21_System_Collections_Generic_IEnumerableU3CSystem_Threading_IThreadPoolWorkItemU3E_GetEnumerator_mE6330DF22C4294D87DE0EA64D1414DCE751DDFE1 (U3CEnumerateQueuedWorkItemsU3Ed__21_tF069F486DA9CB1A00C0998401737C7FA776F53BD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CEnumerateQueuedWorkItemsU3Ed__21_tF069F486DA9CB1A00C0998401737C7FA776F53BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CEnumerateQueuedWorkItemsU3Ed__21_tF069F486DA9CB1A00C0998401737C7FA776F53BD * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_0029;
	}

IL_0022:
	{
		U3CEnumerateQueuedWorkItemsU3Ed__21_tF069F486DA9CB1A00C0998401737C7FA776F53BD * L_3 = (U3CEnumerateQueuedWorkItemsU3Ed__21_tF069F486DA9CB1A00C0998401737C7FA776F53BD *)il2cpp_codegen_object_new(U3CEnumerateQueuedWorkItemsU3Ed__21_tF069F486DA9CB1A00C0998401737C7FA776F53BD_il2cpp_TypeInfo_var);
		U3CEnumerateQueuedWorkItemsU3Ed__21__ctor_m2522F8A938E01AC237E0B403198B366F5E139A24(L_3, 0, /*hidden argument*/NULL);
		V_0 = L_3;
	}

IL_0029:
	{
		U3CEnumerateQueuedWorkItemsU3Ed__21_tF069F486DA9CB1A00C0998401737C7FA776F53BD * L_4 = V_0;
		WorkStealingQueueU5BU5D_t0A012EBE228687C2D6BB90870F783BA69EEFBD8C* L_5 = __this->get_U3CU3E3__wsQueues_4();
		NullCheck(L_4);
		L_4->set_wsQueues_3(L_5);
		U3CEnumerateQueuedWorkItemsU3Ed__21_tF069F486DA9CB1A00C0998401737C7FA776F53BD * L_6 = V_0;
		QueueSegment_tBF384DF1C15001FBEDB17378EB22EA233A89A0A4 * L_7 = __this->get_U3CU3E3__globalQueueTail_8();
		NullCheck(L_6);
		L_6->set_globalQueueTail_7(L_7);
		U3CEnumerateQueuedWorkItemsU3Ed__21_tF069F486DA9CB1A00C0998401737C7FA776F53BD * L_8 = V_0;
		return L_8;
	}
}
// System.Collections.IEnumerator System.Threading.ThreadPool/<EnumerateQueuedWorkItems>d__21::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEnumerateQueuedWorkItemsU3Ed__21_System_Collections_IEnumerable_GetEnumerator_mC634757AEB99D06ECF85BECA9547F7F3FED09EED (U3CEnumerateQueuedWorkItemsU3Ed__21_tF069F486DA9CB1A00C0998401737C7FA776F53BD * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = U3CEnumerateQueuedWorkItemsU3Ed__21_System_Collections_Generic_IEnumerableU3CSystem_Threading_IThreadPoolWorkItemU3E_GetEnumerator_mE6330DF22C4294D87DE0EA64D1414DCE751DDFE1(__this, /*hidden argument*/NULL);
		return L_0;
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
// System.Void System.Threading.Tasks.ThreadPoolTaskScheduler/<FilterTasksFromWorkItems>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFilterTasksFromWorkItemsU3Ed__7__ctor_m03A64629D95A588A0FFE43D8881C698928A4173E (U3CFilterTasksFromWorkItemsU3Ed__7_tD560179E466F2CE2E14AD67C91EC9739A58C9040 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_1);
		return;
	}
}
// System.Void System.Threading.Tasks.ThreadPoolTaskScheduler/<FilterTasksFromWorkItems>d__7::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFilterTasksFromWorkItemsU3Ed__7_System_IDisposable_Dispose_m26961A724928D49280CDA83AC6365DDCF3C4BA5F (U3CFilterTasksFromWorkItemsU3Ed__7_tD560179E466F2CE2E14AD67C91EC9739A58C9040 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x1A, FINALLY_0013);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0013;
	}

FINALLY_0013:
	{ // begin finally (depth: 1)
		U3CFilterTasksFromWorkItemsU3Ed__7_U3CU3Em__Finally1_m476099EA43DB4B5AF00D9DA5540DB07E04AB2AD2(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(19)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(19)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1A, IL_001a)
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean System.Threading.Tasks.ThreadPoolTaskScheduler/<FilterTasksFromWorkItems>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CFilterTasksFromWorkItemsU3Ed__7_MoveNext_m373A3C672FDFC126D28CECEFA0EE67A85D2D06CE (U3CFilterTasksFromWorkItemsU3Ed__7_tD560179E466F2CE2E14AD67C91EC9739A58C9040 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t451115FF3A7A124BC57DB9E571D397027C46E032_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t82C37FF5CC100049B753E6D34F8FF8D8BD37D587_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			int32_t L_1 = V_1;
			if (!L_1)
			{
				goto IL_0012;
			}
		}

IL_000a:
		{
			int32_t L_2 = V_1;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_005f;
			}
		}

IL_000e:
		{
			V_0 = (bool)0;
			goto IL_008c;
		}

IL_0012:
		{
			__this->set_U3CU3E1__state_0((-1));
			RuntimeObject* L_3 = __this->get_tpwItems_3();
			NullCheck(L_3);
			RuntimeObject* L_4;
			L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Threading.IThreadPoolWorkItem>::GetEnumerator() */, IEnumerable_1_t451115FF3A7A124BC57DB9E571D397027C46E032_il2cpp_TypeInfo_var, L_3);
			__this->set_U3CU3E7__wrap1_5(L_4);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			goto IL_0067;
		}

IL_0034:
		{
			RuntimeObject* L_5 = __this->get_U3CU3E7__wrap1_5();
			NullCheck(L_5);
			RuntimeObject* L_6;
			L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Threading.IThreadPoolWorkItem>::get_Current() */, IEnumerator_1_t82C37FF5CC100049B753E6D34F8FF8D8BD37D587_il2cpp_TypeInfo_var, L_5);
			V_2 = L_6;
			RuntimeObject* L_7 = V_2;
			if (!((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)IsInstClass((RuntimeObject*)L_7, Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var)))
			{
				goto IL_0067;
			}
		}

IL_0048:
		{
			RuntimeObject* L_8 = V_2;
			__this->set_U3CU3E2__current_1(((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)CastclassClass((RuntimeObject*)L_8, Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var)));
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_008c;
		}

IL_005f:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
		}

IL_0067:
		{
			RuntimeObject* L_9 = __this->get_U3CU3E7__wrap1_5();
			NullCheck(L_9);
			bool L_10;
			L_10 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_9);
			if (L_10)
			{
				goto IL_0034;
			}
		}

IL_0074:
		{
			U3CFilterTasksFromWorkItemsU3Ed__7_U3CU3Em__Finally1_m476099EA43DB4B5AF00D9DA5540DB07E04AB2AD2(__this, /*hidden argument*/NULL);
			__this->set_U3CU3E7__wrap1_5((RuntimeObject*)NULL);
			V_0 = (bool)0;
			goto IL_008c;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_0085;
	}

FAULT_0085:
	{ // begin fault (depth: 1)
		U3CFilterTasksFromWorkItemsU3Ed__7_System_IDisposable_Dispose_m26961A724928D49280CDA83AC6365DDCF3C4BA5F(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(133)
	} // end fault
	IL2CPP_CLEANUP(133)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_008c:
	{
		bool L_11 = V_0;
		return L_11;
	}
}
// System.Void System.Threading.Tasks.ThreadPoolTaskScheduler/<FilterTasksFromWorkItems>d__7::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFilterTasksFromWorkItemsU3Ed__7_U3CU3Em__Finally1_m476099EA43DB4B5AF00D9DA5540DB07E04AB2AD2 (U3CFilterTasksFromWorkItemsU3Ed__7_tD560179E466F2CE2E14AD67C91EC9739A58C9040 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0((-1));
		RuntimeObject* L_0 = __this->get_U3CU3E7__wrap1_5();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_U3CU3E7__wrap1_5();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Threading.Tasks.Task System.Threading.Tasks.ThreadPoolTaskScheduler/<FilterTasksFromWorkItems>d__7::System.Collections.Generic.IEnumerator<System.Threading.Tasks.Task>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * U3CFilterTasksFromWorkItemsU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_Threading_Tasks_TaskU3E_get_Current_mA91B0C1F3F305242FEC57C66DBC3ADF8688B0BA5 (U3CFilterTasksFromWorkItemsU3Ed__7_tD560179E466F2CE2E14AD67C91EC9739A58C9040 * __this, const RuntimeMethod* method)
{
	{
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void System.Threading.Tasks.ThreadPoolTaskScheduler/<FilterTasksFromWorkItems>d__7::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFilterTasksFromWorkItemsU3Ed__7_System_Collections_IEnumerator_Reset_m3F62A621D9462B90A2EAC42EAFE37D5B780467BE (U3CFilterTasksFromWorkItemsU3Ed__7_tD560179E466F2CE2E14AD67C91EC9739A58C9040 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CFilterTasksFromWorkItemsU3Ed__7_System_Collections_IEnumerator_Reset_m3F62A621D9462B90A2EAC42EAFE37D5B780467BE_RuntimeMethod_var)));
	}
}
// System.Object System.Threading.Tasks.ThreadPoolTaskScheduler/<FilterTasksFromWorkItems>d__7::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CFilterTasksFromWorkItemsU3Ed__7_System_Collections_IEnumerator_get_Current_m9AACFBD47A0A6149BB2794E649D34D1AE9FEFA4B (U3CFilterTasksFromWorkItemsU3Ed__7_tD560179E466F2CE2E14AD67C91EC9739A58C9040 * __this, const RuntimeMethod* method)
{
	{
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Threading.Tasks.Task> System.Threading.Tasks.ThreadPoolTaskScheduler/<FilterTasksFromWorkItems>d__7::System.Collections.Generic.IEnumerable<System.Threading.Tasks.Task>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFilterTasksFromWorkItemsU3Ed__7_System_Collections_Generic_IEnumerableU3CSystem_Threading_Tasks_TaskU3E_GetEnumerator_m88EBD0527BD0EF15970DCC796BA5E96971A8F263 (U3CFilterTasksFromWorkItemsU3Ed__7_tD560179E466F2CE2E14AD67C91EC9739A58C9040 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CFilterTasksFromWorkItemsU3Ed__7_tD560179E466F2CE2E14AD67C91EC9739A58C9040_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CFilterTasksFromWorkItemsU3Ed__7_tD560179E466F2CE2E14AD67C91EC9739A58C9040 * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_0029;
	}

IL_0022:
	{
		U3CFilterTasksFromWorkItemsU3Ed__7_tD560179E466F2CE2E14AD67C91EC9739A58C9040 * L_3 = (U3CFilterTasksFromWorkItemsU3Ed__7_tD560179E466F2CE2E14AD67C91EC9739A58C9040 *)il2cpp_codegen_object_new(U3CFilterTasksFromWorkItemsU3Ed__7_tD560179E466F2CE2E14AD67C91EC9739A58C9040_il2cpp_TypeInfo_var);
		U3CFilterTasksFromWorkItemsU3Ed__7__ctor_m03A64629D95A588A0FFE43D8881C698928A4173E(L_3, 0, /*hidden argument*/NULL);
		V_0 = L_3;
	}

IL_0029:
	{
		U3CFilterTasksFromWorkItemsU3Ed__7_tD560179E466F2CE2E14AD67C91EC9739A58C9040 * L_4 = V_0;
		RuntimeObject* L_5 = __this->get_U3CU3E3__tpwItems_4();
		NullCheck(L_4);
		L_4->set_tpwItems_3(L_5);
		U3CFilterTasksFromWorkItemsU3Ed__7_tD560179E466F2CE2E14AD67C91EC9739A58C9040 * L_6 = V_0;
		return L_6;
	}
}
// System.Collections.IEnumerator System.Threading.Tasks.ThreadPoolTaskScheduler/<FilterTasksFromWorkItems>d__7::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFilterTasksFromWorkItemsU3Ed__7_System_Collections_IEnumerable_GetEnumerator_m37910DAC2EF5B15CC563EE0D59F2537BA1A20F73 (U3CFilterTasksFromWorkItemsU3Ed__7_tD560179E466F2CE2E14AD67C91EC9739A58C9040 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = U3CFilterTasksFromWorkItemsU3Ed__7_System_Collections_Generic_IEnumerableU3CSystem_Threading_Tasks_TaskU3E_GetEnumerator_m88EBD0527BD0EF15970DCC796BA5E96971A8F263(__this, /*hidden argument*/NULL);
		return L_0;
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
// System.Void System.Threading.ThreadPoolWorkQueue/QueueSegment::GetIndexes(System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QueueSegment_GetIndexes_m178DEB794F799E4BEF2A971A973455C5BC17EE65 (QueueSegment_tBF384DF1C15001FBEDB17378EB22EA233A89A0A4 * __this, int32_t* ___upper0, int32_t* ___lower1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_indexes_1();
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		int32_t* L_1 = ___upper0;
		int32_t L_2 = V_0;
		*((int32_t*)L_1) = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_2>>(int32_t)((int32_t)16)))&(int32_t)((int32_t)65535)));
		int32_t* L_3 = ___lower1;
		int32_t L_4 = V_0;
		*((int32_t*)L_3) = (int32_t)((int32_t)((int32_t)L_4&(int32_t)((int32_t)65535)));
		return;
	}
}
// System.Boolean System.Threading.ThreadPoolWorkQueue/QueueSegment::CompareExchangeIndexes(System.Int32&,System.Int32,System.Int32&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool QueueSegment_CompareExchangeIndexes_mBC9DF7132FB083719B384F82B3DBE4D044EC348A (QueueSegment_tBF384DF1C15001FBEDB17378EB22EA233A89A0A4 * __this, int32_t* ___prevUpper0, int32_t ___newUpper1, int32_t* ___prevLower2, int32_t ___newLower3, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t* L_0 = ___prevUpper0;
		int32_t L_1 = *((int32_t*)L_0);
		int32_t* L_2 = ___prevLower2;
		int32_t L_3 = *((int32_t*)L_2);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_1<<(int32_t)((int32_t)16)))|(int32_t)((int32_t)((int32_t)L_3&(int32_t)((int32_t)65535)))));
		int32_t L_4 = ___newUpper1;
		int32_t L_5 = ___newLower3;
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)L_4<<(int32_t)((int32_t)16)))|(int32_t)((int32_t)((int32_t)L_5&(int32_t)((int32_t)65535)))));
		int32_t* L_6 = __this->get_address_of_indexes_1();
		il2cpp_codegen_memory_barrier();
		int32_t L_7 = V_1;
		int32_t L_8 = V_0;
		int32_t L_9;
		L_9 = Interlocked_CompareExchange_m317AD9524376B7BE74DD9069346E345F2B131382((int32_t*)L_6, L_7, L_8, /*hidden argument*/NULL);
		V_2 = L_9;
		int32_t* L_10 = ___prevUpper0;
		int32_t L_11 = V_2;
		*((int32_t*)L_10) = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_11>>(int32_t)((int32_t)16)))&(int32_t)((int32_t)65535)));
		int32_t* L_12 = ___prevLower2;
		int32_t L_13 = V_2;
		*((int32_t*)L_12) = (int32_t)((int32_t)((int32_t)L_13&(int32_t)((int32_t)65535)));
		int32_t L_14 = V_2;
		int32_t L_15 = V_0;
		return (bool)((((int32_t)L_14) == ((int32_t)L_15))? 1 : 0);
	}
}
// System.Void System.Threading.ThreadPoolWorkQueue/QueueSegment::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QueueSegment__ctor_mD1DED97C8BC1FBD4987B5A706AAFAD02EE6FAA0B (QueueSegment_tBF384DF1C15001FBEDB17378EB22EA233A89A0A4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IThreadPoolWorkItemU5BU5D_tA8F5E15B9A678486C494BA29BA2B36165FF28738_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		IThreadPoolWorkItemU5BU5D_tA8F5E15B9A678486C494BA29BA2B36165FF28738* L_0 = (IThreadPoolWorkItemU5BU5D_tA8F5E15B9A678486C494BA29BA2B36165FF28738*)(IThreadPoolWorkItemU5BU5D_tA8F5E15B9A678486C494BA29BA2B36165FF28738*)SZArrayNew(IThreadPoolWorkItemU5BU5D_tA8F5E15B9A678486C494BA29BA2B36165FF28738_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		__this->set_nodes_0(L_0);
		return;
	}
}
// System.Boolean System.Threading.ThreadPoolWorkQueue/QueueSegment::IsUsedUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool QueueSegment_IsUsedUp_m842AA2F2528B7FECFD6915AA125C8BD001EDB1F6 (QueueSegment_tBF384DF1C15001FBEDB17378EB22EA233A89A0A4 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		QueueSegment_GetIndexes_m178DEB794F799E4BEF2A971A973455C5BC17EE65(__this, (int32_t*)(&V_0), (int32_t*)(&V_1), /*hidden argument*/NULL);
		int32_t L_0 = V_0;
		IThreadPoolWorkItemU5BU5D_tA8F5E15B9A678486C494BA29BA2B36165FF28738* L_1 = __this->get_nodes_0();
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))))))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_2 = V_1;
		IThreadPoolWorkItemU5BU5D_tA8F5E15B9A678486C494BA29BA2B36165FF28738* L_3 = __this->get_nodes_0();
		NullCheck(L_3);
		return (bool)((((int32_t)L_2) == ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)))))? 1 : 0);
	}

IL_0021:
	{
		return (bool)0;
	}
}
// System.Boolean System.Threading.ThreadPoolWorkQueue/QueueSegment::TryEnqueue(System.Threading.IThreadPoolWorkItem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool QueueSegment_TryEnqueue_m4E5A4C5317AF2C3367C1F1F88F332E9B0A2FA6A0 (QueueSegment_tBF384DF1C15001FBEDB17378EB22EA233A89A0A4 * __this, RuntimeObject* ___node0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		QueueSegment_GetIndexes_m178DEB794F799E4BEF2A971A973455C5BC17EE65(__this, (int32_t*)(&V_0), (int32_t*)(&V_1), /*hidden argument*/NULL);
	}

IL_000a:
	{
		int32_t L_0 = V_0;
		IThreadPoolWorkItemU5BU5D_tA8F5E15B9A678486C494BA29BA2B36165FF28738* L_1 = __this->get_nodes_0();
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))))))
		{
			goto IL_0017;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = V_1;
		bool L_4;
		L_4 = QueueSegment_CompareExchangeIndexes_mBC9DF7132FB083719B384F82B3DBE4D044EC348A(__this, (int32_t*)(&V_0), ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)), (int32_t*)(&V_1), L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_000a;
		}
	}
	{
		IThreadPoolWorkItemU5BU5D_tA8F5E15B9A678486C494BA29BA2B36165FF28738* L_5 = __this->get_nodes_0();
		int32_t L_6 = V_0;
		NullCheck(L_5);
		RuntimeObject* L_7 = ___node0;
		VolatileWrite((RuntimeObject**)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6))), L_7);
		return (bool)1;
	}
}
// System.Boolean System.Threading.ThreadPoolWorkQueue/QueueSegment::TryDequeue(System.Threading.IThreadPoolWorkItem&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool QueueSegment_TryDequeue_m0D0D6C2BB643668C3C76779A03B4323FB736EEAD (QueueSegment_tBF384DF1C15001FBEDB17378EB22EA233A89A0A4 * __this, RuntimeObject** ___node0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SpinWait_tEBEEDAE5AEEBBDDEA635932A22308A8398C9AED9  V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject* V_3 = NULL;
	{
		QueueSegment_GetIndexes_m178DEB794F799E4BEF2A971A973455C5BC17EE65(__this, (int32_t*)(&V_0), (int32_t*)(&V_1), /*hidden argument*/NULL);
	}

IL_000a:
	{
		int32_t L_0 = V_1;
		int32_t L_1 = V_0;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject** L_2 = ___node0;
		*((RuntimeObject **)L_2) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_2, (void*)(RuntimeObject *)NULL);
		return (bool)0;
	}

IL_0013:
	{
		int32_t L_3 = V_0;
		int32_t L_4 = V_1;
		bool L_5;
		L_5 = QueueSegment_CompareExchangeIndexes_mBC9DF7132FB083719B384F82B3DBE4D044EC348A(__this, (int32_t*)(&V_0), L_3, (int32_t*)(&V_1), ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1)), /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_000a;
		}
	}
	{
		il2cpp_codegen_initobj((&V_2), sizeof(SpinWait_tEBEEDAE5AEEBBDDEA635932A22308A8398C9AED9 ));
		goto IL_0034;
	}

IL_002d:
	{
		SpinWait_SpinOnce_m79A8F770ED24E400B6AEFA421A33084CA54E59DB((SpinWait_tEBEEDAE5AEEBBDDEA635932A22308A8398C9AED9 *)(&V_2), /*hidden argument*/NULL);
	}

IL_0034:
	{
		RuntimeObject** L_6 = ___node0;
		IThreadPoolWorkItemU5BU5D_tA8F5E15B9A678486C494BA29BA2B36165FF28738* L_7 = __this->get_nodes_0();
		int32_t L_8 = V_1;
		NullCheck(L_7);
		RuntimeObject* L_9;
		L_9 = VolatileRead((RuntimeObject**)((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8))));
		RuntimeObject* L_10 = L_9;
		V_3 = L_10;
		*((RuntimeObject **)L_6) = (RuntimeObject *)L_10;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_6, (void*)(RuntimeObject *)L_10);
		RuntimeObject* L_11 = V_3;
		if (!L_11)
		{
			goto IL_002d;
		}
	}
	{
		IThreadPoolWorkItemU5BU5D_tA8F5E15B9A678486C494BA29BA2B36165FF28738* L_12 = __this->get_nodes_0();
		int32_t L_13 = V_1;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, NULL);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (RuntimeObject*)NULL);
		return (bool)1;
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
// System.Void System.Threading.ThreadPoolWorkQueue/WorkStealingQueue::LocalPush(System.Threading.IThreadPoolWorkItem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkStealingQueue_LocalPush_m92BFE3A4F13F918D1EDF904FA311778CFEA58918 (WorkStealingQueue_t0D430FD823CAB6C050301484CE7516E1573728A0 * __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IThreadPoolWorkItemU5BU5D_tA8F5E15B9A678486C494BA29BA2B36165FF28738_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	IThreadPoolWorkItemU5BU5D_tA8F5E15B9A678486C494BA29BA2B36165FF28738* V_5 = NULL;
	int32_t V_6 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		int32_t L_0 = __this->get_m_tailIndex_3();
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)2147483647LL)))))
		{
			goto IL_0075;
		}
	}
	{
		V_1 = (bool)0;
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		{
			SpinLock_t9860D503E59EFE08CF5241E2BA0C33397BF78F5D * L_2 = __this->get_address_of_m_foreignLock_4();
			SpinLock_Enter_mB10F73DB34FFE5F8FC85FA8B85A14ED48379C96C((SpinLock_t9860D503E59EFE08CF5241E2BA0C33397BF78F5D *)L_2, (bool*)(&V_1), /*hidden argument*/NULL);
			int32_t L_3 = __this->get_m_tailIndex_3();
			il2cpp_codegen_memory_barrier();
			if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)2147483647LL)))))
			{
				goto IL_0063;
			}
		}

IL_002f:
		{
			int32_t L_4 = __this->get_m_headIndex_2();
			il2cpp_codegen_memory_barrier();
			int32_t L_5 = __this->get_m_mask_1();
			il2cpp_codegen_memory_barrier();
			il2cpp_codegen_memory_barrier();
			__this->set_m_headIndex_2(((int32_t)((int32_t)L_4&(int32_t)L_5)));
			int32_t L_6 = __this->get_m_tailIndex_3();
			il2cpp_codegen_memory_barrier();
			int32_t L_7 = __this->get_m_mask_1();
			il2cpp_codegen_memory_barrier();
			int32_t L_8 = ((int32_t)((int32_t)L_6&(int32_t)L_7));
			V_0 = L_8;
			il2cpp_codegen_memory_barrier();
			__this->set_m_tailIndex_3(L_8);
		}

IL_0063:
		{
			IL2CPP_LEAVE(0x75, FINALLY_0065);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0065;
	}

FINALLY_0065:
	{ // begin finally (depth: 1)
		{
			bool L_9 = V_1;
			if (!L_9)
			{
				goto IL_0074;
			}
		}

IL_0068:
		{
			SpinLock_t9860D503E59EFE08CF5241E2BA0C33397BF78F5D * L_10 = __this->get_address_of_m_foreignLock_4();
			SpinLock_Exit_m1E557B43BDB04736F956C50716DF29AEF2A14B4D((SpinLock_t9860D503E59EFE08CF5241E2BA0C33397BF78F5D *)L_10, (bool)1, /*hidden argument*/NULL);
		}

IL_0074:
		{
			IL2CPP_END_FINALLY(101)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(101)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x75, IL_0075)
	}

IL_0075:
	{
		int32_t L_11 = V_0;
		int32_t L_12 = __this->get_m_headIndex_2();
		il2cpp_codegen_memory_barrier();
		int32_t L_13 = __this->get_m_mask_1();
		il2cpp_codegen_memory_barrier();
		if ((((int32_t)L_11) >= ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)L_13)))))
		{
			goto IL_00b2;
		}
	}
	{
		IThreadPoolWorkItemU5BU5D_tA8F5E15B9A678486C494BA29BA2B36165FF28738* L_14 = __this->get_m_array_0();
		il2cpp_codegen_memory_barrier();
		int32_t L_15 = V_0;
		int32_t L_16 = __this->get_m_mask_1();
		il2cpp_codegen_memory_barrier();
		NullCheck(L_14);
		RuntimeObject* L_17 = ___obj0;
		VolatileWrite((RuntimeObject**)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_15&(int32_t)L_16))))), L_17);
		int32_t L_18 = V_0;
		il2cpp_codegen_memory_barrier();
		__this->set_m_tailIndex_3(((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1)));
		return;
	}

IL_00b2:
	{
		V_2 = (bool)0;
	}

IL_00b4:
	try
	{ // begin try (depth: 1)
		{
			SpinLock_t9860D503E59EFE08CF5241E2BA0C33397BF78F5D * L_19 = __this->get_address_of_m_foreignLock_4();
			SpinLock_Enter_mB10F73DB34FFE5F8FC85FA8B85A14ED48379C96C((SpinLock_t9860D503E59EFE08CF5241E2BA0C33397BF78F5D *)L_19, (bool*)(&V_2), /*hidden argument*/NULL);
			int32_t L_20 = __this->get_m_headIndex_2();
			il2cpp_codegen_memory_barrier();
			V_3 = L_20;
			int32_t L_21 = __this->get_m_tailIndex_3();
			il2cpp_codegen_memory_barrier();
			int32_t L_22 = __this->get_m_headIndex_2();
			il2cpp_codegen_memory_barrier();
			V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)L_22));
			int32_t L_23 = V_4;
			int32_t L_24 = __this->get_m_mask_1();
			il2cpp_codegen_memory_barrier();
			if ((((int32_t)L_23) < ((int32_t)L_24)))
			{
				goto IL_0163;
			}
		}

IL_00e9:
		{
			IThreadPoolWorkItemU5BU5D_tA8F5E15B9A678486C494BA29BA2B36165FF28738* L_25 = __this->get_m_array_0();
			il2cpp_codegen_memory_barrier();
			NullCheck(L_25);
			IThreadPoolWorkItemU5BU5D_tA8F5E15B9A678486C494BA29BA2B36165FF28738* L_26 = (IThreadPoolWorkItemU5BU5D_tA8F5E15B9A678486C494BA29BA2B36165FF28738*)(IThreadPoolWorkItemU5BU5D_tA8F5E15B9A678486C494BA29BA2B36165FF28738*)SZArrayNew(IThreadPoolWorkItemU5BU5D_tA8F5E15B9A678486C494BA29BA2B36165FF28738_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length)))<<(int32_t)1)));
			V_5 = L_26;
			V_6 = 0;
			goto IL_0122;
		}

IL_0101:
		{
			IThreadPoolWorkItemU5BU5D_tA8F5E15B9A678486C494BA29BA2B36165FF28738* L_27 = V_5;
			int32_t L_28 = V_6;
			IThreadPoolWorkItemU5BU5D_tA8F5E15B9A678486C494BA29BA2B36165FF28738* L_29 = __this->get_m_array_0();
			il2cpp_codegen_memory_barrier();
			int32_t L_30 = V_6;
			int32_t L_31 = V_3;
			int32_t L_32 = __this->get_m_mask_1();
			il2cpp_codegen_memory_barrier();
			NullCheck(L_29);
			int32_t L_33 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)L_31))&(int32_t)L_32));
			RuntimeObject* L_34 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
			NullCheck(L_27);
			ArrayElementTypeCheck (L_27, L_34);
			(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (RuntimeObject*)L_34);
			int32_t L_35 = V_6;
			V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)1));
		}

IL_0122:
		{
			int32_t L_36 = V_6;
			IThreadPoolWorkItemU5BU5D_tA8F5E15B9A678486C494BA29BA2B36165FF28738* L_37 = __this->get_m_array_0();
			il2cpp_codegen_memory_barrier();
			NullCheck(L_37);
			if ((((int32_t)L_36) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_37)->max_length))))))
			{
				goto IL_0101;
			}
		}

IL_0130:
		{
			IThreadPoolWorkItemU5BU5D_tA8F5E15B9A678486C494BA29BA2B36165FF28738* L_38 = V_5;
			il2cpp_codegen_memory_barrier();
			__this->set_m_array_0(L_38);
			il2cpp_codegen_memory_barrier();
			__this->set_m_headIndex_2(0);
			int32_t L_39 = V_4;
			int32_t L_40 = L_39;
			V_0 = L_40;
			il2cpp_codegen_memory_barrier();
			__this->set_m_tailIndex_3(L_40);
			int32_t L_41 = __this->get_m_mask_1();
			il2cpp_codegen_memory_barrier();
			il2cpp_codegen_memory_barrier();
			__this->set_m_mask_1(((int32_t)((int32_t)((int32_t)((int32_t)L_41<<(int32_t)1))|(int32_t)1)));
		}

IL_0163:
		{
			IThreadPoolWorkItemU5BU5D_tA8F5E15B9A678486C494BA29BA2B36165FF28738* L_42 = __this->get_m_array_0();
			il2cpp_codegen_memory_barrier();
			int32_t L_43 = V_0;
			int32_t L_44 = __this->get_m_mask_1();
			il2cpp_codegen_memory_barrier();
			NullCheck(L_42);
			RuntimeObject* L_45 = ___obj0;
			VolatileWrite((RuntimeObject**)((L_42)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_43&(int32_t)L_44))))), L_45);
			int32_t L_46 = V_0;
			il2cpp_codegen_memory_barrier();
			__this->set_m_tailIndex_3(((int32_t)il2cpp_codegen_add((int32_t)L_46, (int32_t)1)));
			IL2CPP_LEAVE(0x19D, FINALLY_018d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_018d;
	}

FINALLY_018d:
	{ // begin finally (depth: 1)
		{
			bool L_47 = V_2;
			if (!L_47)
			{
				goto IL_019c;
			}
		}

IL_0190:
		{
			SpinLock_t9860D503E59EFE08CF5241E2BA0C33397BF78F5D * L_48 = __this->get_address_of_m_foreignLock_4();
			SpinLock_Exit_m1E557B43BDB04736F956C50716DF29AEF2A14B4D((SpinLock_t9860D503E59EFE08CF5241E2BA0C33397BF78F5D *)L_48, (bool)0, /*hidden argument*/NULL);
		}

IL_019c:
		{
			IL2CPP_END_FINALLY(397)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(397)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x19D, IL_019d)
	}

IL_019d:
	{
		return;
	}
}
// System.Boolean System.Threading.ThreadPoolWorkQueue/WorkStealingQueue::LocalFindAndPop(System.Threading.IThreadPoolWorkItem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WorkStealingQueue_LocalFindAndPop_mE985D8B9C6B06F5B009A7CF9DDB2834452EA84A5 (WorkStealingQueue_t0D430FD823CAB6C050301484CE7516E1573728A0 * __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		IThreadPoolWorkItemU5BU5D_tA8F5E15B9A678486C494BA29BA2B36165FF28738* L_0 = __this->get_m_array_0();
		il2cpp_codegen_memory_barrier();
		int32_t L_1 = __this->get_m_tailIndex_3();
		il2cpp_codegen_memory_barrier();
		int32_t L_2 = __this->get_m_mask_1();
		il2cpp_codegen_memory_barrier();
		NullCheck(L_0);
		int32_t L_3 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1))&(int32_t)L_2));
		RuntimeObject* L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		RuntimeObject* L_5 = ___obj0;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(RuntimeObject*)L_5))))
		{
			goto IL_002d;
		}
	}
	{
		bool L_6;
		L_6 = WorkStealingQueue_LocalPop_mAEB4C62E33AEED00E90F4FA1B027A9F1BCA450F8(__this, (RuntimeObject**)(&V_0), /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_002b;
		}
	}
	{
		return (bool)1;
	}

IL_002b:
	{
		return (bool)0;
	}

IL_002d:
	{
		int32_t L_7 = __this->get_m_tailIndex_3();
		il2cpp_codegen_memory_barrier();
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)2));
		goto IL_00f2;
	}

IL_003d:
	{
		IThreadPoolWorkItemU5BU5D_tA8F5E15B9A678486C494BA29BA2B36165FF28738* L_8 = __this->get_m_array_0();
		il2cpp_codegen_memory_barrier();
		int32_t L_9 = V_1;
		int32_t L_10 = __this->get_m_mask_1();
		il2cpp_codegen_memory_barrier();
		NullCheck(L_8);
		int32_t L_11 = ((int32_t)((int32_t)L_9&(int32_t)L_10));
		RuntimeObject* L_12 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		RuntimeObject* L_13 = ___obj0;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_12) == ((RuntimeObject*)(RuntimeObject*)L_13))))
		{
			goto IL_00ee;
		}
	}
	{
		V_2 = (bool)0;
	}

IL_0058:
	try
	{ // begin try (depth: 1)
		{
			SpinLock_t9860D503E59EFE08CF5241E2BA0C33397BF78F5D * L_14 = __this->get_address_of_m_foreignLock_4();
			SpinLock_Enter_mB10F73DB34FFE5F8FC85FA8B85A14ED48379C96C((SpinLock_t9860D503E59EFE08CF5241E2BA0C33397BF78F5D *)L_14, (bool*)(&V_2), /*hidden argument*/NULL);
			IThreadPoolWorkItemU5BU5D_tA8F5E15B9A678486C494BA29BA2B36165FF28738* L_15 = __this->get_m_array_0();
			il2cpp_codegen_memory_barrier();
			int32_t L_16 = V_1;
			int32_t L_17 = __this->get_m_mask_1();
			il2cpp_codegen_memory_barrier();
			NullCheck(L_15);
			int32_t L_18 = ((int32_t)((int32_t)L_16&(int32_t)L_17));
			RuntimeObject* L_19 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
			if (L_19)
			{
				goto IL_0081;
			}
		}

IL_007a:
		{
			V_3 = (bool)0;
			IL2CPP_LEAVE(0x102, FINALLY_00de);
		}

IL_0081:
		{
			IThreadPoolWorkItemU5BU5D_tA8F5E15B9A678486C494BA29BA2B36165FF28738* L_20 = __this->get_m_array_0();
			il2cpp_codegen_memory_barrier();
			int32_t L_21 = V_1;
			int32_t L_22 = __this->get_m_mask_1();
			il2cpp_codegen_memory_barrier();
			NullCheck(L_20);
			VolatileWrite((RuntimeObject**)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_21&(int32_t)L_22))))), (RuntimeObject*)NULL);
			int32_t L_23 = V_1;
			int32_t L_24 = __this->get_m_tailIndex_3();
			il2cpp_codegen_memory_barrier();
			if ((!(((uint32_t)L_23) == ((uint32_t)L_24))))
			{
				goto IL_00bd;
			}
		}

IL_00a9:
		{
			int32_t L_25 = __this->get_m_tailIndex_3();
			il2cpp_codegen_memory_barrier();
			il2cpp_codegen_memory_barrier();
			__this->set_m_tailIndex_3(((int32_t)il2cpp_codegen_subtract((int32_t)L_25, (int32_t)1)));
			goto IL_00da;
		}

IL_00bd:
		{
			int32_t L_26 = V_1;
			int32_t L_27 = __this->get_m_headIndex_2();
			il2cpp_codegen_memory_barrier();
			if ((!(((uint32_t)L_26) == ((uint32_t)L_27))))
			{
				goto IL_00da;
			}
		}

IL_00c8:
		{
			int32_t L_28 = __this->get_m_headIndex_2();
			il2cpp_codegen_memory_barrier();
			il2cpp_codegen_memory_barrier();
			__this->set_m_headIndex_2(((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1)));
		}

IL_00da:
		{
			V_3 = (bool)1;
			IL2CPP_LEAVE(0x102, FINALLY_00de);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00de;
	}

FINALLY_00de:
	{ // begin finally (depth: 1)
		{
			bool L_29 = V_2;
			if (!L_29)
			{
				goto IL_00ed;
			}
		}

IL_00e1:
		{
			SpinLock_t9860D503E59EFE08CF5241E2BA0C33397BF78F5D * L_30 = __this->get_address_of_m_foreignLock_4();
			SpinLock_Exit_m1E557B43BDB04736F956C50716DF29AEF2A14B4D((SpinLock_t9860D503E59EFE08CF5241E2BA0C33397BF78F5D *)L_30, (bool)0, /*hidden argument*/NULL);
		}

IL_00ed:
		{
			IL2CPP_END_FINALLY(222)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(222)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x102, IL_0102)
	}

IL_00ee:
	{
		int32_t L_31 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_31, (int32_t)1));
	}

IL_00f2:
	{
		int32_t L_32 = V_1;
		int32_t L_33 = __this->get_m_headIndex_2();
		il2cpp_codegen_memory_barrier();
		if ((((int32_t)L_32) >= ((int32_t)L_33)))
		{
			goto IL_003d;
		}
	}
	{
		return (bool)0;
	}

IL_0102:
	{
		bool L_34 = V_3;
		return L_34;
	}
}
// System.Boolean System.Threading.ThreadPoolWorkQueue/WorkStealingQueue::LocalPop(System.Threading.IThreadPoolWorkItem&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WorkStealingQueue_LocalPop_mAEB4C62E33AEED00E90F4FA1B027A9F1BCA450F8 (WorkStealingQueue_t0D430FD823CAB6C050301484CE7516E1573728A0 * __this, RuntimeObject** ___obj0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;

IL_0000:
	{
		int32_t L_0 = __this->get_m_tailIndex_3();
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		int32_t L_1 = __this->get_m_headIndex_2();
		il2cpp_codegen_memory_barrier();
		int32_t L_2 = V_0;
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_0019;
		}
	}
	{
		RuntimeObject** L_3 = ___obj0;
		*((RuntimeObject **)L_3) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_3, (void*)(RuntimeObject *)NULL);
		return (bool)0;
	}

IL_0019:
	{
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)1));
		int32_t* L_5 = __this->get_address_of_m_tailIndex_3();
		il2cpp_codegen_memory_barrier();
		int32_t L_6 = V_0;
		int32_t L_7;
		L_7 = Interlocked_Exchange_mCB69CAC317F723A1CB6B52194C5917B49C456794((int32_t*)L_5, L_6, /*hidden argument*/NULL);
		int32_t L_8 = __this->get_m_headIndex_2();
		il2cpp_codegen_memory_barrier();
		int32_t L_9 = V_0;
		if ((((int32_t)L_8) > ((int32_t)L_9)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_10 = V_0;
		int32_t L_11 = __this->get_m_mask_1();
		il2cpp_codegen_memory_barrier();
		V_1 = ((int32_t)((int32_t)L_10&(int32_t)L_11));
		RuntimeObject** L_12 = ___obj0;
		IThreadPoolWorkItemU5BU5D_tA8F5E15B9A678486C494BA29BA2B36165FF28738* L_13 = __this->get_m_array_0();
		il2cpp_codegen_memory_barrier();
		int32_t L_14 = V_1;
		NullCheck(L_13);
		RuntimeObject* L_15;
		L_15 = VolatileRead((RuntimeObject**)((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14))));
		*((RuntimeObject **)L_12) = (RuntimeObject *)L_15;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_12, (void*)(RuntimeObject *)L_15);
		RuntimeObject** L_16 = ___obj0;
		RuntimeObject* L_17 = *((RuntimeObject**)L_16);
		if (!L_17)
		{
			goto IL_0000;
		}
	}
	{
		IThreadPoolWorkItemU5BU5D_tA8F5E15B9A678486C494BA29BA2B36165FF28738* L_18 = __this->get_m_array_0();
		il2cpp_codegen_memory_barrier();
		int32_t L_19 = V_1;
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, NULL);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (RuntimeObject*)NULL);
		return (bool)1;
	}

IL_0066:
	{
		V_2 = (bool)0;
	}

IL_0068:
	try
	{ // begin try (depth: 1)
		{
			SpinLock_t9860D503E59EFE08CF5241E2BA0C33397BF78F5D * L_20 = __this->get_address_of_m_foreignLock_4();
			SpinLock_Enter_mB10F73DB34FFE5F8FC85FA8B85A14ED48379C96C((SpinLock_t9860D503E59EFE08CF5241E2BA0C33397BF78F5D *)L_20, (bool*)(&V_2), /*hidden argument*/NULL);
			int32_t L_21 = __this->get_m_headIndex_2();
			il2cpp_codegen_memory_barrier();
			int32_t L_22 = V_0;
			if ((((int32_t)L_21) > ((int32_t)L_22)))
			{
				goto IL_00b9;
			}
		}

IL_0080:
		{
			int32_t L_23 = V_0;
			int32_t L_24 = __this->get_m_mask_1();
			il2cpp_codegen_memory_barrier();
			V_3 = ((int32_t)((int32_t)L_23&(int32_t)L_24));
			RuntimeObject** L_25 = ___obj0;
			IThreadPoolWorkItemU5BU5D_tA8F5E15B9A678486C494BA29BA2B36165FF28738* L_26 = __this->get_m_array_0();
			il2cpp_codegen_memory_barrier();
			int32_t L_27 = V_3;
			NullCheck(L_26);
			RuntimeObject* L_28;
			L_28 = VolatileRead((RuntimeObject**)((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27))));
			*((RuntimeObject **)L_25) = (RuntimeObject *)L_28;
			Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_25, (void*)(RuntimeObject *)L_28);
			RuntimeObject** L_29 = ___obj0;
			RuntimeObject* L_30 = *((RuntimeObject**)L_29);
			if (L_30)
			{
				goto IL_00a9;
			}
		}

IL_00a4:
		{
			IL2CPP_LEAVE(0x0, FINALLY_00cc);
		}

IL_00a9:
		{
			IThreadPoolWorkItemU5BU5D_tA8F5E15B9A678486C494BA29BA2B36165FF28738* L_31 = __this->get_m_array_0();
			il2cpp_codegen_memory_barrier();
			int32_t L_32 = V_3;
			NullCheck(L_31);
			ArrayElementTypeCheck (L_31, NULL);
			(L_31)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)NULL);
			V_4 = (bool)1;
			IL2CPP_LEAVE(0xDC, FINALLY_00cc);
		}

IL_00b9:
		{
			int32_t L_33 = V_0;
			il2cpp_codegen_memory_barrier();
			__this->set_m_tailIndex_3(((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1)));
			RuntimeObject** L_34 = ___obj0;
			*((RuntimeObject **)L_34) = (RuntimeObject *)NULL;
			Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_34, (void*)(RuntimeObject *)NULL);
			V_4 = (bool)0;
			IL2CPP_LEAVE(0xDC, FINALLY_00cc);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00cc;
	}

FINALLY_00cc:
	{ // begin finally (depth: 1)
		{
			bool L_35 = V_2;
			if (!L_35)
			{
				goto IL_00db;
			}
		}

IL_00cf:
		{
			SpinLock_t9860D503E59EFE08CF5241E2BA0C33397BF78F5D * L_36 = __this->get_address_of_m_foreignLock_4();
			SpinLock_Exit_m1E557B43BDB04736F956C50716DF29AEF2A14B4D((SpinLock_t9860D503E59EFE08CF5241E2BA0C33397BF78F5D *)L_36, (bool)0, /*hidden argument*/NULL);
		}

IL_00db:
		{
			IL2CPP_END_FINALLY(204)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(204)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x0, IL_0000)
		IL2CPP_JUMP_TBL(0xDC, IL_00dc)
	}

IL_00dc:
	{
		bool L_37 = V_4;
		return L_37;
	}
}
// System.Boolean System.Threading.ThreadPoolWorkQueue/WorkStealingQueue::TrySteal(System.Threading.IThreadPoolWorkItem&,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WorkStealingQueue_TrySteal_m0AD529C05511D53702FFD7E2BF7FC84ED4F94201 (WorkStealingQueue_t0D430FD823CAB6C050301484CE7516E1573728A0 * __this, RuntimeObject** ___obj0, bool* ___missedSteal1, const RuntimeMethod* method)
{
	{
		RuntimeObject** L_0 = ___obj0;
		bool* L_1 = ___missedSteal1;
		bool L_2;
		L_2 = WorkStealingQueue_TrySteal_m3ACAA9B2078703F8217D3B2702EDDE8D054897BD(__this, (RuntimeObject**)L_0, (bool*)L_1, 0, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean System.Threading.ThreadPoolWorkQueue/WorkStealingQueue::TrySteal(System.Threading.IThreadPoolWorkItem&,System.Boolean&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WorkStealingQueue_TrySteal_m3ACAA9B2078703F8217D3B2702EDDE8D054897BD (WorkStealingQueue_t0D430FD823CAB6C050301484CE7516E1573728A0 * __this, RuntimeObject** ___obj0, bool* ___missedSteal1, int32_t ___millisecondsTimeout2, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	{
		RuntimeObject** L_0 = ___obj0;
		*((RuntimeObject **)L_0) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_0, (void*)(RuntimeObject *)NULL);
	}

IL_0003:
	{
		int32_t L_1 = __this->get_m_headIndex_2();
		il2cpp_codegen_memory_barrier();
		int32_t L_2 = __this->get_m_tailIndex_3();
		il2cpp_codegen_memory_barrier();
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_0017;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		V_0 = (bool)0;
	}

IL_0019:
	try
	{ // begin try (depth: 1)
		{
			SpinLock_t9860D503E59EFE08CF5241E2BA0C33397BF78F5D * L_3 = __this->get_address_of_m_foreignLock_4();
			int32_t L_4 = ___millisecondsTimeout2;
			SpinLock_TryEnter_mF817DF2D24635A1E69D35F97F4F03F6DE788A114((SpinLock_t9860D503E59EFE08CF5241E2BA0C33397BF78F5D *)L_3, L_4, (bool*)(&V_0), /*hidden argument*/NULL);
			bool L_5 = V_0;
			if (!L_5)
			{
				goto IL_0093;
			}
		}

IL_002a:
		{
			int32_t L_6 = __this->get_m_headIndex_2();
			il2cpp_codegen_memory_barrier();
			V_1 = L_6;
			int32_t* L_7 = __this->get_address_of_m_headIndex_2();
			il2cpp_codegen_memory_barrier();
			int32_t L_8 = V_1;
			int32_t L_9;
			L_9 = Interlocked_Exchange_mCB69CAC317F723A1CB6B52194C5917B49C456794((int32_t*)L_7, ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1)), /*hidden argument*/NULL);
			int32_t L_10 = V_1;
			int32_t L_11 = __this->get_m_tailIndex_3();
			il2cpp_codegen_memory_barrier();
			if ((((int32_t)L_10) >= ((int32_t)L_11)))
			{
				goto IL_0082;
			}
		}

IL_004d:
		{
			int32_t L_12 = V_1;
			int32_t L_13 = __this->get_m_mask_1();
			il2cpp_codegen_memory_barrier();
			V_2 = ((int32_t)((int32_t)L_12&(int32_t)L_13));
			RuntimeObject** L_14 = ___obj0;
			IThreadPoolWorkItemU5BU5D_tA8F5E15B9A678486C494BA29BA2B36165FF28738* L_15 = __this->get_m_array_0();
			il2cpp_codegen_memory_barrier();
			int32_t L_16 = V_2;
			NullCheck(L_15);
			RuntimeObject* L_17;
			L_17 = VolatileRead((RuntimeObject**)((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16))));
			*((RuntimeObject **)L_14) = (RuntimeObject *)L_17;
			Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_14, (void*)(RuntimeObject *)L_17);
			RuntimeObject** L_18 = ___obj0;
			RuntimeObject* L_19 = *((RuntimeObject**)L_18);
			if (L_19)
			{
				goto IL_0073;
			}
		}

IL_0071:
		{
			IL2CPP_LEAVE(0x3, FINALLY_0098);
		}

IL_0073:
		{
			IThreadPoolWorkItemU5BU5D_tA8F5E15B9A678486C494BA29BA2B36165FF28738* L_20 = __this->get_m_array_0();
			il2cpp_codegen_memory_barrier();
			int32_t L_21 = V_2;
			NullCheck(L_20);
			ArrayElementTypeCheck (L_20, NULL);
			(L_20)->SetAt(static_cast<il2cpp_array_size_t>(L_21), (RuntimeObject*)NULL);
			V_3 = (bool)1;
			IL2CPP_LEAVE(0xAA, FINALLY_0098);
		}

IL_0082:
		{
			int32_t L_22 = V_1;
			il2cpp_codegen_memory_barrier();
			__this->set_m_headIndex_2(L_22);
			RuntimeObject** L_23 = ___obj0;
			*((RuntimeObject **)L_23) = (RuntimeObject *)NULL;
			Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_23, (void*)(RuntimeObject *)NULL);
			bool* L_24 = ___missedSteal1;
			*((int8_t*)L_24) = (int8_t)1;
			IL2CPP_LEAVE(0xA8, FINALLY_0098);
		}

IL_0093:
		{
			bool* L_25 = ___missedSteal1;
			*((int8_t*)L_25) = (int8_t)1;
			IL2CPP_LEAVE(0xA8, FINALLY_0098);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0098;
	}

FINALLY_0098:
	{ // begin finally (depth: 1)
		{
			bool L_26 = V_0;
			if (!L_26)
			{
				goto IL_00a7;
			}
		}

IL_009b:
		{
			SpinLock_t9860D503E59EFE08CF5241E2BA0C33397BF78F5D * L_27 = __this->get_address_of_m_foreignLock_4();
			SpinLock_Exit_m1E557B43BDB04736F956C50716DF29AEF2A14B4D((SpinLock_t9860D503E59EFE08CF5241E2BA0C33397BF78F5D *)L_27, (bool)0, /*hidden argument*/NULL);
		}

IL_00a7:
		{
			IL2CPP_END_FINALLY(152)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(152)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x3, IL_0003)
		IL2CPP_JUMP_TBL(0xAA, IL_00aa)
		IL2CPP_JUMP_TBL(0xA8, IL_00a8)
	}

IL_00a8:
	{
		return (bool)0;
	}

IL_00aa:
	{
		bool L_28 = V_3;
		return L_28;
	}
}
// System.Void System.Threading.ThreadPoolWorkQueue/WorkStealingQueue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkStealingQueue__ctor_m985BDA69E6EEE3BCC352B6BF8BC4D24C11E8F988 (WorkStealingQueue_t0D430FD823CAB6C050301484CE7516E1573728A0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IThreadPoolWorkItemU5BU5D_tA8F5E15B9A678486C494BA29BA2B36165FF28738_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IThreadPoolWorkItemU5BU5D_tA8F5E15B9A678486C494BA29BA2B36165FF28738* L_0 = (IThreadPoolWorkItemU5BU5D_tA8F5E15B9A678486C494BA29BA2B36165FF28738*)(IThreadPoolWorkItemU5BU5D_tA8F5E15B9A678486C494BA29BA2B36165FF28738*)SZArrayNew(IThreadPoolWorkItemU5BU5D_tA8F5E15B9A678486C494BA29BA2B36165FF28738_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		il2cpp_codegen_memory_barrier();
		__this->set_m_array_0(L_0);
		il2cpp_codegen_memory_barrier();
		__this->set_m_mask_1(((int32_t)31));
		SpinLock_t9860D503E59EFE08CF5241E2BA0C33397BF78F5D  L_1;
		memset((&L_1), 0, sizeof(L_1));
		SpinLock__ctor_mA76B573975917A3D78DC878D6281196065FC9128((&L_1), (bool)0, /*hidden argument*/NULL);
		__this->set_m_foreignLock_4(L_1);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// Conversion methods for marshalling of: System.Globalization.TimeSpanFormat/FormatLiterals
IL2CPP_EXTERN_C void FormatLiterals_t8EC4E080425C3E3AE6627A6BB7F5B487680E3C94_marshal_pinvoke(const FormatLiterals_t8EC4E080425C3E3AE6627A6BB7F5B487680E3C94& unmarshaled, FormatLiterals_t8EC4E080425C3E3AE6627A6BB7F5B487680E3C94_marshaled_pinvoke& marshaled)
{
	Exception_t* ___literals_6Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'literals' of type 'FormatLiterals'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___literals_6Exception, NULL);
}
IL2CPP_EXTERN_C void FormatLiterals_t8EC4E080425C3E3AE6627A6BB7F5B487680E3C94_marshal_pinvoke_back(const FormatLiterals_t8EC4E080425C3E3AE6627A6BB7F5B487680E3C94_marshaled_pinvoke& marshaled, FormatLiterals_t8EC4E080425C3E3AE6627A6BB7F5B487680E3C94& unmarshaled)
{
	Exception_t* ___literals_6Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'literals' of type 'FormatLiterals'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___literals_6Exception, NULL);
}
// Conversion method for clean up from marshalling of: System.Globalization.TimeSpanFormat/FormatLiterals
IL2CPP_EXTERN_C void FormatLiterals_t8EC4E080425C3E3AE6627A6BB7F5B487680E3C94_marshal_pinvoke_cleanup(FormatLiterals_t8EC4E080425C3E3AE6627A6BB7F5B487680E3C94_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: System.Globalization.TimeSpanFormat/FormatLiterals
IL2CPP_EXTERN_C void FormatLiterals_t8EC4E080425C3E3AE6627A6BB7F5B487680E3C94_marshal_com(const FormatLiterals_t8EC4E080425C3E3AE6627A6BB7F5B487680E3C94& unmarshaled, FormatLiterals_t8EC4E080425C3E3AE6627A6BB7F5B487680E3C94_marshaled_com& marshaled)
{
	Exception_t* ___literals_6Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'literals' of type 'FormatLiterals'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___literals_6Exception, NULL);
}
IL2CPP_EXTERN_C void FormatLiterals_t8EC4E080425C3E3AE6627A6BB7F5B487680E3C94_marshal_com_back(const FormatLiterals_t8EC4E080425C3E3AE6627A6BB7F5B487680E3C94_marshaled_com& marshaled, FormatLiterals_t8EC4E080425C3E3AE6627A6BB7F5B487680E3C94& unmarshaled)
{
	Exception_t* ___literals_6Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'literals' of type 'FormatLiterals'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___literals_6Exception, NULL);
}
// Conversion method for clean up from marshalling of: System.Globalization.TimeSpanFormat/FormatLiterals
IL2CPP_EXTERN_C void FormatLiterals_t8EC4E080425C3E3AE6627A6BB7F5B487680E3C94_marshal_com_cleanup(FormatLiterals_t8EC4E080425C3E3AE6627A6BB7F5B487680E3C94_marshaled_com& marshaled)
{
}
// System.String System.Globalization.TimeSpanFormat/FormatLiterals::get_Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FormatLiterals_get_Start_mB169F5FF4FD7C471F34E7EE859C5CA7F8432E512 (FormatLiterals_t8EC4E080425C3E3AE6627A6BB7F5B487680E3C94 * __this, const RuntimeMethod* method)
{
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = __this->get_literals_6();
		NullCheck(L_0);
		int32_t L_1 = 0;
		String_t* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		return L_2;
	}
}
IL2CPP_EXTERN_C  String_t* FormatLiterals_get_Start_mB169F5FF4FD7C471F34E7EE859C5CA7F8432E512_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	FormatLiterals_t8EC4E080425C3E3AE6627A6BB7F5B487680E3C94 * _thisAdjusted = reinterpret_cast<FormatLiterals_t8EC4E080425C3E3AE6627A6BB7F5B487680E3C94 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = FormatLiterals_get_Start_mB169F5FF4FD7C471F34E7EE859C5CA7F8432E512(_thisAdjusted, method);
	return _returnValue;
}
// System.String System.Globalization.TimeSpanFormat/FormatLiterals::get_DayHourSep()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FormatLiterals_get_DayHourSep_m2A4A99E937519106A2AA821B9C8928D736697C68 (FormatLiterals_t8EC4E080425C3E3AE6627A6BB7F5B487680E3C94 * __this, const RuntimeMethod* method)
{
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = __this->get_literals_6();
		NullCheck(L_0);
		int32_t L_1 = 1;
		String_t* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		return L_2;
	}
}
IL2CPP_EXTERN_C  String_t* FormatLiterals_get_DayHourSep_m2A4A99E937519106A2AA821B9C8928D736697C68_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	FormatLiterals_t8EC4E080425C3E3AE6627A6BB7F5B487680E3C94 * _thisAdjusted = reinterpret_cast<FormatLiterals_t8EC4E080425C3E3AE6627A6BB7F5B487680E3C94 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = FormatLiterals_get_DayHourSep_m2A4A99E937519106A2AA821B9C8928D736697C68(_thisAdjusted, method);
	return _returnValue;
}
// System.String System.Globalization.TimeSpanFormat/FormatLiterals::get_HourMinuteSep()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FormatLiterals_get_HourMinuteSep_m123BD98C8CF1851406FF198FEA43C4C9593DDD00 (FormatLiterals_t8EC4E080425C3E3AE6627A6BB7F5B487680E3C94 * __this, const RuntimeMethod* method)
{
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = __this->get_literals_6();
		NullCheck(L_0);
		int32_t L_1 = 2;
		String_t* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		return L_2;
	}
}
IL2CPP_EXTERN_C  String_t* FormatLiterals_get_HourMinuteSep_m123BD98C8CF1851406FF198FEA43C4C9593DDD00_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	FormatLiterals_t8EC4E080425C3E3AE6627A6BB7F5B487680E3C94 * _thisAdjusted = reinterpret_cast<FormatLiterals_t8EC4E080425C3E3AE6627A6BB7F5B487680E3C94 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = FormatLiterals_get_HourMinuteSep_m123BD98C8CF1851406FF198FEA43C4C9593DDD00(_thisAdjusted, method);
	return _returnValue;
}
// System.String System.Globalization.TimeSpanFormat/FormatLiterals::get_MinuteSecondSep()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FormatLiterals_get_MinuteSecondSep_m2E9860660A09ABE847E39D1277964283BC4EF376 (FormatLiterals_t8EC4E080425C3E3AE6627A6BB7F5B487680E3C94 * __this, const RuntimeMethod* method)
{
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = __this->get_literals_6();
		NullCheck(L_0);
		int32_t L_1 = 3;
		String_t* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		return L_2;
	}
}
IL2CPP_EXTERN_C  String_t* FormatLiterals_get_MinuteSecondSep_m2E9860660A09ABE847E39D1277964283BC4EF376_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	FormatLiterals_t8EC4E080425C3E3AE6627A6BB7F5B487680E3C94 * _thisAdjusted = reinterpret_cast<FormatLiterals_t8EC4E080425C3E3AE6627A6BB7F5B487680E3C94 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = FormatLiterals_get_MinuteSecondSep_m2E9860660A09ABE847E39D1277964283BC4EF376(_thisAdjusted, method);
	return _returnValue;
}
// System.String System.Globalization.TimeSpanFormat/FormatLiterals::get_SecondFractionSep()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FormatLiterals_get_SecondFractionSep_m72BAC4DFC9E58C6772D714202BAB62B743E2F74B (FormatLiterals_t8EC4E080425C3E3AE6627A6BB7F5B487680E3C94 * __this, const RuntimeMethod* method)
{
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = __this->get_literals_6();
		NullCheck(L_0);
		int32_t L_1 = 4;
		String_t* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		return L_2;
	}
}
IL2CPP_EXTERN_C  String_t* FormatLiterals_get_SecondFractionSep_m72BAC4DFC9E58C6772D714202BAB62B743E2F74B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	FormatLiterals_t8EC4E080425C3E3AE6627A6BB7F5B487680E3C94 * _thisAdjusted = reinterpret_cast<FormatLiterals_t8EC4E080425C3E3AE6627A6BB7F5B487680E3C94 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = FormatLiterals_get_SecondFractionSep_m72BAC4DFC9E58C6772D714202BAB62B743E2F74B(_thisAdjusted, method);
	return _returnValue;
}
// System.String System.Globalization.TimeSpanFormat/FormatLiterals::get_End()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FormatLiterals_get_End_mE6A0DE290B82190D563606780CA7AA9FA847443B (FormatLiterals_t8EC4E080425C3E3AE6627A6BB7F5B487680E3C94 * __this, const RuntimeMethod* method)
{
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = __this->get_literals_6();
		NullCheck(L_0);
		int32_t L_1 = 5;
		String_t* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		return L_2;
	}
}
IL2CPP_EXTERN_C  String_t* FormatLiterals_get_End_mE6A0DE290B82190D563606780CA7AA9FA847443B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	FormatLiterals_t8EC4E080425C3E3AE6627A6BB7F5B487680E3C94 * _thisAdjusted = reinterpret_cast<FormatLiterals_t8EC4E080425C3E3AE6627A6BB7F5B487680E3C94 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = FormatLiterals_get_End_mE6A0DE290B82190D563606780CA7AA9FA847443B(_thisAdjusted, method);
	return _returnValue;
}
// System.Globalization.TimeSpanFormat/FormatLiterals System.Globalization.TimeSpanFormat/FormatLiterals::InitInvariant(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FormatLiterals_t8EC4E080425C3E3AE6627A6BB7F5B487680E3C94  FormatLiterals_InitInvariant_m4226445E4D67334664CD64ABE404916DCAAAD8CF (bool ___isNegative0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC53416666C40B3D2D91E53EAD804974383702533);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	FormatLiterals_t8EC4E080425C3E3AE6627A6BB7F5B487680E3C94  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t G_B2_0 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B2_1 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B1_1 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B3_2 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(FormatLiterals_t8EC4E080425C3E3AE6627A6BB7F5B487680E3C94 ));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)6);
		(&V_0)->set_literals_6(L_0);
		FormatLiterals_t8EC4E080425C3E3AE6627A6BB7F5B487680E3C94  L_1 = V_0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = L_1.get_literals_6();
		bool L_3 = ___isNegative0;
		G_B1_0 = 0;
		G_B1_1 = L_2;
		if (L_3)
		{
			G_B2_0 = 0;
			G_B2_1 = L_2;
			goto IL_0026;
		}
	}
	{
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_002b;
	}

IL_0026:
	{
		G_B3_0 = _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_002b:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		FormatLiterals_t8EC4E080425C3E3AE6627A6BB7F5B487680E3C94  L_5 = V_0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = L_5.get_literals_6();
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		FormatLiterals_t8EC4E080425C3E3AE6627A6BB7F5B487680E3C94  L_7 = V_0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8 = L_7.get_literals_6();
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		FormatLiterals_t8EC4E080425C3E3AE6627A6BB7F5B487680E3C94  L_9 = V_0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_10 = L_9.get_literals_6();
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		FormatLiterals_t8EC4E080425C3E3AE6627A6BB7F5B487680E3C94  L_11 = V_0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_12 = L_11.get_literals_6();
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		FormatLiterals_t8EC4E080425C3E3AE6627A6BB7F5B487680E3C94  L_13 = V_0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_14 = L_13.get_literals_6();
		String_t* L_15 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_15);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_15);
		(&V_0)->set_AppCompatLiteral_0(_stringLiteralC53416666C40B3D2D91E53EAD804974383702533);
		(&V_0)->set_dd_1(2);
		(&V_0)->set_hh_2(2);
		(&V_0)->set_mm_3(2);
		(&V_0)->set_ss_4(2);
		(&V_0)->set_ff_5(7);
		FormatLiterals_t8EC4E080425C3E3AE6627A6BB7F5B487680E3C94  L_16 = V_0;
		return L_16;
	}
}
// System.Void System.Globalization.TimeSpanFormat/FormatLiterals::Init(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FormatLiterals_Init_m7359DC89B4E47BCC6116B0D67E3C2C329BBF3D8A (FormatLiterals_t8EC4E080425C3E3AE6627A6BB7F5B487680E3C94 * __this, String_t* ___format0, bool ___useInvariantFieldLengths1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	bool V_1 = false;
	Il2CppChar V_2 = 0x0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	Il2CppChar V_6 = 0x0;
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)6);
		__this->set_literals_6(L_0);
		V_4 = 0;
		goto IL_0025;
	}

IL_0011:
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = __this->get_literals_6();
		int32_t L_2 = V_4;
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_3);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_2), (String_t*)L_3);
		int32_t L_4 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
	}

IL_0025:
	{
		int32_t L_5 = V_4;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = __this->get_literals_6();
		NullCheck(L_6);
		if ((((int32_t)L_5) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))))))
		{
			goto IL_0011;
		}
	}
	{
		__this->set_dd_1(0);
		__this->set_hh_2(0);
		__this->set_mm_3(0);
		__this->set_ss_4(0);
		__this->set_ff_5(0);
		StringBuilder_t * L_7;
		L_7 = StringBuilderCache_Acquire_mC7C5506CB542A20FEEBF48E654255C5368462D1A(((int32_t)16), /*hidden argument*/NULL);
		V_0 = L_7;
		V_1 = (bool)0;
		V_2 = ((int32_t)39);
		V_3 = 0;
		V_5 = 0;
		goto IL_01c4;
	}

IL_006b:
	{
		String_t* L_8 = ___format0;
		int32_t L_9 = V_5;
		NullCheck(L_8);
		Il2CppChar L_10;
		L_10 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_8, L_9, /*hidden argument*/NULL);
		V_6 = L_10;
		Il2CppChar L_11 = V_6;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)70)))))
		{
			goto IL_00a9;
		}
	}
	{
		Il2CppChar L_12 = V_6;
		if ((!(((uint32_t)L_12) <= ((uint32_t)((int32_t)37)))))
		{
			goto IL_0095;
		}
	}
	{
		Il2CppChar L_13 = V_6;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)34))))
		{
			goto IL_00f2;
		}
	}
	{
		Il2CppChar L_14 = V_6;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)37))))
		{
			goto IL_01af;
		}
	}
	{
		goto IL_01af;
	}

IL_0095:
	{
		Il2CppChar L_15 = V_6;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)39))))
		{
			goto IL_00f2;
		}
	}
	{
		Il2CppChar L_16 = V_6;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)70))))
		{
			goto IL_019a;
		}
	}
	{
		goto IL_01af;
	}

IL_00a9:
	{
		Il2CppChar L_17 = V_6;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)104)))))
		{
			goto IL_00db;
		}
	}
	{
		Il2CppChar L_18 = V_6;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)92))))
		{
			goto IL_013b;
		}
	}
	{
		Il2CppChar L_19 = V_6;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)((int32_t)100))))
		{
			case 0:
			{
				goto IL_0146;
			}
			case 1:
			{
				goto IL_01af;
			}
			case 2:
			{
				goto IL_019a;
			}
			case 3:
			{
				goto IL_01af;
			}
			case 4:
			{
				goto IL_015b;
			}
		}
	}
	{
		goto IL_01af;
	}

IL_00db:
	{
		Il2CppChar L_20 = V_6;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)109))))
		{
			goto IL_0170;
		}
	}
	{
		Il2CppChar L_21 = V_6;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)115))))
		{
			goto IL_0185;
		}
	}
	{
		goto IL_01af;
	}

IL_00f2:
	{
		bool L_22 = V_1;
		if (!L_22)
		{
			goto IL_0125;
		}
	}
	{
		Il2CppChar L_23 = V_2;
		String_t* L_24 = ___format0;
		int32_t L_25 = V_5;
		NullCheck(L_24);
		Il2CppChar L_26;
		L_26 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_24, L_25, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_23) == ((uint32_t)L_26))))
		{
			goto IL_0125;
		}
	}
	{
		int32_t L_27 = V_3;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_0124;
		}
	}
	{
		int32_t L_28 = V_3;
		if ((((int32_t)L_28) > ((int32_t)5)))
		{
			goto IL_0124;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_29 = __this->get_literals_6();
		int32_t L_30 = V_3;
		StringBuilder_t * L_31 = V_0;
		NullCheck(L_31);
		String_t* L_32;
		L_32 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_31);
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_32);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(L_30), (String_t*)L_32);
		StringBuilder_t * L_33 = V_0;
		NullCheck(L_33);
		StringBuilder_set_Length_m7C1756193B05DCA5A23C5DC98EE90A9FC685A27A(L_33, 0, /*hidden argument*/NULL);
		V_1 = (bool)0;
		goto IL_01be;
	}

IL_0124:
	{
		return;
	}

IL_0125:
	{
		bool L_34 = V_1;
		if (L_34)
		{
			goto IL_01be;
		}
	}
	{
		String_t* L_35 = ___format0;
		int32_t L_36 = V_5;
		NullCheck(L_35);
		Il2CppChar L_37;
		L_37 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_35, L_36, /*hidden argument*/NULL);
		V_2 = L_37;
		V_1 = (bool)1;
		goto IL_01be;
	}

IL_013b:
	{
		bool L_38 = V_1;
		if (L_38)
		{
			goto IL_01af;
		}
	}
	{
		int32_t L_39 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)1));
		goto IL_01be;
	}

IL_0146:
	{
		bool L_40 = V_1;
		if (L_40)
		{
			goto IL_01be;
		}
	}
	{
		V_3 = 1;
		int32_t L_41 = __this->get_dd_1();
		__this->set_dd_1(((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)1)));
		goto IL_01be;
	}

IL_015b:
	{
		bool L_42 = V_1;
		if (L_42)
		{
			goto IL_01be;
		}
	}
	{
		V_3 = 2;
		int32_t L_43 = __this->get_hh_2();
		__this->set_hh_2(((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)1)));
		goto IL_01be;
	}

IL_0170:
	{
		bool L_44 = V_1;
		if (L_44)
		{
			goto IL_01be;
		}
	}
	{
		V_3 = 3;
		int32_t L_45 = __this->get_mm_3();
		__this->set_mm_3(((int32_t)il2cpp_codegen_add((int32_t)L_45, (int32_t)1)));
		goto IL_01be;
	}

IL_0185:
	{
		bool L_46 = V_1;
		if (L_46)
		{
			goto IL_01be;
		}
	}
	{
		V_3 = 4;
		int32_t L_47 = __this->get_ss_4();
		__this->set_ss_4(((int32_t)il2cpp_codegen_add((int32_t)L_47, (int32_t)1)));
		goto IL_01be;
	}

IL_019a:
	{
		bool L_48 = V_1;
		if (L_48)
		{
			goto IL_01be;
		}
	}
	{
		V_3 = 5;
		int32_t L_49 = __this->get_ff_5();
		__this->set_ff_5(((int32_t)il2cpp_codegen_add((int32_t)L_49, (int32_t)1)));
		goto IL_01be;
	}

IL_01af:
	{
		StringBuilder_t * L_50 = V_0;
		String_t* L_51 = ___format0;
		int32_t L_52 = V_5;
		NullCheck(L_51);
		Il2CppChar L_53;
		L_53 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_51, L_52, /*hidden argument*/NULL);
		NullCheck(L_50);
		StringBuilder_t * L_54;
		L_54 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_50, L_53, /*hidden argument*/NULL);
	}

IL_01be:
	{
		int32_t L_55 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_55, (int32_t)1));
	}

IL_01c4:
	{
		int32_t L_56 = V_5;
		String_t* L_57 = ___format0;
		NullCheck(L_57);
		int32_t L_58;
		L_58 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_57, /*hidden argument*/NULL);
		if ((((int32_t)L_56) < ((int32_t)L_58)))
		{
			goto IL_006b;
		}
	}
	{
		String_t* L_59;
		L_59 = FormatLiterals_get_MinuteSecondSep_m2E9860660A09ABE847E39D1277964283BC4EF376((FormatLiterals_t8EC4E080425C3E3AE6627A6BB7F5B487680E3C94 *)__this, /*hidden argument*/NULL);
		String_t* L_60;
		L_60 = FormatLiterals_get_SecondFractionSep_m72BAC4DFC9E58C6772D714202BAB62B743E2F74B((FormatLiterals_t8EC4E080425C3E3AE6627A6BB7F5B487680E3C94 *)__this, /*hidden argument*/NULL);
		String_t* L_61;
		L_61 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_59, L_60, /*hidden argument*/NULL);
		__this->set_AppCompatLiteral_0(L_61);
		bool L_62 = ___useInvariantFieldLengths1;
		if (!L_62)
		{
			goto IL_0210;
		}
	}
	{
		__this->set_dd_1(2);
		__this->set_hh_2(2);
		__this->set_mm_3(2);
		__this->set_ss_4(2);
		__this->set_ff_5(7);
		goto IL_028d;
	}

IL_0210:
	{
		int32_t L_63 = __this->get_dd_1();
		if ((((int32_t)L_63) < ((int32_t)1)))
		{
			goto IL_0222;
		}
	}
	{
		int32_t L_64 = __this->get_dd_1();
		if ((((int32_t)L_64) <= ((int32_t)2)))
		{
			goto IL_0229;
		}
	}

IL_0222:
	{
		__this->set_dd_1(2);
	}

IL_0229:
	{
		int32_t L_65 = __this->get_hh_2();
		if ((((int32_t)L_65) < ((int32_t)1)))
		{
			goto IL_023b;
		}
	}
	{
		int32_t L_66 = __this->get_hh_2();
		if ((((int32_t)L_66) <= ((int32_t)2)))
		{
			goto IL_0242;
		}
	}

IL_023b:
	{
		__this->set_hh_2(2);
	}

IL_0242:
	{
		int32_t L_67 = __this->get_mm_3();
		if ((((int32_t)L_67) < ((int32_t)1)))
		{
			goto IL_0254;
		}
	}
	{
		int32_t L_68 = __this->get_mm_3();
		if ((((int32_t)L_68) <= ((int32_t)2)))
		{
			goto IL_025b;
		}
	}

IL_0254:
	{
		__this->set_mm_3(2);
	}

IL_025b:
	{
		int32_t L_69 = __this->get_ss_4();
		if ((((int32_t)L_69) < ((int32_t)1)))
		{
			goto IL_026d;
		}
	}
	{
		int32_t L_70 = __this->get_ss_4();
		if ((((int32_t)L_70) <= ((int32_t)2)))
		{
			goto IL_0274;
		}
	}

IL_026d:
	{
		__this->set_ss_4(2);
	}

IL_0274:
	{
		int32_t L_71 = __this->get_ff_5();
		if ((((int32_t)L_71) < ((int32_t)1)))
		{
			goto IL_0286;
		}
	}
	{
		int32_t L_72 = __this->get_ff_5();
		if ((((int32_t)L_72) <= ((int32_t)7)))
		{
			goto IL_028d;
		}
	}

IL_0286:
	{
		__this->set_ff_5(7);
	}

IL_028d:
	{
		StringBuilder_t * L_73 = V_0;
		StringBuilderCache_Release_m9CE702E4E7FD914B49F59963B031A597EFE4D8EE(L_73, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void FormatLiterals_Init_m7359DC89B4E47BCC6116B0D67E3C2C329BBF3D8A_AdjustorThunk (RuntimeObject * __this, String_t* ___format0, bool ___useInvariantFieldLengths1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	FormatLiterals_t8EC4E080425C3E3AE6627A6BB7F5B487680E3C94 * _thisAdjusted = reinterpret_cast<FormatLiterals_t8EC4E080425C3E3AE6627A6BB7F5B487680E3C94 *>(__this + _offset);
	FormatLiterals_Init_m7359DC89B4E47BCC6116B0D67E3C2C329BBF3D8A(_thisAdjusted, ___format0, ___useInvariantFieldLengths1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Void System.TimeZoneInfo/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m97C392FC85751EDF7BC34014E9CCC3213E438AFC (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t24F903F915888347E8B19C16314DF4C75387324E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t24F903F915888347E8B19C16314DF4C75387324E * L_0 = (U3CU3Ec_t24F903F915888347E8B19C16314DF4C75387324E *)il2cpp_codegen_object_new(U3CU3Ec_t24F903F915888347E8B19C16314DF4C75387324E_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m9DEEDA6DA97B7B98E7E8FFBDFFD70D67023DD420(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t24F903F915888347E8B19C16314DF4C75387324E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t24F903F915888347E8B19C16314DF4C75387324E_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void System.TimeZoneInfo/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m9DEEDA6DA97B7B98E7E8FFBDFFD70D67023DD420 (U3CU3Ec_t24F903F915888347E8B19C16314DF4C75387324E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 System.TimeZoneInfo/<>c::<CreateLocalUnity>b__19_0(System.TimeZoneInfo/AdjustmentRule,System.TimeZoneInfo/AdjustmentRule)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CCreateLocalUnityU3Eb__19_0_mB1A237DB978068C4662C45F442DC72B16E49F621 (U3CU3Ec_t24F903F915888347E8B19C16314DF4C75387324E * __this, AdjustmentRule_t15EC10F91D4E8CC287CF8610D8D24BD636A23304 * ___rule10, AdjustmentRule_t15EC10F91D4E8CC287CF8610D8D24BD636A23304 * ___rule21, const RuntimeMethod* method)
{
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AdjustmentRule_t15EC10F91D4E8CC287CF8610D8D24BD636A23304 * L_0 = ___rule10;
		NullCheck(L_0);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_1;
		L_1 = AdjustmentRule_get_DateStart_m05FFD9D69391EC287D299B23A549FFB1F9FB14EE_inline(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		AdjustmentRule_t15EC10F91D4E8CC287CF8610D8D24BD636A23304 * L_2 = ___rule21;
		NullCheck(L_2);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_3;
		L_3 = AdjustmentRule_get_DateStart_m05FFD9D69391EC287D299B23A549FFB1F9FB14EE_inline(L_2, /*hidden argument*/NULL);
		int32_t L_4;
		L_4 = DateTime_CompareTo_m2864B0ABAE4B8748D4092D1D16AE56EE0B248F93((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_0), L_3, /*hidden argument*/NULL);
		return L_4;
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
// System.DateTime System.TimeZoneInfo/AdjustmentRule::get_DateStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  AdjustmentRule_get_DateStart_m05FFD9D69391EC287D299B23A549FFB1F9FB14EE (AdjustmentRule_t15EC10F91D4E8CC287CF8610D8D24BD636A23304 * __this, const RuntimeMethod* method)
{
	{
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0 = __this->get_m_dateStart_0();
		return L_0;
	}
}
// System.DateTime System.TimeZoneInfo/AdjustmentRule::get_DateEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  AdjustmentRule_get_DateEnd_mE011DEEF8AB4DE944C2FF5F45112F468A92492BC (AdjustmentRule_t15EC10F91D4E8CC287CF8610D8D24BD636A23304 * __this, const RuntimeMethod* method)
{
	{
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0 = __this->get_m_dateEnd_1();
		return L_0;
	}
}
// System.TimeSpan System.TimeZoneInfo/AdjustmentRule::get_DaylightDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  AdjustmentRule_get_DaylightDelta_m4C44F91C9ACBDFC572EBD831EFAA6253577B4FAD (AdjustmentRule_t15EC10F91D4E8CC287CF8610D8D24BD636A23304 * __this, const RuntimeMethod* method)
{
	{
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_0 = __this->get_m_daylightDelta_2();
		return L_0;
	}
}
// System.TimeZoneInfo/TransitionTime System.TimeZoneInfo/AdjustmentRule::get_DaylightTransitionStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  AdjustmentRule_get_DaylightTransitionStart_m5B17370369E5E5671EF1EF5F3C99AF4B39275B81 (AdjustmentRule_t15EC10F91D4E8CC287CF8610D8D24BD636A23304 * __this, const RuntimeMethod* method)
{
	{
		TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  L_0 = __this->get_m_daylightTransitionStart_3();
		return L_0;
	}
}
// System.TimeZoneInfo/TransitionTime System.TimeZoneInfo/AdjustmentRule::get_DaylightTransitionEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  AdjustmentRule_get_DaylightTransitionEnd_m219FBBD247700BDFF251BCB5A0ADE7C622AC2111 (AdjustmentRule_t15EC10F91D4E8CC287CF8610D8D24BD636A23304 * __this, const RuntimeMethod* method)
{
	{
		TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  L_0 = __this->get_m_daylightTransitionEnd_4();
		return L_0;
	}
}
// System.Boolean System.TimeZoneInfo/AdjustmentRule::Equals(System.TimeZoneInfo/AdjustmentRule)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AdjustmentRule_Equals_m51F598650B478A0A86830DF8445D12D7C6A0CE41 (AdjustmentRule_t15EC10F91D4E8CC287CF8610D8D24BD636A23304 * __this, AdjustmentRule_t15EC10F91D4E8CC287CF8610D8D24BD636A23304 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B6_0 = 0;
	{
		AdjustmentRule_t15EC10F91D4E8CC287CF8610D8D24BD636A23304 * L_0 = ___other0;
		if (!L_0)
		{
			goto IL_004f;
		}
	}
	{
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_1 = __this->get_m_dateStart_0();
		AdjustmentRule_t15EC10F91D4E8CC287CF8610D8D24BD636A23304 * L_2 = ___other0;
		NullCheck(L_2);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_3 = L_2->get_m_dateStart_0();
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = DateTime_op_Equality_m07957AECB8C66EA047B16511BF560DD9EDA1DA44(L_1, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_004f;
		}
	}
	{
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_5 = __this->get_m_dateEnd_1();
		AdjustmentRule_t15EC10F91D4E8CC287CF8610D8D24BD636A23304 * L_6 = ___other0;
		NullCheck(L_6);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_7 = L_6->get_m_dateEnd_1();
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = DateTime_op_Equality_m07957AECB8C66EA047B16511BF560DD9EDA1DA44(L_5, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_004f;
		}
	}
	{
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_9 = __this->get_m_daylightDelta_2();
		AdjustmentRule_t15EC10F91D4E8CC287CF8610D8D24BD636A23304 * L_10 = ___other0;
		NullCheck(L_10);
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_11 = L_10->get_m_daylightDelta_2();
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = TimeSpan_op_Equality_m8229F4B63064E2D43B244C6E82D55CB2B0360BB1(L_9, L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_004f;
		}
	}
	{
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_13 = __this->get_m_baseUtcOffsetDelta_5();
		AdjustmentRule_t15EC10F91D4E8CC287CF8610D8D24BD636A23304 * L_14 = ___other0;
		NullCheck(L_14);
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_15 = L_14->get_m_baseUtcOffsetDelta_5();
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = TimeSpan_op_Equality_m8229F4B63064E2D43B244C6E82D55CB2B0360BB1(L_13, L_15, /*hidden argument*/NULL);
		G_B6_0 = ((int32_t)(L_16));
		goto IL_0050;
	}

IL_004f:
	{
		G_B6_0 = 0;
	}

IL_0050:
	{
		if (!G_B6_0)
		{
			goto IL_0077;
		}
	}
	{
		TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A * L_17 = __this->get_address_of_m_daylightTransitionEnd_4();
		AdjustmentRule_t15EC10F91D4E8CC287CF8610D8D24BD636A23304 * L_18 = ___other0;
		NullCheck(L_18);
		TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  L_19 = L_18->get_m_daylightTransitionEnd_4();
		bool L_20;
		L_20 = TransitionTime_Equals_m4976405B1B8F5E7A5C269D4760CD239DC18E5631((TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A *)L_17, L_19, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_0077;
		}
	}
	{
		TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A * L_21 = __this->get_address_of_m_daylightTransitionStart_3();
		AdjustmentRule_t15EC10F91D4E8CC287CF8610D8D24BD636A23304 * L_22 = ___other0;
		NullCheck(L_22);
		TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  L_23 = L_22->get_m_daylightTransitionStart_3();
		bool L_24;
		L_24 = TransitionTime_Equals_m4976405B1B8F5E7A5C269D4760CD239DC18E5631((TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A *)L_21, L_23, /*hidden argument*/NULL);
		return L_24;
	}

IL_0077:
	{
		return (bool)0;
	}
}
// System.Int32 System.TimeZoneInfo/AdjustmentRule::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AdjustmentRule_GetHashCode_m771E09C011E894FAE92B5FD18C3E0875D3F5248C (AdjustmentRule_t15EC10F91D4E8CC287CF8610D8D24BD636A23304 * __this, const RuntimeMethod* method)
{
	{
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * L_0 = __this->get_address_of_m_dateStart_0();
		int32_t L_1;
		L_1 = DateTime_GetHashCode_mC94DC52667BB5C0DE7A78C53BE24FDF5469BA49D((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void System.TimeZoneInfo/AdjustmentRule::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustmentRule__ctor_m6768FD1CD669E0678EC84422E516891EE71528CC (AdjustmentRule_t15EC10F91D4E8CC287CF8610D8D24BD636A23304 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.TimeZoneInfo/AdjustmentRule System.TimeZoneInfo/AdjustmentRule::CreateAdjustmentRule(System.DateTime,System.DateTime,System.TimeSpan,System.TimeZoneInfo/TransitionTime,System.TimeZoneInfo/TransitionTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdjustmentRule_t15EC10F91D4E8CC287CF8610D8D24BD636A23304 * AdjustmentRule_CreateAdjustmentRule_mC90086998B3DF5F9492A4B2281CFEDED04E1E6AE (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___dateStart0, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___dateEnd1, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___daylightDelta2, TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  ___daylightTransitionStart3, TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  ___daylightTransitionEnd4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdjustmentRule_t15EC10F91D4E8CC287CF8610D8D24BD636A23304_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0 = ___dateStart0;
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_1 = ___dateEnd1;
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_2 = ___daylightDelta2;
		TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  L_3 = ___daylightTransitionStart3;
		TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  L_4 = ___daylightTransitionEnd4;
		AdjustmentRule_ValidateAdjustmentRule_m2D1CE9572A7AA306E36ADD93AA2CEA2858B77023(L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		AdjustmentRule_t15EC10F91D4E8CC287CF8610D8D24BD636A23304 * L_5 = (AdjustmentRule_t15EC10F91D4E8CC287CF8610D8D24BD636A23304 *)il2cpp_codegen_object_new(AdjustmentRule_t15EC10F91D4E8CC287CF8610D8D24BD636A23304_il2cpp_TypeInfo_var);
		AdjustmentRule__ctor_m6768FD1CD669E0678EC84422E516891EE71528CC(L_5, /*hidden argument*/NULL);
		AdjustmentRule_t15EC10F91D4E8CC287CF8610D8D24BD636A23304 * L_6 = L_5;
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_7 = ___dateStart0;
		NullCheck(L_6);
		L_6->set_m_dateStart_0(L_7);
		AdjustmentRule_t15EC10F91D4E8CC287CF8610D8D24BD636A23304 * L_8 = L_6;
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_9 = ___dateEnd1;
		NullCheck(L_8);
		L_8->set_m_dateEnd_1(L_9);
		AdjustmentRule_t15EC10F91D4E8CC287CF8610D8D24BD636A23304 * L_10 = L_8;
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_11 = ___daylightDelta2;
		NullCheck(L_10);
		L_10->set_m_daylightDelta_2(L_11);
		AdjustmentRule_t15EC10F91D4E8CC287CF8610D8D24BD636A23304 * L_12 = L_10;
		TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  L_13 = ___daylightTransitionStart3;
		NullCheck(L_12);
		L_12->set_m_daylightTransitionStart_3(L_13);
		AdjustmentRule_t15EC10F91D4E8CC287CF8610D8D24BD636A23304 * L_14 = L_12;
		TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  L_15 = ___daylightTransitionEnd4;
		NullCheck(L_14);
		L_14->set_m_daylightTransitionEnd_4(L_15);
		AdjustmentRule_t15EC10F91D4E8CC287CF8610D8D24BD636A23304 * L_16 = L_14;
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var);
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_17 = ((TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields*)il2cpp_codegen_static_fields_for(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var))->get_Zero_19();
		NullCheck(L_16);
		L_16->set_m_baseUtcOffsetDelta_5(L_17);
		return L_16;
	}
}
// System.TimeZoneInfo/AdjustmentRule System.TimeZoneInfo/AdjustmentRule::CreateAdjustmentRule(System.DateTime,System.DateTime,System.TimeSpan,System.TimeZoneInfo/TransitionTime,System.TimeZoneInfo/TransitionTime,System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdjustmentRule_t15EC10F91D4E8CC287CF8610D8D24BD636A23304 * AdjustmentRule_CreateAdjustmentRule_mE956FDCAA996EA7E7B089C145F754A8FB88CB7EA (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___dateStart0, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___dateEnd1, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___daylightDelta2, TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  ___daylightTransitionStart3, TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  ___daylightTransitionEnd4, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___baseUtcOffsetDelta5, const RuntimeMethod* method)
{
	{
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0 = ___dateStart0;
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_1 = ___dateEnd1;
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_2 = ___daylightDelta2;
		TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  L_3 = ___daylightTransitionStart3;
		TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  L_4 = ___daylightTransitionEnd4;
		AdjustmentRule_t15EC10F91D4E8CC287CF8610D8D24BD636A23304 * L_5;
		L_5 = AdjustmentRule_CreateAdjustmentRule_mC90086998B3DF5F9492A4B2281CFEDED04E1E6AE(L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		AdjustmentRule_t15EC10F91D4E8CC287CF8610D8D24BD636A23304 * L_6 = L_5;
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_7 = ___baseUtcOffsetDelta5;
		NullCheck(L_6);
		L_6->set_m_baseUtcOffsetDelta_5(L_7);
		return L_6;
	}
}
// System.Void System.TimeZoneInfo/AdjustmentRule::ValidateAdjustmentRule(System.DateTime,System.DateTime,System.TimeSpan,System.TimeZoneInfo/TransitionTime,System.TimeZoneInfo/TransitionTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustmentRule_ValidateAdjustmentRule_m2D1CE9572A7AA306E36ADD93AA2CEA2858B77023 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___dateStart0, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___dateEnd1, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___daylightDelta2, TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  ___daylightTransitionStart3, TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  ___daylightTransitionEnd4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0;
		L_0 = DateTime_get_Kind_mC7EC1A788CC9A875094117214C5A0C153A39F496((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&___dateStart0), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		String_t* L_1;
		L_1 = Environment_GetResourceString_m8DFF827596B5FD533D3FE56900FA095F7D674617(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE5A6B5B780158F734FA0A11A802E762EF7BDD272)), /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_2 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_2, L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF1FA676B434A01F8B0C76AACD342F3261CDB272A)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AdjustmentRule_ValidateAdjustmentRule_m2D1CE9572A7AA306E36ADD93AA2CEA2858B77023_RuntimeMethod_var)));
	}

IL_001e:
	{
		int32_t L_3;
		L_3 = DateTime_get_Kind_mC7EC1A788CC9A875094117214C5A0C153A39F496((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&___dateEnd1), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_003c;
		}
	}
	{
		String_t* L_4;
		L_4 = Environment_GetResourceString_m8DFF827596B5FD533D3FE56900FA095F7D674617(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE5A6B5B780158F734FA0A11A802E762EF7BDD272)), /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_5 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_5, L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral445399A595B24C0202D28AE23969D8FFF38F572A)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AdjustmentRule_ValidateAdjustmentRule_m2D1CE9572A7AA306E36ADD93AA2CEA2858B77023_RuntimeMethod_var)));
	}

IL_003c:
	{
		TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  L_6 = ___daylightTransitionEnd4;
		bool L_7;
		L_7 = TransitionTime_Equals_m4976405B1B8F5E7A5C269D4760CD239DC18E5631((TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A *)(&___daylightTransitionStart3), L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_005c;
		}
	}
	{
		String_t* L_8;
		L_8 = Environment_GetResourceString_m8DFF827596B5FD533D3FE56900FA095F7D674617(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEA8C788F462D3BDFF1A2C0A8B053AAA9567571BA)), /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_9 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_9, L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA4236146F56D25D2D915B8BCD28F0936D3257EE6)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AdjustmentRule_ValidateAdjustmentRule_m2D1CE9572A7AA306E36ADD93AA2CEA2858B77023_RuntimeMethod_var)));
	}

IL_005c:
	{
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_10 = ___dateStart0;
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_11 = ___dateEnd1;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = DateTime_op_GreaterThan_m87A988E247EFDFFE61474088700F29840758E3DD(L_10, L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_007a;
		}
	}
	{
		String_t* L_13;
		L_13 = Environment_GetResourceString_m8DFF827596B5FD533D3FE56900FA095F7D674617(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral018504CD3A7D232B591A18D6B7B570DEE8B65BAB)), /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_14 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_14, L_13, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF1FA676B434A01F8B0C76AACD342F3261CDB272A)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AdjustmentRule_ValidateAdjustmentRule_m2D1CE9572A7AA306E36ADD93AA2CEA2858B77023_RuntimeMethod_var)));
	}

IL_007a:
	{
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_15 = ___daylightDelta2;
		bool L_16;
		L_16 = TimeZoneInfo_UtcOffsetOutOfRange_m1691F47564A06BA9E8B774DA68430FDBEE363BA8(L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_009d;
		}
	}
	{
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_17 = ___daylightDelta2;
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_18 = L_17;
		RuntimeObject * L_19 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var)), &L_18);
		String_t* L_20;
		L_20 = Environment_GetResourceString_m8DFF827596B5FD533D3FE56900FA095F7D674617(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral74D560302B70C9D57AC7C2692A505F648FD1B1A4)), /*hidden argument*/NULL);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_21 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m7C5B3BE7792B7C73E7D82C4DBAD4ACA2DAE71AA9(L_21, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral97788FC356CCFD978CEEDA2BF269D6954F4D0740)), L_19, L_20, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AdjustmentRule_ValidateAdjustmentRule_m2D1CE9572A7AA306E36ADD93AA2CEA2858B77023_RuntimeMethod_var)));
	}

IL_009d:
	{
		int64_t L_22;
		L_22 = TimeSpan_get_Ticks_mE4C9E1F27DC794028CEDCF7CB5BD092D16DBACD4_inline((TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 *)(&___daylightDelta2), /*hidden argument*/NULL);
		if (!((int64_t)((int64_t)L_22%(int64_t)((int64_t)((int64_t)((int32_t)600000000))))))
		{
			goto IL_00c2;
		}
	}
	{
		String_t* L_23;
		L_23 = Environment_GetResourceString_m8DFF827596B5FD533D3FE56900FA095F7D674617(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC093A43C681B135B2CCBFD21AF1C61BC84B52631)), /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_24 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_24, L_23, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral97788FC356CCFD978CEEDA2BF269D6954F4D0740)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_24, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AdjustmentRule_ValidateAdjustmentRule_m2D1CE9572A7AA306E36ADD93AA2CEA2858B77023_RuntimeMethod_var)));
	}

IL_00c2:
	{
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_25;
		L_25 = DateTime_get_TimeOfDay_mE6A177963C8D8AA8AA2830239F1C7B3D11AFC645((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&___dateStart0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var);
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_26 = ((TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields*)il2cpp_codegen_static_fields_for(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var))->get_Zero_19();
		bool L_27;
		L_27 = TimeSpan_op_Inequality_mDE127E1886D092054E24EA873CEE64D0857CD04C(L_25, L_26, /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_00ea;
		}
	}
	{
		String_t* L_28;
		L_28 = Environment_GetResourceString_m8DFF827596B5FD533D3FE56900FA095F7D674617(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7CB599B22D521F814BCCB6E5B683D86AA12640B)), /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_29 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_29, L_28, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF1FA676B434A01F8B0C76AACD342F3261CDB272A)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_29, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AdjustmentRule_ValidateAdjustmentRule_m2D1CE9572A7AA306E36ADD93AA2CEA2858B77023_RuntimeMethod_var)));
	}

IL_00ea:
	{
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_30;
		L_30 = DateTime_get_TimeOfDay_mE6A177963C8D8AA8AA2830239F1C7B3D11AFC645((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&___dateEnd1), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var);
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_31 = ((TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields*)il2cpp_codegen_static_fields_for(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var))->get_Zero_19();
		bool L_32;
		L_32 = TimeSpan_op_Inequality_mDE127E1886D092054E24EA873CEE64D0857CD04C(L_30, L_31, /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_0112;
		}
	}
	{
		String_t* L_33;
		L_33 = Environment_GetResourceString_m8DFF827596B5FD533D3FE56900FA095F7D674617(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7CB599B22D521F814BCCB6E5B683D86AA12640B)), /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_34 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_34, L_33, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral445399A595B24C0202D28AE23969D8FFF38F572A)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_34, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AdjustmentRule_ValidateAdjustmentRule_m2D1CE9572A7AA306E36ADD93AA2CEA2858B77023_RuntimeMethod_var)));
	}

IL_0112:
	{
		return;
	}
}
// System.Void System.TimeZoneInfo/AdjustmentRule::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustmentRule_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m17BE62BEC7C588C0B755CBB5426287665986474D (AdjustmentRule_t15EC10F91D4E8CC287CF8610D8D24BD636A23304 * __this, RuntimeObject * ___sender0, const RuntimeMethod* method)
{
	ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0 = __this->get_m_dateStart_0();
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_1 = __this->get_m_dateEnd_1();
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_2 = __this->get_m_daylightDelta_2();
		TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  L_3 = __this->get_m_daylightTransitionStart_3();
		TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  L_4 = __this->get_m_daylightTransitionEnd_4();
		AdjustmentRule_ValidateAdjustmentRule_m2D1CE9572A7AA306E36ADD93AA2CEA2858B77023(L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		goto IL_0037;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0025;
		}
		throw e;
	}

CATCH_0025:
	{ // begin catch(System.ArgumentException)
		V_0 = ((ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)IL2CPP_GET_ACTIVE_EXCEPTION(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *));
		String_t* L_5;
		L_5 = Environment_GetResourceString_m8DFF827596B5FD533D3FE56900FA095F7D674617(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA595476C6F6D3E2C3406DD69BC73859EA4408F2F)), /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_6 = V_0;
		SerializationException_tDB38C13A2ABF407C381E3F332D197AC1AD097A92 * L_7 = (SerializationException_tDB38C13A2ABF407C381E3F332D197AC1AD097A92 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SerializationException_tDB38C13A2ABF407C381E3F332D197AC1AD097A92_il2cpp_TypeInfo_var)));
		SerializationException__ctor_m03F01FDBEB6469CCD85942C5C62BD46FFC6CE11C(L_7, L_5, L_6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AdjustmentRule_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m17BE62BEC7C588C0B755CBB5426287665986474D_RuntimeMethod_var)));
	} // end catch (depth: 1)

IL_0037:
	{
		return;
	}
}
// System.Void System.TimeZoneInfo/AdjustmentRule::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustmentRule_System_Runtime_Serialization_ISerializable_GetObjectData_mCF3E994E8DEAF796477DCA219855A09423139754 (AdjustmentRule_t15EC10F91D4E8CC287CF8610D8D24BD636A23304 * __this, SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ___info0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral592EDDBE99E3B537ABCB79EA8611A7CB7989097F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral76EE6AC9CE84AB75E1822F990EDC05A4A83E34CD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8BB31BB6FEE4CFF323F9B357F30EDA29E1B5CBA7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral92057E8211A0EA82031051D2B0E70ADB04D156C7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD62A6E8579B9E226105A0C28889FEEC94AAE3E9A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF38018A5E6704152C358CEE388C935AA44BFE927);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_0 = ___info0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AdjustmentRule_System_Runtime_Serialization_ISerializable_GetObjectData_mCF3E994E8DEAF796477DCA219855A09423139754_RuntimeMethod_var)));
	}

IL_000e:
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_2 = ___info0;
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_3 = __this->get_m_dateStart_0();
		NullCheck(L_2);
		SerializationInfo_AddValue_m4E39B61DB324BA16CB228942756352329286C40B(L_2, _stringLiteralD62A6E8579B9E226105A0C28889FEEC94AAE3E9A, L_3, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_4 = ___info0;
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_5 = __this->get_m_dateEnd_1();
		NullCheck(L_4);
		SerializationInfo_AddValue_m4E39B61DB324BA16CB228942756352329286C40B(L_4, _stringLiteralF38018A5E6704152C358CEE388C935AA44BFE927, L_5, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_6 = ___info0;
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_7 = __this->get_m_daylightDelta_2();
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_8 = L_7;
		RuntimeObject * L_9 = Box(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		SerializationInfo_AddValue_mA50C2668EF700C2239DDC362F8DB409020BB763D(L_6, _stringLiteral76EE6AC9CE84AB75E1822F990EDC05A4A83E34CD, L_9, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_10 = ___info0;
		TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  L_11 = __this->get_m_daylightTransitionStart_3();
		TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  L_12 = L_11;
		RuntimeObject * L_13 = Box(TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_10);
		SerializationInfo_AddValue_mA50C2668EF700C2239DDC362F8DB409020BB763D(L_10, _stringLiteral592EDDBE99E3B537ABCB79EA8611A7CB7989097F, L_13, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_14 = ___info0;
		TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  L_15 = __this->get_m_daylightTransitionEnd_4();
		TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  L_16 = L_15;
		RuntimeObject * L_17 = Box(TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A_il2cpp_TypeInfo_var, &L_16);
		NullCheck(L_14);
		SerializationInfo_AddValue_mA50C2668EF700C2239DDC362F8DB409020BB763D(L_14, _stringLiteral92057E8211A0EA82031051D2B0E70ADB04D156C7, L_17, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_18 = ___info0;
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_19 = __this->get_m_baseUtcOffsetDelta_5();
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_20 = L_19;
		RuntimeObject * L_21 = Box(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var, &L_20);
		NullCheck(L_18);
		SerializationInfo_AddValue_mA50C2668EF700C2239DDC362F8DB409020BB763D(L_18, _stringLiteral8BB31BB6FEE4CFF323F9B357F30EDA29E1B5CBA7, L_21, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.TimeZoneInfo/AdjustmentRule::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustmentRule__ctor_m2A972339AE991722C67C074B585F461F0AECEF3B (AdjustmentRule_t15EC10F91D4E8CC287CF8610D8D24BD636A23304 * __this, SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ___info0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral592EDDBE99E3B537ABCB79EA8611A7CB7989097F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral76EE6AC9CE84AB75E1822F990EDC05A4A83E34CD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8BB31BB6FEE4CFF323F9B357F30EDA29E1B5CBA7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral92057E8211A0EA82031051D2B0E70ADB04D156C7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD62A6E8579B9E226105A0C28889FEEC94AAE3E9A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF38018A5E6704152C358CEE388C935AA44BFE927);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_0 = ___info0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AdjustmentRule__ctor_m2A972339AE991722C67C074B585F461F0AECEF3B_RuntimeMethod_var)));
	}

IL_0014:
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_2 = ___info0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_3 = { reinterpret_cast<intptr_t> (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4;
		L_4 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		RuntimeObject * L_5;
		L_5 = SerializationInfo_GetValue_mF6E311779D55AD7C80B2D19FF2A7E9683AEF2A99(L_2, _stringLiteralD62A6E8579B9E226105A0C28889FEEC94AAE3E9A, L_4, /*hidden argument*/NULL);
		__this->set_m_dateStart_0(((*(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)UnBox(L_5, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var)))));
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_6 = ___info0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_7 = { reinterpret_cast<intptr_t> (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_0_0_0_var) };
		Type_t * L_8;
		L_8 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		RuntimeObject * L_9;
		L_9 = SerializationInfo_GetValue_mF6E311779D55AD7C80B2D19FF2A7E9683AEF2A99(L_6, _stringLiteralF38018A5E6704152C358CEE388C935AA44BFE927, L_8, /*hidden argument*/NULL);
		__this->set_m_dateEnd_1(((*(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)UnBox(L_9, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var)))));
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_10 = ___info0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_11 = { reinterpret_cast<intptr_t> (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_0_0_0_var) };
		Type_t * L_12;
		L_12 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		RuntimeObject * L_13;
		L_13 = SerializationInfo_GetValue_mF6E311779D55AD7C80B2D19FF2A7E9683AEF2A99(L_10, _stringLiteral76EE6AC9CE84AB75E1822F990EDC05A4A83E34CD, L_12, /*hidden argument*/NULL);
		__this->set_m_daylightDelta_2(((*(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 *)((TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 *)UnBox(L_13, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var)))));
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_14 = ___info0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_15 = { reinterpret_cast<intptr_t> (TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A_0_0_0_var) };
		Type_t * L_16;
		L_16 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_15, /*hidden argument*/NULL);
		NullCheck(L_14);
		RuntimeObject * L_17;
		L_17 = SerializationInfo_GetValue_mF6E311779D55AD7C80B2D19FF2A7E9683AEF2A99(L_14, _stringLiteral592EDDBE99E3B537ABCB79EA8611A7CB7989097F, L_16, /*hidden argument*/NULL);
		__this->set_m_daylightTransitionStart_3(((*(TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A *)((TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A *)UnBox(L_17, TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A_il2cpp_TypeInfo_var)))));
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_18 = ___info0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_19 = { reinterpret_cast<intptr_t> (TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A_0_0_0_var) };
		Type_t * L_20;
		L_20 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_19, /*hidden argument*/NULL);
		NullCheck(L_18);
		RuntimeObject * L_21;
		L_21 = SerializationInfo_GetValue_mF6E311779D55AD7C80B2D19FF2A7E9683AEF2A99(L_18, _stringLiteral92057E8211A0EA82031051D2B0E70ADB04D156C7, L_20, /*hidden argument*/NULL);
		__this->set_m_daylightTransitionEnd_4(((*(TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A *)((TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A *)UnBox(L_21, TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A_il2cpp_TypeInfo_var)))));
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_22 = ___info0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_23 = { reinterpret_cast<intptr_t> (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_0_0_0_var) };
		Type_t * L_24;
		L_24 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_23, /*hidden argument*/NULL);
		NullCheck(L_22);
		RuntimeObject * L_25;
		L_25 = SerializationInfo_GetValueNoThrow_mA1F5663511899C588B39643FF53002717A84DFF3(L_22, _stringLiteral8BB31BB6FEE4CFF323F9B357F30EDA29E1B5CBA7, L_24, /*hidden argument*/NULL);
		V_0 = L_25;
		RuntimeObject * L_26 = V_0;
		if (!L_26)
		{
			goto IL_00d9;
		}
	}
	{
		RuntimeObject * L_27 = V_0;
		__this->set_m_baseUtcOffsetDelta_5(((*(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 *)((TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 *)UnBox(L_27, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var)))));
	}

IL_00d9:
	{
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


// Conversion methods for marshalling of: System.TimeZoneInfo/DYNAMIC_TIME_ZONE_INFORMATION
IL2CPP_EXTERN_C void DYNAMIC_TIME_ZONE_INFORMATION_t2A935E4357B99965B322E468058134B139805895_marshal_pinvoke(const DYNAMIC_TIME_ZONE_INFORMATION_t2A935E4357B99965B322E468058134B139805895& unmarshaled, DYNAMIC_TIME_ZONE_INFORMATION_t2A935E4357B99965B322E468058134B139805895_marshaled_pinvoke& marshaled)
{
	TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578_marshal_pinvoke(unmarshaled.get_TZI_0(), marshaled.___TZI_0);
	il2cpp_codegen_marshal_wstring_fixed(unmarshaled.get_TimeZoneKeyName_1(), (Il2CppChar*)&marshaled.___TimeZoneKeyName_1, 128);
	marshaled.___DynamicDaylightTimeDisabled_2 = unmarshaled.get_DynamicDaylightTimeDisabled_2();
}
IL2CPP_EXTERN_C void DYNAMIC_TIME_ZONE_INFORMATION_t2A935E4357B99965B322E468058134B139805895_marshal_pinvoke_back(const DYNAMIC_TIME_ZONE_INFORMATION_t2A935E4357B99965B322E468058134B139805895_marshaled_pinvoke& marshaled, DYNAMIC_TIME_ZONE_INFORMATION_t2A935E4357B99965B322E468058134B139805895& unmarshaled)
{
	TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578  unmarshaled_TZI_temp_0;
	memset((&unmarshaled_TZI_temp_0), 0, sizeof(unmarshaled_TZI_temp_0));
	TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578_marshal_pinvoke_back(marshaled.___TZI_0, unmarshaled_TZI_temp_0);
	unmarshaled.set_TZI_0(unmarshaled_TZI_temp_0);
	unmarshaled.set_TimeZoneKeyName_1(il2cpp_codegen_marshal_wstring_result(marshaled.___TimeZoneKeyName_1));
	uint8_t unmarshaled_DynamicDaylightTimeDisabled_temp_2 = 0x0;
	unmarshaled_DynamicDaylightTimeDisabled_temp_2 = marshaled.___DynamicDaylightTimeDisabled_2;
	unmarshaled.set_DynamicDaylightTimeDisabled_2(unmarshaled_DynamicDaylightTimeDisabled_temp_2);
}
// Conversion method for clean up from marshalling of: System.TimeZoneInfo/DYNAMIC_TIME_ZONE_INFORMATION
IL2CPP_EXTERN_C void DYNAMIC_TIME_ZONE_INFORMATION_t2A935E4357B99965B322E468058134B139805895_marshal_pinvoke_cleanup(DYNAMIC_TIME_ZONE_INFORMATION_t2A935E4357B99965B322E468058134B139805895_marshaled_pinvoke& marshaled)
{
	TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578_marshal_pinvoke_cleanup(marshaled.___TZI_0);
}


// Conversion methods for marshalling of: System.TimeZoneInfo/DYNAMIC_TIME_ZONE_INFORMATION
IL2CPP_EXTERN_C void DYNAMIC_TIME_ZONE_INFORMATION_t2A935E4357B99965B322E468058134B139805895_marshal_com(const DYNAMIC_TIME_ZONE_INFORMATION_t2A935E4357B99965B322E468058134B139805895& unmarshaled, DYNAMIC_TIME_ZONE_INFORMATION_t2A935E4357B99965B322E468058134B139805895_marshaled_com& marshaled)
{
	TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578_marshal_com(unmarshaled.get_TZI_0(), marshaled.___TZI_0);
	il2cpp_codegen_marshal_wstring_fixed(unmarshaled.get_TimeZoneKeyName_1(), (Il2CppChar*)&marshaled.___TimeZoneKeyName_1, 128);
	marshaled.___DynamicDaylightTimeDisabled_2 = unmarshaled.get_DynamicDaylightTimeDisabled_2();
}
IL2CPP_EXTERN_C void DYNAMIC_TIME_ZONE_INFORMATION_t2A935E4357B99965B322E468058134B139805895_marshal_com_back(const DYNAMIC_TIME_ZONE_INFORMATION_t2A935E4357B99965B322E468058134B139805895_marshaled_com& marshaled, DYNAMIC_TIME_ZONE_INFORMATION_t2A935E4357B99965B322E468058134B139805895& unmarshaled)
{
	TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578  unmarshaled_TZI_temp_0;
	memset((&unmarshaled_TZI_temp_0), 0, sizeof(unmarshaled_TZI_temp_0));
	TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578_marshal_com_back(marshaled.___TZI_0, unmarshaled_TZI_temp_0);
	unmarshaled.set_TZI_0(unmarshaled_TZI_temp_0);
	unmarshaled.set_TimeZoneKeyName_1(il2cpp_codegen_marshal_wstring_result(marshaled.___TimeZoneKeyName_1));
	uint8_t unmarshaled_DynamicDaylightTimeDisabled_temp_2 = 0x0;
	unmarshaled_DynamicDaylightTimeDisabled_temp_2 = marshaled.___DynamicDaylightTimeDisabled_2;
	unmarshaled.set_DynamicDaylightTimeDisabled_2(unmarshaled_DynamicDaylightTimeDisabled_temp_2);
}
// Conversion method for clean up from marshalling of: System.TimeZoneInfo/DYNAMIC_TIME_ZONE_INFORMATION
IL2CPP_EXTERN_C void DYNAMIC_TIME_ZONE_INFORMATION_t2A935E4357B99965B322E468058134B139805895_marshal_com_cleanup(DYNAMIC_TIME_ZONE_INFORMATION_t2A935E4357B99965B322E468058134B139805895_marshaled_com& marshaled)
{
	TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578_marshal_com_cleanup(marshaled.___TZI_0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// Conversion methods for marshalling of: System.TimeZoneInfo/TIME_ZONE_INFORMATION
IL2CPP_EXTERN_C void TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578_marshal_pinvoke(const TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578& unmarshaled, TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578_marshaled_pinvoke& marshaled)
{
	marshaled.___Bias_0 = unmarshaled.get_Bias_0();
	il2cpp_codegen_marshal_wstring_fixed(unmarshaled.get_StandardName_1(), (Il2CppChar*)&marshaled.___StandardName_1, 32);
	marshaled.___StandardDate_2 = unmarshaled.get_StandardDate_2();
	marshaled.___StandardBias_3 = unmarshaled.get_StandardBias_3();
	il2cpp_codegen_marshal_wstring_fixed(unmarshaled.get_DaylightName_4(), (Il2CppChar*)&marshaled.___DaylightName_4, 32);
	marshaled.___DaylightDate_5 = unmarshaled.get_DaylightDate_5();
	marshaled.___DaylightBias_6 = unmarshaled.get_DaylightBias_6();
}
IL2CPP_EXTERN_C void TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578_marshal_pinvoke_back(const TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578_marshaled_pinvoke& marshaled, TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578& unmarshaled)
{
	int32_t unmarshaled_Bias_temp_0 = 0;
	unmarshaled_Bias_temp_0 = marshaled.___Bias_0;
	unmarshaled.set_Bias_0(unmarshaled_Bias_temp_0);
	unmarshaled.set_StandardName_1(il2cpp_codegen_marshal_wstring_result(marshaled.___StandardName_1));
	SYSTEMTIME_tDB5B1D262445C33D2FE644CCC1353DFB26184BA4  unmarshaled_StandardDate_temp_2;
	memset((&unmarshaled_StandardDate_temp_2), 0, sizeof(unmarshaled_StandardDate_temp_2));
	unmarshaled_StandardDate_temp_2 = marshaled.___StandardDate_2;
	unmarshaled.set_StandardDate_2(unmarshaled_StandardDate_temp_2);
	int32_t unmarshaled_StandardBias_temp_3 = 0;
	unmarshaled_StandardBias_temp_3 = marshaled.___StandardBias_3;
	unmarshaled.set_StandardBias_3(unmarshaled_StandardBias_temp_3);
	unmarshaled.set_DaylightName_4(il2cpp_codegen_marshal_wstring_result(marshaled.___DaylightName_4));
	SYSTEMTIME_tDB5B1D262445C33D2FE644CCC1353DFB26184BA4  unmarshaled_DaylightDate_temp_5;
	memset((&unmarshaled_DaylightDate_temp_5), 0, sizeof(unmarshaled_DaylightDate_temp_5));
	unmarshaled_DaylightDate_temp_5 = marshaled.___DaylightDate_5;
	unmarshaled.set_DaylightDate_5(unmarshaled_DaylightDate_temp_5);
	int32_t unmarshaled_DaylightBias_temp_6 = 0;
	unmarshaled_DaylightBias_temp_6 = marshaled.___DaylightBias_6;
	unmarshaled.set_DaylightBias_6(unmarshaled_DaylightBias_temp_6);
}
// Conversion method for clean up from marshalling of: System.TimeZoneInfo/TIME_ZONE_INFORMATION
IL2CPP_EXTERN_C void TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578_marshal_pinvoke_cleanup(TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: System.TimeZoneInfo/TIME_ZONE_INFORMATION
IL2CPP_EXTERN_C void TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578_marshal_com(const TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578& unmarshaled, TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578_marshaled_com& marshaled)
{
	marshaled.___Bias_0 = unmarshaled.get_Bias_0();
	il2cpp_codegen_marshal_wstring_fixed(unmarshaled.get_StandardName_1(), (Il2CppChar*)&marshaled.___StandardName_1, 32);
	marshaled.___StandardDate_2 = unmarshaled.get_StandardDate_2();
	marshaled.___StandardBias_3 = unmarshaled.get_StandardBias_3();
	il2cpp_codegen_marshal_wstring_fixed(unmarshaled.get_DaylightName_4(), (Il2CppChar*)&marshaled.___DaylightName_4, 32);
	marshaled.___DaylightDate_5 = unmarshaled.get_DaylightDate_5();
	marshaled.___DaylightBias_6 = unmarshaled.get_DaylightBias_6();
}
IL2CPP_EXTERN_C void TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578_marshal_com_back(const TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578_marshaled_com& marshaled, TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578& unmarshaled)
{
	int32_t unmarshaled_Bias_temp_0 = 0;
	unmarshaled_Bias_temp_0 = marshaled.___Bias_0;
	unmarshaled.set_Bias_0(unmarshaled_Bias_temp_0);
	unmarshaled.set_StandardName_1(il2cpp_codegen_marshal_wstring_result(marshaled.___StandardName_1));
	SYSTEMTIME_tDB5B1D262445C33D2FE644CCC1353DFB26184BA4  unmarshaled_StandardDate_temp_2;
	memset((&unmarshaled_StandardDate_temp_2), 0, sizeof(unmarshaled_StandardDate_temp_2));
	unmarshaled_StandardDate_temp_2 = marshaled.___StandardDate_2;
	unmarshaled.set_StandardDate_2(unmarshaled_StandardDate_temp_2);
	int32_t unmarshaled_StandardBias_temp_3 = 0;
	unmarshaled_StandardBias_temp_3 = marshaled.___StandardBias_3;
	unmarshaled.set_StandardBias_3(unmarshaled_StandardBias_temp_3);
	unmarshaled.set_DaylightName_4(il2cpp_codegen_marshal_wstring_result(marshaled.___DaylightName_4));
	SYSTEMTIME_tDB5B1D262445C33D2FE644CCC1353DFB26184BA4  unmarshaled_DaylightDate_temp_5;
	memset((&unmarshaled_DaylightDate_temp_5), 0, sizeof(unmarshaled_DaylightDate_temp_5));
	unmarshaled_DaylightDate_temp_5 = marshaled.___DaylightDate_5;
	unmarshaled.set_DaylightDate_5(unmarshaled_DaylightDate_temp_5);
	int32_t unmarshaled_DaylightBias_temp_6 = 0;
	unmarshaled_DaylightBias_temp_6 = marshaled.___DaylightBias_6;
	unmarshaled.set_DaylightBias_6(unmarshaled_DaylightBias_temp_6);
}
// Conversion method for clean up from marshalling of: System.TimeZoneInfo/TIME_ZONE_INFORMATION
IL2CPP_EXTERN_C void TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578_marshal_com_cleanup(TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: System.TimeZoneInfo/TransitionTime
IL2CPP_EXTERN_C void TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A_marshal_pinvoke(const TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A& unmarshaled, TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_timeOfDay_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_timeOfDay' of type 'TransitionTime'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_timeOfDay_0Exception, NULL);
}
IL2CPP_EXTERN_C void TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A_marshal_pinvoke_back(const TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A_marshaled_pinvoke& marshaled, TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A& unmarshaled)
{
	Exception_t* ___m_timeOfDay_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_timeOfDay' of type 'TransitionTime'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_timeOfDay_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: System.TimeZoneInfo/TransitionTime
IL2CPP_EXTERN_C void TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A_marshal_pinvoke_cleanup(TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: System.TimeZoneInfo/TransitionTime
IL2CPP_EXTERN_C void TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A_marshal_com(const TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A& unmarshaled, TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A_marshaled_com& marshaled)
{
	Exception_t* ___m_timeOfDay_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_timeOfDay' of type 'TransitionTime'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_timeOfDay_0Exception, NULL);
}
IL2CPP_EXTERN_C void TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A_marshal_com_back(const TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A_marshaled_com& marshaled, TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A& unmarshaled)
{
	Exception_t* ___m_timeOfDay_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_timeOfDay' of type 'TransitionTime'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_timeOfDay_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: System.TimeZoneInfo/TransitionTime
IL2CPP_EXTERN_C void TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A_marshal_com_cleanup(TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A_marshaled_com& marshaled)
{
}
// System.DateTime System.TimeZoneInfo/TransitionTime::get_TimeOfDay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  TransitionTime_get_TimeOfDay_m95ECA2E981CA772D9D1DECC7F7421241D4144F44 (TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A * __this, const RuntimeMethod* method)
{
	{
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0 = __this->get_m_timeOfDay_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  TransitionTime_get_TimeOfDay_m95ECA2E981CA772D9D1DECC7F7421241D4144F44_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A * _thisAdjusted = reinterpret_cast<TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A *>(__this + _offset);
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  _returnValue;
	_returnValue = TransitionTime_get_TimeOfDay_m95ECA2E981CA772D9D1DECC7F7421241D4144F44_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 System.TimeZoneInfo/TransitionTime::get_Month()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TransitionTime_get_Month_m1E127ECF7312277ED31CEB769A6DC0503F1FAB2B (TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A * __this, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = __this->get_m_month_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t TransitionTime_get_Month_m1E127ECF7312277ED31CEB769A6DC0503F1FAB2B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A * _thisAdjusted = reinterpret_cast<TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = TransitionTime_get_Month_m1E127ECF7312277ED31CEB769A6DC0503F1FAB2B_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 System.TimeZoneInfo/TransitionTime::get_Week()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TransitionTime_get_Week_m9271C2A79DC390EF07020F63CAB641FA36E304BA (TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A * __this, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = __this->get_m_week_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t TransitionTime_get_Week_m9271C2A79DC390EF07020F63CAB641FA36E304BA_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A * _thisAdjusted = reinterpret_cast<TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = TransitionTime_get_Week_m9271C2A79DC390EF07020F63CAB641FA36E304BA_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 System.TimeZoneInfo/TransitionTime::get_Day()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TransitionTime_get_Day_mF663C24FEFF09012299FA76BE6D65CC6C455C87C (TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A * __this, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = __this->get_m_day_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t TransitionTime_get_Day_mF663C24FEFF09012299FA76BE6D65CC6C455C87C_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A * _thisAdjusted = reinterpret_cast<TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = TransitionTime_get_Day_mF663C24FEFF09012299FA76BE6D65CC6C455C87C_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.DayOfWeek System.TimeZoneInfo/TransitionTime::get_DayOfWeek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TransitionTime_get_DayOfWeek_mDC32F75FFCC4AAE5826AFBBC11840C8290E08E52 (TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_dayOfWeek_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t TransitionTime_get_DayOfWeek_mDC32F75FFCC4AAE5826AFBBC11840C8290E08E52_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A * _thisAdjusted = reinterpret_cast<TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = TransitionTime_get_DayOfWeek_mDC32F75FFCC4AAE5826AFBBC11840C8290E08E52_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean System.TimeZoneInfo/TransitionTime::get_IsFixedDateRule()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransitionTime_get_IsFixedDateRule_m4E7A489F0B8E60893C80A70E768F36A10258E9FB (TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_m_isFixedDateRule_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool TransitionTime_get_IsFixedDateRule_m4E7A489F0B8E60893C80A70E768F36A10258E9FB_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A * _thisAdjusted = reinterpret_cast<TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A *>(__this + _offset);
	bool _returnValue;
	_returnValue = TransitionTime_get_IsFixedDateRule_m4E7A489F0B8E60893C80A70E768F36A10258E9FB_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean System.TimeZoneInfo/TransitionTime::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransitionTime_Equals_mD63D4051F9FCD2B6277B194A42CCA50934E7C2B6 (TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A_il2cpp_TypeInfo_var)))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject * L_1 = ___obj0;
		bool L_2;
		L_2 = TransitionTime_Equals_m4976405B1B8F5E7A5C269D4760CD239DC18E5631((TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A *)__this, ((*(TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A *)((TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A *)UnBox(L_1, TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_2;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool TransitionTime_Equals_mD63D4051F9FCD2B6277B194A42CCA50934E7C2B6_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A * _thisAdjusted = reinterpret_cast<TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A *>(__this + _offset);
	bool _returnValue;
	_returnValue = TransitionTime_Equals_mD63D4051F9FCD2B6277B194A42CCA50934E7C2B6(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Boolean System.TimeZoneInfo/TransitionTime::op_Inequality(System.TimeZoneInfo/TransitionTime,System.TimeZoneInfo/TransitionTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransitionTime_op_Inequality_m30F06DED443B1F09A34F16DCB60E11414945C2FB (TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  ___t10, TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  ___t21, const RuntimeMethod* method)
{
	{
		TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  L_0 = ___t21;
		bool L_1;
		L_1 = TransitionTime_Equals_m4976405B1B8F5E7A5C269D4760CD239DC18E5631((TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A *)(&___t10), L_0, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.TimeZoneInfo/TransitionTime::Equals(System.TimeZoneInfo/TransitionTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransitionTime_Equals_m4976405B1B8F5E7A5C269D4760CD239DC18E5631 (TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A * __this, TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	int32_t G_B10_0 = 0;
	{
		bool L_0 = __this->get_m_isFixedDateRule_5();
		TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  L_1 = ___other0;
		bool L_2 = L_1.get_m_isFixedDateRule_5();
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_0031;
		}
	}
	{
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_3 = __this->get_m_timeOfDay_0();
		TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  L_4 = ___other0;
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_5 = L_4.get_m_timeOfDay_0();
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = DateTime_op_Equality_m07957AECB8C66EA047B16511BF560DD9EDA1DA44(L_3, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0031;
		}
	}
	{
		uint8_t L_7 = __this->get_m_month_1();
		TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  L_8 = ___other0;
		uint8_t L_9 = L_8.get_m_month_1();
		G_B4_0 = ((((int32_t)L_7) == ((int32_t)L_9))? 1 : 0);
		goto IL_0032;
	}

IL_0031:
	{
		G_B4_0 = 0;
	}

IL_0032:
	{
		V_0 = (bool)G_B4_0;
		bool L_10 = V_0;
		if (!L_10)
		{
			goto IL_006f;
		}
	}
	{
		TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  L_11 = ___other0;
		bool L_12 = L_11.get_m_isFixedDateRule_5();
		if (!L_12)
		{
			goto IL_004f;
		}
	}
	{
		uint8_t L_13 = __this->get_m_day_3();
		TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  L_14 = ___other0;
		uint8_t L_15 = L_14.get_m_day_3();
		V_0 = (bool)((((int32_t)L_13) == ((int32_t)L_15))? 1 : 0);
		goto IL_006f;
	}

IL_004f:
	{
		uint8_t L_16 = __this->get_m_week_2();
		TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  L_17 = ___other0;
		uint8_t L_18 = L_17.get_m_week_2();
		if ((!(((uint32_t)L_16) == ((uint32_t)L_18))))
		{
			goto IL_006d;
		}
	}
	{
		int32_t L_19 = __this->get_m_dayOfWeek_4();
		TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  L_20 = ___other0;
		int32_t L_21 = L_20.get_m_dayOfWeek_4();
		G_B10_0 = ((((int32_t)L_19) == ((int32_t)L_21))? 1 : 0);
		goto IL_006e;
	}

IL_006d:
	{
		G_B10_0 = 0;
	}

IL_006e:
	{
		V_0 = (bool)G_B10_0;
	}

IL_006f:
	{
		bool L_22 = V_0;
		return L_22;
	}
}
IL2CPP_EXTERN_C  bool TransitionTime_Equals_m4976405B1B8F5E7A5C269D4760CD239DC18E5631_AdjustorThunk (RuntimeObject * __this, TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A * _thisAdjusted = reinterpret_cast<TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A *>(__this + _offset);
	bool _returnValue;
	_returnValue = TransitionTime_Equals_m4976405B1B8F5E7A5C269D4760CD239DC18E5631(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Int32 System.TimeZoneInfo/TransitionTime::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TransitionTime_GetHashCode_m375A0DD95EB4F4A3139592E11E0BDB1C8B99F36E (TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A * __this, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = __this->get_m_month_1();
		uint8_t L_1 = __this->get_m_week_2();
		return ((int32_t)((int32_t)L_0^(int32_t)((int32_t)((int32_t)L_1<<(int32_t)8))));
	}
}
IL2CPP_EXTERN_C  int32_t TransitionTime_GetHashCode_m375A0DD95EB4F4A3139592E11E0BDB1C8B99F36E_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A * _thisAdjusted = reinterpret_cast<TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = TransitionTime_GetHashCode_m375A0DD95EB4F4A3139592E11E0BDB1C8B99F36E(_thisAdjusted, method);
	return _returnValue;
}
// System.TimeZoneInfo/TransitionTime System.TimeZoneInfo/TransitionTime::CreateFixedDateRule(System.DateTime,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  TransitionTime_CreateFixedDateRule_mD01CCFB588F2FF162626B6D876FDD053BD4F67F5 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___timeOfDay0, int32_t ___month1, int32_t ___day2, const RuntimeMethod* method)
{
	{
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0 = ___timeOfDay0;
		int32_t L_1 = ___month1;
		int32_t L_2 = ___day2;
		TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  L_3;
		L_3 = TransitionTime_CreateTransitionTime_m3B9B63724B97DF42141B69B6B561D36AE629434E(L_0, L_1, 1, L_2, 0, (bool)1, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.TimeZoneInfo/TransitionTime System.TimeZoneInfo/TransitionTime::CreateFloatingDateRule(System.DateTime,System.Int32,System.Int32,System.DayOfWeek)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  TransitionTime_CreateFloatingDateRule_m220371E134BAF150869D46F849F4A099DE063B3A (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___timeOfDay0, int32_t ___month1, int32_t ___week2, int32_t ___dayOfWeek3, const RuntimeMethod* method)
{
	{
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0 = ___timeOfDay0;
		int32_t L_1 = ___month1;
		int32_t L_2 = ___week2;
		int32_t L_3 = ___dayOfWeek3;
		TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  L_4;
		L_4 = TransitionTime_CreateTransitionTime_m3B9B63724B97DF42141B69B6B561D36AE629434E(L_0, L_1, L_2, 1, L_3, (bool)0, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.TimeZoneInfo/TransitionTime System.TimeZoneInfo/TransitionTime::CreateTransitionTime(System.DateTime,System.Int32,System.Int32,System.Int32,System.DayOfWeek,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  TransitionTime_CreateTransitionTime_m3B9B63724B97DF42141B69B6B561D36AE629434E (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___timeOfDay0, int32_t ___month1, int32_t ___week2, int32_t ___day3, int32_t ___dayOfWeek4, bool ___isFixedDateRule5, const RuntimeMethod* method)
{
	TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0 = ___timeOfDay0;
		int32_t L_1 = ___month1;
		int32_t L_2 = ___week2;
		int32_t L_3 = ___day3;
		int32_t L_4 = ___dayOfWeek4;
		TransitionTime_ValidateTransitionTime_m26FF63A3CD81059DCD206740F4C55820E979F844(L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		il2cpp_codegen_initobj((&V_0), sizeof(TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A ));
		bool L_5 = ___isFixedDateRule5;
		(&V_0)->set_m_isFixedDateRule_5(L_5);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_6 = ___timeOfDay0;
		(&V_0)->set_m_timeOfDay_0(L_6);
		int32_t L_7 = ___dayOfWeek4;
		(&V_0)->set_m_dayOfWeek_4(L_7);
		int32_t L_8 = ___day3;
		(&V_0)->set_m_day_3((uint8_t)((int32_t)((uint8_t)L_8)));
		int32_t L_9 = ___week2;
		(&V_0)->set_m_week_2((uint8_t)((int32_t)((uint8_t)L_9)));
		int32_t L_10 = ___month1;
		(&V_0)->set_m_month_1((uint8_t)((int32_t)((uint8_t)L_10)));
		TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  L_11 = V_0;
		return L_11;
	}
}
// System.Void System.TimeZoneInfo/TransitionTime::ValidateTransitionTime(System.DateTime,System.Int32,System.Int32,System.Int32,System.DayOfWeek)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransitionTime_ValidateTransitionTime_m26FF63A3CD81059DCD206740F4C55820E979F844 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___timeOfDay0, int32_t ___month1, int32_t ___week2, int32_t ___day3, int32_t ___dayOfWeek4, const RuntimeMethod* method)
{
	{
		int32_t L_0;
		L_0 = DateTime_get_Kind_mC7EC1A788CC9A875094117214C5A0C153A39F496((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&___timeOfDay0), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		String_t* L_1;
		L_1 = Environment_GetResourceString_m8DFF827596B5FD533D3FE56900FA095F7D674617(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE5A6B5B780158F734FA0A11A802E762EF7BDD272)), /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_2 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_2, L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC71EEB076C9C234A1E39FDB9B0DCFC8851BA4D7F)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TransitionTime_ValidateTransitionTime_m26FF63A3CD81059DCD206740F4C55820E979F844_RuntimeMethod_var)));
	}

IL_001e:
	{
		int32_t L_3 = ___month1;
		if ((((int32_t)L_3) < ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_4 = ___month1;
		if ((((int32_t)L_4) <= ((int32_t)((int32_t)12))))
		{
			goto IL_003c;
		}
	}

IL_0027:
	{
		String_t* L_5;
		L_5 = Environment_GetResourceString_m8DFF827596B5FD533D3FE56900FA095F7D674617(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD5E0D3D064AAABFE3EC781EFE9126A80D40BED15)), /*hidden argument*/NULL);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_6 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE43AFC74F5F3932913C023A04B24905E093C5005(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral30D99F99F1F4688CE08A3BF1B034C9CD49C19174)), L_5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TransitionTime_ValidateTransitionTime_m26FF63A3CD81059DCD206740F4C55820E979F844_RuntimeMethod_var)));
	}

IL_003c:
	{
		int32_t L_7 = ___day3;
		if ((((int32_t)L_7) < ((int32_t)1)))
		{
			goto IL_0045;
		}
	}
	{
		int32_t L_8 = ___day3;
		if ((((int32_t)L_8) <= ((int32_t)((int32_t)31))))
		{
			goto IL_005a;
		}
	}

IL_0045:
	{
		String_t* L_9;
		L_9 = Environment_GetResourceString_m8DFF827596B5FD533D3FE56900FA095F7D674617(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4B63EF6929AE971A204D72191783C54436124C51)), /*hidden argument*/NULL);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_10 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE43AFC74F5F3932913C023A04B24905E093C5005(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral645F0B83FF7CADECF44AD1B83B13002DA97FBA1E)), L_9, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TransitionTime_ValidateTransitionTime_m26FF63A3CD81059DCD206740F4C55820E979F844_RuntimeMethod_var)));
	}

IL_005a:
	{
		int32_t L_11 = ___week2;
		if ((((int32_t)L_11) < ((int32_t)1)))
		{
			goto IL_0062;
		}
	}
	{
		int32_t L_12 = ___week2;
		if ((((int32_t)L_12) <= ((int32_t)5)))
		{
			goto IL_0077;
		}
	}

IL_0062:
	{
		String_t* L_13;
		L_13 = Environment_GetResourceString_m8DFF827596B5FD533D3FE56900FA095F7D674617(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral27898ED9175E943FDE24F2BF2E86B60EEDFF15D2)), /*hidden argument*/NULL);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_14 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE43AFC74F5F3932913C023A04B24905E093C5005(L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0A2679566878DB123603B221EB69443EBD3A7BCB)), L_13, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TransitionTime_ValidateTransitionTime_m26FF63A3CD81059DCD206740F4C55820E979F844_RuntimeMethod_var)));
	}

IL_0077:
	{
		int32_t L_15 = ___dayOfWeek4;
		if ((((int32_t)L_15) < ((int32_t)0)))
		{
			goto IL_0081;
		}
	}
	{
		int32_t L_16 = ___dayOfWeek4;
		if ((((int32_t)L_16) <= ((int32_t)6)))
		{
			goto IL_0096;
		}
	}

IL_0081:
	{
		String_t* L_17;
		L_17 = Environment_GetResourceString_m8DFF827596B5FD533D3FE56900FA095F7D674617(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral83DC2909B9E8CF20AD23217F95DC9967B22DD3F5)), /*hidden argument*/NULL);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_18 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE43AFC74F5F3932913C023A04B24905E093C5005(L_18, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA50A38EF2D7858A83B908FDB41C862EF6FD5FAE1)), L_17, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TransitionTime_ValidateTransitionTime_m26FF63A3CD81059DCD206740F4C55820E979F844_RuntimeMethod_var)));
	}

IL_0096:
	{
		int32_t L_19;
		L_19 = DateTime_get_Year_m977F96B53C996797BFBDCAA5679B8DCBA61AC185((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&___timeOfDay0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_19) == ((uint32_t)1))))
		{
			goto IL_00c4;
		}
	}
	{
		int32_t L_20;
		L_20 = DateTime_get_Month_m46CC2AED3F24A91104919B1F6B5103DD1F8BBAE8((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&___timeOfDay0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_20) == ((uint32_t)1))))
		{
			goto IL_00c4;
		}
	}
	{
		int32_t L_21;
		L_21 = DateTime_get_Day_m9D698CA2A7D1FBEE7BEC0A982A119239F513CBA8((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&___timeOfDay0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_21) == ((uint32_t)1))))
		{
			goto IL_00c4;
		}
	}
	{
		int64_t L_22;
		L_22 = DateTime_get_Ticks_m175EDB41A50DB06872CC48CAB603FEBD1DFF46A9((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&___timeOfDay0), /*hidden argument*/NULL);
		if (!((int64_t)((int64_t)L_22%(int64_t)((int64_t)((int64_t)((int32_t)10000))))))
		{
			goto IL_00d9;
		}
	}

IL_00c4:
	{
		String_t* L_23;
		L_23 = Environment_GetResourceString_m8DFF827596B5FD533D3FE56900FA095F7D674617(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1C55B63DB181316212E6D01717E65E1FB557B6B8)), /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_24 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_24, L_23, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC71EEB076C9C234A1E39FDB9B0DCFC8851BA4D7F)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_24, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TransitionTime_ValidateTransitionTime_m26FF63A3CD81059DCD206740F4C55820E979F844_RuntimeMethod_var)));
	}

IL_00d9:
	{
		return;
	}
}
// System.Void System.TimeZoneInfo/TransitionTime::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransitionTime_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m7531877356A7E49F851E7C075B15905C94DBA18B (TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A * __this, RuntimeObject * ___sender0, const RuntimeMethod* method)
{
	ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0 = __this->get_m_timeOfDay_0();
		uint8_t L_1 = __this->get_m_month_1();
		uint8_t L_2 = __this->get_m_week_2();
		uint8_t L_3 = __this->get_m_day_3();
		int32_t L_4 = __this->get_m_dayOfWeek_4();
		TransitionTime_ValidateTransitionTime_m26FF63A3CD81059DCD206740F4C55820E979F844(L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		goto IL_0037;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0025;
		}
		throw e;
	}

CATCH_0025:
	{ // begin catch(System.ArgumentException)
		V_0 = ((ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)IL2CPP_GET_ACTIVE_EXCEPTION(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *));
		String_t* L_5;
		L_5 = Environment_GetResourceString_m8DFF827596B5FD533D3FE56900FA095F7D674617(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA595476C6F6D3E2C3406DD69BC73859EA4408F2F)), /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_6 = V_0;
		SerializationException_tDB38C13A2ABF407C381E3F332D197AC1AD097A92 * L_7 = (SerializationException_tDB38C13A2ABF407C381E3F332D197AC1AD097A92 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SerializationException_tDB38C13A2ABF407C381E3F332D197AC1AD097A92_il2cpp_TypeInfo_var)));
		SerializationException__ctor_m03F01FDBEB6469CCD85942C5C62BD46FFC6CE11C(L_7, L_5, L_6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TransitionTime_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m7531877356A7E49F851E7C075B15905C94DBA18B_RuntimeMethod_var)));
	} // end catch (depth: 1)

IL_0037:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void TransitionTime_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m7531877356A7E49F851E7C075B15905C94DBA18B_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___sender0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A * _thisAdjusted = reinterpret_cast<TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A *>(__this + _offset);
	TransitionTime_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m7531877356A7E49F851E7C075B15905C94DBA18B(_thisAdjusted, ___sender0, method);
}
// System.Void System.TimeZoneInfo/TransitionTime::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransitionTime_System_Runtime_Serialization_ISerializable_GetObjectData_mF3DC458CCBC82FA8027E237CE05A4B3D44E6D614 (TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A * __this, SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ___info0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DayOfWeek_t9E9D87E7A85C119F741167E9F8C613ABFB0A4AC7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3AF0F65A629E1F9641A341CFA19B861690DA71B5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79C59F2479E52A939A8A16D011943BDBDFBEE65E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral83A0203482067140327BBF852248E02658CAE786);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91A84CFC28DE4E260ED3B9388BE19E585D150D7F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD41010780259F355E00BAB0A989D365B9CD48A8F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD94C250F2B1277449096D60BF52D91C01BC28947);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_0 = ___info0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TransitionTime_System_Runtime_Serialization_ISerializable_GetObjectData_mF3DC458CCBC82FA8027E237CE05A4B3D44E6D614_RuntimeMethod_var)));
	}

IL_000e:
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_2 = ___info0;
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_3 = __this->get_m_timeOfDay_0();
		NullCheck(L_2);
		SerializationInfo_AddValue_m4E39B61DB324BA16CB228942756352329286C40B(L_2, _stringLiteralD41010780259F355E00BAB0A989D365B9CD48A8F, L_3, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_4 = ___info0;
		uint8_t L_5 = __this->get_m_month_1();
		NullCheck(L_4);
		SerializationInfo_AddValue_mBE03953B805B6CE513241C7F4656F90DF5313979(L_4, _stringLiteral3AF0F65A629E1F9641A341CFA19B861690DA71B5, L_5, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_6 = ___info0;
		uint8_t L_7 = __this->get_m_week_2();
		NullCheck(L_6);
		SerializationInfo_AddValue_mBE03953B805B6CE513241C7F4656F90DF5313979(L_6, _stringLiteral91A84CFC28DE4E260ED3B9388BE19E585D150D7F, L_7, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_8 = ___info0;
		uint8_t L_9 = __this->get_m_day_3();
		NullCheck(L_8);
		SerializationInfo_AddValue_mBE03953B805B6CE513241C7F4656F90DF5313979(L_8, _stringLiteral79C59F2479E52A939A8A16D011943BDBDFBEE65E, L_9, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_10 = ___info0;
		int32_t L_11 = __this->get_m_dayOfWeek_4();
		int32_t L_12 = L_11;
		RuntimeObject * L_13 = Box(DayOfWeek_t9E9D87E7A85C119F741167E9F8C613ABFB0A4AC7_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_10);
		SerializationInfo_AddValue_mA50C2668EF700C2239DDC362F8DB409020BB763D(L_10, _stringLiteral83A0203482067140327BBF852248E02658CAE786, L_13, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_14 = ___info0;
		bool L_15 = __this->get_m_isFixedDateRule_5();
		NullCheck(L_14);
		SerializationInfo_AddValue_m324F3E0B02B746D5F460499F5A25988FD608AD7B(L_14, _stringLiteralD94C250F2B1277449096D60BF52D91C01BC28947, L_15, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TransitionTime_System_Runtime_Serialization_ISerializable_GetObjectData_mF3DC458CCBC82FA8027E237CE05A4B3D44E6D614_AdjustorThunk (RuntimeObject * __this, SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ___info0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A * _thisAdjusted = reinterpret_cast<TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A *>(__this + _offset);
	TransitionTime_System_Runtime_Serialization_ISerializable_GetObjectData_mF3DC458CCBC82FA8027E237CE05A4B3D44E6D614(_thisAdjusted, ___info0, ___context1, method);
}
// System.Void System.TimeZoneInfo/TransitionTime::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransitionTime__ctor_mBE66AC04B8264C98E4EE51D0939F7CD57A3CBBC3 (TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A * __this, SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ___info0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DayOfWeek_t9E9D87E7A85C119F741167E9F8C613ABFB0A4AC7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DayOfWeek_t9E9D87E7A85C119F741167E9F8C613ABFB0A4AC7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3AF0F65A629E1F9641A341CFA19B861690DA71B5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79C59F2479E52A939A8A16D011943BDBDFBEE65E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral83A0203482067140327BBF852248E02658CAE786);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91A84CFC28DE4E260ED3B9388BE19E585D150D7F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD41010780259F355E00BAB0A989D365B9CD48A8F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD94C250F2B1277449096D60BF52D91C01BC28947);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_0 = ___info0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TransitionTime__ctor_mBE66AC04B8264C98E4EE51D0939F7CD57A3CBBC3_RuntimeMethod_var)));
	}

IL_000e:
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_2 = ___info0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_3 = { reinterpret_cast<intptr_t> (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4;
		L_4 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		RuntimeObject * L_5;
		L_5 = SerializationInfo_GetValue_mF6E311779D55AD7C80B2D19FF2A7E9683AEF2A99(L_2, _stringLiteralD41010780259F355E00BAB0A989D365B9CD48A8F, L_4, /*hidden argument*/NULL);
		__this->set_m_timeOfDay_0(((*(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)UnBox(L_5, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var)))));
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_6 = ___info0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_7 = { reinterpret_cast<intptr_t> (Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_0_0_0_var) };
		Type_t * L_8;
		L_8 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		RuntimeObject * L_9;
		L_9 = SerializationInfo_GetValue_mF6E311779D55AD7C80B2D19FF2A7E9683AEF2A99(L_6, _stringLiteral3AF0F65A629E1F9641A341CFA19B861690DA71B5, L_8, /*hidden argument*/NULL);
		__this->set_m_month_1(((*(uint8_t*)((uint8_t*)UnBox(L_9, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)))));
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_10 = ___info0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_11 = { reinterpret_cast<intptr_t> (Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_0_0_0_var) };
		Type_t * L_12;
		L_12 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		RuntimeObject * L_13;
		L_13 = SerializationInfo_GetValue_mF6E311779D55AD7C80B2D19FF2A7E9683AEF2A99(L_10, _stringLiteral91A84CFC28DE4E260ED3B9388BE19E585D150D7F, L_12, /*hidden argument*/NULL);
		__this->set_m_week_2(((*(uint8_t*)((uint8_t*)UnBox(L_13, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)))));
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_14 = ___info0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_15 = { reinterpret_cast<intptr_t> (Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_0_0_0_var) };
		Type_t * L_16;
		L_16 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_15, /*hidden argument*/NULL);
		NullCheck(L_14);
		RuntimeObject * L_17;
		L_17 = SerializationInfo_GetValue_mF6E311779D55AD7C80B2D19FF2A7E9683AEF2A99(L_14, _stringLiteral79C59F2479E52A939A8A16D011943BDBDFBEE65E, L_16, /*hidden argument*/NULL);
		__this->set_m_day_3(((*(uint8_t*)((uint8_t*)UnBox(L_17, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)))));
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_18 = ___info0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_19 = { reinterpret_cast<intptr_t> (DayOfWeek_t9E9D87E7A85C119F741167E9F8C613ABFB0A4AC7_0_0_0_var) };
		Type_t * L_20;
		L_20 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_19, /*hidden argument*/NULL);
		NullCheck(L_18);
		RuntimeObject * L_21;
		L_21 = SerializationInfo_GetValue_mF6E311779D55AD7C80B2D19FF2A7E9683AEF2A99(L_18, _stringLiteral83A0203482067140327BBF852248E02658CAE786, L_20, /*hidden argument*/NULL);
		__this->set_m_dayOfWeek_4(((*(int32_t*)((int32_t*)UnBox(L_21, DayOfWeek_t9E9D87E7A85C119F741167E9F8C613ABFB0A4AC7_il2cpp_TypeInfo_var)))));
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_22 = ___info0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_23 = { reinterpret_cast<intptr_t> (Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var) };
		Type_t * L_24;
		L_24 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_23, /*hidden argument*/NULL);
		NullCheck(L_22);
		RuntimeObject * L_25;
		L_25 = SerializationInfo_GetValue_mF6E311779D55AD7C80B2D19FF2A7E9683AEF2A99(L_22, _stringLiteralD94C250F2B1277449096D60BF52D91C01BC28947, L_24, /*hidden argument*/NULL);
		__this->set_m_isFixedDateRule_5(((*(bool*)((bool*)UnBox(L_25, Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var)))));
		return;
	}
}
IL2CPP_EXTERN_C  void TransitionTime__ctor_mBE66AC04B8264C98E4EE51D0939F7CD57A3CBBC3_AdjustorThunk (RuntimeObject * __this, SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ___info0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A * _thisAdjusted = reinterpret_cast<TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A *>(__this + _offset);
	TransitionTime__ctor_mBE66AC04B8264C98E4EE51D0939F7CD57A3CBBC3(_thisAdjusted, ___info0, ___context1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Threading.Timer/Scheduler::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scheduler__cctor_m36805653C9D55766CEE82413432DFBC5B5DBFB29 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * L_0 = (Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 *)il2cpp_codegen_object_new(Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8_il2cpp_TypeInfo_var);
		Scheduler__ctor_mFA8C77435650B38315E392A0D1C66EC7DC974E82(L_0, /*hidden argument*/NULL);
		((Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8_StaticFields*)il2cpp_codegen_static_fields_for(Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8_il2cpp_TypeInfo_var))->set_instance_0(L_0);
		return;
	}
}
// System.Threading.Timer/Scheduler System.Threading.Timer/Scheduler::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * Scheduler_get_Instance_mEB15B6A61E0B259CFC8BABE4376A8DEC2962BC86 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8_il2cpp_TypeInfo_var);
		Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * L_0 = ((Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8_StaticFields*)il2cpp_codegen_static_fields_for(Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8_il2cpp_TypeInfo_var))->get_instance_0();
		return L_0;
	}
}
// System.Void System.Threading.Timer/Scheduler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scheduler__ctor_mFA8C77435650B38315E392A0D1C66EC7DC974E82 (Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Scheduler_SchedulerThread_mDB9CB3C0FCB84658BB01FFF19F5995869778D8C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimerComparer_t1899647CFE875978843BE8ABA01C10956F1E740B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * L_0 = (ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA *)il2cpp_codegen_object_new(ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA_il2cpp_TypeInfo_var);
		ManualResetEvent__ctor_mF80BD5B0955BDA8CD514F48EBFF48698E5D03850(L_0, (bool)0, /*hidden argument*/NULL);
		__this->set_changed_2(L_0);
		TimerComparer_t1899647CFE875978843BE8ABA01C10956F1E740B * L_1 = (TimerComparer_t1899647CFE875978843BE8ABA01C10956F1E740B *)il2cpp_codegen_object_new(TimerComparer_t1899647CFE875978843BE8ABA01C10956F1E740B_il2cpp_TypeInfo_var);
		TimerComparer__ctor_mB4F0DB5CDEB7A6E93F59950E0FB1D19BB4BBA0B4(L_1, /*hidden argument*/NULL);
		SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 * L_2 = (SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 *)il2cpp_codegen_object_new(SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165_il2cpp_TypeInfo_var);
		SortedList__ctor_m0E1B0737647DC8D8B3E9FAD5F81168878E92E9F4(L_2, L_1, ((int32_t)1024), /*hidden argument*/NULL);
		__this->set_list_1(L_2);
		ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687 * L_3 = (ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687 *)il2cpp_codegen_object_new(ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687_il2cpp_TypeInfo_var);
		ThreadStart__ctor_m360F4EED0AD96A27D6A9612BF79671F26B30411F(L_3, __this, (intptr_t)((intptr_t)Scheduler_SchedulerThread_mDB9CB3C0FCB84658BB01FFF19F5995869778D8C7_RuntimeMethod_var), /*hidden argument*/NULL);
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_4 = (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 *)il2cpp_codegen_object_new(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_il2cpp_TypeInfo_var);
		Thread__ctor_mF22465F0D0E47C11EF25DB552D1047402750BE90(L_4, L_3, /*hidden argument*/NULL);
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_5 = L_4;
		NullCheck(L_5);
		Thread_set_IsBackground_m8CAEC157A236A574FE83FDB22D693AB1681B01B0(L_5, (bool)1, /*hidden argument*/NULL);
		NullCheck(L_5);
		Thread_Start_m490124B23F5EFD0BB2BED8CA12C77195B9CD9E1B(L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.Timer/Scheduler::Remove(System.Threading.Timer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scheduler_Remove_m34454A4F7A6AC0E05564A423140D7923771904D5 (Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * __this, Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * ___timer0, const RuntimeMethod* method)
{
	Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_0 = ___timer0;
		NullCheck(L_0);
		int64_t L_1 = L_0->get_next_run_6();
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_2 = ___timer0;
		NullCheck(L_2);
		int64_t L_3 = L_2->get_next_run_6();
		if ((!(((uint64_t)L_3) == ((uint64_t)((int64_t)(std::numeric_limits<int64_t>::max)())))))
		{
			goto IL_001a;
		}
	}

IL_0019:
	{
		return;
	}

IL_001a:
	{
		V_0 = __this;
		V_1 = (bool)0;
	}

IL_001e:
	try
	{ // begin try (depth: 1)
		Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * L_4 = V_0;
		Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_4, (bool*)(&V_1), /*hidden argument*/NULL);
		Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_5 = ___timer0;
		int32_t L_6;
		L_6 = Scheduler_InternalRemove_m3154F260BA70D6D62BB855662FD4E59EBF25C538(__this, L_5, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x3A, FINALLY_0030);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0030;
	}

FINALLY_0030:
	{ // begin finally (depth: 1)
		{
			bool L_7 = V_1;
			if (!L_7)
			{
				goto IL_0039;
			}
		}

IL_0033:
		{
			Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * L_8 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_8, /*hidden argument*/NULL);
		}

IL_0039:
		{
			IL2CPP_END_FINALLY(48)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(48)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x3A, IL_003a)
	}

IL_003a:
	{
		return;
	}
}
// System.Void System.Threading.Timer/Scheduler::Change(System.Threading.Timer,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scheduler_Change_mB9519A7BE09D1CB449D40E231F43C97F8019685D (Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * __this, Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * ___timer0, int64_t ___new_next_run1, const RuntimeMethod* method)
{
	bool V_0 = false;
	Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * V_1 = NULL;
	bool V_2 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		V_0 = (bool)0;
		V_1 = __this;
		V_2 = (bool)0;
	}

IL_0006:
	try
	{ // begin try (depth: 1)
		{
			Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * L_0 = V_1;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_0, (bool*)(&V_2), /*hidden argument*/NULL);
			Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_1 = ___timer0;
			int32_t L_2;
			L_2 = Scheduler_InternalRemove_m3154F260BA70D6D62BB855662FD4E59EBF25C538(__this, L_1, /*hidden argument*/NULL);
			int64_t L_3 = ___new_next_run1;
			if ((!(((uint64_t)L_3) == ((uint64_t)((int64_t)(std::numeric_limits<int64_t>::max)())))))
			{
				goto IL_002b;
			}
		}

IL_0022:
		{
			Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_4 = ___timer0;
			int64_t L_5 = ___new_next_run1;
			NullCheck(L_4);
			L_4->set_next_run_6(L_5);
			IL2CPP_LEAVE(0x6C, FINALLY_0053);
		}

IL_002b:
		{
			Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_6 = ___timer0;
			NullCheck(L_6);
			bool L_7 = L_6->get_disposed_7();
			if (L_7)
			{
				goto IL_0051;
			}
		}

IL_0033:
		{
			Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_8 = ___timer0;
			int64_t L_9 = ___new_next_run1;
			NullCheck(L_8);
			L_8->set_next_run_6(L_9);
			Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_10 = ___timer0;
			Scheduler_Add_m97B241DC232711E7C7D9057DA0BF7D657808D981(__this, L_10, /*hidden argument*/NULL);
			SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 * L_11 = __this->get_list_1();
			NullCheck(L_11);
			RuntimeObject * L_12;
			L_12 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(33 /* System.Object System.Collections.SortedList::GetByIndex(System.Int32) */, L_11, 0);
			Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_13 = ___timer0;
			V_0 = (bool)((((RuntimeObject*)(RuntimeObject *)L_12) == ((RuntimeObject*)(Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB *)L_13))? 1 : 0);
		}

IL_0051:
		{
			IL2CPP_LEAVE(0x5D, FINALLY_0053);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0053;
	}

FINALLY_0053:
	{ // begin finally (depth: 1)
		{
			bool L_14 = V_2;
			if (!L_14)
			{
				goto IL_005c;
			}
		}

IL_0056:
		{
			Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * L_15 = V_1;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_15, /*hidden argument*/NULL);
		}

IL_005c:
		{
			IL2CPP_END_FINALLY(83)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(83)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x6C, IL_006c)
		IL2CPP_JUMP_TBL(0x5D, IL_005d)
	}

IL_005d:
	{
		bool L_16 = V_0;
		if (!L_16)
		{
			goto IL_006c;
		}
	}
	{
		ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * L_17 = __this->get_changed_2();
		NullCheck(L_17);
		bool L_18;
		L_18 = EventWaitHandle_Set_m81764C887F38A1153224557B26CD688B59987B38(L_17, /*hidden argument*/NULL);
	}

IL_006c:
	{
		return;
	}
}
// System.Int32 System.Threading.Timer/Scheduler::FindByDueTime(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scheduler_FindByDueTime_m97EC1ECDEE06ABC0ADD1CD8D4C3B6F057680F677 (Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * __this, int64_t ___nr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * V_2 = NULL;
	int32_t V_3 = 0;
	Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * V_4 = NULL;
	{
		V_0 = 0;
		SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 * L_0 = __this->get_list_1();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.SortedList::get_Count() */, L_0);
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1));
		int32_t L_2 = V_1;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		return (-1);
	}

IL_0016:
	{
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) >= ((int32_t)((int32_t)20))))
		{
			goto IL_008a;
		}
	}
	{
		goto IL_0049;
	}

IL_001d:
	{
		SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 * L_4 = __this->get_list_1();
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject * L_6;
		L_6 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(33 /* System.Object System.Collections.SortedList::GetByIndex(System.Int32) */, L_4, L_5);
		V_2 = ((Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB *)CastclassSealed((RuntimeObject*)L_6, Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB_il2cpp_TypeInfo_var));
		Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_7 = V_2;
		NullCheck(L_7);
		int64_t L_8 = L_7->get_next_run_6();
		int64_t L_9 = ___nr0;
		if ((!(((uint64_t)L_8) == ((uint64_t)L_9))))
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_10 = V_0;
		return L_10;
	}

IL_003a:
	{
		Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_11 = V_2;
		NullCheck(L_11);
		int64_t L_12 = L_11->get_next_run_6();
		int64_t L_13 = ___nr0;
		if ((((int64_t)L_12) <= ((int64_t)L_13)))
		{
			goto IL_0045;
		}
	}
	{
		return (-1);
	}

IL_0045:
	{
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0049:
	{
		int32_t L_15 = V_0;
		int32_t L_16 = V_1;
		if ((((int32_t)L_15) <= ((int32_t)L_16)))
		{
			goto IL_001d;
		}
	}
	{
		return (-1);
	}

IL_004f:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = V_1;
		int32_t L_19 = V_0;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_18, (int32_t)L_19))>>(int32_t)1))));
		SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 * L_20 = __this->get_list_1();
		int32_t L_21 = V_3;
		NullCheck(L_20);
		RuntimeObject * L_22;
		L_22 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(33 /* System.Object System.Collections.SortedList::GetByIndex(System.Int32) */, L_20, L_21);
		V_4 = ((Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB *)CastclassSealed((RuntimeObject*)L_22, Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB_il2cpp_TypeInfo_var));
		int64_t L_23 = ___nr0;
		Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_24 = V_4;
		NullCheck(L_24);
		int64_t L_25 = L_24->get_next_run_6();
		if ((!(((uint64_t)L_23) == ((uint64_t)L_25))))
		{
			goto IL_0076;
		}
	}
	{
		int32_t L_26 = V_3;
		return L_26;
	}

IL_0076:
	{
		int64_t L_27 = ___nr0;
		Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_28 = V_4;
		NullCheck(L_28);
		int64_t L_29 = L_28->get_next_run_6();
		if ((((int64_t)L_27) <= ((int64_t)L_29)))
		{
			goto IL_0086;
		}
	}
	{
		int32_t L_30 = V_3;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1));
		goto IL_008a;
	}

IL_0086:
	{
		int32_t L_31 = V_3;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_31, (int32_t)1));
	}

IL_008a:
	{
		int32_t L_32 = V_0;
		int32_t L_33 = V_1;
		if ((((int32_t)L_32) <= ((int32_t)L_33)))
		{
			goto IL_004f;
		}
	}
	{
		return (-1);
	}
}
// System.Void System.Threading.Timer/Scheduler::Add(System.Threading.Timer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scheduler_Add_m97B241DC232711E7C7D9057DA0BF7D657808D981 (Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * __this, Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * ___timer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t G_B4_0 = 0;
	{
		Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_0 = ___timer0;
		NullCheck(L_0);
		int64_t L_1 = L_0->get_next_run_6();
		int32_t L_2;
		L_2 = Scheduler_FindByDueTime_m97EC1ECDEE06ABC0ADD1CD8D4C3B6F057680F677(__this, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_0081;
		}
	}
	{
		Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_4 = ___timer0;
		NullCheck(L_4);
		int64_t L_5 = L_4->get_next_run_6();
		if ((((int64_t)((int64_t)il2cpp_codegen_subtract((int64_t)((int64_t)(std::numeric_limits<int64_t>::max)()), (int64_t)L_5))) > ((int64_t)((int64_t)((int64_t)((int32_t)20000))))))
		{
			goto IL_002c;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_002d;
	}

IL_002c:
	{
		G_B4_0 = 1;
	}

IL_002d:
	{
		V_1 = (bool)G_B4_0;
	}

IL_002e:
	{
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0046;
		}
	}
	{
		Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_8 = ___timer0;
		Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_9 = L_8;
		NullCheck(L_9);
		int64_t L_10 = L_9->get_next_run_6();
		NullCheck(L_9);
		L_9->set_next_run_6(((int64_t)il2cpp_codegen_add((int64_t)L_10, (int64_t)((int64_t)((int64_t)1)))));
		goto IL_0055;
	}

IL_0046:
	{
		Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_11 = ___timer0;
		Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_12 = L_11;
		NullCheck(L_12);
		int64_t L_13 = L_12->get_next_run_6();
		NullCheck(L_12);
		L_12->set_next_run_6(((int64_t)il2cpp_codegen_subtract((int64_t)L_13, (int64_t)((int64_t)((int64_t)1)))));
	}

IL_0055:
	{
		int32_t L_14 = V_0;
		SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 * L_15 = __this->get_list_1();
		NullCheck(L_15);
		int32_t L_16;
		L_16 = VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.SortedList::get_Count() */, L_15);
		if ((((int32_t)L_14) >= ((int32_t)L_16)))
		{
			goto IL_0081;
		}
	}
	{
		SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 * L_17 = __this->get_list_1();
		int32_t L_18 = V_0;
		NullCheck(L_17);
		RuntimeObject * L_19;
		L_19 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(33 /* System.Object System.Collections.SortedList::GetByIndex(System.Int32) */, L_17, L_18);
		NullCheck(((Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB *)CastclassSealed((RuntimeObject*)L_19, Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB_il2cpp_TypeInfo_var)));
		int64_t L_20 = ((Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB *)CastclassSealed((RuntimeObject*)L_19, Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB_il2cpp_TypeInfo_var))->get_next_run_6();
		Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_21 = ___timer0;
		NullCheck(L_21);
		int64_t L_22 = L_21->get_next_run_6();
		if ((((int64_t)L_20) == ((int64_t)L_22)))
		{
			goto IL_002e;
		}
	}

IL_0081:
	{
		SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 * L_23 = __this->get_list_1();
		Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_24 = ___timer0;
		Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_25 = ___timer0;
		NullCheck(L_23);
		VirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(19 /* System.Void System.Collections.SortedList::Add(System.Object,System.Object) */, L_23, L_24, L_25);
		return;
	}
}
// System.Int32 System.Threading.Timer/Scheduler::InternalRemove(System.Threading.Timer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scheduler_InternalRemove_m3154F260BA70D6D62BB855662FD4E59EBF25C538 (Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * __this, Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * ___timer0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 * L_0 = __this->get_list_1();
		Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_1 = ___timer0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(40 /* System.Int32 System.Collections.SortedList::IndexOfKey(System.Object) */, L_0, L_1);
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 * L_4 = __this->get_list_1();
		int32_t L_5 = V_0;
		NullCheck(L_4);
		VirtActionInvoker1< int32_t >::Invoke(42 /* System.Void System.Collections.SortedList::RemoveAt(System.Int32) */, L_4, L_5);
	}

IL_001d:
	{
		int32_t L_6 = V_0;
		return L_6;
	}
}
// System.Void System.Threading.Timer/Scheduler::TimerCB(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scheduler_TimerCB_mFF78E60DAA18DD3E772F2113D46FB51241C957A6 (RuntimeObject * ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___o0;
		V_0 = ((Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB *)CastclassSealed((RuntimeObject*)L_0, Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB_il2cpp_TypeInfo_var));
		Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_1 = V_0;
		NullCheck(L_1);
		TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814 * L_2 = L_1->get_callback_2();
		Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_3 = V_0;
		NullCheck(L_3);
		RuntimeObject * L_4 = L_3->get_state_3();
		NullCheck(L_2);
		TimerCallback_Invoke_m1318C110BA930390E8F61C8BAAAC8F1CA8776CFD(L_2, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.Timer/Scheduler::SchedulerThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scheduler_SchedulerThread_mDB9CB3C0FCB84658BB01FFF19F5995869778D8C7 (Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB29575CEA902024C74743A09C2AD6A27C71FA14C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mC1A3BC5C09490DE7BD41BBE1BFD81F870F508CC0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m883AB85828B7C88FE9A8C7802E93E6CE979EA000_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m9F4CBA17931C03FCCABF06CE8F29187F98D1F260_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m9C036D14366E9BBB52436252522EDE206DC6EB35_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t537143C180C9FB69517B6C26205D2AA824591563_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Scheduler_TimerCB_mFF78E60DAA18DD3E772F2113D46FB51241C957A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral494836B9EFC41FFD5CB7E6CA5BA325833F323668);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t537143C180C9FB69517B6C26205D2AA824591563 * V_0 = NULL;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * V_3 = NULL;
	bool V_4 = false;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int64_t V_8 = 0;
	Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * V_9 = NULL;
	int64_t V_10 = 0;
	int64_t V_11 = 0;
	Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * V_12 = NULL;
	int64_t V_13 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	int32_t G_B10_0 = 0;
	{
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_0;
		L_0 = Thread_get_CurrentThread_m80236D2457FBCC1F76A08711E059A0B738DA71EC(/*hidden argument*/NULL);
		NullCheck(L_0);
		Thread_set_Name_m920049DFD1306F42613F13CF7AD74C03661F4BAE(L_0, _stringLiteral494836B9EFC41FFD5CB7E6CA5BA325833F323668, /*hidden argument*/NULL);
		List_1_t537143C180C9FB69517B6C26205D2AA824591563 * L_1 = (List_1_t537143C180C9FB69517B6C26205D2AA824591563 *)il2cpp_codegen_object_new(List_1_t537143C180C9FB69517B6C26205D2AA824591563_il2cpp_TypeInfo_var);
		List_1__ctor_m883AB85828B7C88FE9A8C7802E93E6CE979EA000(L_1, ((int32_t)512), /*hidden argument*/List_1__ctor_m883AB85828B7C88FE9A8C7802E93E6CE979EA000_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_001a:
	{
		V_1 = (-1);
		IL2CPP_RUNTIME_CLASS_INIT(Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB_il2cpp_TypeInfo_var);
		int64_t L_2;
		L_2 = Timer_GetTimeMonotonic_m085737FA1918F06DE8264E85C1C2B8DFF2B65298(/*hidden argument*/NULL);
		V_2 = L_2;
		V_3 = __this;
		V_4 = (bool)0;
	}

IL_0027:
	try
	{ // begin try (depth: 1)
		{
			Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * L_3 = V_3;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_3, (bool*)(&V_4), /*hidden argument*/NULL);
			ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * L_4 = __this->get_changed_2();
			NullCheck(L_4);
			bool L_5;
			L_5 = EventWaitHandle_Reset_m535429D7CC172C0B95EB8B7B9126B3F3761E2D30(L_4, /*hidden argument*/NULL);
			SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 * L_6 = __this->get_list_1();
			NullCheck(L_6);
			int32_t L_7;
			L_7 = VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.SortedList::get_Count() */, L_6);
			V_6 = L_7;
			V_5 = 0;
			goto IL_010c;
		}

IL_0050:
		{
			SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 * L_8 = __this->get_list_1();
			int32_t L_9 = V_5;
			NullCheck(L_8);
			RuntimeObject * L_10;
			L_10 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(33 /* System.Object System.Collections.SortedList::GetByIndex(System.Int32) */, L_8, L_9);
			V_9 = ((Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB *)CastclassSealed((RuntimeObject*)L_10, Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB_il2cpp_TypeInfo_var));
			Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_11 = V_9;
			NullCheck(L_11);
			int64_t L_12 = L_11->get_next_run_6();
			int64_t L_13 = V_2;
			if ((((int64_t)L_12) > ((int64_t)L_13)))
			{
				goto IL_0115;
			}
		}

IL_0071:
		{
			SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 * L_14 = __this->get_list_1();
			int32_t L_15 = V_5;
			NullCheck(L_14);
			VirtActionInvoker1< int32_t >::Invoke(42 /* System.Void System.Collections.SortedList::RemoveAt(System.Int32) */, L_14, L_15);
			int32_t L_16 = V_6;
			V_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)1));
			int32_t L_17 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)1));
			WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319 * L_18 = (WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319 *)il2cpp_codegen_object_new(WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319_il2cpp_TypeInfo_var);
			WaitCallback__ctor_m50EFFE5096DF1DE733EA9895CEEC8EB6F142D5D5(L_18, NULL, (intptr_t)((intptr_t)Scheduler_TimerCB_mFF78E60DAA18DD3E772F2113D46FB51241C957A6_RuntimeMethod_var), /*hidden argument*/NULL);
			Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_19 = V_9;
			bool L_20;
			L_20 = ThreadPool_UnsafeQueueUserWorkItem_m9B9388DD623D33685D415D639455591D4DD967C6(L_18, L_19, /*hidden argument*/NULL);
			Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_21 = V_9;
			NullCheck(L_21);
			int64_t L_22 = L_21->get_period_ms_5();
			V_10 = L_22;
			Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_23 = V_9;
			NullCheck(L_23);
			int64_t L_24 = L_23->get_due_time_ms_4();
			V_11 = L_24;
			int64_t L_25 = V_10;
			if ((((int64_t)L_25) == ((int64_t)((int64_t)((int64_t)(-1))))))
			{
				goto IL_00ce;
			}
		}

IL_00b6:
		{
			int64_t L_26 = V_10;
			if (!L_26)
			{
				goto IL_00c0;
			}
		}

IL_00ba:
		{
			int64_t L_27 = V_10;
			if ((!(((uint64_t)L_27) == ((uint64_t)((int64_t)((int64_t)(-1)))))))
			{
				goto IL_00cb;
			}
		}

IL_00c0:
		{
			int64_t L_28 = V_11;
			G_B10_0 = ((((int32_t)((((int64_t)L_28) == ((int64_t)((int64_t)((int64_t)(-1)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			goto IL_00cf;
		}

IL_00cb:
		{
			G_B10_0 = 0;
			goto IL_00cf;
		}

IL_00ce:
		{
			G_B10_0 = 1;
		}

IL_00cf:
		{
			if (!G_B10_0)
			{
				goto IL_00e3;
			}
		}

IL_00d1:
		{
			Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_29 = V_9;
			NullCheck(L_29);
			L_29->set_next_run_6(((int64_t)(std::numeric_limits<int64_t>::max)()));
			goto IL_0106;
		}

IL_00e3:
		{
			Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_30 = V_9;
			IL2CPP_RUNTIME_CLASS_INIT(Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB_il2cpp_TypeInfo_var);
			int64_t L_31;
			L_31 = Timer_GetTimeMonotonic_m085737FA1918F06DE8264E85C1C2B8DFF2B65298(/*hidden argument*/NULL);
			Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_32 = V_9;
			NullCheck(L_32);
			int64_t L_33 = L_32->get_period_ms_5();
			NullCheck(L_30);
			L_30->set_next_run_6(((int64_t)il2cpp_codegen_add((int64_t)L_31, (int64_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)((int32_t)10000))), (int64_t)L_33)))));
			List_1_t537143C180C9FB69517B6C26205D2AA824591563 * L_34 = V_0;
			Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_35 = V_9;
			NullCheck(L_34);
			List_1_Add_mB29575CEA902024C74743A09C2AD6A27C71FA14C(L_34, L_35, /*hidden argument*/List_1_Add_mB29575CEA902024C74743A09C2AD6A27C71FA14C_RuntimeMethod_var);
		}

IL_0106:
		{
			int32_t L_36 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1));
		}

IL_010c:
		{
			int32_t L_37 = V_5;
			int32_t L_38 = V_6;
			if ((((int32_t)L_37) < ((int32_t)L_38)))
			{
				goto IL_0050;
			}
		}

IL_0115:
		{
			List_1_t537143C180C9FB69517B6C26205D2AA824591563 * L_39 = V_0;
			NullCheck(L_39);
			int32_t L_40;
			L_40 = List_1_get_Count_m9F4CBA17931C03FCCABF06CE8F29187F98D1F260_inline(L_39, /*hidden argument*/List_1_get_Count_m9F4CBA17931C03FCCABF06CE8F29187F98D1F260_RuntimeMethod_var);
			V_6 = L_40;
			V_5 = 0;
			goto IL_013a;
		}

IL_0122:
		{
			List_1_t537143C180C9FB69517B6C26205D2AA824591563 * L_41 = V_0;
			int32_t L_42 = V_5;
			NullCheck(L_41);
			Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_43;
			L_43 = List_1_get_Item_m9C036D14366E9BBB52436252522EDE206DC6EB35_inline(L_41, L_42, /*hidden argument*/List_1_get_Item_m9C036D14366E9BBB52436252522EDE206DC6EB35_RuntimeMethod_var);
			V_12 = L_43;
			Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_44 = V_12;
			Scheduler_Add_m97B241DC232711E7C7D9057DA0BF7D657808D981(__this, L_44, /*hidden argument*/NULL);
			int32_t L_45 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_45, (int32_t)1));
		}

IL_013a:
		{
			int32_t L_46 = V_5;
			int32_t L_47 = V_6;
			if ((((int32_t)L_46) < ((int32_t)L_47)))
			{
				goto IL_0122;
			}
		}

IL_0140:
		{
			List_1_t537143C180C9FB69517B6C26205D2AA824591563 * L_48 = V_0;
			NullCheck(L_48);
			List_1_Clear_mC1A3BC5C09490DE7BD41BBE1BFD81F870F508CC0(L_48, /*hidden argument*/List_1_Clear_mC1A3BC5C09490DE7BD41BBE1BFD81F870F508CC0_RuntimeMethod_var);
			List_1_t537143C180C9FB69517B6C26205D2AA824591563 * L_49 = V_0;
			Scheduler_ShrinkIfNeeded_m053057191CA310785B2C8EC2E8FB07A7E00E499C(__this, L_49, ((int32_t)512), /*hidden argument*/NULL);
			SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 * L_50 = __this->get_list_1();
			NullCheck(L_50);
			int32_t L_51;
			L_51 = VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.SortedList::get_Capacity() */, L_50);
			V_7 = L_51;
			SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 * L_52 = __this->get_list_1();
			NullCheck(L_52);
			int32_t L_53;
			L_53 = VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.SortedList::get_Count() */, L_52);
			V_6 = L_53;
			int32_t L_54 = V_7;
			if ((((int32_t)L_54) <= ((int32_t)((int32_t)1024))))
			{
				goto IL_0191;
			}
		}

IL_0175:
		{
			int32_t L_55 = V_6;
			if ((((int32_t)L_55) <= ((int32_t)0)))
			{
				goto IL_0191;
			}
		}

IL_017a:
		{
			int32_t L_56 = V_7;
			int32_t L_57 = V_6;
			if ((((int32_t)((int32_t)((int32_t)L_56/(int32_t)L_57))) <= ((int32_t)3)))
			{
				goto IL_0191;
			}
		}

IL_0182:
		{
			SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 * L_58 = __this->get_list_1();
			int32_t L_59 = V_6;
			NullCheck(L_58);
			VirtActionInvoker1< int32_t >::Invoke(21 /* System.Void System.Collections.SortedList::set_Capacity(System.Int32) */, L_58, ((int32_t)il2cpp_codegen_multiply((int32_t)L_59, (int32_t)2)));
		}

IL_0191:
		{
			V_8 = ((int64_t)(std::numeric_limits<int64_t>::max)());
			SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 * L_60 = __this->get_list_1();
			NullCheck(L_60);
			int32_t L_61;
			L_61 = VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.SortedList::get_Count() */, L_60);
			if ((((int32_t)L_61) <= ((int32_t)0)))
			{
				goto IL_01c2;
			}
		}

IL_01aa:
		{
			SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 * L_62 = __this->get_list_1();
			NullCheck(L_62);
			RuntimeObject * L_63;
			L_63 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(33 /* System.Object System.Collections.SortedList::GetByIndex(System.Int32) */, L_62, 0);
			NullCheck(((Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB *)CastclassSealed((RuntimeObject*)L_63, Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB_il2cpp_TypeInfo_var)));
			int64_t L_64 = ((Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB *)CastclassSealed((RuntimeObject*)L_63, Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB_il2cpp_TypeInfo_var))->get_next_run_6();
			V_8 = L_64;
		}

IL_01c2:
		{
			V_1 = (-1);
			int64_t L_65 = V_8;
			if ((((int64_t)L_65) == ((int64_t)((int64_t)(std::numeric_limits<int64_t>::max)()))))
			{
				goto IL_01fe;
			}
		}

IL_01d1:
		{
			int64_t L_66 = V_8;
			IL2CPP_RUNTIME_CLASS_INIT(Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB_il2cpp_TypeInfo_var);
			int64_t L_67;
			L_67 = Timer_GetTimeMonotonic_m085737FA1918F06DE8264E85C1C2B8DFF2B65298(/*hidden argument*/NULL);
			V_13 = ((int64_t)((int64_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_66, (int64_t)L_67))/(int64_t)((int64_t)((int64_t)((int32_t)10000)))));
			int64_t L_68 = V_13;
			if ((((int64_t)L_68) <= ((int64_t)((int64_t)((int64_t)((int32_t)2147483647LL))))))
			{
				goto IL_01f4;
			}
		}

IL_01ec:
		{
			V_1 = ((int32_t)2147483646);
			IL2CPP_LEAVE(0x20B, FINALLY_0200);
		}

IL_01f4:
		{
			int64_t L_69 = V_13;
			V_1 = ((int32_t)((int32_t)L_69));
			int32_t L_70 = V_1;
			if ((((int32_t)L_70) >= ((int32_t)0)))
			{
				goto IL_01fe;
			}
		}

IL_01fc:
		{
			V_1 = 0;
		}

IL_01fe:
		{
			IL2CPP_LEAVE(0x20B, FINALLY_0200);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0200;
	}

FINALLY_0200:
	{ // begin finally (depth: 1)
		{
			bool L_71 = V_4;
			if (!L_71)
			{
				goto IL_020a;
			}
		}

IL_0204:
		{
			Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * L_72 = V_3;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_72, /*hidden argument*/NULL);
		}

IL_020a:
		{
			IL2CPP_END_FINALLY(512)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(512)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x20B, IL_020b)
	}

IL_020b:
	{
		ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * L_73 = __this->get_changed_2();
		int32_t L_74 = V_1;
		NullCheck(L_73);
		bool L_75;
		L_75 = VirtFuncInvoker1< bool, int32_t >::Invoke(10 /* System.Boolean System.Threading.WaitHandle::WaitOne(System.Int32) */, L_73, L_74);
		goto IL_001a;
	}
}
// System.Void System.Threading.Timer/Scheduler::ShrinkIfNeeded(System.Collections.Generic.List`1<System.Threading.Timer>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scheduler_ShrinkIfNeeded_m053057191CA310785B2C8EC2E8FB07A7E00E499C (Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * __this, List_1_t537143C180C9FB69517B6C26205D2AA824591563 * ___list0, int32_t ___initial1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Capacity_mD0C25FAD6973D3D67381859E776ECAE953FDFD6B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m9F4CBA17931C03FCCABF06CE8F29187F98D1F260_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Capacity_mEA0D56662D94226185342D2A0FD7C1860C5FFA7F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		List_1_t537143C180C9FB69517B6C26205D2AA824591563 * L_0 = ___list0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Capacity_mD0C25FAD6973D3D67381859E776ECAE953FDFD6B(L_0, /*hidden argument*/List_1_get_Capacity_mD0C25FAD6973D3D67381859E776ECAE953FDFD6B_RuntimeMethod_var);
		V_0 = L_1;
		List_1_t537143C180C9FB69517B6C26205D2AA824591563 * L_2 = ___list0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m9F4CBA17931C03FCCABF06CE8F29187F98D1F260_inline(L_2, /*hidden argument*/List_1_get_Count_m9F4CBA17931C03FCCABF06CE8F29187F98D1F260_RuntimeMethod_var);
		V_1 = L_3;
		int32_t L_4 = V_0;
		int32_t L_5 = ___initial1;
		if ((((int32_t)L_4) <= ((int32_t)L_5)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_7 = V_0;
		int32_t L_8 = V_1;
		if ((((int32_t)((int32_t)((int32_t)L_7/(int32_t)L_8))) <= ((int32_t)3)))
		{
			goto IL_0025;
		}
	}
	{
		List_1_t537143C180C9FB69517B6C26205D2AA824591563 * L_9 = ___list0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		List_1_set_Capacity_mEA0D56662D94226185342D2A0FD7C1860C5FFA7F(L_9, ((int32_t)il2cpp_codegen_multiply((int32_t)L_10, (int32_t)2)), /*hidden argument*/List_1_set_Capacity_mEA0D56662D94226185342D2A0FD7C1860C5FFA7F_RuntimeMethod_var);
	}

IL_0025:
	{
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
// System.Int32 System.Threading.Timer/TimerComparer::Compare(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TimerComparer_Compare_mC54D4F4F5F33A28C3981BD1D59A071659F9E90DE (TimerComparer_t1899647CFE875978843BE8ABA01C10956F1E740B * __this, RuntimeObject * ___x0, RuntimeObject * ___y1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * V_0 = NULL;
	Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * V_1 = NULL;
	int64_t V_2 = 0;
	{
		RuntimeObject * L_0 = ___x0;
		V_0 = ((Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB *)IsInstSealed((RuntimeObject*)L_0, Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB_il2cpp_TypeInfo_var));
		Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_1 = V_0;
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		return (-1);
	}

IL_000c:
	{
		RuntimeObject * L_2 = ___y1;
		V_1 = ((Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB *)IsInstSealed((RuntimeObject*)L_2, Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB_il2cpp_TypeInfo_var));
		Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_3 = V_1;
		if (L_3)
		{
			goto IL_0018;
		}
	}
	{
		return 1;
	}

IL_0018:
	{
		Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_4 = V_0;
		NullCheck(L_4);
		int64_t L_5 = L_4->get_next_run_6();
		Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_6 = V_1;
		NullCheck(L_6);
		int64_t L_7 = L_6->get_next_run_6();
		V_2 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_5, (int64_t)L_7));
		int64_t L_8 = V_2;
		if (L_8)
		{
			goto IL_0031;
		}
	}
	{
		RuntimeObject * L_9 = ___x0;
		RuntimeObject * L_10 = ___y1;
		if ((((RuntimeObject*)(RuntimeObject *)L_9) == ((RuntimeObject*)(RuntimeObject *)L_10)))
		{
			goto IL_002f;
		}
	}
	{
		return (-1);
	}

IL_002f:
	{
		return 0;
	}

IL_0031:
	{
		int64_t L_11 = V_2;
		if ((((int64_t)L_11) > ((int64_t)((int64_t)((int64_t)0)))))
		{
			goto IL_0038;
		}
	}
	{
		return (-1);
	}

IL_0038:
	{
		return 1;
	}
}
// System.Void System.Threading.Timer/TimerComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerComparer__ctor_mB4F0DB5CDEB7A6E93F59950E0FB1D19BB4BBA0B4 (TimerComparer_t1899647CFE875978843BE8ABA01C10956F1E740B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void System.TypeIdentifiers/Display::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Display__ctor_m16B5174A55477C5FA7E4BBEEB321BAC49C59EA78 (Display_tB07FE33B5E37AC259B2FCC8EC820AC5CEDEAC41E * __this, String_t* ___displayName0, const RuntimeMethod* method)
{
	{
		ATypeName__ctor_m8F74703C78999B18C60B25DC9E5FAAFA777C48EC(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___displayName0;
		__this->set_displayName_0(L_0);
		__this->set_internal_name_1((String_t*)NULL);
		return;
	}
}
// System.String System.TypeIdentifiers/Display::get_DisplayName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Display_get_DisplayName_m85B2DCE4C4F6F44EAF0BA7BDD82C0D94EA8F5847 (Display_tB07FE33B5E37AC259B2FCC8EC820AC5CEDEAC41E * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_displayName_0();
		return L_0;
	}
}
// System.String System.TypeIdentifiers/Display::get_InternalName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Display_get_InternalName_m6EAFBB13F110C5A11AC89AB9D74C79B27552EF39 (Display_tB07FE33B5E37AC259B2FCC8EC820AC5CEDEAC41E * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_internal_name_1();
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		String_t* L_1;
		L_1 = Display_GetInternalName_mD79548CF3F783D092209AED9C54C91E81DB87970(__this, /*hidden argument*/NULL);
		__this->set_internal_name_1(L_1);
	}

IL_0014:
	{
		String_t* L_2 = __this->get_internal_name_1();
		return L_2;
	}
}
// System.String System.TypeIdentifiers/Display::GetInternalName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Display_GetInternalName_mD79548CF3F783D092209AED9C54C91E81DB87970 (Display_tB07FE33B5E37AC259B2FCC8EC820AC5CEDEAC41E * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_displayName_0();
		String_t* L_1;
		L_1 = TypeSpec_UnescapeInternalName_mA948D42382EE159391CEFB85748A7EFF37CE53A9(L_0, /*hidden argument*/NULL);
		return L_1;
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
// System.Boolean System.TypeNames/ATypeName::Equals(System.TypeName)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ATypeName_Equals_m6BDE7D1613B8F351AC3DCB2C9BDE29C23A92CC22 (ATypeName_t19F245ED1619C78770F92C899C4FE364DBF30861 * __this, RuntimeObject* ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeName_t714DD2B9BA4134CE17349D95281A1F750D78D60F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___other0;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.TypeNames/ATypeName::get_DisplayName() */, __this);
		RuntimeObject* L_2 = ___other0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String System.TypeName::get_DisplayName() */, TypeName_t714DD2B9BA4134CE17349D95281A1F750D78D60F_il2cpp_TypeInfo_var, L_2);
		bool L_4;
		L_4 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// System.Int32 System.TypeNames/ATypeName::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ATypeName_GetHashCode_mDC22C27DBC59F89F1A4CDA70985AB201BC879B07 (ATypeName_t19F245ED1619C78770F92C899C4FE364DBF30861 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0;
		L_0 = VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.TypeNames/ATypeName::get_DisplayName() */, __this);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		return L_1;
	}
}
// System.Boolean System.TypeNames/ATypeName::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ATypeName_Equals_m128A844F0CC6E6754CE865684C25F47EEAD342C1 (ATypeName_t19F245ED1619C78770F92C899C4FE364DBF30861 * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeName_t714DD2B9BA4134CE17349D95281A1F750D78D60F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___other0;
		bool L_1;
		L_1 = ATypeName_Equals_m6BDE7D1613B8F351AC3DCB2C9BDE29C23A92CC22(__this, ((RuntimeObject*)IsInst((RuntimeObject*)L_0, TypeName_t714DD2B9BA4134CE17349D95281A1F750D78D60F_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void System.TypeNames/ATypeName::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATypeName__ctor_m8F74703C78999B18C60B25DC9E5FAAFA777C48EC (ATypeName_t19F245ED1619C78770F92C899C4FE364DBF30861 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Text.UTF32Encoding/UTF32Decoder::.ctor(System.Text.UTF32Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UTF32Decoder__ctor_mC43D242A0AB38688E7F1E68472B18B5CC2F15FF6 (UTF32Decoder_t38867B08AD03138702C713129B79529EC4528DB7 * __this, UTF32Encoding_t54B51C8FAC5B2EAB4BDFACBBA06DB6117A38D014 * ___encoding0, const RuntimeMethod* method)
{
	{
		UTF32Encoding_t54B51C8FAC5B2EAB4BDFACBBA06DB6117A38D014 * L_0 = ___encoding0;
		DecoderNLS__ctor_mC526CB146E620885CBC054C3921E27A7949B2046(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.UTF32Encoding/UTF32Decoder::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UTF32Decoder_Reset_mA255C09536BA93FCAD3F8ED62EADE0B2079E1C27 (UTF32Decoder_t38867B08AD03138702C713129B79529EC4528DB7 * __this, const RuntimeMethod* method)
{
	{
		__this->set_iChar_6(0);
		__this->set_readByteCount_7(0);
		DecoderFallbackBuffer_t236B3D4172A9BAD1C2150ED78958227F8F20C94B * L_0 = ((Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 *)__this)->get_m_fallbackBuffer_1();
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		DecoderFallbackBuffer_t236B3D4172A9BAD1C2150ED78958227F8F20C94B * L_1 = ((Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 *)__this)->get_m_fallbackBuffer_1();
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(6 /* System.Void System.Text.DecoderFallbackBuffer::Reset() */, L_1);
	}

IL_0021:
	{
		return;
	}
}
// System.Boolean System.Text.UTF32Encoding/UTF32Decoder::get_HasState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UTF32Decoder_get_HasState_m59BC0A86B483ACC74E659469FFD39997B2646812 (UTF32Decoder_t38867B08AD03138702C713129B79529EC4528DB7 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_readByteCount_7();
		return (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
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
// System.Void System.Text.UTF7Encoding/Decoder::.ctor(System.Text.UTF7Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Decoder__ctor_m3FAA7C0DCE7FBA64EEBD84A4AEBFC9317A92E9B9 (Decoder_t6C0639E0DF1E52128429AC770CA9F2557A8E54C9 * __this, UTF7Encoding_tA5454D96973119953BD301F20B9E59C77B5FA076 * ___encoding0, const RuntimeMethod* method)
{
	{
		UTF7Encoding_tA5454D96973119953BD301F20B9E59C77B5FA076 * L_0 = ___encoding0;
		DecoderNLS__ctor_mC526CB146E620885CBC054C3921E27A7949B2046(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.UTF7Encoding/Decoder::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Decoder__ctor_m30B1EA2BF40A4E5A3F4BF3C7B6FE7377380A1038 (Decoder_t6C0639E0DF1E52128429AC770CA9F2557A8E54C9 * __this, SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ___info0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0763FE5EB1EAC35DDF3CD44B5645A71888066226);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29988D0F9BCADFABFF66CBF5AB73096D1CAE3128);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral315818C03CCC2B10070DF2D4EBD09EB6C4C66E58);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDC4CEC2209B63293A24317DF536AF666EAC59E5);
		s_Il2CppMethodInitialized = true;
	}
	{
		DecoderNLS__ctor_mDD4D4880457E73F1575479F8B309F9BB25BA0F4D(__this, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_0 = ___info0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Decoder__ctor_m30B1EA2BF40A4E5A3F4BF3C7B6FE7377380A1038_RuntimeMethod_var)));
	}

IL_0014:
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_2 = ___info0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_3 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4;
		L_4 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		RuntimeObject * L_5;
		L_5 = SerializationInfo_GetValue_mF6E311779D55AD7C80B2D19FF2A7E9683AEF2A99(L_2, _stringLiteral315818C03CCC2B10070DF2D4EBD09EB6C4C66E58, L_4, /*hidden argument*/NULL);
		__this->set_bits_6(((*(int32_t*)((int32_t*)UnBox(L_5, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))));
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_6 = ___info0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_7 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		Type_t * L_8;
		L_8 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		RuntimeObject * L_9;
		L_9 = SerializationInfo_GetValue_mF6E311779D55AD7C80B2D19FF2A7E9683AEF2A99(L_6, _stringLiteral0763FE5EB1EAC35DDF3CD44B5645A71888066226, L_8, /*hidden argument*/NULL);
		__this->set_bitCount_7(((*(int32_t*)((int32_t*)UnBox(L_9, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))));
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_10 = ___info0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_11 = { reinterpret_cast<intptr_t> (Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var) };
		Type_t * L_12;
		L_12 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		RuntimeObject * L_13;
		L_13 = SerializationInfo_GetValue_mF6E311779D55AD7C80B2D19FF2A7E9683AEF2A99(L_10, _stringLiteralBDC4CEC2209B63293A24317DF536AF666EAC59E5, L_12, /*hidden argument*/NULL);
		__this->set_firstByte_8(((*(bool*)((bool*)UnBox(L_13, Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var)))));
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_14 = ___info0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_15 = { reinterpret_cast<intptr_t> (Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_0_0_0_var) };
		Type_t * L_16;
		L_16 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_15, /*hidden argument*/NULL);
		NullCheck(L_14);
		RuntimeObject * L_17;
		L_17 = SerializationInfo_GetValue_mF6E311779D55AD7C80B2D19FF2A7E9683AEF2A99(L_14, _stringLiteral29988D0F9BCADFABFF66CBF5AB73096D1CAE3128, L_16, /*hidden argument*/NULL);
		((DecoderNLS_tE5B1B7D68B698C0B65FBEE94EAE2453FFD3D538A *)__this)->set_m_encoding_2(((Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 *)CastclassClass((RuntimeObject*)L_17, Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void System.Text.UTF7Encoding/Decoder::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Decoder_System_Runtime_Serialization_ISerializable_GetObjectData_m3ED01524C080A21879E3BB557F043586DA3C2AE0 (Decoder_t6C0639E0DF1E52128429AC770CA9F2557A8E54C9 * __this, SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ___info0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0763FE5EB1EAC35DDF3CD44B5645A71888066226);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29988D0F9BCADFABFF66CBF5AB73096D1CAE3128);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral315818C03CCC2B10070DF2D4EBD09EB6C4C66E58);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDC4CEC2209B63293A24317DF536AF666EAC59E5);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_0 = ___info0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Decoder_System_Runtime_Serialization_ISerializable_GetObjectData_m3ED01524C080A21879E3BB557F043586DA3C2AE0_RuntimeMethod_var)));
	}

IL_000e:
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_2 = ___info0;
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_3 = ((DecoderNLS_tE5B1B7D68B698C0B65FBEE94EAE2453FFD3D538A *)__this)->get_m_encoding_2();
		NullCheck(L_2);
		SerializationInfo_AddValue_mA50C2668EF700C2239DDC362F8DB409020BB763D(L_2, _stringLiteral29988D0F9BCADFABFF66CBF5AB73096D1CAE3128, L_3, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_4 = ___info0;
		int32_t L_5 = __this->get_bits_6();
		NullCheck(L_4);
		SerializationInfo_AddValue_m3DF5B182A63FFCD12287E97EA38944D0C6405BB5(L_4, _stringLiteral315818C03CCC2B10070DF2D4EBD09EB6C4C66E58, L_5, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_6 = ___info0;
		int32_t L_7 = __this->get_bitCount_7();
		NullCheck(L_6);
		SerializationInfo_AddValue_m3DF5B182A63FFCD12287E97EA38944D0C6405BB5(L_6, _stringLiteral0763FE5EB1EAC35DDF3CD44B5645A71888066226, L_7, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_8 = ___info0;
		bool L_9 = __this->get_firstByte_8();
		NullCheck(L_8);
		SerializationInfo_AddValue_m324F3E0B02B746D5F460499F5A25988FD608AD7B(L_8, _stringLiteralBDC4CEC2209B63293A24317DF536AF666EAC59E5, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.UTF7Encoding/Decoder::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Decoder_Reset_m0D006B1AE70E73B46BF2DF2550498CCF9D433769 (Decoder_t6C0639E0DF1E52128429AC770CA9F2557A8E54C9 * __this, const RuntimeMethod* method)
{
	{
		__this->set_bits_6(0);
		__this->set_bitCount_7((-1));
		__this->set_firstByte_8((bool)0);
		DecoderFallbackBuffer_t236B3D4172A9BAD1C2150ED78958227F8F20C94B * L_0 = ((Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 *)__this)->get_m_fallbackBuffer_1();
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		DecoderFallbackBuffer_t236B3D4172A9BAD1C2150ED78958227F8F20C94B * L_1 = ((Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 *)__this)->get_m_fallbackBuffer_1();
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(6 /* System.Void System.Text.DecoderFallbackBuffer::Reset() */, L_1);
	}

IL_0028:
	{
		return;
	}
}
// System.Boolean System.Text.UTF7Encoding/Decoder::get_HasState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Decoder_get_HasState_mF435291CFF368657A42E3D00148A144590652907 (Decoder_t6C0639E0DF1E52128429AC770CA9F2557A8E54C9 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_bitCount_7();
		return (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
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
// System.Void System.Text.UTF7Encoding/DecoderUTF7Fallback::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DecoderUTF7Fallback__ctor_m97CB6C70F4F4B390E79DA9A6A54F7C15611519F1 (DecoderUTF7Fallback_tBEF9A09732FAB23368825AE7C14C0EBF1F9028A8 * __this, const RuntimeMethod* method)
{
	{
		DecoderFallback__ctor_m748C2C19AD4595C13154F9EEDF89AC2A2C10727E(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Text.DecoderFallbackBuffer System.Text.UTF7Encoding/DecoderUTF7Fallback::CreateFallbackBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DecoderFallbackBuffer_t236B3D4172A9BAD1C2150ED78958227F8F20C94B * DecoderUTF7Fallback_CreateFallbackBuffer_m2A16D01FA0596522EC75B9424B19FC879714AD1F (DecoderUTF7Fallback_tBEF9A09732FAB23368825AE7C14C0EBF1F9028A8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DecoderUTF7FallbackBuffer_tED3431DB4A6B4F48D1F1433A8E672F8B110D819A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DecoderUTF7FallbackBuffer_tED3431DB4A6B4F48D1F1433A8E672F8B110D819A * L_0 = (DecoderUTF7FallbackBuffer_tED3431DB4A6B4F48D1F1433A8E672F8B110D819A *)il2cpp_codegen_object_new(DecoderUTF7FallbackBuffer_tED3431DB4A6B4F48D1F1433A8E672F8B110D819A_il2cpp_TypeInfo_var);
		DecoderUTF7FallbackBuffer__ctor_mFA2B62E208804BB64A4893F1F91D8481B5C5BCB0(L_0, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Int32 System.Text.UTF7Encoding/DecoderUTF7Fallback::get_MaxCharCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DecoderUTF7Fallback_get_MaxCharCount_mEB86DA7E072AE10245BA31204184B137DFB8F8D3 (DecoderUTF7Fallback_tBEF9A09732FAB23368825AE7C14C0EBF1F9028A8 * __this, const RuntimeMethod* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Text.UTF7Encoding/DecoderUTF7Fallback::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DecoderUTF7Fallback_Equals_m8A55122D6E31F8C487AD5AFAA5BE6352C0151656 (DecoderUTF7Fallback_tBEF9A09732FAB23368825AE7C14C0EBF1F9028A8 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DecoderUTF7Fallback_tBEF9A09732FAB23368825AE7C14C0EBF1F9028A8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___value0;
		if (!((DecoderUTF7Fallback_tBEF9A09732FAB23368825AE7C14C0EBF1F9028A8 *)IsInstSealed((RuntimeObject*)L_0, DecoderUTF7Fallback_tBEF9A09732FAB23368825AE7C14C0EBF1F9028A8_il2cpp_TypeInfo_var)))
		{
			goto IL_000a;
		}
	}
	{
		return (bool)1;
	}

IL_000a:
	{
		return (bool)0;
	}
}
// System.Int32 System.Text.UTF7Encoding/DecoderUTF7Fallback::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DecoderUTF7Fallback_GetHashCode_m87A146966E49C3DDB5C62ADABE62B84858D48160 (DecoderUTF7Fallback_tBEF9A09732FAB23368825AE7C14C0EBF1F9028A8 * __this, const RuntimeMethod* method)
{
	{
		return ((int32_t)984);
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
// System.Void System.Text.UTF7Encoding/DecoderUTF7FallbackBuffer::.ctor(System.Text.UTF7Encoding/DecoderUTF7Fallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DecoderUTF7FallbackBuffer__ctor_mFA2B62E208804BB64A4893F1F91D8481B5C5BCB0 (DecoderUTF7FallbackBuffer_tED3431DB4A6B4F48D1F1433A8E672F8B110D819A * __this, DecoderUTF7Fallback_tBEF9A09732FAB23368825AE7C14C0EBF1F9028A8 * ___fallback0, const RuntimeMethod* method)
{
	{
		__this->set_iCount_3((-1));
		DecoderFallbackBuffer__ctor_m4944ABFBCC6CDED8F244EC1E5EA6B1F229C3495C(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.Text.UTF7Encoding/DecoderUTF7FallbackBuffer::Fallback(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DecoderUTF7FallbackBuffer_Fallback_mBF6952B9A4A595ECF7CB92B8BC1177C726784227 (DecoderUTF7FallbackBuffer_tED3431DB4A6B4F48D1F1433A8E672F8B110D819A * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytesUnknown0, int32_t ___index1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bytesUnknown0;
		NullCheck(L_0);
		int32_t L_1 = 0;
		uint8_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		__this->set_cFallback_2(L_2);
		Il2CppChar L_3 = __this->get_cFallback_2();
		if (L_3)
		{
			goto IL_0013;
		}
	}
	{
		return (bool)0;
	}

IL_0013:
	{
		int32_t L_4 = 1;
		V_0 = L_4;
		__this->set_iSize_4(L_4);
		int32_t L_5 = V_0;
		__this->set_iCount_3(L_5);
		return (bool)1;
	}
}
// System.Char System.Text.UTF7Encoding/DecoderUTF7FallbackBuffer::GetNextChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar DecoderUTF7FallbackBuffer_GetNextChar_mC2FD7150C2027744040DE6BC014598C48141419B (DecoderUTF7FallbackBuffer_tED3431DB4A6B4F48D1F1433A8E672F8B110D819A * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_iCount_3();
		V_0 = L_0;
		int32_t L_1 = V_0;
		__this->set_iCount_3(((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1)));
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_001b;
		}
	}
	{
		Il2CppChar L_3 = __this->get_cFallback_2();
		return L_3;
	}

IL_001b:
	{
		return 0;
	}
}
// System.Void System.Text.UTF7Encoding/DecoderUTF7FallbackBuffer::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DecoderUTF7FallbackBuffer_Reset_mE18A0A62630252473DE57B453B3C7344CE1077BA (DecoderUTF7FallbackBuffer_tED3431DB4A6B4F48D1F1433A8E672F8B110D819A * __this, const RuntimeMethod* method)
{
	{
		__this->set_iCount_3((-1));
		((DecoderFallbackBuffer_t236B3D4172A9BAD1C2150ED78958227F8F20C94B *)__this)->set_byteStart_0((uint8_t*)((uintptr_t)0));
		return;
	}
}
// System.Int32 System.Text.UTF7Encoding/DecoderUTF7FallbackBuffer::InternalFallback(System.Byte[],System.Byte*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DecoderUTF7FallbackBuffer_InternalFallback_mED8FF7722E62493ABE76E8CE1887618F6A720300 (DecoderUTF7FallbackBuffer_tED3431DB4A6B4F48D1F1433A8E672F8B110D819A * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, uint8_t* ___pBytes1, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bytes0;
		NullCheck(L_0);
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)))) == ((int32_t)1)))
		{
			goto IL_0016;
		}
	}
	{
		String_t* L_1;
		L_1 = Environment_GetResourceString_m8DFF827596B5FD533D3FE56900FA095F7D674617(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD3EDB56B30B60F6E6107AB89FE5358A528045F13)), /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_2 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_2, L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DecoderUTF7FallbackBuffer_InternalFallback_mED8FF7722E62493ABE76E8CE1887618F6A720300_RuntimeMethod_var)));
	}

IL_0016:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = ___bytes0;
		NullCheck(L_3);
		int32_t L_4 = 0;
		uint8_t L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		if (!L_5)
		{
			goto IL_001d;
		}
	}
	{
		return 1;
	}

IL_001d:
	{
		return 0;
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
// System.Void System.Text.UTF7Encoding/Encoder::.ctor(System.Text.UTF7Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encoder__ctor_m2E7349F37D2DEF844A91395DD099D93A6C88F167 (Encoder_tF895184EA91019AA3995A8547FD56A3E0D16D1B4 * __this, UTF7Encoding_tA5454D96973119953BD301F20B9E59C77B5FA076 * ___encoding0, const RuntimeMethod* method)
{
	{
		UTF7Encoding_tA5454D96973119953BD301F20B9E59C77B5FA076 * L_0 = ___encoding0;
		EncoderNLS__ctor_mF9B45DA23BADBDD417E3F741C6C9BB45F3021513(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.UTF7Encoding/Encoder::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encoder__ctor_mD7BEBE37C16C8C8BFFFFDB86681B51F2142A8F7E (Encoder_tF895184EA91019AA3995A8547FD56A3E0D16D1B4 * __this, SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ___info0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0763FE5EB1EAC35DDF3CD44B5645A71888066226);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29988D0F9BCADFABFF66CBF5AB73096D1CAE3128);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral315818C03CCC2B10070DF2D4EBD09EB6C4C66E58);
		s_Il2CppMethodInitialized = true;
	}
	{
		EncoderNLS__ctor_m78E59E5DDEAE418A3936D0EAD2D2DB3D15E75CEF(__this, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_0 = ___info0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Encoder__ctor_mD7BEBE37C16C8C8BFFFFDB86681B51F2142A8F7E_RuntimeMethod_var)));
	}

IL_0014:
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_2 = ___info0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_3 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4;
		L_4 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		RuntimeObject * L_5;
		L_5 = SerializationInfo_GetValue_mF6E311779D55AD7C80B2D19FF2A7E9683AEF2A99(L_2, _stringLiteral315818C03CCC2B10070DF2D4EBD09EB6C4C66E58, L_4, /*hidden argument*/NULL);
		__this->set_bits_7(((*(int32_t*)((int32_t*)UnBox(L_5, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))));
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_6 = ___info0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_7 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		Type_t * L_8;
		L_8 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		RuntimeObject * L_9;
		L_9 = SerializationInfo_GetValue_mF6E311779D55AD7C80B2D19FF2A7E9683AEF2A99(L_6, _stringLiteral0763FE5EB1EAC35DDF3CD44B5645A71888066226, L_8, /*hidden argument*/NULL);
		__this->set_bitCount_8(((*(int32_t*)((int32_t*)UnBox(L_9, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))));
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_10 = ___info0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_11 = { reinterpret_cast<intptr_t> (Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_0_0_0_var) };
		Type_t * L_12;
		L_12 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		RuntimeObject * L_13;
		L_13 = SerializationInfo_GetValue_mF6E311779D55AD7C80B2D19FF2A7E9683AEF2A99(L_10, _stringLiteral29988D0F9BCADFABFF66CBF5AB73096D1CAE3128, L_12, /*hidden argument*/NULL);
		((EncoderNLS_tB071198C3F300408FDED1BD2C822F46A25115712 *)__this)->set_m_encoding_3(((Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 *)CastclassClass((RuntimeObject*)L_13, Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void System.Text.UTF7Encoding/Encoder::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encoder_System_Runtime_Serialization_ISerializable_GetObjectData_m6092B473125DCAB361E2692A0A37F4F175154463 (Encoder_tF895184EA91019AA3995A8547FD56A3E0D16D1B4 * __this, SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ___info0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0763FE5EB1EAC35DDF3CD44B5645A71888066226);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29988D0F9BCADFABFF66CBF5AB73096D1CAE3128);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral315818C03CCC2B10070DF2D4EBD09EB6C4C66E58);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_0 = ___info0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Encoder_System_Runtime_Serialization_ISerializable_GetObjectData_m6092B473125DCAB361E2692A0A37F4F175154463_RuntimeMethod_var)));
	}

IL_000e:
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_2 = ___info0;
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_3 = ((EncoderNLS_tB071198C3F300408FDED1BD2C822F46A25115712 *)__this)->get_m_encoding_3();
		NullCheck(L_2);
		SerializationInfo_AddValue_mA50C2668EF700C2239DDC362F8DB409020BB763D(L_2, _stringLiteral29988D0F9BCADFABFF66CBF5AB73096D1CAE3128, L_3, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_4 = ___info0;
		int32_t L_5 = __this->get_bits_7();
		NullCheck(L_4);
		SerializationInfo_AddValue_m3DF5B182A63FFCD12287E97EA38944D0C6405BB5(L_4, _stringLiteral315818C03CCC2B10070DF2D4EBD09EB6C4C66E58, L_5, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_6 = ___info0;
		int32_t L_7 = __this->get_bitCount_8();
		NullCheck(L_6);
		SerializationInfo_AddValue_m3DF5B182A63FFCD12287E97EA38944D0C6405BB5(L_6, _stringLiteral0763FE5EB1EAC35DDF3CD44B5645A71888066226, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.UTF7Encoding/Encoder::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encoder_Reset_m8D51317D2A8E22CDF2183DBEFE2538AC3360A9A9 (Encoder_tF895184EA91019AA3995A8547FD56A3E0D16D1B4 * __this, const RuntimeMethod* method)
{
	{
		__this->set_bitCount_8((-1));
		__this->set_bits_7(0);
		EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0 * L_0 = ((Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A *)__this)->get_m_fallbackBuffer_1();
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0 * L_1 = ((Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A *)__this)->get_m_fallbackBuffer_1();
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(9 /* System.Void System.Text.EncoderFallbackBuffer::Reset() */, L_1);
	}

IL_0021:
	{
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
// System.Void System.Text.UTF8Encoding/UTF8Decoder::.ctor(System.Text.UTF8Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UTF8Decoder__ctor_m9C1CB47A544EB17F0C9F1837836DB6DB50049B4C (UTF8Decoder_tD2359F0F52206B911EBC3222E627191C829F4C65 * __this, UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * ___encoding0, const RuntimeMethod* method)
{
	{
		UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * L_0 = ___encoding0;
		DecoderNLS__ctor_mC526CB146E620885CBC054C3921E27A7949B2046(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.UTF8Encoding/UTF8Decoder::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UTF8Decoder__ctor_mF827B4315912C53F248B79A77CFDE99759111353 (UTF8Decoder_tD2359F0F52206B911EBC3222E627191C829F4C65 * __this, SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ___info0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29988D0F9BCADFABFF66CBF5AB73096D1CAE3128);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF00BC34B67009EEE0394C51F26D6D5457EC69F6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD08F78ED8610B5137CB74E4B8EE06DCA431A6DF5);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		DecoderNLS__ctor_mDD4D4880457E73F1575479F8B309F9BB25BA0F4D(__this, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_0 = ___info0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UTF8Decoder__ctor_mF827B4315912C53F248B79A77CFDE99759111353_RuntimeMethod_var)));
	}

IL_0014:
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_2 = ___info0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_3 = { reinterpret_cast<intptr_t> (Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4;
		L_4 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		RuntimeObject * L_5;
		L_5 = SerializationInfo_GetValue_mF6E311779D55AD7C80B2D19FF2A7E9683AEF2A99(L_2, _stringLiteral29988D0F9BCADFABFF66CBF5AB73096D1CAE3128, L_4, /*hidden argument*/NULL);
		((DecoderNLS_tE5B1B7D68B698C0B65FBEE94EAE2453FFD3D538A *)__this)->set_m_encoding_2(((Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 *)CastclassClass((RuntimeObject*)L_5, Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_il2cpp_TypeInfo_var)));
	}

IL_0034:
	try
	{ // begin try (depth: 1)
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_6 = ___info0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_7 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8;
		L_8 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		RuntimeObject * L_9;
		L_9 = SerializationInfo_GetValue_mF6E311779D55AD7C80B2D19FF2A7E9683AEF2A99(L_6, _stringLiteralD08F78ED8610B5137CB74E4B8EE06DCA431A6DF5, L_8, /*hidden argument*/NULL);
		__this->set_bits_6(((*(int32_t*)((int32_t*)UnBox(L_9, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))));
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_10 = ___info0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_11 = { reinterpret_cast<intptr_t> (DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D_0_0_0_var) };
		Type_t * L_12;
		L_12 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		RuntimeObject * L_13;
		L_13 = SerializationInfo_GetValue_mF6E311779D55AD7C80B2D19FF2A7E9683AEF2A99(L_10, _stringLiteralAF00BC34B67009EEE0394C51F26D6D5457EC69F6, L_12, /*hidden argument*/NULL);
		((Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 *)__this)->set_m_fallback_0(((DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D *)CastclassClass((RuntimeObject*)L_13, DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D_il2cpp_TypeInfo_var)));
		goto IL_0087;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SerializationException_tDB38C13A2ABF407C381E3F332D197AC1AD097A92_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0076;
		}
		throw e;
	}

CATCH_0076:
	{ // begin catch(System.Runtime.Serialization.SerializationException)
		__this->set_bits_6(0);
		((Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 *)__this)->set_m_fallback_0((DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D *)NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0087;
	} // end catch (depth: 1)

IL_0087:
	{
		return;
	}
}
// System.Void System.Text.UTF8Encoding/UTF8Decoder::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UTF8Decoder_System_Runtime_Serialization_ISerializable_GetObjectData_m660874DE4EB3E16DF79AF02610D1DCA0D9A2E4BB (UTF8Decoder_tD2359F0F52206B911EBC3222E627191C829F4C65 * __this, SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ___info0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29988D0F9BCADFABFF66CBF5AB73096D1CAE3128);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral315818C03CCC2B10070DF2D4EBD09EB6C4C66E58);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral49D64DCFE768AFB45BCA7F089DBB249FA1DA859C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8994D295B1EC3F358FB1CDEB6465D3A478A7F949);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9C4034C5C6F417782BE8DF6DD6771CA6B67948DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF00BC34B67009EEE0394C51F26D6D5457EC69F6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD08F78ED8610B5137CB74E4B8EE06DCA431A6DF5);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_0 = ___info0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UTF8Decoder_System_Runtime_Serialization_ISerializable_GetObjectData_m660874DE4EB3E16DF79AF02610D1DCA0D9A2E4BB_RuntimeMethod_var)));
	}

IL_000e:
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_2 = ___info0;
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_3 = ((DecoderNLS_tE5B1B7D68B698C0B65FBEE94EAE2453FFD3D538A *)__this)->get_m_encoding_2();
		NullCheck(L_2);
		SerializationInfo_AddValue_mA50C2668EF700C2239DDC362F8DB409020BB763D(L_2, _stringLiteral29988D0F9BCADFABFF66CBF5AB73096D1CAE3128, L_3, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_4 = ___info0;
		int32_t L_5 = __this->get_bits_6();
		NullCheck(L_4);
		SerializationInfo_AddValue_m3DF5B182A63FFCD12287E97EA38944D0C6405BB5(L_4, _stringLiteralD08F78ED8610B5137CB74E4B8EE06DCA431A6DF5, L_5, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_6 = ___info0;
		DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * L_7 = ((Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 *)__this)->get_m_fallback_0();
		NullCheck(L_6);
		SerializationInfo_AddValue_mA50C2668EF700C2239DDC362F8DB409020BB763D(L_6, _stringLiteralAF00BC34B67009EEE0394C51F26D6D5457EC69F6, L_7, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_8 = ___info0;
		NullCheck(L_8);
		SerializationInfo_AddValue_m3DF5B182A63FFCD12287E97EA38944D0C6405BB5(L_8, _stringLiteral315818C03CCC2B10070DF2D4EBD09EB6C4C66E58, 0, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_9 = ___info0;
		NullCheck(L_9);
		SerializationInfo_AddValue_m3DF5B182A63FFCD12287E97EA38944D0C6405BB5(L_9, _stringLiteral8994D295B1EC3F358FB1CDEB6465D3A478A7F949, 0, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_10 = ___info0;
		NullCheck(L_10);
		SerializationInfo_AddValue_m324F3E0B02B746D5F460499F5A25988FD608AD7B(L_10, _stringLiteral9C4034C5C6F417782BE8DF6DD6771CA6B67948DF, (bool)0, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_11 = ___info0;
		NullCheck(L_11);
		SerializationInfo_AddValue_m3DF5B182A63FFCD12287E97EA38944D0C6405BB5(L_11, _stringLiteral49D64DCFE768AFB45BCA7F089DBB249FA1DA859C, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.UTF8Encoding/UTF8Decoder::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UTF8Decoder_Reset_m81E08FB668E8FAA2B75ECB823F9131933E48522A (UTF8Decoder_tD2359F0F52206B911EBC3222E627191C829F4C65 * __this, const RuntimeMethod* method)
{
	{
		__this->set_bits_6(0);
		DecoderFallbackBuffer_t236B3D4172A9BAD1C2150ED78958227F8F20C94B * L_0 = ((Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 *)__this)->get_m_fallbackBuffer_1();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		DecoderFallbackBuffer_t236B3D4172A9BAD1C2150ED78958227F8F20C94B * L_1 = ((Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 *)__this)->get_m_fallbackBuffer_1();
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(6 /* System.Void System.Text.DecoderFallbackBuffer::Reset() */, L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean System.Text.UTF8Encoding/UTF8Decoder::get_HasState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UTF8Decoder_get_HasState_mB8A652C38DB6D32A53AE51935F186F7929276381 (UTF8Decoder_tD2359F0F52206B911EBC3222E627191C829F4C65 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_bits_6();
		return (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
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
// System.Void System.Text.UTF8Encoding/UTF8Encoder::.ctor(System.Text.UTF8Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UTF8Encoder__ctor_m29DA8DC0472E7C071894DCB375E8487CFC55B327 (UTF8Encoder_t3408DBF93D79A981F50954F660E33BA13FE29FD3 * __this, UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * ___encoding0, const RuntimeMethod* method)
{
	{
		UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * L_0 = ___encoding0;
		EncoderNLS__ctor_mF9B45DA23BADBDD417E3F741C6C9BB45F3021513(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.UTF8Encoding/UTF8Encoder::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UTF8Encoder__ctor_m21812FB83AD489EC7871F626BC251F3DEDFC8506 (UTF8Encoder_t3408DBF93D79A981F50954F660E33BA13FE29FD3 * __this, SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ___info0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01AC6AAA845493AD30953C71C8C9EABF0D0124E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29988D0F9BCADFABFF66CBF5AB73096D1CAE3128);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF00BC34B67009EEE0394C51F26D6D5457EC69F6);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		EncoderNLS__ctor_m78E59E5DDEAE418A3936D0EAD2D2DB3D15E75CEF(__this, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_0 = ___info0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UTF8Encoder__ctor_m21812FB83AD489EC7871F626BC251F3DEDFC8506_RuntimeMethod_var)));
	}

IL_0014:
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_2 = ___info0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_3 = { reinterpret_cast<intptr_t> (Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4;
		L_4 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		RuntimeObject * L_5;
		L_5 = SerializationInfo_GetValue_mF6E311779D55AD7C80B2D19FF2A7E9683AEF2A99(L_2, _stringLiteral29988D0F9BCADFABFF66CBF5AB73096D1CAE3128, L_4, /*hidden argument*/NULL);
		((EncoderNLS_tB071198C3F300408FDED1BD2C822F46A25115712 *)__this)->set_m_encoding_3(((Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 *)CastclassClass((RuntimeObject*)L_5, Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_il2cpp_TypeInfo_var)));
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_6 = ___info0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_7 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		Type_t * L_8;
		L_8 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		RuntimeObject * L_9;
		L_9 = SerializationInfo_GetValue_mF6E311779D55AD7C80B2D19FF2A7E9683AEF2A99(L_6, _stringLiteral01AC6AAA845493AD30953C71C8C9EABF0D0124E4, L_8, /*hidden argument*/NULL);
		__this->set_surrogateChar_7(((*(int32_t*)((int32_t*)UnBox(L_9, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))));
	}

IL_0054:
	try
	{ // begin try (depth: 1)
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_10 = ___info0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_11 = { reinterpret_cast<intptr_t> (EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_12;
		L_12 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		RuntimeObject * L_13;
		L_13 = SerializationInfo_GetValue_mF6E311779D55AD7C80B2D19FF2A7E9683AEF2A99(L_10, _stringLiteralAF00BC34B67009EEE0394C51F26D6D5457EC69F6, L_12, /*hidden argument*/NULL);
		((Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A *)__this)->set_m_fallback_0(((EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 *)CastclassClass((RuntimeObject*)L_13, EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4_il2cpp_TypeInfo_var)));
		goto IL_0080;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SerializationException_tDB38C13A2ABF407C381E3F332D197AC1AD097A92_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0076;
		}
		throw e;
	}

CATCH_0076:
	{ // begin catch(System.Runtime.Serialization.SerializationException)
		((Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A *)__this)->set_m_fallback_0((EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 *)NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0080;
	} // end catch (depth: 1)

IL_0080:
	{
		return;
	}
}
// System.Void System.Text.UTF8Encoding/UTF8Encoder::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UTF8Encoder_System_Runtime_Serialization_ISerializable_GetObjectData_m2EB22FA8BBBFC1038DA48A6014DDFD6FF57D93D2 (UTF8Encoder_t3408DBF93D79A981F50954F660E33BA13FE29FD3 * __this, SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ___info0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01AC6AAA845493AD30953C71C8C9EABF0D0124E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29988D0F9BCADFABFF66CBF5AB73096D1CAE3128);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral35FD9409286E50999789090A9930776FD3F2B13E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF00BC34B67009EEE0394C51F26D6D5457EC69F6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5411972E9968E9978EF95EF84FB5F5FE4F0F734);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B4_0 = NULL;
	SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * G_B4_1 = NULL;
	String_t* G_B3_0 = NULL;
	SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * G_B3_1 = NULL;
	int32_t G_B5_0 = 0;
	String_t* G_B5_1 = NULL;
	SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * G_B5_2 = NULL;
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_0 = ___info0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UTF8Encoder_System_Runtime_Serialization_ISerializable_GetObjectData_m2EB22FA8BBBFC1038DA48A6014DDFD6FF57D93D2_RuntimeMethod_var)));
	}

IL_000e:
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_2 = ___info0;
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_3 = ((EncoderNLS_tB071198C3F300408FDED1BD2C822F46A25115712 *)__this)->get_m_encoding_3();
		NullCheck(L_2);
		SerializationInfo_AddValue_mA50C2668EF700C2239DDC362F8DB409020BB763D(L_2, _stringLiteral29988D0F9BCADFABFF66CBF5AB73096D1CAE3128, L_3, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_4 = ___info0;
		int32_t L_5 = __this->get_surrogateChar_7();
		NullCheck(L_4);
		SerializationInfo_AddValue_m3DF5B182A63FFCD12287E97EA38944D0C6405BB5(L_4, _stringLiteral01AC6AAA845493AD30953C71C8C9EABF0D0124E4, L_5, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_6 = ___info0;
		EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * L_7 = ((Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A *)__this)->get_m_fallback_0();
		NullCheck(L_6);
		SerializationInfo_AddValue_mA50C2668EF700C2239DDC362F8DB409020BB763D(L_6, _stringLiteralAF00BC34B67009EEE0394C51F26D6D5457EC69F6, L_7, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_8 = ___info0;
		int32_t L_9 = __this->get_surrogateChar_7();
		G_B3_0 = _stringLiteral35FD9409286E50999789090A9930776FD3F2B13E;
		G_B3_1 = L_8;
		if ((((int32_t)L_9) > ((int32_t)0)))
		{
			G_B4_0 = _stringLiteral35FD9409286E50999789090A9930776FD3F2B13E;
			G_B4_1 = L_8;
			goto IL_0053;
		}
	}
	{
		G_B5_0 = 0;
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		goto IL_0054;
	}

IL_0053:
	{
		G_B5_0 = 1;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
	}

IL_0054:
	{
		NullCheck(G_B5_2);
		SerializationInfo_AddValue_m324F3E0B02B746D5F460499F5A25988FD608AD7B(G_B5_2, G_B5_1, (bool)G_B5_0, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_10 = ___info0;
		NullCheck(L_10);
		SerializationInfo_AddValue_m324F3E0B02B746D5F460499F5A25988FD608AD7B(L_10, _stringLiteralB5411972E9968E9978EF95EF84FB5F5FE4F0F734, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.UTF8Encoding/UTF8Encoder::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UTF8Encoder_Reset_m5CDF361E7CAE7E9BF5DE6C35348F253A1341030C (UTF8Encoder_t3408DBF93D79A981F50954F660E33BA13FE29FD3 * __this, const RuntimeMethod* method)
{
	{
		__this->set_surrogateChar_7(0);
		EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0 * L_0 = ((Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A *)__this)->get_m_fallbackBuffer_1();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0 * L_1 = ((Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A *)__this)->get_m_fallbackBuffer_1();
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(9 /* System.Void System.Text.EncoderFallbackBuffer::Reset() */, L_1);
	}

IL_001a:
	{
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
// System.Void System.Text.UnicodeEncoding/Decoder::.ctor(System.Text.UnicodeEncoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Decoder__ctor_m2E2F6F43F63332CC0E59AF2A0ADA80DE2CF0D187 (Decoder_tC3DC16951ED8FCF98278FC7F0804070A9C218109 * __this, UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68 * ___encoding0, const RuntimeMethod* method)
{
	{
		__this->set_lastByte_6((-1));
		UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68 * L_0 = ___encoding0;
		DecoderNLS__ctor_mC526CB146E620885CBC054C3921E27A7949B2046(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.UnicodeEncoding/Decoder::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Decoder__ctor_m8A1BF2DA9101627DEFF9629F0E16F8A0A8917DE1 (Decoder_tC3DC16951ED8FCF98278FC7F0804070A9C218109 * __this, SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ___info0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1450C988C6B4D028AF5A543FC4A7A8FA9BA62F30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2920727F7824CA7782C4813D6F7312ABCDA53CCD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF00BC34B67009EEE0394C51F26D6D5457EC69F6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC760D2328BD1CF4750B1C22486E5906ACA0DD030);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		__this->set_lastByte_6((-1));
		DecoderNLS__ctor_mDD4D4880457E73F1575479F8B309F9BB25BA0F4D(__this, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_0 = ___info0;
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Decoder__ctor_m8A1BF2DA9101627DEFF9629F0E16F8A0A8917DE1_RuntimeMethod_var)));
	}

IL_001b:
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_2 = ___info0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_3 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4;
		L_4 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		RuntimeObject * L_5;
		L_5 = SerializationInfo_GetValue_mF6E311779D55AD7C80B2D19FF2A7E9683AEF2A99(L_2, _stringLiteral2920727F7824CA7782C4813D6F7312ABCDA53CCD, L_4, /*hidden argument*/NULL);
		__this->set_lastByte_6(((*(int32_t*)((int32_t*)UnBox(L_5, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))));
	}

IL_003b:
	try
	{ // begin try (depth: 1)
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_6 = ___info0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_7 = { reinterpret_cast<intptr_t> (Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8;
		L_8 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		RuntimeObject * L_9;
		L_9 = SerializationInfo_GetValue_mF6E311779D55AD7C80B2D19FF2A7E9683AEF2A99(L_6, _stringLiteral1450C988C6B4D028AF5A543FC4A7A8FA9BA62F30, L_8, /*hidden argument*/NULL);
		((DecoderNLS_tE5B1B7D68B698C0B65FBEE94EAE2453FFD3D538A *)__this)->set_m_encoding_2(((Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 *)CastclassClass((RuntimeObject*)L_9, Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_il2cpp_TypeInfo_var)));
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_10 = ___info0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_11 = { reinterpret_cast<intptr_t> (Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_0_0_0_var) };
		Type_t * L_12;
		L_12 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		RuntimeObject * L_13;
		L_13 = SerializationInfo_GetValue_mF6E311779D55AD7C80B2D19FF2A7E9683AEF2A99(L_10, _stringLiteralC760D2328BD1CF4750B1C22486E5906ACA0DD030, L_12, /*hidden argument*/NULL);
		__this->set_lastChar_7(((*(Il2CppChar*)((Il2CppChar*)UnBox(L_13, Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var)))));
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_14 = ___info0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_15 = { reinterpret_cast<intptr_t> (DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D_0_0_0_var) };
		Type_t * L_16;
		L_16 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_15, /*hidden argument*/NULL);
		NullCheck(L_14);
		RuntimeObject * L_17;
		L_17 = SerializationInfo_GetValue_mF6E311779D55AD7C80B2D19FF2A7E9683AEF2A99(L_14, _stringLiteralAF00BC34B67009EEE0394C51F26D6D5457EC69F6, L_16, /*hidden argument*/NULL);
		((Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 *)__this)->set_m_fallback_0(((DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D *)CastclassClass((RuntimeObject*)L_17, DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D_il2cpp_TypeInfo_var)));
		goto IL_00c8;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SerializationException_tDB38C13A2ABF407C381E3F332D197AC1AD097A92_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_009d;
		}
		throw e;
	}

CATCH_009d:
	{ // begin catch(System.Runtime.Serialization.SerializationException)
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_18 = ___info0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_19 = { reinterpret_cast<intptr_t> (((RuntimeType*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var))) };
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t * L_20;
		L_20 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_19, /*hidden argument*/NULL);
		NullCheck(L_18);
		RuntimeObject * L_21;
		L_21 = SerializationInfo_GetValue_mF6E311779D55AD7C80B2D19FF2A7E9683AEF2A99(L_18, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD5FECA9C07F11E0EFEDB17DCA043A555B4DD4FF2)), L_20, /*hidden argument*/NULL);
		V_0 = ((*(bool*)((bool*)UnBox(L_21, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var))))));
		bool L_22 = V_0;
		UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68 * L_23 = (UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68_il2cpp_TypeInfo_var)));
		UnicodeEncoding__ctor_mE077368843CAFC47B2C4AFC3C771F5B51F3B8DD0(L_23, L_22, (bool)0, /*hidden argument*/NULL);
		((DecoderNLS_tE5B1B7D68B698C0B65FBEE94EAE2453FFD3D538A *)__this)->set_m_encoding_2(L_23);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00c8;
	} // end catch (depth: 1)

IL_00c8:
	{
		return;
	}
}
// System.Void System.Text.UnicodeEncoding/Decoder::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Decoder_System_Runtime_Serialization_ISerializable_GetObjectData_mFEA452EA85957C6375B8F3E3551D2DA9317E1165 (Decoder_tC3DC16951ED8FCF98278FC7F0804070A9C218109 * __this, SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ___info0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1450C988C6B4D028AF5A543FC4A7A8FA9BA62F30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2920727F7824CA7782C4813D6F7312ABCDA53CCD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF00BC34B67009EEE0394C51F26D6D5457EC69F6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC760D2328BD1CF4750B1C22486E5906ACA0DD030);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5FECA9C07F11E0EFEDB17DCA043A555B4DD4FF2);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_0 = ___info0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Decoder_System_Runtime_Serialization_ISerializable_GetObjectData_mFEA452EA85957C6375B8F3E3551D2DA9317E1165_RuntimeMethod_var)));
	}

IL_000e:
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_2 = ___info0;
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_3 = ((DecoderNLS_tE5B1B7D68B698C0B65FBEE94EAE2453FFD3D538A *)__this)->get_m_encoding_2();
		NullCheck(L_2);
		SerializationInfo_AddValue_mA50C2668EF700C2239DDC362F8DB409020BB763D(L_2, _stringLiteral1450C988C6B4D028AF5A543FC4A7A8FA9BA62F30, L_3, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_4 = ___info0;
		DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * L_5 = ((Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 *)__this)->get_m_fallback_0();
		NullCheck(L_4);
		SerializationInfo_AddValue_mA50C2668EF700C2239DDC362F8DB409020BB763D(L_4, _stringLiteralAF00BC34B67009EEE0394C51F26D6D5457EC69F6, L_5, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_6 = ___info0;
		Il2CppChar L_7 = __this->get_lastChar_7();
		NullCheck(L_6);
		SerializationInfo_AddValue_m7B2342989B501DBA05C63C0D6E4FBD63541D4C38(L_6, _stringLiteralC760D2328BD1CF4750B1C22486E5906ACA0DD030, L_7, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_8 = ___info0;
		int32_t L_9 = __this->get_lastByte_6();
		NullCheck(L_8);
		SerializationInfo_AddValue_m3DF5B182A63FFCD12287E97EA38944D0C6405BB5(L_8, _stringLiteral2920727F7824CA7782C4813D6F7312ABCDA53CCD, L_9, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_10 = ___info0;
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_11 = ((DecoderNLS_tE5B1B7D68B698C0B65FBEE94EAE2453FFD3D538A *)__this)->get_m_encoding_2();
		NullCheck(((UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68 *)CastclassClass((RuntimeObject*)L_11, UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68_il2cpp_TypeInfo_var)));
		bool L_12 = ((UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68 *)CastclassClass((RuntimeObject*)L_11, UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68_il2cpp_TypeInfo_var))->get_bigEndian_17();
		NullCheck(L_10);
		SerializationInfo_AddValue_m324F3E0B02B746D5F460499F5A25988FD608AD7B(L_10, _stringLiteralD5FECA9C07F11E0EFEDB17DCA043A555B4DD4FF2, L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.UnicodeEncoding/Decoder::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Decoder_Reset_mFE13742F618EE4CB1C7E680B93CD2EAF0DD2A588 (Decoder_tC3DC16951ED8FCF98278FC7F0804070A9C218109 * __this, const RuntimeMethod* method)
{
	{
		__this->set_lastByte_6((-1));
		__this->set_lastChar_7(0);
		DecoderFallbackBuffer_t236B3D4172A9BAD1C2150ED78958227F8F20C94B * L_0 = ((Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 *)__this)->get_m_fallbackBuffer_1();
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		DecoderFallbackBuffer_t236B3D4172A9BAD1C2150ED78958227F8F20C94B * L_1 = ((Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 *)__this)->get_m_fallbackBuffer_1();
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(6 /* System.Void System.Text.DecoderFallbackBuffer::Reset() */, L_1);
	}

IL_0021:
	{
		return;
	}
}
// System.Boolean System.Text.UnicodeEncoding/Decoder::get_HasState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Decoder_get_HasState_m77EB54613A273C583568810DC48F8ADFAA450190 (Decoder_tC3DC16951ED8FCF98278FC7F0804070A9C218109 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_lastByte_6();
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_0013;
		}
	}
	{
		Il2CppChar L_1 = __this->get_lastChar_7();
		return (bool)((!(((uint32_t)L_1) <= ((uint32_t)0)))? 1 : 0);
	}

IL_0013:
	{
		return (bool)1;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.Win32.Win32Native/WIN32_FIND_DATA::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WIN32_FIND_DATA__ctor_mB7888151C7D80CA45AD0857773E8B1BB1CC003E3 (WIN32_FIND_DATA_tE88493B22E1CDD2E595CA4F800949555399AB3C7 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
IL2CPP_EXTERN_C  bool DelegatePInvokeWrapper_WindowsCancelHandler_tFD0F0B721F93ACA04D9CD9340DA39075A8FF2ACF (WindowsCancelHandler_tFD0F0B721F93ACA04D9CD9340DA39075A8FF2ACF * __this, int32_t ___keyCode0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___keyCode0);

	return static_cast<bool>(returnValue);
}
// System.Void System.Console/WindowsConsole/WindowsCancelHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsCancelHandler__ctor_mE4F754395799D3462EE23E39126EE0AF14709B8E (WindowsCancelHandler_tFD0F0B721F93ACA04D9CD9340DA39075A8FF2ACF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Boolean System.Console/WindowsConsole/WindowsCancelHandler::Invoke(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsCancelHandler_Invoke_mC8798AF8C04F477C72E281B924EBE6C738548068 (WindowsCancelHandler_tFD0F0B721F93ACA04D9CD9340DA39075A8FF2ACF * __this, int32_t ___keyCode0, const RuntimeMethod* method)
{
	bool result = false;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef bool (*FunctionPointerType) (int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___keyCode0, targetMethod);
			}
			else
			{
				// closed
				typedef bool (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___keyCode0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< bool, int32_t >::Invoke(targetMethod, targetThis, ___keyCode0);
					else
						result = GenericVirtFuncInvoker1< bool, int32_t >::Invoke(targetMethod, targetThis, ___keyCode0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< bool, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___keyCode0);
					else
						result = VirtFuncInvoker1< bool, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___keyCode0);
				}
			}
			else
			{
				typedef bool (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___keyCode0, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult System.Console/WindowsConsole/WindowsCancelHandler::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WindowsCancelHandler_BeginInvoke_m3F4FB809BF25992CAA49781D6C2DAE6B8B967322 (WindowsCancelHandler_tFD0F0B721F93ACA04D9CD9340DA39075A8FF2ACF * __this, int32_t ___keyCode0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___keyCode0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Boolean System.Console/WindowsConsole/WindowsCancelHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsCancelHandler_EndInvoke_m46613D19C0EB5D2A0B5CCB7BDA60906C95908609 (WindowsCancelHandler_tFD0F0B721F93ACA04D9CD9340DA39075A8FF2ACF * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(bool*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Collections.ListDictionaryInternal/NodeKeyValueCollection/NodeKeyValueEnumerator::.ctor(System.Collections.ListDictionaryInternal,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeKeyValueEnumerator__ctor_m7ED70CB047C60530F22D3BB02B51EB2FE39FB65D (NodeKeyValueEnumerator_tE6977A5C0AF3F0E001B951488690F2693BAB3955 * __this, ListDictionaryInternal_t41BC521E191A070D69C4D98B996314424BBFDA8A * ___list0, bool ___isKeys1, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		ListDictionaryInternal_t41BC521E191A070D69C4D98B996314424BBFDA8A * L_0 = ___list0;
		__this->set_list_0(L_0);
		bool L_1 = ___isKeys1;
		__this->set_isKeys_3(L_1);
		ListDictionaryInternal_t41BC521E191A070D69C4D98B996314424BBFDA8A * L_2 = ___list0;
		NullCheck(L_2);
		int32_t L_3 = L_2->get_version_1();
		__this->set_version_2(L_3);
		__this->set_start_4((bool)1);
		__this->set_current_1((DictionaryNode_t9A01FA01782F6D162BA158736A5FB81CB893A33C *)NULL);
		return;
	}
}
// System.Object System.Collections.ListDictionaryInternal/NodeKeyValueCollection/NodeKeyValueEnumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * NodeKeyValueEnumerator_get_Current_m3D7CD1472E9AEA82F13366746FA675E0DCA7565A (NodeKeyValueEnumerator_tE6977A5C0AF3F0E001B951488690F2693BAB3955 * __this, const RuntimeMethod* method)
{
	{
		DictionaryNode_t9A01FA01782F6D162BA158736A5FB81CB893A33C * L_0 = __this->get_current_1();
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		String_t* L_1;
		L_1 = Environment_GetResourceString_m8DFF827596B5FD533D3FE56900FA095F7D674617(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral63FC874122847D14784CB3ADBE59A08B9558FA97)), /*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_2 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_2, L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NodeKeyValueEnumerator_get_Current_m3D7CD1472E9AEA82F13366746FA675E0DCA7565A_RuntimeMethod_var)));
	}

IL_0018:
	{
		bool L_3 = __this->get_isKeys_3();
		if (L_3)
		{
			goto IL_002c;
		}
	}
	{
		DictionaryNode_t9A01FA01782F6D162BA158736A5FB81CB893A33C * L_4 = __this->get_current_1();
		NullCheck(L_4);
		RuntimeObject * L_5 = L_4->get_value_1();
		return L_5;
	}

IL_002c:
	{
		DictionaryNode_t9A01FA01782F6D162BA158736A5FB81CB893A33C * L_6 = __this->get_current_1();
		NullCheck(L_6);
		RuntimeObject * L_7 = L_6->get_key_0();
		return L_7;
	}
}
// System.Boolean System.Collections.ListDictionaryInternal/NodeKeyValueCollection/NodeKeyValueEnumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NodeKeyValueEnumerator_MoveNext_mA39E1A22D0DAD6C05709B603A264DEAD6F5560DB (NodeKeyValueEnumerator_tE6977A5C0AF3F0E001B951488690F2693BAB3955 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_version_2();
		ListDictionaryInternal_t41BC521E191A070D69C4D98B996314424BBFDA8A * L_1 = __this->get_list_0();
		NullCheck(L_1);
		int32_t L_2 = L_1->get_version_1();
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_0023;
		}
	}
	{
		String_t* L_3;
		L_3 = Environment_GetResourceString_m8DFF827596B5FD533D3FE56900FA095F7D674617(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF8D08FCF1537043BF0289FA98C51BF5A3AC7C618)), /*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_4 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_4, L_3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NodeKeyValueEnumerator_MoveNext_mA39E1A22D0DAD6C05709B603A264DEAD6F5560DB_RuntimeMethod_var)));
	}

IL_0023:
	{
		bool L_5 = __this->get_start_4();
		if (!L_5)
		{
			goto IL_0045;
		}
	}
	{
		ListDictionaryInternal_t41BC521E191A070D69C4D98B996314424BBFDA8A * L_6 = __this->get_list_0();
		NullCheck(L_6);
		DictionaryNode_t9A01FA01782F6D162BA158736A5FB81CB893A33C * L_7 = L_6->get_head_0();
		__this->set_current_1(L_7);
		__this->set_start_4((bool)0);
		goto IL_005e;
	}

IL_0045:
	{
		DictionaryNode_t9A01FA01782F6D162BA158736A5FB81CB893A33C * L_8 = __this->get_current_1();
		if (!L_8)
		{
			goto IL_005e;
		}
	}
	{
		DictionaryNode_t9A01FA01782F6D162BA158736A5FB81CB893A33C * L_9 = __this->get_current_1();
		NullCheck(L_9);
		DictionaryNode_t9A01FA01782F6D162BA158736A5FB81CB893A33C * L_10 = L_9->get_next_2();
		__this->set_current_1(L_10);
	}

IL_005e:
	{
		DictionaryNode_t9A01FA01782F6D162BA158736A5FB81CB893A33C * L_11 = __this->get_current_1();
		return (bool)((!(((RuntimeObject*)(DictionaryNode_t9A01FA01782F6D162BA158736A5FB81CB893A33C *)L_11) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
	}
}
// System.Void System.Collections.ListDictionaryInternal/NodeKeyValueCollection/NodeKeyValueEnumerator::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeKeyValueEnumerator_Reset_m9F789418938587F29F3B212BCAF8112317FA5943 (NodeKeyValueEnumerator_tE6977A5C0AF3F0E001B951488690F2693BAB3955 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_version_2();
		ListDictionaryInternal_t41BC521E191A070D69C4D98B996314424BBFDA8A * L_1 = __this->get_list_0();
		NullCheck(L_1);
		int32_t L_2 = L_1->get_version_1();
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_0023;
		}
	}
	{
		String_t* L_3;
		L_3 = Environment_GetResourceString_m8DFF827596B5FD533D3FE56900FA095F7D674617(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF8D08FCF1537043BF0289FA98C51BF5A3AC7C618)), /*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_4 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_4, L_3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NodeKeyValueEnumerator_Reset_m9F789418938587F29F3B212BCAF8112317FA5943_RuntimeMethod_var)));
	}

IL_0023:
	{
		__this->set_start_4((bool)1);
		__this->set_current_1((DictionaryNode_t9A01FA01782F6D162BA158736A5FB81CB893A33C *)NULL);
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
// System.Void System.IO.Stream/SynchronousAsyncResult/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m7FB8166A66FF58669CB59F32A9301B483CB8BE4A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t0B9BA392160C64553C28F93C014479CD7CDC88CB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t0B9BA392160C64553C28F93C014479CD7CDC88CB * L_0 = (U3CU3Ec_t0B9BA392160C64553C28F93C014479CD7CDC88CB *)il2cpp_codegen_object_new(U3CU3Ec_t0B9BA392160C64553C28F93C014479CD7CDC88CB_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m25FD09827E688A2665AA1918B69FB7B2421E8235(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t0B9BA392160C64553C28F93C014479CD7CDC88CB_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0B9BA392160C64553C28F93C014479CD7CDC88CB_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void System.IO.Stream/SynchronousAsyncResult/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m25FD09827E688A2665AA1918B69FB7B2421E8235 (U3CU3Ec_t0B9BA392160C64553C28F93C014479CD7CDC88CB * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Threading.ManualResetEvent System.IO.Stream/SynchronousAsyncResult/<>c::<get_AsyncWaitHandle>b__12_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * U3CU3Ec_U3Cget_AsyncWaitHandleU3Eb__12_0_m30F2C3EEF4109B825474FF30D6A4A4291DC3848B (U3CU3Ec_t0B9BA392160C64553C28F93C014479CD7CDC88CB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * L_0 = (ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA *)il2cpp_codegen_object_new(ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA_il2cpp_TypeInfo_var);
		ManualResetEvent__ctor_mF80BD5B0955BDA8CD514F48EBFF48698E5D03850(L_0, (bool)1, /*hidden argument*/NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * Task_get_InternalCurrent_m557FDDC9AA0F289D2E00266B3E231DF5299A719D_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_0 = ((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var))->get_t_currentTask_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * Task_get_ExecutingTaskScheduler_m95D238D843CD999FD8899BF6A98F5E84F4212C4C_inline (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, const RuntimeMethod* method)
{
	{
		TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * L_0 = __this->get_m_taskScheduler_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  AdjustmentRule_get_DateStart_m05FFD9D69391EC287D299B23A549FFB1F9FB14EE_inline (AdjustmentRule_t15EC10F91D4E8CC287CF8610D8D24BD636A23304 * __this, const RuntimeMethod* method)
{
	{
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0 = __this->get_m_dateStart_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t TimeSpan_get_Ticks_mE4C9E1F27DC794028CEDCF7CB5BD092D16DBACD4_inline (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * __this, const RuntimeMethod* method)
{
	{
		int64_t L_0 = __this->get__ticks_22();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  TransitionTime_get_TimeOfDay_m95ECA2E981CA772D9D1DECC7F7421241D4144F44_inline (TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A * __this, const RuntimeMethod* method)
{
	{
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0 = __this->get_m_timeOfDay_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TransitionTime_get_Month_m1E127ECF7312277ED31CEB769A6DC0503F1FAB2B_inline (TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A * __this, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = __this->get_m_month_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TransitionTime_get_Week_m9271C2A79DC390EF07020F63CAB641FA36E304BA_inline (TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A * __this, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = __this->get_m_week_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TransitionTime_get_Day_mF663C24FEFF09012299FA76BE6D65CC6C455C87C_inline (TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A * __this, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = __this->get_m_day_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TransitionTime_get_DayOfWeek_mDC32F75FFCC4AAE5826AFBBC11840C8290E08E52_inline (TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_dayOfWeek_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TransitionTime_get_IsFixedDateRule_m4E7A489F0B8E60893C80A70E768F36A10258E9FB_inline (TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_m_isFixedDateRule_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Tuple_4_get_Item1_m5F32E198862372BC9F9C510790E5098584906CAC_gshared_inline (Tuple_4_t936566050E79A53330A93469CAF15575A12A114D * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_m_Item1_0();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Tuple_4_get_Item2_m70E2FD23ACE5513A49D47582782076A592E0A1AF_gshared_inline (Tuple_4_t936566050E79A53330A93469CAF15575A12A114D * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_m_Item2_1();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Tuple_4_get_Item3_mB8D130AFCEE1037111D5F6387BF34F7893848F45_gshared_inline (Tuple_4_t936566050E79A53330A93469CAF15575A12A114D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_m_Item3_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Tuple_4_get_Item4_mCB7860299592F8FA0F6F60C1EBA20767982B16DB_gshared_inline (Tuple_4_t936566050E79A53330A93469CAF15575A12A114D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_m_Item4_3();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2  ConfiguredTaskAwaitable_1_GetAwaiter_m8FA39505FC2099C60148C0F029CB49792690A0D5_gshared_inline (ConfiguredTaskAwaitable_1_t95CB4612A5B70DDFE0643FA38A73D6B984DD68EC * __this, const RuntimeMethod* method)
{
	{
		ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2  L_0 = (ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2 )__this->get_m_configuredTaskAwaiter_0();
		return (ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Tuple_2_get_Item1_m83FF713DB4A914365CB9A6D213C1D31B46269057_gshared_inline (Tuple_2_t844F36656ADFD9CCC9527B1F549244BD1884E5F6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_m_Item1_0();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppChar Tuple_2_get_Item2_m79AB8B3DC587FA8796EC216A623D10DC71A6E202_gshared_inline (Tuple_2_t844F36656ADFD9CCC9527B1F549244BD1884E5F6 * __this, const RuntimeMethod* method)
{
	{
		Il2CppChar L_0 = (Il2CppChar)__this->get_m_Item2_1();
		return (Il2CppChar)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Tuple_2_get_Item1_m80928C585ED22044C6E5DB8B8BFA895284E2BD9A_gshared_inline (Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_m_Item1_0();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Tuple_2_get_Item2_m2A49F263317603E4A770D5B34222FFCCCB6AE4EB_gshared_inline (Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_m_Item2_1();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
