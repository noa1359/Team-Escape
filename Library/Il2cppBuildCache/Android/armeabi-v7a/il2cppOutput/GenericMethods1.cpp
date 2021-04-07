#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>


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

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Converter`2<System.Object,System.Object>
struct Converter_2_t4BA9425522FA533E290EBA0F69B2FA37B7CBB0F6;
// System.Converter`2<System.UInt16,System.Int32>
struct Converter_2_t116CE3558C214AAA1907E7B668F52CAC2211C25B;
// System.Converter`2<UnityEngine.Vector2,UnityEngine.Vector3>
struct Converter_2_t1A5D46F633D88BE9B4B9655167D34EE0498BC4AF;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Timeline.IntervalTree`1/Entry<System.Object>>
struct EqualityComparer_1_t1934C7723FDAE58458FEA7634F60234374E7706B;
// System.Collections.Generic.EqualityComparer`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.Object>>
struct EqualityComparer_1_tEFECEF9BD24787D199B80C055EE44F316C4B6CDA;
// System.Collections.Generic.EqualityComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.ValueTuple`3<System.Int32,System.DateTime,System.Object>>>
struct EqualityComparer_1_tDAEB55FBBA7F49DFA550C2D49FCBD14980F4E94B;
// System.Collections.Generic.EqualityComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct EqualityComparer_1_t1081D82D8958685A1778AC51629A2B36825400C7;
// System.Collections.Generic.EqualityComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>
struct EqualityComparer_1_tFDF5741E92C2A812DD9AE68E6E5767EABFE76A92;
// System.Collections.Generic.EqualityComparer`1<System.Nullable`1<System.Boolean>>
struct EqualityComparer_1_tEBB7E935771FF7AA71757472A25E7F08CC2E2DB2;
// System.Collections.Generic.EqualityComparer`1<System.Nullable`1<System.Int32>>
struct EqualityComparer_1_tE6FB5408D3BEEB0AB3468AC17CE5D6BB1DC15C61;
// System.Collections.Generic.EqualityComparer`1<System.Nullable`1<System.Single>>
struct EqualityComparer_1_t1E89713A05AF5A93FE7C38080621E60CFB336DC9;
// System.Collections.Generic.EqualityComparer`1<System.Nullable`1<UnityEngine.Vector3>>
struct EqualityComparer_1_tD4E4CFA37DB9D53793B1EA0A6B5C8CDF0E1464FC;
// System.Collections.Generic.EqualityComparer`1<UniRx.Async.UniTask`1<System.Object>>
struct EqualityComparer_1_tE2F89A554460328C624546BCE110CF1B6E1FEEDF;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.AnimatorClipInfo>
struct EqualityComparer_1_tA852CA009CE5FD43A6521D625D4E566F37C9CB6F;
// System.Collections.Generic.EqualityComparer`1<System.Boolean>
struct EqualityComparer_1_tA00ECA27EEC6CA6AADD7F115EB7E6A654C8E96E7;
// System.Collections.Generic.EqualityComparer`1<System.Byte>
struct EqualityComparer_1_t315BFEDB969101238C563049FF00D5CB9F8D6509;
// System.Collections.Generic.EqualityComparer`1<System.Char>
struct EqualityComparer_1_t5A410E1AF4F49A297AB2DC20A45E858B099B3D30;
// System.Collections.Generic.EqualityComparer`1<Naninovel.ChoiceState>
struct EqualityComparer_1_tC542F9CE84DF59B76778322680A2D53536C2BD75;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Color32>
struct EqualityComparer_1_t2A96FB8DFC770B71EEA338DE7A96120575599ED5;
// System.Collections.Generic.EqualityComparer`1<Naninovel.CustomVariable>
struct EqualityComparer_1_tA37E1246299532BAC78546A7645D6FD23E6A0620;
// System.Collections.Generic.EqualityComparer`1<ClipperLib.DoublePoint>
struct EqualityComparer_1_tBF7431370AB81C2F8532BDBD7B20707A521AC473;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.TextCore.GlyphRect>
struct EqualityComparer_1_tFF7DF4CD167545A6A2BEFD7F7F048B176404806A;
// System.Collections.Generic.EqualityComparer`1<System.Int32>
struct EqualityComparer_1_t20B8E5927E151143D1CBD8554CAF17F0EAC1CF62;
// System.Collections.Generic.EqualityComparer`1<System.Int32Enum>
struct EqualityComparer_1_t399C4B066E24442E62E52C1FD1CCF501E96C846F;
// System.Collections.Generic.EqualityComparer`1<ClipperLib.IntPoint>
struct EqualityComparer_1_t47F1323CBB582F1865CAEC9F0AA2672A2022EC4E;
// System.Collections.Generic.EqualityComparer`1<Naninovel.IntRange>
struct EqualityComparer_1_t8DB7010270340843A57892CF9E2910ED110E873C;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Timeline.IntervalTreeNode>
struct EqualityComparer_1_tC30D324749C7DA23F91E3F25D66CBE5DC4F84B80;
// System.Collections.Generic.EqualityComparer`1<NaninovelInventory.InventorySlotState>
struct EqualityComparer_1_t2AF8FA53C3A658D142D850CBD2C28AD7BC4DE8C1;
// System.Collections.Generic.EqualityComparer`1<Naninovel.ManagedTextRecord>
struct EqualityComparer_1_t7CB8B2CCA93BC9FF9F1A11D7D59FD4C8688A8552;
// System.Collections.Generic.EqualityComparer`1<System.Object>
struct EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Playables.PlayableBinding>
struct EqualityComparer_1_t467B24D8C73267D1D8543824A5515E1597060EA4;
// System.Collections.Generic.EqualityComparer`1<Naninovel.PlaybackSpot>
struct EqualityComparer_1_tCD421FF884DB784BEA6C2A55B1AF4AB9BD2F7D4E;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.LowLevel.PlayerLoopSystem>
struct EqualityComparer_1_tAB8C64EB045D6AFC2EAA0934AAA8BA301606480B;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.LowLevel.PlayerLoopSystemInternal>
struct EqualityComparer_1_t2BBD7722024216E8B22E0921B91E7D8E1B783D56;
// System.Collections.Generic.EqualityComparer`1<Naninovel.ProvisionSource>
struct EqualityComparer_1_t8109E43F56B7D6C39729804F01D4500A02F0A117;
// System.Collections.Generic.EqualityComparer`1<Naninovel.RawDataRepresentation>
struct EqualityComparer_1_tA75E9D21758CC0A24B1FB901F335AEA13071EE1B;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.RaycastHit2D>
struct EqualityComparer_1_tACC51A89C90F0C73EA15B5F75CD1AC2E1C61E094;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.EventSystems.RaycastResult>
struct EqualityComparer_1_tD0037D51E6363B57954033486B2BF58738433B8E;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Resolution>
struct EqualityComparer_1_tD943CCB41DCFA3CA0563E980EE956B707832FAC4;
// System.Collections.Generic.EqualityComparer`1<Naninovel.ScriptParseError>
struct EqualityComparer_1_t43FF2E623963526D8D02C777E603CA23DCAA93B5;
// System.Collections.Generic.EqualityComparer`1<System.Single>
struct EqualityComparer_1_t6C59536EBB4DD1217C6DBCECEC22F9F4202F710F;
// System.Collections.Generic.EqualityComparer`1<Naninovel.SpawnedObjectState>
struct EqualityComparer_1_tD9FD4C0D2B800A0296077619D73CF8C2261D6591;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.UIElements.StyleSelectorPart>
struct EqualityComparer_1_t5E7DE76F7C6B86BF557983C9C7EB35E4567D95F8;
// System.Collections.Generic.EqualityComparer`1<Naninovel.ArabicSupport.TashkeelLocation>
struct EqualityComparer_1_t9ECD3171A8F77C896F561D8B0E37A1E67DE7B430;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.UICharInfo>
struct EqualityComparer_1_t290DD173FACA97F400C1127A5C7A758A53677210;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.UILineInfo>
struct EqualityComparer_1_t906CC08AF3C90173A8217B5E4F41B4A1D8A17D0B;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.UIVertex>
struct EqualityComparer_1_t1A201EA4D36D150B1EDD81F1738845AE9EB44676;
// System.Collections.Generic.EqualityComparer`1<System.UInt32>
struct EqualityComparer_1_tE8847AB7887F4B8AC3A62DFDA664396EB213B3C0;
// System.Collections.Generic.EqualityComparer`1<UniRx.Async.UniTask>
struct EqualityComparer_1_t466AA1CF71CD5F07F44E552E10500C79041A2943;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector2>
struct EqualityComparer_1_t6779B568DF74AAD57393C6D2A62B852EC780CC09;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector2Int>
struct EqualityComparer_1_tC4034E1B2C8FBB6B7E0BB7A4B52BE9113FCA423B;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector3>
struct EqualityComparer_1_t3BB33804F138CAE0908623F6BFE2C7416362B9A7;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector4>
struct EqualityComparer_1_tF0279A3F5650C6035C7E9ABDE4237DCE38E8507E;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Timeline.AnimationOutputWeightProcessor/WeightInfo>
struct EqualityComparer_1_t69E7C5FFC596AB110865DDAB52D7FB8620CBB387;
// System.Collections.Generic.EqualityComparer`1<Naninovel.AudioManager/ClipState>
struct EqualityComparer_1_t0ED216784BBF5ED552F0F304FFC09C0BD892B853;
// System.Collections.Generic.EqualityComparer`1<Naninovel.BacklogMessage/State>
struct EqualityComparer_1_t955EF0409EEC0E2683CFA076070A124AE3BC9593;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.BeforeRenderHelper/OrderBlock>
struct EqualityComparer_1_tCE1E074B8086BD74052325934835347938939412;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Camera/RenderRequest>
struct EqualityComparer_1_t9886DA9419AD18F17F6D589F94F26DF1933417C2;
// System.Collections.Generic.EqualityComparer`1<Cinemachine.CameraState/CustomBlendable>
struct EqualityComparer_1_t309B8934F991283CC72F5AA5BD856A69CD262864;
// System.Collections.Generic.EqualityComparer`1<Naninovel.UI.ChatMessage/State>
struct EqualityComparer_1_t9F3C74CBD671D36DA58F382C63221550FA99C0EF;
// System.Collections.Generic.EqualityComparer`1<Cinemachine.CinemachineClearShot/Pair>
struct EqualityComparer_1_t39D95216F5C42FAD5E4168E30FEF95163BDE9542;
// System.Collections.Generic.EqualityComparer`1<Cinemachine.CinemachineStateDrivenCamera/HashPair>
struct EqualityComparer_1_t0A29FB331A674BE9363AA48DDA8A19A34E815E9E;
// System.Collections.Generic.EqualityComparer`1<Cinemachine.ConfinerOven/PolygonSolution>
struct EqualityComparer_1_t487478830D850443CBBE766BBB707D2644056C3A;
// System.Collections.Generic.EqualityComparer`1<Naninovel.ArabicSupport.RichTextFixer/Tag>
struct EqualityComparer_1_t0EFB8FE38455E497C2B49647068A9B1E89CE16C7;
// System.Collections.Generic.EqualityComparer`1<Naninovel.RuntimeInitializer/ServiceInitData>
struct EqualityComparer_1_t92C22588981C4C6279F07D088D50A667D97938BE;
// System.Collections.Generic.EqualityComparer`1<TMPro.SpriteAssetUtilities.TexturePacker_JsonArray/Frame>
struct EqualityComparer_1_t60A9547520815325B2D347E99135CBDD9972027E;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Timeline.TimeNotificationBehaviour/NotificationEntry>
struct EqualityComparer_1_t504EC44B6CB47ABBB0378B6BD6C892A107A07613;
// System.Collections.Generic.EqualityComparer`1<Naninovel.UIManager/ManagedUI>
struct EqualityComparer_1_t3029CF7F33DF9F976F85B313139A39F64BA25959;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.UnitySynchronizationContext/WorkRequest>
struct EqualityComparer_1_t9E29605F47D17DB737066B127517BF205E10444D;
// System.Collections.Generic.EqualityComparer`1<Cinemachine.TargetPositionCache/CacheCurve/Item>
struct EqualityComparer_1_t1434FD4FD812B51095FAD403DA787014AC976140;
// System.Collections.Generic.EqualityComparer`1<Cinemachine.TargetPositionCache/CacheEntry/RecordingItem>
struct EqualityComparer_1_t50675B32EC95B2F58E4B46E79AD063EC3A3B4F00;
// System.Func`2<System.Object,System.Nullable`1<System.Boolean>>
struct Func_2_t6A62713CBB1FDE7F950D64833A9251B32F16D53D;
// System.Func`2<System.Object,System.Nullable`1<System.DateTime>>
struct Func_2_t2F8F9D51714E1DC6A409C5D09ABC499F6484624F;
// System.Func`2<System.Object,System.Nullable`1<System.Int32>>
struct Func_2_tF690BAA548D29EADC5635B1C8E7A7C6C9E4F7CFE;
// System.Func`2<System.Object,System.Nullable`1<System.Single>>
struct Func_2_t936E494B9795BDACAC731255502447EA0D04753F;
// System.Func`2<System.Object,UniRx.Async.UniTask`1<System.Object>>
struct Func_2_t4FBC5EC3F6C5C03EE5FDF8BFC8642C815604BBBF;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8;
// System.Func`2<System.Object,Naninovel.ChoiceState>
struct Func_2_t9A9057369895D85671C334845D2E584DC5692333;
// System.Func`2<System.Object,System.Int32>
struct Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C;
// System.Func`2<System.Object,NaninovelInventory.InventorySlotState>
struct Func_2_tB7F16E627387FD93F3A4BA51240D9D8B3B0497E7;
// System.Func`2<System.Object,System.Object>
struct Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436;
// System.Func`2<System.Object,System.Single>
struct Func_2_t78F21BB7B6C7D754A8C4D71ACB39668A8F967BA1;
// System.Func`2<System.Object,Naninovel.SpawnedObjectState>
struct Func_2_t262A689C95CDEA87D5AED9DA2ABC7DB3D3961FD7;
// System.Func`2<System.Object,UniRx.Async.UniTask>
struct Func_2_t60122EE02FD42379BA30E10AAF9A7E807B584EDB;
// System.Func`2<System.Object,Naninovel.BacklogMessage/State>
struct Func_2_tE0D426F6EF9F8C88B6D40B3C02FA9D48864CFD8C;
// System.Func`2<System.Object,Naninovel.UI.ChatMessage/State>
struct Func_2_tC39E9C519BE95849579A2C0A65DA1F077BA36FE4;
// System.Func`2<System.Object,Naninovel.CameraManager/GameState/CameraComponent>
struct Func_2_tBC4E124EDC083070BA51F5FCAA8342807E119E72;
// System.Func`2<Naninovel.RawDataRepresentation,System.Nullable`1<System.Boolean>>
struct Func_2_t34826273574659231B416A08A2F26A7A46D34D6D;
// System.Func`2<Naninovel.RawDataRepresentation,System.Nullable`1<System.DateTime>>
struct Func_2_t7750E3E5808ADDA93851F2CFD4F6A4D9BABED838;
// System.Func`2<Naninovel.RawDataRepresentation,System.Nullable`1<System.Int32>>
struct Func_2_t74D344152C334F746E96BA6B1D05FF6645A46AED;
// System.Func`2<Naninovel.RawDataRepresentation,System.Nullable`1<System.Single>>
struct Func_2_tEA5AFB34BA43D3E1D8D00C55B9C8961E5FE390B4;
// System.Func`2<Naninovel.RawDataRepresentation,UniRx.Async.UniTask`1<System.Object>>
struct Func_2_tB22187EACECEEC8E963125A04EB166E4F58BEA95;
// System.Func`2<Naninovel.RawDataRepresentation,System.Boolean>
struct Func_2_t8255FD6CA5156E9A21B12AFDF010DCDEED1945F1;
// System.Func`2<Naninovel.RawDataRepresentation,Naninovel.ChoiceState>
struct Func_2_tC946F3EE43E665C571E7F4846CFD4BABE4B84898;
// System.Func`2<Naninovel.RawDataRepresentation,System.Int32>
struct Func_2_t309DD720E359BDEC3664751FA93ACD5DB009F5BA;
// System.Func`2<Naninovel.RawDataRepresentation,NaninovelInventory.InventorySlotState>
struct Func_2_t3D21EFF4BA219EF8C92BE43512CA68FF0648337D;
// System.Func`2<Naninovel.RawDataRepresentation,System.Object>
struct Func_2_tEADBE82B1A62BB610DB4F0B3412ACC58A6C600FB;
// System.Func`2<Naninovel.RawDataRepresentation,System.Single>
struct Func_2_t028D312F78089960F7036BB766D655AEBA0A1DC3;
// System.Func`2<Naninovel.RawDataRepresentation,Naninovel.SpawnedObjectState>
struct Func_2_t27F71B6D4D35684F87C79493619BE43C5B50EA79;
// System.Func`2<Naninovel.RawDataRepresentation,UniRx.Async.UniTask>
struct Func_2_t550A9CA494717B9AE596911918D334EB69230638;
// System.Func`2<Naninovel.RawDataRepresentation,Naninovel.BacklogMessage/State>
struct Func_2_tE40C0691DA836BF4C589B4F254AD7DEA4EB71F7D;
// System.Func`2<Naninovel.RawDataRepresentation,Naninovel.UI.ChatMessage/State>
struct Func_2_tB38C83DB6BC6441CF291AC68CC2FB4A498DC1C89;
// System.Func`2<Naninovel.RawDataRepresentation,Naninovel.CameraManager/GameState/CameraComponent>
struct Func_2_tD4F6897EC3F07532020A3B26099266CCC9C69ECD;
// System.Func`2<UnityEngine.UIElements.StyleSelectorPart,System.Nullable`1<System.Boolean>>
struct Func_2_t3DB8B8915FF819BB4A4B8F8BACF29CB870066387;
// System.Func`2<UnityEngine.UIElements.StyleSelectorPart,System.Nullable`1<System.DateTime>>
struct Func_2_tEE23B053007BC8AD91BEE03E7AD68D5EE481CF1B;
// System.Func`2<UnityEngine.UIElements.StyleSelectorPart,System.Nullable`1<System.Int32>>
struct Func_2_tE3B3AC07264ACD34D17946BBF630A40365F76651;
// System.Func`2<UnityEngine.UIElements.StyleSelectorPart,System.Nullable`1<System.Single>>
struct Func_2_tC0333D9824E73B503B7AB735AADAF81FC4712E75;
// System.Func`2<UnityEngine.UIElements.StyleSelectorPart,UniRx.Async.UniTask`1<System.Object>>
struct Func_2_t2F48622C7535AF5806FE0F06726C21521E9F50F1;
// System.Func`2<UnityEngine.UIElements.StyleSelectorPart,System.Boolean>
struct Func_2_t0A3D12C95DB15867D9D7D83394FF45A41B67FDAC;
// System.Func`2<UnityEngine.UIElements.StyleSelectorPart,Naninovel.ChoiceState>
struct Func_2_t08C69461BCCFAAA60C90C3A7CD57B046448A2DA4;
// System.Func`2<UnityEngine.UIElements.StyleSelectorPart,System.Int32>
struct Func_2_t8A5F47384D3AB42A5C3C8659860DB39D858084FC;
// System.Func`2<UnityEngine.UIElements.StyleSelectorPart,NaninovelInventory.InventorySlotState>
struct Func_2_t455950937A4CB4943266D61F07788A3D87D9F1FA;
// System.Func`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>
struct Func_2_t43979C5A872BA9ED7A923D533A01683A98D71957;
// System.Func`2<UnityEngine.UIElements.StyleSelectorPart,System.Single>
struct Func_2_t2E0126621E0BCFC78724B479392949F66BEB3D50;
// System.Func`2<UnityEngine.UIElements.StyleSelectorPart,Naninovel.SpawnedObjectState>
struct Func_2_t448E2462C44E45063ADEDE4599F7C480D04F4A04;
// System.Func`2<UnityEngine.UIElements.StyleSelectorPart,UniRx.Async.UniTask>
struct Func_2_tB52E12D722FD0B9FF30CA70BAF573ABA82D35F89;
// System.Func`2<UnityEngine.UIElements.StyleSelectorPart,Naninovel.BacklogMessage/State>
struct Func_2_tBC066CB13AB6A15B41FF08B49C0C519CAF2190B5;
// System.Func`2<UnityEngine.UIElements.StyleSelectorPart,Naninovel.UI.ChatMessage/State>
struct Func_2_t3672D50CAD3322DFC0CC9096D393794F26DC93CD;
// System.Func`2<UnityEngine.UIElements.StyleSelectorPart,Naninovel.CameraManager/GameState/CameraComponent>
struct Func_2_t92B8BB005B535A1E7890EF558F6708920CD5C6F6;
// Naninovel.IActorManager`4<System.Object,System.Object,System.Object,System.Object>
struct IActorManager_4_t329D41E0B051699E54C3038B398C1EE839592BC8;
// UniRx.Async.IAwaiter`1<UniRx.Async.AsyncUnit>
struct IAwaiter_1_t6FCACC3C4FF823DF8EE2F573EA8ABCA40F665DA3;
// UniRx.Async.IAwaiter`1<System.Boolean>
struct IAwaiter_1_tE675224ED01460C3DE039582B39AAA06C66B32CC;
// UniRx.Async.IAwaiter`1<System.Object>
struct IAwaiter_1_tFD5DC317421403235686D3A61F3BEAA1D8D6700D;
// System.Collections.Generic.IComparer`1<System.Object>
struct IComparer_1_t20C0141C3FEEDAA44BFE8521FEEDDF47289CB40B;
// System.Collections.Generic.IComparer`1<System.UInt64>
struct IComparer_1_tCA34D86DF5FB128BAEE3BC4368D8742E6F28E286;
// System.Collections.Generic.IEnumerable`1<System.Nullable`1<System.Boolean>>
struct IEnumerable_1_tCC20D6617A785B4C7F02014301E511E12CAE2C6F;
// System.Collections.Generic.IEnumerable`1<System.Nullable`1<System.DateTime>>
struct IEnumerable_1_t148197E707056C588E7F22336E7517FBF57E220D;
// System.Collections.Generic.IEnumerable`1<System.Nullable`1<System.Int32>>
struct IEnumerable_1_tADB400B43A76DA43063F5ED3C3BD11A7E9E10443;
// System.Collections.Generic.IEnumerable`1<System.Nullable`1<System.Single>>
struct IEnumerable_1_t8748D435947252D4C5978256F042AE257902FBAC;
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
// System.Collections.Generic.IEnumerable`1<System.Single>
struct IEnumerable_1_t673DFF64E51C18A8B1287F4BD988966CE3B15A45;
// System.Collections.Generic.IEnumerable`1<Naninovel.SpawnedObjectState>
struct IEnumerable_1_t86CE76822192DDC8CF98B2EB18FCADF483A77163;
// System.Collections.Generic.IEnumerable`1<UniRx.Async.UniTask>
struct IEnumerable_1_t2ABA413E4298E7B3EAB9414C0C3654796603ED35;
// System.Collections.Generic.IEnumerable`1<Naninovel.BacklogMessage/State>
struct IEnumerable_1_tA810D7E354A7D4C19CA8BEAF1D61FAE1C13DD0C3;
// System.Collections.Generic.IEnumerable`1<Naninovel.UI.ChatMessage/State>
struct IEnumerable_1_tD7A81CF939950BBD4007DF4EFF4ECAEB286B6CAC;
// System.Collections.Generic.IEnumerable`1<Naninovel.CameraManager/GameState/CameraComponent>
struct IEnumerable_1_t786D20C71CC17530F84F351573336578DB5A4A52;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeNamedArgument>
struct IList_1_tC94A6A591E58FD9BB826AF5D15001E425B682707;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeTypedArgument>
struct IList_1_tA9B3F6D4DDBA3A555103C2DDC65AD75936EAB181;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t707982BD768B18C51D263C759F33BCDBDFA44901;
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<ClipperLib.IntPoint>>
struct List_1_t85FB037B5107958F6FB6BD28F67B2CF803B952F4;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<Naninovel.RawDataRepresentation>
struct List_1_t04D278BE7CCDC73AA32397D6C62027029C83F7FB;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSelectorPart>
struct List_1_tE7DC2F192C483F9E5722779E3C2C1910490AAE59;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeNamedArgument>
struct ReadOnlyCollection_1_t02BB5C6352D96419CA6197B50B8B18B3F6A95AE0;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.CustomAttributeTypedArgument>
struct ReadOnlyCollection_1_t8838EC5DC5D2BD0C82AEA8EAE373E5AE9F09B294;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t921D1901AD35062BE31FAEB0798A4B814F33A3C3;
// UniRx.Async.UniTaskCompletionSource`1<System.Object>
struct UniTaskCompletionSource_1_t984D25C090F87D0F4F2EC31B0D74FEBADA702172;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>
struct WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2;
// System.Linq.Enumerable/WhereSelectListIterator`2<Naninovel.RawDataRepresentation,System.Object>
struct WhereSelectListIterator_2_tDCC43CB8941843A9FDC2FE395B4719514EED598A;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>
struct WhereSelectListIterator_2_t0F9C36BA8F331B1C4C968AB639F343F642078798;
// UnityEngine.Timeline.IntervalTree`1/Entry<System.Object>[]
struct EntryU5BU5D_tCA19DBDB7AC2B3545E58EA8A9DEB906D76ED7B22;
// System.Collections.Generic.KeyValuePair`2<System.DateTime,System.Object>[]
struct KeyValuePair_2U5BU5D_t7A55D2FEB3F9BBFE7CC9322E7E8F00A4D1C77D4D;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.ValueTuple`3<System.Int32,System.DateTime,System.Object>>[]
struct KeyValuePair_2U5BU5D_tBCC5BA104A36200A60C79941BD98B15245D981DE;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>[]
struct KeyValuePair_2U5BU5D_tF62665482EE74C89EBA91020DCD7154032D09772;
// System.Nullable`1<System.Boolean>[]
struct Nullable_1U5BU5D_tE8D45AAEF262FC03BEEEDE9E0A4D2EFEC1F67364;
// System.Nullable`1<System.Int32>[]
struct Nullable_1U5BU5D_t5B3D203913020903FAA29BB280A49C2908B4ED84;
// System.Nullable`1<System.Single>[]
struct Nullable_1U5BU5D_t02F1C69D15AC8D2407B9D63017EF6E7EC4AD5F94;
// System.Nullable`1<UnityEngine.Vector3>[]
struct Nullable_1U5BU5D_t63C63510BCAEC224390B7095076D9098AF443C99;
// UniRx.Async.UniTask`1<System.Boolean>[]
struct UniTask_1U5BU5D_tD17DEE7F3C277B49EE4DBE93CF882F3B75DB9728;
// UniRx.Async.UniTask`1<System.Object>[]
struct UniTask_1U5BU5D_tB6FF9EDF53A9D24687EC41FE2257A0F0AAAE79D7;
// UnityEngine.AnimatorClipInfo[]
struct AnimatorClipInfoU5BU5D_tCB3D927F30A1769FAEA216264EE98EFFDA4E5DF2;
// System.Boolean[]
struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// Naninovel.ChoiceState[]
struct ChoiceStateU5BU5D_tCFEFB8D621DFB9F92C02A86BEA8E7EA31F56B27D;
// UnityEngine.Color32[]
struct Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2;
// System.Reflection.CustomAttributeNamedArgument[]
struct CustomAttributeNamedArgumentU5BU5D_t4EC7EAEB21A9435BFB8F2693AE8B3AD73E574451;
// System.Reflection.CustomAttributeTypedArgument[]
struct CustomAttributeTypedArgumentU5BU5D_t20B1BE58263263B492DAC21E270358FB31189F98;
// Naninovel.CustomVariable[]
struct CustomVariableU5BU5D_tC35D9F37232B09951B84C3B8BE6F5D8037230A7E;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// ClipperLib.DoublePoint[]
struct DoublePointU5BU5D_t3F8318E1C9A4E09E5B01C86EA593EA5822C44AAF;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t0C9E436904E570F798885BC6F264C7AE6608B5C6;
// UnityEngine.TextCore.GlyphRect[]
struct GlyphRectU5BU5D_tD5D74BCDBD33C0E1CF2D67D5419C526C807D3BDA;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_t8150DD4545DE751DD24E4106F1E66C41DFFE38EA;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t57D37E3CA431B98ECF9444788AA9C047B990DDBB;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.Int32Enum[]
struct Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD;
// ClipperLib.IntPoint[]
struct IntPointU5BU5D_t049A192BF5E5E7640BCAD7DBFAE22E5FCC7F992B;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// Naninovel.IntRange[]
struct IntRangeU5BU5D_tE1492448914D0A10F4F62F99F057F45DF35A0447;
// UnityEngine.Timeline.IntervalTreeNode[]
struct IntervalTreeNodeU5BU5D_tE6D2C5822CF028FBC06899DAFCB9124B94AC296A;
// NaninovelInventory.InventorySlotState[]
struct InventorySlotStateU5BU5D_t6CAFFC54D1E2A0145D1B0EC0CE8DCEA77C91AB8F;
// Naninovel.ManagedTextRecord[]
struct ManagedTextRecordU5BU5D_t4D1C8D1369EEC72AC81440D5A0373ADA818EDE0A;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.Playables.PlayableBinding[]
struct PlayableBindingU5BU5D_t4FD470872BB5C6A1794C9CB06830B557CA874CB3;
// Naninovel.PlaybackSpot[]
struct PlaybackSpotU5BU5D_t6DC6730BB7715DF4E9F1E1C7ED2C26E706B1590F;
// UnityEngine.LowLevel.PlayerLoopSystem[]
struct PlayerLoopSystemU5BU5D_t3BA4C765F5D8A6C384A54624258E9A167CA8CD17;
// UnityEngine.LowLevel.PlayerLoopSystemInternal[]
struct PlayerLoopSystemInternalU5BU5D_tB7136781E44D18A3A847122BAC97F4AACEA614F6;
// Naninovel.ProvisionSource[]
struct ProvisionSourceU5BU5D_t4A04B58C89D7124FB394FAB0B9AF03772C0D68C9;
// Naninovel.RawDataRepresentation[]
struct RawDataRepresentationU5BU5D_t99A0BEA044D230E70A9FF4D546DF705822FFD95F;
// UnityEngine.RaycastHit2D[]
struct RaycastHit2DU5BU5D_tDEABD9FBBA32C695C932A32A1B8FB9C06A496F09;
// UnityEngine.EventSystems.RaycastResult[]
struct RaycastResultU5BU5D_t55B9DF597EFA3BE063604C0950E370D850283B9D;
// UnityEngine.Resolution[]
struct ResolutionU5BU5D_t06BC9930CBEA8A2A4EEBA9534C2498E7CD0B5597;
// Naninovel.ScriptParseError[]
struct ScriptParseErrorU5BU5D_tDD2680C777492FC5C131CA7A5027F42517BE0744;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// Naninovel.SpawnedObjectState[]
struct SpawnedObjectStateU5BU5D_t36DEDB1E92780365E1420E0C4DC7B1906CB79B37;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.UIElements.StyleSelectorPart[]
struct StyleSelectorPartU5BU5D_tD8762DADE4104C7D73D7B821DF7E5BBC87417BB7;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t5271ED3FC5D741D05A220867865A1DA1EB04919A;
// Naninovel.ArabicSupport.TashkeelLocation[]
struct TashkeelLocationU5BU5D_t1C824A515FDB15D2024C1BF941D11D915D697F88;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// UnityEngine.UICharInfo[]
struct UICharInfoU5BU5D_t5B6AEA3245EC021FAA20582D295434FF61FBF1F0;
// UnityEngine.UILineInfo[]
struct UILineInfoU5BU5D_tBE1D9E4EC8C7A5A1F98B7CCF93D8A8A2FF9B2F69;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// System.UInt16[]
struct UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67;
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
// System.UInt64[]
struct UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2;
// UniRx.Async.UniTask[]
struct UniTaskU5BU5D_t4D8436B3E5AAE085033848B68D5D4B8B5B8CB113;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector2Int[]
struct Vector2IntU5BU5D_tA91A00C258BDBF38BD76CF790B67CB344A126E9E;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t4B20066E10D8FF621FB20C05F21B22167C90F548;
// UnityEngine.jvalue[]
struct jvalueU5BU5D_t0F8734CC5E629CAA0CBCB817A913EC6B9220EE99;
// UnityEngine.Timeline.AnimationOutputWeightProcessor/WeightInfo[]
struct WeightInfoU5BU5D_t492B24E63F911BFB5E0CE6068D1F10AACF6BDAB5;
// Naninovel.AudioManager/ClipState[]
struct ClipStateU5BU5D_t068436E88FFA38E99D1ED5050A5B7A55774EA109;
// Naninovel.BacklogMessage/State[]
struct StateU5BU5D_t7F958399F6AA76E62326A9862AA78E73883AA8B2;
// UnityEngine.BeforeRenderHelper/OrderBlock[]
struct OrderBlockU5BU5D_tA6CA8293A67A97712BD2A0D7ABBA77E770053817;
// UnityEngine.Camera/RenderRequest[]
struct RenderRequestU5BU5D_t2D09D44B1472DED405E7676210574FBDE93EF664;
// Cinemachine.CameraState/CustomBlendable[]
struct CustomBlendableU5BU5D_tB4EEA4C237E6FFE52A3E4AB5D0C0D25AB65DC02C;
// Naninovel.UI.ChatMessage/State[]
struct StateU5BU5D_t4278F04B5570ADDCFFF0936AF4794C53E1222628;
// Cinemachine.CinemachineClearShot/Pair[]
struct PairU5BU5D_t7441CA8A5CDCAB9FDC960E4D579F036B21001AD9;
// Cinemachine.CinemachineStateDrivenCamera/HashPair[]
struct HashPairU5BU5D_tE3131CB7387EDAE7F06F6FB4499C99A71C903132;
// Cinemachine.ConfinerOven/PolygonSolution[]
struct PolygonSolutionU5BU5D_t3426493BCD2709D4E07869AC6E383481DCCB2E9F;
// Naninovel.ArabicSupport.RichTextFixer/Tag[]
struct TagU5BU5D_t9433F3BA43DA0C4EDA15E30B74927E486DA1FAE7;
// Naninovel.RuntimeInitializer/ServiceInitData[]
struct ServiceInitDataU5BU5D_t99521252E54EFC261E7A3E7AF0EA5E99E90D4F86;
// TMPro.SpriteAssetUtilities.TexturePacker_JsonArray/Frame[]
struct FrameU5BU5D_tA35DF2C914436A366D682B67B0806332F54D6A5D;
// UnityEngine.Timeline.TimeNotificationBehaviour/NotificationEntry[]
struct NotificationEntryU5BU5D_t09774245BA02F3982CECCBB4CB7E3DAC2CA8B345;
// Naninovel.UIManager/ManagedUI[]
struct ManagedUIU5BU5D_t9D5EBA63BFFBAAB16347CD1E98F93375CB2480BD;
// UnityEngine.UnitySynchronizationContext/WorkRequest[]
struct WorkRequestU5BU5D_tFD014E941739D5AFA0353EDFE7D9CD61E8A43A3F;
// Cinemachine.TargetPositionCache/CacheCurve/Item[]
struct ItemU5BU5D_t1108E169C548FBD6E94B6418A98483F93C2FB3E8;
// Cinemachine.TargetPositionCache/CacheEntry/RecordingItem[]
struct RecordingItemU5BU5D_t519137B584A64E57F8188DDEE96C7A40220E40F5;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// Naninovel.ActorMetadata
struct ActorMetadata_tC302DC4B2D08DACA72B3409CC05C12B5AC23A7B3;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E;
// UnityEngine.AnimationClip
struct AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3;
// Naninovel.CustomMetadata
struct CustomMetadata_t69F98F45EB94C8FAC5FB6150C13747D8FB907FE7;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Exception
struct Exception_t;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// UniRx.Async.IAwaiter
struct IAwaiter_tE687B1C3BB0FDD9B1C3DE0AC61F6BEFD3DBC8B9C;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// Naninovel.UI.IManagedUI
struct IManagedUI_t41B0639D014B6C7AE354E8D37DCACAF8A49FFF03;
// UnityEngine.Playables.INotification
struct INotification_tFB7646E6B1EA37ECE9D39374A3BD74B278E19C56;
// Naninovel.IResourceProvider
struct IResourceProvider_t7988D0C7881EC379A354C5D171BA55C64ED0CD86;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.MissingMethodException
struct MissingMethodException_t84403BAD115335684834149401CDDFF3BDD42B41;
// System.MonoTypeInfo
struct MonoTypeInfo_tD048FE6E8A79174435DD9BA986294B02C68DFC79;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.RenderTexture
struct RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849;
// Naninovel.ResourceLoaderConfiguration
struct ResourceLoaderConfiguration_t84C7C3245F1687CBB4B19A69BCF5829C25F1F0B9;
// System.Reflection.RuntimeConstructorInfo
struct RuntimeConstructorInfo_t9B65F4BAA154E6B8888A68FA9BA02993090876BB;
// System.RuntimeType
struct RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C;
// System.String
struct String_t;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.Playables.PlayableBinding/CreateOutputMethod
struct CreateOutputMethod_t7A129D00E8823B50AEDD0C9B082C9CB3DF863876;
// UnityEngine.LowLevel.PlayerLoopSystem/UpdateFunction
struct UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA;

IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MissingMethodException_t84403BAD115335684834149401CDDFF3BDD42B41_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeArray_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00BA133FF3D84EAB4FB7DB5FB38F235C4E108ED9;
IL2CPP_EXTERN_C String_t* _stringLiteral07624473F417C06C74D59C64840A1532FCE2C626;
IL2CPP_EXTERN_C String_t* _stringLiteral1D86DE1FC0445C55F712ED0F6D3E32FED0A1E724;
IL2CPP_EXTERN_C String_t* _stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1;
IL2CPP_EXTERN_C String_t* _stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE;
IL2CPP_EXTERN_C String_t* _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D;
IL2CPP_EXTERN_C String_t* _stringLiteral45BE536C9F5116AD2AF9F35AA7EF84EC0980CA92;
IL2CPP_EXTERN_C String_t* _stringLiteral50E02893F5B6939534A49C535241D6B7BAFCF599;
IL2CPP_EXTERN_C String_t* _stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4;
IL2CPP_EXTERN_C String_t* _stringLiteral5E8864981A1D9D7DF38E3ABBDE863B7C527DFF86;
IL2CPP_EXTERN_C String_t* _stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8;
IL2CPP_EXTERN_C String_t* _stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED;
IL2CPP_EXTERN_C String_t* _stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E;
IL2CPP_EXTERN_C String_t* _stringLiteralD06FDE4FC2CBD6E5FAFE1400B04AC8E4F3001D0C;
IL2CPP_EXTERN_C String_t* _stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D;
IL2CPP_EXTERN_C String_t* _stringLiteralE2EEFB4BE0C9F57BA62E733F26387F8BA68AF67C;
IL2CPP_EXTERN_C String_t* _stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B;
IL2CPP_EXTERN_C String_t* _stringLiteralE68FFE708FFE8FC1D5DA3BEDB8B81DE1CCC64C34;
IL2CPP_EXTERN_C String_t* _stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB;
IL2CPP_EXTERN_C String_t* _stringLiteralF9010398F7F524C05AB19445BDCE02E617A3E267;
IL2CPP_EXTERN_C const RuntimeMethod* Activator_CreateInstance_TisRuntimeObject_m7E1C815AF8BF1A63D5333E0731413810BB5003B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject__CallStatic_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m83A8A3B4B24DB6B72463F545D29CB7C79991E5F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject__CallStatic_TisRuntimeObject_mAAF64B47991F10D459862656A226F55C65494278_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject__Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mB7DD4F06EA1F490EEE7BF7212477B499F02D1687_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject__Call_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_m1C0DEC63AD82985E729FC616EE82A628D3F5ABE3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject__Call_TisDouble_t42821932CB52DE2057E685D0E1AF3DE5033D2181_m9A9C0D9982DE6199C7270CBEFE4AFE7F5C690CF1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject__Call_TisInt16_tD0F031114106263BB459DA1F099FF9F42691295A_mD5105F3799547FD7E20CEC7EB8445C74F77057FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject__Call_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m230F1F17B6E6D26E20A577AF9E04CFE0D0774A0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject__Call_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_mBAEF562D6A79C8B84E35D9827D5FACDE21D9700E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject__Call_TisRuntimeObject_m5EA6DE517C2E29D2D486B812FF1DD1FEF9FDBCEA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject__Call_TisSByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_mC7B68E30753F3E6B104053558DA7040398DAE291_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject__Call_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m815D3536793DAD87275A47032E4CC1BD04420E47_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject__GetStatic_TisRuntimeObject_mF3D1173972DDF398A236F335928E3E630EC12BFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject__Get_TisRuntimeObject_m9282D2DA4FC34FF54F7B97A35E32969D24EB8495_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject__SetStatic_TisRuntimeObject_m90BFFA36B301BEB5B19FE5F9593B4F6F0D3AF694_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject__Set_TisRuntimeObject_m41FB0BA40F21043A2FE1E14F5F7524EFCF2C3AD2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_AsReadOnly_TisCustomAttributeNamedArgument_t618778691CF7F5B44F7177210A817A29D3DAEDDA_mB8DA46FEAD3ED45D178B47888B2F20830C77CB9D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_AsReadOnly_TisCustomAttributeTypedArgument_tE7152E8FACDD29A8E0040E151C86F436FA8E6910_m4F8988AD73E9B0FE98872F10345BBFE212DBA7D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_AsReadOnly_TisRuntimeObject_m4A2BCD531964107F0652CCF17641EA5A29E1304C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_BinarySearch_TisRuntimeObject_m001A2C3114F217525060599DFA0263C5D1C66F84_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_BinarySearch_TisRuntimeObject_m9FE3DB1E9AFF3661EB4480AA77B7479F53E7581F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_BinarySearch_TisRuntimeObject_mD0CC250B1461FF6741D359CB4CDBDC3005D9206F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_BinarySearch_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_m58E3C9AB22DF1FA4C9AC4B2F4594FD37D6B0ED20_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_BinarySearch_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_m625B35CF4D98288576070DA5F2E9D31A6672B405_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_ConvertAll_TisRuntimeObject_TisRuntimeObject_m165E567B6BC005DC27D8826CF41DE60D137ED090_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_ConvertAll_TisUInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mF388B55026233A78F2DA9AEA15BDBA34A3BAD10D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_ConvertAll_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m2D4BD52A026115F595E2BF551F2882F7629550F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Fill_TisRuntimeObject_mADB7A1FA8643A62CB3E81FF1E1EDE477C9F8DF4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Fill_TisRuntimeObject_mDA09E33042AAC2C898873F0963A29507835ADB06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_FindAll_TisRuntimeObject_m6C99E1F41CA3A37631AE0568C1AE4C15E8B80359_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_FindIndex_TisRuntimeObject_m5CF86BB9986F07CC140632B7CC1F35DF40B316B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_FindIndex_TisRuntimeObject_m8C2C3294163821F98E9174D7E25CB9E992105E76_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_FindIndex_TisRuntimeObject_mD65FAE01CBEDCE302FE10C124FF2C7037A32D959_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_FindLastIndex_TisRuntimeObject_m186040B02154B825EA456D92414DB186A1F11F47_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_FindLastIndex_TisRuntimeObject_m5A8ABD5E86D0BF2346749EF5CF9AE8F04FBD1F9E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_FindLastIndex_TisRuntimeObject_mDB245904DEBEFAC17E7B9A75B7C9B81B844D00F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_FindLast_TisRuntimeObject_m0C74A2051B4B22B07B4F572407ECDA8AEF3A70F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Find_TisRuntimeObject_m90AB9A960F75686141096F01E1A87A52C029A5B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_ForEach_TisRuntimeObject_mCC83E2428D0B7325EF372CAF6A7A0035F8EFB267_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_IndexOf_TisAnimatorClipInfo_t758011D6F2B4C04893FCD364DAA936C801FBC610_mBC52E54A8B938F935AF2FB9BD622D5A6F7DAE240_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_IndexOf_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m78028137FA0C4DD6864FB85C487A1F7DFB8FFFFF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_IndexOf_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mAAEF8554D3369F4A14A85266D8130BFB1BABEA32_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_IndexOf_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_m50B1A0252CC83A50F60CD54CA63ED5FFDB91A945_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_IndexOf_TisChoiceState_t4700108CB9F53FDCC7A73E4CB9312761A4E30794_m79F3276801A0AE2922F8EFF5A557EF5284534F51_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_IndexOf_TisClipState_tADF9F844E1418477A40992FE127168075F539B8B_m411049ABEEFC5B948289E7C1BA5494553C1E3860_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_IndexOf_TisColor32_tDB54A78627878A7D2DE42BB028D64306A18E858D_m2DC44D46345BE845880AB8DC67A89AA05D8DFD64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_IndexOf_TisCustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B_m8884D6DC561FB79C65D70E181689A6C36AA087FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_IndexOf_TisCustomVariable_t4954DB6058EE540BED36A886B290B08972A0A881_mC9B4366AC8DC139F2309B3B86F9CBDBB15DF6F8B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_IndexOf_TisDoublePoint_t3A8833DEE90FAA325145090762A28622351F3C60_mC312A9378797987F34D0B010092303A9B5B0AF6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_IndexOf_TisEntry_t7354459F6787FFC973F7672A4A98A04A07EC9C46_m038FDF683242991BA5926FF6AC77891E4B7BD3DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_IndexOf_TisFrame_t277B57D2C572A3B179CEA0357869DB245F52128D_m317BC9288803F3363121F4A57A10BDD6F217C6F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_IndexOf_TisGlyphRect_t4F6A791326A28C2CEC6B13B0BD50A4F78280289D_m68FA8F48DCF0DE890A81056ED33D8C6460D405CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_IndexOf_TisHashPair_t09807509C741E786E249DC2F717CDA8E6BD80790_m5D765088FD7F548B55F409963825952E264CB04E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_IndexOf_TisInt32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C_mCF639A677F23A4DA6F740F53A0AA857E0628692C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_IndexOf_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m711E411B138A26A28D49962773478530EE268B30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_IndexOf_TisIntPoint_t4FCEFEFC3AA9AB4E769043D0F8CCB2E2D3D8ED06_m266F8FFB3748E8FAF7494EE1669D52AF4168C442_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_IndexOf_TisIntRange_tAA39CD288013D22B3D07BF042377350D83281557_mF690D2D8CEAFEB6CEA93976BE9EE506C661B5A52_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_IndexOf_TisIntervalTreeNode_t14723E53C7F0CB94A5F64C64519323DD44AAB85D_mF8110A97A2CB11CBF17FEC5408E40F1FCBD28C3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_IndexOf_TisInventorySlotState_t7290FA79C2BE730B03A6B5F86B3E61552876BEEA_m6109C8250AC222C2B50ECA528C48D65D9459FC6B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_IndexOf_TisItem_tD358B647F06D81E0559DB72CB866D99EF2538A6B_mF15295FA38585230256B6E955B3774A1B682B1B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_IndexOf_TisKeyValuePair_2_t5BF959754D6D63F4A22229D19CE05C1E822830EF_m667C4104CC177BC9FFEF413AA0D8715FA56EB7E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_IndexOf_TisKeyValuePair_2_t79F2DDBE2327CD3817ECD07A70082368B3CE368C_m135C5711DE6810D9536364F9FE938AC53B82D98C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_IndexOf_TisKeyValuePair_2_tB6ECB423D6D4B3D2F916E061DDF9A7C3F0958D57_mD752FA790DD2750503CFA3E725D93B3AA9C9229F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_IndexOf_TisKeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625_m8EC3246E731FDA6059A8B29053346A51F4CD4FE9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_IndexOf_TisManagedTextRecord_t22FD3FB16104E29A74FE2B1C69327485C7355193_mF7551968CB6F2E1F4DF87CC6BD927570FAEBF754_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_IndexOf_TisManagedUI_t22E618BB9B636E02EF274969A83E22B7D7A8DEC7_m8236CCFF565AC95B5B7BB729F2F7A2929F28A8AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_IndexOf_TisNotificationEntry_t930D625A1786911197A96C03960EA8D90628FC50_mDE0FE67A628B53C6340CCB6630556B78FB55439D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_IndexOf_TisNullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A_m1DC57CB5EF10BC0134F17C589BC6E19DA8EA9F72_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_IndexOf_TisNullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258_m3EDC45C94690862A8DD59B50C2C39DA98C4E21D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_IndexOf_TisNullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3_m14D0648E79CF7AA8256DC91115A6898767AA7C82_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_IndexOf_TisNullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103_mA99864C0BD33151C121D667D9F490383C2CF54C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_IndexOf_TisOrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2_mF72BB13925A8CCC4F1208443A5182972F2D58014_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_IndexOf_TisPair_tCF1B4A57B4FC677FA2ACB13ECA3D0621CCE6E9FB_mEEDEC976045AFA3327677280F53CB47E35E52BBB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_IndexOf_TisPlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2_m9C4BAA935E0948119FE1937F5D15D28289B0EF06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_IndexOf_TisPlaybackSpot_t9DD5DF963E07CE297F69CF2A61452173F1E04389_m0CEC526A23B2BCA9F19D943D01AC92C8F1B6962C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_IndexOf_TisPlayerLoopSystemInternal_t47326D2B668596299A94B36D0A20A874FBED781B_m40E44EED44D4CE505C551686F1BE8A27DA86AD91_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_IndexOf_TisPlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C_m473F7E25A4A9D41243158012E7CB7CD3C3E75C71_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_IndexOf_TisPolygonSolution_t7F56F8F5D2F82CAD72963720F901E8DFB111CFCA_m697A73E9E023808F9F054C8576BD4907E17AF4E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_IndexOf_TisProvisionSource_tEE6AA059535303C4FBD0560B3FFB6F453DD75467_m7711A1FB10D95EE0EF48C6897B3656F5EAE0C913_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_IndexOf_TisRawDataRepresentation_t3CC94F7D8A05DA6D563969EFD452AA16312556D4_m61A10FFD6D4FD3CBED956C093C56D0A776B0FC56_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_IndexOf_TisRaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4_mFEB47FF95D5185ABE5453B54735045125EF736F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_IndexOf_TisRaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_m290CD6F9EA80E40A4A47EC691600CACF33EB58AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_IndexOf_TisRecordingItem_tEDE8B20C8F2E4981D1302177EBA59407729666BB_m3F418DA9B3AA0739B4FDB2841CF607D00C16DA28_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_IndexOf_TisRenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94_m7B93A369E25E4DED76E9F4E79051E82A84013C1D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_IndexOf_TisResolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767_mEA1E8B2F360D04FB33DFEB7AEB26B8115ED82D82_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_IndexOf_TisRuntimeObject_m48473B3F08D40C2C9A2D95201B64A5189E73654B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_IndexOf_TisRuntimeObject_mA27985E1320BB9593E3594EDD720733049E5A3C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_IndexOf_TisRuntimeObject_mE83AB53310ED3C554CC03D01B145BED5A0EF5601_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_IndexOf_TisScriptParseError_t4256BE56C0E84B3923D47F651E14C7C3DA0CF24E_m95DC56C67A45A1147E5ED7906BDED4807DAC132A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_IndexOf_TisServiceInitData_t9AE22A635505A170684B80FDDF11BE8FB47B6B32_m1A635F79D49ED396AA278A863B3B212565357E38_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_IndexOf_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mE8B43A1E3931B613E7EF70B19C647286098A13F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_IndexOf_TisSpawnedObjectState_tEBA8F910D3F7EF966428AA4FA4176B69CA1239EF_m868568451054EF1F2A66CB4596B907548691BD49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_IndexOf_TisState_t8B15BF18623058992E9E61C1A88B5FB31F84DAB1_mAE3C829DDCC1F165EC4C588510939C42ABF0EAD0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_IndexOf_TisState_tE62FDB698B97A880111763440BBFCCFAA3E82398_m23D6DC89674E356AD7FBD991A8B4591CFE2771A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_IndexOf_TisStyleSelectorPart_t707EDC970FC0F3E91E56DCBC178672A120426D54_m2F369B42D9751CE998F000BC73AC798D5AD4DBD1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_IndexOf_TisTag_t2A5C2ACD1C776268383A5AD7DFBE1029EF02A0C8_m709B2A2A4FDABBC73A5E32F58BF010F76D1B7A74_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_IndexOf_TisTashkeelLocation_t4F3BC436747CE71F7C90DB57E0ACE9E6536A444D_m8EC5C925CEA8C51F05C0215C8F3CA7F7B591E768_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_IndexOf_TisUICharInfo_tDEA65B831FAD06D1E9B10A6088E05C6D615B089A_m89079F27CC64570968B258A8D6FAC7D212B9F1C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_IndexOf_TisUILineInfo_tD082FF4894030AD4EBF57ACF6A997135E4B8B67C_m9C6DC783378F91760D3D03BF5142FFC8BC75A665_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_IndexOf_TisUIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A_m7BFBF97B04DBB7C80E387F7B85517BE3317D3E73_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_IndexOf_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_mADE405FFFF437E9EE867EBE9B72ACE5A0A8B1D2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_IndexOf_TisUniTask_1_t6FCD254D72D89CEC552D0DA951202E35E8C7923E_m84673F04B4DCA1820532257DDBE5F21E67F55395_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_IndexOf_TisUniTask_t41263A639210D10E03708EE0B4B03A964D7EEE3C_m0D7C932BC6E6A4AEDB59FD508537FCA9C2C47F5B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_IndexOf_TisVector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_mDB22B893A3F59F39FA4076D0DEC5632DF6E34E8B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_IndexOf_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_mDA581EB97B2929AC9503CBBE0A264FC0B753D6E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_IndexOf_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m9D00FCADBDA3C0460D8C9E0B823B95580B716622_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_IndexOf_TisVector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_mBEA40EF0A3C1D7827E01C57F0451F22609B96164_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_IndexOf_TisWeightInfo_t251340617EC51F7E375DDE27FD235DBB045434AA_mA89F4071B692C3C32A08C5E3EDD0B034568B656E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_IndexOf_TisWorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393_m4DA71B217BB5412C19D1B6572341B5D814B214F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_InternalArray__ICollection_Add_TisEntry_t008C5E6740BBF4D72FC9F1B0E121CB377E4BFA58_m0FB1DFD20B295B95F6D3244C1EA61CEF1B720DFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_InternalArray__ICollection_Add_TisEntry_t03A87BF6367938D67497088665C733ED14E14AC9_m79729CA702F5B6859E7E403FD96F962CA20A5A9B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_InternalArray__ICollection_Add_TisEntry_t19C714E802975CC32D4BD74AE5A32816E1352D0A_mDB5C1B24454D61AA5D0CE299F02F180F4AA14E96_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_InternalArray__ICollection_Add_TisEntry_t208639F3F4F37C945E22645BD356EDD28167B721_mB938872ADBADEFF773FEB8BA88B8B53CC07B3450_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_InternalArray__ICollection_Add_TisEntry_t433EC2E04BDF0855EE1D9C7D5775426888E97E4A_m6D423E2AB3A4B6E7A999168F70E8DCCF6C4A9507_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_InternalArray__ICollection_Add_TisEntry_t451329272BBC6DD557728CC31D180CDB00BCFB39_mE541031A67B13CD53643B329B0F4988C733C898D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_InternalArray__ICollection_Add_TisEntry_t4964CFD91895291D92A10AA261EB8E3F1180BF0E_m4BA5BB78EAD21C5C93D9195F8836F62D1B4AE893_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_InternalArray__ICollection_Add_TisEntry_t566665F9E0C95BD89070FA959BD9CD9652B11B1E_m82A16C8FF82C2CF4DD83942DC849C3348645B2AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_InternalArray__ICollection_Add_TisEntry_t61AE0C48DE273E5189A4F18E646F81FC9344CA51_m1CC8B10B8BA2426FEE4E522EFEEBBAE8E128B521_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_InternalArray__ICollection_Add_TisEntry_t688DEA44F3317199674201149BB60E110A6674E7_mBAC81DEE166B95A1B4F592DF9549C698EA9AF950_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_InternalArray__ICollection_Add_TisEntry_t7354459F6787FFC973F7672A4A98A04A07EC9C46_mA4445B64E63D7AB1242A316E2E068FCCA9F5A475_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_InternalArray__ICollection_Add_TisEntry_t7EFE4B1CABF5378A909AB71AF9AF0097DCFC8843_m7CD3FF302839FAE210D97FD5E04F88D2F0AA7BE5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_InternalArray__ICollection_Add_TisEntry_t83C37D8208C6D1FBF2FAE2AACE83E9AA3EDBB4DE_mFB4F4BD6E0969842034BCB042008A311DEFCF888_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_InternalArray__ICollection_Add_TisEntry_t859C76C7177360DB11A8C90D498E02D9C0D603C3_mC963ABD7C880CC50138803BCD0DC3E81F961EC29_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_InternalArray__ICollection_Add_TisEntry_tA07FA890F51E2BCDD288CE0535A0037630602F19_m86047E4DB29072E4A2FB6D91382E6EE00C900773_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_InternalArray__ICollection_Add_TisEntry_tA2D0467FB5526F62741AFEDA7875398851503761_m2E9E1EA8714D3328B7B30D0912423824DB2CFDCE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_InternalArray__ICollection_Add_TisEntry_tB6AD480DF82D492BA74FE85CFBADF12451F50DC0_m229610B89EB60526C03DE79F3435B8429A9B7800_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_InternalArray__ICollection_Add_TisEntry_tCDC4EA498E71B056C8C5CAA79DCC23A3051ABBA2_m7A3EC4F4E45A585943FB13B662537F6E6863A06F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_InternalArray__ICollection_Add_TisEntry_tCEEFDCF40BC6D00BC2788A393C6A257A30195133_mE2B732FD049E93278D98ED2A617F9B1570E5E0F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_InternalArray__ICollection_Add_TisEntry_tD3C172E348082DAA38034A7BFC5251A40A96D632_m26BDD1411CB90C04A3D052082A3CD43F2B3CF1BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_InternalArray__ICollection_Add_TisEntry_tD8A93CAFA635C3623A9F8C1541CA22C83D04EA26_m46CD8559BCE834C40C0D916B225926D28ED3DDD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_InternalArray__ICollection_Add_TisEntry_tDC6B5B6EF2FC2247811C43D191A724C9BDEBE574_m0F871759DD9962DEBF0D7A18E15A0513E002E914_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_InternalArray__ICollection_Add_TisEntry_tE032650534234E8BCC41BF224A68F799EB231216_mD64E99D2B90A55E9D67368BB49D0055821C611F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_InternalArray__ICollection_Add_TisEntry_tEB6BA79AEA99BB76838C2C976F1B8E940BB541DC_mB3C88FC65CC3DB4D3A97042A8A7615814F702492_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_InternalArray__ICollection_Add_TisEntry_tFD66121D722C464614CDF20EF1D641473704F49F_mD02EDDE8D9F267D7FFBC542E50222337DB19FBD6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_InternalArray__ICollection_Add_TisKeyValuePair_2_t02AE272A085AB13A18E1FC399D144A7E520A0F5B_m8CFABC832E94114C7B928FE7C531B7E25FE82C9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_InternalArray__ICollection_Add_TisKeyValuePair_2_t07341F5A60772793A318FB30E77665FE3F9C5A00_m163F05C88C5569E84438AA24F0205932C96EE333_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_InternalArray__ICollection_Add_TisKeyValuePair_2_t128BCD2E9E558C2DCCE19DC432FB05B376CE8446_mCF2F8C503A9D61D2A5FB3060B888364B90935C3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_InternalArray__ICollection_Add_TisKeyValuePair_2_t17AD1BA0D300FEBEBA283B476D8D987EB53676EC_mAC6E12D96A5077151B5AE7E8D145539174DAB716_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_InternalArray__ICollection_Add_TisKeyValuePair_2_t1C899E1D384EB1A82B398076E49CE2B74F0CE329_m504606659AF7529DF8B57294379615592B7B3FF1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_InternalArray__ICollection_Add_TisKeyValuePair_2_t1E4C4AAA2E07F40196F2EBEC29A6D137D0A9D265_m758D884CFB9A0B46BDF4D3F671B31545D353AB2E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_InternalArray__ICollection_Add_TisKeyValuePair_2_t239694BB713649B9F5326D1A5BC3143EA54316B3_m0C306603AEC7A27D007B067C676C576FB4043D9F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_InternalArray__ICollection_Add_TisKeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0_mDC696F3C3F85A82C9DDACBAF2CF72E70DFA312F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_InternalArray__ICollection_Add_TisKeyValuePair_2_t5BF959754D6D63F4A22229D19CE05C1E822830EF_m8B200E8CE2B1630C6340E9