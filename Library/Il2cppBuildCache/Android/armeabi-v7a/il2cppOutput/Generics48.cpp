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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
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

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162;
// UniRx.Async.Internal.WeakDictionary`2/Entry<System.Object,System.ValueTuple`3<System.Int32,System.DateTime,System.Object>>
struct Entry_t48F45A88F4F69D4BC39E9B5BC3355E30D9149687;
// UniRx.Async.Internal.WeakDictionary`2/Entry<System.Object,System.Object>
struct Entry_tAD86A7FADB07F0BD74DCC9094C9E75C3BB94A580;
// System.Collections.Generic.EqualityComparer`1<System.Object>
struct EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Nullable`1<System.Boolean>>
struct Func_2_tF002C8931D0913848A8849C692F473627074752E;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Nullable`1<System.DateTime>>
struct Func_2_tDA2228628133D806DA2D5F0985A7C638366C86DF;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Nullable`1<System.Int32>>
struct Func_2_t0ED86F74E0BD709572821A831FBC696E5363B40B;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Nullable`1<System.Single>>
struct Func_2_t62A0286CAACB4B757D2B5064E8C220B957D8FC73;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,UniRx.Async.UniTask`1<System.Object>>
struct Func_2_t75489ECF329F71873DF687921959BF3F194167F0;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Boolean>
struct Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,Naninovel.ChoiceState>
struct Func_2_tF037F4CF8F223AC9196DD0393F3F876E9B5BB0A6;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Int32>
struct Func_2_tE11D275E92E41C7F0153BCC1A05E2657AECFED9E;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,NaninovelInventory.InventorySlotState>
struct Func_2_t512B1ABB646ECF8829303AC1BD225E1984B828AF;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>
struct Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Single>
struct Func_2_t3EA169DF6053DFF60BE8BDD1E1460D9AD57D770B;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,Naninovel.SpawnedObjectState>
struct Func_2_tFB66BF2E18384BACD3162FCB78470B81EADF8F6D;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,UniRx.Async.UniTask>
struct Func_2_t9DEF79BCAAB88DDE74B30346629E985CF9F89296;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,Naninovel.BacklogMessage/State>
struct Func_2_t6A3344C2049332A3448F5B69B576A7975DF6786C;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,Naninovel.UI.ChatMessage/State>
struct Func_2_tA0E73A2EDC38DE3B8050B13E269866665FA13505;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,Naninovel.CameraManager/GameState/CameraComponent>
struct Func_2_tAA1F211854687D46D44C75F82AE1832E48D86387;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>,System.Nullable`1<System.Boolean>>
struct Func_2_t522E761B8E994D07CB386C22179640C59FEB1707;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>,System.Nullable`1<System.DateTime>>
struct Func_2_tE73ACAD9E0DC42759CD53E10BDACD7CF59F7203D;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>,System.Nullable`1<System.Int32>>
struct Func_2_t0B6036B0480191EEAB4AA1E5F0135F6AE30A542F;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>,System.Nullable`1<System.Single>>
struct Func_2_tCDAFD0F851BCC68BA9C24CAF4E9A4AFB0E159902;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>,UniRx.Async.UniTask`1<System.Object>>
struct Func_2_tE74A0107941485E8E1221609C46797F8EB064F8F;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>,System.Boolean>
struct Func_2_t172B8D1BD42A5891742452D3D82E4A7464F7EA2F;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>,Naninovel.ChoiceState>
struct Func_2_tC780AE0365ADBD48EA302BCA8573E60BA9E547D9;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>,System.Int32>
struct Func_2_t765F27322C9E0A312945F1976C3388862A602BE5;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>,NaninovelInventory.InventorySlotState>
struct Func_2_t490BEA948897C237704F3EDEF8C051E543A81DEE;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>,System.Object>
struct Func_2_tD1DCBEC4DB1BD7D31C15305F424205EF8F5DA072;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>,System.Single>
struct Func_2_t117A89C65011C1A46FD157CE831BBB657CFF4DE6;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>,Naninovel.SpawnedObjectState>
struct Func_2_t37AE175E999EE5C3B88BED88DE67C8FBEDA35C03;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>,UniRx.Async.UniTask>
struct Func_2_t6929A84326E8A6EDC5BE01E8A8F498E0743E5886;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>,Naninovel.BacklogMessage/State>
struct Func_2_t1F594E2E1737D5ED86F5123FE4E4F20CFF99A94D;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>,Naninovel.UI.ChatMessage/State>
struct Func_2_tBF6D846D4E070B9BE3CAF8B8CE76982ABF98159E;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>,Naninovel.CameraManager/GameState/CameraComponent>
struct Func_2_tAC5651FA1540DFFFE428129F5977FE0004775979;
// System.Func`2<System.Nullable`1<System.Boolean>,System.Nullable`1<System.Boolean>>
struct Func_2_t617B644A11C5C6060DCDE3EB14A3816CFCAB7143;
// System.Func`2<System.Nullable`1<System.Boolean>,System.Nullable`1<System.DateTime>>
struct Func_2_tF91AB32CE8E57B5C9B75DA29DFE607DD90FFBBBD;
// System.Func`2<System.Nullable`1<System.Boolean>,System.Nullable`1<System.Int32>>
struct Func_2_t661CB72DE9FD8F86B4246324184A42523AB57303;
// System.Func`2<System.Nullable`1<System.Boolean>,System.Nullable`1<System.Single>>
struct Func_2_tD11D835970463EAB50A6C3A613E63CF4F00C71E0;
// System.Func`2<System.Nullable`1<System.Boolean>,UniRx.Async.UniTask`1<System.Object>>
struct Func_2_t21DFC14122E29E39C7D5923DA820231F082D187D;
// System.Func`2<System.Nullable`1<System.Boolean>,System.Boolean>
struct Func_2_tAF1C94FC5497C5FB3648733672F94294344D2071;
// System.Func`2<System.Nullable`1<System.Boolean>,Naninovel.ChoiceState>
struct Func_2_tF4495017D5374A7FD888EE69F67DDCAE371067F0;
// System.Func`2<System.Nullable`1<System.Boolean>,System.Int32>
struct Func_2_t205B65C445BF6682077C959D29B809C85323810A;
// System.Func`2<System.Nullable`1<System.Boolean>,NaninovelInventory.InventorySlotState>
struct Func_2_tCE752C8ABCD48A0C36EE754320EA34483AB91C2B;
// System.Func`2<System.Nullable`1<System.Boolean>,System.Object>
struct Func_2_tBFB0839C8132EE1AC7FC8637229C92F4A185D85A;
// System.Func`2<System.Nullable`1<System.DateTime>,System.Boolean>
struct Func_2_t7D384D2BCDB6D03D052448A479F55BDD439788C9;
// System.Func`2<System.Nullable`1<System.Int32>,System.Boolean>
struct Func_2_t42993C24F11175D8FA98C3DB6E40DC467687C57D;
// System.Func`2<System.Nullable`1<System.Single>,System.Boolean>
struct Func_2_t9B3CA7186DE9A33B978124F5B7131DD16456B41A;
// System.Func`2<UniRx.Async.UniTask`1<System.Boolean>,System.Boolean>
struct Func_2_t50A684CD375BA2C69038F26A209AA40D51C26AF6;
// System.Func`2<UniRx.Async.UniTask`1<System.Object>,System.Boolean>
struct Func_2_tC8B0B414333ABAEC4714F1469030E631BBA93158;
// System.Func`2<Naninovel.ChoiceState,System.Boolean>
struct Func_2_t07487D3E570B7B96CC1F71D97C4C3022309C6206;
// System.Func`2<System.Int32,System.Boolean>
struct Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274;
// System.Func`2<NaninovelInventory.InventorySlotState,System.Boolean>
struct Func_2_tF9C3B1480B9702E74529194196B54165F41F3B7D;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8;
// System.Func`2<System.Object,System.Object>
struct Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436;
// System.Func`2<UnityEngine.LowLevel.PlayerLoopSystem,System.Boolean>
struct Func_2_t62EBB72325BFEF9BDF88CB411F4074CA06ED5F3D;
// System.Func`2<System.Single,System.Boolean>
struct Func_2_t7214BC9C9A47482C751067B9A197D164F4041A3A;
// System.Func`2<Naninovel.SpawnedObjectState,System.Boolean>
struct Func_2_tB0000AABBE4450647C9D11E34117015142ACE0C6;
// System.Func`2<UniRx.Async.UniTask,System.Boolean>
struct Func_2_t4BFD08CB28904BBCF9A4A2B63A7477A496AD48C5;
// System.Func`2<Naninovel.AudioManager/ClipState,System.Boolean>
struct Func_2_t064DE95C7FE6E1EC7D833AC8C26E0332A419EDE4;
// System.Func`2<Naninovel.BacklogMessage/State,System.Boolean>
struct Func_2_tA11AB62EEE7EBB0C45BB501C32D750E290E76778;
// System.Func`2<Naninovel.UI.ChatMessage/State,System.Boolean>
struct Func_2_t29EC566B6C8E5807DD484F2C9B62F44892A7BFEC;
// System.Func`2<Naninovel.RuntimeInitializer/ServiceInitData,System.Boolean>
struct Func_2_tD8276666D23A0675D6CE747CD15AAAA36840F9CE;
// System.Func`2<Naninovel.CameraManager/GameState/CameraComponent,System.Boolean>
struct Func_2_t1D0FF02CA58DD98FAD0FBBC3CC110F9D4331815D;
// UniRx.Async.IAwaiter`1<UniRx.Async.AsyncUnit>
struct IAwaiter_1_t6FCACC3C4FF823DF8EE2F573EA8ABCA40F665DA3;
// UniRx.Async.IAwaiter`1<System.Boolean>
struct IAwaiter_1_tE675224ED01460C3DE039582B39AAA06C66B32CC;
// UniRx.Async.IAwaiter`1<System.Object>
struct IAwaiter_1_tFD5DC317421403235686D3A61F3BEAA1D8D6700D;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerable_1_t22A35158F9E40077A7147A082319C0D1DFFBE2FD;
// System.Collections.Generic.IEnumerable`1<System.Nullable`1<System.Boolean>>
struct IEnumerable_1_tCC20D6617A785B4C7F02014301E511E12CAE2C6F;
// System.Collections.Generic.IEnumerable`1<System.Nullable`1<System.DateTime>>
struct IEnumerable_1_t148197E707056C588E7F22336E7517FBF57E220D;
// System.Collections.Generic.IEnumerable`1<System.Nullable`1<System.Int32>>
struct IEnumerable_1_tADB400B43A76DA43063F5ED3C3BD11A7E9E10443;
// System.Collections.Generic.IEnumerable`1<System.Nullable`1<System.Single>>
struct IEnumerable_1_t8748D435947252D4C5978256F042AE257902FBAC;
// System.Collections.Generic.IEnumerable`1<UniRx.Async.UniTask`1<System.Boolean>>
struct IEnumerable_1_tF640CFF8A1491453435EC14E5369C12B9F64B5E1;
// System.Collections.Generic.IEnumerable`1<UniRx.Async.UniTask`1<System.Object>>
struct IEnumerable_1_tFEEEB856A3CBB1F821787761D40CF0F605E4CF77;
// System.Collections.Generic.IEnumerable`1<Naninovel.ChoiceState>
struct IEnumerable_1_tB59AA3E3BECED7C924909C2ACDD6E192570A9A4B;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_t60929E1AA80B46746F987B99A4EBD004FD72D370;
// System.Collections.Generic.IEnumerable`1<NaninovelInventory.InventorySlotState>
struct IEnumerable_1_t216675320825BD726EBF33CE20B75574886FF75C;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerable`1<UnityEngine.LowLevel.PlayerLoopSystem>
struct IEnumerable_1_t684BB56D97535B40EFD8EEDE5F9C84DB0DB9132C;
// System.Collections.Generic.IEnumerable`1<System.Single>
struct IEnumerable_1_t673DFF64E51C18A8B1287F4BD988966CE3B15A45;
// System.Collections.Generic.IEnumerable`1<Naninovel.SpawnedObjectState>
struct IEnumerable_1_t86CE76822192DDC8CF98B2EB18FCADF483A77163;
// System.Collections.Generic.IEnumerable`1<UniRx.Async.UniTask>
struct IEnumerable_1_t2ABA413E4298E7B3EAB9414C0C3654796603ED35;
// System.Collections.Generic.IEnumerable`1<Naninovel.AudioManager/ClipState>
struct IEnumerable_1_t4C04B0E130E40E2804D0EDB91314222F3D4BE320;
// System.Collections.Generic.IEnumerable`1<Naninovel.BacklogMessage/State>
struct IEnumerable_1_tA810D7E354A7D4C19CA8BEAF1D61FAE1C13DD0C3;
// System.Collections.Generic.IEnumerable`1<Naninovel.UI.ChatMessage/State>
struct IEnumerable_1_tD7A81CF939950BBD4007DF4EFF4ECAEB286B6CAC;
// System.Collections.Generic.IEnumerable`1<Naninovel.RuntimeInitializer/ServiceInitData>
struct IEnumerable_1_t87227CAE9B1F0DE1192DB168AA1555E8F4BF258F;
// System.Collections.Generic.IEnumerable`1<Naninovel.CameraManager/GameState/CameraComponent>
struct IEnumerable_1_t786D20C71CC17530F84F351573336578DB5A4A52;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_tF437149CAED78D4A68294D431DE692A78F7D67B3;
// System.Collections.Generic.IEnumerator`1<System.Nullable`1<System.Boolean>>
struct IEnumerator_1_t8AF1F6D7DF3F5276BD3CB9B603967CF5994ADE44;
// System.Collections.Generic.IEnumerator`1<System.Nullable`1<System.DateTime>>
struct IEnumerator_1_t839064B60A70B925EB5FE62097F5CE6F85710A88;
// System.Collections.Generic.IEnumerator`1<System.Nullable`1<System.Int32>>
struct IEnumerator_1_t63B92F0305D20A3DE4E1AB84D31F9ADF4C4CECE7;
// System.Collections.Generic.IEnumerator`1<System.Nullable`1<System.Single>>
struct IEnumerator_1_t1D180B9CD3019B7BA8EBC9C545F8A801CB443B5B;
// System.Collections.Generic.IEnumerator`1<UniRx.Async.UniTask`1<System.Boolean>>
struct IEnumerator_1_t6F62923854A8FFEAF49741D6C93706FDC5679FF7;
// System.Collections.Generic.IEnumerator`1<UniRx.Async.UniTask`1<System.Object>>
struct IEnumerator_1_tE7A4B6C7CDCC0234FC6690A8AC270804A9F7D447;
// System.Collections.Generic.IEnumerator`1<Naninovel.ChoiceState>
struct IEnumerator_1_t1C3641C8FBA9E9C7E9273C63F214387CFD5BF826;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t72AB4B40AF5290B386215B0BFADC8919D394DCAB;
// System.Collections.Generic.IEnumerator`1<NaninovelInventory.InventorySlotState>
struct IEnumerator_1_tF432309E10EC636A45E0A5C9A87ED581B5D8FCDE;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2DC97C7D486BF9E077C2BC2E517E434F393AA76E;
// System.Collections.Generic.IEnumerator`1<UnityEngine.LowLevel.PlayerLoopSystem>
struct IEnumerator_1_t634E83A683916D3F4C7AC019EB7684158B66A849;
// System.Collections.Generic.IEnumerator`1<System.Single>
struct IEnumerator_1_t5918C99D6FA69C530D0287467B91ADE56FA3D7AF;
// System.Collections.Generic.IEnumerator`1<Naninovel.SpawnedObjectState>
struct IEnumerator_1_tB6DDC79245213AEE076C250628800AA4ADB53CB0;
// System.Collections.Generic.IEnumerator`1<UniRx.Async.UniTask>
struct IEnumerator_1_t4404284ED3D2703CB08C438F4EB679D994E8295F;
// System.Collections.Generic.IEnumerator`1<Naninovel.AudioManager/ClipState>
struct IEnumerator_1_tB8CB9F861B9E8D1A0EC75AF8F3EE88E23AD63620;
// System.Collections.Generic.IEnumerator`1<Naninovel.BacklogMessage/State>
struct IEnumerator_1_t7C4E3D16A1A0BEEF95FCA91AF19104ED74A90C65;
// System.Collections.Generic.IEnumerator`1<Naninovel.UI.ChatMessage/State>
struct IEnumerator_1_t234FFAAEE89D456DC7C54BBCFF6366EBC719EF57;
// System.Collections.Generic.IEnumerator`1<Naninovel.RuntimeInitializer/ServiceInitData>
struct IEnumerator_1_tBFFD6C49D087FC56AA5A3F9600E2FFE12B70A4F5;
// System.Collections.Generic.IEnumerator`1<Naninovel.CameraManager/GameState/CameraComponent>
struct IEnumerator_1_t46F6ED255F68F2FC251CCAF31C288686E5344B93;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1A386BEF1855064FD5CC71F340A68881A52B4932;
// System.Linq.Enumerable/Iterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366;
// System.Linq.Enumerable/Iterator`1<System.Nullable`1<System.Boolean>>
struct Iterator_1_t23BF448BF225E634CB2602F537813BA3D144BB70;
// System.Linq.Enumerable/Iterator`1<System.Nullable`1<System.DateTime>>
struct Iterator_1_t1F9128029BEF7A5112B2A35FA584093B6188534F;
// System.Linq.Enumerable/Iterator`1<System.Nullable`1<System.Int32>>
struct Iterator_1_t88E927D3E5FC45C833C1A5146A04FBA17D02CA43;
// System.Linq.Enumerable/Iterator`1<System.Nullable`1<System.Single>>
struct Iterator_1_t5F8CC81E7DD3167D5EC5BFC0984EBCEE64F5B45E;
// System.Linq.Enumerable/Iterator`1<UniRx.Async.UniTask`1<System.Boolean>>
struct Iterator_1_tC260CA4CC95AE298EBCCA9552CB800672F630582;
// System.Linq.Enumerable/Iterator`1<UniRx.Async.UniTask`1<System.Object>>
struct Iterator_1_tFE772197DAF1463DC382A08ABEACA17D7D55D6A3;
// System.Linq.Enumerable/Iterator`1<Naninovel.ChoiceState>
struct Iterator_1_t85972724E5F128E52AEF75711D0237139CD482B4;
// System.Linq.Enumerable/Iterator`1<System.Int32>
struct Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379;
// System.Linq.Enumerable/Iterator`1<NaninovelInventory.InventorySlotState>
struct Iterator_1_tB9E2812D271E5212E314B0B874F4747D59003D63;
// System.Linq.Enumerable/Iterator`1<System.Object>
struct Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279;
// System.Linq.Enumerable/Iterator`1<UnityEngine.LowLevel.PlayerLoopSystem>
struct Iterator_1_t00F40537109178421CED08DCDFBC82E964382544;
// System.Linq.Enumerable/Iterator`1<System.Single>
struct Iterator_1_t859CAAB8DD3B63D3758E13D2802ED7523B331199;
// System.Linq.Enumerable/Iterator`1<Naninovel.SpawnedObjectState>
struct Iterator_1_tFC8B571D8BE2C4B27969569932E09AE61FE95420;
// System.Linq.Enumerable/Iterator`1<UniRx.Async.UniTask>
struct Iterator_1_tE29EC12ED5376EFF628B57F840C6A615A936FF3C;
// System.Linq.Enumerable/Iterator`1<Naninovel.AudioManager/ClipState>
struct Iterator_1_t26D72F9F2217F13843E1FFDEECFB2A5A06735DA3;
// System.Linq.Enumerable/Iterator`1<Naninovel.BacklogMessage/State>
struct Iterator_1_t6C925CB7B395343D87EA76D73FAED68BE25FE4FA;
// System.Linq.Enumerable/Iterator`1<Naninovel.UI.ChatMessage/State>
struct Iterator_1_t8B430C96A8283C047E3D063CADFDD355F4B8E098;
// System.Linq.Enumerable/Iterator`1<Naninovel.RuntimeInitializer/ServiceInitData>
struct Iterator_1_tC7A873B5F71A6D44AAAE27022D7D86F66C5EB027;
// System.Linq.Enumerable/Iterator`1<Naninovel.CameraManager/GameState/CameraComponent>
struct Iterator_1_t6B14EA5ED7440906EE71ABB64B3D7208D2FE4790;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.ValueTuple`3<System.Int32,System.DateTime,System.Object>>>
struct List_1_t536C6C622CA51E03F83408B18F38078C6011749C;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<UnityEngine.LowLevel.PlayerLoopSystem>
struct List_1_t475CB5B95C70C448DEE1D3D60BD123ADFB003B87;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Collections.Generic.List`1<Naninovel.AudioManager/ClipState>
struct List_1_t6810BA4898A2E8BD5D44F7EF18E50783D0663EC1;
// System.Collections.Generic.List`1<Naninovel.RuntimeInitializer/ServiceInitData>
struct List_1_t28F1FFBF5B396496454DD862590923693D222AF6;
// UniRx.Async.UniTask/WaitUntilValueChangedStandardObjectPromise`2<System.Object,System.Object>
struct WaitUntilValueChangedStandardObjectPromise_2_tFC4F7FF944ED6A814CDBE2227EBC5E13112CE8B8;
// UniRx.Async.UniTask/WaitUntilValueChangedUnityObjectPromise`2<System.Object,System.Object>
struct WaitUntilValueChangedUnityObjectPromise_2_t90A35C753693359C76CEF3C74959829952D6E5DA;
// UniRx.Async.Internal.WeakDictionary`2<System.Object,System.ValueTuple`3<System.Int32,System.DateTime,System.Object>>
struct WeakDictionary_2_tC0AEA360373600383D6692C49A354F28F9D582E9;
// UniRx.Async.Internal.WeakDictionary`2<System.Object,System.Object>
struct WeakDictionary_2_t76CE294B1D2FFD540C85FED3DCE95C49BEA373F7;
// System.WeakReference`1<System.Object>
struct WeakReference_1_t223E87F227F99044D112FF1E7FC7DA135365CB76;
// UniRx.Async.UniTask/WhenAllPromise`1<System.Boolean>
struct WhenAllPromise_1_t216F03AD9E072850A02BB0D427114BF3F51C7B3F;
// UniRx.Async.UniTask/WhenAllPromise`1<System.Object>
struct WhenAllPromise_1_t5B541C7627EA4D17F22139D16BB900CB2B9B040F;
// UniRx.Async.UniTask/WhenAllPromise`2<System.Object,System.Object>
struct WhenAllPromise_2_t6D7D21C5B7198362483FA70DECB3BA01D0691B44;
// UniRx.Async.UniTask/WhenAllPromise`3<System.Object,System.Object,System.Object>
struct WhenAllPromise_3_t3363D28EBFB005E11716C56458A6177C7C67AE62;
// UniRx.Async.UniTask/WhenAllPromise`4<System.Object,System.Object,System.Object,System.Object>
struct WhenAllPromise_4_t77BA575ACBF6B3737E4C05D36D3AD8CC35DA9CD7;
// UniRx.Async.UniTask/WhenAllPromise`5<System.Object,System.Object,System.Object,System.Object,System.Object>
struct WhenAllPromise_5_t5EE8180C1D3524EDAA7C86F4857195FA2066906B;
// UniRx.Async.UniTask/WhenAllPromise`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct WhenAllPromise_6_tD7F6D8E35F750162BAE0434023C1E871CE5F54E4;
// UniRx.Async.UniTask/WhenAllPromise`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct WhenAllPromise_7_tAE0A5248D0E68A0503F1F6F60182089D2011180A;
// UniRx.Async.UniTask/WhenAnyPromise`1<System.Object>
struct WhenAnyPromise_1_t82C04574E629248E36137DCEB40ECB74906817A4;
// UniRx.Async.UniTask/WhenAnyPromise`2<System.Object,System.Object>
struct WhenAnyPromise_2_tF280D2515802FF91136B135B837D9C1096176049;
// UniRx.Async.UniTask/WhenAnyPromise`3<System.Object,System.Object,System.Object>
struct WhenAnyPromise_3_tE385824584361444C8A71A2D1020D4E41EBDFB23;
// UniRx.Async.UniTask/WhenAnyPromise`4<System.Object,System.Object,System.Object,System.Object>
struct WhenAnyPromise_4_t516C2A2684192065DEE0D419850E62265AADD7FF;
// UniRx.Async.UniTask/WhenAnyPromise`5<System.Object,System.Object,System.Object,System.Object,System.Object>
struct WhenAnyPromise_5_tE20E3643AAD9C212173DBFB1755E7055327FE127;
// UniRx.Async.UniTask/WhenAnyPromise`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct WhenAnyPromise_6_t017F3AF3A76157ECCC4F51E4581EB59AC9C8BB86;
// UniRx.Async.UniTask/WhenAnyPromise`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct WhenAnyPromise_7_t1DF86E2958CAC76E3F323820590508A06B0D820F;
// UniRx.Async.UniTask/WhenAnyPromise`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct WhenAnyPromise_8_t8AE6F96768B67E59399F279CE7BBB72ACC298138;
// System.Linq.Enumerable/WhereArrayIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct WhereArrayIterator_1_tA75DA39521F05F3883C639BA3B7651F5FCD1B25A;
// System.Linq.Enumerable/WhereArrayIterator`1<System.Object>
struct WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86;
// System.Linq.Enumerable/WhereArrayIterator`1<UnityEngine.LowLevel.PlayerLoopSystem>
struct WhereArrayIterator_1_tCCF122750ADDEB0809B93C2A063740FFE4ACE1D7;
// System.Linq.Enumerable/WhereArrayIterator`1<Naninovel.AudioManager/ClipState>
struct WhereArrayIterator_1_tF55057F0C4E84949B9F65539F7CA61FB0F7C0877;
// System.Linq.Enumerable/WhereArrayIterator`1<Naninovel.RuntimeInitializer/ServiceInitData>
struct WhereArrayIterator_1_t3C6E8BC977AAE48AAB6D18AA33C4DD42234FEE41;
// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct WhereEnumerableIterator_1_t280A111308444ADF95E9634B9AE20C1A478740E9;
// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Nullable`1<System.Boolean>>
struct WhereEnumerableIterator_1_t5EF9947CA52E9F8839E41B7CA87BD614DF4C4A08;
// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Nullable`1<System.DateTime>>
struct WhereEnumerableIterator_1_t5E604D3A2F34C05C8B73CFCD5D7E014F852A4018;
// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Nullable`1<System.Int32>>
struct WhereEnumerableIterator_1_t1B1B27D3E99C914ABE052FAFE0F219BB76A0E566;
// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Nullable`1<System.Single>>
struct WhereEnumerableIterator_1_tEA993B6947A5D38439F1B98DAAA3D3EE22BAF126;
// System.Linq.Enumerable/WhereEnumerableIterator`1<UniRx.Async.UniTask`1<System.Boolean>>
struct WhereEnumerableIterator_1_t683288BE9A9F9074671471314E10F6189F32E285;
// System.Linq.Enumerable/WhereEnumerableIterator`1<UniRx.Async.UniTask`1<System.Object>>
struct WhereEnumerableIterator_1_t9DE12D1505536A735F250D918740AA7B52CDA275;
// System.Linq.Enumerable/WhereEnumerableIterator`1<Naninovel.ChoiceState>
struct WhereEnumerableIterator_1_t0BAD1BFA62FB6C9EF0D93377A7C7BC98D6516372;
// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Int32>
struct WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA;
// System.Linq.Enumerable/WhereEnumerableIterator`1<NaninovelInventory.InventorySlotState>
struct WhereEnumerableIterator_1_tF0ADE92C0652CF04A21CFA18D7399D83155C1B10;
// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>
struct WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0;
// System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.LowLevel.PlayerLoopSystem>
struct WhereEnumerableIterator_1_t4D220F44B443A17F00F73EDAEC6FBDA9ADFE0927;
// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Single>
struct WhereEnumerableIterator_1_tC5339F8E75587CBA511FF3EDFBA6D5A81E54057F;
// System.Linq.Enumerable/WhereEnumerableIterator`1<Naninovel.SpawnedObjectState>
struct WhereEnumerableIterator_1_t9C3C620861773CAE096B267F92ACA7F69F54E8AC;
// System.Linq.Enumerable/WhereEnumerableIterator`1<UniRx.Async.UniTask>
struct WhereEnumerableIterator_1_tDABA2580350446A62FA06A8962ABCC8C5481464F;
// System.Linq.Enumerable/WhereEnumerableIterator`1<Naninovel.AudioManager/ClipState>
struct WhereEnumerableIterator_1_t28854919DAE95B7D3AD3CB0B3CA645C3A4671D56;
// System.Linq.Enumerable/WhereEnumerableIterator`1<Naninovel.BacklogMessage/State>
struct WhereEnumerableIterator_1_t34514767B00E777C8DED03DFD5CB51F5D38033F6;
// System.Linq.Enumerable/WhereEnumerableIterator`1<Naninovel.UI.ChatMessage/State>
struct WhereEnumerableIterator_1_tD6414A1281C11990E6CF753E82008B53CF4EA605;
// System.Linq.Enumerable/WhereEnumerableIterator`1<Naninovel.RuntimeInitializer/ServiceInitData>
struct WhereEnumerableIterator_1_tB306ABDD2BAB238DD2F3AA87DA192529C44B5106;
// System.Linq.Enumerable/WhereEnumerableIterator`1<Naninovel.CameraManager/GameState/CameraComponent>
struct WhereEnumerableIterator_1_t68D9BC62BA57BA67240CDEEADC7708CBB14A325F;
// System.Linq.Enumerable/WhereListIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct WhereListIterator_1_t8ED0122CFDC0D98BEACF64F1CF782443FE1312E3;
// System.Linq.Enumerable/WhereListIterator`1<System.Object>
struct WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD;
// System.Linq.Enumerable/WhereListIterator`1<UnityEngine.LowLevel.PlayerLoopSystem>
struct WhereListIterator_1_tD6FAB701714B0E9D180F94E9B08EEAD49207F4BC;
// System.Linq.Enumerable/WhereListIterator`1<Naninovel.AudioManager/ClipState>
struct WhereListIterator_1_tAA5CD43CE8B473E4EEF4563EC01393C8082FE1F6;
// System.Linq.Enumerable/WhereListIterator`1<Naninovel.RuntimeInitializer/ServiceInitData>
struct WhereListIterator_1_tCDE8DEF8B6F89F13F6B53726024217AF0D0A44BA;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Nullable`1<System.Boolean>>
struct WhereSelectArrayIterator_2_tAD8D94FD73E1A5D462E0629DB8180675B61920E6;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Nullable`1<System.DateTime>>
struct WhereSelectArrayIterator_2_t0203FE1615D4C92487D352D7F41F899D21B6F123;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Nullable`1<System.Int32>>
struct WhereSelectArrayIterator_2_tC6191AB9968347D5FF8EDC51D803F8C3FC9FB9F3;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Nullable`1<System.Single>>
struct WhereSelectArrayIterator_2_tF9903AA66BF2E125F87C0EAC1DEB3894CD2D8D3C;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,UniRx.Async.UniTask`1<System.Object>>
struct WhereSelectArrayIterator_2_tEAC1E8FD829780D778C895FF82CFE4CDA3BCD2E6;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,Naninovel.ChoiceState>
struct WhereSelectArrayIterator_2_tFD03B6B3675F3208E591047F55DFF157883F85A9;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Int32>
struct WhereSelectArrayIterator_2_tC0CEBA847D5CAD09BA08DD4CB18F1D5AA766FC88;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,NaninovelInventory.InventorySlotState>
struct WhereSelectArrayIterator_2_t00B936EA59A2365F10781FA16B3BA3728DBCE43E;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>
struct WhereSelectArrayIterator_2_t533C591223D49F5BCDFF966D68BED9A04ED2269D;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Single>
struct WhereSelectArrayIterator_2_t49356E013D4F6B1AE32144D37B9A5479668F1313;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,Naninovel.SpawnedObjectState>
struct WhereSelectArrayIterator_2_t059D665C39874663A4E20908AE3208D2786E04B4;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,UniRx.Async.UniTask>
struct WhereSelectArrayIterator_2_tA6057286A9E84C7500F687935C7B9A081D32CC98;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,Naninovel.BacklogMessage/State>
struct WhereSelectArrayIterator_2_t385300D965CF41A5E0501062F0B77B38B2BF3006;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,Naninovel.UI.ChatMessage/State>
struct WhereSelectArrayIterator_2_t617ECE5A4E1F9F8E2DD704C7433BE116663417DE;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,Naninovel.CameraManager/GameState/CameraComponent>
struct WhereSelectArrayIterator_2_tD841241ACC08406C157A003FD492A66BD755FC78;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>,System.Nullable`1<System.Boolean>>
struct WhereSelectArrayIterator_2_t01FD93BBAE063157FFB86672059DB217EAF033BC;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>,System.Nullable`1<System.DateTime>>
struct WhereSelectArrayIterator_2_tC0B4D98B8A5018F6C6BE1B1FF6CC198C788B1799;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>,System.Nullable`1<System.Int32>>
struct WhereSelectArrayIterator_2_t8A031F4801A4BB9DF9B2882280BAD613C6CC1591;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>,System.Nullable`1<System.Single>>
struct WhereSelectArrayIterator_2_tB1FF57DCA47CA6FEF8941B4B60D1B575FAABB7AB;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>,UniRx.Async.UniTask`1<System.Object>>
struct WhereSelectArrayIterator_2_t96662A09B40BAAAE4B1E206A5F1BF42114E865C6;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>,Naninovel.ChoiceState>
struct WhereSelectArrayIterator_2_t579A230CAF10F868B80C7678D0C684ACABAF8C7B;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>,System.Int32>
struct WhereSelectArrayIterator_2_t8394277AFCE5A3D1E31FAEA2D6E49D47B372FD53;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>,NaninovelInventory.InventorySlotState>
struct WhereSelectArrayIterator_2_t6FD02E63941341B8865EB4C2E9EEB267E0409E27;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>,System.Object>
struct WhereSelectArrayIterator_2_tE0782D750D4526D89CBA99FE3EC7A374206E5DA7;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>,System.Single>
struct WhereSelectArrayIterator_2_tC1498E9215B32503CBF6FC728A933E3DBD5C9BD1;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>,Naninovel.SpawnedObjectState>
struct WhereSelectArrayIterator_2_t383350DAB6D765FE4C9F22A89C5678757ED8DC67;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>,UniRx.Async.UniTask>
struct WhereSelectArrayIterator_2_tDD9C8E8D9E392D2B43AD9C3B73022A9C5AC622B4;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>,Naninovel.BacklogMessage/State>
struct WhereSelectArrayIterator_2_tB7CFEFA93146C0289A6B257BB17B9C8B83AE7D00;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>,Naninovel.UI.ChatMessage/State>
struct WhereSelectArrayIterator_2_t0653B8484148220DD0937301CAE2E3E745DFF720;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>,Naninovel.CameraManager/GameState/CameraComponent>
struct WhereSelectArrayIterator_2_t781E747A7C075FF8A87D7279B442291AAD2F2021;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Nullable`1<System.Boolean>,System.Nullable`1<System.Boolean>>
struct WhereSelectArrayIterator_2_t3AFBAA177DCE956D2632140C18629BC9A76CC53E;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Nullable`1<System.Boolean>,System.Nullable`1<System.DateTime>>
struct WhereSelectArrayIterator_2_t8A58FABC000E709DD3712E4711C7D24B27F26006;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Nullable`1<System.Boolean>,System.Nullable`1<System.Int32>>
struct WhereSelectArrayIterator_2_t3BCEA356D089C66274672815762D1456CDCD4569;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Nullable`1<System.Boolean>,System.Nullable`1<System.Single>>
struct WhereSelectArrayIterator_2_tEB5A405B9A831D65F0F7ED3A7C806067516E9827;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Nullable`1<System.Boolean>,UniRx.Async.UniTask`1<System.Object>>
struct WhereSelectArrayIterator_2_tFBD5454E809F3A06D9A50E34781A5B4FDAD95A1D;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Nullable`1<System.Boolean>,Naninovel.ChoiceState>
struct WhereSelectArrayIterator_2_tF6B2604244093DFC68DA7DFC55DDA565F6507C04;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Nullable`1<System.Boolean>,System.Int32>
struct WhereSelectArrayIterator_2_t13F8500E199DCF963AE1F80521D5CB24F18F869D;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Nullable`1<System.Boolean>,NaninovelInventory.InventorySlotState>
struct WhereSelectArrayIterator_2_t0AA51891D4D944D1E3F17C0A6151056E4D14294E;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Nullable`1<System.Boolean>,System.Object>
struct WhereSelectArrayIterator_2_t4E8566B5FE6D3156AAF2D3C8BFF761AFAD2C0194;
// UniRx.Async.Internal.WeakDictionary`2/Entry<System.Object,System.ValueTuple`3<System.Int32,System.DateTime,System.Object>>[]
struct EntryU5BU5D_tE6008BFDAB031084B3830335AB9871350FAFB992;
// UniRx.Async.Internal.WeakDictionary`2/Entry<System.Object,System.Object>[]
struct EntryU5BU5D_t82EAF916766753C936BA1E45C3AB14E31F534A8C;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.ValueTuple`3<System.Int32,System.DateTime,System.Object>>[]
struct KeyValuePair_2U5BU5D_tBCC5BA104A36200A60C79941BD98B15245D981DE;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>[]
struct KeyValuePair_2U5BU5D_tF62665482EE74C89EBA91020DCD7154032D09772;
// System.Nullable`1<System.Boolean>[]
struct Nullable_1U5BU5D_tE8D45AAEF262FC03BEEEDE9E0A4D2EFEC1F67364;
// UniRx.Async.UniTask`1<System.Boolean>[]
struct UniTask_1U5BU5D_tD17DEE7F3C277B49EE4DBE93CF882F3B75DB9728;
// UniRx.Async.UniTask`1<System.Object>[]
struct UniTask_1U5BU5D_tB6FF9EDF53A9D24687EC41FE2257A0F0AAAE79D7;
// System.Boolean[]
struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C;
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
// UnityEngine.LowLevel.PlayerLoopSystem[]
struct PlayerLoopSystemU5BU5D_t3BA4C765F5D8A6C384A54624258E9A167CA8CD17;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// Naninovel.AudioManager/ClipState[]
struct ClipStateU5BU5D_t068436E88FFA38E99D1ED5050A5B7A55774EA109;
// Naninovel.RuntimeInitializer/ServiceInitData[]
struct ServiceInitDataU5BU5D_t99521252E54EFC261E7A3E7AF0EA5E99E90D4F86;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Exception
struct Exception_t;
// System.Runtime.ExceptionServices.ExceptionDispatchInfo
struct ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// UniRx.Async.IAwaiter
struct IAwaiter_tE687B1C3BB0FDD9B1C3DE0AC61F6BEFD3DBC8B9C;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Runtime.Serialization.IFormatterConverter
struct IFormatterConverter_t2A667D8777429024D8A3CB3D9AE29EA79FEA6176;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.LowLevel.PlayerLoopSystem/UpdateFunction
struct UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA;

IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityEqualityComparer_tB15C4633F8D768EFD11E26A3498D47078FFC7871_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral5CA6E7C0AE72196B2817D93A78C719652EC691C0;
IL2CPP_EXTERN_C String_t* _stringLiteral7D20B8219CA0491872B2E811B262066A5DD875A7;
IL2CPP_EXTERN_C String_t* _stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085;
IL2CPP_EXTERN_C const RuntimeMethod* WeakReference_1_GetObjectData_m7C63330FAC22CBE86AA1BDE2F34DFDA8B1E41272_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WeakReference_1__ctor_mC76935DFFEF0678A77A4811865B9F4D350D72741_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C_marshaled_com;
struct PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C_marshaled_pinvoke;

struct EntryU5BU5D_tE6008BFDAB031084B3830335AB9871350FAFB992;
struct EntryU5BU5D_t82EAF916766753C936BA1E45C3AB14E31F534A8C;
struct KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C;
struct KeyValuePair_2U5BU5D_tF62665482EE74C89EBA91020DCD7154032D09772;
struct Nullable_1U5BU5D_tE8D45AAEF262FC03BEEEDE9E0A4D2EFEC1F67364;
struct UniTask_1U5BU5D_tD17DEE7F3C277B49EE4DBE93CF882F3B75DB9728;
struct UniTask_1U5BU5D_tB6FF9EDF53A9D24687EC41FE2257A0F0AAAE79D7;
struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct PlayerLoopSystemU5BU5D_t3BA4C765F5D8A6C384A54624258E9A167CA8CD17;
struct ClipStateU5BU5D_t068436E88FFA38E99D1ED5050A5B7A55774EA109;
struct ServiceInitDataU5BU5D_t99521252E54EFC261E7A3E7AF0EA5E99E90D4F86;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// UniRx.Async.Internal.WeakDictionary`2/Entry<System.Object,System.Object>
struct  Entry_tAD86A7FADB07F0BD74DCC9094C9E75C3BB94A580  : public RuntimeObject
{
public:
	// System.WeakReference`1<TKey> UniRx.Async.Internal.WeakDictionary`2/Entry::Key
	WeakReference_1_t223E87F227F99044D112FF1E7FC7DA135365CB76 * ___Key_0;
	// TValue UniRx.Async.Internal.WeakDictionary`2/Entry::Value
	RuntimeObject * ___Value_1;
	// System.Int32 UniRx.Async.Internal.WeakDictionary`2/Entry::Hash
	int32_t ___Hash_2;
	// UniRx.Async.Internal.WeakDictionary`2/Entry<TKey,TValue> UniRx.Async.Internal.WeakDictionary`2/Entry::Prev
	Entry_tAD86A7FADB07F0BD74DCC9094C9E75C3BB94A580 * ___Prev_3;
	// UniRx.Async.Internal.WeakDictionary`2/Entry<TKey,TValue> UniRx.Async.Internal.WeakDictionary`2/Entry::Next
	Entry_tAD86A7FADB07F0BD74DCC9094C9E75C3BB94A580 * ___Next_4;

public:
	inline static int32_t get_offset_of_Key_0() { return static_cast<int32_t>(offsetof(Entry_tAD86A7FADB07F0BD74DCC9094C9E75C3BB94A580, ___Key_0)); }
	inline WeakReference_1_t223E87F227F99044D112FF1E7FC7DA135365CB76 * get_Key_0() const { return ___Key_0; }
	inline WeakReference_1_t223E87F227F99044D112FF1E7FC7DA135365CB76 ** get_address_of_Key_0() { return &___Key_0; }
	inline void set_Key_0(WeakReference_1_t223E87F227F99044D112FF1E7FC7DA135365CB76 * value)
	{
		___Key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Key_0), (void*)value);
	}

	inline static int32_t get_offset_of_Value_1() { return static_cast<int32_t>(offsetof(Entry_tAD86A7FADB07F0BD74DCC9094C9E75C3BB94A580, ___Value_1)); }
	inline RuntimeObject * get_Value_1() const { return ___Value_1; }
	inline RuntimeObject ** get_address_of_Value_1() { return &___Value_1; }
	inline void set_Value_1(RuntimeObject * value)
	{
		___Value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_1), (void*)value);
	}

	inline static int32_t get_offset_of_Hash_2() { return static_cast<int32_t>(offsetof(Entry_tAD86A7FADB07F0BD74DCC9094C9E75C3BB94A580, ___Hash_2)); }
	inline int32_t get_Hash_2() const { return ___Hash_2; }
	inline int32_t* get_address_of_Hash_2() { return &___Hash_2; }
	inline void set_Hash_2(int32_t value)
	{
		___Hash_2 = value;
	}

	inline static int32_t get_offset_of_Prev_3() { return static_cast<int32_t>(offsetof(Entry_tAD86A7FADB07F0BD74DCC9094C9E75C3BB94A580, ___Prev_3)); }
	inline Entry_tAD86A7FADB07F0BD74DCC9094C9E75C3BB94A580 * get_Prev_3() const { return ___Prev_3; }
	inline Entry_tAD86A7FADB07F0BD74DCC9094C9E75C3BB94A580 ** get_address_of_Prev_3() { return &___Prev_3; }
	inline void set_Prev_3(Entry_tAD86A7FADB07F0BD74DCC9094C9E75C3BB94A580 * value)
	{
		___Prev_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Prev_3), (void*)value);
	}

	inline static int32_t get_offset_of_Next_4() { return static_cast<int32_t>(offsetof(Entry_tAD86A7FADB07F0BD74DCC9094C9E75C3BB94A580, ___Next_4)); }
	inline Entry_tAD86A7FADB07F0BD74DCC9094C9E75C3BB94A580 * get_Next_4() const { return ___Next_4; }
	inline Entry_tAD86A7FADB07F0BD74DCC9094C9E75C3BB94A580 ** get_address_of_Next_4() { return &___Next_4; }
	inline void set_Next_4(Entry_tAD86A7FADB07F0BD74DCC9094C9E75C3BB94A580 * value)
	{
		___Next_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Next_4), (void*)value);
	}
};


// System.Collections.Generic.EqualityComparer`1<System.Object>
struct  EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20  : public RuntimeObject
{
public:

public:
};

struct EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20_StaticFields
{
public:
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * ___defaultComparer_0;

public:
	inline static int32_t get_offset_of_defaultComparer_0() { return static_cast<int32_t>(offsetof(EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20_StaticFields, ___defaultComparer_0)); }
	inline EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * get_defaultComparer_0() const { return ___defaultComparer_0; }
	inline EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 ** get_address_of_defaultComparer_0() { return &___defaultComparer_0; }
	inline void set_defaultComparer_0(EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * value)
	{
		___defaultComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultComparer_0), (void*)value);
	}
};


// System.Linq.Enumerable/Iterator`1<System.Int32>
struct  Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379  : public RuntimeObject
{
public:
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	int32_t ___current_2;

public:
	inline static int32_t get_offset_of_threadId_0() { return static_cast<int32_t>(offsetof(Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379, ___threadId_0)); }
	inline int32_t get_threadId_0() const { return ___threadId_0; }
	inline int32_t* get_address_of_threadId_0() { return &___threadId_0; }
	inline void set_threadId_0(int32_t value)
	{
		___threadId_0 = value;
	}

	inline static int32_t get_offset_of_state_1() { return static_cast<int32_t>(offsetof(Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379, ___state_1)); }
	inline int32_t get_state_1() const { return ___state_1; }
	inline int32_t* get_address_of_state_1() { return &___state_1; }
	inline void set_state_1(int32_t value)
	{
		___state_1 = value;
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379, ___current_2)); }
	inline int32_t get_current_2() const { return ___current_2; }
	inline int32_t* get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(int32_t value)
	{
		___current_2 = value;
	}
};


// System.Linq.Enumerable/Iterator`1<System.Object>
struct  Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279  : public RuntimeObject
{
public:
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	RuntimeObject * ___current_2;

public:
	inline static int32_t get_offset_of_threadId_0() { return static_cast<int32_t>(offsetof(Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279, ___threadId_0)); }
	inline int32_t get_threadId_0() const { return ___threadId_0; }
	inline int32_t* get_address_of_threadId_0() { return &___threadId_0; }
	inline void set_threadId_0(int32_t value)
	{
		___threadId_0 = value;
	}

	inline static int32_t get_offset_of_state_1() { return static_cast<int32_t>(offsetof(Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279, ___state_1)); }
	inline int32_t get_state_1() const { return ___state_1; }
	inline int32_t* get_address_of_state_1() { return &___state_1; }
	inline void set_state_1(int32_t value)
	{
		___state_1 = value;
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279, ___current_2)); }
	inline RuntimeObject * get_current_2() const { return ___current_2; }
	inline RuntimeObject ** get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(RuntimeObject * value)
	{
		___current_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_2), (void*)value);
	}
};


// System.Linq.Enumerable/Iterator`1<System.Single>
struct  Iterator_1_t859CAAB8DD3B63D3758E13D2802ED7523B331199  : public RuntimeObject
{
public:
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	float ___current_2;

public:
	inline static int32_t get_offset_of_threadId_0() { return static_cast<int32_t>(offsetof(Iterator_1_t859CAAB8DD3B63D3758E13D2802ED7523B331199, ___threadId_0)); }
	inline int32_t get_threadId_0() const { return ___threadId_0; }
	inline int32_t* get_address_of_threadId_0() { return &___threadId_0; }
	inline void set_threadId_0(int32_t value)
	{
		___threadId_0 = value;
	}

	inline static int32_t get_offset_of_state_1() { return static_cast<int32_t>(offsetof(Iterator_1_t859CAAB8DD3B63D3758E13D2802ED7523B331199, ___state_1)); }
	inline int32_t get_state_1() const { return ___state_1; }
	inline int32_t* get_address_of_state_1() { return &___state_1; }
	inline void set_state_1(int32_t value)
	{
		___state_1 = value;
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(Iterator_1_t859CAAB8DD3B63D3758E13D2802ED7523B331199, ___current_2)); }
	inline float get_current_2() const { return ___current_2; }
	inline float* get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(float value)
	{
		___current_2 = value;
	}
};


// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.ValueTuple`3<System.Int32,System.DateTime,System.Object>>>
struct  List_1_t536C6C622CA51E03F83408B18F38078C6011749C  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	KeyValuePair_2U5BU5D_tBCC5BA104A36200A60C79941BD98B15245D981DE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t536C6C622CA51E03F83408B18F38078C6011749C, ____items_1)); }
	inline KeyValuePair_2U5BU5D_tBCC5BA104A36200A60C79941BD98B15245D981DE* get__items_1() const { return ____items_1; }
	inline KeyValuePair_2U5BU5D_tBCC5BA104A36200A60C79941BD98B15245D981DE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(KeyValuePair_2U5BU5D_tBCC5BA104A36200A60C79941BD98B15245D981DE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t536C6C622CA51E03F83408B18F38078C6011749C, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t536C6C622CA51E03F83408B18F38078C6011749C, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t536C6C622CA51E03F83408B18F38078C6011749C, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t536C6C622CA51E03F83408B18F38078C6011749C_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	KeyValuePair_2U5BU5D_tBCC5BA104A36200A60C79941BD98B15245D981DE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t536C6C622CA51E03F83408B18F38078C6011749C_StaticFields, ____emptyArray_5)); }
	inline KeyValuePair_2U5BU5D_tBCC5BA104A36200A60C79941BD98B15245D981DE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline KeyValuePair_2U5BU5D_tBCC5BA104A36200A60C79941BD98B15245D981DE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(KeyValuePair_2U5BU5D_tBCC5BA104A36200A60C79941BD98B15245D981DE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct  List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E, ____items_1)); }
	inline KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* get__items_1() const { return ____items_1; }
	inline KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E_StaticFields, ____emptyArray_5)); }
	inline KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* get__emptyArray_5() const { return ____emptyArray_5; }
	inline KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* value)
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


// System.Collections.Generic.List`1<UnityEngine.LowLevel.PlayerLoopSystem>
struct  List_1_t475CB5B95C70C448DEE1D3D60BD123ADFB003B87  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	PlayerLoopSystemU5BU5D_t3BA4C765F5D8A6C384A54624258E9A167CA8CD17* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object 