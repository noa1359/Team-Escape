#include "pch-cpp.hpp"

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
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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

// System.Action`1<System.Boolean>
struct Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83;
// System.Action`1<Naninovel.Commands.Command>
struct Action_1_t218D2034E21879AA8365809756B403883D165C12;
// System.Action`1<Naninovel.GameSaveLoadArgs>
struct Action_1_t4C49E92359A54C81647441028F7C4722D8DB4264;
// System.Action`1<Naninovel.GameStateMap>
struct Action_1_tE7DBC7D799F1973CA1C99095A5E2322E45FDAE6C;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Action`1<Naninovel.Script>
struct Action_1_tDEA030839D283792549B1C42555230A54DD265C8;
// System.Action`1<System.String>
struct Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3;
// Naninovel.SerializableMap/Dictionary`2<System.String,System.Boolean>
struct Dictionary_2_tA7082B27DEED542A5C4F718E3AC7725EB9005DD4;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399;
// System.Collections.Generic.Dictionary`2<System.String,Naninovel.VideoBackground/VideoData>
struct Dictionary_2_tB0D6F5B541B0F32F9BD4447204B50E4D0A15213E;
// System.Func`1<System.Single[]>
struct Func_1_tB9DF8D3D9F8D8DE3959D9A3C4942EA354A2D14A8;
// System.Func`1<System.Object>
struct Func_1_t807CEE610086E24A0167BAA97A64062016E09D49;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>,System.Boolean>
struct Func_2_t3DFB7D97659946883862BED975EB8EADFABC9D8F;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>,System.String>
struct Func_2_t942192522C87CAC66A981B75E31AE269944018EC;
// System.Func`2<Naninovel.GameStateMap,System.Boolean>
struct Func_2_tC98365FCD009A19906148DAE6D31E499FA04C5FF;
// System.Func`2<Naninovel.IEngineService,System.Type>
struct Func_2_t7C236A78551F84A38F24D6AB3229F872EAEC4ADE;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8;
// System.Func`2<System.Reflection.ParameterInfo,System.Type>
struct Func_2_t5938BB484083AB6B9B4C4F0DBAD54A7F51611EBF;
// System.Func`2<System.String,Naninovel.Folder>
struct Func_2_tAEFCCC29A8C97EA955DC25ED83FB1E87C86C314C;
// UniRx.Async.IAwaiter`1<Naninovel.Resource`1<UnityEngine.Video.VideoClip>>
struct IAwaiter_1_t13AE2C4F87D933ABF807FC032254BD01D626DA44;
// UniRx.Async.IAwaiter`1<System.Single[]>
struct IAwaiter_1_t85AEE57BAE5D22BE06886F09C865D1F62576888D;
// UniRx.Async.IAwaiter`1<UniRx.Async.AsyncUnit>
struct IAwaiter_1_t6FCACC3C4FF823DF8EE2F573EA8ABCA40F665DA3;
// UniRx.Async.IAwaiter`1<UnityEngine.AudioClip>
struct IAwaiter_1_t62BC5D343BE36873A7F82189CF208D004F418A66;
// UniRx.Async.IAwaiter`1<Naninovel.GlobalStateMap>
struct IAwaiter_1_t3654061CBFE7C71C222C403E0D9C19C9CBB09130;
// UniRx.Async.IAwaiter`1<System.Object>
struct IAwaiter_1_tFD5DC317421403235686D3A61F3BEAA1D8D6700D;
// UniRx.Async.IAwaiter`1<Naninovel.VideoBackground/VideoData>
struct IAwaiter_1_tD361E4D1AF781B648C7D4C148F3414BA57670EA7;
// System.Collections.Generic.IDictionary`2<System.Object,System.Boolean>
struct IDictionary_2_t975BA35787249A6C684B68E8EC22133F2A70D21A;
// System.Collections.Generic.IDictionary`2<System.String,System.Boolean>
struct IDictionary_2_t92877A7E307FA42CA870D105661BEE7C2023909B;
// System.Collections.Generic.IEnumerable`1<Naninovel.GameStateMap>
struct IEnumerable_1_tDF947BE56F2E2FEDC136615F211F840272D1DF3B;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1A386BEF1855064FD5CC71F340A68881A52B4932;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// Naninovel.ISaveSlotManager`1<Naninovel.GameStateMap>
struct ISaveSlotManager_1_tB6ADEA4DD8F97AB3DC3B66F1EC0377CBA65AD7F4;
// Naninovel.ISaveSlotManager`1<Naninovel.GlobalStateMap>
struct ISaveSlotManager_1_t39C1A96A71EF23EC9AD8145874899B47730625DA;
// Naninovel.ISaveSlotManager`1<Naninovel.SettingsStateMap>
struct ISaveSlotManager_1_t496340C4FBF3CB3B3AD59CB81126C1C54E7B88B1;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Naninovel.VideoBackground/VideoData>
struct KeyCollection_t03456650F69C633388FF11B1A5DF02585AF6151A;
// System.Collections.Generic.LinkedList`1<Naninovel.GameStateMap>
struct LinkedList_1_t5133454CAE619B941D140CEED1DBF3A25F63A21E;
// System.Collections.Generic.List`1<System.Action`1<Naninovel.GameStateMap>>
struct List_1_t5D3DE8A6E866EFBBE267E1025ED889B2EB78D393;
// System.Collections.Generic.List`1<System.Func`2<Naninovel.Commands.Command,UniRx.Async.UniTask>>
struct List_1_t37D2BE0B14BEA94DC451A19C24D6BF16A532892A;
// System.Collections.Generic.List`1<System.Func`2<Naninovel.GameStateMap,UniRx.Async.UniTask>>
struct List_1_t7E82013420E9BEDD40CDA2928EE1F40D52F58EF6;
// System.Collections.Generic.List`1<Naninovel.ResourceLoader`1/LoadedResource<UnityEngine.Video.VideoClip>>
struct List_1_tEF2928FC7D64E528B8D749727115EF52BB35F1E1;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t34AA4AF4E7352129CA58045901530E41445AC16D;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5;
// System.Collections.Generic.List`1<Naninovel.IResourceProvider>
struct List_1_t0BDE620568A9571C04A43DC71410BAA12DEEE3EA;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<Naninovel.ProvisionSource>
struct List_1_t7C667BECE02F02775CAE17EC4259E3D14AEF9175;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181;
// System.Collections.Generic.List`1<Naninovel.BackgroundMetadata/Pose>
struct List_1_t57980BFC38AF009311D68D877EA24F8B8946DD4D;
// System.Collections.Generic.List`1<Naninovel.UI.CustomUI/FontChangeConfiguration>
struct List_1_t9B593929C7B0BBCE36D7376AC45D5F416CCD97CC;
// Naninovel.LiteralMap`1<System.Type>
struct LiteralMap_1_tD4183E67AFCBD4ABFDE9FE789A863138B28012A7;
// Naninovel.LiteralMap`1<Naninovel.VideoBackground/VideoData>
struct LiteralMap_1_t1A9EB0EEABDB7CC5DE71C4813A6B71DB3FEEB47D;
// Naninovel.LocalizableResourceLoader`1<UnityEngine.Video.VideoClip>
struct LocalizableResourceLoader_1_t6CC3BB582EA259156AF64985E72C541EFE88D9E6;
// Naninovel.Nullable`1<System.Object>
struct Nullable_1_t78C6503C81ED4E2CC0C85B79A9D429418B9C8EEE;
// Naninovel.Nullable`1<System.String>
struct Nullable_1_tC6FC502E280A7F1828379312132AC25DAED230A5;
// System.Predicate`1<Naninovel.GameStateMap>
struct Predicate_1_tBB645330290CE4865319EB67E4201373C3FDDE20;
// System.Predicate`1<Naninovel.IStateManager>
struct Predicate_1_tC32C71EEE3CD94A0D24F97FE89A2DDA8D2552CC4;
// System.Predicate`1<Naninovel.IUnlockableManager>
struct Predicate_1_t7CF3BE326604DBF3D431BACDE9F90AADDBEA93E7;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Collections.Generic.Queue`1<System.Func`1<UniRx.Async.UniTask>>
struct Queue_1_t01697EF50D3E6641B0320AD87F27A70D2179A942;
// System.Collections.Generic.Queue`1<Naninovel.GameStateMap>
struct Queue_1_t0BA908838ED437696D7598D5D3D2BFA22F9D692A;
// Naninovel.Resource`1<System.Object>
struct Resource_1_tED29F5EBF58E03A5C8BC0445C686199869864F6C;
// Naninovel.Resource`1<UnityEngine.Video.VideoClip>
struct Resource_1_t8A5083E4E0F7B7D7F3E64338DF3B0C6103550999;
// Naninovel.SerializableMap`2<System.Object,System.Boolean>
struct SerializableMap_2_t2505643AD92E5B5B63A4FF559C9011C0CC0B21CA;
// Naninovel.SerializableMap`2<System.String,System.Boolean>
struct SerializableMap_2_t0EBD18F6762E27FE6CD01891D0B646ADE3E2C0D2;
// System.Collections.Generic.Stack`1<Naninovel.PlaybackSpot>
struct Stack_1_tE01199F108EA6573ABF03552C2C124E8C8BFFE38;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// Naninovel.Tweener`1<Naninovel.ColorTween>
struct Tweener_1_t1D8297D2A0C9598928583CD2F719887DFDFB11FA;
// Naninovel.Tweener`1<Naninovel.FloatTween>
struct Tweener_1_t5C52F0334BD85212FC4F13C1F7A15BEB546D885C;
// Naninovel.Tweener`1<Naninovel.VectorTween>
struct Tweener_1_t5394A87159F4AE1FF99556A020913D48B6C7FF5A;
// UniRx.Async.UniTaskCompletionSource`1<UnityEngine.AudioClip>
struct UniTaskCompletionSource_1_t20B0F54E9C082571DB69CE2F99277DFA886A2037;
// UniRx.Async.UniTaskCompletionSource`1<System.Object>
struct UniTaskCompletionSource_1_t984D25C090F87D0F4F2EC31B0D74FEBADA702172;
// UniRx.Async.UniTaskCompletionSource`1<Naninovel.VideoBackground/VideoData>
struct UniTaskCompletionSource_1_t3EB0AC30AFEE29C4FC4861D3B06B75915AB8E17C;
// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Naninovel.VideoBackground/VideoData>
struct ValueCollection_t4AD0B3BB388F6F464936996013FCAE58938A5283;
// System.Action`1<Naninovel.GameStateMap>[]
struct Action_1U5BU5D_t2BC95CA7D5C0F712F9A3A90FBF6EB028C32FB786;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Naninovel.VideoBackground/VideoData>[]
struct EntryU5BU5D_t4CE5145DC2982EC24839ED13DFDCEE09FB9836F4;
// System.Threading.SparselyPopulatedArray`1<System.Threading.CancellationCallbackInfo>[]
struct SparselyPopulatedArray_1U5BU5D_t4D2064CEC206620DC5001D7C857A845833DCB52A;
// System.Boolean[]
struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Threading.CancellationToken[]
struct CancellationTokenU5BU5D_t9A731157500814DA284A6F1E2E911CB755A65A7E;
// System.Threading.CancellationTokenRegistration[]
struct CancellationTokenRegistrationU5BU5D_t864BA2E1E6485FDC593F17F7C01525F33CCE7910;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// Naninovel.RawDataRepresentation[]
struct RawDataRepresentationU5BU5D_t99A0BEA044D230E70A9FF4D546DF705822FFD95F;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71;
// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE;
// Naninovel.BackgroundMetadata
struct BackgroundMetadata_tB3D37C09DD002AA63FC7925A323AF344B964823F;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// Naninovel.Commands.BooleanParameter
struct BooleanParameter_t3E1B3AF853EB197FF3CFF5325E19F2772E0A28B4;
// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D;
// System.Threading.CancellationCallbackInfo
struct CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasGroup
struct CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// Naninovel.Commands.Command
struct Command_tFD9CA828C60C3E7CEA51152A05F64D1ED3F98E2A;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// Naninovel.CustomMetadata
struct CustomMetadata_t69F98F45EB94C8FAC5FB6150C13747D8FB907FE7;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// Naninovel.Commands.DynamicValueData
struct DynamicValueData_t33234AB9347F882D521B68562E2085CDB570FEBF;
// UnityEngine.Event
struct Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E;
// System.Exception
struct Exception_t;
// Naninovel.Folder
struct Folder_tAD08F7F2D5EA96451A3A5774EDD65340B33E754D;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// Naninovel.GameStateMap
struct GameStateMap_tA4788218B9D1B130D00F9C346FF9FD21E01ED52D;
// Naninovel.GlobalStateMap
struct GlobalStateMap_t30FDDE19DD3F6E3C8EE56F95DA28DAAFEE9DF0D5;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_tAE063F84A60E1058FCA4E3EA9F555D3462641F7D;
// UniRx.Async.IAwaiter
struct IAwaiter_tE687B1C3BB0FDD9B1C3DE0AC61F6BEFD3DBC8B9C;
// Naninovel.ICameraManager
struct ICameraManager_t8E9FE05B572058A48089E953E1B7BF7716FB86D5;
// Naninovel.ICharacterManager
struct ICharacterManager_tEA5C9A856F8FCC4BFB4FB10E58BEB0244B26E5D8;
// Naninovel.Commands.ICommandParameter
struct ICommandParameter_tDADAE49A6391C1662F03DE42F6C930210F56F414;
// Naninovel.ICustomVariableManager
struct ICustomVariableManager_tF5EF0ED96F83DEC18AD95D307EA3BDBBC64E63F9;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// Naninovel.IInputManager
struct IInputManager_tFBA741D1AC8B8F2B501336D53A85DA99BCE0AC77;
// Naninovel.IInputSampler
struct IInputSampler_t1EECEB7E9E0A255621360C496765007E0A9603A3;
// Naninovel.ILocalizationManager
struct ILocalizationManager_tF653486D23343F02F6EDE75CEB0769D1202DB625;
// Naninovel.IScriptManager
struct IScriptManager_t7F33DECE2A1C32D4E9F462B94C83C8C780A9F004;
// Naninovel.IScriptPlayer
struct IScriptPlayer_t67C9B3A80B4439FB56E13A389B48EAB16C7AE74E;
// Naninovel.IStateManager
struct IStateManager_tB1F31B7EA57D563ED2E6154B24A63BA91D1BFB53;
// Naninovel.IUIManager
struct IUIManager_tFE3984C5EC9C6FE77025EAB4F1F77E0FACBA904B;
// Naninovel.IUnlockableManager
struct IUnlockableManager_tB44083DED8551FA666CA3771FEE88D896EB8159D;
// UnityEngine.UI.InputField
struct InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA;
// System.Runtime.InteropServices.MarshalAsAttribute
struct MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// UnityEngine.MeshFilter
struct MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A;
// UnityEngine.MeshRenderer
struct MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// System.Reflection.ParameterInfo
struct ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC;
// Naninovel.PlayedScriptRegister
struct PlayedScriptRegister_t8BF1403E55C8E899223D77A9D56B52EAAA400A82;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.RenderTexture
struct RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849;
// Naninovel.Resource
struct Resource_t5E31300A22B216FCEBBC753F6F471D78393ED06C;
// Naninovel.ResourceLoaderConfiguration
struct ResourceLoaderConfiguration_t84C7C3245F1687CBB4B19A69BCF5829C25F1F0B9;
// Naninovel.ResourceProviderConfiguration
struct ResourceProviderConfiguration_t3DA026DD65330D0650E6F5B672AEEE1C222591AB;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// Naninovel.Script
struct Script_t1FE29ADC687DB274D1FB6843B02A5CCA6DA2A773;
// Naninovel.ScriptPlayer
struct ScriptPlayer_tF4D08702F59ADF598506DB5CDBF38D9AF1C71D35;
// Naninovel.ScriptPlayerConfiguration
struct ScriptPlayerConfiguration_t1380A4ED4409C0A6663311C84CC9FB91F02377B7;
// Naninovel.ScriptPlaylist
struct ScriptPlaylist_t79D89C21C60A9E92AB800CE0676208FDF5D9A57C;
// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD;
// Naninovel.SerializableLiteralStringMap
struct SerializableLiteralStringMap_tCE49897C27C4B7F59121073F6E9A04A390B9F696;
// Naninovel.SettingsStateMap
struct SettingsStateMap_t45EA936AFFA95D29669E6EDC3C5D84C05947AEE1;
// UnityEngine.Shader
struct Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// Naninovel.StateConfiguration
struct StateConfiguration_tA1BFEBE81E1006B6AF706146B3821110BF45465C;
// Naninovel.StateManager
struct StateManager_tF3B8735DA8F4E19A6A6C0D25270A8286C878D5A1;
// Naninovel.StateMap
struct StateMap_tF9F312C96797C47C86D856A3386946A8A10C6C64;
// Naninovel.StateRollbackStack
struct StateRollbackStack_tC11A46F845DB5187448E4790E845A78AB0643B23;
// System.String
struct String_t;
// System.StringComparer
struct StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6;
// Naninovel.Commands.StringParameter
struct StringParameter_t33BF466D3AD2402CEA10C41D765102E093891CA8;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// Naninovel.TextPrinterMetadata
struct TextPrinterMetadata_t8A6DF66483BD8B41A625EE654A466130F3B306E0;
// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// System.Threading.Timer
struct Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB;
// System.Threading.TimerCallback
struct TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E;
// Naninovel.TransitionalMaterial
struct TransitionalMaterial_tE26D6659F79482CC3A4F4158B8932E2C19071D46;
// Naninovel.TransitionalRenderer
struct TransitionalRenderer_t417C5BDB13977F6209462DBA455A7E2BE95B61F5;
// Naninovel.TransitionalSpriteRenderer
struct TransitionalSpriteRenderer_tFE7D599199337543C9BDFDEC0F355DCA6EAE33AF;
// Naninovel.TransitionalTextureRenderer
struct TransitionalTextureRenderer_t230F9601A1BB9348394D1BE5E3485FBC441650C9;
// System.Type
struct Type_t;
// Naninovel.UITextPrinter
struct UITextPrinter_tE773A1F37D741340101B7B853A20AA74E954D6A3;
// Naninovel.UI.UITextPrinterPanel
struct UITextPrinterPanel_t332EC95C8F0F49BC7A8420ED5F3BA2CC8D1BF60F;
// UniRx.Async.UniTaskCompletionSource
struct UniTaskCompletionSource_t350D0ADD99ECD117EC0E4A64732808CCC787CDE9;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4;
// Naninovel.Commands.Unlock
struct Unlock_tB9B22DC9885883E806C0E482F4D5FCA9AE5EBD46;
// Naninovel.UI.VariableInputPanel
struct VariableInputPanel_t8E4D3D3105400B75F154916F7E3723C22389D55E;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// Naninovel.VideoBackground
struct VideoBackground_tC31D69C74D104E5F414AAE56250D1AAD449B7F47;
// UnityEngine.Video.VideoClip
struct VideoClip_tA8C2507553BEE394C46B7A876D6F56DD09F6C90F;
// UnityEngine.Video.VideoPlayer
struct VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Naninovel.Commands.Wait
struct Wait_t6D6FC838510D95749A0C737B03665BACEB27DB74;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40;
// Naninovel.WavToAudioClipConverter
struct WavToAudioClipConverter_t924144CE4EC088BDC7369CD9193A676BD1B41AF9;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C;
// UnityEngine.UI.InputField/OnChangeEvent
struct OnChangeEvent_t2E59014A56EA94168140F0585834954B40D716F7;
// UnityEngine.UI.InputField/OnValidateInput
struct OnValidateInput_t721D2C2A7710D113E4909B36D9893CC6B1C69B9F;
// UnityEngine.UI.InputField/SubmitEvent
struct SubmitEvent_t3FD30F627DF2ADEC87C0BE69EE632AAB99F3B8A9;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// Naninovel.ScriptPlayer/<>c__DisplayClass123_0
struct U3CU3Ec__DisplayClass123_0_tCBD47300FFAF1841C46E498D241EBD6528590772;
// Naninovel.StateManager/<>c__DisplayClass69_0
struct U3CU3Ec__DisplayClass69_0_t7494ACB5178966BE314D67BD10A4A4DE4C2CA5FD;
// Naninovel.StateManager/<>c__DisplayClass69_1
struct U3CU3Ec__DisplayClass69_1_tFFADCFEF5824A513F6E1827C950CCC7516B5A64D;
// Naninovel.UnlockableManager/<>c
struct U3CU3Ec_t872D8589FF75637984769283BC59811DBE3C83F4;
// Naninovel.UnlockableManager/GlobalState
struct GlobalState_tBFC4E452F43253379951C3663D07CD4B83C852D7;
// Naninovel.UnlockableManager/UnlockablesMap
struct UnlockablesMap_t798A63740156B2CCD22053D422973750060F1C43;
// Naninovel.UnlockableTrigger/UnlockedStateChangedEvent
struct UnlockedStateChangedEvent_t4E17475CD93BCCB201C01C0DE65BF9FB7F4AF1DA;
// Naninovel.UI.VariableInputPanel/GameState
struct GameState_tE9D59EA400F61A3BF53ED8B04F14446938E65CD8;
// Naninovel.VideoBackground/VideoData
struct VideoData_t995725B9BB3E0B9FADDA15CD9D34810784D73AD2;
// UnityEngine.Video.VideoPlayer/ErrorEventHandler
struct ErrorEventHandler_tD47781EBB7CF0CC4C111496024BD59B1D1A6A1F2;
// UnityEngine.Video.VideoPlayer/EventHandler
struct EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD;
// UnityEngine.Video.VideoPlayer/FrameReadyEventHandler
struct FrameReadyEventHandler_t9529BD5A34E9C8BE7D8A39D46A6C4ABC673374EC;
// UnityEngine.Video.VideoPlayer/TimeEventHandler
struct TimeEventHandler_t7CA131EB85E0FFCBE8660E030698BD83D3994DD8;
// Naninovel.VirtualResourceProvider/<>c
struct U3CU3Ec_tAA8106464A5C77323F9EC34B70E387C945F92BD0;
// Naninovel.WavToAudioClipConverter/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t30A7A5DA80629F9EF81E32295173003C5F1559FC;
// Naninovel.ExpressionEvaluator/Functions/DocAttribute
struct DocAttribute_t592DE083364B243D5AA762A700C8B1C75B6E7C3C;
// Naninovel.RuntimeInitializer/ServiceInitData/<>c
struct U3CU3Ec_tE32986ABA5018840123DFE9F20D81E2BD6D0E2C8;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CancellationTokenU5BU5D_t9A731157500814DA284A6F1E2E911CB755A65A7E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Engine_t7C3301CD5B8D8E1B009CFE5D95E5E0CD4CF3962F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Folder_tAD08F7F2D5EA96451A3A5774EDD65340B33E754D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_tB9DF8D3D9F8D8DE3959D9A3C4942EA354A2D14A8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tC98365FCD009A19906148DAE6D31E499FA04C5FF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICameraManager_t8E9FE05B572058A48089E953E1B7BF7716FB86D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t59A95566E6FBF6B195B841B400D0A6B7264A738B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t3445FF707A7D74618AD07E0096C2546E98EE61CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IInputSampler_t1EECEB7E9E0A255621360C496765007E0A9603A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISaveSlotManager_1_tB6ADEA4DD8F97AB3DC3B66F1EC0377CBA65AD7F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IScriptPlayer_t67C9B3A80B4439FB56E13A389B48EAB16C7AE74E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IStateManager_tB1F31B7EA57D563ED2E6154B24A63BA91D1BFB53_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUnlockableManager_tB44083DED8551FA666CA3771FEE88D896EB8159D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_tBB645330290CE4865319EB67E4201373C3FDDE20_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Resource_1_t8A5083E4E0F7B7D7F3E64338DF3B0C6103550999_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass4_0_t30A7A5DA80629F9EF81E32295173003C5F1559FC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass69_1_tFFADCFEF5824A513F6E1827C950CCC7516B5A64D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t49A79975B120E933F36505C9E29BE6ABF615EECC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t872D8589FF75637984769283BC59811DBE3C83F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tAA8106464A5C77323F9EC34B70E387C945F92BD0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tE32986ABA5018840123DFE9F20D81E2BD6D0E2C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UniTask_t41263A639210D10E03708EE0B4B03A964D7EEE3C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnlockablesMap_t798A63740156B2CCD22053D422973750060F1C43_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VideoBackground_tC31D69C74D104E5F414AAE56250D1AAD449B7F47_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VideoData_t995725B9BB3E0B9FADDA15CD9D34810784D73AD2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Wait_t6D6FC838510D95749A0C737B03665BACEB27DB74_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1B8590E2F95A4B0631E98EAF5F61AFD63A1C031E;
IL2CPP_EXTERN_C String_t* _stringLiteral57E8E2DF613E6BC7E929EABB724706FB92841AA3;
IL2CPP_EXTERN_C String_t* _stringLiteral8C6C624DBD27A05C851819F20AB022F76119C67D;
IL2CPP_EXTERN_C String_t* _stringLiteral90D48895635CEC6550EC8518AA5D23413800F682;
IL2CPP_EXTERN_C String_t* _stringLiteralD9AE28581731D112BC0C44CAAF0B7FF1F7F3E9CE;
IL2CPP_EXTERN_C String_t* _stringLiteralE280D065A824A791F8305234D3E093FC9A5A90C7;
IL2CPP_EXTERN_C String_t* _stringLiteralE8927E03327116C98C4B88036C9DE18E632B201F;
IL2CPP_EXTERN_C String_t* _stringLiteralEBF4A69D7AABAB9181EADEED088FA4957F142B3E;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m7F8CED30AC2A215F6DAD6B771160C27BD4943256_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m2A1B34C27CAE6ED7FD924E5F59C0A1ACBBF22C38_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_t8473B6ABE125918A05A5157E70D00B9F0DE43CCD_TisU3CGetOrLoadVideoDataAsyncU3Ed__30_tDF4395E0B62F17B7558DC26A111F9659F3932FA6_m1448B27CBD80B26F3A45F1ED57DFE92A46819A90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_t9F63A7154247DFB58C781A45AF44C5B8E8FE3EE2_TisU3CConvertAsyncU3Ed__4_tA998E40BCEB98D595B4B64AF5448BA9429993BA3_mE9E7304C4807650E8E20D9811C08EBC80D8E4318_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_tD9F19E0615823FE62189D1CB3B5026C8A71A356A_TisU3CConvertAsyncU3Ed__6_tBBEA6021908F80F2BF921901F92D0D931ED03586_m6C4F52B1073E7B3112FF3B58DFA0AC1637EE1B38_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetException_m1A72D51105A7DFD4210C32201341E9B2B74E09D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetException_m387C9F2DAA3C4AB1ACC58EDB59508FD752AA032E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetException_m6328D8C00DCE433F59B0E590D53DC47B3C326C47_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetResult_m3597D4A1F1F083F29D176D4AE7DD785E4D117530_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetResult_m8D2DCDC38E5201D7EBE1B1EC8B8EC8FA593D51EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetResult_mB10E8FA1F24E550A04D2804063FC4FC3F15C12CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetStateMachine_m2866481F898DFD254796CE9AFF234B5F7E993699_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetStateMachine_m66A28073FE6171484AA3615E5FA54A6FE4D65189_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetStateMachine_mCDC7988DB8C28883CBBADA9A54F310D878B28DA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t2A04123A9B29D02DBE393CFF44AD80850561C5C0_TisU3CExecuteAsyncU3Ed__1_t9E0B22C867E8CFF13B5369FD265382B0EB2122C2_m8F2C5684E18CC4048C9A5A9F0C6F254428BF63BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t2A04123A9B29D02DBE393CFF44AD80850561C5C0_TisU3CU3CSaveGameAsyncU3Eg__DoSaveAfterSyncU7C0U3Ed_tA5BCD95B422F51D7E49E973DC5FD62AE652C238C_m8EC5B18A38EA6C7F306112FE8BB9FA31D61F4FF6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t2EC4E48D6D8C5EC90776FBA7B42075F059E21967_TisU3CChangeAppearanceAsyncU3Ed__22_tCB35366F250EDB2DEE0257694727C11654A86404_mC082037C8F66077D258B0E964CE5E906ADE5A2B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t2EC4E48D6D8C5EC90776FBA7B42075F059E21967_TisU3CHoldResourcesAsyncU3Ed__24_t69B7F8032AABA06C6ACEBB741DE6BB2F6A3F0359_mAAC7B27E739DD3F444C8C16454AC7977D10CA709_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822_TisU3CChangeAppearanceAsyncU3Ed__22_tCB35366F250EDB2DEE0257694727C11654A86404_m30770BFA9DCC0171DA0E040188C2B23A70D0E47D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822_TisU3CChangeVisibilityAsyncU3Ed__23_t360BFA64DB92AE4FBA3007EE6CDFF301F0D0FE0F_mF51EDE0488A5AE0AF5A4E44E055B7642504E4E03_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822_TisU3CDeserializeStateU3Ed__27_tABF41614DF3DFF2D9AAA5826BE7678FFBFE9C811_m3FEA121F03998F080E9E41D7681FE731B7A95459_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822_TisU3CExecuteAsyncU3Ed__0_t67878E6A3EBDB121016F7589B616F5D6AE4AD25A_mC6BFC7F52648326FF291589C8A95BA4E4998AF30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822_TisU3CInitializeAsyncU3Ed__21_t705DB795DF855A7C45BFFDF1527CB27C7A01CE12_m3D5595F7E80A704D725DDF32AF0D8AABE7DD86BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822_TisU3CInitializeAsyncU3Ed__24_tAB011A1A6E65376DE8C0FAAFBF1E2BC2E0974DCB_mD6FBC2CBADFB4262B462DC69B408CA9B1EDD25E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822_TisU3CRevealTextAsyncU3Ed__37_t22D933F07DE5B442D1EC37E2416AB435E5C0D1BE_m4271075E815595BDE8BAC0C2D7E50A820E1E6D75_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822_TisU3CU3CSaveGameAsyncU3Eg__DoSaveAfterSyncU7C0U3Ed_tA5BCD95B422F51D7E49E973DC5FD62AE652C238C_mF125A7865B282154F64D3FFF9A5769B60BCD8525_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tC53C155C42BF6DB6BBD8673DE4B04D42737173C6_TisU3CChangeAppearanceAsyncU3Ed__22_tCB35366F250EDB2DEE0257694727C11654A86404_m10E9C25C2D2B3DE78A32F78E348CAF3175B196DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tC53C155C42BF6DB6BBD8673DE4B04D42737173C6_TisU3CExecuteAsyncU3Ed__6_tD382787452B3A05D65DA90FC93BEB427B31222B4_m19E8F79C50F3F47DB637770D596BEBB755B84487_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822_TisU3CU3CExecutePlayedCommandAsyncU3Eg__ExecuteCommandConcurrentlyU7C0U3Ed_t402700803755E3D73E3B0DA464E7E0A389643CD2_mBABCC6837C534A1D934AB8952B40A9C1541C7E36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_GetResult_m43A2DBD3CAA0B22FDA0FDF1AA73DFA740188D36B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_GetResult_m515EDC8C4774186F24AAF09E72A9F9D113D90E05_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_GetResult_m76F1012F0193703F8042426640A8C9D1A42C324F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_GetResult_m79E7FF75A14DA696B555E10CAE4C3FD7BB336B27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_GetResult_mB36B4F5D534DDA815C01A7BE87F4B29006458C00_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_get_IsCompleted_m0C5A674B5B3230390E66084EA8F2E253A7B71A62_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_get_IsCompleted_m2AD507538A44DA52F98CC6B97C5F2B4374EAEB76_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_get_IsCompleted_m404E16E7F0F7C2930D48CE04000579DCD369CA52_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_get_IsCompleted_m6B7450FE767682CF047C6FCB442BF39CEEB504B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_get_IsCompleted_mCBCDC5F183736F78C9405A29DC0D1CA5D7F70B0A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m59D87BB44FAFD3C7C9DE31BE1B08994382E11D8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_mAC879765AB7EDF9E072F95ED3C8BC40FA794B766_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mAFCA1A3083CEDF7F71BAB747557FBC46159F20EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mF9BB9CBD018363A66292571606FE6D1ABA58895A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Engine_CreateObject_TisVideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86_m056B67E75605786E551EBC5A444F3913D1205D78_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Engine_GetService_TisIStateManager_tB1F31B7EA57D563ED2E6154B24A63BA91D1BFB53_m9AE0661C0443939E3B12DDF2785F454EFF38B4D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Engine_GetService_TisIUnlockableManager_tB44083DED8551FA666CA3771FEE88D896EB8159D_mA470B41CF2C46AC60FC16E21F7C00DEF1953512E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_FirstOrDefault_TisGameStateMap_tA4788218B9D1B130D00F9C346FF9FD21E01ED52D_m904BF0AC4CC35253914465B01C79BEB90B3F1FC3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m3CA0ECC6167320AC4CFEDE2D74C5987D6FD4D33E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mB601D7C83EE42426390069F44706A90BF436A5CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mFDCBD2AADA33545968833C390A53F22CB197FCED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1__ctor_m705E8DDC1A6A217302FF15163E130B76094365A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m057C2AF974DB7F0A19178AFF8DC08B6FD65FBD4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisTransitionalSpriteRenderer_tFE7D599199337543C9BDFDEC0F355DCA6EAE33AF_m59AE021946509813109219F1A0935D0EFE9EF9E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisTransitionalTextureRenderer_t230F9601A1BB9348394D1BE5E3485FBC441650C9_m0C88C261CEE4BFA988B88C34259FD39A7F4D2CFE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m2A4BA00E1B96F30CEEB1DC3778BBFB14E4F03535_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mB30B09059F431D44DC3AB26FEA5731E7C2515BE2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mAC9081ECDD5DBA19DFE07653835578498B64ED1B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mC8F3B6053EC08645E87B9CFF69A1578B1328AE39_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m2E2A250A83CC82DC2173B5626363BEE76FDA8BD7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m1836BF6751EF7F99771A8E7A4855E8AF5F8DA9FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mCD30AA96C09E69BAC64E16A8B627B7535158A477_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Predicate_1__ctor_m61E36F14143FA43EFFCC61FA4DEC46A3C0EA92EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resource_1_op_Implicit_m85FFDD6CB563EE688362E3C87045C3B55E317EC6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SerializableMap_2__ctor_m56AD559E46E06881F5A00BE80C064A8CCF8CD908_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SerializableMap_2__ctor_mEA5BE717C404CC3D57258757949B272C790EE8D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StateManager_SaveAllServicesToState_TisIStatefulService_1_t3AAEC31DD1B6FD861EEBAAD78C0F5FC0050D23A5_TisGameStateMap_tA4788218B9D1B130D00F9C346FF9FD21E01ED52D_mA5D94397DEA305415819A7E32ED0917DD74A94BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StateMap_GetState_TisGameState_tE9D59EA400F61A3BF53ED8B04F14446938E65CD8_m6B6E59B83F15F46212F04320F88161CACE97F21C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetOrLoadVideoDataAsyncU3Ed__30_MoveNext_m7E941683BDD788C7F8CD2B291A42D66AA54F7BA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CSaveGameAsyncU3Eb__69_1_m475CF44ACBB32A07DAB10A30B40FFD9F70C53DF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_0_U3CConvertAsyncU3Eb__0_mB4488192A79BC61D93580151C855089AC8EF4F3C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass69_1_U3CSaveGameAsyncU3Eg__SelectSerializedSnapshotsU7C2_mF5B4752FCC06B8E08C08D54603B4068116843555_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTask_1_GetAwaiter_m076F414CB98FC7AA200770226C9DD195FC526D1F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTask_1_GetAwaiter_m63808C842E705B02AEC3088A7A3CE08D2DA74264_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTask_1_GetAwaiter_m9924469BDE71E4B2A85924A17439D08A8E3A28CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTask_1_GetAwaiter_mA00D4B82A51478FB95987DD7495393101D8A100F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTask_1_GetAwaiter_mD17FB23F1BF828B36BD77C8070A7ECBDA0FA2791_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTask_Run_TisSingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_m0F9B2725913918B9A55210266A7779106E745A21_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_m55B3D17A5D50746ED6618952C2C745FB5A73BAA7_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct CancellationTokenU5BU5D_t9A731157500814DA284A6F1E2E911CB755A65A7E;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.Dictionary`2<System.String,Naninovel.VideoBackground/VideoData>
struct  Dictionary_2_tB0D6F5B541B0F32F9BD4447204B50E4D0A15213E  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t4CE5145DC2982EC24839ED13DFDCEE09FB9836F4* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t03456650F69C633388FF11B1A5DF02585AF6151A * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t4AD0B3BB388F6F464936996013FCAE58938A5283 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tB0D6F5B541B0F32F9BD4447204B50E4D0A15213E, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tB0D6F5B541B0F32F9BD4447204B50E4D0A15213E, ___entries_1)); }
	inline EntryU5BU5D_t4CE5145DC2982EC24839ED13DFDCEE09FB9836F4* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t4CE5145DC2982EC24839ED13DFDCEE09FB9836F4** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t4CE5145DC2982EC24839ED13DFDCEE09FB9836F4* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tB0D6F5B541B0F32F9BD4447204B50E4D0A15213E, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tB0D6F5B541B0F32F9BD4447204B50E4D0A15213E, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tB0D6F5B541B0F32F9BD4447204B50E4D0A15213E, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tB0D6F5B541B0F32F9BD4447204B50E4D0A15213E, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tB0D6F5B541B0F32F9BD4447204B50E4D0A15213E, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tB0D6F5B541B0F32F9BD4447204B50E4D0A15213E, ___keys_7)); }
	inline KeyCollection_t03456650F69C633388FF11B1A5DF02585AF6151A * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t03456650F69C633388FF11B1A5DF02585AF6151A ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t03456650F69C633388FF11B1A5DF02585AF6151A * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tB0D6F5B541B0F32F9BD4447204B50E4D0A15213E, ___values_8)); }
	inline ValueCollection_t4AD0B3BB388F6F464936996013FCAE58938A5283 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t4AD0B3BB388F6F464936996013FCAE58938A5283 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t4AD0B3BB388F6F464936996013FCAE58938A5283 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tB0D6F5B541B0F32F9BD4447204B50E4D0A15213E, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Action`1<Naninovel.GameStateMap>>
struct  List_1_t5D3DE8A6E866EFBBE267E1025ED889B2EB78D393  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Action_1U5BU5D_t2BC95CA7D5C0F712F9A3A90FBF6EB028C32FB786* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t5D3DE8A6E866EFBBE267E1025ED889B2EB78D393, ____items_1)); }
	inline Action_1U5BU5D_t2BC95CA7D5C0F712F9A3A90FBF6EB028C32FB786* get__items_1() const { return ____items_1; }
	inline Action_1U5BU5D_t2BC95CA7D5C0F712F9A3A90FBF6EB028C32FB786** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Action_1U5BU5D_t2BC95CA7D5C0F712F9A3A90FBF6EB028C32FB786* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t5D3DE8A6E866EFBBE267E1025ED889B2EB78D393, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t5D3DE8A6E866EFBBE267E1025ED889B2EB78D393, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t5D3DE8A6E866EFBBE267E1025ED889B2EB78D393, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t5D3DE8A6E866EFBBE267E1025ED889B2EB78D393_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Action_1U5BU5D_t2BC95CA7D5C0F712F9A3A90FBF6EB028C32FB786* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t5D3DE8A6E866EFBBE267E1025ED889B2EB78D393_StaticFields, ____emptyArray_5)); }
	inline Action_1U5BU5D_t2BC95CA7D5C0F712F9A3A90FBF6EB028C32FB786* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Action_1U5BU5D_t2BC95CA7D5C0F712F9A3A90FBF6EB028C32FB786** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Action_1U5BU5D_t2BC95CA7D5C0F712F9A3A90FBF6EB028C32FB786* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


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


// Naninovel.Nullable`1<System.String>
struct  Nullable_1_tC6FC502E280A7F1828379312132AC25DAED230A5  : public RuntimeObject
{
public:
	// TValue Naninovel.Nullable`1::value
	String_t* ___value_0;
	// System.Boolean Naninovel.Nullable`1::hasValue
	bool ___hasValue_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tC6FC502E280A7F1828379312132AC25DAED230A5, ___value_0)); }
	inline String_t* get_value_0() const { return ___value_0; }
	inline String_t** get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(String_t* value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_0), (void*)value);
	}

	inline static int32_t get_offset_of_hasValue_1() { return static_cast<int32_t>(offsetof(Nullable_1_tC6FC502E280A7F1828379312132AC25DAED230A5, ___hasValue_1)); }
	inline bool get_hasValue_1() const { return ___hasValue_1; }
	inline bool* get_address_of_hasValue_1() { return &___hasValue_1; }
	inline void set_hasValue_1(bool value)
	{
		___hasValue_1 = value;
	}
};


// Naninovel.ResourceLoader`1<UnityEngine.Video.VideoClip>
struct  ResourceLoader_1_tC660CC0CBBB8E20A3D2DFA5546401B87DE51D876  : public RuntimeObject
{
public:
	// System.Action`1<System.String> Naninovel.ResourceLoader`1::OnResourceLoaded
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___OnResourceLoaded_0;
	// System.Action`1<System.String> Naninovel.ResourceLoader`1::OnResourceUnloaded
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___OnResourceUnloaded_1;
	// System.Collections.Generic.List`1<Naninovel.ProvisionSource> Naninovel.ResourceLoader`1::ProvisionSources
	List_1_t7C667BECE02F02775CAE17EC4259E3D14AEF9175 * ___ProvisionSources_2;
	// System.Collections.Generic.List`1<Naninovel.ResourceLoader`1/LoadedResource<TResource>> Naninovel.ResourceLoader`1::LoadedResources
	List_1_tEF2928FC7D64E528B8D749727115EF52BB35F1E1 * ___LoadedResources_3;

public:
	inline static int32_t get_offset_of_OnResourceLoaded_0() { return static_cast<int32_t>(offsetof(ResourceLoader_1_tC660CC0CBBB8E20A3D2DFA5546401B87DE51D876, ___OnResourceLoaded_0)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_OnResourceLoaded_0() const { return ___OnResourceLoaded_0; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_OnResourceLoaded_0() { return &___OnResourceLoaded_0; }
	inline void set_OnResourceLoaded_0(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___OnResourceLoaded_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnResourceLoaded_0), (void*)value);
	}

	inline static int32_t get_offset_of_OnResourceUnloaded_1() { return static_cast<int32_t>(offsetof(ResourceLoader_1_tC660CC0CBBB8E20A3D2DFA5546401B87DE51D876, ___OnResourceUnloaded_1)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_OnResourceUnloaded_1() const { return ___OnResourceUnloaded_1; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_OnResourceUnloaded_1() { return &___OnResourceUnloaded_1; }
	inline void set_OnResourceUnloaded_1(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___OnResourceUnloaded_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnResourceUnloaded_1), (void*)value);
	}

	inline static int32_t get_offset_of_ProvisionSources_2() { return static_cast<int32_t>(offsetof(ResourceLoader_1_tC660CC0CBBB8E20A3D2DFA5546401B87DE51D876, ___ProvisionSources_2)); }
	inline List_1_t7C667BECE02F02775CAE17EC4259E3D14AEF9175 * get_ProvisionSources_2() const { return ___ProvisionSources_2; }
	inline List_1_t7C667BECE02F02775CAE17EC4259E3D14AEF9175 ** get_address_of_ProvisionSources_2() { return &___ProvisionSources_2; }
	inline void set_ProvisionSources_2(List_1_t7C667BECE02F02775CAE17EC4259E3D14AEF9175 * value)
	{
		___ProvisionSources_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ProvisionSources_2), (void*)value);
	}

	inline static int32_t get_offset_of_LoadedResources_3() { return static_cast<int32_t>(offsetof(ResourceLoader_1_tC660CC0CBBB8E20A3D2DFA5546401B87DE51D876, ___LoadedResources_3)); }
	inline List_1_tEF2928FC7D64E528B8D749727115EF52BB35F1E1 * get_LoadedResources_3() const { return ___LoadedResources_3; }
	inline List_1_tEF2928FC7D64E528B8D749727115EF52BB35F1E1 ** get_address_of_LoadedResources_3() { return &___LoadedResources_3; }
	inline void set_LoadedResources_3(List_1_tEF2928FC7D64E528B8D749727115EF52BB35F1E1 * value)
	{
		___LoadedResources_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LoadedResources_3), (void*)value);
	}
};


// Naninovel.ActorMetadata
struct  ActorMetadata_tC302DC4B2D08DACA72B3409CC05C12B5AC23A7B3  : public RuntimeObject
{
public:
	// System.String Naninovel.ActorMetadata::Implementation
	String_t* ___Implementation_0;
	// Naninovel.ResourceLoaderConfiguration Naninovel.ActorMetadata::Loader
	ResourceLoaderConfiguration_t84C7C3245F1687CBB4B19A69BCF5829C25F1F0B9 * ___Loader_1;
	// System.String Naninovel.ActorMetadata::guid
	String_t* ___guid_2;
	// Naninovel.CustomMetadata Naninovel.ActorMetadata::customData
	CustomMetadata_t69F98F45EB94C8FAC5FB6150C13747D8FB907FE7 * ___customData_3;

public:
	inline static int32_t get_offset_of_Implementation_0() { return static_cast<int32_t>(offsetof(ActorMetadata_tC302DC4B2D08DACA72B3409CC05C12B5AC23A7B3, ___Implementation_0)); }
	inline String_t* get_Implementation_0() const { return ___Implementation_0; }
	inline String_t** get_address_of_Implementation_0() { return &___Implementation_0; }
	inline void set_Implementation_0(String_t* value)
	{
		___Implementation_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Implementation_0), (void*)value);
	}

	inline static int32_t get_offset_of_Loader_1() { return static_cast<int32_t>(offsetof(ActorMetadata_tC302DC4B2D08DACA72B3409CC05C12B5AC23A7B3, ___Loader_1)); }
	inline ResourceLoaderConfiguration_t84C7C3245F1687CBB4B19A69BCF5829C25F1F0B9 * get_Loader_1() const { return ___Loader_1; }
	inline ResourceLoaderConfiguration_t84C7C3245F1687CBB4B19A69BCF5829C25F1F0B9 ** get_address_of_Loader_1() { return &___Loader_1; }
	inline void set_Loader_1(ResourceLoaderConfiguration_t84C7C3245F1687CBB4B19A69BCF5829C25F1F0B9 * value)
	{
		___Loader_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Loader_1), (void*)value);
	}

	inline static int32_t get_offset_of_guid_2() { return static_cast<int32_t>(offsetof(ActorMetadata_tC302DC4B2D08DACA72B3409CC05C12B5AC23A7B3, ___guid_2)); }
	inline String_t* get_guid_2() const { return ___guid_2; }
	inline String_t** get_address_of_guid_2() { return &___guid_2; }
	inline void set_guid_2(String_t* value)
	{
		___guid_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___guid_2), (void*)value);
	}

	inline static int32_t get_offset_of_customData_3() { return static_cast<int32_t>(offsetof(ActorMetadata_tC302DC4B2D08DACA72B3409CC05C12B5AC23A7B3, ___customData_3)); }
	inline CustomMetadata_t69F98F45EB94C8FAC5FB6150C13747D8FB907FE7 * get_customData_3() const { return ___customData_3; }
	inline CustomMetadata_t69F98F45EB94C8FAC5FB6150C13747D8FB907FE7 ** get_address_of_customData_3() { return &___customData_3; }
	inline void set_customData_3(CustomMetadata_t69F98F45EB94C8FAC5FB6150C13747D8FB907FE7 * value)
	{
		___customData_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___customData_3), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Attribute
struct  Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
};


// Naninovel.Folder
struct  Folder_tAD08F7F2D5EA96451A3A5774EDD65340B33E754D  : public RuntimeObject
{
public:
	// System.String Naninovel.Folder::path
	String_t* ___path_0;

public:
	inline static int32_t get_offset_of_path_0() { return static_cast<int32_t>(offsetof(Folder_tAD08F7F2D5EA96451A3A5774EDD65340B33E754D, ___path_0)); }
	inline String_t* get_path_0() const { return ___path_0; }
	inline String_t** get_address_of_path_0() { return &___path_0; }
	inline void set_path_0(String_t* value)
	{
		___path_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___path_0), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// Naninovel.Resource
struct  Resource_t5E31300A22B216FCEBBC753F6F471D78393ED06C  : public RuntimeObject
{
public:
	// System.String Naninovel.Resource::Path
	String_t* ___Path_1;
	// UnityEngine.Object Naninovel.Resource::Object
	Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___Object_2;

public:
	inline static int32_t get_offset_of_Path_1() { return static_cast<int32_t>(offsetof(Resource_t5E31300A22B216FCEBBC753F6F471D78393ED06C, ___Path_1)); }
	inline String_t* get_Path_1() const { return ___Path_1; }
	inline String_t** get_address_of_Path_1() { return &___Path_1; }
	inline void set_Path_1(String_t* value)
	{
		___Path_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Path_1), (void*)value);
	}

	inline static int32_t get_offset_of_Object_2() { return static_cast<int32_t>(offsetof(Resource_t5E31300A22B216FCEBBC753F6F471D78393ED06C, ___Object_2)); }
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * get_Object_2() const { return ___Object_2; }
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A ** get_address_of_Object_2() { return &___Object_2; }
	inline void set_Object_2(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * value)
	{
		___Object_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Object_2), (void*)value);
	}
};

struct Resource_t5E31300A22B216FCEBBC753F6F471D78393ED06C_StaticFields
{
public:
	// Naninovel.Resource Naninovel.Resource::Invalid
	Resource_t5E31300A22B216FCEBBC753F6F471D78393ED06C * ___Invalid_0;

public:
	inline static int32_t get_offset_of_Invalid_0() { return static_cast<int32_t>(offsetof(Resource_t5E31300A22B216FCEBBC753F6F471D78393ED06C_StaticFields, ___Invalid_0)); }
	inline Resource_t5E31300A22B216FCEBBC753F6F471D78393ED06C * get_Invalid_0() const { return ___Invalid_0; }
	inline Resource_t5E31300A22B216FCEBBC753F6F471D78393ED06C ** get_address_of_Invalid_0() { return &___Invalid_0; }
	inline void set_Invalid_0(Resource_t5E31300A22B216FCEBBC753F6F471D78393ED06C * value)
	{
		___Invalid_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Invalid_0), (void*)value);
	}
};


// Naninovel.SerializableMap
struct  SerializableMap_t7C4B781B891BDA713A3C3452553E68D69253BD9D  : public RuntimeObject
{
public:

public:
};


// Naninovel.StateManager
struct  StateManager_tF3B8735DA8F4E19A6A6C0D25270A8286C878D5A1  : public RuntimeObject
{
public:
	// System.Action`1<Naninovel.GameSaveLoadArgs> Naninovel.StateManager::OnGameLoadStarted
	Action_1_t4C49E92359A54C81647441028F7C4722D8DB4264 * ___OnGameLoadStarted_0;
	// System.Action`1<Naninovel.GameSaveLoadArgs> Naninovel.StateManager::OnGameLoadFinished
	Action_1_t4C49E92359A54C81647441028F7C4722D8DB4264 * ___OnGameLoadFinished_1;
	// System.Action`1<Naninovel.GameSaveLoadArgs> Naninovel.StateManager::OnGameSaveStarted
	Action_1_t4C49E92359A54C81647441028F7C4722D8DB4264 * ___OnGameSaveStarted_2;
	// System.Action`1<Naninovel.GameSaveLoadArgs> Naninovel.StateManager::OnGameSaveFinished
	Action_1_t4C49E92359A54C81647441028F7C4722D8DB4264 * ___OnGameSaveFinished_3;
	// System.Action Naninovel.StateManager::OnResetStarted
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnResetStarted_4;
	// System.Action Naninovel.StateManager::OnResetFinished
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnResetFinished_5;
	// System.Action Naninovel.StateManager::OnRollbackStarted
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnRollbackStarted_6;
	// System.Action Naninovel.StateManager::OnRollbackFinished
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnRollbackFinished_7;
	// Naninovel.StateConfiguration Naninovel.StateManager::<Configuration>k__BackingField
	StateConfiguration_tA1BFEBE81E1006B6AF706146B3821110BF45465C * ___U3CConfigurationU3Ek__BackingField_8;
	// Naninovel.GlobalStateMap Naninovel.StateManager::<GlobalState>k__BackingField
	GlobalStateMap_t30FDDE19DD3F6E3C8EE56F95DA28DAAFEE9DF0D5 * ___U3CGlobalStateU3Ek__BackingField_9;
	// Naninovel.SettingsStateMap Naninovel.StateManager::<SettingsState>k__BackingField
	SettingsStateMap_t45EA936AFFA95D29669E6EDC3C5D84C05947AEE1 * ___U3CSettingsStateU3Ek__BackingField_10;
	// Naninovel.ISaveSlotManager`1<Naninovel.GlobalStateMap> Naninovel.StateManager::<GlobalStateSlotManager>k__BackingField
	RuntimeObject* ___U3CGlobalStateSlotManagerU3Ek__BackingField_11;
	// Naninovel.ISaveSlotManager`1<Naninovel.GameStateMap> Naninovel.StateManager::<GameStateSlotManager>k__BackingField
	RuntimeObject* ___U3CGameStateSlotManagerU3Ek__BackingField_12;
	// Naninovel.ISaveSlotManager`1<Naninovel.SettingsStateMap> Naninovel.StateManager::<SettingsSlotManager>k__BackingField
	RuntimeObject* ___U3CSettingsSlotManagerU3Ek__BackingField_13;
	// Naninovel.StateRollbackStack Naninovel.StateManager::<RollbackStack>k__BackingField
	StateRollbackStack_tC11A46F845DB5187448E4790E845A78AB0643B23 * ___U3CRollbackStackU3Ek__BackingField_14;
	// System.Collections.Generic.Queue`1<Naninovel.GameStateMap> Naninovel.StateManager::rollbackTaskQueue
	Queue_1_t0BA908838ED437696D7598D5D3D2BFA22F9D692A * ___rollbackTaskQueue_15;
	// System.Collections.Generic.List`1<System.Action`1<Naninovel.GameStateMap>> Naninovel.StateManager::onGameSerializeTasks
	List_1_t5D3DE8A6E866EFBBE267E1025ED889B2EB78D393 * ___onGameSerializeTasks_16;
	// System.Collections.Generic.List`1<System.Func`2<Naninovel.GameStateMap,UniRx.Async.UniTask>> Naninovel.StateManager::onGameDeserializeTasks
	List_1_t7E82013420E9BEDD40CDA2928EE1F40D52F58EF6 * ___onGameDeserializeTasks_17;
	// Naninovel.IInputSampler Naninovel.StateManager::rollbackInput
	RuntimeObject* ___rollbackInput_18;
	// Naninovel.IScriptPlayer Naninovel.StateManager::scriptPlayer
	RuntimeObject* ___scriptPlayer_19;
	// Naninovel.ICameraManager Naninovel.StateManager::cameraManager
	RuntimeObject* ___cameraManager_20;

public:
	inline static int32_t get_offset_of_OnGameLoadStarted_0() { return static_cast<int32_t>(offsetof(StateManager_tF3B8735DA8F4E19A6A6C0D25270A8286C878D5A1, ___OnGameLoadStarted_0)); }
	inline Action_1_t4C49E92359A54C81647441028F7C4722D8DB4264 * get_OnGameLoadStarted_0() const { return ___OnGameLoadStarted_0; }
	inline Action_1_t4C49E92359A54C81647441028F7C4722D8DB4264 ** get_address_of_OnGameLoadStarted_0() { return &___OnGameLoadStarted_0; }
	inline void set_OnGameLoadStarted_0(Action_1_t4C49E92359A54C81647441028F7C4722D8DB4264 * value)
	{
		___OnGameLoadStarted_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnGameLoadStarted_0), (void*)value);
	}

	inline static int32_t get_offset_of_OnGameLoadFinished_1() { return static_cast<int32_t>(offsetof(StateManager_tF3B8735DA8F4E19A6A6C0D25270A8286C878D5A1, ___OnGameLoadFinished_1)); }
	inline Action_1_t4C49E92359A54C81647441028F7C4722D8DB4264 * get_OnGameLoadFinished_1() const { return ___OnGameLoadFinished_1; }
	inline Action_1_t4C49E92359A54C81647441028F7C4722D8DB4264 ** get_address_of_OnGameLoadFinished_1() { return &___OnGameLoadFinished_1; }
	inline void set_OnGameLoadFinished_1(Action_1_t4C49E92359A54C81647441028F7C4722D8DB4264 * value)
	{
		___OnGameLoadFinished_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnGameLoadFinished_1), (void*)value);
	}

	inline static int32_t get_offset_of_OnGameSaveStarted_2() { return static_cast<int32_t>(offsetof(StateManager_tF3B8735DA8F4E19A6A6C0D25270A8286C878D5A1, ___OnGameSaveStarted_2)); }
	inline Action_1_t4C49E92359A54C81647441028F7C4722D8DB4264 * get_OnGameSaveStarted_2() const { return ___OnGameSaveStarted_2; }
	inline Action_1_t4C49E92359A54C81647441028F7C4722D8DB4264 ** get_address_of_OnGameSaveStarted_2() { return &___OnGameSaveStarted_2; }
	inline void set_OnGameSaveStarted_2(Action_1_t4C49E92359A54C81647441028F7C4722D8DB4264 * value)
	{
		___OnGameSaveStarted_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnGameSaveStarted_2), (void*)value);
	}

	inline static int32_t get_offset_of_OnGameSaveFinished_3() { return static_cast<int32_t>(offsetof(StateManager_tF3B8735DA8F4E19A6A6C0D25270A8286C878D5A1, ___OnGameSaveFinished_3)); }
	inline Action_1_t4C49E92359A54C81647441028F7C4722D8DB4264 * get_OnGameSaveFinished_3() const { return ___OnGameSaveFinished_3; }
	inline Action_1_t4C49E92359A54C81647441028F7C4722D8DB4264 ** get_address_of_OnGameSaveFinished_3() { return &___OnGameSaveFinished_3; }
	inline void set_OnGameSaveFinished_3(Action_1_t4C49E92359A54C81647441028F7C4722D8DB4264 * value)
	{
		___OnGameSaveFinished_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnGameSaveFinished_3), (void*)value);
	}

	inline static int32_t get_offset_of_OnResetStarted_4() { return static_cast<int32_t>(offsetof(StateManager_tF3B8735DA8F4E19A6A6C0D25270A8286C878D5A1, ___OnResetStarted_4)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnResetStarted_4() const { return ___OnResetStarted_4; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnResetStarted_4() { return &___OnResetStarted_4; }
	inline void set_OnResetStarted_4(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnResetStarted_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnResetStarted_4), (void*)value);
	}

	inline static int32_t get_offset_of_OnResetFinished_5() { return static_cast<int32_t>(offsetof(StateManager_tF3B8735DA8F4E19A6A6C0D25270A8286C878D5A1, ___OnResetFinished_5)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnResetFinished_5() const { return ___OnResetFinished_5; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnResetFinished_5() { return &___OnResetFinished_5; }
	inline void set_OnResetFinished_5(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnResetFinished_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnResetFinished_5), (void*)value);
	}

	inline static int32_t get_offset_of_OnRollbackStarted_6() { return static_cast<int32_t>(offsetof(StateManager_tF3B8735DA8F4E19A6A6C0D25270A8286C878D5A1, ___OnRollbackStarted_6)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnRollbackStarted_6() const { return ___OnRollbackStarted_6; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnRollbackStarted_6() { return &___OnRollbackStarted_6; }
	inline void set_OnRollbackStarted_6(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnRollbackStarted_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnRollbackStarted_6), (void*)value);
	}

	inline static int32_t get_offset_of_OnRollbackFinished_7() { return static_cast<int32_t>(offsetof(StateManager_tF3B8735DA8F4E19A6A6C0D25270A8286C878D5A1, ___OnRollbackFinished_7)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnRollbackFinished_7() const { return ___OnRollbackFinished_7; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnRollbackFinished_7() { return &___OnRollbackFinished_7; }
	inline void set_OnRollbackFinished_7(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnRollbackFinished_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnRollbackFinished_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CConfigurationU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(StateManager_tF3B8735DA8F4E19A6A6C0D25270A8286C878D5A1, ___U3CConfigurationU3Ek__BackingField_8)); }
	inline StateConfiguration_tA1BFEBE81E1006B6AF706146B3821110BF45465C * get_U3CConfigurationU3Ek__BackingField_8() const { return ___U3CConfigurationU3Ek__BackingField_8; }
	inline StateConfiguration_tA1BFEBE81E1006B6AF706146B3821110BF45465C ** get_address_of_U3CConfigurationU3Ek__BackingField_8() { return &___U3CConfigurationU3Ek__BackingField_8; }
	inline void set_U3CConfigurationU3Ek__BackingField_8(StateConfiguration_tA1BFEBE81E1006B6AF706146B3821110BF45465C * value)
	{
		___U3CConfigurationU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CConfigurationU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CGlobalStateU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(StateManager_tF3B8735DA8F4E19A6A6C0D25270A8286C878D5A1, ___U3CGlobalStateU3Ek__BackingField_9)); }
	inline GlobalStateMap_t30FDDE19DD3F6E3C8EE56F95DA28DAAFEE9DF0D5 * get_U3CGlobalStateU3Ek__BackingField_9() const { return ___U3CGlobalStateU3Ek__BackingField_9; }
	inline GlobalStateMap_t30FDDE19DD3F6E3C8EE56F95DA28DAAFEE9DF0D5 ** get_address_of_U3CGlobalStateU3Ek__BackingField_9() { return &___U3CGlobalStateU3Ek__BackingField_9; }
	inline void set_U3CGlobalStateU3Ek__BackingField_9(GlobalStateMap_t30FDDE19DD3F6E3C8EE56F95DA28DAAFEE9DF0D5 * value)
	{
		___U3CGlobalStateU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CGlobalStateU3Ek__BackingField_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSettingsStateU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(StateManager_tF3B8735DA8F4E19A6A6C0D25270A8286C878D5A1, ___U3CSettingsStateU3Ek__BackingField_10)); }
	inline SettingsStateMap_t45EA936AFFA95D29669E6EDC3C5D84C05947AEE1 * get_U3CSettingsStateU3Ek__BackingField_10() const { return ___U3CSettingsStateU3Ek__BackingField_10; }
	inline SettingsStateMap_t45EA936AFFA95D29669E6EDC3C5D84C05947AEE1 ** get_address_of_U3CSettingsStateU3Ek__BackingField_10() { return &___U3CSettingsStateU3Ek__BackingField_10; }
	inline void set_U3CSettingsStateU3Ek__BackingField_10(SettingsStateMap_t45EA936AFFA95D29669E6EDC3C5D84C05947AEE1 * value)
	{
		___U3CSettingsStateU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSettingsStateU3Ek__BackingField_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CGlobalStateSlotManagerU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(StateManager_tF3B8735DA8F4E19A6A6C0D25270A8286C878D5A1, ___U3CGlobalStateSlotManagerU3Ek__BackingField_11)); }
	inline RuntimeObject* get_U3CGlobalStateSlotManagerU3Ek__BackingField_11() const { return ___U3CGlobalStateSlotManagerU3Ek__BackingField_11; }
	inline RuntimeObject** get_address_of_U3CGlobalStateSlotManagerU3Ek__BackingField_11() { return &___U3CGlobalStateSlotManagerU3Ek__BackingField_11; }
	inline void set_U3CGlobalStateSlotManagerU3Ek__BackingField_11(RuntimeObject* value)
	{
		___U3CGlobalStateSlotManagerU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CGlobalStateSlotManagerU3Ek__BackingField_11), (void*)value);
	}

	inline static int32_t get_offset_of_U3CGameStateSlotManagerU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(StateManager_tF3B8735DA8F4E19A6A6C0D25270A8286C878D5A1, ___U3CGameStateSlotManagerU3Ek__BackingField_12)); }
	inline RuntimeObject* get_U3CGameStateSlotManagerU3Ek__BackingField_12() const { return ___U3CGameStateSlotManagerU3Ek__BackingField_12; }
	inline RuntimeObject** get_address_of_U3CGameStateSlotManagerU3Ek__BackingField_12() { return &___U3CGameStateSlotManagerU3Ek__BackingField_12; }
	inline void set_U3CGameStateSlotManagerU3Ek__BackingField_12(RuntimeObject* value)
	{
		___U3CGameStateSlotManagerU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CGameStateSlotManagerU3Ek__BackingField_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSettingsSlotManagerU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(StateManager_tF3B8735DA8F4E19A6A6C0D25270A8286C878D5A1, ___U3CSettingsSlotManagerU3Ek__BackingField_13)); }
	inline RuntimeObject* get_U3CSettingsSlotManagerU3Ek__BackingField_13() const { return ___U3CSettingsSlotManagerU3Ek__BackingField_13; }
	inline RuntimeObject** get_address_of_U3CSettingsSlotManagerU3Ek__BackingField_13() { return &___U3CSettingsSlotManagerU3Ek__BackingField_13; }
	inline void set_U3CSettingsSlotManagerU3Ek__BackingField_13(RuntimeObject* value)
	{
		___U3CSettingsSlotManagerU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSettingsSlotManagerU3Ek__BackingField_13), (void*)value);
	}

	inline static int32_t get_offset_of_U3CRollbackStackU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(StateManager_tF3B8735DA8F4E19A6A6C0D25270A8286C878D5A1, ___U3CRollbackStackU3Ek__BackingField_14)); }
	inline StateRollbackStack_tC11A46F845DB5187448E4790E845A78AB0643B23 * get_U3CRollbackStackU3Ek__BackingField_14() const { return ___U3CRollbackStackU3Ek__BackingField_14; }
	inline StateRollbackStack_tC11A46F845DB5187448E4790E845A78AB0643B23 ** get_address_of_U3CRollbackStackU3Ek__BackingField_14() { return &___U3CRollbackStackU3Ek__BackingField_14; }
	inline void set_U3CRollbackStackU3Ek__BackingField_14(StateRollbackStack_tC11A46F845DB5187448E4790E845A78AB0643B23 * value)
	{
		___U3CRollbackStackU3Ek__BackingField_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRollbackStackU3Ek__BackingField_14), (void*)value);
	}

	inline static int32_t get_offset_of_rollbackTaskQueue_15() { return static_cast<int32_t>(offsetof(StateManager_tF3B8735DA8F4E19A6A6C0D25270A8286C878D5A1, ___rollbackTaskQueue_15)); }
	inline Queue_1_t0BA908838ED437696D7598D5D3D2BFA22F9D692A * get_rollbackTaskQueue_15() const { return ___rollbackTaskQueue_15; }
	inline Queue_1_t0BA908838ED437696D7598D5D3D2BFA22F9D692A ** get_address_of_rollbackTaskQueue_15() { return &___rollbackTaskQueue_15; }
	inline void set_rollbackTaskQueue_15(Queue_1_t0BA908838ED437696D7598D5D3D2BFA22F9D692A * value)
	{
		___rollbackTaskQueue_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rollbackTaskQueue_15), (void*)value);
	}

	inline static int32_t get_offset_of_onGameSerializeTasks_16() { return static_cast<int32_t>(offsetof(StateManager_tF3B8735DA8F4E19A6A6C0D25270A8286C878D5A1, ___onGameSerializeTasks_16)); }
	inline List_1_t5D3DE8A6E866EFBBE267E1025ED889B2EB78D393 * get_onGameSerializeTasks_16() const { return ___onGameSerializeTasks_16; }
	inline List_1_t5D3DE8A6E866EFBBE267E1025ED889B2EB78D393 ** get_address_of_onGameSerializeTasks_16() { return &___onGameSerializeTasks_16; }
	inline void set_onGameSerializeTasks_16(List_1_t5D3DE8A6E866EFBBE267E1025ED889B2EB78D393 * value)
	{
		___onGameSerializeTasks_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onGameSerializeTasks_16), (void*)value);
	}

	inline static int32_t get_offset_of_onGameDeserializeTasks_17() { return static_cast<int32_t>(offsetof(StateManager_tF3B8735DA8F4E19A6A6C0D25270A8286C878D5A1, ___onGameDeserializeTasks_17)); }
	inline List_1_t7E82013420E9BEDD40CDA2928EE1F40D52F58EF6 * get_onGameDeserializeTasks_17() const { return ___onGameDeserializeTasks_17; }
	inline List_1_t7E82013420E9BEDD40CDA2928EE1F40D52F58EF6 ** get_address_of_onGameDeserializeTasks_17() { return &___onGameDeserializeTasks_17; }
	inline void set_onGameDeserializeTasks_17(List_1_t7E82013420E9BEDD40CDA2928EE1F40D52F58EF6 * value)
	{
		___onGameDeserializeTasks_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onGameDeserializeTasks_17), (void*)value);
	}

	inline static int32_t get_offset_of_rollbackInput_18() { return static_cast<int32_t>(offsetof(StateManager_tF3B8735DA8F4E19A6A6C0D25270A8286C878D5A1, ___rollbackInput_18)); }
	inline RuntimeObject* get_rollbackInput_18() const { return ___rollbackInput_18; }
	inline RuntimeObject** get_address_of_rollbackInput_18() { return &___rollbackInput_18; }
	inline void set_rollbackInput_18(RuntimeObject* value)
	{
		___rollbackInput_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rollbackInput_18), (void*)value);
	}

	inline static int32_t get_offset_of_scriptPlayer_19() { return static_cast<int32_t>(offsetof(StateManager_tF3B8735DA8F4E19A6A6C0D25270A8286C878D5A1, ___scriptPlayer_19)); }
	inline RuntimeObject* get_scriptPlayer_19() const { return ___scriptPlayer_19; }
	inline RuntimeObject** get_address_of_scriptPlayer_19() { return &___scriptPlayer_19; }
	inline void set_scriptPlayer_19(RuntimeObject* value)
	{
		___scriptPlayer_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scriptPlayer_19), (void*)value);
	}

	inline static int32_t get_offset_of_cameraManager_20() { return static_cast<int32_t>(offsetof(StateManager_tF3B8735DA8F4E19A6A6C0D25270A8286C878D5A1, ___cameraManager_20)); }
	inline RuntimeObject* get_cameraManager_20() const { return ___cameraManager_20; }
	inline RuntimeObject** get_address_of_cameraManager_20() { return &___cameraManager_20; }
	inline void set_cameraManager_20(RuntimeObject* value)
	{
		___cameraManager_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cameraManager_20), (void*)value);
	}
};


// Naninovel.StateMap
struct  StateMap_tF9F312C96797C47C86D856A3386946A8A10C6C64  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> Naninovel.StateMap::ObjectMap
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___ObjectMap_0;
	// Naninovel.SerializableLiteralStringMap Naninovel.StateMap::objectJsonMap
	SerializableLiteralStringMap_tCE49897C27C4B7F59121073F6E9A04A390B9F696 * ___objectJsonMap_1;

public:
	inline static int32_t get_offset_of_ObjectMap_0() { return static_cast<int32_t>(offsetof(StateMap_tF9F312C96797C47C86D856A3386946A8A10C6C64, ___ObjectMap_0)); }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * get_ObjectMap_0() const { return ___ObjectMap_0; }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 ** get_address_of_ObjectMap_0() { return &___ObjectMap_0; }
	inline void set_ObjectMap_0(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * value)
	{
		___ObjectMap_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ObjectMap_0), (void*)value);
	}

	inline static int32_t get_offset_of_objectJsonMap_1() { return static_cast<int32_t>(offsetof(StateMap_tF9F312C96797C47C86D856A3386946A8A10C6C64, ___objectJsonMap_1)); }
	inline SerializableLiteralStringMap_tCE49897C27C4B7F59121073F6E9A04A390B9F696 * get_objectJsonMap_1() const { return ___objectJsonMap_1; }
	inline SerializableLiteralStringMap_tCE49897C27C4B7F59121073F6E9A04A390B9F696 ** get_address_of_objectJsonMap_1() { return &___objectJsonMap_1; }
	inline void set_objectJsonMap_1(SerializableLiteralStringMap_tCE49897C27C4B7F59121073F6E9A04A390B9F696 * value)
	{
		___objectJsonMap_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objectJsonMap_1), (void*)value);
	}
};


// Naninovel.StateRollbackStack
struct  StateRollbackStack_tC11A46F845DB5187448E4790E845A78AB0643B23  : public RuntimeObject
{
public:
	// System.Int32 Naninovel.StateRollbackStack::Capacity
	int32_t ___Capacity_0;
	// System.Collections.Generic.LinkedList`1<Naninovel.GameStateMap> Naninovel.StateRollbackStack::rollbackList
	LinkedList_1_t5133454CAE619B941D140CEED1DBF3A25F63A21E * ___rollbackList_1;

public:
	inline static int32_t get_offset_of_Capacity_0() { return static_cast<int32_t>(offsetof(StateRollbackStack_tC11A46F845DB5187448E4790E845A78AB0643B23, ___Capacity_0)); }
	inline int32_t get_Capacity_0() const { return ___Capacity_0; }
	inline int32_t* get_address_of_Capacity_0() { return &___Capacity_0; }
	inline void set_Capacity_0(int32_t value)
	{
		___Capacity_0 = value;
	}

	inline static int32_t get_offset_of_rollbackList_1() { return static_cast<int32_t>(offsetof(StateRollbackStack_tC11A46F845DB5187448E4790E845A78AB0643B23, ___rollbackList_1)); }
	inline LinkedList_1_t5133454CAE619B941D140CEED1DBF3A25F63A21E * get_rollbackList_1() const { return ___rollbackList_1; }
	inline LinkedList_1_t5133454CAE619B941D140CEED1DBF3A25F63A21E ** get_address_of_rollbackList_1() { return &___rollbackList_1; }
	inline void set_rollbackList_1(LinkedList_1_t5133454CAE619B941D140CEED1DBF3A25F63A21E * value)
	{
		___rollbackList_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rollbackList_1), (void*)value);
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


// System.StringComparer
struct  StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6  : public RuntimeObject
{
public:

public:
};

struct StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_StaticFields
{
public:
	// System.StringComparer System.StringComparer::_invariantCulture
	StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * ____invariantCulture_0;
	// System.StringComparer System.StringComparer::_invariantCultureIgnoreCase
	StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * ____invariantCultureIgnoreCase_1;
	// System.StringComparer System.StringComparer::_ordinal
	StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * ____ordinal_2;
	// System.StringComparer System.StringComparer::_ordinalIgnoreCase
	StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * ____ordinalIgnoreCase_3;

public:
	inline static int32_t get_offset_of__invariantCulture_0() { return static_cast<int32_t>(offsetof(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_StaticFields, ____invariantCulture_0)); }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * get__invariantCulture_0() const { return ____invariantCulture_0; }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 ** get_address_of__invariantCulture_0() { return &____invariantCulture_0; }
	inline void set__invariantCulture_0(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * value)
	{
		____invariantCulture_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____invariantCulture_0), (void*)value);
	}

	inline static int32_t get_offset_of__invariantCultureIgnoreCase_1() { return static_cast<int32_t>(offsetof(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_StaticFields, ____invariantCultureIgnoreCase_1)); }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * get__invariantCultureIgnoreCase_1() const { return ____invariantCultureIgnoreCase_1; }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 ** get_address_of__invariantCultureIgnoreCase_1() { return &____invariantCultureIgnoreCase_1; }
	inline void set__invariantCultureIgnoreCase_1(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * value)
	{
		____invariantCultureIgnoreCase_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____invariantCultureIgnoreCase_1), (void*)value);
	}

	inline static int32_t get_offset_of__ordinal_2() { return static_cast<int32_t>(offsetof(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_StaticFields, ____ordinal_2)); }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * get__ordinal_2() const { return ____ordinal_2; }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 ** get_address_of__ordinal_2() { return &____ordinal_2; }
	inline void set__ordinal_2(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * value)
	{
		____ordinal_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ordinal_2), (void*)value);
	}

	inline static int32_t get_offset_of__ordinalIgnoreCase_3() { return static_cast<int32_t>(offsetof(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_StaticFields, ____ordinalIgnoreCase_3)); }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * get__ordinalIgnoreCase_3() const { return ____ordinalIgnoreCase_3; }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 ** get_address_of__ordinalIgnoreCase_3() { return &____ordinalIgnoreCase_3; }
	inline void set__ordinalIgnoreCase_3(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * value)
	{
		____ordinalIgnoreCase_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ordinalIgnoreCase_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEventBase
struct  UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_Calls_0)); }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_2() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_CallsDirty_2)); }
	inline bool get_m_CallsDirty_2() const { return ___m_CallsDirty_2; }
	inline bool* get_address_of_m_CallsDirty_2() { return &___m_CallsDirty_2; }
	inline void set_m_CallsDirty_2(bool value)
	{
		___m_CallsDirty_2 = value;
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

// Naninovel.WavToAudioClipConverter
struct  WavToAudioClipConverter_t924144CE4EC088BDC7369CD9193A676BD1B41AF9  : public RuntimeObject
{
public:
	// Naninovel.RawDataRepresentation[] Naninovel.WavToAudioClipConverter::<Representations>k__BackingField
	RawDataRepresentationU5BU5D_t99A0BEA044D230E70A9FF4D546DF705822FFD95F* ___U3CRepresentationsU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CRepresentationsU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(WavToAudioClipConverter_t924144CE4EC088BDC7369CD9193A676BD1B41AF9, ___U3CRepresentationsU3Ek__BackingField_0)); }
	inline RawDataRepresentationU5BU5D_t99A0BEA044D230E70A9FF4D546DF705822FFD95F* get_U3CRepresentationsU3Ek__BackingField_0() const { return ___U3CRepresentationsU3Ek__BackingField_0; }
	inline RawDataRepresentationU5BU5D_t99A0BEA044D230E70A9FF4D546DF705822FFD95F** get_address_of_U3CRepresentationsU3Ek__BackingField_0() { return &___U3CRepresentationsU3Ek__BackingField_0; }
	inline void set_U3CRepresentationsU3Ek__BackingField_0(RawDataRepresentationU5BU5D_t99A0BEA044D230E70A9FF4D546DF705822FFD95F* value)
	{
		___U3CRepresentationsU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRepresentationsU3Ek__BackingField_0), (void*)value);
	}
};


// Naninovel.StateManager/<>c
struct  U3CU3Ec_t49A79975B120E933F36505C9E29BE6ABF615EECC  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t49A79975B120E933F36505C9E29BE6ABF615EECC_StaticFields
{
public:
	// Naninovel.StateManager/<>c Naninovel.StateManager/<>c::<>9
	U3CU3Ec_t49A79975B120E933F36505C9E29BE6ABF615EECC * ___U3CU3E9_0;
	// System.Func`2<Naninovel.GameStateMap,System.Boolean> Naninovel.StateManager/<>c::<>9__69_1
	Func_2_tC98365FCD009A19906148DAE6D31E499FA04C5FF * ___U3CU3E9__69_1_1;
	// System.Action`1<Naninovel.GameStateMap> Naninovel.StateManager/<>c::<>9__71_0
	Action_1_tE7DBC7D799F1973CA1C99095A5E2322E45FDAE6C * ___U3CU3E9__71_0_2;
	// System.Func`2<Naninovel.IEngineService,System.Type> Naninovel.StateManager/<>c::<>9__76_0
	Func_2_t7C236A78551F84A38F24D6AB3229F872EAEC4ADE * ___U3CU3E9__76_0_3;
	// System.Action`1<Naninovel.GameStateMap> Naninovel.StateManager/<>c::<>9__83_0
	Action_1_tE7DBC7D799F1973CA1C99095A5E2322E45FDAE6C * ___U3CU3E9__83_0_4;
	// System.Predicate`1<Naninovel.GameStateMap> Naninovel.StateManager/<>c::<>9__89_0
	Predicate_1_tBB645330290CE4865319EB67E4201373C3FDDE20 * ___U3CU3E9__89_0_5;
	// System.Predicate`1<Naninovel.GameStateMap> Naninovel.StateManager/<>c::<>9__89_1
	Predicate_1_tBB645330290CE4865319EB67E4201373C3FDDE20 * ___U3CU3E9__89_1_6;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t49A79975B120E933F36505C9E29BE6ABF615EECC_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t49A79975B120E933F36505C9E29BE6ABF615EECC * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t49A79975B120E933F36505C9E29BE6ABF615EECC ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t49A79975B120E933F36505C9E29BE6ABF615EECC * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__69_1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t49A79975B120E933F36505C9E29BE6ABF615EECC_StaticFields, ___U3CU3E9__69_1_1)); }
	inline Func_2_tC98365FCD009A19906148DAE6D31E499FA04C5FF * get_U3CU3E9__69_1_1() const { return ___U3CU3E9__69_1_1; }
	inline Func_2_tC98365FCD009A19906148DAE6D31E499FA04C5FF ** get_address_of_U3CU3E9__69_1_1() { return &___U3CU3E9__69_1_1; }
	inline void set_U3CU3E9__69_1_1(Func_2_tC98365FCD009A19906148DAE6D31E499FA04C5FF * value)
	{
		___U3CU3E9__69_1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__69_1_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__71_0_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t49A79975B120E933F36505C9E29BE6ABF615EECC_StaticFields, ___U3CU3E9__71_0_2)); }
	inline Action_1_tE7DBC7D799F1973CA1C99095A5E2322E45FDAE6C * get_U3CU3E9__71_0_2() const { return ___U3CU3E9__71_0_2; }
	inline Action_1_tE7DBC7D799F1973CA1C99095A5E2322E45FDAE6C ** get_address_of_U3CU3E9__71_0_2() { return &___U3CU3E9__71_0_2; }
	inline void set_U3CU3E9__71_0_2(Action_1_tE7DBC7D799F1973CA1C99095A5E2322E45FDAE6C * value)
	{
		___U3CU3E9__71_0_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__71_0_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__76_0_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_t49A79975B120E933F36505C9E29BE6ABF615EECC_StaticFields, ___U3CU3E9__76_0_3)); }
	inline Func_2_t7C236A78551F84A38F24D6AB3229F872EAEC4ADE * get_U3CU3E9__76_0_3() const { return ___U3CU3E9__76_0_3; }
	inline Func_2_t7C236A78551F84A38F24D6AB3229F872EAEC4ADE ** get_address_of_U3CU3E9__76_0_3() { return &___U3CU3E9__76_0_3; }
	inline void set_U3CU3E9__76_0_3(Func_2_t7C236A78551F84A38F24D6AB3229F872EAEC4ADE * value)
	{
		___U3CU3E9__76_0_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__76_0_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__83_0_4() { return static_cast<int32_t>(offsetof(U3CU3Ec_t49A79975B120E933F36505C9E29BE6ABF615EECC_StaticFields, ___U3CU3E9__83_0_4)); }
	inline Action_1_tE7DBC7D799F1973CA1C99095A5E2322E45FDAE6C * get_U3CU3E9__83_0_4() const { return ___U3CU3E9__83_0_4; }
	inline Action_1_tE7DBC7D799F1973CA1C99095A5E2322E45FDAE6C ** get_address_of_U3CU3E9__83_0_4() { return &___U3CU3E9__83_0_4; }
	inline void set_U3CU3E9__83_0_4(Action_1_tE7DBC7D799F1973CA1C99095A5E2322E45FDAE6C * value)
	{
		___U3CU3E9__83_0_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__83_0_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__89_0_5() { return static_cast<int32_t>(offsetof(U3CU3Ec_t49A79975B120E933F36505C9E29BE6ABF615EECC_StaticFields, ___U3CU3E9__89_0_5)); }
	inline Predicate_1_tBB645330290CE4865319EB67E4201373C3FDDE20 * get_U3CU3E9__89_0_5() const { return ___U3CU3E9__89_0_5; }
	inline Predicate_1_tBB645330290CE4865319EB67E4201373C3FDDE20 ** get_address_of_U3CU3E9__89_0_5() { return &___U3CU3E9__89_0_5; }
	inline void set_U3CU3E9__89_0_5(Predicate_1_tBB645330290CE4865319EB67E4201373C3FDDE20 * value)
	{
		___U3CU3E9__89_0_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__89_0_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__89_1_6() { return static_cast<int32_t>(offsetof(U3CU3Ec_t49A79975B120E933F36505C9E29BE6ABF615EECC_StaticFields, ___U3CU3E9__89_1_6)); }
	inline Predicate_1_tBB645330290CE4865319EB67E4201373C3FDDE20 * get_U3CU3E9__89_1_6() const { return ___U3CU3E9__89_1_6; }
	inline Predicate_1_tBB645330290CE4865319EB67E4201373C3FDDE20 ** get_address_of_U3CU3E9__89_1_6() { return &___U3CU3E9__89_1_6; }
	inline void set_U3CU3E9__89_1_6(Predicate_1_tBB645330290CE4865319EB67E4201373C3FDDE20 * value)
	{
		___U3CU3E9__89_1_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__89_1_6), (void*)value);
	}
};


// Naninovel.StateManager/<>c__DisplayClass69_0
struct  U3CU3Ec__DisplayClass69_0_t7494ACB5178966BE314D67BD10A4A4DE4C2CA5FD  : public RuntimeObject
{
public:
	// Naninovel.GameStateMap Naninovel.StateManager/<>c__DisplayClass69_0::state
	GameStateMap_tA4788218B9D1B130D00F9C346FF9FD21E01ED52D * ___state_0;
	// Naninovel.StateManager Naninovel.StateManager/<>c__DisplayClass69_0::<>4__this
	StateManager_tF3B8735DA8F4E19A6A6C0D25270A8286C878D5A1 * ___U3CU3E4__this_1;
	// System.String Naninovel.StateManager/<>c__DisplayClass69_0::slotId
	String_t* ___slotId_2;

public:
	inline static int32_t get_offset_of_state_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass69_0_t7494ACB5178966BE314D67BD10A4A4DE4C2CA5FD, ___state_0)); }
	inline GameStateMap_tA4788218B9D1B130D00F9C346FF9FD21E01ED52D * get_state_0() const { return ___state_0; }
	inline GameStateMap_tA4788218B9D1B130D00F9C346FF9FD21E01ED52D ** get_address_of_state_0() { return &___state_0; }
	inline void set_state_0(GameStateMap_tA4788218B9D1B130D00F9C346FF9FD21E01ED52D * value)
	{
		___state_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___state_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass69_0_t7494ACB5178966BE314D67BD10A4A4DE4C2CA5FD, ___U3CU3E4__this_1)); }
	inline StateManager_tF3B8735DA8F4E19A6A6C0D25270A8286C878D5A1 * get_U3CU3E4__this_1() const { return ___U3CU3E4__this_1; }
	inline StateManager_tF3B8735DA8F4E19A6A6C0D25270A8286C878D5A1 ** get_address_of_U3CU3E4__this_1() { return &___U3CU3E4__this_1; }
	inline void set_U3CU3E4__this_1(StateManager_tF3B8735DA8F4E19A6A6C0D25270A8286C878D5A1 * value)
	{
		___U3CU3E4__this_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_1), (void*)value);
	}

	inline static int32_t get_offset_of_slotId_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass69_0_t7494ACB5178966BE314D67BD10A4A4DE4C2CA5FD, ___slotId_2)); }
	inline String_t* get_slotId_2() const { return ___slotId_2; }
	inline String_t** get_address_of_slotId_2() { return &___slotId_2; }
	inline void set_slotId_2(String_t* value)
	{
		___slotId_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___slotId_2), (void*)value);
	}
};


// Naninovel.StateManager/<>c__DisplayClass69_1
struct  U3CU3Ec__DisplayClass69_1_tFFADCFEF5824A513F6E1827C950CCC7516B5A64D  : public RuntimeObject
{
public:
	// Naninovel.GameStateMap Naninovel.StateManager/<>c__DisplayClass69_1::nearestStartLineSpot
	GameStateMap_tA4788218B9D1B130D00F9C346FF9FD21E01ED52D * ___nearestStartLineSpot_0;

public:
	inline static int32_t get_offset_of_nearestStartLineSpot_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass69_1_tFFADCFEF5824A513F6E1827C950CCC7516B5A64D, ___nearestStartLineSpot_0)); }
	inline GameStateMap_tA4788218B9D1B130D00F9C346FF9FD21E01ED52D * get_nearestStartLineSpot_0() const { return ___nearestStartLineSpot_0; }
	inline GameStateMap_tA4788218B9D1B130D00F9C346FF9FD21E01ED52D ** get_address_of_nearestStartLineSpot_0() { return &___nearestStartLineSpot_0; }
	inline void set_nearestStartLineSpot_0(GameStateMap_tA4788218B9D1B130D00F9C346FF9FD21E01ED52D * value)
	{
		___nearestStartLineSpot_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nearestStartLineSpot_0), (void*)value);
	}
};


// Naninovel.UnlockableManager/<>c
struct  U3CU3Ec_t872D8589FF75637984769283BC59811DBE3C83F4  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t872D8589FF75637984769283BC59811DBE3C83F4_StaticFields
{
public:
	// Naninovel.UnlockableManager/<>c Naninovel.UnlockableManager/<>c::<>9
	U3CU3Ec_t872D8589FF75637984769283BC59811DBE3C83F4 * ___U3CU3E9_0;
	// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>,System.String> Naninovel.UnlockableManager/<>c::<>9__19_0
	Func_2_t942192522C87CAC66A981B75E31AE269944018EC * ___U3CU3E9__19_0_1;
	// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>,System.Boolean> Naninovel.UnlockableManager/<>c::<>9__19_1
	Func_2_t3DFB7D97659946883862BED975EB8EADFABC9D8F * ___U3CU3E9__19_1_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t872D8589FF75637984769283BC59811DBE3C83F4_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t872D8589FF75637984769283BC59811DBE3C83F4 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t872D8589FF75637984769283BC59811DBE3C83F4 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t872D8589FF75637984769283BC59811DBE3C83F4 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__19_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t872D8589FF75637984769283BC59811DBE3C83F4_StaticFields, ___U3CU3E9__19_0_1)); }
	inline Func_2_t942192522C87CAC66A981B75E31AE269944018EC * get_U3CU3E9__19_0_1() const { return ___U3CU3E9__19_0_1; }
	inline Func_2_t942192522C87CAC66A981B75E31AE269944018EC ** get_address_of_U3CU3E9__19_0_1() { return &___U3CU3E9__19_0_1; }
	inline void set_U3CU3E9__19_0_1(Func_2_t942192522C87CAC66A981B75E31AE269944018EC * value)
	{
		___U3CU3E9__19_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__19_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__19_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t872D8589FF75637984769283BC59811DBE3C83F4_StaticFields, ___U3CU3E9__19_1_2)); }
	inline Func_2_t3DFB7D97659946883862BED975EB8EADFABC9D8F * get_U3CU3E9__19_1_2() const { return ___U3CU3E9__19_1_2; }
	inline Func_2_t3DFB7D97659946883862BED975EB8EADFABC9D8F ** get_address_of_U3CU3E9__19_1_2() { return &___U3CU3E9__19_1_2; }
	inline void set_U3CU3E9__19_1_2(Func_2_t3DFB7D97659946883862BED975EB8EADFABC9D8F * value)
	{
		___U3CU3E9__19_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__19_1_2), (void*)value);
	}
};


// Naninovel.UnlockableManager/GlobalState
struct  GlobalState_tBFC4E452F43253379951C3663D07CD4B83C852D7  : public RuntimeObject
{
public:
	// Naninovel.UnlockableManager/UnlockablesMap Naninovel.UnlockableManager/GlobalState::UnlockablesMap
	UnlockablesMap_t798A63740156B2CCD22053D422973750060F1C43 * ___UnlockablesMap_0;

public:
	inline static int32_t get_offset_of_UnlockablesMap_0() { return static_cast<int32_t>(offsetof(GlobalState_tBFC4E452F43253379951C3663D07CD4B83C852D7, ___UnlockablesMap_0)); }
	inline UnlockablesMap_t798A63740156B2CCD22053D422973750060F1C43 * get_UnlockablesMap_0() const { return ___UnlockablesMap_0; }
	inline UnlockablesMap_t798A63740156B2CCD22053D422973750060F1C43 ** get_address_of_UnlockablesMap_0() { return &___UnlockablesMap_0; }
	inline void set_UnlockablesMap_0(UnlockablesMap_t798A63740156B2CCD22053D422973750060F1C43 * value)
	{
		___UnlockablesMap_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UnlockablesMap_0), (void*)value);
	}
};


// Naninovel.UI.VariableInputPanel/GameState
struct  GameState_tE9D59EA400F61A3BF53ED8B04F14446938E65CD8  : public RuntimeObject
{
public:
	// System.String Naninovel.UI.VariableInputPanel/GameState::VariableName
	String_t* ___VariableName_0;
	// System.String Naninovel.UI.VariableInputPanel/GameState::SummaryText
	String_t* ___SummaryText_1;
	// System.String Naninovel.UI.VariableInputPanel/GameState::InputFieldText
	String_t* ___InputFieldText_2;
	// System.Boolean Naninovel.UI.VariableInputPanel/GameState::PlayOnSubmit
	bool ___PlayOnSubmit_3;

public:
	inline static int32_t get_offset_of_VariableName_0() { return static_cast<int32_t>(offsetof(GameState_tE9D59EA400F61A3BF53ED8B04F14446938E65CD8, ___VariableName_0)); }
	inline String_t* get_VariableName_0() const { return ___VariableName_0; }
	inline String_t** get_address_of_VariableName_0() { return &___VariableName_0; }
	inline void set_VariableName_0(String_t* value)
	{
		___VariableName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___VariableName_0), (void*)value);
	}

	inline static int32_t get_offset_of_SummaryText_1() { return static_cast<int32_t>(offsetof(GameState_tE9D59EA400F61A3BF53ED8B04F14446938E65CD8, ___SummaryText_1)); }
	inline String_t* get_SummaryText_1() const { return ___SummaryText_1; }
	inline String_t** get_address_of_SummaryText_1() { return &___SummaryText_1; }
	inline void set_SummaryText_1(String_t* value)
	{
		___SummaryText_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SummaryText_1), (void*)value);
	}

	inline static int32_t get_offset_of_InputFieldText_2() { return static_cast<int32_t>(offsetof(GameState_tE9D59EA400F61A3BF53ED8B04F14446938E65CD8, ___InputFieldText_2)); }
	inline String_t* get_InputFieldText_2() const { return ___InputFieldText_2; }
	inline String_t** get_address_of_InputFieldText_2() { return &___InputFieldText_2; }
	inline void set_InputFieldText_2(String_t* value)
	{
		___InputFieldText_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InputFieldText_2), (void*)value);
	}

	inline static int32_t get_offset_of_PlayOnSubmit_3() { return static_cast<int32_t>(offsetof(GameState_tE9D59EA400F61A3BF53ED8B04F14446938E65CD8, ___PlayOnSubmit_3)); }
	inline bool get_PlayOnSubmit_3() const { return ___PlayOnSubmit_3; }
	inline bool* get_address_of_PlayOnSubmit_3() { return &___PlayOnSubmit_3; }
	inline void set_PlayOnSubmit_3(bool value)
	{
		___PlayOnSubmit_3 = value;
	}
};


// Naninovel.VideoBackground/VideoData
struct  VideoData_t995725B9BB3E0B9FADDA15CD9D34810784D73AD2  : public RuntimeObject
{
public:
	// UnityEngine.Video.VideoPlayer Naninovel.VideoBackground/VideoData::Player
	VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * ___Player_0;
	// UnityEngine.RenderTexture Naninovel.VideoBackground/VideoData::RenderTexture
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___RenderTexture_1;

public:
	inline static int32_t get_offset_of_Player_0() { return static_cast<int32_t>(offsetof(VideoData_t995725B9BB3E0B9FADDA15CD9D34810784D73AD2, ___Player_0)); }
	inline VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * get_Player_0() const { return ___Player_0; }
	inline VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 ** get_address_of_Player_0() { return &___Player_0; }
	inline void set_Player_0(VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * value)
	{
		___Player_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Player_0), (void*)value);
	}

	inline static int32_t get_offset_of_RenderTexture_1() { return static_cast<int32_t>(offsetof(VideoData_t995725B9BB3E0B9FADDA15CD9D34810784D73AD2, ___RenderTexture_1)); }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * get_RenderTexture_1() const { return ___RenderTexture_1; }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 ** get_address_of_RenderTexture_1() { return &___RenderTexture_1; }
	inline void set_RenderTexture_1(RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * value)
	{
		___RenderTexture_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RenderTexture_1), (void*)value);
	}
};


// Naninovel.VirtualResourceProvider/<>c
struct  U3CU3Ec_tAA8106464A5C77323F9EC34B70E387C945F92BD0  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tAA8106464A5C77323F9EC34B70E387C945F92BD0_StaticFields
{
public:
	// Naninovel.VirtualResourceProvider/<>c Naninovel.VirtualResourceProvider/<>c::<>9
	U3CU3Ec_tAA8106464A5C77323F9EC34B70E387C945F92BD0 * ___U3CU3E9_0;
	// System.Func`2<System.String,Naninovel.Folder> Naninovel.VirtualResourceProvider/<>c::<>9__29_0
	Func_2_tAEFCCC29A8C97EA955DC25ED83FB1E87C86C314C * ___U3CU3E9__29_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tAA8106464A5C77323F9EC34B70E387C945F92BD0_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tAA8106464A5C77323F9EC34B70E387C945F92BD0 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tAA8106464A5C77323F9EC34B70E387C945F92BD0 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tAA8106464A5C77323F9EC34B70E387C945F92BD0 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__29_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tAA8106464A5C77323F9EC34B70E387C945F92BD0_StaticFields, ___U3CU3E9__29_0_1)); }
	inline Func_2_tAEFCCC29A8C97EA955DC25ED83FB1E87C86C314C * get_U3CU3E9__29_0_1() const { return ___U3CU3E9__29_0_1; }
	inline Func_2_tAEFCCC29A8C97EA955DC25ED83FB1E87C86C314C ** get_address_of_U3CU3E9__29_0_1() { return &___U3CU3E9__29_0_1; }
	inline void set_U3CU3E9__29_0_1(Func_2_tAEFCCC29A8C97EA955DC25ED83FB1E87C86C314C * value)
	{
		___U3CU3E9__29_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__29_0_1), (void*)value);
	}
};


// Naninovel.WavToAudioClipConverter/<>c__DisplayClass4_0
struct  U3CU3Ec__DisplayClass4_0_t30A7A5DA80629F9EF81E32295173003C5F1559FC  : public RuntimeObject
{
public:
	// System.Byte[] Naninovel.WavToAudioClipConverter/<>c__DisplayClass4_0::obj
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___obj_0;

public:
	inline static int32_t get_offset_of_obj_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_t30A7A5DA80629F9EF81E32295173003C5F1559FC, ___obj_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_obj_0() const { return ___obj_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_obj_0() { return &___obj_0; }
	inline void set_obj_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___obj_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___obj_0), (void*)value);
	}
};


// Naninovel.RuntimeInitializer/ServiceInitData/<>c
struct  U3CU3Ec_tE32986ABA5018840123DFE9F20D81E2BD6D0E2C8  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tE32986ABA5018840123DFE9F20D81E2BD6D0E2C8_StaticFields
{
public:
	// Naninovel.RuntimeInitializer/ServiceInitData/<>c Naninovel.RuntimeInitializer/ServiceInitData/<>c::<>9
	U3CU3Ec_tE32986ABA5018840123DFE9F20D81E2BD6D0E2C8 * ___U3CU3E9_0;
	// System.Func`2<System.Reflection.ParameterInfo,System.Type> Naninovel.RuntimeInitializer/ServiceInitData/<>c::<>9__3_0
	Func_2_t5938BB484083AB6B9B4C4F0DBAD54A7F51611EBF * ___U3CU3E9__3_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tE32986ABA5018840123DFE9F20D81E2BD6D0E2C8_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tE32986ABA5018840123DFE9F20D81E2BD6D0E2C8 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tE32986ABA5018840123DFE9F20D81E2BD6D0E2C8 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tE32986ABA5018840123DFE9F20D81E2BD6D0E2C8 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__3_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tE32986ABA5018840123DFE9F20D81E2BD6D0E2C8_StaticFields, ___U3CU3E9__3_0_1)); }
	inline Func_2_t5938BB484083AB6B9B4C4F0DBAD54A7F51611EBF * get_U3CU3E9__3_0_1() const { return ___U3CU3E9__3_0_1; }
	inline Func_2_t5938BB484083AB6B9B4C4F0DBAD54A7F51611EBF ** get_address_of_U3CU3E9__3_0_1() { return &___U3CU3E9__3_0_1; }
	inline void set_U3CU3E9__3_0_1(Func_2_t5938BB484083AB6B9B4C4F0DBAD54A7F51611EBF * value)
	{
		___U3CU3E9__3_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__3_0_1), (void*)value);
	}
};


// UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder`1<UnityEngine.AudioClip>
struct  AsyncUniTaskMethodBuilder_1_t06EFF9E0B83B2725F96D09D9E5EBF736DA6B30C1 
{
public:
	// T UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder`1::result
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___result_0;
	// UniRx.Async.UniTaskCompletionSource`1<T> UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder`1::promise
	UniTaskCompletionSource_1_t20B0F54E9C082571DB69CE2F99277DFA886A2037 * ___promise_1;
	// System.Action UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder`1::moveNext
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___moveNext_2;

public:
	inline static int32_t get_offset_of_result_0() { return static_cast<int32_t>(offsetof(AsyncUniTaskMethodBuilder_1_t06EFF9E0B83B2725F96D09D9E5EBF736DA6B30C1, ___result_0)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_result_0() const { return ___result_0; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_result_0() { return &___result_0; }
	inline void set_result_0(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___result_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___result_0), (void*)value);
	}

	inline static int32_t get_offset_of_promise_1() { return static_cast<int32_t>(offsetof(AsyncUniTaskMethodBuilder_1_t06EFF9E0B83B2725F96D09D9E5EBF736DA6B30C1, ___promise_1)); }
	inline UniTaskCompletionSource_1_t20B0F54E9C082571DB69CE2F99277DFA886A2037 * get_promise_1() const { return ___promise_1; }
	inline UniTaskCompletionSource_1_t20B0F54E9C082571DB69CE2F99277DFA886A2037 ** get_address_of_promise_1() { return &___promise_1; }
	inline void set_promise_1(UniTaskCompletionSource_1_t20B0F54E9C082571DB69CE2F99277DFA886A2037 * value)
	{
		___promise_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___promise_1), (void*)value);
	}

	inline static int32_t get_offset_of_moveNext_2() { return static_cast<int32_t>(offsetof(AsyncUniTaskMethodBuilder_1_t06EFF9E0B83B2725F96D09D9E5EBF736DA6B30C1, ___moveNext_2)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_moveNext_2() const { return ___moveNext_2; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_moveNext_2() { return &___moveNext_2; }
	inline void set_moveNext_2(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___moveNext_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___moveNext_2), (void*)value);
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


// UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder`1<Naninovel.VideoBackground/VideoData>
struct  AsyncUniTaskMethodBuilder_1_t402090290561B301A3591C90C52DFCA007AEC1E4 
{
public:
	// T UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder`1::result
	VideoData_t995725B9BB3E0B9FADDA15CD9D34810784D73AD2 * ___result_0;
	// UniRx.Async.UniTaskCompletionSource`1<T> UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder`1::promise
	UniTaskCompletionSource_1_t3EB0AC30AFEE29C4FC4861D3B06B75915AB8E17C * ___promise_1;
	// System.Action UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder`1::moveNext
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___moveNext_2;

public:
	inline static int32_t get_offset_of_result_0() { return static_cast<int32_t>(offsetof(AsyncUniTaskMethodBuilder_1_t402090290561B301A3591C90C52DFCA007AEC1E4, ___result_0)); }
	inline VideoData_t995725B9BB3E0B9FADDA15CD9D34810784D73AD2 * get_result_0() const { return ___result_0; }
	inline VideoData_t995725B9BB3E0B9FADDA15CD9D34810784D73AD2 ** get_address_of_result_0() { return &___result_0; }
	inline void set_result_0(VideoData_t995725B9BB3E0B9FADDA15CD9D34810784D73AD2 * value)
	{
		___result_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___result_0), (void*)value);
	}

	inline static int32_t get_offset_of_promise_1() { return static_cast<int32_t>(offsetof(AsyncUniTaskMethodBuilder_1_t402090290561B301A3591C90C52DFCA007AEC1E4, ___promise_1)); }
	inline UniTaskCompletionSource_1_t3EB0AC30AFEE29C4FC4861D3B06B75915AB8E17C * get_promise_1() const { return ___promise_1; }
	inline UniTaskCompletionSource_1_t3EB0AC30AFEE29C4FC4861D3B06B75915AB8E17C ** get_address_of_promise_1() { return &___promise_1; }
	inline void set_promise_1(UniTaskCompletionSource_1_t3EB0AC30AFEE29C4FC4861D3B06B75915AB8E17C * value)
	{
		___promise_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___promise_1), (void*)value);
	}

	inline static int32_t get_offset_of_moveNext_2() { return static_cast<int32_t>(offsetof(AsyncUniTaskMethodBuilder_1_t402090290561B301A3591C90C52DFCA007AEC1E4, ___moveNext_2)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_moveNext_2() const { return ___moveNext_2; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_moveNext_2() { return &___moveNext_2; }
	inline void set_moveNext_2(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___moveNext_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___moveNext_2), (void*)value);
	}
};


// Naninovel.Commands.CommandParameter`1<System.String>
struct  CommandParameter_1_t4B8105125E6E7B0F6BE07C9682920E9CE615EF79  : public Nullable_1_tC6FC502E280A7F1828379312132AC25DAED230A5
{
public:
	// Naninovel.Commands.DynamicValueData Naninovel.Commands.CommandParameter`1::dynamicValueData
	DynamicValueData_t33234AB9347F882D521B68562E2085CDB570FEBF * ___dynamicValueData_2;

public:
	inline static int32_t get_offset_of_dynamicValueData_2() { return static_cast<int32_t>(offsetof(CommandParameter_1_t4B8105125E6E7B0F6BE07C9682920E9CE615EF79, ___dynamicValueData_2)); }
	inline DynamicValueData_t33234AB9347F882D521B68562E2085CDB570FEBF * get_dynamicValueData_2() const { return ___dynamicValueData_2; }
	inline DynamicValueData_t33234AB9347F882D521B68562E2085CDB570FEBF ** get_address_of_dynamicValueData_2() { return &___dynamicValueData_2; }
	inline void set_dynamicValueData_2(DynamicValueData_t33234AB9347F882D521B68562E2085CDB570FEBF * value)
	{
		___dynamicValueData_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dynamicValueData_2), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>
struct  KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	bool ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A, ___value_1)); }
	inline bool get_value_1() const { return ___value_1; }
	inline bool* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(bool value)
	{
		___value_1 = value;
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct  KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>
struct  KeyValuePair_2_t384622AD87CBCE096A5B6142169F1A1C8C8F4503 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	bool ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t384622AD87CBCE096A5B6142169F1A1C8C8F4503, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t384622AD87CBCE096A5B6142169F1A1C8C8F4503, ___value_1)); }
	inline bool get_value_1() const { return ___value_1; }
	inline bool* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(bool value)
	{
		___value_1 = value;
	}
};


// System.Collections.Generic.KeyValuePair`2<System.String,Naninovel.VideoBackground/VideoData>
struct  KeyValuePair_2_tCFA0FBC9A13D1364F07E32F988EE04F5B9FA273C 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	VideoData_t995725B9BB3E0B9FADDA15CD9D34810784D73AD2 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tCFA0FBC9A13D1364F07E32F988EE04F5B9FA273C, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tCFA0FBC9A13D1364F07E32F988EE04F5B9FA273C, ___value_1)); }
	inline VideoData_t995725B9BB3E0B9FADDA15CD9D34810784D73AD2 * get_value_1() const { return ___value_1; }
	inline VideoData_t995725B9BB3E0B9FADDA15CD9D34810784D73AD2 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(VideoData_t995725B9BB3E0B9FADDA15CD9D34810784D73AD2 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// Naninovel.LiteralMap`1<Naninovel.VideoBackground/VideoData>
struct  LiteralMap_1_t1A9EB0EEABDB7CC5DE71C4813A6B71DB3FEEB47D  : public Dictionary_2_tB0D6F5B541B0F32F9BD4447204B50E4D0A15213E
{
public:

public:
};


// Naninovel.LocalizableResourceLoader`1<UnityEngine.Video.VideoClip>
struct  LocalizableResourceLoader_1_t6CC3BB582EA259156AF64985E72C541EFE88D9E6  : public ResourceLoader_1_tC660CC0CBBB8E20A3D2DFA5546401B87DE51D876
{
public:
	// Naninovel.ILocalizationManager Naninovel.LocalizableResourceLoader`1::LocalizationManager
	RuntimeObject* ___LocalizationManager_4;
	// System.Collections.Generic.List`1<Naninovel.IResourceProvider> Naninovel.LocalizableResourceLoader`1::SourceProviders
	List_1_t0BDE620568A9571C04A43DC71410BAA12DEEE3EA * ___SourceProviders_5;
	// System.String Naninovel.LocalizableResourceLoader`1::SourcePrefix
	String_t* ___SourcePrefix_6;
	// System.Boolean Naninovel.LocalizableResourceLoader`1::FallbackToSource
	bool ___FallbackToSource_7;
	// System.String Naninovel.LocalizableResourceLoader`1::overrideLocale
	String_t* ___overrideLocale_8;

public:
	inline static int32_t get_offset_of_LocalizationManager_4() { return static_cast<int32_t>(offsetof(LocalizableResourceLoader_1_t6CC3BB582EA259156AF64985E72C541EFE88D9E6, ___LocalizationManager_4)); }
	inline RuntimeObject* get_LocalizationManager_4() const { return ___LocalizationManager_4; }
	inline RuntimeObject** get_address_of_LocalizationManager_4() { return &___LocalizationManager_4; }
	inline void set_LocalizationManager_4(RuntimeObject* value)
	{
		___LocalizationManager_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LocalizationManager_4), (void*)value);
	}

	inline static int32_t get_offset_of_SourceProviders_5() { return static_cast<int32_t>(offsetof(LocalizableResourceLoader_1_t6CC3BB582EA259156AF64985E72C541EFE88D9E6, ___SourceProviders_5)); }
	inline List_1_t0BDE620568A9571C04A43DC71410BAA12DEEE3EA * get_SourceProviders_5() const { return ___SourceProviders_5; }
	inline List_1_t0BDE620568A9571C04A43DC71410BAA12DEEE3EA ** get_address_of_SourceProviders_5() { return &___SourceProviders_5; }
	inline void set_SourceProviders_5(List_1_t0BDE620568A9571C04A43DC71410BAA12DEEE3EA * value)
	{
		___SourceProviders_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SourceProviders_5), (void*)value);
	}

	inline static int32_t get_offset_of_SourcePrefix_6() { return static_cast<int32_t>(offsetof(LocalizableResourceLoader_1_t6CC3BB582EA259156AF64985E72C541EFE88D9E6, ___SourcePrefix_6)); }
	inline String_t* get_SourcePrefix_6() const { return ___SourcePrefix_6; }
	inline String_t** get_address_of_SourcePrefix_6() { return &___SourcePrefix_6; }
	inline void set_SourcePrefix_6(String_t* value)
	{
		___SourcePrefix_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SourcePrefix_6), (void*)value);
	}

	inline static int32_t get_offset_of_FallbackToSource_7() { return static_cast<int32_t>(offsetof(LocalizableResourceLoader_1_t6CC3BB582EA259156AF64985E72C541EFE88D9E6, ___FallbackToSource_7)); }
	inline bool get_FallbackToSource_7() const { return ___FallbackToSource_7; }
	inline bool* get_address_of_FallbackToSource_7() { return &___FallbackToSource_7; }
	inline void set_FallbackToSource_7(bool value)
	{
		___FallbackToSource_7 = value;
	}

	inline static int32_t get_offset_of_overrideLocale_8() { return static_cast<int32_t>(offsetof(LocalizableResourceLoader_1_t6CC3BB582EA259156AF64985E72C541EFE88D9E6, ___overrideLocale_8)); }
	inline String_t* get_overrideLocale_8() const { return ___overrideLocale_8; }
	inline String_t** get_address_of_overrideLocale_8() { return &___overrideLocale_8; }
	inline void set_overrideLocale_8(String_t* value)
	{
		___overrideLocale_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___overrideLocale_8), (void*)value);
	}
};


// System.Nullable`1<System.Int32>
struct  Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// Naninovel.Resource`1<UnityEngine.Video.VideoClip>
struct  Resource_1_t8A5083E4E0F7B7D7F3E64338DF3B0C6103550999  : public Resource_t5E31300A22B216FCEBBC753F6F471D78393ED06C
{
public:

public:
};

struct Resource_1_t8A5083E4E0F7B7D7F3E64338DF3B0C6103550999_StaticFields
{
public:
	// Naninovel.Resource`1<TResource> Naninovel.Resource`1::Invalid
	Resource_1_t8A5083E4E0F7B7D7F3E64338DF3B0C6103550999 * ___Invalid_3;

public:
	inline static int32_t get_offset_of_Invalid_3() { return static_cast<int32_t>(offsetof(Resource_1_t8A5083E4E0F7B7D7F3E64338DF3B0C6103550999_StaticFields, ___Invalid_3)); }
	inline Resource_1_t8A5083E4E0F7B7D7F3E64338DF3B0C6103550999 * get_Invalid_3() const { return ___Invalid_3; }
	inline Resource_1_t8A5083E4E0F7B7D7F3E64338DF3B0C6103550999 ** get_address_of_Invalid_3() { return &___Invalid_3; }
	inline void set_Invalid_3(Resource_1_t8A5083E4E0F7B7D7F3E64338DF3B0C6103550999 * value)
	{
		___Invalid_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Invalid_3), (void*)value);
	}
};


// Naninovel.SerializableMap`2<System.String,System.Boolean>
struct  SerializableMap_2_t0EBD18F6762E27FE6CD01891D0B646ADE3E2C0D2  : public SerializableMap_t7C4B781B891BDA713A3C3452553E68D69253BD9D
{
public:
	// TKey[] Naninovel.SerializableMap`2::keys
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___keys_0;
	// TValue[] Naninovel.SerializableMap`2::values
	BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* ___values_1;
	// Naninovel.SerializableMap/Dictionary`2<TKey,TValue> Naninovel.SerializableMap`2::dictionary
	Dictionary_2_tA7082B27DEED542A5C4F718E3AC7725EB9005DD4 * ___dictionary_2;

public:
	inline static int32_t get_offset_of_keys_0() { return static_cast<int32_t>(offsetof(SerializableMap_2_t0EBD18F6762E27FE6CD01891D0B646ADE3E2C0D2, ___keys_0)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_keys_0() const { return ___keys_0; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_keys_0() { return &___keys_0; }
	inline void set_keys_0(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___keys_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_0), (void*)value);
	}

	inline static int32_t get_offset_of_values_1() { return static_cast<int32_t>(offsetof(SerializableMap_2_t0EBD18F6762E27FE6CD01891D0B646ADE3E2C0D2, ___values_1)); }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* get_values_1() const { return ___values_1; }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C** get_address_of_values_1() { return &___values_1; }
	inline void set_values_1(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* value)
	{
		___values_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_1), (void*)value);
	}

	inline static int32_t get_offset_of_dictionary_2() { return static_cast<int32_t>(offsetof(SerializableMap_2_t0EBD18F6762E27FE6CD01891D0B646ADE3E2C0D2, ___dictionary_2)); }
	inline Dictionary_2_tA7082B27DEED542A5C4F718E3AC7725EB9005DD4 * get_dictionary_2() const { return ___dictionary_2; }
	inline Dictionary_2_tA7082B27DEED542A5C4F718E3AC7725EB9005DD4 ** get_address_of_dictionary_2() { return &___dictionary_2; }
	inline void set_dictionary_2(Dictionary_2_tA7082B27DEED542A5C4F718E3AC7725EB9005DD4 * value)
	{
		___dictionary_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_2), (void*)value);
	}
};


// UniRx.Async.UniTask`1<Naninovel.Resource`1<UnityEngine.Video.VideoClip>>
struct  UniTask_1_t0F1467ED8AB1A67EAA6B956FFCFECB83640C3607 
{
public:
	// T UniRx.Async.UniTask`1::result
	Resource_1_t8A5083E4E0F7B7D7F3E64338DF3B0C6103550999 * ___result_0;
	// UniRx.Async.IAwaiter`1<T> UniRx.Async.UniTask`1::awaiter
	RuntimeObject* ___awaiter_1;

public:
	inline static int32_t get_offset_of_result_0() { return static_cast<int32_t>(offsetof(UniTask_1_t0F1467ED8AB1A67EAA6B956FFCFECB83640C3607, ___result_0)); }
	inline Resource_1_t8A5083E4E0F7B7D7F3E64338DF3B0C6103550999 * get_result_0() const { return ___result_0; }
	inline Resource_1_t8A5083E4E0F7B7D7F3E64338DF3B0C6103550999 ** get_address_of_result_0() { return &___result_0; }
	inline void set_result_0(Resource_1_t8A5083E4E0F7B7D7F3E64338DF3B0C6103550999 * value)
	{
		___result_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___result_0), (void*)value);
	}

	inline static int32_t get_offset_of_awaiter_1() { return static_cast<int32_t>(offsetof(UniTask_1_t0F1467ED8AB1A67EAA6B956FFCFECB83640C3607, ___awaiter_1)); }
	inline RuntimeObject* get_awaiter_1() const { return ___awaiter_1; }
	inline RuntimeObject** get_address_of_awaiter_1() { return &___awaiter_1; }
	inline void set_awaiter_1(RuntimeObject* value)
	{
		___awaiter_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___awaiter_1), (void*)value);
	}
};


// UniRx.Async.UniTask`1<System.Single[]>
struct  UniTask_1_tC50F18074075969ECB5EE6133BCE0BB2665BB88F 
{
public:
	// T UniRx.Async.UniTask`1::result
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___result_0;
	// UniRx.Async.IAwaiter`1<T> UniRx.Async.UniTask`1::awaiter
	RuntimeObject* ___awaiter_1;

public:
	inline static int32_t get_offset_of_result_0() { return static_cast<int32_t>(offsetof(UniTask_1_tC50F18074075969ECB5EE6133BCE0BB2665BB88F, ___result_0)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_result_0() const { return ___result_0; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_result_0() { return &___result_0; }
	inline void set_result_0(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___result_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___result_0), (void*)value);
	}

	inline static int32_t get_offset_of_awaiter_1() { return static_cast<int32_t>(offsetof(UniTask_1_tC50F18074075969ECB5EE6133BCE0BB2665BB88F, ___awaiter_1)); }
	inline RuntimeObject* get_awaiter_1() const { return ___awaiter_1; }
	inline RuntimeObject** get_address_of_awaiter_1() { return &___awaiter_1; }
	inline void set_awaiter_1(RuntimeObject* value)
	{
		___awaiter_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___awaiter_1), (void*)value);
	}
};


// UniRx.Async.UniTask`1<UnityEngine.AudioClip>
struct  UniTask_1_tD2ECA67D5FF45EF664E0E3B62AFF9FBEAC959D67 
{
public:
	// T UniRx.Async.UniTask`1::result
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___result_0;
	// UniRx.Async.IAwaiter`1<T> UniRx.Async.UniTask`1::awaiter
	RuntimeObject* ___awaiter_1;

public:
	inline static int32_t get_offset_of_result_0() { return static_cast<int32_t>(offsetof(UniTask_1_tD2ECA67D5FF45EF664E0E3B62AFF9FBEAC959D67, ___result_0)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_result_0() const { return ___result_0; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_result_0() { return &___result_0; }
	inline void set_result_0(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___result_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___result_0), (void*)value);
	}

	inline static int32_t get_offset_of_awaiter_1() { return static_cast<int32_t>(offsetof(UniTask_1_tD2ECA67D5FF45EF664E0E3B62AFF9FBEAC959D67, ___awaiter_1)); }
	inline RuntimeObject* get_awaiter_1() const { return ___awaiter_1; }
	inline RuntimeObject** get_address_of_awaiter_1() { return &___awaiter_1; }
	inline void set_awaiter_1(RuntimeObject* value)
	{
		___awaiter_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___awaiter_1), (void*)value);
	}
};


// UniRx.Async.UniTask`1<Naninovel.GlobalStateMap>
struct  UniTask_1_t492CDA3ADD676CAA0B8B193F8AB7CDD8F54BF5F5 
{
public:
	// T UniRx.Async.UniTask`1::result
	GlobalStateMap_t30FDDE19DD3F6E3C8EE56F95DA28DAAFEE9DF0D5 * ___result_0;
	// UniRx.Async.IAwaiter`1<T> UniRx.Async.UniTask`1::awaiter
	RuntimeObject* ___awaiter_1;

public:
	inline static int32_t get_offset_of_result_0() { return static_cast<int32_t>(offsetof(UniTask_1_t492CDA3ADD676CAA0B8B193F8AB7CDD8F54BF5F5, ___result_0)); }
	inline GlobalStateMap_t30FDDE19DD3F6E3C8EE56F95DA28DAAFEE9DF0D5 * get_result_0() const { return ___result_0; }
	inline GlobalStateMap_t30FDDE19DD3F6E3C8EE56F95DA28DAAFEE9DF0D5 ** get_address_of_result_0() { return &___result_0; }
	inline void set_result_0(GlobalStateMap_t30FDDE19DD3F6E3C8EE56F95DA28DAAFEE9DF0D5 * value)
	{
		___result_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___result_0), (void*)value);
	}

	inline static int32_t get_offset_of_awaiter_1() { return static_cast<int32_t>(offsetof(UniTask_1_t492CDA3ADD676CAA0B8B193F8AB7CDD8F54BF5F5, ___awaiter_1)); }
	inline RuntimeObject* get_awaiter_1() const { return ___awaiter_1; }
	inline RuntimeObject** get_address_of_awaiter_1() { return &___awaiter_1; }
	inline void set_awaiter_1(RuntimeObject* value)
	{
		___awaiter_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___awaiter_1), (void*)value);
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


// UniRx.Async.UniTask`1<Naninovel.VideoBackground/VideoData>
struct  UniTask_1_tAAD1C29A0EA451DC7946ED7921521AD191FB2674 
{
public:
	// T UniRx.Async.UniTask`1::result
	VideoData_t995725B9BB3E0B9FADDA15CD9D34810784D73AD2 * ___result_0;
	// UniRx.Async.IAwaiter`1<T> UniRx.Async.UniTask`1::awaiter
	RuntimeObject* ___awaiter_1;

public:
	inline static int32_t get_offset_of_result_0() { return static_cast<int32_t>(offsetof(UniTask_1_tAAD1C29A0EA451DC7946ED7921521AD191FB2674, ___result_0)); }
	inline VideoData_t995725B9BB3E0B9FADDA15CD9D34810784D73AD2 * get_result_0() const { return ___result_0; }
	inline VideoData_t995725B9BB3E0B9FADDA15CD9D34810784D73AD2 ** get_address_of_result_0() { return &___result_0; }
	inline void set_result_0(VideoData_t995725B9BB3E0B9FADDA15CD9D34810784D73AD2 * value)
	{
		___result_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___result_0), (void*)value);
	}

	inline static int32_t get_offset_of_awaiter_1() { return static_cast<int32_t>(offsetof(UniTask_1_tAAD1C29A0EA451DC7946ED7921521AD191FB2674, ___awaiter_1)); }
	inline RuntimeObject* get_awaiter_1() const { return ___awaiter_1; }
	inline RuntimeObject** get_address_of_awaiter_1() { return &___awaiter_1; }
	inline void set_awaiter_1(RuntimeObject* value)
	{
		___awaiter_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___awaiter_1), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct  UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder
struct  AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 
{
public:
	// UniRx.Async.UniTaskCompletionSource UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder::promise
	UniTaskCompletionSource_t350D0ADD99ECD117EC0E4A64732808CCC787CDE9 * ___promise_0;
	// System.Action UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder::moveNext
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___moveNext_1;

public:
	inline static int32_t get_offset_of_promise_0() { return static_cast<int32_t>(offsetof(AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33, ___promise_0)); }
	inline UniTaskCompletionSource_t350D0ADD99ECD117EC0E4A64732808CCC787CDE9 * get_promise_0() const { return ___promise_0; }
	inline UniTaskCompletionSource_t350D0ADD99ECD117EC0E4A64732808CCC787CDE9 ** get_address_of_promise_0() { return &___promise_0; }
	inline void set_promise_0(UniTaskCompletionSource_t350D0ADD99ECD117EC0E4A64732808CCC787CDE9 * value)
	{
		___promise_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___promise_0), (void*)value);
	}

	inline static int32_t get_offset_of_moveNext_1() { return static_cast<int32_t>(offsetof(AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33, ___moveNext_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_moveNext_1() const { return ___moveNext_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_moveNext_1() { return &___moveNext_1; }
	inline void set_moveNext_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___moveNext_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___moveNext_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder
struct AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33_marshaled_pinvoke
{
	UniTaskCompletionSource_t350D0ADD99ECD117EC0E4A64732808CCC787CDE9 * ___promise_0;
	Il2CppMethodPointer ___moveNext_1;
};
// Native definition for COM marshalling of UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder
struct AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33_marshaled_com
{
	UniTaskCompletionSource_t350D0ADD99ECD117EC0E4A64732808CCC787CDE9 * ___promise_0;
	Il2CppMethodPointer ___moveNext_1;
};

// UniRx.Async.CompilerServices.AsyncUniTaskVoidMethodBuilder
struct  AsyncUniTaskVoidMethodBuilder_t0F142C0A47AC5AC99C2722FCC38BC01C73F8631E 
{
public:
	// System.Action UniRx.Async.CompilerServices.AsyncUniTaskVoidMethodBuilder::moveNext
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___moveNext_0;

public:
	inline static int32_t get_offset_of_moveNext_0() { return static_cast<int32_t>(offsetof(AsyncUniTaskVoidMethodBuilder_t0F142C0A47AC5AC99C2722FCC38BC01C73F8631E, ___moveNext_0)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_moveNext_0() const { return ___moveNext_0; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_moveNext_0() { return &___moveNext_0; }
	inline void set_moveNext_0(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___moveNext_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___moveNext_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UniRx.Async.CompilerServices.AsyncUniTaskVoidMethodBuilder
struct AsyncUniTaskVoidMethodBuilder_t0F142C0A47AC5AC99C2722FCC38BC01C73F8631E_marshaled_pinvoke
{
	Il2CppMethodPointer ___moveNext_0;
};
// Native definition for COM marshalling of UniRx.Async.CompilerServices.AsyncUniTaskVoidMethodBuilder
struct AsyncUniTaskVoidMethodBuilder_t0F142C0A47AC5AC99C2722FCC38BC01C73F8631E_marshaled_com
{
	Il2CppMethodPointer ___moveNext_0;
};

// UniRx.Async.AsyncUnit
struct  AsyncUnit_t541F98384426E9F8E9D48A2A044111CE8CF0F5A3 
{
public:
	union
	{
		struct
		{
		};
		uint8_t AsyncUnit_t541F98384426E9F8E9D48A2A044111CE8CF0F5A3__padding[1];
	};

public:
};

struct AsyncUnit_t541F98384426E9F8E9D48A2A044111CE8CF0F5A3_StaticFields
{
public:
	// UniRx.Async.AsyncUnit UniRx.Async.AsyncUnit::Default
	AsyncUnit_t541F98384426E9F8E9D48A2A044111CE8CF0F5A3  ___Default_0;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(AsyncUnit_t541F98384426E9F8E9D48A2A044111CE8CF0F5A3_StaticFields, ___Default_0)); }
	inline AsyncUnit_t541F98384426E9F8E9D48A2A044111CE8CF0F5A3  get_Default_0() const { return ___Default_0; }
	inline AsyncUnit_t541F98384426E9F8E9D48A2A044111CE8CF0F5A3 * get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(AsyncUnit_t541F98384426E9F8E9D48A2A044111CE8CF0F5A3  value)
	{
		___Default_0 = value;
	}
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

// UnityEngine.Color
struct  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
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

// Naninovel.GlobalStateMap
struct  GlobalStateMap_t30FDDE19DD3F6E3C8EE56F95DA28DAAFEE9DF0D5  : public StateMap_tF9F312C96797C47C86D856A3386946A8A10C6C64
{
public:

public:
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


// Naninovel.PlaybackSpot
struct  PlaybackSpot_t9DD5DF963E07CE297F69CF2A61452173F1E04389 
{
public:
	// System.String Naninovel.PlaybackSpot::scriptName
	String_t* ___scriptName_1;
	// System.Int32 Naninovel.PlaybackSpot::lineIndex
	int32_t ___lineIndex_2;
	// System.Int32 Naninovel.PlaybackSpot::inlineIndex
	int32_t ___inlineIndex_3;

public:
	inline static int32_t get_offset_of_scriptName_1() { return static_cast<int32_t>(offsetof(PlaybackSpot_t9DD5DF963E07CE297F69CF2A61452173F1E04389, ___scriptName_1)); }
	inline String_t* get_scriptName_1() const { return ___scriptName_1; }
	inline String_t** get_address_of_scriptName_1() { return &___scriptName_1; }
	inline void set_scriptName_1(String_t* value)
	{
		___scriptName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scriptName_1), (void*)value);
	}

	inline static int32_t get_offset_of_lineIndex_2() { return static_cast<int32_t>(offsetof(PlaybackSpot_t9DD5DF963E07CE297F69CF2A61452173F1E04389, ___lineIndex_2)); }
	inline int32_t get_lineIndex_2() const { return ___lineIndex_2; }
	inline int32_t* get_address_of_lineIndex_2() { return &___lineIndex_2; }
	inline void set_lineIndex_2(int32_t value)
	{
		___lineIndex_2 = value;
	}

	inline static int32_t get_offset_of_inlineIndex_3() { return static_cast<int32_t>(offsetof(PlaybackSpot_t9DD5DF963E07CE297F69CF2A61452173F1E04389, ___inlineIndex_3)); }
	inline int32_t get_inlineIndex_3() const { return ___inlineIndex_3; }
	inline int32_t* get_address_of_inlineIndex_3() { return &___inlineIndex_3; }
	inline void set_inlineIndex_3(int32_t value)
	{
		___inlineIndex_3 = value;
	}
};

struct PlaybackSpot_t9DD5DF963E07CE297F69CF2A61452173F1E04389_StaticFields
{
public:
	// Naninovel.PlaybackSpot Naninovel.PlaybackSpot::Invalid
	PlaybackSpot_t9DD5DF963E07CE297F69CF2A61452173F1E04389  ___Invalid_0;

public:
	inline static int32_t get_offset_of_Invalid_0() { return static_cast<int32_t>(offsetof(PlaybackSpot_t9DD5DF963E07CE297F69CF2A61452173F1E04389_StaticFields, ___Invalid_0)); }
	inline PlaybackSpot_t9DD5DF963E07CE297F69CF2A61452173F1E04389  get_Invalid_0() const { return ___Invalid_0; }
	inline PlaybackSpot_t9DD5DF963E07CE297F69CF2A61452173F1E04389 * get_address_of_Invalid_0() { return &___Invalid_0; }
	inline void set_Invalid_0(PlaybackSpot_t9DD5DF963E07CE297F69CF2A61452173F1E04389  value)
	{
		___Invalid_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___Invalid_0))->___scriptName_1), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of Naninovel.PlaybackSpot
struct PlaybackSpot_t9DD5DF963E07CE297F69CF2A61452173F1E04389_marshaled_pinvoke
{
	char* ___scriptName_1;
	int32_t ___lineIndex_2;
	int32_t ___inlineIndex_3;
};
// Native definition for COM marshalling of Naninovel.PlaybackSpot
struct PlaybackSpot_t9DD5DF963E07CE297F69CF2A61452173F1E04389_marshaled_com
{
	Il2CppChar* ___scriptName_1;
	int32_t ___lineIndex_2;
	int32_t ___inlineIndex_3;
};

// UnityEngine.Quaternion
struct  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// System.Single
struct  Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.UI.SpriteState
struct  SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_HighlightedSprite_0)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_PressedSprite_1)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_SelectedSprite_2)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_DisabledSprite_3)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_pinvoke
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_com
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};

// UnityEngine.Vector2
struct  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector2Int
struct  Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 
{
public:
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;

public:
	inline static int32_t get_offset_of_m_X_0() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9, ___m_X_0)); }
	inline int32_t get_m_X_0() const { return ___m_X_0; }
	inline int32_t* get_address_of_m_X_0() { return &___m_X_0; }
	inline void set_m_X_0(int32_t value)
	{
		___m_X_0 = value;
	}

	inline static int32_t get_offset_of_m_Y_1() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9, ___m_Y_1)); }
	inline int32_t get_m_Y_1() const { return ___m_Y_1; }
	inline int32_t* get_address_of_m_Y_1() { return &___m_Y_1; }
	inline void set_m_Y_1(int32_t value)
	{
		___m_Y_1 = value;
	}
};

struct Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields
{
public:
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Zero
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Zero_2;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_One
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_One_3;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Up
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Up_4;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Down
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Down_5;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Left
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Left_6;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Right
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Right_7;

public:
	inline static int32_t get_offset_of_s_Zero_2() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Zero_2)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Zero_2() const { return ___s_Zero_2; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Zero_2() { return &___s_Zero_2; }
	inline void set_s_Zero_2(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Zero_2 = value;
	}

	inline static int32_t get_offset_of_s_One_3() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_One_3)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_One_3() const { return ___s_One_3; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_One_3() { return &___s_One_3; }
	inline void set_s_One_3(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_One_3 = value;
	}

	inline static int32_t get_offset_of_s_Up_4() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Up_4)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Up_4() const { return ___s_Up_4; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Up_4() { return &___s_Up_4; }
	inline void set_s_Up_4(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Up_4 = value;
	}

	inline static int32_t get_offset_of_s_Down_5() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Down_5)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Down_5() const { return ___s_Down_5; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Down_5() { return &___s_Down_5; }
	inline void set_s_Down_5(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Down_5 = value;
	}

	inline static int32_t get_offset_of_s_Left_6() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Left_6)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Left_6() const { return ___s_Left_6; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Left_6() { return &___s_Left_6; }
	inline void set_s_Left_6(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Left_6 = value;
	}

	inline static int32_t get_offset_of_s_Right_7() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Right_7)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Right_7() const { return ___s_Right_7; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Right_7() { return &___s_Right_7; }
	inline void set_s_Right_7(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Right_7 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
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


// Naninovel.CameraManager/GameState/CameraComponent
struct  CameraComponent_tF855104A2D2D8F69BD4C3128C3BC10A1013B7B46 
{
public:
	// System.String Naninovel.CameraManager/GameState/CameraComponent::TypeName
	String_t* ___TypeName_0;
	// System.Boolean Naninovel.CameraManager/GameState/CameraComponent::Enabled
	bool ___Enabled_1;

public:
	inline static int32_t get_offset_of_TypeName_0() { return static_cast<int32_t>(offsetof(CameraComponent_tF855104A2D2D8F69BD4C3128C3BC10A1013B7B46, ___TypeName_0)); }
	inline String_t* get_TypeName_0() const { return ___TypeName_0; }
	inline String_t** get_address_of_TypeName_0() { return &___TypeName_0; }
	inline void set_TypeName_0(String_t* value)
	{
		___TypeName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TypeName_0), (void*)value);
	}

	inline static int32_t get_offset_of_Enabled_1() { return static_cast<int32_t>(offsetof(CameraComponent_tF855104A2D2D8F69BD4C3128C3BC10A1013B7B46, ___Enabled_1)); }
	inline bool get_Enabled_1() const { return ___Enabled_1; }
	inline bool* get_address_of_Enabled_1() { return &___Enabled_1; }
	inline void set_Enabled_1(bool value)
	{
		___Enabled_1 = value;
	}
};

// Native definition for P/Invoke marshalling of Naninovel.CameraManager/GameState/CameraComponent
struct CameraComponent_tF855104A2D2D8F69BD4C3128C3BC10A1013B7B46_marshaled_pinvoke
{
	char* ___TypeName_0;
	int32_t ___Enabled_1;
};
// Native definition for COM marshalling of Naninovel.CameraManager/GameState/CameraComponent
struct CameraComponent_tF855104A2D2D8F69BD4C3128C3BC10A1013B7B46_marshaled_com
{
	Il2CppChar* ___TypeName_0;
	int32_t ___Enabled_1;
};

// Naninovel.ExpressionEvaluator/Functions/DocAttribute
struct  DocAttribute_t592DE083364B243D5AA762A700C8B1C75B6E7C3C  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String Naninovel.ExpressionEvaluator/Functions/DocAttribute::<Description>k__BackingField
	String_t* ___U3CDescriptionU3Ek__BackingField_0;
	// System.String Naninovel.ExpressionEvaluator/Functions/DocAttribute::<Example>k__BackingField
	String_t* ___U3CExampleU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CDescriptionU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(DocAttribute_t592DE083364B243D5AA762A700C8B1C75B6E7C3C, ___U3CDescriptionU3Ek__BackingField_0)); }
	inline String_t* get_U3CDescriptionU3Ek__BackingField_0() const { return ___U3CDescriptionU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CDescriptionU3Ek__BackingField_0() { return &___U3CDescriptionU3Ek__BackingField_0; }
	inline void set_U3CDescriptionU3Ek__BackingField_0(String_t* value)
	{
		___U3CDescriptionU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDescriptionU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CExampleU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(DocAttribute_t592DE083364B243D5AA762A700C8B1C75B6E7C3C, ___U3CExampleU3Ek__BackingField_1)); }
	inline String_t* get_U3CExampleU3Ek__BackingField_1() const { return ___U3CExampleU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CExampleU3Ek__BackingField_1() { return &___U3CExampleU3Ek__BackingField_1; }
	inline void set_U3CExampleU3Ek__BackingField_1(String_t* value)
	{
		___U3CExampleU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CExampleU3Ek__BackingField_1), (void*)value);
	}
};


// UniRx.Async.UniTask`1/Awaiter<Naninovel.Resource`1<UnityEngine.Video.VideoClip>>
struct  Awaiter_t8473B6ABE125918A05A5157E70D00B9F0DE43CCD 
{
public:
	// UniRx.Async.UniTask`1<T> UniRx.Async.UniTask`1/Awaiter::task
	UniTask_1_t0F1467ED8AB1A67EAA6B956FFCFECB83640C3607  ___task_0;

public:
	inline static int32_t get_offset_of_task_0() { return static_cast<int32_t>(offsetof(Awaiter_t8473B6ABE125918A05A5157E70D00B9F0DE43CCD, ___task_0)); }
	inline UniTask_1_t0F1467ED8AB1A67EAA6B956FFCFECB83640C3607  get_task_0() const { return ___task_0; }
	inline UniTask_1_t0F1467ED8AB1A67EAA6B956FFCFECB83640C3607 * get_address_of_task_0() { return &___task_0; }
	inline void set_task_0(UniTask_1_t0F1467ED8AB1A67EAA6B956FFCFECB83640C3607  value)
	{
		___task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___task_0))->___result_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___task_0))->___awaiter_1), (void*)NULL);
		#endif
	}
};


// UniRx.Async.UniTask`1/Awaiter<System.Single[]>
struct  Awaiter_t9F63A7154247DFB58C781A45AF44C5B8E8FE3EE2 
{
public:
	// UniRx.Async.UniTask`1<T> UniRx.Async.UniTask`1/Awaiter::task
	UniTask_1_tC50F18074075969ECB5EE6133BCE0BB2665BB88F  ___task_0;

public:
	inline static int32_t get_offset_of_task_0() { return static_cast<int32_t>(offsetof(Awaiter_t9F63A7154247DFB58C781A45AF44C5B8E8FE3EE2, ___task_0)); }
	inline UniTask_1_tC50F18074075969ECB5EE6133BCE0BB2665BB88F  get_task_0() const { return ___task_0; }
	inline UniTask_1_tC50F18074075969ECB5EE6133BCE0BB2665BB88F * get_address_of_task_0() { return &___task_0; }
	inline void set_task_0(UniTask_1_tC50F18074075969ECB5EE6133BCE0BB2665BB88F  value)
	{
		___task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___task_0))->___result_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___task_0))->___awaiter_1), (void*)NULL);
		#endif
	}
};


// UniRx.Async.UniTask`1/Awaiter<UnityEngine.AudioClip>
struct  Awaiter_tD9F19E0615823FE62189D1CB3B5026C8A71A356A 
{
public:
	// UniRx.Async.UniTask`1<T> UniRx.Async.UniTask`1/Awaiter::task
	UniTask_1_tD2ECA67D5FF45EF664E0E3B62AFF9FBEAC959D67  ___task_0;

public:
	inline static int32_t get_offset_of_task_0() { return static_cast<int32_t>(offsetof(Awaiter_tD9F19E0615823FE62189D1CB3B5026C8A71A356A, ___task_0)); }
	inline UniTask_1_tD2ECA67D5FF45EF664E0E3B62AFF9FBEAC959D67  get_task_0() const { return ___task_0; }
	inline UniTask_1_tD2ECA67D5FF45EF664E0E3B62AFF9FBEAC959D67 * get_address_of_task_0() { return &___task_0; }
	inline void set_task_0(UniTask_1_tD2ECA67D5FF45EF664E0E3B62AFF9FBEAC959D67  value)
	{
		___task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___task_0))->___result_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___task_0))->___awaiter_1), (void*)NULL);
		#endif
	}
};


// UniRx.Async.UniTask`1/Awaiter<Naninovel.GlobalStateMap>
struct  Awaiter_t2A04123A9B29D02DBE393CFF44AD80850561C5C0 
{
public:
	// UniRx.Async.UniTask`1<T> UniRx.Async.UniTask`1/Awaiter::task
	UniTask_1_t492CDA3ADD676CAA0B8B193F8AB7CDD8F54BF5F5  ___task_0;

public:
	inline static int32_t get_offset_of_task_0() { return static_cast<int32_t>(offsetof(Awaiter_t2A04123A9B29D02DBE393CFF44AD80850561C5C0, ___task_0)); }
	inline UniTask_1_t492CDA3ADD676CAA0B8B193F8AB7CDD8F54BF5F5  get_task_0() const { return ___task_0; }
	inline UniTask_1_t492CDA3ADD676CAA0B8B193F8AB7CDD8F54BF5F5 * get_address_of_task_0() { return &___task_0; }
	inline void set_task_0(UniTask_1_t492CDA3ADD676CAA0B8B193F8AB7CDD8F54BF5F5  value)
	{
		___task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___task_0))->___result_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___task_0))->___awaiter_1), (void*)NULL);
		#endif
	}
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


// UniRx.Async.UniTask`1/Awaiter<Naninovel.VideoBackground/VideoData>
struct  Awaiter_t2EC4E48D6D8C5EC90776FBA7B42075F059E21967 
{
public:
	// UniRx.Async.UniTask`1<T> UniRx.Async.UniTask`1/Awaiter::task
	UniTask_1_tAAD1C29A0EA451DC7946ED7921521AD191FB2674  ___task_0;

public:
	inline static int32_t get_offset_of_task_0() { return static_cast<int32_t>(offsetof(Awaiter_t2EC4E48D6D8C5EC90776FBA7B42075F059E21967, ___task_0)); }
	inline UniTask_1_tAAD1C29A0EA451DC7946ED7921521AD191FB2674  get_task_0() const { return ___task_0; }
	inline UniTask_1_tAAD1C29A0EA451DC7946ED7921521AD191FB2674 * get_address_of_task_0() { return &___task_0; }
	inline void set_task_0(UniTask_1_tAAD1C29A0EA451DC7946ED7921521AD191FB2674  value)
	{
		___task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___task_0))->___result_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___task_0))->___awaiter_1), (void*)NULL);
		#endif
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct  Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___dictionary_0)); }
	inline Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___current_3)); }
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<System.String,Naninovel.VideoBackground/VideoData>
struct  Enumerator_tDB6A1BEA398EC278FC8C6F9F2D6B2B2715BB7AB8 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_tB0D6F5B541B0F32F9BD4447204B50E4D0A15213E * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_tCFA0FBC9A13D1364F07E32F988EE04F5B9FA273C  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tDB6A1BEA398EC278FC8C6F9F2D6B2B2715BB7AB8, ___dictionary_0)); }
	inline Dictionary_2_tB0D6F5B541B0F32F9BD4447204B50E4D0A15213E * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tB0D6F5B541B0F32F9BD4447204B50E4D0A15213E ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tB0D6F5B541B0F32F9BD4447204B50E4D0A15213E * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_tDB6A1BEA398EC278FC8C6F9F2D6B2B2715BB7AB8, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_tDB6A1BEA398EC278FC8C6F9F2D6B2B2715BB7AB8, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tDB6A1BEA398EC278FC8C6F9F2D6B2B2715BB7AB8, ___current_3)); }
	inline KeyValuePair_2_tCFA0FBC9A13D1364F07E32F988EE04F5B9FA273C  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_tCFA0FBC9A13D1364F07E32F988EE04F5B9FA273C * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_tCFA0FBC9A13D1364F07E32F988EE04F5B9FA273C  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_tDB6A1BEA398EC278FC8C6F9F2D6B2B2715BB7AB8, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// Naninovel.MonoBehaviourActor`1<Naninovel.BackgroundMetadata>
struct  MonoBehaviourActor_1_tACAE5ACF4DC1430790E2A00C612F35B01916AACC  : public RuntimeObject
{
public:
	// System.String Naninovel.MonoBehaviourActor`1::<Id>k__BackingField
	String_t* ___U3CIdU3Ek__BackingField_0;
	// TMeta Naninovel.MonoBehaviourActor`1::<ActorMetadata>k__BackingField
	BackgroundMetadata_tB3D37C09DD002AA63FC7925A323AF344B964823F * ___U3CActorMetadataU3Ek__BackingField_1;
	// UnityEngine.GameObject Naninovel.MonoBehaviourActor`1::<GameObject>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CGameObjectU3Ek__BackingField_2;
	// Naninovel.Tweener`1<Naninovel.VectorTween> Naninovel.MonoBehaviourActor`1::positionTweener
	Tweener_1_t5394A87159F4AE1FF99556A020913D48B6C7FF5A * ___positionTweener_3;
	// Naninovel.Tweener`1<Naninovel.VectorTween> Naninovel.MonoBehaviourActor`1::rotationTweener
	Tweener_1_t5394A87159F4AE1FF99556A020913D48B6C7FF5A * ___rotationTweener_4;
	// Naninovel.Tweener`1<Naninovel.VectorTween> Naninovel.MonoBehaviourActor`1::scaleTweener
	Tweener_1_t5394A87159F4AE1FF99556A020913D48B6C7FF5A * ___scaleTweener_5;
	// Naninovel.Tweener`1<Naninovel.ColorTween> Naninovel.MonoBehaviourActor`1::tintColorTweener
	Tweener_1_t1D8297D2A0C9598928583CD2F719887DFDFB11FA * ___tintColorTweener_6;
	// UnityEngine.Vector3 Naninovel.MonoBehaviourActor`1::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_7;
	// UnityEngine.Vector3 Naninovel.MonoBehaviourActor`1::scale
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___scale_8;
	// UnityEngine.Quaternion Naninovel.MonoBehaviourActor`1::rotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation_9;
	// UnityEngine.Color Naninovel.MonoBehaviourActor`1::tintColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___tintColor_10;

public:
	inline static int32_t get_offset_of_U3CIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MonoBehaviourActor_1_tACAE5ACF4DC1430790E2A00C612F35B01916AACC, ___U3CIdU3Ek__BackingField_0)); }
	inline String_t* get_U3CIdU3Ek__BackingField_0() const { return ___U3CIdU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CIdU3Ek__BackingField_0() { return &___U3CIdU3Ek__BackingField_0; }
	inline void set_U3CIdU3Ek__BackingField_0(String_t* value)
	{
		___U3CIdU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CIdU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CActorMetadataU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(MonoBehaviourActor_1_tACAE5ACF4DC1430790E2A00C612F35B01916AACC, ___U3CActorMetadataU3Ek__BackingField_1)); }
	inline BackgroundMetadata_tB3D37C09DD002AA63FC7925A323AF344B964823F * get_U3CActorMetadataU3Ek__BackingField_1() const { return ___U3CActorMetadataU3Ek__BackingField_1; }
	inline BackgroundMetadata_tB3D37C09DD002AA63FC7925A323AF344B964823F ** get_address_of_U3CActorMetadataU3Ek__BackingField_1() { return &___U3CActorMetadataU3Ek__BackingField_1; }
	inline void set_U3CActorMetadataU3Ek__BackingField_1(BackgroundMetadata_tB3D37C09DD002AA63FC7925A323AF344B964823F * value)
	{
		___U3CActorMetadataU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CActorMetadataU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CGameObjectU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(MonoBehaviourActor_1_tACAE5ACF4DC1430790E2A00C612F35B01916AACC, ___U3CGameObjectU3Ek__BackingField_2)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CGameObjectU3Ek__BackingField_2() const { return ___U3CGameObjectU3Ek__BackingField_2; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CGameObjectU3Ek__BackingField_2() { return &___U3CGameObjectU3Ek__BackingField_2; }
	inline void set_U3CGameObjectU3Ek__BackingField_2(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CGameObjectU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CGameObjectU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_positionTweener_3() { return static_cast<int32_t>(offsetof(MonoBehaviourActor_1_tACAE5ACF4DC1430790E2A00C612F35B01916AACC, ___positionTweener_3)); }
	inline Tweener_1_t5394A87159F4AE1FF99556A020913D48B6C7FF5A * get_positionTweener_3() const { return ___positionTweener_3; }
	inline Tweener_1_t5394A87159F4AE1FF99556A020913D48B6C7FF5A ** get_address_of_positionTweener_3() { return &___positionTweener_3; }
	inline void set_positionTweener_3(Tweener_1_t5394A87159F4AE1FF99556A020913D48B6C7FF5A * value)
	{
		___positionTweener_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___positionTweener_3), (void*)value);
	}

	inline static int32_t get_offset_of_rotationTweener_4() { return static_cast<int32_t>(offsetof(MonoBehaviourActor_1_tACAE5ACF4DC1430790E2A00C612F35B01916AACC, ___rotationTweener_4)); }
	inline Tweener_1_t5394A87159F4AE1FF99556A020913D48B6C7FF5A * get_rotationTweener_4() const { return ___rotationTweener_4; }
	inline Tweener_1_t5394A87159F4AE1FF99556A020913D48B6C7FF5A ** get_address_of_rotationTweener_4() { return &___rotationTweener_4; }
	inline void set_rotationTweener_4(Tweener_1_t5394A87159F4AE1FF99556A020913D48B6C7FF5A * value)
	{
		___rotationTweener_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rotationTweener_4), (void*)value);
	}

	inline static int32_t get_offset_of_scaleTweener_5() { return static_cast<int32_t>(offsetof(MonoBehaviourActor_1_tACAE5ACF4DC1430790E2A00C612F35B01916AACC, ___scaleTweener_5)); }
	inline Tweener_1_t5394A87159F4AE1FF99556A020913D48B6C7FF5A * get_scaleTweener_5() const { return ___scaleTweener_5; }
	inline Tweener_1_t5394A87159F4AE1FF99556A020913D48B6C7FF5A ** get_address_of_scaleTweener_5() { return &___scaleTweener_5; }
	inline void set_scaleTweener_5(Tweener_1_t5394A87159F4AE1FF99556A020913D48B6C7FF5A * value)
	{
		___scaleTweener_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scaleTweener_5), (void*)value);
	}

	inline static int32_t get_offset_of_tintColorTweener_6() { return static_cast<int32_t>(offsetof(MonoBehaviourActor_1_tACAE5ACF4DC1430790E2A00C612F35B01916AACC, ___tintColorTweener_6)); }
	inline Tweener_1_t1D8297D2A0C9598928583CD2F719887DFDFB11FA * get_tintColorTweener_6() const { return ___tintColorTweener_6; }
	inline Tweener_1_t1D8297D2A0C9598928583CD2F719887DFDFB11FA ** get_address_of_tintColorTweener_6() { return &___tintColorTweener_6; }
	inline void set_tintColorTweener_6(Tweener_1_t1D8297D2A0C9598928583CD2F719887DFDFB11FA * value)
	{
		___tintColorTweener_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tintColorTweener_6), (void*)value);
	}

	inline static int32_t get_offset_of_position_7() { return static_cast<int32_t>(offsetof(MonoBehaviourActor_1_tACAE5ACF4DC1430790E2A00C612F35B01916AACC, ___position_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_7() const { return ___position_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_7() { return &___position_7; }
	inline void set_position_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_7 = value;
	}

	inline static int32_t get_offset_of_scale_8() { return static_cast<int32_t>(offsetof(MonoBehaviourActor_1_tACAE5ACF4DC1430790E2A00C612F35B01916AACC, ___scale_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_scale_8() const { return ___scale_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_scale_8() { return &___scale_8; }
	inline void set_scale_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___scale_8 = value;
	}

	inline static int32_t get_offset_of_rotation_9() { return static_cast<int32_t>(offsetof(MonoBehaviourActor_1_tACAE5ACF4DC1430790E2A00C612F35B01916AACC, ___rotation_9)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_rotation_9() const { return ___rotation_9; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_rotation_9() { return &___rotation_9; }
	inline void set_rotation_9(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___rotation_9 = value;
	}

	inline static int32_t get_offset_of_tintColor_10() { return static_cast<int32_t>(offsetof(MonoBehaviourActor_1_tACAE5ACF4DC1430790E2A00C612F35B01916AACC, ___tintColor_10)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_tintColor_10() const { return ___tintColor_10; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_tintColor_10() { return &___tintColor_10; }
	inline void set_tintColor_10(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___tintColor_10 = value;
	}
};


// Naninovel.MonoBehaviourActor`1<Naninovel.TextPrinterMetadata>
struct  MonoBehaviourActor_1_t8D3EC05310486C2AFC17FCEEC202F9039BC5DD03  : public RuntimeObject
{
public:
	// System.String Naninovel.MonoBehaviourActor`1::<Id>k__BackingField
	String_t* ___U3CIdU3Ek__BackingField_0;
	// TMeta Naninovel.MonoBehaviourActor`1::<ActorMetadata>k__BackingField
	TextPrinterMetadata_t8A6DF66483BD8B41A625EE654A466130F3B306E0 * ___U3CActorMetadataU3Ek__BackingField_1;
	// UnityEngine.GameObject Naninovel.MonoBehaviourActor`1::<GameObject>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CGameObjectU3Ek__BackingField_2;
	// Naninovel.Tweener`1<Naninovel.VectorTween> Naninovel.MonoBehaviourActor`1::positionTweener
	Tweener_1_t5394A87159F4AE1FF99556A020913D48B6C7FF5A * ___positionTweener_3;
	// Naninovel.Tweener`1<Naninovel.VectorTween> Naninovel.MonoBehaviourActor`1::rotationTweener
	Tweener_1_t5394A87159F4AE1FF99556A020913D48B6C7FF5A * ___rotationTweener_4;
	// Naninovel.Tweener`1<Naninovel.VectorTween> Naninovel.MonoBehaviourActor`1::scaleTweener
	Tweener_1_t5394A87159F4AE1FF99556A020913D48B6C7FF5A * ___scaleTweener_5;
	// Naninovel.Tweener`1<Naninovel.ColorTween> Naninovel.MonoBehaviourActor`1::tintColorTweener
	Tweener_1_t1D8297D2A0C9598928583CD2F719887DFDFB11FA * ___tintColorTweener_6;
	// UnityEngine.Vector3 Naninovel.MonoBehaviourActor`1::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_7;
	// UnityEngine.Vector3 Naninovel.MonoBehaviourActor`1::scale
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___scale_8;
	// UnityEngine.Quaternion Naninovel.MonoBehaviourActor`1::rotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation_9;
	// UnityEngine.Color Naninovel.MonoBehaviourActor`1::tintColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___tintColor_10;

public:
	inline static int32_t get_offset_of_U3CIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MonoBehaviourActor_1_t8D3EC05310486C2AFC17FCEEC202F9039BC5DD03, ___U3CIdU3Ek__BackingField_0)); }
	inline String_t* get_U3CIdU3Ek__BackingField_0() const { return ___U3CIdU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CIdU3Ek__BackingField_0() { return &___U3CIdU3Ek__BackingField_0; }
	inline void set_U3CIdU3Ek__BackingField_0(String_t* value)
	{
		___U3CIdU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CIdU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CActorMetadataU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(MonoBehaviourActor_1_t8D3EC05310486C2AFC17FCEEC202F9039BC5DD03, ___U3CActorMetadataU3Ek__BackingField_1)); }
	inline TextPrinterMetadata_t8A6DF66483BD8B41A625EE654A466130F3B306E0 * get_U3CActorMetadataU3Ek__BackingField_1() const { return ___U3CActorMetadataU3Ek__BackingField_1; }
	inline TextPrinterMetadata_t8A6DF66483BD8B41A625EE654A466130F3B306E0 ** get_address_of_U3CActorMetadataU3Ek__BackingField_1() { return &___U3CActorMetadataU3Ek__BackingField_1; }
	inline void set_U3CActorMetadataU3Ek__BackingField_1(TextPrinterMetadata_t8A6DF66483BD8B41A625EE654A466130F3B306E0 * value)
	{
		___U3CActorMetadataU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CActorMetadataU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CGameObjectU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(MonoBehaviourActor_1_t8D3EC05310486C2AFC17FCEEC202F9039BC5DD03, ___U3CGameObjectU3Ek__BackingField_2)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CGameObjectU3Ek__BackingField_2() const { return ___U3CGameObjectU3Ek__BackingField_2; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CGameObjectU3Ek__BackingField_2() { return &___U3CGameObjectU3Ek__BackingField_2; }
	inline void set_U3CGameObjectU3Ek__BackingField_2(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CGameObjectU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CGameObjectU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_positionTweener_3() { return static_cast<int32_t>(offsetof(MonoBehaviourActor_1_t8D3EC05310486C2AFC17FCEEC202F9039BC5DD03, ___positionTweener_3)); }
	inline Tweener_1_t5394A87159F4AE1FF99556A020913D48B6C7FF5A * get_positionTweener_3() const { return ___positionTweener_3; }
	inline Tweener_1_t5394A87159F4AE1FF99556A020913D48B6C7FF5A ** get_address_of_positionTweener_3() { return &___positionTweener_3; }
	inline void set_positionTweener_3(Tweener_1_t5394A87159F4AE1FF99556A020913D48B6C7FF5A * value)
	{
		___positionTweener_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___positionTweener_3), (void*)value);
	}

	inline static int32_t get_offset_of_rotationTweener_4() { return static_cast<int32_t>(offsetof(MonoBehaviourActor_1_t8D3EC05310486C2AFC17FCEEC202F9039BC5DD03, ___rotationTweener_4)); }
	inline Tweener_1_t5394A87159F4AE1FF99556A020913D48B6C7FF5A * get_rotationTweener_4() const { return ___rotationTweener_4; }
	inline Tweener_1_t5394A87159F4AE1FF99556A020913D48B6C7FF5A ** get_address_of_rotationTweener_4() { return &___rotationTweener_4; }
	inline void set_rotationTweener_4(Tweener_1_t5394A87159F4AE1FF99556A020913D48B6C7FF5A * value)
	{
		___rotationTweener_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rotationTweener_4), (void*)value);
	}

	inline static int32_t get_offset_of_scaleTweener_5() { return static_cast<int32_t>(offsetof(MonoBehaviourActor_1_t8D3EC05310486C2AFC17FCEEC202F9039BC5DD03, ___scaleTweener_5)); }
	inline Tweener_1_t5394A87159F4AE1FF99556A020913D48B6C7FF5A * get_scaleTweener_5() const { return ___scaleTweener_5; }
	inline Tweener_1_t5394A87159F4AE1FF99556A020913D48B6C7FF5A ** get_address_of_scaleTweener_5() { return &___scaleTweener_5; }
	inline void set_scaleTweener_5(Tweener_1_t5394A87159F4AE1FF99556A020913D48B6C7FF5A * value)
	{
		___scaleTweener_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scaleTweener_5), (void*)value);
	}

	inline static int32_t get_offset_of_tintColorTweener_6() { return static_cast<int32_t>(offsetof(MonoBehaviourActor_1_t8D3EC05310486C2AFC17FCEEC202F9039BC5DD03, ___tintColorTweener_6)); }
	inline Tweener_1_t1D8297D2A0C9598928583CD2F719887DFDFB11FA * get_tintColorTweener_6() const { return ___tintColorTweener_6; }
	inline Tweener_1_t1D8297D2A0C9598928583CD2F719887DFDFB11FA ** get_address_of_tintColorTweener_6() { return &___tintColorTweener_6; }
	inline void set_tintColorTweener_6(Tweener_1_t1D8297D2A0C9598928583CD2F719887DFDFB11FA * value)
	{
		___tintColorTweener_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tintColorTweener_6), (void*)value);
	}

	inline static int32_t get_offset_of_position_7() { return static_cast<int32_t>(offsetof(MonoBehaviourActor_1_t8D3EC05310486C2AFC17FCEEC202F9039BC5DD03, ___position_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_7() const { return ___position_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_7() { return &___position_7; }
	inline void set_position_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_7 = value;
	}

	inline static int32_t get_offset_of_scale_8() { return static_cast<int32_t>(offsetof(MonoBehaviourActor_1_t8D3EC05310486C2AFC17FCEEC202F9039BC5DD03, ___scale_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_scale_8() const { return ___scale_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_scale_8() { return &___scale_8; }
	inline void set_scale_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___scale_8 = value;
	}

	inline static int32_t get_offset_of_rotation_9() { return static_cast<int32_t>(offsetof(MonoBehaviourActor_1_t8D3EC05310486C2AFC17FCEEC202F9039BC5DD03, ___rotation_9)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_rotation_9() const { return ___rotation_9; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_rotation_9() { return &___rotation_9; }
	inline void set_rotation_9(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___rotation_9 = value;
	}

	inline static int32_t get_offset_of_tintColor_10() { return static_cast<int32_t>(offsetof(MonoBehaviourActor_1_t8D3EC05310486C2AFC17FCEEC202F9039BC5DD03, ___tintColor_10)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_tintColor_10() const { return ___tintColor_10; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_tintColor_10() { return &___tintColor_10; }
	inline void set_tintColor_10(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___tintColor_10 = value;
	}
};


// UniRx.Async.UniTask`1<UniRx.Async.AsyncUnit>
struct  UniTask_1_t7C8F299D6C48E689478E34BDD2A4B1D2D5592CF5 
{
public:
	// T UniRx.Async.UniTask`1::result
	AsyncUnit_t541F98384426E9F8E9D48A2A044111CE8CF0F5A3  ___result_0;
	// UniRx.Async.IAwaiter`1<T> UniRx.Async.UniTask`1::awaiter
	RuntimeObject* ___awaiter_1;

public:
	inline static int32_t get_offset_of_result_0() { return static_cast<int32_t>(offsetof(UniTask_1_t7C8F299D6C48E689478E34BDD2A4B1D2D5592CF5, ___result_0)); }
	inline AsyncUnit_t541F98384426E9F8E9D48A2A044111CE8CF0F5A3  get_result_0() const { return ___result_0; }
	inline AsyncUnit_t541F98384426E9F8E9D48A2A044111CE8CF0F5A3 * get_address_of_result_0() { return &___result_0; }
	inline void set_result_0(AsyncUnit_t541F98384426E9F8E9D48A2A044111CE8CF0F5A3  value)
	{
		___result_0 = value;
	}

	inline static int32_t get_offset_of_awaiter_1() { return static_cast<int32_t>(offsetof(UniTask_1_t7C8F299D6C48E689478E34BDD2A4B1D2D5592CF5, ___awaiter_1)); }
	inline RuntimeObject* get_awaiter_1() const { return ___awaiter_1; }
	inline RuntimeObject** get_address_of_awaiter_1() { return &___awaiter_1; }
	inline void set_awaiter_1(RuntimeObject* value)
	{
		___awaiter_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___awaiter_1), (void*)value);
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


// Naninovel.CancellationToken
struct  CancellationToken_t6347F75AB41E1331E57D91A3F883A02D5FA698E3 
{
public:
	// System.Threading.CancellationToken Naninovel.CancellationToken::ASAPToken
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___ASAPToken_2;
	// System.Threading.CancellationToken Naninovel.CancellationToken::LazyToken
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___LazyToken_3;

public:
	inline static int32_t get_offset_of_ASAPToken_2() { return static_cast<int32_t>(offsetof(CancellationToken_t6347F75AB41E1331E57D91A3F883A02D5FA698E3, ___ASAPToken_2)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get_ASAPToken_2() const { return ___ASAPToken_2; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of_ASAPToken_2() { return &___ASAPToken_2; }
	inline void set_ASAPToken_2(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		___ASAPToken_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___ASAPToken_2))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_LazyToken_3() { return static_cast<int32_t>(offsetof(CancellationToken_t6347F75AB41E1331E57D91A3F883A02D5FA698E3, ___LazyToken_3)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get_LazyToken_3() const { return ___LazyToken_3; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of_LazyToken_3() { return &___LazyToken_3; }
	inline void set_LazyToken_3(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		___LazyToken_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___LazyToken_3))->___m_source_0), (void*)NULL);
	}
};

struct CancellationToken_t6347F75AB41E1331E57D91A3F883A02D5FA698E3_StaticFields
{
public:
	// Naninovel.CancellationToken Naninovel.CancellationToken::<ASAPCanceled>k__BackingField
	CancellationToken_t6347F75AB41E1331E57D91A3F883A02D5FA698E3  ___U3CASAPCanceledU3Ek__BackingField_0;
	// Naninovel.CancellationToken Naninovel.CancellationToken::<LazyCanceled>k__BackingField
	CancellationToken_t6347F75AB41E1331E57D91A3F883A02D5FA698E3  ___U3CLazyCanceledU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CASAPCanceledU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(CancellationToken_t6347F75AB41E1331E57D91A3F883A02D5FA698E3_StaticFields, ___U3CASAPCanceledU3Ek__BackingField_0)); }
	inline CancellationToken_t6347F75AB41E1331E57D91A3F883A02D5FA698E3  get_U3CASAPCanceledU3Ek__BackingField_0() const { return ___U3CASAPCanceledU3Ek__BackingField_0; }
	inline CancellationToken_t6347F75AB41E1331E57D91A3F883A02D5FA698E3 * get_address_of_U3CASAPCanceledU3Ek__BackingField_0() { return &___U3CASAPCanceledU3Ek__BackingField_0; }
	inline void set_U3CASAPCanceledU3Ek__BackingField_0(CancellationToken_t6347F75AB41E1331E57D91A3F883A02D5FA698E3  value)
	{
		___U3CASAPCanceledU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CASAPCanceledU3Ek__BackingField_0))->___ASAPToken_2))->___m_source_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CASAPCanceledU3Ek__BackingField_0))->___LazyToken_3))->___m_source_0), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CLazyCanceledU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(CancellationToken_t6347F75AB41E1331E57D91A3F883A02D5FA698E3_StaticFields, ___U3CLazyCanceledU3Ek__BackingField_1)); }
	inline CancellationToken_t6347F75AB41E1331E57D91A3F883A02D5FA698E3  get_U3CLazyCanceledU3Ek__BackingField_1() const { return ___U3CLazyCanceledU3Ek__BackingField_1; }
	inline CancellationToken_t6347F75AB41E1331E57D91A3F883A02D5FA698E3 * get_address_of_U3CLazyCanceledU3Ek__BackingField_1() { return &___U3CLazyCanceledU3Ek__BackingField_1; }
	inline void set_U3CLazyCanceledU3Ek__BackingField_1(CancellationToken_t6347F75AB41E1331E57D91A3F883A02D5FA698E3  value)
	{
		___U3CLazyCanceledU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CLazyCanceledU3Ek__BackingField_1))->___ASAPToken_2))->___m_source_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CLazyCanceledU3Ek__BackingField_1))->___LazyToken_3))->___m_source_0), (void*)NULL);
		#endif
	}
};

// Native definition for P/Invoke marshalling of Naninovel.CancellationToken
struct CancellationToken_t6347F75AB41E1331E57D91A3F883A02D5FA698E3_marshaled_pinvoke
{
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshaled_pinvoke ___ASAPToken_2;
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshaled_pinvoke ___LazyToken_3;
};
// Native definition for COM marshalling of Naninovel.CancellationToken
struct CancellationToken_t6347F75AB41E1331E57D91A3F883A02D5FA698E3_marshaled_com
{
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshaled_com ___ASAPToken_2;
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshaled_com ___LazyToken_3;
};

// System.Threading.CancellationTokenSource
struct  CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3  : public RuntimeObject
{
public:
	// System.Threading.ManualResetEvent modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::m_kernelEvent
	ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * ___m_kernelEvent_3;
	// System.Threading.SparselyPopulatedArray`1<System.Threading.CancellationCallbackInfo>[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::m_registeredCallbacksLists
	SparselyPopulatedArray_1U5BU5D_t4D2064CEC206620DC5001D7C857A845833DCB52A* ___m_registeredCallbacksLists_4;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::m_state
	int32_t ___m_state_9;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::m_threadIDExecutingCallbacks
	int32_t ___m_threadIDExecutingCallbacks_10;
	// System.Boolean System.Threading.CancellationTokenSource::m_disposed
	bool ___m_disposed_11;
	// System.Threading.CancellationTokenRegistration[] System.Threading.CancellationTokenSource::m_linkingRegistrations
	CancellationTokenRegistrationU5BU5D_t864BA2E1E6485FDC593F17F7C01525F33CCE7910* ___m_linkingRegistrations_12;
	// System.Threading.CancellationCallbackInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::m_executingCallback
	CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * ___m_executingCallback_14;
	// System.Threading.Timer modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::m_timer
	Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * ___m_timer_15;

public:
	inline static int32_t get_offset_of_m_kernelEvent_3() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3, ___m_kernelEvent_3)); }
	inline ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * get_m_kernelEvent_3() const { return ___m_kernelEvent_3; }
	inline ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA ** get_address_of_m_kernelEvent_3() { return &___m_kernelEvent_3; }
	inline void set_m_kernelEvent_3(ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * value)
	{
		___m_kernelEvent_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_kernelEvent_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_registeredCallbacksLists_4() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3, ___m_registeredCallbacksLists_4)); }
	inline SparselyPopulatedArray_1U5BU5D_t4D2064CEC206620DC5001D7C857A845833DCB52A* get_m_registeredCallbacksLists_4() const { return ___m_registeredCallbacksLists_4; }
	inline SparselyPopulatedArray_1U5BU5D_t4D2064CEC206620DC5001D7C857A845833DCB52A** get_address_of_m_registeredCallbacksLists_4() { return &___m_registeredCallbacksLists_4; }
	inline void set_m_registeredCallbacksLists_4(SparselyPopulatedArray_1U5BU5D_t4D2064CEC206620DC5001D7C857A845833DCB52A* value)
	{
		___m_registeredCallbacksLists_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_registeredCallbacksLists_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_state_9() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3, ___m_state_9)); }
	inline int32_t get_m_state_9() const { return ___m_state_9; }
	inline int32_t* get_address_of_m_state_9() { return &___m_state_9; }
	inline void set_m_state_9(int32_t value)
	{
		___m_state_9 = value;
	}

	inline static int32_t get_offset_of_m_threadIDExecutingCallbacks_10() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3, ___m_threadIDExecutingCallbacks_10)); }
	inline int32_t get_m_threadIDExecutingCallbacks_10() const { return ___m_threadIDExecutingCallbacks_10; }
	inline int32_t* get_address_of_m_threadIDExecutingCallbacks_10() { return &___m_threadIDExecutingCallbacks_10; }
	inline void set_m_threadIDExecutingCallbacks_10(int32_t value)
	{
		___m_threadIDExecutingCallbacks_10 = value;
	}

	inline static int32_t get_offset_of_m_disposed_11() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3, ___m_disposed_11)); }
	inline bool get_m_disposed_11() const { return ___m_disposed_11; }
	inline bool* get_address_of_m_disposed_11() { return &___m_disposed_11; }
	inline void set_m_disposed_11(bool value)
	{
		___m_disposed_11 = value;
	}

	inline static int32_t get_offset_of_m_linkingRegistrations_12() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3, ___m_linkingRegistrations_12)); }
	inline CancellationTokenRegistrationU5BU5D_t864BA2E1E6485FDC593F17F7C01525F33CCE7910* get_m_linkingRegistrations_12() const { return ___m_linkingRegistrations_12; }
	inline CancellationTokenRegistrationU5BU5D_t864BA2E1E6485FDC593F17F7C01525F33CCE7910** get_address_of_m_linkingRegistrations_12() { return &___m_linkingRegistrations_12; }
	inline void set_m_linkingRegistrations_12(CancellationTokenRegistrationU5BU5D_t864BA2E1E6485FDC593F17F7C01525F33CCE7910* value)
	{
		___m_linkingRegistrations_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_linkingRegistrations_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_executingCallback_14() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3, ___m_executingCallback_14)); }
	inline CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * get_m_executingCallback_14() const { return ___m_executingCallback_14; }
	inline CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B ** get_address_of_m_executingCallback_14() { return &___m_executingCallback_14; }
	inline void set_m_executingCallback_14(CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * value)
	{
		___m_executingCallback_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_executingCallback_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_timer_15() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3, ___m_timer_15)); }
	inline Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * get_m_timer_15() const { return ___m_timer_15; }
	inline Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB ** get_address_of_m_timer_15() { return &___m_timer_15; }
	inline void set_m_timer_15(Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * value)
	{
		___m_timer_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_timer_15), (void*)value);
	}
};

struct CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3_StaticFields
{
public:
	// System.Threading.CancellationTokenSource System.Threading.CancellationTokenSource::_staticSource_Set
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ____staticSource_Set_0;
	// System.Threading.CancellationTokenSource System.Threading.CancellationTokenSource::_staticSource_NotCancelable
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ____staticSource_NotCancelable_1;
	// System.Int32 System.Threading.CancellationTokenSource::s_nLists
	int32_t ___s_nLists_2;
	// System.Action`1<System.Object> System.Threading.CancellationTokenSource::s_LinkedTokenCancelDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_LinkedTokenCancelDelegate_13;
	// System.Threading.TimerCallback System.Threading.CancellationTokenSource::s_timerCallback
	TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814 * ___s_timerCallback_16;

public:
	inline static int32_t get_offset_of__staticSource_Set_0() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3_StaticFields, ____staticSource_Set_0)); }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * get__staticSource_Set_0() const { return ____staticSource_Set_0; }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 ** get_address_of__staticSource_Set_0() { return &____staticSource_Set_0; }
	inline void set__staticSource_Set_0(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * value)
	{
		____staticSource_Set_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____staticSource_Set_0), (void*)value);
	}

	inline static int32_t get_offset_of__staticSource_NotCancelable_1() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3_StaticFields, ____staticSource_NotCancelable_1)); }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * get__staticSource_NotCancelable_1() const { return ____staticSource_NotCancelable_1; }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 ** get_address_of__staticSource_NotCancelable_1() { return &____staticSource_NotCancelable_1; }
	inline void set__staticSource_NotCancelable_1(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * value)
	{
		____staticSource_NotCancelable_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____staticSource_NotCancelable_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_nLists_2() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3_StaticFields, ___s_nLists_2)); }
	inline int32_t get_s_nLists_2() const { return ___s_nLists_2; }
	inline int32_t* get_address_of_s_nLists_2() { return &___s_nLists_2; }
	inline void set_s_nLists_2(int32_t value)
	{
		___s_nLists_2 = value;
	}

	inline static int32_t get_offset_of_s_LinkedTokenCancelDelegate_13() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3_StaticFields, ___s_LinkedTokenCancelDelegate_13)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_LinkedTokenCancelDelegate_13() const { return ___s_LinkedTokenCancelDelegate_13; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_LinkedTokenCancelDelegate_13() { return &___s_LinkedTokenCancelDelegate_13; }
	inline void set_s_LinkedTokenCancelDelegate_13(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_LinkedTokenCancelDelegate_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_LinkedTokenCancelDelegate_13), (void*)value);
	}

	inline static int32_t get_offset_of_s_timerCallback_16() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3_StaticFields, ___s_timerCallback_16)); }
	inline TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814 * get_s_timerCallback_16() const { return ___s_timerCallback_16; }
	inline TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814 ** get_address_of_s_timerCallback_16() { return &___s_timerCallback_16; }
	inline void set_s_timerCallback_16(TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814 * value)
	{
		___s_timerCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_timerCallback_16), (void*)value);
	}
};


// UnityEngine.UI.ColorBlock
struct  ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_NormalColor_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_HighlightedColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_PressedColor_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_SelectedColor_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_DisabledColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};

struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields
{
public:
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___defaultColorBlock_7;

public:
	inline static int32_t get_offset_of_defaultColorBlock_7() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields, ___defaultColorBlock_7)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_defaultColorBlock_7() const { return ___defaultColorBlock_7; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_defaultColorBlock_7() { return &___defaultColorBlock_7; }
	inline void set_defaultColorBlock_7(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___defaultColorBlock_7 = value;
	}
};


// Naninovel.Commands.Command
struct  Command_tFD9CA828C60C3E7CEA51152A05F64D1ED3F98E2A  : public RuntimeObject
{
public:
	// Naninovel.Commands.BooleanParameter Naninovel.Commands.Command::Wait
	BooleanParameter_t3E1B3AF853EB197FF3CFF5325E19F2772E0A28B4 * ___Wait_2;
	// Naninovel.Commands.StringParameter Naninovel.Commands.Command::ConditionalExpression
	StringParameter_t33BF466D3AD2402CEA10C41D765102E093891CA8 * ___ConditionalExpression_3;
	// Naninovel.PlaybackSpot Naninovel.Commands.Command::playbackSpot
	PlaybackSpot_t9DD5DF963E07CE297F69CF2A61452173F1E04389  ___playbackSpot_4;

public:
	inline static int32_t get_offset_of_Wait_2() { return static_cast<int32_t>(offsetof(Command_tFD9CA828C60C3E7CEA51152A05F64D1ED3F98E2A, ___Wait_2)); }
	inline BooleanParameter_t3E1B3AF853EB197FF3CFF5325E19F2772E0A28B4 * get_Wait_2() const { return ___Wait_2; }
	inline BooleanParameter_t3E1B3AF853EB197FF3CFF5325E19F2772E0A28B4 ** get_address_of_Wait_2() { return &___Wait_2; }
	inline void set_Wait_2(BooleanParameter_t3E1B3AF853EB197FF3CFF5325E19F2772E0A28B4 * value)
	{
		___Wait_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Wait_2), (void*)value);
	}

	inline static int32_t get_offset_of_ConditionalExpression_3() { return static_cast<int32_t>(offsetof(Command_tFD9CA828C60C3E7CEA51152A05F64D1ED3F98E2A, ___ConditionalExpression_3)); }
	inline StringParameter_t33BF466D3AD2402CEA10C41D765102E093891CA8 * get_ConditionalExpression_3() const { return ___ConditionalExpression_3; }
	inline StringParameter_t33BF466D3AD2402CEA10C41D765102E093891CA8 ** get_address_of_ConditionalExpression_3() { return &___ConditionalExpression_3; }
	inline void set_ConditionalExpression_3(StringParameter_t33BF466D3AD2402CEA10C41D765102E093891CA8 * value)
	{
		___ConditionalExpression_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ConditionalExpression_3), (void*)value);
	}

	inline static int32_t get_offset_of_playbackSpot_4() { return static_cast<int32_t>(offsetof(Command_tFD9CA828C60C3E7CEA51152A05F64D1ED3F98E2A, ___playbackSpot_4)); }
	inline PlaybackSpot_t9DD5DF963E07CE297F69CF2A61452173F1E04389  get_playbackSpot_4() const { return ___playbackSpot_4; }
	inline PlaybackSpot_t9DD5DF963E07CE297F69CF2A61452173F1E04389 * get_address_of_playbackSpot_4() { return &___playbackSpot_4; }
	inline void set_playbackSpot_4(PlaybackSpot_t9DD5DF963E07CE297F69CF2A61452173F1E04389  value)
	{
		___playbackSpot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___playbackSpot_4))->___scriptName_1), (void*)NULL);
	}
};

struct Command_tFD9CA828C60C3E7CEA51152A05F64D1ED3F98E2A_StaticFields
{
public:
	// Naninovel.LiteralMap`1<System.Type> Naninovel.Commands.Command::commandTypesCache
	LiteralMap_1_tD4183E67AFCBD4ABFDE9FE789A863138B28012A7 * ___commandTypesCache_5;

public:
	inline static int32_t get_offset_of_commandTypesCache_5() { return static_cast<int32_t>(offsetof(Command_tFD9CA828C60C3E7CEA51152A05F64D1ED3F98E2A_StaticFields, ___commandTypesCache_5)); }
	inline LiteralMap_1_tD4183E67AFCBD4ABFDE9FE789A863138B28012A7 * get_commandTypesCache_5() const { return ___commandTypesCache_5; }
	inline LiteralMap_1_tD4183E67AFCBD4ABFDE9FE789A863138B28012A7 ** get_address_of_commandTypesCache_5() { return &___commandTypesCache_5; }
	inline void set_commandTypesCache_5(LiteralMap_1_tD4183E67AFCBD4ABFDE9FE789A863138B28012A7 * value)
	{
		___commandTypesCache_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___commandTypesCache_5), (void*)value);
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

// Naninovel.EasingType
struct  EasingType_t8DB3FCAFAEE63635D17F4A4C7AAE2683DA43F577 
{
public:
	// System.Int32 Naninovel.EasingType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EasingType_t8DB3FCAFAEE63635D17F4A4C7AAE2683DA43F577, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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

// Naninovel.GameStateMap
struct  GameStateMap_tA4788218B9D1B130D00F9C346FF9FD21E01ED52D  : public StateMap_tF9F312C96797C47C86D856A3386946A8A10C6C64
{
public:
	// System.DateTime Naninovel.GameStateMap::<SaveDateTime>k__BackingField
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___U3CSaveDateTimeU3Ek__BackingField_2;
	// UnityEngine.Texture2D Naninovel.GameStateMap::<Thumbnail>k__BackingField
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___U3CThumbnailU3Ek__BackingField_3;
	// System.Boolean Naninovel.GameStateMap::<PlayerRollbackAllowed>k__BackingField
	bool ___U3CPlayerRollbackAllowedU3Ek__BackingField_4;
	// Naninovel.PlaybackSpot Naninovel.GameStateMap::playbackSpot
	PlaybackSpot_t9DD5DF963E07CE297F69CF2A61452173F1E04389  ___playbackSpot_6;
	// System.String Naninovel.GameStateMap::saveDateTime
	String_t* ___saveDateTime_7;
	// System.String Naninovel.GameStateMap::thumbnailBase64
	String_t* ___thumbnailBase64_8;
	// System.String Naninovel.GameStateMap::rollbackStackJson
	String_t* ___rollbackStackJson_9;

public:
	inline static int32_t get_offset_of_U3CSaveDateTimeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(GameStateMap_tA4788218B9D1B130D00F9C346FF9FD21E01ED52D, ___U3CSaveDateTimeU3Ek__BackingField_2)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_U3CSaveDateTimeU3Ek__BackingField_2() const { return ___U3CSaveDateTimeU3Ek__BackingField_2; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_U3CSaveDateTimeU3Ek__BackingField_2() { return &___U3CSaveDateTimeU3Ek__BackingField_2; }
	inline void set_U3CSaveDateTimeU3Ek__BackingField_2(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___U3CSaveDateTimeU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CThumbnailU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(GameStateMap_tA4788218B9D1B130D00F9C346FF9FD21E01ED52D, ___U3CThumbnailU3Ek__BackingField_3)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_U3CThumbnailU3Ek__BackingField_3() const { return ___U3CThumbnailU3Ek__BackingField_3; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_U3CThumbnailU3Ek__BackingField_3() { return &___U3CThumbnailU3Ek__BackingField_3; }
	inline void set_U3CThumbnailU3Ek__BackingField_3(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___U3CThumbnailU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CThumbnailU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPlayerRollbackAllowedU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(GameStateMap_tA4788218B9D1B130D00F9C346FF9FD21E01ED52D, ___U3CPlayerRollbackAllowedU3Ek__BackingField_4)); }
	inline bool get_U3CPlayerRollbackAllowedU3Ek__BackingField_4() const { return ___U3CPlayerRollbackAllowedU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CPlayerRollbackAllowedU3Ek__BackingField_4() { return &___U3CPlayerRollbackAllowedU3Ek__BackingField_4; }
	inline void set_U3CPlayerRollbackAllowedU3Ek__BackingField_4(bool value)
	{
		___U3CPlayerRollbackAllowedU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_playbackSpot_6() { return static_cast<int32_t>(offsetof(GameStateMap_tA4788218B9D1B130D00F9C346FF9FD21E01ED52D, ___playbackSpot_6)); }
	inline PlaybackSpot_t9DD5DF963E07CE297F69CF2A61452173F1E04389  get_playbackSpot_6() const { return ___playbackSpot_6; }
	inline PlaybackSpot_t9DD5DF963E07CE297F69CF2A61452173F1E04389 * get_address_of_playbackSpot_6() { return &___playbackSpot_6; }
	inline void set_playbackSpot_6(PlaybackSpot_t9DD5DF963E07CE297F69CF2A61452173F1E04389  value)
	{
		___playbackSpot_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___playbackSpot_6))->___scriptName_1), (void*)NULL);
	}

	inline static int32_t get_offset_of_saveDateTime_7() { return static_cast<int32_t>(offsetof(GameStateMap_tA4788218B9D1B130D00F9C346FF9FD21E01ED52D, ___saveDateTime_7)); }
	inline String_t* get_saveDateTime_7() const { return ___saveDateTime_7; }
	inline String_t** get_address_of_saveDateTime_7() { return &___saveDateTime_7; }
	inline void set_saveDateTime_7(String_t* value)
	{
		___saveDateTime_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___saveDateTime_7), (void*)value);
	}

	inline static int32_t get_offset_of_thumbnailBase64_8() { return static_cast<int32_t>(offsetof(GameStateMap_tA4788218B9D1B130D00F9C346FF9FD21E01ED52D, ___thumbnailBase64_8)); }
	inline String_t* get_thumbnailBase64_8() const { return ___thumbnailBase64_8; }
	inline String_t** get_address_of_thumbnailBase64_8() { return &___thumbnailBase64_8; }
	inline void set_thumbnailBase64_8(String_t* value)
	{
		___thumbnailBase64_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___thumbnailBase64_8), (void*)value);
	}

	inline static int32_t get_offset_of_rollbackStackJson_9() { return static_cast<int32_t>(offsetof(GameStateMap_tA4788218B9D1B130D00F9C346FF9FD21E01ED52D, ___rollbackStackJson_9)); }
	inline String_t* get_rollbackStackJson_9() const { return ___rollbackStackJson_9; }
	inline String_t** get_address_of_rollbackStackJson_9() { return &___rollbackStackJson_9; }
	inline void set_rollbackStackJson_9(String_t* value)
	{
		___rollbackStackJson_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rollbackStackJson_9), (void*)value);
	}
};


// UnityEngine.Experimental.Rendering.GraphicsFormat
struct  GraphicsFormat_t07A3C024BC77B843C53A369D6FC02ABD27D2AB1D 
{
public:
	// System.Int32 UnityEngine.Experimental.Rendering.GraphicsFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GraphicsFormat_t07A3C024BC77B843C53A369D6FC02ABD27D2AB1D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Naninovel.OrthoActorMetadata
struct  OrthoActorMetadata_t681F4B01BA3C23F282E68DF15226EE6DAD90F1E4  : public ActorMetadata_tC302DC4B2D08DACA72B3409CC05C12B5AC23A7B3
{
public:
	// UnityEngine.Vector2 Naninovel.OrthoActorMetadata::Pivot
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___Pivot_4;
	// System.Int32 Naninovel.OrthoActorMetadata::PixelsPerUnit
	int32_t ___PixelsPerUnit_5;
	// System.Boolean Naninovel.OrthoActorMetadata::EnableDepthPass
	bool ___EnableDepthPass_6;
	// System.Single Naninovel.OrthoActorMetadata::DepthAlphaCutoff
	float ___DepthAlphaCutoff_7;
	// UnityEngine.Shader Naninovel.OrthoActorMetadata::CustomShader
	Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___CustomShader_8;
	// UnityEngine.RenderTexture Naninovel.OrthoActorMetadata::RenderTexture
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___RenderTexture_9;
	// System.Boolean Naninovel.OrthoActorMetadata::CorrectRenderAspect
	bool ___CorrectRenderAspect_10;

public:
	inline static int32_t get_offset_of_Pivot_4() { return static_cast<int32_t>(offsetof(OrthoActorMetadata_t681F4B01BA3C23F282E68DF15226EE6DAD90F1E4, ___Pivot_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_Pivot_4() const { return ___Pivot_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_Pivot_4() { return &___Pivot_4; }
	inline void set_Pivot_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___Pivot_4 = value;
	}

	inline static int32_t get_offset_of_PixelsPerUnit_5() { return static_cast<int32_t>(offsetof(OrthoActorMetadata_t681F4B01BA3C23F282E68DF15226EE6DAD90F1E4, ___PixelsPerUnit_5)); }
	inline int32_t get_PixelsPerUnit_5() const { return ___PixelsPerUnit_5; }
	inline int32_t* get_address_of_PixelsPerUnit_5() { return &___PixelsPerUnit_5; }
	inline void set_PixelsPerUnit_5(int32_t value)
	{
		___PixelsPerUnit_5 = value;
	}

	inline static int32_t get_offset_of_EnableDepthPass_6() { return static_cast<int32_t>(offsetof(OrthoActorMetadata_t681F4B01BA3C23F282E68DF15226EE6DAD90F1E4, ___EnableDepthPass_6)); }
	inline bool get_EnableDepthPass_6() const { return ___EnableDepthPass_6; }
	inline bool* get_address_of_EnableDepthPass_6() { return &___EnableDepthPass_6; }
	inline void set_EnableDepthPass_6(bool value)
	{
		___EnableDepthPass_6 = value;
	}

	inline static int32_t get_offset_of_DepthAlphaCutoff_7() { return static_cast<int32_t>(offsetof(OrthoActorMetadata_t681F4B01BA3C23F282E68DF15226EE6DAD90F1E4, ___DepthAlphaCutoff_7)); }
	inline float get_DepthAlphaCutoff_7() const { return ___DepthAlphaCutoff_7; }
	inline float* get_address_of_DepthAlphaCutoff_7() { return &___DepthAlphaCutoff_7; }
	inline void set_DepthAlphaCutoff_7(float value)
	{
		___DepthAlphaCutoff_7 = value;
	}

	inline static int32_t get_offset_of_CustomShader_8() { return static_cast<int32_t>(offsetof(OrthoActorMetadata_t681F4B01BA3C23F282E68DF15226EE6DAD90F1E4, ___CustomShader_8)); }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * get_CustomShader_8() const { return ___CustomShader_8; }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 ** get_address_of_CustomShader_8() { return &___CustomShader_8; }
	inline void set_CustomShader_8(Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * value)
	{
		___CustomShader_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CustomShader_8), (void*)value);
	}

	inline static int32_t get_offset_of_RenderTexture_9() { return static_cast<int32_t>(offsetof(OrthoActorMetadata_t681F4B01BA3C23F282E68DF15226EE6DAD90F1E4, ___RenderTexture_9)); }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * get_RenderTexture_9() const { return ___RenderTexture_9; }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 ** get_address_of_RenderTexture_9() { return &___RenderTexture_9; }
	inline void set_RenderTexture_9(RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * value)
	{
		___RenderTexture_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RenderTexture_9), (void*)value);
	}

	inline static int32_t get_offset_of_CorrectRenderAspect_10() { return static_cast<int32_t>(offsetof(OrthoActorMetadata_t681F4B01BA3C23F282E68DF15226EE6DAD90F1E4, ___CorrectRenderAspect_10)); }
	inline bool get_CorrectRenderAspect_10() const { return ___CorrectRenderAspect_10; }
	inline bool* get_address_of_CorrectRenderAspect_10() { return &___CorrectRenderAspect_10; }
	inline void set_CorrectRenderAspect_10(bool value)
	{
		___CorrectRenderAspect_10 = value;
	}
};


// System.Reflection.ParameterAttributes
struct  ParameterAttributes_t79BD378DEC3F187D9773B9A4EDE573866E930218 
{
public:
	// System.Int32 System.Reflection.ParameterAttributes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ParameterAttributes_t79BD378DEC3F187D9773B9A4EDE573866E930218, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UniRx.Async.PlayerLoopTiming
struct  PlayerLoopTiming_tD415F75117F6F33CDF45912159DE96D82038BE63 
{
public:
	// System.Int32 UniRx.Async.PlayerLoopTiming::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PlayerLoopTiming_tD415F75117F6F33CDF45912159DE96D82038BE63, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Naninovel.PlayerSkipMode
struct  PlayerSkipMode_t935AF39C8432B4B4D6C52F8E0441F174011F8E29 
{
public:
	// System.Int32 Naninovel.PlayerSkipMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PlayerSkipMode_t935AF39C8432B4B4D6C52F8E0441F174011F8E29, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.RenderTextureCreationFlags
struct  RenderTextureCreationFlags_t24A9C99A84202C1F13828D9F5693BE46CFBD61F3 
{
public:
	// System.Int32 UnityEngine.RenderTextureCreationFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderTextureCreationFlags_t24A9C99A84202C1F13828D9F5693BE46CFBD61F3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.RenderTextureMemoryless
struct  RenderTextureMemoryless_t37547D68C2186D2650440F719302CDA4A3BB7F67 
{
public:
	// System.Int32 UnityEngine.RenderTextureMemoryless::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderTextureMemoryless_t37547D68C2186D2650440F719302CDA4A3BB7F67, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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


// UnityEngine.Rendering.ShadowSamplingMode
struct  ShadowSamplingMode_t864AB52A05C1F54A738E06F76F47CDF4C26CF7F9 
{
public:
	// System.Int32 UnityEngine.Rendering.ShadowSamplingMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ShadowSamplingMode_t864AB52A05C1F54A738E06F76F47CDF4C26CF7F9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.StringComparison
struct  StringComparison_tCC9F72B9B1E2C3C6D2566DD0D3A61E1621048998 
{
public:
	// System.Int32 System.StringComparison::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StringComparison_tCC9F72B9B1E2C3C6D2566DD0D3A61E1621048998, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Naninovel.Commands.StringParameter
struct  StringParameter_t33BF466D3AD2402CEA10C41D765102E093891CA8  : public CommandParameter_1_t4B8105125E6E7B0F6BE07C9682920E9CE615EF79
{
public:

public:
};


// UnityEngine.Rendering.TextureDimension
struct  TextureDimension_tADCCB7C1D30E4D1182651BA9094B4DE61B63EACC 
{
public:
	// System.Int32 UnityEngine.Rendering.TextureDimension::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureDimension_tADCCB7C1D30E4D1182651BA9094B4DE61B63EACC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TouchScreenKeyboardType
struct  TouchScreenKeyboardType_tBD90DFB07923EC19E5EA59FAF26292AC2799A932 
{
public:
	// System.Int32 UnityEngine.TouchScreenKeyboardType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchScreenKeyboardType_tBD90DFB07923EC19E5EA59FAF26292AC2799A932, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Naninovel.Transition
struct  Transition_tB83DDE1D1C37B9FE0CC09CA83AA9EAA5E9531D4F 
{
public:
	// System.String Naninovel.Transition::Name
	String_t* ___Name_0;
	// UnityEngine.Texture Naninovel.Transition::DissolveTexture
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___DissolveTexture_1;
	// System.Boolean Naninovel.Transition::custom
	bool ___custom_2;
	// UnityEngine.Vector4 Naninovel.Transition::parameters
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___parameters_3;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(Transition_tB83DDE1D1C37B9FE0CC09CA83AA9EAA5E9531D4F, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_DissolveTexture_1() { return static_cast<int32_t>(offsetof(Transition_tB83DDE1D1C37B9FE0CC09CA83AA9EAA5E9531D4F, ___DissolveTexture_1)); }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * get_DissolveTexture_1() const { return ___DissolveTexture_1; }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE ** get_address_of_DissolveTexture_1() { return &___DissolveTexture_1; }
	inline void set_DissolveTexture_1(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * value)
	{
		___DissolveTexture_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DissolveTexture_1), (void*)value);
	}

	inline static int32_t get_offset_of_custom_2() { return static_cast<int32_t>(offsetof(Transition_tB83DDE1D1C37B9FE0CC09CA83AA9EAA5E9531D4F, ___custom_2)); }
	inline bool get_custom_2() const { return ___custom_2; }
	inline bool* get_address_of_custom_2() { return &___custom_2; }
	inline void set_custom_2(bool value)
	{
		___custom_2 = value;
	}

	inline static int32_t get_offset_of_parameters_3() { return static_cast<int32_t>(offsetof(Transition_tB83DDE1D1C37B9FE0CC09CA83AA9EAA5E9531D4F, ___parameters_3)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_parameters_3() const { return ___parameters_3; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_parameters_3() { return &___parameters_3; }
	inline void set_parameters_3(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___parameters_3 = value;
	}
};

// Native definition for P/Invoke marshalling of Naninovel.Transition
struct Transition_tB83DDE1D1C37B9FE0CC09CA83AA9EAA5E9531D4F_marshaled_pinvoke
{
	char* ___Name_0;
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___DissolveTexture_1;
	int32_t ___custom_2;
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___parameters_3;
};
// Native definition for COM marshalling of Naninovel.Transition
struct Transition_tB83DDE1D1C37B9FE0CC09CA83AA9EAA5E9531D4F_marshaled_com
{
	Il2CppChar* ___Name_0;
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___DissolveTexture_1;
	int32_t ___custom_2;
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___parameters_3;
};

// UnityEngine.VRTextureUsage
struct  VRTextureUsage_t3C09DF3DD90B5620BC0AB6F8078DFEF4E607F645 
{
public:
	// System.Int32 UnityEngine.VRTextureUsage::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VRTextureUsage_t3C09DF3DD90B5620BC0AB6F8078DFEF4E607F645, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Video.VideoAudioOutputMode
struct  VideoAudioOutputMode_tDD6B846B9A65F1C53DA4D4D8117CDB223BE3DE56 
{
public:
	// System.Int32 UnityEngine.Video.VideoAudioOutputMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VideoAudioOutputMode_tDD6B846B9A65F1C53DA4D4D8117CDB223BE3DE56, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Video.VideoRenderMode
struct  VideoRenderMode_tB2F8E98B2EBB3216E6322E55C246CE0587CC0A7B 
{
public:
	// System.Int32 UnityEngine.Video.VideoRenderMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VideoRenderMode_tB2F8E98B2EBB3216E6322E55C246CE0587CC0A7B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Video.VideoSource
struct  VideoSource_t66E8298534E5BB7DFD28A7D8ADE397E328CD8896 
{
public:
	// System.Int32 UnityEngine.Video.VideoSource::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VideoSource_t66E8298534E5BB7DFD28A7D8ADE397E328CD8896, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.InputField/CharacterValidation
struct  CharacterValidation_t03AFB752BBD6215579765978CE67D7159431FC41 
{
public:
	// System.Int32 UnityEngine.UI.InputField/CharacterValidation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CharacterValidation_t03AFB752BBD6215579765978CE67D7159431FC41, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.InputField/ContentType
struct  ContentType_t15FD47A38F32CADD417E3A07C787F1B3997B9AC1 
{
public:
	// System.Int32 UnityEngine.UI.InputField/ContentType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ContentType_t15FD47A38F32CADD417E3A07C787F1B3997B9AC1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.InputField/InputType
struct  InputType_t43FE97C0C3EE1F7DB81E2F34420780D1DFBF03D2 
{
public:
	// System.Int32 UnityEngine.UI.InputField/InputType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputType_t43FE97C0C3EE1F7DB81E2F34420780D1DFBF03D2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.InputField/LineType
struct  LineType_t3249F1C248D9D12DE265C49F371F2C3618AFEFCE 
{
public:
	// System.Int32 UnityEngine.UI.InputField/LineType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LineType_t3249F1C248D9D12DE265C49F371F2C3618AFEFCE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Navigation/Mode
struct  Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Naninovel.ScriptableUIBehaviour/FocusMode
struct  FocusMode_t3DE0E1B122DCAA03F00A7129B6F2C96F11630D07 
{
public:
	// System.Int32 Naninovel.ScriptableUIBehaviour/FocusMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FocusMode_t3DE0E1B122DCAA03F00A7129B6F2C96F11630D07, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable/Transition
struct  Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Naninovel.UnlockableManager/UnlockablesMap
struct  UnlockablesMap_t798A63740156B2CCD22053D422973750060F1C43  : public SerializableMap_2_t0EBD18F6762E27FE6CD01891D0B646ADE3E2C0D2
{
public:

public:
};


// Naninovel.UnlockableTrigger/UnlockedStateChangedEvent
struct  UnlockedStateChangedEvent_t4E17475CD93BCCB201C01C0DE65BF9FB7F4AF1DA  : public UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB
{
public:

public:
};


// Naninovel.FX.DepthOfField/CameraComponent/KernelSizeType
struct  KernelSizeType_tF216F31ACD3F94332833EDA24DB187504B4DD346 
{
public:
	// System.Int32 Naninovel.FX.DepthOfField/CameraComponent/KernelSizeType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KernelSizeType_tF216F31ACD3F94332833EDA24DB187504B4DD346, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Nullable`1<Naninovel.Transition>
struct  Nullable_1_t1676A29F23467DBADD161C035D64BDBF1FD6A335 
{
public:
	// T System.Nullable`1::value
	Transition_tB83DDE1D1C37B9FE0CC09CA83AA9EAA5E9531D4F  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1676A29F23467DBADD161C035D64BDBF1FD6A335, ___value_0)); }
	inline Transition_tB83DDE1D1C37B9FE0CC09CA83AA9EAA5E9531D4F  get_value_0() const { return ___value_0; }
	inline Transition_tB83DDE1D1C37B9FE0CC09CA83AA9EAA5E9531D4F * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Transition_tB83DDE1D1C37B9FE0CC09CA83AA9EAA5E9531D4F  value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___Name_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___DissolveTexture_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1676A29F23467DBADD161C035D64BDBF1FD6A335, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// UnityEngine.AudioClip
struct  AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * ___m_PCMSetPositionCallback_5;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_4() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMReaderCallback_4)); }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * get_m_PCMReaderCallback_4() const { return ___m_PCMReaderCallback_4; }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B ** get_address_of_m_PCMReaderCallback_4() { return &___m_PCMReaderCallback_4; }
	inline void set_m_PCMReaderCallback_4(PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * value)
	{
		___m_PCMReaderCallback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMReaderCallback_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_5() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMSetPositionCallback_5)); }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * get_m_PCMSetPositionCallback_5() const { return ___m_PCMSetPositionCallback_5; }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C ** get_address_of_m_PCMSetPositionCallback_5() { return &___m_PCMSetPositionCallback_5; }
	inline void set_m_PCMSetPositionCallback_5(PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * value)
	{
		___m_PCMSetPositionCallback_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMSetPositionCallback_5), (void*)value);
	}
};


// Naninovel.BackgroundMetadata
struct  BackgroundMetadata_tB3D37C09DD002AA63FC7925A323AF344B964823F  : public OrthoActorMetadata_t681F4B01BA3C23F282E68DF15226EE6DAD90F1E4
{
public:
	// System.Collections.Generic.List`1<Naninovel.BackgroundMetadata/Pose> Naninovel.BackgroundMetadata::Poses
	List_1_t57980BFC38AF009311D68D877EA24F8B8946DD4D * ___Poses_11;

public:
	inline static int32_t get_offset_of_Poses_11() { return static_cast<int32_t>(offsetof(BackgroundMetadata_tB3D37C09DD002AA63FC7925A323AF344B964823F, ___Poses_11)); }
	inline List_1_t57980BFC38AF009311D68D877EA24F8B8946DD4D * get_Poses_11() const { return ___Poses_11; }
	inline List_1_t57980BFC38AF009311D68D877EA24F8B8946DD4D ** get_address_of_Poses_11() { return &___Poses_11; }
	inline void set_Poses_11(List_1_t57980BFC38AF009311D68D877EA24F8B8946DD4D * value)
	{
		___Poses_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Poses_11), (void*)value);
	}
};


// UnityEngine.Component
struct  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
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

// UnityEngine.UI.Navigation
struct  Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_WrapAround_1() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_WrapAround_1)); }
	inline bool get_m_WrapAround_1() const { return ___m_WrapAround_1; }
	inline bool* get_address_of_m_WrapAround_1() { return &___m_WrapAround_1; }
	inline void set_m_WrapAround_1(bool value)
	{
		___m_WrapAround_1 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_2() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnUp_2)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnUp_2() const { return ___m_SelectOnUp_2; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnUp_2() { return &___m_SelectOnUp_2; }
	inline void set_m_SelectOnUp_2(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnUp_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_3() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnDown_3)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnDown_3() const { return ___m_SelectOnDown_3; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnDown_3() { return &___m_SelectOnDown_3; }
	inline void set_m_SelectOnDown_3(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnDown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_4() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnLeft_4)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnLeft_4() const { return ___m_SelectOnLeft_4; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnLeft_4() { return &___m_SelectOnLeft_4; }
	inline void set_m_SelectOnLeft_4(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnLeft_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_5() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnRight_5)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnRight_5() const { return ___m_SelectOnRight_5; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnRight_5() { return &___m_SelectOnRight_5; }
	inline void set_m_SelectOnRight_5(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnRight_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};

// System.Reflection.ParameterInfo
struct  ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7  : public RuntimeObject
{
public:
	// System.Type System.Reflection.ParameterInfo::ClassImpl
	Type_t * ___ClassImpl_0;
	// System.Object System.Reflection.ParameterInfo::DefaultValueImpl
	RuntimeObject * ___DefaultValueImpl_1;
	// System.Reflection.MemberInfo System.Reflection.ParameterInfo::MemberImpl
	MemberInfo_t * ___MemberImpl_2;
	// System.String System.Reflection.ParameterInfo::NameImpl
	String_t* ___NameImpl_3;
	// System.Int32 System.Reflection.ParameterInfo::PositionImpl
	int32_t ___PositionImpl_4;
	// System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::AttrsImpl
	int32_t ___AttrsImpl_5;
	// System.Runtime.InteropServices.MarshalAsAttribute System.Reflection.ParameterInfo::marshalAs
	MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 * ___marshalAs_6;

public:
	inline static int32_t get_offset_of_ClassImpl_0() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___ClassImpl_0)); }
	inline Type_t * get_ClassImpl_0() const { return ___ClassImpl_0; }
	inline Type_t ** get_address_of_ClassImpl_0() { return &___ClassImpl_0; }
	inline void set_ClassImpl_0(Type_t * value)
	{
		___ClassImpl_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ClassImpl_0), (void*)value);
	}

	inline static int32_t get_offset_of_DefaultValueImpl_1() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___DefaultValueImpl_1)); }
	inline RuntimeObject * get_DefaultValueImpl_1() const { return ___DefaultValueImpl_1; }
	inline RuntimeObject ** get_address_of_DefaultValueImpl_1() { return &___DefaultValueImpl_1; }
	inline void set_DefaultValueImpl_1(RuntimeObject * value)
	{
		___DefaultValueImpl_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DefaultValueImpl_1), (void*)value);
	}

	inline static int32_t get_offset_of_MemberImpl_2() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___MemberImpl_2)); }
	inline MemberInfo_t * get_MemberImpl_2() const { return ___MemberImpl_2; }
	inline MemberInfo_t ** get_address_of_MemberImpl_2() { return &___MemberImpl_2; }
	inline void set_MemberImpl_2(MemberInfo_t * value)
	{
		___MemberImpl_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MemberImpl_2), (void*)value);
	}

	inline static int32_t get_offset_of_NameImpl_3() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___NameImpl_3)); }
	inline String_t* get_NameImpl_3() const { return ___NameImpl_3; }
	inline String_t** get_address_of_NameImpl_3() { return &___NameImpl_3; }
	inline void set_NameImpl_3(String_t* value)
	{
		___NameImpl_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NameImpl_3), (void*)value);
	}

	inline static int32_t get_offset_of_PositionImpl_4() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___PositionImpl_4)); }
	inline int32_t get_PositionImpl_4() const { return ___PositionImpl_4; }
	inline int32_t* get_address_of_PositionImpl_4() { return &___PositionImpl_4; }
	inline void set_PositionImpl_4(int32_t value)
	{
		___PositionImpl_4 = value;
	}

	inline static int32_t get_offset_of_AttrsImpl_5() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___AttrsImpl_5)); }
	inline int32_t get_AttrsImpl_5() const { return ___AttrsImpl_5; }
	inline int32_t* get_address_of_AttrsImpl_5() { return &___AttrsImpl_5; }
	inline void set_AttrsImpl_5(int32_t value)
	{
		___AttrsImpl_5 = value;
	}

	inline static int32_t get_offset_of_marshalAs_6() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___marshalAs_6)); }
	inline MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 * get_marshalAs_6() const { return ___marshalAs_6; }
	inline MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 ** get_address_of_marshalAs_6() { return &___marshalAs_6; }
	inline void set_marshalAs_6(MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 * value)
	{
		___marshalAs_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___marshalAs_6), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_marshaled_pinvoke
{
	Type_t * ___ClassImpl_0;
	Il2CppIUnknown* ___DefaultValueImpl_1;
	MemberInfo_t * ___MemberImpl_2;
	char* ___NameImpl_3;
	int32_t ___PositionImpl_4;
	int32_t ___AttrsImpl_5;
	MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 * ___marshalAs_6;
};
// Native definition for COM marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_marshaled_com
{
	Type_t * ___ClassImpl_0;
	Il2CppIUnknown* ___DefaultValueImpl_1;
	MemberInfo_t * ___MemberImpl_2;
	Il2CppChar* ___NameImpl_3;
	int32_t ___PositionImpl_4;
	int32_t ___AttrsImpl_5;
	MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 * ___marshalAs_6;
};

// UnityEngine.RenderTextureDescriptor
struct  RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 
{
public:
	// System.Int32 UnityEngine.RenderTextureDescriptor::<width>k__BackingField
	int32_t ___U3CwidthU3Ek__BackingField_0;
	// System.Int32 UnityEngine.RenderTextureDescriptor::<height>k__BackingField
	int32_t ___U3CheightU3Ek__BackingField_1;
	// System.Int32 UnityEngine.RenderTextureDescriptor::<msaaSamples>k__BackingField
	int32_t ___U3CmsaaSamplesU3Ek__BackingField_2;
	// System.Int32 UnityEngine.RenderTextureDescriptor::<volumeDepth>k__BackingField
	int32_t ___U3CvolumeDepthU3Ek__BackingField_3;
	// System.Int32 UnityEngine.RenderTextureDescriptor::<mipCount>k__BackingField
	int32_t ___U3CmipCountU3Ek__BackingField_4;
	// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.RenderTextureDescriptor::_graphicsFormat
	int32_t ____graphicsFormat_5;
	// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.RenderTextureDescriptor::<stencilFormat>k__BackingField
	int32_t ___U3CstencilFormatU3Ek__BackingField_6;
	// System.Int32 UnityEngine.RenderTextureDescriptor::_depthBufferBits
	int32_t ____depthBufferBits_7;
	// UnityEngine.Rendering.TextureDimension UnityEngine.RenderTextureDescriptor::<dimension>k__BackingField
	int32_t ___U3CdimensionU3Ek__BackingField_9;
	// UnityEngine.Rendering.ShadowSamplingMode UnityEngine.RenderTextureDescriptor::<shadowSamplingMode>k__BackingField
	int32_t ___U3CshadowSamplingModeU3Ek__BackingField_10;
	// UnityEngine.VRTextureUsage UnityEngine.RenderTextureDescriptor::<vrUsage>k__BackingField
	int32_t ___U3CvrUsageU3Ek__BackingField_11;
	// UnityEngine.RenderTextureCreationFlags UnityEngine.RenderTextureDescriptor::_flags
	int32_t ____flags_12;
	// UnityEngine.RenderTextureMemoryless UnityEngine.RenderTextureDescriptor::<memoryless>k__BackingField
	int32_t ___U3CmemorylessU3Ek__BackingField_13;

public:
	inline static int32_t get_offset_of_U3CwidthU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ___U3CwidthU3Ek__BackingField_0)); }
	inline int32_t get_U3CwidthU3Ek__BackingField_0() const { return ___U3CwidthU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CwidthU3Ek__BackingField_0() { return &___U3CwidthU3Ek__BackingField_0; }
	inline void set_U3CwidthU3Ek__BackingField_0(int32_t value)
	{
		___U3CwidthU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CheightU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ___U3CheightU3Ek__BackingField_1)); }
	inline int32_t get_U3CheightU3Ek__BackingField_1() const { return ___U3CheightU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CheightU3Ek__BackingField_1() { return &___U3CheightU3Ek__BackingField_1; }
	inline void set_U3CheightU3Ek__BackingField_1(int32_t value)
	{
		___U3CheightU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CmsaaSamplesU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ___U3CmsaaSamplesU3Ek__BackingField_2)); }
	inline int32_t get_U3CmsaaSamplesU3Ek__BackingField_2() const { return ___U3CmsaaSamplesU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CmsaaSamplesU3Ek__BackingField_2() { return &___U3CmsaaSamplesU3Ek__BackingField_2; }
	inline void set_U3CmsaaSamplesU3Ek__BackingField_2(int32_t value)
	{
		___U3CmsaaSamplesU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CvolumeDepthU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ___U3CvolumeDepthU3Ek__BackingField_3)); }
	inline int32_t get_U3CvolumeDepthU3Ek__BackingField_3() const { return ___U3CvolumeDepthU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CvolumeDepthU3Ek__BackingField_3() { return &___U3CvolumeDepthU3Ek__BackingField_3; }
	inline void set_U3CvolumeDepthU3Ek__BackingField_3(int32_t value)
	{
		___U3CvolumeDepthU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CmipCountU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ___U3CmipCountU3Ek__BackingField_4)); }
	inline int32_t get_U3CmipCountU3Ek__BackingField_4() const { return ___U3CmipCountU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CmipCountU3Ek__BackingField_4() { return &___U3CmipCountU3Ek__BackingField_4; }
	inline void set_U3CmipCountU3Ek__BackingField_4(int32_t value)
	{
		___U3CmipCountU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of__graphicsFormat_5() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ____graphicsFormat_5)); }
	inline int32_t get__graphicsFormat_5() const { return ____graphicsFormat_5; }
	inline int32_t* get_address_of__graphicsFormat_5() { return &____graphicsFormat_5; }
	inline void set__graphicsFormat_5(int32_t value)
	{
		____graphicsFormat_5 = value;
	}

	inline static int32_t get_offset_of_U3CstencilFormatU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ___U3CstencilFormatU3Ek__BackingField_6)); }
	inline int32_t get_U3CstencilFormatU3Ek__BackingField_6() const { return ___U3CstencilFormatU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CstencilFormatU3Ek__BackingField_6() { return &___U3CstencilFormatU3Ek__BackingField_6; }
	inline void set_U3CstencilFormatU3Ek__BackingField_6(int32_t value)
	{
		___U3CstencilFormatU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of__depthBufferBits_7() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ____depthBufferBits_7)); }
	inline int32_t get__depthBufferBits_7() const { return ____depthBufferBits_7; }
	inline int32_t* get_address_of__depthBufferBits_7() { return &____depthBufferBits_7; }
	inline void set__depthBufferBits_7(int32_t value)
	{
		____depthBufferBits_7 = value;
	}

	inline static int32_t get_offset_of_U3CdimensionU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ___U3CdimensionU3Ek__BackingField_9)); }
	inline int32_t get_U3CdimensionU3Ek__BackingField_9() const { return ___U3CdimensionU3Ek__BackingField_9; }
	inline int32_t* get_address_of_U3CdimensionU3Ek__BackingField_9() { return &___U3CdimensionU3Ek__BackingField_9; }
	inline void set_U3CdimensionU3Ek__BackingField_9(int32_t value)
	{
		___U3CdimensionU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CshadowSamplingModeU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ___U3CshadowSamplingModeU3Ek__BackingField_10)); }
	inline int32_t get_U3CshadowSamplingModeU3Ek__BackingField_10() const { return ___U3CshadowSamplingModeU3Ek__BackingField_10; }
	inline int32_t* get_address_of_U3CshadowSamplingModeU3Ek__BackingField_10() { return &___U3CshadowSamplingModeU3Ek__BackingField_10; }
	inline void set_U3CshadowSamplingModeU3Ek__BackingField_10(int32_t value)
	{
		___U3CshadowSamplingModeU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CvrUsageU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ___U3CvrUsageU3Ek__BackingField_11)); }
	inline int32_t get_U3CvrUsageU3Ek__BackingField_11() const { return ___U3CvrUsageU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CvrUsageU3Ek__BackingField_11() { return &___U3CvrUsageU3Ek__BackingField_11; }
	inline void set_U3CvrUsageU3Ek__BackingField_11(int32_t value)
	{
		___U3CvrUsageU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of__flags_12() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ____flags_12)); }
	inline int32_t get__flags_12() const { return ____flags_12; }
	inline int32_t* get_address_of__flags_12() { return &____flags_12; }
	inline void set__flags_12(int32_t value)
	{
		____flags_12 = value;
	}

	inline static int32_t get_offset_of_U3CmemorylessU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ___U3CmemorylessU3Ek__BackingField_13)); }
	inline int32_t get_U3CmemorylessU3Ek__BackingField_13() const { return ___U3CmemorylessU3Ek__BackingField_13; }
	inline int32_t* get_address_of_U3CmemorylessU3Ek__BackingField_13() { return &___U3CmemorylessU3Ek__BackingField_13; }
	inline void set_U3CmemorylessU3Ek__BackingField_13(int32_t value)
	{
		___U3CmemorylessU3Ek__BackingField_13 = value;
	}
};

struct RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47_StaticFields
{
public:
	// System.Int32[] UnityEngine.RenderTextureDescriptor::depthFormatBits
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___depthFormatBits_8;

public:
	inline static int32_t get_offset_of_depthFormatBits_8() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47_StaticFields, ___depthFormatBits_8)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_depthFormatBits_8() const { return ___depthFormatBits_8; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_depthFormatBits_8() { return &___depthFormatBits_8; }
	inline void set_depthFormatBits_8(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___depthFormatBits_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___depthFormatBits_8), (void*)value);
	}
};


// Naninovel.ScriptPlayer
struct  ScriptPlayer_tF4D08702F59ADF598506DB5CDBF38D9AF1C71D35  : public RuntimeObject
{
public:
	// System.Action`1<Naninovel.Script> Naninovel.ScriptPlayer::OnPlay
	Action_1_tDEA030839D283792549B1C42555230A54DD265C8 * ___OnPlay_0;
	// System.Action`1<Naninovel.Script> Naninovel.ScriptPlayer::OnStop
	Action_1_tDEA030839D283792549B1C42555230A54DD265C8 * ___OnStop_1;
	// System.Action`1<Naninovel.Commands.Command> Naninovel.ScriptPlayer::OnCommandExecutionStart
	Action_1_t218D2034E21879AA8365809756B403883D165C12 * ___OnCommandExecutionStart_2;
	// System.Action`1<Naninovel.Commands.Command> Naninovel.ScriptPlayer::OnCommandExecutionFinish
	Action_1_t218D2034E21879AA8365809756B403883D165C12 * ___OnCommandExecutionFinish_3;
	// System.Action`1<System.Boolean> Naninovel.ScriptPlayer::OnSkip
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___OnSkip_4;
	// System.Action`1<System.Boolean> Naninovel.ScriptPlayer::OnAutoPlay
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___OnAutoPlay_5;
	// System.Action`1<System.Boolean> Naninovel.ScriptPlayer::OnWaitingForInput
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___OnWaitingForInput_6;
	// Naninovel.ScriptPlayerConfiguration Naninovel.ScriptPlayer::<Configuration>k__BackingField
	ScriptPlayerConfiguration_t1380A4ED4409C0A6663311C84CC9FB91F02377B7 * ___U3CConfigurationU3Ek__BackingField_7;
	// System.Boolean Naninovel.ScriptPlayer::<SkipActive>k__BackingField
	bool ___U3CSkipActiveU3Ek__BackingField_8;
	// System.Boolean Naninovel.ScriptPlayer::<AutoPlayActive>k__BackingField
	bool ___U3CAutoPlayActiveU3Ek__BackingField_9;
	// System.Boolean Naninovel.ScriptPlayer::<WaitingForInput>k__BackingField
	bool ___U3CWaitingForInputU3Ek__BackingField_10;
	// Naninovel.PlayerSkipMode Naninovel.ScriptPlayer::<SkipMode>k__BackingField
	int32_t ___U3CSkipModeU3Ek__BackingField_11;
	// Naninovel.Script Naninovel.ScriptPlayer::<PlayedScript>k__BackingField
	Script_t1FE29ADC687DB274D1FB6843B02A5CCA6DA2A773 * ___U3CPlayedScriptU3Ek__BackingField_12;
	// Naninovel.ScriptPlaylist Naninovel.ScriptPlayer::<Playlist>k__BackingField
	ScriptPlaylist_t79D89C21C60A9E92AB800CE0676208FDF5D9A57C * ___U3CPlaylistU3Ek__BackingField_13;
	// System.Int32 Naninovel.ScriptPlayer::<PlayedIndex>k__BackingField
	int32_t ___U3CPlayedIndexU3Ek__BackingField_14;
	// System.Collections.Generic.Stack`1<Naninovel.PlaybackSpot> Naninovel.ScriptPlayer::<GosubReturnSpots>k__BackingField
	Stack_1_tE01199F108EA6573ABF03552C2C124E8C8BFFE38 * ___U3CGosubReturnSpotsU3Ek__BackingField_15;
	// Naninovel.ResourceProviderConfiguration Naninovel.ScriptPlayer::providerConfig
	ResourceProviderConfiguration_t3DA026DD65330D0650E6F5B672AEEE1C222591AB * ___providerConfig_16;
	// System.Collections.Generic.List`1<System.Func`2<Naninovel.Commands.Command,UniRx.Async.UniTask>> Naninovel.ScriptPlayer::preExecutionTasks
	List_1_t37D2BE0B14BEA94DC451A19C24D6BF16A532892A * ___preExecutionTasks_17;
	// System.Collections.Generic.List`1<System.Func`2<Naninovel.Commands.Command,UniRx.Async.UniTask>> Naninovel.ScriptPlayer::postExecutionTasks
	List_1_t37D2BE0B14BEA94DC451A19C24D6BF16A532892A * ___postExecutionTasks_18;
	// System.Collections.Generic.Queue`1<System.Func`1<UniRx.Async.UniTask>> Naninovel.ScriptPlayer::onSynchronizeTasks
	Queue_1_t01697EF50D3E6641B0320AD87F27A70D2179A942 * ___onSynchronizeTasks_19;
	// Naninovel.IInputManager Naninovel.ScriptPlayer::inputManager
	RuntimeObject* ___inputManager_20;
	// Naninovel.IScriptManager Naninovel.ScriptPlayer::scriptManager
	RuntimeObject* ___scriptManager_21;
	// Naninovel.IStateManager Naninovel.ScriptPlayer::stateManager
	RuntimeObject* ___stateManager_22;
	// System.Int32 Naninovel.ScriptPlayer::executedCommandsCount
	int32_t ___executedCommandsCount_23;
	// System.Boolean Naninovel.ScriptPlayer::executedPlayedCommand
	bool ___executedPlayedCommand_24;
	// Naninovel.PlayedScriptRegister Naninovel.ScriptPlayer::playedScriptRegister
	PlayedScriptRegister_t8BF1403E55C8E899223D77A9D56B52EAAA400A82 * ___playedScriptRegister_25;
	// System.Threading.CancellationTokenSource Naninovel.ScriptPlayer::playRoutineCTS
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___playRoutineCTS_26;
	// System.Threading.CancellationTokenSource Naninovel.ScriptPlayer::commandExecutionCTS
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___commandExecutionCTS_27;
	// System.Threading.CancellationTokenSource Naninovel.ScriptPlayer::synchronizationCTS
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___synchronizationCTS_28;
	// UniRx.Async.UniTaskCompletionSource Naninovel.ScriptPlayer::waitForWaitForInputDisabledTCS
	UniTaskCompletionSource_t350D0ADD99ECD117EC0E4A64732808CCC787CDE9 * ___waitForWaitForInputDisabledTCS_29;
	// UniRx.Async.UniTaskCompletionSource Naninovel.ScriptPlayer::synchronizeTCS
	UniTaskCompletionSource_t350D0ADD99ECD117EC0E4A64732808CCC787CDE9 * ___synchronizeTCS_30;
	// Naninovel.IInputSampler Naninovel.ScriptPlayer::continueInput
	RuntimeObject* ___continueInput_31;
	// Naninovel.IInputSampler Naninovel.ScriptPlayer::skipInput
	RuntimeObject* ___skipInput_32;
	// Naninovel.IInputSampler Naninovel.ScriptPlayer::autoPlayInput
	RuntimeObject* ___autoPlayInput_33;

public:
	inline static int32_t get_offset_of_OnPlay_0() { return static_cast<int32_t>(offsetof(ScriptPlayer_tF4D08702F59ADF598506DB5CDBF38D9AF1C71D35, ___OnPlay_0)); }
	inline Action_1_tDEA030839D283792549B1C42555230A54DD265C8 * get_OnPlay_0() const { return ___OnPlay_0; }
	inline Action_1_tDEA030839D283792549B1C42555230A54DD265C8 ** get_address_of_OnPlay_0() { return &___OnPlay_0; }
	inline void set_OnPlay_0(Action_1_tDEA030839D283792549B1C42555230A54DD265C8 * value)
	{
		___OnPlay_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPlay_0), (void*)value);
	}

	inline static int32_t get_offset_of_OnStop_1() { return static_cast<int32_t>(offsetof(ScriptPlayer_tF4D08702F59ADF598506DB5CDBF38D9AF1C71D35, ___OnStop_1)); }
	inline Action_1_tDEA030839D283792549B1C42555230A54DD265C8 * get_OnStop_1() const { return ___OnStop_1; }
	inline Action_1_tDEA030839D283792549B1C42555230A54DD265C8 ** get_address_of_OnStop_1() { return &___OnStop_1; }
	inline void set_OnStop_1(Action_1_tDEA030839D283792549B1C42555230A54DD265C8 * value)
	{
		___OnStop_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnStop_1), (void*)value);
	}

	inline static int32_t get_offset_of_OnCommandExecutionStart_2() { return static_cast<int32_t>(offsetof(ScriptPlayer_tF4D08702F59ADF598506DB5CDBF38D9AF1C71D35, ___OnCommandExecutionStart_2)); }
	inline Action_1_t218D2034E21879AA8365809756B403883D165C12 * get_OnCommandExecutionStart_2() const { return ___OnCommandExecutionStart_2; }
	inline Action_1_t218D2034E21879AA8365809756B403883D165C12 ** get_address_of_OnCommandExecutionStart_2() { return &___OnCommandExecutionStart_2; }
	inline void set_OnCommandExecutionStart_2(Action_1_t218D2034E21879AA8365809756B403883D165C12 * value)
	{
		___OnCommandExecutionStart_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnCommandExecutionStart_2), (void*)value);
	}

	inline static int32_t get_offset_of_OnCommandExecutionFinish_3() { return static_cast<int32_t>(offsetof(ScriptPlayer_tF4D08702F59ADF598506DB5CDBF38D9AF1C71D35, ___OnCommandExecutionFinish_3)); }
	inline Action_1_t218D2034E21879AA8365809756B403883D165C12 * get_OnCommandExecutionFinish_3() const { return ___OnCommandExecutionFinish_3; }
	inline Action_1_t218D2034E21879AA8365809756B403883D165C12 ** get_address_of_OnCommandExecutionFinish_3() { return &___OnCommandExecutionFinish_3; }
	inline void set_OnCommandExecutionFinish_3(Action_1_t218D2034E21879AA8365809756B403883D165C12 * value)
	{
		___OnCommandExecutionFinish_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnCommandExecutionFinish_3), (void*)value);
	}

	inline static int32_t get_offset_of_OnSkip_4() { return static_cast<int32_t>(offsetof(ScriptPlayer_tF4D08702F59ADF598506DB5CDBF38D9AF1C71D35, ___OnSkip_4)); }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * get_OnSkip_4() const { return ___OnSkip_4; }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 ** get_address_of_OnSkip_4() { return &___OnSkip_4; }
	inline void set_OnSkip_4(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * value)
	{
		___OnSkip_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSkip_4), (void*)value);
	}

	inline static int32_t get_offset_of_OnAutoPlay_5() { return static_cast<int32_t>(offsetof(ScriptPlayer_tF4D08702F59ADF598506DB5CDBF38D9AF1C71D35, ___OnAutoPlay_5)); }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * get_OnAutoPlay_5() const { return ___OnAutoPlay_5; }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 ** get_address_of_OnAutoPlay_5() { return &___OnAutoPlay_5; }
	inline void set_OnAutoPlay_5(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * value)
	{
		___OnAutoPlay_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAutoPlay_5), (void*)value);
	}

	inline static int32_t get_offset_of_OnWaitingForInput_6() { return static_cast<int32_t>(offsetof(ScriptPlayer_tF4D08702F59ADF598506DB5CDBF38D9AF1C71D35, ___OnWaitingForInput_6)); }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * get_OnWaitingForInput_6() const { return ___OnWaitingForInput_6; }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 ** get_address_of_OnWaitingForInput_6() { return &___OnWaitingForInput_6; }
	inline void set_OnWaitingForInput_6(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * value)
	{
		___OnWaitingForInput_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnWaitingForInput_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CConfigurationU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(ScriptPlayer_tF4D08702F59ADF598506DB5CDBF38D9AF1C71D35, ___U3CConfigurationU3Ek__BackingField_7)); }
	inline ScriptPlayerConfiguration_t1380A4ED4409C0A6663311C84CC9FB91F02377B7 * get_U3CConfigurationU3Ek__BackingField_7() const { return ___U3CConfigurationU3Ek__BackingField_7; }
	inline ScriptPlayerConfiguration_t1380A4ED4409C0A6663311C84CC9FB91F02377B7 ** get_address_of_U3CConfigurationU3Ek__BackingField_7() { return &___U3CConfigurationU3Ek__BackingField_7; }
	inline void set_U3CConfigurationU3Ek__BackingField_7(ScriptPlayerConfiguration_t1380A4ED4409C0A6663311C84CC9FB91F02377B7 * value)
	{
		___U3CConfigurationU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CConfigurationU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSkipActiveU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(ScriptPlayer_tF4D08702F59ADF598506DB5CDBF38D9AF1C71D35, ___U3CSkipActiveU3Ek__BackingField_8)); }
	inline bool get_U3CSkipActiveU3Ek__BackingField_8() const { return ___U3CSkipActiveU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CSkipActiveU3Ek__BackingField_8() { return &___U3CSkipActiveU3Ek__BackingField_8; }
	inline void set_U3CSkipActiveU3Ek__BackingField_8(bool value)
	{
		___U3CSkipActiveU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CAutoPlayActiveU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(ScriptPlayer_tF4D08702F59ADF598506DB5CDBF38D9AF1C71D35, ___U3CAutoPlayActiveU3Ek__BackingField_9)); }
	inline bool get_U3CAutoPlayActiveU3Ek__BackingField_9() const { return ___U3CAutoPlayActiveU3Ek__BackingField_9; }
	inline bool* get_address_of_U3CAutoPlayActiveU3Ek__BackingField_9() { return &___U3CAutoPlayActiveU3Ek__BackingField_9; }
	inline void set_U3CAutoPlayActiveU3Ek__BackingField_9(bool value)
	{
		___U3CAutoPlayActiveU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CWaitingForInputU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(ScriptPlayer_tF4D08702F59ADF598506DB5CDBF38D9AF1C71D35, ___U3CWaitingForInputU3Ek__BackingField_10)); }
	inline bool get_U3CWaitingForInputU3Ek__BackingField_10() const { return ___U3CWaitingForInputU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CWaitingForInputU3Ek__BackingField_10() { return &___U3CWaitingForInputU3Ek__BackingField_10; }
	inline void set_U3CWaitingForInputU3Ek__BackingField_10(bool value)
	{
		___U3CWaitingForInputU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CSkipModeU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(ScriptPlayer_tF4D08702F59ADF598506DB5CDBF38D9AF1C71D35, ___U3CSkipModeU3Ek__BackingField_11)); }
	inline int32_t get_U3CSkipModeU3Ek__BackingField_11() const { return ___U3CSkipModeU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CSkipModeU3Ek__BackingField_11() { return &___U3CSkipModeU3Ek__BackingField_11; }
	inline void set_U3CSkipModeU3Ek__BackingField_11(int32_t value)
	{
		___U3CSkipModeU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CPlayedScriptU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(ScriptPlayer_tF4D08702F59ADF598506DB5CDBF38D9AF1C71D35, ___U3CPlayedScriptU3Ek__BackingField_12)); }
	inline Script_t1FE29ADC687DB274D1FB6843B02A5CCA6DA2A773 * get_U3CPlayedScriptU3Ek__BackingField_12() const { return ___U3CPlayedScriptU3Ek__BackingField_12; }
	inline Script_t1FE29ADC687DB274D1FB6843B02A5CCA6DA2A773 ** get_address_of_U3CPlayedScriptU3Ek__BackingField_12() { return &___U3CPlayedScriptU3Ek__BackingField_12; }
	inline void set_U3CPlayedScriptU3Ek__BackingField_12(Script_t1FE29ADC687DB274D1FB6843B02A5CCA6DA2A773 * value)
	{
		___U3CPlayedScriptU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPlayedScriptU3Ek__BackingField_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPlaylistU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(ScriptPlayer_tF4D08702F59ADF598506DB5CDBF38D9AF1C71D35, ___U3CPlaylistU3Ek__BackingField_13)); }
	inline ScriptPlaylist_t79D89C21C60A9E92AB800CE0676208FDF5D9A57C * get_U3CPlaylistU3Ek__BackingField_13() const { return ___U3CPlaylistU3Ek__BackingField_13; }
	inline ScriptPlaylist_t79D89C21C60A9E92AB800CE0676208FDF5D9A57C ** get_address_of_U3CPlaylistU3Ek__BackingField_13() { return &___U3CPlaylistU3Ek__BackingField_13; }
	inline void set_U3CPlaylistU3Ek__BackingField_13(ScriptPlaylist_t79D89C21C60A9E92AB800CE0676208FDF5D9A57C * value)
	{
		___U3CPlaylistU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPlaylistU3Ek__BackingField_13), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPlayedIndexU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(ScriptPlayer_tF4D08702F59ADF598506DB5CDBF38D9AF1C71D35, ___U3CPlayedIndexU3Ek__BackingField_14)); }
	inline int32_t get_U3CPlayedIndexU3Ek__BackingField_14() const { return ___U3CPlayedIndexU3Ek__BackingField_14; }
	inline int32_t* get_address_of_U3CPlayedIndexU3Ek__BackingField_14() { return &___U3CPlayedIndexU3Ek__BackingField_14; }
	inline void set_U3CPlayedIndexU3Ek__BackingField_14(int32_t value)
	{
		___U3CPlayedIndexU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CGosubReturnSpotsU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(ScriptPlayer_tF4D08702F59ADF598506DB5CDBF38D9AF1C71D35, ___U3CGosubReturnSpotsU3Ek__BackingField_15)); }
	inline Stack_1_tE01199F108EA6573ABF03552C2C124E8C8BFFE38 * get_U3CGosubReturnSpotsU3Ek__BackingField_15() const { return ___U3CGosubReturnSpotsU3Ek__BackingField_15; }
	inline Stack_1_tE01199F108EA6573ABF03552C2C124E8C8BFFE38 ** get_address_of_U3CGosubReturnSpotsU3Ek__BackingField_15() { return &___U3CGosubReturnSpotsU3Ek__BackingField_15; }
	inline void set_U3CGosubReturnSpotsU3Ek__BackingField_15(Stack_1_tE01199F108EA6573ABF03552C2C124E8C8BFFE38 * value)
	{
		___U3CGosubReturnSpotsU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CGosubReturnSpotsU3Ek__BackingField_15), (void*)value);
	}

	inline static int32_t get_offset_of_providerConfig_16() { return static_cast<int32_t>(offsetof(ScriptPlayer_tF4D08702F59ADF598506DB5CDBF38D9AF1C71D35, ___providerConfig_16)); }
	inline ResourceProviderConfiguration_t3DA026DD65330D0650E6F5B672AEEE1C222591AB * get_providerConfig_16() const { return ___providerConfig_16; }
	inline ResourceProviderConfiguration_t3DA026DD65330D0650E6F5B672AEEE1C222591AB ** get_address_of_providerConfig_16() { return &___providerConfig_16; }
	inline void set_providerConfig_16(ResourceProviderConfiguration_t3DA026DD65330D0650E6F5B672AEEE1C222591AB * value)
	{
		___providerConfig_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___providerConfig_16), (void*)value);
	}

	inline static int32_t get_offset_of_preExecutionTasks_17() { return static_cast<int32_t>(offsetof(ScriptPlayer_tF4D08702F59ADF598506DB5CDBF38D9AF1C71D35, ___preExecutionTasks_17)); }
	inline List_1_t37D2BE0B14BEA94DC451A19C24D6BF16A532892A * get_preExecutionTasks_17() const { return ___preExecutionTasks_17; }
	inline List_1_t37D2BE0B14BEA94DC451A19C24D6BF16A532892A ** get_address_of_preExecutionTasks_17() { return &___preExecutionTasks_17; }
	inline void set_preExecutionTasks_17(List_1_t37D2BE0B14BEA94DC451A19C24D6BF16A532892A * value)
	{
		___preExecutionTasks_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___preExecutionTasks_17), (void*)value);
	}

	inline static int32_t get_offset_of_postExecutionTasks_18() { return static_cast<int32_t>(offsetof(ScriptPlayer_tF4D08702F59ADF598506DB5CDBF38D9AF1C71D35, ___postExecutionTasks_18)); }
	inline List_1_t37D2BE0B14BEA94DC451A19C24D6BF16A532892A * get_postExecutionTasks_18() const { return ___postExecutionTasks_18; }
	inline List_1_t37D2BE0B14BEA94DC451A19C24D6BF16A532892A ** get_address_of_postExecutionTasks_18() { return &___postExecutionTasks_18; }
	inline void set_postExecutionTasks_18(List_1_t37D2BE0B14BEA94DC451A19C24D6BF16A532892A * value)
	{
		___postExecutionTasks_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___postExecutionTasks_18), (void*)value);
	}

	inline static int32_t get_offset_of_onSynchronizeTasks_19() { return static_cast<int32_t>(offsetof(ScriptPlayer_tF4D08702F59ADF598506DB5CDBF38D9AF1C71D35, ___onSynchronizeTasks_19)); }
	inline Queue_1_t01697EF50D3E6641B0320AD87F27A70D2179A942 * get_onSynchronizeTasks_19() const { return ___onSynchronizeTasks_19; }
	inline Queue_1_t01697EF50D3E6641B0320AD87F27A70D2179A942 ** get_address_of_onSynchronizeTasks_19() { return &___onSynchronizeTasks_19; }
	inline void set_onSynchronizeTasks_19(Queue_1_t01697EF50D3E6641B0320AD87F27A70D2179A942 * value)
	{
		___onSynchronizeTasks_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onSynchronizeTasks_19), (void*)value);
	}

	inline static int32_t get_offset_of_inputManager_20() { return static_cast<int32_t>(offsetof(ScriptPlayer_tF4D08702F59ADF598506DB5CDBF38D9AF1C71D35, ___inputManager_20)); }
	inline RuntimeObject* get_inputManager_20() const { return ___inputManager_20; }
	inline RuntimeObject** get_address_of_inputManager_20() { return &___inputManager_20; }
	inline void set_inputManager_20(RuntimeObject* value)
	{
		___inputManager_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputManager_20), (void*)value);
	}

	inline static int32_t get_offset_of_scriptManager_21() { return static_cast<int32_t>(offsetof(ScriptPlayer_tF4D08702F59ADF598506DB5CDBF38D9AF1C71D35, ___scriptManager_21)); }
	inline RuntimeObject* get_scriptManager_21() const { return ___scriptManager_21; }
	inline RuntimeObject** get_address_of_scriptManager_21() { return &___scriptManager_21; }
	inline void set_scriptManager_21(RuntimeObject* value)
	{
		___scriptManager_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scriptManager_21), (void*)value);
	}

	inline static int32_t get_offset_of_stateManager_22() { return static_cast<int32_t>(offsetof(ScriptPlayer_tF4D08702F59ADF598506DB5CDBF38D9AF1C71D35, ___stateManager_22)); }
	inline RuntimeObject* get_stateManager_22() const { return ___stateManager_22; }
	inline RuntimeObject** get_address_of_stateManager_22() { return &___stateManager_22; }
	inline void set_stateManager_22(RuntimeObject* value)
	{
		___stateManager_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stateManager_22), (void*)value);
	}

	inline static int32_t get_offset_of_executedCommandsCount_23() { return static_cast<int32_t>(offsetof(ScriptPlayer_tF4D08702F59ADF598506DB5CDBF38D9AF1C71D35, ___executedCommandsCount_23)); }
	inline int32_t get_executedCommandsCount_23() const { return ___executedCommandsCount_23; }
	inline int32_t* get_address_of_executedCommandsCount_23() { return &___executedCommandsCount_23; }
	inline void set_executedCommandsCount_23(int32_t value)
	{
		___executedCommandsCount_23 = value;
	}

	inline static int32_t get_offset_of_executedPlayedCommand_24() { return static_cast<int32_t>(offsetof(ScriptPlayer_tF4D08702F59ADF598506DB5CDBF38D9AF1C71D35, ___executedPlayedCommand_24)); }
	inline bool get_executedPlayedCommand_24() const { return ___executedPlayedCommand_24; }
	inline bool* get_address_of_executedPlayedCommand_24() { return &___executedPlayedCommand_24; }
	inline void set_executedPlayedCommand_24(bool value)
	{
		___executedPlayedCommand_24 = value;
	}

	inline static int32_t get_offset_of_playedScriptRegister_25() { return static_cast<int32_t>(offsetof(ScriptPlayer_tF4D08702F59ADF598506DB5CDBF38D9AF1C71D35, ___playedScriptRegister_25)); }
	inline PlayedScriptRegister_t8BF1403E55C8E899223D77A9D56B52EAAA400A82 * get_playedScriptRegister_25() const { return ___playedScriptRegister_25; }
	inline PlayedScriptRegister_t8BF1403E55C8E899223D77A9D56B52EAAA400A82 ** get_address_of_playedScriptRegister_25() { return &___playedScriptRegister_25; }
	inline void set_playedScriptRegister_25(PlayedScriptRegister_t8BF1403E55C8E899223D77A9D56B52EAAA400A82 * value)
	{
		___playedScriptRegister_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playedScriptRegister_25), (void*)value);
	}

	inline static int32_t get_offset_of_playRoutineCTS_26() { return static_cast<int32_t>(offsetof(ScriptPlayer_tF4D08702F59ADF598506DB5CDBF38D9AF1C71D35, ___playRoutineCTS_26)); }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * get_playRoutineCTS_26() const { return ___playRoutineCTS_26; }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 ** get_address_of_playRoutineCTS_26() { return &___playRoutineCTS_26; }
	inline void set_playRoutineCTS_26(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * value)
	{
		___playRoutineCTS_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playRoutineCTS_26), (void*)value);
	}

	inline static int32_t get_offset_of_commandExecutionCTS_27() { return static_cast<int32_t>(offsetof(ScriptPlayer_tF4D08702F59ADF598506DB5CDBF38D9AF1C71D35, ___commandExecutionCTS_27)); }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * get_commandExecutionCTS_27() const { return ___commandExecutionCTS_27; }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 ** get_address_of_commandExecutionCTS_27() { return &___commandExecutionCTS_27; }
	inline void set_commandExecutionCTS_27(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * value)
	{
		___commandExecutionCTS_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___commandExecutionCTS_27), (void*)value);
	}

	inline static int32_t get_offset_of_synchronizationCTS_28() { return static_cast<int32_t>(offsetof(ScriptPlayer_tF4D08702F59ADF598506DB5CDBF38D9AF1C71D35, ___synchronizationCTS_28)); }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * get_synchronizationCTS_28() const { return ___synchronizationCTS_28; }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 ** get_address_of_synchronizationCTS_28() { return &___synchronizationCTS_28; }
	inline void set_synchronizationCTS_28(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * value)
	{
		___synchronizationCTS_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___synchronizationCTS_28), (void*)value);
	}

	inline static int32_t get_offset_of_waitForWaitForInputDisabledTCS_29() { return static_cast<int32_t>(offsetof(ScriptPlayer_tF4D08702F59ADF598506DB5CDBF38D9AF1C71D35, ___waitForWaitForInputDisabledTCS_29)); }
	inline UniTaskCompletionSource_t350D0ADD99ECD117EC0E4A64732808CCC787CDE9 * get_waitForWaitForInputDisabledTCS_29() const { return ___waitForWaitForInputDisabledTCS_29; }
	inline UniTaskCompletionSource_t350D0ADD99ECD117EC0E4A64732808CCC787CDE9 ** get_address_of_waitForWaitForInputDisabledTCS_29() { return &___waitForWaitForInputDisabledTCS_29; }
	inline void set_waitForWaitForInputDisabledTCS_29(UniTaskCompletionSource_t350D0ADD99ECD117EC0E4A64732808CCC787CDE9 * value)
	{
		___waitForWaitForInputDisabledTCS_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___waitForWaitForInputDisabledTCS_29), (void*)value);
	}

	inline static int32_t get_offset_of_synchronizeTCS_30() { return static_cast<int32_t>(offsetof(ScriptPlayer_tF4D08702F59ADF598506DB5CDBF38D9AF1C71D35, ___synchronizeTCS_30)); }
	inline UniTaskCompletionSource_t350D0ADD99ECD117EC0E4A64732808CCC787CDE9 * get_synchronizeTCS_30() const { return ___synchronizeTCS_30; }
	inline UniTaskCompletionSource_t350D0ADD99ECD117EC0E4A64732808CCC787CDE9 ** get_address_of_synchronizeTCS_30() { return &___synchronizeTCS_30; }
	inline void set_synchronizeTCS_30(UniTaskCompletionSource_t350D0ADD99ECD117EC0E4A64732808CCC787CDE9 * value)
	{
		___synchronizeTCS_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___synchronizeTCS_30), (void*)value);
	}

	inline static int32_t get_offset_of_continueInput_31() { return static_cast<int32_t>(offsetof(ScriptPlayer_tF4D08702F59ADF598506DB5CDBF38D9AF1C71D35, ___continueInput_31)); }
	inline RuntimeObject* get_continueInput_31() const { return ___continueInput_31; }
	inline RuntimeObject** get_address_of_continueInput_31() { return &___continueInput_31; }
	inline void set_continueInput_31(RuntimeObject* value)
	{
		___continueInput_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___continueInput_31), (void*)value);
	}

	inline static int32_t get_offset_of_skipInput_32() { return static_cast<int32_t>(offsetof(ScriptPlayer_tF4D08702F59ADF598506DB5CDBF38D9AF1C71D35, ___skipInput_32)); }
	inline RuntimeObject* get_skipInput_32() const { return ___skipInput_32; }
	inline RuntimeObject** get_address_of_skipInput_32() { return &___skipInput_32; }
	inline void set_skipInput_32(RuntimeObject* value)
	{
		___skipInput_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___skipInput_32), (void*)value);
	}

	inline static int32_t get_offset_of_autoPlayInput_33() { return static_cast<int32_t>(offsetof(ScriptPlayer_tF4D08702F59ADF598506DB5CDBF38D9AF1C71D35, ___autoPlayInput_33)); }
	inline RuntimeObject* get_autoPlayInput_33() const { return ___autoPlayInput_33; }
	inline RuntimeObject** get_address_of_autoPlayInput_33() { return &___autoPlayInput_33; }
	inline void set_autoPlayInput_33(RuntimeObject* value)
	{
		___autoPlayInput_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___autoPlayInput_33), (void*)value);
	}
};


// UnityEngine.ScriptableObject
struct  ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
};

// UnityEngine.Shader
struct  Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Texture
struct  Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
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


// Naninovel.UITextPrinter
struct  UITextPrinter_tE773A1F37D741340101B7B853A20AA74E954D6A3  : public MonoBehaviourActor_1_t8D3EC05310486C2AFC17FCEEC202F9039BC5DD03
{
public:
	// Naninovel.UI.UITextPrinterPanel Naninovel.UITextPrinter::<PrinterPanel>k__BackingField
	UITextPrinterPanel_t332EC95C8F0F49BC7A8420ED5F3BA2CC8D1BF60F * ___U3CPrinterPanelU3Ek__BackingField_11;
	// System.Collections.Generic.List`1<System.String> Naninovel.UITextPrinter::richTextTags
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___richTextTags_12;
	// Naninovel.IUIManager Naninovel.UITextPrinter::uiManager
	RuntimeObject* ___uiManager_13;
	// Naninovel.ICharacterManager Naninovel.UITextPrinter::characterManager
	RuntimeObject* ___characterManager_14;
	// Naninovel.ICameraManager Naninovel.UITextPrinter::cameraManager
	RuntimeObject* ___cameraManager_15;
	// System.String Naninovel.UITextPrinter::text
	String_t* ___text_16;
	// System.String Naninovel.UITextPrinter::authorId
	String_t* ___authorId_17;
	// System.Threading.CancellationTokenSource Naninovel.UITextPrinter::revealTextCTS
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___revealTextCTS_18;
	// System.String Naninovel.UITextPrinter::activeOpenTags
	String_t* ___activeOpenTags_19;
	// System.String Naninovel.UITextPrinter::activeCloseTags
	String_t* ___activeCloseTags_20;

public:
	inline static int32_t get_offset_of_U3CPrinterPanelU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(UITextPrinter_tE773A1F37D741340101B7B853A20AA74E954D6A3, ___U3CPrinterPanelU3Ek__BackingField_11)); }
	inline UITextPrinterPanel_t332EC95C8F0F49BC7A8420ED5F3BA2CC8D1BF60F * get_U3CPrinterPanelU3Ek__BackingField_11() const { return ___U3CPrinterPanelU3Ek__BackingField_11; }
	inline UITextPrinterPanel_t332EC95C8F0F49BC7A8420ED5F3BA2CC8D1BF60F ** get_address_of_U3CPrinterPanelU3Ek__BackingField_11() { return &___U3CPrinterPanelU3Ek__BackingField_11; }
	inline void set_U3CPrinterPanelU3Ek__BackingField_11(UITextPrinterPanel_t332EC95C8F0F49BC7A8420ED5F3BA2CC8D1BF60F * value)
	{
		___U3CPrinterPanelU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPrinterPanelU3Ek__BackingField_11), (void*)value);
	}

	inline static int32_t get_offset_of_richTextTags_12() { return static_cast<int32_t>(offsetof(UITextPrinter_tE773A1F37D741340101B7B853A20AA74E954D6A3, ___richTextTags_12)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_richTextTags_12() const { return ___richTextTags_12; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_richTextTags_12() { return &___richTextTags_12; }
	inline void set_richTextTags_12(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___richTextTags_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___richTextTags_12), (void*)value);
	}

	inline static int32_t get_offset_of_uiManager_13() { return static_cast<int32_t>(offsetof(UITextPrinter_tE773A1F37D741340101B7B853A20AA74E954D6A3, ___uiManager_13)); }
	inline RuntimeObject* get_uiManager_13() const { return ___uiManager_13; }
	inline RuntimeObject** get_address_of_uiManager_13() { return &___uiManager_13; }
	inline void set_uiManager_13(RuntimeObject* value)
	{
		___uiManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___uiManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_characterManager_14() { return static_cast<int32_t>(offsetof(UITextPrinter_tE773A1F37D741340101B7B853A20AA74E954D6A3, ___characterManager_14)); }
	inline RuntimeObject* get_characterManager_14() const { return ___characterManager_14; }
	inline RuntimeObject** get_address_of_characterManager_14() { return &___characterManager_14; }
	inline void set_characterManager_14(RuntimeObject* value)
	{
		___characterManager_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___characterManager_14), (void*)value);
	}

	inline static int32_t get_offset_of_cameraManager_15() { return static_cast<int32_t>(offsetof(UITextPrinter_tE773A1F37D741340101B7B853A20AA74E954D6A3, ___cameraManager_15)); }
	inline RuntimeObject* get_cameraManager_15() const { return ___cameraManager_15; }
	inline RuntimeObject** get_address_of_cameraManager_15() { return &___cameraManager_15; }
	inline void set_cameraManager_15(RuntimeObject* value)
	{
		___cameraManager_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cameraManager_15), (void*)value);
	}

	inline static int32_t get_offset_of_text_16() { return static_cast<int32_t>(offsetof(UITextPrinter_tE773A1F37D741340101B7B853A20AA74E954D6A3, ___text_16)); }
	inline String_t* get_text_16() const { return ___text_16; }
	inline String_t** get_address_of_text_16() { return &___text_16; }
	inline void set_text_16(String_t* value)
	{
		___text_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_16), (void*)value);
	}

	inline static int32_t get_offset_of_authorId_17() { return static_cast<int32_t>(offsetof(UITextPrinter_tE773A1F37D741340101B7B853A20AA74E954D6A3, ___authorId_17)); }
	inline String_t* get_authorId_17() const { return ___authorId_17; }
	inline String_t** get_address_of_authorId_17() { return &___authorId_17; }
	inline void set_authorId_17(String_t* value)
	{
		___authorId_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___authorId_17), (void*)value);
	}

	inline static int32_t get_offset_of_revealTextCTS_18() { return static_cast<int32_t>(offsetof(UITextPrinter_tE773A1F37D741340101B7B853A20AA74E954D6A3, ___revealTextCTS_18)); }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * get_revealTextCTS_18() const { return ___revealTextCTS_18; }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 ** get_address_of_revealTextCTS_18() { return &___revealTextCTS_18; }
	inline void set_revealTextCTS_18(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * value)
	{
		___revealTextCTS_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___revealTextCTS_18), (void*)value);
	}

	inline static int32_t get_offset_of_activeOpenTags_19() { return static_cast<int32_t>(offsetof(UITextPrinter_tE773A1F37D741340101B7B853A20AA74E954D6A3, ___activeOpenTags_19)); }
	inline String_t* get_activeOpenTags_19() const { return ___activeOpenTags_19; }
	inline String_t** get_address_of_activeOpenTags_19() { return &___activeOpenTags_19; }
	inline void set_activeOpenTags_19(String_t* value)
	{
		___activeOpenTags_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___activeOpenTags_19), (void*)value);
	}

	inline static int32_t get_offset_of_activeCloseTags_20() { return static_cast<int32_t>(offsetof(UITextPrinter_tE773A1F37D741340101B7B853A20AA74E954D6A3, ___activeCloseTags_20)); }
	inline String_t* get_activeCloseTags_20() const { return ___activeCloseTags_20; }
	inline String_t** get_address_of_activeCloseTags_20() { return &___activeCloseTags_20; }
	inline void set_activeCloseTags_20(String_t* value)
	{
		___activeCloseTags_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___activeCloseTags_20), (void*)value);
	}
};


// UniRx.Async.UniTask
struct  UniTask_t41263A639210D10E03708EE0B4B03A964D7EEE3C 
{
public:
	// UniRx.Async.IAwaiter UniRx.Async.UniTask::awaiter
	RuntimeObject* ___awaiter_2;

public:
	inline static int32_t get_offset_of_awaiter_2() { return static_cast<int32_t>(offsetof(UniTask_t41263A639210D10E03708EE0B4B03A964D7EEE3C, ___awaiter_2)); }
	inline RuntimeObject* get_awaiter_2() const { return ___awaiter_2; }
	inline RuntimeObject** get_address_of_awaiter_2() { return &___awaiter_2; }
	inline void set_awaiter_2(RuntimeObject* value)
	{
		___awaiter_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___awaiter_2), (void*)value);
	}
};

struct UniTask_t41263A639210D10E03708EE0B4B03A964D7EEE3C_StaticFields
{
public:
	// UniRx.Async.UniTask UniRx.Async.UniTask::CanceledUniTask
	UniTask_t41263A639210D10E03708EE0B4B03A964D7EEE3C  ___CanceledUniTask_0;
	// UniRx.Async.UniTask`1<UniRx.Async.AsyncUnit> UniRx.Async.UniTask::DefaultAsyncUnitTask
	UniTask_1_t7C8F299D6C48E689478E34BDD2A4B1D2D5592CF5  ___DefaultAsyncUnitTask_1;

public:
	inline static int32_t get_offset_of_CanceledUniTask_0() { return static_cast<int32_t>(offsetof(UniTask_t41263A639210D10E03708EE0B4B03A964D7EEE3C_StaticFields, ___CanceledUniTask_0)); }
	inline UniTask_t41263A639210D10E03708EE0B4B03A964D7EEE3C  get_CanceledUniTask_0() const { return ___CanceledUniTask_0; }
	inline UniTask_t41263A639210D10E03708EE0B4B03A964D7EEE3C * get_address_of_CanceledUniTask_0() { return &___CanceledUniTask_0; }
	inline void set_CanceledUniTask_0(UniTask_t41263A639210D10E03708EE0B4B03A964D7EEE3C  value)
	{
		___CanceledUniTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___CanceledUniTask_0))->___awaiter_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_DefaultAsyncUnitTask_1() { return static_cast<int32_t>(offsetof(UniTask_t41263A639210D10E03708EE0B4B03A964D7EEE3C_StaticFields, ___DefaultAsyncUnitTask_1)); }
	inline UniTask_1_t7C8F299D6C48E689478E34BDD2A4B1D2D5592CF5  get_DefaultAsyncUnitTask_1() const { return ___DefaultAsyncUnitTask_1; }
	inline UniTask_1_t7C8F299D6C48E689478E34BDD2A4B1D2D5592CF5 * get_address_of_DefaultAsyncUnitTask_1() { return &___DefaultAsyncUnitTask_1; }
	inline void set_DefaultAsyncUnitTask_1(UniTask_1_t7C8F299D6C48E689478E34BDD2A4B1D2D5592CF5  value)
	{
		___DefaultAsyncUnitTask_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___DefaultAsyncUnitTask_1))->___awaiter_1), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of UniRx.Async.UniTask
struct UniTask_t41263A639210D10E03708EE0B4B03A964D7EEE3C_marshaled_pinvoke
{
	RuntimeObject* ___awaiter_2;
};
// Native definition for COM marshalling of UniRx.Async.UniTask
struct UniTask_t41263A639210D10E03708EE0B4B03A964D7EEE3C_marshaled_com
{
	RuntimeObject* ___awaiter_2;
};

// Naninovel.Commands.Unlock
struct  Unlock_tB9B22DC9885883E806C0E482F4D5FCA9AE5EBD46  : public Command_tFD9CA828C60C3E7CEA51152A05F64D1ED3F98E2A
{
public:
	// Naninovel.Commands.StringParameter Naninovel.Commands.Unlock::Id
	StringParameter_t33BF466D3AD2402CEA10C41D765102E093891CA8 * ___Id_6;

public:
	inline static int32_t get_offset_of_Id_6() { return static_cast<int32_t>(offsetof(Unlock_tB9B22DC9885883E806C0E482F4D5FCA9AE5EBD46, ___Id_6)); }
	inline StringParameter_t33BF466D3AD2402CEA10C41D765102E093891CA8 * get_Id_6() const { return ___Id_6; }
	inline StringParameter_t33BF466D3AD2402CEA10C41D765102E093891CA8 ** get_address_of_Id_6() { return &___Id_6; }
	inline void set_Id_6(StringParameter_t33BF466D3AD2402CEA10C41D765102E093891CA8 * value)
	{
		___Id_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Id_6), (void*)value);
	}
};


// UnityEngine.Video.VideoClip
struct  VideoClip_tA8C2507553BEE394C46B7A876D6F56DD09F6C90F  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// Naninovel.Commands.Wait
struct  Wait_t6D6FC838510D95749A0C737B03665BACEB27DB74  : public Command_tFD9CA828C60C3E7CEA51152A05F64D1ED3F98E2A
{
public:
	// Naninovel.Commands.StringParameter Naninovel.Commands.Wait::WaitMode
	StringParameter_t33BF466D3AD2402CEA10C41D765102E093891CA8 * ___WaitMode_7;

public:
	inline static int32_t get_offset_of_WaitMode_7() { return static_cast<int32_t>(offsetof(Wait_t6D6FC838510D95749A0C737B03665BACEB27DB74, ___WaitMode_7)); }
	inline StringParameter_t33BF466D3AD2402CEA10C41D765102E093891CA8 * get_WaitMode_7() const { return ___WaitMode_7; }
	inline StringParameter_t33BF466D3AD2402CEA10C41D765102E093891CA8 ** get_address_of_WaitMode_7() { return &___WaitMode_7; }
	inline void set_WaitMode_7(StringParameter_t33BF466D3AD2402CEA10C41D765102E093891CA8 * value)
	{
		___WaitMode_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WaitMode_7), (void*)value);
	}
};


// UniRx.Async.YieldAwaitable
struct  YieldAwaitable_t0AF0E5F39D5840C6614B26D0AF53DD2A63037F56 
{
public:
	// UniRx.Async.PlayerLoopTiming UniRx.Async.YieldAwaitable::timing
	int32_t ___timing_0;

public:
	inline static int32_t get_offset_of_timing_0() { return static_cast<int32_t>(offsetof(YieldAwaitable_t0AF0E5F39D5840C6614B26D0AF53DD2A63037F56, ___timing_0)); }
	inline int32_t get_timing_0() const { return ___timing_0; }
	inline int32_t* get_address_of_timing_0() { return &___timing_0; }
	inline void set_timing_0(int32_t value)
	{
		___timing_0 = value;
	}
};


// Naninovel.ScriptPlayer/<>c__DisplayClass123_0
struct  U3CU3Ec__DisplayClass123_0_tCBD47300FFAF1841C46E498D241EBD6528590772  : public RuntimeObject
{
public:
	// Naninovel.ScriptPlayer Naninovel.ScriptPlayer/<>c__DisplayClass123_0::<>4__this
	ScriptPlayer_tF4D08702F59ADF598506DB5CDBF38D9AF1C71D35 * ___U3CU3E4__this_0;
	// Naninovel.CancellationToken Naninovel.ScriptPlayer/<>c__DisplayClass123_0::executionToken
	CancellationToken_t6347F75AB41E1331E57D91A3F883A02D5FA698E3  ___executionToken_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass123_0_tCBD47300FFAF1841C46E498D241EBD6528590772, ___U3CU3E4__this_0)); }
	inline ScriptPlayer_tF4D08702F59ADF598506DB5CDBF38D9AF1C71D35 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline ScriptPlayer_tF4D08702F59ADF598506DB5CDBF38D9AF1C71D35 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(ScriptPlayer_tF4D08702F59ADF598506DB5CDBF38D9AF1C71D35 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_executionToken_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass123_0_tCBD47300FFAF1841C46E498D241EBD6528590772, ___executionToken_1)); }
	inline CancellationToken_t6347F75AB41E1331E57D91A3F883A02D5FA698E3  get_executionToken_1() const { return ___executionToken_1; }
	inline CancellationToken_t6347F75AB41E1331E57D91A3F883A02D5FA698E3 * get_address_of_executionToken_1() { return &___executionToken_1; }
	inline void set_executionToken_1(CancellationToken_t6347F75AB41E1331E57D91A3F883A02D5FA698E3  value)
	{
		___executionToken_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___executionToken_1))->___ASAPToken_2))->___m_source_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___executionToken_1))->___LazyToken_3))->___m_source_0), (void*)NULL);
		#endif
	}
};


// Naninovel.Commands.Unlock/<ExecuteAsync>d__1
struct  U3CExecuteAsyncU3Ed__1_t9E0B22C867E8CFF13B5369FD265382B0EB2122C2 
{
public:
	// System.Int32 Naninovel.Commands.Unlock/<ExecuteAsync>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder Naninovel.Commands.Unlock/<ExecuteAsync>d__1::<>t__builder
	AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33  ___U3CU3Et__builder_1;
	// Naninovel.Commands.Unlock Naninovel.Commands.Unlock/<ExecuteAsync>d__1::<>4__this
	Unlock_tB9B22DC9885883E806C0E482F4D5FCA9AE5EBD46 * ___U3CU3E4__this_2;
	// UniRx.Async.UniTask`1/Awaiter<Naninovel.GlobalStateMap> Naninovel.Commands.Unlock/<ExecuteAsync>d__1::<>u__1
	Awaiter_t2A04123A9B29D02DBE393CFF44AD80850561C5C0  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CExecuteAsyncU3Ed__1_t9E0B22C867E8CFF13B5369FD265382B0EB2122C2, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CExecuteAsyncU3Ed__1_t9E0B22C867E8CFF13B5369FD265382B0EB2122C2, ___U3CU3Et__builder_1)); }
	inline AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___promise_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___moveNext_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CExecuteAsyncU3Ed__1_t9E0B22C867E8CFF13B5369FD265382B0EB2122C2, ___U3CU3E4__this_2)); }
	inline Unlock_tB9B22DC9885883E806C0E482F4D5FCA9AE5EBD46 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Unlock_tB9B22DC9885883E806C0E482F4D5FCA9AE5EBD46 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Unlock_tB9B22DC9885883E806C0E482F4D5FCA9AE5EBD46 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CExecuteAsyncU3Ed__1_t9E0B22C867E8CFF13B5369FD265382B0EB2122C2, ___U3CU3Eu__1_3)); }
	inline Awaiter_t2A04123A9B29D02DBE393CFF44AD80850561C5C0  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline Awaiter_t2A04123A9B29D02DBE393CFF44AD80850561C5C0 * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(Awaiter_t2A04123A9B29D02DBE393CFF44AD80850561C5C0  value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Eu__1_3))->___task_0))->___result_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Eu__1_3))->___task_0))->___awaiter_1), (void*)NULL);
		#endif
	}
};


// Naninovel.VideoBackground/<GetOrLoadVideoDataAsync>d__30
struct  U3CGetOrLoadVideoDataAsyncU3Ed__30_tDF4395E0B62F17B7558DC26A111F9659F3932FA6 
{
public:
	// System.Int32 Naninovel.VideoBackground/<GetOrLoadVideoDataAsync>d__30::<>1__state
	int32_t ___U3CU3E1__state_0;
	// UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder`1<Naninovel.VideoBackground/VideoData> Naninovel.VideoBackground/<GetOrLoadVideoDataAsync>d__30::<>t__builder
	AsyncUniTaskMethodBuilder_1_t402090290561B301A3591C90C52DFCA007AEC1E4  ___U3CU3Et__builder_1;
	// System.String Naninovel.VideoBackground/<GetOrLoadVideoDataAsync>d__30::videoName
	String_t* ___videoName_2;
	// Naninovel.VideoBackground Naninovel.VideoBackground/<GetOrLoadVideoDataAsync>d__30::<>4__this
	VideoBackground_tC31D69C74D104E5F414AAE56250D1AAD449B7F47 * ___U3CU3E4__this_3;
	// UnityEngine.RenderTexture Naninovel.VideoBackground/<GetOrLoadVideoDataAsync>d__30::<renderTexture>5__2
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___U3CrenderTextureU3E5__2_4;
	// UnityEngine.Video.VideoPlayer Naninovel.VideoBackground/<GetOrLoadVideoDataAsync>d__30::<videoPlayer>5__3
	VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * ___U3CvideoPlayerU3E5__3_5;
	// UniRx.Async.UniTask`1/Awaiter<Naninovel.Resource`1<UnityEngine.Video.VideoClip>> Naninovel.VideoBackground/<GetOrLoadVideoDataAsync>d__30::<>u__1
	Awaiter_t8473B6ABE125918A05A5157E70D00B9F0DE43CCD  ___U3CU3Eu__1_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetOrLoadVideoDataAsyncU3Ed__30_tDF4395E0B62F17B7558DC26A111F9659F3932FA6, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CGetOrLoadVideoDataAsyncU3Ed__30_tDF4395E0B62F17B7558DC26A111F9659F3932FA6, ___U3CU3Et__builder_1)); }
	inline AsyncUniTaskMethodBuilder_1_t402090290561B301A3591C90C52DFCA007AEC1E4  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncUniTaskMethodBuilder_1_t402090290561B301A3591C90C52DFCA007AEC1E4 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncUniTaskMethodBuilder_1_t402090290561B301A3591C90C52DFCA007AEC1E4  value)
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

	inline static int32_t get_offset_of_videoName_2() { return static_cast<int32_t>(offsetof(U3CGetOrLoadVideoDataAsyncU3Ed__30_tDF4395E0B62F17B7558DC26A111F9659F3932FA6, ___videoName_2)); }
	inline String_t* get_videoName_2() const { return ___videoName_2; }
	inline String_t** get_address_of_videoName_2() { return &___videoName_2; }
	inline void set_videoName_2(String_t* value)
	{
		___videoName_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___videoName_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CGetOrLoadVideoDataAsyncU3Ed__30_tDF4395E0B62F17B7558DC26A111F9659F3932FA6, ___U3CU3E4__this_3)); }
	inline VideoBackground_tC31D69C74D104E5F414AAE56250D1AAD449B7F47 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline VideoBackground_tC31D69C74D104E5F414AAE56250D1AAD449B7F47 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(VideoBackground_tC31D69C74D104E5F414AAE56250D1AAD449B7F47 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrenderTextureU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CGetOrLoadVideoDataAsyncU3Ed__30_tDF4395E0B62F17B7558DC26A111F9659F3932FA6, ___U3CrenderTextureU3E5__2_4)); }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * get_U3CrenderTextureU3E5__2_4() const { return ___U3CrenderTextureU3E5__2_4; }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 ** get_address_of_U3CrenderTextureU3E5__2_4() { return &___U3CrenderTextureU3E5__2_4; }
	inline void set_U3CrenderTextureU3E5__2_4(RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * value)
	{
		___U3CrenderTextureU3E5__2_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrenderTextureU3E5__2_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CvideoPlayerU3E5__3_5() { return static_cast<int32_t>(offsetof(U3CGetOrLoadVideoDataAsyncU3Ed__30_tDF4395E0B62F17B7558DC26A111F9659F3932FA6, ___U3CvideoPlayerU3E5__3_5)); }
	inline VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * get_U3CvideoPlayerU3E5__3_5() const { return ___U3CvideoPlayerU3E5__3_5; }
	inline VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 ** get_address_of_U3CvideoPlayerU3E5__3_5() { return &___U3CvideoPlayerU3E5__3_5; }
	inline void set_U3CvideoPlayerU3E5__3_5(VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * value)
	{
		___U3CvideoPlayerU3E5__3_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CvideoPlayerU3E5__3_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_6() { return static_cast<int32_t>(offsetof(U3CGetOrLoadVideoDataAsyncU3Ed__30_tDF4395E0B62F17B7558DC26A111F9659F3932FA6, ___U3CU3Eu__1_6)); }
	inline Awaiter_t8473B6ABE125918A05A5157E70D00B9F0DE43CCD  get_U3CU3Eu__1_6() const { return ___U3CU3Eu__1_6; }
	inline Awaiter_t8473B6ABE125918A05A5157E70D00B9F0DE43CCD * get_address_of_U3CU3Eu__1_6() { return &___U3CU3Eu__1_6; }
	inline void set_U3CU3Eu__1_6(Awaiter_t8473B6ABE125918A05A5157E70D00B9F0DE43CCD  value)
	{
		___U3CU3Eu__1_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Eu__1_6))->___task_0))->___result_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Eu__1_6))->___task_0))->___awaiter_1), (void*)NULL);
		#endif
	}
};


// Naninovel.VideoBackground/<HoldResourcesAsync>d__24
struct  U3CHoldResourcesAsyncU3Ed__24_t69B7F8032AABA06C6ACEBB741DE6BB2F6A3F0359 
{
public:
	// System.Int32 Naninovel.VideoBackground/<HoldResourcesAsync>d__24::<>1__state
	int32_t ___U3CU3E1__state_0;
	// UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder Naninovel.VideoBackground/<HoldResourcesAsync>d__24::<>t__builder
	AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33  ___U3CU3Et__builder_1;
	// System.String Naninovel.VideoBackground/<HoldResourcesAsync>d__24::appearance
	String_t* ___appearance_2;
	// Naninovel.VideoBackground Naninovel.VideoBackground/<HoldResourcesAsync>d__24::<>4__this
	VideoBackground_tC31D69C74D104E5F414AAE56250D1AAD449B7F47 * ___U3CU3E4__this_3;
	// UniRx.Async.UniTask`1/Awaiter<Naninovel.VideoBackground/VideoData> Naninovel.VideoBackground/<HoldResourcesAsync>d__24::<>u__1
	Awaiter_t2EC4E48D6D8C5EC90776FBA7B42075F059E21967  ___U3CU3Eu__1_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CHoldResourcesAsyncU3Ed__24_t69B7F8032AABA06C6ACEBB741DE6BB2F6A3F0359, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CHoldResourcesAsyncU3Ed__24_t69B7F8032AABA06C6ACEBB741DE6BB2F6A3F0359, ___U3CU3Et__builder_1)); }
	inline AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___promise_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___moveNext_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_appearance_2() { return static_cast<int32_t>(offsetof(U3CHoldResourcesAsyncU3Ed__24_t69B7F8032AABA06C6ACEBB741DE6BB2F6A3F0359, ___appearance_2)); }
	inline String_t* get_appearance_2() const { return ___appearance_2; }
	inline String_t** get_address_of_appearance_2() { return &___appearance_2; }
	inline void set_appearance_2(String_t* value)
	{
		___appearance_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___appearance_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CHoldResourcesAsyncU3Ed__24_t69B7F8032AABA06C6ACEBB741DE6BB2F6A3F0359, ___U3CU3E4__this_3)); }
	inline VideoBackground_tC31D69C74D104E5F414AAE56250D1AAD449B7F47 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline VideoBackground_tC31D69C74D104E5F414AAE56250D1AAD449B7F47 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(VideoBackground_tC31D69C74D104E5F414AAE56250D1AAD449B7F47 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_4() { return static_cast<int32_t>(offsetof(U3CHoldResourcesAsyncU3Ed__24_t69B7F8032AABA06C6ACEBB741DE6BB2F6A3F0359, ___U3CU3Eu__1_4)); }
	inline Awaiter_t2EC4E48D6D8C5EC90776FBA7B42075F059E21967  get_U3CU3Eu__1_4() const { return ___U3CU3Eu__1_4; }
	inline Awaiter_t2EC4E48D6D8C5EC90776FBA7B42075F059E21967 * get_address_of_U3CU3Eu__1_4() { return &___U3CU3Eu__1_4; }
	inline void set_U3CU3Eu__1_4(Awaiter_t2EC4E48D6D8C5EC90776FBA7B42075F059E21967  value)
	{
		___U3CU3Eu__1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Eu__1_4))->___task_0))->___result_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Eu__1_4))->___task_0))->___awaiter_1), (void*)NULL);
		#endif
	}
};


// Naninovel.WavToAudioClipConverter/<ConvertAsync>d__4
struct  U3CConvertAsyncU3Ed__4_tA998E40BCEB98D595B4B64AF5448BA9429993BA3 
{
public:
	// System.Int32 Naninovel.WavToAudioClipConverter/<ConvertAsync>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder`1<UnityEngine.AudioClip> Naninovel.WavToAudioClipConverter/<ConvertAsync>d__4::<>t__builder
	AsyncUniTaskMethodBuilder_1_t06EFF9E0B83B2725F96D09D9E5EBF736DA6B30C1  ___U3CU3Et__builder_1;
	// System.Byte[] Naninovel.WavToAudioClipConverter/<ConvertAsync>d__4::obj
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___obj_2;
	// System.String Naninovel.WavToAudioClipConverter/<ConvertAsync>d__4::name
	String_t* ___name_3;
	// UniRx.Async.UniTask`1/Awaiter<System.Single[]> Naninovel.WavToAudioClipConverter/<ConvertAsync>d__4::<>u__1
	Awaiter_t9F63A7154247DFB58C781A45AF44C5B8E8FE3EE2  ___U3CU3Eu__1_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CConvertAsyncU3Ed__4_tA998E40BCEB98D595B4B64AF5448BA9429993BA3, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CConvertAsyncU3Ed__4_tA998E40BCEB98D595B4B64AF5448BA9429993BA3, ___U3CU3Et__builder_1)); }
	inline AsyncUniTaskMethodBuilder_1_t06EFF9E0B83B2725F96D09D9E5EBF736DA6B30C1  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncUniTaskMethodBuilder_1_t06EFF9E0B83B2725F96D09D9E5EBF736DA6B30C1 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncUniTaskMethodBuilder_1_t06EFF9E0B83B2725F96D09D9E5EBF736DA6B30C1  value)
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

	inline static int32_t get_offset_of_obj_2() { return static_cast<int32_t>(offsetof(U3CConvertAsyncU3Ed__4_tA998E40BCEB98D595B4B64AF5448BA9429993BA3, ___obj_2)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_obj_2() const { return ___obj_2; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_obj_2() { return &___obj_2; }
	inline void set_obj_2(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___obj_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___obj_2), (void*)value);
	}

	inline static int32_t get_offset_of_name_3() { return static_cast<int32_t>(offsetof(U3CConvertAsyncU3Ed__4_tA998E40BCEB98D595B4B64AF5448BA9429993BA3, ___name_3)); }
	inline String_t* get_name_3() const { return ___name_3; }
	inline String_t** get_address_of_name_3() { return &___name_3; }
	inline void set_name_3(String_t* value)
	{
		___name_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_4() { return static_cast<int32_t>(offsetof(U3CConvertAsyncU3Ed__4_tA998E40BCEB98D595B4B64AF5448BA9429993BA3, ___U3CU3Eu__1_4)); }
	inline Awaiter_t9F63A7154247DFB58C781A45AF44C5B8E8FE3EE2  get_U3CU3Eu__1_4() const { return ___U3CU3Eu__1_4; }
	inline Awaiter_t9F63A7154247DFB58C781A45AF44C5B8E8FE3EE2 * get_address_of_U3CU3Eu__1_4() { return &___U3CU3Eu__1_4; }
	inline void set_U3CU3Eu__1_4(Awaiter_t9F63A7154247DFB58C781A45AF44C5B8E8FE3EE2  value)
	{
		___U3CU3Eu__1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Eu__1_4))->___task_0))->___result_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Eu__1_4))->___task_0))->___awaiter_1), (void*)NULL);
		#endif
	}
};


// Naninovel.WavToAudioClipConverter/<ConvertAsync>d__6
struct  U3CConvertAsyncU3Ed__6_tBBEA6021908F80F2BF921901F92D0D931ED03586 
{
public:
	// System.Int32 Naninovel.WavToAudioClipConverter/<ConvertAsync>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Object> Naninovel.WavToAudioClipConverter/<ConvertAsync>d__6::<>t__builder
	AsyncUniTaskMethodBuilder_1_tDD7DCA035B684680C606A9836E15BC201F62776F  ___U3CU3Et__builder_1;
	// Naninovel.WavToAudioClipConverter Naninovel.WavToAudioClipConverter/<ConvertAsync>d__6::<>4__this
	WavToAudioClipConverter_t924144CE4EC088BDC7369CD9193A676BD1B41AF9 * ___U3CU3E4__this_2;
	// System.Object Naninovel.WavToAudioClipConverter/<ConvertAsync>d__6::obj
	RuntimeObject * ___obj_3;
	// System.String Naninovel.WavToAudioClipConverter/<ConvertAsync>d__6::name
	String_t* ___name_4;
	// UniRx.Async.UniTask`1/Awaiter<UnityEngine.AudioClip> Naninovel.WavToAudioClipConverter/<ConvertAsync>d__6::<>u__1
	Awaiter_tD9F19E0615823FE62189D1CB3B5026C8A71A356A  ___U3CU3Eu__1_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CConvertAsyncU3Ed__6_tBBEA6021908F80F2BF921901F92D0D931ED03586, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CConvertAsyncU3Ed__6_tBBEA6021908F80F2BF921901F92D0D931ED03586, ___U3CU3Et__builder_1)); }
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

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CConvertAsyncU3Ed__6_tBBEA6021908F80F2BF921901F92D0D931ED03586, ___U3CU3E4__this_2)); }
	inline WavToAudioClipConverter_t924144CE4EC088BDC7369CD9193A676BD1B41AF9 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline WavToAudioClipConverter_t924144CE4EC088BDC7369CD9193A676BD1B41AF9 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(WavToAudioClipConverter_t924144CE4EC088BDC7369CD9193A676BD1B41AF9 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_obj_3() { return static_cast<int32_t>(offsetof(U3CConvertAsyncU3Ed__6_tBBEA6021908F80F2BF921901F92D0D931ED03586, ___obj_3)); }
	inline RuntimeObject * get_obj_3() const { return ___obj_3; }
	inline RuntimeObject ** get_address_of_obj_3() { return &___obj_3; }
	inline void set_obj_3(RuntimeObject * value)
	{
		___obj_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___obj_3), (void*)value);
	}

	inline static int32_t get_offset_of_name_4() { return static_cast<int32_t>(offsetof(U3CConvertAsyncU3Ed__6_tBBEA6021908F80F2BF921901F92D0D931ED03586, ___name_4)); }
	inline String_t* get_name_4() const { return ___name_4; }
	inline String_t** get_address_of_name_4() { return &___name_4; }
	inline void set_name_4(String_t* value)
	{
		___name_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_5() { return static_cast<int32_t>(offsetof(U3CConvertAsyncU3Ed__6_tBBEA6021908F80F2BF921901F92D0D931ED03586, ___U3CU3Eu__1_5)); }
	inline Awaiter_tD9F19E0615823FE62189D1CB3B5026C8A71A356A  get_U3CU3Eu__1_5() const { return ___U3CU3Eu__1_5; }
	inline Awaiter_tD9F19E0615823FE62189D1CB3B5026C8A71A356A * get_address_of_U3CU3Eu__1_5() { return &___U3CU3Eu__1_5; }
	inline void set_U3CU3Eu__1_5(Awaiter_tD9F19E0615823FE62189D1CB3B5026C8A71A356A  value)
	{
		___U3CU3Eu__1_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Eu__1_5))->___task_0))->___result_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Eu__1_5))->___task_0))->___awaiter_1), (void*)NULL);
		#endif
	}
};


// UniRx.Async.YieldAwaitable/Awaiter
struct  Awaiter_tC53C155C42BF6DB6BBD8673DE4B04D42737173C6 
{
public:
	// UniRx.Async.PlayerLoopTiming UniRx.Async.YieldAwaitable/Awaiter::timing
	int32_t ___timing_0;

public:
	inline static int32_t get_offset_of_timing_0() { return static_cast<int32_t>(offsetof(Awaiter_tC53C155C42BF6DB6BBD8673DE4B04D42737173C6, ___timing_0)); }
	inline int32_t get_timing_0() const { return ___timing_0; }
	inline int32_t* get_address_of_timing_0() { return &___timing_0; }
	inline void set_timing_0(int32_t value)
	{
		___timing_0 = value;
	}
};


// System.Action`1<System.Boolean>
struct  Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<Naninovel.GameStateMap>
struct  Action_1_tE7DBC7D799F1973CA1C99095A5E2322E45FDAE6C  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`1<System.Single[]>
struct  Func_1_tB9DF8D3D9F8D8DE3959D9A3C4942EA354A2D14A8  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Naninovel.GameStateMap,System.Boolean>
struct  Func_2_tC98365FCD009A19906148DAE6D31E499FA04C5FF  : public MulticastDelegate_t
{
public:

public:
};


// System.Predicate`1<Naninovel.GameStateMap>
struct  Predicate_1_tBB645330290CE4865319EB67E4201373C3FDDE20  : public MulticastDelegate_t
{
public:

public:
};


// System.Predicate`1<Naninovel.IStateManager>
struct  Predicate_1_tC32C71EEE3CD94A0D24F97FE89A2DDA8D2552CC4  : public MulticastDelegate_t
{
public:

public:
};


// System.Predicate`1<Naninovel.IUnlockableManager>
struct  Predicate_1_t7CF3BE326604DBF3D431BACDE9F90AADDBEA93E7  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// Naninovel.Configuration
struct  Configuration_tBA947FD5EEDCA42CDB9FBE1D8E886AA18958F335  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:

public:
};


// UnityEngine.RenderTexture
struct  RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
{
public:

public:
};


// UnityEngine.Texture2D
struct  Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
{
public:

public:
};


// Naninovel.VideoBackground
struct  VideoBackground_tC31D69C74D104E5F414AAE56250D1AAD449B7F47  : public MonoBehaviourActor_1_tACAE5ACF4DC1430790E2A00C612F35B01916AACC
{
public:
	// Naninovel.TransitionalRenderer Naninovel.VideoBackground::<TransitionalRenderer>k__BackingField
	TransitionalRenderer_t417C5BDB13977F6209462DBA455A7E2BE95B61F5 * ___U3CTransitionalRendererU3Ek__BackingField_11;
	// System.String Naninovel.VideoBackground::appearance
	String_t* ___appearance_17;
	// System.Boolean Naninovel.VideoBackground::visible
	bool ___visible_18;
	// Naninovel.LocalizableResourceLoader`1<UnityEngine.Video.VideoClip> Naninovel.VideoBackground::videoLoader
	LocalizableResourceLoader_1_t6CC3BB582EA259156AF64985E72C541EFE88D9E6 * ___videoLoader_19;
	// System.String Naninovel.VideoBackground::streamExtension
	String_t* ___streamExtension_20;

public:
	inline static int32_t get_offset_of_U3CTransitionalRendererU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(VideoBackground_tC31D69C74D104E5F414AAE56250D1AAD449B7F47, ___U3CTransitionalRendererU3Ek__BackingField_11)); }
	inline TransitionalRenderer_t417C5BDB13977F6209462DBA455A7E2BE95B61F5 * get_U3CTransitionalRendererU3Ek__BackingField_11() const { return ___U3CTransitionalRendererU3Ek__BackingField_11; }
	inline TransitionalRenderer_t417C5BDB13977F6209462DBA455A7E2BE95B61F5 ** get_address_of_U3CTransitionalRendererU3Ek__BackingField_11() { return &___U3CTransitionalRendererU3Ek__BackingField_11; }
	inline void set_U3CTransitionalRendererU3Ek__BackingField_11(TransitionalRenderer_t417C5BDB13977F6209462DBA455A7E2BE95B61F5 * value)
	{
		___U3CTransitionalRendererU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTransitionalRendererU3Ek__BackingField_11), (void*)value);
	}

	inline static int32_t get_offset_of_appearance_17() { return static_cast<int32_t>(offsetof(VideoBackground_tC31D69C74D104E5F414AAE56250D1AAD449B7F47, ___appearance_17)); }
	inline String_t* get_appearance_17() const { return ___appearance_17; }
	inline String_t** get_address_of_appearance_17() { return &___appearance_17; }
	inline void set_appearance_17(String_t* value)
	{
		___appearance_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___appearance_17), (void*)value);
	}

	inline static int32_t get_offset_of_visible_18() { return static_cast<int32_t>(offsetof(VideoBackground_tC31D69C74D104E5F414AAE56250D1AAD449B7F47, ___visible_18)); }
	inline bool get_visible_18() const { return ___visible_18; }
	inline bool* get_address_of_visible_18() { return &___visible_18; }
	inline void set_visible_18(bool value)
	{
		___visible_18 = value;
	}

	inline static int32_t get_offset_of_videoLoader_19() { return static_cast<int32_t>(offsetof(VideoBackground_tC31D69C74D104E5F414AAE56250D1AAD449B7F47, ___videoLoader_19)); }
	inline LocalizableResourceLoader_1_t6CC3BB582EA259156AF64985E72C541EFE88D9E6 * get_videoLoader_19() const { return ___videoLoader_19; }
	inline LocalizableResourceLoader_1_t6CC3BB582EA259156AF64985E72C541EFE88D9E6 ** get_address_of_videoLoader_19() { return &___videoLoader_19; }
	inline void set_videoLoader_19(LocalizableResourceLoader_1_t6CC3BB582EA259156AF64985E72C541EFE88D9E6 * value)
	{
		___videoLoader_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___videoLoader_19), (void*)value);
	}

	inline static int32_t get_offset_of_streamExtension_20() { return static_cast<int32_t>(offsetof(VideoBackground_tC31D69C74D104E5F414AAE56250D1AAD449B7F47, ___streamExtension_20)); }
	inline String_t* get_streamExtension_20() const { return ___streamExtension_20; }
	inline String_t** get_address_of_streamExtension_20() { return &___streamExtension_20; }
	inline void set_streamExtension_20(String_t* value)
	{
		___streamExtension_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___streamExtension_20), (void*)value);
	}
};

struct VideoBackground_tC31D69C74D104E5F414AAE56250D1AAD449B7F47_StaticFields
{
public:
	// System.Boolean Naninovel.VideoBackground::sharedResourcesInitialized
	bool ___sharedResourcesInitialized_12;
	// System.Int32 Naninovel.VideoBackground::sharedRefCounter
	int32_t ___sharedRefCounter_13;
	// UnityEngine.RenderTextureDescriptor Naninovel.VideoBackground::renderTextureDescriptor
	RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  ___renderTextureDescriptor_14;
	// Naninovel.LiteralMap`1<Naninovel.VideoBackground/VideoData> Naninovel.VideoBackground::videoDataMap
	LiteralMap_1_t1A9EB0EEABDB7CC5DE71C4813A6B71DB3FEEB47D * ___videoDataMap_15;
	// UnityEngine.Vector2Int Naninovel.VideoBackground::referenceResolution
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___referenceResolution_16;

public:
	inline static int32_t get_offset_of_sharedResourcesInitialized_12() { return static_cast<int32_t>(offsetof(VideoBackground_tC31D69C74D104E5F414AAE56250D1AAD449B7F47_StaticFields, ___sharedResourcesInitialized_12)); }
	inline bool get_sharedResourcesInitialized_12() const { return ___sharedResourcesInitialized_12; }
	inline bool* get_address_of_sharedResourcesInitialized_12() { return &___sharedResourcesInitialized_12; }
	inline void set_sharedResourcesInitialized_12(bool value)
	{
		___sharedResourcesInitialized_12 = value;
	}

	inline static int32_t get_offset_of_sharedRefCounter_13() { return static_cast<int32_t>(offsetof(VideoBackground_tC31D69C74D104E5F414AAE56250D1AAD449B7F47_StaticFields, ___sharedRefCounter_13)); }
	inline int32_t get_sharedRefCounter_13() const { return ___sharedRefCounter_13; }
	inline int32_t* get_address_of_sharedRefCounter_13() { return &___sharedRefCounter_13; }
	inline void set_sharedRefCounter_13(int32_t value)
	{
		___sharedRefCounter_13 = value;
	}

	inline static int32_t get_offset_of_renderTextureDescriptor_14() { return static_cast<int32_t>(offsetof(VideoBackground_tC31D69C74D104E5F414AAE56250D1AAD449B7F47_StaticFields, ___renderTextureDescriptor_14)); }
	inline RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  get_renderTextureDescriptor_14() const { return ___renderTextureDescriptor_14; }
	inline RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 * get_address_of_renderTextureDescriptor_14() { return &___renderTextureDescriptor_14; }
	inline void set_renderTextureDescriptor_14(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  value)
	{
		___renderTextureDescriptor_14 = value;
	}

	inline static int32_t get_offset_of_videoDataMap_15() { return static_cast<int32_t>(offsetof(VideoBackground_tC31D69C74D104E5F414AAE56250D1AAD449B7F47_StaticFields, ___videoDataMap_15)); }
	inline LiteralMap_1_t1A9EB0EEABDB7CC5DE71C4813A6B71DB3FEEB47D * get_videoDataMap_15() const { return ___videoDataMap_15; }
	inline LiteralMap_1_t1A9EB0EEABDB7CC5DE71C4813A6B71DB3FEEB47D ** get_address_of_videoDataMap_15() { return &___videoDataMap_15; }
	inline void set_videoDataMap_15(LiteralMap_1_t1A9EB0EEABDB7CC5DE71C4813A6B71DB3FEEB47D * value)
	{
		___videoDataMap_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___videoDataMap_15), (void*)value);
	}

	inline static int32_t get_offset_of_referenceResolution_16() { return static_cast<int32_t>(offsetof(VideoBackground_tC31D69C74D104E5F414AAE56250D1AAD449B7F47_StaticFields, ___referenceResolution_16)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_referenceResolution_16() const { return ___referenceResolution_16; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_referenceResolution_16() { return &___referenceResolution_16; }
	inline void set_referenceResolution_16(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___referenceResolution_16 = value;
	}
};


// UniRx.Async.UniTask/Awaiter
struct  Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822 
{
public:
	// UniRx.Async.UniTask UniRx.Async.UniTask/Awaiter::task
	UniTask_t41263A639210D10E03708EE0B4B03A964D7EEE3C  ___task_0;

public:
	inline static int32_t get_offset_of_task_0() { return static_cast<int32_t>(offsetof(Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822, ___task_0)); }
	inline UniTask_t41263A639210D10E03708EE0B4B03A964D7EEE3C  get_task_0() const { return ___task_0; }
	inline UniTask_t41263A639210D10E03708EE0B4B03A964D7EEE3C * get_address_of_task_0() { return &___task_0; }
	inline void set_task_0(UniTask_t41263A639210D10E03708EE0B4B03A964D7EEE3C  value)
	{
		___task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___task_0))->___awaiter_2), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of UniRx.Async.UniTask/Awaiter
struct Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822_marshaled_pinvoke
{
	UniTask_t41263A639210D10E03708EE0B4B03A964D7EEE3C_marshaled_pinvoke ___task_0;
};
// Native definition for COM marshalling of UniRx.Async.UniTask/Awaiter
struct Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822_marshaled_com
{
	UniTask_t41263A639210D10E03708EE0B4B03A964D7EEE3C_marshaled_com ___task_0;
};

// Naninovel.Commands.Wait/<ExecuteAsync>d__6
struct  U3CExecuteAsyncU3Ed__6_tD382787452B3A05D65DA90FC93BEB427B31222B4 
{
public:
	// System.Int32 Naninovel.Commands.Wait/<ExecuteAsync>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder Naninovel.Commands.Wait/<ExecuteAsync>d__6::<>t__builder
	AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33  ___U3CU3Et__builder_1;
	// Naninovel.Commands.Wait Naninovel.Commands.Wait/<ExecuteAsync>d__6::<>4__this
	Wait_t6D6FC838510D95749A0C737B03665BACEB27DB74 * ___U3CU3E4__this_2;
	// Naninovel.CancellationToken Naninovel.Commands.Wait/<ExecuteAsync>d__6::cancellationToken
	CancellationToken_t6347F75AB41E1331E57D91A3F883A02D5FA698E3  ___cancellationToken_3;
	// System.Single Naninovel.Commands.Wait/<ExecuteAsync>d__6::<skippableWaitTime>5__2
	float ___U3CskippableWaitTimeU3E5__2_4;
	// System.Single Naninovel.Commands.Wait/<ExecuteAsync>d__6::<waitTime>5__3
	float ___U3CwaitTimeU3E5__3_5;
	// UniRx.Async.YieldAwaitable/Awaiter Naninovel.Commands.Wait/<ExecuteAsync>d__6::<>u__1
	Awaiter_tC53C155C42BF6DB6BBD8673DE4B04D42737173C6  ___U3CU3Eu__1_6;
	// System.Single Naninovel.Commands.Wait/<ExecuteAsync>d__6::<startTime>5__4
	float ___U3CstartTimeU3E5__4_7;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CExecuteAsyncU3Ed__6_tD382787452B3A05D65DA90FC93BEB427B31222B4, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CExecuteAsyncU3Ed__6_tD382787452B3A05D65DA90FC93BEB427B31222B4, ___U3CU3Et__builder_1)); }
	inline AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___promise_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___moveNext_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CExecuteAsyncU3Ed__6_tD382787452B3A05D65DA90FC93BEB427B31222B4, ___U3CU3E4__this_2)); }
	inline Wait_t6D6FC838510D95749A0C737B03665BACEB27DB74 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Wait_t6D6FC838510D95749A0C737B03665BACEB27DB74 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Wait_t6D6FC838510D95749A0C737B03665BACEB27DB74 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_cancellationToken_3() { return static_cast<int32_t>(offsetof(U3CExecuteAsyncU3Ed__6_tD382787452B3A05D65DA90FC93BEB427B31222B4, ___cancellationToken_3)); }
	inline CancellationToken_t6347F75AB41E1331E57D91A3F883A02D5FA698E3  get_cancellationToken_3() const { return ___cancellationToken_3; }
	inline CancellationToken_t6347F75AB41E1331E57D91A3F883A02D5FA698E3 * get_address_of_cancellationToken_3() { return &___cancellationToken_3; }
	inline void set_cancellationToken_3(CancellationToken_t6347F75AB41E1331E57D91A3F883A02D5FA698E3  value)
	{
		___cancellationToken_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___cancellationToken_3))->___ASAPToken_2))->___m_source_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___cancellationToken_3))->___LazyToken_3))->___m_source_0), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CskippableWaitTimeU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CExecuteAsyncU3Ed__6_tD382787452B3A05D65DA90FC93BEB427B31222B4, ___U3CskippableWaitTimeU3E5__2_4)); }
	inline float get_U3CskippableWaitTimeU3E5__2_4() const { return ___U3CskippableWaitTimeU3E5__2_4; }
	inline float* get_address_of_U3CskippableWaitTimeU3E5__2_4() { return &___U3CskippableWaitTimeU3E5__2_4; }
	inline void set_U3CskippableWaitTimeU3E5__2_4(float value)
	{
		___U3CskippableWaitTimeU3E5__2_4 = value;
	}

	inline static int32_t get_offset_of_U3CwaitTimeU3E5__3_5() { return static_cast<int32_t>(offsetof(U3CExecuteAsyncU3Ed__6_tD382787452B3A05D65DA90FC93BEB427B31222B4, ___U3CwaitTimeU3E5__3_5)); }
	inline float get_U3CwaitTimeU3E5__3_5() const { return ___U3CwaitTimeU3E5__3_5; }
	inline float* get_address_of_U3CwaitTimeU3E5__3_5() { return &___U3CwaitTimeU3E5__3_5; }
	inline void set_U3CwaitTimeU3E5__3_5(float value)
	{
		___U3CwaitTimeU3E5__3_5 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_6() { return static_cast<int32_t>(offsetof(U3CExecuteAsyncU3Ed__6_tD382787452B3A05D65DA90FC93BEB427B31222B4, ___U3CU3Eu__1_6)); }
	inline Awaiter_tC53C155C42BF6DB6BBD8673DE4B04D42737173C6  get_U3CU3Eu__1_6() const { return ___U3CU3Eu__1_6; }
	inline Awaiter_tC53C155C42BF6DB6BBD8673DE4B04D42737173C6 * get_address_of_U3CU3Eu__1_6() { return &___U3CU3Eu__1_6; }
	inline void set_U3CU3Eu__1_6(Awaiter_tC53C155C42BF6DB6BBD8673DE4B04D42737173C6  value)
	{
		___U3CU3Eu__1_6 = value;
	}

	inline static int32_t get_offset_of_U3CstartTimeU3E5__4_7() { return static_cast<int32_t>(offsetof(U3CExecuteAsyncU3Ed__6_tD382787452B3A05D65DA90FC93BEB427B31222B4, ___U3CstartTimeU3E5__4_7)); }
	inline float get_U3CstartTimeU3E5__4_7() const { return ___U3CstartTimeU3E5__4_7; }
	inline float* get_address_of_U3CstartTimeU3E5__4_7() { return &___U3CstartTimeU3E5__4_7; }
	inline void set_U3CstartTimeU3E5__4_7(float value)
	{
		___U3CstartTimeU3E5__4_7 = value;
	}
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// Naninovel.StateConfiguration
struct  StateConfiguration_tA1BFEBE81E1006B6AF706146B3821110BF45465C  : public Configuration_tBA947FD5EEDCA42CDB9FBE1D8E886AA18958F335
{
public:
	// System.String Naninovel.StateConfiguration::SaveFolderName
	String_t* ___SaveFolderName_4;
	// System.String Naninovel.StateConfiguration::DefaultSettingsSlotId
	String_t* ___DefaultSettingsSlotId_5;
	// System.String Naninovel.StateConfiguration::DefaultGlobalSlotId
	String_t* ___DefaultGlobalSlotId_6;
	// System.String Naninovel.StateConfiguration::SaveSlotMask
	String_t* ___SaveSlotMask_7;
	// System.String Naninovel.StateConfiguration::QuickSaveSlotMask
	String_t* ___QuickSaveSlotMask_8;
	// System.Int32 Naninovel.StateConfiguration::SaveSlotLimit
	int32_t ___SaveSlotLimit_9;
	// System.Int32 Naninovel.StateConfiguration::QuickSaveSlotLimit
	int32_t ___QuickSaveSlotLimit_10;
	// System.Boolean Naninovel.StateConfiguration::BinarySaveFiles
	bool ___BinarySaveFiles_11;
	// System.Single Naninovel.StateConfiguration::LoadStartDelay
	float ___LoadStartDelay_12;
	// System.Boolean Naninovel.StateConfiguration::ResetOnGoto
	bool ___ResetOnGoto_13;
	// System.Boolean Naninovel.StateConfiguration::EnableStateRollback
	bool ___EnableStateRollback_14;
	// System.Int32 Naninovel.StateConfiguration::StateRollbackSteps
	int32_t ___StateRollbackSteps_15;
	// System.Int32 Naninovel.StateConfiguration::SavedRollbackSteps
	int32_t ___SavedRollbackSteps_16;
	// System.String Naninovel.StateConfiguration::GameStateHandler
	String_t* ___GameStateHandler_17;
	// System.String Naninovel.StateConfiguration::GlobalStateHandler
	String_t* ___GlobalStateHandler_18;
	// System.String Naninovel.StateConfiguration::SettingsStateHandler
	String_t* ___SettingsStateHandler_19;

public:
	inline static int32_t get_offset_of_SaveFolderName_4() { return static_cast<int32_t>(offsetof(StateConfiguration_tA1BFEBE81E1006B6AF706146B3821110BF45465C, ___SaveFolderName_4)); }
	inline String_t* get_SaveFolderName_4() const { return ___SaveFolderName_4; }
	inline String_t** get_address_of_SaveFolderName_4() { return &___SaveFolderName_4; }
	inline void set_SaveFolderName_4(String_t* value)
	{
		___SaveFolderName_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SaveFolderName_4), (void*)value);
	}

	inline static int32_t get_offset_of_DefaultSettingsSlotId_5() { return static_cast<int32_t>(offsetof(StateConfiguration_tA1BFEBE81E1006B6AF706146B3821110BF45465C, ___DefaultSettingsSlotId_5)); }
	inline String_t* get_DefaultSettingsSlotId_5() const { return ___DefaultSettingsSlotId_5; }
	inline String_t** get_address_of_DefaultSettingsSlotId_5() { return &___DefaultSettingsSlotId_5; }
	inline void set_DefaultSettingsSlotId_5(String_t* value)
	{
		___DefaultSettingsSlotId_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DefaultSettingsSlotId_5), (void*)value);
	}

	inline static int32_t get_offset_of_DefaultGlobalSlotId_6() { return static_cast<int32_t>(offsetof(StateConfiguration_tA1BFEBE81E1006B6AF706146B3821110BF45465C, ___DefaultGlobalSlotId_6)); }
	inline String_t* get_DefaultGlobalSlotId_6() const { return ___DefaultGlobalSlotId_6; }
	inline String_t** get_address_of_DefaultGlobalSlotId_6() { return &___DefaultGlobalSlotId_6; }
	inline void set_DefaultGlobalSlotId_6(String_t* value)
	{
		___DefaultGlobalSlotId_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DefaultGlobalSlotId_6), (void*)value);
	}

	inline static int32_t get_offset_of_SaveSlotMask_7() { return static_cast<int32_t>(offsetof(StateConfiguration_tA1BFEBE81E1006B6AF706146B3821110BF45465C, ___SaveSlotMask_7)); }
	inline String_t* get_SaveSlotMask_7() const { return ___SaveSlotMask_7; }
	inline String_t** get_address_of_SaveSlotMask_7() { return &___SaveSlotMask_7; }
	inline void set_SaveSlotMask_7(String_t* value)
	{
		___SaveSlotMask_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SaveSlotMask_7), (void*)value);
	}

	inline static int32_t get_offset_of_QuickSaveSlotMask_8() { return static_cast<int32_t>(offsetof(StateConfiguration_tA1BFEBE81E1006B6AF706146B3821110BF45465C, ___QuickSaveSlotMask_8)); }
	inline String_t* get_QuickSaveSlotMask_8() const { return ___QuickSaveSlotMask_8; }
	inline String_t** get_address_of_QuickSaveSlotMask_8() { return &___QuickSaveSlotMask_8; }
	inline void set_QuickSaveSlotMask_8(String_t* value)
	{
		___QuickSaveSlotMask_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QuickSaveSlotMask_8), (void*)value);
	}

	inline static int32_t get_offset_of_SaveSlotLimit_9() { return static_cast<int32_t>(offsetof(StateConfiguration_tA1BFEBE81E1006B6AF706146B3821110BF45465C, ___SaveSlotLimit_9)); }
	inline int32_t get_SaveSlotLimit_9() const { return ___SaveSlotLimit_9; }
	inline int32_t* get_address_of_SaveSlotLimit_9() { return &___SaveSlotLimit_9; }
	inline void set_SaveSlotLimit_9(int32_t value)
	{
		___SaveSlotLimit_9 = value;
	}

	inline static int32_t get_offset_of_QuickSaveSlotLimit_10() { return static_cast<int32_t>(offsetof(StateConfiguration_tA1BFEBE81E1006B6AF706146B3821110BF45465C, ___QuickSaveSlotLimit_10)); }
	inline int32_t get_QuickSaveSlotLimit_10() const { return ___QuickSaveSlotLimit_10; }
	inline int32_t* get_address_of_QuickSaveSlotLimit_10() { return &___QuickSaveSlotLimit_10; }
	inline void set_QuickSaveSlotLimit_10(int32_t value)
	{
		___QuickSaveSlotLimit_10 = value;
	}

	inline static int32_t get_offset_of_BinarySaveFiles_11() { return static_cast<int32_t>(offsetof(StateConfiguration_tA1BFEBE81E1006B6AF706146B3821110BF45465C, ___BinarySaveFiles_11)); }
	inline bool get_BinarySaveFiles_11() const { return ___BinarySaveFiles_11; }
	inline bool* get_address_of_BinarySaveFiles_11() { return &___BinarySaveFiles_11; }
	inline void set_BinarySaveFiles_11(bool value)
	{
		___BinarySaveFiles_11 = value;
	}

	inline static int32_t get_offset_of_LoadStartDelay_12() { return static_cast<int32_t>(offsetof(StateConfiguration_tA1BFEBE81E1006B6AF706146B3821110BF45465C, ___LoadStartDelay_12)); }
	inline float get_LoadStartDelay_12() const { return ___LoadStartDelay_12; }
	inline float* get_address_of_LoadStartDelay_12() { return &___LoadStartDelay_12; }
	inline void set_LoadStartDelay_12(float value)
	{
		___LoadStartDelay_12 = value;
	}

	inline static int32_t get_offset_of_ResetOnGoto_13() { return static_cast<int32_t>(offsetof(StateConfiguration_tA1BFEBE81E1006B6AF706146B3821110BF45465C, ___ResetOnGoto_13)); }
	inline bool get_ResetOnGoto_13() const { return ___ResetOnGoto_13; }
	inline bool* get_address_of_ResetOnGoto_13() { return &___ResetOnGoto_13; }
	inline void set_ResetOnGoto_13(bool value)
	{
		___ResetOnGoto_13 = value;
	}

	inline static int32_t get_offset_of_EnableStateRollback_14() { return static_cast<int32_t>(offsetof(StateConfiguration_tA1BFEBE81E1006B6AF706146B3821110BF45465C, ___EnableStateRollback_14)); }
	inline bool get_EnableStateRollback_14() const { return ___EnableStateRollback_14; }
	inline bool* get_address_of_EnableStateRollback_14() { return &___EnableStateRollback_14; }
	inline void set_EnableStateRollback_14(bool value)
	{
		___EnableStateRollback_14 = value;
	}

	inline static int32_t get_offset_of_StateRollbackSteps_15() { return static_cast<int32_t>(offsetof(StateConfiguration_tA1BFEBE81E1006B6AF706146B3821110BF45465C, ___StateRollbackSteps_15)); }
	inline int32_t get_StateRollbackSteps_15() const { return ___StateRollbackSteps_15; }
	inline int32_t* get_address_of_StateRollbackSteps_15() { return &___StateRollbackSteps_15; }
	inline void set_StateRollbackSteps_15(int32_t value)
	{
		___StateRollbackSteps_15 = value;
	}

	inline static int32_t get_offset_of_SavedRollbackSteps_16() { return static_cast<int32_t>(offsetof(StateConfiguration_tA1BFEBE81E1006B6AF706146B3821110BF45465C, ___SavedRollbackSteps_16)); }
	inline int32_t get_SavedRollbackSteps_16() const { return ___SavedRollbackSteps_16; }
	inline int32_t* get_address_of_SavedRollbackSteps_16() { return &___SavedRollbackSteps_16; }
	inline void set_SavedRollbackSteps_16(int32_t value)
	{
		___SavedRollbackSteps_16 = value;
	}

	inline static int32_t get_offset_of_GameStateHandler_17() { return static_cast<int32_t>(offsetof(StateConfiguration_tA1BFEBE81E1006B6AF706146B3821110BF45465C, ___GameStateHandler_17)); }
	inline String_t* get_GameStateHandler_17() const { return ___GameStateHandler_17; }
	inline String_t** get_address_of_GameStateHandler_17() { return &___GameStateHandler_17; }
	inline void set_GameStateHandler_17(String_t* value)
	{
		___GameStateHandler_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GameStateHandler_17), (void*)value);
	}

	inline static int32_t get_offset_of_GlobalStateHandler_18() { return static_cast<int32_t>(offsetof(StateConfiguration_tA1BFEBE81E1006B6AF706146B3821110BF45465C, ___GlobalStateHandler_18)); }
	inline String_t* get_GlobalStateHandler_18() const { return ___GlobalStateHandler_18; }
	inline String_t** get_address_of_GlobalStateHandler_18() { return &___GlobalStateHandler_18; }
	inline void set_GlobalStateHandler_18(String_t* value)
	{
		___GlobalStateHandler_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GlobalStateHandler_18), (void*)value);
	}

	inline static int32_t get_offset_of_SettingsStateHandler_19() { return static_cast<int32_t>(offsetof(StateConfiguration_tA1BFEBE81E1006B6AF706146B3821110BF45465C, ___SettingsStateHandler_19)); }
	inline String_t* get_SettingsStateHandler_19() const { return ___SettingsStateHandler_19; }
	inline String_t** get_address_of_SettingsStateHandler_19() { return &___SettingsStateHandler_19; }
	inline void set_SettingsStateHandler_19(String_t* value)
	{
		___SettingsStateHandler_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SettingsStateHandler_19), (void*)value);
	}
};


// UnityEngine.Video.VideoPlayer
struct  VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::prepareCompleted
	EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * ___prepareCompleted_4;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::loopPointReached
	EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * ___loopPointReached_5;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::started
	EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * ___started_6;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::frameDropped
	EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * ___frameDropped_7;
	// UnityEngine.Video.VideoPlayer/ErrorEventHandler UnityEngine.Video.VideoPlayer::errorReceived
	ErrorEventHandler_tD47781EBB7CF0CC4C111496024BD59B1D1A6A1F2 * ___errorReceived_8;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::seekCompleted
	EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * ___seekCompleted_9;
	// UnityEngine.Video.VideoPlayer/TimeEventHandler UnityEngine.Video.VideoPlayer::clockResyncOccurred
	TimeEventHandler_t7CA131EB85E0FFCBE8660E030698BD83D3994DD8 * ___clockResyncOccurred_10;
	// UnityEngine.Video.VideoPlayer/FrameReadyEventHandler UnityEngine.Video.VideoPlayer::frameReady
	FrameReadyEventHandler_t9529BD5A34E9C8BE7D8A39D46A6C4ABC673374EC * ___frameReady_11;

public:
	inline static int32_t get_offset_of_prepareCompleted_4() { return static_cast<int32_t>(offsetof(VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86, ___prepareCompleted_4)); }
	inline EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * get_prepareCompleted_4() const { return ___prepareCompleted_4; }
	inline EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD ** get_address_of_prepareCompleted_4() { return &___prepareCompleted_4; }
	inline void set_prepareCompleted_4(EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * value)
	{
		___prepareCompleted_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prepareCompleted_4), (void*)value);
	}

	inline static int32_t get_offset_of_loopPointReached_5() { return static_cast<int32_t>(offsetof(VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86, ___loopPointReached_5)); }
	inline EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * get_loopPointReached_5() const { return ___loopPointReached_5; }
	inline EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD ** get_address_of_loopPointReached_5() { return &___loopPointReached_5; }
	inline void set_loopPointReached_5(EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * value)
	{
		___loopPointReached_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___loopPointReached_5), (void*)value);
	}

	inline static int32_t get_offset_of_started_6() { return static_cast<int32_t>(offsetof(VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86, ___started_6)); }
	inline EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * get_started_6() const { return ___started_6; }
	inline EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD ** get_address_of_started_6() { return &___started_6; }
	inline void set_started_6(EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * value)
	{
		___started_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___started_6), (void*)value);
	}

	inline static int32_t get_offset_of_frameDropped_7() { return static_cast<int32_t>(offsetof(VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86, ___frameDropped_7)); }
	inline EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * get_frameDropped_7() const { return ___frameDropped_7; }
	inline EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD ** get_address_of_frameDropped_7() { return &___frameDropped_7; }
	inline void set_frameDropped_7(EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * value)
	{
		___frameDropped_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___frameDropped_7), (void*)value);
	}

	inline static int32_t get_offset_of_errorReceived_8() { return static_cast<int32_t>(offsetof(VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86, ___errorReceived_8)); }
	inline ErrorEventHandler_tD47781EBB7CF0CC4C111496024BD59B1D1A6A1F2 * get_errorReceived_8() const { return ___errorReceived_8; }
	inline ErrorEventHandler_tD47781EBB7CF0CC4C111496024BD59B1D1A6A1F2 ** get_address_of_errorReceived_8() { return &___errorReceived_8; }
	inline void set_errorReceived_8(ErrorEventHandler_tD47781EBB7CF0CC4C111496024BD59B1D1A6A1F2 * value)
	{
		___errorReceived_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___errorReceived_8), (void*)value);
	}

	inline static int32_t get_offset_of_seekCompleted_9() { return static_cast<int32_t>(offsetof(VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86, ___seekCompleted_9)); }
	inline EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * get_seekCompleted_9() const { return ___seekCompleted_9; }
	inline EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD ** get_address_of_seekCompleted_9() { return &___seekCompleted_9; }
	inline void set_seekCompleted_9(EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * value)
	{
		___seekCompleted_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___seekCompleted_9), (void*)value);
	}

	inline static int32_t get_offset_of_clockResyncOccurred_10() { return static_cast<int32_t>(offsetof(VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86, ___clockResyncOccurred_10)); }
	inline TimeEventHandler_t7CA131EB85E0FFCBE8660E030698BD83D3994DD8 * get_clockResyncOccurred_10() const { return ___clockResyncOccurred_10; }
	inline TimeEventHandler_t7CA131EB85E0FFCBE8660E030698BD83D3994DD8 ** get_address_of_clockResyncOccurred_10() { return &___clockResyncOccurred_10; }
	inline void set_clockResyncOccurred_10(TimeEventHandler_t7CA131EB85E0FFCBE8660E030698BD83D3994DD8 * value)
	{
		___clockResyncOccurred_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clockResyncOccurred_10), (void*)value);
	}

	inline static int32_t get_offset_of_frameReady_11() { return static_cast<int32_t>(offsetof(VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86, ___frameReady_11)); }
	inline FrameReadyEventHandler_t9529BD5A34E9C8BE7D8A39D46A6C4ABC673374EC * get_frameReady_11() const { return ___frameReady_11; }
	inline FrameReadyEventHandler_t9529BD5A34E9C8BE7D8A39D46A6C4ABC673374EC ** get_address_of_frameReady_11() { return &___frameReady_11; }
	inline void set_frameReady_11(FrameReadyEventHandler_t9529BD5A34E9C8BE7D8A39D46A6C4ABC673374EC * value)
	{
		___frameReady_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___frameReady_11), (void*)value);
	}
};


// Naninovel.UITextPrinter/<RevealTextAsync>d__37
struct  U3CRevealTextAsyncU3Ed__37_t22D933F07DE5B442D1EC37E2416AB435E5C0D1BE 
{
public:
	// System.Int32 Naninovel.UITextPrinter/<RevealTextAsync>d__37::<>1__state
	int32_t ___U3CU3E1__state_0;
	// UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder Naninovel.UITextPrinter/<RevealTextAsync>d__37::<>t__builder
	AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33  ___U3CU3Et__builder_1;
	// Naninovel.UITextPrinter Naninovel.UITextPrinter/<RevealTextAsync>d__37::<>4__this
	UITextPrinter_tE773A1F37D741340101B7B853A20AA74E954D6A3 * ___U3CU3E4__this_2;
	// Naninovel.CancellationToken Naninovel.UITextPrinter/<RevealTextAsync>d__37::cancellationToken
	CancellationToken_t6347F75AB41E1331E57D91A3F883A02D5FA698E3  ___cancellationToken_3;
	// System.Single Naninovel.UITextPrinter/<RevealTextAsync>d__37::revealDelay
	float ___revealDelay_4;
	// UniRx.Async.UniTask/Awaiter Naninovel.UITextPrinter/<RevealTextAsync>d__37::<>u__1
	Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822  ___U3CU3Eu__1_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CRevealTextAsyncU3Ed__37_t22D933F07DE5B442D1EC37E2416AB435E5C0D1BE, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CRevealTextAsyncU3Ed__37_t22D933F07DE5B442D1EC37E2416AB435E5C0D1BE, ___U3CU3Et__builder_1)); }
	inline AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___promise_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___moveNext_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CRevealTextAsyncU3Ed__37_t22D933F07DE5B442D1EC37E2416AB435E5C0D1BE, ___U3CU3E4__this_2)); }
	inline UITextPrinter_tE773A1F37D741340101B7B853A20AA74E954D6A3 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline UITextPrinter_tE773A1F37D741340101B7B853A20AA74E954D6A3 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(UITextPrinter_tE773A1F37D741340101B7B853A20AA74E954D6A3 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_cancellationToken_3() { return static_cast<int32_t>(offsetof(U3CRevealTextAsyncU3Ed__37_t22D933F07DE5B442D1EC37E2416AB435E5C0D1BE, ___cancellationToken_3)); }
	inline CancellationToken_t6347F75AB41E1331E57D91A3F883A02D5FA698E3  get_cancellationToken_3() const { return ___cancellationToken_3; }
	inline CancellationToken_t6347F75AB41E1331E57D91A3F883A02D5FA698E3 * get_address_of_cancellationToken_3() { return &___cancellationToken_3; }
	inline void set_cancellationToken_3(CancellationToken_t6347F75AB41E1331E57D91A3F883A02D5FA698E3  value)
	{
		___cancellationToken_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___cancellationToken_3))->___ASAPToken_2))->___m_source_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___cancellationToken_3))->___LazyToken_3))->___m_source_0), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_revealDelay_4() { return static_cast<int32_t>(offsetof(U3CRevealTextAsyncU3Ed__37_t22D933F07DE5B442D1EC37E2416AB435E5C0D1BE, ___revealDelay_4)); }
	inline float get_revealDelay_4() const { return ___revealDelay_4; }
	inline float* get_address_of_revealDelay_4() { return &___revealDelay_4; }
	inline void set_revealDelay_4(float value)
	{
		___revealDelay_4 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_5() { return static_cast<int32_t>(offsetof(U3CRevealTextAsyncU3Ed__37_t22D933F07DE5B442D1EC37E2416AB435E5C0D1BE, ___U3CU3Eu__1_5)); }
	inline Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822  get_U3CU3Eu__1_5() const { return ___U3CU3Eu__1_5; }
	inline Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822 * get_address_of_U3CU3Eu__1_5() { return &___U3CU3Eu__1_5; }
	inline void set_U3CU3Eu__1_5(Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822  value)
	{
		___U3CU3Eu__1_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Eu__1_5))->___task_0))->___awaiter_2), (void*)NULL);
	}
};


// Naninovel.UI.UITextPrinterPanel/<InitializeAsync>d__24
struct  U3CInitializeAsyncU3Ed__24_tAB011A1A6E65376DE8C0FAAFBF1E2BC2E0974DCB 
{
public:
	// System.Int32 Naninovel.UI.UITextPrinterPanel/<InitializeAsync>d__24::<>1__state
	int32_t ___U3CU3E1__state_0;
	// UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder Naninovel.UI.UITextPrinterPanel/<InitializeAsync>d__24::<>t__builder
	AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33  ___U3CU3Et__builder_1;
	// Naninovel.UI.UITextPrinterPanel Naninovel.UI.UITextPrinterPanel/<InitializeAsync>d__24::<>4__this
	UITextPrinterPanel_t332EC95C8F0F49BC7A8420ED5F3BA2CC8D1BF60F * ___U3CU3E4__this_2;
	// UniRx.Async.UniTask/Awaiter Naninovel.UI.UITextPrinterPanel/<InitializeAsync>d__24::<>u__1
	Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CInitializeAsyncU3Ed__24_tAB011A1A6E65376DE8C0FAAFBF1E2BC2E0974DCB, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CInitializeAsyncU3Ed__24_tAB011A1A6E65376DE8C0FAAFBF1E2BC2E0974DCB, ___U3CU3Et__builder_1)); }
	inline AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___promise_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___moveNext_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CInitializeAsyncU3Ed__24_tAB011A1A6E65376DE8C0FAAFBF1E2BC2E0974DCB, ___U3CU3E4__this_2)); }
	inline UITextPrinterPanel_t332EC95C8F0F49BC7A8420ED5F3BA2CC8D1BF60F * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline UITextPrinterPanel_t332EC95C8F0F49BC7A8420ED5F3BA2CC8D1BF60F ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(UITextPrinterPanel_t332EC95C8F0F49BC7A8420ED5F3BA2CC8D1BF60F * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CInitializeAsyncU3Ed__24_tAB011A1A6E65376DE8C0FAAFBF1E2BC2E0974DCB, ___U3CU3Eu__1_3)); }
	inline Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822 * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822  value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Eu__1_3))->___task_0))->___awaiter_2), (void*)NULL);
	}
};


// Naninovel.UI.VariableInputPanel/<DeserializeState>d__27
struct  U3CDeserializeStateU3Ed__27_tABF41614DF3DFF2D9AAA5826BE7678FFBFE9C811 
{
public:
	// System.Int32 Naninovel.UI.VariableInputPanel/<DeserializeState>d__27::<>1__state
	int32_t ___U3CU3E1__state_0;
	// UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder Naninovel.UI.VariableInputPanel/<DeserializeState>d__27::<>t__builder
	AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33  ___U3CU3Et__builder_1;
	// Naninovel.UI.VariableInputPanel Naninovel.UI.VariableInputPanel/<DeserializeState>d__27::<>4__this
	VariableInputPanel_t8E4D3D3105400B75F154916F7E3723C22389D55E * ___U3CU3E4__this_2;
	// Naninovel.GameStateMap Naninovel.UI.VariableInputPanel/<DeserializeState>d__27::stateMap
	GameStateMap_tA4788218B9D1B130D00F9C346FF9FD21E01ED52D * ___stateMap_3;
	// UniRx.Async.UniTask/Awaiter Naninovel.UI.VariableInputPanel/<DeserializeState>d__27::<>u__1
	Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822  ___U3CU3Eu__1_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDeserializeStateU3Ed__27_tABF41614DF3DFF2D9AAA5826BE7678FFBFE9C811, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CDeserializeStateU3Ed__27_tABF41614DF3DFF2D9AAA5826BE7678FFBFE9C811, ___U3CU3Et__builder_1)); }
	inline AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___promise_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___moveNext_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CDeserializeStateU3Ed__27_tABF41614DF3DFF2D9AAA5826BE7678FFBFE9C811, ___U3CU3E4__this_2)); }
	inline VariableInputPanel_t8E4D3D3105400B75F154916F7E3723C22389D55E * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline VariableInputPanel_t8E4D3D3105400B75F154916F7E3723C22389D55E ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(VariableInputPanel_t8E4D3D3105400B75F154916F7E3723C22389D55E * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_stateMap_3() { return static_cast<int32_t>(offsetof(U3CDeserializeStateU3Ed__27_tABF41614DF3DFF2D9AAA5826BE7678FFBFE9C811, ___stateMap_3)); }
	inline GameStateMap_tA4788218B9D1B130D00F9C346FF9FD21E01ED52D * get_stateMap_3() const { return ___stateMap_3; }
	inline GameStateMap_tA4788218B9D1B130D00F9C346FF9FD21E01ED52D ** get_address_of_stateMap_3() { return &___stateMap_3; }
	inline void set_stateMap_3(GameStateMap_tA4788218B9D1B130D00F9C346FF9FD21E01ED52D * value)
	{
		___stateMap_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stateMap_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_4() { return static_cast<int32_t>(offsetof(U3CDeserializeStateU3Ed__27_tABF41614DF3DFF2D9AAA5826BE7678FFBFE9C811, ___U3CU3Eu__1_4)); }
	inline Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822  get_U3CU3Eu__1_4() const { return ___U3CU3Eu__1_4; }
	inline Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822 * get_address_of_U3CU3Eu__1_4() { return &___U3CU3Eu__1_4; }
	inline void set_U3CU3Eu__1_4(Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822  value)
	{
		___U3CU3Eu__1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Eu__1_4))->___task_0))->___awaiter_2), (void*)NULL);
	}
};


// Naninovel.VideoBackground/<ChangeAppearanceAsync>d__22
struct  U3CChangeAppearanceAsyncU3Ed__22_tCB35366F250EDB2DEE0257694727C11654A86404 
{
public:
	// System.Int32 Naninovel.VideoBackground/<ChangeAppearanceAsync>d__22::<>1__state
	int32_t ___U3CU3E1__state_0;
	// UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder Naninovel.VideoBackground/<ChangeAppearanceAsync>d__22::<>t__builder
	AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33  ___U3CU3Et__builder_1;
	// Naninovel.VideoBackground Naninovel.VideoBackground/<ChangeAppearanceAsync>d__22::<>4__this
	VideoBackground_tC31D69C74D104E5F414AAE56250D1AAD449B7F47 * ___U3CU3E4__this_2;
	// System.String Naninovel.VideoBackground/<ChangeAppearanceAsync>d__22::appearance
	String_t* ___appearance_3;
	// Naninovel.CancellationToken Naninovel.VideoBackground/<ChangeAppearanceAsync>d__22::cancellationToken
	CancellationToken_t6347F75AB41E1331E57D91A3F883A02D5FA698E3  ___cancellationToken_4;
	// System.Single Naninovel.VideoBackground/<ChangeAppearanceAsync>d__22::duration
	float ___duration_5;
	// Naninovel.EasingType Naninovel.VideoBackground/<ChangeAppearanceAsync>d__22::easingType
	int32_t ___easingType_6;
	// System.Nullable`1<Naninovel.Transition> Naninovel.VideoBackground/<ChangeAppearanceAsync>d__22::transition
	Nullable_1_t1676A29F23467DBADD161C035D64BDBF1FD6A335  ___transition_7;
	// Naninovel.VideoBackground/VideoData Naninovel.VideoBackground/<ChangeAppearanceAsync>d__22::<videoData>5__2
	VideoData_t995725B9BB3E0B9FADDA15CD9D34810784D73AD2 * ___U3CvideoDataU3E5__2_8;
	// UniRx.Async.UniTask`1/Awaiter<Naninovel.VideoBackground/VideoData> Naninovel.VideoBackground/<ChangeAppearanceAsync>d__22::<>u__1
	Awaiter_t2EC4E48D6D8C5EC90776FBA7B42075F059E21967  ___U3CU3Eu__1_9;
	// UniRx.Async.YieldAwaitable/Awaiter Naninovel.VideoBackground/<ChangeAppearanceAsync>d__22::<>u__2
	Awaiter_tC53C155C42BF6DB6BBD8673DE4B04D42737173C6  ___U3CU3Eu__2_10;
	// UniRx.Async.UniTask/Awaiter Naninovel.VideoBackground/<ChangeAppearanceAsync>d__22::<>u__3
	Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822  ___U3CU3Eu__3_11;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CChangeAppearanceAsyncU3Ed__22_tCB35366F250EDB2DEE0257694727C11654A86404, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CChangeAppearanceAsyncU3Ed__22_tCB35366F250EDB2DEE0257694727C11654A86404, ___U3CU3Et__builder_1)); }
	inline AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___promise_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___moveNext_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CChangeAppearanceAsyncU3Ed__22_tCB35366F250EDB2DEE0257694727C11654A86404, ___U3CU3E4__this_2)); }
	inline VideoBackground_tC31D69C74D104E5F414AAE56250D1AAD449B7F47 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline VideoBackground_tC31D69C74D104E5F414AAE56250D1AAD449B7F47 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(VideoBackground_tC31D69C74D104E5F414AAE56250D1AAD449B7F47 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_appearance_3() { return static_cast<int32_t>(offsetof(U3CChangeAppearanceAsyncU3Ed__22_tCB35366F250EDB2DEE0257694727C11654A86404, ___appearance_3)); }
	inline String_t* get_appearance_3() const { return ___appearance_3; }
	inline String_t** get_address_of_appearance_3() { return &___appearance_3; }
	inline void set_appearance_3(String_t* value)
	{
		___appearance_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___appearance_3), (void*)value);
	}

	inline static int32_t get_offset_of_cancellationToken_4() { return static_cast<int32_t>(offsetof(U3CChangeAppearanceAsyncU3Ed__22_tCB35366F250EDB2DEE0257694727C11654A86404, ___cancellationToken_4)); }
	inline CancellationToken_t6347F75AB41E1331E57D91A3F883A02D5FA698E3  get_cancellationToken_4() const { return ___cancellationToken_4; }
	inline CancellationToken_t6347F75AB41E1331E57D91A3F883A02D5FA698E3 * get_address_of_cancellationToken_4() { return &___cancellationToken_4; }
	inline void set_cancellationToken_4(CancellationToken_t6347F75AB41E1331E57D91A3F883A02D5FA698E3  value)
	{
		___cancellationToken_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___cancellationToken_4))->___ASAPToken_2))->___m_source_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___cancellationToken_4))->___LazyToken_3))->___m_source_0), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_duration_5() { return static_cast<int32_t>(offsetof(U3CChangeAppearanceAsyncU3Ed__22_tCB35366F250EDB2DEE0257694727C11654A86404, ___duration_5)); }
	inline float get_duration_5() const { return ___duration_5; }
	inline float* get_address_of_duration_5() { return &___duration_5; }
	inline void set_duration_5(float value)
	{
		___duration_5 = value;
	}

	inline static int32_t get_offset_of_easingType_6() { return static_cast<int32_t>(offsetof(U3CChangeAppearanceAsyncU3Ed__22_tCB35366F250EDB2DEE0257694727C11654A86404, ___easingType_6)); }
	inline int32_t get_easingType_6() const { return ___easingType_6; }
	inline int32_t* get_address_of_easingType_6() { return &___easingType_6; }
	inline void set_easingType_6(int32_t value)
	{
		___easingType_6 = value;
	}

	inline static int32_t get_offset_of_transition_7() { return static_cast<int32_t>(offsetof(U3CChangeAppearanceAsyncU3Ed__22_tCB35366F250EDB2DEE0257694727C11654A86404, ___transition_7)); }
	inline Nullable_1_t1676A29F23467DBADD161C035D64BDBF1FD6A335  get_transition_7() const { return ___transition_7; }
	inline Nullable_1_t1676A29F23467DBADD161C035D64BDBF1FD6A335 * get_address_of_transition_7() { return &___transition_7; }
	inline void set_transition_7(Nullable_1_t1676A29F23467DBADD161C035D64BDBF1FD6A335  value)
	{
		___transition_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___transition_7))->___value_0))->___Name_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___transition_7))->___value_0))->___DissolveTexture_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CvideoDataU3E5__2_8() { return static_cast<int32_t>(offsetof(U3CChangeAppearanceAsyncU3Ed__22_tCB35366F250EDB2DEE0257694727C11654A86404, ___U3CvideoDataU3E5__2_8)); }
	inline VideoData_t995725B9BB3E0B9FADDA15CD9D34810784D73AD2 * get_U3CvideoDataU3E5__2_8() const { return ___U3CvideoDataU3E5__2_8; }
	inline VideoData_t995725B9BB3E0B9FADDA15CD9D34810784D73AD2 ** get_address_of_U3CvideoDataU3E5__2_8() { return &___U3CvideoDataU3E5__2_8; }
	inline void set_U3CvideoDataU3E5__2_8(VideoData_t995725B9BB3E0B9FADDA15CD9D34810784D73AD2 * value)
	{
		___U3CvideoDataU3E5__2_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CvideoDataU3E5__2_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_9() { return static_cast<int32_t>(offsetof(U3CChangeAppearanceAsyncU3Ed__22_tCB35366F250EDB2DEE0257694727C11654A86404, ___U3CU3Eu__1_9)); }
	inline Awaiter_t2EC4E48D6D8C5EC90776FBA7B42075F059E21967  get_U3CU3Eu__1_9() const { return ___U3CU3Eu__1_9; }
	inline Awaiter_t2EC4E48D6D8C5EC90776FBA7B42075F059E21967 * get_address_of_U3CU3Eu__1_9() { return &___U3CU3Eu__1_9; }
	inline void set_U3CU3Eu__1_9(Awaiter_t2EC4E48D6D8C5EC90776FBA7B42075F059E21967  value)
	{
		___U3CU3Eu__1_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Eu__1_9))->___task_0))->___result_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Eu__1_9))->___task_0))->___awaiter_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3Eu__2_10() { return static_cast<int32_t>(offsetof(U3CChangeAppearanceAsyncU3Ed__22_tCB35366F250EDB2DEE0257694727C11654A86404, ___U3CU3Eu__2_10)); }
	inline Awaiter_tC53C155C42BF6DB6BBD8673DE4B04D42737173C6  get_U3CU3Eu__2_10() const { return ___U3CU3Eu__2_10; }
	inline Awaiter_tC53C155C42BF6DB6BBD8673DE4B04D42737173C6 * get_address_of_U3CU3Eu__2_10() { return &___U3CU3Eu__2_10; }
	inline void set_U3CU3Eu__2_10(Awaiter_tC53C155C42BF6DB6BBD8673DE4B04D42737173C6  value)
	{
		___U3CU3Eu__2_10 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__3_11() { return static_cast<int32_t>(offsetof(U3CChangeAppearanceAsyncU3Ed__22_tCB35366F250EDB2DEE0257694727C11654A86404, ___U3CU3Eu__3_11)); }
	inline Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822  get_U3CU3Eu__3_11() const { return ___U3CU3Eu__3_11; }
	inline Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822 * get_address_of_U3CU3Eu__3_11() { return &___U3CU3Eu__3_11; }
	inline void set_U3CU3Eu__3_11(Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822  value)
	{
		___U3CU3Eu__3_11 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Eu__3_11))->___task_0))->___awaiter_2), (void*)NULL);
	}
};


// Naninovel.VideoBackground/<ChangeVisibilityAsync>d__23
struct  U3CChangeVisibilityAsyncU3Ed__23_t360BFA64DB92AE4FBA3007EE6CDFF301F0D0FE0F 
{
public:
	// System.Int32 Naninovel.VideoBackground/<ChangeVisibilityAsync>d__23::<>1__state
	int32_t ___U3CU3E1__state_0;
	// UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder Naninovel.VideoBackground/<ChangeVisibilityAsync>d__23::<>t__builder
	AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33  ___U3CU3Et__builder_1;
	// Naninovel.VideoBackground Naninovel.VideoBackground/<ChangeVisibilityAsync>d__23::<>4__this
	VideoBackground_tC31D69C74D104E5F414AAE56250D1AAD449B7F47 * ___U3CU3E4__this_2;
	// System.Boolean Naninovel.VideoBackground/<ChangeVisibilityAsync>d__23::isVisible
	bool ___isVisible_3;
	// System.Single Naninovel.VideoBackground/<ChangeVisibilityAsync>d__23::duration
	float ___duration_4;
	// Naninovel.EasingType Naninovel.VideoBackground/<ChangeVisibilityAsync>d__23::easingType
	int32_t ___easingType_5;
	// Naninovel.CancellationToken Naninovel.VideoBackground/<ChangeVisibilityAsync>d__23::cancellationToken
	CancellationToken_t6347F75AB41E1331E57D91A3F883A02D5FA698E3  ___cancellationToken_6;
	// UniRx.Async.UniTask/Awaiter Naninovel.VideoBackground/<ChangeVisibilityAsync>d__23::<>u__1
	Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822  ___U3CU3Eu__1_7;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CChangeVisibilityAsyncU3Ed__23_t360BFA64DB92AE4FBA3007EE6CDFF301F0D0FE0F, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CChangeVisibilityAsyncU3Ed__23_t360BFA64DB92AE4FBA3007EE6CDFF301F0D0FE0F, ___U3CU3Et__builder_1)); }
	inline AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___promise_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___moveNext_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CChangeVisibilityAsyncU3Ed__23_t360BFA64DB92AE4FBA3007EE6CDFF301F0D0FE0F, ___U3CU3E4__this_2)); }
	inline VideoBackground_tC31D69C74D104E5F414AAE56250D1AAD449B7F47 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline VideoBackground_tC31D69C74D104E5F414AAE56250D1AAD449B7F47 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(VideoBackground_tC31D69C74D104E5F414AAE56250D1AAD449B7F47 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_isVisible_3() { return static_cast<int32_t>(offsetof(U3CChangeVisibilityAsyncU3Ed__23_t360BFA64DB92AE4FBA3007EE6CDFF301F0D0FE0F, ___isVisible_3)); }
	inline bool get_isVisible_3() const { return ___isVisible_3; }
	inline bool* get_address_of_isVisible_3() { return &___isVisible_3; }
	inline void set_isVisible_3(bool value)
	{
		___isVisible_3 = value;
	}

	inline static int32_t get_offset_of_duration_4() { return static_cast<int32_t>(offsetof(U3CChangeVisibilityAsyncU3Ed__23_t360BFA64DB92AE4FBA3007EE6CDFF301F0D0FE0F, ___duration_4)); }
	inline float get_duration_4() const { return ___duration_4; }
	inline float* get_address_of_duration_4() { return &___duration_4; }
	inline void set_duration_4(float value)
	{
		___duration_4 = value;
	}

	inline static int32_t get_offset_of_easingType_5() { return static_cast<int32_t>(offsetof(U3CChangeVisibilityAsyncU3Ed__23_t360BFA64DB92AE4FBA3007EE6CDFF301F0D0FE0F, ___easingType_5)); }
	inline int32_t get_easingType_5() const { return ___easingType_5; }
	inline int32_t* get_address_of_easingType_5() { return &___easingType_5; }
	inline void set_easingType_5(int32_t value)
	{
		___easingType_5 = value;
	}

	inline static int32_t get_offset_of_cancellationToken_6() { return static_cast<int32_t>(offsetof(U3CChangeVisibilityAsyncU3Ed__23_t360BFA64DB92AE4FBA3007EE6CDFF301F0D0FE0F, ___cancellationToken_6)); }
	inline CancellationToken_t6347F75AB41E1331E57D91A3F883A02D5FA698E3  get_cancellationToken_6() const { return ___cancellationToken_6; }
	inline CancellationToken_t6347F75AB41E1331E57D91A3F883A02D5FA698E3 * get_address_of_cancellationToken_6() { return &___cancellationToken_6; }
	inline void set_cancellationToken_6(CancellationToken_t6347F75AB41E1331E57D91A3F883A02D5FA698E3  value)
	{
		___cancellationToken_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___cancellationToken_6))->___ASAPToken_2))->___m_source_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___cancellationToken_6))->___LazyToken_3))->___m_source_0), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_7() { return static_cast<int32_t>(offsetof(U3CChangeVisibilityAsyncU3Ed__23_t360BFA64DB92AE4FBA3007EE6CDFF301F0D0FE0F, ___U3CU3Eu__1_7)); }
	inline Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822  get_U3CU3Eu__1_7() const { return ___U3CU3Eu__1_7; }
	inline Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822 * get_address_of_U3CU3Eu__1_7() { return &___U3CU3Eu__1_7; }
	inline void set_U3CU3Eu__1_7(Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822  value)
	{
		___U3CU3Eu__1_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Eu__1_7))->___task_0))->___awaiter_2), (void*)NULL);
	}
};


// Naninovel.VideoBackground/<InitializeAsync>d__21
struct  U3CInitializeAsyncU3Ed__21_t705DB795DF855A7C45BFFDF1527CB27C7A01CE12 
{
public:
	// System.Int32 Naninovel.VideoBackground/<InitializeAsync>d__21::<>1__state
	int32_t ___U3CU3E1__state_0;
	// UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder Naninovel.VideoBackground/<InitializeAsync>d__21::<>t__builder
	AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33  ___U3CU3Et__builder_1;
	// Naninovel.VideoBackground Naninovel.VideoBackground/<InitializeAsync>d__21::<>4__this
	VideoBackground_tC31D69C74D104E5F414AAE56250D1AAD449B7F47 * ___U3CU3E4__this_2;
	// UniRx.Async.UniTask/Awaiter Naninovel.VideoBackground/<InitializeAsync>d__21::<>u__1
	Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CInitializeAsyncU3Ed__21_t705DB795DF855A7C45BFFDF1527CB27C7A01CE12, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CInitializeAsyncU3Ed__21_t705DB795DF855A7C45BFFDF1527CB27C7A01CE12, ___U3CU3Et__builder_1)); }
	inline AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___promise_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___moveNext_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CInitializeAsyncU3Ed__21_t705DB795DF855A7C45BFFDF1527CB27C7A01CE12, ___U3CU3E4__this_2)); }
	inline VideoBackground_tC31D69C74D104E5F414AAE56250D1AAD449B7F47 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline VideoBackground_tC31D69C74D104E5F414AAE56250D1AAD449B7F47 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(VideoBackground_tC31D69C74D104E5F414AAE56250D1AAD449B7F47 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CInitializeAsyncU3Ed__21_t705DB795DF855A7C45BFFDF1527CB27C7A01CE12, ___U3CU3Eu__1_3)); }
	inline Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822 * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822  value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Eu__1_3))->___task_0))->___awaiter_2), (void*)NULL);
	}
};


// Naninovel.Commands.WaitForInput/<ExecuteAsync>d__0
struct  U3CExecuteAsyncU3Ed__0_t67878E6A3EBDB121016F7589B616F5D6AE4AD25A 
{
public:
	// System.Int32 Naninovel.Commands.WaitForInput/<ExecuteAsync>d__0::<>1__state
	int32_t ___U3CU3E1__state_0;
	// UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder Naninovel.Commands.WaitForInput/<ExecuteAsync>d__0::<>t__builder
	AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33  ___U3CU3Et__builder_1;
	// Naninovel.CancellationToken Naninovel.Commands.WaitForInput/<ExecuteAsync>d__0::cancellationToken
	CancellationToken_t6347F75AB41E1331E57D91A3F883A02D5FA698E3  ___cancellationToken_2;
	// UniRx.Async.UniTask/Awaiter Naninovel.Commands.WaitForInput/<ExecuteAsync>d__0::<>u__1
	Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CExecuteAsyncU3Ed__0_t67878E6A3EBDB121016F7589B616F5D6AE4AD25A, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CExecuteAsyncU3Ed__0_t67878E6A3EBDB121016F7589B616F5D6AE4AD25A, ___U3CU3Et__builder_1)); }
	inline AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___promise_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___moveNext_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_cancellationToken_2() { return static_cast<int32_t>(offsetof(U3CExecuteAsyncU3Ed__0_t67878E6A3EBDB121016F7589B616F5D6AE4AD25A, ___cancellationToken_2)); }
	inline CancellationToken_t6347F75AB41E1331E57D91A3F883A02D5FA698E3  get_cancellationToken_2() const { return ___cancellationToken_2; }
	inline CancellationToken_t6347F75AB41E1331E57D91A3F883A02D5FA698E3 * get_address_of_cancellationToken_2() { return &___cancellationToken_2; }
	inline void set_cancellationToken_2(CancellationToken_t6347F75AB41E1331E57D91A3F883A02D5FA698E3  value)
	{
		___cancellationToken_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___cancellationToken_2))->___ASAPToken_2))->___m_source_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___cancellationToken_2))->___LazyToken_3))->___m_source_0), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CExecuteAsyncU3Ed__0_t67878E6A3EBDB121016F7589B616F5D6AE4AD25A, ___U3CU3Eu__1_3)); }
	inline Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822 * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822  value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Eu__1_3))->___task_0))->___awaiter_2), (void*)NULL);
	}
};


// Naninovel.ScriptPlayer/<>c__DisplayClass123_0/<<ExecutePlayedCommandAsync>g__ExecuteCommandConcurrently|0>d
struct  U3CU3CExecutePlayedCommandAsyncU3Eg__ExecuteCommandConcurrentlyU7C0U3Ed_t402700803755E3D73E3B0DA464E7E0A389643CD2 
{
public:
	// System.Int32 Naninovel.ScriptPlayer/<>c__DisplayClass123_0/<<ExecutePlayedCommandAsync>g__ExecuteCommandConcurrently|0>d::<>1__state
	int32_t ___U3CU3E1__state_0;
	// UniRx.Async.CompilerServices.AsyncUniTaskVoidMethodBuilder Naninovel.ScriptPlayer/<>c__DisplayClass123_0/<<ExecutePlayedCommandAsync>g__ExecuteCommandConcurrently|0>d::<>t__builder
	AsyncUniTaskVoidMethodBuilder_t0F142C0A47AC5AC99C2722FCC38BC01C73F8631E  ___U3CU3Et__builder_1;
	// Naninovel.ScriptPlayer/<>c__DisplayClass123_0 Naninovel.ScriptPlayer/<>c__DisplayClass123_0/<<ExecutePlayedCommandAsync>g__ExecuteCommandConcurrently|0>d::<>4__this
	U3CU3Ec__DisplayClass123_0_tCBD47300FFAF1841C46E498D241EBD6528590772 * ___U3CU3E4__this_2;
	// UniRx.Async.UniTask/Awaiter Naninovel.ScriptPlayer/<>c__DisplayClass123_0/<<ExecutePlayedCommandAsync>g__ExecuteCommandConcurrently|0>d::<>u__1
	Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CU3CExecutePlayedCommandAsyncU3Eg__ExecuteCommandConcurrentlyU7C0U3Ed_t402700803755E3D73E3B0DA464E7E0A389643CD2, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CU3CExecutePlayedCommandAsyncU3Eg__ExecuteCommandConcurrentlyU7C0U3Ed_t402700803755E3D73E3B0DA464E7E0A389643CD2, ___U3CU3Et__builder_1)); }
	inline AsyncUniTaskVoidMethodBuilder_t0F142C0A47AC5AC99C2722FCC38BC01C73F8631E  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncUniTaskVoidMethodBuilder_t0F142C0A47AC5AC99C2722FCC38BC01C73F8631E * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncUniTaskVoidMethodBuilder_t0F142C0A47AC5AC99C2722FCC38BC01C73F8631E  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___moveNext_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CU3CExecutePlayedCommandAsyncU3Eg__ExecuteCommandConcurrentlyU7C0U3Ed_t402700803755E3D73E3B0DA464E7E0A389643CD2, ___U3CU3E4__this_2)); }
	inline U3CU3Ec__DisplayClass123_0_tCBD47300FFAF1841C46E498D241EBD6528590772 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline U3CU3Ec__DisplayClass123_0_tCBD47300FFAF1841C46E498D241EBD6528590772 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(U3CU3Ec__DisplayClass123_0_tCBD47300FFAF1841C46E498D241EBD6528590772 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CU3CExecutePlayedCommandAsyncU3Eg__ExecuteCommandConcurrentlyU7C0U3Ed_t402700803755E3D73E3B0DA464E7E0A389643CD2, ___U3CU3Eu__1_3)); }
	inline Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822 * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822  value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Eu__1_3))->___task_0))->___awaiter_2), (void*)NULL);
	}
};


// Naninovel.StateManager/<>c__DisplayClass69_0/<<SaveGameAsync>g__DoSaveAfterSync|0>d
struct  U3CU3CSaveGameAsyncU3Eg__DoSaveAfterSyncU7C0U3Ed_tA5BCD95B422F51D7E49E973DC5FD62AE652C238C 
{
public:
	// System.Int32 Naninovel.StateManager/<>c__DisplayClass69_0/<<SaveGameAsync>g__DoSaveAfterSync|0>d::<>1__state
	int32_t ___U3CU3E1__state_0;
	// UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder Naninovel.StateManager/<>c__DisplayClass69_0/<<SaveGameAsync>g__DoSaveAfterSync|0>d::<>t__builder
	AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33  ___U3CU3Et__builder_1;
	// Naninovel.StateManager/<>c__DisplayClass69_0 Naninovel.StateManager/<>c__DisplayClass69_0/<<SaveGameAsync>g__DoSaveAfterSync|0>d::<>4__this
	U3CU3Ec__DisplayClass69_0_t7494ACB5178966BE314D67BD10A4A4DE4C2CA5FD * ___U3CU3E4__this_2;
	// UniRx.Async.UniTask/Awaiter Naninovel.StateManager/<>c__DisplayClass69_0/<<SaveGameAsync>g__DoSaveAfterSync|0>d::<>u__1
	Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822  ___U3CU3Eu__1_3;
	// UniRx.Async.UniTask`1/Awaiter<Naninovel.GlobalStateMap> Naninovel.StateManager/<>c__DisplayClass69_0/<<SaveGameAsync>g__DoSaveAfterSync|0>d::<>u__2
	Awaiter_t2A04123A9B29D02DBE393CFF44AD80850561C5C0  ___U3CU3Eu__2_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CU3CSaveGameAsyncU3Eg__DoSaveAfterSyncU7C0U3Ed_tA5BCD95B422F51D7E49E973DC5FD62AE652C238C, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CU3CSaveGameAsyncU3Eg__DoSaveAfterSyncU7C0U3Ed_tA5BCD95B422F51D7E49E973DC5FD62AE652C238C, ___U3CU3Et__builder_1)); }
	inline AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___promise_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___moveNext_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CU3CSaveGameAsyncU3Eg__DoSaveAfterSyncU7C0U3Ed_tA5BCD95B422F51D7E49E973DC5FD62AE652C238C, ___U3CU3E4__this_2)); }
	inline U3CU3Ec__DisplayClass69_0_t7494ACB5178966BE314D67BD10A4A4DE4C2CA5FD * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline U3CU3Ec__DisplayClass69_0_t7494ACB5178966BE314D67BD10A4A4DE4C2CA5FD ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(U3CU3Ec__DisplayClass69_0_t7494ACB5178966BE314D67BD10A4A4DE4C2CA5FD * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CU3CSaveGameAsyncU3Eg__DoSaveAfterSyncU7C0U3Ed_tA5BCD95B422F51D7E49E973DC5FD62AE652C238C, ___U3CU3Eu__1_3)); }
	inline Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822 * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822  value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Eu__1_3))->___task_0))->___awaiter_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CU3Eu__2_4() { return static_cast<int32_t>(offsetof(U3CU3CSaveGameAsyncU3Eg__DoSaveAfterSyncU7C0U3Ed_tA5BCD95B422F51D7E49E973DC5FD62AE652C238C, ___U3CU3Eu__2_4)); }
	inline Awaiter_t2A04123A9B29D02DBE393CFF44AD80850561C5C0  get_U3CU3Eu__2_4() const { return ___U3CU3Eu__2_4; }
	inline Awaiter_t2A04123A9B29D02DBE393CFF44AD80850561C5C0 * get_address_of_U3CU3Eu__2_4() { return &___U3CU3Eu__2_4; }
	inline void set_U3CU3Eu__2_4(Awaiter_t2A04123A9B29D02DBE393CFF44AD80850561C5C0  value)
	{
		___U3CU3Eu__2_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Eu__2_4))->___task_0))->___result_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Eu__2_4))->___task_0))->___awaiter_1), (void*)NULL);
		#endif
	}
};


// Naninovel.TransitionalRenderer
struct  TransitionalRenderer_t417C5BDB13977F6209462DBA455A7E2BE95B61F5  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Naninovel.TransitionalMaterial Naninovel.TransitionalRenderer::<Material>k__BackingField
	TransitionalMaterial_tE26D6659F79482CC3A4F4158B8932E2C19071D46 * ___U3CMaterialU3Ek__BackingField_4;
	// Naninovel.TransitionalMaterial Naninovel.TransitionalRenderer::<DepthMaterial>k__BackingField
	TransitionalMaterial_tE26D6659F79482CC3A4F4158B8932E2C19071D46 * ___U3CDepthMaterialU3Ek__BackingField_5;
	// Naninovel.Tweener`1<Naninovel.FloatTween> Naninovel.TransitionalRenderer::transitionTweener
	Tweener_1_t5C52F0334BD85212FC4F13C1F7A15BEB546D885C * ___transitionTweener_6;
	// Naninovel.Tweener`1<Naninovel.ColorTween> Naninovel.TransitionalRenderer::colorTweener
	Tweener_1_t1D8297D2A0C9598928583CD2F719887DFDFB11FA * ___colorTweener_7;
	// Naninovel.Tweener`1<Naninovel.FloatTween> Naninovel.TransitionalRenderer::fadeTweener
	Tweener_1_t5C52F0334BD85212FC4F13C1F7A15BEB546D885C * ___fadeTweener_8;

public:
	inline static int32_t get_offset_of_U3CMaterialU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(TransitionalRenderer_t417C5BDB13977F6209462DBA455A7E2BE95B61F5, ___U3CMaterialU3Ek__BackingField_4)); }
	inline TransitionalMaterial_tE26D6659F79482CC3A4F4158B8932E2C19071D46 * get_U3CMaterialU3Ek__BackingField_4() const { return ___U3CMaterialU3Ek__BackingField_4; }
	inline TransitionalMaterial_tE26D6659F79482CC3A4F4158B8932E2C19071D46 ** get_address_of_U3CMaterialU3Ek__BackingField_4() { return &___U3CMaterialU3Ek__BackingField_4; }
	inline void set_U3CMaterialU3Ek__BackingField_4(TransitionalMaterial_tE26D6659F79482CC3A4F4158B8932E2C19071D46 * value)
	{
		___U3CMaterialU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMaterialU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDepthMaterialU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(TransitionalRenderer_t417C5BDB13977F6209462DBA455A7E2BE95B61F5, ___U3CDepthMaterialU3Ek__BackingField_5)); }
	inline TransitionalMaterial_tE26D6659F79482CC3A4F4158B8932E2C19071D46 * get_U3CDepthMaterialU3Ek__BackingField_5() const { return ___U3CDepthMaterialU3Ek__BackingField_5; }
	inline TransitionalMaterial_tE26D6659F79482CC3A4F4158B8932E2C19071D46 ** get_address_of_U3CDepthMaterialU3Ek__BackingField_5() { return &___U3CDepthMaterialU3Ek__BackingField_5; }
	inline void set_U3CDepthMaterialU3Ek__BackingField_5(TransitionalMaterial_tE26D6659F79482CC3A4F4158B8932E2C19071D46 * value)
	{
		___U3CDepthMaterialU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDepthMaterialU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_transitionTweener_6() { return static_cast<int32_t>(offsetof(TransitionalRenderer_t417C5BDB13977F6209462DBA455A7E2BE95B61F5, ___transitionTweener_6)); }
	inline Tweener_1_t5C52F0334BD85212FC4F13C1F7A15BEB546D885C * get_transitionTweener_6() const { return ___transitionTweener_6; }
	inline Tweener_1_t5C52F0334BD85212FC4F13C1F7A15BEB546D885C ** get_address_of_transitionTweener_6() { return &___transitionTweener_6; }
	inline void set_transitionTweener_6(Tweener_1_t5C52F0334BD85212FC4F13C1F7A15BEB546D885C * value)
	{
		___transitionTweener_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___transitionTweener_6), (void*)value);
	}

	inline static int32_t get_offset_of_colorTweener_7() { return static_cast<int32_t>(offsetof(TransitionalRenderer_t417C5BDB13977F6209462DBA455A7E2BE95B61F5, ___colorTweener_7)); }
	inline Tweener_1_t1D8297D2A0C9598928583CD2F719887DFDFB11FA * get_colorTweener_7() const { return ___colorTweener_7; }
	inline Tweener_1_t1D8297D2A0C9598928583CD2F719887DFDFB11FA ** get_address_of_colorTweener_7() { return &___colorTweener_7; }
	inline void set_colorTweener_7(Tweener_1_t1D8297D2A0C9598928583CD2F719887DFDFB11FA * value)
	{
		___colorTweener_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___colorTweener_7), (void*)value);
	}

	inline static int32_t get_offset_of_fadeTweener_8() { return static_cast<int32_t>(offsetof(TransitionalRenderer_t417C5BDB13977F6209462DBA455A7E2BE95B61F5, ___fadeTweener_8)); }
	inline Tweener_1_t5C52F0334BD85212FC4F13C1F7A15BEB546D885C * get_fadeTweener_8() const { return ___fadeTweener_8; }
	inline Tweener_1_t5C52F0334BD85212FC4F13C1F7A15BEB546D885C ** get_address_of_fadeTweener_8() { return &___fadeTweener_8; }
	inline void set_fadeTweener_8(Tweener_1_t5C52F0334BD85212FC4F13C1F7A15BEB546D885C * value)
	{
		___fadeTweener_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fadeTweener_8), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.UI.Graphic
struct  Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// Naninovel.ScriptableUIBehaviour
struct  ScriptableUIBehaviour_t11120E4497DF97E03149961784A67C0EC59DBDF6  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Action`1<System.Boolean> Naninovel.ScriptableUIBehaviour::OnVisibilityChanged
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___OnVisibilityChanged_4;
	// UnityEngine.CanvasGroup Naninovel.ScriptableUIBehaviour::<CanvasGroup>k__BackingField
	CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * ___U3CCanvasGroupU3Ek__BackingField_6;
	// System.Boolean Naninovel.ScriptableUIBehaviour::disableInteraction
	bool ___disableInteraction_7;
	// System.Boolean Naninovel.ScriptableUIBehaviour::visibleOnAwake
	bool ___visibleOnAwake_8;
	// System.Boolean Naninovel.ScriptableUIBehaviour::controlOpacity
	bool ___controlOpacity_9;
	// System.Single Naninovel.ScriptableUIBehaviour::fadeTime
	float ___fadeTime_10;
	// System.Boolean Naninovel.ScriptableUIBehaviour::ignoreTimeScale
	bool ___ignoreTimeScale_11;
	// UnityEngine.GameObject Naninovel.ScriptableUIBehaviour::focusObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___focusObject_12;
	// Naninovel.ScriptableUIBehaviour/FocusMode Naninovel.ScriptableUIBehaviour::focusMode
	int32_t ___focusMode_13;
	// UnityEngine.Events.UnityEvent Naninovel.ScriptableUIBehaviour::onShow
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___onShow_14;
	// UnityEngine.Events.UnityEvent Naninovel.ScriptableUIBehaviour::onHide
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___onHide_15;
	// Naninovel.Tweener`1<Naninovel.FloatTween> Naninovel.ScriptableUIBehaviour::fadeTweener
	Tweener_1_t5C52F0334BD85212FC4F13C1F7A15BEB546D885C * ___fadeTweener_16;
	// UnityEngine.RectTransform Naninovel.ScriptableUIBehaviour::rectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___rectTransform_17;
	// UnityEngine.Canvas Naninovel.ScriptableUIBehaviour::topmostCanvasCache
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___topmostCanvasCache_18;
	// System.Boolean Naninovel.ScriptableUIBehaviour::visible
	bool ___visible_19;

public:
	inline static int32_t get_offset_of_OnVisibilityChanged_4() { return static_cast<int32_t>(offsetof(ScriptableUIBehaviour_t11120E4497DF97E03149961784A67C0EC59DBDF6, ___OnVisibilityChanged_4)); }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * get_OnVisibilityChanged_4() const { return ___OnVisibilityChanged_4; }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 ** get_address_of_OnVisibilityChanged_4() { return &___OnVisibilityChanged_4; }
	inline void set_OnVisibilityChanged_4(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * value)
	{
		___OnVisibilityChanged_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnVisibilityChanged_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCanvasGroupU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(ScriptableUIBehaviour_t11120E4497DF97E03149961784A67C0EC59DBDF6, ___U3CCanvasGroupU3Ek__BackingField_6)); }
	inline CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * get_U3CCanvasGroupU3Ek__BackingField_6() const { return ___U3CCanvasGroupU3Ek__BackingField_6; }
	inline CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F ** get_address_of_U3CCanvasGroupU3Ek__BackingField_6() { return &___U3CCanvasGroupU3Ek__BackingField_6; }
	inline void set_U3CCanvasGroupU3Ek__BackingField_6(CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * value)
	{
		___U3CCanvasGroupU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCanvasGroupU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_disableInteraction_7() { return static_cast<int32_t>(offsetof(ScriptableUIBehaviour_t11120E4497DF97E03149961784A67C0EC59DBDF6, ___disableInteraction_7)); }
	inline bool get_disableInteraction_7() const { return ___disableInteraction_7; }
	inline bool* get_address_of_disableInteraction_7() { return &___disableInteraction_7; }
	inline void set_disableInteraction_7(bool value)
	{
		___disableInteraction_7 = value;
	}

	inline static int32_t get_offset_of_visibleOnAwake_8() { return static_cast<int32_t>(offsetof(ScriptableUIBehaviour_t11120E4497DF97E03149961784A67C0EC59DBDF6, ___visibleOnAwake_8)); }
	inline bool get_visibleOnAwake_8() const { return ___visibleOnAwake_8; }
	inline bool* get_address_of_visibleOnAwake_8() { return &___visibleOnAwake_8; }
	inline void set_visibleOnAwake_8(bool value)
	{
		___visibleOnAwake_8 = value;
	}

	inline static int32_t get_offset_of_controlOpacity_9() { return static_cast<int32_t>(offsetof(ScriptableUIBehaviour_t11120E4497DF97E03149961784A67C0EC59DBDF6, ___controlOpacity_9)); }
	inline bool get_controlOpacity_9() const { return ___controlOpacity_9; }
	inline bool* get_address_of_controlOpacity_9() { return &___controlOpacity_9; }
	inline void set_controlOpacity_9(bool value)
	{
		___controlOpacity_9 = value;
	}

	inline static int32_t get_offset_of_fadeTime_10() { return static_cast<int32_t>(offsetof(ScriptableUIBehaviour_t11120E4497DF97E03149961784A67C0EC59DBDF6, ___fadeTime_10)); }
	inline float get_fadeTime_10() const { return ___fadeTime_10; }
	inline float* get_address_of_fadeTime_10() { return &___fadeTime_10; }
	inline void set_fadeTime_10(float value)
	{
		___fadeTime_10 = value;
	}

	inline static int32_t get_offset_of_ignoreTimeScale_11() { return static_cast<int32_t>(offsetof(ScriptableUIBehaviour_t11120E4497DF97E03149961784A67C0EC59DBDF6, ___ignoreTimeScale_11)); }
	inline bool get_ignoreTimeScale_11() const { return ___ignoreTimeScale_11; }
	inline bool* get_address_of_ignoreTimeScale_11() { return &___ignoreTimeScale_11; }
	inline void set_ignoreTimeScale_11(bool value)
	{
		___ignoreTimeScale_11 = value;
	}

	inline static int32_t get_offset_of_focusObject_12() { return static_cast<int32_t>(offsetof(ScriptableUIBehaviour_t11120E4497DF97E03149961784A67C0EC59DBDF6, ___focusObject_12)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_focusObject_12() const { return ___focusObject_12; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_focusObject_12() { return &___focusObject_12; }
	inline void set_focusObject_12(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___focusObject_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___focusObject_12), (void*)value);
	}

	inline static int32_t get_offset_of_focusMode_13() { return static_cast<int32_t>(offsetof(ScriptableUIBehaviour_t11120E4497DF97E03149961784A67C0EC59DBDF6, ___focusMode_13)); }
	inline int32_t get_focusMode_13() const { return ___focusMode_13; }
	inline int32_t* get_address_of_focusMode_13() { return &___focusMode_13; }
	inline void set_focusMode_13(int32_t value)
	{
		___focusMode_13 = value;
	}

	inline static int32_t get_offset_of_onShow_14() { return static_cast<int32_t>(offsetof(ScriptableUIBehaviour_t11120E4497DF97E03149961784A67C0EC59DBDF6, ___onShow_14)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_onShow_14() const { return ___onShow_14; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_onShow_14() { return &___onShow_14; }
	inline void set_onShow_14(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___onShow_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onShow_14), (void*)value);
	}

	inline static int32_t get_offset_of_onHide_15() { return static_cast<int32_t>(offsetof(ScriptableUIBehaviour_t11120E4497DF97E03149961784A67C0EC59DBDF6, ___onHide_15)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_onHide_15() const { return ___onHide_15; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_onHide_15() { return &___onHide_15; }
	inline void set_onHide_15(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___onHide_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onHide_15), (void*)value);
	}

	inline static int32_t get_offset_of_fadeTweener_16() { return static_cast<int32_t>(offsetof(ScriptableUIBehaviour_t11120E4497DF97E03149961784A67C0EC59DBDF6, ___fadeTweener_16)); }
	inline Tweener_1_t5C52F0334BD85212FC4F13C1F7A15BEB546D885C * get_fadeTweener_16() const { return ___fadeTweener_16; }
	inline Tweener_1_t5C52F0334BD85212FC4F13C1F7A15BEB546D885C ** get_address_of_fadeTweener_16() { return &___fadeTweener_16; }
	inline void set_fadeTweener_16(Tweener_1_t5C52F0334BD85212FC4F13C1F7A15BEB546D885C * value)
	{
		___fadeTweener_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fadeTweener_16), (void*)value);
	}

	inline static int32_t get_offset_of_rectTransform_17() { return static_cast<int32_t>(offsetof(ScriptableUIBehaviour_t11120E4497DF97E03149961784A67C0EC59DBDF6, ___rectTransform_17)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_rectTransform_17() const { return ___rectTransform_17; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_rectTransform_17() { return &___rectTransform_17; }
	inline void set_rectTransform_17(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___rectTransform_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rectTransform_17), (void*)value);
	}

	inline static int32_t get_offset_of_topmostCanvasCache_18() { return static_cast<int32_t>(offsetof(ScriptableUIBehaviour_t11120E4497DF97E03149961784A67C0EC59DBDF6, ___topmostCanvasCache_18)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_topmostCanvasCache_18() const { return ___topmostCanvasCache_18; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_topmostCanvasCache_18() { return &___topmostCanvasCache_18; }
	inline void set_topmostCanvasCache_18(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___topmostCanvasCache_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___topmostCanvasCache_18), (void*)value);
	}

	inline static int32_t get_offset_of_visible_19() { return static_cast<int32_t>(offsetof(ScriptableUIBehaviour_t11120E4497DF97E03149961784A67C0EC59DBDF6, ___visible_19)); }
	inline bool get_visible_19() const { return ___visible_19; }
	inline bool* get_address_of_visible_19() { return &___visible_19; }
	inline void set_visible_19(bool value)
	{
		___visible_19 = value;
	}
};

struct ScriptableUIBehaviour_t11120E4497DF97E03149961784A67C0EC59DBDF6_StaticFields
{
public:
	// UnityEngine.GameObject Naninovel.ScriptableUIBehaviour::<FocusOnNavigation>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CFocusOnNavigationU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CFocusOnNavigationU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ScriptableUIBehaviour_t11120E4497DF97E03149961784A67C0EC59DBDF6_StaticFields, ___U3CFocusOnNavigationU3Ek__BackingField_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CFocusOnNavigationU3Ek__BackingField_5() const { return ___U3CFocusOnNavigationU3Ek__BackingField_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CFocusOnNavigationU3Ek__BackingField_5() { return &___U3CFocusOnNavigationU3Ek__BackingField_5; }
	inline void set_U3CFocusOnNavigationU3Ek__BackingField_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CFocusOnNavigationU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CFocusOnNavigationU3Ek__BackingField_5), (void*)value);
	}
};


// UnityEngine.UI.Selectable
struct  Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_EnableCalled_6() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_EnableCalled_6)); }
	inline bool get_m_EnableCalled_6() const { return ___m_EnableCalled_6; }
	inline bool* get_address_of_m_EnableCalled_6() { return &___m_EnableCalled_6; }
	inline void set_m_EnableCalled_6(bool value)
	{
		___m_EnableCalled_6 = value;
	}

	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Navigation_7)); }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_5), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Colors_9)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_SpriteState_10)); }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  value)
	{
		___m_SpriteState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_TargetGraphic_13)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_15() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CurrentIndex_15)); }
	inline int32_t get_m_CurrentIndex_15() const { return ___m_CurrentIndex_15; }
	inline int32_t* get_address_of_m_CurrentIndex_15() { return &___m_CurrentIndex_15; }
	inline void set_m_CurrentIndex_15(int32_t value)
	{
		___m_CurrentIndex_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CanvasGroupCache_19)); }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};

struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}
};


// Naninovel.TransitionalSpriteRenderer
struct  TransitionalSpriteRenderer_tFE7D599199337543C9BDFDEC0F355DCA6EAE33AF  : public TransitionalRenderer_t417C5BDB13977F6209462DBA455A7E2BE95B61F5
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Vector3> Naninovel.TransitionalSpriteRenderer::vertices
	List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___vertices_9;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> Naninovel.TransitionalSpriteRenderer::mainUVs
	List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * ___mainUVs_10;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> Naninovel.TransitionalSpriteRenderer::transitionUVs
	List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * ___transitionUVs_11;
	// System.Collections.Generic.List`1<System.Int32> Naninovel.TransitionalSpriteRenderer::triangles
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___triangles_12;
	// UnityEngine.MeshFilter Naninovel.TransitionalSpriteRenderer::meshFilter
	MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * ___meshFilter_13;
	// UnityEngine.MeshRenderer Naninovel.TransitionalSpriteRenderer::meshRenderer
	MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * ___meshRenderer_14;
	// UnityEngine.Vector2 Naninovel.TransitionalSpriteRenderer::pivot
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___pivot_15;
	// System.Int32 Naninovel.TransitionalSpriteRenderer::pixelsPerUnit
	int32_t ___pixelsPerUnit_16;

public:
	inline static int32_t get_offset_of_vertices_9() { return static_cast<int32_t>(offsetof(TransitionalSpriteRenderer_tFE7D599199337543C9BDFDEC0F355DCA6EAE33AF, ___vertices_9)); }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * get_vertices_9() const { return ___vertices_9; }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 ** get_address_of_vertices_9() { return &___vertices_9; }
	inline void set_vertices_9(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * value)
	{
		___vertices_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vertices_9), (void*)value);
	}

	inline static int32_t get_offset_of_mainUVs_10() { return static_cast<int32_t>(offsetof(TransitionalSpriteRenderer_tFE7D599199337543C9BDFDEC0F355DCA6EAE33AF, ___mainUVs_10)); }
	inline List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * get_mainUVs_10() const { return ___mainUVs_10; }
	inline List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 ** get_address_of_mainUVs_10() { return &___mainUVs_10; }
	inline void set_mainUVs_10(List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * value)
	{
		___mainUVs_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mainUVs_10), (void*)value);
	}

	inline static int32_t get_offset_of_transitionUVs_11() { return static_cast<int32_t>(offsetof(TransitionalSpriteRenderer_tFE7D599199337543C9BDFDEC0F355DCA6EAE33AF, ___transitionUVs_11)); }
	inline List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * get_transitionUVs_11() const { return ___transitionUVs_11; }
	inline List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 ** get_address_of_transitionUVs_11() { return &___transitionUVs_11; }
	inline void set_transitionUVs_11(List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * value)
	{
		___transitionUVs_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___transitionUVs_11), (void*)value);
	}

	inline static int32_t get_offset_of_triangles_12() { return static_cast<int32_t>(offsetof(TransitionalSpriteRenderer_tFE7D599199337543C9BDFDEC0F355DCA6EAE33AF, ___triangles_12)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get_triangles_12() const { return ___triangles_12; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of_triangles_12() { return &___triangles_12; }
	inline void set_triangles_12(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		___triangles_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___triangles_12), (void*)value);
	}

	inline static int32_t get_offset_of_meshFilter_13() { return static_cast<int32_t>(offsetof(TransitionalSpriteRenderer_tFE7D599199337543C9BDFDEC0F355DCA6EAE33AF, ___meshFilter_13)); }
	inline MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * get_meshFilter_13() const { return ___meshFilter_13; }
	inline MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A ** get_address_of_meshFilter_13() { return &___meshFilter_13; }
	inline void set_meshFilter_13(MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * value)
	{
		___meshFilter_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshFilter_13), (void*)value);
	}

	inline static int32_t get_offset_of_meshRenderer_14() { return static_cast<int32_t>(offsetof(TransitionalSpriteRenderer_tFE7D599199337543C9BDFDEC0F355DCA6EAE33AF, ___meshRenderer_14)); }
	inline MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * get_meshRenderer_14() const { return ___meshRenderer_14; }
	inline MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B ** get_address_of_meshRenderer_14() { return &___meshRenderer_14; }
	inline void set_meshRenderer_14(MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * value)
	{
		___meshRenderer_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshRenderer_14), (void*)value);
	}

	inline static int32_t get_offset_of_pivot_15() { return static_cast<int32_t>(offsetof(TransitionalSpriteRenderer_tFE7D599199337543C9BDFDEC0F355DCA6EAE33AF, ___pivot_15)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_pivot_15() const { return ___pivot_15; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_pivot_15() { return &___pivot_15; }
	inline void set_pivot_15(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___pivot_15 = value;
	}

	inline static int32_t get_offset_of_pixelsPerUnit_16() { return static_cast<int32_t>(offsetof(TransitionalSpriteRenderer_tFE7D599199337543C9BDFDEC0F355DCA6EAE33AF, ___pixelsPerUnit_16)); }
	inline int32_t get_pixelsPerUnit_16() const { return ___pixelsPerUnit_16; }
	inline int32_t* get_address_of_pixelsPerUnit_16() { return &___pixelsPerUnit_16; }
	inline void set_pixelsPerUnit_16(int32_t value)
	{
		___pixelsPerUnit_16 = value;
	}
};


// Naninovel.TransitionalTextureRenderer
struct  TransitionalTextureRenderer_t230F9601A1BB9348394D1BE5E3485FBC441650C9  : public TransitionalRenderer_t417C5BDB13977F6209462DBA455A7E2BE95B61F5
{
public:
	// UnityEngine.RenderTexture Naninovel.TransitionalTextureRenderer::<RenderTexture>k__BackingField
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___U3CRenderTextureU3Ek__BackingField_9;
	// System.Boolean Naninovel.TransitionalTextureRenderer::<CorrectAspect>k__BackingField
	bool ___U3CCorrectAspectU3Ek__BackingField_10;
	// System.Boolean Naninovel.TransitionalTextureRenderer::<FlipX>k__BackingField
	bool ___U3CFlipXU3Ek__BackingField_11;
	// System.Boolean Naninovel.TransitionalTextureRenderer::<FlipY>k__BackingField
	bool ___U3CFlipYU3Ek__BackingField_12;
	// System.Single Naninovel.TransitionalTextureRenderer::opacityLastFrame
	float ___opacityLastFrame_13;

public:
	inline static int32_t get_offset_of_U3CRenderTextureU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(TransitionalTextureRenderer_t230F9601A1BB9348394D1BE5E3485FBC441650C9, ___U3CRenderTextureU3Ek__BackingField_9)); }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * get_U3CRenderTextureU3Ek__BackingField_9() const { return ___U3CRenderTextureU3Ek__BackingField_9; }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 ** get_address_of_U3CRenderTextureU3Ek__BackingField_9() { return &___U3CRenderTextureU3Ek__BackingField_9; }
	inline void set_U3CRenderTextureU3Ek__BackingField_9(RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * value)
	{
		___U3CRenderTextureU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRenderTextureU3Ek__BackingField_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCorrectAspectU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(TransitionalTextureRenderer_t230F9601A1BB9348394D1BE5E3485FBC441650C9, ___U3CCorrectAspectU3Ek__BackingField_10)); }
	inline bool get_U3CCorrectAspectU3Ek__BackingField_10() const { return ___U3CCorrectAspectU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CCorrectAspectU3Ek__BackingField_10() { return &___U3CCorrectAspectU3Ek__BackingField_10; }
	inline void set_U3CCorrectAspectU3Ek__BackingField_10(bool value)
	{
		___U3CCorrectAspectU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CFlipXU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(TransitionalTextureRenderer_t230F9601A1BB9348394D1BE5E3485FBC441650C9, ___U3CFlipXU3Ek__BackingField_11)); }
	inline bool get_U3CFlipXU3Ek__BackingField_11() const { return ___U3CFlipXU3Ek__BackingField_11; }
	inline bool* get_address_of_U3CFlipXU3Ek__BackingField_11() { return &___U3CFlipXU3Ek__BackingField_11; }
	inline void set_U3CFlipXU3Ek__BackingField_11(bool value)
	{
		___U3CFlipXU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CFlipYU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(TransitionalTextureRenderer_t230F9601A1BB9348394D1BE5E3485FBC441650C9, ___U3CFlipYU3Ek__BackingField_12)); }
	inline bool get_U3CFlipYU3Ek__BackingField_12() const { return ___U3CFlipYU3Ek__BackingField_12; }
	inline bool* get_address_of_U3CFlipYU3Ek__BackingField_12() { return &___U3CFlipYU3Ek__BackingField_12; }
	inline void set_U3CFlipYU3Ek__BackingField_12(bool value)
	{
		___U3CFlipYU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_opacityLastFrame_13() { return static_cast<int32_t>(offsetof(TransitionalTextureRenderer_t230F9601A1BB9348394D1BE5E3485FBC441650C9, ___opacityLastFrame_13)); }
	inline float get_opacityLastFrame_13() const { return ___opacityLastFrame_13; }
	inline float* get_address_of_opacityLastFrame_13() { return &___opacityLastFrame_13; }
	inline void set_opacityLastFrame_13(float value)
	{
		___opacityLastFrame_13 = value;
	}
};


// Naninovel.UI.CustomUI
struct  CustomUI_t2922947F83AE95088BBC4DC10DC13766B4C0DF5C  : public ScriptableUIBehaviour_t11120E4497DF97E03149961784A67C0EC59DBDF6
{
public:
	// System.Boolean Naninovel.UI.CustomUI::hideOnLoad
	bool ___hideOnLoad_20;
	// System.Boolean Naninovel.UI.CustomUI::saveVisibilityState
	bool ___saveVisibilityState_21;
	// System.Boolean Naninovel.UI.CustomUI::blockInputWhenVisible
	bool ___blockInputWhenVisible_22;
	// System.String[] Naninovel.UI.CustomUI::allowedSamplers
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___allowedSamplers_23;
	// System.Boolean Naninovel.UI.CustomUI::modalUI
	bool ___modalUI_24;
	// System.Collections.Generic.List`1<Naninovel.UI.CustomUI/FontChangeConfiguration> Naninovel.UI.CustomUI::fontChangeConfiguration
	List_1_t9B593929C7B0BBCE36D7376AC45D5F416CCD97CC * ___fontChangeConfiguration_25;
	// Naninovel.IStateManager Naninovel.UI.CustomUI::stateManager
	RuntimeObject* ___stateManager_26;
	// Naninovel.IInputManager Naninovel.UI.CustomUI::inputManager
	RuntimeObject* ___inputManager_27;
	// Naninovel.IUIManager Naninovel.UI.CustomUI::uiManager
	RuntimeObject* ___uiManager_28;
	// Naninovel.IScriptPlayer Naninovel.UI.CustomUI::scriptPlayer
	RuntimeObject* ___scriptPlayer_29;

public:
	inline static int32_t get_offset_of_hideOnLoad_20() { return static_cast<int32_t>(offsetof(CustomUI_t2922947F83AE95088BBC4DC10DC13766B4C0DF5C, ___hideOnLoad_20)); }
	inline bool get_hideOnLoad_20() const { return ___hideOnLoad_20; }
	inline bool* get_address_of_hideOnLoad_20() { return &___hideOnLoad_20; }
	inline void set_hideOnLoad_20(bool value)
	{
		___hideOnLoad_20 = value;
	}

	inline static int32_t get_offset_of_saveVisibilityState_21() { return static_cast<int32_t>(offsetof(CustomUI_t2922947F83AE95088BBC4DC10DC13766B4C0DF5C, ___saveVisibilityState_21)); }
	inline bool get_saveVisibilityState_21() const { return ___saveVisibilityState_21; }
	inline bool* get_address_of_saveVisibilityState_21() { return &___saveVisibilityState_21; }
	inline void set_saveVisibilityState_21(bool value)
	{
		___saveVisibilityState_21 = value;
	}

	inline static int32_t get_offset_of_blockInputWhenVisible_22() { return static_cast<int32_t>(offsetof(CustomUI_t2922947F83AE95088BBC4DC10DC13766B4C0DF5C, ___blockInputWhenVisible_22)); }
	inline bool get_blockInputWhenVisible_22() const { return ___blockInputWhenVisible_22; }
	inline bool* get_address_of_blockInputWhenVisible_22() { return &___blockInputWhenVisible_22; }
	inline void set_blockInputWhenVisible_22(bool value)
	{
		___blockInputWhenVisible_22 = value;
	}

	inline static int32_t get_offset_of_allowedSamplers_23() { return static_cast<int32_t>(offsetof(CustomUI_t2922947F83AE95088BBC4DC10DC13766B4C0DF5C, ___allowedSamplers_23)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_allowedSamplers_23() const { return ___allowedSamplers_23; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_allowedSamplers_23() { return &___allowedSamplers_23; }
	inline void set_allowedSamplers_23(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___allowedSamplers_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___allowedSamplers_23), (void*)value);
	}

	inline static int32_t get_offset_of_modalUI_24() { return static_cast<int32_t>(offsetof(CustomUI_t2922947F83AE95088BBC4DC10DC13766B4C0DF5C, ___modalUI_24)); }
	inline bool get_modalUI_24() const { return ___modalUI_24; }
	inline bool* get_address_of_modalUI_24() { return &___modalUI_24; }
	inline void set_modalUI_24(bool value)
	{
		___modalUI_24 = value;
	}

	inline static int32_t get_offset_of_fontChangeConfiguration_25() { return static_cast<int32_t>(offsetof(CustomUI_t2922947F83AE95088BBC4DC10DC13766B4C0DF5C, ___fontChangeConfiguration_25)); }
	inline List_1_t9B593929C7B0BBCE36D7376AC45D5F416CCD97CC * get_fontChangeConfiguration_25() const { return ___fontChangeConfiguration_25; }
	inline List_1_t9B593929C7B0BBCE36D7376AC45D5F416CCD97CC ** get_address_of_fontChangeConfiguration_25() { return &___fontChangeConfiguration_25; }
	inline void set_fontChangeConfiguration_25(List_1_t9B593929C7B0BBCE36D7376AC45D5F416CCD97CC * value)
	{
		___fontChangeConfiguration_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fontChangeConfiguration_25), (void*)value);
	}

	inline static int32_t get_offset_of_stateManager_26() { return static_cast<int32_t>(offsetof(CustomUI_t2922947F83AE95088BBC4DC10DC13766B4C0DF5C, ___stateManager_26)); }
	inline RuntimeObject* get_stateManager_26() const { return ___stateManager_26; }
	inline RuntimeObject** get_address_of_stateManager_26() { return &___stateManager_26; }
	inline void set_stateManager_26(RuntimeObject* value)
	{
		___stateManager_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stateManager_26), (void*)value);
	}

	inline static int32_t get_offset_of_inputManager_27() { return static_cast<int32_t>(offsetof(CustomUI_t2922947F83AE95088BBC4DC10DC13766B4C0DF5C, ___inputManager_27)); }
	inline RuntimeObject* get_inputManager_27() const { return ___inputManager_27; }
	inline RuntimeObject** get_address_of_inputManager_27() { return &___inputManager_27; }
	inline void set_inputManager_27(RuntimeObject* value)
	{
		___inputManager_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputManager_27), (void*)value);
	}

	inline static int32_t get_offset_of_uiManager_28() { return static_cast<int32_t>(offsetof(CustomUI_t2922947F83AE95088BBC4DC10DC13766B4C0DF5C, ___uiManager_28)); }
	inline RuntimeObject* get_uiManager_28() const { return ___uiManager_28; }
	inline RuntimeObject** get_address_of_uiManager_28() { return &___uiManager_28; }
	inline void set_uiManager_28(RuntimeObject* value)
	{
		___uiManager_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___uiManager_28), (void*)value);
	}

	inline static int32_t get_offset_of_scriptPlayer_29() { return static_cast<int32_t>(offsetof(CustomUI_t2922947F83AE95088BBC4DC10DC13766B4C0DF5C, ___scriptPlayer_29)); }
	inline RuntimeObject* get_scriptPlayer_29() const { return ___scriptPlayer_29; }
	inline RuntimeObject** get_address_of_scriptPlayer_29() { return &___scriptPlayer_29; }
	inline void set_scriptPlayer_29(RuntimeObject* value)
	{
		___scriptPlayer_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scriptPlayer_29), (void*)value);
	}
};


// UnityEngine.UI.InputField
struct  InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.TouchScreenKeyboard UnityEngine.UI.InputField::m_Keyboard
	TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E * ___m_Keyboard_20;
	// UnityEngine.UI.Text UnityEngine.UI.InputField::m_TextComponent
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___m_TextComponent_22;
	// UnityEngine.UI.Graphic UnityEngine.UI.InputField::m_Placeholder
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_Placeholder_23;
	// UnityEngine.UI.InputField/ContentType UnityEngine.UI.InputField::m_ContentType
	int32_t ___m_ContentType_24;
	// UnityEngine.UI.InputField/InputType UnityEngine.UI.InputField::m_InputType
	int32_t ___m_InputType_25;
	// System.Char UnityEngine.UI.InputField::m_AsteriskChar
	Il2CppChar ___m_AsteriskChar_26;
	// UnityEngine.TouchScreenKeyboardType UnityEngine.UI.InputField::m_KeyboardType
	int32_t ___m_KeyboardType_27;
	// UnityEngine.UI.InputField/LineType UnityEngine.UI.InputField::m_LineType
	int32_t ___m_LineType_28;
	// System.Boolean UnityEngine.UI.InputField::m_HideMobileInput
	bool ___m_HideMobileInput_29;
	// UnityEngine.UI.InputField/CharacterValidation UnityEngine.UI.InputField::m_CharacterValidation
	int32_t ___m_CharacterValidation_30;
	// System.Int32 UnityEngine.UI.InputField::m_CharacterLimit
	int32_t ___m_CharacterLimit_31;
	// UnityEngine.UI.InputField/SubmitEvent UnityEngine.UI.InputField::m_OnEndEdit
	SubmitEvent_t3FD30F627DF2ADEC87C0BE69EE632AAB99F3B8A9 * ___m_OnEndEdit_32;
	// UnityEngine.UI.InputField/OnChangeEvent UnityEngine.UI.InputField::m_OnValueChanged
	OnChangeEvent_t2E59014A56EA94168140F0585834954B40D716F7 * ___m_OnValueChanged_33;
	// UnityEngine.UI.InputField/OnValidateInput UnityEngine.UI.InputField::m_OnValidateInput
	OnValidateInput_t721D2C2A7710D113E4909B36D9893CC6B1C69B9F * ___m_OnValidateInput_34;
	// UnityEngine.Color UnityEngine.UI.InputField::m_CaretColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_CaretColor_35;
	// System.Boolean UnityEngine.UI.InputField::m_CustomCaretColor
	bool ___m_CustomCaretColor_36;
	// UnityEngine.Color UnityEngine.UI.InputField::m_SelectionColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectionColor_37;
	// System.String UnityEngine.UI.InputField::m_Text
	String_t* ___m_Text_38;
	// System.Single UnityEngine.UI.InputField::m_CaretBlinkRate
	float ___m_CaretBlinkRate_39;
	// System.Int32 UnityEngine.UI.InputField::m_CaretWidth
	int32_t ___m_CaretWidth_40;
	// System.Boolean UnityEngine.UI.InputField::m_ReadOnly
	bool ___m_ReadOnly_41;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateOnSelect
	bool ___m_ShouldActivateOnSelect_42;
	// System.Int32 UnityEngine.UI.InputField::m_CaretPosition
	int32_t ___m_CaretPosition_43;
	// System.Int32 UnityEngine.UI.InputField::m_CaretSelectPosition
	int32_t ___m_CaretSelectPosition_44;
	// UnityEngine.RectTransform UnityEngine.UI.InputField::caretRectTrans
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___caretRectTrans_45;
	// UnityEngine.UIVertex[] UnityEngine.UI.InputField::m_CursorVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_CursorVerts_46;
	// UnityEngine.TextGenerator UnityEngine.UI.InputField::m_InputTextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_InputTextCache_47;
	// UnityEngine.CanvasRenderer UnityEngine.UI.InputField::m_CachedInputRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CachedInputRenderer_48;
	// System.Boolean UnityEngine.UI.InputField::m_PreventFontCallback
	bool ___m_PreventFontCallback_49;
	// UnityEngine.Mesh UnityEngine.UI.InputField::m_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_Mesh_50;
	// System.Boolean UnityEngine.UI.InputField::m_AllowInput
	bool ___m_AllowInput_51;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateNextUpdate
	bool ___m_ShouldActivateNextUpdate_52;
	// System.Boolean UnityEngine.UI.InputField::m_UpdateDrag
	bool ___m_UpdateDrag_53;
	// System.Boolean UnityEngine.UI.InputField::m_DragPositionOutOfBounds
	bool ___m_DragPositionOutOfBounds_54;
	// System.Boolean UnityEngine.UI.InputField::m_CaretVisible
	bool ___m_CaretVisible_57;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_BlinkCoroutine
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ___m_BlinkCoroutine_58;
	// System.Single UnityEngine.UI.InputField::m_BlinkStartTime
	float ___m_BlinkStartTime_59;
	// System.Int32 UnityEngine.UI.InputField::m_DrawStart
	int32_t ___m_DrawStart_60;
	// System.Int32 UnityEngine.UI.InputField::m_DrawEnd
	int32_t ___m_DrawEnd_61;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_DragCoroutine
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ___m_DragCoroutine_62;
	// System.String UnityEngine.UI.InputField::m_OriginalText
	String_t* ___m_OriginalText_63;
	// System.Boolean UnityEngine.UI.InputField::m_WasCanceled
	bool ___m_WasCanceled_64;
	// System.Boolean UnityEngine.UI.InputField::m_HasDoneFocusTransition
	bool ___m_HasDoneFocusTransition_65;
	// UnityEngine.WaitForSecondsRealtime UnityEngine.UI.InputField::m_WaitForSecondsRealtime
	WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * ___m_WaitForSecondsRealtime_66;
	// System.Boolean UnityEngine.UI.InputField::m_TouchKeyboardAllowsInPlaceEditing
	bool ___m_TouchKeyboardAllowsInPlaceEditing_67;
	// UnityEngine.Event UnityEngine.UI.InputField::m_ProcessingEvent
	Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * ___m_ProcessingEvent_69;

public:
	inline static int32_t get_offset_of_m_Keyboard_20() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_Keyboard_20)); }
	inline TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E * get_m_Keyboard_20() const { return ___m_Keyboard_20; }
	inline TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E ** get_address_of_m_Keyboard_20() { return &___m_Keyboard_20; }
	inline void set_m_Keyboard_20(TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E * value)
	{
		___m_Keyboard_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Keyboard_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextComponent_22() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_TextComponent_22)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_m_TextComponent_22() const { return ___m_TextComponent_22; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_m_TextComponent_22() { return &___m_TextComponent_22; }
	inline void set_m_TextComponent_22(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___m_TextComponent_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextComponent_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_Placeholder_23() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_Placeholder_23)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_Placeholder_23() const { return ___m_Placeholder_23; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_Placeholder_23() { return &___m_Placeholder_23; }
	inline void set_m_Placeholder_23(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_Placeholder_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Placeholder_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ContentType_24() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_ContentType_24)); }
	inline int32_t get_m_ContentType_24() const { return ___m_ContentType_24; }
	inline int32_t* get_address_of_m_ContentType_24() { return &___m_ContentType_24; }
	inline void set_m_ContentType_24(int32_t value)
	{
		___m_ContentType_24 = value;
	}

	inline static int32_t get_offset_of_m_InputType_25() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_InputType_25)); }
	inline int32_t get_m_InputType_25() const { return ___m_InputType_25; }
	inline int32_t* get_address_of_m_InputType_25() { return &___m_InputType_25; }
	inline void set_m_InputType_25(int32_t value)
	{
		___m_InputType_25 = value;
	}

	inline static int32_t get_offset_of_m_AsteriskChar_26() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_AsteriskChar_26)); }
	inline Il2CppChar get_m_AsteriskChar_26() const { return ___m_AsteriskChar_26; }
	inline Il2CppChar* get_address_of_m_AsteriskChar_26() { return &___m_AsteriskChar_26; }
	inline void set_m_AsteriskChar_26(Il2CppChar value)
	{
		___m_AsteriskChar_26 = value;
	}

	inline static int32_t get_offset_of_m_KeyboardType_27() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_KeyboardType_27)); }
	inline int32_t get_m_KeyboardType_27() const { return ___m_KeyboardType_27; }
	inline int32_t* get_address_of_m_KeyboardType_27() { return &___m_KeyboardType_27; }
	inline void set_m_KeyboardType_27(int32_t value)
	{
		___m_KeyboardType_27 = value;
	}

	inline static int32_t get_offset_of_m_LineType_28() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_LineType_28)); }
	inline int32_t get_m_LineType_28() const { return ___m_LineType_28; }
	inline int32_t* get_address_of_m_LineType_28() { return &___m_LineType_28; }
	inline void set_m_LineType_28(int32_t value)
	{
		___m_LineType_28 = value;
	}

	inline static int32_t get_offset_of_m_HideMobileInput_29() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_HideMobileInput_29)); }
	inline bool get_m_HideMobileInput_29() const { return ___m_HideMobileInput_29; }
	inline bool* get_address_of_m_HideMobileInput_29() { return &___m_HideMobileInput_29; }
	inline void set_m_HideMobileInput_29(bool value)
	{
		___m_HideMobileInput_29 = value;
	}

	inline static int32_t get_offset_of_m_CharacterValidation_30() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CharacterValidation_30)); }
	inline int32_t get_m_CharacterValidation_30() const { return ___m_CharacterValidation_30; }
	inline int32_t* get_address_of_m_CharacterValidation_30() { return &___m_CharacterValidation_30; }
	inline void set_m_CharacterValidation_30(int32_t value)
	{
		___m_CharacterValidation_30 = value;
	}

	inline static int32_t get_offset_of_m_CharacterLimit_31() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CharacterLimit_31)); }
	inline int32_t get_m_CharacterLimit_31() const { return ___m_CharacterLimit_31; }
	inline int32_t* get_address_of_m_CharacterLimit_31() { return &___m_CharacterLimit_31; }
	inline void set_m_CharacterLimit_31(int32_t value)
	{
		___m_CharacterLimit_31 = value;
	}

	inline static int32_t get_offset_of_m_OnEndEdit_32() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_OnEndEdit_32)); }
	inline SubmitEvent_t3FD30F627DF2ADEC87C0BE69EE632AAB99F3B8A9 * get_m_OnEndEdit_32() const { return ___m_OnEndEdit_32; }
	inline SubmitEvent_t3FD30F627DF2ADEC87C0BE69EE632AAB99F3B8A9 ** get_address_of_m_OnEndEdit_32() { return &___m_OnEndEdit_32; }
	inline void set_m_OnEndEdit_32(SubmitEvent_t3FD30F627DF2ADEC87C0BE69EE632AAB99F3B8A9 * value)
	{
		___m_OnEndEdit_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnEndEdit_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnValueChanged_33() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_OnValueChanged_33)); }
	inline OnChangeEvent_t2E59014A56EA94168140F0585834954B40D716F7 * get_m_OnValueChanged_33() const { return ___m_OnValueChanged_33; }
	inline OnChangeEvent_t2E59014A56EA94168140F0585834954B40D716F7 ** get_address_of_m_OnValueChanged_33() { return &___m_OnValueChanged_33; }
	inline void set_m_OnValueChanged_33(OnChangeEvent_t2E59014A56EA94168140F0585834954B40D716F7 * value)
	{
		___m_OnValueChanged_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValueChanged_33), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnValidateInput_34() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_OnValidateInput_34)); }
	inline OnValidateInput_t721D2C2A7710D113E4909B36D9893CC6B1C69B9F * get_m_OnValidateInput_34() const { return ___m_OnValidateInput_34; }
	inline OnValidateInput_t721D2C2A7710D113E4909B36D9893CC6B1C69B9F ** get_address_of_m_OnValidateInput_34() { return &___m_OnValidateInput_34; }
	inline void set_m_OnValidateInput_34(OnValidateInput_t721D2C2A7710D113E4909B36D9893CC6B1C69B9F * value)
	{
		___m_OnValidateInput_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValidateInput_34), (void*)value);
	}

	inline static int32_t get_offset_of_m_CaretColor_35() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CaretColor_35)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_CaretColor_35() const { return ___m_CaretColor_35; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_CaretColor_35() { return &___m_CaretColor_35; }
	inline void set_m_CaretColor_35(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_CaretColor_35 = value;
	}

	inline static int32_t get_offset_of_m_CustomCaretColor_36() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CustomCaretColor_36)); }
	inline bool get_m_CustomCaretColor_36() const { return ___m_CustomCaretColor_36; }
	inline bool* get_address_of_m_CustomCaretColor_36() { return &___m_CustomCaretColor_36; }
	inline void set_m_CustomCaretColor_36(bool value)
	{
		___m_CustomCaretColor_36 = value;
	}

	inline static int32_t get_offset_of_m_SelectionColor_37() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_SelectionColor_37)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectionColor_37() const { return ___m_SelectionColor_37; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectionColor_37() { return &___m_SelectionColor_37; }
	inline void set_m_SelectionColor_37(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectionColor_37 = value;
	}

	inline static int32_t get_offset_of_m_Text_38() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_Text_38)); }
	inline String_t* get_m_Text_38() const { return ___m_Text_38; }
	inline String_t** get_address_of_m_Text_38() { return &___m_Text_38; }
	inline void set_m_Text_38(String_t* value)
	{
		___m_Text_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_CaretBlinkRate_39() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CaretBlinkRate_39)); }
	inline float get_m_CaretBlinkRate_39() const { return ___m_CaretBlinkRate_39; }
	inline float* get_address_of_m_CaretBlinkRate_39() { return &___m_CaretBlinkRate_39; }
	inline void set_m_CaretBlinkRate_39(float value)
	{
		___m_CaretBlinkRate_39 = value;
	}

	inline static int32_t get_offset_of_m_CaretWidth_40() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CaretWidth_40)); }
	inline int32_t get_m_CaretWidth_40() const { return ___m_CaretWidth_40; }
	inline int32_t* get_address_of_m_CaretWidth_40() { return &___m_CaretWidth_40; }
	inline void set_m_CaretWidth_40(int32_t value)
	{
		___m_CaretWidth_40 = value;
	}

	inline static int32_t get_offset_of_m_ReadOnly_41() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_ReadOnly_41)); }
	inline bool get_m_ReadOnly_41() const { return ___m_ReadOnly_41; }
	inline bool* get_address_of_m_ReadOnly_41() { return &___m_ReadOnly_41; }
	inline void set_m_ReadOnly_41(bool value)
	{
		___m_ReadOnly_41 = value;
	}

	inline static int32_t get_offset_of_m_ShouldActivateOnSelect_42() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_ShouldActivateOnSelect_42)); }
	inline bool get_m_ShouldActivateOnSelect_42() const { return ___m_ShouldActivateOnSelect_42; }
	inline bool* get_address_of_m_ShouldActivateOnSelect_42() { return &___m_ShouldActivateOnSelect_42; }
	inline void set_m_ShouldActivateOnSelect_42(bool value)
	{
		___m_ShouldActivateOnSelect_42 = value;
	}

	inline static int32_t get_offset_of_m_CaretPosition_43() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CaretPosition_43)); }
	inline int32_t get_m_CaretPosition_43() const { return ___m_CaretPosition_43; }
	inline int32_t* get_address_of_m_CaretPosition_43() { return &___m_CaretPosition_43; }
	inline void set_m_CaretPosition_43(int32_t value)
	{
		___m_CaretPosition_43 = value;
	}

	inline static int32_t get_offset_of_m_CaretSelectPosition_44() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CaretSelectPosition_44)); }
	inline int32_t get_m_CaretSelectPosition_44() const { return ___m_CaretSelectPosition_44; }
	inline int32_t* get_address_of_m_CaretSelectPosition_44() { return &___m_CaretSelectPosition_44; }
	inline void set_m_CaretSelectPosition_44(int32_t value)
	{
		___m_CaretSelectPosition_44 = value;
	}

	inline static int32_t get_offset_of_caretRectTrans_45() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___caretRectTrans_45)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_caretRectTrans_45() const { return ___caretRectTrans_45; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_caretRectTrans_45() { return &___caretRectTrans_45; }
	inline void set_caretRectTrans_45(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___caretRectTrans_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___caretRectTrans_45), (void*)value);
	}

	inline static int32_t get_offset_of_m_CursorVerts_46() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CursorVerts_46)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_CursorVerts_46() const { return ___m_CursorVerts_46; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_CursorVerts_46() { return &___m_CursorVerts_46; }
	inline void set_m_CursorVerts_46(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_CursorVerts_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CursorVerts_46), (void*)value);
	}

	inline static int32_t get_offset_of_m_InputTextCache_47() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_InputTextCache_47)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_InputTextCache_47() const { return ___m_InputTextCache_47; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_InputTextCache_47() { return &___m_InputTextCache_47; }
	inline void set_m_InputTextCache_47(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_InputTextCache_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InputTextCache_47), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedInputRenderer_48() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CachedInputRenderer_48)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CachedInputRenderer_48() const { return ___m_CachedInputRenderer_48; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CachedInputRenderer_48() { return &___m_CachedInputRenderer_48; }
	inline void set_m_CachedInputRenderer_48(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CachedInputRenderer_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedInputRenderer_48), (void*)value);
	}

	inline static int32_t get_offset_of_m_PreventFontCallback_49() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_PreventFontCallback_49)); }
	inline bool get_m_PreventFontCallback_49() const { return ___m_PreventFontCallback_49; }
	inline bool* get_address_of_m_PreventFontCallback_49() { return &___m_PreventFontCallback_49; }
	inline void set_m_PreventFontCallback_49(bool value)
	{
		___m_PreventFontCallback_49 = value;
	}

	inline static int32_t get_offset_of_m_Mesh_50() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_Mesh_50)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_Mesh_50() const { return ___m_Mesh_50; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_Mesh_50() { return &___m_Mesh_50; }
	inline void set_m_Mesh_50(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_Mesh_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Mesh_50), (void*)value);
	}

	inline static int32_t get_offset_of_m_AllowInput_51() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_AllowInput_51)); }
	inline bool get_m_AllowInput_51() const { return ___m_AllowInput_51; }
	inline bool* get_address_of_m_AllowInput_51() { return &___m_AllowInput_51; }
	inline void set_m_AllowInput_51(bool value)
	{
		___m_AllowInput_51 = value;
	}

	inline static int32_t get_offset_of_m_ShouldActivateNextUpdate_52() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_ShouldActivateNextUpdate_52)); }
	inline bool get_m_ShouldActivateNextUpdate_52() const { return ___m_ShouldActivateNextUpdate_52; }
	inline bool* get_address_of_m_ShouldActivateNextUpdate_52() { return &___m_ShouldActivateNextUpdate_52; }
	inline void set_m_ShouldActivateNextUpdate_52(bool value)
	{
		___m_ShouldActivateNextUpdate_52 = value;
	}

	inline static int32_t get_offset_of_m_UpdateDrag_53() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_UpdateDrag_53)); }
	inline bool get_m_UpdateDrag_53() const { return ___m_UpdateDrag_53; }
	inline bool* get_address_of_m_UpdateDrag_53() { return &___m_UpdateDrag_53; }
	inline void set_m_UpdateDrag_53(bool value)
	{
		___m_UpdateDrag_53 = value;
	}

	inline static int32_t get_offset_of_m_DragPositionOutOfBounds_54() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_DragPositionOutOfBounds_54)); }
	inline bool get_m_DragPositionOutOfBounds_54() const { return ___m_DragPositionOutOfBounds_54; }
	inline bool* get_address_of_m_DragPositionOutOfBounds_54() { return &___m_DragPositionOutOfBounds_54; }
	inline void set_m_DragPositionOutOfBounds_54(bool value)
	{
		___m_DragPositionOutOfBounds_54 = value;
	}

	inline static int32_t get_offset_of_m_CaretVisible_57() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CaretVisible_57)); }
	inline bool get_m_CaretVisible_57() const { return ___m_CaretVisible_57; }
	inline bool* get_address_of_m_CaretVisible_57() { return &___m_CaretVisible_57; }
	inline void set_m_CaretVisible_57(bool value)
	{
		___m_CaretVisible_57 = value;
	}

	inline static int32_t get_offset_of_m_BlinkCoroutine_58() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_BlinkCoroutine_58)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get_m_BlinkCoroutine_58() const { return ___m_BlinkCoroutine_58; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of_m_BlinkCoroutine_58() { return &___m_BlinkCoroutine_58; }
	inline void set_m_BlinkCoroutine_58(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		___m_BlinkCoroutine_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BlinkCoroutine_58), (void*)value);
	}

	inline static int32_t get_offset_of_m_BlinkStartTime_59() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_BlinkStartTime_59)); }
	inline float get_m_BlinkStartTime_59() const { return ___m_BlinkStartTime_59; }
	inline float* get_address_of_m_BlinkStartTime_59() { return &___m_BlinkStartTime_59; }
	inline void set_m_BlinkStartTime_59(float value)
	{
		___m_BlinkStartTime_59 = value;
	}

	inline static int32_t get_offset_of_m_DrawStart_60() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_DrawStart_60)); }
	inline int32_t get_m_DrawStart_60() const { return ___m_DrawStart_60; }
	inline int32_t* get_address_of_m_DrawStart_60() { return &___m_DrawStart_60; }
	inline void set_m_DrawStart_60(int32_t value)
	{
		___m_DrawStart_60 = value;
	}

	inline static int32_t get_offset_of_m_DrawEnd_61() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_DrawEnd_61)); }
	inline int32_t get_m_DrawEnd_61() const { return ___m_DrawEnd_61; }
	inline int32_t* get_address_of_m_DrawEnd_61() { return &___m_DrawEnd_61; }
	inline void set_m_DrawEnd_61(int32_t value)
	{
		___m_DrawEnd_61 = value;
	}

	inline static int32_t get_offset_of_m_DragCoroutine_62() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_DragCoroutine_62)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get_m_DragCoroutine_62() const { return ___m_DragCoroutine_62; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of_m_DragCoroutine_62() { return &___m_DragCoroutine_62; }
	inline void set_m_DragCoroutine_62(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		___m_DragCoroutine_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DragCoroutine_62), (void*)value);
	}

	inline static int32_t get_offset_of_m_OriginalText_63() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_OriginalText_63)); }
	inline String_t* get_m_OriginalText_63() const { return ___m_OriginalText_63; }
	inline String_t** get_address_of_m_OriginalText_63() { return &___m_OriginalText_63; }
	inline void set_m_OriginalText_63(String_t* value)
	{
		___m_OriginalText_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OriginalText_63), (void*)value);
	}

	inline static int32_t get_offset_of_m_WasCanceled_64() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_WasCanceled_64)); }
	inline bool get_m_WasCanceled_64() const { return ___m_WasCanceled_64; }
	inline bool* get_address_of_m_WasCanceled_64() { return &___m_WasCanceled_64; }
	inline void set_m_WasCanceled_64(bool value)
	{
		___m_WasCanceled_64 = value;
	}

	inline static int32_t get_offset_of_m_HasDoneFocusTransition_65() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_HasDoneFocusTransition_65)); }
	inline bool get_m_HasDoneFocusTransition_65() const { return ___m_HasDoneFocusTransition_65; }
	inline bool* get_address_of_m_HasDoneFocusTransition_65() { return &___m_HasDoneFocusTransition_65; }
	inline void set_m_HasDoneFocusTransition_65(bool value)
	{
		___m_HasDoneFocusTransition_65 = value;
	}

	inline static int32_t get_offset_of_m_WaitForSecondsRealtime_66() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_WaitForSecondsRealtime_66)); }
	inline WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * get_m_WaitForSecondsRealtime_66() const { return ___m_WaitForSecondsRealtime_66; }
	inline WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 ** get_address_of_m_WaitForSecondsRealtime_66() { return &___m_WaitForSecondsRealtime_66; }
	inline void set_m_WaitForSecondsRealtime_66(WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * value)
	{
		___m_WaitForSecondsRealtime_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_WaitForSecondsRealtime_66), (void*)value);
	}

	inline static int32_t get_offset_of_m_TouchKeyboardAllowsInPlaceEditing_67() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_TouchKeyboardAllowsInPlaceEditing_67)); }
	inline bool get_m_TouchKeyboardAllowsInPlaceEditing_67() const { return ___m_TouchKeyboardAllowsInPlaceEditing_67; }
	inline bool* get_address_of_m_TouchKeyboardAllowsInPlaceEditing_67() { return &___m_TouchKeyboardAllowsInPlaceEditing_67; }
	inline void set_m_TouchKeyboardAllowsInPlaceEditing_67(bool value)
	{
		___m_TouchKeyboardAllowsInPlaceEditing_67 = value;
	}

	inline static int32_t get_offset_of_m_ProcessingEvent_69() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_ProcessingEvent_69)); }
	inline Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * get_m_ProcessingEvent_69() const { return ___m_ProcessingEvent_69; }
	inline Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E ** get_address_of_m_ProcessingEvent_69() { return &___m_ProcessingEvent_69; }
	inline void set_m_ProcessingEvent_69(Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * value)
	{
		___m_ProcessingEvent_69 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ProcessingEvent_69), (void*)value);
	}
};

struct InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0_StaticFields
{
public:
	// System.Char[] UnityEngine.UI.InputField::kSeparators
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___kSeparators_21;

public:
	inline static int32_t get_offset_of_kSeparators_21() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0_StaticFields, ___kSeparators_21)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_kSeparators_21() const { return ___kSeparators_21; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_kSeparators_21() { return &___kSeparators_21; }
	inline void set_kSeparators_21(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___kSeparators_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___kSeparators_21), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Text
struct  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};


// Naninovel.UI.UITextPrinterPanel
struct  UITextPrinterPanel_t332EC95C8F0F49BC7A8420ED5F3BA2CC8D1BF60F  : public CustomUI_t2922947F83AE95088BBC4DC10DC13766B4C0DF5C
{
public:
	// Naninovel.ICharacterManager Naninovel.UI.UITextPrinterPanel::<CharacterManager>k__BackingField
	RuntimeObject* ___U3CCharacterManagerU3Ek__BackingField_30;
	// UnityEngine.RectTransform Naninovel.UI.UITextPrinterPanel::content
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___content_31;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Naninovel.UI.UITextPrinterPanel::continueInputTriggers
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___continueInputTriggers_32;
	// Naninovel.IInputSampler Naninovel.UI.UITextPrinterPanel::continueInput
	RuntimeObject* ___continueInput_33;
	// Naninovel.IScriptPlayer Naninovel.UI.UITextPrinterPanel::scriptPlayer
	RuntimeObject* ___scriptPlayer_34;

public:
	inline static int32_t get_offset_of_U3CCharacterManagerU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(UITextPrinterPanel_t332EC95C8F0F49BC7A8420ED5F3BA2CC8D1BF60F, ___U3CCharacterManagerU3Ek__BackingField_30)); }
	inline RuntimeObject* get_U3CCharacterManagerU3Ek__BackingField_30() const { return ___U3CCharacterManagerU3Ek__BackingField_30; }
	inline RuntimeObject** get_address_of_U3CCharacterManagerU3Ek__BackingField_30() { return &___U3CCharacterManagerU3Ek__BackingField_30; }
	inline void set_U3CCharacterManagerU3Ek__BackingField_30(RuntimeObject* value)
	{
		___U3CCharacterManagerU3Ek__BackingField_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCharacterManagerU3Ek__BackingField_30), (void*)value);
	}

	inline static int32_t get_offset_of_content_31() { return static_cast<int32_t>(offsetof(UITextPrinterPanel_t332EC95C8F0F49BC7A8420ED5F3BA2CC8D1BF60F, ___content_31)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_content_31() const { return ___content_31; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_content_31() { return &___content_31; }
	inline void set_content_31(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___content_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___content_31), (void*)value);
	}

	inline static int32_t get_offset_of_continueInputTriggers_32() { return static_cast<int32_t>(offsetof(UITextPrinterPanel_t332EC95C8F0F49BC7A8420ED5F3BA2CC8D1BF60F, ___continueInputTriggers_32)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_continueInputTriggers_32() const { return ___continueInputTriggers_32; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_continueInputTriggers_32() { return &___continueInputTriggers_32; }
	inline void set_continueInputTriggers_32(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___continueInputTriggers_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___continueInputTriggers_32), (void*)value);
	}

	inline static int32_t get_offset_of_continueInput_33() { return static_cast<int32_t>(offsetof(UITextPrinterPanel_t332EC95C8F0F49BC7A8420ED5F3BA2CC8D1BF60F, ___continueInput_33)); }
	inline RuntimeObject* get_continueInput_33() const { return ___continueInput_33; }
	inline RuntimeObject** get_address_of_continueInput_33() { return &___continueInput_33; }
	inline void set_continueInput_33(RuntimeObject* value)
	{
		___continueInput_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___continueInput_33), (void*)value);
	}

	inline static int32_t get_offset_of_scriptPlayer_34() { return static_cast<int32_t>(offsetof(UITextPrinterPanel_t332EC95C8F0F49BC7A8420ED5F3BA2CC8D1BF60F, ___scriptPlayer_34)); }
	inline RuntimeObject* get_scriptPlayer_34() const { return ___scriptPlayer_34; }
	inline RuntimeObject** get_address_of_scriptPlayer_34() { return &___scriptPlayer_34; }
	inline void set_scriptPlayer_34(RuntimeObject* value)
	{
		___scriptPlayer_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scriptPlayer_34), (void*)value);
	}
};


// Naninovel.UI.VariableInputPanel
struct  VariableInputPanel_t8E4D3D3105400B75F154916F7E3723C22389D55E  : public CustomUI_t2922947F83AE95088BBC4DC10DC13766B4C0DF5C
{
public:
	// UnityEngine.UI.InputField Naninovel.UI.VariableInputPanel::inputField
	InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * ___inputField_30;
	// UnityEngine.UI.Text Naninovel.UI.VariableInputPanel::summaryText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___summaryText_31;
	// UnityEngine.UI.Button Naninovel.UI.VariableInputPanel::submitButton
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___submitButton_32;
	// System.Boolean Naninovel.UI.VariableInputPanel::activateOnShow
	bool ___activateOnShow_33;
	// System.Boolean Naninovel.UI.VariableInputPanel::submitOnInput
	bool ___submitOnInput_34;
	// Naninovel.IScriptPlayer Naninovel.UI.VariableInputPanel::scriptPlayer
	RuntimeObject* ___scriptPlayer_35;
	// Naninovel.ICustomVariableManager Naninovel.UI.VariableInputPanel::variableManager
	RuntimeObject* ___variableManager_36;
	// Naninovel.IStateManager Naninovel.UI.VariableInputPanel::stateManager
	RuntimeObject* ___stateManager_37;
	// Naninovel.IInputSampler Naninovel.UI.VariableInputPanel::submitInput
	RuntimeObject* ___submitInput_38;
	// System.String Naninovel.UI.VariableInputPanel::variableName
	String_t* ___variableName_39;
	// System.Boolean Naninovel.UI.VariableInputPanel::playOnSubmit
	bool ___playOnSubmit_40;

public:
	inline static int32_t get_offset_of_inputField_30() { return static_cast<int32_t>(offsetof(VariableInputPanel_t8E4D3D3105400B75F154916F7E3723C22389D55E, ___inputField_30)); }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * get_inputField_30() const { return ___inputField_30; }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 ** get_address_of_inputField_30() { return &___inputField_30; }
	inline void set_inputField_30(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * value)
	{
		___inputField_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputField_30), (void*)value);
	}

	inline static int32_t get_offset_of_summaryText_31() { return static_cast<int32_t>(offsetof(VariableInputPanel_t8E4D3D3105400B75F154916F7E3723C22389D55E, ___summaryText_31)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_summaryText_31() const { return ___summaryText_31; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_summaryText_31() { return &___summaryText_31; }
	inline void set_summaryText_31(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___summaryText_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___summaryText_31), (void*)value);
	}

	inline static int32_t get_offset_of_submitButton_32() { return static_cast<int32_t>(offsetof(VariableInputPanel_t8E4D3D3105400B75F154916F7E3723C22389D55E, ___submitButton_32)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_submitButton_32() const { return ___submitButton_32; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_submitButton_32() { return &___submitButton_32; }
	inline void set_submitButton_32(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___submitButton_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___submitButton_32), (void*)value);
	}

	inline static int32_t get_offset_of_activateOnShow_33() { return static_cast<int32_t>(offsetof(VariableInputPanel_t8E4D3D3105400B75F154916F7E3723C22389D55E, ___activateOnShow_33)); }
	inline bool get_activateOnShow_33() const { return ___activateOnShow_33; }
	inline bool* get_address_of_activateOnShow_33() { return &___activateOnShow_33; }
	inline void set_activateOnShow_33(bool value)
	{
		___activateOnShow_33 = value;
	}

	inline static int32_t get_offset_of_submitOnInput_34() { return static_cast<int32_t>(offsetof(VariableInputPanel_t8E4D3D3105400B75F154916F7E3723C22389D55E, ___submitOnInput_34)); }
	inline bool get_submitOnInput_34() const { return ___submitOnInput_34; }
	inline bool* get_address_of_submitOnInput_34() { return &___submitOnInput_34; }
	inline void set_submitOnInput_34(bool value)
	{
		___submitOnInput_34 = value;
	}

	inline static int32_t get_offset_of_scriptPlayer_35() { return static_cast<int32_t>(offsetof(VariableInputPanel_t8E4D3D3105400B75F154916F7E3723C22389D55E, ___scriptPlayer_35)); }
	inline RuntimeObject* get_scriptPlayer_35() const { return ___scriptPlayer_35; }
	inline RuntimeObject** get_address_of_scriptPlayer_35() { return &___scriptPlayer_35; }
	inline void set_scriptPlayer_35(RuntimeObject* value)
	{
		___scriptPlayer_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scriptPlayer_35), (void*)value);
	}

	inline static int32_t get_offset_of_variableManager_36() { return static_cast<int32_t>(offsetof(VariableInputPanel_t8E4D3D3105400B75F154916F7E3723C22389D55E, ___variableManager_36)); }
	inline RuntimeObject* get_variableManager_36() const { return ___variableManager_36; }
	inline RuntimeObject** get_address_of_variableManager_36() { return &___variableManager_36; }
	inline void set_variableManager_36(RuntimeObject* value)
	{
		___variableManager_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___variableManager_36), (void*)value);
	}

	inline static int32_t get_offset_of_stateManager_37() { return static_cast<int32_t>(offsetof(VariableInputPanel_t8E4D3D3105400B75F154916F7E3723C22389D55E, ___stateManager_37)); }
	inline RuntimeObject* get_stateManager_37() const { return ___stateManager_37; }
	inline RuntimeObject** get_address_of_stateManager_37() { return &___stateManager_37; }
	inline void set_stateManager_37(RuntimeObject* value)
	{
		___stateManager_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stateManager_37), (void*)value);
	}

	inline static int32_t get_offset_of_submitInput_38() { return static_cast<int32_t>(offsetof(VariableInputPanel_t8E4D3D3105400B75F154916F7E3723C22389D55E, ___submitInput_38)); }
	inline RuntimeObject* get_submitInput_38() const { return ___submitInput_38; }
	inline RuntimeObject** get_address_of_submitInput_38() { return &___submitInput_38; }
	inline void set_submitInput_38(RuntimeObject* value)
	{
		___submitInput_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___submitInput_38), (void*)value);
	}

	inline static int32_t get_offset_of_variableName_39() { return static_cast<int32_t>(offsetof(VariableInputPanel_t8E4D3D3105400B75F154916F7E3723C22389D55E, ___variableName_39)); }
	inline String_t* get_variableName_39() const { return ___variableName_39; }
	inline String_t** get_address_of_variableName_39() { return &___variableName_39; }
	inline void set_variableName_39(String_t* value)
	{
		___variableName_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___variableName_39), (void*)value);
	}

	inline static int32_t get_offset_of_playOnSubmit_40() { return static_cast<int32_t>(offsetof(VariableInputPanel_t8E4D3D3105400B75F154916F7E3723C22389D55E, ___playOnSubmit_40)); }
	inline bool get_playOnSubmit_40() const { return ___playOnSubmit_40; }
	inline bool* get_address_of_playOnSubmit_40() { return &___playOnSubmit_40; }
	inline void set_playOnSubmit_40(bool value)
	{
		___playOnSubmit_40 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Threading.CancellationToken[]
struct CancellationTokenU5BU5D_t9A731157500814DA284A6F1E2E911CB755A65A7E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  m_Items[1];

public:
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_source_0), (void*)NULL);
	}
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_source_0), (void*)NULL);
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
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
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


// System.Void UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder::AwaitUnsafeOnCompleted<UniRx.Async.UniTask/Awaiter,Naninovel.UITextPrinter/<RevealTextAsync>d__37>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822_TisU3CRevealTextAsyncU3Ed__37_t22D933F07DE5B442D1EC37E2416AB435E5C0D1BE_m4271075E815595BDE8BAC0C2D7E50A820E1E6D75_gshared (AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 * __this, Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822 * ___awaiter0, U3CRevealTextAsyncU3Ed__37_t22D933F07DE5B442D1EC37E2416AB435E5C0D1BE * ___stateMachine1, const RuntimeMethod* method);
// System.Void UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder::AwaitUnsafeOnCompleted<UniRx.Async.UniTask/Awaiter,Naninovel.UI.UITextPrinterPanel/<InitializeAsync>d__24>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822_TisU3CInitializeAsyncU3Ed__24_tAB011A1A6E65376DE8C0FAAFBF1E2BC2E0974DCB_mD6FBC2CBADFB4262B462DC69B408CA9B1EDD25E5_gshared (AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 * __this, Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822 * ___awaiter0, U3CInitializeAsyncU3Ed__24_tAB011A1A6E65376DE8C0FAAFBF1E2BC2E0974DCB * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Action`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2A1B34C27CAE6ED7FD924E5F59C0A1ACBBF22C38_gshared (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// TService Naninovel.Engine::GetService<System.Object>(System.Predicate`1<TService>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Engine_GetService_TisRuntimeObject_m23FA8EBF968E9EEDF5FD95A57EF28226B53000F3_gshared (Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___predicate0, const RuntimeMethod* method);
// TValue Naninovel.Nullable`1<System.Object>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Nullable_1_get_Value_mB3331B5860C707C3C801AA781573450794EE55B8_gshared (Nullable_1_t78C6503C81ED4E2CC0C85B79A9D429418B9C8EEE * __this, const RuntimeMethod* method);
// UniRx.Async.UniTask`1/Awaiter<!0> UniRx.Async.UniTask`1<System.Object>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Awaiter_tFB8E8133A57BB3B9C3FDFDF0BA2FE30DA1221D7D  UniTask_1_GetAwaiter_mFE265EC0E05738D9AFD7635879A98D0C95E78B73_gshared (UniTask_1_t6FCD254D72D89CEC552D0DA951202E35E8C7923E * __this, const RuntimeMethod* method);
// System.Boolean UniRx.Async.UniTask`1/Awaiter<System.Object>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m296D11726E28D6634ADBC1D9239699D4E655A38F_gshared (Awaiter_tFB8E8133A57BB3B9C3FDFDF0BA2FE30DA1221D7D * __this, const RuntimeMethod* method);
// System.Void UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder::AwaitUnsafeOnCompleted<UniRx.Async.UniTask`1/Awaiter<System.Object>,Naninovel.Commands.Unlock/<ExecuteAsync>d__1>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFB8E8133A57BB3B9C3FDFDF0BA2FE30DA1221D7D_TisU3CExecuteAsyncU3Ed__1_t9E0B22C867E8CFF13B5369FD265382B0EB2122C2_mB15A89E3506C6A6EBE43C99C35646320C1F4C68F_gshared (AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 * __this, Awaiter_tFB8E8133A57BB3B9C3FDFDF0BA2FE30DA1221D7D * ___awaiter0, U3CExecuteAsyncU3Ed__1_t9E0B22C867E8CFF13B5369FD265382B0EB2122C2 * ___stateMachine1, const RuntimeMethod* method);
// !0 UniRx.Async.UniTask`1/Awaiter<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Awaiter_GetResult_mA2671B42F2B3BB4DB9B60F8C4819540DC10917FF_gshared (Awaiter_tFB8E8133A57BB3B9C3FDFDF0BA2FE30DA1221D7D * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mF390DA2A3078B58DD811566C1131DF2495F5052E_gshared_inline (KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool KeyValuePair_2_get_Value_m9F9DF6119C16A47CA183A11447C735B01FE006C8_gshared_inline (KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A * __this, const RuntimeMethod* method);
// System.Void Naninovel.SerializableMap`2<System.Object,System.Boolean>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializableMap_2__ctor_mF77C7A1500BEC1687A59012999054AA193DD83E8_gshared (SerializableMap_2_t2505643AD92E5B5B63A4FF559C9011C0CC0B21CA * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method);
// System.Void Naninovel.SerializableMap`2<System.Object,System.Boolean>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializableMap_2__ctor_mB4FE594BDC90C21EE97D92D8CF3EA3F493579DD5_gshared (SerializableMap_2_t2505643AD92E5B5B63A4FF559C9011C0CC0B21CA * __this, RuntimeObject* ___dict0, RuntimeObject* ___comparer1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m55B3D17A5D50746ED6618952C2C745FB5A73BAA7_gshared (UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB * __this, const RuntimeMethod* method);
// System.Void UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder::AwaitUnsafeOnCompleted<UniRx.Async.UniTask/Awaiter,Naninovel.UI.VariableInputPanel/<DeserializeState>d__27>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822_TisU3CDeserializeStateU3Ed__27_tABF41614DF3DFF2D9AAA5826BE7678FFBFE9C811_m3FEA121F03998F080E9E41D7681FE731B7A95459_gshared (AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 * __this, Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822 * ___awaiter0, U3CDeserializeStateU3Ed__27_tABF41614DF3DFF2D9AAA5826BE7678FFBFE9C811 * ___stateMachine1, const RuntimeMethod* method);
// TState Naninovel.StateMap::GetState<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * StateMap_GetState_TisRuntimeObject_mA1A5E385D326E45BE32C5D02B5176350FA179702_gshared (StateMap_tF9F312C96797C47C86D856A3386946A8A10C6C64 * __this, String_t* ___instanceId0, const RuntimeMethod* method);
// System.Void UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder::AwaitUnsafeOnCompleted<UniRx.Async.UniTask`1/Awaiter<System.Object>,Naninovel.VideoBackground/<ChangeAppearanceAsync>d__22>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFB8E8133A57BB3B9C3FDFDF0BA2FE30DA1221D7D_TisU3CChangeAppearanceAsyncU3Ed__22_tCB35366F250EDB2DEE0257694727C11654A86404_m25120D342A67B9E18B246C8846677CFC6DB99523_gshared (AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 * __this, Awaiter_tFB8E8133A57BB3B9C3FDFDF0BA2FE30DA1221D7D * ___awaiter0, U3CChangeAppearanceAsyncU3Ed__22_tCB35366F250EDB2DEE0257694727C11654A86404 * ___stateMachine1, const RuntimeMethod* method);
// System.Void UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder::AwaitUnsafeOnCompleted<UniRx.Async.YieldAwaitable/Awaiter,Naninovel.VideoBackground/<ChangeAppearanceAsync>d__22>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tC53C155C42BF6DB6BBD8673DE4B04D42737173C6_TisU3CChangeAppearanceAsyncU3Ed__22_tCB35366F250EDB2DEE0257694727C11654A86404_m10E9C25C2D2B3DE78A32F78E348CAF3175B196DE_gshared (AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 * __this, Awaiter_tC53C155C42BF6DB6BBD8673DE4B04D42737173C6 * ___awaiter0, U3CChangeAppearanceAsyncU3Ed__22_tCB35366F250EDB2DEE0257694727C11654A86404 * ___stateMachine1, const RuntimeMethod* method);
// System.Void UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder::AwaitUnsafeOnCompleted<UniRx.Async.UniTask/Awaiter,Naninovel.VideoBackground/<ChangeAppearanceAsync>d__22>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822_TisU3CChangeAppearanceAsyncU3Ed__22_tCB35366F250EDB2DEE0257694727C11654A86404_m30770BFA9DCC0171DA0E040188C2B23A70D0E47D_gshared (AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 * __this, Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822 * ___awaiter0, U3CChangeAppearanceAsyncU3Ed__22_tCB35366F250EDB2DEE0257694727C11654A86404 * ___stateMachine1, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0  Dictionary_2_GetEnumerator_mA44BBB15DFBD8E08B5E60E23AA5044D45C3F889F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_gshared_inline (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCAD84084129516BD41DE5CC3E1FABA5A8DF836D0_gshared (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m85CA135BAB22C9F0C87C84AB90FF6740D1859279_gshared (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);
// System.Void UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder::AwaitUnsafeOnCompleted<UniRx.Async.UniTask/Awaiter,Naninovel.VideoBackground/<ChangeVisibilityAsync>d__23>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822_TisU3CChangeVisibilityAsyncU3Ed__23_t360BFA64DB92AE4FBA3007EE6CDFF301F0D0FE0F_mF51EDE0488A5AE0AF5A4E44E055B7642504E4E03_gshared (AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 * __this, Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822 * ___awaiter0, U3CChangeVisibilityAsyncU3Ed__23_t360BFA64DB92AE4FBA3007EE6CDFF301F0D0FE0F * ___stateMachine1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// T Naninovel.Engine::CreateObject<System.Object>(System.String,System.Nullable`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Engine_CreateObject_TisRuntimeObject_mC57DB424C0FFEC61C1423DBF51F029DF4FC27B64_gshared (String_t* ___name0, Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___layer1, const RuntimeMethod* method);
// System.Void UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<UniRx.Async.UniTask`1/Awaiter<System.Object>,Naninovel.VideoBackground/<GetOrLoadVideoDataAsync>d__30>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_tFB8E8133A57BB3B9C3FDFDF0BA2FE30DA1221D7D_TisU3CGetOrLoadVideoDataAsyncU3Ed__30_tDF4395E0B62F17B7558DC26A111F9659F3932FA6_m0E50F2F2D0680982216F3468030D1662D8DE190C_gshared (AsyncUniTaskMethodBuilder_1_tDD7DCA035B684680C606A9836E15BC201F62776F * __this, Awaiter_tFB8E8133A57BB3B9C3FDFDF0BA2FE30DA1221D7D * ___awaiter0, U3CGetOrLoadVideoDataAsyncU3Ed__30_tDF4395E0B62F17B7558DC26A111F9659F3932FA6 * ___stateMachine1, const RuntimeMethod* method);
// TResource Naninovel.Resource`1<System.Object>::op_Implicit(Naninovel.Resource`1<TResource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Resource_1_op_Implicit_mC8C7A1285F8D97DBAF5B715F15EA962ED2636252_gshared (Resource_1_tED29F5EBF58E03A5C8BC0445C686199869864F6C * ___resource0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Object>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetException_m6328D8C00DCE433F59B0E590D53DC47B3C326C47_gshared (AsyncUniTaskMethodBuilder_1_tDD7DCA035B684680C606A9836E15BC201F62776F * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Object>::SetResult(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetResult_m8D2DCDC38E5201D7EBE1B1EC8B8EC8FA593D51EF_gshared (AsyncUniTaskMethodBuilder_1_tDD7DCA035B684680C606A9836E15BC201F62776F * __this, RuntimeObject * ___result0, const RuntimeMethod* method);
// System.Void UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Object>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetStateMachine_mCDC7988DB8C28883CBBADA9A54F310D878B28DA8_gshared (AsyncUniTaskMethodBuilder_1_tDD7DCA035B684680C606A9836E15BC201F62776F * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder::AwaitUnsafeOnCompleted<UniRx.Async.UniTask`1/Awaiter<System.Object>,Naninovel.VideoBackground/<HoldResourcesAsync>d__24>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFB8E8133A57BB3B9C3FDFDF0BA2FE30DA1221D7D_TisU3CHoldResourcesAsyncU3Ed__24_t69B7F8032AABA06C6ACEBB741DE6BB2F6A3F0359_m1B73F3B661694B3106DA19C2FE7DE65E72784074_gshared (AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 * __this, Awaiter_tFB8E8133A57BB3B9C3FDFDF0BA2FE30DA1221D7D * ___awaiter0, U3CHoldResourcesAsyncU3Ed__24_t69B7F8032AABA06C6ACEBB741DE6BB2F6A3F0359 * ___stateMachine1, const RuntimeMethod* method);
// System.Void UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder::AwaitUnsafeOnCompleted<UniRx.Async.UniTask/Awaiter,Naninovel.VideoBackground/<InitializeAsync>d__21>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822_TisU3CInitializeAsyncU3Ed__21_t705DB795DF855A7C45BFFDF1527CB27C7A01CE12_m3D5595F7E80A704D725DDF32AF0D8AABE7DD86BF_gshared (AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 * __this, Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822 * ___awaiter0, U3CInitializeAsyncU3Ed__21_t705DB795DF855A7C45BFFDF1527CB27C7A01CE12 * ___stateMachine1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder::AwaitUnsafeOnCompleted<UniRx.Async.YieldAwaitable/Awaiter,Naninovel.Commands.Wait/<ExecuteAsync>d__6>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tC53C155C42BF6DB6BBD8673DE4B04D42737173C6_TisU3CExecuteAsyncU3Ed__6_tD382787452B3A05D65DA90FC93BEB427B31222B4_m19E8F79C50F3F47DB637770D596BEBB755B84487_gshared (AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 * __this, Awaiter_tC53C155C42BF6DB6BBD8673DE4B04D42737173C6 * ___awaiter0, U3CExecuteAsyncU3Ed__6_tD382787452B3A05D65DA90FC93BEB427B31222B4 * ___stateMachine1, const RuntimeMethod* method);
// System.Void UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder::AwaitUnsafeOnCompleted<UniRx.Async.UniTask/Awaiter,Naninovel.Commands.WaitForInput/<ExecuteAsync>d__0>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822_TisU3CExecuteAsyncU3Ed__0_t67878E6A3EBDB121016F7589B616F5D6AE4AD25A_mC6BFC7F52648326FF291589C8A95BA4E4998AF30_gshared (AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 * __this, Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822 * ___awaiter0, U3CExecuteAsyncU3Ed__0_t67878E6A3EBDB121016F7589B616F5D6AE4AD25A * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Func`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m2A4FE889FB540EA198F7757D17DC2290461E5EE9_gshared (Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// UniRx.Async.UniTask`1<!!0> UniRx.Async.UniTask::Run<System.Object>(System.Func`1<!!0>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_t6FCD254D72D89CEC552D0DA951202E35E8C7923E  UniTask_Run_TisRuntimeObject_m4BAC03A7AB7A5A62CBCA3C028E74D41A28001AE4_gshared (Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * ___func0, bool ___configureAwait1, const RuntimeMethod* method);
// System.Void UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<UniRx.Async.UniTask`1/Awaiter<System.Object>,Naninovel.WavToAudioClipConverter/<ConvertAsync>d__4>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_tFB8E8133A57BB3B9C3FDFDF0BA2FE30DA1221D7D_TisU3CConvertAsyncU3Ed__4_tA998E40BCEB98D595B4B64AF5448BA9429993BA3_m170D633C64566C0B5CBA2352AC257FD4E2620C18_gshared (AsyncUniTaskMethodBuilder_1_tDD7DCA035B684680C606A9836E15BC201F62776F * __this, Awaiter_tFB8E8133A57BB3B9C3FDFDF0BA2FE30DA1221D7D * ___awaiter0, U3CConvertAsyncU3Ed__4_tA998E40BCEB98D595B4B64AF5448BA9429993BA3 * ___stateMachine1, const RuntimeMethod* method);
// System.Void UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<UniRx.Async.UniTask`1/Awaiter<System.Object>,Naninovel.WavToAudioClipConverter/<ConvertAsync>d__6>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_tFB8E8133A57BB3B9C3FDFDF0BA2FE30DA1221D7D_TisU3CConvertAsyncU3Ed__6_tBBEA6021908F80F2BF921901F92D0D931ED03586_m1AF4E0D75FA21FB89B759F73FAC19D02A3660022_gshared (AsyncUniTaskMethodBuilder_1_tDD7DCA035B684680C606A9836E15BC201F62776F * __this, Awaiter_tFB8E8133A57BB3B9C3FDFDF0BA2FE30DA1221D7D * ___awaiter0, U3CConvertAsyncU3Ed__6_tBBEA6021908F80F2BF921901F92D0D931ED03586 * ___stateMachine1, const RuntimeMethod* method);
// System.Void UniRx.Async.CompilerServices.AsyncUniTaskVoidMethodBuilder::AwaitUnsafeOnCompleted<UniRx.Async.UniTask/Awaiter,Naninovel.ScriptPlayer/<>c__DisplayClass123_0/<<ExecutePlayedCommandAsync>g__ExecuteCommandConcurrently|0>d>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncUniTaskVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822_TisU3CU3CExecutePlayedCommandAsyncU3Eg__ExecuteCommandConcurrentlyU7C0U3Ed_t402700803755E3D73E3B0DA464E7E0A389643CD2_mBABCC6837C534A1D934AB8952B40A9C1541C7E36_gshared (AsyncUniTaskVoidMethodBuilder_t0F142C0A47AC5AC99C2722FCC38BC01C73F8631E * __this, Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822 * ___awaiter0, U3CU3CExecutePlayedCommandAsyncU3Eg__ExecuteCommandConcurrentlyU7C0U3Ed_t402700803755E3D73E3B0DA464E7E0A389643CD2 * ___stateMachine1, const RuntimeMethod* method);
// System.Void Naninovel.StateManager::SaveAllServicesToState<System.Object,System.Object>(TState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateManager_SaveAllServicesToState_TisRuntimeObject_TisRuntimeObject_mD11D61226AA689D5CB88A761C73A037A62C76492_gshared (StateManager_tF3B8735DA8F4E19A6A6C0D25270A8286C878D5A1 * __this, RuntimeObject * ___state0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mCA84157864A199574AD0B7F3083F99B54DC1F98C_gshared (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !!0 System.Linq.Enumerable::FirstOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Enumerable_FirstOrDefault_TisRuntimeObject_mEA8E5753D70A4AA5ABF983D5FE3BACC1537B3ECE_gshared (RuntimeObject* ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, const RuntimeMethod* method);
// System.Void System.Predicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Predicate_1__ctor_m3F41E32C976C3C48B3FC63FBFD3FBBC5B5F23EDD_gshared (Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder::AwaitUnsafeOnCompleted<UniRx.Async.UniTask/Awaiter,Naninovel.StateManager/<>c__DisplayClass69_0/<<SaveGameAsync>g__DoSaveAfterSync|0>d>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822_TisU3CU3CSaveGameAsyncU3Eg__DoSaveAfterSyncU7C0U3Ed_tA5BCD95B422F51D7E49E973DC5FD62AE652C238C_mF125A7865B282154F64D3FFF9A5769B60BCD8525_gshared (AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 * __this, Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822 * ___awaiter0, U3CU3CSaveGameAsyncU3Eg__DoSaveAfterSyncU7C0U3Ed_tA5BCD95B422F51D7E49E973DC5FD62AE652C238C * ___stateMachine1, const RuntimeMethod* method);
// System.Void UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder::AwaitUnsafeOnCompleted<UniRx.Async.UniTask`1/Awaiter<System.Object>,Naninovel.StateManager/<>c__DisplayClass69_0/<<SaveGameAsync>g__DoSaveAfterSync|0>d>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFB8E8133A57BB3B9C3FDFDF0BA2FE30DA1221D7D_TisU3CU3CSaveGameAsyncU3Eg__DoSaveAfterSyncU7C0U3Ed_tA5BCD95B422F51D7E49E973DC5FD62AE652C238C_m7CAA898C32E823CD99E14ABFF10B1A802EA3B18C_gshared (AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 * __this, Awaiter_tFB8E8133A57BB3B9C3FDFDF0BA2FE30DA1221D7D * ___awaiter0, U3CU3CSaveGameAsyncU3Eg__DoSaveAfterSyncU7C0U3Ed_tA5BCD95B422F51D7E49E973DC5FD62AE652C238C * ___stateMachine1, const RuntimeMethod* method);

// System.Void Naninovel.UITextPrinter::CancelRevealTextRoutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UITextPrinter_CancelRevealTextRoutine_m7224C0344F8BB3092966C1D94DE0514EFE10E79E (UITextPrinter_tE773A1F37D741340101B7B853A20AA74E954D6A3 * __this, const RuntimeMethod* method);
// System.Threading.CancellationTokenSource System.Threading.CancellationTokenSource::CreateLinkedTokenSource(System.Threading.CancellationToken[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * CancellationTokenSource_CreateLinkedTokenSource_m8898C87C9C92C060EDD9E80D5743CB67C23A1323 (CancellationTokenU5BU5D_t9A731157500814DA284A6F1E2E911CB755A65A7E* ___tokens0, const RuntimeMethod* method);
// System.Threading.CancellationToken System.Threading.CancellationTokenSource::get_Token()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  CancellationTokenSource_get_Token_m2A9A82BA3532B89870363E8C1DEAE2F1EFD3962C (CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * __this, const RuntimeMethod* method);
// System.Void Naninovel.CancellationToken::.ctor(System.Threading.CancellationToken,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationToken__ctor_mDB2B0545C6EC34BDD96D214D8568917B2A372461 (CancellationToken_t6347F75AB41E1331E57D91A3F883A02D5FA698E3 * __this, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___asapToken0, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___lazyToken1, const RuntimeMethod* method);
// UniRx.Async.UniTask/Awaiter UniRx.Async.UniTask::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822  UniTask_GetAwaiter_mD2E76ACB629099DC37BB3C99511590FA9B227272 (UniTask_t41263A639210D10E03708EE0B4B03A964D7EEE3C * __this, const RuntimeMethod* method);
// System.Boolean UniRx.Async.UniTask/Awaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m0F67C2C63E4AD6E47A126AA69B8A98E0770F096C (Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822 * __this, const RuntimeMethod* method);
// System.Void UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder::AwaitUnsafeOnCompleted<UniRx.Async.UniTask/Awaiter,Naninovel.UITextPrinter/<RevealTextAsync>d__37>(!!0&,!!1&)
inline void AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822_TisU3CRevealTextAsyncU3Ed__37_t22D933F07DE5B442D1EC37E2416AB435E5C0D1BE_m4271075E815595BDE8BAC0C2D7E50A820E1E6D75 (AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 * __this, Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822 * ___awaiter0, U3CRevealTextAsyncU3Ed__37_t22D933F07DE5B442D1EC37E2416AB435E5C0D1BE * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 *, Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822 *, U3CRevealTextAsyncU3Ed__37_t22D933F07DE5B442D1EC37E2416AB435E5C0D1BE *, const RuntimeMethod*))AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822_TisU3CRevealTextAsyncU3Ed__37_t22D933F07DE5B442D1EC37E2416AB435E5C0D1BE_m4271075E815595BDE8BAC0C2D7E50A820E1E6D75_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void UniRx.Async.UniTask/Awaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Awaiter_GetResult_m3EFD26ADCEFA37F3B4EE99CD8BE65F51405CFEF3 (Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822 * __this, const RuntimeMethod* method);
// System.Void UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_SetException_mD97347DB2613C31645BBBE97F83717D3F225A84D (AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_SetResult_mEB0C04A892C51268180DED2647936AA6DE8BA80D (AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 * __this, const RuntimeMethod* method);
// System.Void Naninovel.UITextPrinter/<RevealTextAsync>d__37::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRevealTextAsyncU3Ed__37_MoveNext_mC8F27EFA66E5659131BAC7C21F0079020579051B (U3CRevealTextAsyncU3Ed__37_t22D933F07DE5B442D1EC37E2416AB435E5C0D1BE * __this, const RuntimeMethod* method);
// System.Void UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_SetStateMachine_m919B0537825382AC072CF24F8D838BD3920E9FC8 (AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void Naninovel.UITextPrinter/<RevealTextAsync>d__37::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRevealTextAsyncU3Ed__37_SetStateMachine_mBA386CA3A589AFDE5BCE7505F138ECE61F3C13EF (U3CRevealTextAsyncU3Ed__37_t22D933F07DE5B442D1EC37E2416AB435E5C0D1BE * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// UniRx.Async.UniTask Naninovel.UI.UITextPrinterPanel::<>n__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t41263A639210D10E03708EE0B4B03A964D7EEE3C  UITextPrinterPanel_U3CU3En__0_m23DF8EDA713C02623FFAE7BEB3D81206320093BF (UITextPrinterPanel_t332EC95C8F0F49BC7A8420ED5F3BA2CC8D1BF60F * __this, const RuntimeMethod* method);
// System.Void UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder::AwaitUnsafeOnCompleted<UniRx.Async.UniTask/Awaiter,Naninovel.UI.UITextPrinterPanel/<InitializeAsync>d__24>(!!0&,!!1&)
inline void AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822_TisU3CInitializeAsyncU3Ed__24_tAB011A1A6E65376DE8C0FAAFBF1E2BC2E0974DCB_mD6FBC2CBADFB4262B462DC69B408CA9B1EDD25E5 (AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 * __this, Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822 * ___awaiter0, U3CInitializeAsyncU3Ed__24_tAB011A1A6E65376DE8C0FAAFBF1E2BC2E0974DCB * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 *, Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822 *, U3CInitializeAsyncU3Ed__24_tAB011A1A6E65376DE8C0FAAFBF1E2BC2E0974DCB *, const RuntimeMethod*))AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822_TisU3CInitializeAsyncU3Ed__24_tAB011A1A6E65376DE8C0FAAFBF1E2BC2E0974DCB_mD6FBC2CBADFB4262B462DC69B408CA9B1EDD25E5_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Action`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m2A1B34C27CAE6ED7FD924E5F59C0A1ACBBF22C38 (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m2A1B34C27CAE6ED7FD924E5F59C0A1ACBBF22C38_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Naninovel.UI.UITextPrinterPanel/<InitializeAsync>d__24::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeAsyncU3Ed__24_MoveNext_m2113B395CBB0E6E2846EC94BB358AC49D848734F (U3CInitializeAsyncU3Ed__24_tAB011A1A6E65376DE8C0FAAFBF1E2BC2E0974DCB * __this, const RuntimeMethod* method);
// System.Void Naninovel.UI.UITextPrinterPanel/<InitializeAsync>d__24::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeAsyncU3Ed__24_SetStateMachine_m36BBA3A0DDBF74A622A8415983BB8F1A415AAC29 (U3CInitializeAsyncU3Ed__24_tAB011A1A6E65376DE8C0FAAFBF1E2BC2E0974DCB * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// TService Naninovel.Engine::GetService<Naninovel.IUnlockableManager>(System.Predicate`1<TService>)
inline RuntimeObject* Engine_GetService_TisIUnlockableManager_tB44083DED8551FA666CA3771FEE88D896EB8159D_mA470B41CF2C46AC60FC16E21F7C00DEF1953512E (Predicate_1_t7CF3BE326604DBF3D431BACDE9F90AADDBEA93E7 * ___predicate0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Predicate_1_t7CF3BE326604DBF3D431BACDE9F90AADDBEA93E7 *, const RuntimeMethod*))Engine_GetService_TisRuntimeObject_m23FA8EBF968E9EEDF5FD95A57EF28226B53000F3_gshared)(___predicate0, method);
}
// TValue Naninovel.Nullable`1<System.String>::get_Value()
inline String_t* Nullable_1_get_Value_mCD30AA96C09E69BAC64E16A8B627B7535158A477 (Nullable_1_tC6FC502E280A7F1828379312132AC25DAED230A5 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Nullable_1_tC6FC502E280A7F1828379312132AC25DAED230A5 *, const RuntimeMethod*))Nullable_1_get_Value_mB3331B5860C707C3C801AA781573450794EE55B8_gshared)(__this, method);
}
// System.Boolean Naninovel.StringUtils::EqualsFastIgnoreCase(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringUtils_EqualsFastIgnoreCase_m9E6BB734D0F3DD72B90C6EB2A68A55F0B52AB753 (String_t* ___content0, String_t* ___comparedString1, const RuntimeMethod* method);
// System.String Naninovel.Commands.StringParameter::op_Implicit(Naninovel.Commands.StringParameter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringParameter_op_Implicit_m986AE779F7A248DB1D737469568113486EB7D764 (StringParameter_t33BF466D3AD2402CEA10C41D765102E093891CA8 * ___param0, const RuntimeMethod* method);
// TService Naninovel.Engine::GetService<Naninovel.IStateManager>(System.Predicate`1<TService>)
inline RuntimeObject* Engine_GetService_TisIStateManager_tB1F31B7EA57D563ED2E6154B24A63BA91D1BFB53_m9AE0661C0443939E3B12DDF2785F454EFF38B4D4 (Predicate_1_tC32C71EEE3CD94A0D24F97FE89A2DDA8D2552CC4 * ___predicate0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Predicate_1_tC32C71EEE3CD94A0D24F97FE89A2DDA8D2552CC4 *, const RuntimeMethod*))Engine_GetService_TisRuntimeObject_m23FA8EBF968E9EEDF5FD95A57EF28226B53000F3_gshared)(___predicate0, method);
}
// UniRx.Async.UniTask`1/Awaiter<!0> UniRx.Async.UniTask`1<Naninovel.GlobalStateMap>::GetAwaiter()
inline Awaiter_t2A04123A9B29D02DBE393CFF44AD80850561C5C0  UniTask_1_GetAwaiter_m63808C842E705B02AEC3088A7A3CE08D2DA74264 (UniTask_1_t492CDA3ADD676CAA0B8B193F8AB7CDD8F54BF5F5 * __this, const RuntimeMethod* method)
{
	return ((  Awaiter_t2A04123A9B29D02DBE393CFF44AD80850561C5C0  (*) (UniTask_1_t492CDA3ADD676CAA0B8B193F8AB7CDD8F54BF5F5 *, const RuntimeMethod*))UniTask_1_GetAwaiter_mFE265EC0E05738D9AFD7635879A98D0C95E78B73_gshared)(__this, method);
}
// System.Boolean UniRx.Async.UniTask`1/Awaiter<Naninovel.GlobalStateMap>::get_IsCompleted()
inline bool Awaiter_get_IsCompleted_m2AD507538A44DA52F98CC6B97C5F2B4374EAEB76 (Awaiter_t2A04123A9B29D02DBE393CFF44AD80850561C5C0 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Awaiter_t2A04123A9B29D02DBE393CFF44AD80850561C5C0 *, const RuntimeMethod*))Awaiter_get_IsCompleted_m296D11726E28D6634ADBC1D9239699D4E655A38F_gshared)(__this, method);
}
// System.Void UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder::AwaitUnsafeOnCompleted<UniRx.Async.UniTask`1/Awaiter<Naninovel.GlobalStateMap>,Naninovel.Commands.Unlock/<ExecuteAsync>d__1>(!!0&,!!1&)
inline void AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t2A04123A9B29D02DBE393CFF44AD80850561C5C0_TisU3CExecuteAsyncU3Ed__1_t9E0B22C867E8CFF13B5369FD265382B0EB2122C2_m8F2C5684E18CC4048C9A5A9F0C6F254428BF63BC (AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 * __this, Awaiter_t2A04123A9B29D02DBE393CFF44AD80850561C5C0 * ___awaiter0, U3CExecuteAsyncU3Ed__1_t9E0B22C867E8CFF13B5369FD265382B0EB2122C2 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 *, Awaiter_t2A04123A9B29D02DBE393CFF44AD80850561C5C0 *, U3CExecuteAsyncU3Ed__1_t9E0B22C867E8CFF13B5369FD265382B0EB2122C2 *, const RuntimeMethod*))AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFB8E8133A57BB3B9C3FDFDF0BA2FE30DA1221D7D_TisU3CExecuteAsyncU3Ed__1_t9E0B22C867E8CFF13B5369FD265382B0EB2122C2_mB15A89E3506C6A6EBE43C99C35646320C1F4C68F_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// !0 UniRx.Async.UniTask`1/Awaiter<Naninovel.GlobalStateMap>::GetResult()
inline GlobalStateMap_t30FDDE19DD3F6E3C8EE56F95DA28DAAFEE9DF0D5 * Awaiter_GetResult_mB36B4F5D534DDA815C01A7BE87F4B29006458C00 (Awaiter_t2A04123A9B29D02DBE393CFF44AD80850561C5C0 * __this, const RuntimeMethod* method)
{
	return ((  GlobalStateMap_t30FDDE19DD3F6E3C8EE56F95DA28DAAFEE9DF0D5 * (*) (Awaiter_t2A04123A9B29D02DBE393CFF44AD80850561C5C0 *, const RuntimeMethod*))Awaiter_GetResult_mA2671B42F2B3BB4DB9B60F8C4819540DC10917FF_gshared)(__this, method);
}
// System.Void Naninovel.Commands.Unlock/<ExecuteAsync>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteAsyncU3Ed__1_MoveNext_m640DF98D88159FC59AB1BDEB644BA23A6D959015 (U3CExecuteAsyncU3Ed__1_t9E0B22C867E8CFF13B5369FD265382B0EB2122C2 * __this, const RuntimeMethod* method);
// System.Void Naninovel.Commands.Unlock/<ExecuteAsync>d__1::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteAsyncU3Ed__1_SetStateMachine_m650B3676A1F7D60732D3228415765D191F12F6CF (U3CExecuteAsyncU3Ed__1_t9E0B22C867E8CFF13B5369FD265382B0EB2122C2 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void Naninovel.UnlockableManager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m2721D03C7FA5C03225FE9D7544551C2CB85590F6 (U3CU3Ec_t872D8589FF75637984769283BC59811DBE3C83F4 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m2A4BA00E1B96F30CEEB1DC3778BBFB14E4F03535_inline (KeyValuePair_2_t384622AD87CBCE096A5B6142169F1A1C8C8F4503 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t384622AD87CBCE096A5B6142169F1A1C8C8F4503 *, const RuntimeMethod*))KeyValuePair_2_get_Key_mF390DA2A3078B58DD811566C1131DF2495F5052E_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>::get_Value()
inline bool KeyValuePair_2_get_Value_mAC9081ECDD5DBA19DFE07653835578498B64ED1B_inline (KeyValuePair_2_t384622AD87CBCE096A5B6142169F1A1C8C8F4503 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (KeyValuePair_2_t384622AD87CBCE096A5B6142169F1A1C8C8F4503 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m9F9DF6119C16A47CA183A11447C735B01FE006C8_gshared_inline)(__this, method);
}
// System.Void Naninovel.UnlockableManager/UnlockablesMap::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnlockablesMap__ctor_m4A117F2B7BA1B8EAB963B0E992DE8101504AF421 (UnlockablesMap_t798A63740156B2CCD22053D422973750060F1C43 * __this, const RuntimeMethod* method);
// System.StringComparer System.StringComparer::get_OrdinalIgnoreCase()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * StringComparer_get_OrdinalIgnoreCase_m8FD38206B6FFE866E97CE4DF84B037F0DF175288_inline (const RuntimeMethod* method);
// System.Void Naninovel.SerializableMap`2<System.String,System.Boolean>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
inline void SerializableMap_2__ctor_mEA5BE717C404CC3D57258757949B272C790EE8D6 (SerializableMap_2_t0EBD18F6762E27FE6CD01891D0B646ADE3E2C0D2 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	((  void (*) (SerializableMap_2_t0EBD18F6762E27FE6CD01891D0B646ADE3E2C0D2 *, RuntimeObject*, const RuntimeMethod*))SerializableMap_2__ctor_mF77C7A1500BEC1687A59012999054AA193DD83E8_gshared)(__this, ___comparer0, method);
}
// System.Void Naninovel.SerializableMap`2<System.String,System.Boolean>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
inline void SerializableMap_2__ctor_m56AD559E46E06881F5A00BE80C064A8CCF8CD908 (SerializableMap_2_t0EBD18F6762E27FE6CD01891D0B646ADE3E2C0D2 * __this, RuntimeObject* ___dict0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	((  void (*) (SerializableMap_2_t0EBD18F6762E27FE6CD01891D0B646ADE3E2C0D2 *, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))SerializableMap_2__ctor_mB4FE594BDC90C21EE97D92D8CF3EA3F493579DD5_gshared)(__this, ___dict0, ___comparer1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::.ctor()
inline void UnityEvent_1__ctor_m55B3D17A5D50746ED6618952C2C745FB5A73BAA7 (UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB * __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB *, const RuntimeMethod*))UnityEvent_1__ctor_m55B3D17A5D50746ED6618952C2C745FB5A73BAA7_gshared)(__this, method);
}
// UniRx.Async.UniTask Naninovel.UI.VariableInputPanel::<>n__0(Naninovel.GameStateMap)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t41263A639210D10E03708EE0B4B03A964D7EEE3C  VariableInputPanel_U3CU3En__0_m9C343AEDBA9691B5229FEFA30160B40DB6019AB4 (VariableInputPanel_t8E4D3D3105400B75F154916F7E3723C22389D55E * __this, GameStateMap_tA4788218B9D1B130D00F9C346FF9FD21E01ED52D * ___stateMap0, const RuntimeMethod* method);
// System.Void UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder::AwaitUnsafeOnCompleted<UniRx.Async.UniTask/Awaiter,Naninovel.UI.VariableInputPanel/<DeserializeState>d__27>(!!0&,!!1&)
inline void AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822_TisU3CDeserializeStateU3Ed__27_tABF41614DF3DFF2D9AAA5826BE7678FFBFE9C811_m3FEA121F03998F080E9E41D7681FE731B7A95459 (AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 * __this, Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822 * ___awaiter0, U3CDeserializeStateU3Ed__27_tABF41614DF3DFF2D9AAA5826BE7678FFBFE9C811 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 *, Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822 *, U3CDeserializeStateU3Ed__27_tABF41614DF3DFF2D9AAA5826BE7678FFBFE9C811 *, const RuntimeMethod*))AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822_TisU3CDeserializeStateU3Ed__27_tABF41614DF3DFF2D9AAA5826BE7678FFBFE9C811_m3FEA121F03998F080E9E41D7681FE731B7A95459_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// TState Naninovel.StateMap::GetState<Naninovel.UI.VariableInputPanel/GameState>(System.String)
inline GameState_tE9D59EA400F61A3BF53ED8B04F14446938E65CD8 * StateMap_GetState_TisGameState_tE9D59EA400F61A3BF53ED8B04F14446938E65CD8_m6B6E59B83F15F46212F04320F88161CACE97F21C (StateMap_tF9F312C96797C47C86D856A3386946A8A10C6C64 * __this, String_t* ___instanceId0, const RuntimeMethod* method)
{
	return ((  GameState_tE9D59EA400F61A3BF53ED8B04F14446938E65CD8 * (*) (StateMap_tF9F312C96797C47C86D856A3386946A8A10C6C64 *, String_t*, const RuntimeMethod*))StateMap_GetState_TisRuntimeObject_mA1A5E385D326E45BE32C5D02B5176350FA179702_gshared)(__this, ___instanceId0, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrWhiteSpace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrWhiteSpace_m4C4266AE4097F5B61FF72A8D0D083611231B9CA6 (String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.InputField::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputField_set_text_m30EE95E064474DFA2842CA2DD6E831FF3F3500BF (InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Naninovel.UI.VariableInputPanel/<DeserializeState>d__27::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDeserializeStateU3Ed__27_MoveNext_mA25CAFA71A4B1E7FF71433CE62CFA04D1E5C4CD3 (U3CDeserializeStateU3Ed__27_tABF41614DF3DFF2D9AAA5826BE7678FFBFE9C811 * __this, const RuntimeMethod* method);
// System.Void Naninovel.UI.VariableInputPanel/<DeserializeState>d__27::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDeserializeStateU3Ed__27_SetStateMachine_mC75A1227EB4916701F4D40222428AEF36C319FDD (U3CDeserializeStateU3Ed__27_tABF41614DF3DFF2D9AAA5826BE7678FFBFE9C811 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// UniRx.Async.UniTask`1<Naninovel.VideoBackground/VideoData> Naninovel.VideoBackground::GetOrLoadVideoDataAsync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tAAD1C29A0EA451DC7946ED7921521AD191FB2674  VideoBackground_GetOrLoadVideoDataAsync_mF139769959BA01959791EF990FF05B5C765F4A7C (VideoBackground_tC31D69C74D104E5F414AAE56250D1AAD449B7F47 * __this, String_t* ___videoName0, const RuntimeMethod* method);
// UniRx.Async.UniTask`1/Awaiter<!0> UniRx.Async.UniTask`1<Naninovel.VideoBackground/VideoData>::GetAwaiter()
inline Awaiter_t2EC4E48D6D8C5EC90776FBA7B42075F059E21967  UniTask_1_GetAwaiter_mD17FB23F1BF828B36BD77C8070A7ECBDA0FA2791 (UniTask_1_tAAD1C29A0EA451DC7946ED7921521AD191FB2674 * __this, const RuntimeMethod* method)
{
	return ((  Awaiter_t2EC4E48D6D8C5EC90776FBA7B42075F059E21967  (*) (UniTask_1_tAAD1C29A0EA451DC7946ED7921521AD191FB2674 *, const RuntimeMethod*))UniTask_1_GetAwaiter_mFE265EC0E05738D9AFD7635879A98D0C95E78B73_gshared)(__this, method);
}
// System.Boolean UniRx.Async.UniTask`1/Awaiter<Naninovel.VideoBackground/VideoData>::get_IsCompleted()
inline bool Awaiter_get_IsCompleted_mCBCDC5F183736F78C9405A29DC0D1CA5D7F70B0A (Awaiter_t2EC4E48D6D8C5EC90776FBA7B42075F059E21967 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Awaiter_t2EC4E48D6D8C5EC90776FBA7B42075F059E21967 *, const RuntimeMethod*))Awaiter_get_IsCompleted_m296D11726E28D6634ADBC1D9239699D4E655A38F_gshared)(__this, method);
}
// System.Void UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder::AwaitUnsafeOnCompleted<UniRx.Async.UniTask`1/Awaiter<Naninovel.VideoBackground/VideoData>,Naninovel.VideoBackground/<ChangeAppearanceAsync>d__22>(!!0&,!!1&)
inline void AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t2EC4E48D6D8C5EC90776FBA7B42075F059E21967_TisU3CChangeAppearanceAsyncU3Ed__22_tCB35366F250EDB2DEE0257694727C11654A86404_mC082037C8F66077D258B0E964CE5E906ADE5A2B9 (AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 * __this, Awaiter_t2EC4E48D6D8C5EC90776FBA7B42075F059E21967 * ___awaiter0, U3CChangeAppearanceAsyncU3Ed__22_tCB35366F250EDB2DEE0257694727C11654A86404 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 *, Awaiter_t2EC4E48D6D8C5EC90776FBA7B42075F059E21967 *, U3CChangeAppearanceAsyncU3Ed__22_tCB35366F250EDB2DEE0257694727C11654A86404 *, const RuntimeMethod*))AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFB8E8133A57BB3B9C3FDFDF0BA2FE30DA1221D7D_TisU3CChangeAppearanceAsyncU3Ed__22_tCB35366F250EDB2DEE0257694727C11654A86404_m25120D342A67B9E18B246C8846677CFC6DB99523_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// !0 UniRx.Async.UniTask`1/Awaiter<Naninovel.VideoBackground/VideoData>::GetResult()
inline VideoData_t995725B9BB3E0B9FADDA15CD9D34810784D73AD2 * Awaiter_GetResult_m79E7FF75A14DA696B555E10CAE4C3FD7BB336B27 (Awaiter_t2EC4E48D6D8C5EC90776FBA7B42075F059E21967 * __this, const RuntimeMethod* method)
{
	return ((  VideoData_t995725B9BB3E0B9FADDA15CD9D34810784D73AD2 * (*) (Awaiter_t2EC4E48D6D8C5EC90776FBA7B42075F059E21967 *, const RuntimeMethod*))Awaiter_GetResult_mA2671B42F2B3BB4DB9B60F8C4819540DC10917FF_gshared)(__this, method);
}
// System.Boolean Naninovel.CancellationToken::get_CancelASAP()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CancellationToken_get_CancelASAP_m8EA148C6C8867174C394EBB82DF2628DCAF087E8 (CancellationToken_t6347F75AB41E1331E57D91A3F883A02D5FA698E3 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Video.VideoPlayer::get_isPrepared()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoPlayer_get_isPrepared_m747401DA6ADE60190873F918AD83AB7382D0E423 (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Video.VideoPlayer::Prepare()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_Prepare_m3B32C1AA66866136ABDEF92F762D3479C0459903 (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, const RuntimeMethod* method);
// UniRx.Async.YieldAwaitable Naninovel.AsyncUtils::get_WaitEndOfFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YieldAwaitable_t0AF0E5F39D5840C6614B26D0AF53DD2A63037F56  AsyncUtils_get_WaitEndOfFrame_mDC0867AF8ACE2E027D9A6052C0319E6EAB897531 (const RuntimeMethod* method);
// UniRx.Async.YieldAwaitable/Awaiter UniRx.Async.YieldAwaitable::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Awaiter_tC53C155C42BF6DB6BBD8673DE4B04D42737173C6  YieldAwaitable_GetAwaiter_m1769A471365684D6C113CE00DB3C960D11E7B3AF (YieldAwaitable_t0AF0E5F39D5840C6614B26D0AF53DD2A63037F56 * __this, const RuntimeMethod* method);
// System.Boolean UniRx.Async.YieldAwaitable/Awaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m42F03E6C535107C5916EFDECAD881942718FCD6A (Awaiter_tC53C155C42BF6DB6BBD8673DE4B04D42737173C6 * __this, const RuntimeMethod* method);
// System.Void UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder::AwaitUnsafeOnCompleted<UniRx.Async.YieldAwaitable/Awaiter,Naninovel.VideoBackground/<ChangeAppearanceAsync>d__22>(!!0&,!!1&)
inline void AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tC53C155C42BF6DB6BBD8673DE4B04D42737173C6_TisU3CChangeAppearanceAsyncU3Ed__22_tCB35366F250EDB2DEE0257694727C11654A86404_m10E9C25C2D2B3DE78A32F78E348CAF3175B196DE (AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 * __this, Awaiter_tC53C155C42BF6DB6BBD8673DE4B04D42737173C6 * ___awaiter0, U3CChangeAppearanceAsyncU3Ed__22_tCB35366F250EDB2DEE0257694727C11654A86404 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 *, Awaiter_tC53C155C42BF6DB6BBD8673DE4B04D42737173C6 *, U3CChangeAppearanceAsyncU3Ed__22_tCB35366F250EDB2DEE0257694727C11654A86404 *, const RuntimeMethod*))AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tC53C155C42BF6DB6BBD8673DE4B04D42737173C6_TisU3CChangeAppearanceAsyncU3Ed__22_tCB35366F250EDB2DEE0257694727C11654A86404_m10E9C25C2D2B3DE78A32F78E348CAF3175B196DE_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void UniRx.Async.YieldAwaitable/Awaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Awaiter_GetResult_m477940C595015AFCD4FEB055A82A663633BD5E47 (Awaiter_tC53C155C42BF6DB6BBD8673DE4B04D42737173C6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Video.VideoPlayer::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_Play_m2AD0D39D70055A5AADCF63430D3D9CEC7DCB0516 (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, const RuntimeMethod* method);
// System.Void UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder::AwaitUnsafeOnCompleted<UniRx.Async.UniTask/Awaiter,Naninovel.VideoBackground/<ChangeAppearanceAsync>d__22>(!!0&,!!1&)
inline void AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822_TisU3CChangeAppearanceAsyncU3Ed__22_tCB35366F250EDB2DEE0257694727C11654A86404_m30770BFA9DCC0171DA0E040188C2B23A70D0E47D (AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 * __this, Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822 * ___awaiter0, U3CChangeAppearanceAsyncU3Ed__22_tCB35366F250EDB2DEE0257694727C11654A86404 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 *, Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822 *, U3CChangeAppearanceAsyncU3Ed__22_tCB35366F250EDB2DEE0257694727C11654A86404 *, const RuntimeMethod*))AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822_TisU3CChangeAppearanceAsyncU3Ed__22_tCB35366F250EDB2DEE0257694727C11654A86404_m30770BFA9DCC0171DA0E040188C2B23A70D0E47D_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.String,Naninovel.VideoBackground/VideoData>::GetEnumerator()
inline Enumerator_tDB6A1BEA398EC278FC8C6F9F2D6B2B2715BB7AB8  Dictionary_2_GetEnumerator_mAC879765AB7EDF9E072F95ED3C8BC40FA794B766 (Dictionary_2_tB0D6F5B541B0F32F9BD4447204B50E4D0A15213E * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tDB6A1BEA398EC278FC8C6F9F2D6B2B2715BB7AB8  (*) (Dictionary_2_tB0D6F5B541B0F32F9BD4447204B50E4D0A15213E *, const RuntimeMethod*))Dictionary_2_GetEnumerator_mA44BBB15DFBD8E08B5E60E23AA5044D45C3F889F_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.String,Naninovel.VideoBackground/VideoData>::get_Current()
inline KeyValuePair_2_tCFA0FBC9A13D1364F07E32F988EE04F5B9FA273C  Enumerator_get_Current_mFDCBD2AADA33545968833C390A53F22CB197FCED_inline (Enumerator_tDB6A1BEA398EC278FC8C6F9F2D6B2B2715BB7AB8 * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tCFA0FBC9A13D1364F07E32F988EE04F5B9FA273C  (*) (Enumerator_tDB6A1BEA398EC278FC8C6F9F2D6B2B2715BB7AB8 *, const RuntimeMethod*))Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.KeyValuePair`2<System.String,Naninovel.VideoBackground/VideoData>::get_Key()
inline String_t* KeyValuePair_2_get_Key_mB30B09059F431D44DC3AB26FEA5731E7C2515BE2_inline (KeyValuePair_2_tCFA0FBC9A13D1364F07E32F988EE04F5B9FA273C * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tCFA0FBC9A13D1364F07E32F988EE04F5B9FA273C *, const RuntimeMethod*))KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline)(__this, method);
}
// System.Boolean Naninovel.StringUtils::EqualsFast(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringUtils_EqualsFast_mDE173149F315D22324BDCA778964F2EAA055E6C7 (String_t* ___content0, String_t* ___comparedString1, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.String,Naninovel.VideoBackground/VideoData>::get_Value()
inline VideoData_t995725B9BB3E0B9FADDA15CD9D34810784D73AD2 * KeyValuePair_2_get_Value_mC8F3B6053EC08645E87B9CFF69A1578B1328AE39_inline (KeyValuePair_2_tCFA0FBC9A13D1364F07E32F988EE04F5B9FA273C * __this, const RuntimeMethod* method)
{
	return ((  VideoData_t995725B9BB3E0B9FADDA15CD9D34810784D73AD2 * (*) (KeyValuePair_2_tCFA0FBC9A13D1364F07E32F988EE04F5B9FA273C *, const RuntimeMethod*))KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Video.VideoPlayer::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_Stop_mC65F299C170F41E6823207427F782982031DE293 (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,Naninovel.VideoBackground/VideoData>::MoveNext()
inline bool Enumerator_MoveNext_mB601D7C83EE42426390069F44706A90BF436A5CE (Enumerator_tDB6A1BEA398EC278FC8C6F9F2D6B2B2715BB7AB8 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tDB6A1BEA398EC278FC8C6F9F2D6B2B2715BB7AB8 *, const RuntimeMethod*))Enumerator_MoveNext_mCAD84084129516BD41DE5CC3E1FABA5A8DF836D0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,Naninovel.VideoBackground/VideoData>::Dispose()
inline void Enumerator_Dispose_m3CA0ECC6167320AC4CFEDE2D74C5987D6FD4D33E (Enumerator_tDB6A1BEA398EC278FC8C6F9F2D6B2B2715BB7AB8 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tDB6A1BEA398EC278FC8C6F9F2D6B2B2715BB7AB8 *, const RuntimeMethod*))Enumerator_Dispose_m85CA135BAB22C9F0C87C84AB90FF6740D1859279_gshared)(__this, method);
}
// System.Void Naninovel.VideoBackground/<ChangeAppearanceAsync>d__22::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CChangeAppearanceAsyncU3Ed__22_MoveNext_m259C21069894CC52AF270951781951062E3F6EF8 (U3CChangeAppearanceAsyncU3Ed__22_tCB35366F250EDB2DEE0257694727C11654A86404 * __this, const RuntimeMethod* method);
// System.Void Naninovel.VideoBackground/<ChangeAppearanceAsync>d__22::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CChangeAppearanceAsyncU3Ed__22_SetStateMachine_mB0A790EB161DB8277075A2C9F3ECFD19921D7AF7 (U3CChangeAppearanceAsyncU3Ed__22_tCB35366F250EDB2DEE0257694727C11654A86404 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder::AwaitUnsafeOnCompleted<UniRx.Async.UniTask/Awaiter,Naninovel.VideoBackground/<ChangeVisibilityAsync>d__23>(!!0&,!!1&)
inline void AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822_TisU3CChangeVisibilityAsyncU3Ed__23_t360BFA64DB92AE4FBA3007EE6CDFF301F0D0FE0F_mF51EDE0488A5AE0AF5A4E44E055B7642504E4E03 (AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 * __this, Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822 * ___awaiter0, U3CChangeVisibilityAsyncU3Ed__23_t360BFA64DB92AE4FBA3007EE6CDFF301F0D0FE0F * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 *, Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822 *, U3CChangeVisibilityAsyncU3Ed__23_t360BFA64DB92AE4FBA3007EE6CDFF301F0D0FE0F *, const RuntimeMethod*))AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822_TisU3CChangeVisibilityAsyncU3Ed__23_t360BFA64DB92AE4FBA3007EE6CDFF301F0D0FE0F_mF51EDE0488A5AE0AF5A4E44E055B7642504E4E03_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Naninovel.VideoBackground/<ChangeVisibilityAsync>d__23::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CChangeVisibilityAsyncU3Ed__23_MoveNext_m31006CEF9681B797B889DE5F74DF147449AB210D (U3CChangeVisibilityAsyncU3Ed__23_t360BFA64DB92AE4FBA3007EE6CDFF301F0D0FE0F * __this, const RuntimeMethod* method);
// System.Void Naninovel.VideoBackground/<ChangeVisibilityAsync>d__23::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CChangeVisibilityAsyncU3Ed__23_SetStateMachine_m12AD2935420CBDA59552D6D8E92CF1CDFF01CDC0 (U3CChangeVisibilityAsyncU3Ed__23_t360BFA64DB92AE4FBA3007EE6CDFF301F0D0FE0F * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Naninovel.VideoBackground/VideoData>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m59D87BB44FAFD3C7C9DE31BE1B08994382E11D8F (Dictionary_2_tB0D6F5B541B0F32F9BD4447204B50E4D0A15213E * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tB0D6F5B541B0F32F9BD4447204B50E4D0A15213E *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_gshared)(__this, ___key0, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.String,Naninovel.VideoBackground/VideoData>::get_Item(!0)
inline VideoData_t995725B9BB3E0B9FADDA15CD9D34810784D73AD2 * Dictionary_2_get_Item_mAFCA1A3083CEDF7F71BAB747557FBC46159F20EE (Dictionary_2_tB0D6F5B541B0F32F9BD4447204B50E4D0A15213E * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  VideoData_t995725B9BB3E0B9FADDA15CD9D34810784D73AD2 * (*) (Dictionary_2_tB0D6F5B541B0F32F9BD4447204B50E4D0A15213E *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared)(__this, ___key0, method);
}
// System.Void UnityEngine.RenderTexture::.ctor(UnityEngine.RenderTextureDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture__ctor_m96C4C4C7B41EE884420046EFE4B8EC528B10D8BD (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * __this, RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  ___desc0, const RuntimeMethod* method);
// T Naninovel.Engine::CreateObject<UnityEngine.Video.VideoPlayer>(System.String,System.Nullable`1<System.Int32>)
inline VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * Engine_CreateObject_TisVideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86_m056B67E75605786E551EBC5A444F3913D1205D78 (String_t* ___name0, Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___layer1, const RuntimeMethod* method)
{
	return ((  VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * (*) (String_t*, Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 , const RuntimeMethod*))Engine_CreateObject_TisRuntimeObject_mC57DB424C0FFEC61C1423DBF51F029DF4FC27B64_gshared)(___name0, ___layer1, method);
}
// System.Void UnityEngine.Video.VideoPlayer::set_playOnAwake(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_playOnAwake_m30420ABD3827A5A7BD663815D64DBA68CF88A8D2 (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, bool ___value0, const RuntimeMethod* method);
// UniRx.Async.UniTask`1/Awaiter<!0> UniRx.Async.UniTask`1<Naninovel.Resource`1<UnityEngine.Video.VideoClip>>::GetAwaiter()
inline Awaiter_t8473B6ABE125918A05A5157E70D00B9F0DE43CCD  UniTask_1_GetAwaiter_m9924469BDE71E4B2A85924A17439D08A8E3A28CC (UniTask_1_t0F1467ED8AB1A67EAA6B956FFCFECB83640C3607 * __this, const RuntimeMethod* method)
{
	return ((  Awaiter_t8473B6ABE125918A05A5157E70D00B9F0DE43CCD  (*) (UniTask_1_t0F1467ED8AB1A67EAA6B956FFCFECB83640C3607 *, const RuntimeMethod*))UniTask_1_GetAwaiter_mFE265EC0E05738D9AFD7635879A98D0C95E78B73_gshared)(__this, method);
}
// System.Boolean UniRx.Async.UniTask`1/Awaiter<Naninovel.Resource`1<UnityEngine.Video.VideoClip>>::get_IsCompleted()
inline bool Awaiter_get_IsCompleted_m0C5A674B5B3230390E66084EA8F2E253A7B71A62 (Awaiter_t8473B6ABE125918A05A5157E70D00B9F0DE43CCD * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Awaiter_t8473B6ABE125918A05A5157E70D00B9F0DE43CCD *, const RuntimeMethod*))Awaiter_get_IsCompleted_m296D11726E28D6634ADBC1D9239699D4E655A38F_gshared)(__this, method);
}
// System.Void UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder`1<Naninovel.VideoBackground/VideoData>::AwaitUnsafeOnCompleted<UniRx.Async.UniTask`1/Awaiter<Naninovel.Resource`1<UnityEngine.Video.VideoClip>>,Naninovel.VideoBackground/<GetOrLoadVideoDataAsync>d__30>(!!0&,!!1&)
inline void AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_t8473B6ABE125918A05A5157E70D00B9F0DE43CCD_TisU3CGetOrLoadVideoDataAsyncU3Ed__30_tDF4395E0B62F17B7558DC26A111F9659F3932FA6_m1448B27CBD80B26F3A45F1ED57DFE92A46819A90 (AsyncUniTaskMethodBuilder_1_t402090290561B301A3591C90C52DFCA007AEC1E4 * __this, Awaiter_t8473B6ABE125918A05A5157E70D00B9F0DE43CCD * ___awaiter0, U3CGetOrLoadVideoDataAsyncU3Ed__30_tDF4395E0B62F17B7558DC26A111F9659F3932FA6 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_t402090290561B301A3591C90C52DFCA007AEC1E4 *, Awaiter_t8473B6ABE125918A05A5157E70D00B9F0DE43CCD *, U3CGetOrLoadVideoDataAsyncU3Ed__30_tDF4395E0B62F17B7558DC26A111F9659F3932FA6 *, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_tFB8E8133A57BB3B9C3FDFDF0BA2FE30DA1221D7D_TisU3CGetOrLoadVideoDataAsyncU3Ed__30_tDF4395E0B62F17B7558DC26A111F9659F3932FA6_m0E50F2F2D0680982216F3468030D1662D8DE190C_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// !0 UniRx.Async.UniTask`1/Awaiter<Naninovel.Resource`1<UnityEngine.Video.VideoClip>>::GetResult()
inline Resource_1_t8A5083E4E0F7B7D7F3E64338DF3B0C6103550999 * Awaiter_GetResult_m43A2DBD3CAA0B22FDA0FDF1AA73DFA740188D36B (Awaiter_t8473B6ABE125918A05A5157E70D00B9F0DE43CCD * __this, const RuntimeMethod* method)
{
	return ((  Resource_1_t8A5083E4E0F7B7D7F3E64338DF3B0C6103550999 * (*) (Awaiter_t8473B6ABE125918A05A5157E70D00B9F0DE43CCD *, const RuntimeMethod*))Awaiter_GetResult_mA2671B42F2B3BB4DB9B60F8C4819540DC10917FF_gshared)(__this, method);
}
// System.Boolean Naninovel.Resource::get_Valid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Resource_get_Valid_m444B77C909FAAAA9DD697551D30A2D7A72DC5EE9 (Resource_t5E31300A22B216FCEBBC753F6F471D78393ED06C * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.Video.VideoPlayer::set_source(UnityEngine.Video.VideoSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_source_m5F69BF92205E90B384B83E73403A43735E2526F7 (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, int32_t ___value0, const RuntimeMethod* method);
// TResource Naninovel.Resource`1<UnityEngine.Video.VideoClip>::op_Implicit(Naninovel.Resource`1<TResource>)
inline VideoClip_tA8C2507553BEE394C46B7A876D6F56DD09F6C90F * Resource_1_op_Implicit_m85FFDD6CB563EE688362E3C87045C3B55E317EC6 (Resource_1_t8A5083E4E0F7B7D7F3E64338DF3B0C6103550999 * ___resource0, const RuntimeMethod* method)
{
	return ((  VideoClip_tA8C2507553BEE394C46B7A876D6F56DD09F6C90F * (*) (Resource_1_t8A5083E4E0F7B7D7F3E64338DF3B0C6103550999 *, const RuntimeMethod*))Resource_1_op_Implicit_mC8C7A1285F8D97DBAF5B715F15EA962ED2636252_gshared)(___resource0, method);
}
// System.Void UnityEngine.Video.VideoPlayer::set_clip(UnityEngine.Video.VideoClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_clip_mECA56632F836FE1297D1A10115570E07D05FDB6C (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, VideoClip_tA8C2507553BEE394C46B7A876D6F56DD09F6C90F * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Video.VideoPlayer::set_renderMode(UnityEngine.Video.VideoRenderMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_renderMode_mAD567D3904B2D8C3B2E5A131A5673D89418ABE06 (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Video.VideoPlayer::set_targetTexture(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_targetTexture_mFA47467D9AC733F509941F3618FDC5829A4D37F4 (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Video.VideoPlayer::set_isLooping(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_isLooping_mBA932FED6AA886C07C4770D7FAC369D249F0E7C2 (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Video.VideoPlayer::set_audioOutputMode(UnityEngine.Video.VideoAudioOutputMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_audioOutputMode_mF5F9D36B418462081E9173675C0D5945BA432510 (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Naninovel.VideoBackground/VideoData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoData__ctor_mE901F52C9F0FFE816358AFED2C0C8CD4A725DB5D (VideoData_t995725B9BB3E0B9FADDA15CD9D34810784D73AD2 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,Naninovel.VideoBackground/VideoData>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mF9BB9CBD018363A66292571606FE6D1ABA58895A (Dictionary_2_tB0D6F5B541B0F32F9BD4447204B50E4D0A15213E * __this, String_t* ___key0, VideoData_t995725B9BB3E0B9FADDA15CD9D34810784D73AD2 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB0D6F5B541B0F32F9BD4447204B50E4D0A15213E *, String_t*, VideoData_t995725B9BB3E0B9FADDA15CD9D34810784D73AD2 *, const RuntimeMethod*))Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared)(__this, ___key0, ___value1, method);
}
// System.Void UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder`1<Naninovel.VideoBackground/VideoData>::SetException(System.Exception)
inline void AsyncUniTaskMethodBuilder_1_SetException_m387C9F2DAA3C4AB1ACC58EDB59508FD752AA032E (AsyncUniTaskMethodBuilder_1_t402090290561B301A3591C90C52DFCA007AEC1E4 * __this, Exception_t * ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_t402090290561B301A3591C90C52DFCA007AEC1E4 *, Exception_t *, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetException_m6328D8C00DCE433F59B0E590D53DC47B3C326C47_gshared)(__this, ___exception0, method);
}
// System.Void UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder`1<Naninovel.VideoBackground/VideoData>::SetResult(!0)
inline void AsyncUniTaskMethodBuilder_1_SetResult_mB10E8FA1F24E550A04D2804063FC4FC3F15C12CD (AsyncUniTaskMethodBuilder_1_t402090290561B301A3591C90C52DFCA007AEC1E4 * __this, VideoData_t995725B9BB3E0B9FADDA15CD9D34810784D73AD2 * ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_t402090290561B301A3591C90C52DFCA007AEC1E4 *, VideoData_t995725B9BB3E0B9FADDA15CD9D34810784D73AD2 *, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetResult_m8D2DCDC38E5201D7EBE1B1EC8B8EC8FA593D51EF_gshared)(__this, ___result0, method);
}
// System.Void Naninovel.VideoBackground/<GetOrLoadVideoDataAsync>d__30::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetOrLoadVideoDataAsyncU3Ed__30_MoveNext_m7E941683BDD788C7F8CD2B291A42D66AA54F7BA8 (U3CGetOrLoadVideoDataAsyncU3Ed__30_tDF4395E0B62F17B7558DC26A111F9659F3932FA6 * __this, const RuntimeMethod* method);
// System.Void UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder`1<Naninovel.VideoBackground/VideoData>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncUniTaskMethodBuilder_1_SetStateMachine_m2866481F898DFD254796CE9AFF234B5F7E993699 (AsyncUniTaskMethodBuilder_1_t402090290561B301A3591C90C52DFCA007AEC1E4 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_t402090290561B301A3591C90C52DFCA007AEC1E4 *, RuntimeObject*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetStateMachine_mCDC7988DB8C28883CBBADA9A54F310D878B28DA8_gshared)(__this, ___stateMachine0, method);
}
// System.Void Naninovel.VideoBackground/<GetOrLoadVideoDataAsync>d__30::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetOrLoadVideoDataAsyncU3Ed__30_SetStateMachine_m6A7677E7268703994B65467051E987636E75127A (U3CGetOrLoadVideoDataAsyncU3Ed__30_tDF4395E0B62F17B7558DC26A111F9659F3932FA6 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder::AwaitUnsafeOnCompleted<UniRx.Async.UniTask`1/Awaiter<Naninovel.VideoBackground/VideoData>,Naninovel.VideoBackground/<HoldResourcesAsync>d__24>(!!0&,!!1&)
inline void AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t2EC4E48D6D8C5EC90776FBA7B42075F059E21967_TisU3CHoldResourcesAsyncU3Ed__24_t69B7F8032AABA06C6ACEBB741DE6BB2F6A3F0359_mAAC7B27E739DD3F444C8C16454AC7977D10CA709 (AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 * __this, Awaiter_t2EC4E48D6D8C5EC90776FBA7B42075F059E21967 * ___awaiter0, U3CHoldResourcesAsyncU3Ed__24_t69B7F8032AABA06C6ACEBB741DE6BB2F6A3F0359 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 *, Awaiter_t2EC4E48D6D8C5EC90776FBA7B42075F059E21967 *, U3CHoldResourcesAsyncU3Ed__24_t69B7F8032AABA06C6ACEBB741DE6BB2F6A3F0359 *, const RuntimeMethod*))AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFB8E8133A57BB3B9C3FDFDF0BA2FE30DA1221D7D_TisU3CHoldResourcesAsyncU3Ed__24_t69B7F8032AABA06C6ACEBB741DE6BB2F6A3F0359_m1B73F3B661694B3106DA19C2FE7DE65E72784074_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Naninovel.VideoBackground/<HoldResourcesAsync>d__24::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CHoldResourcesAsyncU3Ed__24_MoveNext_mCEE8F758B0B952C0E24C52F725DE9800016386B6 (U3CHoldResourcesAsyncU3Ed__24_t69B7F8032AABA06C6ACEBB741DE6BB2F6A3F0359 * __this, const RuntimeMethod* method);
// System.Void Naninovel.VideoBackground/<HoldResourcesAsync>d__24::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CHoldResourcesAsyncU3Ed__24_SetStateMachine_m4C518DAE048374881F6ADC4FFC12D3F669EEEFFE (U3CHoldResourcesAsyncU3Ed__24_t69B7F8032AABA06C6ACEBB741DE6BB2F6A3F0359 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// UniRx.Async.UniTask Naninovel.VideoBackground::<>n__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t41263A639210D10E03708EE0B4B03A964D7EEE3C  VideoBackground_U3CU3En__0_mAEF3789196E0E18EF3AFEA3DFE5809CEFC3D7C82 (VideoBackground_tC31D69C74D104E5F414AAE56250D1AAD449B7F47 * __this, const RuntimeMethod* method);
// System.Void UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder::AwaitUnsafeOnCompleted<UniRx.Async.UniTask/Awaiter,Naninovel.VideoBackground/<InitializeAsync>d__21>(!!0&,!!1&)
inline void AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822_TisU3CInitializeAsyncU3Ed__21_t705DB795DF855A7C45BFFDF1527CB27C7A01CE12_m3D5595F7E80A704D725DDF32AF0D8AABE7DD86BF (AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 * __this, Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822 * ___awaiter0, U3CInitializeAsyncU3Ed__21_t705DB795DF855A7C45BFFDF1527CB27C7A01CE12 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 *, Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822 *, U3CInitializeAsyncU3Ed__21_t705DB795DF855A7C45BFFDF1527CB27C7A01CE12 *, const RuntimeMethod*))AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822_TisU3CInitializeAsyncU3Ed__21_t705DB795DF855A7C45BFFDF1527CB27C7A01CE12_m3D5595F7E80A704D725DDF32AF0D8AABE7DD86BF_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// System.Void Naninovel.TextureUtils::Clear(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureUtils_Clear_m325265213022B14ECC9D861D100027B2171C32A2 (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___renderTexture0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<Naninovel.TransitionalTextureRenderer>()
inline TransitionalTextureRenderer_t230F9601A1BB9348394D1BE5E3485FBC441650C9 * GameObject_AddComponent_TisTransitionalTextureRenderer_t230F9601A1BB9348394D1BE5E3485FBC441650C9_m0C88C261CEE4BFA988B88C34259FD39A7F4D2CFE (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  TransitionalTextureRenderer_t230F9601A1BB9348394D1BE5E3485FBC441650C9 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// System.Void Naninovel.VideoBackground::set_TransitionalRenderer(Naninovel.TransitionalRenderer)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VideoBackground_set_TransitionalRenderer_mFE6C595A7424534EEDEBD75423697E51819408FB_inline (VideoBackground_tC31D69C74D104E5F414AAE56250D1AAD449B7F47 * __this, TransitionalRenderer_t417C5BDB13977F6209462DBA455A7E2BE95B61F5 * ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<Naninovel.TransitionalSpriteRenderer>()
inline TransitionalSpriteRenderer_tFE7D599199337543C9BDFDEC0F355DCA6EAE33AF * GameObject_AddComponent_TisTransitionalSpriteRenderer_tFE7D599199337543C9BDFDEC0F355DCA6EAE33AF_m59AE021946509813109219F1A0935D0EFE9EF9E7 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  TransitionalSpriteRenderer_tFE7D599199337543C9BDFDEC0F355DCA6EAE33AF * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// System.Void Naninovel.VideoBackground/<InitializeAsync>d__21::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeAsyncU3Ed__21_MoveNext_mAA0B4BD483BDAEA55B34EE8BBD6CE2E1C20B2AC8 (U3CInitializeAsyncU3Ed__21_t705DB795DF855A7C45BFFDF1527CB27C7A01CE12 * __this, const RuntimeMethod* method);
// System.Void Naninovel.VideoBackground/<InitializeAsync>d__21::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeAsyncU3Ed__21_SetStateMachine_mCC37D7B830F256BFEC36992006289932524B63F1 (U3CInitializeAsyncU3Ed__21_t705DB795DF855A7C45BFFDF1527CB27C7A01CE12 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void Naninovel.VirtualResourceProvider/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m9A2CC443F7E620D547F99D73C3F2BFB9B0C88193 (U3CU3Ec_tAA8106464A5C77323F9EC34B70E387C945F92BD0 * __this, const RuntimeMethod* method);
// System.Void Naninovel.Folder::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Folder__ctor_mA2A581CC1E983470400F8CE72D8FC853F5C8F3B9 (Folder_tAD08F7F2D5EA96451A3A5774EDD65340B33E754D * __this, String_t* ___path0, const RuntimeMethod* method);
// System.Void UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder::AwaitUnsafeOnCompleted<UniRx.Async.YieldAwaitable/Awaiter,Naninovel.Commands.Wait/<ExecuteAsync>d__6>(!!0&,!!1&)
inline void AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tC53C155C42BF6DB6BBD8673DE4B04D42737173C6_TisU3CExecuteAsyncU3Ed__6_tD382787452B3A05D65DA90FC93BEB427B31222B4_m19E8F79C50F3F47DB637770D596BEBB755B84487 (AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 * __this, Awaiter_tC53C155C42BF6DB6BBD8673DE4B04D42737173C6 * ___awaiter0, U3CExecuteAsyncU3Ed__6_tD382787452B3A05D65DA90FC93BEB427B31222B4 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 *, Awaiter_tC53C155C42BF6DB6BBD8673DE4B04D42737173C6 *, U3CExecuteAsyncU3Ed__6_tD382787452B3A05D65DA90FC93BEB427B31222B4 *, const RuntimeMethod*))AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tC53C155C42BF6DB6BBD8673DE4B04D42737173C6_TisU3CExecuteAsyncU3Ed__6_tD382787452B3A05D65DA90FC93BEB427B31222B4_m19E8F79C50F3F47DB637770D596BEBB755B84487_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Boolean Naninovel.Commands.Command::Assigned(Naninovel.Commands.ICommandParameter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Command_Assigned_mF0EF028C357C0756FC74C50A8222C1B424BC787E (RuntimeObject* ___parameter0, const RuntimeMethod* method);
// System.Void Naninovel.Commands.Command::LogWarningWithPosition(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Command_LogWarningWithPosition_m84CA831BB688C4700B5E01CF40F8B83C5A6CCE2E (Command_tFD9CA828C60C3E7CEA51152A05F64D1ED3F98E2A * __this, String_t* ___message0, const RuntimeMethod* method);
// Naninovel.IScriptPlayer Naninovel.Commands.Wait::get_scriptPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Wait_get_scriptPlayer_mEACD3C5E7496EBB5F9D20597EDE6F80DFC670721 (const RuntimeMethod* method);
// System.Boolean Naninovel.StringUtils::StartsWithFast(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringUtils_StartsWithFast_m333F1CEBB6C4D5D8EED5581E4482B9F567DBDC37 (String_t* ___content0, String_t* ___match1, const RuntimeMethod* method);
// System.String Naninovel.StringUtils::GetAfterFirst(System.String,System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringUtils_GetAfterFirst_m9891D3F6B904B2F70FD51FC52D5F3E788E880E04 (String_t* ___content0, String_t* ___matchString1, int32_t ___comp2, const RuntimeMethod* method);
// System.Boolean Naninovel.ParseUtils::TryInvariantFloat(System.String,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ParseUtils_TryInvariantFloat_m6143488E7C3590E62387B6A9C0E78E7595C37C49 (String_t* ___str0, float* ___result1, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844 (const RuntimeMethod* method);
// System.Boolean Naninovel.CancellationToken::get_CancellationRequested()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CancellationToken_get_CancellationRequested_mFE620435F6D5F1369C763A8F50BB6DD3DC88918B (CancellationToken_t6347F75AB41E1331E57D91A3F883A02D5FA698E3 * __this, const RuntimeMethod* method);
// Naninovel.IInputManager Naninovel.Commands.Wait::get_inputManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Wait_get_inputManager_mFB0048387B6E3DC2B9EDAEE977639A07F437EDA0 (const RuntimeMethod* method);
// Naninovel.IInputSampler Naninovel.InputManagerExtensions::GetContinue(Naninovel.IInputManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InputManagerExtensions_GetContinue_m5C921BAA5C256988CC26AE93C4E18AFACBE8BBA8 (RuntimeObject* ___mng0, const RuntimeMethod* method);
// Naninovel.IInputSampler Naninovel.InputManagerExtensions::GetSkip(Naninovel.IInputManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InputManagerExtensions_GetSkip_m19EE8D1978ED540BB0CACA8301505E4221B224AA (RuntimeObject* ___mng0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m7BB718D8E58B807184491F64AFF0649517E56567 (const RuntimeMethod* method);
// System.Void Naninovel.Commands.Wait/<ExecuteAsync>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteAsyncU3Ed__6_MoveNext_mDB200EB3873DC7072C0ED2763CC1C29E2DC4CF25 (U3CExecuteAsyncU3Ed__6_tD382787452B3A05D65DA90FC93BEB427B31222B4 * __this, const RuntimeMethod* method);
// System.Void Naninovel.Commands.Wait/<ExecuteAsync>d__6::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteAsyncU3Ed__6_SetStateMachine_mBBD52E4D51E3B50640F6E9561052B98983E8E0BA (U3CExecuteAsyncU3Ed__6_tD382787452B3A05D65DA90FC93BEB427B31222B4 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void Naninovel.Commands.Wait::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Wait__ctor_m63223070A65596B74AF65BF36883D4F3C5A6D1B2 (Wait_t6D6FC838510D95749A0C737B03665BACEB27DB74 * __this, const RuntimeMethod* method);
// Naninovel.Commands.StringParameter Naninovel.Commands.StringParameter::op_Implicit(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringParameter_t33BF466D3AD2402CEA10C41D765102E093891CA8 * StringParameter_op_Implicit_m826C7FB19E8D488F30E78DA497F1E60A4E1AB5C0 (String_t* ___value0, const RuntimeMethod* method);
// System.Void UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder::AwaitUnsafeOnCompleted<UniRx.Async.UniTask/Awaiter,Naninovel.Commands.WaitForInput/<ExecuteAsync>d__0>(!!0&,!!1&)
inline void AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822_TisU3CExecuteAsyncU3Ed__0_t67878E6A3EBDB121016F7589B616F5D6AE4AD25A_mC6BFC7F52648326FF291589C8A95BA4E4998AF30 (AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 * __this, Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822 * ___awaiter0, U3CExecuteAsyncU3Ed__0_t67878E6A3EBDB121016F7589B616F5D6AE4AD25A * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 *, Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822 *, U3CExecuteAsyncU3Ed__0_t67878E6A3EBDB121016F7589B616F5D6AE4AD25A *, const RuntimeMethod*))AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822_TisU3CExecuteAsyncU3Ed__0_t67878E6A3EBDB121016F7589B616F5D6AE4AD25A_mC6BFC7F52648326FF291589C8A95BA4E4998AF30_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Naninovel.Commands.WaitForInput/<ExecuteAsync>d__0::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteAsyncU3Ed__0_MoveNext_mF8880300D5B943073FD5C897C21F90B666E8A9BA (U3CExecuteAsyncU3Ed__0_t67878E6A3EBDB121016F7589B616F5D6AE4AD25A * __this, const RuntimeMethod* method);
// System.Void Naninovel.Commands.WaitForInput/<ExecuteAsync>d__0::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteAsyncU3Ed__0_SetStateMachine_m466C3EA130D13E53A53355DA1BD2A2568142A3BA (U3CExecuteAsyncU3Ed__0_t67878E6A3EBDB121016F7589B616F5D6AE4AD25A * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Single[] Naninovel.WavToAudioClipConverter::Pcm16ToFloatArray(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* WavToAudioClipConverter_Pcm16ToFloatArray_m93A21DDCE3E36E7C3F9529C76F62282F69E1DC40 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___input0, const RuntimeMethod* method);
// System.Void Naninovel.WavToAudioClipConverter/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m958079A3784CDEBF39C523DF080BC157E5D77E8F (U3CU3Ec__DisplayClass4_0_t30A7A5DA80629F9EF81E32295173003C5F1559FC * __this, const RuntimeMethod* method);
// System.Void System.Func`1<System.Single[]>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m705E8DDC1A6A217302FF15163E130B76094365A5 (Func_1_tB9DF8D3D9F8D8DE3959D9A3C4942EA354A2D14A8 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_tB9DF8D3D9F8D8DE3959D9A3C4942EA354A2D14A8 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_1__ctor_m2A4FE889FB540EA198F7757D17DC2290461E5EE9_gshared)(__this, ___object0, ___method1, method);
}
// UniRx.Async.UniTask`1<!!0> UniRx.Async.UniTask::Run<System.Single[]>(System.Func`1<!!0>,System.Boolean)
inline UniTask_1_tC50F18074075969ECB5EE6133BCE0BB2665BB88F  UniTask_Run_TisSingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_m0F9B2725913918B9A55210266A7779106E745A21 (Func_1_tB9DF8D3D9F8D8DE3959D9A3C4942EA354A2D14A8 * ___func0, bool ___configureAwait1, const RuntimeMethod* method)
{
	return ((  UniTask_1_tC50F18074075969ECB5EE6133BCE0BB2665BB88F  (*) (Func_1_tB9DF8D3D9F8D8DE3959D9A3C4942EA354A2D14A8 *, bool, const RuntimeMethod*))UniTask_Run_TisRuntimeObject_m4BAC03A7AB7A5A62CBCA3C028E74D41A28001AE4_gshared)(___func0, ___configureAwait1, method);
}
// UniRx.Async.UniTask`1/Awaiter<!0> UniRx.Async.UniTask`1<System.Single[]>::GetAwaiter()
inline Awaiter_t9F63A7154247DFB58C781A45AF44C5B8E8FE3EE2  UniTask_1_GetAwaiter_m076F414CB98FC7AA200770226C9DD195FC526D1F (UniTask_1_tC50F18074075969ECB5EE6133BCE0BB2665BB88F * __this, const RuntimeMethod* method)
{
	return ((  Awaiter_t9F63A7154247DFB58C781A45AF44C5B8E8FE3EE2  (*) (UniTask_1_tC50F18074075969ECB5EE6133BCE0BB2665BB88F *, const RuntimeMethod*))UniTask_1_GetAwaiter_mFE265EC0E05738D9AFD7635879A98D0C95E78B73_gshared)(__this, method);
}
// System.Boolean UniRx.Async.UniTask`1/Awaiter<System.Single[]>::get_IsCompleted()
inline bool Awaiter_get_IsCompleted_m6B7450FE767682CF047C6FCB442BF39CEEB504B9 (Awaiter_t9F63A7154247DFB58C781A45AF44C5B8E8FE3EE2 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Awaiter_t9F63A7154247DFB58C781A45AF44C5B8E8FE3EE2 *, const RuntimeMethod*))Awaiter_get_IsCompleted_m296D11726E28D6634ADBC1D9239699D4E655A38F_gshared)(__this, method);
}
// System.Void UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder`1<UnityEngine.AudioClip>::AwaitUnsafeOnCompleted<UniRx.Async.UniTask`1/Awaiter<System.Single[]>,Naninovel.WavToAudioClipConverter/<ConvertAsync>d__4>(!!0&,!!1&)
inline void AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_t9F63A7154247DFB58C781A45AF44C5B8E8FE3EE2_TisU3CConvertAsyncU3Ed__4_tA998E40BCEB98D595B4B64AF5448BA9429993BA3_mE9E7304C4807650E8E20D9811C08EBC80D8E4318 (AsyncUniTaskMethodBuilder_1_t06EFF9E0B83B2725F96D09D9E5EBF736DA6B30C1 * __this, Awaiter_t9F63A7154247DFB58C781A45AF44C5B8E8FE3EE2 * ___awaiter0, U3CConvertAsyncU3Ed__4_tA998E40BCEB98D595B4B64AF5448BA9429993BA3 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_t06EFF9E0B83B2725F96D09D9E5EBF736DA6B30C1 *, Awaiter_t9F63A7154247DFB58C781A45AF44C5B8E8FE3EE2 *, U3CConvertAsyncU3Ed__4_tA998E40BCEB98D595B4B64AF5448BA9429993BA3 *, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_tFB8E8133A57BB3B9C3FDFDF0BA2FE30DA1221D7D_TisU3CConvertAsyncU3Ed__4_tA998E40BCEB98D595B4B64AF5448BA9429993BA3_m170D633C64566C0B5CBA2352AC257FD4E2620C18_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// !0 UniRx.Async.UniTask`1/Awaiter<System.Single[]>::GetResult()
inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* Awaiter_GetResult_m515EDC8C4774186F24AAF09E72A9F9D113D90E05 (Awaiter_t9F63A7154247DFB58C781A45AF44C5B8E8FE3EE2 * __this, const RuntimeMethod* method)
{
	return ((  SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* (*) (Awaiter_t9F63A7154247DFB58C781A45AF44C5B8E8FE3EE2 *, const RuntimeMethod*))Awaiter_GetResult_mA2671B42F2B3BB4DB9B60F8C4819540DC10917FF_gshared)(__this, method);
}
// UnityEngine.AudioClip UnityEngine.AudioClip::Create(System.String,System.Int32,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * AudioClip_Create_m889DC46878E297CE089D4182F5FCDC4961529137 (String_t* ___name0, int32_t ___lengthSamples1, int32_t ___channels2, int32_t ___frequency3, bool ___stream4, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.AudioClip::SetData(System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClip_SetData_m3424F9C6C5B7A15491B79F961C30D8F0051E34F7 (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___data0, int32_t ___offsetSamples1, const RuntimeMethod* method);
// System.Void UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder`1<UnityEngine.AudioClip>::SetException(System.Exception)
inline void AsyncUniTaskMethodBuilder_1_SetException_m1A72D51105A7DFD4210C32201341E9B2B74E09D7 (AsyncUniTaskMethodBuilder_1_t06EFF9E0B83B2725F96D09D9E5EBF736DA6B30C1 * __this, Exception_t * ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_t06EFF9E0B83B2725F96D09D9E5EBF736DA6B30C1 *, Exception_t *, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetException_m6328D8C00DCE433F59B0E590D53DC47B3C326C47_gshared)(__this, ___exception0, method);
}
// System.Void UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder`1<UnityEngine.AudioClip>::SetResult(!0)
inline void AsyncUniTaskMethodBuilder_1_SetResult_m3597D4A1F1F083F29D176D4AE7DD785E4D117530 (AsyncUniTaskMethodBuilder_1_t06EFF9E0B83B2725F96D09D9E5EBF736DA6B30C1 * __this, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_t06EFF9E0B83B2725F96D09D9E5EBF736DA6B30C1 *, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE *, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetResult_m8D2DCDC38E5201D7EBE1B1EC8B8EC8FA593D51EF_gshared)(__this, ___result0, method);
}
// System.Void Naninovel.WavToAudioClipConverter/<ConvertAsync>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CConvertAsyncU3Ed__4_MoveNext_mEFB4CA91F5865654D4E75412470D5CF2A2555430 (U3CConvertAsyncU3Ed__4_tA998E40BCEB98D595B4B64AF5448BA9429993BA3 * __this, const RuntimeMethod* method);
// System.Void UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder`1<UnityEngine.AudioClip>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncUniTaskMethodBuilder_1_SetStateMachine_m66A28073FE6171484AA3615E5FA54A6FE4D65189 (AsyncUniTaskMethodBuilder_1_t06EFF9E0B83B2725F96D09D9E5EBF736DA6B30C1 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_t06EFF9E0B83B2725F96D09D9E5EBF736DA6B30C1 *, RuntimeObject*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetStateMachine_mCDC7988DB8C28883CBBADA9A54F310D878B28DA8_gshared)(__this, ___stateMachine0, method);
}
// System.Void Naninovel.WavToAudioClipConverter/<ConvertAsync>d__4::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CConvertAsyncU3Ed__4_SetStateMachine_m35628B8A2B395213E0996A99D88CCBFF6FA19833 (U3CConvertAsyncU3Ed__4_tA998E40BCEB98D595B4B64AF5448BA9429993BA3 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// UniRx.Async.UniTask`1<UnityEngine.AudioClip> Naninovel.WavToAudioClipConverter::ConvertAsync(System.Byte[],System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tD2ECA67D5FF45EF664E0E3B62AFF9FBEAC959D67  WavToAudioClipConverter_ConvertAsync_mCEEE9B66A331E813ED34001646B8FB8478D30090 (WavToAudioClipConverter_t924144CE4EC088BDC7369CD9193A676BD1B41AF9 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___obj0, String_t* ___name1, const RuntimeMethod* method);
// UniRx.Async.UniTask`1/Awaiter<!0> UniRx.Async.UniTask`1<UnityEngine.AudioClip>::GetAwaiter()
inline Awaiter_tD9F19E0615823FE62189D1CB3B5026C8A71A356A  UniTask_1_GetAwaiter_mA00D4B82A51478FB95987DD7495393101D8A100F (UniTask_1_tD2ECA67D5FF45EF664E0E3B62AFF9FBEAC959D67 * __this, const RuntimeMethod* method)
{
	return ((  Awaiter_tD9F19E0615823FE62189D1CB3B5026C8A71A356A  (*) (UniTask_1_tD2ECA67D5FF45EF664E0E3B62AFF9FBEAC959D67 *, const RuntimeMethod*))UniTask_1_GetAwaiter_mFE265EC0E05738D9AFD7635879A98D0C95E78B73_gshared)(__this, method);
}
// System.Boolean UniRx.Async.UniTask`1/Awaiter<UnityEngine.AudioClip>::get_IsCompleted()
inline bool Awaiter_get_IsCompleted_m404E16E7F0F7C2930D48CE04000579DCD369CA52 (Awaiter_tD9F19E0615823FE62189D1CB3B5026C8A71A356A * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Awaiter_tD9F19E0615823FE62189D1CB3B5026C8A71A356A *, const RuntimeMethod*))Awaiter_get_IsCompleted_m296D11726E28D6634ADBC1D9239699D4E655A38F_gshared)(__this, method);
}
// System.Void UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<UniRx.Async.UniTask`1/Awaiter<UnityEngine.AudioClip>,Naninovel.WavToAudioClipConverter/<ConvertAsync>d__6>(!!0&,!!1&)
inline void AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_tD9F19E0615823FE62189D1CB3B5026C8A71A356A_TisU3CConvertAsyncU3Ed__6_tBBEA6021908F80F2BF921901F92D0D931ED03586_m6C4F52B1073E7B3112FF3B58DFA0AC1637EE1B38 (AsyncUniTaskMethodBuilder_1_tDD7DCA035B684680C606A9836E15BC201F62776F * __this, Awaiter_tD9F19E0615823FE62189D1CB3B5026C8A71A356A * ___awaiter0, U3CConvertAsyncU3Ed__6_tBBEA6021908F80F2BF921901F92D0D931ED03586 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_tDD7DCA035B684680C606A9836E15BC201F62776F *, Awaiter_tD9F19E0615823FE62189D1CB3B5026C8A71A356A *, U3CConvertAsyncU3Ed__6_tBBEA6021908F80F2BF921901F92D0D931ED03586 *, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_tFB8E8133A57BB3B9C3FDFDF0BA2FE30DA1221D7D_TisU3CConvertAsyncU3Ed__6_tBBEA6021908F80F2BF921901F92D0D931ED03586_m1AF4E0D75FA21FB89B759F73FAC19D02A3660022_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// !0 UniRx.Async.UniTask`1/Awaiter<UnityEngine.AudioClip>::GetResult()
inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * Awaiter_GetResult_m76F1012F0193703F8042426640A8C9D1A42C324F (Awaiter_tD9F19E0615823FE62189D1CB3B5026C8A71A356A * __this, const RuntimeMethod* method)
{
	return ((  AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * (*) (Awaiter_tD9F19E0615823FE62189D1CB3B5026C8A71A356A *, const RuntimeMethod*))Awaiter_GetResult_mA2671B42F2B3BB4DB9B60F8C4819540DC10917FF_gshared)(__this, method);
}
// System.Void UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Object>::SetException(System.Exception)
inline void AsyncUniTaskMethodBuilder_1_SetException_m6328D8C00DCE433F59B0E590D53DC47B3C326C47 (AsyncUniTaskMethodBuilder_1_tDD7DCA035B684680C606A9836E15BC201F62776F * __this, Exception_t * ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_tDD7DCA035B684680C606A9836E15BC201F62776F *, Exception_t *, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetException_m6328D8C00DCE433F59B0E590D53DC47B3C326C47_gshared)(__this, ___exception0, method);
}
// System.Void UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Object>::SetResult(!0)
inline void AsyncUniTaskMethodBuilder_1_SetResult_m8D2DCDC38E5201D7EBE1B1EC8B8EC8FA593D51EF (AsyncUniTaskMethodBuilder_1_tDD7DCA035B684680C606A9836E15BC201F62776F * __this, RuntimeObject * ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_tDD7DCA035B684680C606A9836E15BC201F62776F *, RuntimeObject *, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetResult_m8D2DCDC38E5201D7EBE1B1EC8B8EC8FA593D51EF_gshared)(__this, ___result0, method);
}
// System.Void Naninovel.WavToAudioClipConverter/<ConvertAsync>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CConvertAsyncU3Ed__6_MoveNext_m4168499B9A73539D9200BF20AE025D7DB7687DDC (U3CConvertAsyncU3Ed__6_tBBEA6021908F80F2BF921901F92D0D931ED03586 * __this, const RuntimeMethod* method);
// System.Void UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Object>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncUniTaskMethodBuilder_1_SetStateMachine_mCDC7988DB8C28883CBBADA9A54F310D878B28DA8 (AsyncUniTaskMethodBuilder_1_tDD7DCA035B684680C606A9836E15BC201F62776F * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_tDD7DCA035B684680C606A9836E15BC201F62776F *, RuntimeObject*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetStateMachine_mCDC7988DB8C28883CBBADA9A54F310D878B28DA8_gshared)(__this, ___stateMachine0, method);
}
// System.Void Naninovel.WavToAudioClipConverter/<ConvertAsync>d__6::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CConvertAsyncU3Ed__6_SetStateMachine_mE69CA9511ADD03E9D62C603BB5E7CC3854AF2633 (U3CConvertAsyncU3Ed__6_tBBEA6021908F80F2BF921901F92D0D931ED03586 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Behaviour::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_m08077AB79934634E1EAE909C2B482BEF4C15A800 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, const RuntimeMethod* method);
// System.Void Naninovel.CameraManager/GameState/CameraComponent::.ctor(UnityEngine.MonoBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraComponent__ctor_m79CAA317943246D69337DC748C78AF987B9A8082 (CameraComponent_tF855104A2D2D8F69BD4C3128C3BC10A1013B7B46 * __this, MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * ___comp0, const RuntimeMethod* method);
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1 (Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * __this, const RuntimeMethod* method);
// System.Void Naninovel.RuntimeInitializer/ServiceInitData/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m8FA897BBB4FA36822F103DABE5773FB656F2DCEB (U3CU3Ec_tE32986ABA5018840123DFE9F20D81E2BD6D0E2C8 * __this, const RuntimeMethod* method);
// System.Void UniRx.Async.CompilerServices.AsyncUniTaskVoidMethodBuilder::AwaitUnsafeOnCompleted<UniRx.Async.UniTask/Awaiter,Naninovel.ScriptPlayer/<>c__DisplayClass123_0/<<ExecutePlayedCommandAsync>g__ExecuteCommandConcurrently|0>d>(!!0&,!!1&)
inline void AsyncUniTaskVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822_TisU3CU3CExecutePlayedCommandAsyncU3Eg__ExecuteCommandConcurrentlyU7C0U3Ed_t402700803755E3D73E3B0DA464E7E0A389643CD2_mBABCC6837C534A1D934AB8952B40A9C1541C7E36 (AsyncUniTaskVoidMethodBuilder_t0F142C0A47AC5AC99C2722FCC38BC01C73F8631E * __this, Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822 * ___awaiter0, U3CU3CExecutePlayedCommandAsyncU3Eg__ExecuteCommandConcurrentlyU7C0U3Ed_t402700803755E3D73E3B0DA464E7E0A389643CD2 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskVoidMethodBuilder_t0F142C0A47AC5AC99C2722FCC38BC01C73F8631E *, Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822 *, U3CU3CExecutePlayedCommandAsyncU3Eg__ExecuteCommandConcurrentlyU7C0U3Ed_t402700803755E3D73E3B0DA464E7E0A389643CD2 *, const RuntimeMethod*))AsyncUniTaskVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822_TisU3CU3CExecutePlayedCommandAsyncU3Eg__ExecuteCommandConcurrentlyU7C0U3Ed_t402700803755E3D73E3B0DA464E7E0A389643CD2_mBABCC6837C534A1D934AB8952B40A9C1541C7E36_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void UniRx.Async.CompilerServices.AsyncUniTaskVoidMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncUniTaskVoidMethodBuilder_SetException_m8F5AB7FDDF95B9843BB4A12BF64ADAA3D149CF58 (AsyncUniTaskVoidMethodBuilder_t0F142C0A47AC5AC99C2722FCC38BC01C73F8631E * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void UniRx.Async.CompilerServices.AsyncUniTaskVoidMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncUniTaskVoidMethodBuilder_SetResult_m66B1483798E2C36EBE6D55337D12235B1C02A5C1 (AsyncUniTaskVoidMethodBuilder_t0F142C0A47AC5AC99C2722FCC38BC01C73F8631E * __this, const RuntimeMethod* method);
// System.Void Naninovel.ScriptPlayer/<>c__DisplayClass123_0/<<ExecutePlayedCommandAsync>g__ExecuteCommandConcurrently|0>d::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CExecutePlayedCommandAsyncU3Eg__ExecuteCommandConcurrentlyU7C0U3Ed_MoveNext_m9BE06767E63323C7D64AFAE3D841081C79E2FBC6 (U3CU3CExecutePlayedCommandAsyncU3Eg__ExecuteCommandConcurrentlyU7C0U3Ed_t402700803755E3D73E3B0DA464E7E0A389643CD2 * __this, const RuntimeMethod* method);
// System.Void UniRx.Async.CompilerServices.AsyncUniTaskVoidMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncUniTaskVoidMethodBuilder_SetStateMachine_m67093B1F5FC7D5BFCE0B2B7C94BBF8E3B7110DF8 (AsyncUniTaskVoidMethodBuilder_t0F142C0A47AC5AC99C2722FCC38BC01C73F8631E * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void Naninovel.ScriptPlayer/<>c__DisplayClass123_0/<<ExecutePlayedCommandAsync>g__ExecuteCommandConcurrently|0>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CExecutePlayedCommandAsyncU3Eg__ExecuteCommandConcurrentlyU7C0U3Ed_SetStateMachine_m883F5E6B790067349F89368FBA22A0952B565075 (U3CU3CExecutePlayedCommandAsyncU3Eg__ExecuteCommandConcurrentlyU7C0U3Ed_t402700803755E3D73E3B0DA464E7E0A389643CD2 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  DateTime_get_Now_mCAC695993D6E2C57B900C83BEF3F8B18BC4EBC2C (const RuntimeMethod* method);
// System.Void Naninovel.GameStateMap::set_SaveDateTime(System.DateTime)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameStateMap_set_SaveDateTime_m15639D6A3AA10DCA2CCD71EABF70BC6F54E8CE15_inline (GameStateMap_tA4788218B9D1B130D00F9C346FF9FD21E01ED52D * __this, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value0, const RuntimeMethod* method);
// System.Void Naninovel.GameStateMap::set_Thumbnail(UnityEngine.Texture2D)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameStateMap_set_Thumbnail_m5FFCC8F23CB86F84A4D7F939B9B051EEECFE19FE_inline (GameStateMap_tA4788218B9D1B130D00F9C346FF9FD21E01ED52D * __this, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___value0, const RuntimeMethod* method);
// System.Void Naninovel.StateManager::SaveAllServicesToState<Naninovel.IStatefulService`1<Naninovel.GameStateMap>,Naninovel.GameStateMap>(TState)
inline void StateManager_SaveAllServicesToState_TisIStatefulService_1_t3AAEC31DD1B6FD861EEBAAD78C0F5FC0050D23A5_TisGameStateMap_tA4788218B9D1B130D00F9C346FF9FD21E01ED52D_mA5D94397DEA305415819A7E32ED0917DD74A94BD (StateManager_tF3B8735DA8F4E19A6A6C0D25270A8286C878D5A1 * __this, GameStateMap_tA4788218B9D1B130D00F9C346FF9FD21E01ED52D * ___state0, const RuntimeMethod* method)
{
	((  void (*) (StateManager_tF3B8735DA8F4E19A6A6C0D25270A8286C878D5A1 *, GameStateMap_tA4788218B9D1B130D00F9C346FF9FD21E01ED52D *, const RuntimeMethod*))StateManager_SaveAllServicesToState_TisRuntimeObject_TisRuntimeObject_mD11D61226AA689D5CB88A761C73A037A62C76492_gshared)(__this, ___state0, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Action`1<Naninovel.GameStateMap>>::get_Count()
inline int32_t List_1_get_Count_m2E2A250A83CC82DC2173B5626363BEE76FDA8BD7_inline (List_1_t5D3DE8A6E866EFBBE267E1025ED889B2EB78D393 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t5D3DE8A6E866EFBBE267E1025ED889B2EB78D393 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<System.Action`1<Naninovel.GameStateMap>>::get_Item(System.Int32)
inline Action_1_tE7DBC7D799F1973CA1C99095A5E2322E45FDAE6C * List_1_get_Item_m1836BF6751EF7F99771A8E7A4855E8AF5F8DA9FC_inline (List_1_t5D3DE8A6E866EFBBE267E1025ED889B2EB78D393 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Action_1_tE7DBC7D799F1973CA1C99095A5E2322E45FDAE6C * (*) (List_1_t5D3DE8A6E866EFBBE267E1025ED889B2EB78D393 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Void System.Action`1<Naninovel.GameStateMap>::Invoke(!0)
inline void Action_1_Invoke_m7F8CED30AC2A215F6DAD6B771160C27BD4943256 (Action_1_tE7DBC7D799F1973CA1C99095A5E2322E45FDAE6C * __this, GameStateMap_tA4788218B9D1B130D00F9C346FF9FD21E01ED52D * ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tE7DBC7D799F1973CA1C99095A5E2322E45FDAE6C *, GameStateMap_tA4788218B9D1B130D00F9C346FF9FD21E01ED52D *, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
// System.Void Naninovel.StateManager/<>c__DisplayClass69_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass69_1__ctor_mB6DC32D78BB94A81005DE44659169030E71424FE (U3CU3Ec__DisplayClass69_1_tFFADCFEF5824A513F6E1827C950CCC7516B5A64D * __this, const RuntimeMethod* method);
// System.Void System.Func`2<Naninovel.GameStateMap,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m057C2AF974DB7F0A19178AFF8DC08B6FD65FBD4A (Func_2_tC98365FCD009A19906148DAE6D31E499FA04C5FF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tC98365FCD009A19906148DAE6D31E499FA04C5FF *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mCA84157864A199574AD0B7F3083F99B54DC1F98C_gshared)(__this, ___object0, ___method1, method);
}
// !!0 System.Linq.Enumerable::FirstOrDefault<Naninovel.GameStateMap>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
inline GameStateMap_tA4788218B9D1B130D00F9C346FF9FD21E01ED52D * Enumerable_FirstOrDefault_TisGameStateMap_tA4788218B9D1B130D00F9C346FF9FD21E01ED52D_m904BF0AC4CC35253914465B01C79BEB90B3F1FC3 (RuntimeObject* ___source0, Func_2_tC98365FCD009A19906148DAE6D31E499FA04C5FF * ___predicate1, const RuntimeMethod* method)
{
	return ((  GameStateMap_tA4788218B9D1B130D00F9C346FF9FD21E01ED52D * (*) (RuntimeObject*, Func_2_tC98365FCD009A19906148DAE6D31E499FA04C5FF *, const RuntimeMethod*))Enumerable_FirstOrDefault_TisRuntimeObject_mEA8E5753D70A4AA5ABF983D5FE3BACC1537B3ECE_gshared)(___source0, ___predicate1, method);
}
// System.Void System.Predicate`1<Naninovel.GameStateMap>::.ctor(System.Object,System.IntPtr)
inline void Predicate_1__ctor_m61E36F14143FA43EFFCC61FA4DEC46A3C0EA92EB (Predicate_1_tBB645330290CE4865319EB67E4201373C3FDDE20 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_tBB645330290CE4865319EB67E4201373C3FDDE20 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m3F41E32C976C3C48B3FC63FBFD3FBBC5B5F23EDD_gshared)(__this, ___object0, ___method1, method);
}
// System.String Naninovel.StateRollbackStack::ToJson(System.Int32,System.Predicate`1<Naninovel.GameStateMap>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StateRollbackStack_ToJson_mB90B15760A5F26AE67680E0531127D8E2BB13391 (StateRollbackStack_tC11A46F845DB5187448E4790E845A78AB0643B23 * __this, int32_t ___maxSize0, Predicate_1_tBB645330290CE4865319EB67E4201373C3FDDE20 * ___filter1, const RuntimeMethod* method);
// System.Void Naninovel.GameStateMap::set_RollbackStackJson(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameStateMap_set_RollbackStackJson_m6A705049EE36F62B7BF967E9C6D2487632BE1642_inline (GameStateMap_tA4788218B9D1B130D00F9C346FF9FD21E01ED52D * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder::AwaitUnsafeOnCompleted<UniRx.Async.UniTask/Awaiter,Naninovel.StateManager/<>c__DisplayClass69_0/<<SaveGameAsync>g__DoSaveAfterSync|0>d>(!!0&,!!1&)
inline void AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822_TisU3CU3CSaveGameAsyncU3Eg__DoSaveAfterSyncU7C0U3Ed_tA5BCD95B422F51D7E49E973DC5FD62AE652C238C_mF125A7865B282154F64D3FFF9A5769B60BCD8525 (AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 * __this, Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822 * ___awaiter0, U3CU3CSaveGameAsyncU3Eg__DoSaveAfterSyncU7C0U3Ed_tA5BCD95B422F51D7E49E973DC5FD62AE652C238C * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 *, Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822 *, U3CU3CSaveGameAsyncU3Eg__DoSaveAfterSyncU7C0U3Ed_tA5BCD95B422F51D7E49E973DC5FD62AE652C238C *, const RuntimeMethod*))AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822_TisU3CU3CSaveGameAsyncU3Eg__DoSaveAfterSyncU7C0U3Ed_tA5BCD95B422F51D7E49E973DC5FD62AE652C238C_mF125A7865B282154F64D3FFF9A5769B60BCD8525_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder::AwaitUnsafeOnCompleted<UniRx.Async.UniTask`1/Awaiter<Naninovel.GlobalStateMap>,Naninovel.StateManager/<>c__DisplayClass69_0/<<SaveGameAsync>g__DoSaveAfterSync|0>d>(!!0&,!!1&)
inline void AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t2A04123A9B29D02DBE393CFF44AD80850561C5C0_TisU3CU3CSaveGameAsyncU3Eg__DoSaveAfterSyncU7C0U3Ed_tA5BCD95B422F51D7E49E973DC5FD62AE652C238C_m8EC5B18A38EA6C7F306112FE8BB9FA31D61F4FF6 (AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 * __this, Awaiter_t2A04123A9B29D02DBE393CFF44AD80850561C5C0 * ___awaiter0, U3CU3CSaveGameAsyncU3Eg__DoSaveAfterSyncU7C0U3Ed_tA5BCD95B422F51D7E49E973DC5FD62AE652C238C * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 *, Awaiter_t2A04123A9B29D02DBE393CFF44AD80850561C5C0 *, U3CU3CSaveGameAsyncU3Eg__DoSaveAfterSyncU7C0U3Ed_tA5BCD95B422F51D7E49E973DC5FD62AE652C238C *, const RuntimeMethod*))AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFB8E8133A57BB3B9C3FDFDF0BA2FE30DA1221D7D_TisU3CU3CSaveGameAsyncU3Eg__DoSaveAfterSyncU7C0U3Ed_tA5BCD95B422F51D7E49E973DC5FD62AE652C238C_m7CAA898C32E823CD99E14ABFF10B1A802EA3B18C_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Naninovel.StateManager/<>c__DisplayClass69_0/<<SaveGameAsync>g__DoSaveAfterSync|0>d::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CSaveGameAsyncU3Eg__DoSaveAfterSyncU7C0U3Ed_MoveNext_mF0115337B9D7E98990B97039906E20ED9E70D65E (U3CU3CSaveGameAsyncU3Eg__DoSaveAfterSyncU7C0U3Ed_tA5BCD95B422F51D7E49E973DC5FD62AE652C238C * __this, const RuntimeMethod* method);
// System.Void Naninovel.StateManager/<>c__DisplayClass69_0/<<SaveGameAsync>g__DoSaveAfterSync|0>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CSaveGameAsyncU3Eg__DoSaveAfterSyncU7C0U3Ed_SetStateMachine_m9A975D10028501E2A6611F03F01777CA51DB4F0D (U3CU3CSaveGameAsyncU3Eg__DoSaveAfterSyncU7C0U3Ed_tA5BCD95B422F51D7E49E973DC5FD62AE652C238C * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Naninovel.UITextPrinter/<RevealTextAsync>d__37::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRevealTextAsyncU3Ed__37_MoveNext_mC8F27EFA66E5659131BAC7C21F0079020579051B (U3CRevealTextAsyncU3Ed__37_t22D933F07DE5B442D1EC37E2416AB435E5C0D1BE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822_TisU3CRevealTextAsyncU3Ed__37_t22D933F07DE5B442D1EC37E2416AB435E5C0D1BE_m4271075E815595BDE8BAC0C2D7E50A820E1E6D75_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationTokenU5BU5D_t9A731157500814DA284A6F1E2E911CB755A65A7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	UITextPrinter_tE773A1F37D741340101B7B853A20AA74E954D6A3 * V_1 = NULL;
	CancellationToken_t6347F75AB41E1331E57D91A3F883A02D5FA698E3  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822  V_3;
	memset((&V_3), 0, sizeof(V_3));
	UniTask_t41263A639210D10E03708EE0B4B03A964D7EEE3C  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Exception_t * V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		UITextPrinter_tE773A1F37D741340101B7B853A20AA74E954D6A3 * L_1 = __this->get_U3CU3E4__this_2();
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
			// CancelRevealTextRoutine();
			UITextPrinter_tE773A1F37D741340101B7B853A20AA74E954D6A3 * L_3 = V_1;
			NullCheck(L_3);
			UITextPrinter_CancelRevealTextRoutine_m7224C0344F8BB3092966C1D94DE0514EFE10E79E(L_3, /*hidden argument*/NULL);
			// revealTextCTS = CancellationTokenSource.CreateLinkedTokenSource(cancellationToken.LazyToken);
			UITextPrinter_tE773A1F37D741340101B7B853A20AA74E954D6A3 * L_4 = V_1;
			CancellationTokenU5BU5D_t9A731157500814DA284A6F1E2E911CB755A65A7E* L_5 = (CancellationTokenU5BU5D_t9A731157500814DA284A6F1E2E911CB755A65A7E*)(CancellationTokenU5BU5D_t9A731157500814DA284A6F1E2E911CB755A65A7E*)SZArrayNew(CancellationTokenU5BU5D_t9A731157500814DA284A6F1E2E911CB755A65A7E_il2cpp_TypeInfo_var, (uint32_t)1);
			CancellationTokenU5BU5D_t9A731157500814DA284A6F1E2E911CB755A65A7E* L_6 = L_5;
			CancellationToken_t6347F75AB41E1331E57D91A3F883A02D5FA698E3 * L_7 = __this->get_address_of_cancellationToken_3();
			CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_8 = L_7->get_LazyToken_3();
			NullCheck(L_6);
			(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_8);
			IL2CPP_RUNTIME_CLASS_INIT(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3_il2cpp_TypeInfo_var);
			CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * L_9;
			L_9 = CancellationTokenSource_CreateLinkedTokenSource_m8898C87C9C92C060EDD9E80D5743CB67C23A1323(L_6, /*hidden argument*/NULL);
			NullCheck(L_4);
			L_4->set_revealTextCTS_18(L_9);
			// var revealTextToken = new CancellationToken(cancellationToken.ASAPToken, revealTextCTS.Token);
			CancellationToken_t6347F75AB41E1331E57D91A3F883A02D5FA698E3 * L_10 = __this->get_address_of_cancellationToken_3();
			CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_11 = L_10->get_ASAPToken_2();
			UITextPrinter_tE773A1F37D741340101B7B853A20AA74E954D6A3 * L_12 = V_1;
			NullCheck(L_12);
			CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * L_13 = L_12->get_revealTextCTS_18();
			NullCheck(L_13);
			CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_14;
			L_14 = CancellationTokenSource_get_Token_m2A9A82BA3532B89870363E8C1DEAE2F1EFD3962C(L_13, /*hidden argument*/NULL);
			CancellationToken__ctor_mDB2B0545C6EC34BDD96D214D8568917B2A372461((CancellationToken_t6347F75AB41E1331E57D91A3F883A02D5FA698E3 *)(&V_2), L_11, L_14, /*hidden argument*/NULL);
			// await PrinterPanel.RevealPrintedTextOverTimeAsync(revealDelay, revealTextToken);
			UITextPrinter_tE773A1F37D741340101B7B853A20AA74E954D6A3 * L_15 = V_1;
			NullCheck(L_15);
			UITextPrinterPanel_t332EC95C8F0F49BC7A8420ED5F3BA2CC8D1BF60F * L_16;
			L_16 = VirtFuncInvoker0< UITextPrinterPanel_t332EC95C8F0F49BC7A8420ED5F3BA2CC8D1BF60F * >::Invoke(79 /* Naninovel.UI.UITextPrinterPanel Naninovel.UITextPrinter::get_PrinterPanel() */, L_15);
			float L_17 = __this->get_revealDelay_4();
			CancellationToken_t6347F75AB41E1331E57D91A3F883A02D5FA698E3  L_18 = V_2;
			NullCheck(L_16);
			UniTask_t41263A639210D10E03708EE0B4B03A964D7EEE3C  L_19;
			L_19 = VirtFuncInvoker2< UniTask_t41263A639210D10E03708EE0B4B03A964D7EEE3C , float, CancellationToken_t6347F75AB41E1331E57D91A3F883A02D5FA698E3  >::Invoke(92 /* UniRx.Async.UniTask Naninovel.UI.UITextPrinterPanel::RevealPrintedTextOverTimeAsync(System.Single,Naninovel.CancellationToken) */, L_16, L_17, L_18);
			V_4 = L_19;
			Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822  L_20;
			L_20 = UniTask_GetAwaiter_mD2E76ACB629099DC37BB3C99511590FA9B227272((UniTask_t41263A639210D10E03708EE0B4B03A964D7EEE3C *)(&V_4), /*hidden argument*/NULL);
			V_3 = L_20;
			bool L_21;
			L_21 = Awaiter_get_IsCompleted_m0F67C2C63E4AD6E47A126AA69B8A98E0770F096C((Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822 *)(&V_3), /*hidden argument*/NULL);
			if (L_21)
			{
				goto IL_00bb;
			}
		}

IL_007f:
		{
			int32_t L_22 = 0;
			V_0 = L_22;
			__this->set_U3CU3E1__state_0(L_22);
			Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822  L_23 = V_3;
			__this->set_U3CU3Eu__1_5(L_23);
			AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 * L_24 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822_TisU3CRevealTextAsyncU3Ed__37_t22D933F07DE5B442D1EC37E2416AB435E5C0D1BE_m4271075E815595BDE8BAC0C2D7E50A820E1E6D75((AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 *)L_24, (Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822 *)(&V_3), (U3CRevealTextAsyncU3Ed__37_t22D933F07DE5B442D1EC37E2416AB435E5C0D1BE *)__this, /*hidden argument*/AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822_TisU3CRevealTextAsyncU3Ed__37_t22D933F07DE5B442D1EC37E2416AB435E5C0D1BE_m4271075E815595BDE8BAC0C2D7E50A820E1E6D75_RuntimeMethod_var);
			goto IL_00f0;
		}

IL_009f:
		{
			Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822  L_25 = __this->get_U3CU3Eu__1_5();
			V_3 = L_25;
			Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822 * L_26 = __this->get_address_of_U3CU3Eu__1_5();
			il2cpp_codegen_initobj(L_26, sizeof(Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822 ));
			int32_t L_27 = (-1);
			V_0 = L_27;
			__this->set_U3CU3E1__state_0(L_27);
		}

IL_00bb:
		{
			Awaiter_GetResult_m3EFD26ADCEFA37F3B4EE99CD8BE65F51405CFEF3((Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822 *)(&V_3), /*hidden argument*/NULL);
			goto IL_00dd;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00c4;
		}
		throw e;
	}

CATCH_00c4:
	{ // begin catch(System.Exception)
		V_5 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 * L_28 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_29 = V_5;
		AsyncUniTaskMethodBuilder_SetException_mD97347DB2613C31645BBBE97F83717D3F225A84D((AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 *)L_28, L_29, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00f0;
	} // end catch (depth: 1)

IL_00dd:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 * L_30 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncUniTaskMethodBuilder_SetResult_mEB0C04A892C51268180DED2647936AA6DE8BA80D((AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 *)L_30, /*hidden argument*/NULL);
	}

IL_00f0:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CRevealTextAsyncU3Ed__37_MoveNext_mC8F27EFA66E5659131BAC7C21F0079020579051B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CRevealTextAsyncU3Ed__37_t22D933F07DE5B442D1EC37E2416AB435E5C0D1BE * _thisAdjusted = reinterpret_cast<U3CRevealTextAsyncU3Ed__37_t22D933F07DE5B442D1EC37E2416AB435E5C0D1BE *>(__this + _offset);
	U3CRevealTextAsyncU3Ed__37_MoveNext_mC8F27EFA66E5659131BAC7C21F0079020579051B(_thisAdjusted, method);
}
// System.Void Naninovel.UITextPrinter/<RevealTextAsync>d__37::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRevealTextAsyncU3Ed__37_SetStateMachine_mBA386CA3A589AFDE5BCE7505F138ECE61F3C13EF (U3CRevealTextAsyncU3Ed__37_t22D933F07DE5B442D1EC37E2416AB435E5C0D1BE * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncUniTaskMethodBuilder_SetStateMachine_m919B0537825382AC072CF24F8D838BD3920E9FC8((AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CRevealTextAsyncU3Ed__37_SetStateMachine_mBA386CA3A589AFDE5BCE7505F138ECE61F3C13EF_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CRevealTextAsyncU3Ed__37_t22D933F07DE5B442D1EC37E2416AB435E5C0D1BE * _thisAdjusted = reinterpret_cast<U3CRevealTextAsyncU3Ed__37_t22D933F07DE5B442D1EC37E2416AB435E5C0D1BE *>(__this + _offset);
	U3CRevealTextAsyncU3Ed__37_SetStateMachine_mBA386CA3A589AFDE5BCE7505F138ECE61F3C13EF(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Naninovel.UI.UITextPrinterPanel/<InitializeAsync>d__24::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeAsyncU3Ed__24_MoveNext_m2113B395CBB0E6E2846EC94BB358AC49D848734F (U3CInitializeAsyncU3Ed__24_tAB011A1A6E65376DE8C0FAAFBF1E2BC2E0974DCB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m2A1B34C27CAE6ED7FD924E5F59C0A1ACBBF22C38_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822_TisU3CInitializeAsyncU3Ed__24_tAB011A1A6E65376DE8C0FAAFBF1E2BC2E0974DCB_mD6FBC2CBADFB4262B462DC69B408CA9B1EDD25E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t59A95566E6FBF6B195B841B400D0A6B7264A738B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t3445FF707A7D74618AD07E0096C2546E98EE61CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInputSampler_t1EECEB7E9E0A255621360C496765007E0A9603A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IScriptPlayer_t67C9B3A80B4439FB56E13A389B48EAB16C7AE74E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	UITextPrinterPanel_t332EC95C8F0F49BC7A8420ED5F3BA2CC8D1BF60F * V_1 = NULL;
	Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822  V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_t41263A639210D10E03708EE0B4B03A964D7EEE3C  V_3;
	memset((&V_3), 0, sizeof(V_3));
	RuntimeObject* V_4 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_5 = NULL;
	Exception_t * V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		UITextPrinterPanel_t332EC95C8F0F49BC7A8420ED5F3BA2CC8D1BF60F * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_004c;
			}
		}

IL_0011:
		{
			// await base.InitializeAsync();
			UITextPrinterPanel_t332EC95C8F0F49BC7A8420ED5F3BA2CC8D1BF60F * L_3 = V_1;
			NullCheck(L_3);
			UniTask_t41263A639210D10E03708EE0B4B03A964D7EEE3C  L_4;
			L_4 = UITextPrinterPanel_U3CU3En__0_m23DF8EDA713C02623FFAE7BEB3D81206320093BF(L_3, /*hidden argument*/NULL);
			V_3 = L_4;
			Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822  L_5;
			L_5 = UniTask_GetAwaiter_mD2E76ACB629099DC37BB3C99511590FA9B227272((UniTask_t41263A639210D10E03708EE0B4B03A964D7EEE3C *)(&V_3), /*hidden argument*/NULL);
			V_2 = L_5;
			bool L_6;
			L_6 = Awaiter_get_IsCompleted_m0F67C2C63E4AD6E47A126AA69B8A98E0770F096C((Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822 *)(&V_2), /*hidden argument*/NULL);
			if (L_6)
			{
				goto IL_0068;
			}
		}

IL_0029:
		{
			int32_t L_7 = 0;
			V_0 = L_7;
			__this->set_U3CU3E1__state_0(L_7);
			Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822  L_8 = V_2;
			__this->set_U3CU3Eu__1_3(L_8);
			AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 * L_9 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822_TisU3CInitializeAsyncU3Ed__24_tAB011A1A6E65376DE8C0FAAFBF1E2BC2E0974DCB_mD6FBC2CBADFB4262B462DC69B408CA9B1EDD25E5((AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 *)L_9, (Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822 *)(&V_2), (U3CInitializeAsyncU3Ed__24_tAB011A1A6E65376DE8C0FAAFBF1E2BC2E0974DCB *)__this, /*hidden argument*/AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822_TisU3CInitializeAsyncU3Ed__24_tAB011A1A6E65376DE8C0FAAFBF1E2BC2E0974DCB_mD6FBC2CBADFB4262B462DC69B408CA9B1EDD25E5_RuntimeMethod_var);
			goto IL_00fd;
		}

IL_004c:
		{
			Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822  L_10 = __this->get_U3CU3Eu__1_3();
			V_2 = L_10;
			Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822 * L_11 = __this->get_address_of_U3CU3Eu__1_3();
			il2cpp_codegen_initobj(L_11, sizeof(Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822 ));
			int32_t L_12 = (-1);
			V_0 = L_12;
			__this->set_U3CU3E1__state_0(L_12);
		}

IL_0068:
		{
			Awaiter_GetResult_m3EFD26ADCEFA37F3B4EE99CD8BE65F51405CFEF3((Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822 *)(&V_2), /*hidden argument*/NULL);
			// if (continueInput != null)
			UITextPrinterPanel_t332EC95C8F0F49BC7A8420ED5F3BA2CC8D1BF60F * L_13 = V_1;
			NullCheck(L_13);
			RuntimeObject* L_14 = L_13->get_continueInput_33();
			if (!L_14)
			{
				goto IL_00b7;
			}
		}

IL_0077:
		{
			// foreach (var go in ContinueInputTriggers)
			UITextPrinterPanel_t332EC95C8F0F49BC7A8420ED5F3BA2CC8D1BF60F * L_15 = V_1;
			NullCheck(L_15);
			RuntimeObject* L_16;
			L_16 = VirtFuncInvoker0< RuntimeObject* >::Invoke(91 /* System.Collections.Generic.IReadOnlyCollection`1<UnityEngine.GameObject> Naninovel.UI.UITextPrinterPanel::get_ContinueInputTriggers() */, L_15);
			NullCheck(L_16);
			RuntimeObject* L_17;
			L_17 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<UnityEngine.GameObject>::GetEnumerator() */, IEnumerable_1_t59A95566E6FBF6B195B841B400D0A6B7264A738B_il2cpp_TypeInfo_var, L_16);
			V_4 = L_17;
		}

IL_0084:
		try
		{ // begin try (depth: 2)
			{
				goto IL_009c;
			}

IL_0086:
			{
				// foreach (var go in ContinueInputTriggers)
				RuntimeObject* L_18 = V_4;
				NullCheck(L_18);
				GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19;
				L_19 = InterfaceFuncInvoker0< GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<UnityEngine.GameObject>::get_Current() */, IEnumerator_1_t3445FF707A7D74618AD07E0096C2546E98EE61CD_il2cpp_TypeInfo_var, L_18);
				V_5 = L_19;
				// continueInput.AddObjectTrigger(go);
				UITextPrinterPanel_t332EC95C8F0F49BC7A8420ED5F3BA2CC8D1BF60F * L_20 = V_1;
				NullCheck(L_20);
				RuntimeObject* L_21 = L_20->get_continueInput_33();
				GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22 = V_5;
				NullCheck(L_21);
				InterfaceActionInvoker1< GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * >::Invoke(11 /* System.Void Naninovel.IInputSampler::AddObjectTrigger(UnityEngine.GameObject) */, IInputSampler_t1EECEB7E9E0A255621360C496765007E0A9603A3_il2cpp_TypeInfo_var, L_21, L_22);
			}

IL_009c:
			{
				// foreach (var go in ContinueInputTriggers)
				RuntimeObject* L_23 = V_4;
				NullCheck(L_23);
				bool L_24;
				L_24 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_23);
				if (L_24)
				{
					goto IL_0086;
				}
			}

IL_00a5:
			{
				IL2CPP_LEAVE(0xB7, FINALLY_00a7);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_00a7;
		}

FINALLY_00a7:
		{ // begin finally (depth: 2)
			{
				int32_t L_25 = V_0;
				if ((((int32_t)L_25) >= ((int32_t)0)))
				{
					goto IL_00b6;
				}
			}

IL_00ab:
			{
				RuntimeObject* L_26 = V_4;
				if (!L_26)
				{
					goto IL_00b6;
				}
			}

IL_00af:
			{
				RuntimeObject* L_27 = V_4;
				NullCheck(L_27);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_27);
			}

IL_00b6:
			{
				IL2CPP_END_FINALLY(167)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(167)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0xB7, IL_00b7)
		}

IL_00b7:
		{
			// scriptPlayer.OnWaitingForInput += SetWaitForInputIndicatorVisible;
			UITextPrinterPanel_t332EC95C8F0F49BC7A8420ED5F3BA2CC8D1BF60F * L_28 = V_1;
			NullCheck(L_28);
			RuntimeObject* L_29 = L_28->get_scriptPlayer_34();
			UITextPrinterPanel_t332EC95C8F0F49BC7A8420ED5F3BA2CC8D1BF60F * L_30 = V_1;
			UITextPrinterPanel_t332EC95C8F0F49BC7A8420ED5F3BA2CC8D1BF60F * L_31 = L_30;
			Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_32 = (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 *)il2cpp_codegen_object_new(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83_il2cpp_TypeInfo_var);
			Action_1__ctor_m2A1B34C27CAE6ED7FD924E5F59C0A1ACBBF22C38(L_32, L_31, (intptr_t)((intptr_t)GetVirtualMethodInfo(L_31, 93)), /*hidden argument*/Action_1__ctor_m2A1B34C27CAE6ED7FD924E5F59C0A1ACBBF22C38_RuntimeMethod_var);
			NullCheck(L_29);
			InterfaceActionInvoker1< Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * >::Invoke(12 /* System.Void Naninovel.IScriptPlayer::add_OnWaitingForInput(System.Action`1<System.Boolean>) */, IScriptPlayer_t67C9B3A80B4439FB56E13A389B48EAB16C7AE74E_il2cpp_TypeInfo_var, L_29, L_32);
			goto IL_00ea;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d1;
		}
		throw e;
	}

CATCH_00d1:
	{ // begin catch(System.Exception)
		V_6 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 * L_33 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_34 = V_6;
		AsyncUniTaskMethodBuilder_SetException_mD97347DB2613C31645BBBE97F83717D3F225A84D((AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 *)L_33, L_34, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00fd;
	} // end catch (depth: 1)

IL_00ea:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 * L_35 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncUniTaskMethodBuilder_SetResult_mEB0C04A892C51268180DED2647936AA6DE8BA80D((AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 *)L_35, /*hidden argument*/NULL);
	}

IL_00fd:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CInitializeAsyncU3Ed__24_MoveNext_m2113B395CBB0E6E2846EC94BB358AC49D848734F_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CInitializeAsyncU3Ed__24_tAB011A1A6E65376DE8C0FAAFBF1E2BC2E0974DCB * _thisAdjusted = reinterpret_cast<U3CInitializeAsyncU3Ed__24_tAB011A1A6E65376DE8C0FAAFBF1E2BC2E0974DCB *>(__this + _offset);
	U3CInitializeAsyncU3Ed__24_MoveNext_m2113B395CBB0E6E2846EC94BB358AC49D848734F(_thisAdjusted, method);
}
// System.Void Naninovel.UI.UITextPrinterPanel/<InitializeAsync>d__24::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeAsyncU3Ed__24_SetStateMachine_m36BBA3A0DDBF74A622A8415983BB8F1A415AAC29 (U3CInitializeAsyncU3Ed__24_tAB011A1A6E65376DE8C0FAAFBF1E2BC2E0974DCB * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncUniTaskMethodBuilder_SetStateMachine_m919B0537825382AC072CF24F8D838BD3920E9FC8((AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CInitializeAsyncU3Ed__24_SetStateMachine_m36BBA3A0DDBF74A622A8415983BB8F1A415AAC29_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CInitializeAsyncU3Ed__24_tAB011A1A6E65376DE8C0FAAFBF1E2BC2E0974DCB * _thisAdjusted = reinterpret_cast<U3CInitializeAsyncU3Ed__24_tAB011A1A6E65376DE8C0FAAFBF1E2BC2E0974DCB *>(__this + _offset);
	U3CInitializeAsyncU3Ed__24_SetStateMachine_m36BBA3A0DDBF74A622A8415983BB8F1A415AAC29(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Naninovel.Commands.Unlock/<ExecuteAsync>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteAsyncU3Ed__1_MoveNext_m640DF98D88159FC59AB1BDEB644BA23A6D959015 (U3CExecuteAsyncU3Ed__1_t9E0B22C867E8CFF13B5369FD265382B0EB2122C2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t2A04123A9B29D02DBE393CFF44AD80850561C5C0_TisU3CExecuteAsyncU3Ed__1_t9E0B22C867E8CFF13B5369FD265382B0EB2122C2_m8F2C5684E18CC4048C9A5A9F0C6F254428BF63BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_mB36B4F5D534DDA815C01A7BE87F4B29006458C00_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m2AD507538A44DA52F98CC6B97C5F2B4374EAEB76_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Engine_GetService_TisIStateManager_tB1F31B7EA57D563ED2E6154B24A63BA91D1BFB53_m9AE0661C0443939E3B12DDF2785F454EFF38B4D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Engine_GetService_TisIUnlockableManager_tB44083DED8551FA666CA3771FEE88D896EB8159D_mA470B41CF2C46AC60FC16E21F7C00DEF1953512E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Engine_t7C3301CD5B8D8E1B009CFE5D95E5E0CD4CF3962F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStateManager_tB1F31B7EA57D563ED2E6154B24A63BA91D1BFB53_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnlockableManager_tB44083DED8551FA666CA3771FEE88D896EB8159D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mCD30AA96C09E69BAC64E16A8B627B7535158A477_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m63808C842E705B02AEC3088A7A3CE08D2DA74264_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE280D065A824A791F8305234D3E093FC9A5A90C7);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Unlock_tB9B22DC9885883E806C0E482F4D5FCA9AE5EBD46 * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	Awaiter_t2A04123A9B29D02DBE393CFF44AD80850561C5C0  V_3;
	memset((&V_3), 0, sizeof(V_3));
	UniTask_1_t492CDA3ADD676CAA0B8B193F8AB7CDD8F54BF5F5  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Exception_t * V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Unlock_tB9B22DC9885883E806C0E482F4D5FCA9AE5EBD46 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0086;
			}
		}

IL_0011:
		{
			// var unlockableManager = Engine.GetService<IUnlockableManager>();
			IL2CPP_RUNTIME_CLASS_INIT(Engine_t7C3301CD5B8D8E1B009CFE5D95E5E0CD4CF3962F_il2cpp_TypeInfo_var);
			RuntimeObject* L_3;
			L_3 = Engine_GetService_TisIUnlockableManager_tB44083DED8551FA666CA3771FEE88D896EB8159D_mA470B41CF2C46AC60FC16E21F7C00DEF1953512E((Predicate_1_t7CF3BE326604DBF3D431BACDE9F90AADDBEA93E7 *)NULL, /*hidden argument*/Engine_GetService_TisIUnlockableManager_tB44083DED8551FA666CA3771FEE88D896EB8159D_mA470B41CF2C46AC60FC16E21F7C00DEF1953512E_RuntimeMethod_var);
			V_2 = L_3;
			// if (Id.Value.EqualsFastIgnoreCase("*")) unlockableManager.UnlockAllItems();
			Unlock_tB9B22DC9885883E806C0E482F4D5FCA9AE5EBD46 * L_4 = V_1;
			NullCheck(L_4);
			StringParameter_t33BF466D3AD2402CEA10C41D765102E093891CA8 * L_5 = L_4->get_Id_6();
			NullCheck(L_5);
			String_t* L_6;
			L_6 = Nullable_1_get_Value_mCD30AA96C09E69BAC64E16A8B627B7535158A477(L_5, /*hidden argument*/Nullable_1_get_Value_mCD30AA96C09E69BAC64E16A8B627B7535158A477_RuntimeMethod_var);
			bool L_7;
			L_7 = StringUtils_EqualsFastIgnoreCase_m9E6BB734D0F3DD72B90C6EB2A68A55F0B52AB753(L_6, _stringLiteralE280D065A824A791F8305234D3E093FC9A5A90C7, /*hidden argument*/NULL);
			if (!L_7)
			{
				goto IL_0037;
			}
		}

IL_002f:
		{
			// if (Id.Value.EqualsFastIgnoreCase("*")) unlockableManager.UnlockAllItems();
			RuntimeObject* L_8 = V_2;
			NullCheck(L_8);
			InterfaceActionInvoker0::Invoke(7 /* System.Void Naninovel.IUnlockableManager::UnlockAllItems() */, IUnlockableManager_tB44083DED8551FA666CA3771FEE88D896EB8159D_il2cpp_TypeInfo_var, L_8);
			goto IL_0048;
		}

IL_0037:
		{
			// else unlockableManager.UnlockItem(Id);
			RuntimeObject* L_9 = V_2;
			Unlock_tB9B22DC9885883E806C0E482F4D5FCA9AE5EBD46 * L_10 = V_1;
			NullCheck(L_10);
			StringParameter_t33BF466D3AD2402CEA10C41D765102E093891CA8 * L_11 = L_10->get_Id_6();
			String_t* L_12;
			L_12 = StringParameter_op_Implicit_m986AE779F7A248DB1D737469568113486EB7D764(L_11, /*hidden argument*/NULL);
			NullCheck(L_9);
			InterfaceActionInvoker1< String_t* >::Invoke(4 /* System.Void Naninovel.IUnlockableManager::UnlockItem(System.String) */, IUnlockableManager_tB44083DED8551FA666CA3771FEE88D896EB8159D_il2cpp_TypeInfo_var, L_9, L_12);
		}

IL_0048:
		{
			// await Engine.GetService<IStateManager>().SaveGlobalStateAsync();
			IL2CPP_RUNTIME_CLASS_INIT(Engine_t7C3301CD5B8D8E1B009CFE5D95E5E0CD4CF3962F_il2cpp_TypeInfo_var);
			RuntimeObject* L_13;
			L_13 = Engine_GetService_TisIStateManager_tB1F31B7EA57D563ED2E6154B24A63BA91D1BFB53_m9AE0661C0443939E3B12DDF2785F454EFF38B4D4((Predicate_1_tC32C71EEE3CD94A0D24F97FE89A2DDA8D2552CC4 *)NULL, /*hidden argument*/Engine_GetService_TisIStateManager_tB1F31B7EA57D563ED2E6154B24A63BA91D1BFB53_m9AE0661C0443939E3B12DDF2785F454EFF38B4D4_RuntimeMethod_var);
			NullCheck(L_13);
			UniTask_1_t492CDA3ADD676CAA0B8B193F8AB7CDD8F54BF5F5  L_14;
			L_14 = InterfaceFuncInvoker0< UniTask_1_t492CDA3ADD676CAA0B8B193F8AB7CDD8F54BF5F5  >::Invoke(32 /* UniRx.Async.UniTask`1<Naninovel.GlobalStateMap> Naninovel.IStateManager::SaveGlobalStateAsync() */, IStateManager_tB1F31B7EA57D563ED2E6154B24A63BA91D1BFB53_il2cpp_TypeInfo_var, L_13);
			V_4 = L_14;
			Awaiter_t2A04123A9B29D02DBE393CFF44AD80850561C5C0  L_15;
			L_15 = UniTask_1_GetAwaiter_m63808C842E705B02AEC3088A7A3CE08D2DA74264((UniTask_1_t492CDA3ADD676CAA0B8B193F8AB7CDD8F54BF5F5 *)(&V_4), /*hidden argument*/UniTask_1_GetAwaiter_m63808C842E705B02AEC3088A7A3CE08D2DA74264_RuntimeMethod_var);
			V_3 = L_15;
			bool L_16;
			L_16 = Awaiter_get_IsCompleted_m2AD507538A44DA52F98CC6B97C5F2B4374EAEB76((Awaiter_t2A04123A9B29D02DBE393CFF44AD80850561C5C0 *)(&V_3), /*hidden argument*/Awaiter_get_IsCompleted_m2AD507538A44DA52F98CC6B97C5F2B4374EAEB76_RuntimeMethod_var);
			if (L_16)
			{
				goto IL_00a2;
			}
		}

IL_0066:
		{
			int32_t L_17 = 0;
			V_0 = L_17;
			__this->set_U3CU3E1__state_0(L_17);
			Awaiter_t2A04123A9B29D02DBE393CFF44AD80850561C5C0  L_18 = V_3;
			__this->set_U3CU3Eu__1_3(L_18);
			AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 * L_19 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t2A04123A9B29D02DBE393CFF44AD80850561C5C0_TisU3CExecuteAsyncU3Ed__1_t9E0B22C867E8CFF13B5369FD265382B0EB2122C2_m8F2C5684E18CC4048C9A5A9F0C6F254428BF63BC((AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 *)L_19, (Awaiter_t2A04123A9B29D02DBE393CFF44AD80850561C5C0 *)(&V_3), (U3CExecuteAsyncU3Ed__1_t9E0B22C867E8CFF13B5369FD265382B0EB2122C2 *)__this, /*hidden argument*/AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t2A04123A9B29D02DBE393CFF44AD80850561C5C0_TisU3CExecuteAsyncU3Ed__1_t9E0B22C867E8CFF13B5369FD265382B0EB2122C2_m8F2C5684E18CC4048C9A5A9F0C6F254428BF63BC_RuntimeMethod_var);
			goto IL_00d8;
		}

IL_0086:
		{
			Awaiter_t2A04123A9B29D02DBE393CFF44AD80850561C5C0  L_20 = __this->get_U3CU3Eu__1_3();
			V_3 = L_20;
			Awaiter_t2A04123A9B29D02DBE393CFF44AD80850561C5C0 * L_21 = __this->get_address_of_U3CU3Eu__1_3();
			il2cpp_codegen_initobj(L_21, sizeof(Awaiter_t2A04123A9B29D02DBE393CFF44AD80850561C5C0 ));
			int32_t L_22 = (-1);
			V_0 = L_22;
			__this->set_U3CU3E1__state_0(L_22);
		}

IL_00a2:
		{
			GlobalStateMap_t30FDDE19DD3F6E3C8EE56F95DA28DAAFEE9DF0D5 * L_23;
			L_23 = Awaiter_GetResult_mB36B4F5D534DDA815C01A7BE87F4B29006458C00((Awaiter_t2A04123A9B29D02DBE393CFF44AD80850561C5C0 *)(&V_3), /*hidden argument*/Awaiter_GetResult_mB36B4F5D534DDA815C01A7BE87F4B29006458C00_RuntimeMethod_var);
			goto IL_00c5;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00ac;
		}
		throw e;
	}

CATCH_00ac:
	{ // begin catch(System.Exception)
		V_5 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 * L_24 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_25 = V_5;
		AsyncUniTaskMethodBuilder_SetException_mD97347DB2613C31645BBBE97F83717D3F225A84D((AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 *)L_24, L_25, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00d8;
	} // end catch (depth: 1)

IL_00c5:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 * L_26 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncUniTaskMethodBuilder_SetResult_mEB0C04A892C51268180DED2647936AA6DE8BA80D((AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 *)L_26, /*hidden argument*/NULL);
	}

IL_00d8:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CExecuteAsyncU3Ed__1_MoveNext_m640DF98D88159FC59AB1BDEB644BA23A6D959015_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CExecuteAsyncU3Ed__1_t9E0B22C867E8CFF13B5369FD265382B0EB2122C2 * _thisAdjusted = reinterpret_cast<U3CExecuteAsyncU3Ed__1_t9E0B22C867E8CFF13B5369FD265382B0EB2122C2 *>(__this + _offset);
	U3CExecuteAsyncU3Ed__1_MoveNext_m640DF98D88159FC59AB1BDEB644BA23A6D959015(_thisAdjusted, method);
}
// System.Void Naninovel.Commands.Unlock/<ExecuteAsync>d__1::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteAsyncU3Ed__1_SetStateMachine_m650B3676A1F7D60732D3228415765D191F12F6CF (U3CExecuteAsyncU3Ed__1_t9E0B22C867E8CFF13B5369FD265382B0EB2122C2 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncUniTaskMethodBuilder_SetStateMachine_m919B0537825382AC072CF24F8D838BD3920E9FC8((AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CExecuteAsyncU3Ed__1_SetStateMachine_m650B3676A1F7D60732D3228415765D191F12F6CF_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CExecuteAsyncU3Ed__1_t9E0B22C867E8CFF13B5369FD265382B0EB2122C2 * _thisAdjusted = reinterpret_cast<U3CExecuteAsyncU3Ed__1_t9E0B22C867E8CFF13B5369FD265382B0EB2122C2 *>(__this + _offset);
	U3CExecuteAsyncU3Ed__1_SetStateMachine_m650B3676A1F7D60732D3228415765D191F12F6CF(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Naninovel.UnlockableManager/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m9F90E5AD34E4117EBCEE030D32D31DBF2603411E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t872D8589FF75637984769283BC59811DBE3C83F4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t872D8589FF75637984769283BC59811DBE3C83F4 * L_0 = (U3CU3Ec_t872D8589FF75637984769283BC59811DBE3C83F4 *)il2cpp_codegen_object_new(U3CU3Ec_t872D8589FF75637984769283BC59811DBE3C83F4_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m2721D03C7FA5C03225FE9D7544551C2CB85590F6(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t872D8589FF75637984769283BC59811DBE3C83F4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t872D8589FF75637984769283BC59811DBE3C83F4_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Naninovel.UnlockableManager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m2721D03C7FA5C03225FE9D7544551C2CB85590F6 (U3CU3Ec_t872D8589FF75637984769283BC59811DBE3C83F4 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String Naninovel.UnlockableManager/<>c::<GetAllItems>b__19_0(System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CGetAllItemsU3Eb__19_0_mCD764DAF9B10093194BCD8A995C4762459B84778 (U3CU3Ec_t872D8589FF75637984769283BC59811DBE3C83F4 * __this, KeyValuePair_2_t384622AD87CBCE096A5B6142169F1A1C8C8F4503  ___kv0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m2A4BA00E1B96F30CEEB1DC3778BBFB14E4F03535_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public virtual Dictionary<string, bool> GetAllItems () => unlockablesMap.ToDictionary(kv => kv.Key, kv => kv.Value);
		String_t* L_0;
		L_0 = KeyValuePair_2_get_Key_m2A4BA00E1B96F30CEEB1DC3778BBFB14E4F03535_inline((KeyValuePair_2_t384622AD87CBCE096A5B6142169F1A1C8C8F4503 *)(&___kv0), /*hidden argument*/KeyValuePair_2_get_Key_m2A4BA00E1B96F30CEEB1DC3778BBFB14E4F03535_RuntimeMethod_var);
		return L_0;
	}
}
// System.Boolean Naninovel.UnlockableManager/<>c::<GetAllItems>b__19_1(System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CGetAllItemsU3Eb__19_1_mDF1694A89E0F4A6FC20070C82331192E7F6AD569 (U3CU3Ec_t872D8589FF75637984769283BC59811DBE3C83F4 * __this, KeyValuePair_2_t384622AD87CBCE096A5B6142169F1A1C8C8F4503  ___kv0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mAC9081ECDD5DBA19DFE07653835578498B64ED1B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public virtual Dictionary<string, bool> GetAllItems () => unlockablesMap.ToDictionary(kv => kv.Key, kv => kv.Value);
		bool L_0;
		L_0 = KeyValuePair_2_get_Value_mAC9081ECDD5DBA19DFE07653835578498B64ED1B_inline((KeyValuePair_2_t384622AD87CBCE096A5B6142169F1A1C8C8F4503 *)(&___kv0), /*hidden argument*/KeyValuePair_2_get_Value_mAC9081ECDD5DBA19DFE07653835578498B64ED1B_RuntimeMethod_var);
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
// System.Void Naninovel.UnlockableManager/GlobalState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalState__ctor_mB825A62D00747FD69D900DC461F5800DF10B53FA (GlobalState_tBFC4E452F43253379951C3663D07CD4B83C852D7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnlockablesMap_t798A63740156B2CCD22053D422973750060F1C43_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public UnlockablesMap UnlockablesMap = new UnlockablesMap();
		UnlockablesMap_t798A63740156B2CCD22053D422973750060F1C43 * L_0 = (UnlockablesMap_t798A63740156B2CCD22053D422973750060F1C43 *)il2cpp_codegen_object_new(UnlockablesMap_t798A63740156B2CCD22053D422973750060F1C43_il2cpp_TypeInfo_var);
		UnlockablesMap__ctor_m4A117F2B7BA1B8EAB963B0E992DE8101504AF421(L_0, /*hidden argument*/NULL);
		__this->set_UnlockablesMap_0(L_0);
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
// System.Void Naninovel.UnlockableManager/UnlockablesMap::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnlockablesMap__ctor_m4A117F2B7BA1B8EAB963B0E992DE8101504AF421 (UnlockablesMap_t798A63740156B2CCD22053D422973750060F1C43 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializableMap_2__ctor_mEA5BE717C404CC3D57258757949B272C790EE8D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public UnlockablesMap () : base(StringComparer.OrdinalIgnoreCase) { }
		IL2CPP_RUNTIME_CLASS_INIT(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_il2cpp_TypeInfo_var);
		StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * L_0;
		L_0 = StringComparer_get_OrdinalIgnoreCase_m8FD38206B6FFE866E97CE4DF84B037F0DF175288_inline(/*hidden argument*/NULL);
		SerializableMap_2__ctor_mEA5BE717C404CC3D57258757949B272C790EE8D6(__this, L_0, /*hidden argument*/SerializableMap_2__ctor_mEA5BE717C404CC3D57258757949B272C790EE8D6_RuntimeMethod_var);
		// public UnlockablesMap () : base(StringComparer.OrdinalIgnoreCase) { }
		return;
	}
}
// System.Void Naninovel.UnlockableManager/UnlockablesMap::.ctor(Naninovel.UnlockableManager/UnlockablesMap)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnlockablesMap__ctor_mAF30E7E933570F8C76D60F2E2A1AB2982AB5FD69 (UnlockablesMap_t798A63740156B2CCD22053D422973750060F1C43 * __this, UnlockablesMap_t798A63740156B2CCD22053D422973750060F1C43 * ___map0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializableMap_2__ctor_m56AD559E46E06881F5A00BE80C064A8CCF8CD908_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public UnlockablesMap (UnlockablesMap map) : base(map, StringComparer.OrdinalIgnoreCase) { }
		UnlockablesMap_t798A63740156B2CCD22053D422973750060F1C43 * L_0 = ___map0;
		IL2CPP_RUNTIME_CLASS_INIT(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_il2cpp_TypeInfo_var);
		StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * L_1;
		L_1 = StringComparer_get_OrdinalIgnoreCase_m8FD38206B6FFE866E97CE4DF84B037F0DF175288_inline(/*hidden argument*/NULL);
		SerializableMap_2__ctor_m56AD559E46E06881F5A00BE80C064A8CCF8CD908(__this, L_0, L_1, /*hidden argument*/SerializableMap_2__ctor_m56AD559E46E06881F5A00BE80C064A8CCF8CD908_RuntimeMethod_var);
		// public UnlockablesMap (UnlockablesMap map) : base(map, StringComparer.OrdinalIgnoreCase) { }
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
// System.Void Naninovel.UnlockableTrigger/UnlockedStateChangedEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnlockedStateChangedEvent__ctor_mC7E6280D23B6A96B09ABAC2C5971DB338B4B392D (UnlockedStateChangedEvent_t4E17475CD93BCCB201C01C0DE65BF9FB7F4AF1DA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m55B3D17A5D50746ED6618952C2C745FB5A73BAA7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m55B3D17A5D50746ED6618952C2C745FB5A73BAA7(__this, /*hidden argument*/UnityEvent_1__ctor_m55B3D17A5D50746ED6618952C2C745FB5A73BAA7_RuntimeMethod_var);
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
// System.Void Naninovel.UI.VariableInputPanel/<DeserializeState>d__27::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDeserializeStateU3Ed__27_MoveNext_mA25CAFA71A4B1E7FF71433CE62CFA04D1E5C4CD3 (U3CDeserializeStateU3Ed__27_tABF41614DF3DFF2D9AAA5826BE7678FFBFE9C811 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822_TisU3CDeserializeStateU3Ed__27_tABF41614DF3DFF2D9AAA5826BE7678FFBFE9C811_m3FEA121F03998F080E9E41D7681FE731B7A95459_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StateMap_GetState_TisGameState_tE9D59EA400F61A3BF53ED8B04F14446938E65CD8_m6B6E59B83F15F46212F04320F88161CACE97F21C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	VariableInputPanel_t8E4D3D3105400B75F154916F7E3723C22389D55E * V_1 = NULL;
	GameState_tE9D59EA400F61A3BF53ED8B04F14446938E65CD8 * V_2 = NULL;
	Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822  V_3;
	memset((&V_3), 0, sizeof(V_3));
	UniTask_t41263A639210D10E03708EE0B4B03A964D7EEE3C  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Exception_t * V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		VariableInputPanel_t8E4D3D3105400B75F154916F7E3723C22389D55E * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0053;
			}
		}

IL_0011:
		{
			// await base.DeserializeState(stateMap);
			VariableInputPanel_t8E4D3D3105400B75F154916F7E3723C22389D55E * L_3 = V_1;
			GameStateMap_tA4788218B9D1B130D00F9C346FF9FD21E01ED52D * L_4 = __this->get_stateMap_3();
			NullCheck(L_3);
			UniTask_t41263A639210D10E03708EE0B4B03A964D7EEE3C  L_5;
			L_5 = VariableInputPanel_U3CU3En__0_m9C343AEDBA9691B5229FEFA30160B40DB6019AB4(L_3, L_4, /*hidden argument*/NULL);
			V_4 = L_5;
			Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822  L_6;
			L_6 = UniTask_GetAwaiter_mD2E76ACB629099DC37BB3C99511590FA9B227272((UniTask_t41263A639210D10E03708EE0B4B03A964D7EEE3C *)(&V_4), /*hidden argument*/NULL);
			V_3 = L_6;
			bool L_7;
			L_7 = Awaiter_get_IsCompleted_m0F67C2C63E4AD6E47A126AA69B8A98E0770F096C((Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822 *)(&V_3), /*hidden argument*/NULL);
			if (L_7)
			{
				goto IL_006f;
			}
		}

IL_0030:
		{
			int32_t L_8 = 0;
			V_0 = L_8;
			__this->set_U3CU3E1__state_0(L_8);
			Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822  L_9 = V_3;
			__this->set_U3CU3Eu__1_4(L_9);
			AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 * L_10 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822_TisU3CDeserializeStateU3Ed__27_tABF41614DF3DFF2D9AAA5826BE7678FFBFE9C811_m3FEA121F03998F080E9E41D7681FE731B7A95459((AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 *)L_10, (Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822 *)(&V_3), (U3CDeserializeStateU3Ed__27_tABF41614DF3DFF2D9AAA5826BE7678FFBFE9C811 *)__this, /*hidden argument*/AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822_TisU3CDeserializeStateU3Ed__27_tABF41614DF3DFF2D9AAA5826BE7678FFBFE9C811_m3FEA121F03998F080E9E41D7681FE731B7A95459_RuntimeMethod_var);
			goto IL_010e;
		}

IL_0053:
		{
			Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822  L_11 = __this->get_U3CU3Eu__1_4();
			V_3 = L_11;
			Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822 * L_12 = __this->get_address_of_U3CU3Eu__1_4();
			il2cpp_codegen_initobj(L_12, sizeof(Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822 ));
			int32_t L_13 = (-1);
			V_0 = L_13;
			__this->set_U3CU3E1__state_0(L_13);
		}

IL_006f:
		{
			Awaiter_GetResult_m3EFD26ADCEFA37F3B4EE99CD8BE65F51405CFEF3((Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822 *)(&V_3), /*hidden argument*/NULL);
			// var state = stateMap.GetState<GameState>();
			GameStateMap_tA4788218B9D1B130D00F9C346FF9FD21E01ED52D * L_14 = __this->get_stateMap_3();
			NullCheck(L_14);
			GameState_tE9D59EA400F61A3BF53ED8B04F14446938E65CD8 * L_15;
			L_15 = StateMap_GetState_TisGameState_tE9D59EA400F61A3BF53ED8B04F14446938E65CD8_m6B6E59B83F15F46212F04320F88161CACE97F21C(L_14, (String_t*)NULL, /*hidden argument*/StateMap_GetState_TisGameState_tE9D59EA400F61A3BF53ED8B04F14446938E65CD8_m6B6E59B83F15F46212F04320F88161CACE97F21C_RuntimeMethod_var);
			V_2 = L_15;
			// if (state is null) return;
			GameState_tE9D59EA400F61A3BF53ED8B04F14446938E65CD8 * L_16 = V_2;
			if (L_16)
			{
				goto IL_0088;
			}
		}

IL_0086:
		{
			// if (state is null) return;
			goto IL_00fb;
		}

IL_0088:
		{
			// variableName = state.VariableName;
			VariableInputPanel_t8E4D3D3105400B75F154916F7E3723C22389D55E * L_17 = V_1;
			GameState_tE9D59EA400F61A3BF53ED8B04F14446938E65CD8 * L_18 = V_2;
			NullCheck(L_18);
			String_t* L_19 = L_18->get_VariableName_0();
			NullCheck(L_17);
			L_17->set_variableName_39(L_19);
			// summaryText.text = state.SummaryText;
			VariableInputPanel_t8E4D3D3105400B75F154916F7E3723C22389D55E * L_20 = V_1;
			NullCheck(L_20);
			Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_21 = L_20->get_summaryText_31();
			GameState_tE9D59EA400F61A3BF53ED8B04F14446938E65CD8 * L_22 = V_2;
			NullCheck(L_22);
			String_t* L_23 = L_22->get_SummaryText_1();
			NullCheck(L_21);
			VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_21, L_23);
			// summaryText.gameObject.SetActive(!string.IsNullOrWhiteSpace(state.SummaryText));
			VariableInputPanel_t8E4D3D3105400B75F154916F7E3723C22389D55E * L_24 = V_1;
			NullCheck(L_24);
			Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_25 = L_24->get_summaryText_31();
			NullCheck(L_25);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_26;
			L_26 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_25, /*hidden argument*/NULL);
			GameState_tE9D59EA400F61A3BF53ED8B04F14446938E65CD8 * L_27 = V_2;
			NullCheck(L_27);
			String_t* L_28 = L_27->get_SummaryText_1();
			bool L_29;
			L_29 = String_IsNullOrWhiteSpace_m4C4266AE4097F5B61FF72A8D0D083611231B9CA6(L_28, /*hidden argument*/NULL);
			NullCheck(L_26);
			GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_26, (bool)((((int32_t)L_29) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
			// inputField.text = state.InputFieldText;
			VariableInputPanel_t8E4D3D3105400B75F154916F7E3723C22389D55E * L_30 = V_1;
			NullCheck(L_30);
			InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_31 = L_30->get_inputField_30();
			GameState_tE9D59EA400F61A3BF53ED8B04F14446938E65CD8 * L_32 = V_2;
			NullCheck(L_32);
			String_t* L_33 = L_32->get_InputFieldText_2();
			NullCheck(L_31);
			InputField_set_text_m30EE95E064474DFA2842CA2DD6E831FF3F3500BF(L_31, L_33, /*hidden argument*/NULL);
			// playOnSubmit = state.PlayOnSubmit;
			VariableInputPanel_t8E4D3D3105400B75F154916F7E3723C22389D55E * L_34 = V_1;
			GameState_tE9D59EA400F61A3BF53ED8B04F14446938E65CD8 * L_35 = V_2;
			NullCheck(L_35);
			bool L_36 = L_35->get_PlayOnSubmit_3();
			NullCheck(L_34);
			L_34->set_playOnSubmit_40(L_36);
			goto IL_00fb;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e2;
		}
		throw e;
	}

CATCH_00e2:
	{ // begin catch(System.Exception)
		V_5 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 * L_37 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_38 = V_5;
		AsyncUniTaskMethodBuilder_SetException_mD97347DB2613C31645BBBE97F83717D3F225A84D((AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 *)L_37, L_38, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_010e;
	} // end catch (depth: 1)

IL_00fb:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 * L_39 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncUniTaskMethodBuilder_SetResult_mEB0C04A892C51268180DED2647936AA6DE8BA80D((AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 *)L_39, /*hidden argument*/NULL);
	}

IL_010e:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CDeserializeStateU3Ed__27_MoveNext_mA25CAFA71A4B1E7FF71433CE62CFA04D1E5C4CD3_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CDeserializeStateU3Ed__27_tABF41614DF3DFF2D9AAA5826BE7678FFBFE9C811 * _thisAdjusted = reinterpret_cast<U3CDeserializeStateU3Ed__27_tABF41614DF3DFF2D9AAA5826BE7678FFBFE9C811 *>(__this + _offset);
	U3CDeserializeStateU3Ed__27_MoveNext_mA25CAFA71A4B1E7FF71433CE62CFA04D1E5C4CD3(_thisAdjusted, method);
}
// System.Void Naninovel.UI.VariableInputPanel/<DeserializeState>d__27::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDeserializeStateU3Ed__27_SetStateMachine_mC75A1227EB4916701F4D40222428AEF36C319FDD (U3CDeserializeStateU3Ed__27_tABF41614DF3DFF2D9AAA5826BE7678FFBFE9C811 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncUniTaskMethodBuilder_SetStateMachine_m919B0537825382AC072CF24F8D838BD3920E9FC8((AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CDeserializeStateU3Ed__27_SetStateMachine_mC75A1227EB4916701F4D40222428AEF36C319FDD_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CDeserializeStateU3Ed__27_tABF41614DF3DFF2D9AAA5826BE7678FFBFE9C811 * _thisAdjusted = reinterpret_cast<U3CDeserializeStateU3Ed__27_tABF41614DF3DFF2D9AAA5826BE7678FFBFE9C811 *>(__this + _offset);
	U3CDeserializeStateU3Ed__27_SetStateMachine_mC75A1227EB4916701F4D40222428AEF36C319FDD(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Naninovel.UI.VariableInputPanel/GameState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameState__ctor_m0D270FBA43E10BEEE59D95692FF6B795A3D5A2A8 (GameState_tE9D59EA400F61A3BF53ED8B04F14446938E65CD8 * __this, const RuntimeMethod* method)
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
// System.Void Naninovel.VideoBackground/<ChangeAppearanceAsync>d__22::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CChangeAppearanceAsyncU3Ed__22_MoveNext_m259C21069894CC52AF270951781951062E3F6EF8 (U3CChangeAppearanceAsyncU3Ed__22_tCB35366F250EDB2DEE0257694727C11654A86404 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t2EC4E48D6D8C5EC90776FBA7B42075F059E21967_TisU3CChangeAppearanceAsyncU3Ed__22_tCB35366F250EDB2DEE0257694727C11654A86404_mC082037C8F66077D258B0E964CE5E906ADE5A2B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822_TisU3CChangeAppearanceAsyncU3Ed__22_tCB35366F250EDB2DEE0257694727C11654A86404_m30770BFA9DCC0171DA0E040188C2B23A70D0E47D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tC53C155C42BF6DB6BBD8673DE4B04D42737173C6_TisU3CChangeAppearanceAsyncU3Ed__22_tCB35366F250EDB2DEE0257694727C11654A86404_m10E9C25C2D2B3DE78A32F78E348CAF3175B196DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m79E7FF75A14DA696B555E10CAE4C3FD7BB336B27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_mCBCDC5F183736F78C9405A29DC0D1CA5D7F70B0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_mAC879765AB7EDF9E072F95ED3C8BC40FA794B766_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m3CA0ECC6167320AC4CFEDE2D74C5987D6FD4D33E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mB601D7C83EE42426390069F44706A90BF436A5CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mFDCBD2AADA33545968833C390A53F22CB197FCED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mB30B09059F431D44DC3AB26FEA5731E7C2515BE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mC8F3B6053EC08645E87B9CFF69A1578B1328AE39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_mD17FB23F1BF828B36BD77C8070A7ECBDA0FA2791_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VideoBackground_tC31D69C74D104E5F414AAE56250D1AAD449B7F47_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	VideoBackground_tC31D69C74D104E5F414AAE56250D1AAD449B7F47 * V_1 = NULL;
	VideoData_t995725B9BB3E0B9FADDA15CD9D34810784D73AD2 * V_2 = NULL;
	Awaiter_t2EC4E48D6D8C5EC90776FBA7B42075F059E21967  V_3;
	memset((&V_3), 0, sizeof(V_3));
	UniTask_1_tAAD1C29A0EA451DC7946ED7921521AD191FB2674  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Awaiter_tC53C155C42BF6DB6BBD8673DE4B04D42737173C6  V_5;
	memset((&V_5), 0, sizeof(V_5));
	YieldAwaitable_t0AF0E5F39D5840C6614B26D0AF53DD2A63037F56  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822  V_7;
	memset((&V_7), 0, sizeof(V_7));
	UniTask_t41263A639210D10E03708EE0B4B03A964D7EEE3C  V_8;
	memset((&V_8), 0, sizeof(V_8));
	Enumerator_tDB6A1BEA398EC278FC8C6F9F2D6B2B2715BB7AB8  V_9;
	memset((&V_9), 0, sizeof(V_9));
	KeyValuePair_2_tCFA0FBC9A13D1364F07E32F988EE04F5B9FA273C  V_10;
	memset((&V_10), 0, sizeof(V_10));
	Exception_t * V_11 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 10> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		VideoBackground_tC31D69C74D104E5F414AAE56250D1AAD449B7F47 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			switch (L_2)
			{
				case 0:
				{
					goto IL_0080;
				}
				case 1:
				{
					goto IL_0121;
				}
				case 2:
				{
					goto IL_01df;
				}
			}
		}

IL_0020:
		{
			// this.appearance = appearance;
			VideoBackground_tC31D69C74D104E5F414AAE56250D1AAD449B7F47 * L_3 = V_1;
			String_t* L_4 = __this->get_appearance_3();
			NullCheck(L_3);
			L_3->set_appearance_17(L_4);
			// if (string.IsNullOrEmpty(appearance)) return;
			String_t* L_5 = __this->get_appearance_3();
			bool L_6;
			L_6 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_5, /*hidden argument*/NULL);
			if (!L_6)
			{
				goto IL_003e;
			}
		}

IL_0039:
		{
			// if (string.IsNullOrEmpty(appearance)) return;
			goto IL_028d;
		}

IL_003e:
		{
			// var videoData = await GetOrLoadVideoDataAsync(appearance);
			VideoBackground_tC31D69C74D104E5F414AAE56250D1AAD449B7F47 * L_7 = V_1;
			String_t* L_8 = __this->get_appearance_3();
			NullCheck(L_7);
			UniTask_1_tAAD1C29A0EA451DC7946ED7921521AD191FB2674  L_9;
			L_9 = VideoBackground_GetOrLoadVideoDataAsync_mF139769959BA01959791EF990FF05B5C765F4A7C(L_7, L_8, /*hidden argument*/NULL);
			V_4 = L_9;
			Awaiter_t2EC4E48D6D8C5EC90776FBA7B42075F059E21967  L_10;
			L_10 = UniTask_1_GetAwaiter_mD17FB23F1BF828B36BD77C8070A7ECBDA0FA2791((UniTask_1_tAAD1C29A0EA451DC7946ED7921521AD191FB2674 *)(&V_4), /*hidden argument*/UniTask_1_GetAwaiter_mD17FB23F1BF828B36BD77C8070A7ECBDA0FA2791_RuntimeMethod_var);
			V_3 = L_10;
			bool L_11;
			L_11 = Awaiter_get_IsCompleted_mCBCDC5F183736F78C9405A29DC0D1CA5D7F70B0A((Awaiter_t2EC4E48D6D8C5EC90776FBA7B42075F059E21967 *)(&V_3), /*hidden argument*/Awaiter_get_IsCompleted_mCBCDC5F183736F78C9405A29DC0D1CA5D7F70B0A_RuntimeMethod_var);
			if (L_11)
			{
				goto IL_009c;
			}
		}

IL_005d:
		{
			int32_t L_12 = 0;
			V_0 = L_12;
			__this->set_U3CU3E1__state_0(L_12);
			Awaiter_t2EC4E48D6D8C5EC90776FBA7B42075F059E21967  L_13 = V_3;
			__this->set_U3CU3Eu__1_9(L_13);
			AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 * L_14 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t2EC4E48D6D8C5EC90776FBA7B42075F059E21967_TisU3CChangeAppearanceAsyncU3Ed__22_tCB35366F250EDB2DEE0257694727C11654A86404_mC082037C8F66077D258B0E964CE5E906ADE5A2B9((AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 *)L_14, (Awaiter_t2EC4E48D6D8C5EC90776FBA7B42075F059E21967 *)(&V_3), (U3CChangeAppearanceAsyncU3Ed__22_tCB35366F250EDB2DEE0257694727C11654A86404 *)__this, /*hidden argument*/AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t2EC4E48D6D8C5EC90776FBA7B42075F059E21967_TisU3CChangeAppearanceAsyncU3Ed__22_tCB35366F250EDB2DEE0257694727C11654A86404_mC082037C8F66077D258B0E964CE5E906ADE5A2B9_RuntimeMethod_var);
			goto IL_02a7;
		}

IL_0080:
		{
			Awaiter_t2EC4E48D6D8C5EC90776FBA7B42075F059E21967  L_15 = __this->get_U3CU3Eu__1_9();
			V_3 = L_15;
			Awaiter_t2EC4E48D6D8C5EC90776FBA7B42075F059E21967 * L_16 = __this->get_address_of_U3CU3Eu__1_9();
			il2cpp_codegen_initobj(L_16, sizeof(Awaiter_t2EC4E48D6D8C5EC90776FBA7B42075F059E21967 ));
			int32_t L_17 = (-1);
			V_0 = L_17;
			__this->set_U3CU3E1__state_0(L_17);
		}

IL_009c:
		{
			VideoData_t995725B9BB3E0B9FADDA15CD9D34810784D73AD2 * L_18;
			L_18 = Awaiter_GetResult_m79E7FF75A14DA696B555E10CAE4C3FD7BB336B27((Awaiter_t2EC4E48D6D8C5EC90776FBA7B42075F059E21967 *)(&V_3), /*hidden argument*/Awaiter_GetResult_m79E7FF75A14DA696B555E10CAE4C3FD7BB336B27_RuntimeMethod_var);
			V_2 = L_18;
			VideoData_t995725B9BB3E0B9FADDA15CD9D34810784D73AD2 * L_19 = V_2;
			__this->set_U3CvideoDataU3E5__2_8(L_19);
			// if (cancellationToken.CancelASAP) return;
			CancellationToken_t6347F75AB41E1331E57D91A3F883A02D5FA698E3 * L_20 = __this->get_address_of_cancellationToken_4();
			bool L_21;
			L_21 = CancellationToken_get_CancelASAP_m8EA148C6C8867174C394EBB82DF2628DCAF087E8((CancellationToken_t6347F75AB41E1331E57D91A3F883A02D5FA698E3 *)L_20, /*hidden argument*/NULL);
			if (!L_21)
			{
				goto IL_00bd;
			}
		}

IL_00b8:
		{
			// if (cancellationToken.CancelASAP) return;
			goto IL_028d;
		}

IL_00bd:
		{
			// if (!videoData.Player.isPrepared)
			VideoData_t995725B9BB3E0B9FADDA15CD9D34810784D73AD2 * L_22 = __this->get_U3CvideoDataU3E5__2_8();
			NullCheck(L_22);
			VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_23 = L_22->get_Player_0();
			NullCheck(L_23);
			bool L_24;
			L_24 = VideoPlayer_get_isPrepared_m747401DA6ADE60190873F918AD83AB7382D0E423(L_23, /*hidden argument*/NULL);
			if (L_24)
			{
				goto IL_0169;
			}
		}

IL_00d2:
		{
			// videoData.Player.Prepare();
			VideoData_t995725B9BB3E0B9FADDA15CD9D34810784D73AD2 * L_25 = __this->get_U3CvideoDataU3E5__2_8();
			NullCheck(L_25);
			VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_26 = L_25->get_Player_0();
			NullCheck(L_26);
			VideoPlayer_Prepare_m3B32C1AA66866136ABDEF92F762D3479C0459903(L_26, /*hidden argument*/NULL);
			goto IL_0145;
		}

IL_00e4:
		{
			// await AsyncUtils.WaitEndOfFrame;
			YieldAwaitable_t0AF0E5F39D5840C6614B26D0AF53DD2A63037F56  L_27;
			L_27 = AsyncUtils_get_WaitEndOfFrame_mDC0867AF8ACE2E027D9A6052C0319E6EAB897531(/*hidden argument*/NULL);
			V_6 = L_27;
			Awaiter_tC53C155C42BF6DB6BBD8673DE4B04D42737173C6  L_28;
			L_28 = YieldAwaitable_GetAwaiter_m1769A471365684D6C113CE00DB3C960D11E7B3AF((YieldAwaitable_t0AF0E5F39D5840C6614B26D0AF53DD2A63037F56 *)(&V_6), /*hidden argument*/NULL);
			V_5 = L_28;
			bool L_29;
			L_29 = Awaiter_get_IsCompleted_m42F03E6C535107C5916EFDECAD881942718FCD6A((Awaiter_tC53C155C42BF6DB6BBD8673DE4B04D42737173C6 *)(&V_5), /*hidden argument*/NULL);
			if (L_29)
			{
				goto IL_013e;
			}
		}

IL_00fd:
		{
			int32_t L_30 = 1;
			V_0 = L_30;
			__this->set_U3CU3E1__state_0(L_30);
			Awaiter_tC53C155C42BF6DB6BBD8673DE4B04D42737173C6  L_31 = V_5;
			__this->set_U3CU3Eu__2_10(L_31);
			AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 * L_32 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tC53C155C42BF6DB6BBD8673DE4B04D42737173C6_TisU3CChangeAppearanceAsyncU3Ed__22_tCB35366F250EDB2DEE0257694727C11654A86404_m10E9C25C2D2B3DE78A32F78E348CAF3175B196DE((AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 *)L_32, (Awaiter_tC53C155C42BF6DB6BBD8673DE4B04D42737173C6 *)(&V_5), (U3CChangeAppearanceAsyncU3Ed__22_tCB35366F250EDB2DEE0257694727C11654A86404 *)__this, /*hidden argument*/AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tC53C155C42BF6DB6BBD8673DE4B04D42737173C6_TisU3CChangeAppearanceAsyncU3Ed__22_tCB35366F250EDB2DEE0257694727C11654A86404_m10E9C25C2D2B3DE78A32F78E348CAF3175B196DE_RuntimeMethod_var);
			goto IL_02a7;
		}

IL_0121:
		{
			Awaiter_tC53C155C42BF6DB6BBD8673DE4B04D42737173C6  L_33 = __this->get_U3CU3Eu__2_10();
			V_5 = L_33;
			Awaiter_tC53C155C42BF6DB6BBD8673DE4B04D42737173C6 * L_34 = __this->get_address_of_U3CU3Eu__2_10();
			il2cpp_codegen_initobj(L_34, sizeof(Awaiter_tC53C155C42BF6DB6BBD8673DE4B04D42737173C6 ));
			int32_t L_35 = (-1);
			V_0 = L_35;
			__this->set_U3CU3E1__state_0(L_35);
		}

IL_013e:
		{
			Awaiter_GetResult_m477940C595015AFCD4FEB055A82A663633BD5E47((Awaiter_tC53C155C42BF6DB6BBD8673DE4B04D42737173C6 *)(&V_5), /*hidden argument*/NULL);
		}

IL_0145:
		{
			// while (!videoData.Player.isPrepared)
			VideoData_t995725B9BB3E0B9FADDA15CD9D34810784D73AD2 * L_36 = __this->get_U3CvideoDataU3E5__2_8();
			NullCheck(L_36);
			VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_37 = L_36->get_Player_0();
			NullCheck(L_37);
			bool L_38;
			L_38 = VideoPlayer_get_isPrepared_m747401DA6ADE60190873F918AD83AB7382D0E423(L_37, /*hidden argument*/NULL);
			if (!L_38)
			{
				goto IL_00e4;
			}
		}

IL_0157:
		{
			// if (cancellationToken.CancelASAP) return;
			CancellationToken_t6347F75AB41E1331E57D91A3F883A02D5FA698E3 * L_39 = __this->get_address_of_cancellationToken_4();
			bool L_40;
			L_40 = CancellationToken_get_CancelASAP_m8EA148C6C8867174C394EBB82DF2628DCAF087E8((CancellationToken_t6347F75AB41E1331E57D91A3F883A02D5FA698E3 *)L_39, /*hidden argument*/NULL);
			if (!L_40)
			{
				goto IL_0169;
			}
		}

IL_0164:
		{
			// if (cancellationToken.CancelASAP) return;
			goto IL_028d;
		}

IL_0169:
		{
			// videoData.Player.Play();
			VideoData_t995725B9BB3E0B9FADDA15CD9D34810784D73AD2 * L_41 = __this->get_U3CvideoDataU3E5__2_8();
			NullCheck(L_41);
			VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_42 = L_41->get_Player_0();
			NullCheck(L_42);
			VideoPlayer_Play_m2AD0D39D70055A5AADCF63430D3D9CEC7DCB0516(L_42, /*hidden argument*/NULL);
			// await TransitionalRenderer.TransitionToAsync(videoData.RenderTexture, duration, easingType, transition, cancellationToken);
			VideoBackground_tC31D69C74D104E5F414AAE56250D1AAD449B7F47 * L_43 = V_1;
			NullCheck(L_43);
			TransitionalRenderer_t417C5BDB13977F6209462DBA455A7E2BE95B61F5 * L_44;
			L_44 = VirtFuncInvoker0< TransitionalRenderer_t417C5BDB13977F6209462DBA455A7E2BE95B61F5 * >::Invoke(62 /* Naninovel.TransitionalRenderer Naninovel.VideoBackground::get_TransitionalRenderer() */, L_43);
			VideoData_t995725B9BB3E0B9FADDA15CD9D34810784D73AD2 * L_45 = __this->get_U3CvideoDataU3E5__2_8();
			NullCheck(L_45);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_46 = L_45->get_RenderTexture_1();
			float L_47 = __this->get_duration_5();
			int32_t L_48 = __this->get_easingType_6();
			Nullable_1_t1676A29F23467DBADD161C035D64BDBF1FD6A335  L_49 = __this->get_transition_7();
			CancellationToken_t6347F75AB41E1331E57D91A3F883A02D5FA698E3  L_50 = __this->get_cancellationToken_4();
			NullCheck(L_44);
			UniTask_t41263A639210D10E03708EE0B4B03A964D7EEE3C  L_51;
			L_51 = VirtFuncInvoker5< UniTask_t41263A639210D10E03708EE0B4B03A964D7EEE3C , Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *, float, int32_t, Nullable_1_t1676A29F23467DBADD161C035D64BDBF1FD6A335 , CancellationToken_t6347F75AB41E1331E57D91A3F883A02D5FA698E3  >::Invoke(37 /* UniRx.Async.UniTask Naninovel.TransitionalRenderer::TransitionToAsync(UnityEngine.Texture,System.Single,Naninovel.EasingType,System.Nullable`1<Naninovel.Transition>,Naninovel.CancellationToken) */, L_44, L_46, L_47, L_48, L_49, L_50);
			V_8 = L_51;
			Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822  L_52;
			L_52 = UniTask_GetAwaiter_mD2E76ACB629099DC37BB3C99511590FA9B227272((UniTask_t41263A639210D10E03708EE0B4B03A964D7EEE3C *)(&V_8), /*hidden argument*/NULL);
			V_7 = L_52;
			bool L_53;
			L_53 = Awaiter_get_IsCompleted_m0F67C2C63E4AD6E47A126AA69B8A98E0770F096C((Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822 *)(&V_7), /*hidden argument*/NULL);
			if (L_53)
			{
				goto IL_01fc;
			}
		}

IL_01bb:
		{
			int32_t L_54 = 2;
			V_0 = L_54;
			__this->set_U3CU3E1__state_0(L_54);
			Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822  L_55 = V_7;
			__this->set_U3CU3Eu__3_11(L_55);
			AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 * L_56 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822_TisU3CChangeAppearanceAsyncU3Ed__22_tCB35366F250EDB2DEE0257694727C11654A86404_m30770BFA9DCC0171DA0E040188C2B23A70D0E47D((AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 *)L_56, (Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822 *)(&V_7), (U3CChangeAppearanceAsyncU3Ed__22_tCB35366F250EDB2DEE0257694727C11654A86404 *)__this, /*hidden argument*/AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822_TisU3CChangeAppearanceAsyncU3Ed__22_tCB35366F250EDB2DEE0257694727C11654A86404_m30770BFA9DCC0171DA0E040188C2B23A70D0E47D_RuntimeMethod_var);
			goto IL_02a7;
		}

IL_01df:
		{
			Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822  L_57 = __this->get_U3CU3Eu__3_11();
			V_7 = L_57;
			Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822 * L_58 = __this->get_address_of_U3CU3Eu__3_11();
			il2cpp_codegen_initobj(L_58, sizeof(Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822 ));
			int32_t L_59 = (-1);
			V_0 = L_59;
			__this->set_U3CU3E1__state_0(L_59);
		}

IL_01fc:
		{
			Awaiter_GetResult_m3EFD26ADCEFA37F3B4EE99CD8BE65F51405CFEF3((Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822 *)(&V_7), /*hidden argument*/NULL);
			// if (cancellationToken.CancelASAP) return;
			CancellationToken_t6347F75AB41E1331E57D91A3F883A02D5FA698E3 * L_60 = __this->get_address_of_cancellationToken_4();
			bool L_61;
			L_61 = CancellationToken_get_CancelASAP_m8EA148C6C8867174C394EBB82DF2628DCAF087E8((CancellationToken_t6347F75AB41E1331E57D91A3F883A02D5FA698E3 *)L_60, /*hidden argument*/NULL);
			if (!L_61)
			{
				goto IL_0212;
			}
		}

IL_0210:
		{
			// if (cancellationToken.CancelASAP) return;
			goto IL_028d;
		}

IL_0212:
		{
			// foreach (var kv in videoDataMap) // Make sure no other videos are playing.
			LiteralMap_1_t1A9EB0EEABDB7CC5DE71C4813A6B71DB3FEEB47D * L_62 = ((VideoBackground_tC31D69C74D104E5F414AAE56250D1AAD449B7F47_StaticFields*)il2cpp_codegen_static_fields_for(VideoBackground_tC31D69C74D104E5F414AAE56250D1AAD449B7F47_il2cpp_TypeInfo_var))->get_videoDataMap_15();
			NullCheck(L_62);
			Enumerator_tDB6A1BEA398EC278FC8C6F9F2D6B2B2715BB7AB8  L_63;
			L_63 = Dictionary_2_GetEnumerator_mAC879765AB7EDF9E072F95ED3C8BC40FA794B766(L_62, /*hidden argument*/Dictionary_2_GetEnumerator_mAC879765AB7EDF9E072F95ED3C8BC40FA794B766_RuntimeMethod_var);
			V_9 = L_63;
		}

IL_021e:
		try
		{ // begin try (depth: 2)
			{
				goto IL_024e;
			}

IL_0220:
			{
				// foreach (var kv in videoDataMap) // Make sure no other videos are playing.
				KeyValuePair_2_tCFA0FBC9A13D1364F07E32F988EE04F5B9FA273C  L_64;
				L_64 = Enumerator_get_Current_mFDCBD2AADA33545968833C390A53F22CB197FCED_inline((Enumerator_tDB6A1BEA398EC278FC8C6F9F2D6B2B2715BB7AB8 *)(&V_9), /*hidden argument*/Enumerator_get_Current_mFDCBD2AADA33545968833C390A53F22CB197FCED_RuntimeMethod_var);
				V_10 = L_64;
				// if (!kv.Key.EqualsFast(appearance))
				String_t* L_65;
				L_65 = KeyValuePair_2_get_Key_mB30B09059F431D44DC3AB26FEA5731E7C2515BE2_inline((KeyValuePair_2_tCFA0FBC9A13D1364F07E32F988EE04F5B9FA273C *)(&V_10), /*hidden argument*/KeyValuePair_2_get_Key_mB30B09059F431D44DC3AB26FEA5731E7C2515BE2_RuntimeMethod_var);
				String_t* L_66 = __this->get_appearance_3();
				bool L_67;
				L_67 = StringUtils_EqualsFast_mDE173149F315D22324BDCA778964F2EAA055E6C7(L_65, L_66, /*hidden argument*/NULL);
				if (L_67)
				{
					goto IL_024e;
				}
			}

IL_023d:
			{
				// kv.Value.Player.Stop();
				VideoData_t995725B9BB3E0B9FADDA15CD9D34810784D73AD2 * L_68;
				L_68 = KeyValuePair_2_get_Value_mC8F3B6053EC08645E87B9CFF69A1578B1328AE39_inline((KeyValuePair_2_tCFA0FBC9A13D1364F07E32F988EE04F5B9FA273C *)(&V_10), /*hidden argument*/KeyValuePair_2_get_Value_mC8F3B6053EC08645E87B9CFF69A1578B1328AE39_RuntimeMethod_var);
				NullCheck(L_68);
				VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_69 = L_68->get_Player_0();
				NullCheck(L_69);
				VideoPlayer_Stop_mC65F299C170F41E6823207427F782982031DE293(L_69, /*hidden argument*/NULL);
			}

IL_024e:
			{
				// foreach (var kv in videoDataMap) // Make sure no other videos are playing.
				bool L_70;
				L_70 = Enumerator_MoveNext_mB601D7C83EE42426390069F44706A90BF436A5CE((Enumerator_tDB6A1BEA398EC278FC8C6F9F2D6B2B2715BB7AB8 *)(&V_9), /*hidden argument*/Enumerator_MoveNext_mB601D7C83EE42426390069F44706A90BF436A5CE_RuntimeMethod_var);
				if (L_70)
				{
					goto IL_0220;
				}
			}

IL_0257:
			{
				IL2CPP_LEAVE(0x26B, FINALLY_0259);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0259;
		}

FINALLY_0259:
		{ // begin finally (depth: 2)
			{
				int32_t L_71 = V_0;
				if ((((int32_t)L_71) >= ((int32_t)0)))
				{
					goto IL_026a;
				}
			}

IL_025d:
			{
				Enumerator_Dispose_m3CA0ECC6167320AC4CFEDE2D74C5987D6FD4D33E((Enumerator_tDB6A1BEA398EC278FC8C6F9F2D6B2B2715BB7AB8 *)(&V_9), /*hidden argument*/Enumerator_Dispose_m3CA0ECC6167320AC4CFEDE2D74C5987D6FD4D33E_RuntimeMethod_var);
			}

IL_026a:
			{
				IL2CPP_END_FINALLY(601)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(601)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x26B, IL_026b)
		}

IL_026b:
		{
			goto IL_028d;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_026d;
		}
		throw e;
	}

CATCH_026d:
	{ // begin catch(System.Exception)
		V_11 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		__this->set_U3CvideoDataU3E5__2_8((VideoData_t995725B9BB3E0B9FADDA15CD9D34810784D73AD2 *)NULL);
		AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 * L_72 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_73 = V_11;
		AsyncUniTaskMethodBuilder_SetException_mD97347DB2613C31645BBBE97F83717D3F225A84D((AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 *)L_72, L_73, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_02a7;
	} // end catch (depth: 1)

IL_028d:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		__this->set_U3CvideoDataU3E5__2_8((VideoData_t995725B9BB3E0B9FADDA15CD9D34810784D73AD2 *)NULL);
		AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 * L_74 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncUniTaskMethodBuilder_SetResult_mEB0C04A892C51268180DED2647936AA6DE8BA80D((AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 *)L_74, /*hidden argument*/NULL);
	}

IL_02a7:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CChangeAppearanceAsyncU3Ed__22_MoveNext_m259C21069894CC52AF270951781951062E3F6EF8_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CChangeAppearanceAsyncU3Ed__22_tCB35366F250EDB2DEE0257694727C11654A86404 * _thisAdjusted = reinterpret_cast<U3CChangeAppearanceAsyncU3Ed__22_tCB35366F250EDB2DEE0257694727C11654A86404 *>(__this + _offset);
	U3CChangeAppearanceAsyncU3Ed__22_MoveNext_m259C21069894CC52AF270951781951062E3F6EF8(_thisAdjusted, method);
}
// System.Void Naninovel.VideoBackground/<ChangeAppearanceAsync>d__22::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CChangeAppearanceAsyncU3Ed__22_SetStateMachine_mB0A790EB161DB8277075A2C9F3ECFD19921D7AF7 (U3CChangeAppearanceAsyncU3Ed__22_tCB35366F250EDB2DEE0257694727C11654A86404 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncUniTaskMethodBuilder_SetStateMachine_m919B0537825382AC072CF24F8D838BD3920E9FC8((AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CChangeAppearanceAsyncU3Ed__22_SetStateMachine_mB0A790EB161DB8277075A2C9F3ECFD19921D7AF7_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CChangeAppearanceAsyncU3Ed__22_tCB35366F250EDB2DEE0257694727C11654A86404 * _thisAdjusted = reinterpret_cast<U3CChangeAppearanceAsyncU3Ed__22_tCB35366F250EDB2DEE0257694727C11654A86404 *>(__this + _offset);
	U3CChangeAppearanceAsyncU3Ed__22_SetStateMachine_mB0A790EB161DB8277075A2C9F3ECFD19921D7AF7(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Naninovel.VideoBackground/<ChangeVisibilityAsync>d__23::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CChangeVisibilityAsyncU3Ed__23_MoveNext_m31006CEF9681B797B889DE5F74DF147449AB210D (U3CChangeVisibilityAsyncU3Ed__23_t360BFA64DB92AE4FBA3007EE6CDFF301F0D0FE0F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822_TisU3CChangeVisibilityAsyncU3Ed__23_t360BFA64DB92AE4FBA3007EE6CDFF301F0D0FE0F_mF51EDE0488A5AE0AF5A4E44E055B7642504E4E03_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	VideoBackground_tC31D69C74D104E5F414AAE56250D1AAD449B7F47 * V_1 = NULL;
	Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822  V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_t41263A639210D10E03708EE0B4B03A964D7EEE3C  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	TransitionalRenderer_t417C5BDB13977F6209462DBA455A7E2BE95B61F5 * G_B4_0 = NULL;
	TransitionalRenderer_t417C5BDB13977F6209462DBA455A7E2BE95B61F5 * G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	TransitionalRenderer_t417C5BDB13977F6209462DBA455A7E2BE95B61F5 * G_B5_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		VideoBackground_tC31D69C74D104E5F414AAE56250D1AAD449B7F47 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0079;
			}
		}

IL_0011:
		{
			// this.visible = isVisible;
			VideoBackground_tC31D69C74D104E5F414AAE56250D1AAD449B7F47 * L_3 = V_1;
			bool L_4 = __this->get_isVisible_3();
			NullCheck(L_3);
			L_3->set_visible_18(L_4);
			// await TransitionalRenderer.FadeToAsync(isVisible ? 1 : 0, duration, easingType, cancellationToken);
			VideoBackground_tC31D69C74D104E5F414AAE56250D1AAD449B7F47 * L_5 = V_1;
			NullCheck(L_5);
			TransitionalRenderer_t417C5BDB13977F6209462DBA455A7E2BE95B61F5 * L_6;
			L_6 = VirtFuncInvoker0< TransitionalRenderer_t417C5BDB13977F6209462DBA455A7E2BE95B61F5 * >::Invoke(62 /* Naninovel.TransitionalRenderer Naninovel.VideoBackground::get_TransitionalRenderer() */, L_5);
			bool L_7 = __this->get_isVisible_3();
			G_B3_0 = L_6;
			if (L_7)
			{
				G_B4_0 = L_6;
				goto IL_002e;
			}
		}

IL_002b:
		{
			G_B5_0 = 0;
			G_B5_1 = G_B3_0;
			goto IL_002f;
		}

IL_002e:
		{
			G_B5_0 = 1;
			G_B5_1 = G_B4_0;
		}

IL_002f:
		{
			float L_8 = __this->get_duration_4();
			int32_t L_9 = __this->get_easingType_5();
			CancellationToken_t6347F75AB41E1331E57D91A3F883A02D5FA698E3  L_10 = __this->get_cancellationToken_6();
			NullCheck(G_B5_1);
			UniTask_t41263A639210D10E03708EE0B4B03A964D7EEE3C  L_11;
			L_11 = VirtFuncInvoker4< UniTask_t41263A639210D10E03708EE0B4B03A964D7EEE3C , float, float, int32_t, CancellationToken_t6347F75AB41E1331E57D91A3F883A02D5FA698E3  >::Invoke(39 /* UniRx.Async.UniTask Naninovel.TransitionalRenderer::FadeToAsync(System.Single,System.Single,Naninovel.EasingType,Naninovel.CancellationToken) */, G_B5_1, ((float)((float)G_B5_0)), L_8, L_9, L_10);
			V_3 = L_11;
			Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822  L_12;
			L_12 = UniTask_GetAwaiter_mD2E76ACB629099DC37BB3C99511590FA9B227272((UniTask_t41263A639210D10E03708EE0B4B03A964D7EEE3C *)(&V_3), /*hidden argument*/NULL);
			V_2 = L_12;
			bool L_13;
			L_13 = Awaiter_get_IsCompleted_m0F67C2C63E4AD6E47A126AA69B8A98E0770F096C((Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822 *)(&V_2), /*hidden argument*/NULL);
			if (L_13)
			{
				goto IL_0095;
			}
		}

IL_0059:
		{
			int32_t L_14 = 0;
			V_0 = L_14;
			__this->set_U3CU3E1__state_0(L_14);
			Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822  L_15 = V_2;
			__this->set_U3CU3Eu__1_7(L_15);
			AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 * L_16 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822_TisU3CChangeVisibilityAsyncU3Ed__23_t360BFA64DB92AE4FBA3007EE6CDFF301F0D0FE0F_mF51EDE0488A5AE0AF5A4E44E055B7642504E4E03((AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 *)L_16, (Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822 *)(&V_2), (U3CChangeVisibilityAsyncU3Ed__23_t360BFA64DB92AE4FBA3007EE6CDFF301F0D0FE0F *)__this, /*hidden argument*/AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822_TisU3CChangeVisibilityAsyncU3Ed__23_t360BFA64DB92AE4FBA3007EE6CDFF301F0D0FE0F_mF51EDE0488A5AE0AF5A4E44E055B7642504E4E03_RuntimeMethod_var);
			goto IL_00ca;
		}

IL_0079:
		{
			Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822  L_17 = __this->get_U3CU3Eu__1_7();
			V_2 = L_17;
			Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822 * L_18 = __this->get_address_of_U3CU3Eu__1_7();
			il2cpp_codegen_initobj(L_18, sizeof(Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822 ));
			int32_t L_19 = (-1);
			V_0 = L_19;
			__this->set_U3CU3E1__state_0(L_19);
		}

IL_0095:
		{
			Awaiter_GetResult_m3EFD26ADCEFA37F3B4EE99CD8BE65F51405CFEF3((Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822 *)(&V_2), /*hidden argument*/NULL);
			goto IL_00b7;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_009e;
		}
		throw e;
	}

CATCH_009e:
	{ // begin catch(System.Exception)
		V_4 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 * L_20 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_21 = V_4;
		AsyncUniTaskMethodBuilder_SetException_mD97347DB2613C31645BBBE97F83717D3F225A84D((AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 *)L_20, L_21, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00ca;
	} // end catch (depth: 1)

IL_00b7:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 * L_22 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncUniTaskMethodBuilder_SetResult_mEB0C04A892C51268180DED2647936AA6DE8BA80D((AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 *)L_22, /*hidden argument*/NULL);
	}

IL_00ca:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CChangeVisibilityAsyncU3Ed__23_MoveNext_m31006CEF9681B797B889DE5F74DF147449AB210D_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CChangeVisibilityAsyncU3Ed__23_t360BFA64DB92AE4FBA3007EE6CDFF301F0D0FE0F * _thisAdjusted = reinterpret_cast<U3CChangeVisibilityAsyncU3Ed__23_t360BFA64DB92AE4FBA3007EE6CDFF301F0D0FE0F *>(__this + _offset);
	U3CChangeVisibilityAsyncU3Ed__23_MoveNext_m31006CEF9681B797B889DE5F74DF147449AB210D(_thisAdjusted, method);
}
// System.Void Naninovel.VideoBackground/<ChangeVisibilityAsync>d__23::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CChangeVisibilityAsyncU3Ed__23_SetStateMachine_m12AD2935420CBDA59552D6D8E92CF1CDFF01CDC0 (U3CChangeVisibilityAsyncU3Ed__23_t360BFA64DB92AE4FBA3007EE6CDFF301F0D0FE0F * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncUniTaskMethodBuilder_SetStateMachine_m919B0537825382AC072CF24F8D838BD3920E9FC8((AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CChangeVisibilityAsyncU3Ed__23_SetStateMachine_m12AD2935420CBDA59552D6D8E92CF1CDFF01CDC0_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CChangeVisibilityAsyncU3Ed__23_t360BFA64DB92AE4FBA3007EE6CDFF301F0D0FE0F * _thisAdjusted = reinterpret_cast<U3CChangeVisibilityAsyncU3Ed__23_t360BFA64DB92AE4FBA3007EE6CDFF301F0D0FE0F *>(__this + _offset);
	U3CChangeVisibilityAsyncU3Ed__23_SetStateMachine_m12AD2935420CBDA59552D6D8E92CF1CDFF01CDC0(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Naninovel.VideoBackground/<GetOrLoadVideoDataAsync>d__30::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetOrLoadVideoDataAsyncU3Ed__30_MoveNext_m7E941683BDD788C7F8CD2B291A42D66AA54F7BA8 (U3CGetOrLoadVideoDataAsyncU3Ed__30_tDF4395E0B62F17B7558DC26A111F9659F3932FA6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_t8473B6ABE125918A05A5157E70D00B9F0DE43CCD_TisU3CGetOrLoadVideoDataAsyncU3Ed__30_tDF4395E0B62F17B7558DC26A111F9659F3932FA6_m1448B27CBD80B26F3A45F1ED57DFE92A46819A90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetResult_mB10E8FA1F24E550A04D2804063FC4FC3F15C12CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m43A2DBD3CAA0B22FDA0FDF1AA73DFA740188D36B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m0C5A674B5B3230390E66084EA8F2E253A7B71A62_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m59D87BB44FAFD3C7C9DE31BE1B08994382E11D8F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mAFCA1A3083CEDF7F71BAB747557FBC46159F20EE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mF9BB9CBD018363A66292571606FE6D1ABA58895A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Engine_CreateObject_TisVideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86_m056B67E75605786E551EBC5A444F3913D1205D78_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Engine_t7C3301CD5B8D8E1B009CFE5D95E5E0CD4CF3962F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resource_1_op_Implicit_m85FFDD6CB563EE688362E3C87045C3B55E317EC6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resource_1_t8A5083E4E0F7B7D7F3E64338DF3B0C6103550999_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m9924469BDE71E4B2A85924A17439D08A8E3A28CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VideoBackground_tC31D69C74D104E5F414AAE56250D1AAD449B7F47_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VideoData_t995725B9BB3E0B9FADDA15CD9D34810784D73AD2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	VideoBackground_tC31D69C74D104E5F414AAE56250D1AAD449B7F47 * V_1 = NULL;
	VideoData_t995725B9BB3E0B9FADDA15CD9D34810784D73AD2 * V_2 = NULL;
	Resource_1_t8A5083E4E0F7B7D7F3E64338DF3B0C6103550999 * V_3 = NULL;
	VideoData_t995725B9BB3E0B9FADDA15CD9D34810784D73AD2 * V_4 = NULL;
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Awaiter_t8473B6ABE125918A05A5157E70D00B9F0DE43CCD  V_6;
	memset((&V_6), 0, sizeof(V_6));
	UniTask_1_t0F1467ED8AB1A67EAA6B956FFCFECB83640C3607  V_7;
	memset((&V_7), 0, sizeof(V_7));
	Exception_t * V_8 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		VideoBackground_tC31D69C74D104E5F414AAE56250D1AAD449B7F47 * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_00bc;
			}
		}

IL_0014:
		{
			// if (videoDataMap.ContainsKey(videoName)) return videoDataMap[videoName];
			LiteralMap_1_t1A9EB0EEABDB7CC5DE71C4813A6B71DB3FEEB47D * L_3 = ((VideoBackground_tC31D69C74D104E5F414AAE56250D1AAD449B7F47_StaticFields*)il2cpp_codegen_static_fields_for(VideoBackground_tC31D69C74D104E5F414AAE56250D1AAD449B7F47_il2cpp_TypeInfo_var))->get_videoDataMap_15();
			String_t* L_4 = __this->get_videoName_2();
			NullCheck(L_3);
			bool L_5;
			L_5 = Dictionary_2_ContainsKey_m59D87BB44FAFD3C7C9DE31BE1B08994382E11D8F(L_3, L_4, /*hidden argument*/Dictionary_2_ContainsKey_m59D87BB44FAFD3C7C9DE31BE1B08994382E11D8F_RuntimeMethod_var);
			if (!L_5)
			{
				goto IL_003c;
			}
		}

IL_0026:
		{
			// if (videoDataMap.ContainsKey(videoName)) return videoDataMap[videoName];
			LiteralMap_1_t1A9EB0EEABDB7CC5DE71C4813A6B71DB3FEEB47D * L_6 = ((VideoBackground_tC31D69C74D104E5F414AAE56250D1AAD449B7F47_StaticFields*)il2cpp_codegen_static_fields_for(VideoBackground_tC31D69C74D104E5F414AAE56250D1AAD449B7F47_il2cpp_TypeInfo_var))->get_videoDataMap_15();
			String_t* L_7 = __this->get_videoName_2();
			NullCheck(L_6);
			VideoData_t995725B9BB3E0B9FADDA15CD9D34810784D73AD2 * L_8;
			L_8 = Dictionary_2_get_Item_mAFCA1A3083CEDF7F71BAB747557FBC46159F20EE(L_6, L_7, /*hidden argument*/Dictionary_2_get_Item_mAFCA1A3083CEDF7F71BAB747557FBC46159F20EE_RuntimeMethod_var);
			V_2 = L_8;
			goto IL_01d3;
		}

IL_003c:
		{
			// var renderTexture = new RenderTexture(renderTextureDescriptor);
			RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  L_9 = ((VideoBackground_tC31D69C74D104E5F414AAE56250D1AAD449B7F47_StaticFields*)il2cpp_codegen_static_fields_for(VideoBackground_tC31D69C74D104E5F414AAE56250D1AAD449B7F47_il2cpp_TypeInfo_var))->get_renderTextureDescriptor_14();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_10 = (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)il2cpp_codegen_object_new(RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849_il2cpp_TypeInfo_var);
			RenderTexture__ctor_m96C4C4C7B41EE884420046EFE4B8EC528B10D8BD(L_10, L_9, /*hidden argument*/NULL);
			__this->set_U3CrenderTextureU3E5__2_4(L_10);
			// var videoPlayer = Engine.CreateObject<VideoPlayer>(videoName);
			String_t* L_11 = __this->get_videoName_2();
			il2cpp_codegen_initobj((&V_5), sizeof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 ));
			Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_12 = V_5;
			IL2CPP_RUNTIME_CLASS_INIT(Engine_t7C3301CD5B8D8E1B009CFE5D95E5E0CD4CF3962F_il2cpp_TypeInfo_var);
			VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_13;
			L_13 = Engine_CreateObject_TisVideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86_m056B67E75605786E551EBC5A444F3913D1205D78(L_11, L_12, /*hidden argument*/Engine_CreateObject_TisVideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86_m056B67E75605786E551EBC5A444F3913D1205D78_RuntimeMethod_var);
			__this->set_U3CvideoPlayerU3E5__3_5(L_13);
			// videoPlayer.playOnAwake = false;
			VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_14 = __this->get_U3CvideoPlayerU3E5__3_5();
			NullCheck(L_14);
			VideoPlayer_set_playOnAwake_m30420ABD3827A5A7BD663815D64DBA68CF88A8D2(L_14, (bool)0, /*hidden argument*/NULL);
			// var videoClip = await videoLoader.LoadAsync(videoName);
			VideoBackground_tC31D69C74D104E5F414AAE56250D1AAD449B7F47 * L_15 = V_1;
			NullCheck(L_15);
			LocalizableResourceLoader_1_t6CC3BB582EA259156AF64985E72C541EFE88D9E6 * L_16 = L_15->get_videoLoader_19();
			String_t* L_17 = __this->get_videoName_2();
			NullCheck(L_16);
			UniTask_1_t0F1467ED8AB1A67EAA6B956FFCFECB83640C3607  L_18;
			L_18 = VirtFuncInvoker1< UniTask_1_t0F1467ED8AB1A67EAA6B956FFCFECB83640C3607 , String_t* >::Invoke(34 /* UniRx.Async.UniTask`1<Naninovel.Resource`1<TResource>> Naninovel.ResourceLoader`1<UnityEngine.Video.VideoClip>::LoadAsync(System.String) */, L_16, L_17);
			V_7 = L_18;
			Awaiter_t8473B6ABE125918A05A5157E70D00B9F0DE43CCD  L_19;
			L_19 = UniTask_1_GetAwaiter_m9924469BDE71E4B2A85924A17439D08A8E3A28CC((UniTask_1_t0F1467ED8AB1A67EAA6B956FFCFECB83640C3607 *)(&V_7), /*hidden argument*/UniTask_1_GetAwaiter_m9924469BDE71E4B2A85924A17439D08A8E3A28CC_RuntimeMethod_var);
			V_6 = L_19;
			bool L_20;
			L_20 = Awaiter_get_IsCompleted_m0C5A674B5B3230390E66084EA8F2E253A7B71A62((Awaiter_t8473B6ABE125918A05A5157E70D00B9F0DE43CCD *)(&V_6), /*hidden argument*/Awaiter_get_IsCompleted_m0C5A674B5B3230390E66084EA8F2E253A7B71A62_RuntimeMethod_var);
			if (L_20)
			{
				goto IL_00d9;
			}
		}

IL_0098:
		{
			int32_t L_21 = 0;
			V_0 = L_21;
			__this->set_U3CU3E1__state_0(L_21);
			Awaiter_t8473B6ABE125918A05A5157E70D00B9F0DE43CCD  L_22 = V_6;
			__this->set_U3CU3Eu__1_6(L_22);
			AsyncUniTaskMethodBuilder_1_t402090290561B301A3591C90C52DFCA007AEC1E4 * L_23 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_t8473B6ABE125918A05A5157E70D00B9F0DE43CCD_TisU3CGetOrLoadVideoDataAsyncU3Ed__30_tDF4395E0B62F17B7558DC26A111F9659F3932FA6_m1448B27CBD80B26F3A45F1ED57DFE92A46819A90((AsyncUniTaskMethodBuilder_1_t402090290561B301A3591C90C52DFCA007AEC1E4 *)L_23, (Awaiter_t8473B6ABE125918A05A5157E70D00B9F0DE43CCD *)(&V_6), (U3CGetOrLoadVideoDataAsyncU3Ed__30_tDF4395E0B62F17B7558DC26A111F9659F3932FA6 *)__this, /*hidden argument*/AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_t8473B6ABE125918A05A5157E70D00B9F0DE43CCD_TisU3CGetOrLoadVideoDataAsyncU3Ed__30_tDF4395E0B62F17B7558DC26A111F9659F3932FA6_m1448B27CBD80B26F3A45F1ED57DFE92A46819A90_RuntimeMethod_var);
			goto IL_01f5;
		}

IL_00bc:
		{
			Awaiter_t8473B6ABE125918A05A5157E70D00B9F0DE43CCD  L_24 = __this->get_U3CU3Eu__1_6();
			V_6 = L_24;
			Awaiter_t8473B6ABE125918A05A5157E70D00B9F0DE43CCD * L_25 = __this->get_address_of_U3CU3Eu__1_6();
			il2cpp_codegen_initobj(L_25, sizeof(Awaiter_t8473B6ABE125918A05A5157E70D00B9F0DE43CCD ));
			int32_t L_26 = (-1);
			V_0 = L_26;
			__this->set_U3CU3E1__state_0(L_26);
		}

IL_00d9:
		{
			Resource_1_t8A5083E4E0F7B7D7F3E64338DF3B0C6103550999 * L_27;
			L_27 = Awaiter_GetResult_m43A2DBD3CAA0B22FDA0FDF1AA73DFA740188D36B((Awaiter_t8473B6ABE125918A05A5157E70D00B9F0DE43CCD *)(&V_6), /*hidden argument*/Awaiter_GetResult_m43A2DBD3CAA0B22FDA0FDF1AA73DFA740188D36B_RuntimeMethod_var);
			V_3 = L_27;
			// if (!videoClip.Valid) throw new Exception($"Failed to load `{videoName}` resource for `{Id}` video background actor. Make sure the video clip is assigned in the actor resources.");
			Resource_1_t8A5083E4E0F7B7D7F3E64338DF3B0C6103550999 * L_28 = V_3;
			NullCheck(L_28);
			bool L_29;
			L_29 = Resource_get_Valid_m444B77C909FAAAA9DD697551D30A2D7A72DC5EE9(L_28, /*hidden argument*/NULL);
			if (L_29)
			{
				goto IL_0124;
			}
		}

IL_00e9:
		{
			// if (!videoClip.Valid) throw new Exception($"Failed to load `{videoName}` resource for `{Id}` video background actor. Make sure the video clip is assigned in the actor resources.");
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_30 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var)), (uint32_t)5);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_31 = L_30;
			NullCheck(L_31);
			ArrayElementTypeCheck (L_31, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8C6C624DBD27A05C851819F20AB022F76119C67D)));
			(L_31)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8C6C624DBD27A05C851819F20AB022F76119C67D)));
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_32 = L_31;
			String_t* L_33 = __this->get_videoName_2();
			NullCheck(L_32);
			ArrayElementTypeCheck (L_32, L_33);
			(L_32)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_33);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_34 = L_32;
			NullCheck(L_34);
			ArrayElementTypeCheck (L_34, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral57E8E2DF613E6BC7E929EABB724706FB92841AA3)));
			(L_34)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral57E8E2DF613E6BC7E929EABB724706FB92841AA3)));
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_35 = L_34;
			VideoBackground_tC31D69C74D104E5F414AAE56250D1AAD449B7F47 * L_36 = V_1;
			NullCheck(L_36);
			String_t* L_37;
			L_37 = VirtFuncInvoker0< String_t* >::Invoke(27 /* System.String Naninovel.MonoBehaviourActor`1<Naninovel.BackgroundMetadata>::get_Id() */, L_36);
			NullCheck(L_35);
			ArrayElementTypeCheck (L_35, L_37);
			(L_35)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_37);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_38 = L_35;
			NullCheck(L_38);
			ArrayElementTypeCheck (L_38, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD9AE28581731D112BC0C44CAAF0B7FF1F7F3E9CE)));
			(L_38)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD9AE28581731D112BC0C44CAAF0B7FF1F7F3E9CE)));
			String_t* L_39;
			L_39 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_38, /*hidden argument*/NULL);
			Exception_t * L_40 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
			Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_40, L_39, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_40, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetOrLoadVideoDataAsyncU3Ed__30_MoveNext_m7E941683BDD788C7F8CD2B291A42D66AA54F7BA8_RuntimeMethod_var)));
		}

IL_0124:
		{
			// videoPlayer.source = VideoSource.VideoClip;
			VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_41 = __this->get_U3CvideoPlayerU3E5__3_5();
			NullCheck(L_41);
			VideoPlayer_set_source_m5F69BF92205E90B384B83E73403A43735E2526F7(L_41, 0, /*hidden argument*/NULL);
			// videoPlayer.clip = videoClip;
			VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_42 = __this->get_U3CvideoPlayerU3E5__3_5();
			Resource_1_t8A5083E4E0F7B7D7F3E64338DF3B0C6103550999 * L_43 = V_3;
			IL2CPP_RUNTIME_CLASS_INIT(Resource_1_t8A5083E4E0F7B7D7F3E64338DF3B0C6103550999_il2cpp_TypeInfo_var);
			VideoClip_tA8C2507553BEE394C46B7A876D6F56DD09F6C90F * L_44;
			L_44 = Resource_1_op_Implicit_m85FFDD6CB563EE688362E3C87045C3B55E317EC6(L_43, /*hidden argument*/Resource_1_op_Implicit_m85FFDD6CB563EE688362E3C87045C3B55E317EC6_RuntimeMethod_var);
			NullCheck(L_42);
			VideoPlayer_set_clip_mECA56632F836FE1297D1A10115570E07D05FDB6C(L_42, L_44, /*hidden argument*/NULL);
			// videoPlayer.renderMode = VideoRenderMode.RenderTexture;
			VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_45 = __this->get_U3CvideoPlayerU3E5__3_5();
			NullCheck(L_45);
			VideoPlayer_set_renderMode_mAD567D3904B2D8C3B2E5A131A5673D89418ABE06(L_45, 2, /*hidden argument*/NULL);
			// videoPlayer.targetTexture = renderTexture;
			VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_46 = __this->get_U3CvideoPlayerU3E5__3_5();
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_47 = __this->get_U3CrenderTextureU3E5__2_4();
			NullCheck(L_46);
			VideoPlayer_set_targetTexture_mFA47467D9AC733F509941F3618FDC5829A4D37F4(L_46, L_47, /*hidden argument*/NULL);
			// videoPlayer.isLooping = true;
			VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_48 = __this->get_U3CvideoPlayerU3E5__3_5();
			NullCheck(L_48);
			VideoPlayer_set_isLooping_mBA932FED6AA886C07C4770D7FAC369D249F0E7C2(L_48, (bool)1, /*hidden argument*/NULL);
			// videoPlayer.audioOutputMode = VideoAudioOutputMode.None;
			VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_49 = __this->get_U3CvideoPlayerU3E5__3_5();
			NullCheck(L_49);
			VideoPlayer_set_audioOutputMode_mF5F9D36B418462081E9173675C0D5945BA432510(L_49, 0, /*hidden argument*/NULL);
			// var sceneData = new VideoData { Player = videoPlayer, RenderTexture = renderTexture };
			VideoData_t995725B9BB3E0B9FADDA15CD9D34810784D73AD2 * L_50 = (VideoData_t995725B9BB3E0B9FADDA15CD9D34810784D73AD2 *)il2cpp_codegen_object_new(VideoData_t995725B9BB3E0B9FADDA15CD9D34810784D73AD2_il2cpp_TypeInfo_var);
			VideoData__ctor_mE901F52C9F0FFE816358AFED2C0C8CD4A725DB5D(L_50, /*hidden argument*/NULL);
			VideoData_t995725B9BB3E0B9FADDA15CD9D34810784D73AD2 * L_51 = L_50;
			VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_52 = __this->get_U3CvideoPlayerU3E5__3_5();
			NullCheck(L_51);
			L_51->set_Player_0(L_52);
			VideoData_t995725B9BB3E0B9FADDA15CD9D34810784D73AD2 * L_53 = L_51;
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_54 = __this->get_U3CrenderTextureU3E5__2_4();
			NullCheck(L_53);
			L_53->set_RenderTexture_1(L_54);
			V_4 = L_53;
			// videoDataMap[videoName] = sceneData;
			LiteralMap_1_t1A9EB0EEABDB7CC5DE71C4813A6B71DB3FEEB47D * L_55 = ((VideoBackground_tC31D69C74D104E5F414AAE56250D1AAD449B7F47_StaticFields*)il2cpp_codegen_static_fields_for(VideoBackground_tC31D69C74D104E5F414AAE56250D1AAD449B7F47_il2cpp_TypeInfo_var))->get_videoDataMap_15();
			String_t* L_56 = __this->get_videoName_2();
			VideoData_t995725B9BB3E0B9FADDA15CD9D34810784D73AD2 * L_57 = V_4;
			NullCheck(L_55);
			Dictionary_2_set_Item_mF9BB9CBD018363A66292571606FE6D1ABA58895A(L_55, L_56, L_57, /*hidden argument*/Dictionary_2_set_Item_mF9BB9CBD018363A66292571606FE6D1ABA58895A_RuntimeMethod_var);
			// return sceneData;
			VideoData_t995725B9BB3E0B9FADDA15CD9D34810784D73AD2 * L_58 = V_4;
			V_2 = L_58;
			goto IL_01d3;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01ac;
		}
		throw e;
	}

CATCH_01ac:
	{ // begin catch(System.Exception)
		V_8 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		__this->set_U3CrenderTextureU3E5__2_4((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)NULL);
		__this->set_U3CvideoPlayerU3E5__3_5((VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *)NULL);
		AsyncUniTaskMethodBuilder_1_t402090290561B301A3591C90C52DFCA007AEC1E4 * L_59 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_60 = V_8;
		AsyncUniTaskMethodBuilder_1_SetException_m387C9F2DAA3C4AB1ACC58EDB59508FD752AA032E((AsyncUniTaskMethodBuilder_1_t402090290561B301A3591C90C52DFCA007AEC1E4 *)L_59, L_60, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_m387C9F2DAA3C4AB1ACC58EDB59508FD752AA032E_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_01f5;
	} // end catch (depth: 1)

IL_01d3:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		__this->set_U3CrenderTextureU3E5__2_4((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)NULL);
		__this->set_U3CvideoPlayerU3E5__3_5((VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *)NULL);
		AsyncUniTaskMethodBuilder_1_t402090290561B301A3591C90C52DFCA007AEC1E4 * L_61 = __this->get_address_of_U3CU3Et__builder_1();
		VideoData_t995725B9BB3E0B9FADDA15CD9D34810784D73AD2 * L_62 = V_2;
		AsyncUniTaskMethodBuilder_1_SetResult_mB10E8FA1F24E550A04D2804063FC4FC3F15C12CD((AsyncUniTaskMethodBuilder_1_t402090290561B301A3591C90C52DFCA007AEC1E4 *)L_61, L_62, /*hidden argument*/AsyncUniTaskMethodBuilder_1_SetResult_mB10E8FA1F24E550A04D2804063FC4FC3F15C12CD_RuntimeMethod_var);
	}

IL_01f5:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CGetOrLoadVideoDataAsyncU3Ed__30_MoveNext_m7E941683BDD788C7F8CD2B291A42D66AA54F7BA8_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CGetOrLoadVideoDataAsyncU3Ed__30_tDF4395E0B62F17B7558DC26A111F9659F3932FA6 * _thisAdjusted = reinterpret_cast<U3CGetOrLoadVideoDataAsyncU3Ed__30_tDF4395E0B62F17B7558DC26A111F9659F3932FA6 *>(__this + _offset);
	U3CGetOrLoadVideoDataAsyncU3Ed__30_MoveNext_m7E941683BDD788C7F8CD2B291A42D66AA54F7BA8(_thisAdjusted, method);
}
// System.Void Naninovel.VideoBackground/<GetOrLoadVideoDataAsync>d__30::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetOrLoadVideoDataAsyncU3Ed__30_SetStateMachine_m6A7677E7268703994B65467051E987636E75127A (U3CGetOrLoadVideoDataAsyncU3Ed__30_tDF4395E0B62F17B7558DC26A111F9659F3932FA6 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetStateMachine_m2866481F898DFD254796CE9AFF234B5F7E993699_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncUniTaskMethodBuilder_1_t402090290561B301A3591C90C52DFCA007AEC1E4 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncUniTaskMethodBuilder_1_SetStateMachine_m2866481F898DFD254796CE9AFF234B5F7E993699((AsyncUniTaskMethodBuilder_1_t402090290561B301A3591C90C52DFCA007AEC1E4 *)L_0, L_1, /*hidden argument*/AsyncUniTaskMethodBuilder_1_SetStateMachine_m2866481F898DFD254796CE9AFF234B5F7E993699_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CGetOrLoadVideoDataAsyncU3Ed__30_SetStateMachine_m6A7677E7268703994B65467051E987636E75127A_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CGetOrLoadVideoDataAsyncU3Ed__30_tDF4395E0B62F17B7558DC26A111F9659F3932FA6 * _thisAdjusted = reinterpret_cast<U3CGetOrLoadVideoDataAsyncU3Ed__30_tDF4395E0B62F17B7558DC26A111F9659F3932FA6 *>(__this + _offset);
	U3CGetOrLoadVideoDataAsyncU3Ed__30_SetStateMachine_m6A7677E7268703994B65467051E987636E75127A(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Naninovel.VideoBackground/<HoldResourcesAsync>d__24::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CHoldResourcesAsyncU3Ed__24_MoveNext_mCEE8F758B0B952C0E24C52F725DE9800016386B6 (U3CHoldResourcesAsyncU3Ed__24_t69B7F8032AABA06C6ACEBB741DE6BB2F6A3F0359 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t2EC4E48D6D8C5EC90776FBA7B42075F059E21967_TisU3CHoldResourcesAsyncU3Ed__24_t69B7F8032AABA06C6ACEBB741DE6BB2F6A3F0359_mAAC7B27E739DD3F444C8C16454AC7977D10CA709_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m79E7FF75A14DA696B555E10CAE4C3FD7BB336B27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_mCBCDC5F183736F78C9405A29DC0D1CA5D7F70B0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_mD17FB23F1BF828B36BD77C8070A7ECBDA0FA2791_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	VideoBackground_tC31D69C74D104E5F414AAE56250D1AAD449B7F47 * V_1 = NULL;
	Awaiter_t2EC4E48D6D8C5EC90776FBA7B42075F059E21967  V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_1_tAAD1C29A0EA451DC7946ED7921521AD191FB2674  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		VideoBackground_tC31D69C74D104E5F414AAE56250D1AAD449B7F47 * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0061;
			}
		}

IL_0011:
		{
			// if (string.IsNullOrEmpty(appearance)) return;
			String_t* L_3 = __this->get_appearance_2();
			bool L_4;
			L_4 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_3, /*hidden argument*/NULL);
			if (!L_4)
			{
				goto IL_0023;
			}
		}

IL_001e:
		{
			// if (string.IsNullOrEmpty(appearance)) return;
			goto IL_00b2;
		}

IL_0023:
		{
			// await GetOrLoadVideoDataAsync(appearance);
			VideoBackground_tC31D69C74D104E5F414AAE56250D1AAD449B7F47 * L_5 = V_1;
			String_t* L_6 = __this->get_appearance_2();
			NullCheck(L_5);
			UniTask_1_tAAD1C29A0EA451DC7946ED7921521AD191FB2674  L_7;
			L_7 = VideoBackground_GetOrLoadVideoDataAsync_mF139769959BA01959791EF990FF05B5C765F4A7C(L_5, L_6, /*hidden argument*/NULL);
			V_3 = L_7;
			Awaiter_t2EC4E48D6D8C5EC90776FBA7B42075F059E21967  L_8;
			L_8 = UniTask_1_GetAwaiter_mD17FB23F1BF828B36BD77C8070A7ECBDA0FA2791((UniTask_1_tAAD1C29A0EA451DC7946ED7921521AD191FB2674 *)(&V_3), /*hidden argument*/UniTask_1_GetAwaiter_mD17FB23F1BF828B36BD77C8070A7ECBDA0FA2791_RuntimeMethod_var);
			V_2 = L_8;
			bool L_9;
			L_9 = Awaiter_get_IsCompleted_mCBCDC5F183736F78C9405A29DC0D1CA5D7F70B0A((Awaiter_t2EC4E48D6D8C5EC90776FBA7B42075F059E21967 *)(&V_2), /*hidden argument*/Awaiter_get_IsCompleted_mCBCDC5F183736F78C9405A29DC0D1CA5D7F70B0A_RuntimeMethod_var);
			if (L_9)
			{
				goto IL_007d;
			}
		}

IL_0041:
		{
			int32_t L_10 = 0;
			V_0 = L_10;
			__this->set_U3CU3E1__state_0(L_10);
			Awaiter_t2EC4E48D6D8C5EC90776FBA7B42075F059E21967  L_11 = V_2;
			__this->set_U3CU3Eu__1_4(L_11);
			AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 * L_12 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t2EC4E48D6D8C5EC90776FBA7B42075F059E21967_TisU3CHoldResourcesAsyncU3Ed__24_t69B7F8032AABA06C6ACEBB741DE6BB2F6A3F0359_mAAC7B27E739DD3F444C8C16454AC7977D10CA709((AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 *)L_12, (Awaiter_t2EC4E48D6D8C5EC90776FBA7B42075F059E21967 *)(&V_2), (U3CHoldResourcesAsyncU3Ed__24_t69B7F8032AABA06C6ACEBB741DE6BB2F6A3F0359 *)__this, /*hidden argument*/AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t2EC4E48D6D8C5EC90776FBA7B42075F059E21967_TisU3CHoldResourcesAsyncU3Ed__24_t69B7F8032AABA06C6ACEBB741DE6BB2F6A3F0359_mAAC7B27E739DD3F444C8C16454AC7977D10CA709_RuntimeMethod_var);
			goto IL_00c5;
		}

IL_0061:
		{
			Awaiter_t2EC4E48D6D8C5EC90776FBA7B42075F059E21967  L_13 = __this->get_U3CU3Eu__1_4();
			V_2 = L_13;
			Awaiter_t2EC4E48D6D8C5EC90776FBA7B42075F059E21967 * L_14 = __this->get_address_of_U3CU3Eu__1_4();
			il2cpp_codegen_initobj(L_14, sizeof(Awaiter_t2EC4E48D6D8C5EC90776FBA7B42075F059E21967 ));
			int32_t L_15 = (-1);
			V_0 = L_15;
			__this->set_U3CU3E1__state_0(L_15);
		}

IL_007d:
		{
			VideoData_t995725B9BB3E0B9FADDA15CD9D34810784D73AD2 * L_16;
			L_16 = Awaiter_GetResult_m79E7FF75A14DA696B555E10CAE4C3FD7BB336B27((Awaiter_t2EC4E48D6D8C5EC90776FBA7B42075F059E21967 *)(&V_2), /*hidden argument*/Awaiter_GetResult_m79E7FF75A14DA696B555E10CAE4C3FD7BB336B27_RuntimeMethod_var);
			// videoLoader.Hold(appearance, this);
			VideoBackground_tC31D69C74D104E5F414AAE56250D1AAD449B7F47 * L_17 = V_1;
			NullCheck(L_17);
			LocalizableResourceLoader_1_t6CC3BB582EA259156AF64985E72C541EFE88D9E6 * L_18 = L_17->get_videoLoader_19();
			String_t* L_19 = __this->get_appearance_2();
			VideoBackground_tC31D69C74D104E5F414AAE56250D1AAD449B7F47 * L_20 = V_1;
			NullCheck(L_18);
			VirtActionInvoker2< String_t*, RuntimeObject * >::Invoke(28 /* System.Void Naninovel.ResourceLoader`1<UnityEngine.Video.VideoClip>::Hold(System.String,System.Object) */, L_18, L_19, L_20);
			goto IL_00b2;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0099;
		}
		throw e;
	}

CATCH_0099:
	{ // begin catch(System.Exception)
		V_4 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 * L_21 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_22 = V_4;
		AsyncUniTaskMethodBuilder_SetException_mD97347DB2613C31645BBBE97F83717D3F225A84D((AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 *)L_21, L_22, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00c5;
	} // end catch (depth: 1)

IL_00b2:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 * L_23 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncUniTaskMethodBuilder_SetResult_mEB0C04A892C51268180DED2647936AA6DE8BA80D((AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 *)L_23, /*hidden argument*/NULL);
	}

IL_00c5:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CHoldResourcesAsyncU3Ed__24_MoveNext_mCEE8F758B0B952C0E24C52F725DE9800016386B6_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CHoldResourcesAsyncU3Ed__24_t69B7F8032AABA06C6ACEBB741DE6BB2F6A3F0359 * _thisAdjusted = reinterpret_cast<U3CHoldResourcesAsyncU3Ed__24_t69B7F8032AABA06C6ACEBB741DE6BB2F6A3F0359 *>(__this + _offset);
	U3CHoldResourcesAsyncU3Ed__24_MoveNext_mCEE8F758B0B952C0E24C52F725DE9800016386B6(_thisAdjusted, method);
}
// System.Void Naninovel.VideoBackground/<HoldResourcesAsync>d__24::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CHoldResourcesAsyncU3Ed__24_SetStateMachine_m4C518DAE048374881F6ADC4FFC12D3F669EEEFFE (U3CHoldResourcesAsyncU3Ed__24_t69B7F8032AABA06C6ACEBB741DE6BB2F6A3F0359 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncUniTaskMethodBuilder_SetStateMachine_m919B0537825382AC072CF24F8D838BD3920E9FC8((AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CHoldResourcesAsyncU3Ed__24_SetStateMachine_m4C518DAE048374881F6ADC4FFC12D3F669EEEFFE_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CHoldResourcesAsyncU3Ed__24_t69B7F8032AABA06C6ACEBB741DE6BB2F6A3F0359 * _thisAdjusted = reinterpret_cast<U3CHoldResourcesAsyncU3Ed__24_t69B7F8032AABA06C6ACEBB741DE6BB2F6A3F0359 *>(__this + _offset);
	U3CHoldResourcesAsyncU3Ed__24_SetStateMachine_m4C518DAE048374881F6ADC4FFC12D3F669EEEFFE(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Naninovel.VideoBackground/<InitializeAsync>d__21::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeAsyncU3Ed__21_MoveNext_mAA0B4BD483BDAEA55B34EE8BBD6CE2E1C20B2AC8 (U3CInitializeAsyncU3Ed__21_t705DB795DF855A7C45BFFDF1527CB27C7A01CE12 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822_TisU3CInitializeAsyncU3Ed__21_t705DB795DF855A7C45BFFDF1527CB27C7A01CE12_m3D5595F7E80A704D725DDF32AF0D8AABE7DD86BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisTransitionalSpriteRenderer_tFE7D599199337543C9BDFDEC0F355DCA6EAE33AF_m59AE021946509813109219F1A0935D0EFE9EF9E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisTransitionalTextureRenderer_t230F9601A1BB9348394D1BE5E3485FBC441650C9_m0C88C261CEE4BFA988B88C34259FD39A7F4D2CFE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	VideoBackground_tC31D69C74D104E5F414AAE56250D1AAD449B7F47 * V_1 = NULL;
	Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822  V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_t41263A639210D10E03708EE0B4B03A964D7EEE3C  V_3;
	memset((&V_3), 0, sizeof(V_3));
	TransitionalTextureRenderer_t230F9601A1BB9348394D1BE5E3485FBC441650C9 * V_4 = NULL;
	TransitionalSpriteRenderer_tFE7D599199337543C9BDFDEC0F355DCA6EAE33AF * V_5 = NULL;
	Exception_t * V_6 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		VideoBackground_tC31D69C74D104E5F414AAE56250D1AAD449B7F47 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_004c;
			}
		}

IL_0011:
		{
			// await base.InitializeAsync();
			VideoBackground_tC31D69C74D104E5F414AAE56250D1AAD449B7F47 * L_3 = V_1;
			NullCheck(L_3);
			UniTask_t41263A639210D10E03708EE0B4B03A964D7EEE3C  L_4;
			L_4 = VideoBackground_U3CU3En__0_mAEF3789196E0E18EF3AFEA3DFE5809CEFC3D7C82(L_3, /*hidden argument*/NULL);
			V_3 = L_4;
			Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822  L_5;
			L_5 = UniTask_GetAwaiter_mD2E76ACB629099DC37BB3C99511590FA9B227272((UniTask_t41263A639210D10E03708EE0B4B03A964D7EEE3C *)(&V_3), /*hidden argument*/NULL);
			V_2 = L_5;
			bool L_6;
			L_6 = Awaiter_get_IsCompleted_m0F67C2C63E4AD6E47A126AA69B8A98E0770F096C((Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822 *)(&V_2), /*hidden argument*/NULL);
			if (L_6)
			{
				goto IL_0068;
			}
		}

IL_0029:
		{
			int32_t L_7 = 0;
			V_0 = L_7;
			__this->set_U3CU3E1__state_0(L_7);
			Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822  L_8 = V_2;
			__this->set_U3CU3Eu__1_3(L_8);
			AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 * L_9 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822_TisU3CInitializeAsyncU3Ed__21_t705DB795DF855A7C45BFFDF1527CB27C7A01CE12_m3D5595F7E80A704D725DDF32AF0D8AABE7DD86BF((AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 *)L_9, (Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822 *)(&V_2), (U3CInitializeAsyncU3Ed__21_t705DB795DF855A7C45BFFDF1527CB27C7A01CE12 *)__this, /*hidden argument*/AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822_TisU3CInitializeAsyncU3Ed__21_t705DB795DF855A7C45BFFDF1527CB27C7A01CE12_m3D5595F7E80A704D725DDF32AF0D8AABE7DD86BF_RuntimeMethod_var);
			goto IL_019b;
		}

IL_004c:
		{
			Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822  L_10 = __this->get_U3CU3Eu__1_3();
			V_2 = L_10;
			Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822 * L_11 = __this->get_address_of_U3CU3Eu__1_3();
			il2cpp_codegen_initobj(L_11, sizeof(Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822 ));
			int32_t L_12 = (-1);
			V_0 = L_12;
			__this->set_U3CU3E1__state_0(L_12);
		}

IL_0068:
		{
			Awaiter_GetResult_m3EFD26ADCEFA37F3B4EE99CD8BE65F51405CFEF3((Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822 *)(&V_2), /*hidden argument*/NULL);
			// if (ActorMetadata.RenderTexture)
			VideoBackground_tC31D69C74D104E5F414AAE56250D1AAD449B7F47 * L_13 = V_1;
			NullCheck(L_13);
			BackgroundMetadata_tB3D37C09DD002AA63FC7925A323AF344B964823F * L_14;
			L_14 = VirtFuncInvoker0< BackgroundMetadata_tB3D37C09DD002AA63FC7925A323AF344B964823F * >::Invoke(28 /* TMeta Naninovel.MonoBehaviourActor`1<Naninovel.BackgroundMetadata>::get_ActorMetadata() */, L_13);
			NullCheck(L_14);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_15 = ((OrthoActorMetadata_t681F4B01BA3C23F282E68DF15226EE6DAD90F1E4 *)L_14)->get_RenderTexture_9();
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_16;
			L_16 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_15, /*hidden argument*/NULL);
			if (!L_16)
			{
				goto IL_0105;
			}
		}

IL_0084:
		{
			// ActorMetadata.RenderTexture.Clear();
			VideoBackground_tC31D69C74D104E5F414AAE56250D1AAD449B7F47 * L_17 = V_1;
			NullCheck(L_17);
			BackgroundMetadata_tB3D37C09DD002AA63FC7925A323AF344B964823F * L_18;
			L_18 = VirtFuncInvoker0< BackgroundMetadata_tB3D37C09DD002AA63FC7925A323AF344B964823F * >::Invoke(28 /* TMeta Naninovel.MonoBehaviourActor`1<Naninovel.BackgroundMetadata>::get_ActorMetadata() */, L_17);
			NullCheck(L_18);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_19 = ((OrthoActorMetadata_t681F4B01BA3C23F282E68DF15226EE6DAD90F1E4 *)L_18)->get_RenderTexture_9();
			TextureUtils_Clear_m325265213022B14ECC9D861D100027B2171C32A2(L_19, /*hidden argument*/NULL);
			// var textureRenderer = GameObject.AddComponent<TransitionalTextureRenderer>();
			VideoBackground_tC31D69C74D104E5F414AAE56250D1AAD449B7F47 * L_20 = V_1;
			NullCheck(L_20);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21;
			L_21 = VirtFuncInvoker0< GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * >::Invoke(41 /* UnityEngine.GameObject Naninovel.MonoBehaviourActor`1<Naninovel.BackgroundMetadata>::get_GameObject() */, L_20);
			NullCheck(L_21);
			TransitionalTextureRenderer_t230F9601A1BB9348394D1BE5E3485FBC441650C9 * L_22;
			L_22 = GameObject_AddComponent_TisTransitionalTextureRenderer_t230F9601A1BB9348394D1BE5E3485FBC441650C9_m0C88C261CEE4BFA988B88C34259FD39A7F4D2CFE(L_21, /*hidden argument*/GameObject_AddComponent_TisTransitionalTextureRenderer_t230F9601A1BB9348394D1BE5E3485FBC441650C9_m0C88C261CEE4BFA988B88C34259FD39A7F4D2CFE_RuntimeMethod_var);
			V_4 = L_22;
			// textureRenderer.Initialize(ActorMetadata.CustomShader);
			TransitionalTextureRenderer_t230F9601A1BB9348394D1BE5E3485FBC441650C9 * L_23 = V_4;
			VideoBackground_tC31D69C74D104E5F414AAE56250D1AAD449B7F47 * L_24 = V_1;
			NullCheck(L_24);
			BackgroundMetadata_tB3D37C09DD002AA63FC7925A323AF344B964823F * L_25;
			L_25 = VirtFuncInvoker0< BackgroundMetadata_tB3D37C09DD002AA63FC7925A323AF344B964823F * >::Invoke(28 /* TMeta Naninovel.MonoBehaviourActor`1<Naninovel.BackgroundMetadata>::get_ActorMetadata() */, L_24);
			NullCheck(L_25);
			Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_26 = ((OrthoActorMetadata_t681F4B01BA3C23F282E68DF15226EE6DAD90F1E4 *)L_25)->get_CustomShader_8();
			NullCheck(L_23);
			VirtActionInvoker1< Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * >::Invoke(35 /* System.Void Naninovel.TransitionalRenderer::Initialize(UnityEngine.Shader) */, L_23, L_26);
			// textureRenderer.RenderTexture = ActorMetadata.RenderTexture;
			TransitionalTextureRenderer_t230F9601A1BB9348394D1BE5E3485FBC441650C9 * L_27 = V_4;
			VideoBackground_tC31D69C74D104E5F414AAE56250D1AAD449B7F47 * L_28 = V_1;
			NullCheck(L_28);
			BackgroundMetadata_tB3D37C09DD002AA63FC7925A323AF344B964823F * L_29;
			L_29 = VirtFuncInvoker0< BackgroundMetadata_tB3D37C09DD002AA63FC7925A323AF344B964823F * >::Invoke(28 /* TMeta Naninovel.MonoBehaviourActor`1<Naninovel.BackgroundMetadata>::get_ActorMetadata() */, L_28);
			NullCheck(L_29);
			RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_30 = ((OrthoActorMetadata_t681F4B01BA3C23F282E68DF15226EE6DAD90F1E4 *)L_29)->get_RenderTexture_9();
			NullCheck(L_27);
			VirtActionInvoker1< RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * >::Invoke(43 /* System.Void Naninovel.TransitionalTextureRenderer::set_RenderTexture(UnityEngine.RenderTexture) */, L_27, L_30);
			// textureRenderer.CorrectAspect = ActorMetadata.CorrectRenderAspect;
			TransitionalTextureRenderer_t230F9601A1BB9348394D1BE5E3485FBC441650C9 * L_31 = V_4;
			VideoBackground_tC31D69C74D104E5F414AAE56250D1AAD449B7F47 * L_32 = V_1;
			NullCheck(L_32);
			BackgroundMetadata_tB3D37C09DD002AA63FC7925A323AF344B964823F * L_33;
			L_33 = VirtFuncInvoker0< BackgroundMetadata_tB3D37C09DD002AA63FC7925A323AF344B964823F * >::Invoke(28 /* TMeta Naninovel.MonoBehaviourActor`1<Naninovel.BackgroundMetadata>::get_ActorMetadata() */, L_32);
			NullCheck(L_33);
			bool L_34 = ((OrthoActorMetadata_t681F4B01BA3C23F282E68DF15226EE6DAD90F1E4 *)L_33)->get_CorrectRenderAspect_10();
			NullCheck(L_31);
			VirtActionInvoker1< bool >::Invoke(45 /* System.Void Naninovel.TransitionalTextureRenderer::set_CorrectAspect(System.Boolean) */, L_31, L_34);
			// textureRenderer.DepthPassEnabled = ActorMetadata.EnableDepthPass;
			TransitionalTextureRenderer_t230F9601A1BB9348394D1BE5E3485FBC441650C9 * L_35 = V_4;
			VideoBackground_tC31D69C74D104E5F414AAE56250D1AAD449B7F47 * L_36 = V_1;
			NullCheck(L_36);
			BackgroundMetadata_tB3D37C09DD002AA63FC7925A323AF344B964823F * L_37;
			L_37 = VirtFuncInvoker0< BackgroundMetadata_tB3D37C09DD002AA63FC7925A323AF344B964823F * >::Invoke(28 /* TMeta Naninovel.MonoBehaviourActor`1<Naninovel.BackgroundMetadata>::get_ActorMetadata() */, L_36);
			NullCheck(L_37);
			bool L_38 = ((OrthoActorMetadata_t681F4B01BA3C23F282E68DF15226EE6DAD90F1E4 *)L_37)->get_EnableDepthPass_6();
			NullCheck(L_35);
			VirtActionInvoker1< bool >::Invoke(29 /* System.Void Naninovel.TransitionalRenderer::set_DepthPassEnabled(System.Boolean) */, L_35, L_38);
			// textureRenderer.DepthAlphaCutoff = ActorMetadata.DepthAlphaCutoff;
			TransitionalTextureRenderer_t230F9601A1BB9348394D1BE5E3485FBC441650C9 * L_39 = V_4;
			VideoBackground_tC31D69C74D104E5F414AAE56250D1AAD449B7F47 * L_40 = V_1;
			NullCheck(L_40);
			BackgroundMetadata_tB3D37C09DD002AA63FC7925A323AF344B964823F * L_41;
			L_41 = VirtFuncInvoker0< BackgroundMetadata_tB3D37C09DD002AA63FC7925A323AF344B964823F * >::Invoke(28 /* TMeta Naninovel.MonoBehaviourActor`1<Naninovel.BackgroundMetadata>::get_ActorMetadata() */, L_40);
			NullCheck(L_41);
			float L_42 = ((OrthoActorMetadata_t681F4B01BA3C23F282E68DF15226EE6DAD90F1E4 *)L_41)->get_DepthAlphaCutoff_7();
			NullCheck(L_39);
			VirtActionInvoker1< float >::Invoke(31 /* System.Void Naninovel.TransitionalRenderer::set_DepthAlphaCutoff(System.Single) */, L_39, L_42);
			// TransitionalRenderer = textureRenderer;
			VideoBackground_tC31D69C74D104E5F414AAE56250D1AAD449B7F47 * L_43 = V_1;
			TransitionalTextureRenderer_t230F9601A1BB9348394D1BE5E3485FBC441650C9 * L_44 = V_4;
			NullCheck(L_43);
			VideoBackground_set_TransitionalRenderer_mFE6C595A7424534EEDEBD75423697E51819408FB_inline(L_43, L_44, /*hidden argument*/NULL);
			// }
			goto IL_0166;
		}

IL_0105:
		{
			// var spriteRenderer = GameObject.AddComponent<TransitionalSpriteRenderer>();
			VideoBackground_tC31D69C74D104E5F414AAE56250D1AAD449B7F47 * L_45 = V_1;
			NullCheck(L_45);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_46;
			L_46 = VirtFuncInvoker0< GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * >::Invoke(41 /* UnityEngine.GameObject Naninovel.MonoBehaviourActor`1<Naninovel.BackgroundMetadata>::get_GameObject() */, L_45);
			NullCheck(L_46);
			TransitionalSpriteRenderer_tFE7D599199337543C9BDFDEC0F355DCA6EAE33AF * L_47;
			L_47 = GameObject_AddComponent_TisTransitionalSpriteRenderer_tFE7D599199337543C9BDFDEC0F355DCA6EAE33AF_m59AE021946509813109219F1A0935D0EFE9EF9E7(L_46, /*hidden argument*/GameObject_AddComponent_TisTransitionalSpriteRenderer_tFE7D599199337543C9BDFDEC0F355DCA6EAE33AF_m59AE021946509813109219F1A0935D0EFE9EF9E7_RuntimeMethod_var);
			V_5 = L_47;
			// spriteRenderer.Initialize(ActorMetadata.Pivot, ActorMetadata.PixelsPerUnit, ActorMetadata.CustomShader);
			TransitionalSpriteRenderer_tFE7D599199337543C9BDFDEC0F355DCA6EAE33AF * L_48 = V_5;
			VideoBackground_tC31D69C74D104E5F414AAE56250D1AAD449B7F47 * L_49 = V_1;
			NullCheck(L_49);
			BackgroundMetadata_tB3D37C09DD002AA63FC7925A323AF344B964823F * L_50;
			L_50 = VirtFuncInvoker0< BackgroundMetadata_tB3D37C09DD002AA63FC7925A323AF344B964823F * >::Invoke(28 /* TMeta Naninovel.MonoBehaviourActor`1<Naninovel.BackgroundMetadata>::get_ActorMetadata() */, L_49);
			NullCheck(L_50);
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_51 = ((OrthoActorMetadata_t681F4B01BA3C23F282E68DF15226EE6DAD90F1E4 *)L_50)->get_Pivot_4();
			VideoBackground_tC31D69C74D104E5F414AAE56250D1AAD449B7F47 * L_52 = V_1;
			NullCheck(L_52);
			BackgroundMetadata_tB3D37C09DD002AA63FC7925A323AF344B964823F * L_53;
			L_53 = VirtFuncInvoker0< BackgroundMetadata_tB3D37C09DD002AA63FC7925A323AF344B964823F * >::Invoke(28 /* TMeta Naninovel.MonoBehaviourActor`1<Naninovel.BackgroundMetadata>::get_ActorMetadata() */, L_52);
			NullCheck(L_53);
			int32_t L_54 = ((OrthoActorMetadata_t681F4B01BA3C23F282E68DF15226EE6DAD90F1E4 *)L_53)->get_PixelsPerUnit_5();
			VideoBackground_tC31D69C74D104E5F414AAE56250D1AAD449B7F47 * L_55 = V_1;
			NullCheck(L_55);
			BackgroundMetadata_tB3D37C09DD002AA63FC7925A323AF344B964823F * L_56;
			L_56 = VirtFuncInvoker0< BackgroundMetadata_tB3D37C09DD002AA63FC7925A323AF344B964823F * >::Invoke(28 /* TMeta Naninovel.MonoBehaviourActor`1<Naninovel.BackgroundMetadata>::get_ActorMetadata() */, L_55);
			NullCheck(L_56);
			Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_57 = ((OrthoActorMetadata_t681F4B01BA3C23F282E68DF15226EE6DAD90F1E4 *)L_56)->get_CustomShader_8();
			NullCheck(L_48);
			VirtActionInvoker3< Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 , int32_t, Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * >::Invoke(46 /* System.Void Naninovel.TransitionalSpriteRenderer::Initialize(UnityEngine.Vector2,System.Int32,UnityEngine.Shader) */, L_48, L_51, L_54, L_57);
			// spriteRenderer.DepthPassEnabled = ActorMetadata.EnableDepthPass;
			TransitionalSpriteRenderer_tFE7D599199337543C9BDFDEC0F355DCA6EAE33AF * L_58 = V_5;
			VideoBackground_tC31D69C74D104E5F414AAE56250D1AAD449B7F47 * L_59 = V_1;
			NullCheck(L_59);
			BackgroundMetadata_tB3D37C09DD002AA63FC7925A323AF344B964823F * L_60;
			L_60 = VirtFuncInvoker0< BackgroundMetadata_tB3D37C09DD002AA63FC7925A323AF344B964823F * >::Invoke(28 /* TMeta Naninovel.MonoBehaviourActor`1<Naninovel.BackgroundMetadata>::get_ActorMetadata() */, L_59);
			NullCheck(L_60);
			bool L_61 = ((OrthoActorMetadata_t681F4B01BA3C23F282E68DF15226EE6DAD90F1E4 *)L_60)->get_EnableDepthPass_6();
			NullCheck(L_58);
			VirtActionInvoker1< bool >::Invoke(29 /* System.Void Naninovel.TransitionalRenderer::set_DepthPassEnabled(System.Boolean) */, L_58, L_61);
			// spriteRenderer.DepthAlphaCutoff = ActorMetadata.DepthAlphaCutoff;
			TransitionalSpriteRenderer_tFE7D599199337543C9BDFDEC0F355DCA6EAE33AF * L_62 = V_5;
			VideoBackground_tC31D69C74D104E5F414AAE56250D1AAD449B7F47 * L_63 = V_1;
			NullCheck(L_63);
			BackgroundMetadata_tB3D37C09DD002AA63FC7925A323AF344B964823F * L_64;
			L_64 = VirtFuncInvoker0< BackgroundMetadata_tB3D37C09DD002AA63FC7925A323AF344B964823F * >::Invoke(28 /* TMeta Naninovel.MonoBehaviourActor`1<Naninovel.BackgroundMetadata>::get_ActorMetadata() */, L_63);
			NullCheck(L_64);
			float L_65 = ((OrthoActorMetadata_t681F4B01BA3C23F282E68DF15226EE6DAD90F1E4 *)L_64)->get_DepthAlphaCutoff_7();
			NullCheck(L_62);
			VirtActionInvoker1< float >::Invoke(31 /* System.Void Naninovel.TransitionalRenderer::set_DepthAlphaCutoff(System.Single) */, L_62, L_65);
			// TransitionalRenderer = spriteRenderer;
			VideoBackground_tC31D69C74D104E5F414AAE56250D1AAD449B7F47 * L_66 = V_1;
			TransitionalSpriteRenderer_tFE7D599199337543C9BDFDEC0F355DCA6EAE33AF * L_67 = V_5;
			NullCheck(L_66);
			VideoBackground_set_TransitionalRenderer_mFE6C595A7424534EEDEBD75423697E51819408FB_inline(L_66, L_67, /*hidden argument*/NULL);
		}

IL_0166:
		{
			// SetVisibility(false);
			VideoBackground_tC31D69C74D104E5F414AAE56250D1AAD449B7F47 * L_68 = V_1;
			NullCheck(L_68);
			VirtActionInvoker1< bool >::Invoke(64 /* System.Void Naninovel.VideoBackground::SetVisibility(System.Boolean) */, L_68, (bool)0);
			goto IL_0188;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_016f;
		}
		throw e;
	}

CATCH_016f:
	{ // begin catch(System.Exception)
		V_6 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 * L_69 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_70 = V_6;
		AsyncUniTaskMethodBuilder_SetException_mD97347DB2613C31645BBBE97F83717D3F225A84D((AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 *)L_69, L_70, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_019b;
	} // end catch (depth: 1)

IL_0188:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 * L_71 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncUniTaskMethodBuilder_SetResult_mEB0C04A892C51268180DED2647936AA6DE8BA80D((AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 *)L_71, /*hidden argument*/NULL);
	}

IL_019b:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CInitializeAsyncU3Ed__21_MoveNext_mAA0B4BD483BDAEA55B34EE8BBD6CE2E1C20B2AC8_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CInitializeAsyncU3Ed__21_t705DB795DF855A7C45BFFDF1527CB27C7A01CE12 * _thisAdjusted = reinterpret_cast<U3CInitializeAsyncU3Ed__21_t705DB795DF855A7C45BFFDF1527CB27C7A01CE12 *>(__this + _offset);
	U3CInitializeAsyncU3Ed__21_MoveNext_mAA0B4BD483BDAEA55B34EE8BBD6CE2E1C20B2AC8(_thisAdjusted, method);
}
// System.Void Naninovel.VideoBackground/<InitializeAsync>d__21::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeAsyncU3Ed__21_SetStateMachine_mCC37D7B830F256BFEC36992006289932524B63F1 (U3CInitializeAsyncU3Ed__21_t705DB795DF855A7C45BFFDF1527CB27C7A01CE12 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncUniTaskMethodBuilder_SetStateMachine_m919B0537825382AC072CF24F8D838BD3920E9FC8((AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CInitializeAsyncU3Ed__21_SetStateMachine_mCC37D7B830F256BFEC36992006289932524B63F1_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CInitializeAsyncU3Ed__21_t705DB795DF855A7C45BFFDF1527CB27C7A01CE12 * _thisAdjusted = reinterpret_cast<U3CInitializeAsyncU3Ed__21_t705DB795DF855A7C45BFFDF1527CB27C7A01CE12 *>(__this + _offset);
	U3CInitializeAsyncU3Ed__21_SetStateMachine_mCC37D7B830F256BFEC36992006289932524B63F1(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Naninovel.VideoBackground/VideoData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoData__ctor_mE901F52C9F0FFE816358AFED2C0C8CD4A725DB5D (VideoData_t995725B9BB3E0B9FADDA15CD9D34810784D73AD2 * __this, const RuntimeMethod* method)
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
// System.Void Naninovel.VirtualResourceProvider/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m572FC1D37A1DE2BDF87B2E9DA33C161325591558 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tAA8106464A5C77323F9EC34B70E387C945F92BD0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tAA8106464A5C77323F9EC34B70E387C945F92BD0 * L_0 = (U3CU3Ec_tAA8106464A5C77323F9EC34B70E387C945F92BD0 *)il2cpp_codegen_object_new(U3CU3Ec_tAA8106464A5C77323F9EC34B70E387C945F92BD0_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m9A2CC443F7E620D547F99D73C3F2BFB9B0C88193(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tAA8106464A5C77323F9EC34B70E387C945F92BD0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAA8106464A5C77323F9EC34B70E387C945F92BD0_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Naninovel.VirtualResourceProvider/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m9A2CC443F7E620D547F99D73C3F2BFB9B0C88193 (U3CU3Ec_tAA8106464A5C77323F9EC34B70E387C945F92BD0 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// Naninovel.Folder Naninovel.VirtualResourceProvider/<>c::<LocateFolders>b__29_0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Folder_tAD08F7F2D5EA96451A3A5774EDD65340B33E754D * U3CU3Ec_U3CLocateFoldersU3Eb__29_0_m2861CEAD15409D48659E7417D22E47B37F948356 (U3CU3Ec_tAA8106464A5C77323F9EC34B70E387C945F92BD0 * __this, String_t* ___p0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Folder_tAD08F7F2D5EA96451A3A5774EDD65340B33E754D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return FolderPaths.LocateFolderPathsAtFolder(path).Select(p => new Folder(p)).ToArray();
		String_t* L_0 = ___p0;
		Folder_tAD08F7F2D5EA96451A3A5774EDD65340B33E754D * L_1 = (Folder_tAD08F7F2D5EA96451A3A5774EDD65340B33E754D *)il2cpp_codegen_object_new(Folder_tAD08F7F2D5EA96451A3A5774EDD65340B33E754D_il2cpp_TypeInfo_var);
		Folder__ctor_mA2A581CC1E983470400F8CE72D8FC853F5C8F3B9(L_1, L_0, /*hidden argument*/NULL);
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
// System.Void Naninovel.Commands.Wait/<ExecuteAsync>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteAsyncU3Ed__6_MoveNext_mDB200EB3873DC7072C0ED2763CC1C29E2DC4CF25 (U3CExecuteAsyncU3Ed__6_tD382787452B3A05D65DA90FC93BEB427B31222B4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tC53C155C42BF6DB6BBD8673DE4B04D42737173C6_TisU3CExecuteAsyncU3Ed__6_tD382787452B3A05D65DA90FC93BEB427B31222B4_m19E8F79C50F3F47DB637770D596BEBB755B84487_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInputSampler_t1EECEB7E9E0A255621360C496765007E0A9603A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IScriptPlayer_t67C9B3A80B4439FB56E13A389B48EAB16C7AE74E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mCD30AA96C09E69BAC64E16A8B627B7535158A477_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B8590E2F95A4B0631E98EAF5F61AFD63A1C031E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8927E03327116C98C4B88036C9DE18E632B201F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEBF4A69D7AABAB9181EADEED088FA4957F142B3E);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Wait_t6D6FC838510D95749A0C737B03665BACEB27DB74 * V_1 = NULL;
	Awaiter_tC53C155C42BF6DB6BBD8673DE4B04D42737173C6  V_2;
	memset((&V_2), 0, sizeof(V_2));
	YieldAwaitable_t0AF0E5F39D5840C6614B26D0AF53DD2A63037F56  V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	bool V_5 = false;
	Exception_t * V_6 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 12> __leave_targets;
	RuntimeObject* G_B21_0 = NULL;
	int32_t G_B21_1 = 0;
	RuntimeObject* G_B20_0 = NULL;
	int32_t G_B20_1 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B22_1 = 0;
	int32_t G_B26_0 = 0;
	int32_t G_B23_0 = 0;
	RuntimeObject* G_B25_0 = NULL;
	int32_t G_B25_1 = 0;
	RuntimeObject* G_B24_0 = NULL;
	int32_t G_B24_1 = 0;
	int32_t G_B27_0 = 0;
	int32_t G_B27_1 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Wait_t6D6FC838510D95749A0C737B03665BACEB27DB74 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			switch (L_2)
			{
				case 0:
				{
					goto IL_005a;
				}
				case 1:
				{
					goto IL_0167;
				}
				case 2:
				{
					goto IL_027b;
				}
			}
		}

IL_0020:
		{
			// await AsyncUtils.WaitEndOfFrame;
			YieldAwaitable_t0AF0E5F39D5840C6614B26D0AF53DD2A63037F56  L_3;
			L_3 = AsyncUtils_get_WaitEndOfFrame_mDC0867AF8ACE2E027D9A6052C0319E6EAB897531(/*hidden argument*/NULL);
			V_3 = L_3;
			Awaiter_tC53C155C42BF6DB6BBD8673DE4B04D42737173C6  L_4;
			L_4 = YieldAwaitable_GetAwaiter_m1769A471365684D6C113CE00DB3C960D11E7B3AF((YieldAwaitable_t0AF0E5F39D5840C6614B26D0AF53DD2A63037F56 *)(&V_3), /*hidden argument*/NULL);
			V_2 = L_4;
			bool L_5;
			L_5 = Awaiter_get_IsCompleted_m42F03E6C535107C5916EFDECAD881942718FCD6A((Awaiter_tC53C155C42BF6DB6BBD8673DE4B04D42737173C6 *)(&V_2), /*hidden argument*/NULL);
			if (L_5)
			{
				goto IL_0076;
			}
		}

IL_0037:
		{
			int32_t L_6 = 0;
			V_0 = L_6;
			__this->set_U3CU3E1__state_0(L_6);
			Awaiter_tC53C155C42BF6DB6BBD8673DE4B04D42737173C6  L_7 = V_2;
			__this->set_U3CU3Eu__1_6(L_7);
			AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 * L_8 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tC53C155C42BF6DB6BBD8673DE4B04D42737173C6_TisU3CExecuteAsyncU3Ed__6_tD382787452B3A05D65DA90FC93BEB427B31222B4_m19E8F79C50F3F47DB637770D596BEBB755B84487((AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 *)L_8, (Awaiter_tC53C155C42BF6DB6BBD8673DE4B04D42737173C6 *)(&V_2), (U3CExecuteAsyncU3Ed__6_tD382787452B3A05D65DA90FC93BEB427B31222B4 *)__this, /*hidden argument*/AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tC53C155C42BF6DB6BBD8673DE4B04D42737173C6_TisU3CExecuteAsyncU3Ed__6_tD382787452B3A05D65DA90FC93BEB427B31222B4_m19E8F79C50F3F47DB637770D596BEBB755B84487_RuntimeMethod_var);
			goto IL_030c;
		}

IL_005a:
		{
			Awaiter_tC53C155C42BF6DB6BBD8673DE4B04D42737173C6  L_9 = __this->get_U3CU3Eu__1_6();
			V_2 = L_9;
			Awaiter_tC53C155C42BF6DB6BBD8673DE4B04D42737173C6 * L_10 = __this->get_address_of_U3CU3Eu__1_6();
			il2cpp_codegen_initobj(L_10, sizeof(Awaiter_tC53C155C42BF6DB6BBD8673DE4B04D42737173C6 ));
			int32_t L_11 = (-1);
			V_0 = L_11;
			__this->set_U3CU3E1__state_0(L_11);
		}

IL_0076:
		{
			Awaiter_GetResult_m477940C595015AFCD4FEB055A82A663633BD5E47((Awaiter_tC53C155C42BF6DB6BBD8673DE4B04D42737173C6 *)(&V_2), /*hidden argument*/NULL);
			// if (!Assigned(WaitMode))
			Wait_t6D6FC838510D95749A0C737B03665BACEB27DB74 * L_12 = V_1;
			NullCheck(L_12);
			StringParameter_t33BF466D3AD2402CEA10C41D765102E093891CA8 * L_13 = L_12->get_WaitMode_7();
			bool L_14;
			L_14 = Command_Assigned_mF0EF028C357C0756FC74C50A8222C1B424BC787E(L_13, /*hidden argument*/NULL);
			if (L_14)
			{
				goto IL_009a;
			}
		}

IL_008a:
		{
			// LogWarningWithPosition($"`{nameof(WaitMode)}` parameter is not specified, the wait command will do nothing.");
			Wait_t6D6FC838510D95749A0C737B03665BACEB27DB74 * L_15 = V_1;
			NullCheck(L_15);
			Command_LogWarningWithPosition_m84CA831BB688C4700B5E01CF40F8B83C5A6CCE2E(L_15, _stringLiteralEBF4A69D7AABAB9181EADEED088FA4957F142B3E, /*hidden argument*/NULL);
			// return;
			goto IL_02f9;
		}

IL_009a:
		{
			// if (WaitMode.Value.EqualsFastIgnoreCase(InputLiteral))
			Wait_t6D6FC838510D95749A0C737B03665BACEB27DB74 * L_16 = V_1;
			NullCheck(L_16);
			StringParameter_t33BF466D3AD2402CEA10C41D765102E093891CA8 * L_17 = L_16->get_WaitMode_7();
			NullCheck(L_17);
			String_t* L_18;
			L_18 = Nullable_1_get_Value_mCD30AA96C09E69BAC64E16A8B627B7535158A477(L_17, /*hidden argument*/Nullable_1_get_Value_mCD30AA96C09E69BAC64E16A8B627B7535158A477_RuntimeMethod_var);
			bool L_19;
			L_19 = StringUtils_EqualsFastIgnoreCase_m9E6BB734D0F3DD72B90C6EB2A68A55F0B52AB753(L_18, _stringLiteral1B8590E2F95A4B0631E98EAF5F61AFD63A1C031E, /*hidden argument*/NULL);
			if (!L_19)
			{
				goto IL_00c1;
			}
		}

IL_00b1:
		{
			// scriptPlayer.SetWaitingForInputEnabled(true);
			RuntimeObject* L_20;
			L_20 = Wait_get_scriptPlayer_mEACD3C5E7496EBB5F9D20597EDE6F80DFC670721(/*hidden argument*/NULL);
			NullCheck(L_20);
			InterfaceActionInvoker1< bool >::Invoke(37 /* System.Void Naninovel.IScriptPlayer::SetWaitingForInputEnabled(System.Boolean) */, IScriptPlayer_t67C9B3A80B4439FB56E13A389B48EAB16C7AE74E_il2cpp_TypeInfo_var, L_20, (bool)1);
			// return;
			goto IL_02f9;
		}

IL_00c1:
		{
			// if (WaitMode.Value.StartsWithFast(InputLiteral) && ParseUtils.TryInvariantFloat(WaitMode.Value.GetAfterFirst(InputLiteral), out var skippableWaitTime))
			Wait_t6D6FC838510D95749A0C737B03665BACEB27DB74 * L_21 = V_1;
			NullCheck(L_21);
			StringParameter_t33BF466D3AD2402CEA10C41D765102E093891CA8 * L_22 = L_21->get_WaitMode_7();
			NullCheck(L_22);
			String_t* L_23;
			L_23 = Nullable_1_get_Value_mCD30AA96C09E69BAC64E16A8B627B7535158A477(L_22, /*hidden argument*/Nullable_1_get_Value_mCD30AA96C09E69BAC64E16A8B627B7535158A477_RuntimeMethod_var);
			bool L_24;
			L_24 = StringUtils_StartsWithFast_m333F1CEBB6C4D5D8EED5581E4482B9F567DBDC37(L_23, _stringLiteral1B8590E2F95A4B0631E98EAF5F61AFD63A1C031E, /*hidden argument*/NULL);
			if (!L_24)
			{
				goto IL_0205;
			}
		}

IL_00db:
		{
			Wait_t6D6FC838510D95749A0C737B03665BACEB27DB74 * L_25 = V_1;
			NullCheck(L_25);
			StringParameter_t33BF466D3AD2402CEA10C41D765102E093891CA8 * L_26 = L_25->get_WaitMode_7();
			NullCheck(L_26);
			String_t* L_27;
			L_27 = Nullable_1_get_Value_mCD30AA96C09E69BAC64E16A8B627B7535158A477(L_26, /*hidden argument*/Nullable_1_get_Value_mCD30AA96C09E69BAC64E16A8B627B7535158A477_RuntimeMethod_var);
			String_t* L_28;
			L_28 = StringUtils_GetAfterFirst_m9891D3F6B904B2F70FD51FC52D5F3E788E880E04(L_27, _stringLiteral1B8590E2F95A4B0631E98EAF5F61AFD63A1C031E, 4, /*hidden argument*/NULL);
			float* L_29 = __this->get_address_of_U3CskippableWaitTimeU3E5__2_4();
			bool L_30;
			L_30 = ParseUtils_TryInvariantFloat_m6143488E7C3590E62387B6A9C0E78E7595C37C49(L_28, (float*)L_29, /*hidden argument*/NULL);
			if (!L_30)
			{
				goto IL_0205;
			}
		}

IL_0101:
		{
			// scriptPlayer.SetWaitingForInputEnabled(true);
			RuntimeObject* L_31;
			L_31 = Wait_get_scriptPlayer_mEACD3C5E7496EBB5F9D20597EDE6F80DFC670721(/*hidden argument*/NULL);
			NullCheck(L_31);
			InterfaceActionInvoker1< bool >::Invoke(37 /* System.Void Naninovel.IScriptPlayer::SetWaitingForInputEnabled(System.Boolean) */, IScriptPlayer_t67C9B3A80B4439FB56E13A389B48EAB16C7AE74E_il2cpp_TypeInfo_var, L_31, (bool)1);
			// if (scriptPlayer.SkipActive) return;
			RuntimeObject* L_32;
			L_32 = Wait_get_scriptPlayer_mEACD3C5E7496EBB5F9D20597EDE6F80DFC670721(/*hidden argument*/NULL);
			NullCheck(L_32);
			bool L_33;
			L_33 = InterfaceFuncInvoker0< bool >::Invoke(16 /* System.Boolean Naninovel.IScriptPlayer::get_SkipActive() */, IScriptPlayer_t67C9B3A80B4439FB56E13A389B48EAB16C7AE74E_il2cpp_TypeInfo_var, L_32);
			if (!L_33)
			{
				goto IL_011d;
			}
		}

IL_0118:
		{
			// if (scriptPlayer.SkipActive) return;
			goto IL_02f9;
		}

IL_011d:
		{
			// var startTime = Time.time;
			float L_34;
			L_34 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
			__this->set_U3CstartTimeU3E5__4_7(L_34);
			goto IL_01eb;
		}

IL_012d:
		{
			// await AsyncUtils.WaitEndOfFrame;
			YieldAwaitable_t0AF0E5F39D5840C6614B26D0AF53DD2A63037F56  L_35;
			L_35 = AsyncUtils_get_WaitEndOfFrame_mDC0867AF8ACE2E027D9A6052C0319E6EAB897531(/*hidden argument*/NULL);
			V_3 = L_35;
			Awaiter_tC53C155C42BF6DB6BBD8673DE4B04D42737173C6  L_36;
			L_36 = YieldAwaitable_GetAwaiter_m1769A471365684D6C113CE00DB3C960D11E7B3AF((YieldAwaitable_t0AF0E5F39D5840C6614B26D0AF53DD2A63037F56 *)(&V_3), /*hidden argument*/NULL);
			V_2 = L_36;
			bool L_37;
			L_37 = Awaiter_get_IsCompleted_m42F03E6C535107C5916EFDECAD881942718FCD6A((Awaiter_tC53C155C42BF6DB6BBD8673DE4B04D42737173C6 *)(&V_2), /*hidden argument*/NULL);
			if (L_37)
			{
				goto IL_0183;
			}
		}

IL_0144:
		{
			int32_t L_38 = 1;
			V_0 = L_38;
			__this->set_U3CU3E1__state_0(L_38);
			Awaiter_tC53C155C42BF6DB6BBD8673DE4B04D42737173C6  L_39 = V_2;
			__this->set_U3CU3Eu__1_6(L_39);
			AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 * L_40 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tC53C155C42BF6DB6BBD8673DE4B04D42737173C6_TisU3CExecuteAsyncU3Ed__6_tD382787452B3A05D65DA90FC93BEB427B31222B4_m19E8F79C50F3F47DB637770D596BEBB755B84487((AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 *)L_40, (Awaiter_tC53C155C42BF6DB6BBD8673DE4B04D42737173C6 *)(&V_2), (U3CExecuteAsyncU3Ed__6_tD382787452B3A05D65DA90FC93BEB427B31222B4 *)__this, /*hidden argument*/AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tC53C155C42BF6DB6BBD8673DE4B04D42737173C6_TisU3CExecuteAsyncU3Ed__6_tD382787452B3A05D65DA90FC93BEB427B31222B4_m19E8F79C50F3F47DB637770D596BEBB755B84487_RuntimeMethod_var);
			goto IL_030c;
		}

IL_0167:
		{
			Awaiter_tC53C155C42BF6DB6BBD8673DE4B04D42737173C6  L_41 = __this->get_U3CU3Eu__1_6();
			V_2 = L_41;
			Awaiter_tC53C155C42BF6DB6BBD8673DE4B04D42737173C6 * L_42 = __this->get_address_of_U3CU3Eu__1_6();
			il2cpp_codegen_initobj(L_42, sizeof(Awaiter_tC53C155C42BF6DB6BBD8673DE4B04D42737173C6 ));
			int32_t L_43 = (-1);
			V_0 = L_43;
			__this->set_U3CU3E1__state_0(L_43);
		}

IL_0183:
		{
			Awaiter_GetResult_m477940C595015AFCD4FEB055A82A663633BD5E47((Awaiter_tC53C155C42BF6DB6BBD8673DE4B04D42737173C6 *)(&V_2), /*hidden argument*/NULL);
			// if (cancellationToken.CancellationRequested) return;
			CancellationToken_t6347F75AB41E1331E57D91A3F883A02D5FA698E3 * L_44 = __this->get_address_of_cancellationToken_3();
			bool L_45;
			L_45 = CancellationToken_get_CancellationRequested_mFE620435F6D5F1369C763A8F50BB6DD3DC88918B((CancellationToken_t6347F75AB41E1331E57D91A3F883A02D5FA698E3 *)L_44, /*hidden argument*/NULL);
			if (!L_45)
			{
				goto IL_019c;
			}
		}

IL_0197:
		{
			// if (cancellationToken.CancellationRequested) return;
			goto IL_02f9;
		}

IL_019c:
		{
			// var waitedEnough = (Time.time - startTime) >= skippableWaitTime;
			float L_46;
			L_46 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
			float L_47 = __this->get_U3CstartTimeU3E5__4_7();
			float L_48 = __this->get_U3CskippableWaitTimeU3E5__2_4();
			// var inputActivated = (inputManager.GetContinue()?.StartedDuringFrame ?? false) || (inputManager.GetSkip()?.StartedDuringFrame ?? false);
			RuntimeObject* L_49;
			L_49 = Wait_get_inputManager_mFB0048387B6E3DC2B9EDAEE977639A07F437EDA0(/*hidden argument*/NULL);
			RuntimeObject* L_50;
			L_50 = InputManagerExtensions_GetContinue_m5C921BAA5C256988CC26AE93C4E18AFACBE8BBA8(L_49, /*hidden argument*/NULL);
			RuntimeObject* L_51 = L_50;
			G_B20_0 = L_51;
			G_B20_1 = ((((int32_t)((!(((float)((float)il2cpp_codegen_subtract((float)L_46, (float)L_47))) >= ((float)L_48)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			if (L_51)
			{
				G_B21_0 = L_51;
				G_B21_1 = ((((int32_t)((!(((float)((float)il2cpp_codegen_subtract((float)L_46, (float)L_47))) >= ((float)L_48)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
				goto IL_01c4;
			}
		}

IL_01c0:
		{
			G_B22_0 = 0;
			G_B22_1 = G_B20_1;
			goto IL_01c9;
		}

IL_01c4:
		{
			NullCheck(G_B21_0);
			bool L_52;
			L_52 = InterfaceFuncInvoker0< bool >::Invoke(9 /* System.Boolean Naninovel.IInputSampler::get_StartedDuringFrame() */, IInputSampler_t1EECEB7E9E0A255621360C496765007E0A9603A3_il2cpp_TypeInfo_var, G_B21_0);
			G_B22_0 = ((int32_t)(L_52));
			G_B22_1 = G_B21_1;
		}

IL_01c9:
		{
			G_B23_0 = G_B22_1;
			if (G_B22_0)
			{
				G_B26_0 = G_B22_1;
				goto IL_01e3;
			}
		}

IL_01cb:
		{
			RuntimeObject* L_53;
			L_53 = Wait_get_inputManager_mFB0048387B6E3DC2B9EDAEE977639A07F437EDA0(/*hidden argument*/NULL);
			RuntimeObject* L_54;
			L_54 = InputManagerExtensions_GetSkip_m19EE8D1978ED540BB0CACA8301505E4221B224AA(L_53, /*hidden argument*/NULL);
			RuntimeObject* L_55 = L_54;
			G_B24_0 = L_55;
			G_B24_1 = G_B23_0;
			if (L_55)
			{
				G_B25_0 = L_55;
				G_B25_1 = G_B23_0;
				goto IL_01dc;
			}
		}

IL_01d8:
		{
			G_B27_0 = 0;
			G_B27_1 = G_B24_1;
			goto IL_01e4;
		}

IL_01dc:
		{
			NullCheck(G_B25_0);
			bool L_56;
			L_56 = InterfaceFuncInvoker0< bool >::Invoke(9 /* System.Boolean Naninovel.IInputSampler::get_StartedDuringFrame() */, IInputSampler_t1EECEB7E9E0A255621360C496765007E0A9603A3_il2cpp_TypeInfo_var, G_B25_0);
			G_B27_0 = ((int32_t)(L_56));
			G_B27_1 = G_B25_1;
			goto IL_01e4;
		}

IL_01e3:
		{
			G_B27_0 = 1;
			G_B27_1 = G_B26_0;
		}

IL_01e4:
		{
			V_4 = (bool)G_B27_0;
			// if (waitedEnough || inputActivated) break;
			bool L_57 = V_4;
			if (((int32_t)((int32_t)G_B27_1|(int32_t)L_57)))
			{
				goto IL_01f5;
			}
		}

IL_01eb:
		{
			// while (Application.isPlaying)
			bool L_58;
			L_58 = Application_get_isPlaying_m7BB718D8E58B807184491F64AFF0649517E56567(/*hidden argument*/NULL);
			if (L_58)
			{
				goto IL_012d;
			}
		}

IL_01f5:
		{
			// scriptPlayer.SetWaitingForInputEnabled(false);
			RuntimeObject* L_59;
			L_59 = Wait_get_scriptPlayer_mEACD3C5E7496EBB5F9D20597EDE6F80DFC670721(/*hidden argument*/NULL);
			NullCheck(L_59);
			InterfaceActionInvoker1< bool >::Invoke(37 /* System.Void Naninovel.IScriptPlayer::SetWaitingForInputEnabled(System.Boolean) */, IScriptPlayer_t67C9B3A80B4439FB56E13A389B48EAB16C7AE74E_il2cpp_TypeInfo_var, L_59, (bool)0);
			// return;
			goto IL_02f9;
		}

IL_0205:
		{
			// if (ParseUtils.TryInvariantFloat(WaitMode, out var waitTime))
			Wait_t6D6FC838510D95749A0C737B03665BACEB27DB74 * L_60 = V_1;
			NullCheck(L_60);
			StringParameter_t33BF466D3AD2402CEA10C41D765102E093891CA8 * L_61 = L_60->get_WaitMode_7();
			String_t* L_62;
			L_62 = StringParameter_op_Implicit_m986AE779F7A248DB1D737469568113486EB7D764(L_61, /*hidden argument*/NULL);
			float* L_63 = __this->get_address_of_U3CwaitTimeU3E5__3_5();
			bool L_64;
			L_64 = ParseUtils_TryInvariantFloat_m6143488E7C3590E62387B6A9C0E78E7595C37C49(L_62, (float*)L_63, /*hidden argument*/NULL);
			if (!L_64)
			{
				goto IL_02d3;
			}
		}

IL_0220:
		{
			// if (scriptPlayer.SkipActive) return;
			RuntimeObject* L_65;
			L_65 = Wait_get_scriptPlayer_mEACD3C5E7496EBB5F9D20597EDE6F80DFC670721(/*hidden argument*/NULL);
			NullCheck(L_65);
			bool L_66;
			L_66 = InterfaceFuncInvoker0< bool >::Invoke(16 /* System.Boolean Naninovel.IScriptPlayer::get_SkipActive() */, IScriptPlayer_t67C9B3A80B4439FB56E13A389B48EAB16C7AE74E_il2cpp_TypeInfo_var, L_65);
			if (!L_66)
			{
				goto IL_0231;
			}
		}

IL_022c:
		{
			// if (scriptPlayer.SkipActive) return;
			goto IL_02f9;
		}

IL_0231:
		{
			// var startTime = Time.time;
			float L_67;
			L_67 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
			__this->set_U3CstartTimeU3E5__4_7(L_67);
			goto IL_02c7;
		}

IL_0241:
		{
			// await AsyncUtils.WaitEndOfFrame;
			YieldAwaitable_t0AF0E5F39D5840C6614B26D0AF53DD2A63037F56  L_68;
			L_68 = AsyncUtils_get_WaitEndOfFrame_mDC0867AF8ACE2E027D9A6052C0319E6EAB897531(/*hidden argument*/NULL);
			V_3 = L_68;
			Awaiter_tC53C155C42BF6DB6BBD8673DE4B04D42737173C6  L_69;
			L_69 = YieldAwaitable_GetAwaiter_m1769A471365684D6C113CE00DB3C960D11E7B3AF((YieldAwaitable_t0AF0E5F39D5840C6614B26D0AF53DD2A63037F56 *)(&V_3), /*hidden argument*/NULL);
			V_2 = L_69;
			bool L_70;
			L_70 = Awaiter_get_IsCompleted_m42F03E6C535107C5916EFDECAD881942718FCD6A((Awaiter_tC53C155C42BF6DB6BBD8673DE4B04D42737173C6 *)(&V_2), /*hidden argument*/NULL);
			if (L_70)
			{
				goto IL_0297;
			}
		}

IL_0258:
		{
			int32_t L_71 = 2;
			V_0 = L_71;
			__this->set_U3CU3E1__state_0(L_71);
			Awaiter_tC53C155C42BF6DB6BBD8673DE4B04D42737173C6  L_72 = V_2;
			__this->set_U3CU3Eu__1_6(L_72);
			AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 * L_73 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tC53C155C42BF6DB6BBD8673DE4B04D42737173C6_TisU3CExecuteAsyncU3Ed__6_tD382787452B3A05D65DA90FC93BEB427B31222B4_m19E8F79C50F3F47DB637770D596BEBB755B84487((AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 *)L_73, (Awaiter_tC53C155C42BF6DB6BBD8673DE4B04D42737173C6 *)(&V_2), (U3CExecuteAsyncU3Ed__6_tD382787452B3A05D65DA90FC93BEB427B31222B4 *)__this, /*hidden argument*/AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tC53C155C42BF6DB6BBD8673DE4B04D42737173C6_TisU3CExecuteAsyncU3Ed__6_tD382787452B3A05D65DA90FC93BEB427B31222B4_m19E8F79C50F3F47DB637770D596BEBB755B84487_RuntimeMethod_var);
			goto IL_030c;
		}

IL_027b:
		{
			Awaiter_tC53C155C42BF6DB6BBD8673DE4B04D42737173C6  L_74 = __this->get_U3CU3Eu__1_6();
			V_2 = L_74;
			Awaiter_tC53C155C42BF6DB6BBD8673DE4B04D42737173C6 * L_75 = __this->get_address_of_U3CU3Eu__1_6();
			il2cpp_codegen_initobj(L_75, sizeof(Awaiter_tC53C155C42BF6DB6BBD8673DE4B04D42737173C6 ));
			int32_t L_76 = (-1);
			V_0 = L_76;
			__this->set_U3CU3E1__state_0(L_76);
		}

IL_0297:
		{
			Awaiter_GetResult_m477940C595015AFCD4FEB055A82A663633BD5E47((Awaiter_tC53C155C42BF6DB6BBD8673DE4B04D42737173C6 *)(&V_2), /*hidden argument*/NULL);
			// var waitedEnough = (Time.time - startTime) >= waitTime;
			float L_77;
			L_77 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
			float L_78 = __this->get_U3CstartTimeU3E5__4_7();
			float L_79 = __this->get_U3CwaitTimeU3E5__3_5();
			V_5 = (bool)((((int32_t)((!(((float)((float)il2cpp_codegen_subtract((float)L_77, (float)L_78))) >= ((float)L_79)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			// if (cancellationToken.CancellationRequested || waitedEnough) break;
			CancellationToken_t6347F75AB41E1331E57D91A3F883A02D5FA698E3 * L_80 = __this->get_address_of_cancellationToken_3();
			bool L_81;
			L_81 = CancellationToken_get_CancellationRequested_mFE620435F6D5F1369C763A8F50BB6DD3DC88918B((CancellationToken_t6347F75AB41E1331E57D91A3F883A02D5FA698E3 *)L_80, /*hidden argument*/NULL);
			bool L_82 = V_5;
			if (((int32_t)((int32_t)L_81|(int32_t)L_82)))
			{
				goto IL_02d1;
			}
		}

IL_02c7:
		{
			// while (Application.isPlaying)
			bool L_83;
			L_83 = Application_get_isPlaying_m7BB718D8E58B807184491F64AFF0649517E56567(/*hidden argument*/NULL);
			if (L_83)
			{
				goto IL_0241;
			}
		}

IL_02d1:
		{
			// return;
			goto IL_02f9;
		}

IL_02d3:
		{
			// LogWarningWithPosition($"Failed to resolve value of the `{nameof(WaitMode)}` parameter for the wait command. Check the API reference for list of supported values.");
			Wait_t6D6FC838510D95749A0C737B03665BACEB27DB74 * L_84 = V_1;
			NullCheck(L_84);
			Command_LogWarningWithPosition_m84CA831BB688C4700B5E01CF40F8B83C5A6CCE2E(L_84, _stringLiteralE8927E03327116C98C4B88036C9DE18E632B201F, /*hidden argument*/NULL);
			goto IL_02f9;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_02e0;
		}
		throw e;
	}

CATCH_02e0:
	{ // begin catch(System.Exception)
		V_6 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 * L_85 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_86 = V_6;
		AsyncUniTaskMethodBuilder_SetException_mD97347DB2613C31645BBBE97F83717D3F225A84D((AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 *)L_85, L_86, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_030c;
	} // end catch (depth: 1)

IL_02f9:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 * L_87 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncUniTaskMethodBuilder_SetResult_mEB0C04A892C51268180DED2647936AA6DE8BA80D((AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 *)L_87, /*hidden argument*/NULL);
	}

IL_030c:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CExecuteAsyncU3Ed__6_MoveNext_mDB200EB3873DC7072C0ED2763CC1C29E2DC4CF25_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CExecuteAsyncU3Ed__6_tD382787452B3A05D65DA90FC93BEB427B31222B4 * _thisAdjusted = reinterpret_cast<U3CExecuteAsyncU3Ed__6_tD382787452B3A05D65DA90FC93BEB427B31222B4 *>(__this + _offset);
	U3CExecuteAsyncU3Ed__6_MoveNext_mDB200EB3873DC7072C0ED2763CC1C29E2DC4CF25(_thisAdjusted, method);
}
// System.Void Naninovel.Commands.Wait/<ExecuteAsync>d__6::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteAsyncU3Ed__6_SetStateMachine_mBBD52E4D51E3B50640F6E9561052B98983E8E0BA (U3CExecuteAsyncU3Ed__6_tD382787452B3A05D65DA90FC93BEB427B31222B4 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncUniTaskMethodBuilder_SetStateMachine_m919B0537825382AC072CF24F8D838BD3920E9FC8((AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CExecuteAsyncU3Ed__6_SetStateMachine_mBBD52E4D51E3B50640F6E9561052B98983E8E0BA_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CExecuteAsyncU3Ed__6_tD382787452B3A05D65DA90FC93BEB427B31222B4 * _thisAdjusted = reinterpret_cast<U3CExecuteAsyncU3Ed__6_tD382787452B3A05D65DA90FC93BEB427B31222B4 *>(__this + _offset);
	U3CExecuteAsyncU3Ed__6_SetStateMachine_mBBD52E4D51E3B50640F6E9561052B98983E8E0BA(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Naninovel.Commands.WaitForInput/<ExecuteAsync>d__0::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteAsyncU3Ed__0_MoveNext_mF8880300D5B943073FD5C897C21F90B666E8A9BA (U3CExecuteAsyncU3Ed__0_t67878E6A3EBDB121016F7589B616F5D6AE4AD25A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822_TisU3CExecuteAsyncU3Ed__0_t67878E6A3EBDB121016F7589B616F5D6AE4AD25A_mC6BFC7F52648326FF291589C8A95BA4E4998AF30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Wait_t6D6FC838510D95749A0C737B03665BACEB27DB74_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B8590E2F95A4B0631E98EAF5F61AFD63A1C031E);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822  V_1;
	memset((&V_1), 0, sizeof(V_1));
	UniTask_t41263A639210D10E03708EE0B4B03A964D7EEE3C  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_005c;
			}
		}

IL_000a:
		{
			// var waitAction = new Wait();
			Wait_t6D6FC838510D95749A0C737B03665BACEB27DB74 * L_2 = (Wait_t6D6FC838510D95749A0C737B03665BACEB27DB74 *)il2cpp_codegen_object_new(Wait_t6D6FC838510D95749A0C737B03665BACEB27DB74_il2cpp_TypeInfo_var);
			Wait__ctor_m63223070A65596B74AF65BF36883D4F3C5A6D1B2(L_2, /*hidden argument*/NULL);
			// waitAction.WaitMode = Commands.Wait.InputLiteral;
			Wait_t6D6FC838510D95749A0C737B03665BACEB27DB74 * L_3 = L_2;
			StringParameter_t33BF466D3AD2402CEA10C41D765102E093891CA8 * L_4;
			L_4 = StringParameter_op_Implicit_m826C7FB19E8D488F30E78DA497F1E60A4E1AB5C0(_stringLiteral1B8590E2F95A4B0631E98EAF5F61AFD63A1C031E, /*hidden argument*/NULL);
			NullCheck(L_3);
			L_3->set_WaitMode_7(L_4);
			// await waitAction.ExecuteAsync(cancellationToken);
			CancellationToken_t6347F75AB41E1331E57D91A3F883A02D5FA698E3  L_5 = __this->get_cancellationToken_2();
			NullCheck(L_3);
			UniTask_t41263A639210D10E03708EE0B4B03A964D7EEE3C  L_6;
			L_6 = VirtFuncInvoker1< UniTask_t41263A639210D10E03708EE0B4B03A964D7EEE3C , CancellationToken_t6347F75AB41E1331E57D91A3F883A02D5FA698E3  >::Invoke(7 /* UniRx.Async.UniTask Naninovel.Commands.Command::ExecuteAsync(Naninovel.CancellationToken) */, L_3, L_5);
			V_2 = L_6;
			Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822  L_7;
			L_7 = UniTask_GetAwaiter_mD2E76ACB629099DC37BB3C99511590FA9B227272((UniTask_t41263A639210D10E03708EE0B4B03A964D7EEE3C *)(&V_2), /*hidden argument*/NULL);
			V_1 = L_7;
			bool L_8;
			L_8 = Awaiter_get_IsCompleted_m0F67C2C63E4AD6E47A126AA69B8A98E0770F096C((Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822 *)(&V_1), /*hidden argument*/NULL);
			if (L_8)
			{
				goto IL_0078;
			}
		}

IL_003c:
		{
			int32_t L_9 = 0;
			V_0 = L_9;
			__this->set_U3CU3E1__state_0(L_9);
			Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822  L_10 = V_1;
			__this->set_U3CU3Eu__1_3(L_10);
			AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 * L_11 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822_TisU3CExecuteAsyncU3Ed__0_t67878E6A3EBDB121016F7589B616F5D6AE4AD25A_mC6BFC7F52648326FF291589C8A95BA4E4998AF30((AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 *)L_11, (Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822 *)(&V_1), (U3CExecuteAsyncU3Ed__0_t67878E6A3EBDB121016F7589B616F5D6AE4AD25A *)__this, /*hidden argument*/AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822_TisU3CExecuteAsyncU3Ed__0_t67878E6A3EBDB121016F7589B616F5D6AE4AD25A_mC6BFC7F52648326FF291589C8A95BA4E4998AF30_RuntimeMethod_var);
			goto IL_00ab;
		}

IL_005c:
		{
			Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822  L_12 = __this->get_U3CU3Eu__1_3();
			V_1 = L_12;
			Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822 * L_13 = __this->get_address_of_U3CU3Eu__1_3();
			il2cpp_codegen_initobj(L_13, sizeof(Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822 ));
			int32_t L_14 = (-1);
			V_0 = L_14;
			__this->set_U3CU3E1__state_0(L_14);
		}

IL_0078:
		{
			Awaiter_GetResult_m3EFD26ADCEFA37F3B4EE99CD8BE65F51405CFEF3((Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822 *)(&V_1), /*hidden argument*/NULL);
			goto IL_0098;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0081;
		}
		throw e;
	}

CATCH_0081:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 * L_15 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_16 = V_3;
		AsyncUniTaskMethodBuilder_SetException_mD97347DB2613C31645BBBE97F83717D3F225A84D((AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 *)L_15, L_16, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00ab;
	} // end catch (depth: 1)

IL_0098:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 * L_17 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncUniTaskMethodBuilder_SetResult_mEB0C04A892C51268180DED2647936AA6DE8BA80D((AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 *)L_17, /*hidden argument*/NULL);
	}

IL_00ab:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CExecuteAsyncU3Ed__0_MoveNext_mF8880300D5B943073FD5C897C21F90B666E8A9BA_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CExecuteAsyncU3Ed__0_t67878E6A3EBDB121016F7589B616F5D6AE4AD25A * _thisAdjusted = reinterpret_cast<U3CExecuteAsyncU3Ed__0_t67878E6A3EBDB121016F7589B616F5D6AE4AD25A *>(__this + _offset);
	U3CExecuteAsyncU3Ed__0_MoveNext_mF8880300D5B943073FD5C897C21F90B666E8A9BA(_thisAdjusted, method);
}
// System.Void Naninovel.Commands.WaitForInput/<ExecuteAsync>d__0::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteAsyncU3Ed__0_SetStateMachine_m466C3EA130D13E53A53355DA1BD2A2568142A3BA (U3CExecuteAsyncU3Ed__0_t67878E6A3EBDB121016F7589B616F5D6AE4AD25A * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncUniTaskMethodBuilder_SetStateMachine_m919B0537825382AC072CF24F8D838BD3920E9FC8((AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CExecuteAsyncU3Ed__0_SetStateMachine_m466C3EA130D13E53A53355DA1BD2A2568142A3BA_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CExecuteAsyncU3Ed__0_t67878E6A3EBDB121016F7589B616F5D6AE4AD25A * _thisAdjusted = reinterpret_cast<U3CExecuteAsyncU3Ed__0_t67878E6A3EBDB121016F7589B616F5D6AE4AD25A *>(__this + _offset);
	U3CExecuteAsyncU3Ed__0_SetStateMachine_m466C3EA130D13E53A53355DA1BD2A2568142A3BA(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Naninovel.WavToAudioClipConverter/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m958079A3784CDEBF39C523DF080BC157E5D77E8F (U3CU3Ec__DisplayClass4_0_t30A7A5DA80629F9EF81E32295173003C5F1559FC * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single[] Naninovel.WavToAudioClipConverter/<>c__DisplayClass4_0::<ConvertAsync>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* U3CU3Ec__DisplayClass4_0_U3CConvertAsyncU3Eb__0_mB4488192A79BC61D93580151C855089AC8EF4F3C (U3CU3Ec__DisplayClass4_0_t30A7A5DA80629F9EF81E32295173003C5F1559FC * __this, const RuntimeMethod* method)
{
	{
		// var floatArr = await UniTask.Run(() => Pcm16ToFloatArray(obj));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = __this->get_obj_0();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_1;
		L_1 = WavToAudioClipConverter_Pcm16ToFloatArray_m93A21DDCE3E36E7C3F9529C76F62282F69E1DC40(L_0, /*hidden argument*/NULL);
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
// System.Void Naninovel.WavToAudioClipConverter/<ConvertAsync>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CConvertAsyncU3Ed__4_MoveNext_mEFB4CA91F5865654D4E75412470D5CF2A2555430 (U3CConvertAsyncU3Ed__4_tA998E40BCEB98D595B4B64AF5448BA9429993BA3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_t9F63A7154247DFB58C781A45AF44C5B8E8FE3EE2_TisU3CConvertAsyncU3Ed__4_tA998E40BCEB98D595B4B64AF5448BA9429993BA3_mE9E7304C4807650E8E20D9811C08EBC80D8E4318_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetResult_m3597D4A1F1F083F29D176D4AE7DD785E4D117530_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m515EDC8C4774186F24AAF09E72A9F9D113D90E05_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m6B7450FE767682CF047C6FCB442BF39CEEB504B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1__ctor_m705E8DDC1A6A217302FF15163E130B76094365A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_tB9DF8D3D9F8D8DE3959D9A3C4942EA354A2D14A8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_U3CConvertAsyncU3Eb__0_mB4488192A79BC61D93580151C855089AC8EF4F3C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_t30A7A5DA80629F9EF81E32295173003C5F1559FC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m076F414CB98FC7AA200770226C9DD195FC526D1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_Run_TisSingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_m0F9B2725913918B9A55210266A7779106E745A21_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t41263A639210D10E03708EE0B4B03A964D7EEE3C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral90D48895635CEC6550EC8518AA5D23413800F682);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * V_1 = NULL;
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* V_2 = NULL;
	Awaiter_t9F63A7154247DFB58C781A45AF44C5B8E8FE3EE2  V_3;
	memset((&V_3), 0, sizeof(V_3));
	UniTask_1_tC50F18074075969ECB5EE6133BCE0BB2665BB88F  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Exception_t * V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_005f;
			}
		}

IL_000a:
		{
			U3CU3Ec__DisplayClass4_0_t30A7A5DA80629F9EF81E32295173003C5F1559FC * L_2 = (U3CU3Ec__DisplayClass4_0_t30A7A5DA80629F9EF81E32295173003C5F1559FC *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass4_0_t30A7A5DA80629F9EF81E32295173003C5F1559FC_il2cpp_TypeInfo_var);
			U3CU3Ec__DisplayClass4_0__ctor_m958079A3784CDEBF39C523DF080BC157E5D77E8F(L_2, /*hidden argument*/NULL);
			U3CU3Ec__DisplayClass4_0_t30A7A5DA80629F9EF81E32295173003C5F1559FC * L_3 = L_2;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = __this->get_obj_2();
			NullCheck(L_3);
			L_3->set_obj_0(L_4);
			// var floatArr = await UniTask.Run(() => Pcm16ToFloatArray(obj));
			Func_1_tB9DF8D3D9F8D8DE3959D9A3C4942EA354A2D14A8 * L_5 = (Func_1_tB9DF8D3D9F8D8DE3959D9A3C4942EA354A2D14A8 *)il2cpp_codegen_object_new(Func_1_tB9DF8D3D9F8D8DE3959D9A3C4942EA354A2D14A8_il2cpp_TypeInfo_var);
			Func_1__ctor_m705E8DDC1A6A217302FF15163E130B76094365A5(L_5, L_3, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass4_0_U3CConvertAsyncU3Eb__0_mB4488192A79BC61D93580151C855089AC8EF4F3C_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m705E8DDC1A6A217302FF15163E130B76094365A5_RuntimeMethod_var);
			IL2CPP_RUNTIME_CLASS_INIT(UniTask_t41263A639210D10E03708EE0B4B03A964D7EEE3C_il2cpp_TypeInfo_var);
			UniTask_1_tC50F18074075969ECB5EE6133BCE0BB2665BB88F  L_6;
			L_6 = UniTask_Run_TisSingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_m0F9B2725913918B9A55210266A7779106E745A21(L_5, (bool)1, /*hidden argument*/UniTask_Run_TisSingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_m0F9B2725913918B9A55210266A7779106E745A21_RuntimeMethod_var);
			V_4 = L_6;
			Awaiter_t9F63A7154247DFB58C781A45AF44C5B8E8FE3EE2  L_7;
			L_7 = UniTask_1_GetAwaiter_m076F414CB98FC7AA200770226C9DD195FC526D1F((UniTask_1_tC50F18074075969ECB5EE6133BCE0BB2665BB88F *)(&V_4), /*hidden argument*/UniTask_1_GetAwaiter_m076F414CB98FC7AA200770226C9DD195FC526D1F_RuntimeMethod_var);
			V_3 = L_7;
			bool L_8;
			L_8 = Awaiter_get_IsCompleted_m6B7450FE767682CF047C6FCB442BF39CEEB504B9((Awaiter_t9F63A7154247DFB58C781A45AF44C5B8E8FE3EE2 *)(&V_3), /*hidden argument*/Awaiter_get_IsCompleted_m6B7450FE767682CF047C6FCB442BF39CEEB504B9_RuntimeMethod_var);
			if (L_8)
			{
				goto IL_007b;
			}
		}

IL_003f:
		{
			int32_t L_9 = 0;
			V_0 = L_9;
			__this->set_U3CU3E1__state_0(L_9);
			Awaiter_t9F63A7154247DFB58C781A45AF44C5B8E8FE3EE2  L_10 = V_3;
			__this->set_U3CU3Eu__1_4(L_10);
			AsyncUniTaskMethodBuilder_1_t06EFF9E0B83B2725F96D09D9E5EBF736DA6B30C1 * L_11 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_t9F63A7154247DFB58C781A45AF44C5B8E8FE3EE2_TisU3CConvertAsyncU3Ed__4_tA998E40BCEB98D595B4B64AF5448BA9429993BA3_mE9E7304C4807650E8E20D9811C08EBC80D8E4318((AsyncUniTaskMethodBuilder_1_t06EFF9E0B83B2725F96D09D9E5EBF736DA6B30C1 *)L_11, (Awaiter_t9F63A7154247DFB58C781A45AF44C5B8E8FE3EE2 *)(&V_3), (U3CConvertAsyncU3Ed__4_tA998E40BCEB98D595B4B64AF5448BA9429993BA3 *)__this, /*hidden argument*/AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_t9F63A7154247DFB58C781A45AF44C5B8E8FE3EE2_TisU3CConvertAsyncU3Ed__4_tA998E40BCEB98D595B4B64AF5448BA9429993BA3_mE9E7304C4807650E8E20D9811C08EBC80D8E4318_RuntimeMethod_var);
			goto IL_00de;
		}

IL_005f:
		{
			Awaiter_t9F63A7154247DFB58C781A45AF44C5B8E8FE3EE2  L_12 = __this->get_U3CU3Eu__1_4();
			V_3 = L_12;
			Awaiter_t9F63A7154247DFB58C781A45AF44C5B8E8FE3EE2 * L_13 = __this->get_address_of_U3CU3Eu__1_4();
			il2cpp_codegen_initobj(L_13, sizeof(Awaiter_t9F63A7154247DFB58C781A45AF44C5B8E8FE3EE2 ));
			int32_t L_14 = (-1);
			V_0 = L_14;
			__this->set_U3CU3E1__state_0(L_14);
		}

IL_007b:
		{
			SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_15;
			L_15 = Awaiter_GetResult_m515EDC8C4774186F24AAF09E72A9F9D113D90E05((Awaiter_t9F63A7154247DFB58C781A45AF44C5B8E8FE3EE2 *)(&V_3), /*hidden argument*/Awaiter_GetResult_m515EDC8C4774186F24AAF09E72A9F9D113D90E05_RuntimeMethod_var);
			V_2 = L_15;
			// var audioClip = AudioClip.Create("Generated WAV Audio", floatArr.Length / 2, 2, 44100, false);
			SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_16 = V_2;
			NullCheck(L_16);
			AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_17;
			L_17 = AudioClip_Create_m889DC46878E297CE089D4182F5FCDC4961529137(_stringLiteral90D48895635CEC6550EC8518AA5D23413800F682, ((int32_t)((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))/(int32_t)2)), 2, ((int32_t)44100), (bool)0, /*hidden argument*/NULL);
			// audioClip.name = name;
			AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_18 = L_17;
			String_t* L_19 = __this->get_name_3();
			NullCheck(L_18);
			Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(L_18, L_19, /*hidden argument*/NULL);
			// audioClip.SetData(floatArr, 0);
			AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_20 = L_18;
			SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_21 = V_2;
			NullCheck(L_20);
			bool L_22;
			L_22 = AudioClip_SetData_m3424F9C6C5B7A15491B79F961C30D8F0051E34F7(L_20, L_21, 0, /*hidden argument*/NULL);
			// return audioClip;
			V_1 = L_20;
			goto IL_00ca;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00b1;
		}
		throw e;
	}

CATCH_00b1:
	{ // begin catch(System.Exception)
		V_5 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncUniTaskMethodBuilder_1_t06EFF9E0B83B2725F96D09D9E5EBF736DA6B30C1 * L_23 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_24 = V_5;
		AsyncUniTaskMethodBuilder_1_SetException_m1A72D51105A7DFD4210C32201341E9B2B74E09D7((AsyncUniTaskMethodBuilder_1_t06EFF9E0B83B2725F96D09D9E5EBF736DA6B30C1 *)L_23, L_24, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_m1A72D51105A7DFD4210C32201341E9B2B74E09D7_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00de;
	} // end catch (depth: 1)

IL_00ca:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncUniTaskMethodBuilder_1_t06EFF9E0B83B2725F96D09D9E5EBF736DA6B30C1 * L_25 = __this->get_address_of_U3CU3Et__builder_1();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_26 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m3597D4A1F1F083F29D176D4AE7DD785E4D117530((AsyncUniTaskMethodBuilder_1_t06EFF9E0B83B2725F96D09D9E5EBF736DA6B30C1 *)L_25, L_26, /*hidden argument*/AsyncUniTaskMethodBuilder_1_SetResult_m3597D4A1F1F083F29D176D4AE7DD785E4D117530_RuntimeMethod_var);
	}

IL_00de:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CConvertAsyncU3Ed__4_MoveNext_mEFB4CA91F5865654D4E75412470D5CF2A2555430_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CConvertAsyncU3Ed__4_tA998E40BCEB98D595B4B64AF5448BA9429993BA3 * _thisAdjusted = reinterpret_cast<U3CConvertAsyncU3Ed__4_tA998E40BCEB98D595B4B64AF5448BA9429993BA3 *>(__this + _offset);
	U3CConvertAsyncU3Ed__4_MoveNext_mEFB4CA91F5865654D4E75412470D5CF2A2555430(_thisAdjusted, method);
}
// System.Void Naninovel.WavToAudioClipConverter/<ConvertAsync>d__4::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CConvertAsyncU3Ed__4_SetStateMachine_m35628B8A2B395213E0996A99D88CCBFF6FA19833 (U3CConvertAsyncU3Ed__4_tA998E40BCEB98D595B4B64AF5448BA9429993BA3 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetStateMachine_m66A28073FE6171484AA3615E5FA54A6FE4D65189_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncUniTaskMethodBuilder_1_t06EFF9E0B83B2725F96D09D9E5EBF736DA6B30C1 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncUniTaskMethodBuilder_1_SetStateMachine_m66A28073FE6171484AA3615E5FA54A6FE4D65189((AsyncUniTaskMethodBuilder_1_t06EFF9E0B83B2725F96D09D9E5EBF736DA6B30C1 *)L_0, L_1, /*hidden argument*/AsyncUniTaskMethodBuilder_1_SetStateMachine_m66A28073FE6171484AA3615E5FA54A6FE4D65189_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CConvertAsyncU3Ed__4_SetStateMachine_m35628B8A2B395213E0996A99D88CCBFF6FA19833_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CConvertAsyncU3Ed__4_tA998E40BCEB98D595B4B64AF5448BA9429993BA3 * _thisAdjusted = reinterpret_cast<U3CConvertAsyncU3Ed__4_tA998E40BCEB98D595B4B64AF5448BA9429993BA3 *>(__this + _offset);
	U3CConvertAsyncU3Ed__4_SetStateMachine_m35628B8A2B395213E0996A99D88CCBFF6FA19833(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Naninovel.WavToAudioClipConverter/<ConvertAsync>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CConvertAsyncU3Ed__6_MoveNext_m4168499B9A73539D9200BF20AE025D7DB7687DDC (U3CConvertAsyncU3Ed__6_tBBEA6021908F80F2BF921901F92D0D931ED03586 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_tD9F19E0615823FE62189D1CB3B5026C8A71A356A_TisU3CConvertAsyncU3Ed__6_tBBEA6021908F80F2BF921901F92D0D931ED03586_m6C4F52B1073E7B3112FF3B58DFA0AC1637EE1B38_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetResult_m8D2DCDC38E5201D7EBE1B1EC8B8EC8FA593D51EF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m76F1012F0193703F8042426640A8C9D1A42C324F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m404E16E7F0F7C2930D48CE04000579DCD369CA52_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_mA00D4B82A51478FB95987DD7495393101D8A100F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WavToAudioClipConverter_t924144CE4EC088BDC7369CD9193A676BD1B41AF9 * V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	Awaiter_tD9F19E0615823FE62189D1CB3B5026C8A71A356A  V_3;
	memset((&V_3), 0, sizeof(V_3));
	UniTask_1_tD2ECA67D5FF45EF664E0E3B62AFF9FBEAC959D67  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Exception_t * V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		WavToAudioClipConverter_t924144CE4EC088BDC7369CD9193A676BD1B41AF9 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_005b;
			}
		}

IL_0011:
		{
			// public async UniTask<object> ConvertAsync (object obj, string name) => await ConvertAsync(obj as byte[], name);
			WavToAudioClipConverter_t924144CE4EC088BDC7369CD9193A676BD1B41AF9 * L_3 = V_1;
			RuntimeObject * L_4 = __this->get_obj_3();
			String_t* L_5 = __this->get_name_4();
			NullCheck(L_3);
			UniTask_1_tD2ECA67D5FF45EF664E0E3B62AFF9FBEAC959D67  L_6;
			L_6 = WavToAudioClipConverter_ConvertAsync_mCEEE9B66A331E813ED34001646B8FB8478D30090(L_3, ((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)IsInst((RuntimeObject*)L_4, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var)), L_5, /*hidden argument*/NULL);
			V_4 = L_6;
			Awaiter_tD9F19E0615823FE62189D1CB3B5026C8A71A356A  L_7;
			L_7 = UniTask_1_GetAwaiter_mA00D4B82A51478FB95987DD7495393101D8A100F((UniTask_1_tD2ECA67D5FF45EF664E0E3B62AFF9FBEAC959D67 *)(&V_4), /*hidden argument*/UniTask_1_GetAwaiter_mA00D4B82A51478FB95987DD7495393101D8A100F_RuntimeMethod_var);
			V_3 = L_7;
			bool L_8;
			L_8 = Awaiter_get_IsCompleted_m404E16E7F0F7C2930D48CE04000579DCD369CA52((Awaiter_tD9F19E0615823FE62189D1CB3B5026C8A71A356A *)(&V_3), /*hidden argument*/Awaiter_get_IsCompleted_m404E16E7F0F7C2930D48CE04000579DCD369CA52_RuntimeMethod_var);
			if (L_8)
			{
				goto IL_0077;
			}
		}

IL_003b:
		{
			int32_t L_9 = 0;
			V_0 = L_9;
			__this->set_U3CU3E1__state_0(L_9);
			Awaiter_tD9F19E0615823FE62189D1CB3B5026C8A71A356A  L_10 = V_3;
			__this->set_U3CU3Eu__1_5(L_10);
			AsyncUniTaskMethodBuilder_1_tDD7DCA035B684680C606A9836E15BC201F62776F * L_11 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_tD9F19E0615823FE62189D1CB3B5026C8A71A356A_TisU3CConvertAsyncU3Ed__6_tBBEA6021908F80F2BF921901F92D0D931ED03586_m6C4F52B1073E7B3112FF3B58DFA0AC1637EE1B38((AsyncUniTaskMethodBuilder_1_tDD7DCA035B684680C606A9836E15BC201F62776F *)L_11, (Awaiter_tD9F19E0615823FE62189D1CB3B5026C8A71A356A *)(&V_3), (U3CConvertAsyncU3Ed__6_tBBEA6021908F80F2BF921901F92D0D931ED03586 *)__this, /*hidden argument*/AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_tD9F19E0615823FE62189D1CB3B5026C8A71A356A_TisU3CConvertAsyncU3Ed__6_tBBEA6021908F80F2BF921901F92D0D931ED03586_m6C4F52B1073E7B3112FF3B58DFA0AC1637EE1B38_RuntimeMethod_var);
			goto IL_00ae;
		}

IL_005b:
		{
			Awaiter_tD9F19E0615823FE62189D1CB3B5026C8A71A356A  L_12 = __this->get_U3CU3Eu__1_5();
			V_3 = L_12;
			Awaiter_tD9F19E0615823FE62189D1CB3B5026C8A71A356A * L_13 = __this->get_address_of_U3CU3Eu__1_5();
			il2cpp_codegen_initobj(L_13, sizeof(Awaiter_tD9F19E0615823FE62189D1CB3B5026C8A71A356A ));
			int32_t L_14 = (-1);
			V_0 = L_14;
			__this->set_U3CU3E1__state_0(L_14);
		}

IL_0077:
		{
			AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_15;
			L_15 = Awaiter_GetResult_m76F1012F0193703F8042426640A8C9D1A42C324F((Awaiter_tD9F19E0615823FE62189D1CB3B5026C8A71A356A *)(&V_3), /*hidden argument*/Awaiter_GetResult_m76F1012F0193703F8042426640A8C9D1A42C324F_RuntimeMethod_var);
			V_2 = L_15;
			goto IL_009a;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0081;
		}
		throw e;
	}

CATCH_0081:
	{ // begin catch(System.Exception)
		V_5 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncUniTaskMethodBuilder_1_tDD7DCA035B684680C606A9836E15BC201F62776F * L_16 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_17 = V_5;
		AsyncUniTaskMethodBuilder_1_SetException_m6328D8C00DCE433F59B0E590D53DC47B3C326C47((AsyncUniTaskMethodBuilder_1_tDD7DCA035B684680C606A9836E15BC201F62776F *)L_16, L_17, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_m6328D8C00DCE433F59B0E590D53DC47B3C326C47_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00ae;
	} // end catch (depth: 1)

IL_009a:
	{
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncUniTaskMethodBuilder_1_tDD7DCA035B684680C606A9836E15BC201F62776F * L_18 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject * L_19 = V_2;
		AsyncUniTaskMethodBuilder_1_SetResult_m8D2DCDC38E5201D7EBE1B1EC8B8EC8FA593D51EF((AsyncUniTaskMethodBuilder_1_tDD7DCA035B684680C606A9836E15BC201F62776F *)L_18, L_19, /*hidden argument*/AsyncUniTaskMethodBuilder_1_SetResult_m8D2DCDC38E5201D7EBE1B1EC8B8EC8FA593D51EF_RuntimeMethod_var);
	}

IL_00ae:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CConvertAsyncU3Ed__6_MoveNext_m4168499B9A73539D9200BF20AE025D7DB7687DDC_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CConvertAsyncU3Ed__6_tBBEA6021908F80F2BF921901F92D0D931ED03586 * _thisAdjusted = reinterpret_cast<U3CConvertAsyncU3Ed__6_tBBEA6021908F80F2BF921901F92D0D931ED03586 *>(__this + _offset);
	U3CConvertAsyncU3Ed__6_MoveNext_m4168499B9A73539D9200BF20AE025D7DB7687DDC(_thisAdjusted, method);
}
// System.Void Naninovel.WavToAudioClipConverter/<ConvertAsync>d__6::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CConvertAsyncU3Ed__6_SetStateMachine_mE69CA9511ADD03E9D62C603BB5E7CC3854AF2633 (U3CConvertAsyncU3Ed__6_tBBEA6021908F80F2BF921901F92D0D931ED03586 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetStateMachine_mCDC7988DB8C28883CBBADA9A54F310D878B28DA8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncUniTaskMethodBuilder_1_tDD7DCA035B684680C606A9836E15BC201F62776F * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncUniTaskMethodBuilder_1_SetStateMachine_mCDC7988DB8C28883CBBADA9A54F310D878B28DA8((AsyncUniTaskMethodBuilder_1_tDD7DCA035B684680C606A9836E15BC201F62776F *)L_0, L_1, /*hidden argument*/AsyncUniTaskMethodBuilder_1_SetStateMachine_mCDC7988DB8C28883CBBADA9A54F310D878B28DA8_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CConvertAsyncU3Ed__6_SetStateMachine_mE69CA9511ADD03E9D62C603BB5E7CC3854AF2633_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CConvertAsyncU3Ed__6_tBBEA6021908F80F2BF921901F92D0D931ED03586 * _thisAdjusted = reinterpret_cast<U3CConvertAsyncU3Ed__6_tBBEA6021908F80F2BF921901F92D0D931ED03586 *>(__this + _offset);
	U3CConvertAsyncU3Ed__6_SetStateMachine_mE69CA9511ADD03E9D62C603BB5E7CC3854AF2633(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Naninovel.CameraManager/GameState/CameraComponent
IL2CPP_EXTERN_C void CameraComponent_tF855104A2D2D8F69BD4C3128C3BC10A1013B7B46_marshal_pinvoke(const CameraComponent_tF855104A2D2D8F69BD4C3128C3BC10A1013B7B46& unmarshaled, CameraComponent_tF855104A2D2D8F69BD4C3128C3BC10A1013B7B46_marshaled_pinvoke& marshaled)
{
	marshaled.___TypeName_0 = il2cpp_codegen_marshal_string(unmarshaled.get_TypeName_0());
	marshaled.___Enabled_1 = static_cast<int32_t>(unmarshaled.get_Enabled_1());
}
IL2CPP_EXTERN_C void CameraComponent_tF855104A2D2D8F69BD4C3128C3BC10A1013B7B46_marshal_pinvoke_back(const CameraComponent_tF855104A2D2D8F69BD4C3128C3BC10A1013B7B46_marshaled_pinvoke& marshaled, CameraComponent_tF855104A2D2D8F69BD4C3128C3BC10A1013B7B46& unmarshaled)
{
	unmarshaled.set_TypeName_0(il2cpp_codegen_marshal_string_result(marshaled.___TypeName_0));
	bool unmarshaled_Enabled_temp_1 = false;
	unmarshaled_Enabled_temp_1 = static_cast<bool>(marshaled.___Enabled_1);
	unmarshaled.set_Enabled_1(unmarshaled_Enabled_temp_1);
}
// Conversion method for clean up from marshalling of: Naninovel.CameraManager/GameState/CameraComponent
IL2CPP_EXTERN_C void CameraComponent_tF855104A2D2D8F69BD4C3128C3BC10A1013B7B46_marshal_pinvoke_cleanup(CameraComponent_tF855104A2D2D8F69BD4C3128C3BC10A1013B7B46_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___TypeName_0);
	marshaled.___TypeName_0 = NULL;
}
// Conversion methods for marshalling of: Naninovel.CameraManager/GameState/CameraComponent
IL2CPP_EXTERN_C void CameraComponent_tF855104A2D2D8F69BD4C3128C3BC10A1013B7B46_marshal_com(const CameraComponent_tF855104A2D2D8F69BD4C3128C3BC10A1013B7B46& unmarshaled, CameraComponent_tF855104A2D2D8F69BD4C3128C3BC10A1013B7B46_marshaled_com& marshaled)
{
	marshaled.___TypeName_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_TypeName_0());
	marshaled.___Enabled_1 = static_cast<int32_t>(unmarshaled.get_Enabled_1());
}
IL2CPP_EXTERN_C void CameraComponent_tF855104A2D2D8F69BD4C3128C3BC10A1013B7B46_marshal_com_back(const CameraComponent_tF855104A2D2D8F69BD4C3128C3BC10A1013B7B46_marshaled_com& marshaled, CameraComponent_tF855104A2D2D8F69BD4C3128C3BC10A1013B7B46& unmarshaled)
{
	unmarshaled.set_TypeName_0(il2cpp_codegen_marshal_bstring_result(marshaled.___TypeName_0));
	bool unmarshaled_Enabled_temp_1 = false;
	unmarshaled_Enabled_temp_1 = static_cast<bool>(marshaled.___Enabled_1);
	unmarshaled.set_Enabled_1(unmarshaled_Enabled_temp_1);
}
// Conversion method for clean up from marshalling of: Naninovel.CameraManager/GameState/CameraComponent
IL2CPP_EXTERN_C void CameraComponent_tF855104A2D2D8F69BD4C3128C3BC10A1013B7B46_marshal_com_cleanup(CameraComponent_tF855104A2D2D8F69BD4C3128C3BC10A1013B7B46_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___TypeName_0);
	marshaled.___TypeName_0 = NULL;
}
// System.Void Naninovel.CameraManager/GameState/CameraComponent::.ctor(UnityEngine.MonoBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraComponent__ctor_m79CAA317943246D69337DC748C78AF987B9A8082 (CameraComponent_tF855104A2D2D8F69BD4C3128C3BC10A1013B7B46 * __this, MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * ___comp0, const RuntimeMethod* method)
{
	{
		// TypeName = comp.GetType().Name;
		MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * L_0 = ___comp0;
		NullCheck(L_0);
		Type_t * L_1;
		L_1 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_1);
		__this->set_TypeName_0(L_2);
		// Enabled = comp.enabled;
		MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * L_3 = ___comp0;
		NullCheck(L_3);
		bool L_4;
		L_4 = Behaviour_get_enabled_m08077AB79934634E1EAE909C2B482BEF4C15A800(L_3, /*hidden argument*/NULL);
		__this->set_Enabled_1(L_4);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void CameraComponent__ctor_m79CAA317943246D69337DC748C78AF987B9A8082_AdjustorThunk (RuntimeObject * __this, MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * ___comp0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	CameraComponent_tF855104A2D2D8F69BD4C3128C3BC10A1013B7B46 * _thisAdjusted = reinterpret_cast<CameraComponent_tF855104A2D2D8F69BD4C3128C3BC10A1013B7B46 *>(__this + _offset);
	CameraComponent__ctor_m79CAA317943246D69337DC748C78AF987B9A8082(_thisAdjusted, ___comp0, method);
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
// System.String Naninovel.ExpressionEvaluator/Functions/DocAttribute::get_Description()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DocAttribute_get_Description_m9ED0B6E20313CB7DDCE5CA5003A4D3512D9F2B52 (DocAttribute_t592DE083364B243D5AA762A700C8B1C75B6E7C3C * __this, const RuntimeMethod* method)
{
	{
		// public string Description { get; }
		String_t* L_0 = __this->get_U3CDescriptionU3Ek__BackingField_0();
		return L_0;
	}
}
// System.String Naninovel.ExpressionEvaluator/Functions/DocAttribute::get_Example()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DocAttribute_get_Example_m044CF27894B28F33BE61861E1A59C1E5D9F58597 (DocAttribute_t592DE083364B243D5AA762A700C8B1C75B6E7C3C * __this, const RuntimeMethod* method)
{
	{
		// public string Example { get; }
		String_t* L_0 = __this->get_U3CExampleU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Naninovel.ExpressionEvaluator/Functions/DocAttribute::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DocAttribute__ctor_mB7E1953F005F12ADA574B29A99248E4214977BE7 (DocAttribute_t592DE083364B243D5AA762A700C8B1C75B6E7C3C * __this, String_t* ___description0, String_t* ___example1, const RuntimeMethod* method)
{
	{
		// public DocAttribute (string description, string example = null)
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		// Description = description;
		String_t* L_0 = ___description0;
		__this->set_U3CDescriptionU3Ek__BackingField_0(L_0);
		// Example = example;
		String_t* L_1 = ___example1;
		__this->set_U3CExampleU3Ek__BackingField_1(L_1);
		// }
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
// System.Void Naninovel.RuntimeInitializer/ServiceInitData/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m70EEAC81203E5A0F778B35AFF795D6CF8D91BA4A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tE32986ABA5018840123DFE9F20D81E2BD6D0E2C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tE32986ABA5018840123DFE9F20D81E2BD6D0E2C8 * L_0 = (U3CU3Ec_tE32986ABA5018840123DFE9F20D81E2BD6D0E2C8 *)il2cpp_codegen_object_new(U3CU3Ec_tE32986ABA5018840123DFE9F20D81E2BD6D0E2C8_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m8FA897BBB4FA36822F103DABE5773FB656F2DCEB(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tE32986ABA5018840123DFE9F20D81E2BD6D0E2C8_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE32986ABA5018840123DFE9F20D81E2BD6D0E2C8_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Naninovel.RuntimeInitializer/ServiceInitData/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m8FA897BBB4FA36822F103DABE5773FB656F2DCEB (U3CU3Ec_tE32986ABA5018840123DFE9F20D81E2BD6D0E2C8 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Type Naninovel.RuntimeInitializer/ServiceInitData/<>c::<.ctor>b__3_0(System.Reflection.ParameterInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * U3CU3Ec_U3C_ctorU3Eb__3_0_mA876328FA47FC4E84BE3FD92E8757D8FB3C35C73 (U3CU3Ec_tE32986ABA5018840123DFE9F20D81E2BD6D0E2C8 * __this, ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * ___p0, const RuntimeMethod* method)
{
	{
		// CtorArgs = Type.GetConstructors().First().GetParameters().Select(p => p.ParameterType).ToArray();
		ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * L_0 = ___p0;
		NullCheck(L_0);
		Type_t * L_1;
		L_1 = VirtFuncInvoker0< Type_t * >::Invoke(7 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_0);
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
// System.Void Naninovel.ScriptPlayer/<>c__DisplayClass123_0/<<ExecutePlayedCommandAsync>g__ExecuteCommandConcurrently|0>d::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CExecutePlayedCommandAsyncU3Eg__ExecuteCommandConcurrentlyU7C0U3Ed_MoveNext_m9BE06767E63323C7D64AFAE3D841081C79E2FBC6 (U3CU3CExecutePlayedCommandAsyncU3Eg__ExecuteCommandConcurrentlyU7C0U3Ed_t402700803755E3D73E3B0DA464E7E0A389643CD2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822_TisU3CU3CExecutePlayedCommandAsyncU3Eg__ExecuteCommandConcurrentlyU7C0U3Ed_t402700803755E3D73E3B0DA464E7E0A389643CD2_mBABCC6837C534A1D934AB8952B40A9C1541C7E36_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	U3CU3Ec__DisplayClass123_0_tCBD47300FFAF1841C46E498D241EBD6528590772 * V_1 = NULL;
	Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822  V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_t41263A639210D10E03708EE0B4B03A964D7EEE3C  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		U3CU3Ec__DisplayClass123_0_tCBD47300FFAF1841C46E498D241EBD6528590772 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0059;
			}
		}

IL_0011:
		{
			// await PlayedCommand.ExecuteAsync(executionToken);
			U3CU3Ec__DisplayClass123_0_tCBD47300FFAF1841C46E498D241EBD6528590772 * L_3 = V_1;
			NullCheck(L_3);
			ScriptPlayer_tF4D08702F59ADF598506DB5CDBF38D9AF1C71D35 * L_4 = L_3->get_U3CU3E4__this_0();
			NullCheck(L_4);
			Command_tFD9CA828C60C3E7CEA51152A05F64D1ED3F98E2A * L_5;
			L_5 = VirtFuncInvoker0< Command_tFD9CA828C60C3E7CEA51152A05F64D1ED3F98E2A * >::Invoke(66 /* Naninovel.Commands.Command Naninovel.ScriptPlayer::get_PlayedCommand() */, L_4);
			U3CU3Ec__DisplayClass123_0_tCBD47300FFAF1841C46E498D241EBD6528590772 * L_6 = V_1;
			NullCheck(L_6);
			CancellationToken_t6347F75AB41E1331E57D91A3F883A02D5FA698E3  L_7 = L_6->get_executionToken_1();
			NullCheck(L_5);
			UniTask_t41263A639210D10E03708EE0B4B03A964D7EEE3C  L_8;
			L_8 = VirtFuncInvoker1< UniTask_t41263A639210D10E03708EE0B4B03A964D7EEE3C , CancellationToken_t6347F75AB41E1331E57D91A3F883A02D5FA698E3  >::Invoke(7 /* UniRx.Async.UniTask Naninovel.Commands.Command::ExecuteAsync(Naninovel.CancellationToken) */, L_5, L_7);
			V_3 = L_8;
			Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822  L_9;
			L_9 = UniTask_GetAwaiter_mD2E76ACB629099DC37BB3C99511590FA9B227272((UniTask_t41263A639210D10E03708EE0B4B03A964D7EEE3C *)(&V_3), /*hidden argument*/NULL);
			V_2 = L_9;
			bool L_10;
			L_10 = Awaiter_get_IsCompleted_m0F67C2C63E4AD6E47A126AA69B8A98E0770F096C((Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822 *)(&V_2), /*hidden argument*/NULL);
			if (L_10)
			{
				goto IL_0075;
			}
		}

IL_0039:
		{
			int32_t L_11 = 0;
			V_0 = L_11;
			__this->set_U3CU3E1__state_0(L_11);
			Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822  L_12 = V_2;
			__this->set_U3CU3Eu__1_3(L_12);
			AsyncUniTaskVoidMethodBuilder_t0F142C0A47AC5AC99C2722FCC38BC01C73F8631E * L_13 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncUniTaskVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822_TisU3CU3CExecutePlayedCommandAsyncU3Eg__ExecuteCommandConcurrentlyU7C0U3Ed_t402700803755E3D73E3B0DA464E7E0A389643CD2_mBABCC6837C534A1D934AB8952B40A9C1541C7E36((AsyncUniTaskVoidMethodBuilder_t0F142C0A47AC5AC99C2722FCC38BC01C73F8631E *)L_13, (Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822 *)(&V_2), (U3CU3CExecutePlayedCommandAsyncU3Eg__ExecuteCommandConcurrentlyU7C0U3Ed_t402700803755E3D73E3B0DA464E7E0A389643CD2 *)__this, /*hidden argument*/AsyncUniTaskVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822_TisU3CU3CExecutePlayedCommandAsyncU3Eg__ExecuteCommandConcurrentlyU7C0U3Ed_t402700803755E3D73E3B0DA464E7E0A389643CD2_mBABCC6837C534A1D934AB8952B40A9C1541C7E36_RuntimeMethod_var);
			goto IL_00c2;
		}

IL_0059:
		{
			Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822  L_14 = __this->get_U3CU3Eu__1_3();
			V_2 = L_14;
			Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822 * L_15 = __this->get_address_of_U3CU3Eu__1_3();
			il2cpp_codegen_initobj(L_15, sizeof(Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822 ));
			int32_t L_16 = (-1);
			V_0 = L_16;
			__this->set_U3CU3E1__state_0(L_16);
		}

IL_0075:
		{
			Awaiter_GetResult_m3EFD26ADCEFA37F3B4EE99CD8BE65F51405CFEF3((Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822 *)(&V_2), /*hidden argument*/NULL);
			// executedCommandsCount--;
			U3CU3Ec__DisplayClass123_0_tCBD47300FFAF1841C46E498D241EBD6528590772 * L_17 = V_1;
			NullCheck(L_17);
			ScriptPlayer_tF4D08702F59ADF598506DB5CDBF38D9AF1C71D35 * L_18 = L_17->get_U3CU3E4__this_0();
			U3CU3Ec__DisplayClass123_0_tCBD47300FFAF1841C46E498D241EBD6528590772 * L_19 = V_1;
			NullCheck(L_19);
			ScriptPlayer_tF4D08702F59ADF598506DB5CDBF38D9AF1C71D35 * L_20 = L_19->get_U3CU3E4__this_0();
			NullCheck(L_20);
			int32_t L_21 = L_20->get_executedCommandsCount_23();
			NullCheck(L_18);
			L_18->set_executedCommandsCount_23(((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)1)));
			goto IL_00af;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0096;
		}
		throw e;
	}

CATCH_0096:
	{ // begin catch(System.Exception)
		V_4 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncUniTaskVoidMethodBuilder_t0F142C0A47AC5AC99C2722FCC38BC01C73F8631E * L_22 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_23 = V_4;
		AsyncUniTaskVoidMethodBuilder_SetException_m8F5AB7FDDF95B9843BB4A12BF64ADAA3D149CF58((AsyncUniTaskVoidMethodBuilder_t0F142C0A47AC5AC99C2722FCC38BC01C73F8631E *)L_22, L_23, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00c2;
	} // end catch (depth: 1)

IL_00af:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncUniTaskVoidMethodBuilder_t0F142C0A47AC5AC99C2722FCC38BC01C73F8631E * L_24 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncUniTaskVoidMethodBuilder_SetResult_m66B1483798E2C36EBE6D55337D12235B1C02A5C1((AsyncUniTaskVoidMethodBuilder_t0F142C0A47AC5AC99C2722FCC38BC01C73F8631E *)L_24, /*hidden argument*/NULL);
	}

IL_00c2:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CU3CExecutePlayedCommandAsyncU3Eg__ExecuteCommandConcurrentlyU7C0U3Ed_MoveNext_m9BE06767E63323C7D64AFAE3D841081C79E2FBC6_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CU3CExecutePlayedCommandAsyncU3Eg__ExecuteCommandConcurrentlyU7C0U3Ed_t402700803755E3D73E3B0DA464E7E0A389643CD2 * _thisAdjusted = reinterpret_cast<U3CU3CExecutePlayedCommandAsyncU3Eg__ExecuteCommandConcurrentlyU7C0U3Ed_t402700803755E3D73E3B0DA464E7E0A389643CD2 *>(__this + _offset);
	U3CU3CExecutePlayedCommandAsyncU3Eg__ExecuteCommandConcurrentlyU7C0U3Ed_MoveNext_m9BE06767E63323C7D64AFAE3D841081C79E2FBC6(_thisAdjusted, method);
}
// System.Void Naninovel.ScriptPlayer/<>c__DisplayClass123_0/<<ExecutePlayedCommandAsync>g__ExecuteCommandConcurrently|0>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CExecutePlayedCommandAsyncU3Eg__ExecuteCommandConcurrentlyU7C0U3Ed_SetStateMachine_m883F5E6B790067349F89368FBA22A0952B565075 (U3CU3CExecutePlayedCommandAsyncU3Eg__ExecuteCommandConcurrentlyU7C0U3Ed_t402700803755E3D73E3B0DA464E7E0A389643CD2 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncUniTaskVoidMethodBuilder_t0F142C0A47AC5AC99C2722FCC38BC01C73F8631E * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncUniTaskVoidMethodBuilder_SetStateMachine_m67093B1F5FC7D5BFCE0B2B7C94BBF8E3B7110DF8((AsyncUniTaskVoidMethodBuilder_t0F142C0A47AC5AC99C2722FCC38BC01C73F8631E *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CU3CExecutePlayedCommandAsyncU3Eg__ExecuteCommandConcurrentlyU7C0U3Ed_SetStateMachine_m883F5E6B790067349F89368FBA22A0952B565075_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CU3CExecutePlayedCommandAsyncU3Eg__ExecuteCommandConcurrentlyU7C0U3Ed_t402700803755E3D73E3B0DA464E7E0A389643CD2 * _thisAdjusted = reinterpret_cast<U3CU3CExecutePlayedCommandAsyncU3Eg__ExecuteCommandConcurrentlyU7C0U3Ed_t402700803755E3D73E3B0DA464E7E0A389643CD2 *>(__this + _offset);
	U3CU3CExecutePlayedCommandAsyncU3Eg__ExecuteCommandConcurrentlyU7C0U3Ed_SetStateMachine_m883F5E6B790067349F89368FBA22A0952B565075(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Naninovel.StateManager/<>c__DisplayClass69_0/<<SaveGameAsync>g__DoSaveAfterSync|0>d::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CSaveGameAsyncU3Eg__DoSaveAfterSyncU7C0U3Ed_MoveNext_mF0115337B9D7E98990B97039906E20ED9E70D65E (U3CU3CSaveGameAsyncU3Eg__DoSaveAfterSyncU7C0U3Ed_tA5BCD95B422F51D7E49E973DC5FD62AE652C238C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m7F8CED30AC2A215F6DAD6B771160C27BD4943256_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t2A04123A9B29D02DBE393CFF44AD80850561C5C0_TisU3CU3CSaveGameAsyncU3Eg__DoSaveAfterSyncU7C0U3Ed_tA5BCD95B422F51D7E49E973DC5FD62AE652C238C_m8EC5B18A38EA6C7F306112FE8BB9FA31D61F4FF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822_TisU3CU3CSaveGameAsyncU3Eg__DoSaveAfterSyncU7C0U3Ed_tA5BCD95B422F51D7E49E973DC5FD62AE652C238C_mF125A7865B282154F64D3FFF9A5769B60BCD8525_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_mB36B4F5D534DDA815C01A7BE87F4B29006458C00_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m2AD507538A44DA52F98CC6B97C5F2B4374EAEB76_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_FirstOrDefault_TisGameStateMap_tA4788218B9D1B130D00F9C346FF9FD21E01ED52D_m904BF0AC4CC35253914465B01C79BEB90B3F1FC3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_m057C2AF974DB7F0A19178AFF8DC08B6FD65FBD4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tC98365FCD009A19906148DAE6D31E499FA04C5FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICameraManager_t8E9FE05B572058A48089E953E1B7BF7716FB86D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISaveSlotManager_1_tB6ADEA4DD8F97AB3DC3B66F1EC0377CBA65AD7F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m2E2A250A83CC82DC2173B5626363BEE76FDA8BD7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1836BF6751EF7F99771A8E7A4855E8AF5F8DA9FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1__ctor_m61E36F14143FA43EFFCC61FA4DEC46A3C0EA92EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_tBB645330290CE4865319EB67E4201373C3FDDE20_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StateManager_SaveAllServicesToState_TisIStatefulService_1_t3AAEC31DD1B6FD861EEBAAD78C0F5FC0050D23A5_TisGameStateMap_tA4788218B9D1B130D00F9C346FF9FD21E01ED52D_mA5D94397DEA305415819A7E32ED0917DD74A94BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CSaveGameAsyncU3Eb__69_1_m475CF44ACBB32A07DAB10A30B40FFD9F70C53DF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass69_1_U3CSaveGameAsyncU3Eg__SelectSerializedSnapshotsU7C2_mF5B4752FCC06B8E08C08D54603B4068116843555_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass69_1_tFFADCFEF5824A513F6E1827C950CCC7516B5A64D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t49A79975B120E933F36505C9E29BE6ABF615EECC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m63808C842E705B02AEC3088A7A3CE08D2DA74264_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	U3CU3Ec__DisplayClass69_0_t7494ACB5178966BE314D67BD10A4A4DE4C2CA5FD * V_1 = NULL;
	int32_t V_2 = 0;
	U3CU3Ec__DisplayClass69_1_tFFADCFEF5824A513F6E1827C950CCC7516B5A64D * V_3 = NULL;
	Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822  V_4;
	memset((&V_4), 0, sizeof(V_4));
	UniTask_t41263A639210D10E03708EE0B4B03A964D7EEE3C  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Awaiter_t2A04123A9B29D02DBE393CFF44AD80850561C5C0  V_6;
	memset((&V_6), 0, sizeof(V_6));
	UniTask_1_t492CDA3ADD676CAA0B8B193F8AB7CDD8F54BF5F5  V_7;
	memset((&V_7), 0, sizeof(V_7));
	Exception_t * V_8 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	Func_2_tC98365FCD009A19906148DAE6D31E499FA04C5FF * G_B9_0 = NULL;
	StateRollbackStack_tC11A46F845DB5187448E4790E845A78AB0643B23 * G_B9_1 = NULL;
	U3CU3Ec__DisplayClass69_1_tFFADCFEF5824A513F6E1827C950CCC7516B5A64D * G_B9_2 = NULL;
	Func_2_tC98365FCD009A19906148DAE6D31E499FA04C5FF * G_B8_0 = NULL;
	StateRollbackStack_tC11A46F845DB5187448E4790E845A78AB0643B23 * G_B8_1 = NULL;
	U3CU3Ec__DisplayClass69_1_tFFADCFEF5824A513F6E1827C950CCC7516B5A64D * G_B8_2 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		U3CU3Ec__DisplayClass69_0_t7494ACB5178966BE314D67BD10A4A4DE4C2CA5FD * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0163;
			}
		}

IL_0014:
		{
			int32_t L_3 = V_0;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_01c7;
			}
		}

IL_001b:
		{
			// state.SaveDateTime = DateTime.Now;
			U3CU3Ec__DisplayClass69_0_t7494ACB5178966BE314D67BD10A4A4DE4C2CA5FD * L_4 = V_1;
			NullCheck(L_4);
			GameStateMap_tA4788218B9D1B130D00F9C346FF9FD21E01ED52D * L_5 = L_4->get_state_0();
			IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
			DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_6;
			L_6 = DateTime_get_Now_mCAC695993D6E2C57B900C83BEF3F8B18BC4EBC2C(/*hidden argument*/NULL);
			NullCheck(L_5);
			GameStateMap_set_SaveDateTime_m15639D6A3AA10DCA2CCD71EABF70BC6F54E8CE15_inline(L_5, L_6, /*hidden argument*/NULL);
			// state.Thumbnail = cameraManager.CaptureThumbnail();
			U3CU3Ec__DisplayClass69_0_t7494ACB5178966BE314D67BD10A4A4DE4C2CA5FD * L_7 = V_1;
			NullCheck(L_7);
			GameStateMap_tA4788218B9D1B130D00F9C346FF9FD21E01ED52D * L_8 = L_7->get_state_0();
			U3CU3Ec__DisplayClass69_0_t7494ACB5178966BE314D67BD10A4A4DE4C2CA5FD * L_9 = V_1;
			NullCheck(L_9);
			StateManager_tF3B8735DA8F4E19A6A6C0D25270A8286C878D5A1 * L_10 = L_9->get_U3CU3E4__this_1();
			NullCheck(L_10);
			RuntimeObject* L_11 = L_10->get_cameraManager_20();
			NullCheck(L_11);
			Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_12;
			L_12 = InterfaceFuncInvoker0< Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * >::Invoke(20 /* UnityEngine.Texture2D Naninovel.ICameraManager::CaptureThumbnail() */, ICameraManager_t8E9FE05B572058A48089E953E1B7BF7716FB86D5_il2cpp_TypeInfo_var, L_11);
			NullCheck(L_8);
			GameStateMap_set_Thumbnail_m5FFCC8F23CB86F84A4D7F939B9B051EEECFE19FE_inline(L_8, L_12, /*hidden argument*/NULL);
			// SaveAllServicesToState<IStatefulService<GameStateMap>, GameStateMap>(state);
			U3CU3Ec__DisplayClass69_0_t7494ACB5178966BE314D67BD10A4A4DE4C2CA5FD * L_13 = V_1;
			NullCheck(L_13);
			StateManager_tF3B8735DA8F4E19A6A6C0D25270A8286C878D5A1 * L_14 = L_13->get_U3CU3E4__this_1();
			U3CU3Ec__DisplayClass69_0_t7494ACB5178966BE314D67BD10A4A4DE4C2CA5FD * L_15 = V_1;
			NullCheck(L_15);
			GameStateMap_tA4788218B9D1B130D00F9C346FF9FD21E01ED52D * L_16 = L_15->get_state_0();
			NullCheck(L_14);
			StateManager_SaveAllServicesToState_TisIStatefulService_1_t3AAEC31DD1B6FD861EEBAAD78C0F5FC0050D23A5_TisGameStateMap_tA4788218B9D1B130D00F9C346FF9FD21E01ED52D_mA5D94397DEA305415819A7E32ED0917DD74A94BD(L_14, L_16, /*hidden argument*/StateManager_SaveAllServicesToState_TisIStatefulService_1_t3AAEC31DD1B6FD861EEBAAD78C0F5FC0050D23A5_TisGameStateMap_tA4788218B9D1B130D00F9C346FF9FD21E01ED52D_mA5D94397DEA305415819A7E32ED0917DD74A94BD_RuntimeMethod_var);
			// for (int i = onGameSerializeTasks.Count - 1; i >= 0; i--)
			U3CU3Ec__DisplayClass69_0_t7494ACB5178966BE314D67BD10A4A4DE4C2CA5FD * L_17 = V_1;
			NullCheck(L_17);
			StateManager_tF3B8735DA8F4E19A6A6C0D25270A8286C878D5A1 * L_18 = L_17->get_U3CU3E4__this_1();
			NullCheck(L_18);
			List_1_t5D3DE8A6E866EFBBE267E1025ED889B2EB78D393 * L_19 = L_18->get_onGameSerializeTasks_16();
			NullCheck(L_19);
			int32_t L_20;
			L_20 = List_1_get_Count_m2E2A250A83CC82DC2173B5626363BEE76FDA8BD7_inline(L_19, /*hidden argument*/List_1_get_Count_m2E2A250A83CC82DC2173B5626363BEE76FDA8BD7_RuntimeMethod_var);
			V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_20, (int32_t)1));
			goto IL_008c;
		}

IL_006c:
		{
			// onGameSerializeTasks[i](state);
			U3CU3Ec__DisplayClass69_0_t7494ACB5178966BE314D67BD10A4A4DE4C2CA5FD * L_21 = V_1;
			NullCheck(L_21);
			StateManager_tF3B8735DA8F4E19A6A6C0D25270A8286C878D5A1 * L_22 = L_21->get_U3CU3E4__this_1();
			NullCheck(L_22);
			List_1_t5D3DE8A6E866EFBBE267E1025ED889B2EB78D393 * L_23 = L_22->get_onGameSerializeTasks_16();
			int32_t L_24 = V_2;
			NullCheck(L_23);
			Action_1_tE7DBC7D799F1973CA1C99095A5E2322E45FDAE6C * L_25;
			L_25 = List_1_get_Item_m1836BF6751EF7F99771A8E7A4855E8AF5F8DA9FC_inline(L_23, L_24, /*hidden argument*/List_1_get_Item_m1836BF6751EF7F99771A8E7A4855E8AF5F8DA9FC_RuntimeMethod_var);
			U3CU3Ec__DisplayClass69_0_t7494ACB5178966BE314D67BD10A4A4DE4C2CA5FD * L_26 = V_1;
			NullCheck(L_26);
			GameStateMap_tA4788218B9D1B130D00F9C346FF9FD21E01ED52D * L_27 = L_26->get_state_0();
			NullCheck(L_25);
			Action_1_Invoke_m7F8CED30AC2A215F6DAD6B771160C27BD4943256(L_25, L_27, /*hidden argument*/Action_1_Invoke_m7F8CED30AC2A215F6DAD6B771160C27BD4943256_RuntimeMethod_var);
			// for (int i = onGameSerializeTasks.Count - 1; i >= 0; i--)
			int32_t L_28 = V_2;
			V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_28, (int32_t)1));
		}

IL_008c:
		{
			// for (int i = onGameSerializeTasks.Count - 1; i >= 0; i--)
			int32_t L_29 = V_2;
			if ((((int32_t)L_29) >= ((int32_t)0)))
			{
				goto IL_006c;
			}
		}

IL_0090:
		{
			// if (RollbackStack != null)
			U3CU3Ec__DisplayClass69_0_t7494ACB5178966BE314D67BD10A4A4DE4C2CA5FD * L_30 = V_1;
			NullCheck(L_30);
			StateManager_tF3B8735DA8F4E19A6A6C0D25270A8286C878D5A1 * L_31 = L_30->get_U3CU3E4__this_1();
			NullCheck(L_31);
			StateRollbackStack_tC11A46F845DB5187448E4790E845A78AB0643B23 * L_32;
			L_32 = VirtFuncInvoker0< StateRollbackStack_tC11A46F845DB5187448E4790E845A78AB0643B23 * >::Invoke(61 /* Naninovel.StateRollbackStack Naninovel.StateManager::get_RollbackStack() */, L_31);
			if (!L_32)
			{
				goto IL_010f;
			}
		}

IL_009d:
		{
			U3CU3Ec__DisplayClass69_1_tFFADCFEF5824A513F6E1827C950CCC7516B5A64D * L_33 = (U3CU3Ec__DisplayClass69_1_tFFADCFEF5824A513F6E1827C950CCC7516B5A64D *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass69_1_tFFADCFEF5824A513F6E1827C950CCC7516B5A64D_il2cpp_TypeInfo_var);
			U3CU3Ec__DisplayClass69_1__ctor_mB6DC32D78BB94A81005DE44659169030E71424FE(L_33, /*hidden argument*/NULL);
			V_3 = L_33;
			// var nearestStartLineSpot = RollbackStack.FirstOrDefault(s => s.PlaybackSpot.InlineIndex == 0);
			U3CU3Ec__DisplayClass69_1_tFFADCFEF5824A513F6E1827C950CCC7516B5A64D * L_34 = V_3;
			U3CU3Ec__DisplayClass69_0_t7494ACB5178966BE314D67BD10A4A4DE4C2CA5FD * L_35 = V_1;
			NullCheck(L_35);
			StateManager_tF3B8735DA8F4E19A6A6C0D25270A8286C878D5A1 * L_36 = L_35->get_U3CU3E4__this_1();
			NullCheck(L_36);
			StateRollbackStack_tC11A46F845DB5187448E4790E845A78AB0643B23 * L_37;
			L_37 = VirtFuncInvoker0< StateRollbackStack_tC11A46F845DB5187448E4790E845A78AB0643B23 * >::Invoke(61 /* Naninovel.StateRollbackStack Naninovel.StateManager::get_RollbackStack() */, L_36);
			IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t49A79975B120E933F36505C9E29BE6ABF615EECC_il2cpp_TypeInfo_var);
			Func_2_tC98365FCD009A19906148DAE6D31E499FA04C5FF * L_38 = ((U3CU3Ec_t49A79975B120E933F36505C9E29BE6ABF615EECC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t49A79975B120E933F36505C9E29BE6ABF615EECC_il2cpp_TypeInfo_var))->get_U3CU3E9__69_1_1();
			Func_2_tC98365FCD009A19906148DAE6D31E499FA04C5FF * L_39 = L_38;
			G_B8_0 = L_39;
			G_B8_1 = L_37;
			G_B8_2 = L_34;
			if (L_39)
			{
				G_B9_0 = L_39;
				G_B9_1 = L_37;
				G_B9_2 = L_34;
				goto IL_00ce;
			}
		}

IL_00b7:
		{
			IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t49A79975B120E933F36505C9E29BE6ABF615EECC_il2cpp_TypeInfo_var);
			U3CU3Ec_t49A79975B120E933F36505C9E29BE6ABF615EECC * L_40 = ((U3CU3Ec_t49A79975B120E933F36505C9E29BE6ABF615EECC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t49A79975B120E933F36505C9E29BE6ABF615EECC_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
			Func_2_tC98365FCD009A19906148DAE6D31E499FA04C5FF * L_41 = (Func_2_tC98365FCD009A19906148DAE6D31E499FA04C5FF *)il2cpp_codegen_object_new(Func_2_tC98365FCD009A19906148DAE6D31E499FA04C5FF_il2cpp_TypeInfo_var);
			Func_2__ctor_m057C2AF974DB7F0A19178AFF8DC08B6FD65FBD4A(L_41, L_40, (intptr_t)((intptr_t)U3CU3Ec_U3CSaveGameAsyncU3Eb__69_1_m475CF44ACBB32A07DAB10A30B40FFD9F70C53DF7_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m057C2AF974DB7F0A19178AFF8DC08B6FD65FBD4A_RuntimeMethod_var);
			Func_2_tC98365FCD009A19906148DAE6D31E499FA04C5FF * L_42 = L_41;
			((U3CU3Ec_t49A79975B120E933F36505C9E29BE6ABF615EECC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t49A79975B120E933F36505C9E29BE6ABF615EECC_il2cpp_TypeInfo_var))->set_U3CU3E9__69_1_1(L_42);
			G_B9_0 = L_42;
			G_B9_1 = G_B8_1;
			G_B9_2 = G_B8_2;
		}

IL_00ce:
		{
			GameStateMap_tA4788218B9D1B130D00F9C346FF9FD21E01ED52D * L_43;
			L_43 = Enumerable_FirstOrDefault_TisGameStateMap_tA4788218B9D1B130D00F9C346FF9FD21E01ED52D_m904BF0AC4CC35253914465B01C79BEB90B3F1FC3(G_B9_1, G_B9_0, /*hidden argument*/Enumerable_FirstOrDefault_TisGameStateMap_tA4788218B9D1B130D00F9C346FF9FD21E01ED52D_m904BF0AC4CC35253914465B01C79BEB90B3F1FC3_RuntimeMethod_var);
			NullCheck(G_B9_2);
			G_B9_2->set_nearestStartLineSpot_0(L_43);
			// state.RollbackStackJson = RollbackStack.ToJson(Configuration.SavedRollbackSteps, SelectSerializedSnapshots);
			U3CU3Ec__DisplayClass69_0_t7494ACB5178966BE314D67BD10A4A4DE4C2CA5FD * L_44 = V_1;
			NullCheck(L_44);
			GameStateMap_tA4788218B9D1B130D00F9C346FF9FD21E01ED52D * L_45 = L_44->get_state_0();
			U3CU3Ec__DisplayClass69_0_t7494ACB5178966BE314D67BD10A4A4DE4C2CA5FD * L_46 = V_1;
			NullCheck(L_46);
			StateManager_tF3B8735DA8F4E19A6A6C0D25270A8286C878D5A1 * L_47 = L_46->get_U3CU3E4__this_1();
			NullCheck(L_47);
			StateRollbackStack_tC11A46F845DB5187448E4790E845A78AB0643B23 * L_48;
			L_48 = VirtFuncInvoker0< StateRollbackStack_tC11A46F845DB5187448E4790E845A78AB0643B23 * >::Invoke(61 /* Naninovel.StateRollbackStack Naninovel.StateManager::get_RollbackStack() */, L_47);
			U3CU3Ec__DisplayClass69_0_t7494ACB5178966BE314D67BD10A4A4DE4C2CA5FD * L_49 = V_1;
			NullCheck(L_49);
			StateManager_tF3B8735DA8F4E19A6A6C0D25270A8286C878D5A1 * L_50 = L_49->get_U3CU3E4__this_1();
			NullCheck(L_50);
			StateConfiguration_tA1BFEBE81E1006B6AF706146B3821110BF45465C * L_51;
			L_51 = VirtFuncInvoker0< StateConfiguration_tA1BFEBE81E1006B6AF706146B3821110BF45465C * >::Invoke(51 /* Naninovel.StateConfiguration Naninovel.StateManager::get_Configuration() */, L_50);
			NullCheck(L_51);
			int32_t L_52 = L_51->get_SavedRollbackSteps_16();
			U3CU3Ec__DisplayClass69_1_tFFADCFEF5824A513F6E1827C950CCC7516B5A64D * L_53 = V_3;
			Predicate_1_tBB645330290CE4865319EB67E4201373C3FDDE20 * L_54 = (Predicate_1_tBB645330290CE4865319EB67E4201373C3FDDE20 *)il2cpp_codegen_object_new(Predicate_1_tBB645330290CE4865319EB67E4201373C3FDDE20_il2cpp_TypeInfo_var);
			Predicate_1__ctor_m61E36F14143FA43EFFCC61FA4DEC46A3C0EA92EB(L_54, L_53, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass69_1_U3CSaveGameAsyncU3Eg__SelectSerializedSnapshotsU7C2_mF5B4752FCC06B8E08C08D54603B4068116843555_RuntimeMethod_var), /*hidden argument*/Predicate_1__ctor_m61E36F14143FA43EFFCC61FA4DEC46A3C0EA92EB_RuntimeMethod_var);
			NullCheck(L_48);
			String_t* L_55;
			L_55 = StateRollbackStack_ToJson_mB90B15760A5F26AE67680E0531127D8E2BB13391(L_48, L_52, L_54, /*hidden argument*/NULL);
			NullCheck(L_45);
			GameStateMap_set_RollbackStackJson_m6A705049EE36F62B7BF967E9C6D2487632BE1642_inline(L_45, L_55, /*hidden argument*/NULL);
		}

IL_010f:
		{
			// await GameStateSlotManager.SaveAsync(slotId, state);
			U3CU3Ec__DisplayClass69_0_t7494ACB5178966BE314D67BD10A4A4DE4C2CA5FD * L_56 = V_1;
			NullCheck(L_56);
			StateManager_tF3B8735DA8F4E19A6A6C0D25270A8286C878D5A1 * L_57 = L_56->get_U3CU3E4__this_1();
			NullCheck(L_57);
			RuntimeObject* L_58;
			L_58 = VirtFuncInvoker0< RuntimeObject* >::Invoke(55 /* Naninovel.ISaveSlotManager`1<Naninovel.GameStateMap> Naninovel.StateManager::get_GameStateSlotManager() */, L_57);
			U3CU3Ec__DisplayClass69_0_t7494ACB5178966BE314D67BD10A4A4DE4C2CA5FD * L_59 = V_1;
			NullCheck(L_59);
			String_t* L_60 = L_59->get_slotId_2();
			U3CU3Ec__DisplayClass69_0_t7494ACB5178966BE314D67BD10A4A4DE4C2CA5FD * L_61 = V_1;
			NullCheck(L_61);
			GameStateMap_tA4788218B9D1B130D00F9C346FF9FD21E01ED52D * L_62 = L_61->get_state_0();
			NullCheck(L_58);
			UniTask_t41263A639210D10E03708EE0B4B03A964D7EEE3C  L_63;
			L_63 = InterfaceFuncInvoker2< UniTask_t41263A639210D10E03708EE0B4B03A964D7EEE3C , String_t*, GameStateMap_tA4788218B9D1B130D00F9C346FF9FD21E01ED52D * >::Invoke(0 /* UniRx.Async.UniTask Naninovel.ISaveSlotManager`1<Naninovel.GameStateMap>::SaveAsync(System.String,TData) */, ISaveSlotManager_1_tB6ADEA4DD8F97AB3DC3B66F1EC0377CBA65AD7F4_il2cpp_TypeInfo_var, L_58, L_60, L_62);
			V_5 = L_63;
			Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822  L_64;
			L_64 = UniTask_GetAwaiter_mD2E76ACB629099DC37BB3C99511590FA9B227272((UniTask_t41263A639210D10E03708EE0B4B03A964D7EEE3C *)(&V_5), /*hidden argument*/NULL);
			V_4 = L_64;
			bool L_65;
			L_65 = Awaiter_get_IsCompleted_m0F67C2C63E4AD6E47A126AA69B8A98E0770F096C((Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822 *)(&V_4), /*hidden argument*/NULL);
			if (L_65)
			{
				goto IL_0180;
			}
		}

IL_013f:
		{
			int32_t L_66 = 0;
			V_0 = L_66;
			__this->set_U3CU3E1__state_0(L_66);
			Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822  L_67 = V_4;
			__this->set_U3CU3Eu__1_3(L_67);
			AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 * L_68 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822_TisU3CU3CSaveGameAsyncU3Eg__DoSaveAfterSyncU7C0U3Ed_tA5BCD95B422F51D7E49E973DC5FD62AE652C238C_mF125A7865B282154F64D3FFF9A5769B60BCD8525((AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 *)L_68, (Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822 *)(&V_4), (U3CU3CSaveGameAsyncU3Eg__DoSaveAfterSyncU7C0U3Ed_tA5BCD95B422F51D7E49E973DC5FD62AE652C238C *)__this, /*hidden argument*/AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822_TisU3CU3CSaveGameAsyncU3Eg__DoSaveAfterSyncU7C0U3Ed_tA5BCD95B422F51D7E49E973DC5FD62AE652C238C_mF125A7865B282154F64D3FFF9A5769B60BCD8525_RuntimeMethod_var);
			goto IL_021a;
		}

IL_0163:
		{
			Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822  L_69 = __this->get_U3CU3Eu__1_3();
			V_4 = L_69;
			Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822 * L_70 = __this->get_address_of_U3CU3Eu__1_3();
			il2cpp_codegen_initobj(L_70, sizeof(Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822 ));
			int32_t L_71 = (-1);
			V_0 = L_71;
			__this->set_U3CU3E1__state_0(L_71);
		}

IL_0180:
		{
			Awaiter_GetResult_m3EFD26ADCEFA37F3B4EE99CD8BE65F51405CFEF3((Awaiter_tBFC823E4C503F45FD42A7F84190E647C8650E822 *)(&V_4), /*hidden argument*/NULL);
			// await SaveGlobalStateAsync();
			U3CU3Ec__DisplayClass69_0_t7494ACB5178966BE314D67BD10A4A4DE4C2CA5FD * L_72 = V_1;
			NullCheck(L_72);
			StateManager_tF3B8735DA8F4E19A6A6C0D25270A8286C878D5A1 * L_73 = L_72->get_U3CU3E4__this_1();
			NullCheck(L_73);
			UniTask_1_t492CDA3ADD676CAA0B8B193F8AB7CDD8F54BF5F5  L_74;
			L_74 = VirtFuncInvoker0< UniTask_1_t492CDA3ADD676CAA0B8B193F8AB7CDD8F54BF5F5  >::Invoke(73 /* UniRx.Async.UniTask`1<Naninovel.GlobalStateMap> Naninovel.StateManager::SaveGlobalStateAsync() */, L_73);
			V_7 = L_74;
			Awaiter_t2A04123A9B29D02DBE393CFF44AD80850561C5C0  L_75;
			L_75 = UniTask_1_GetAwaiter_m63808C842E705B02AEC3088A7A3CE08D2DA74264((UniTask_1_t492CDA3ADD676CAA0B8B193F8AB7CDD8F54BF5F5 *)(&V_7), /*hidden argument*/UniTask_1_GetAwaiter_m63808C842E705B02AEC3088A7A3CE08D2DA74264_RuntimeMethod_var);
			V_6 = L_75;
			bool L_76;
			L_76 = Awaiter_get_IsCompleted_m2AD507538A44DA52F98CC6B97C5F2B4374EAEB76((Awaiter_t2A04123A9B29D02DBE393CFF44AD80850561C5C0 *)(&V_6), /*hidden argument*/Awaiter_get_IsCompleted_m2AD507538A44DA52F98CC6B97C5F2B4374EAEB76_RuntimeMethod_var);
			if (L_76)
			{
				goto IL_01e4;
			}
		}

IL_01a6:
		{
			int32_t L_77 = 1;
			V_0 = L_77;
			__this->set_U3CU3E1__state_0(L_77);
			Awaiter_t2A04123A9B29D02DBE393CFF44AD80850561C5C0  L_78 = V_6;
			__this->set_U3CU3Eu__2_4(L_78);
			AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 * L_79 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t2A04123A9B29D02DBE393CFF44AD80850561C5C0_TisU3CU3CSaveGameAsyncU3Eg__DoSaveAfterSyncU7C0U3Ed_tA5BCD95B422F51D7E49E973DC5FD62AE652C238C_m8EC5B18A38EA6C7F306112FE8BB9FA31D61F4FF6((AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 *)L_79, (Awaiter_t2A04123A9B29D02DBE393CFF44AD80850561C5C0 *)(&V_6), (U3CU3CSaveGameAsyncU3Eg__DoSaveAfterSyncU7C0U3Ed_tA5BCD95B422F51D7E49E973DC5FD62AE652C238C *)__this, /*hidden argument*/AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_t2A04123A9B29D02DBE393CFF44AD80850561C5C0_TisU3CU3CSaveGameAsyncU3Eg__DoSaveAfterSyncU7C0U3Ed_tA5BCD95B422F51D7E49E973DC5FD62AE652C238C_m8EC5B18A38EA6C7F306112FE8BB9FA31D61F4FF6_RuntimeMethod_var);
			goto IL_021a;
		}

IL_01c7:
		{
			Awaiter_t2A04123A9B29D02DBE393CFF44AD80850561C5C0  L_80 = __this->get_U3CU3Eu__2_4();
			V_6 = L_80;
			Awaiter_t2A04123A9B29D02DBE393CFF44AD80850561C5C0 * L_81 = __this->get_address_of_U3CU3Eu__2_4();
			il2cpp_codegen_initobj(L_81, sizeof(Awaiter_t2A04123A9B29D02DBE393CFF44AD80850561C5C0 ));
			int32_t L_82 = (-1);
			V_0 = L_82;
			__this->set_U3CU3E1__state_0(L_82);
		}

IL_01e4:
		{
			GlobalStateMap_t30FDDE19DD3F6E3C8EE56F95DA28DAAFEE9DF0D5 * L_83;
			L_83 = Awaiter_GetResult_mB36B4F5D534DDA815C01A7BE87F4B29006458C00((Awaiter_t2A04123A9B29D02DBE393CFF44AD80850561C5C0 *)(&V_6), /*hidden argument*/Awaiter_GetResult_mB36B4F5D534DDA815C01A7BE87F4B29006458C00_RuntimeMethod_var);
			goto IL_0207;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01ee;
		}
		throw e;
	}

CATCH_01ee:
	{ // begin catch(System.Exception)
		V_8 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 * L_84 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_85 = V_8;
		AsyncUniTaskMethodBuilder_SetException_mD97347DB2613C31645BBBE97F83717D3F225A84D((AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 *)L_84, L_85, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_021a;
	} // end catch (depth: 1)

IL_0207:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 * L_86 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncUniTaskMethodBuilder_SetResult_mEB0C04A892C51268180DED2647936AA6DE8BA80D((AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 *)L_86, /*hidden argument*/NULL);
	}

IL_021a:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CU3CSaveGameAsyncU3Eg__DoSaveAfterSyncU7C0U3Ed_MoveNext_mF0115337B9D7E98990B97039906E20ED9E70D65E_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CU3CSaveGameAsyncU3Eg__DoSaveAfterSyncU7C0U3Ed_tA5BCD95B422F51D7E49E973DC5FD62AE652C238C * _thisAdjusted = reinterpret_cast<U3CU3CSaveGameAsyncU3Eg__DoSaveAfterSyncU7C0U3Ed_tA5BCD95B422F51D7E49E973DC5FD62AE652C238C *>(__this + _offset);
	U3CU3CSaveGameAsyncU3Eg__DoSaveAfterSyncU7C0U3Ed_MoveNext_mF0115337B9D7E98990B97039906E20ED9E70D65E(_thisAdjusted, method);
}
// System.Void Naninovel.StateManager/<>c__DisplayClass69_0/<<SaveGameAsync>g__DoSaveAfterSync|0>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CSaveGameAsyncU3Eg__DoSaveAfterSyncU7C0U3Ed_SetStateMachine_m9A975D10028501E2A6611F03F01777CA51DB4F0D (U3CU3CSaveGameAsyncU3Eg__DoSaveAfterSyncU7C0U3Ed_tA5BCD95B422F51D7E49E973DC5FD62AE652C238C * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncUniTaskMethodBuilder_SetStateMachine_m919B0537825382AC072CF24F8D838BD3920E9FC8((AsyncUniTaskMethodBuilder_t5A0E0440D1E839DD1491F1E509EC876F0E08AA33 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CU3CSaveGameAsyncU3Eg__DoSaveAfterSyncU7C0U3Ed_SetStateMachine_m9A975D10028501E2A6611F03F01777CA51DB4F0D_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CU3CSaveGameAsyncU3Eg__DoSaveAfterSyncU7C0U3Ed_tA5BCD95B422F51D7E49E973DC5FD62AE652C238C * _thisAdjusted = reinterpret_cast<U3CU3CSaveGameAsyncU3Eg__DoSaveAfterSyncU7C0U3Ed_tA5BCD95B422F51D7E49E973DC5FD62AE652C238C *>(__this + _offset);
	U3CU3CSaveGameAsyncU3Eg__DoSaveAfterSyncU7C0U3Ed_SetStateMachine_m9A975D10028501E2A6611F03F01777CA51DB4F0D(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * StringComparer_get_OrdinalIgnoreCase_m8FD38206B6FFE866E97CE4DF84B037F0DF175288_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_il2cpp_TypeInfo_var);
		StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * L_0 = ((StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_StaticFields*)il2cpp_codegen_static_fields_for(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_il2cpp_TypeInfo_var))->get__ordinalIgnoreCase_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VideoBackground_set_TransitionalRenderer_mFE6C595A7424534EEDEBD75423697E51819408FB_inline (VideoBackground_tC31D69C74D104E5F414AAE56250D1AAD449B7F47 * __this, TransitionalRenderer_t417C5BDB13977F6209462DBA455A7E2BE95B61F5 * ___value0, const RuntimeMethod* method)
{
	{
		// protected virtual TransitionalRenderer TransitionalRenderer { get; private set; }
		TransitionalRenderer_t417C5BDB13977F6209462DBA455A7E2BE95B61F5 * L_0 = ___value0;
		__this->set_U3CTransitionalRendererU3Ek__BackingField_11(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameStateMap_set_SaveDateTime_m15639D6A3AA10DCA2CCD71EABF70BC6F54E8CE15_inline (GameStateMap_tA4788218B9D1B130D00F9C346FF9FD21E01ED52D * __this, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value0, const RuntimeMethod* method)
{
	{
		// public DateTime SaveDateTime { get; set; }
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0 = ___value0;
		__this->set_U3CSaveDateTimeU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameStateMap_set_Thumbnail_m5FFCC8F23CB86F84A4D7F939B9B051EEECFE19FE_inline (GameStateMap_tA4788218B9D1B130D00F9C346FF9FD21E01ED52D * __this, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___value0, const RuntimeMethod* method)
{
	{
		// public Texture2D Thumbnail { get; set; }
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_0 = ___value0;
		__this->set_U3CThumbnailU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameStateMap_set_RollbackStackJson_m6A705049EE36F62B7BF967E9C6D2487632BE1642_inline (GameStateMap_tA4788218B9D1B130D00F9C346FF9FD21E01ED52D * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string RollbackStackJson { get => rollbackStackJson; set => rollbackStackJson = value; }
		String_t* L_0 = ___value0;
		__this->set_rollbackStackJson_9(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mF390DA2A3078B58DD811566C1131DF2495F5052E_gshared_inline (KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool KeyValuePair_2_get_Value_m9F9DF6119C16A47CA183A11447C735B01FE006C8_gshared_inline (KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_value_1();
		return (bool)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_gshared_inline (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_0 = (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )__this->get_current_3();
		return (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
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
