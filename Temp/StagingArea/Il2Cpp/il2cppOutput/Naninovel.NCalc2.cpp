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
template <typename R, typename T1, typename T2>
struct GenericVirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericVirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericInterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericInterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32Enum>
struct Dictionary_2_t5B35D5550B4D9CDDB7D248BEEE75285BC3023229;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399;
// System.Collections.Generic.Dictionary`2<System.Type,System.TypeCode>
struct Dictionary_2_tD1E7320AFFDAE6777C97AF253CBDC0E6858A81A5;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t7EEC9B4006D6D425748908D52AA799197F29A165;
// System.Collections.Generic.IList`1<Naninovel.Antlr3.Runtime.PCL.Output.IOutputStream>
struct IList_1_tAA00626A8ECBE8B008450A3DE0D25BBE5D847CF5;
// System.Collections.Generic.IList`1<Naninovel.Antlr.Runtime.Tree.ITree>
struct IList_1_tBC9EDC1170C56B936C32922F2663733F3D1FDB45;
// System.Collections.Generic.IList`1<System.String>
struct IList_1_t54B152FB364EC47FC3BD440154FEB50A17503847;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.TypeCode>
struct KeyCollection_tAEE171E9B7713AAA16E4561C7A96BB68A69D01E7;
// System.Collections.Generic.List`1<Naninovel.Antlr3.Runtime.PCL.Output.IOutputStream>
struct List_1_t605F16FFF67E99839238F2F556889CCE0735EB2C;
// System.Collections.Generic.List`1<Naninovel.NCalc.Domain.LogicalExpression>
struct List_1_tB9332DBAEBFB8911E1196B5638A3E55DB1139612;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// Naninovel.Antlr.Runtime.ParserRuleReturnScope`1<Naninovel.Antlr.Runtime.IToken>
struct ParserRuleReturnScope_1_tC570619B03C97B2011CC4A91EBEED0B218D5571C;
// Naninovel.Antlr.Runtime.ParserRuleReturnScope`1<System.Object>
struct ParserRuleReturnScope_1_t17A75288BDA02660B35616CBC1C6D8ADF76F8FCF;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t921D1901AD35062BE31FAEB0798A4B814F33A3C3;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>
struct ReadOnlyCollection_1_t4348A40742B97AA544A2F3845FA1C60512811C28;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.TypeCode>
struct ValueCollection_t510E9B9E0A78E5BEA9D25AE5EC72824E94960427;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,System.TypeCode>[]
struct EntryU5BU5D_tBE212BD1B7EF1FAB0D13C61C4FC4D1DD4B8D7F47;
// System.Int16[][]
struct Int16U5BU5DU5BU5D_t543ACA7B5432CCA0395B0944D21B4E37B8825D77;
// Naninovel.Antlr.Runtime.BitSet[]
struct BitSetU5BU5D_t5ECDC2A01D26B742E9ECE04E0909786124426251;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// Naninovel.Antlr3.Runtime.PCL.Output.IOutputStream[]
struct IOutputStreamU5BU5D_t85044530ADC6C6C2CC20A76F852101856D15C8F0;
// System.Int16[]
struct Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// Naninovel.NCalc.Domain.LogicalExpression[]
struct LogicalExpressionU5BU5D_t35167AD411F36531A33B384D413583735F19360A;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
// System.UInt64[]
struct UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2;
// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// Naninovel.Antlr.Runtime.BaseRecognizer
struct BaseRecognizer_tB62A3AE694CEC553C74F519EE830E68C521C3DEC;
// Naninovel.NCalc.Domain.BinaryExpression
struct BinaryExpression_t6B952CF817520F64ACE95BE470B2F349856B92D9;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// Naninovel.Antlr.Runtime.BitSet
struct BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5;
// Naninovel.Antlr.Runtime.CommonToken
struct CommonToken_tAD014B56C894BF06C90025CC6BE550B60C31B668;
// Naninovel.Antlr.Runtime.Tree.CommonTree
struct CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697;
// Naninovel.Antlr.Runtime.DFA
struct DFA_t96370EB42325F06C749FB6668FF6025F2D7BFDB3;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// Naninovel.Antlr3.Runtime.PCL.Output.ErrorOutputStream
struct ErrorOutputStream_t1B4C5CA9639AC25142EF77F0FDD631EDF8D43378;
// Naninovel.NCalc.EvaluateFunctionHandler
struct EvaluateFunctionHandler_t3FB6CF99EF15927571E11804914E05D18FDF719F;
// Naninovel.NCalc.EvaluateParameterHandler
struct EvaluateParameterHandler_t38636AF5AF7365B5073EF263B673C49CACE141F1;
// Naninovel.NCalc.EvaluationException
struct EvaluationException_t4153896D46C5CE3F846F38E028958533206CCEC4;
// Naninovel.NCalc.Domain.EvaluationVisitor
struct EvaluationVisitor_t3A83237C8491A3205B23CE40CE4ECAF2EFB0BAB1;
// System.EventArgs
struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA;
// System.Exception
struct Exception_t;
// Naninovel.NCalc.Domain.Function
struct Function_tB79B8AC81F9EBA9B68A61E8A501D74173D90EA72;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// Naninovel.Antlr.Runtime.ICharStream
struct ICharStream_t0A0ECD7A0F22F03C8E93172CD538714A622B653C;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.IFormatProvider
struct IFormatProvider_tF2AECC4B14F41D36718920D67F930CED940412DF;
// System.Runtime.Serialization.IFormatterConverter
struct IFormatterConverter_t2A667D8777429024D8A3CB3D9AE29EA79FEA6176;
// Naninovel.Antlr.Runtime.IIntStream
struct IIntStream_t1C261AE5ECB8EEF61877A77546136115827F13DE;
// Naninovel.Antlr3.Runtime.PCL.Output.IOutputStream
struct IOutputStream_t37DB8D28CE934DEFD2835BC6F98EC42C50EB5FFD;
// Naninovel.Antlr.Runtime.IToken
struct IToken_t0DEEE9C1FBAC843AF39112E1AD14FDA3A5C230A6;
// Naninovel.Antlr.Runtime.ITokenStream
struct ITokenStream_tA5739BEF1223F6EF748EE75567BB4EF94418DF46;
// Naninovel.Antlr.Runtime.Tree.ITreeNodeStream
struct ITreeNodeStream_t448692D59AFE684FB9BA4E5DAE340B24D52B3FB1;
// Naninovel.NCalc.Domain.Identifier
struct Identifier_t64A304AE1762074E38912767107A5B7DAC0D54DD;
// Naninovel.NCalc.Domain.LogicalExpression
struct LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968;
// Naninovel.NCalc.Domain.LogicalExpressionVisitor
struct LogicalExpressionVisitor_t4FEC2A3FF1F4D8E4207828C80EBEC796EC6AED13;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Naninovel.Antlr.Runtime.MismatchedTokenException
struct MismatchedTokenException_tEAA1C7458209F7A0220F2083AC2918F63AE306DE;
// Naninovel.Antlr.Runtime.NoViableAltException
struct NoViableAltException_tD839861F743DD0F39FEF05038736B49327E123D6;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D;
// Naninovel.NCalc.ParameterArgs
struct ParameterArgs_t7201DE499D85C7B63EBC096614680084E8464C98;
// Naninovel.Antlr.Runtime.Parser
struct Parser_tB621C8252810CD452CE08FDEBDAC0D55B7072204;
// Naninovel.Antlr.Runtime.RecognitionException
struct RecognitionException_tF5714BA0E5C3032188B67ED85181048EABDF9155;
// Naninovel.Antlr.Runtime.RecognizerSharedState
struct RecognizerSharedState_t80A4DCAF6DF4AF2F486E4958547F7FE3D4EC53F9;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1;
// Naninovel.NCalc.Domain.SerializationVisitor
struct SerializationVisitor_t7FA9CCD67A83DF85E052BC13D42D6CF05B3B65B3;
// Naninovel.Antlr.Runtime.SpecialStateTransitionHandler
struct SpecialStateTransitionHandler_t27F1B147487F7736825C69BA1576DEFD7AACA37C;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// Naninovel.NCalc.Domain.TernaryExpression
struct TernaryExpression_tB518CB82C2E5F08ACA68A8062B3076B8614252A8;
// System.IO.TextWriter
struct TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643;
// System.Type
struct Type_t;
// Naninovel.NCalc.Domain.UnaryExpression
struct UnaryExpression_t726EAD7F63036A3F19780AC9E55AD4715F567A9C;
// Naninovel.Antlr.Runtime.UnwantedTokenException
struct UnwantedTokenException_t479DCB651C50887711B47AEB2A234B1660CC95A3;
// Naninovel.NCalc.Domain.ValueExpression
struct ValueExpression_t1E49B717CBB41CB95F6554127CCC773DA6C152C9;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Naninovel.NCalc.Domain.EvaluationVisitor/<>c__DisplayClass22_0
struct U3CU3Ec__DisplayClass22_0_tE2DBA219B6505F442898A670ED39458F9138F243;
// Naninovel.NCalc.NCalcLexer/DFA14
struct DFA14_tC9B965A0D084146E2480BD928AB4134D86F9181C;
// Naninovel.NCalc.NCalcLexer/DFA7
struct DFA7_t3E8B607423D0670275F37241C9AC095E95BB9421;
// Naninovel.NCalc.NCalcParser/additiveExpression_return
struct additiveExpression_return_t7B20A0AB4A427B4232D9749D0E11F7449A6A173F;
// Naninovel.NCalc.NCalcParser/arguments_return
struct arguments_return_t71831D4E6B23911C48BC9159A9561CE4858EFE5C;
// Naninovel.NCalc.NCalcParser/bitwiseAndExpression_return
struct bitwiseAndExpression_return_tB62FF7C4DD57583AC2A909A58B8ECF821711EAC1;
// Naninovel.NCalc.NCalcParser/bitwiseOrExpression_return
struct bitwiseOrExpression_return_tD269C7AC623828818D14BE34E58BA4C6BD557E54;
// Naninovel.NCalc.NCalcParser/bitwiseXOrExpression_return
struct bitwiseXOrExpression_return_t61EA467B0152C06EB4262BF6EB43602965419A15;
// Naninovel.NCalc.NCalcParser/booleanAndExpression_return
struct booleanAndExpression_return_tF61EB28AB3F87201FCA3D1C93DB424D62A29A698;
// Naninovel.NCalc.NCalcParser/conditionalExpression_return
struct conditionalExpression_return_tB42A32FA8607B0F6FCD60B893CF3C97E8AFFDD65;
// Naninovel.NCalc.NCalcParser/equalityExpression_return
struct equalityExpression_return_tAC0FDD0D06D1E3189C76B665112BA5B7824947D5;
// Naninovel.NCalc.NCalcParser/expressionList_return
struct expressionList_return_t9B440CBDDC891CAEBCA1D67BE7AA1983BEEC6883;
// Naninovel.NCalc.NCalcParser/identifier_return
struct identifier_return_t887187A427D6BDD304A6DCEE909047FC757428D3;
// Naninovel.NCalc.NCalcParser/logicalExpression_return
struct logicalExpression_return_t4B9B5239A70029EDD25738726D4440F19698F97D;
// Naninovel.NCalc.NCalcParser/multiplicativeExpression_return
struct multiplicativeExpression_return_t2F29D00FBE8F6F71BACC7F04D2409758F1EEC9FB;
// Naninovel.NCalc.NCalcParser/ncalcExpression_return
struct ncalcExpression_return_t66EF927254FDFAA1ABE3AEF1AD5BC5EF910CCA8A;
// Naninovel.NCalc.NCalcParser/primaryExpression_return
struct primaryExpression_return_t3BC619508077312D30852257CAA580AAA95DBC00;
// Naninovel.NCalc.NCalcParser/relationalExpression_return
struct relationalExpression_return_t34D4DA562F00E169C74C2CE1E245489AD917BB60;
// Naninovel.NCalc.NCalcParser/shiftExpression_return
struct shiftExpression_return_t022A96295D36250C2C6C604752FF6E339E270FCA;
// Naninovel.NCalc.NCalcParser/unaryExpression_return
struct unaryExpression_return_t7D5BB6EE3838BC888EC5FB09A9AE81E4BBF84663;
// Naninovel.NCalc.NCalcParser/value_return
struct value_return_t9D64C256C6B414FD3F848D274106AC56229CBF43;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitSetU5BU5D_t5ECDC2A01D26B742E9ECE04E0909786124426251_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CommonToken_tAD014B56C894BF06C90025CC6BE550B60C31B668_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DFA14_tC9B965A0D084146E2480BD928AB4134D86F9181C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DFA7_t3E8B607423D0670275F37241C9AC095E95BB9421_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tD1E7320AFFDAE6777C97AF253CBDC0E6858A81A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ErrorOutputStream_t1B4C5CA9639AC25142EF77F0FDD631EDF8D43378_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EvaluationException_t4153896D46C5CE3F846F38E028958533206CCEC4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Follow_t8062F7C92640B848282CA7382579322185C96CA1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICharStream_t0A0ECD7A0F22F03C8E93172CD538714A622B653C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t187C770CC0DC3EDDA7A93534D0A208A601892715_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t7AC5FBF3B72FECE18720E2B360DE87A3FDF3D1F7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IIntStream_t1C261AE5ECB8EEF61877A77546136115827F13DE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IOutputStream_t37DB8D28CE934DEFD2835BC6F98EC42C50EB5FFD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITokenStreamInformation_t7217712FAC29F5A12738A7AE50056D3D49A6C3D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITokenStream_tA5739BEF1223F6EF748EE75567BB4EF94418DF46_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IToken_t0DEEE9C1FBAC843AF39112E1AD14FDA3A5C230A6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITreeAdaptor_t1454D77B304383890CEE5B0A4F9F1DEFF5D84D11_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITreeNodeStream_t448692D59AFE684FB9BA4E5DAE340B24D52B3FB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITree_t9EF42DA31DEDBD7459D86BA36F89BBEB364A3B04_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16U5BU5DU5BU5D_t543ACA7B5432CCA0395B0944D21B4E37B8825D77_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t605F16FFF67E99839238F2F556889CCE0735EB2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OutputStreamHost_t773C1346869A07F4E2BEBC5B09743A165B75C534_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Tokens_1_t79E905ACB671E7A5D400442DF0E8EF9C4E6FF1D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Tokens_tDC8B3C3FB6A2724A8AF82592E67CA6F41BCA22F2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeExtensions_tE1DD98AE3B6855ED7E4CC08F646E06243174E287_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ValueExpression_t1E49B717CBB41CB95F6554127CCC773DA6C152C9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0414E3274E6539D58A6691021628AC3EC0B5E575;
IL2CPP_EXTERN_C String_t* _stringLiteral089154EBAA0CAE049B31D2C45A287D265383A152;
IL2CPP_EXTERN_C String_t* _stringLiteral097AF4A51A5BF0CB0DCBB0CC78BB061E38CC49D7;
IL2CPP_EXTERN_C String_t* _stringLiteral0A3DDC082A107AAC3CF0C64346D5B72E0C0084EC;
IL2CPP_EXTERN_C String_t* _stringLiteral0B0FEB3147CE20EB2C90076367F895C59BCD14B3;
IL2CPP_EXTERN_C String_t* _stringLiteral10A105116F1400FFCE661E402C3C12DDCA0D688C;
IL2CPP_EXTERN_C String_t* _stringLiteral1168E92C164109D6220480DEDA987085B2A21155;
IL2CPP_EXTERN_C String_t* _stringLiteral15196F05B117690F3E12E56AA0C43803EA0D2A46;
IL2CPP_EXTERN_C String_t* _stringLiteral15FB8A04339464F72B79BAF171F17EF1E153CA52;
IL2CPP_EXTERN_C String_t* _stringLiteral1AAA87BACDBB2798517C0B984881B425E20035DF;
IL2CPP_EXTERN_C String_t* _stringLiteral1B1EB7B676D45EEA70B706E25988B5A063563F3D;
IL2CPP_EXTERN_C String_t* _stringLiteral1B9D3CF4697EAF2BF914545D4E803CF9FCA58F66;
IL2CPP_EXTERN_C String_t* _stringLiteral1BD5605D605E9DB646EAFE1D24735ADE66415A92;
IL2CPP_EXTERN_C String_t* _stringLiteral1C3B83E7128DFE5344885801249731AA7F849057;
IL2CPP_EXTERN_C String_t* _stringLiteral210A6A07AB8F66B3554669378F6148D2C7F62920;
IL2CPP_EXTERN_C String_t* _stringLiteral215CD8D96234D677FBB0A636A3703BE57952E6A3;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral2606E7B2ED7D70E7FDA31F81CA448C719E23E536;
IL2CPP_EXTERN_C String_t* _stringLiteral2A1B8219DF3B658B732CB311FAE7299CBD8CB947;
IL2CPP_EXTERN_C String_t* _stringLiteral2AC6083C483F1BF1F591977D4E71E5393F090F28;
IL2CPP_EXTERN_C String_t* _stringLiteral2FDB12CAF040DE0941DCA5DA173D724FBE249CE3;
IL2CPP_EXTERN_C String_t* _stringLiteral33F1DA9C0003538318DC30913828A1E40A392432;
IL2CPP_EXTERN_C String_t* _stringLiteral35BE86BE04537C20F1D92CDDE1C271EA43492402;
IL2CPP_EXTERN_C String_t* _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0;
IL2CPP_EXTERN_C String_t* _stringLiteral3D280E7E733EC7E25A38F3C52ADCAF04C3DA0CD9;
IL2CPP_EXTERN_C String_t* _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D;
IL2CPP_EXTERN_C String_t* _stringLiteral4809E30105820D7F0D6338C0181D9A191EAE18E2;
IL2CPP_EXTERN_C String_t* _stringLiteral4BFDCF42E37B95CBF3D2171AC1F9B19216A1E284;
IL2CPP_EXTERN_C String_t* _stringLiteral4C64FAF248B3C58A3DBD011DCB21AB1FBAD05F3E;
IL2CPP_EXTERN_C String_t* _stringLiteral4E1C61AD64824F0F49388BB9A0A66BA660066922;
IL2CPP_EXTERN_C String_t* _stringLiteral4F852489CE553A1F0F13DDD6AF41530F67A530D9;
IL2CPP_EXTERN_C String_t* _stringLiteral51A0BD638EC24062E1BB5CBBDC0CEBB6BFB167A5;
IL2CPP_EXTERN_C String_t* _stringLiteral55234E6D5DAF34FA810474A661C00B6476A94A72;
IL2CPP_EXTERN_C String_t* _stringLiteral5ABD82D07022B1B5B219C6597FD5B252F6452D4E;
IL2CPP_EXTERN_C String_t* _stringLiteral60436098BCF84F474B2D663123781716F54C9C78;
IL2CPP_EXTERN_C String_t* _stringLiteral6194CD45606F9D7E79024E07DA6BBCB48FC30ED0;
IL2CPP_EXTERN_C String_t* _stringLiteral64DDEE858A91B7DDB44761D703E5A2FD737BCAA9;
IL2CPP_EXTERN_C String_t* _stringLiteral65F97535E05DAC6C605B395369ECA52C26DA31AF;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteral7B73D221EC596320F925FB04D9C0A13E84E9D995;
IL2CPP_EXTERN_C String_t* _stringLiteral8425022ABFE37E7261FEB1DF3415478B19AD4623;
IL2CPP_EXTERN_C String_t* _stringLiteral88DE3AE5D1539B4DC69F188BF0BA71D156A2A987;
IL2CPP_EXTERN_C String_t* _stringLiteral89613337171E9DEFA7887E7F72F841FC8CD2A91D;
IL2CPP_EXTERN_C String_t* _stringLiteral8F89784DF2CB8ABD4A4F34F5A767DF3253A9AAFE;
IL2CPP_EXTERN_C String_t* _stringLiteral9061E7BA6E3CBE2417F45B8DE3615F10A01C7FF2;
IL2CPP_EXTERN_C String_t* _stringLiteral92D5F105B1F3D9895F413EA6E090D9AE1D420BC3;
IL2CPP_EXTERN_C String_t* _stringLiteral9452A87FAA0073A5238C5BF8FBCAE0BFB2A7512D;
IL2CPP_EXTERN_C String_t* _stringLiteral9624DEBBCD14C2B589D0526FE720B99449CA1D13;
IL2CPP_EXTERN_C String_t* _stringLiteral979A5CB3E003C8C576661ED84082D49624F862DE;
IL2CPP_EXTERN_C String_t* _stringLiteral9B2D833B107F93D5FC776077FE8509021DCC803E;
IL2CPP_EXTERN_C String_t* _stringLiteralA36126B0FB56E1FF328242A6A28CC07AC8C1D963;
IL2CPP_EXTERN_C String_t* _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73;
IL2CPP_EXTERN_C String_t* _stringLiteralA648A89747674239B90448727AE724D7AA4FFA34;
IL2CPP_EXTERN_C String_t* _stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085;
IL2CPP_EXTERN_C String_t* _stringLiteralAA9EB47068DE4AAAC68E6899275B8D3B9348EEF9;
IL2CPP_EXTERN_C String_t* _stringLiteralAB2156EED3E1A351927BAD37510F67ACA2F8B955;
IL2CPP_EXTERN_C String_t* _stringLiteralAB94F79AF99EB1F84056002952B39BFDEA97D447;
IL2CPP_EXTERN_C String_t* _stringLiteralAC47381A312D0BE38226537F85448FFF2264564C;
IL2CPP_EXTERN_C String_t* _stringLiteralAC86AB9AF2791DE2DBF757337E6E1A549750EADA;
IL2CPP_EXTERN_C String_t* _stringLiteralADB95DDF09353FBDD17E9890451F2F88C7F3AF20;
IL2CPP_EXTERN_C String_t* _stringLiteralB1534B395382723189F07F3A82B678C2B0E1AC32;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralB78685C9E96592B3A1563AB8614FB95FC9C8BC7B;
IL2CPP_EXTERN_C String_t* _stringLiteralB82867822F37DEE1D0A162494A3D82B11C422456;
IL2CPP_EXTERN_C String_t* _stringLiteralBF86C9E9E7FE0EF09A2EAE8066CDC31F859254CC;
IL2CPP_EXTERN_C String_t* _stringLiteralC087E631060AB76B7C814C0E1B92D5C7C4C4B924;
IL2CPP_EXTERN_C String_t* _stringLiteralC5052D84247EDB375A6865995A60E8ABF03D67E1;
IL2CPP_EXTERN_C String_t* _stringLiteralC5622E3A481093F632330B78ED09A288D933439D;
IL2CPP_EXTERN_C String_t* _stringLiteralC8FB3AADE865E6D34A8377CFB1E0D3ADC4040BDC;
IL2CPP_EXTERN_C String_t* _stringLiteralCDF1B8C01FE1D4D3E80FBCE3178BE0FA050AC8D9;
IL2CPP_EXTERN_C String_t* _stringLiteralD12DC1F0824DC34EF831848361E1D06127A18E3A;
IL2CPP_EXTERN_C String_t* _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDB38643AD57CD8AD5D44FF10AFEC78B1EA05C2E2;
IL2CPP_EXTERN_C String_t* _stringLiteralE06E988AC69FCF2C4B1E46F33238C288BF12DC33;
IL2CPP_EXTERN_C String_t* _stringLiteralE0CFF3BC021C7A77F8C1BAFB2D406397F52AD882;
IL2CPP_EXTERN_C String_t* _stringLiteralE2D804F7E2FD438007BEB1F8F8CA3F7762EB71C0;
IL2CPP_EXTERN_C String_t* _stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C String_t* _stringLiteralF4DEFACDDC6EDC45049E58865E8CC7A05C7AEA5B;
IL2CPP_EXTERN_C String_t* _stringLiteralF4E486EEEE82295CCBBB3A1A7461668B2130E36B;
IL2CPP_EXTERN_C String_t* _stringLiteralF5B1331CB765F104AD6E9DE8513A99C1EB32C1C6;
IL2CPP_EXTERN_C String_t* _stringLiteralF8F7F2E55A1CD606D289F34C8A4DB8782887AA83;
IL2CPP_EXTERN_C String_t* _stringLiteralFAA787FF953B91B403AA9C0209F040D854A35531;
IL2CPP_EXTERN_C String_t* _stringLiteralFB462FA9646DDDD95BB522C691AC7B815196D11C;
IL2CPP_EXTERN_C String_t* _stringLiteralFC920BF5B48C73F1A2C760180F624A2192ADDA32;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mC767F10D68C167C03A96F658AD04CAC22B1648AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mEB7779B1C76872FE124E0485DC70AC544C78825E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m2463ED61645C6B1B0AD8AB4DB052897E2AE10847_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m9E8DE69DF4BB926EDC3584B3A5444561F6900DD0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ParserRuleReturnScope_1__ctor_m7C32AB73674119386F491757CFE57CC07350C5B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyCollection_1_get_Count_m0305A3E9E3584B020FC61CD5605898C600D69AE7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyCollection_1_get_Item_m2CA4EA69200FE3AD332DA97E648783A810E9CA9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RecognitionException__ctor_mD0C2A4B35FC16D24E6220B7B996D39C29B711BFF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SerializationVisitor_Visit_mA06D7CE2D8E189565C3358C3BBAE4177609BC525_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueExpression__ctor_m6F10869B9329D88CC08F3EFD7DCCFAD531068DC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int16_tD0F031114106263BB459DA1F099FF9F42691295A_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* String_t_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct Int16U5BU5DU5BU5D_t543ACA7B5432CCA0395B0944D21B4E37B8825D77;
struct BitSetU5BU5D_t5ECDC2A01D26B742E9ECE04E0909786124426251;
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD;
struct LogicalExpressionU5BU5D_t35167AD411F36531A33B384D413583735F19360A;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.Dictionary`2<System.Type,System.TypeCode>
struct  Dictionary_2_tD1E7320AFFDAE6777C97AF253CBDC0E6858A81A5  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tBE212BD1B7EF1FAB0D13C61C4FC4D1DD4B8D7F47* ___entries_1;
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
	KeyCollection_tAEE171E9B7713AAA16E4561C7A96BB68A69D01E7 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t510E9B9E0A78E5BEA9D25AE5EC72824E94960427 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tD1E7320AFFDAE6777C97AF253CBDC0E6858A81A5, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tD1E7320AFFDAE6777C97AF253CBDC0E6858A81A5, ___entries_1)); }
	inline EntryU5BU5D_tBE212BD1B7EF1FAB0D13C61C4FC4D1DD4B8D7F47* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tBE212BD1B7EF1FAB0D13C61C4FC4D1DD4B8D7F47** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tBE212BD1B7EF1FAB0D13C61C4FC4D1DD4B8D7F47* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tD1E7320AFFDAE6777C97AF253CBDC0E6858A81A5, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tD1E7320AFFDAE6777C97AF253CBDC0E6858A81A5, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tD1E7320AFFDAE6777C97AF253CBDC0E6858A81A5, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tD1E7320AFFDAE6777C97AF253CBDC0E6858A81A5, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tD1E7320AFFDAE6777C97AF253CBDC0E6858A81A5, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tD1E7320AFFDAE6777C97AF253CBDC0E6858A81A5, ___keys_7)); }
	inline KeyCollection_tAEE171E9B7713AAA16E4561C7A96BB68A69D01E7 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tAEE171E9B7713AAA16E4561C7A96BB68A69D01E7 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tAEE171E9B7713AAA16E4561C7A96BB68A69D01E7 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tD1E7320AFFDAE6777C97AF253CBDC0E6858A81A5, ___values_8)); }
	inline ValueCollection_t510E9B9E0A78E5BEA9D25AE5EC72824E94960427 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t510E9B9E0A78E5BEA9D25AE5EC72824E94960427 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t510E9B9E0A78E5BEA9D25AE5EC72824E94960427 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tD1E7320AFFDAE6777C97AF253CBDC0E6858A81A5, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<Naninovel.Antlr3.Runtime.PCL.Output.IOutputStream>
struct  List_1_t605F16FFF67E99839238F2F556889CCE0735EB2C  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	IOutputStreamU5BU5D_t85044530ADC6C6C2CC20A76F852101856D15C8F0* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t605F16FFF67E99839238F2F556889CCE0735EB2C, ____items_1)); }
	inline IOutputStreamU5BU5D_t85044530ADC6C6C2CC20A76F852101856D15C8F0* get__items_1() const { return ____items_1; }
	inline IOutputStreamU5BU5D_t85044530ADC6C6C2CC20A76F852101856D15C8F0** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(IOutputStreamU5BU5D_t85044530ADC6C6C2CC20A76F852101856D15C8F0* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t605F16FFF67E99839238F2F556889CCE0735EB2C, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t605F16FFF67E99839238F2F556889CCE0735EB2C, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t605F16FFF67E99839238F2F556889CCE0735EB2C, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t605F16FFF67E99839238F2F556889CCE0735EB2C_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	IOutputStreamU5BU5D_t85044530ADC6C6C2CC20A76F852101856D15C8F0* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t605F16FFF67E99839238F2F556889CCE0735EB2C_StaticFields, ____emptyArray_5)); }
	inline IOutputStreamU5BU5D_t85044530ADC6C6C2CC20A76F852101856D15C8F0* get__emptyArray_5() const { return ____emptyArray_5; }
	inline IOutputStreamU5BU5D_t85044530ADC6C6C2CC20A76F852101856D15C8F0** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(IOutputStreamU5BU5D_t85044530ADC6C6C2CC20A76F852101856D15C8F0* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// Naninovel.Antlr.Runtime.ParserRuleReturnScope`1<Naninovel.Antlr.Runtime.IToken>
struct  ParserRuleReturnScope_1_tC570619B03C97B2011CC4A91EBEED0B218D5571C  : public RuntimeObject
{
public:
	// TToken Naninovel.Antlr.Runtime.ParserRuleReturnScope`1::_start
	RuntimeObject* ____start_0;
	// TToken Naninovel.Antlr.Runtime.ParserRuleReturnScope`1::_stop
	RuntimeObject* ____stop_1;

public:
	inline static int32_t get_offset_of__start_0() { return static_cast<int32_t>(offsetof(ParserRuleReturnScope_1_tC570619B03C97B2011CC4A91EBEED0B218D5571C, ____start_0)); }
	inline RuntimeObject* get__start_0() const { return ____start_0; }
	inline RuntimeObject** get_address_of__start_0() { return &____start_0; }
	inline void set__start_0(RuntimeObject* value)
	{
		____start_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____start_0), (void*)value);
	}

	inline static int32_t get_offset_of__stop_1() { return static_cast<int32_t>(offsetof(ParserRuleReturnScope_1_tC570619B03C97B2011CC4A91EBEED0B218D5571C, ____stop_1)); }
	inline RuntimeObject* get__stop_1() const { return ____stop_1; }
	inline RuntimeObject** get_address_of__stop_1() { return &____stop_1; }
	inline void set__stop_1(RuntimeObject* value)
	{
		____stop_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stop_1), (void*)value);
	}
};


// System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>
struct  ReadOnlyCollection_1_t4348A40742B97AA544A2F3845FA1C60512811C28  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1::list
	RuntimeObject* ___list_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1::_syncRoot
	RuntimeObject * ____syncRoot_1;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_t4348A40742B97AA544A2F3845FA1C60512811C28, ___list_0)); }
	inline RuntimeObject* get_list_0() const { return ___list_0; }
	inline RuntimeObject** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(RuntimeObject* value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_1() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_t4348A40742B97AA544A2F3845FA1C60512811C28, ____syncRoot_1)); }
	inline RuntimeObject * get__syncRoot_1() const { return ____syncRoot_1; }
	inline RuntimeObject ** get_address_of__syncRoot_1() { return &____syncRoot_1; }
	inline void set__syncRoot_1(RuntimeObject * value)
	{
		____syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_1), (void*)value);
	}
};


// Naninovel.Antlr.Runtime.Tokens`1<Naninovel.Antlr.Runtime.CommonToken>
struct  Tokens_1_t79E905ACB671E7A5D400442DF0E8EF9C4E6FF1D7  : public RuntimeObject
{
public:

public:
};

struct Tokens_1_t79E905ACB671E7A5D400442DF0E8EF9C4E6FF1D7_StaticFields
{
public:
	// T Naninovel.Antlr.Runtime.Tokens`1::EndOfFile
	CommonToken_tAD014B56C894BF06C90025CC6BE550B60C31B668 * ___EndOfFile_0;
	// T Naninovel.Antlr.Runtime.Tokens`1::Invalid
	CommonToken_tAD014B56C894BF06C90025CC6BE550B60C31B668 * ___Invalid_1;
	// T Naninovel.Antlr.Runtime.Tokens`1::Skip
	CommonToken_tAD014B56C894BF06C90025CC6BE550B60C31B668 * ___Skip_2;

public:
	inline static int32_t get_offset_of_EndOfFile_0() { return static_cast<int32_t>(offsetof(Tokens_1_t79E905ACB671E7A5D400442DF0E8EF9C4E6FF1D7_StaticFields, ___EndOfFile_0)); }
	inline CommonToken_tAD014B56C894BF06C90025CC6BE550B60C31B668 * get_EndOfFile_0() const { return ___EndOfFile_0; }
	inline CommonToken_tAD014B56C894BF06C90025CC6BE550B60C31B668 ** get_address_of_EndOfFile_0() { return &___EndOfFile_0; }
	inline void set_EndOfFile_0(CommonToken_tAD014B56C894BF06C90025CC6BE550B60C31B668 * value)
	{
		___EndOfFile_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EndOfFile_0), (void*)value);
	}

	inline static int32_t get_offset_of_Invalid_1() { return static_cast<int32_t>(offsetof(Tokens_1_t79E905ACB671E7A5D400442DF0E8EF9C4E6FF1D7_StaticFields, ___Invalid_1)); }
	inline CommonToken_tAD014B56C894BF06C90025CC6BE550B60C31B668 * get_Invalid_1() const { return ___Invalid_1; }
	inline CommonToken_tAD014B56C894BF06C90025CC6BE550B60C31B668 ** get_address_of_Invalid_1() { return &___Invalid_1; }
	inline void set_Invalid_1(CommonToken_tAD014B56C894BF06C90025CC6BE550B60C31B668 * value)
	{
		___Invalid_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Invalid_1), (void*)value);
	}

	inline static int32_t get_offset_of_Skip_2() { return static_cast<int32_t>(offsetof(Tokens_1_t79E905ACB671E7A5D400442DF0E8EF9C4E6FF1D7_StaticFields, ___Skip_2)); }
	inline CommonToken_tAD014B56C894BF06C90025CC6BE550B60C31B668 * get_Skip_2() const { return ___Skip_2; }
	inline CommonToken_tAD014B56C894BF06C90025CC6BE550B60C31B668 ** get_address_of_Skip_2() { return &___Skip_2; }
	inline void set_Skip_2(CommonToken_tAD014B56C894BF06C90025CC6BE550B60C31B668 * value)
	{
		___Skip_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Skip_2), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// Naninovel.Antlr.Runtime.BaseRecognizer
struct  BaseRecognizer_tB62A3AE694CEC553C74F519EE830E68C521C3DEC  : public RuntimeObject
{
public:
	// Naninovel.Antlr.Runtime.RecognizerSharedState Naninovel.Antlr.Runtime.BaseRecognizer::state
	RecognizerSharedState_t80A4DCAF6DF4AF2F486E4958547F7FE3D4EC53F9 * ___state_0;
	// System.IO.TextWriter Naninovel.Antlr.Runtime.BaseRecognizer::<TraceDestination>k__BackingField
	TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * ___U3CTraceDestinationU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_state_0() { return static_cast<int32_t>(offsetof(BaseRecognizer_tB62A3AE694CEC553C74F519EE830E68C521C3DEC, ___state_0)); }
	inline RecognizerSharedState_t80A4DCAF6DF4AF2F486E4958547F7FE3D4EC53F9 * get_state_0() const { return ___state_0; }
	inline RecognizerSharedState_t80A4DCAF6DF4AF2F486E4958547F7FE3D4EC53F9 ** get_address_of_state_0() { return &___state_0; }
	inline void set_state_0(RecognizerSharedState_t80A4DCAF6DF4AF2F486E4958547F7FE3D4EC53F9 * value)
	{
		___state_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___state_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTraceDestinationU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BaseRecognizer_tB62A3AE694CEC553C74F519EE830E68C521C3DEC, ___U3CTraceDestinationU3Ek__BackingField_1)); }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * get_U3CTraceDestinationU3Ek__BackingField_1() const { return ___U3CTraceDestinationU3Ek__BackingField_1; }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 ** get_address_of_U3CTraceDestinationU3Ek__BackingField_1() { return &___U3CTraceDestinationU3Ek__BackingField_1; }
	inline void set_U3CTraceDestinationU3Ek__BackingField_1(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * value)
	{
		___U3CTraceDestinationU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTraceDestinationU3Ek__BackingField_1), (void*)value);
	}
};


// Naninovel.Antlr.Runtime.Tree.BaseTree
struct  BaseTree_tBD1B03EC01CE29B04C158A2C01182EB54A3BB410  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<Naninovel.Antlr.Runtime.Tree.ITree> Naninovel.Antlr.Runtime.Tree.BaseTree::_children
	RuntimeObject* ____children_0;
	// System.Int32 Naninovel.Antlr.Runtime.Tree.BaseTree::<Line>k__BackingField
	int32_t ___U3CLineU3Ek__BackingField_1;
	// System.Int32 Naninovel.Antlr.Runtime.Tree.BaseTree::<CharPositionInLine>k__BackingField
	int32_t ___U3CCharPositionInLineU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of__children_0() { return static_cast<int32_t>(offsetof(BaseTree_tBD1B03EC01CE29B04C158A2C01182EB54A3BB410, ____children_0)); }
	inline RuntimeObject* get__children_0() const { return ____children_0; }
	inline RuntimeObject** get_address_of__children_0() { return &____children_0; }
	inline void set__children_0(RuntimeObject* value)
	{
		____children_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____children_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CLineU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BaseTree_tBD1B03EC01CE29B04C158A2C01182EB54A3BB410, ___U3CLineU3Ek__BackingField_1)); }
	inline int32_t get_U3CLineU3Ek__BackingField_1() const { return ___U3CLineU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CLineU3Ek__BackingField_1() { return &___U3CLineU3Ek__BackingField_1; }
	inline void set_U3CLineU3Ek__BackingField_1(int32_t value)
	{
		___U3CLineU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CCharPositionInLineU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BaseTree_tBD1B03EC01CE29B04C158A2C01182EB54A3BB410, ___U3CCharPositionInLineU3Ek__BackingField_2)); }
	inline int32_t get_U3CCharPositionInLineU3Ek__BackingField_2() const { return ___U3CCharPositionInLineU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CCharPositionInLineU3Ek__BackingField_2() { return &___U3CCharPositionInLineU3Ek__BackingField_2; }
	inline void set_U3CCharPositionInLineU3Ek__BackingField_2(int32_t value)
	{
		___U3CCharPositionInLineU3Ek__BackingField_2 = value;
	}
};


// Naninovel.Antlr.Runtime.BitSet
struct  BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5  : public RuntimeObject
{
public:
	// System.UInt64[] Naninovel.Antlr.Runtime.BitSet::_bits
	UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* ____bits_0;

public:
	inline static int32_t get_offset_of__bits_0() { return static_cast<int32_t>(offsetof(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5, ____bits_0)); }
	inline UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* get__bits_0() const { return ____bits_0; }
	inline UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2** get_address_of__bits_0() { return &____bits_0; }
	inline void set__bits_0(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* value)
	{
		____bits_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____bits_0), (void*)value);
	}
};


// Naninovel.Antlr.Runtime.CommonToken
struct  CommonToken_tAD014B56C894BF06C90025CC6BE550B60C31B668  : public RuntimeObject
{
public:
	// System.Int32 Naninovel.Antlr.Runtime.CommonToken::type
	int32_t ___type_0;
	// System.Int32 Naninovel.Antlr.Runtime.CommonToken::line
	int32_t ___line_1;
	// System.Int32 Naninovel.Antlr.Runtime.CommonToken::charPositionInLine
	int32_t ___charPositionInLine_2;
	// System.Int32 Naninovel.Antlr.Runtime.CommonToken::channel
	int32_t ___channel_3;
	// Naninovel.Antlr.Runtime.ICharStream Naninovel.Antlr.Runtime.CommonToken::input
	RuntimeObject* ___input_4;
	// System.String Naninovel.Antlr.Runtime.CommonToken::text
	String_t* ___text_5;
	// System.Int32 Naninovel.Antlr.Runtime.CommonToken::index
	int32_t ___index_6;
	// System.Int32 Naninovel.Antlr.Runtime.CommonToken::start
	int32_t ___start_7;
	// System.Int32 Naninovel.Antlr.Runtime.CommonToken::stop
	int32_t ___stop_8;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(CommonToken_tAD014B56C894BF06C90025CC6BE550B60C31B668, ___type_0)); }
	inline int32_t get_type_0() const { return ___type_0; }
	inline int32_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int32_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_line_1() { return static_cast<int32_t>(offsetof(CommonToken_tAD014B56C894BF06C90025CC6BE550B60C31B668, ___line_1)); }
	inline int32_t get_line_1() const { return ___line_1; }
	inline int32_t* get_address_of_line_1() { return &___line_1; }
	inline void set_line_1(int32_t value)
	{
		___line_1 = value;
	}

	inline static int32_t get_offset_of_charPositionInLine_2() { return static_cast<int32_t>(offsetof(CommonToken_tAD014B56C894BF06C90025CC6BE550B60C31B668, ___charPositionInLine_2)); }
	inline int32_t get_charPositionInLine_2() const { return ___charPositionInLine_2; }
	inline int32_t* get_address_of_charPositionInLine_2() { return &___charPositionInLine_2; }
	inline void set_charPositionInLine_2(int32_t value)
	{
		___charPositionInLine_2 = value;
	}

	inline static int32_t get_offset_of_channel_3() { return static_cast<int32_t>(offsetof(CommonToken_tAD014B56C894BF06C90025CC6BE550B60C31B668, ___channel_3)); }
	inline int32_t get_channel_3() const { return ___channel_3; }
	inline int32_t* get_address_of_channel_3() { return &___channel_3; }
	inline void set_channel_3(int32_t value)
	{
		___channel_3 = value;
	}

	inline static int32_t get_offset_of_input_4() { return static_cast<int32_t>(offsetof(CommonToken_tAD014B56C894BF06C90025CC6BE550B60C31B668, ___input_4)); }
	inline RuntimeObject* get_input_4() const { return ___input_4; }
	inline RuntimeObject** get_address_of_input_4() { return &___input_4; }
	inline void set_input_4(RuntimeObject* value)
	{
		___input_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___input_4), (void*)value);
	}

	inline static int32_t get_offset_of_text_5() { return static_cast<int32_t>(offsetof(CommonToken_tAD014B56C894BF06C90025CC6BE550B60C31B668, ___text_5)); }
	inline String_t* get_text_5() const { return ___text_5; }
	inline String_t** get_address_of_text_5() { return &___text_5; }
	inline void set_text_5(String_t* value)
	{
		___text_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_5), (void*)value);
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(CommonToken_tAD014B56C894BF06C90025CC6BE550B60C31B668, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}

	inline static int32_t get_offset_of_start_7() { return static_cast<int32_t>(offsetof(CommonToken_tAD014B56C894BF06C90025CC6BE550B60C31B668, ___start_7)); }
	inline int32_t get_start_7() const { return ___start_7; }
	inline int32_t* get_address_of_start_7() { return &___start_7; }
	inline void set_start_7(int32_t value)
	{
		___start_7 = value;
	}

	inline static int32_t get_offset_of_stop_8() { return static_cast<int32_t>(offsetof(CommonToken_tAD014B56C894BF06C90025CC6BE550B60C31B668, ___stop_8)); }
	inline int32_t get_stop_8() const { return ___stop_8; }
	inline int32_t* get_address_of_stop_8() { return &___stop_8; }
	inline void set_stop_8(int32_t value)
	{
		___stop_8 = value;
	}
};


// Naninovel.Antlr.Runtime.DFA
struct  DFA_t96370EB42325F06C749FB6668FF6025F2D7BFDB3  : public RuntimeObject
{
public:
	// System.Int16[] Naninovel.Antlr.Runtime.DFA::eot
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___eot_0;
	// System.Int16[] Naninovel.Antlr.Runtime.DFA::eof
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___eof_1;
	// System.Char[] Naninovel.Antlr.Runtime.DFA::min
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___min_2;
	// System.Char[] Naninovel.Antlr.Runtime.DFA::max
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___max_3;
	// System.Int16[] Naninovel.Antlr.Runtime.DFA::accept
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___accept_4;
	// System.Int16[] Naninovel.Antlr.Runtime.DFA::special
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___special_5;
	// System.Int16[][] Naninovel.Antlr.Runtime.DFA::transition
	Int16U5BU5DU5BU5D_t543ACA7B5432CCA0395B0944D21B4E37B8825D77* ___transition_6;
	// System.Int32 Naninovel.Antlr.Runtime.DFA::decisionNumber
	int32_t ___decisionNumber_7;
	// Naninovel.Antlr.Runtime.BaseRecognizer Naninovel.Antlr.Runtime.DFA::recognizer
	BaseRecognizer_tB62A3AE694CEC553C74F519EE830E68C521C3DEC * ___recognizer_8;
	// System.Boolean Naninovel.Antlr.Runtime.DFA::debug
	bool ___debug_9;
	// Naninovel.Antlr.Runtime.SpecialStateTransitionHandler Naninovel.Antlr.Runtime.DFA::<SpecialStateTransition>k__BackingField
	SpecialStateTransitionHandler_t27F1B147487F7736825C69BA1576DEFD7AACA37C * ___U3CSpecialStateTransitionU3Ek__BackingField_10;

public:
	inline static int32_t get_offset_of_eot_0() { return static_cast<int32_t>(offsetof(DFA_t96370EB42325F06C749FB6668FF6025F2D7BFDB3, ___eot_0)); }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* get_eot_0() const { return ___eot_0; }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD** get_address_of_eot_0() { return &___eot_0; }
	inline void set_eot_0(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* value)
	{
		___eot_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eot_0), (void*)value);
	}

	inline static int32_t get_offset_of_eof_1() { return static_cast<int32_t>(offsetof(DFA_t96370EB42325F06C749FB6668FF6025F2D7BFDB3, ___eof_1)); }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* get_eof_1() const { return ___eof_1; }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD** get_address_of_eof_1() { return &___eof_1; }
	inline void set_eof_1(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* value)
	{
		___eof_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eof_1), (void*)value);
	}

	inline static int32_t get_offset_of_min_2() { return static_cast<int32_t>(offsetof(DFA_t96370EB42325F06C749FB6668FF6025F2D7BFDB3, ___min_2)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_min_2() const { return ___min_2; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_min_2() { return &___min_2; }
	inline void set_min_2(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___min_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___min_2), (void*)value);
	}

	inline static int32_t get_offset_of_max_3() { return static_cast<int32_t>(offsetof(DFA_t96370EB42325F06C749FB6668FF6025F2D7BFDB3, ___max_3)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_max_3() const { return ___max_3; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_max_3() { return &___max_3; }
	inline void set_max_3(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___max_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___max_3), (void*)value);
	}

	inline static int32_t get_offset_of_accept_4() { return static_cast<int32_t>(offsetof(DFA_t96370EB42325F06C749FB6668FF6025F2D7BFDB3, ___accept_4)); }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* get_accept_4() const { return ___accept_4; }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD** get_address_of_accept_4() { return &___accept_4; }
	inline void set_accept_4(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* value)
	{
		___accept_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___accept_4), (void*)value);
	}

	inline static int32_t get_offset_of_special_5() { return static_cast<int32_t>(offsetof(DFA_t96370EB42325F06C749FB6668FF6025F2D7BFDB3, ___special_5)); }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* get_special_5() const { return ___special_5; }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD** get_address_of_special_5() { return &___special_5; }
	inline void set_special_5(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* value)
	{
		___special_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___special_5), (void*)value);
	}

	inline static int32_t get_offset_of_transition_6() { return static_cast<int32_t>(offsetof(DFA_t96370EB42325F06C749FB6668FF6025F2D7BFDB3, ___transition_6)); }
	inline Int16U5BU5DU5BU5D_t543ACA7B5432CCA0395B0944D21B4E37B8825D77* get_transition_6() const { return ___transition_6; }
	inline Int16U5BU5DU5BU5D_t543ACA7B5432CCA0395B0944D21B4E37B8825D77** get_address_of_transition_6() { return &___transition_6; }
	inline void set_transition_6(Int16U5BU5DU5BU5D_t543ACA7B5432CCA0395B0944D21B4E37B8825D77* value)
	{
		___transition_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___transition_6), (void*)value);
	}

	inline static int32_t get_offset_of_decisionNumber_7() { return static_cast<int32_t>(offsetof(DFA_t96370EB42325F06C749FB6668FF6025F2D7BFDB3, ___decisionNumber_7)); }
	inline int32_t get_decisionNumber_7() const { return ___decisionNumber_7; }
	inline int32_t* get_address_of_decisionNumber_7() { return &___decisionNumber_7; }
	inline void set_decisionNumber_7(int32_t value)
	{
		___decisionNumber_7 = value;
	}

	inline static int32_t get_offset_of_recognizer_8() { return static_cast<int32_t>(offsetof(DFA_t96370EB42325F06C749FB6668FF6025F2D7BFDB3, ___recognizer_8)); }
	inline BaseRecognizer_tB62A3AE694CEC553C74F519EE830E68C521C3DEC * get_recognizer_8() const { return ___recognizer_8; }
	inline BaseRecognizer_tB62A3AE694CEC553C74F519EE830E68C521C3DEC ** get_address_of_recognizer_8() { return &___recognizer_8; }
	inline void set_recognizer_8(BaseRecognizer_tB62A3AE694CEC553C74F519EE830E68C521C3DEC * value)
	{
		___recognizer_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___recognizer_8), (void*)value);
	}

	inline static int32_t get_offset_of_debug_9() { return static_cast<int32_t>(offsetof(DFA_t96370EB42325F06C749FB6668FF6025F2D7BFDB3, ___debug_9)); }
	inline bool get_debug_9() const { return ___debug_9; }
	inline bool* get_address_of_debug_9() { return &___debug_9; }
	inline void set_debug_9(bool value)
	{
		___debug_9 = value;
	}

	inline static int32_t get_offset_of_U3CSpecialStateTransitionU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(DFA_t96370EB42325F06C749FB6668FF6025F2D7BFDB3, ___U3CSpecialStateTransitionU3Ek__BackingField_10)); }
	inline SpecialStateTransitionHandler_t27F1B147487F7736825C69BA1576DEFD7AACA37C * get_U3CSpecialStateTransitionU3Ek__BackingField_10() const { return ___U3CSpecialStateTransitionU3Ek__BackingField_10; }
	inline SpecialStateTransitionHandler_t27F1B147487F7736825C69BA1576DEFD7AACA37C ** get_address_of_U3CSpecialStateTransitionU3Ek__BackingField_10() { return &___U3CSpecialStateTransitionU3Ek__BackingField_10; }
	inline void set_U3CSpecialStateTransitionU3Ek__BackingField_10(SpecialStateTransitionHandler_t27F1B147487F7736825C69BA1576DEFD7AACA37C * value)
	{
		___U3CSpecialStateTransitionU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSpecialStateTransitionU3Ek__BackingField_10), (void*)value);
	}
};


// Naninovel.Antlr3.Runtime.PCL.Output.ErrorOutputStream
struct  ErrorOutputStream_t1B4C5CA9639AC25142EF77F0FDD631EDF8D43378  : public RuntimeObject
{
public:

public:
};


// System.EventArgs
struct  EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA  : public RuntimeObject
{
public:

public:
};

struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields, ___Empty_0)); }
	inline EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_0), (void*)value);
	}
};


// Naninovel.NCalc.Domain.LogicalExpression
struct  LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968  : public RuntimeObject
{
public:

public:
};


// Naninovel.NCalc.Domain.LogicalExpressionVisitor
struct  LogicalExpressionVisitor_t4FEC2A3FF1F4D8E4207828C80EBEC796EC6AED13  : public RuntimeObject
{
public:

public:
};


// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// Naninovel.Antlr3.Runtime.PCL.Output.OutputStreamHost
struct  OutputStreamHost_t773C1346869A07F4E2BEBC5B09743A165B75C534  : public RuntimeObject
{
public:

public:
};

struct OutputStreamHost_t773C1346869A07F4E2BEBC5B09743A165B75C534_StaticFields
{
public:
	// System.Double Naninovel.Antlr3.Runtime.PCL.Output.OutputStreamHost::_previous_progress
	double ____previous_progress_0;
	// System.Collections.Generic.IList`1<Naninovel.Antlr3.Runtime.PCL.Output.IOutputStream> Naninovel.Antlr3.Runtime.PCL.Output.OutputStreamHost::_output_streams
	RuntimeObject* ____output_streams_1;

public:
	inline static int32_t get_offset_of__previous_progress_0() { return static_cast<int32_t>(offsetof(OutputStreamHost_t773C1346869A07F4E2BEBC5B09743A165B75C534_StaticFields, ____previous_progress_0)); }
	inline double get__previous_progress_0() const { return ____previous_progress_0; }
	inline double* get_address_of__previous_progress_0() { return &____previous_progress_0; }
	inline void set__previous_progress_0(double value)
	{
		____previous_progress_0 = value;
	}

	inline static int32_t get_offset_of__output_streams_1() { return static_cast<int32_t>(offsetof(OutputStreamHost_t773C1346869A07F4E2BEBC5B09743A165B75C534_StaticFields, ____output_streams_1)); }
	inline RuntimeObject* get__output_streams_1() const { return ____output_streams_1; }
	inline RuntimeObject** get_address_of__output_streams_1() { return &____output_streams_1; }
	inline void set__output_streams_1(RuntimeObject* value)
	{
		____output_streams_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____output_streams_1), (void*)value);
	}
};


// Naninovel.Antlr.Runtime.RecognizerSharedState
struct  RecognizerSharedState_t80A4DCAF6DF4AF2F486E4958547F7FE3D4EC53F9  : public RuntimeObject
{
public:
	// Naninovel.Antlr.Runtime.BitSet[] Naninovel.Antlr.Runtime.RecognizerSharedState::following
	BitSetU5BU5D_t5ECDC2A01D26B742E9ECE04E0909786124426251* ___following_0;
	// System.Int32 Naninovel.Antlr.Runtime.RecognizerSharedState::_fsp
	int32_t ____fsp_1;
	// System.Boolean Naninovel.Antlr.Runtime.RecognizerSharedState::errorRecovery
	bool ___errorRecovery_2;
	// System.Int32 Naninovel.Antlr.Runtime.RecognizerSharedState::lastErrorIndex
	int32_t ___lastErrorIndex_3;
	// System.Boolean Naninovel.Antlr.Runtime.RecognizerSharedState::failed
	bool ___failed_4;
	// System.Int32 Naninovel.Antlr.Runtime.RecognizerSharedState::syntaxErrors
	int32_t ___syntaxErrors_5;
	// System.Int32 Naninovel.Antlr.Runtime.RecognizerSharedState::backtracking
	int32_t ___backtracking_6;
	// Naninovel.Antlr.Runtime.IToken Naninovel.Antlr.Runtime.RecognizerSharedState::token
	RuntimeObject* ___token_7;
	// System.Int32 Naninovel.Antlr.Runtime.RecognizerSharedState::tokenStartCharIndex
	int32_t ___tokenStartCharIndex_8;
	// System.Int32 Naninovel.Antlr.Runtime.RecognizerSharedState::tokenStartLine
	int32_t ___tokenStartLine_9;
	// System.Int32 Naninovel.Antlr.Runtime.RecognizerSharedState::tokenStartCharPositionInLine
	int32_t ___tokenStartCharPositionInLine_10;
	// System.Int32 Naninovel.Antlr.Runtime.RecognizerSharedState::channel
	int32_t ___channel_11;
	// System.Int32 Naninovel.Antlr.Runtime.RecognizerSharedState::type
	int32_t ___type_12;
	// System.String Naninovel.Antlr.Runtime.RecognizerSharedState::text
	String_t* ___text_13;

public:
	inline static int32_t get_offset_of_following_0() { return static_cast<int32_t>(offsetof(RecognizerSharedState_t80A4DCAF6DF4AF2F486E4958547F7FE3D4EC53F9, ___following_0)); }
	inline BitSetU5BU5D_t5ECDC2A01D26B742E9ECE04E0909786124426251* get_following_0() const { return ___following_0; }
	inline BitSetU5BU5D_t5ECDC2A01D26B742E9ECE04E0909786124426251** get_address_of_following_0() { return &___following_0; }
	inline void set_following_0(BitSetU5BU5D_t5ECDC2A01D26B742E9ECE04E0909786124426251* value)
	{
		___following_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___following_0), (void*)value);
	}

	inline static int32_t get_offset_of__fsp_1() { return static_cast<int32_t>(offsetof(RecognizerSharedState_t80A4DCAF6DF4AF2F486E4958547F7FE3D4EC53F9, ____fsp_1)); }
	inline int32_t get__fsp_1() const { return ____fsp_1; }
	inline int32_t* get_address_of__fsp_1() { return &____fsp_1; }
	inline void set__fsp_1(int32_t value)
	{
		____fsp_1 = value;
	}

	inline static int32_t get_offset_of_errorRecovery_2() { return static_cast<int32_t>(offsetof(RecognizerSharedState_t80A4DCAF6DF4AF2F486E4958547F7FE3D4EC53F9, ___errorRecovery_2)); }
	inline bool get_errorRecovery_2() const { return ___errorRecovery_2; }
	inline bool* get_address_of_errorRecovery_2() { return &___errorRecovery_2; }
	inline void set_errorRecovery_2(bool value)
	{
		___errorRecovery_2 = value;
	}

	inline static int32_t get_offset_of_lastErrorIndex_3() { return static_cast<int32_t>(offsetof(RecognizerSharedState_t80A4DCAF6DF4AF2F486E4958547F7FE3D4EC53F9, ___lastErrorIndex_3)); }
	inline int32_t get_lastErrorIndex_3() const { return ___lastErrorIndex_3; }
	inline int32_t* get_address_of_lastErrorIndex_3() { return &___lastErrorIndex_3; }
	inline void set_lastErrorIndex_3(int32_t value)
	{
		___lastErrorIndex_3 = value;
	}

	inline static int32_t get_offset_of_failed_4() { return static_cast<int32_t>(offsetof(RecognizerSharedState_t80A4DCAF6DF4AF2F486E4958547F7FE3D4EC53F9, ___failed_4)); }
	inline bool get_failed_4() const { return ___failed_4; }
	inline bool* get_address_of_failed_4() { return &___failed_4; }
	inline void set_failed_4(bool value)
	{
		___failed_4 = value;
	}

	inline static int32_t get_offset_of_syntaxErrors_5() { return static_cast<int32_t>(offsetof(RecognizerSharedState_t80A4DCAF6DF4AF2F486E4958547F7FE3D4EC53F9, ___syntaxErrors_5)); }
	inline int32_t get_syntaxErrors_5() const { return ___syntaxErrors_5; }
	inline int32_t* get_address_of_syntaxErrors_5() { return &___syntaxErrors_5; }
	inline void set_syntaxErrors_5(int32_t value)
	{
		___syntaxErrors_5 = value;
	}

	inline static int32_t get_offset_of_backtracking_6() { return static_cast<int32_t>(offsetof(RecognizerSharedState_t80A4DCAF6DF4AF2F486E4958547F7FE3D4EC53F9, ___backtracking_6)); }
	inline int32_t get_backtracking_6() const { return ___backtracking_6; }
	inline int32_t* get_address_of_backtracking_6() { return &___backtracking_6; }
	inline void set_backtracking_6(int32_t value)
	{
		___backtracking_6 = value;
	}

	inline static int32_t get_offset_of_token_7() { return static_cast<int32_t>(offsetof(RecognizerSharedState_t80A4DCAF6DF4AF2F486E4958547F7FE3D4EC53F9, ___token_7)); }
	inline RuntimeObject* get_token_7() const { return ___token_7; }
	inline RuntimeObject** get_address_of_token_7() { return &___token_7; }
	inline void set_token_7(RuntimeObject* value)
	{
		___token_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___token_7), (void*)value);
	}

	inline static int32_t get_offset_of_tokenStartCharIndex_8() { return static_cast<int32_t>(offsetof(RecognizerSharedState_t80A4DCAF6DF4AF2F486E4958547F7FE3D4EC53F9, ___tokenStartCharIndex_8)); }
	inline int32_t get_tokenStartCharIndex_8() const { return ___tokenStartCharIndex_8; }
	inline int32_t* get_address_of_tokenStartCharIndex_8() { return &___tokenStartCharIndex_8; }
	inline void set_tokenStartCharIndex_8(int32_t value)
	{
		___tokenStartCharIndex_8 = value;
	}

	inline static int32_t get_offset_of_tokenStartLine_9() { return static_cast<int32_t>(offsetof(RecognizerSharedState_t80A4DCAF6DF4AF2F486E4958547F7FE3D4EC53F9, ___tokenStartLine_9)); }
	inline int32_t get_tokenStartLine_9() const { return ___tokenStartLine_9; }
	inline int32_t* get_address_of_tokenStartLine_9() { return &___tokenStartLine_9; }
	inline void set_tokenStartLine_9(int32_t value)
	{
		___tokenStartLine_9 = value;
	}

	inline static int32_t get_offset_of_tokenStartCharPositionInLine_10() { return static_cast<int32_t>(offsetof(RecognizerSharedState_t80A4DCAF6DF4AF2F486E4958547F7FE3D4EC53F9, ___tokenStartCharPositionInLine_10)); }
	inline int32_t get_tokenStartCharPositionInLine_10() const { return ___tokenStartCharPositionInLine_10; }
	inline int32_t* get_address_of_tokenStartCharPositionInLine_10() { return &___tokenStartCharPositionInLine_10; }
	inline void set_tokenStartCharPositionInLine_10(int32_t value)
	{
		___tokenStartCharPositionInLine_10 = value;
	}

	inline static int32_t get_offset_of_channel_11() { return static_cast<int32_t>(offsetof(RecognizerSharedState_t80A4DCAF6DF4AF2F486E4958547F7FE3D4EC53F9, ___channel_11)); }
	inline int32_t get_channel_11() const { return ___channel_11; }
	inline int32_t* get_address_of_channel_11() { return &___channel_11; }
	inline void set_channel_11(int32_t value)
	{
		___channel_11 = value;
	}

	inline static int32_t get_offset_of_type_12() { return static_cast<int32_t>(offsetof(RecognizerSharedState_t80A4DCAF6DF4AF2F486E4958547F7FE3D4EC53F9, ___type_12)); }
	inline int32_t get_type_12() const { return ___type_12; }
	inline int32_t* get_address_of_type_12() { return &___type_12; }
	inline void set_type_12(int32_t value)
	{
		___type_12 = value;
	}

	inline static int32_t get_offset_of_text_13() { return static_cast<int32_t>(offsetof(RecognizerSharedState_t80A4DCAF6DF4AF2F486E4958547F7FE3D4EC53F9, ___text_13)); }
	inline String_t* get_text_13() const { return ___text_13; }
	inline String_t** get_address_of_text_13() { return &___text_13; }
	inline void set_text_13(String_t* value)
	{
		___text_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_13), (void*)value);
	}
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


// Naninovel.Antlr.Runtime.Tokens
struct  Tokens_tDC8B3C3FB6A2724A8AF82592E67CA6F41BCA22F2  : public RuntimeObject
{
public:

public:
};

struct Tokens_tDC8B3C3FB6A2724A8AF82592E67CA6F41BCA22F2_StaticFields
{
public:
	// Naninovel.Antlr.Runtime.IToken Naninovel.Antlr.Runtime.Tokens::EndOfFile
	RuntimeObject* ___EndOfFile_0;
	// Naninovel.Antlr.Runtime.IToken Naninovel.Antlr.Runtime.Tokens::Invalid
	RuntimeObject* ___Invalid_1;
	// Naninovel.Antlr.Runtime.IToken Naninovel.Antlr.Runtime.Tokens::Skip
	RuntimeObject* ___Skip_2;

public:
	inline static int32_t get_offset_of_EndOfFile_0() { return static_cast<int32_t>(offsetof(Tokens_tDC8B3C3FB6A2724A8AF82592E67CA6F41BCA22F2_StaticFields, ___EndOfFile_0)); }
	inline RuntimeObject* get_EndOfFile_0() const { return ___EndOfFile_0; }
	inline RuntimeObject** get_address_of_EndOfFile_0() { return &___EndOfFile_0; }
	inline void set_EndOfFile_0(RuntimeObject* value)
	{
		___EndOfFile_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EndOfFile_0), (void*)value);
	}

	inline static int32_t get_offset_of_Invalid_1() { return static_cast<int32_t>(offsetof(Tokens_tDC8B3C3FB6A2724A8AF82592E67CA6F41BCA22F2_StaticFields, ___Invalid_1)); }
	inline RuntimeObject* get_Invalid_1() const { return ___Invalid_1; }
	inline RuntimeObject** get_address_of_Invalid_1() { return &___Invalid_1; }
	inline void set_Invalid_1(RuntimeObject* value)
	{
		___Invalid_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Invalid_1), (void*)value);
	}

	inline static int32_t get_offset_of_Skip_2() { return static_cast<int32_t>(offsetof(Tokens_tDC8B3C3FB6A2724A8AF82592E67CA6F41BCA22F2_StaticFields, ___Skip_2)); }
	inline RuntimeObject* get_Skip_2() const { return ___Skip_2; }
	inline RuntimeObject** get_address_of_Skip_2() { return &___Skip_2; }
	inline void set_Skip_2(RuntimeObject* value)
	{
		___Skip_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Skip_2), (void*)value);
	}
};


// Naninovel.NCalc.TypeExtensions
struct  TypeExtensions_tE1DD98AE3B6855ED7E4CC08F646E06243174E287  : public RuntimeObject
{
public:

public:
};

struct TypeExtensions_tE1DD98AE3B6855ED7E4CC08F646E06243174E287_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Type,System.TypeCode> Naninovel.NCalc.TypeExtensions::TypeCodeMap
	Dictionary_2_tD1E7320AFFDAE6777C97AF253CBDC0E6858A81A5 * ___TypeCodeMap_0;

public:
	inline static int32_t get_offset_of_TypeCodeMap_0() { return static_cast<int32_t>(offsetof(TypeExtensions_tE1DD98AE3B6855ED7E4CC08F646E06243174E287_StaticFields, ___TypeCodeMap_0)); }
	inline Dictionary_2_tD1E7320AFFDAE6777C97AF253CBDC0E6858A81A5 * get_TypeCodeMap_0() const { return ___TypeCodeMap_0; }
	inline Dictionary_2_tD1E7320AFFDAE6777C97AF253CBDC0E6858A81A5 ** get_address_of_TypeCodeMap_0() { return &___TypeCodeMap_0; }
	inline void set_TypeCodeMap_0(Dictionary_2_tD1E7320AFFDAE6777C97AF253CBDC0E6858A81A5 * value)
	{
		___TypeCodeMap_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TypeCodeMap_0), (void*)value);
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

// Naninovel.NCalc.Domain.EvaluationVisitor/<>c__DisplayClass22_0
struct  U3CU3Ec__DisplayClass22_0_tE2DBA219B6505F442898A670ED39458F9138F243  : public RuntimeObject
{
public:
	// System.Object Naninovel.NCalc.Domain.EvaluationVisitor/<>c__DisplayClass22_0::leftValue
	RuntimeObject * ___leftValue_0;
	// Naninovel.NCalc.Domain.BinaryExpression Naninovel.NCalc.Domain.EvaluationVisitor/<>c__DisplayClass22_0::expression
	BinaryExpression_t6B952CF817520F64ACE95BE470B2F349856B92D9 * ___expression_1;
	// Naninovel.NCalc.Domain.EvaluationVisitor Naninovel.NCalc.Domain.EvaluationVisitor/<>c__DisplayClass22_0::<>4__this
	EvaluationVisitor_t3A83237C8491A3205B23CE40CE4ECAF2EFB0BAB1 * ___U3CU3E4__this_2;
	// System.Object Naninovel.NCalc.Domain.EvaluationVisitor/<>c__DisplayClass22_0::rightValue
	RuntimeObject * ___rightValue_3;

public:
	inline static int32_t get_offset_of_leftValue_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass22_0_tE2DBA219B6505F442898A670ED39458F9138F243, ___leftValue_0)); }
	inline RuntimeObject * get_leftValue_0() const { return ___leftValue_0; }
	inline RuntimeObject ** get_address_of_leftValue_0() { return &___leftValue_0; }
	inline void set_leftValue_0(RuntimeObject * value)
	{
		___leftValue_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___leftValue_0), (void*)value);
	}

	inline static int32_t get_offset_of_expression_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass22_0_tE2DBA219B6505F442898A670ED39458F9138F243, ___expression_1)); }
	inline BinaryExpression_t6B952CF817520F64ACE95BE470B2F349856B92D9 * get_expression_1() const { return ___expression_1; }
	inline BinaryExpression_t6B952CF817520F64ACE95BE470B2F349856B92D9 ** get_address_of_expression_1() { return &___expression_1; }
	inline void set_expression_1(BinaryExpression_t6B952CF817520F64ACE95BE470B2F349856B92D9 * value)
	{
		___expression_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___expression_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass22_0_tE2DBA219B6505F442898A670ED39458F9138F243, ___U3CU3E4__this_2)); }
	inline EvaluationVisitor_t3A83237C8491A3205B23CE40CE4ECAF2EFB0BAB1 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline EvaluationVisitor_t3A83237C8491A3205B23CE40CE4ECAF2EFB0BAB1 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(EvaluationVisitor_t3A83237C8491A3205B23CE40CE4ECAF2EFB0BAB1 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_rightValue_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass22_0_tE2DBA219B6505F442898A670ED39458F9138F243, ___rightValue_3)); }
	inline RuntimeObject * get_rightValue_3() const { return ___rightValue_3; }
	inline RuntimeObject ** get_address_of_rightValue_3() { return &___rightValue_3; }
	inline void set_rightValue_3(RuntimeObject * value)
	{
		___rightValue_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rightValue_3), (void*)value);
	}
};


// Naninovel.NCalc.NCalcParser/Follow
struct  Follow_t8062F7C92640B848282CA7382579322185C96CA1  : public RuntimeObject
{
public:

public:
};

struct Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields
{
public:
	// Naninovel.Antlr.Runtime.BitSet Naninovel.NCalc.NCalcParser/Follow::_logicalExpression_in_ncalcExpression56
	BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * ____logicalExpression_in_ncalcExpression56_0;
	// Naninovel.Antlr.Runtime.BitSet Naninovel.NCalc.NCalcParser/Follow::_EOF_in_ncalcExpression58
	BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * ____EOF_in_ncalcExpression58_1;
	// Naninovel.Antlr.Runtime.BitSet Naninovel.NCalc.NCalcParser/Follow::_conditionalExpression_in_logicalExpression78
	BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * ____conditionalExpression_in_logicalExpression78_2;
	// Naninovel.Antlr.Runtime.BitSet Naninovel.NCalc.NCalcParser/Follow::_41_in_logicalExpression84
	BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * ____41_in_logicalExpression84_3;
	// Naninovel.Antlr.Runtime.BitSet Naninovel.NCalc.NCalcParser/Follow::_conditionalExpression_in_logicalExpression88
	BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * ____conditionalExpression_in_logicalExpression88_4;
	// Naninovel.Antlr.Runtime.BitSet Naninovel.NCalc.NCalcParser/Follow::_31_in_logicalExpression90
	BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * ____31_in_logicalExpression90_5;
	// Naninovel.Antlr.Runtime.BitSet Naninovel.NCalc.NCalcParser/Follow::_conditionalExpression_in_logicalExpression94
	BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * ____conditionalExpression_in_logicalExpression94_6;
	// Naninovel.Antlr.Runtime.BitSet Naninovel.NCalc.NCalcParser/Follow::_booleanAndExpression_in_conditionalExpression121
	BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * ____booleanAndExpression_in_conditionalExpression121_7;
	// Naninovel.Antlr.Runtime.BitSet Naninovel.NCalc.NCalcParser/Follow::_set_in_conditionalExpression130
	BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * ____set_in_conditionalExpression130_8;
	// Naninovel.Antlr.Runtime.BitSet Naninovel.NCalc.NCalcParser/Follow::_conditionalExpression_in_conditionalExpression146
	BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * ____conditionalExpression_in_conditionalExpression146_9;
	// Naninovel.Antlr.Runtime.BitSet Naninovel.NCalc.NCalcParser/Follow::_bitwiseOrExpression_in_booleanAndExpression180
	BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * ____bitwiseOrExpression_in_booleanAndExpression180_10;
	// Naninovel.Antlr.Runtime.BitSet Naninovel.NCalc.NCalcParser/Follow::_set_in_booleanAndExpression189
	BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * ____set_in_booleanAndExpression189_11;
	// Naninovel.Antlr.Runtime.BitSet Naninovel.NCalc.NCalcParser/Follow::_bitwiseOrExpression_in_booleanAndExpression205
	BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * ____bitwiseOrExpression_in_booleanAndExpression205_12;
	// Naninovel.Antlr.Runtime.BitSet Naninovel.NCalc.NCalcParser/Follow::_bitwiseXOrExpression_in_bitwiseOrExpression237
	BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * ____bitwiseXOrExpression_in_bitwiseOrExpression237_13;
	// Naninovel.Antlr.Runtime.BitSet Naninovel.NCalc.NCalcParser/Follow::_46_in_bitwiseOrExpression246
	BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * ____46_in_bitwiseOrExpression246_14;
	// Naninovel.Antlr.Runtime.BitSet Naninovel.NCalc.NCalcParser/Follow::_bitwiseOrExpression_in_bitwiseOrExpression256
	BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * ____bitwiseOrExpression_in_bitwiseOrExpression256_15;
	// Naninovel.Antlr.Runtime.BitSet Naninovel.NCalc.NCalcParser/Follow::_bitwiseAndExpression_in_bitwiseXOrExpression290
	BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * ____bitwiseAndExpression_in_bitwiseXOrExpression290_16;
	// Naninovel.Antlr.Runtime.BitSet Naninovel.NCalc.NCalcParser/Follow::_42_in_bitwiseXOrExpression299
	BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * ____42_in_bitwiseXOrExpression299_17;
	// Naninovel.Antlr.Runtime.BitSet Naninovel.NCalc.NCalcParser/Follow::_bitwiseAndExpression_in_bitwiseXOrExpression309
	BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * ____bitwiseAndExpression_in_bitwiseXOrExpression309_18;
	// Naninovel.Antlr.Runtime.BitSet Naninovel.NCalc.NCalcParser/Follow::_equalityExpression_in_bitwiseAndExpression341
	BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * ____equalityExpression_in_bitwiseAndExpression341_19;
	// Naninovel.Antlr.Runtime.BitSet Naninovel.NCalc.NCalcParser/Follow::_23_in_bitwiseAndExpression350
	BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * ____23_in_bitwiseAndExpression350_20;
	// Naninovel.Antlr.Runtime.BitSet Naninovel.NCalc.NCalcParser/Follow::_equalityExpression_in_bitwiseAndExpression360
	BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * ____equalityExpression_in_bitwiseAndExpression360_21;
	// Naninovel.Antlr.Runtime.BitSet Naninovel.NCalc.NCalcParser/Follow::_relationalExpression_in_equalityExpression394
	BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * ____relationalExpression_in_equalityExpression394_22;
	// Naninovel.Antlr.Runtime.BitSet Naninovel.NCalc.NCalcParser/Follow::_set_in_equalityExpression405
	BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * ____set_in_equalityExpression405_23;
	// Naninovel.Antlr.Runtime.BitSet Naninovel.NCalc.NCalcParser/Follow::_set_in_equalityExpression422
	BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * ____set_in_equalityExpression422_24;
	// Naninovel.Antlr.Runtime.BitSet Naninovel.NCalc.NCalcParser/Follow::_relationalExpression_in_equalityExpression441
	BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * ____relationalExpression_in_equalityExpression441_25;
	// Naninovel.Antlr.Runtime.BitSet Naninovel.NCalc.NCalcParser/Follow::_shiftExpression_in_relationalExpression474
	BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * ____shiftExpression_in_relationalExpression474_26;
	// Naninovel.Antlr.Runtime.BitSet Naninovel.NCalc.NCalcParser/Follow::_32_in_relationalExpression485
	BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * ____32_in_relationalExpression485_27;
	// Naninovel.Antlr.Runtime.BitSet Naninovel.NCalc.NCalcParser/Follow::_34_in_relationalExpression495
	BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * ____34_in_relationalExpression495_28;
	// Naninovel.Antlr.Runtime.BitSet Naninovel.NCalc.NCalcParser/Follow::_38_in_relationalExpression506
	BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * ____38_in_relationalExpression506_29;
	// Naninovel.Antlr.Runtime.BitSet Naninovel.NCalc.NCalcParser/Follow::_39_in_relationalExpression516
	BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * ____39_in_relationalExpression516_30;
	// Naninovel.Antlr.Runtime.BitSet Naninovel.NCalc.NCalcParser/Follow::_shiftExpression_in_relationalExpression528
	BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * ____shiftExpression_in_relationalExpression528_31;
	// Naninovel.Antlr.Runtime.BitSet Naninovel.NCalc.NCalcParser/Follow::_additiveExpression_in_shiftExpression560
	BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * ____additiveExpression_in_shiftExpression560_32;
	// Naninovel.Antlr.Runtime.BitSet Naninovel.NCalc.NCalcParser/Follow::_33_in_shiftExpression571
	BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * ____33_in_shiftExpression571_33;
	// Naninovel.Antlr.Runtime.BitSet Naninovel.NCalc.NCalcParser/Follow::_40_in_shiftExpression581
	BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * ____40_in_shiftExpression581_34;
	// Naninovel.Antlr.Runtime.BitSet Naninovel.NCalc.NCalcParser/Follow::_additiveExpression_in_shiftExpression593
	BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * ____additiveExpression_in_shiftExpression593_35;
	// Naninovel.Antlr.Runtime.BitSet Naninovel.NCalc.NCalcParser/Follow::_multiplicativeExpression_in_additiveExpression625
	BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * ____multiplicativeExpression_in_additiveExpression625_36;
	// Naninovel.Antlr.Runtime.BitSet Naninovel.NCalc.NCalcParser/Follow::_27_in_additiveExpression636
	BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * ____27_in_additiveExpression636_37;
	// Naninovel.Antlr.Runtime.BitSet Naninovel.NCalc.NCalcParser/Follow::_29_in_additiveExpression646
	BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * ____29_in_additiveExpression646_38;
	// Naninovel.Antlr.Runtime.BitSet Naninovel.NCalc.NCalcParser/Follow::_multiplicativeExpression_in_additiveExpression658
	BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * ____multiplicativeExpression_in_additiveExpression658_39;
	// Naninovel.Antlr.Runtime.BitSet Naninovel.NCalc.NCalcParser/Follow::_unaryExpression_in_multiplicativeExpression690
	BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * ____unaryExpression_in_multiplicativeExpression690_40;
	// Naninovel.Antlr.Runtime.BitSet Naninovel.NCalc.NCalcParser/Follow::_26_in_multiplicativeExpression701
	BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * ____26_in_multiplicativeExpression701_41;
	// Naninovel.Antlr.Runtime.BitSet Naninovel.NCalc.NCalcParser/Follow::_30_in_multiplicativeExpression711
	BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * ____30_in_multiplicativeExpression711_42;
	// Naninovel.Antlr.Runtime.BitSet Naninovel.NCalc.NCalcParser/Follow::_21_in_multiplicativeExpression721
	BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * ____21_in_multiplicativeExpression721_43;
	// Naninovel.Antlr.Runtime.BitSet Naninovel.NCalc.NCalcParser/Follow::_unaryExpression_in_multiplicativeExpression733
	BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * ____unaryExpression_in_multiplicativeExpression733_44;
	// Naninovel.Antlr.Runtime.BitSet Naninovel.NCalc.NCalcParser/Follow::_primaryExpression_in_unaryExpression760
	BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * ____primaryExpression_in_unaryExpression760_45;
	// Naninovel.Antlr.Runtime.BitSet Naninovel.NCalc.NCalcParser/Follow::_set_in_unaryExpression771
	BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * ____set_in_unaryExpression771_46;
	// Naninovel.Antlr.Runtime.BitSet Naninovel.NCalc.NCalcParser/Follow::_primaryExpression_in_unaryExpression779
	BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * ____primaryExpression_in_unaryExpression779_47;
	// Naninovel.Antlr.Runtime.BitSet Naninovel.NCalc.NCalcParser/Follow::_48_in_unaryExpression791
	BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * ____48_in_unaryExpression791_48;
	// Naninovel.Antlr.Runtime.BitSet Naninovel.NCalc.NCalcParser/Follow::_primaryExpression_in_unaryExpression794
	BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * ____primaryExpression_in_unaryExpression794_49;
	// Naninovel.Antlr.Runtime.BitSet Naninovel.NCalc.NCalcParser/Follow::_29_in_unaryExpression805
	BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * ____29_in_unaryExpression805_50;
	// Naninovel.Antlr.Runtime.BitSet Naninovel.NCalc.NCalcParser/Follow::_primaryExpression_in_unaryExpression807
	BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * ____primaryExpression_in_unaryExpression807_51;
	// Naninovel.Antlr.Runtime.BitSet Naninovel.NCalc.NCalcParser/Follow::_24_in_primaryExpression829
	BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * ____24_in_primaryExpression829_52;
	// Naninovel.Antlr.Runtime.BitSet Naninovel.NCalc.NCalcParser/Follow::_logicalExpression_in_primaryExpression831
	BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * ____logicalExpression_in_primaryExpression831_53;
	// Naninovel.Antlr.Runtime.BitSet Naninovel.NCalc.NCalcParser/Follow::_25_in_primaryExpression833
	BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * ____25_in_primaryExpression833_54;
	// Naninovel.Antlr.Runtime.BitSet Naninovel.NCalc.NCalcParser/Follow::_value_in_primaryExpression843
	BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * ____value_in_primaryExpression843_55;
	// Naninovel.Antlr.Runtime.BitSet Naninovel.NCalc.NCalcParser/Follow::_identifier_in_primaryExpression851
	BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * ____identifier_in_primaryExpression851_56;
	// Naninovel.Antlr.Runtime.BitSet Naninovel.NCalc.NCalcParser/Follow::_arguments_in_primaryExpression856
	BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * ____arguments_in_primaryExpression856_57;
	// Naninovel.Antlr.Runtime.BitSet Naninovel.NCalc.NCalcParser/Follow::_INTEGER_in_value876
	BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * ____INTEGER_in_value876_58;
	// Naninovel.Antlr.Runtime.BitSet Naninovel.NCalc.NCalcParser/Follow::_FLOAT_in_value884
	BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * ____FLOAT_in_value884_59;
	// Naninovel.Antlr.Runtime.BitSet Naninovel.NCalc.NCalcParser/Follow::_STRING_in_value892
	BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * ____STRING_in_value892_60;
	// Naninovel.Antlr.Runtime.BitSet Naninovel.NCalc.NCalcParser/Follow::_DATETIME_in_value901
	BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * ____DATETIME_in_value901_61;
	// Naninovel.Antlr.Runtime.BitSet Naninovel.NCalc.NCalcParser/Follow::_TRUE_in_value908
	BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * ____TRUE_in_value908_62;
	// Naninovel.Antlr.Runtime.BitSet Naninovel.NCalc.NCalcParser/Follow::_FALSE_in_value916
	BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * ____FALSE_in_value916_63;
	// Naninovel.Antlr.Runtime.BitSet Naninovel.NCalc.NCalcParser/Follow::_ID_in_identifier934
	BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * ____ID_in_identifier934_64;
	// Naninovel.Antlr.Runtime.BitSet Naninovel.NCalc.NCalcParser/Follow::_NAME_in_identifier942
	BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * ____NAME_in_identifier942_65;
	// Naninovel.Antlr.Runtime.BitSet Naninovel.NCalc.NCalcParser/Follow::_logicalExpression_in_expressionList966
	BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * ____logicalExpression_in_expressionList966_66;
	// Naninovel.Antlr.Runtime.BitSet Naninovel.NCalc.NCalcParser/Follow::_28_in_expressionList973
	BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * ____28_in_expressionList973_67;
	// Naninovel.Antlr.Runtime.BitSet Naninovel.NCalc.NCalcParser/Follow::_logicalExpression_in_expressionList977
	BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * ____logicalExpression_in_expressionList977_68;
	// Naninovel.Antlr.Runtime.BitSet Naninovel.NCalc.NCalcParser/Follow::_24_in_arguments1006
	BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * ____24_in_arguments1006_69;
	// Naninovel.Antlr.Runtime.BitSet Naninovel.NCalc.NCalcParser/Follow::_expressionList_in_arguments1010
	BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * ____expressionList_in_arguments1010_70;
	// Naninovel.Antlr.Runtime.BitSet Naninovel.NCalc.NCalcParser/Follow::_25_in_arguments1017
	BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * ____25_in_arguments1017_71;

public:
	inline static int32_t get_offset_of__logicalExpression_in_ncalcExpression56_0() { return static_cast<int32_t>(offsetof(Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields, ____logicalExpression_in_ncalcExpression56_0)); }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * get__logicalExpression_in_ncalcExpression56_0() const { return ____logicalExpression_in_ncalcExpression56_0; }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 ** get_address_of__logicalExpression_in_ncalcExpression56_0() { return &____logicalExpression_in_ncalcExpression56_0; }
	inline void set__logicalExpression_in_ncalcExpression56_0(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * value)
	{
		____logicalExpression_in_ncalcExpression56_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____logicalExpression_in_ncalcExpression56_0), (void*)value);
	}

	inline static int32_t get_offset_of__EOF_in_ncalcExpression58_1() { return static_cast<int32_t>(offsetof(Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields, ____EOF_in_ncalcExpression58_1)); }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * get__EOF_in_ncalcExpression58_1() const { return ____EOF_in_ncalcExpression58_1; }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 ** get_address_of__EOF_in_ncalcExpression58_1() { return &____EOF_in_ncalcExpression58_1; }
	inline void set__EOF_in_ncalcExpression58_1(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * value)
	{
		____EOF_in_ncalcExpression58_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____EOF_in_ncalcExpression58_1), (void*)value);
	}

	inline static int32_t get_offset_of__conditionalExpression_in_logicalExpression78_2() { return static_cast<int32_t>(offsetof(Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields, ____conditionalExpression_in_logicalExpression78_2)); }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * get__conditionalExpression_in_logicalExpression78_2() const { return ____conditionalExpression_in_logicalExpression78_2; }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 ** get_address_of__conditionalExpression_in_logicalExpression78_2() { return &____conditionalExpression_in_logicalExpression78_2; }
	inline void set__conditionalExpression_in_logicalExpression78_2(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * value)
	{
		____conditionalExpression_in_logicalExpression78_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____conditionalExpression_in_logicalExpression78_2), (void*)value);
	}

	inline static int32_t get_offset_of__41_in_logicalExpression84_3() { return static_cast<int32_t>(offsetof(Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields, ____41_in_logicalExpression84_3)); }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * get__41_in_logicalExpression84_3() const { return ____41_in_logicalExpression84_3; }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 ** get_address_of__41_in_logicalExpression84_3() { return &____41_in_logicalExpression84_3; }
	inline void set__41_in_logicalExpression84_3(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * value)
	{
		____41_in_logicalExpression84_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____41_in_logicalExpression84_3), (void*)value);
	}

	inline static int32_t get_offset_of__conditionalExpression_in_logicalExpression88_4() { return static_cast<int32_t>(offsetof(Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields, ____conditionalExpression_in_logicalExpression88_4)); }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * get__conditionalExpression_in_logicalExpression88_4() const { return ____conditionalExpression_in_logicalExpression88_4; }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 ** get_address_of__conditionalExpression_in_logicalExpression88_4() { return &____conditionalExpression_in_logicalExpression88_4; }
	inline void set__conditionalExpression_in_logicalExpression88_4(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * value)
	{
		____conditionalExpression_in_logicalExpression88_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____conditionalExpression_in_logicalExpression88_4), (void*)value);
	}

	inline static int32_t get_offset_of__31_in_logicalExpression90_5() { return static_cast<int32_t>(offsetof(Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields, ____31_in_logicalExpression90_5)); }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * get__31_in_logicalExpression90_5() const { return ____31_in_logicalExpression90_5; }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 ** get_address_of__31_in_logicalExpression90_5() { return &____31_in_logicalExpression90_5; }
	inline void set__31_in_logicalExpression90_5(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * value)
	{
		____31_in_logicalExpression90_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____31_in_logicalExpression90_5), (void*)value);
	}

	inline static int32_t get_offset_of__conditionalExpression_in_logicalExpression94_6() { return static_cast<int32_t>(offsetof(Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields, ____conditionalExpression_in_logicalExpression94_6)); }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * get__conditionalExpression_in_logicalExpression94_6() const { return ____conditionalExpression_in_logicalExpression94_6; }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 ** get_address_of__conditionalExpression_in_logicalExpression94_6() { return &____conditionalExpression_in_logicalExpression94_6; }
	inline void set__conditionalExpression_in_logicalExpression94_6(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * value)
	{
		____conditionalExpression_in_logicalExpression94_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____conditionalExpression_in_logicalExpression94_6), (void*)value);
	}

	inline static int32_t get_offset_of__booleanAndExpression_in_conditionalExpression121_7() { return static_cast<int32_t>(offsetof(Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields, ____booleanAndExpression_in_conditionalExpression121_7)); }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * get__booleanAndExpression_in_conditionalExpression121_7() const { return ____booleanAndExpression_in_conditionalExpression121_7; }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 ** get_address_of__booleanAndExpression_in_conditionalExpression121_7() { return &____booleanAndExpression_in_conditionalExpression121_7; }
	inline void set__booleanAndExpression_in_conditionalExpression121_7(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * value)
	{
		____booleanAndExpression_in_conditionalExpression121_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____booleanAndExpression_in_conditionalExpression121_7), (void*)value);
	}

	inline static int32_t get_offset_of__set_in_conditionalExpression130_8() { return static_cast<int32_t>(offsetof(Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields, ____set_in_conditionalExpression130_8)); }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * get__set_in_conditionalExpression130_8() const { return ____set_in_conditionalExpression130_8; }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 ** get_address_of__set_in_conditionalExpression130_8() { return &____set_in_conditionalExpression130_8; }
	inline void set__set_in_conditionalExpression130_8(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * value)
	{
		____set_in_conditionalExpression130_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____set_in_conditionalExpression130_8), (void*)value);
	}

	inline static int32_t get_offset_of__conditionalExpression_in_conditionalExpression146_9() { return static_cast<int32_t>(offsetof(Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields, ____conditionalExpression_in_conditionalExpression146_9)); }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * get__conditionalExpression_in_conditionalExpression146_9() const { return ____conditionalExpression_in_conditionalExpression146_9; }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 ** get_address_of__conditionalExpression_in_conditionalExpression146_9() { return &____conditionalExpression_in_conditionalExpression146_9; }
	inline void set__conditionalExpression_in_conditionalExpression146_9(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * value)
	{
		____conditionalExpression_in_conditionalExpression146_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____conditionalExpression_in_conditionalExpression146_9), (void*)value);
	}

	inline static int32_t get_offset_of__bitwiseOrExpression_in_booleanAndExpression180_10() { return static_cast<int32_t>(offsetof(Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields, ____bitwiseOrExpression_in_booleanAndExpression180_10)); }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * get__bitwiseOrExpression_in_booleanAndExpression180_10() const { return ____bitwiseOrExpression_in_booleanAndExpression180_10; }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 ** get_address_of__bitwiseOrExpression_in_booleanAndExpression180_10() { return &____bitwiseOrExpression_in_booleanAndExpression180_10; }
	inline void set__bitwiseOrExpression_in_booleanAndExpression180_10(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * value)
	{
		____bitwiseOrExpression_in_booleanAndExpression180_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____bitwiseOrExpression_in_booleanAndExpression180_10), (void*)value);
	}

	inline static int32_t get_offset_of__set_in_booleanAndExpression189_11() { return static_cast<int32_t>(offsetof(Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields, ____set_in_booleanAndExpression189_11)); }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * get__set_in_booleanAndExpression189_11() const { return ____set_in_booleanAndExpression189_11; }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 ** get_address_of__set_in_booleanAndExpression189_11() { return &____set_in_booleanAndExpression189_11; }
	inline void set__set_in_booleanAndExpression189_11(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * value)
	{
		____set_in_booleanAndExpression189_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____set_in_booleanAndExpression189_11), (void*)value);
	}

	inline static int32_t get_offset_of__bitwiseOrExpression_in_booleanAndExpression205_12() { return static_cast<int32_t>(offsetof(Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields, ____bitwiseOrExpression_in_booleanAndExpression205_12)); }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * get__bitwiseOrExpression_in_booleanAndExpression205_12() const { return ____bitwiseOrExpression_in_booleanAndExpression205_12; }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 ** get_address_of__bitwiseOrExpression_in_booleanAndExpression205_12() { return &____bitwiseOrExpression_in_booleanAndExpression205_12; }
	inline void set__bitwiseOrExpression_in_booleanAndExpression205_12(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * value)
	{
		____bitwiseOrExpression_in_booleanAndExpression205_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____bitwiseOrExpression_in_booleanAndExpression205_12), (void*)value);
	}

	inline static int32_t get_offset_of__bitwiseXOrExpression_in_bitwiseOrExpression237_13() { return static_cast<int32_t>(offsetof(Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields, ____bitwiseXOrExpression_in_bitwiseOrExpression237_13)); }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * get__bitwiseXOrExpression_in_bitwiseOrExpression237_13() const { return ____bitwiseXOrExpression_in_bitwiseOrExpression237_13; }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 ** get_address_of__bitwiseXOrExpression_in_bitwiseOrExpression237_13() { return &____bitwiseXOrExpression_in_bitwiseOrExpression237_13; }
	inline void set__bitwiseXOrExpression_in_bitwiseOrExpression237_13(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * value)
	{
		____bitwiseXOrExpression_in_bitwiseOrExpression237_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____bitwiseXOrExpression_in_bitwiseOrExpression237_13), (void*)value);
	}

	inline static int32_t get_offset_of__46_in_bitwiseOrExpression246_14() { return static_cast<int32_t>(offsetof(Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields, ____46_in_bitwiseOrExpression246_14)); }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * get__46_in_bitwiseOrExpression246_14() const { return ____46_in_bitwiseOrExpression246_14; }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 ** get_address_of__46_in_bitwiseOrExpression246_14() { return &____46_in_bitwiseOrExpression246_14; }
	inline void set__46_in_bitwiseOrExpression246_14(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * value)
	{
		____46_in_bitwiseOrExpression246_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____46_in_bitwiseOrExpression246_14), (void*)value);
	}

	inline static int32_t get_offset_of__bitwiseOrExpression_in_bitwiseOrExpression256_15() { return static_cast<int32_t>(offsetof(Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields, ____bitwiseOrExpression_in_bitwiseOrExpression256_15)); }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * get__bitwiseOrExpression_in_bitwiseOrExpression256_15() const { return ____bitwiseOrExpression_in_bitwiseOrExpression256_15; }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 ** get_address_of__bitwiseOrExpression_in_bitwiseOrExpression256_15() { return &____bitwiseOrExpression_in_bitwiseOrExpression256_15; }
	inline void set__bitwiseOrExpression_in_bitwiseOrExpression256_15(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * value)
	{
		____bitwiseOrExpression_in_bitwiseOrExpression256_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____bitwiseOrExpression_in_bitwiseOrExpression256_15), (void*)value);
	}

	inline static int32_t get_offset_of__bitwiseAndExpression_in_bitwiseXOrExpression290_16() { return static_cast<int32_t>(offsetof(Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields, ____bitwiseAndExpression_in_bitwiseXOrExpression290_16)); }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * get__bitwiseAndExpression_in_bitwiseXOrExpression290_16() const { return ____bitwiseAndExpression_in_bitwiseXOrExpression290_16; }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 ** get_address_of__bitwiseAndExpression_in_bitwiseXOrExpression290_16() { return &____bitwiseAndExpression_in_bitwiseXOrExpression290_16; }
	inline void set__bitwiseAndExpression_in_bitwiseXOrExpression290_16(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * value)
	{
		____bitwiseAndExpression_in_bitwiseXOrExpression290_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____bitwiseAndExpression_in_bitwiseXOrExpression290_16), (void*)value);
	}

	inline static int32_t get_offset_of__42_in_bitwiseXOrExpression299_17() { return static_cast<int32_t>(offsetof(Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields, ____42_in_bitwiseXOrExpression299_17)); }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * get__42_in_bitwiseXOrExpression299_17() const { return ____42_in_bitwiseXOrExpression299_17; }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 ** get_address_of__42_in_bitwiseXOrExpression299_17() { return &____42_in_bitwiseXOrExpression299_17; }
	inline void set__42_in_bitwiseXOrExpression299_17(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * value)
	{
		____42_in_bitwiseXOrExpression299_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____42_in_bitwiseXOrExpression299_17), (void*)value);
	}

	inline static int32_t get_offset_of__bitwiseAndExpression_in_bitwiseXOrExpression309_18() { return static_cast<int32_t>(offsetof(Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields, ____bitwiseAndExpression_in_bitwiseXOrExpression309_18)); }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * get__bitwiseAndExpression_in_bitwiseXOrExpression309_18() const { return ____bitwiseAndExpression_in_bitwiseXOrExpression309_18; }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 ** get_address_of__bitwiseAndExpression_in_bitwiseXOrExpression309_18() { return &____bitwiseAndExpression_in_bitwiseXOrExpression309_18; }
	inline void set__bitwiseAndExpression_in_bitwiseXOrExpression309_18(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * value)
	{
		____bitwiseAndExpression_in_bitwiseXOrExpression309_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____bitwiseAndExpression_in_bitwiseXOrExpression309_18), (void*)value);
	}

	inline static int32_t get_offset_of__equalityExpression_in_bitwiseAndExpression341_19() { return static_cast<int32_t>(offsetof(Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields, ____equalityExpression_in_bitwiseAndExpression341_19)); }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * get__equalityExpression_in_bitwiseAndExpression341_19() const { return ____equalityExpression_in_bitwiseAndExpression341_19; }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 ** get_address_of__equalityExpression_in_bitwiseAndExpression341_19() { return &____equalityExpression_in_bitwiseAndExpression341_19; }
	inline void set__equalityExpression_in_bitwiseAndExpression341_19(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * value)
	{
		____equalityExpression_in_bitwiseAndExpression341_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____equalityExpression_in_bitwiseAndExpression341_19), (void*)value);
	}

	inline static int32_t get_offset_of__23_in_bitwiseAndExpression350_20() { return static_cast<int32_t>(offsetof(Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields, ____23_in_bitwiseAndExpression350_20)); }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * get__23_in_bitwiseAndExpression350_20() const { return ____23_in_bitwiseAndExpression350_20; }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 ** get_address_of__23_in_bitwiseAndExpression350_20() { return &____23_in_bitwiseAndExpression350_20; }
	inline void set__23_in_bitwiseAndExpression350_20(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * value)
	{
		____23_in_bitwiseAndExpression350_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____23_in_bitwiseAndExpression350_20), (void*)value);
	}

	inline static int32_t get_offset_of__equalityExpression_in_bitwiseAndExpression360_21() { return static_cast<int32_t>(offsetof(Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields, ____equalityExpression_in_bitwiseAndExpression360_21)); }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * get__equalityExpression_in_bitwiseAndExpression360_21() const { return ____equalityExpression_in_bitwiseAndExpression360_21; }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 ** get_address_of__equalityExpression_in_bitwiseAndExpression360_21() { return &____equalityExpression_in_bitwiseAndExpression360_21; }
	inline void set__equalityExpression_in_bitwiseAndExpression360_21(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * value)
	{
		____equalityExpression_in_bitwiseAndExpression360_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____equalityExpression_in_bitwiseAndExpression360_21), (void*)value);
	}

	inline static int32_t get_offset_of__relationalExpression_in_equalityExpression394_22() { return static_cast<int32_t>(offsetof(Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields, ____relationalExpression_in_equalityExpression394_22)); }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * get__relationalExpression_in_equalityExpression394_22() const { return ____relationalExpression_in_equalityExpression394_22; }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 ** get_address_of__relationalExpression_in_equalityExpression394_22() { return &____relationalExpression_in_equalityExpression394_22; }
	inline void set__relationalExpression_in_equalityExpression394_22(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * value)
	{
		____relationalExpression_in_equalityExpression394_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____relationalExpression_in_equalityExpression394_22), (void*)value);
	}

	inline static int32_t get_offset_of__set_in_equalityExpression405_23() { return static_cast<int32_t>(offsetof(Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields, ____set_in_equalityExpression405_23)); }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * get__set_in_equalityExpression405_23() const { return ____set_in_equalityExpression405_23; }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 ** get_address_of__set_in_equalityExpression405_23() { return &____set_in_equalityExpression405_23; }
	inline void set__set_in_equalityExpression405_23(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * value)
	{
		____set_in_equalityExpression405_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____set_in_equalityExpression405_23), (void*)value);
	}

	inline static int32_t get_offset_of__set_in_equalityExpression422_24() { return static_cast<int32_t>(offsetof(Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields, ____set_in_equalityExpression422_24)); }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * get__set_in_equalityExpression422_24() const { return ____set_in_equalityExpression422_24; }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 ** get_address_of__set_in_equalityExpression422_24() { return &____set_in_equalityExpression422_24; }
	inline void set__set_in_equalityExpression422_24(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * value)
	{
		____set_in_equalityExpression422_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____set_in_equalityExpression422_24), (void*)value);
	}

	inline static int32_t get_offset_of__relationalExpression_in_equalityExpression441_25() { return static_cast<int32_t>(offsetof(Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields, ____relationalExpression_in_equalityExpression441_25)); }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * get__relationalExpression_in_equalityExpression441_25() const { return ____relationalExpression_in_equalityExpression441_25; }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 ** get_address_of__relationalExpression_in_equalityExpression441_25() { return &____relationalExpression_in_equalityExpression441_25; }
	inline void set__relationalExpression_in_equalityExpression441_25(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * value)
	{
		____relationalExpression_in_equalityExpression441_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____relationalExpression_in_equalityExpression441_25), (void*)value);
	}

	inline static int32_t get_offset_of__shiftExpression_in_relationalExpression474_26() { return static_cast<int32_t>(offsetof(Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields, ____shiftExpression_in_relationalExpression474_26)); }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * get__shiftExpression_in_relationalExpression474_26() const { return ____shiftExpression_in_relationalExpression474_26; }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 ** get_address_of__shiftExpression_in_relationalExpression474_26() { return &____shiftExpression_in_relationalExpression474_26; }
	inline void set__shiftExpression_in_relationalExpression474_26(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * value)
	{
		____shiftExpression_in_relationalExpression474_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____shiftExpression_in_relationalExpression474_26), (void*)value);
	}

	inline static int32_t get_offset_of__32_in_relationalExpression485_27() { return static_cast<int32_t>(offsetof(Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields, ____32_in_relationalExpression485_27)); }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * get__32_in_relationalExpression485_27() const { return ____32_in_relationalExpression485_27; }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 ** get_address_of__32_in_relationalExpression485_27() { return &____32_in_relationalExpression485_27; }
	inline void set__32_in_relationalExpression485_27(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * value)
	{
		____32_in_relationalExpression485_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____32_in_relationalExpression485_27), (void*)value);
	}

	inline static int32_t get_offset_of__34_in_relationalExpression495_28() { return static_cast<int32_t>(offsetof(Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields, ____34_in_relationalExpression495_28)); }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * get__34_in_relationalExpression495_28() const { return ____34_in_relationalExpression495_28; }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 ** get_address_of__34_in_relationalExpression495_28() { return &____34_in_relationalExpression495_28; }
	inline void set__34_in_relationalExpression495_28(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * value)
	{
		____34_in_relationalExpression495_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____34_in_relationalExpression495_28), (void*)value);
	}

	inline static int32_t get_offset_of__38_in_relationalExpression506_29() { return static_cast<int32_t>(offsetof(Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields, ____38_in_relationalExpression506_29)); }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * get__38_in_relationalExpression506_29() const { return ____38_in_relationalExpression506_29; }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 ** get_address_of__38_in_relationalExpression506_29() { return &____38_in_relationalExpression506_29; }
	inline void set__38_in_relationalExpression506_29(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * value)
	{
		____38_in_relationalExpression506_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____38_in_relationalExpression506_29), (void*)value);
	}

	inline static int32_t get_offset_of__39_in_relationalExpression516_30() { return static_cast<int32_t>(offsetof(Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields, ____39_in_relationalExpression516_30)); }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * get__39_in_relationalExpression516_30() const { return ____39_in_relationalExpression516_30; }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 ** get_address_of__39_in_relationalExpression516_30() { return &____39_in_relationalExpression516_30; }
	inline void set__39_in_relationalExpression516_30(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * value)
	{
		____39_in_relationalExpression516_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____39_in_relationalExpression516_30), (void*)value);
	}

	inline static int32_t get_offset_of__shiftExpression_in_relationalExpression528_31() { return static_cast<int32_t>(offsetof(Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields, ____shiftExpression_in_relationalExpression528_31)); }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * get__shiftExpression_in_relationalExpression528_31() const { return ____shiftExpression_in_relationalExpression528_31; }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 ** get_address_of__shiftExpression_in_relationalExpression528_31() { return &____shiftExpression_in_relationalExpression528_31; }
	inline void set__shiftExpression_in_relationalExpression528_31(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * value)
	{
		____shiftExpression_in_relationalExpression528_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____shiftExpression_in_relationalExpression528_31), (void*)value);
	}

	inline static int32_t get_offset_of__additiveExpression_in_shiftExpression560_32() { return static_cast<int32_t>(offsetof(Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields, ____additiveExpression_in_shiftExpression560_32)); }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * get__additiveExpression_in_shiftExpression560_32() const { return ____additiveExpression_in_shiftExpression560_32; }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 ** get_address_of__additiveExpression_in_shiftExpression560_32() { return &____additiveExpression_in_shiftExpression560_32; }
	inline void set__additiveExpression_in_shiftExpression560_32(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * value)
	{
		____additiveExpression_in_shiftExpression560_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____additiveExpression_in_shiftExpression560_32), (void*)value);
	}

	inline static int32_t get_offset_of__33_in_shiftExpression571_33() { return static_cast<int32_t>(offsetof(Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields, ____33_in_shiftExpression571_33)); }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * get__33_in_shiftExpression571_33() const { return ____33_in_shiftExpression571_33; }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 ** get_address_of__33_in_shiftExpression571_33() { return &____33_in_shiftExpression571_33; }
	inline void set__33_in_shiftExpression571_33(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * value)
	{
		____33_in_shiftExpression571_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____33_in_shiftExpression571_33), (void*)value);
	}

	inline static int32_t get_offset_of__40_in_shiftExpression581_34() { return static_cast<int32_t>(offsetof(Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields, ____40_in_shiftExpression581_34)); }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * get__40_in_shiftExpression581_34() const { return ____40_in_shiftExpression581_34; }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 ** get_address_of__40_in_shiftExpression581_34() { return &____40_in_shiftExpression581_34; }
	inline void set__40_in_shiftExpression581_34(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * value)
	{
		____40_in_shiftExpression581_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____40_in_shiftExpression581_34), (void*)value);
	}

	inline static int32_t get_offset_of__additiveExpression_in_shiftExpression593_35() { return static_cast<int32_t>(offsetof(Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields, ____additiveExpression_in_shiftExpression593_35)); }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * get__additiveExpression_in_shiftExpression593_35() const { return ____additiveExpression_in_shiftExpression593_35; }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 ** get_address_of__additiveExpression_in_shiftExpression593_35() { return &____additiveExpression_in_shiftExpression593_35; }
	inline void set__additiveExpression_in_shiftExpression593_35(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * value)
	{
		____additiveExpression_in_shiftExpression593_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____additiveExpression_in_shiftExpression593_35), (void*)value);
	}

	inline static int32_t get_offset_of__multiplicativeExpression_in_additiveExpression625_36() { return static_cast<int32_t>(offsetof(Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields, ____multiplicativeExpression_in_additiveExpression625_36)); }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * get__multiplicativeExpression_in_additiveExpression625_36() const { return ____multiplicativeExpression_in_additiveExpression625_36; }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 ** get_address_of__multiplicativeExpression_in_additiveExpression625_36() { return &____multiplicativeExpression_in_additiveExpression625_36; }
	inline void set__multiplicativeExpression_in_additiveExpression625_36(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * value)
	{
		____multiplicativeExpression_in_additiveExpression625_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____multiplicativeExpression_in_additiveExpression625_36), (void*)value);
	}

	inline static int32_t get_offset_of__27_in_additiveExpression636_37() { return static_cast<int32_t>(offsetof(Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields, ____27_in_additiveExpression636_37)); }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * get__27_in_additiveExpression636_37() const { return ____27_in_additiveExpression636_37; }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 ** get_address_of__27_in_additiveExpression636_37() { return &____27_in_additiveExpression636_37; }
	inline void set__27_in_additiveExpression636_37(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * value)
	{
		____27_in_additiveExpression636_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____27_in_additiveExpression636_37), (void*)value);
	}

	inline static int32_t get_offset_of__29_in_additiveExpression646_38() { return static_cast<int32_t>(offsetof(Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields, ____29_in_additiveExpression646_38)); }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * get__29_in_additiveExpression646_38() const { return ____29_in_additiveExpression646_38; }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 ** get_address_of__29_in_additiveExpression646_38() { return &____29_in_additiveExpression646_38; }
	inline void set__29_in_additiveExpression646_38(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * value)
	{
		____29_in_additiveExpression646_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____29_in_additiveExpression646_38), (void*)value);
	}

	inline static int32_t get_offset_of__multiplicativeExpression_in_additiveExpression658_39() { return static_cast<int32_t>(offsetof(Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields, ____multiplicativeExpression_in_additiveExpression658_39)); }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * get__multiplicativeExpression_in_additiveExpression658_39() const { return ____multiplicativeExpression_in_additiveExpression658_39; }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 ** get_address_of__multiplicativeExpression_in_additiveExpression658_39() { return &____multiplicativeExpression_in_additiveExpression658_39; }
	inline void set__multiplicativeExpression_in_additiveExpression658_39(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * value)
	{
		____multiplicativeExpression_in_additiveExpression658_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____multiplicativeExpression_in_additiveExpression658_39), (void*)value);
	}

	inline static int32_t get_offset_of__unaryExpression_in_multiplicativeExpression690_40() { return static_cast<int32_t>(offsetof(Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields, ____unaryExpression_in_multiplicativeExpression690_40)); }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * get__unaryExpression_in_multiplicativeExpression690_40() const { return ____unaryExpression_in_multiplicativeExpression690_40; }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 ** get_address_of__unaryExpression_in_multiplicativeExpression690_40() { return &____unaryExpression_in_multiplicativeExpression690_40; }
	inline void set__unaryExpression_in_multiplicativeExpression690_40(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * value)
	{
		____unaryExpression_in_multiplicativeExpression690_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____unaryExpression_in_multiplicativeExpression690_40), (void*)value);
	}

	inline static int32_t get_offset_of__26_in_multiplicativeExpression701_41() { return static_cast<int32_t>(offsetof(Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields, ____26_in_multiplicativeExpression701_41)); }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * get__26_in_multiplicativeExpression701_41() const { return ____26_in_multiplicativeExpression701_41; }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 ** get_address_of__26_in_multiplicativeExpression701_41() { return &____26_in_multiplicativeExpression701_41; }
	inline void set__26_in_multiplicativeExpression701_41(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * value)
	{
		____26_in_multiplicativeExpression701_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____26_in_multiplicativeExpression701_41), (void*)value);
	}

	inline static int32_t get_offset_of__30_in_multiplicativeExpression711_42() { return static_cast<int32_t>(offsetof(Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields, ____30_in_multiplicativeExpression711_42)); }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * get__30_in_multiplicativeExpression711_42() const { return ____30_in_multiplicativeExpression711_42; }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 ** get_address_of__30_in_multiplicativeExpression711_42() { return &____30_in_multiplicativeExpression711_42; }
	inline void set__30_in_multiplicativeExpression711_42(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * value)
	{
		____30_in_multiplicativeExpression711_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____30_in_multiplicativeExpression711_42), (void*)value);
	}

	inline static int32_t get_offset_of__21_in_multiplicativeExpression721_43() { return static_cast<int32_t>(offsetof(Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields, ____21_in_multiplicativeExpression721_43)); }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * get__21_in_multiplicativeExpression721_43() const { return ____21_in_multiplicativeExpression721_43; }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 ** get_address_of__21_in_multiplicativeExpression721_43() { return &____21_in_multiplicativeExpression721_43; }
	inline void set__21_in_multiplicativeExpression721_43(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * value)
	{
		____21_in_multiplicativeExpression721_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____21_in_multiplicativeExpression721_43), (void*)value);
	}

	inline static int32_t get_offset_of__unaryExpression_in_multiplicativeExpression733_44() { return static_cast<int32_t>(offsetof(Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields, ____unaryExpression_in_multiplicativeExpression733_44)); }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * get__unaryExpression_in_multiplicativeExpression733_44() const { return ____unaryExpression_in_multiplicativeExpression733_44; }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 ** get_address_of__unaryExpression_in_multiplicativeExpression733_44() { return &____unaryExpression_in_multiplicativeExpression733_44; }
	inline void set__unaryExpression_in_multiplicativeExpression733_44(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * value)
	{
		____unaryExpression_in_multiplicativeExpression733_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____unaryExpression_in_multiplicativeExpression733_44), (void*)value);
	}

	inline static int32_t get_offset_of__primaryExpression_in_unaryExpression760_45() { return static_cast<int32_t>(offsetof(Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields, ____primaryExpression_in_unaryExpression760_45)); }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * get__primaryExpression_in_unaryExpression760_45() const { return ____primaryExpression_in_unaryExpression760_45; }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 ** get_address_of__primaryExpression_in_unaryExpression760_45() { return &____primaryExpression_in_unaryExpression760_45; }
	inline void set__primaryExpression_in_unaryExpression760_45(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * value)
	{
		____primaryExpression_in_unaryExpression760_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____primaryExpression_in_unaryExpression760_45), (void*)value);
	}

	inline static int32_t get_offset_of__set_in_unaryExpression771_46() { return static_cast<int32_t>(offsetof(Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields, ____set_in_unaryExpression771_46)); }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * get__set_in_unaryExpression771_46() const { return ____set_in_unaryExpression771_46; }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 ** get_address_of__set_in_unaryExpression771_46() { return &____set_in_unaryExpression771_46; }
	inline void set__set_in_unaryExpression771_46(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * value)
	{
		____set_in_unaryExpression771_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____set_in_unaryExpression771_46), (void*)value);
	}

	inline static int32_t get_offset_of__primaryExpression_in_unaryExpression779_47() { return static_cast<int32_t>(offsetof(Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields, ____primaryExpression_in_unaryExpression779_47)); }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * get__primaryExpression_in_unaryExpression779_47() const { return ____primaryExpression_in_unaryExpression779_47; }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 ** get_address_of__primaryExpression_in_unaryExpression779_47() { return &____primaryExpression_in_unaryExpression779_47; }
	inline void set__primaryExpression_in_unaryExpression779_47(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * value)
	{
		____primaryExpression_in_unaryExpression779_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____primaryExpression_in_unaryExpression779_47), (void*)value);
	}

	inline static int32_t get_offset_of__48_in_unaryExpression791_48() { return static_cast<int32_t>(offsetof(Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields, ____48_in_unaryExpression791_48)); }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * get__48_in_unaryExpression791_48() const { return ____48_in_unaryExpression791_48; }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 ** get_address_of__48_in_unaryExpression791_48() { return &____48_in_unaryExpression791_48; }
	inline void set__48_in_unaryExpression791_48(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * value)
	{
		____48_in_unaryExpression791_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____48_in_unaryExpression791_48), (void*)value);
	}

	inline static int32_t get_offset_of__primaryExpression_in_unaryExpression794_49() { return static_cast<int32_t>(offsetof(Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields, ____primaryExpression_in_unaryExpression794_49)); }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * get__primaryExpression_in_unaryExpression794_49() const { return ____primaryExpression_in_unaryExpression794_49; }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 ** get_address_of__primaryExpression_in_unaryExpression794_49() { return &____primaryExpression_in_unaryExpression794_49; }
	inline void set__primaryExpression_in_unaryExpression794_49(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * value)
	{
		____primaryExpression_in_unaryExpression794_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____primaryExpression_in_unaryExpression794_49), (void*)value);
	}

	inline static int32_t get_offset_of__29_in_unaryExpression805_50() { return static_cast<int32_t>(offsetof(Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields, ____29_in_unaryExpression805_50)); }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * get__29_in_unaryExpression805_50() const { return ____29_in_unaryExpression805_50; }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 ** get_address_of__29_in_unaryExpression805_50() { return &____29_in_unaryExpression805_50; }
	inline void set__29_in_unaryExpression805_50(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * value)
	{
		____29_in_unaryExpression805_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____29_in_unaryExpression805_50), (void*)value);
	}

	inline static int32_t get_offset_of__primaryExpression_in_unaryExpression807_51() { return static_cast<int32_t>(offsetof(Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields, ____primaryExpression_in_unaryExpression807_51)); }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * get__primaryExpression_in_unaryExpression807_51() const { return ____primaryExpression_in_unaryExpression807_51; }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 ** get_address_of__primaryExpression_in_unaryExpression807_51() { return &____primaryExpression_in_unaryExpression807_51; }
	inline void set__primaryExpression_in_unaryExpression807_51(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * value)
	{
		____primaryExpression_in_unaryExpression807_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____primaryExpression_in_unaryExpression807_51), (void*)value);
	}

	inline static int32_t get_offset_of__24_in_primaryExpression829_52() { return static_cast<int32_t>(offsetof(Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields, ____24_in_primaryExpression829_52)); }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * get__24_in_primaryExpression829_52() const { return ____24_in_primaryExpression829_52; }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 ** get_address_of__24_in_primaryExpression829_52() { return &____24_in_primaryExpression829_52; }
	inline void set__24_in_primaryExpression829_52(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * value)
	{
		____24_in_primaryExpression829_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____24_in_primaryExpression829_52), (void*)value);
	}

	inline static int32_t get_offset_of__logicalExpression_in_primaryExpression831_53() { return static_cast<int32_t>(offsetof(Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields, ____logicalExpression_in_primaryExpression831_53)); }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * get__logicalExpression_in_primaryExpression831_53() const { return ____logicalExpression_in_primaryExpression831_53; }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 ** get_address_of__logicalExpression_in_primaryExpression831_53() { return &____logicalExpression_in_primaryExpression831_53; }
	inline void set__logicalExpression_in_primaryExpression831_53(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * value)
	{
		____logicalExpression_in_primaryExpression831_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____logicalExpression_in_primaryExpression831_53), (void*)value);
	}

	inline static int32_t get_offset_of__25_in_primaryExpression833_54() { return static_cast<int32_t>(offsetof(Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields, ____25_in_primaryExpression833_54)); }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * get__25_in_primaryExpression833_54() const { return ____25_in_primaryExpression833_54; }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 ** get_address_of__25_in_primaryExpression833_54() { return &____25_in_primaryExpression833_54; }
	inline void set__25_in_primaryExpression833_54(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * value)
	{
		____25_in_primaryExpression833_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____25_in_primaryExpression833_54), (void*)value);
	}

	inline static int32_t get_offset_of__value_in_primaryExpression843_55() { return static_cast<int32_t>(offsetof(Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields, ____value_in_primaryExpression843_55)); }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * get__value_in_primaryExpression843_55() const { return ____value_in_primaryExpression843_55; }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 ** get_address_of__value_in_primaryExpression843_55() { return &____value_in_primaryExpression843_55; }
	inline void set__value_in_primaryExpression843_55(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * value)
	{
		____value_in_primaryExpression843_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____value_in_primaryExpression843_55), (void*)value);
	}

	inline static int32_t get_offset_of__identifier_in_primaryExpression851_56() { return static_cast<int32_t>(offsetof(Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields, ____identifier_in_primaryExpression851_56)); }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * get__identifier_in_primaryExpression851_56() const { return ____identifier_in_primaryExpression851_56; }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 ** get_address_of__identifier_in_primaryExpression851_56() { return &____identifier_in_primaryExpression851_56; }
	inline void set__identifier_in_primaryExpression851_56(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * value)
	{
		____identifier_in_primaryExpression851_56 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identifier_in_primaryExpression851_56), (void*)value);
	}

	inline static int32_t get_offset_of__arguments_in_primaryExpression856_57() { return static_cast<int32_t>(offsetof(Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields, ____arguments_in_primaryExpression856_57)); }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * get__arguments_in_primaryExpression856_57() const { return ____arguments_in_primaryExpression856_57; }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 ** get_address_of__arguments_in_primaryExpression856_57() { return &____arguments_in_primaryExpression856_57; }
	inline void set__arguments_in_primaryExpression856_57(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * value)
	{
		____arguments_in_primaryExpression856_57 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____arguments_in_primaryExpression856_57), (void*)value);
	}

	inline static int32_t get_offset_of__INTEGER_in_value876_58() { return static_cast<int32_t>(offsetof(Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields, ____INTEGER_in_value876_58)); }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * get__INTEGER_in_value876_58() const { return ____INTEGER_in_value876_58; }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 ** get_address_of__INTEGER_in_value876_58() { return &____INTEGER_in_value876_58; }
	inline void set__INTEGER_in_value876_58(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * value)
	{
		____INTEGER_in_value876_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____INTEGER_in_value876_58), (void*)value);
	}

	inline static int32_t get_offset_of__FLOAT_in_value884_59() { return static_cast<int32_t>(offsetof(Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields, ____FLOAT_in_value884_59)); }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * get__FLOAT_in_value884_59() const { return ____FLOAT_in_value884_59; }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 ** get_address_of__FLOAT_in_value884_59() { return &____FLOAT_in_value884_59; }
	inline void set__FLOAT_in_value884_59(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * value)
	{
		____FLOAT_in_value884_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____FLOAT_in_value884_59), (void*)value);
	}

	inline static int32_t get_offset_of__STRING_in_value892_60() { return static_cast<int32_t>(offsetof(Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields, ____STRING_in_value892_60)); }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * get__STRING_in_value892_60() const { return ____STRING_in_value892_60; }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 ** get_address_of__STRING_in_value892_60() { return &____STRING_in_value892_60; }
	inline void set__STRING_in_value892_60(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * value)
	{
		____STRING_in_value892_60 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____STRING_in_value892_60), (void*)value);
	}

	inline static int32_t get_offset_of__DATETIME_in_value901_61() { return static_cast<int32_t>(offsetof(Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields, ____DATETIME_in_value901_61)); }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * get__DATETIME_in_value901_61() const { return ____DATETIME_in_value901_61; }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 ** get_address_of__DATETIME_in_value901_61() { return &____DATETIME_in_value901_61; }
	inline void set__DATETIME_in_value901_61(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * value)
	{
		____DATETIME_in_value901_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____DATETIME_in_value901_61), (void*)value);
	}

	inline static int32_t get_offset_of__TRUE_in_value908_62() { return static_cast<int32_t>(offsetof(Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields, ____TRUE_in_value908_62)); }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * get__TRUE_in_value908_62() const { return ____TRUE_in_value908_62; }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 ** get_address_of__TRUE_in_value908_62() { return &____TRUE_in_value908_62; }
	inline void set__TRUE_in_value908_62(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * value)
	{
		____TRUE_in_value908_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____TRUE_in_value908_62), (void*)value);
	}

	inline static int32_t get_offset_of__FALSE_in_value916_63() { return static_cast<int32_t>(offsetof(Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields, ____FALSE_in_value916_63)); }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * get__FALSE_in_value916_63() const { return ____FALSE_in_value916_63; }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 ** get_address_of__FALSE_in_value916_63() { return &____FALSE_in_value916_63; }
	inline void set__FALSE_in_value916_63(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * value)
	{
		____FALSE_in_value916_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____FALSE_in_value916_63), (void*)value);
	}

	inline static int32_t get_offset_of__ID_in_identifier934_64() { return static_cast<int32_t>(offsetof(Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields, ____ID_in_identifier934_64)); }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * get__ID_in_identifier934_64() const { return ____ID_in_identifier934_64; }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 ** get_address_of__ID_in_identifier934_64() { return &____ID_in_identifier934_64; }
	inline void set__ID_in_identifier934_64(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * value)
	{
		____ID_in_identifier934_64 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ID_in_identifier934_64), (void*)value);
	}

	inline static int32_t get_offset_of__NAME_in_identifier942_65() { return static_cast<int32_t>(offsetof(Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields, ____NAME_in_identifier942_65)); }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * get__NAME_in_identifier942_65() const { return ____NAME_in_identifier942_65; }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 ** get_address_of__NAME_in_identifier942_65() { return &____NAME_in_identifier942_65; }
	inline void set__NAME_in_identifier942_65(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * value)
	{
		____NAME_in_identifier942_65 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____NAME_in_identifier942_65), (void*)value);
	}

	inline static int32_t get_offset_of__logicalExpression_in_expressionList966_66() { return static_cast<int32_t>(offsetof(Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields, ____logicalExpression_in_expressionList966_66)); }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * get__logicalExpression_in_expressionList966_66() const { return ____logicalExpression_in_expressionList966_66; }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 ** get_address_of__logicalExpression_in_expressionList966_66() { return &____logicalExpression_in_expressionList966_66; }
	inline void set__logicalExpression_in_expressionList966_66(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * value)
	{
		____logicalExpression_in_expressionList966_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____logicalExpression_in_expressionList966_66), (void*)value);
	}

	inline static int32_t get_offset_of__28_in_expressionList973_67() { return static_cast<int32_t>(offsetof(Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields, ____28_in_expressionList973_67)); }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * get__28_in_expressionList973_67() const { return ____28_in_expressionList973_67; }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 ** get_address_of__28_in_expressionList973_67() { return &____28_in_expressionList973_67; }
	inline void set__28_in_expressionList973_67(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * value)
	{
		____28_in_expressionList973_67 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____28_in_expressionList973_67), (void*)value);
	}

	inline static int32_t get_offset_of__logicalExpression_in_expressionList977_68() { return static_cast<int32_t>(offsetof(Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields, ____logicalExpression_in_expressionList977_68)); }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * get__logicalExpression_in_expressionList977_68() const { return ____logicalExpression_in_expressionList977_68; }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 ** get_address_of__logicalExpression_in_expressionList977_68() { return &____logicalExpression_in_expressionList977_68; }
	inline void set__logicalExpression_in_expressionList977_68(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * value)
	{
		____logicalExpression_in_expressionList977_68 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____logicalExpression_in_expressionList977_68), (void*)value);
	}

	inline static int32_t get_offset_of__24_in_arguments1006_69() { return static_cast<int32_t>(offsetof(Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields, ____24_in_arguments1006_69)); }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * get__24_in_arguments1006_69() const { return ____24_in_arguments1006_69; }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 ** get_address_of__24_in_arguments1006_69() { return &____24_in_arguments1006_69; }
	inline void set__24_in_arguments1006_69(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * value)
	{
		____24_in_arguments1006_69 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____24_in_arguments1006_69), (void*)value);
	}

	inline static int32_t get_offset_of__expressionList_in_arguments1010_70() { return static_cast<int32_t>(offsetof(Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields, ____expressionList_in_arguments1010_70)); }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * get__expressionList_in_arguments1010_70() const { return ____expressionList_in_arguments1010_70; }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 ** get_address_of__expressionList_in_arguments1010_70() { return &____expressionList_in_arguments1010_70; }
	inline void set__expressionList_in_arguments1010_70(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * value)
	{
		____expressionList_in_arguments1010_70 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____expressionList_in_arguments1010_70), (void*)value);
	}

	inline static int32_t get_offset_of__25_in_arguments1017_71() { return static_cast<int32_t>(offsetof(Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields, ____25_in_arguments1017_71)); }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * get__25_in_arguments1017_71() const { return ____25_in_arguments1017_71; }
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 ** get_address_of__25_in_arguments1017_71() { return &____25_in_arguments1017_71; }
	inline void set__25_in_arguments1017_71(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * value)
	{
		____25_in_arguments1017_71 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____25_in_arguments1017_71), (void*)value);
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


// Naninovel.Antlr.Runtime.Tree.CommonTree
struct  CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697  : public BaseTree_tBD1B03EC01CE29B04C158A2C01182EB54A3BB410
{
public:
	// Naninovel.Antlr.Runtime.IToken Naninovel.Antlr.Runtime.Tree.CommonTree::_token
	RuntimeObject* ____token_3;
	// System.Int32 Naninovel.Antlr.Runtime.Tree.CommonTree::startIndex
	int32_t ___startIndex_4;
	// System.Int32 Naninovel.Antlr.Runtime.Tree.CommonTree::stopIndex
	int32_t ___stopIndex_5;
	// Naninovel.Antlr.Runtime.Tree.CommonTree Naninovel.Antlr.Runtime.Tree.CommonTree::parent
	CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * ___parent_6;
	// System.Int32 Naninovel.Antlr.Runtime.Tree.CommonTree::childIndex
	int32_t ___childIndex_7;

public:
	inline static int32_t get_offset_of__token_3() { return static_cast<int32_t>(offsetof(CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697, ____token_3)); }
	inline RuntimeObject* get__token_3() const { return ____token_3; }
	inline RuntimeObject** get_address_of__token_3() { return &____token_3; }
	inline void set__token_3(RuntimeObject* value)
	{
		____token_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____token_3), (void*)value);
	}

	inline static int32_t get_offset_of_startIndex_4() { return static_cast<int32_t>(offsetof(CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697, ___startIndex_4)); }
	inline int32_t get_startIndex_4() const { return ___startIndex_4; }
	inline int32_t* get_address_of_startIndex_4() { return &___startIndex_4; }
	inline void set_startIndex_4(int32_t value)
	{
		___startIndex_4 = value;
	}

	inline static int32_t get_offset_of_stopIndex_5() { return static_cast<int32_t>(offsetof(CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697, ___stopIndex_5)); }
	inline int32_t get_stopIndex_5() const { return ___stopIndex_5; }
	inline int32_t* get_address_of_stopIndex_5() { return &___stopIndex_5; }
	inline void set_stopIndex_5(int32_t value)
	{
		___stopIndex_5 = value;
	}

	inline static int32_t get_offset_of_parent_6() { return static_cast<int32_t>(offsetof(CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697, ___parent_6)); }
	inline CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * get_parent_6() const { return ___parent_6; }
	inline CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 ** get_address_of_parent_6() { return &___parent_6; }
	inline void set_parent_6(CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * value)
	{
		___parent_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_6), (void*)value);
	}

	inline static int32_t get_offset_of_childIndex_7() { return static_cast<int32_t>(offsetof(CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697, ___childIndex_7)); }
	inline int32_t get_childIndex_7() const { return ___childIndex_7; }
	inline int32_t* get_address_of_childIndex_7() { return &___childIndex_7; }
	inline void set_childIndex_7(int32_t value)
	{
		___childIndex_7 = value;
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


// System.Decimal
struct  Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 
{
public:
	// System.Int32 System.Decimal::flags
	int32_t ___flags_14;
	// System.Int32 System.Decimal::hi
	int32_t ___hi_15;
	// System.Int32 System.Decimal::lo
	int32_t ___lo_16;
	// System.Int32 System.Decimal::mid
	int32_t ___mid_17;

public:
	inline static int32_t get_offset_of_flags_14() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___flags_14)); }
	inline int32_t get_flags_14() const { return ___flags_14; }
	inline int32_t* get_address_of_flags_14() { return &___flags_14; }
	inline void set_flags_14(int32_t value)
	{
		___flags_14 = value;
	}

	inline static int32_t get_offset_of_hi_15() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___hi_15)); }
	inline int32_t get_hi_15() const { return ___hi_15; }
	inline int32_t* get_address_of_hi_15() { return &___hi_15; }
	inline void set_hi_15(int32_t value)
	{
		___hi_15 = value;
	}

	inline static int32_t get_offset_of_lo_16() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___lo_16)); }
	inline int32_t get_lo_16() const { return ___lo_16; }
	inline int32_t* get_address_of_lo_16() { return &___lo_16; }
	inline void set_lo_16(int32_t value)
	{
		___lo_16 = value;
	}

	inline static int32_t get_offset_of_mid_17() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___mid_17)); }
	inline int32_t get_mid_17() const { return ___mid_17; }
	inline int32_t* get_address_of_mid_17() { return &___mid_17; }
	inline void set_mid_17(int32_t value)
	{
		___mid_17 = value;
	}
};

struct Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields
{
public:
	// System.UInt32[] System.Decimal::Powers10
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___Powers10_6;
	// System.Decimal System.Decimal::Zero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___Zero_7;
	// System.Decimal System.Decimal::One
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___One_8;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MinusOne_9;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MaxValue_10;
	// System.Decimal System.Decimal::MinValue
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MinValue_11;
	// System.Decimal System.Decimal::NearNegativeZero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___NearNegativeZero_12;
	// System.Decimal System.Decimal::NearPositiveZero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___NearPositiveZero_13;

public:
	inline static int32_t get_offset_of_Powers10_6() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___Powers10_6)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_Powers10_6() const { return ___Powers10_6; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_Powers10_6() { return &___Powers10_6; }
	inline void set_Powers10_6(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___Powers10_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Powers10_6), (void*)value);
	}

	inline static int32_t get_offset_of_Zero_7() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___Zero_7)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_Zero_7() const { return ___Zero_7; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_Zero_7() { return &___Zero_7; }
	inline void set_Zero_7(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___Zero_7 = value;
	}

	inline static int32_t get_offset_of_One_8() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___One_8)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_One_8() const { return ___One_8; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_One_8() { return &___One_8; }
	inline void set_One_8(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___One_8 = value;
	}

	inline static int32_t get_offset_of_MinusOne_9() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MinusOne_9)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MinusOne_9() const { return ___MinusOne_9; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MinusOne_9() { return &___MinusOne_9; }
	inline void set_MinusOne_9(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MinusOne_9 = value;
	}

	inline static int32_t get_offset_of_MaxValue_10() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MaxValue_10)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MaxValue_10() const { return ___MaxValue_10; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MaxValue_10() { return &___MaxValue_10; }
	inline void set_MaxValue_10(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MaxValue_10 = value;
	}

	inline static int32_t get_offset_of_MinValue_11() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MinValue_11)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MinValue_11() const { return ___MinValue_11; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MinValue_11() { return &___MinValue_11; }
	inline void set_MinValue_11(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MinValue_11 = value;
	}

	inline static int32_t get_offset_of_NearNegativeZero_12() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___NearNegativeZero_12)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_NearNegativeZero_12() const { return ___NearNegativeZero_12; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_NearNegativeZero_12() { return &___NearNegativeZero_12; }
	inline void set_NearNegativeZero_12(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___NearNegativeZero_12 = value;
	}

	inline static int32_t get_offset_of_NearPositiveZero_13() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___NearPositiveZero_13)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_NearPositiveZero_13() const { return ___NearPositiveZero_13; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_NearPositiveZero_13() { return &___NearPositiveZero_13; }
	inline void set_NearPositiveZero_13(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___NearPositiveZero_13 = value;
	}
};


// System.Double
struct  Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
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

// Naninovel.NCalc.Domain.Function
struct  Function_tB79B8AC81F9EBA9B68A61E8A501D74173D90EA72  : public LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968
{
public:
	// Naninovel.NCalc.Domain.Identifier Naninovel.NCalc.Domain.Function::<Identifier>k__BackingField
	Identifier_t64A304AE1762074E38912767107A5B7DAC0D54DD * ___U3CIdentifierU3Ek__BackingField_0;
	// Naninovel.NCalc.Domain.LogicalExpression[] Naninovel.NCalc.Domain.Function::<Expressions>k__BackingField
	LogicalExpressionU5BU5D_t35167AD411F36531A33B384D413583735F19360A* ___U3CExpressionsU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CIdentifierU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Function_tB79B8AC81F9EBA9B68A61E8A501D74173D90EA72, ___U3CIdentifierU3Ek__BackingField_0)); }
	inline Identifier_t64A304AE1762074E38912767107A5B7DAC0D54DD * get_U3CIdentifierU3Ek__BackingField_0() const { return ___U3CIdentifierU3Ek__BackingField_0; }
	inline Identifier_t64A304AE1762074E38912767107A5B7DAC0D54DD ** get_address_of_U3CIdentifierU3Ek__BackingField_0() { return &___U3CIdentifierU3Ek__BackingField_0; }
	inline void set_U3CIdentifierU3Ek__BackingField_0(Identifier_t64A304AE1762074E38912767107A5B7DAC0D54DD * value)
	{
		___U3CIdentifierU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CIdentifierU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CExpressionsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Function_tB79B8AC81F9EBA9B68A61E8A501D74173D90EA72, ___U3CExpressionsU3Ek__BackingField_1)); }
	inline LogicalExpressionU5BU5D_t35167AD411F36531A33B384D413583735F19360A* get_U3CExpressionsU3Ek__BackingField_1() const { return ___U3CExpressionsU3Ek__BackingField_1; }
	inline LogicalExpressionU5BU5D_t35167AD411F36531A33B384D413583735F19360A** get_address_of_U3CExpressionsU3Ek__BackingField_1() { return &___U3CExpressionsU3Ek__BackingField_1; }
	inline void set_U3CExpressionsU3Ek__BackingField_1(LogicalExpressionU5BU5D_t35167AD411F36531A33B384D413583735F19360A* value)
	{
		___U3CExpressionsU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CExpressionsU3Ek__BackingField_1), (void*)value);
	}
};


// Naninovel.NCalc.Domain.Identifier
struct  Identifier_t64A304AE1762074E38912767107A5B7DAC0D54DD  : public LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968
{
public:
	// System.String Naninovel.NCalc.Domain.Identifier::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Identifier_t64A304AE1762074E38912767107A5B7DAC0D54DD, ___U3CNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CNameU3Ek__BackingField_0() const { return ___U3CNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_0() { return &___U3CNameU3Ek__BackingField_0; }
	inline void set_U3CNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_0), (void*)value);
	}
};


// System.Int16
struct  Int16_tD0F031114106263BB459DA1F099FF9F42691295A 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_tD0F031114106263BB459DA1F099FF9F42691295A, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
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


// Naninovel.NCalc.ParameterArgs
struct  ParameterArgs_t7201DE499D85C7B63EBC096614680084E8464C98  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// System.Object Naninovel.NCalc.ParameterArgs::_result
	RuntimeObject * ____result_1;
	// System.Boolean Naninovel.NCalc.ParameterArgs::<HasResult>k__BackingField
	bool ___U3CHasResultU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of__result_1() { return static_cast<int32_t>(offsetof(ParameterArgs_t7201DE499D85C7B63EBC096614680084E8464C98, ____result_1)); }
	inline RuntimeObject * get__result_1() const { return ____result_1; }
	inline RuntimeObject ** get_address_of__result_1() { return &____result_1; }
	inline void set__result_1(RuntimeObject * value)
	{
		____result_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____result_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CHasResultU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ParameterArgs_t7201DE499D85C7B63EBC096614680084E8464C98, ___U3CHasResultU3Ek__BackingField_2)); }
	inline bool get_U3CHasResultU3Ek__BackingField_2() const { return ___U3CHasResultU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CHasResultU3Ek__BackingField_2() { return &___U3CHasResultU3Ek__BackingField_2; }
	inline void set_U3CHasResultU3Ek__BackingField_2(bool value)
	{
		___U3CHasResultU3Ek__BackingField_2 = value;
	}
};


// Naninovel.Antlr.Runtime.Parser
struct  Parser_tB621C8252810CD452CE08FDEBDAC0D55B7072204  : public BaseRecognizer_tB62A3AE694CEC553C74F519EE830E68C521C3DEC
{
public:
	// Naninovel.Antlr.Runtime.ITokenStream Naninovel.Antlr.Runtime.Parser::input
	RuntimeObject* ___input_2;

public:
	inline static int32_t get_offset_of_input_2() { return static_cast<int32_t>(offsetof(Parser_tB621C8252810CD452CE08FDEBDAC0D55B7072204, ___input_2)); }
	inline RuntimeObject* get_input_2() const { return ___input_2; }
	inline RuntimeObject** get_address_of_input_2() { return &___input_2; }
	inline void set_input_2(RuntimeObject* value)
	{
		___input_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___input_2), (void*)value);
	}
};


// Naninovel.NCalc.Domain.SerializationVisitor
struct  SerializationVisitor_t7FA9CCD67A83DF85E052BC13D42D6CF05B3B65B3  : public LogicalExpressionVisitor_t4FEC2A3FF1F4D8E4207828C80EBEC796EC6AED13
{
public:
	// System.Globalization.NumberFormatInfo Naninovel.NCalc.Domain.SerializationVisitor::_numberFormatInfo
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ____numberFormatInfo_0;
	// System.Text.StringBuilder Naninovel.NCalc.Domain.SerializationVisitor::<Result>k__BackingField
	StringBuilder_t * ___U3CResultU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of__numberFormatInfo_0() { return static_cast<int32_t>(offsetof(SerializationVisitor_t7FA9CCD67A83DF85E052BC13D42D6CF05B3B65B3, ____numberFormatInfo_0)); }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * get__numberFormatInfo_0() const { return ____numberFormatInfo_0; }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D ** get_address_of__numberFormatInfo_0() { return &____numberFormatInfo_0; }
	inline void set__numberFormatInfo_0(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * value)
	{
		____numberFormatInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____numberFormatInfo_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CResultU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(SerializationVisitor_t7FA9CCD67A83DF85E052BC13D42D6CF05B3B65B3, ___U3CResultU3Ek__BackingField_1)); }
	inline StringBuilder_t * get_U3CResultU3Ek__BackingField_1() const { return ___U3CResultU3Ek__BackingField_1; }
	inline StringBuilder_t ** get_address_of_U3CResultU3Ek__BackingField_1() { return &___U3CResultU3Ek__BackingField_1; }
	inline void set_U3CResultU3Ek__BackingField_1(StringBuilder_t * value)
	{
		___U3CResultU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CResultU3Ek__BackingField_1), (void*)value);
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


// Naninovel.NCalc.Domain.TernaryExpression
struct  TernaryExpression_tB518CB82C2E5F08ACA68A8062B3076B8614252A8  : public LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968
{
public:
	// Naninovel.NCalc.Domain.LogicalExpression Naninovel.NCalc.Domain.TernaryExpression::<LeftExpression>k__BackingField
	LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * ___U3CLeftExpressionU3Ek__BackingField_0;
	// Naninovel.NCalc.Domain.LogicalExpression Naninovel.NCalc.Domain.TernaryExpression::<MiddleExpression>k__BackingField
	LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * ___U3CMiddleExpressionU3Ek__BackingField_1;
	// Naninovel.NCalc.Domain.LogicalExpression Naninovel.NCalc.Domain.TernaryExpression::<RightExpression>k__BackingField
	LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * ___U3CRightExpressionU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CLeftExpressionU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TernaryExpression_tB518CB82C2E5F08ACA68A8062B3076B8614252A8, ___U3CLeftExpressionU3Ek__BackingField_0)); }
	inline LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * get_U3CLeftExpressionU3Ek__BackingField_0() const { return ___U3CLeftExpressionU3Ek__BackingField_0; }
	inline LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 ** get_address_of_U3CLeftExpressionU3Ek__BackingField_0() { return &___U3CLeftExpressionU3Ek__BackingField_0; }
	inline void set_U3CLeftExpressionU3Ek__BackingField_0(LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * value)
	{
		___U3CLeftExpressionU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLeftExpressionU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMiddleExpressionU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(TernaryExpression_tB518CB82C2E5F08ACA68A8062B3076B8614252A8, ___U3CMiddleExpressionU3Ek__BackingField_1)); }
	inline LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * get_U3CMiddleExpressionU3Ek__BackingField_1() const { return ___U3CMiddleExpressionU3Ek__BackingField_1; }
	inline LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 ** get_address_of_U3CMiddleExpressionU3Ek__BackingField_1() { return &___U3CMiddleExpressionU3Ek__BackingField_1; }
	inline void set_U3CMiddleExpressionU3Ek__BackingField_1(LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * value)
	{
		___U3CMiddleExpressionU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMiddleExpressionU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CRightExpressionU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(TernaryExpression_tB518CB82C2E5F08ACA68A8062B3076B8614252A8, ___U3CRightExpressionU3Ek__BackingField_2)); }
	inline LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * get_U3CRightExpressionU3Ek__BackingField_2() const { return ___U3CRightExpressionU3Ek__BackingField_2; }
	inline LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 ** get_address_of_U3CRightExpressionU3Ek__BackingField_2() { return &___U3CRightExpressionU3Ek__BackingField_2; }
	inline void set_U3CRightExpressionU3Ek__BackingField_2(LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * value)
	{
		___U3CRightExpressionU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRightExpressionU3Ek__BackingField_2), (void*)value);
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


// Naninovel.NCalc.NCalcLexer/DFA14
struct  DFA14_tC9B965A0D084146E2480BD928AB4134D86F9181C  : public DFA_t96370EB42325F06C749FB6668FF6025F2D7BFDB3
{
public:

public:
};

struct DFA14_tC9B965A0D084146E2480BD928AB4134D86F9181C_StaticFields
{
public:
	// System.String[] Naninovel.NCalc.NCalcLexer/DFA14::DFA14_transitionS
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___DFA14_transitionS_11;
	// System.Int16[] Naninovel.NCalc.NCalcLexer/DFA14::DFA14_eot
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___DFA14_eot_12;
	// System.Int16[] Naninovel.NCalc.NCalcLexer/DFA14::DFA14_eof
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___DFA14_eof_13;
	// System.Char[] Naninovel.NCalc.NCalcLexer/DFA14::DFA14_min
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___DFA14_min_14;
	// System.Char[] Naninovel.NCalc.NCalcLexer/DFA14::DFA14_max
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___DFA14_max_15;
	// System.Int16[] Naninovel.NCalc.NCalcLexer/DFA14::DFA14_accept
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___DFA14_accept_16;
	// System.Int16[] Naninovel.NCalc.NCalcLexer/DFA14::DFA14_special
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___DFA14_special_17;
	// System.Int16[][] Naninovel.NCalc.NCalcLexer/DFA14::DFA14_transition
	Int16U5BU5DU5BU5D_t543ACA7B5432CCA0395B0944D21B4E37B8825D77* ___DFA14_transition_18;

public:
	inline static int32_t get_offset_of_DFA14_transitionS_11() { return static_cast<int32_t>(offsetof(DFA14_tC9B965A0D084146E2480BD928AB4134D86F9181C_StaticFields, ___DFA14_transitionS_11)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_DFA14_transitionS_11() const { return ___DFA14_transitionS_11; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_DFA14_transitionS_11() { return &___DFA14_transitionS_11; }
	inline void set_DFA14_transitionS_11(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___DFA14_transitionS_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DFA14_transitionS_11), (void*)value);
	}

	inline static int32_t get_offset_of_DFA14_eot_12() { return static_cast<int32_t>(offsetof(DFA14_tC9B965A0D084146E2480BD928AB4134D86F9181C_StaticFields, ___DFA14_eot_12)); }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* get_DFA14_eot_12() const { return ___DFA14_eot_12; }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD** get_address_of_DFA14_eot_12() { return &___DFA14_eot_12; }
	inline void set_DFA14_eot_12(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* value)
	{
		___DFA14_eot_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DFA14_eot_12), (void*)value);
	}

	inline static int32_t get_offset_of_DFA14_eof_13() { return static_cast<int32_t>(offsetof(DFA14_tC9B965A0D084146E2480BD928AB4134D86F9181C_StaticFields, ___DFA14_eof_13)); }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* get_DFA14_eof_13() const { return ___DFA14_eof_13; }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD** get_address_of_DFA14_eof_13() { return &___DFA14_eof_13; }
	inline void set_DFA14_eof_13(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* value)
	{
		___DFA14_eof_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DFA14_eof_13), (void*)value);
	}

	inline static int32_t get_offset_of_DFA14_min_14() { return static_cast<int32_t>(offsetof(DFA14_tC9B965A0D084146E2480BD928AB4134D86F9181C_StaticFields, ___DFA14_min_14)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_DFA14_min_14() const { return ___DFA14_min_14; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_DFA14_min_14() { return &___DFA14_min_14; }
	inline void set_DFA14_min_14(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___DFA14_min_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DFA14_min_14), (void*)value);
	}

	inline static int32_t get_offset_of_DFA14_max_15() { return static_cast<int32_t>(offsetof(DFA14_tC9B965A0D084146E2480BD928AB4134D86F9181C_StaticFields, ___DFA14_max_15)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_DFA14_max_15() const { return ___DFA14_max_15; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_DFA14_max_15() { return &___DFA14_max_15; }
	inline void set_DFA14_max_15(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___DFA14_max_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DFA14_max_15), (void*)value);
	}

	inline static int32_t get_offset_of_DFA14_accept_16() { return static_cast<int32_t>(offsetof(DFA14_tC9B965A0D084146E2480BD928AB4134D86F9181C_StaticFields, ___DFA14_accept_16)); }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* get_DFA14_accept_16() const { return ___DFA14_accept_16; }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD** get_address_of_DFA14_accept_16() { return &___DFA14_accept_16; }
	inline void set_DFA14_accept_16(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* value)
	{
		___DFA14_accept_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DFA14_accept_16), (void*)value);
	}

	inline static int32_t get_offset_of_DFA14_special_17() { return static_cast<int32_t>(offsetof(DFA14_tC9B965A0D084146E2480BD928AB4134D86F9181C_StaticFields, ___DFA14_special_17)); }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* get_DFA14_special_17() const { return ___DFA14_special_17; }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD** get_address_of_DFA14_special_17() { return &___DFA14_special_17; }
	inline void set_DFA14_special_17(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* value)
	{
		___DFA14_special_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DFA14_special_17), (void*)value);
	}

	inline static int32_t get_offset_of_DFA14_transition_18() { return static_cast<int32_t>(offsetof(DFA14_tC9B965A0D084146E2480BD928AB4134D86F9181C_StaticFields, ___DFA14_transition_18)); }
	inline Int16U5BU5DU5BU5D_t543ACA7B5432CCA0395B0944D21B4E37B8825D77* get_DFA14_transition_18() const { return ___DFA14_transition_18; }
	inline Int16U5BU5DU5BU5D_t543ACA7B5432CCA0395B0944D21B4E37B8825D77** get_address_of_DFA14_transition_18() { return &___DFA14_transition_18; }
	inline void set_DFA14_transition_18(Int16U5BU5DU5BU5D_t543ACA7B5432CCA0395B0944D21B4E37B8825D77* value)
	{
		___DFA14_transition_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DFA14_transition_18), (void*)value);
	}
};


// Naninovel.NCalc.NCalcLexer/DFA7
struct  DFA7_t3E8B607423D0670275F37241C9AC095E95BB9421  : public DFA_t96370EB42325F06C749FB6668FF6025F2D7BFDB3
{
public:

public:
};

struct DFA7_t3E8B607423D0670275F37241C9AC095E95BB9421_StaticFields
{
public:
	// System.String[] Naninovel.NCalc.NCalcLexer/DFA7::DFA7_transitionS
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___DFA7_transitionS_11;
	// System.Int16[] Naninovel.NCalc.NCalcLexer/DFA7::DFA7_eot
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___DFA7_eot_12;
	// System.Int16[] Naninovel.NCalc.NCalcLexer/DFA7::DFA7_eof
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___DFA7_eof_13;
	// System.Char[] Naninovel.NCalc.NCalcLexer/DFA7::DFA7_min
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___DFA7_min_14;
	// System.Char[] Naninovel.NCalc.NCalcLexer/DFA7::DFA7_max
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___DFA7_max_15;
	// System.Int16[] Naninovel.NCalc.NCalcLexer/DFA7::DFA7_accept
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___DFA7_accept_16;
	// System.Int16[] Naninovel.NCalc.NCalcLexer/DFA7::DFA7_special
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___DFA7_special_17;
	// System.Int16[][] Naninovel.NCalc.NCalcLexer/DFA7::DFA7_transition
	Int16U5BU5DU5BU5D_t543ACA7B5432CCA0395B0944D21B4E37B8825D77* ___DFA7_transition_18;

public:
	inline static int32_t get_offset_of_DFA7_transitionS_11() { return static_cast<int32_t>(offsetof(DFA7_t3E8B607423D0670275F37241C9AC095E95BB9421_StaticFields, ___DFA7_transitionS_11)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_DFA7_transitionS_11() const { return ___DFA7_transitionS_11; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_DFA7_transitionS_11() { return &___DFA7_transitionS_11; }
	inline void set_DFA7_transitionS_11(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___DFA7_transitionS_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DFA7_transitionS_11), (void*)value);
	}

	inline static int32_t get_offset_of_DFA7_eot_12() { return static_cast<int32_t>(offsetof(DFA7_t3E8B607423D0670275F37241C9AC095E95BB9421_StaticFields, ___DFA7_eot_12)); }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* get_DFA7_eot_12() const { return ___DFA7_eot_12; }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD** get_address_of_DFA7_eot_12() { return &___DFA7_eot_12; }
	inline void set_DFA7_eot_12(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* value)
	{
		___DFA7_eot_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DFA7_eot_12), (void*)value);
	}

	inline static int32_t get_offset_of_DFA7_eof_13() { return static_cast<int32_t>(offsetof(DFA7_t3E8B607423D0670275F37241C9AC095E95BB9421_StaticFields, ___DFA7_eof_13)); }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* get_DFA7_eof_13() const { return ___DFA7_eof_13; }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD** get_address_of_DFA7_eof_13() { return &___DFA7_eof_13; }
	inline void set_DFA7_eof_13(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* value)
	{
		___DFA7_eof_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DFA7_eof_13), (void*)value);
	}

	inline static int32_t get_offset_of_DFA7_min_14() { return static_cast<int32_t>(offsetof(DFA7_t3E8B607423D0670275F37241C9AC095E95BB9421_StaticFields, ___DFA7_min_14)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_DFA7_min_14() const { return ___DFA7_min_14; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_DFA7_min_14() { return &___DFA7_min_14; }
	inline void set_DFA7_min_14(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___DFA7_min_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DFA7_min_14), (void*)value);
	}

	inline static int32_t get_offset_of_DFA7_max_15() { return static_cast<int32_t>(offsetof(DFA7_t3E8B607423D0670275F37241C9AC095E95BB9421_StaticFields, ___DFA7_max_15)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_DFA7_max_15() const { return ___DFA7_max_15; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_DFA7_max_15() { return &___DFA7_max_15; }
	inline void set_DFA7_max_15(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___DFA7_max_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DFA7_max_15), (void*)value);
	}

	inline static int32_t get_offset_of_DFA7_accept_16() { return static_cast<int32_t>(offsetof(DFA7_t3E8B607423D0670275F37241C9AC095E95BB9421_StaticFields, ___DFA7_accept_16)); }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* get_DFA7_accept_16() const { return ___DFA7_accept_16; }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD** get_address_of_DFA7_accept_16() { return &___DFA7_accept_16; }
	inline void set_DFA7_accept_16(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* value)
	{
		___DFA7_accept_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DFA7_accept_16), (void*)value);
	}

	inline static int32_t get_offset_of_DFA7_special_17() { return static_cast<int32_t>(offsetof(DFA7_t3E8B607423D0670275F37241C9AC095E95BB9421_StaticFields, ___DFA7_special_17)); }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* get_DFA7_special_17() const { return ___DFA7_special_17; }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD** get_address_of_DFA7_special_17() { return &___DFA7_special_17; }
	inline void set_DFA7_special_17(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* value)
	{
		___DFA7_special_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DFA7_special_17), (void*)value);
	}

	inline static int32_t get_offset_of_DFA7_transition_18() { return static_cast<int32_t>(offsetof(DFA7_t3E8B607423D0670275F37241C9AC095E95BB9421_StaticFields, ___DFA7_transition_18)); }
	inline Int16U5BU5DU5BU5D_t543ACA7B5432CCA0395B0944D21B4E37B8825D77* get_DFA7_transition_18() const { return ___DFA7_transition_18; }
	inline Int16U5BU5DU5BU5D_t543ACA7B5432CCA0395B0944D21B4E37B8825D77** get_address_of_DFA7_transition_18() { return &___DFA7_transition_18; }
	inline void set_DFA7_transition_18(Int16U5BU5DU5BU5D_t543ACA7B5432CCA0395B0944D21B4E37B8825D77* value)
	{
		___DFA7_transition_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DFA7_transition_18), (void*)value);
	}
};


// Naninovel.NCalc.NCalcParser/additiveExpression_return
struct  additiveExpression_return_t7B20A0AB4A427B4232D9749D0E11F7449A6A173F  : public ParserRuleReturnScope_1_tC570619B03C97B2011CC4A91EBEED0B218D5571C
{
public:
	// Naninovel.NCalc.Domain.LogicalExpression Naninovel.NCalc.NCalcParser/additiveExpression_return::value
	LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * ___value_2;
	// Naninovel.Antlr.Runtime.Tree.CommonTree Naninovel.NCalc.NCalcParser/additiveExpression_return::_tree
	CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * ____tree_3;

public:
	inline static int32_t get_offset_of_value_2() { return static_cast<int32_t>(offsetof(additiveExpression_return_t7B20A0AB4A427B4232D9749D0E11F7449A6A173F, ___value_2)); }
	inline LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * get_value_2() const { return ___value_2; }
	inline LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 ** get_address_of_value_2() { return &___value_2; }
	inline void set_value_2(LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * value)
	{
		___value_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_2), (void*)value);
	}

	inline static int32_t get_offset_of__tree_3() { return static_cast<int32_t>(offsetof(additiveExpression_return_t7B20A0AB4A427B4232D9749D0E11F7449A6A173F, ____tree_3)); }
	inline CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * get__tree_3() const { return ____tree_3; }
	inline CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 ** get_address_of__tree_3() { return &____tree_3; }
	inline void set__tree_3(CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * value)
	{
		____tree_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tree_3), (void*)value);
	}
};


// Naninovel.NCalc.NCalcParser/arguments_return
struct  arguments_return_t71831D4E6B23911C48BC9159A9561CE4858EFE5C  : public ParserRuleReturnScope_1_tC570619B03C97B2011CC4A91EBEED0B218D5571C
{
public:
	// System.Collections.Generic.List`1<Naninovel.NCalc.Domain.LogicalExpression> Naninovel.NCalc.NCalcParser/arguments_return::value
	List_1_tB9332DBAEBFB8911E1196B5638A3E55DB1139612 * ___value_2;
	// Naninovel.Antlr.Runtime.Tree.CommonTree Naninovel.NCalc.NCalcParser/arguments_return::_tree
	CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * ____tree_3;

public:
	inline static int32_t get_offset_of_value_2() { return static_cast<int32_t>(offsetof(arguments_return_t71831D4E6B23911C48BC9159A9561CE4858EFE5C, ___value_2)); }
	inline List_1_tB9332DBAEBFB8911E1196B5638A3E55DB1139612 * get_value_2() const { return ___value_2; }
	inline List_1_tB9332DBAEBFB8911E1196B5638A3E55DB1139612 ** get_address_of_value_2() { return &___value_2; }
	inline void set_value_2(List_1_tB9332DBAEBFB8911E1196B5638A3E55DB1139612 * value)
	{
		___value_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_2), (void*)value);
	}

	inline static int32_t get_offset_of__tree_3() { return static_cast<int32_t>(offsetof(arguments_return_t71831D4E6B23911C48BC9159A9561CE4858EFE5C, ____tree_3)); }
	inline CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * get__tree_3() const { return ____tree_3; }
	inline CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 ** get_address_of__tree_3() { return &____tree_3; }
	inline void set__tree_3(CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * value)
	{
		____tree_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tree_3), (void*)value);
	}
};


// Naninovel.NCalc.NCalcParser/bitwiseAndExpression_return
struct  bitwiseAndExpression_return_tB62FF7C4DD57583AC2A909A58B8ECF821711EAC1  : public ParserRuleReturnScope_1_tC570619B03C97B2011CC4A91EBEED0B218D5571C
{
public:
	// Naninovel.NCalc.Domain.LogicalExpression Naninovel.NCalc.NCalcParser/bitwiseAndExpression_return::value
	LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * ___value_2;
	// Naninovel.Antlr.Runtime.Tree.CommonTree Naninovel.NCalc.NCalcParser/bitwiseAndExpression_return::_tree
	CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * ____tree_3;

public:
	inline static int32_t get_offset_of_value_2() { return static_cast<int32_t>(offsetof(bitwiseAndExpression_return_tB62FF7C4DD57583AC2A909A58B8ECF821711EAC1, ___value_2)); }
	inline LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * get_value_2() const { return ___value_2; }
	inline LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 ** get_address_of_value_2() { return &___value_2; }
	inline void set_value_2(LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * value)
	{
		___value_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_2), (void*)value);
	}

	inline static int32_t get_offset_of__tree_3() { return static_cast<int32_t>(offsetof(bitwiseAndExpression_return_tB62FF7C4DD57583AC2A909A58B8ECF821711EAC1, ____tree_3)); }
	inline CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * get__tree_3() const { return ____tree_3; }
	inline CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 ** get_address_of__tree_3() { return &____tree_3; }
	inline void set__tree_3(CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * value)
	{
		____tree_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tree_3), (void*)value);
	}
};


// Naninovel.NCalc.NCalcParser/bitwiseOrExpression_return
struct  bitwiseOrExpression_return_tD269C7AC623828818D14BE34E58BA4C6BD557E54  : public ParserRuleReturnScope_1_tC570619B03C97B2011CC4A91EBEED0B218D5571C
{
public:
	// Naninovel.NCalc.Domain.LogicalExpression Naninovel.NCalc.NCalcParser/bitwiseOrExpression_return::value
	LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * ___value_2;
	// Naninovel.Antlr.Runtime.Tree.CommonTree Naninovel.NCalc.NCalcParser/bitwiseOrExpression_return::_tree
	CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * ____tree_3;

public:
	inline static int32_t get_offset_of_value_2() { return static_cast<int32_t>(offsetof(bitwiseOrExpression_return_tD269C7AC623828818D14BE34E58BA4C6BD557E54, ___value_2)); }
	inline LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * get_value_2() const { return ___value_2; }
	inline LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 ** get_address_of_value_2() { return &___value_2; }
	inline void set_value_2(LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * value)
	{
		___value_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_2), (void*)value);
	}

	inline static int32_t get_offset_of__tree_3() { return static_cast<int32_t>(offsetof(bitwiseOrExpression_return_tD269C7AC623828818D14BE34E58BA4C6BD557E54, ____tree_3)); }
	inline CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * get__tree_3() const { return ____tree_3; }
	inline CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 ** get_address_of__tree_3() { return &____tree_3; }
	inline void set__tree_3(CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * value)
	{
		____tree_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tree_3), (void*)value);
	}
};


// Naninovel.NCalc.NCalcParser/bitwiseXOrExpression_return
struct  bitwiseXOrExpression_return_t61EA467B0152C06EB4262BF6EB43602965419A15  : public ParserRuleReturnScope_1_tC570619B03C97B2011CC4A91EBEED0B218D5571C
{
public:
	// Naninovel.NCalc.Domain.LogicalExpression Naninovel.NCalc.NCalcParser/bitwiseXOrExpression_return::value
	LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * ___value_2;
	// Naninovel.Antlr.Runtime.Tree.CommonTree Naninovel.NCalc.NCalcParser/bitwiseXOrExpression_return::_tree
	CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * ____tree_3;

public:
	inline static int32_t get_offset_of_value_2() { return static_cast<int32_t>(offsetof(bitwiseXOrExpression_return_t61EA467B0152C06EB4262BF6EB43602965419A15, ___value_2)); }
	inline LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * get_value_2() const { return ___value_2; }
	inline LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 ** get_address_of_value_2() { return &___value_2; }
	inline void set_value_2(LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * value)
	{
		___value_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_2), (void*)value);
	}

	inline static int32_t get_offset_of__tree_3() { return static_cast<int32_t>(offsetof(bitwiseXOrExpression_return_t61EA467B0152C06EB4262BF6EB43602965419A15, ____tree_3)); }
	inline CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * get__tree_3() const { return ____tree_3; }
	inline CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 ** get_address_of__tree_3() { return &____tree_3; }
	inline void set__tree_3(CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * value)
	{
		____tree_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tree_3), (void*)value);
	}
};


// Naninovel.NCalc.NCalcParser/booleanAndExpression_return
struct  booleanAndExpression_return_tF61EB28AB3F87201FCA3D1C93DB424D62A29A698  : public ParserRuleReturnScope_1_tC570619B03C97B2011CC4A91EBEED0B218D5571C
{
public:
	// Naninovel.NCalc.Domain.LogicalExpression Naninovel.NCalc.NCalcParser/booleanAndExpression_return::value
	LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * ___value_2;
	// Naninovel.Antlr.Runtime.Tree.CommonTree Naninovel.NCalc.NCalcParser/booleanAndExpression_return::_tree
	CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * ____tree_3;

public:
	inline static int32_t get_offset_of_value_2() { return static_cast<int32_t>(offsetof(booleanAndExpression_return_tF61EB28AB3F87201FCA3D1C93DB424D62A29A698, ___value_2)); }
	inline LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * get_value_2() const { return ___value_2; }
	inline LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 ** get_address_of_value_2() { return &___value_2; }
	inline void set_value_2(LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * value)
	{
		___value_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_2), (void*)value);
	}

	inline static int32_t get_offset_of__tree_3() { return static_cast<int32_t>(offsetof(booleanAndExpression_return_tF61EB28AB3F87201FCA3D1C93DB424D62A29A698, ____tree_3)); }
	inline CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * get__tree_3() const { return ____tree_3; }
	inline CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 ** get_address_of__tree_3() { return &____tree_3; }
	inline void set__tree_3(CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * value)
	{
		____tree_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tree_3), (void*)value);
	}
};


// Naninovel.NCalc.NCalcParser/conditionalExpression_return
struct  conditionalExpression_return_tB42A32FA8607B0F6FCD60B893CF3C97E8AFFDD65  : public ParserRuleReturnScope_1_tC570619B03C97B2011CC4A91EBEED0B218D5571C
{
public:
	// Naninovel.NCalc.Domain.LogicalExpression Naninovel.NCalc.NCalcParser/conditionalExpression_return::value
	LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * ___value_2;
	// Naninovel.Antlr.Runtime.Tree.CommonTree Naninovel.NCalc.NCalcParser/conditionalExpression_return::_tree
	CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * ____tree_3;

public:
	inline static int32_t get_offset_of_value_2() { return static_cast<int32_t>(offsetof(conditionalExpression_return_tB42A32FA8607B0F6FCD60B893CF3C97E8AFFDD65, ___value_2)); }
	inline LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * get_value_2() const { return ___value_2; }
	inline LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 ** get_address_of_value_2() { return &___value_2; }
	inline void set_value_2(LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * value)
	{
		___value_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_2), (void*)value);
	}

	inline static int32_t get_offset_of__tree_3() { return static_cast<int32_t>(offsetof(conditionalExpression_return_tB42A32FA8607B0F6FCD60B893CF3C97E8AFFDD65, ____tree_3)); }
	inline CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * get__tree_3() const { return ____tree_3; }
	inline CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 ** get_address_of__tree_3() { return &____tree_3; }
	inline void set__tree_3(CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * value)
	{
		____tree_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tree_3), (void*)value);
	}
};


// Naninovel.NCalc.NCalcParser/equalityExpression_return
struct  equalityExpression_return_tAC0FDD0D06D1E3189C76B665112BA5B7824947D5  : public ParserRuleReturnScope_1_tC570619B03C97B2011CC4A91EBEED0B218D5571C
{
public:
	// Naninovel.NCalc.Domain.LogicalExpression Naninovel.NCalc.NCalcParser/equalityExpression_return::value
	LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * ___value_2;
	// Naninovel.Antlr.Runtime.Tree.CommonTree Naninovel.NCalc.NCalcParser/equalityExpression_return::_tree
	CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * ____tree_3;

public:
	inline static int32_t get_offset_of_value_2() { return static_cast<int32_t>(offsetof(equalityExpression_return_tAC0FDD0D06D1E3189C76B665112BA5B7824947D5, ___value_2)); }
	inline LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * get_value_2() const { return ___value_2; }
	inline LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 ** get_address_of_value_2() { return &___value_2; }
	inline void set_value_2(LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * value)
	{
		___value_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_2), (void*)value);
	}

	inline static int32_t get_offset_of__tree_3() { return static_cast<int32_t>(offsetof(equalityExpression_return_tAC0FDD0D06D1E3189C76B665112BA5B7824947D5, ____tree_3)); }
	inline CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * get__tree_3() const { return ____tree_3; }
	inline CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 ** get_address_of__tree_3() { return &____tree_3; }
	inline void set__tree_3(CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * value)
	{
		____tree_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tree_3), (void*)value);
	}
};


// Naninovel.NCalc.NCalcParser/expressionList_return
struct  expressionList_return_t9B440CBDDC891CAEBCA1D67BE7AA1983BEEC6883  : public ParserRuleReturnScope_1_tC570619B03C97B2011CC4A91EBEED0B218D5571C
{
public:
	// System.Collections.Generic.List`1<Naninovel.NCalc.Domain.LogicalExpression> Naninovel.NCalc.NCalcParser/expressionList_return::value
	List_1_tB9332DBAEBFB8911E1196B5638A3E55DB1139612 * ___value_2;
	// Naninovel.Antlr.Runtime.Tree.CommonTree Naninovel.NCalc.NCalcParser/expressionList_return::_tree
	CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * ____tree_3;

public:
	inline static int32_t get_offset_of_value_2() { return static_cast<int32_t>(offsetof(expressionList_return_t9B440CBDDC891CAEBCA1D67BE7AA1983BEEC6883, ___value_2)); }
	inline List_1_tB9332DBAEBFB8911E1196B5638A3E55DB1139612 * get_value_2() const { return ___value_2; }
	inline List_1_tB9332DBAEBFB8911E1196B5638A3E55DB1139612 ** get_address_of_value_2() { return &___value_2; }
	inline void set_value_2(List_1_tB9332DBAEBFB8911E1196B5638A3E55DB1139612 * value)
	{
		___value_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_2), (void*)value);
	}

	inline static int32_t get_offset_of__tree_3() { return static_cast<int32_t>(offsetof(expressionList_return_t9B440CBDDC891CAEBCA1D67BE7AA1983BEEC6883, ____tree_3)); }
	inline CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * get__tree_3() const { return ____tree_3; }
	inline CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 ** get_address_of__tree_3() { return &____tree_3; }
	inline void set__tree_3(CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * value)
	{
		____tree_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tree_3), (void*)value);
	}
};


// Naninovel.NCalc.NCalcParser/identifier_return
struct  identifier_return_t887187A427D6BDD304A6DCEE909047FC757428D3  : public ParserRuleReturnScope_1_tC570619B03C97B2011CC4A91EBEED0B218D5571C
{
public:
	// Naninovel.NCalc.Domain.Identifier Naninovel.NCalc.NCalcParser/identifier_return::value
	Identifier_t64A304AE1762074E38912767107A5B7DAC0D54DD * ___value_2;
	// Naninovel.Antlr.Runtime.Tree.CommonTree Naninovel.NCalc.NCalcParser/identifier_return::_tree
	CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * ____tree_3;

public:
	inline static int32_t get_offset_of_value_2() { return static_cast<int32_t>(offsetof(identifier_return_t887187A427D6BDD304A6DCEE909047FC757428D3, ___value_2)); }
	inline Identifier_t64A304AE1762074E38912767107A5B7DAC0D54DD * get_value_2() const { return ___value_2; }
	inline Identifier_t64A304AE1762074E38912767107A5B7DAC0D54DD ** get_address_of_value_2() { return &___value_2; }
	inline void set_value_2(Identifier_t64A304AE1762074E38912767107A5B7DAC0D54DD * value)
	{
		___value_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_2), (void*)value);
	}

	inline static int32_t get_offset_of__tree_3() { return static_cast<int32_t>(offsetof(identifier_return_t887187A427D6BDD304A6DCEE909047FC757428D3, ____tree_3)); }
	inline CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * get__tree_3() const { return ____tree_3; }
	inline CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 ** get_address_of__tree_3() { return &____tree_3; }
	inline void set__tree_3(CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * value)
	{
		____tree_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tree_3), (void*)value);
	}
};


// Naninovel.NCalc.NCalcParser/logicalExpression_return
struct  logicalExpression_return_t4B9B5239A70029EDD25738726D4440F19698F97D  : public ParserRuleReturnScope_1_tC570619B03C97B2011CC4A91EBEED0B218D5571C
{
public:
	// Naninovel.NCalc.Domain.LogicalExpression Naninovel.NCalc.NCalcParser/logicalExpression_return::value
	LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * ___value_2;
	// Naninovel.Antlr.Runtime.Tree.CommonTree Naninovel.NCalc.NCalcParser/logicalExpression_return::_tree
	CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * ____tree_3;

public:
	inline static int32_t get_offset_of_value_2() { return static_cast<int32_t>(offsetof(logicalExpression_return_t4B9B5239A70029EDD25738726D4440F19698F97D, ___value_2)); }
	inline LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * get_value_2() const { return ___value_2; }
	inline LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 ** get_address_of_value_2() { return &___value_2; }
	inline void set_value_2(LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * value)
	{
		___value_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_2), (void*)value);
	}

	inline static int32_t get_offset_of__tree_3() { return static_cast<int32_t>(offsetof(logicalExpression_return_t4B9B5239A70029EDD25738726D4440F19698F97D, ____tree_3)); }
	inline CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * get__tree_3() const { return ____tree_3; }
	inline CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 ** get_address_of__tree_3() { return &____tree_3; }
	inline void set__tree_3(CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * value)
	{
		____tree_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tree_3), (void*)value);
	}
};


// Naninovel.NCalc.NCalcParser/multiplicativeExpression_return
struct  multiplicativeExpression_return_t2F29D00FBE8F6F71BACC7F04D2409758F1EEC9FB  : public ParserRuleReturnScope_1_tC570619B03C97B2011CC4A91EBEED0B218D5571C
{
public:
	// Naninovel.NCalc.Domain.LogicalExpression Naninovel.NCalc.NCalcParser/multiplicativeExpression_return::value
	LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * ___value_2;
	// Naninovel.Antlr.Runtime.Tree.CommonTree Naninovel.NCalc.NCalcParser/multiplicativeExpression_return::_tree
	CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * ____tree_3;

public:
	inline static int32_t get_offset_of_value_2() { return static_cast<int32_t>(offsetof(multiplicativeExpression_return_t2F29D00FBE8F6F71BACC7F04D2409758F1EEC9FB, ___value_2)); }
	inline LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * get_value_2() const { return ___value_2; }
	inline LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 ** get_address_of_value_2() { return &___value_2; }
	inline void set_value_2(LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * value)
	{
		___value_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_2), (void*)value);
	}

	inline static int32_t get_offset_of__tree_3() { return static_cast<int32_t>(offsetof(multiplicativeExpression_return_t2F29D00FBE8F6F71BACC7F04D2409758F1EEC9FB, ____tree_3)); }
	inline CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * get__tree_3() const { return ____tree_3; }
	inline CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 ** get_address_of__tree_3() { return &____tree_3; }
	inline void set__tree_3(CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * value)
	{
		____tree_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tree_3), (void*)value);
	}
};


// Naninovel.NCalc.NCalcParser/ncalcExpression_return
struct  ncalcExpression_return_t66EF927254FDFAA1ABE3AEF1AD5BC5EF910CCA8A  : public ParserRuleReturnScope_1_tC570619B03C97B2011CC4A91EBEED0B218D5571C
{
public:
	// Naninovel.NCalc.Domain.LogicalExpression Naninovel.NCalc.NCalcParser/ncalcExpression_return::value
	LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * ___value_2;
	// Naninovel.Antlr.Runtime.Tree.CommonTree Naninovel.NCalc.NCalcParser/ncalcExpression_return::_tree
	CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * ____tree_3;

public:
	inline static int32_t get_offset_of_value_2() { return static_cast<int32_t>(offsetof(ncalcExpression_return_t66EF927254FDFAA1ABE3AEF1AD5BC5EF910CCA8A, ___value_2)); }
	inline LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * get_value_2() const { return ___value_2; }
	inline LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 ** get_address_of_value_2() { return &___value_2; }
	inline void set_value_2(LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * value)
	{
		___value_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_2), (void*)value);
	}

	inline static int32_t get_offset_of__tree_3() { return static_cast<int32_t>(offsetof(ncalcExpression_return_t66EF927254FDFAA1ABE3AEF1AD5BC5EF910CCA8A, ____tree_3)); }
	inline CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * get__tree_3() const { return ____tree_3; }
	inline CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 ** get_address_of__tree_3() { return &____tree_3; }
	inline void set__tree_3(CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * value)
	{
		____tree_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tree_3), (void*)value);
	}
};


// Naninovel.NCalc.NCalcParser/primaryExpression_return
struct  primaryExpression_return_t3BC619508077312D30852257CAA580AAA95DBC00  : public ParserRuleReturnScope_1_tC570619B03C97B2011CC4A91EBEED0B218D5571C
{
public:
	// Naninovel.NCalc.Domain.LogicalExpression Naninovel.NCalc.NCalcParser/primaryExpression_return::value
	LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * ___value_2;
	// Naninovel.Antlr.Runtime.Tree.CommonTree Naninovel.NCalc.NCalcParser/primaryExpression_return::_tree
	CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * ____tree_3;

public:
	inline static int32_t get_offset_of_value_2() { return static_cast<int32_t>(offsetof(primaryExpression_return_t3BC619508077312D30852257CAA580AAA95DBC00, ___value_2)); }
	inline LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * get_value_2() const { return ___value_2; }
	inline LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 ** get_address_of_value_2() { return &___value_2; }
	inline void set_value_2(LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * value)
	{
		___value_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_2), (void*)value);
	}

	inline static int32_t get_offset_of__tree_3() { return static_cast<int32_t>(offsetof(primaryExpression_return_t3BC619508077312D30852257CAA580AAA95DBC00, ____tree_3)); }
	inline CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * get__tree_3() const { return ____tree_3; }
	inline CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 ** get_address_of__tree_3() { return &____tree_3; }
	inline void set__tree_3(CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * value)
	{
		____tree_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tree_3), (void*)value);
	}
};


// Naninovel.NCalc.NCalcParser/relationalExpression_return
struct  relationalExpression_return_t34D4DA562F00E169C74C2CE1E245489AD917BB60  : public ParserRuleReturnScope_1_tC570619B03C97B2011CC4A91EBEED0B218D5571C
{
public:
	// Naninovel.NCalc.Domain.LogicalExpression Naninovel.NCalc.NCalcParser/relationalExpression_return::value
	LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * ___value_2;
	// Naninovel.Antlr.Runtime.Tree.CommonTree Naninovel.NCalc.NCalcParser/relationalExpression_return::_tree
	CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * ____tree_3;

public:
	inline static int32_t get_offset_of_value_2() { return static_cast<int32_t>(offsetof(relationalExpression_return_t34D4DA562F00E169C74C2CE1E245489AD917BB60, ___value_2)); }
	inline LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * get_value_2() const { return ___value_2; }
	inline LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 ** get_address_of_value_2() { return &___value_2; }
	inline void set_value_2(LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * value)
	{
		___value_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_2), (void*)value);
	}

	inline static int32_t get_offset_of__tree_3() { return static_cast<int32_t>(offsetof(relationalExpression_return_t34D4DA562F00E169C74C2CE1E245489AD917BB60, ____tree_3)); }
	inline CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * get__tree_3() const { return ____tree_3; }
	inline CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 ** get_address_of__tree_3() { return &____tree_3; }
	inline void set__tree_3(CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * value)
	{
		____tree_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tree_3), (void*)value);
	}
};


// Naninovel.NCalc.NCalcParser/shiftExpression_return
struct  shiftExpression_return_t022A96295D36250C2C6C604752FF6E339E270FCA  : public ParserRuleReturnScope_1_tC570619B03C97B2011CC4A91EBEED0B218D5571C
{
public:
	// Naninovel.NCalc.Domain.LogicalExpression Naninovel.NCalc.NCalcParser/shiftExpression_return::value
	LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * ___value_2;
	// Naninovel.Antlr.Runtime.Tree.CommonTree Naninovel.NCalc.NCalcParser/shiftExpression_return::_tree
	CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * ____tree_3;

public:
	inline static int32_t get_offset_of_value_2() { return static_cast<int32_t>(offsetof(shiftExpression_return_t022A96295D36250C2C6C604752FF6E339E270FCA, ___value_2)); }
	inline LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * get_value_2() const { return ___value_2; }
	inline LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 ** get_address_of_value_2() { return &___value_2; }
	inline void set_value_2(LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * value)
	{
		___value_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_2), (void*)value);
	}

	inline static int32_t get_offset_of__tree_3() { return static_cast<int32_t>(offsetof(shiftExpression_return_t022A96295D36250C2C6C604752FF6E339E270FCA, ____tree_3)); }
	inline CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * get__tree_3() const { return ____tree_3; }
	inline CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 ** get_address_of__tree_3() { return &____tree_3; }
	inline void set__tree_3(CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * value)
	{
		____tree_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tree_3), (void*)value);
	}
};


// Naninovel.NCalc.NCalcParser/unaryExpression_return
struct  unaryExpression_return_t7D5BB6EE3838BC888EC5FB09A9AE81E4BBF84663  : public ParserRuleReturnScope_1_tC570619B03C97B2011CC4A91EBEED0B218D5571C
{
public:
	// Naninovel.NCalc.Domain.LogicalExpression Naninovel.NCalc.NCalcParser/unaryExpression_return::value
	LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * ___value_2;
	// Naninovel.Antlr.Runtime.Tree.CommonTree Naninovel.NCalc.NCalcParser/unaryExpression_return::_tree
	CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * ____tree_3;

public:
	inline static int32_t get_offset_of_value_2() { return static_cast<int32_t>(offsetof(unaryExpression_return_t7D5BB6EE3838BC888EC5FB09A9AE81E4BBF84663, ___value_2)); }
	inline LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * get_value_2() const { return ___value_2; }
	inline LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 ** get_address_of_value_2() { return &___value_2; }
	inline void set_value_2(LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * value)
	{
		___value_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_2), (void*)value);
	}

	inline static int32_t get_offset_of__tree_3() { return static_cast<int32_t>(offsetof(unaryExpression_return_t7D5BB6EE3838BC888EC5FB09A9AE81E4BBF84663, ____tree_3)); }
	inline CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * get__tree_3() const { return ____tree_3; }
	inline CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 ** get_address_of__tree_3() { return &____tree_3; }
	inline void set__tree_3(CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * value)
	{
		____tree_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tree_3), (void*)value);
	}
};


// Naninovel.NCalc.NCalcParser/value_return
struct  value_return_t9D64C256C6B414FD3F848D274106AC56229CBF43  : public ParserRuleReturnScope_1_tC570619B03C97B2011CC4A91EBEED0B218D5571C
{
public:
	// Naninovel.NCalc.Domain.ValueExpression Naninovel.NCalc.NCalcParser/value_return::value
	ValueExpression_t1E49B717CBB41CB95F6554127CCC773DA6C152C9 * ___value_2;
	// Naninovel.Antlr.Runtime.Tree.CommonTree Naninovel.NCalc.NCalcParser/value_return::_tree
	CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * ____tree_3;

public:
	inline static int32_t get_offset_of_value_2() { return static_cast<int32_t>(offsetof(value_return_t9D64C256C6B414FD3F848D274106AC56229CBF43, ___value_2)); }
	inline ValueExpression_t1E49B717CBB41CB95F6554127CCC773DA6C152C9 * get_value_2() const { return ___value_2; }
	inline ValueExpression_t1E49B717CBB41CB95F6554127CCC773DA6C152C9 ** get_address_of_value_2() { return &___value_2; }
	inline void set_value_2(ValueExpression_t1E49B717CBB41CB95F6554127CCC773DA6C152C9 * value)
	{
		___value_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_2), (void*)value);
	}

	inline static int32_t get_offset_of__tree_3() { return static_cast<int32_t>(offsetof(value_return_t9D64C256C6B414FD3F848D274106AC56229CBF43, ____tree_3)); }
	inline CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * get__tree_3() const { return ____tree_3; }
	inline CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 ** get_address_of__tree_3() { return &____tree_3; }
	inline void set__tree_3(CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * value)
	{
		____tree_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tree_3), (void*)value);
	}
};


// Naninovel.NCalc.Domain.BinaryExpressionType
struct  BinaryExpressionType_t294D9F54245CB845F460D482D7EBE0C7011CD4DD 
{
public:
	// System.Int32 Naninovel.NCalc.Domain.BinaryExpressionType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BinaryExpressionType_t294D9F54245CB845F460D482D7EBE0C7011CD4DD, ___value___2)); }
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

// Naninovel.NCalc.EvaluateOptions
struct  EvaluateOptions_tCC0ACA77DE9E577ACE60B04EEBCE56B2F4BBFB06 
{
public:
	// System.Int32 Naninovel.NCalc.EvaluateOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EvaluateOptions_tCC0ACA77DE9E577ACE60B04EEBCE56B2F4BBFB06, ___value___2)); }
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

// System.Int32Enum
struct  Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Globalization.NumberStyles
struct  NumberStyles_t379EFBF2535E1C950DEC8042704BB663BF636594 
{
public:
	// System.Int32 System.Globalization.NumberStyles::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NumberStyles_t379EFBF2535E1C950DEC8042704BB663BF636594, ___value___2)); }
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


// System.TypeCode
struct  TypeCode_tCB39BAB5CFB7A1E0BCB521413E3C46B81C31AA7C 
{
public:
	// System.Int32 System.TypeCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TypeCode_tCB39BAB5CFB7A1E0BCB521413E3C46B81C31AA7C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Naninovel.NCalc.Domain.UnaryExpressionType
struct  UnaryExpressionType_tBF6BE2DCC7C51C3933988BB3706CE5A85055FB10 
{
public:
	// System.Int32 Naninovel.NCalc.Domain.UnaryExpressionType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UnaryExpressionType_tBF6BE2DCC7C51C3933988BB3706CE5A85055FB10, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Naninovel.NCalc.Domain.ValueType
struct  ValueType_t2BF5711DDF950923EF56CB166EBC96293E947F9F 
{
public:
	// System.Int32 Naninovel.NCalc.Domain.ValueType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ValueType_t2BF5711DDF950923EF56CB166EBC96293E947F9F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Naninovel.NCalc.Domain.BinaryExpression
struct  BinaryExpression_t6B952CF817520F64ACE95BE470B2F349856B92D9  : public LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968
{
public:
	// Naninovel.NCalc.Domain.LogicalExpression Naninovel.NCalc.Domain.BinaryExpression::<LeftExpression>k__BackingField
	LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * ___U3CLeftExpressionU3Ek__BackingField_0;
	// Naninovel.NCalc.Domain.LogicalExpression Naninovel.NCalc.Domain.BinaryExpression::<RightExpression>k__BackingField
	LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * ___U3CRightExpressionU3Ek__BackingField_1;
	// Naninovel.NCalc.Domain.BinaryExpressionType Naninovel.NCalc.Domain.BinaryExpression::<Type>k__BackingField
	int32_t ___U3CTypeU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CLeftExpressionU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(BinaryExpression_t6B952CF817520F64ACE95BE470B2F349856B92D9, ___U3CLeftExpressionU3Ek__BackingField_0)); }
	inline LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * get_U3CLeftExpressionU3Ek__BackingField_0() const { return ___U3CLeftExpressionU3Ek__BackingField_0; }
	inline LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 ** get_address_of_U3CLeftExpressionU3Ek__BackingField_0() { return &___U3CLeftExpressionU3Ek__BackingField_0; }
	inline void set_U3CLeftExpressionU3Ek__BackingField_0(LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * value)
	{
		___U3CLeftExpressionU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLeftExpressionU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CRightExpressionU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BinaryExpression_t6B952CF817520F64ACE95BE470B2F349856B92D9, ___U3CRightExpressionU3Ek__BackingField_1)); }
	inline LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * get_U3CRightExpressionU3Ek__BackingField_1() const { return ___U3CRightExpressionU3Ek__BackingField_1; }
	inline LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 ** get_address_of_U3CRightExpressionU3Ek__BackingField_1() { return &___U3CRightExpressionU3Ek__BackingField_1; }
	inline void set_U3CRightExpressionU3Ek__BackingField_1(LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * value)
	{
		___U3CRightExpressionU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRightExpressionU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTypeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BinaryExpression_t6B952CF817520F64ACE95BE470B2F349856B92D9, ___U3CTypeU3Ek__BackingField_2)); }
	inline int32_t get_U3CTypeU3Ek__BackingField_2() const { return ___U3CTypeU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CTypeU3Ek__BackingField_2() { return &___U3CTypeU3Ek__BackingField_2; }
	inline void set_U3CTypeU3Ek__BackingField_2(int32_t value)
	{
		___U3CTypeU3Ek__BackingField_2 = value;
	}
};


// Naninovel.NCalc.EvaluationException
struct  EvaluationException_t4153896D46C5CE3F846F38E028958533206CCEC4  : public Exception_t
{
public:

public:
};


// Naninovel.NCalc.Domain.EvaluationVisitor
struct  EvaluationVisitor_t3A83237C8491A3205B23CE40CE4ECAF2EFB0BAB1  : public LogicalExpressionVisitor_t4FEC2A3FF1F4D8E4207828C80EBEC796EC6AED13
{
public:
	// Naninovel.NCalc.EvaluateOptions Naninovel.NCalc.Domain.EvaluationVisitor::_options
	int32_t ____options_0;
	// System.Object Naninovel.NCalc.Domain.EvaluationVisitor::<Result>k__BackingField
	RuntimeObject * ___U3CResultU3Ek__BackingField_1;
	// Naninovel.NCalc.EvaluateFunctionHandler Naninovel.NCalc.Domain.EvaluationVisitor::EvaluateFunction
	EvaluateFunctionHandler_t3FB6CF99EF15927571E11804914E05D18FDF719F * ___EvaluateFunction_3;
	// Naninovel.NCalc.EvaluateParameterHandler Naninovel.NCalc.Domain.EvaluationVisitor::EvaluateParameter
	EvaluateParameterHandler_t38636AF5AF7365B5073EF263B673C49CACE141F1 * ___EvaluateParameter_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> Naninovel.NCalc.Domain.EvaluationVisitor::<Parameters>k__BackingField
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___U3CParametersU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of__options_0() { return static_cast<int32_t>(offsetof(EvaluationVisitor_t3A83237C8491A3205B23CE40CE4ECAF2EFB0BAB1, ____options_0)); }
	inline int32_t get__options_0() const { return ____options_0; }
	inline int32_t* get_address_of__options_0() { return &____options_0; }
	inline void set__options_0(int32_t value)
	{
		____options_0 = value;
	}

	inline static int32_t get_offset_of_U3CResultU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(EvaluationVisitor_t3A83237C8491A3205B23CE40CE4ECAF2EFB0BAB1, ___U3CResultU3Ek__BackingField_1)); }
	inline RuntimeObject * get_U3CResultU3Ek__BackingField_1() const { return ___U3CResultU3Ek__BackingField_1; }
	inline RuntimeObject ** get_address_of_U3CResultU3Ek__BackingField_1() { return &___U3CResultU3Ek__BackingField_1; }
	inline void set_U3CResultU3Ek__BackingField_1(RuntimeObject * value)
	{
		___U3CResultU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CResultU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_EvaluateFunction_3() { return static_cast<int32_t>(offsetof(EvaluationVisitor_t3A83237C8491A3205B23CE40CE4ECAF2EFB0BAB1, ___EvaluateFunction_3)); }
	inline EvaluateFunctionHandler_t3FB6CF99EF15927571E11804914E05D18FDF719F * get_EvaluateFunction_3() const { return ___EvaluateFunction_3; }
	inline EvaluateFunctionHandler_t3FB6CF99EF15927571E11804914E05D18FDF719F ** get_address_of_EvaluateFunction_3() { return &___EvaluateFunction_3; }
	inline void set_EvaluateFunction_3(EvaluateFunctionHandler_t3FB6CF99EF15927571E11804914E05D18FDF719F * value)
	{
		___EvaluateFunction_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EvaluateFunction_3), (void*)value);
	}

	inline static int32_t get_offset_of_EvaluateParameter_4() { return static_cast<int32_t>(offsetof(EvaluationVisitor_t3A83237C8491A3205B23CE40CE4ECAF2EFB0BAB1, ___EvaluateParameter_4)); }
	inline EvaluateParameterHandler_t38636AF5AF7365B5073EF263B673C49CACE141F1 * get_EvaluateParameter_4() const { return ___EvaluateParameter_4; }
	inline EvaluateParameterHandler_t38636AF5AF7365B5073EF263B673C49CACE141F1 ** get_address_of_EvaluateParameter_4() { return &___EvaluateParameter_4; }
	inline void set_EvaluateParameter_4(EvaluateParameterHandler_t38636AF5AF7365B5073EF263B673C49CACE141F1 * value)
	{
		___EvaluateParameter_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EvaluateParameter_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CParametersU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(EvaluationVisitor_t3A83237C8491A3205B23CE40CE4ECAF2EFB0BAB1, ___U3CParametersU3Ek__BackingField_5)); }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * get_U3CParametersU3Ek__BackingField_5() const { return ___U3CParametersU3Ek__BackingField_5; }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 ** get_address_of_U3CParametersU3Ek__BackingField_5() { return &___U3CParametersU3Ek__BackingField_5; }
	inline void set_U3CParametersU3Ek__BackingField_5(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * value)
	{
		___U3CParametersU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CParametersU3Ek__BackingField_5), (void*)value);
	}
};

struct EvaluationVisitor_t3A83237C8491A3205B23CE40CE4ECAF2EFB0BAB1_StaticFields
{
public:
	// System.Type[] Naninovel.NCalc.Domain.EvaluationVisitor::CommonTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___CommonTypes_2;

public:
	inline static int32_t get_offset_of_CommonTypes_2() { return static_cast<int32_t>(offsetof(EvaluationVisitor_t3A83237C8491A3205B23CE40CE4ECAF2EFB0BAB1_StaticFields, ___CommonTypes_2)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_CommonTypes_2() const { return ___CommonTypes_2; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_CommonTypes_2() { return &___CommonTypes_2; }
	inline void set_CommonTypes_2(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___CommonTypes_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CommonTypes_2), (void*)value);
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

// System.Globalization.NumberFormatInfo
struct  NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D  : public RuntimeObject
{
public:
	// System.Int32[] System.Globalization.NumberFormatInfo::numberGroupSizes
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___numberGroupSizes_1;
	// System.Int32[] System.Globalization.NumberFormatInfo::currencyGroupSizes
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___currencyGroupSizes_2;
	// System.Int32[] System.Globalization.NumberFormatInfo::percentGroupSizes
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___percentGroupSizes_3;
	// System.String System.Globalization.NumberFormatInfo::positiveSign
	String_t* ___positiveSign_4;
	// System.String System.Globalization.NumberFormatInfo::negativeSign
	String_t* ___negativeSign_5;
	// System.String System.Globalization.NumberFormatInfo::numberDecimalSeparator
	String_t* ___numberDecimalSeparator_6;
	// System.String System.Globalization.NumberFormatInfo::numberGroupSeparator
	String_t* ___numberGroupSeparator_7;
	// System.String System.Globalization.NumberFormatInfo::currencyGroupSeparator
	String_t* ___currencyGroupSeparator_8;
	// System.String System.Globalization.NumberFormatInfo::currencyDecimalSeparator
	String_t* ___currencyDecimalSeparator_9;
	// System.String System.Globalization.NumberFormatInfo::currencySymbol
	String_t* ___currencySymbol_10;
	// System.String System.Globalization.NumberFormatInfo::ansiCurrencySymbol
	String_t* ___ansiCurrencySymbol_11;
	// System.String System.Globalization.NumberFormatInfo::nanSymbol
	String_t* ___nanSymbol_12;
	// System.String System.Globalization.NumberFormatInfo::positiveInfinitySymbol
	String_t* ___positiveInfinitySymbol_13;
	// System.String System.Globalization.NumberFormatInfo::negativeInfinitySymbol
	String_t* ___negativeInfinitySymbol_14;
	// System.String System.Globalization.NumberFormatInfo::percentDecimalSeparator
	String_t* ___percentDecimalSeparator_15;
	// System.String System.Globalization.NumberFormatInfo::percentGroupSeparator
	String_t* ___percentGroupSeparator_16;
	// System.String System.Globalization.NumberFormatInfo::percentSymbol
	String_t* ___percentSymbol_17;
	// System.String System.Globalization.NumberFormatInfo::perMilleSymbol
	String_t* ___perMilleSymbol_18;
	// System.String[] System.Globalization.NumberFormatInfo::nativeDigits
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___nativeDigits_19;
	// System.Int32 System.Globalization.NumberFormatInfo::m_dataItem
	int32_t ___m_dataItem_20;
	// System.Int32 System.Globalization.NumberFormatInfo::numberDecimalDigits
	int32_t ___numberDecimalDigits_21;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyDecimalDigits
	int32_t ___currencyDecimalDigits_22;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyPositivePattern
	int32_t ___currencyPositivePattern_23;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyNegativePattern
	int32_t ___currencyNegativePattern_24;
	// System.Int32 System.Globalization.NumberFormatInfo::numberNegativePattern
	int32_t ___numberNegativePattern_25;
	// System.Int32 System.Globalization.NumberFormatInfo::percentPositivePattern
	int32_t ___percentPositivePattern_26;
	// System.Int32 System.Globalization.NumberFormatInfo::percentNegativePattern
	int32_t ___percentNegativePattern_27;
	// System.Int32 System.Globalization.NumberFormatInfo::percentDecimalDigits
	int32_t ___percentDecimalDigits_28;
	// System.Int32 System.Globalization.NumberFormatInfo::digitSubstitution
	int32_t ___digitSubstitution_29;
	// System.Boolean System.Globalization.NumberFormatInfo::isReadOnly
	bool ___isReadOnly_30;
	// System.Boolean System.Globalization.NumberFormatInfo::m_useUserOverride
	bool ___m_useUserOverride_31;
	// System.Boolean System.Globalization.NumberFormatInfo::m_isInvariant
	bool ___m_isInvariant_32;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsNumber
	bool ___validForParseAsNumber_33;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsCurrency
	bool ___validForParseAsCurrency_34;

public:
	inline static int32_t get_offset_of_numberGroupSizes_1() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___numberGroupSizes_1)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_numberGroupSizes_1() const { return ___numberGroupSizes_1; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_numberGroupSizes_1() { return &___numberGroupSizes_1; }
	inline void set_numberGroupSizes_1(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___numberGroupSizes_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numberGroupSizes_1), (void*)value);
	}

	inline static int32_t get_offset_of_currencyGroupSizes_2() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencyGroupSizes_2)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_currencyGroupSizes_2() const { return ___currencyGroupSizes_2; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_currencyGroupSizes_2() { return &___currencyGroupSizes_2; }
	inline void set_currencyGroupSizes_2(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___currencyGroupSizes_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currencyGroupSizes_2), (void*)value);
	}

	inline static int32_t get_offset_of_percentGroupSizes_3() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentGroupSizes_3)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_percentGroupSizes_3() const { return ___percentGroupSizes_3; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_percentGroupSizes_3() { return &___percentGroupSizes_3; }
	inline void set_percentGroupSizes_3(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___percentGroupSizes_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___percentGroupSizes_3), (void*)value);
	}

	inline static int32_t get_offset_of_positiveSign_4() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___positiveSign_4)); }
	inline String_t* get_positiveSign_4() const { return ___positiveSign_4; }
	inline String_t** get_address_of_positiveSign_4() { return &___positiveSign_4; }
	inline void set_positiveSign_4(String_t* value)
	{
		___positiveSign_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___positiveSign_4), (void*)value);
	}

	inline static int32_t get_offset_of_negativeSign_5() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___negativeSign_5)); }
	inline String_t* get_negativeSign_5() const { return ___negativeSign_5; }
	inline String_t** get_address_of_negativeSign_5() { return &___negativeSign_5; }
	inline void set_negativeSign_5(String_t* value)
	{
		___negativeSign_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___negativeSign_5), (void*)value);
	}

	inline static int32_t get_offset_of_numberDecimalSeparator_6() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___numberDecimalSeparator_6)); }
	inline String_t* get_numberDecimalSeparator_6() const { return ___numberDecimalSeparator_6; }
	inline String_t** get_address_of_numberDecimalSeparator_6() { return &___numberDecimalSeparator_6; }
	inline void set_numberDecimalSeparator_6(String_t* value)
	{
		___numberDecimalSeparator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numberDecimalSeparator_6), (void*)value);
	}

	inline static int32_t get_offset_of_numberGroupSeparator_7() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___numberGroupSeparator_7)); }
	inline String_t* get_numberGroupSeparator_7() const { return ___numberGroupSeparator_7; }
	inline String_t** get_address_of_numberGroupSeparator_7() { return &___numberGroupSeparator_7; }
	inline void set_numberGroupSeparator_7(String_t* value)
	{
		___numberGroupSeparator_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numberGroupSeparator_7), (void*)value);
	}

	inline static int32_t get_offset_of_currencyGroupSeparator_8() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencyGroupSeparator_8)); }
	inline String_t* get_currencyGroupSeparator_8() const { return ___currencyGroupSeparator_8; }
	inline String_t** get_address_of_currencyGroupSeparator_8() { return &___currencyGroupSeparator_8; }
	inline void set_currencyGroupSeparator_8(String_t* value)
	{
		___currencyGroupSeparator_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currencyGroupSeparator_8), (void*)value);
	}

	inline static int32_t get_offset_of_currencyDecimalSeparator_9() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencyDecimalSeparator_9)); }
	inline String_t* get_currencyDecimalSeparator_9() const { return ___currencyDecimalSeparator_9; }
	inline String_t** get_address_of_currencyDecimalSeparator_9() { return &___currencyDecimalSeparator_9; }
	inline void set_currencyDecimalSeparator_9(String_t* value)
	{
		___currencyDecimalSeparator_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currencyDecimalSeparator_9), (void*)value);
	}

	inline static int32_t get_offset_of_currencySymbol_10() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencySymbol_10)); }
	inline String_t* get_currencySymbol_10() const { return ___currencySymbol_10; }
	inline String_t** get_address_of_currencySymbol_10() { return &___currencySymbol_10; }
	inline void set_currencySymbol_10(String_t* value)
	{
		___currencySymbol_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currencySymbol_10), (void*)value);
	}

	inline static int32_t get_offset_of_ansiCurrencySymbol_11() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___ansiCurrencySymbol_11)); }
	inline String_t* get_ansiCurrencySymbol_11() const { return ___ansiCurrencySymbol_11; }
	inline String_t** get_address_of_ansiCurrencySymbol_11() { return &___ansiCurrencySymbol_11; }
	inline void set_ansiCurrencySymbol_11(String_t* value)
	{
		___ansiCurrencySymbol_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ansiCurrencySymbol_11), (void*)value);
	}

	inline static int32_t get_offset_of_nanSymbol_12() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___nanSymbol_12)); }
	inline String_t* get_nanSymbol_12() const { return ___nanSymbol_12; }
	inline String_t** get_address_of_nanSymbol_12() { return &___nanSymbol_12; }
	inline void set_nanSymbol_12(String_t* value)
	{
		___nanSymbol_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nanSymbol_12), (void*)value);
	}

	inline static int32_t get_offset_of_positiveInfinitySymbol_13() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___positiveInfinitySymbol_13)); }
	inline String_t* get_positiveInfinitySymbol_13() const { return ___positiveInfinitySymbol_13; }
	inline String_t** get_address_of_positiveInfinitySymbol_13() { return &___positiveInfinitySymbol_13; }
	inline void set_positiveInfinitySymbol_13(String_t* value)
	{
		___positiveInfinitySymbol_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___positiveInfinitySymbol_13), (void*)value);
	}

	inline static int32_t get_offset_of_negativeInfinitySymbol_14() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___negativeInfinitySymbol_14)); }
	inline String_t* get_negativeInfinitySymbol_14() const { return ___negativeInfinitySymbol_14; }
	inline String_t** get_address_of_negativeInfinitySymbol_14() { return &___negativeInfinitySymbol_14; }
	inline void set_negativeInfinitySymbol_14(String_t* value)
	{
		___negativeInfinitySymbol_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___negativeInfinitySymbol_14), (void*)value);
	}

	inline static int32_t get_offset_of_percentDecimalSeparator_15() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentDecimalSeparator_15)); }
	inline String_t* get_percentDecimalSeparator_15() const { return ___percentDecimalSeparator_15; }
	inline String_t** get_address_of_percentDecimalSeparator_15() { return &___percentDecimalSeparator_15; }
	inline void set_percentDecimalSeparator_15(String_t* value)
	{
		___percentDecimalSeparator_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___percentDecimalSeparator_15), (void*)value);
	}

	inline static int32_t get_offset_of_percentGroupSeparator_16() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentGroupSeparator_16)); }
	inline String_t* get_percentGroupSeparator_16() const { return ___percentGroupSeparator_16; }
	inline String_t** get_address_of_percentGroupSeparator_16() { return &___percentGroupSeparator_16; }
	inline void set_percentGroupSeparator_16(String_t* value)
	{
		___percentGroupSeparator_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___percentGroupSeparator_16), (void*)value);
	}

	inline static int32_t get_offset_of_percentSymbol_17() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentSymbol_17)); }
	inline String_t* get_percentSymbol_17() const { return ___percentSymbol_17; }
	inline String_t** get_address_of_percentSymbol_17() { return &___percentSymbol_17; }
	inline void set_percentSymbol_17(String_t* value)
	{
		___percentSymbol_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___percentSymbol_17), (void*)value);
	}

	inline static int32_t get_offset_of_perMilleSymbol_18() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___perMilleSymbol_18)); }
	inline String_t* get_perMilleSymbol_18() const { return ___perMilleSymbol_18; }
	inline String_t** get_address_of_perMilleSymbol_18() { return &___perMilleSymbol_18; }
	inline void set_perMilleSymbol_18(String_t* value)
	{
		___perMilleSymbol_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___perMilleSymbol_18), (void*)value);
	}

	inline static int32_t get_offset_of_nativeDigits_19() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___nativeDigits_19)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_nativeDigits_19() const { return ___nativeDigits_19; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_nativeDigits_19() { return &___nativeDigits_19; }
	inline void set_nativeDigits_19(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___nativeDigits_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nativeDigits_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_dataItem_20() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___m_dataItem_20)); }
	inline int32_t get_m_dataItem_20() const { return ___m_dataItem_20; }
	inline int32_t* get_address_of_m_dataItem_20() { return &___m_dataItem_20; }
	inline void set_m_dataItem_20(int32_t value)
	{
		___m_dataItem_20 = value;
	}

	inline static int32_t get_offset_of_numberDecimalDigits_21() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___numberDecimalDigits_21)); }
	inline int32_t get_numberDecimalDigits_21() const { return ___numberDecimalDigits_21; }
	inline int32_t* get_address_of_numberDecimalDigits_21() { return &___numberDecimalDigits_21; }
	inline void set_numberDecimalDigits_21(int32_t value)
	{
		___numberDecimalDigits_21 = value;
	}

	inline static int32_t get_offset_of_currencyDecimalDigits_22() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencyDecimalDigits_22)); }
	inline int32_t get_currencyDecimalDigits_22() const { return ___currencyDecimalDigits_22; }
	inline int32_t* get_address_of_currencyDecimalDigits_22() { return &___currencyDecimalDigits_22; }
	inline void set_currencyDecimalDigits_22(int32_t value)
	{
		___currencyDecimalDigits_22 = value;
	}

	inline static int32_t get_offset_of_currencyPositivePattern_23() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencyPositivePattern_23)); }
	inline int32_t get_currencyPositivePattern_23() const { return ___currencyPositivePattern_23; }
	inline int32_t* get_address_of_currencyPositivePattern_23() { return &___currencyPositivePattern_23; }
	inline void set_currencyPositivePattern_23(int32_t value)
	{
		___currencyPositivePattern_23 = value;
	}

	inline static int32_t get_offset_of_currencyNegativePattern_24() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencyNegativePattern_24)); }
	inline int32_t get_currencyNegativePattern_24() const { return ___currencyNegativePattern_24; }
	inline int32_t* get_address_of_currencyNegativePattern_24() { return &___currencyNegativePattern_24; }
	inline void set_currencyNegativePattern_24(int32_t value)
	{
		___currencyNegativePattern_24 = value;
	}

	inline static int32_t get_offset_of_numberNegativePattern_25() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___numberNegativePattern_25)); }
	inline int32_t get_numberNegativePattern_25() const { return ___numberNegativePattern_25; }
	inline int32_t* get_address_of_numberNegativePattern_25() { return &___numberNegativePattern_25; }
	inline void set_numberNegativePattern_25(int32_t value)
	{
		___numberNegativePattern_25 = value;
	}

	inline static int32_t get_offset_of_percentPositivePattern_26() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentPositivePattern_26)); }
	inline int32_t get_percentPositivePattern_26() const { return ___percentPositivePattern_26; }
	inline int32_t* get_address_of_percentPositivePattern_26() { return &___percentPositivePattern_26; }
	inline void set_percentPositivePattern_26(int32_t value)
	{
		___percentPositivePattern_26 = value;
	}

	inline static int32_t get_offset_of_percentNegativePattern_27() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentNegativePattern_27)); }
	inline int32_t get_percentNegativePattern_27() const { return ___percentNegativePattern_27; }
	inline int32_t* get_address_of_percentNegativePattern_27() { return &___percentNegativePattern_27; }
	inline void set_percentNegativePattern_27(int32_t value)
	{
		___percentNegativePattern_27 = value;
	}

	inline static int32_t get_offset_of_percentDecimalDigits_28() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentDecimalDigits_28)); }
	inline int32_t get_percentDecimalDigits_28() const { return ___percentDecimalDigits_28; }
	inline int32_t* get_address_of_percentDecimalDigits_28() { return &___percentDecimalDigits_28; }
	inline void set_percentDecimalDigits_28(int32_t value)
	{
		___percentDecimalDigits_28 = value;
	}

	inline static int32_t get_offset_of_digitSubstitution_29() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___digitSubstitution_29)); }
	inline int32_t get_digitSubstitution_29() const { return ___digitSubstitution_29; }
	inline int32_t* get_address_of_digitSubstitution_29() { return &___digitSubstitution_29; }
	inline void set_digitSubstitution_29(int32_t value)
	{
		___digitSubstitution_29 = value;
	}

	inline static int32_t get_offset_of_isReadOnly_30() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___isReadOnly_30)); }
	inline bool get_isReadOnly_30() const { return ___isReadOnly_30; }
	inline bool* get_address_of_isReadOnly_30() { return &___isReadOnly_30; }
	inline void set_isReadOnly_30(bool value)
	{
		___isReadOnly_30 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_31() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___m_useUserOverride_31)); }
	inline bool get_m_useUserOverride_31() const { return ___m_useUserOverride_31; }
	inline bool* get_address_of_m_useUserOverride_31() { return &___m_useUserOverride_31; }
	inline void set_m_useUserOverride_31(bool value)
	{
		___m_useUserOverride_31 = value;
	}

	inline static int32_t get_offset_of_m_isInvariant_32() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___m_isInvariant_32)); }
	inline bool get_m_isInvariant_32() const { return ___m_isInvariant_32; }
	inline bool* get_address_of_m_isInvariant_32() { return &___m_isInvariant_32; }
	inline void set_m_isInvariant_32(bool value)
	{
		___m_isInvariant_32 = value;
	}

	inline static int32_t get_offset_of_validForParseAsNumber_33() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___validForParseAsNumber_33)); }
	inline bool get_validForParseAsNumber_33() const { return ___validForParseAsNumber_33; }
	inline bool* get_address_of_validForParseAsNumber_33() { return &___validForParseAsNumber_33; }
	inline void set_validForParseAsNumber_33(bool value)
	{
		___validForParseAsNumber_33 = value;
	}

	inline static int32_t get_offset_of_validForParseAsCurrency_34() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___validForParseAsCurrency_34)); }
	inline bool get_validForParseAsCurrency_34() const { return ___validForParseAsCurrency_34; }
	inline bool* get_address_of_validForParseAsCurrency_34() { return &___validForParseAsCurrency_34; }
	inline void set_validForParseAsCurrency_34(bool value)
	{
		___validForParseAsCurrency_34 = value;
	}
};

struct NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D_StaticFields
{
public:
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.NumberFormatInfo::invariantInfo
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___invariantInfo_0;

public:
	inline static int32_t get_offset_of_invariantInfo_0() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D_StaticFields, ___invariantInfo_0)); }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * get_invariantInfo_0() const { return ___invariantInfo_0; }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D ** get_address_of_invariantInfo_0() { return &___invariantInfo_0; }
	inline void set_invariantInfo_0(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * value)
	{
		___invariantInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invariantInfo_0), (void*)value);
	}
};


// Naninovel.Antlr.Runtime.RecognitionException
struct  RecognitionException_tF5714BA0E5C3032188B67ED85181048EABDF9155  : public Exception_t
{
public:
	// Naninovel.Antlr.Runtime.IIntStream Naninovel.Antlr.Runtime.RecognitionException::_input
	RuntimeObject* ____input_17;
	// System.Int32 Naninovel.Antlr.Runtime.RecognitionException::_index
	int32_t ____index_18;
	// Naninovel.Antlr.Runtime.IToken Naninovel.Antlr.Runtime.RecognitionException::_token
	RuntimeObject* ____token_19;
	// System.Object Naninovel.Antlr.Runtime.RecognitionException::_node
	RuntimeObject * ____node_20;
	// System.Int32 Naninovel.Antlr.Runtime.RecognitionException::_c
	int32_t ____c_21;
	// System.Int32 Naninovel.Antlr.Runtime.RecognitionException::_line
	int32_t ____line_22;
	// System.Int32 Naninovel.Antlr.Runtime.RecognitionException::_charPositionInLine
	int32_t ____charPositionInLine_23;
	// System.Boolean Naninovel.Antlr.Runtime.RecognitionException::_approximateLineInfo
	bool ____approximateLineInfo_24;

public:
	inline static int32_t get_offset_of__input_17() { return static_cast<int32_t>(offsetof(RecognitionException_tF5714BA0E5C3032188B67ED85181048EABDF9155, ____input_17)); }
	inline RuntimeObject* get__input_17() const { return ____input_17; }
	inline RuntimeObject** get_address_of__input_17() { return &____input_17; }
	inline void set__input_17(RuntimeObject* value)
	{
		____input_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____input_17), (void*)value);
	}

	inline static int32_t get_offset_of__index_18() { return static_cast<int32_t>(offsetof(RecognitionException_tF5714BA0E5C3032188B67ED85181048EABDF9155, ____index_18)); }
	inline int32_t get__index_18() const { return ____index_18; }
	inline int32_t* get_address_of__index_18() { return &____index_18; }
	inline void set__index_18(int32_t value)
	{
		____index_18 = value;
	}

	inline static int32_t get_offset_of__token_19() { return static_cast<int32_t>(offsetof(RecognitionException_tF5714BA0E5C3032188B67ED85181048EABDF9155, ____token_19)); }
	inline RuntimeObject* get__token_19() const { return ____token_19; }
	inline RuntimeObject** get_address_of__token_19() { return &____token_19; }
	inline void set__token_19(RuntimeObject* value)
	{
		____token_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____token_19), (void*)value);
	}

	inline static int32_t get_offset_of__node_20() { return static_cast<int32_t>(offsetof(RecognitionException_tF5714BA0E5C3032188B67ED85181048EABDF9155, ____node_20)); }
	inline RuntimeObject * get__node_20() const { return ____node_20; }
	inline RuntimeObject ** get_address_of__node_20() { return &____node_20; }
	inline void set__node_20(RuntimeObject * value)
	{
		____node_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____node_20), (void*)value);
	}

	inline static int32_t get_offset_of__c_21() { return static_cast<int32_t>(offsetof(RecognitionException_tF5714BA0E5C3032188B67ED85181048EABDF9155, ____c_21)); }
	inline int32_t get__c_21() const { return ____c_21; }
	inline int32_t* get_address_of__c_21() { return &____c_21; }
	inline void set__c_21(int32_t value)
	{
		____c_21 = value;
	}

	inline static int32_t get_offset_of__line_22() { return static_cast<int32_t>(offsetof(RecognitionException_tF5714BA0E5C3032188B67ED85181048EABDF9155, ____line_22)); }
	inline int32_t get__line_22() const { return ____line_22; }
	inline int32_t* get_address_of__line_22() { return &____line_22; }
	inline void set__line_22(int32_t value)
	{
		____line_22 = value;
	}

	inline static int32_t get_offset_of__charPositionInLine_23() { return static_cast<int32_t>(offsetof(RecognitionException_tF5714BA0E5C3032188B67ED85181048EABDF9155, ____charPositionInLine_23)); }
	inline int32_t get__charPositionInLine_23() const { return ____charPositionInLine_23; }
	inline int32_t* get_address_of__charPositionInLine_23() { return &____charPositionInLine_23; }
	inline void set__charPositionInLine_23(int32_t value)
	{
		____charPositionInLine_23 = value;
	}

	inline static int32_t get_offset_of__approximateLineInfo_24() { return static_cast<int32_t>(offsetof(RecognitionException_tF5714BA0E5C3032188B67ED85181048EABDF9155, ____approximateLineInfo_24)); }
	inline bool get__approximateLineInfo_24() const { return ____approximateLineInfo_24; }
	inline bool* get_address_of__approximateLineInfo_24() { return &____approximateLineInfo_24; }
	inline void set__approximateLineInfo_24(bool value)
	{
		____approximateLineInfo_24 = value;
	}
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


// Naninovel.NCalc.Domain.UnaryExpression
struct  UnaryExpression_t726EAD7F63036A3F19780AC9E55AD4715F567A9C  : public LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968
{
public:
	// Naninovel.NCalc.Domain.LogicalExpression Naninovel.NCalc.Domain.UnaryExpression::<Expression>k__BackingField
	LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * ___U3CExpressionU3Ek__BackingField_0;
	// Naninovel.NCalc.Domain.UnaryExpressionType Naninovel.NCalc.Domain.UnaryExpression::<Type>k__BackingField
	int32_t ___U3CTypeU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CExpressionU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(UnaryExpression_t726EAD7F63036A3F19780AC9E55AD4715F567A9C, ___U3CExpressionU3Ek__BackingField_0)); }
	inline LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * get_U3CExpressionU3Ek__BackingField_0() const { return ___U3CExpressionU3Ek__BackingField_0; }
	inline LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 ** get_address_of_U3CExpressionU3Ek__BackingField_0() { return &___U3CExpressionU3Ek__BackingField_0; }
	inline void set_U3CExpressionU3Ek__BackingField_0(LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * value)
	{
		___U3CExpressionU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CExpressionU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(UnaryExpression_t726EAD7F63036A3F19780AC9E55AD4715F567A9C, ___U3CTypeU3Ek__BackingField_1)); }
	inline int32_t get_U3CTypeU3Ek__BackingField_1() const { return ___U3CTypeU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CTypeU3Ek__BackingField_1() { return &___U3CTypeU3Ek__BackingField_1; }
	inline void set_U3CTypeU3Ek__BackingField_1(int32_t value)
	{
		___U3CTypeU3Ek__BackingField_1 = value;
	}
};


// Naninovel.NCalc.Domain.ValueExpression
struct  ValueExpression_t1E49B717CBB41CB95F6554127CCC773DA6C152C9  : public LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968
{
public:
	// System.Object Naninovel.NCalc.Domain.ValueExpression::<Value>k__BackingField
	RuntimeObject * ___U3CValueU3Ek__BackingField_0;
	// Naninovel.NCalc.Domain.ValueType Naninovel.NCalc.Domain.ValueExpression::<Type>k__BackingField
	int32_t ___U3CTypeU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CValueU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ValueExpression_t1E49B717CBB41CB95F6554127CCC773DA6C152C9, ___U3CValueU3Ek__BackingField_0)); }
	inline RuntimeObject * get_U3CValueU3Ek__BackingField_0() const { return ___U3CValueU3Ek__BackingField_0; }
	inline RuntimeObject ** get_address_of_U3CValueU3Ek__BackingField_0() { return &___U3CValueU3Ek__BackingField_0; }
	inline void set_U3CValueU3Ek__BackingField_0(RuntimeObject * value)
	{
		___U3CValueU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CValueU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ValueExpression_t1E49B717CBB41CB95F6554127CCC773DA6C152C9, ___U3CTypeU3Ek__BackingField_1)); }
	inline int32_t get_U3CTypeU3Ek__BackingField_1() const { return ___U3CTypeU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CTypeU3Ek__BackingField_1() { return &___U3CTypeU3Ek__BackingField_1; }
	inline void set_U3CTypeU3Ek__BackingField_1(int32_t value)
	{
		___U3CTypeU3Ek__BackingField_1 = value;
	}
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


// Naninovel.Antlr.Runtime.MismatchedTokenException
struct  MismatchedTokenException_tEAA1C7458209F7A0220F2083AC2918F63AE306DE  : public RecognitionException_tF5714BA0E5C3032188B67ED85181048EABDF9155
{
public:
	// System.Int32 Naninovel.Antlr.Runtime.MismatchedTokenException::_expecting
	int32_t ____expecting_25;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.String> Naninovel.Antlr.Runtime.MismatchedTokenException::_tokenNames
	ReadOnlyCollection_1_t4348A40742B97AA544A2F3845FA1C60512811C28 * ____tokenNames_26;

public:
	inline static int32_t get_offset_of__expecting_25() { return static_cast<int32_t>(offsetof(MismatchedTokenException_tEAA1C7458209F7A0220F2083AC2918F63AE306DE, ____expecting_25)); }
	inline int32_t get__expecting_25() const { return ____expecting_25; }
	inline int32_t* get_address_of__expecting_25() { return &____expecting_25; }
	inline void set__expecting_25(int32_t value)
	{
		____expecting_25 = value;
	}

	inline static int32_t get_offset_of__tokenNames_26() { return static_cast<int32_t>(offsetof(MismatchedTokenException_tEAA1C7458209F7A0220F2083AC2918F63AE306DE, ____tokenNames_26)); }
	inline ReadOnlyCollection_1_t4348A40742B97AA544A2F3845FA1C60512811C28 * get__tokenNames_26() const { return ____tokenNames_26; }
	inline ReadOnlyCollection_1_t4348A40742B97AA544A2F3845FA1C60512811C28 ** get_address_of__tokenNames_26() { return &____tokenNames_26; }
	inline void set__tokenNames_26(ReadOnlyCollection_1_t4348A40742B97AA544A2F3845FA1C60512811C28 * value)
	{
		____tokenNames_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tokenNames_26), (void*)value);
	}
};


// Naninovel.Antlr.Runtime.NoViableAltException
struct  NoViableAltException_tD839861F743DD0F39FEF05038736B49327E123D6  : public RecognitionException_tF5714BA0E5C3032188B67ED85181048EABDF9155
{
public:
	// System.String Naninovel.Antlr.Runtime.NoViableAltException::_grammarDecisionDescription
	String_t* ____grammarDecisionDescription_25;
	// System.Int32 Naninovel.Antlr.Runtime.NoViableAltException::_decisionNumber
	int32_t ____decisionNumber_26;
	// System.Int32 Naninovel.Antlr.Runtime.NoViableAltException::_stateNumber
	int32_t ____stateNumber_27;

public:
	inline static int32_t get_offset_of__grammarDecisionDescription_25() { return static_cast<int32_t>(offsetof(NoViableAltException_tD839861F743DD0F39FEF05038736B49327E123D6, ____grammarDecisionDescription_25)); }
	inline String_t* get__grammarDecisionDescription_25() const { return ____grammarDecisionDescription_25; }
	inline String_t** get_address_of__grammarDecisionDescription_25() { return &____grammarDecisionDescription_25; }
	inline void set__grammarDecisionDescription_25(String_t* value)
	{
		____grammarDecisionDescription_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____grammarDecisionDescription_25), (void*)value);
	}

	inline static int32_t get_offset_of__decisionNumber_26() { return static_cast<int32_t>(offsetof(NoViableAltException_tD839861F743DD0F39FEF05038736B49327E123D6, ____decisionNumber_26)); }
	inline int32_t get__decisionNumber_26() const { return ____decisionNumber_26; }
	inline int32_t* get_address_of__decisionNumber_26() { return &____decisionNumber_26; }
	inline void set__decisionNumber_26(int32_t value)
	{
		____decisionNumber_26 = value;
	}

	inline static int32_t get_offset_of__stateNumber_27() { return static_cast<int32_t>(offsetof(NoViableAltException_tD839861F743DD0F39FEF05038736B49327E123D6, ____stateNumber_27)); }
	inline int32_t get__stateNumber_27() const { return ____stateNumber_27; }
	inline int32_t* get_address_of__stateNumber_27() { return &____stateNumber_27; }
	inline void set__stateNumber_27(int32_t value)
	{
		____stateNumber_27 = value;
	}
};


// Naninovel.Antlr.Runtime.SpecialStateTransitionHandler
struct  SpecialStateTransitionHandler_t27F1B147487F7736825C69BA1576DEFD7AACA37C  : public MulticastDelegate_t
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


// Naninovel.Antlr.Runtime.UnwantedTokenException
struct  UnwantedTokenException_t479DCB651C50887711B47AEB2A234B1660CC95A3  : public MismatchedTokenException_tEAA1C7458209F7A0220F2083AC2918F63AE306DE
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
// Naninovel.Antlr.Runtime.BitSet[]
struct BitSetU5BU5D_t5ECDC2A01D26B742E9ECE04E0909786124426251  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * m_Items[1];

public:
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Naninovel.NCalc.Domain.LogicalExpression[]
struct LogicalExpressionU5BU5D_t35167AD411F36531A33B384D413583735F19360A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * m_Items[1];

public:
	inline LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
// System.Int16[]
struct Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int16_t m_Items[1];

public:
	inline int16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int16_t value)
	{
		m_Items[index] = value;
	}
};
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
// System.Int16[][]
struct Int16U5BU5DU5BU5D_t543ACA7B5432CCA0395B0944D21B4E37B8825D77  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* m_Items[1];

public:
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.UInt64[]
struct UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint64_t m_Items[1];

public:
	inline uint64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint64_t value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32Enum>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m31F5942F77703930671964FEC3C0799CF6F790D1_gshared (Dictionary_2_t5B35D5550B4D9CDDB7D248BEEE75285BC3023229 * __this, RuntimeObject * ___key0, int32_t* ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32Enum>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mDD94B092289B595591F7BFA6575667F3FCD66B00_gshared (Dictionary_2_t5B35D5550B4D9CDDB7D248BEEE75285BC3023229 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32Enum>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mABEB0118462E5CA83603DB684E8E73682AC01EE6_gshared (Dictionary_2_t5B35D5550B4D9CDDB7D248BEEE75285BC3023229 * __this, RuntimeObject * ___key0, int32_t ___value1, const RuntimeMethod* method);
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m2D719EE02B7FE98B5D6E9515334C594836D2C0C7_gshared (ReadOnlyCollection_1_t921D1901AD35062BE31FAEB0798A4B814F33A3C3 * __this, const RuntimeMethod* method);
// !0 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ReadOnlyCollection_1_get_Item_m92C5369651F9216CBCAD03983F2F34C5C3BF0744_gshared (ReadOnlyCollection_1_t921D1901AD35062BE31FAEB0798A4B814F33A3C3 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void Naninovel.Antlr.Runtime.ParserRuleReturnScope`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParserRuleReturnScope_1__ctor_m31E189DFA20154801E7D9E0B7616A99CBC4A242C_gshared (ParserRuleReturnScope_1_t17A75288BDA02660B35616CBC1C6D8ADF76F8FCF * __this, const RuntimeMethod* method);

// System.Void System.Collections.Generic.List`1<Naninovel.Antlr3.Runtime.PCL.Output.IOutputStream>::.ctor()
inline void List_1__ctor_m9E8DE69DF4BB926EDC3584B3A5444561F6900DD0 (List_1_t605F16FFF67E99839238F2F556889CCE0735EB2C * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t605F16FFF67E99839238F2F556889CCE0735EB2C *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void Naninovel.Antlr3.Runtime.PCL.Output.OutputStreamHost::WriteLine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutputStreamHost_WriteLine_m3CA13F805100317322B330914E2908E693177263 (String_t* ___text0, const RuntimeMethod* method);
// System.Void Naninovel.Antlr3.Runtime.PCL.Output.OutputStreamHost::InitializeIfNeeded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutputStreamHost_InitializeIfNeeded_m1C951AD9DC5F91884D6E9EB5DD184D9BDE8C9F88 (const RuntimeMethod* method);
// System.Void Naninovel.Antlr3.Runtime.PCL.Output.OutputStreamHost::WriteLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutputStreamHost_WriteLine_mBE3EAB7612BDBE7DDC8A83E237ED710E3089CC41 (const RuntimeMethod* method);
// System.Void Naninovel.Antlr3.Runtime.PCL.Output.ErrorOutputStream::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorOutputStream__ctor_m5B70981A1B760730798E1F5BAE79EFDD6F7BD44D (ErrorOutputStream_t1B4C5CA9639AC25142EF77F0FDD631EDF8D43378 * __this, const RuntimeMethod* method);
// System.Void Naninovel.NCalc.ParameterArgs::set_HasResult(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ParameterArgs_set_HasResult_m5DB7A912096B2A5AC71C447E862C146798F6B0F5_inline (ParameterArgs_t7201DE499D85C7B63EBC096614680084E8464C98 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.EventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventArgs__ctor_m5ECB9A8ED0A9E2DBB1ED999BAC1CB44F4354E571 (EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * __this, const RuntimeMethod* method);
// System.Void Naninovel.Antlr.Runtime.BaseRecognizer::.ctor(Naninovel.Antlr.Runtime.RecognizerSharedState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseRecognizer__ctor_mDFD4BD2673BBD8892F6312253C80E0462F9D8F45 (BaseRecognizer_tB62A3AE694CEC553C74F519EE830E68C521C3DEC * __this, RecognizerSharedState_t80A4DCAF6DF4AF2F486E4958547F7FE3D4EC53F9 * ___state0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void Naninovel.Antlr.Runtime.CommonToken::.ctor(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonToken__ctor_m0B7C4F844A4731D0DCDEC1622AFC18DD762B65B6 (CommonToken_tAD014B56C894BF06C90025CC6BE550B60C31B668 * __this, int32_t ___type0, String_t* ___text1, const RuntimeMethod* method);
// System.Void Naninovel.Antlr.Runtime.CommonToken::set_Line(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CommonToken_set_Line_m9F2A1FFE79F0A721CC4F778E9EF3C8A91F6056A7_inline (CommonToken_tAD014B56C894BF06C90025CC6BE550B60C31B668 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Naninovel.Antlr.Runtime.CommonToken::set_CharPositionInLine(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CommonToken_set_CharPositionInLine_m2C55E25DCF9323A0D39529DC4A13ED444BC2B20F_inline (CommonToken_tAD014B56C894BF06C90025CC6BE550B60C31B668 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Naninovel.Antlr.Runtime.CommonToken::set_Channel(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CommonToken_set_Channel_m0C5E95710A99A3BCB266F41BBCC0C41F0D9D8577_inline (CommonToken_tAD014B56C894BF06C90025CC6BE550B60C31B668 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Naninovel.Antlr.Runtime.RecognitionException::.ctor(System.String,Naninovel.Antlr.Runtime.IIntStream,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecognitionException__ctor_m7A15922B6E515C7D19D896FB0A162498F86BF8A0 (RecognitionException_tF5714BA0E5C3032188B67ED85181048EABDF9155 * __this, String_t* ___message0, RuntimeObject* ___input1, Exception_t * ___innerException2, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_mB842BA6E644CDB9DB058F5628BB90DF5EF22C080 (Exception_t * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.Exception::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m0E9BEC861F6DBED197960E5BA23149543B1D7F5B (Exception_t * __this, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Int32 System.Runtime.Serialization.SerializationInfo::GetInt32(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SerializationInfo_GetInt32_mB22BBD01CBC189B7A76465CBFF7224F619395D30 (SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Boolean System.Runtime.Serialization.SerializationInfo::GetBoolean(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SerializationInfo_GetBoolean_m705ADACFB52D6385DDB6B2525C1979ECBE6D5849 (SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * __this, String_t* ___name0, const RuntimeMethod* method);
// Naninovel.Antlr.Runtime.IToken Naninovel.Antlr.Runtime.Tree.CommonTree::get_Token()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CommonTree_get_Token_mBD1B69B6BA06B672FF50C0DB3FDB0A73808E5E07_inline (CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Naninovel.NCalc.Domain.LogicalExpressionVisitor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogicalExpressionVisitor__ctor_mDF2D9BE3A8C60A88158371C24850C3CDE3E6BE89 (LogicalExpressionVisitor_t4FEC2A3FF1F4D8E4207828C80EBEC796EC6AED13 * __this, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Void Naninovel.NCalc.Domain.SerializationVisitor::set_Result(System.Text.StringBuilder)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SerializationVisitor_set_Result_mDE081A8F53AC297426FC7ADBF00F2FC5B98D95A5_inline (SerializationVisitor_t7FA9CCD67A83DF85E052BC13D42D6CF05B3B65B3 * __this, StringBuilder_t * ___value0, const RuntimeMethod* method);
// System.Void System.Globalization.NumberFormatInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NumberFormatInfo__ctor_m6170D636849222DB99BEDFB33C7A5E4032D8A097 (NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * __this, const RuntimeMethod* method);
// System.Void System.Globalization.NumberFormatInfo::set_NumberDecimalSeparator(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NumberFormatInfo_set_NumberDecimalSeparator_m061730CB113D54B6DFD16532CFA295901905B44A (NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// Naninovel.NCalc.Domain.LogicalExpression Naninovel.NCalc.Domain.TernaryExpression::get_LeftExpression()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * TernaryExpression_get_LeftExpression_m77B0DFDE3F7D09EC6CB9530F1CD05D1FF030D533_inline (TernaryExpression_tB518CB82C2E5F08ACA68A8062B3076B8614252A8 * __this, const RuntimeMethod* method);
// System.Void Naninovel.NCalc.Domain.SerializationVisitor::EncapsulateNoValue(Naninovel.NCalc.Domain.LogicalExpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationVisitor_EncapsulateNoValue_m2E13D2652CE97F06D8555392BCE9BF42878A546C (SerializationVisitor_t7FA9CCD67A83DF85E052BC13D42D6CF05B3B65B3 * __this, LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * ___expression0, const RuntimeMethod* method);
// System.Text.StringBuilder Naninovel.NCalc.Domain.SerializationVisitor::get_Result()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringBuilder_t * SerializationVisitor_get_Result_m86A4A31AF1084FBA20548920573755CE396F8A31_inline (SerializationVisitor_t7FA9CCD67A83DF85E052BC13D42D6CF05B3B65B3 * __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1 (StringBuilder_t * __this, String_t* ___value0, const RuntimeMethod* method);
// Naninovel.NCalc.Domain.LogicalExpression Naninovel.NCalc.Domain.TernaryExpression::get_MiddleExpression()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * TernaryExpression_get_MiddleExpression_mD9A14BB9DCD0EF78870AAD92FC5CABE1335B55C3_inline (TernaryExpression_tB518CB82C2E5F08ACA68A8062B3076B8614252A8 * __this, const RuntimeMethod* method);
// Naninovel.NCalc.Domain.LogicalExpression Naninovel.NCalc.Domain.TernaryExpression::get_RightExpression()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * TernaryExpression_get_RightExpression_m106754242C74124B03A7E967F105DCD4C5FE3A88_inline (TernaryExpression_tB518CB82C2E5F08ACA68A8062B3076B8614252A8 * __this, const RuntimeMethod* method);
// Naninovel.NCalc.Domain.LogicalExpression Naninovel.NCalc.Domain.BinaryExpression::get_LeftExpression()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * BinaryExpression_get_LeftExpression_m24757E3C644A04E5A533343DB0AB5A477F7B467D_inline (BinaryExpression_t6B952CF817520F64ACE95BE470B2F349856B92D9 * __this, const RuntimeMethod* method);
// Naninovel.NCalc.Domain.BinaryExpressionType Naninovel.NCalc.Domain.BinaryExpression::get_Type()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BinaryExpression_get_Type_m46E6CDC98E8AAEC35C3FEAE26A8FEB6A59CC700D_inline (BinaryExpression_t6B952CF817520F64ACE95BE470B2F349856B92D9 * __this, const RuntimeMethod* method);
// Naninovel.NCalc.Domain.LogicalExpression Naninovel.NCalc.Domain.BinaryExpression::get_RightExpression()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * BinaryExpression_get_RightExpression_mA1958FB72F75C1A8B427F70091648ABD3232E2A7_inline (BinaryExpression_t6B952CF817520F64ACE95BE470B2F349856B92D9 * __this, const RuntimeMethod* method);
// Naninovel.NCalc.Domain.UnaryExpressionType Naninovel.NCalc.Domain.UnaryExpression::get_Type()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnaryExpression_get_Type_m8A96E64024BB216BF33300527066AC7FE825366D_inline (UnaryExpression_t726EAD7F63036A3F19780AC9E55AD4715F567A9C * __this, const RuntimeMethod* method);
// Naninovel.NCalc.Domain.LogicalExpression Naninovel.NCalc.Domain.UnaryExpression::get_Expression()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * UnaryExpression_get_Expression_m6EF74F22F871FB6C6A126F8E9A616A99E95FAF1F_inline (UnaryExpression_t726EAD7F63036A3F19780AC9E55AD4715F567A9C * __this, const RuntimeMethod* method);
// Naninovel.NCalc.Domain.ValueType Naninovel.NCalc.Domain.ValueExpression::get_Type()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ValueExpression_get_Type_m13B487027A48793E899BB46C05F1F9C3DB4126A7_inline (ValueExpression_t1E49B717CBB41CB95F6554127CCC773DA6C152C9 * __this, const RuntimeMethod* method);
// System.Object Naninovel.NCalc.Domain.ValueExpression::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * ValueExpression_get_Value_mA695F1A0450AB1E047716E2914A9C1334C867572_inline (ValueExpression_t1E49B717CBB41CB95F6554127CCC773DA6C152C9 * __this, const RuntimeMethod* method);
// System.Decimal System.Decimal::Parse(System.String,System.Globalization.NumberStyles)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  Decimal_Parse_m0B75E59E2BE69EF3765538B398A7735052B27484 (String_t* ___s0, int32_t ___style1, const RuntimeMethod* method);
// System.String System.Decimal::ToString(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Decimal_ToString_mCD1BF444FBBA99D53FBADBB834CBFBB857598C24 (Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// Naninovel.NCalc.Domain.Identifier Naninovel.NCalc.Domain.Function::get_Identifier()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Identifier_t64A304AE1762074E38912767107A5B7DAC0D54DD * Function_get_Identifier_mC18FB28C369FB55EEE9E5C200DB5774666FEB307_inline (Function_tB79B8AC81F9EBA9B68A61E8A501D74173D90EA72 * __this, const RuntimeMethod* method);
// System.String Naninovel.NCalc.Domain.Identifier::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Identifier_get_Name_mFFF912B4C6BC7616A1221B2265AA47B22F85A171_inline (Identifier_t64A304AE1762074E38912767107A5B7DAC0D54DD * __this, const RuntimeMethod* method);
// Naninovel.NCalc.Domain.LogicalExpression[] Naninovel.NCalc.Domain.Function::get_Expressions()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LogicalExpressionU5BU5D_t35167AD411F36531A33B384D413583735F19360A* Function_get_Expressions_m2A235F71737257E7684D74BD40FE24CE3873656B_inline (Function_tB79B8AC81F9EBA9B68A61E8A501D74173D90EA72 * __this, const RuntimeMethod* method);
// System.Int32 System.Text.StringBuilder::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringBuilder_get_Length_m680500263C59ACFD9582BF2AEEED8E92C87FF5C0 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Remove(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Remove_m6ABF9CF3D10160EB52E0768262A9B179F987571E (StringBuilder_t * __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method);
// System.Char System.Text.StringBuilder::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar StringBuilder_get_Chars_m5961A0987EEF0A0F8C335048A33EC4584B53F1E3 (StringBuilder_t * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void Naninovel.NCalc.Domain.LogicalExpression::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogicalExpression__ctor_mD386835649582E50D469E32CB8EF66D815D8A53D (LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * __this, const RuntimeMethod* method);
// System.Void Naninovel.NCalc.Domain.TernaryExpression::set_LeftExpression(Naninovel.NCalc.Domain.LogicalExpression)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TernaryExpression_set_LeftExpression_mD8D7DEE6E2CA7103DF027048D7CCD8736813F5DA_inline (TernaryExpression_tB518CB82C2E5F08ACA68A8062B3076B8614252A8 * __this, LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * ___value0, const RuntimeMethod* method);
// System.Void Naninovel.NCalc.Domain.TernaryExpression::set_MiddleExpression(Naninovel.NCalc.Domain.LogicalExpression)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TernaryExpression_set_MiddleExpression_mED2D2AD67A43EE9F211CBE4644ED551CEFC21727_inline (TernaryExpression_tB518CB82C2E5F08ACA68A8062B3076B8614252A8 * __this, LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * ___value0, const RuntimeMethod* method);
// System.Void Naninovel.NCalc.Domain.TernaryExpression::set_RightExpression(Naninovel.NCalc.Domain.LogicalExpression)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TernaryExpression_set_RightExpression_m5A2857236329C9385F8F133B0F4FA962D97BD6E3_inline (TernaryExpression_tB518CB82C2E5F08ACA68A8062B3076B8614252A8 * __this, LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * ___value0, const RuntimeMethod* method);
// System.Void Naninovel.Antlr.Runtime.CommonToken::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonToken__ctor_mAC3047B7E415643A8FCC52A22E8FFE27EBDA23BC (CommonToken_tAD014B56C894BF06C90025CC6BE550B60C31B668 * __this, int32_t ___type0, const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.TypeCode Naninovel.NCalc.TypeExtensions::ToTypeCode(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TypeExtensions_ToTypeCode_m02D963DF5E91F38666BF9B52B5964814D4880127 (Type_t * ___type0, const RuntimeMethod* method);
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.TypeCode>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_mEB7779B1C76872FE124E0485DC70AC544C78825E (Dictionary_2_tD1E7320AFFDAE6777C97AF253CBDC0E6858A81A5 * __this, Type_t * ___key0, int32_t* ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tD1E7320AFFDAE6777C97AF253CBDC0E6858A81A5 *, Type_t *, int32_t*, const RuntimeMethod*))Dictionary_2_TryGetValue_m31F5942F77703930671964FEC3C0799CF6F790D1_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.TypeCode>::.ctor()
inline void Dictionary_2__ctor_m2463ED61645C6B1B0AD8AB4DB052897E2AE10847 (Dictionary_2_tD1E7320AFFDAE6777C97AF253CBDC0E6858A81A5 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tD1E7320AFFDAE6777C97AF253CBDC0E6858A81A5 *, const RuntimeMethod*))Dictionary_2__ctor_mDD94B092289B595591F7BFA6575667F3FCD66B00_gshared)(__this, method);
}
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.TypeCode>::Add(!0,!1)
inline void Dictionary_2_Add_mC767F10D68C167C03A96F658AD04CAC22B1648AD (Dictionary_2_tD1E7320AFFDAE6777C97AF253CBDC0E6858A81A5 * __this, Type_t * ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tD1E7320AFFDAE6777C97AF253CBDC0E6858A81A5 *, Type_t *, int32_t, const RuntimeMethod*))Dictionary_2_Add_mABEB0118462E5CA83603DB684E8E73682AC01EE6_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Naninovel.NCalc.Domain.UnaryExpression::set_Type(Naninovel.NCalc.Domain.UnaryExpressionType)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnaryExpression_set_Type_mC6D80EC44E842AEA674E3EB92AFC37930DC28C05_inline (UnaryExpression_t726EAD7F63036A3F19780AC9E55AD4715F567A9C * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Naninovel.NCalc.Domain.UnaryExpression::set_Expression(Naninovel.NCalc.Domain.LogicalExpression)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnaryExpression_set_Expression_m3B74F4F793C61AA248458F1D41F974D42C5C3353_inline (UnaryExpression_t726EAD7F63036A3F19780AC9E55AD4715F567A9C * __this, LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * ___value0, const RuntimeMethod* method);
// System.Void Naninovel.Antlr.Runtime.MismatchedTokenException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MismatchedTokenException__ctor_m86C63A8297BD25673D4AB712AE40BEC0D7378C70 (MismatchedTokenException_tEAA1C7458209F7A0220F2083AC2918F63AE306DE * __this, const RuntimeMethod* method);
// System.Void Naninovel.Antlr.Runtime.MismatchedTokenException::.ctor(System.Int32,Naninovel.Antlr.Runtime.IIntStream,System.Collections.Generic.IList`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MismatchedTokenException__ctor_m5526F12F0DE096828BA16DB516C4AA4F7A0E95F4 (MismatchedTokenException_tEAA1C7458209F7A0220F2083AC2918F63AE306DE * __this, int32_t ___expecting0, RuntimeObject* ___input1, RuntimeObject* ___tokenNames2, const RuntimeMethod* method);
// System.Void Naninovel.Antlr.Runtime.MismatchedTokenException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MismatchedTokenException__ctor_mE1C76B324723AD37D13348747CC40D0FB069435E (MismatchedTokenException_tEAA1C7458209F7A0220F2083AC2918F63AE306DE * __this, SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ___info0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, const RuntimeMethod* method);
// Naninovel.Antlr.Runtime.IToken Naninovel.Antlr.Runtime.RecognitionException::get_Token()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* RecognitionException_get_Token_m1452A2EF907C38B39351DBC8D9E02AEDD27F284B_inline (RecognitionException_tF5714BA0E5C3032188B67ED85181048EABDF9155 * __this, const RuntimeMethod* method);
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.String> Naninovel.Antlr.Runtime.MismatchedTokenException::get_TokenNames()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t4348A40742B97AA544A2F3845FA1C60512811C28 * MismatchedTokenException_get_TokenNames_m1347F772B3E6E3483FD20A84CE1DD17322C2EF9F_inline (MismatchedTokenException_tEAA1C7458209F7A0220F2083AC2918F63AE306DE * __this, const RuntimeMethod* method);
// System.Int32 Naninovel.Antlr.Runtime.MismatchedTokenException::get_Expecting()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MismatchedTokenException_get_Expecting_m3DE6D6FCC74ECF15F8D0D99DBDE51820C6A8AC22_inline (MismatchedTokenException_tEAA1C7458209F7A0220F2083AC2918F63AE306DE * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::get_Count()
inline int32_t ReadOnlyCollection_1_get_Count_m0305A3E9E3584B020FC61CD5605898C600D69AE7 (ReadOnlyCollection_1_t4348A40742B97AA544A2F3845FA1C60512811C28 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyCollection_1_t4348A40742B97AA544A2F3845FA1C60512811C28 *, const RuntimeMethod*))ReadOnlyCollection_1_get_Count_m2D719EE02B7FE98B5D6E9515334C594836D2C0C7_gshared)(__this, method);
}
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// !0 System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::get_Item(System.Int32)
inline String_t* ReadOnlyCollection_1_get_Item_m2CA4EA69200FE3AD332DA97E648783A810E9CA9C (ReadOnlyCollection_1_t4348A40742B97AA544A2F3845FA1C60512811C28 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ReadOnlyCollection_1_t4348A40742B97AA544A2F3845FA1C60512811C28 *, int32_t, const RuntimeMethod*))ReadOnlyCollection_1_get_Item_m92C5369651F9216CBCAD03983F2F34C5C3BF0744_gshared)(__this, ___index0, method);
}
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// System.TypeCode Naninovel.NCalc.TypeExtensions::GetTypeCode(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TypeExtensions_GetTypeCode_mB663BC14FB0E7AA37949494EB4C9002997A1F49A (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void Naninovel.NCalc.Domain.ValueExpression::set_Type(Naninovel.NCalc.Domain.ValueType)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueExpression_set_Type_m9980A651812880091FDDE4827EB65C9E8213E132_inline (ValueExpression_t1E49B717CBB41CB95F6554127CCC773DA6C152C9 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Naninovel.NCalc.EvaluationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EvaluationException__ctor_mA54E1043C47920EDE155DC555EBDC4AC1571AF73 (EvaluationException_t4153896D46C5CE3F846F38E028958533206CCEC4 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void Naninovel.NCalc.Domain.ValueExpression::set_Value(System.Object)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueExpression_set_Value_m357ED6C7DB3C7B63CB86A6442511DCD003B1F88A_inline (ValueExpression_t1E49B717CBB41CB95F6554127CCC773DA6C152C9 * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Object Naninovel.NCalc.Domain.EvaluationVisitor::get_Result()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * EvaluationVisitor_get_Result_mAD62E905A017049161B428FDB10CC8B34A1F3230_inline (EvaluationVisitor_t3A83237C8491A3205B23CE40CE4ECAF2EFB0BAB1 * __this, const RuntimeMethod* method);
// System.Int16[] Naninovel.Antlr.Runtime.DFA::UnpackEncodedString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* DFA_UnpackEncodedString_mCFCAE2FA1EDD22EFD0468E7B3523AAAE2151D3FA (String_t* ___encodedString0, const RuntimeMethod* method);
// System.Char[] Naninovel.Antlr.Runtime.DFA::UnpackEncodedStringToUnsignedChars(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* DFA_UnpackEncodedStringToUnsignedChars_m5746E7DC654C1583256D0439D6AFD09361C059AF (String_t* ___encodedString0, const RuntimeMethod* method);
// System.Void Naninovel.Antlr.Runtime.DFA::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DFA__ctor_m8F6750FCA2AD76A942C9047CE217DCB1A231F4DC (DFA_t96370EB42325F06C749FB6668FF6025F2D7BFDB3 * __this, const RuntimeMethod* method);
// System.Void Naninovel.Antlr.Runtime.BitSet::.ctor(System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitSet__ctor_mCE89D120F858E945437A2174669597480EDB2BC4 (BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * __this, UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* ___bits0, const RuntimeMethod* method);
// System.Void Naninovel.Antlr.Runtime.ParserRuleReturnScope`1<Naninovel.Antlr.Runtime.IToken>::.ctor()
inline void ParserRuleReturnScope_1__ctor_m7C32AB73674119386F491757CFE57CC07350C5B8 (ParserRuleReturnScope_1_tC570619B03C97B2011CC4A91EBEED0B218D5571C * __this, const RuntimeMethod* method)
{
	((  void (*) (ParserRuleReturnScope_1_tC570619B03C97B2011CC4A91EBEED0B218D5571C *, const RuntimeMethod*))ParserRuleReturnScope_1__ctor_m31E189DFA20154801E7D9E0B7616A99CBC4A242C_gshared)(__this, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Naninovel.Antlr3.Runtime.PCL.Output.OutputStreamHost::InitializeIfNeeded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutputStreamHost_InitializeIfNeeded_m1C951AD9DC5F91884D6E9EB5DD184D9BDE8C9F88 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m9E8DE69DF4BB926EDC3584B3A5444561F6900DD0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t605F16FFF67E99839238F2F556889CCE0735EB2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OutputStreamHost_t773C1346869A07F4E2BEBC5B09743A165B75C534_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ((OutputStreamHost_t773C1346869A07F4E2BEBC5B09743A165B75C534_StaticFields*)il2cpp_codegen_static_fields_for(OutputStreamHost_t773C1346869A07F4E2BEBC5B09743A165B75C534_il2cpp_TypeInfo_var))->get__output_streams_1();
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		List_1_t605F16FFF67E99839238F2F556889CCE0735EB2C * L_1 = (List_1_t605F16FFF67E99839238F2F556889CCE0735EB2C *)il2cpp_codegen_object_new(List_1_t605F16FFF67E99839238F2F556889CCE0735EB2C_il2cpp_TypeInfo_var);
		List_1__ctor_m9E8DE69DF4BB926EDC3584B3A5444561F6900DD0(L_1, /*hidden argument*/List_1__ctor_m9E8DE69DF4BB926EDC3584B3A5444561F6900DD0_RuntimeMethod_var);
		((OutputStreamHost_t773C1346869A07F4E2BEBC5B09743A165B75C534_StaticFields*)il2cpp_codegen_static_fields_for(OutputStreamHost_t773C1346869A07F4E2BEBC5B09743A165B75C534_il2cpp_TypeInfo_var))->set__output_streams_1(L_1);
	}

IL_0011:
	{
		return;
	}
}
// System.Void Naninovel.Antlr3.Runtime.PCL.Output.OutputStreamHost::WriteLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutputStreamHost_WriteLine_mBE3EAB7612BDBE7DDC8A83E237ED710E3089CC41 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		OutputStreamHost_WriteLine_m3CA13F805100317322B330914E2908E693177263(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Naninovel.Antlr3.Runtime.PCL.Output.OutputStreamHost::WriteLine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutputStreamHost_WriteLine_m3CA13F805100317322B330914E2908E693177263 (String_t* ___text0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t187C770CC0DC3EDDA7A93534D0A208A601892715_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t7AC5FBF3B72FECE18720E2B360DE87A3FDF3D1F7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOutputStream_t37DB8D28CE934DEFD2835BC6F98EC42C50EB5FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OutputStreamHost_t773C1346869A07F4E2BEBC5B09743A165B75C534_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		OutputStreamHost_InitializeIfNeeded_m1C951AD9DC5F91884D6E9EB5DD184D9BDE8C9F88(/*hidden argument*/NULL);
		double L_0 = ((OutputStreamHost_t773C1346869A07F4E2BEBC5B09743A165B75C534_StaticFields*)il2cpp_codegen_static_fields_for(OutputStreamHost_t773C1346869A07F4E2BEBC5B09743A165B75C534_il2cpp_TypeInfo_var))->get__previous_progress_0();
		if ((!(((double)L_0) > ((double)(0.0)))))
		{
			goto IL_0028;
		}
	}
	{
		((OutputStreamHost_t773C1346869A07F4E2BEBC5B09743A165B75C534_StaticFields*)il2cpp_codegen_static_fields_for(OutputStreamHost_t773C1346869A07F4E2BEBC5B09743A165B75C534_il2cpp_TypeInfo_var))->set__previous_progress_0((0.0));
		OutputStreamHost_WriteLine_mBE3EAB7612BDBE7DDC8A83E237ED710E3089CC41(/*hidden argument*/NULL);
	}

IL_0028:
	{
		RuntimeObject* L_1 = ((OutputStreamHost_t773C1346869A07F4E2BEBC5B09743A165B75C534_StaticFields*)il2cpp_codegen_static_fields_for(OutputStreamHost_t773C1346869A07F4E2BEBC5B09743A165B75C534_il2cpp_TypeInfo_var))->get__output_streams_1();
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Naninovel.Antlr3.Runtime.PCL.Output.IOutputStream>::GetEnumerator() */, IEnumerable_1_t187C770CC0DC3EDDA7A93534D0A208A601892715_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
	}

IL_0033:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0041;
		}

IL_0035:
		{
			RuntimeObject* L_3 = V_0;
			NullCheck(L_3);
			RuntimeObject* L_4;
			L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Naninovel.Antlr3.Runtime.PCL.Output.IOutputStream>::get_Current() */, IEnumerator_1_t7AC5FBF3B72FECE18720E2B360DE87A3FDF3D1F7_il2cpp_TypeInfo_var, L_3);
			String_t* L_5 = ___text0;
			NullCheck(L_4);
			InterfaceActionInvoker1< String_t* >::Invoke(1 /* System.Void Naninovel.Antlr3.Runtime.PCL.Output.IOutputStream::WriteLine(System.String) */, IOutputStream_t37DB8D28CE934DEFD2835BC6F98EC42C50EB5FFD_il2cpp_TypeInfo_var, L_4, L_5);
		}

IL_0041:
		{
			RuntimeObject* L_6 = V_0;
			NullCheck(L_6);
			bool L_7;
			L_7 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_6);
			if (L_7)
			{
				goto IL_0035;
			}
		}

IL_0049:
		{
			IL2CPP_LEAVE(0x55, FINALLY_004b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004b;
	}

FINALLY_004b:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_8 = V_0;
			if (!L_8)
			{
				goto IL_0054;
			}
		}

IL_004e:
		{
			RuntimeObject* L_9 = V_0;
			NullCheck(L_9);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_9);
		}

IL_0054:
		{
			IL2CPP_END_FINALLY(75)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(75)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x55, IL_0055)
	}

IL_0055:
	{
		return;
	}
}
// System.Void Naninovel.Antlr3.Runtime.PCL.Output.OutputStreamHost::Write(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutputStreamHost_Write_m4243CBC071A88066EF2A45E3F71EE14824DEC9D4 (String_t* ___text0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t187C770CC0DC3EDDA7A93534D0A208A601892715_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t7AC5FBF3B72FECE18720E2B360DE87A3FDF3D1F7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOutputStream_t37DB8D28CE934DEFD2835BC6F98EC42C50EB5FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OutputStreamHost_t773C1346869A07F4E2BEBC5B09743A165B75C534_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		OutputStreamHost_InitializeIfNeeded_m1C951AD9DC5F91884D6E9EB5DD184D9BDE8C9F88(/*hidden argument*/NULL);
		double L_0 = ((OutputStreamHost_t773C1346869A07F4E2BEBC5B09743A165B75C534_StaticFields*)il2cpp_codegen_static_fields_for(OutputStreamHost_t773C1346869A07F4E2BEBC5B09743A165B75C534_il2cpp_TypeInfo_var))->get__previous_progress_0();
		if ((!(((double)L_0) > ((double)(0.0)))))
		{
			goto IL_0028;
		}
	}
	{
		((OutputStreamHost_t773C1346869A07F4E2BEBC5B09743A165B75C534_StaticFields*)il2cpp_codegen_static_fields_for(OutputStreamHost_t773C1346869A07F4E2BEBC5B09743A165B75C534_il2cpp_TypeInfo_var))->set__previous_progress_0((0.0));
		OutputStreamHost_WriteLine_mBE3EAB7612BDBE7DDC8A83E237ED710E3089CC41(/*hidden argument*/NULL);
	}

IL_0028:
	{
		RuntimeObject* L_1 = ((OutputStreamHost_t773C1346869A07F4E2BEBC5B09743A165B75C534_StaticFields*)il2cpp_codegen_static_fields_for(OutputStreamHost_t773C1346869A07F4E2BEBC5B09743A165B75C534_il2cpp_TypeInfo_var))->get__output_streams_1();
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Naninovel.Antlr3.Runtime.PCL.Output.IOutputStream>::GetEnumerator() */, IEnumerable_1_t187C770CC0DC3EDDA7A93534D0A208A601892715_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
	}

IL_0033:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0041;
		}

IL_0035:
		{
			RuntimeObject* L_3 = V_0;
			NullCheck(L_3);
			RuntimeObject* L_4;
			L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Naninovel.Antlr3.Runtime.PCL.Output.IOutputStream>::get_Current() */, IEnumerator_1_t7AC5FBF3B72FECE18720E2B360DE87A3FDF3D1F7_il2cpp_TypeInfo_var, L_3);
			String_t* L_5 = ___text0;
			NullCheck(L_4);
			InterfaceActionInvoker1< String_t* >::Invoke(2 /* System.Void Naninovel.Antlr3.Runtime.PCL.Output.IOutputStream::Write(System.String) */, IOutputStream_t37DB8D28CE934DEFD2835BC6F98EC42C50EB5FFD_il2cpp_TypeInfo_var, L_4, L_5);
		}

IL_0041:
		{
			RuntimeObject* L_6 = V_0;
			NullCheck(L_6);
			bool L_7;
			L_7 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_6);
			if (L_7)
			{
				goto IL_0035;
			}
		}

IL_0049:
		{
			IL2CPP_LEAVE(0x55, FINALLY_004b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004b;
	}

FINALLY_004b:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_8 = V_0;
			if (!L_8)
			{
				goto IL_0054;
			}
		}

IL_004e:
		{
			RuntimeObject* L_9 = V_0;
			NullCheck(L_9);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_9);
		}

IL_0054:
		{
			IL2CPP_END_FINALLY(75)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(75)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x55, IL_0055)
	}

IL_0055:
	{
		return;
	}
}
// Naninovel.Antlr3.Runtime.PCL.Output.IOutputStream Naninovel.Antlr3.Runtime.PCL.Output.OutputStreamHost::get_Error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OutputStreamHost_get_Error_m747D2B9CCE13F458DED3414CDA0488CEFD4271DD (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ErrorOutputStream_t1B4C5CA9639AC25142EF77F0FDD631EDF8D43378_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ErrorOutputStream_t1B4C5CA9639AC25142EF77F0FDD631EDF8D43378 * L_0 = (ErrorOutputStream_t1B4C5CA9639AC25142EF77F0FDD631EDF8D43378 *)il2cpp_codegen_object_new(ErrorOutputStream_t1B4C5CA9639AC25142EF77F0FDD631EDF8D43378_il2cpp_TypeInfo_var);
		ErrorOutputStream__ctor_m5B70981A1B760730798E1F5BAE79EFDD6F7BD44D(L_0, /*hidden argument*/NULL);
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
// System.Object Naninovel.NCalc.ParameterArgs::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ParameterArgs_get_Result_mD19C0DAF134E011E95ABA3B7640F6ED0A714662B (ParameterArgs_t7201DE499D85C7B63EBC096614680084E8464C98 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get__result_1();
		return L_0;
	}
}
// System.Void Naninovel.NCalc.ParameterArgs::set_Result(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterArgs_set_Result_mFD6EEC44A4E1CB6A26D04F20C41CA90FBAD6E81D (ParameterArgs_t7201DE499D85C7B63EBC096614680084E8464C98 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set__result_1(L_0);
		ParameterArgs_set_HasResult_m5DB7A912096B2A5AC71C447E862C146798F6B0F5_inline(__this, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Naninovel.NCalc.ParameterArgs::get_HasResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ParameterArgs_get_HasResult_mA2D1D2B396F06A0B07DA0270F8082DEBE042FC36 (ParameterArgs_t7201DE499D85C7B63EBC096614680084E8464C98 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CHasResultU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Naninovel.NCalc.ParameterArgs::set_HasResult(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterArgs_set_HasResult_m5DB7A912096B2A5AC71C447E862C146798F6B0F5 (ParameterArgs_t7201DE499D85C7B63EBC096614680084E8464C98 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CHasResultU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Void Naninovel.NCalc.ParameterArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterArgs__ctor_m7BFF8D7EE678FC9464F85794EDF71A9D9FFD987D (ParameterArgs_t7201DE499D85C7B63EBC096614680084E8464C98 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		EventArgs__ctor_m5ECB9A8ED0A9E2DBB1ED999BAC1CB44F4354E571(__this, /*hidden argument*/NULL);
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
// System.Void Naninovel.Antlr.Runtime.Parser::.ctor(Naninovel.Antlr.Runtime.ITokenStream,Naninovel.Antlr.Runtime.RecognizerSharedState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser__ctor_mCC6C6479CE28B8665F27F23282C6F0990B7049E8 (Parser_tB621C8252810CD452CE08FDEBDAC0D55B7072204 * __this, RuntimeObject* ___input0, RecognizerSharedState_t80A4DCAF6DF4AF2F486E4958547F7FE3D4EC53F9 * ___state1, const RuntimeMethod* method)
{
	{
		RecognizerSharedState_t80A4DCAF6DF4AF2F486E4958547F7FE3D4EC53F9 * L_0 = ___state1;
		BaseRecognizer__ctor_mDFD4BD2673BBD8892F6312253C80E0462F9D8F45(__this, L_0, /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___input0;
		__this->set_input_2(L_1);
		return;
	}
}
// System.Object Naninovel.Antlr.Runtime.Parser::GetCurrentInputSymbol(Naninovel.Antlr.Runtime.IIntStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Parser_GetCurrentInputSymbol_mFEBEE8C3B33FFF0A05A95C75FB33160BF37BABC2 (Parser_tB621C8252810CD452CE08FDEBDAC0D55B7072204 * __this, RuntimeObject* ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITokenStream_tA5739BEF1223F6EF748EE75567BB4EF94418DF46_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___input0;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_0, ITokenStream_tA5739BEF1223F6EF748EE75567BB4EF94418DF46_il2cpp_TypeInfo_var)));
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* Naninovel.Antlr.Runtime.IToken Naninovel.Antlr.Runtime.ITokenStream::LT(System.Int32) */, ITokenStream_tA5739BEF1223F6EF748EE75567BB4EF94418DF46_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_0, ITokenStream_tA5739BEF1223F6EF748EE75567BB4EF94418DF46_il2cpp_TypeInfo_var)), 1);
		return L_1;
	}
}
// System.Object Naninovel.Antlr.Runtime.Parser::GetMissingSymbol(Naninovel.Antlr.Runtime.IIntStream,Naninovel.Antlr.Runtime.RecognitionException,System.Int32,Naninovel.Antlr.Runtime.BitSet)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Parser_GetMissingSymbol_mB488245B52C687694462F7BB599A1C921A885997 (Parser_tB621C8252810CD452CE08FDEBDAC0D55B7072204 * __this, RuntimeObject* ___input0, RecognitionException_tF5714BA0E5C3032188B67ED85181048EABDF9155 * ___e1, int32_t ___expectedTokenType2, BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * ___follow3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonToken_tAD014B56C894BF06C90025CC6BE550B60C31B668_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITokenStream_tA5739BEF1223F6EF748EE75567BB4EF94418DF46_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t0DEEE9C1FBAC843AF39112E1AD14FDA3A5C230A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2606E7B2ED7D70E7FDA31F81CA448C719E23E536);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8425022ABFE37E7261FEB1DF3415478B19AD4623);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	CommonToken_tAD014B56C894BF06C90025CC6BE550B60C31B668 * G_B5_0 = NULL;
	CommonToken_tAD014B56C894BF06C90025CC6BE550B60C31B668 * G_B4_0 = NULL;
	{
		V_0 = (String_t*)NULL;
		int32_t L_0 = ___expectedTokenType2;
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_000e;
		}
	}
	{
		V_0 = _stringLiteral2606E7B2ED7D70E7FDA31F81CA448C719E23E536;
		goto IL_0026;
	}

IL_000e:
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1;
		L_1 = VirtFuncInvoker0< StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* >::Invoke(24 /* System.String[] Naninovel.Antlr.Runtime.BaseRecognizer::get_TokenNames() */, __this);
		int32_t L_2 = ___expectedTokenType2;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		String_t* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		String_t* L_5;
		L_5 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral8425022ABFE37E7261FEB1DF3415478B19AD4623, L_4, _stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5, /*hidden argument*/NULL);
		V_0 = L_5;
	}

IL_0026:
	{
		int32_t L_6 = ___expectedTokenType2;
		String_t* L_7 = V_0;
		CommonToken_tAD014B56C894BF06C90025CC6BE550B60C31B668 * L_8 = (CommonToken_tAD014B56C894BF06C90025CC6BE550B60C31B668 *)il2cpp_codegen_object_new(CommonToken_tAD014B56C894BF06C90025CC6BE550B60C31B668_il2cpp_TypeInfo_var);
		CommonToken__ctor_m0B7C4F844A4731D0DCDEC1622AFC18DD762B65B6(L_8, L_6, L_7, /*hidden argument*/NULL);
		RuntimeObject* L_9 = ___input0;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_9, ITokenStream_tA5739BEF1223F6EF748EE75567BB4EF94418DF46_il2cpp_TypeInfo_var)));
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* Naninovel.Antlr.Runtime.IToken Naninovel.Antlr.Runtime.ITokenStream::LT(System.Int32) */, ITokenStream_tA5739BEF1223F6EF748EE75567BB4EF94418DF46_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_9, ITokenStream_tA5739BEF1223F6EF748EE75567BB4EF94418DF46_il2cpp_TypeInfo_var)), 1);
		V_1 = L_10;
		RuntimeObject* L_11 = V_1;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Naninovel.Antlr.Runtime.IToken::get_Type() */, IToken_t0DEEE9C1FBAC843AF39112E1AD14FDA3A5C230A6_il2cpp_TypeInfo_var, L_11);
		G_B4_0 = L_8;
		if ((!(((uint32_t)L_12) == ((uint32_t)(-1)))))
		{
			G_B5_0 = L_8;
			goto IL_0050;
		}
	}
	{
		RuntimeObject* L_13 = ___input0;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_13, ITokenStream_tA5739BEF1223F6EF748EE75567BB4EF94418DF46_il2cpp_TypeInfo_var)));
		RuntimeObject* L_14;
		L_14 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* Naninovel.Antlr.Runtime.IToken Naninovel.Antlr.Runtime.ITokenStream::LT(System.Int32) */, ITokenStream_tA5739BEF1223F6EF748EE75567BB4EF94418DF46_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_13, ITokenStream_tA5739BEF1223F6EF748EE75567BB4EF94418DF46_il2cpp_TypeInfo_var)), (-1));
		V_1 = L_14;
		G_B5_0 = G_B4_0;
	}

IL_0050:
	{
		CommonToken_tAD014B56C894BF06C90025CC6BE550B60C31B668 * L_15 = G_B5_0;
		RuntimeObject* L_16 = V_1;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = InterfaceFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 Naninovel.Antlr.Runtime.IToken::get_Line() */, IToken_t0DEEE9C1FBAC843AF39112E1AD14FDA3A5C230A6_il2cpp_TypeInfo_var, L_16);
		NullCheck(L_15);
		CommonToken_set_Line_m9F2A1FFE79F0A721CC4F778E9EF3C8A91F6056A7_inline(L_15, L_17, /*hidden argument*/NULL);
		CommonToken_tAD014B56C894BF06C90025CC6BE550B60C31B668 * L_18 = L_15;
		RuntimeObject* L_19 = V_1;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = InterfaceFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 Naninovel.Antlr.Runtime.IToken::get_CharPositionInLine() */, IToken_t0DEEE9C1FBAC843AF39112E1AD14FDA3A5C230A6_il2cpp_TypeInfo_var, L_19);
		NullCheck(L_18);
		CommonToken_set_CharPositionInLine_m2C55E25DCF9323A0D39529DC4A13ED444BC2B20F_inline(L_18, L_20, /*hidden argument*/NULL);
		CommonToken_tAD014B56C894BF06C90025CC6BE550B60C31B668 * L_21 = L_18;
		NullCheck(L_21);
		CommonToken_set_Channel_m0C5E95710A99A3BCB266F41BBCC0C41F0D9D8577_inline(L_21, 0, /*hidden argument*/NULL);
		return L_21;
	}
}
// System.String Naninovel.Antlr.Runtime.Parser::get_SourceName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Parser_get_SourceName_mD4C201B3A27AB1C522CDE6A1CF800278105ECCA8 (Parser_tB621C8252810CD452CE08FDEBDAC0D55B7072204 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IIntStream_t1C261AE5ECB8EEF61877A77546136115827F13DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_input_2();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(6 /* System.String Naninovel.Antlr.Runtime.IIntStream::get_SourceName() */, IIntStream_t1C261AE5ECB8EEF61877A77546136115827F13DE_il2cpp_TypeInfo_var, L_0);
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
// System.Void Naninovel.Antlr.Runtime.RecognitionException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecognitionException__ctor_mF843EE324E85426EBF44421C60FF39DCF1E5AEFC (RecognitionException_tF5714BA0E5C3032188B67ED85181048EABDF9155 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2A1B8219DF3B658B732CB311FAE7299CBD8CB947);
		s_Il2CppMethodInitialized = true;
	}
	{
		RecognitionException__ctor_m7A15922B6E515C7D19D896FB0A162498F86BF8A0(__this, _stringLiteral2A1B8219DF3B658B732CB311FAE7299CBD8CB947, (RuntimeObject*)NULL, (Exception_t *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Naninovel.Antlr.Runtime.RecognitionException::.ctor(Naninovel.Antlr.Runtime.IIntStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecognitionException__ctor_m37C58FE39BAE112DDCEB66E6AAF7941B33A984DD (RecognitionException_tF5714BA0E5C3032188B67ED85181048EABDF9155 * __this, RuntimeObject* ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2A1B8219DF3B658B732CB311FAE7299CBD8CB947);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___input0;
		RecognitionException__ctor_m7A15922B6E515C7D19D896FB0A162498F86BF8A0(__this, _stringLiteral2A1B8219DF3B658B732CB311FAE7299CBD8CB947, L_0, (Exception_t *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Naninovel.Antlr.Runtime.RecognitionException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecognitionException__ctor_m35F0D413E128475DEFE46CC81954F0866E28D005 (RecognitionException_tF5714BA0E5C3032188B67ED85181048EABDF9155 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___message0;
		RecognitionException__ctor_m7A15922B6E515C7D19D896FB0A162498F86BF8A0(__this, L_0, (RuntimeObject*)NULL, (Exception_t *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Naninovel.Antlr.Runtime.RecognitionException::.ctor(System.String,Naninovel.Antlr.Runtime.IIntStream,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecognitionException__ctor_m7A15922B6E515C7D19D896FB0A162498F86BF8A0 (RecognitionException_tF5714BA0E5C3032188B67ED85181048EABDF9155 * __this, String_t* ___message0, RuntimeObject* ___input1, Exception_t * ___innerException2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICharStream_t0A0ECD7A0F22F03C8E93172CD538714A622B653C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IIntStream_t1C261AE5ECB8EEF61877A77546136115827F13DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITokenStream_tA5739BEF1223F6EF748EE75567BB4EF94418DF46_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t0DEEE9C1FBAC843AF39112E1AD14FDA3A5C230A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeNodeStream_t448692D59AFE684FB9BA4E5DAE340B24D52B3FB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = ___innerException2;
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_mB842BA6E644CDB9DB058F5628BB90DF5EF22C080(__this, L_0, L_1, /*hidden argument*/NULL);
		RuntimeObject* L_2 = ___input1;
		__this->set__input_17(L_2);
		RuntimeObject* L_3 = ___input1;
		if (!L_3)
		{
			goto IL_00b4;
		}
	}
	{
		RuntimeObject* L_4 = ___input1;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(3 /* System.Int32 Naninovel.Antlr.Runtime.IIntStream::get_Index() */, IIntStream_t1C261AE5ECB8EEF61877A77546136115827F13DE_il2cpp_TypeInfo_var, L_4);
		__this->set__index_18(L_5);
		RuntimeObject* L_6 = ___input1;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_6, ITokenStream_tA5739BEF1223F6EF748EE75567BB4EF94418DF46_il2cpp_TypeInfo_var)))
		{
			goto IL_005d;
		}
	}
	{
		RuntimeObject* L_7 = ___input1;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_7, ITokenStream_tA5739BEF1223F6EF748EE75567BB4EF94418DF46_il2cpp_TypeInfo_var)));
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* Naninovel.Antlr.Runtime.IToken Naninovel.Antlr.Runtime.ITokenStream::LT(System.Int32) */, ITokenStream_tA5739BEF1223F6EF748EE75567BB4EF94418DF46_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_7, ITokenStream_tA5739BEF1223F6EF748EE75567BB4EF94418DF46_il2cpp_TypeInfo_var)), 1);
		__this->set__token_19(L_8);
		RuntimeObject* L_9 = __this->get__token_19();
		NullCheck(L_9);
		int32_t L_10;
		L_10 = InterfaceFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 Naninovel.Antlr.Runtime.IToken::get_Line() */, IToken_t0DEEE9C1FBAC843AF39112E1AD14FDA3A5C230A6_il2cpp_TypeInfo_var, L_9);
		__this->set__line_22(L_10);
		RuntimeObject* L_11 = __this->get__token_19();
		NullCheck(L_11);
		int32_t L_12;
		L_12 = InterfaceFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 Naninovel.Antlr.Runtime.IToken::get_CharPositionInLine() */, IToken_t0DEEE9C1FBAC843AF39112E1AD14FDA3A5C230A6_il2cpp_TypeInfo_var, L_11);
		__this->set__charPositionInLine_23(L_12);
	}

IL_005d:
	{
		RuntimeObject* L_13 = ___input1;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_13, ITreeNodeStream_t448692D59AFE684FB9BA4E5DAE340B24D52B3FB1_il2cpp_TypeInfo_var));
		RuntimeObject* L_14 = V_0;
		if (!L_14)
		{
			goto IL_006f;
		}
	}
	{
		RuntimeObject* L_15 = V_0;
		VirtActionInvoker1< RuntimeObject* >::Invoke(13 /* System.Void Naninovel.Antlr.Runtime.RecognitionException::ExtractInformationFromTreeNodeStream(Naninovel.Antlr.Runtime.Tree.ITreeNodeStream) */, __this, L_15);
		return;
	}

IL_006f:
	{
		RuntimeObject* L_16 = ___input1;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_16, ICharStream_t0A0ECD7A0F22F03C8E93172CD538714A622B653C_il2cpp_TypeInfo_var)))
		{
			goto IL_00a7;
		}
	}
	{
		RuntimeObject* L_17 = ___input1;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 Naninovel.Antlr.Runtime.IIntStream::LA(System.Int32) */, IIntStream_t1C261AE5ECB8EEF61877A77546136115827F13DE_il2cpp_TypeInfo_var, L_17, 1);
		__this->set__c_21(L_18);
		RuntimeObject* L_19 = ___input1;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_19, ICharStream_t0A0ECD7A0F22F03C8E93172CD538714A622B653C_il2cpp_TypeInfo_var)));
		int32_t L_20;
		L_20 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 Naninovel.Antlr.Runtime.ICharStream::get_Line() */, ICharStream_t0A0ECD7A0F22F03C8E93172CD538714A622B653C_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_19, ICharStream_t0A0ECD7A0F22F03C8E93172CD538714A622B653C_il2cpp_TypeInfo_var)));
		__this->set__line_22(L_20);
		RuntimeObject* L_21 = ___input1;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_21, ICharStream_t0A0ECD7A0F22F03C8E93172CD538714A622B653C_il2cpp_TypeInfo_var)));
		int32_t L_22;
		L_22 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Naninovel.Antlr.Runtime.ICharStream::get_CharPositionInLine() */, ICharStream_t0A0ECD7A0F22F03C8E93172CD538714A622B653C_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_21, ICharStream_t0A0ECD7A0F22F03C8E93172CD538714A622B653C_il2cpp_TypeInfo_var)));
		__this->set__charPositionInLine_23(L_22);
		return;
	}

IL_00a7:
	{
		RuntimeObject* L_23 = ___input1;
		NullCheck(L_23);
		int32_t L_24;
		L_24 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 Naninovel.Antlr.Runtime.IIntStream::LA(System.Int32) */, IIntStream_t1C261AE5ECB8EEF61877A77546136115827F13DE_il2cpp_TypeInfo_var, L_23, 1);
		__this->set__c_21(L_24);
	}

IL_00b4:
	{
		return;
	}
}
// System.Void Naninovel.Antlr.Runtime.RecognitionException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecognitionException__ctor_mD0C2A4B35FC16D24E6220B7B996D39C29B711BFF (RecognitionException_tF5714BA0E5C3032188B67ED85181048EABDF9155 * __this, SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ___info0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1C3B83E7128DFE5344885801249731AA7F849057);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60436098BCF84F474B2D663123781716F54C9C78);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB94F79AF99EB1F84056002952B39BFDEA97D447);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF86C9E9E7FE0EF09A2EAE8066CDC31F859254CC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD12DC1F0824DC34EF831848361E1D06127A18E3A);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m0E9BEC861F6DBED197960E5BA23149543B1D7F5B(__this, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_0 = ___info0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RecognitionException__ctor_mD0C2A4B35FC16D24E6220B7B996D39C29B711BFF_RuntimeMethod_var)));
	}

IL_0014:
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_2 = ___info0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = SerializationInfo_GetInt32_mB22BBD01CBC189B7A76465CBFF7224F619395D30(L_2, _stringLiteral1C3B83E7128DFE5344885801249731AA7F849057, /*hidden argument*/NULL);
		__this->set__index_18(L_3);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_4 = ___info0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = SerializationInfo_GetInt32_mB22BBD01CBC189B7A76465CBFF7224F619395D30(L_4, _stringLiteralBF86C9E9E7FE0EF09A2EAE8066CDC31F859254CC, /*hidden argument*/NULL);
		__this->set__c_21(L_5);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_6 = ___info0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = SerializationInfo_GetInt32_mB22BBD01CBC189B7A76465CBFF7224F619395D30(L_6, _stringLiteralAB94F79AF99EB1F84056002952B39BFDEA97D447, /*hidden argument*/NULL);
		__this->set__line_22(L_7);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_8 = ___info0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = SerializationInfo_GetInt32_mB22BBD01CBC189B7A76465CBFF7224F619395D30(L_8, _stringLiteralD12DC1F0824DC34EF831848361E1D06127A18E3A, /*hidden argument*/NULL);
		__this->set__charPositionInLine_23(L_9);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_10 = ___info0;
		NullCheck(L_10);
		bool L_11;
		L_11 = SerializationInfo_GetBoolean_m705ADACFB52D6385DDB6B2525C1979ECBE6D5849(L_10, _stringLiteral60436098BCF84F474B2D663123781716F54C9C78, /*hidden argument*/NULL);
		__this->set__approximateLineInfo_24(L_11);
		return;
	}
}
// System.Int32 Naninovel.Antlr.Runtime.RecognitionException::get_UnexpectedType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RecognitionException_get_UnexpectedType_m67E50E79FD8C23E766A50B2356DB53ED3A3B38E9 (RecognitionException_tF5714BA0E5C3032188B67ED85181048EABDF9155 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITokenStream_tA5739BEF1223F6EF748EE75567BB4EF94418DF46_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t0DEEE9C1FBAC843AF39112E1AD14FDA3A5C230A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeAdaptor_t1454D77B304383890CEE5B0A4F9F1DEFF5D84D11_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeNodeStream_t448692D59AFE684FB9BA4E5DAE340B24D52B3FB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = __this->get__input_17();
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_0, ITokenStream_tA5739BEF1223F6EF748EE75567BB4EF94418DF46_il2cpp_TypeInfo_var)))
		{
			goto IL_0019;
		}
	}
	{
		RuntimeObject* L_1 = __this->get__token_19();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Naninovel.Antlr.Runtime.IToken::get_Type() */, IToken_t0DEEE9C1FBAC843AF39112E1AD14FDA3A5C230A6_il2cpp_TypeInfo_var, L_1);
		return L_2;
	}

IL_0019:
	{
		RuntimeObject* L_3 = __this->get__input_17();
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, ITreeNodeStream_t448692D59AFE684FB9BA4E5DAE340B24D52B3FB1_il2cpp_TypeInfo_var));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_003a;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* Naninovel.Antlr.Runtime.Tree.ITreeAdaptor Naninovel.Antlr.Runtime.Tree.ITreeNodeStream::get_TreeAdaptor() */, ITreeNodeStream_t448692D59AFE684FB9BA4E5DAE340B24D52B3FB1_il2cpp_TypeInfo_var, L_5);
		RuntimeObject * L_7 = __this->get__node_20();
		NullCheck(L_6);
		int32_t L_8;
		L_8 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(5 /* System.Int32 Naninovel.Antlr.Runtime.Tree.ITreeAdaptor::GetType(System.Object) */, ITreeAdaptor_t1454D77B304383890CEE5B0A4F9F1DEFF5D84D11_il2cpp_TypeInfo_var, L_6, L_7);
		return L_8;
	}

IL_003a:
	{
		int32_t L_9 = __this->get__c_21();
		return L_9;
	}
}
// Naninovel.Antlr.Runtime.IIntStream Naninovel.Antlr.Runtime.RecognitionException::get_Input()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RecognitionException_get_Input_mC5DB3227628FBF0C8CE842645EAC34768B96DB1F (RecognitionException_tF5714BA0E5C3032188B67ED85181048EABDF9155 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get__input_17();
		return L_0;
	}
}
// Naninovel.Antlr.Runtime.IToken Naninovel.Antlr.Runtime.RecognitionException::get_Token()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RecognitionException_get_Token_m1452A2EF907C38B39351DBC8D9E02AEDD27F284B (RecognitionException_tF5714BA0E5C3032188B67ED85181048EABDF9155 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get__token_19();
		return L_0;
	}
}
// System.Object Naninovel.Antlr.Runtime.RecognitionException::get_Node()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * RecognitionException_get_Node_mF1E3FFAD2857F51812386996A9C0C40198AADFAA (RecognitionException_tF5714BA0E5C3032188B67ED85181048EABDF9155 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get__node_20();
		return L_0;
	}
}
// System.Int32 Naninovel.Antlr.Runtime.RecognitionException::get_Character()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RecognitionException_get_Character_m84714586B7F7260D91E75CB91B77EE2094DFE6EA (RecognitionException_tF5714BA0E5C3032188B67ED85181048EABDF9155 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__c_21();
		return L_0;
	}
}
// System.Int32 Naninovel.Antlr.Runtime.RecognitionException::get_Line()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RecognitionException_get_Line_mBD2A0C8C24FC18FE5368C290DD29CB19A28CE05C (RecognitionException_tF5714BA0E5C3032188B67ED85181048EABDF9155 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__line_22();
		return L_0;
	}
}
// System.Int32 Naninovel.Antlr.Runtime.RecognitionException::get_CharPositionInLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RecognitionException_get_CharPositionInLine_mB5A1E752D15EDC7F3AD6BCA7F2D92476749080AD (RecognitionException_tF5714BA0E5C3032188B67ED85181048EABDF9155 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__charPositionInLine_23();
		return L_0;
	}
}
// System.Void Naninovel.Antlr.Runtime.RecognitionException::ExtractInformationFromTreeNodeStream(Naninovel.Antlr.Runtime.Tree.ITreeNodeStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecognitionException_ExtractInformationFromTreeNodeStream_m71C812A98A0587CEDDA251591148B35E98780D9E (RecognitionException_tF5714BA0E5C3032188B67ED85181048EABDF9155 * __this, RuntimeObject* ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonToken_tAD014B56C894BF06C90025CC6BE550B60C31B668_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITokenStreamInformation_t7217712FAC29F5A12738A7AE50056D3D49A6C3D1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t0DEEE9C1FBAC843AF39112E1AD14FDA3A5C230A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeAdaptor_t1454D77B304383890CEE5B0A4F9F1DEFF5D84D11_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeNodeStream_t448692D59AFE684FB9BA4E5DAE340B24D52B3FB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITree_t9EF42DA31DEDBD7459D86BA36F89BBEB364A3B04_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	RuntimeObject * V_6 = NULL;
	RuntimeObject* V_7 = NULL;
	int32_t V_8 = 0;
	String_t* V_9 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		RuntimeObject* L_0 = ___input0;
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* System.Object Naninovel.Antlr.Runtime.Tree.ITreeNodeStream::LT(System.Int32) */, ITreeNodeStream_t448692D59AFE684FB9BA4E5DAE340B24D52B3FB1_il2cpp_TypeInfo_var, L_0, 1);
		__this->set__node_20(L_1);
		RuntimeObject* L_2 = ___input0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, ITokenStreamInformation_t7217712FAC29F5A12738A7AE50056D3D49A6C3D1_il2cpp_TypeInfo_var));
		RuntimeObject* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0058;
		}
	}
	{
		RuntimeObject* L_4 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* Naninovel.Antlr.Runtime.IToken Naninovel.Antlr.Runtime.ITokenStreamInformation::get_LastToken() */, ITokenStreamInformation_t7217712FAC29F5A12738A7AE50056D3D49A6C3D1_il2cpp_TypeInfo_var, L_4);
		V_1 = L_5;
		RuntimeObject* L_6 = V_0;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* Naninovel.Antlr.Runtime.IToken Naninovel.Antlr.Runtime.ITokenStreamInformation::get_LastRealToken() */, ITokenStreamInformation_t7217712FAC29F5A12738A7AE50056D3D49A6C3D1_il2cpp_TypeInfo_var, L_6);
		V_2 = L_7;
		RuntimeObject* L_8 = V_2;
		if (!L_8)
		{
			goto IL_018f;
		}
	}
	{
		RuntimeObject* L_9 = V_2;
		__this->set__token_19(L_9);
		RuntimeObject* L_10 = V_2;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 Naninovel.Antlr.Runtime.IToken::get_Line() */, IToken_t0DEEE9C1FBAC843AF39112E1AD14FDA3A5C230A6_il2cpp_TypeInfo_var, L_10);
		__this->set__line_22(L_11);
		RuntimeObject* L_12 = V_2;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = InterfaceFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 Naninovel.Antlr.Runtime.IToken::get_CharPositionInLine() */, IToken_t0DEEE9C1FBAC843AF39112E1AD14FDA3A5C230A6_il2cpp_TypeInfo_var, L_12);
		__this->set__charPositionInLine_23(L_13);
		RuntimeObject* L_14 = V_2;
		RuntimeObject* L_15 = V_1;
		NullCheck(L_14);
		bool L_16;
		L_16 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_14, L_15);
		__this->set__approximateLineInfo_24(L_16);
		return;
	}

IL_0058:
	{
		RuntimeObject* L_17 = ___input0;
		NullCheck(L_17);
		RuntimeObject* L_18;
		L_18 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* Naninovel.Antlr.Runtime.Tree.ITreeAdaptor Naninovel.Antlr.Runtime.Tree.ITreeNodeStream::get_TreeAdaptor() */, ITreeNodeStream_t448692D59AFE684FB9BA4E5DAE340B24D52B3FB1_il2cpp_TypeInfo_var, L_17);
		V_3 = L_18;
		RuntimeObject* L_19 = V_3;
		RuntimeObject * L_20 = __this->get__node_20();
		NullCheck(L_19);
		RuntimeObject* L_21;
		L_21 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject * >::Invoke(7 /* Naninovel.Antlr.Runtime.IToken Naninovel.Antlr.Runtime.Tree.ITreeAdaptor::GetToken(System.Object) */, ITreeAdaptor_t1454D77B304383890CEE5B0A4F9F1DEFF5D84D11_il2cpp_TypeInfo_var, L_19, L_20);
		V_4 = L_21;
		RuntimeObject* L_22 = V_4;
		if (!L_22)
		{
			goto IL_0107;
		}
	}
	{
		RuntimeObject* L_23 = V_4;
		__this->set__token_19(L_23);
		RuntimeObject* L_24 = V_4;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = InterfaceFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 Naninovel.Antlr.Runtime.IToken::get_Line() */, IToken_t0DEEE9C1FBAC843AF39112E1AD14FDA3A5C230A6_il2cpp_TypeInfo_var, L_24);
		if ((((int32_t)L_25) > ((int32_t)0)))
		{
			goto IL_00ec;
		}
	}
	{
		V_5 = (-1);
		RuntimeObject* L_26 = ___input0;
		int32_t L_27 = V_5;
		NullCheck(L_26);
		RuntimeObject * L_28;
		L_28 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* System.Object Naninovel.Antlr.Runtime.Tree.ITreeNodeStream::LT(System.Int32) */, ITreeNodeStream_t448692D59AFE684FB9BA4E5DAE340B24D52B3FB1_il2cpp_TypeInfo_var, L_26, L_27);
		V_6 = L_28;
		goto IL_00e7;
	}

IL_0095:
	{
		RuntimeObject* L_29 = V_3;
		RuntimeObject * L_30 = V_6;
		NullCheck(L_29);
		RuntimeObject* L_31;
		L_31 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject * >::Invoke(7 /* Naninovel.Antlr.Runtime.IToken Naninovel.Antlr.Runtime.Tree.ITreeAdaptor::GetToken(System.Object) */, ITreeAdaptor_t1454D77B304383890CEE5B0A4F9F1DEFF5D84D11_il2cpp_TypeInfo_var, L_29, L_30);
		V_7 = L_31;
		RuntimeObject* L_32 = V_7;
		if (!L_32)
		{
			goto IL_00cf;
		}
	}
	{
		RuntimeObject* L_33 = V_7;
		NullCheck(L_33);
		int32_t L_34;
		L_34 = InterfaceFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 Naninovel.Antlr.Runtime.IToken::get_Line() */, IToken_t0DEEE9C1FBAC843AF39112E1AD14FDA3A5C230A6_il2cpp_TypeInfo_var, L_33);
		if ((((int32_t)L_34) <= ((int32_t)0)))
		{
			goto IL_00cf;
		}
	}
	{
		RuntimeObject* L_35 = V_7;
		NullCheck(L_35);
		int32_t L_36;
		L_36 = InterfaceFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 Naninovel.Antlr.Runtime.IToken::get_Line() */, IToken_t0DEEE9C1FBAC843AF39112E1AD14FDA3A5C230A6_il2cpp_TypeInfo_var, L_35);
		__this->set__line_22(L_36);
		RuntimeObject* L_37 = V_7;
		NullCheck(L_37);
		int32_t L_38;
		L_38 = InterfaceFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 Naninovel.Antlr.Runtime.IToken::get_CharPositionInLine() */, IToken_t0DEEE9C1FBAC843AF39112E1AD14FDA3A5C230A6_il2cpp_TypeInfo_var, L_37);
		__this->set__charPositionInLine_23(L_38);
		__this->set__approximateLineInfo_24((bool)1);
		return;
	}

IL_00cf:
	{
		int32_t L_39 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_39, (int32_t)1));
	}

IL_00d5:
	try
	{ // begin try (depth: 1)
		RuntimeObject* L_40 = ___input0;
		int32_t L_41 = V_5;
		NullCheck(L_40);
		RuntimeObject * L_42;
		L_42 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* System.Object Naninovel.Antlr.Runtime.Tree.ITreeNodeStream::LT(System.Int32) */, ITreeNodeStream_t448692D59AFE684FB9BA4E5DAE340B24D52B3FB1_il2cpp_TypeInfo_var, L_40, L_41);
		V_6 = L_42;
		goto IL_00e7;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e1;
		}
		throw e;
	}

CATCH_00e1:
	{ // begin catch(System.ArgumentException)
		V_6 = NULL;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00e7;
	} // end catch (depth: 1)

IL_00e7:
	{
		RuntimeObject * L_43 = V_6;
		if (L_43)
		{
			goto IL_0095;
		}
	}
	{
		return;
	}

IL_00ec:
	{
		RuntimeObject* L_44 = V_4;
		NullCheck(L_44);
		int32_t L_45;
		L_45 = InterfaceFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 Naninovel.Antlr.Runtime.IToken::get_Line() */, IToken_t0DEEE9C1FBAC843AF39112E1AD14FDA3A5C230A6_il2cpp_TypeInfo_var, L_44);
		__this->set__line_22(L_45);
		RuntimeObject* L_46 = V_4;
		NullCheck(L_46);
		int32_t L_47;
		L_47 = InterfaceFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 Naninovel.Antlr.Runtime.IToken::get_CharPositionInLine() */, IToken_t0DEEE9C1FBAC843AF39112E1AD14FDA3A5C230A6_il2cpp_TypeInfo_var, L_46);
		__this->set__charPositionInLine_23(L_47);
		return;
	}

IL_0107:
	{
		RuntimeObject * L_48 = __this->get__node_20();
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_48, ITree_t9EF42DA31DEDBD7459D86BA36F89BBEB364A3B04_il2cpp_TypeInfo_var)))
		{
			goto IL_0164;
		}
	}
	{
		RuntimeObject * L_49 = __this->get__node_20();
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_49, ITree_t9EF42DA31DEDBD7459D86BA36F89BBEB364A3B04_il2cpp_TypeInfo_var)));
		int32_t L_50;
		L_50 = InterfaceFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 Naninovel.Antlr.Runtime.Tree.ITree::get_Line() */, ITree_t9EF42DA31DEDBD7459D86BA36F89BBEB364A3B04_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_49, ITree_t9EF42DA31DEDBD7459D86BA36F89BBEB364A3B04_il2cpp_TypeInfo_var)));
		__this->set__line_22(L_50);
		RuntimeObject * L_51 = __this->get__node_20();
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_51, ITree_t9EF42DA31DEDBD7459D86BA36F89BBEB364A3B04_il2cpp_TypeInfo_var)));
		int32_t L_52;
		L_52 = InterfaceFuncInvoker0< int32_t >::Invoke(11 /* System.Int32 Naninovel.Antlr.Runtime.Tree.ITree::get_CharPositionInLine() */, ITree_t9EF42DA31DEDBD7459D86BA36F89BBEB364A3B04_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_51, ITree_t9EF42DA31DEDBD7459D86BA36F89BBEB364A3B04_il2cpp_TypeInfo_var)));
		__this->set__charPositionInLine_23(L_52);
		RuntimeObject * L_53 = __this->get__node_20();
		if (!((CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 *)IsInstClass((RuntimeObject*)L_53, CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697_il2cpp_TypeInfo_var)))
		{
			goto IL_018f;
		}
	}
	{
		RuntimeObject * L_54 = __this->get__node_20();
		NullCheck(((CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 *)CastclassClass((RuntimeObject*)L_54, CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697_il2cpp_TypeInfo_var)));
		RuntimeObject* L_55;
		L_55 = CommonTree_get_Token_mBD1B69B6BA06B672FF50C0DB3FDB0A73808E5E07_inline(((CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 *)CastclassClass((RuntimeObject*)L_54, CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		__this->set__token_19(L_55);
		return;
	}

IL_0164:
	{
		RuntimeObject* L_56 = V_3;
		RuntimeObject * L_57 = __this->get__node_20();
		NullCheck(L_56);
		int32_t L_58;
		L_58 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(5 /* System.Int32 Naninovel.Antlr.Runtime.Tree.ITreeAdaptor::GetType(System.Object) */, ITreeAdaptor_t1454D77B304383890CEE5B0A4F9F1DEFF5D84D11_il2cpp_TypeInfo_var, L_56, L_57);
		V_8 = L_58;
		RuntimeObject* L_59 = V_3;
		RuntimeObject * L_60 = __this->get__node_20();
		NullCheck(L_59);
		String_t* L_61;
		L_61 = InterfaceFuncInvoker1< String_t*, RuntimeObject * >::Invoke(6 /* System.String Naninovel.Antlr.Runtime.Tree.ITreeAdaptor::GetText(System.Object) */, ITreeAdaptor_t1454D77B304383890CEE5B0A4F9F1DEFF5D84D11_il2cpp_TypeInfo_var, L_59, L_60);
		V_9 = L_61;
		int32_t L_62 = V_8;
		String_t* L_63 = V_9;
		CommonToken_tAD014B56C894BF06C90025CC6BE550B60C31B668 * L_64 = (CommonToken_tAD014B56C894BF06C90025CC6BE550B60C31B668 *)il2cpp_codegen_object_new(CommonToken_tAD014B56C894BF06C90025CC6BE550B60C31B668_il2cpp_TypeInfo_var);
		CommonToken__ctor_m0B7C4F844A4731D0DCDEC1622AFC18DD762B65B6(L_64, L_62, L_63, /*hidden argument*/NULL);
		__this->set__token_19(L_64);
	}

IL_018f:
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
// System.Void Naninovel.Antlr.Runtime.RecognizerSharedState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecognizerSharedState__ctor_mD25A59CCE4AAC13E18C18920BB6F06EFB3161640 (RecognizerSharedState_t80A4DCAF6DF4AF2F486E4958547F7FE3D4EC53F9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitSetU5BU5D_t5ECDC2A01D26B742E9ECE04E0909786124426251_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		BitSetU5BU5D_t5ECDC2A01D26B742E9ECE04E0909786124426251* L_0 = (BitSetU5BU5D_t5ECDC2A01D26B742E9ECE04E0909786124426251*)(BitSetU5BU5D_t5ECDC2A01D26B742E9ECE04E0909786124426251*)SZArrayNew(BitSetU5BU5D_t5ECDC2A01D26B742E9ECE04E0909786124426251_il2cpp_TypeInfo_var, (uint32_t)((int32_t)100));
		__this->set_following_0(L_0);
		__this->set__fsp_1((-1));
		__this->set_lastErrorIndex_3((-1));
		__this->set_tokenStartCharIndex_8((-1));
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
// System.Void Naninovel.NCalc.Domain.SerializationVisitor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationVisitor__ctor_m90D7D99BF96820DAD6E4024274F8C91BAC5B5CBE (SerializationVisitor_t7FA9CCD67A83DF85E052BC13D42D6CF05B3B65B3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	{
		LogicalExpressionVisitor__ctor_mDF2D9BE3A8C60A88158371C24850C3CDE3E6BE89(__this, /*hidden argument*/NULL);
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		SerializationVisitor_set_Result_mDE081A8F53AC297426FC7ADBF00F2FC5B98D95A5_inline(__this, L_0, /*hidden argument*/NULL);
		NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * L_1 = (NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D *)il2cpp_codegen_object_new(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D_il2cpp_TypeInfo_var);
		NumberFormatInfo__ctor_m6170D636849222DB99BEDFB33C7A5E4032D8A097(L_1, /*hidden argument*/NULL);
		NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * L_2 = L_1;
		NullCheck(L_2);
		NumberFormatInfo_set_NumberDecimalSeparator_m061730CB113D54B6DFD16532CFA295901905B44A(L_2, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, /*hidden argument*/NULL);
		__this->set__numberFormatInfo_0(L_2);
		return;
	}
}
// System.Text.StringBuilder Naninovel.NCalc.Domain.SerializationVisitor::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * SerializationVisitor_get_Result_m86A4A31AF1084FBA20548920573755CE396F8A31 (SerializationVisitor_t7FA9CCD67A83DF85E052BC13D42D6CF05B3B65B3 * __this, const RuntimeMethod* method)
{
	{
		StringBuilder_t * L_0 = __this->get_U3CResultU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Naninovel.NCalc.Domain.SerializationVisitor::set_Result(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationVisitor_set_Result_mDE081A8F53AC297426FC7ADBF00F2FC5B98D95A5 (SerializationVisitor_t7FA9CCD67A83DF85E052BC13D42D6CF05B3B65B3 * __this, StringBuilder_t * ___value0, const RuntimeMethod* method)
{
	{
		StringBuilder_t * L_0 = ___value0;
		__this->set_U3CResultU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void Naninovel.NCalc.Domain.SerializationVisitor::Visit(Naninovel.NCalc.Domain.LogicalExpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationVisitor_Visit_mA06D7CE2D8E189565C3358C3BBAE4177609BC525 (SerializationVisitor_t7FA9CCD67A83DF85E052BC13D42D6CF05B3B65B3 * __this, LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * ___expression0, const RuntimeMethod* method)
{
	{
		Exception_t * L_0 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral979A5CB3E003C8C576661ED84082D49624F862DE)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SerializationVisitor_Visit_mA06D7CE2D8E189565C3358C3BBAE4177609BC525_RuntimeMethod_var)));
	}
}
// System.Void Naninovel.NCalc.Domain.SerializationVisitor::Visit(Naninovel.NCalc.Domain.TernaryExpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationVisitor_Visit_m3C1BD02A16B87ADA942E9BFC9EC605A534372474 (SerializationVisitor_t7FA9CCD67A83DF85E052BC13D42D6CF05B3B65B3 * __this, TernaryExpression_tB518CB82C2E5F08ACA68A8062B3076B8614252A8 * ___expression0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral210A6A07AB8F66B3554669378F6148D2C7F62920);
		s_Il2CppMethodInitialized = true;
	}
	{
		TernaryExpression_tB518CB82C2E5F08ACA68A8062B3076B8614252A8 * L_0 = ___expression0;
		NullCheck(L_0);
		LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * L_1;
		L_1 = TernaryExpression_get_LeftExpression_m77B0DFDE3F7D09EC6CB9530F1CD05D1FF030D533_inline(L_0, /*hidden argument*/NULL);
		SerializationVisitor_EncapsulateNoValue_m2E13D2652CE97F06D8555392BCE9BF42878A546C(__this, L_1, /*hidden argument*/NULL);
		StringBuilder_t * L_2;
		L_2 = SerializationVisitor_get_Result_m86A4A31AF1084FBA20548920573755CE396F8A31_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		StringBuilder_t * L_3;
		L_3 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_2, _stringLiteral210A6A07AB8F66B3554669378F6148D2C7F62920, /*hidden argument*/NULL);
		TernaryExpression_tB518CB82C2E5F08ACA68A8062B3076B8614252A8 * L_4 = ___expression0;
		NullCheck(L_4);
		LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * L_5;
		L_5 = TernaryExpression_get_MiddleExpression_mD9A14BB9DCD0EF78870AAD92FC5CABE1335B55C3_inline(L_4, /*hidden argument*/NULL);
		SerializationVisitor_EncapsulateNoValue_m2E13D2652CE97F06D8555392BCE9BF42878A546C(__this, L_5, /*hidden argument*/NULL);
		StringBuilder_t * L_6;
		L_6 = SerializationVisitor_get_Result_m86A4A31AF1084FBA20548920573755CE396F8A31_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		StringBuilder_t * L_7;
		L_7 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_6, _stringLiteral1168E92C164109D6220480DEDA987085B2A21155, /*hidden argument*/NULL);
		TernaryExpression_tB518CB82C2E5F08ACA68A8062B3076B8614252A8 * L_8 = ___expression0;
		NullCheck(L_8);
		LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * L_9;
		L_9 = TernaryExpression_get_RightExpression_m106754242C74124B03A7E967F105DCD4C5FE3A88_inline(L_8, /*hidden argument*/NULL);
		SerializationVisitor_EncapsulateNoValue_m2E13D2652CE97F06D8555392BCE9BF42878A546C(__this, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Naninovel.NCalc.Domain.SerializationVisitor::Visit(Naninovel.NCalc.Domain.BinaryExpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationVisitor_Visit_m998E7DC3B7C3AC9543EBCA7CFD51C1D31FBA15F9 (SerializationVisitor_t7FA9CCD67A83DF85E052BC13D42D6CF05B3B65B3 * __this, BinaryExpression_t6B952CF817520F64ACE95BE470B2F349856B92D9 * ___expression0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral15FB8A04339464F72B79BAF171F17EF1E153CA52);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B1EB7B676D45EEA70B706E25988B5A063563F3D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B9D3CF4697EAF2BF914545D4E803CF9FCA58F66);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2FDB12CAF040DE0941DCA5DA173D724FBE249CE3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4809E30105820D7F0D6338C0181D9A191EAE18E2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E1C61AD64824F0F49388BB9A0A66BA660066922);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral51A0BD638EC24062E1BB5CBBDC0CEBB6BFB167A5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64DDEE858A91B7DDB44761D703E5A2FD737BCAA9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88DE3AE5D1539B4DC69F188BF0BA71D156A2A987);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9624DEBBCD14C2B589D0526FE720B99449CA1D13);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B2D833B107F93D5FC776077FE8509021DCC803E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAC47381A312D0BE38226537F85448FFF2264564C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADB95DDF09353FBDD17E9890451F2F88C7F3AF20);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8FB3AADE865E6D34A8377CFB1E0D3ADC4040BDC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCDF1B8C01FE1D4D3E80FBCE3178BE0FA050AC8D9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE0CFF3BC021C7A77F8C1BAFB2D406397F52AD882);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF4DEFACDDC6EDC45049E58865E8CC7A05C7AEA5B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC920BF5B48C73F1A2C760180F624A2192ADDA32);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		BinaryExpression_t6B952CF817520F64ACE95BE470B2F349856B92D9 * L_0 = ___expression0;
		NullCheck(L_0);
		LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * L_1;
		L_1 = BinaryExpression_get_LeftExpression_m24757E3C644A04E5A533343DB0AB5A477F7B467D_inline(L_0, /*hidden argument*/NULL);
		SerializationVisitor_EncapsulateNoValue_m2E13D2652CE97F06D8555392BCE9BF42878A546C(__this, L_1, /*hidden argument*/NULL);
		BinaryExpression_t6B952CF817520F64ACE95BE470B2F349856B92D9 * L_2 = ___expression0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = BinaryExpression_get_Type_m46E6CDC98E8AAEC35C3FEAE26A8FEB6A59CC700D_inline(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		switch (L_4)
		{
			case 0:
			{
				goto IL_0066;
			}
			case 1:
			{
				goto IL_007c;
			}
			case 2:
			{
				goto IL_0142;
			}
			case 3:
			{
				goto IL_0100;
			}
			case 4:
			{
				goto IL_00d4;
			}
			case 5:
			{
				goto IL_00ea;
			}
			case 6:
			{
				goto IL_00be;
			}
			case 7:
			{
				goto IL_00a8;
			}
			case 8:
			{
				goto IL_0116;
			}
			case 9:
			{
				goto IL_0158;
			}
			case 10:
			{
				goto IL_012c;
			}
			case 11:
			{
				goto IL_0092;
			}
			case 12:
			{
				goto IL_016b;
			}
			case 13:
			{
				goto IL_0191;
			}
			case 14:
			{
				goto IL_017e;
			}
			case 15:
			{
				goto IL_01a4;
			}
			case 16:
			{
				goto IL_01b7;
			}
			case 17:
			{
				goto IL_01ca;
			}
		}
	}
	{
		goto IL_01db;
	}

IL_0066:
	{
		StringBuilder_t * L_5;
		L_5 = SerializationVisitor_get_Result_m86A4A31AF1084FBA20548920573755CE396F8A31_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		StringBuilder_t * L_6;
		L_6 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_5, _stringLiteral64DDEE858A91B7DDB44761D703E5A2FD737BCAA9, /*hidden argument*/NULL);
		goto IL_01db;
	}

IL_007c:
	{
		StringBuilder_t * L_7;
		L_7 = SerializationVisitor_get_Result_m86A4A31AF1084FBA20548920573755CE396F8A31_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		StringBuilder_t * L_8;
		L_8 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_7, _stringLiteralC8FB3AADE865E6D34A8377CFB1E0D3ADC4040BDC, /*hidden argument*/NULL);
		goto IL_01db;
	}

IL_0092:
	{
		StringBuilder_t * L_9;
		L_9 = SerializationVisitor_get_Result_m86A4A31AF1084FBA20548920573755CE396F8A31_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		StringBuilder_t * L_10;
		L_10 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_9, _stringLiteralADB95DDF09353FBDD17E9890451F2F88C7F3AF20, /*hidden argument*/NULL);
		goto IL_01db;
	}

IL_00a8:
	{
		StringBuilder_t * L_11;
		L_11 = SerializationVisitor_get_Result_m86A4A31AF1084FBA20548920573755CE396F8A31_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		StringBuilder_t * L_12;
		L_12 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_11, _stringLiteral9B2D833B107F93D5FC776077FE8509021DCC803E, /*hidden argument*/NULL);
		goto IL_01db;
	}

IL_00be:
	{
		StringBuilder_t * L_13;
		L_13 = SerializationVisitor_get_Result_m86A4A31AF1084FBA20548920573755CE396F8A31_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		StringBuilder_t * L_14;
		L_14 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_13, _stringLiteral4E1C61AD64824F0F49388BB9A0A66BA660066922, /*hidden argument*/NULL);
		goto IL_01db;
	}

IL_00d4:
	{
		StringBuilder_t * L_15;
		L_15 = SerializationVisitor_get_Result_m86A4A31AF1084FBA20548920573755CE396F8A31_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_15);
		StringBuilder_t * L_16;
		L_16 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_15, _stringLiteralCDF1B8C01FE1D4D3E80FBCE3178BE0FA050AC8D9, /*hidden argument*/NULL);
		goto IL_01db;
	}

IL_00ea:
	{
		StringBuilder_t * L_17;
		L_17 = SerializationVisitor_get_Result_m86A4A31AF1084FBA20548920573755CE396F8A31_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_17);
		StringBuilder_t * L_18;
		L_18 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_17, _stringLiteral2FDB12CAF040DE0941DCA5DA173D724FBE249CE3, /*hidden argument*/NULL);
		goto IL_01db;
	}

IL_0100:
	{
		StringBuilder_t * L_19;
		L_19 = SerializationVisitor_get_Result_m86A4A31AF1084FBA20548920573755CE396F8A31_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_19);
		StringBuilder_t * L_20;
		L_20 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_19, _stringLiteral88DE3AE5D1539B4DC69F188BF0BA71D156A2A987, /*hidden argument*/NULL);
		goto IL_01db;
	}

IL_0116:
	{
		StringBuilder_t * L_21;
		L_21 = SerializationVisitor_get_Result_m86A4A31AF1084FBA20548920573755CE396F8A31_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_21);
		StringBuilder_t * L_22;
		L_22 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_21, _stringLiteralFC920BF5B48C73F1A2C760180F624A2192ADDA32, /*hidden argument*/NULL);
		goto IL_01db;
	}

IL_012c:
	{
		StringBuilder_t * L_23;
		L_23 = SerializationVisitor_get_Result_m86A4A31AF1084FBA20548920573755CE396F8A31_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_23);
		StringBuilder_t * L_24;
		L_24 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_23, _stringLiteralAC47381A312D0BE38226537F85448FFF2264564C, /*hidden argument*/NULL);
		goto IL_01db;
	}

IL_0142:
	{
		StringBuilder_t * L_25;
		L_25 = SerializationVisitor_get_Result_m86A4A31AF1084FBA20548920573755CE396F8A31_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_25);
		StringBuilder_t * L_26;
		L_26 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_25, _stringLiteralF4DEFACDDC6EDC45049E58865E8CC7A05C7AEA5B, /*hidden argument*/NULL);
		goto IL_01db;
	}

IL_0158:
	{
		StringBuilder_t * L_27;
		L_27 = SerializationVisitor_get_Result_m86A4A31AF1084FBA20548920573755CE396F8A31_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_27);
		StringBuilder_t * L_28;
		L_28 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_27, _stringLiteral1B9D3CF4697EAF2BF914545D4E803CF9FCA58F66, /*hidden argument*/NULL);
		goto IL_01db;
	}

IL_016b:
	{
		StringBuilder_t * L_29;
		L_29 = SerializationVisitor_get_Result_m86A4A31AF1084FBA20548920573755CE396F8A31_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_29);
		StringBuilder_t * L_30;
		L_30 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_29, _stringLiteral15FB8A04339464F72B79BAF171F17EF1E153CA52, /*hidden argument*/NULL);
		goto IL_01db;
	}

IL_017e:
	{
		StringBuilder_t * L_31;
		L_31 = SerializationVisitor_get_Result_m86A4A31AF1084FBA20548920573755CE396F8A31_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_31);
		StringBuilder_t * L_32;
		L_32 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_31, _stringLiteral9624DEBBCD14C2B589D0526FE720B99449CA1D13, /*hidden argument*/NULL);
		goto IL_01db;
	}

IL_0191:
	{
		StringBuilder_t * L_33;
		L_33 = SerializationVisitor_get_Result_m86A4A31AF1084FBA20548920573755CE396F8A31_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_33);
		StringBuilder_t * L_34;
		L_34 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_33, _stringLiteral1B1EB7B676D45EEA70B706E25988B5A063563F3D, /*hidden argument*/NULL);
		goto IL_01db;
	}

IL_01a4:
	{
		StringBuilder_t * L_35;
		L_35 = SerializationVisitor_get_Result_m86A4A31AF1084FBA20548920573755CE396F8A31_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_35);
		StringBuilder_t * L_36;
		L_36 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_35, _stringLiteralE0CFF3BC021C7A77F8C1BAFB2D406397F52AD882, /*hidden argument*/NULL);
		goto IL_01db;
	}

IL_01b7:
	{
		StringBuilder_t * L_37;
		L_37 = SerializationVisitor_get_Result_m86A4A31AF1084FBA20548920573755CE396F8A31_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_37);
		StringBuilder_t * L_38;
		L_38 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_37, _stringLiteral4809E30105820D7F0D6338C0181D9A191EAE18E2, /*hidden argument*/NULL);
		goto IL_01db;
	}

IL_01ca:
	{
		StringBuilder_t * L_39;
		L_39 = SerializationVisitor_get_Result_m86A4A31AF1084FBA20548920573755CE396F8A31_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_39);
		StringBuilder_t * L_40;
		L_40 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_39, _stringLiteral51A0BD638EC24062E1BB5CBBDC0CEBB6BFB167A5, /*hidden argument*/NULL);
	}

IL_01db:
	{
		BinaryExpression_t6B952CF817520F64ACE95BE470B2F349856B92D9 * L_41 = ___expression0;
		NullCheck(L_41);
		LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * L_42;
		L_42 = BinaryExpression_get_RightExpression_mA1958FB72F75C1A8B427F70091648ABD3232E2A7_inline(L_41, /*hidden argument*/NULL);
		SerializationVisitor_EncapsulateNoValue_m2E13D2652CE97F06D8555392BCE9BF42878A546C(__this, L_42, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Naninovel.NCalc.Domain.SerializationVisitor::Visit(Naninovel.NCalc.Domain.UnaryExpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationVisitor_Visit_m7B5BFC74389901CD9447B13D643493F92CF87AB7 (SerializationVisitor_t7FA9CCD67A83DF85E052BC13D42D6CF05B3B65B3 * __this, UnaryExpression_t726EAD7F63036A3F19780AC9E55AD4715F567A9C * ___expression0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral15196F05B117690F3E12E56AA0C43803EA0D2A46);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9452A87FAA0073A5238C5BF8FBCAE0BFB2A7512D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		UnaryExpression_t726EAD7F63036A3F19780AC9E55AD4715F567A9C * L_0 = ___expression0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = UnaryExpression_get_Type_m8A96E64024BB216BF33300527066AC7FE825366D_inline(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_002e;
			}
			case 2:
			{
				goto IL_0041;
			}
		}
	}
	{
		goto IL_0052;
	}

IL_001b:
	{
		StringBuilder_t * L_3;
		L_3 = SerializationVisitor_get_Result_m86A4A31AF1084FBA20548920573755CE396F8A31_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		StringBuilder_t * L_4;
		L_4 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_3, _stringLiteral15196F05B117690F3E12E56AA0C43803EA0D2A46, /*hidden argument*/NULL);
		goto IL_0052;
	}

IL_002e:
	{
		StringBuilder_t * L_5;
		L_5 = SerializationVisitor_get_Result_m86A4A31AF1084FBA20548920573755CE396F8A31_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		StringBuilder_t * L_6;
		L_6 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_5, _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0, /*hidden argument*/NULL);
		goto IL_0052;
	}

IL_0041:
	{
		StringBuilder_t * L_7;
		L_7 = SerializationVisitor_get_Result_m86A4A31AF1084FBA20548920573755CE396F8A31_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		StringBuilder_t * L_8;
		L_8 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_7, _stringLiteral9452A87FAA0073A5238C5BF8FBCAE0BFB2A7512D, /*hidden argument*/NULL);
	}

IL_0052:
	{
		UnaryExpression_t726EAD7F63036A3F19780AC9E55AD4715F567A9C * L_9 = ___expression0;
		NullCheck(L_9);
		LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * L_10;
		L_10 = UnaryExpression_get_Expression_m6EF74F22F871FB6C6A126F8E9A616A99E95FAF1F_inline(L_9, /*hidden argument*/NULL);
		SerializationVisitor_EncapsulateNoValue_m2E13D2652CE97F06D8555392BCE9BF42878A546C(__this, L_10, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Naninovel.NCalc.Domain.SerializationVisitor::Visit(Naninovel.NCalc.Domain.ValueExpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationVisitor_Visit_m1FD9A2A32782769AE0992D51636E10D41C03F818 (SerializationVisitor_t7FA9CCD67A83DF85E052BC13D42D6CF05B3B65B3 * __this, ValueExpression_t1E49B717CBB41CB95F6554127CCC773DA6C152C9 * ___expression0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B0FEB3147CE20EB2C90076367F895C59BCD14B3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		ValueExpression_t1E49B717CBB41CB95F6554127CCC773DA6C152C9 * L_0 = ___expression0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = ValueExpression_get_Type_m13B487027A48793E899BB46C05F1F9C3DB4126A7_inline(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_00b4;
			}
			case 1:
			{
				goto IL_00d6;
			}
			case 2:
			{
				goto IL_0044;
			}
			case 3:
			{
				goto IL_007a;
			}
			case 4:
			{
				goto IL_0022;
			}
		}
	}
	{
		return;
	}

IL_0022:
	{
		StringBuilder_t * L_3;
		L_3 = SerializationVisitor_get_Result_m86A4A31AF1084FBA20548920573755CE396F8A31_inline(__this, /*hidden argument*/NULL);
		ValueExpression_t1E49B717CBB41CB95F6554127CCC773DA6C152C9 * L_4 = ___expression0;
		NullCheck(L_4);
		RuntimeObject * L_5;
		L_5 = ValueExpression_get_Value_mA695F1A0450AB1E047716E2914A9C1334C867572_inline(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_5);
		NullCheck(L_3);
		StringBuilder_t * L_7;
		L_7 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_3, L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		StringBuilder_t * L_8;
		L_8 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_7, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, /*hidden argument*/NULL);
		return;
	}

IL_0044:
	{
		StringBuilder_t * L_9;
		L_9 = SerializationVisitor_get_Result_m86A4A31AF1084FBA20548920573755CE396F8A31_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		StringBuilder_t * L_10;
		L_10 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_9, _stringLiteral0B0FEB3147CE20EB2C90076367F895C59BCD14B3, /*hidden argument*/NULL);
		ValueExpression_t1E49B717CBB41CB95F6554127CCC773DA6C152C9 * L_11 = ___expression0;
		NullCheck(L_11);
		RuntimeObject * L_12;
		L_12 = ValueExpression_get_Value_mA695F1A0450AB1E047716E2914A9C1334C867572_inline(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		String_t* L_13;
		L_13 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_12);
		NullCheck(L_10);
		StringBuilder_t * L_14;
		L_14 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_10, L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		StringBuilder_t * L_15;
		L_15 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_14, _stringLiteral0B0FEB3147CE20EB2C90076367F895C59BCD14B3, /*hidden argument*/NULL);
		NullCheck(L_15);
		StringBuilder_t * L_16;
		L_16 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_15, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, /*hidden argument*/NULL);
		return;
	}

IL_007a:
	{
		StringBuilder_t * L_17;
		L_17 = SerializationVisitor_get_Result_m86A4A31AF1084FBA20548920573755CE396F8A31_inline(__this, /*hidden argument*/NULL);
		ValueExpression_t1E49B717CBB41CB95F6554127CCC773DA6C152C9 * L_18 = ___expression0;
		NullCheck(L_18);
		RuntimeObject * L_19;
		L_19 = ValueExpression_get_Value_mA695F1A0450AB1E047716E2914A9C1334C867572_inline(L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		String_t* L_20;
		L_20 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_19);
		IL2CPP_RUNTIME_CLASS_INIT(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var);
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_21;
		L_21 = Decimal_Parse_m0B75E59E2BE69EF3765538B398A7735052B27484(L_20, ((int32_t)511), /*hidden argument*/NULL);
		V_1 = L_21;
		NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * L_22 = __this->get__numberFormatInfo_0();
		String_t* L_23;
		L_23 = Decimal_ToString_mCD1BF444FBBA99D53FBADBB834CBFBB857598C24((Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 *)(&V_1), L_22, /*hidden argument*/NULL);
		NullCheck(L_17);
		StringBuilder_t * L_24;
		L_24 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_17, L_23, /*hidden argument*/NULL);
		NullCheck(L_24);
		StringBuilder_t * L_25;
		L_25 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_24, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, /*hidden argument*/NULL);
		return;
	}

IL_00b4:
	{
		StringBuilder_t * L_26;
		L_26 = SerializationVisitor_get_Result_m86A4A31AF1084FBA20548920573755CE396F8A31_inline(__this, /*hidden argument*/NULL);
		ValueExpression_t1E49B717CBB41CB95F6554127CCC773DA6C152C9 * L_27 = ___expression0;
		NullCheck(L_27);
		RuntimeObject * L_28;
		L_28 = ValueExpression_get_Value_mA695F1A0450AB1E047716E2914A9C1334C867572_inline(L_27, /*hidden argument*/NULL);
		NullCheck(L_28);
		String_t* L_29;
		L_29 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_28);
		NullCheck(L_26);
		StringBuilder_t * L_30;
		L_30 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_26, L_29, /*hidden argument*/NULL);
		NullCheck(L_30);
		StringBuilder_t * L_31;
		L_31 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_30, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, /*hidden argument*/NULL);
		return;
	}

IL_00d6:
	{
		StringBuilder_t * L_32;
		L_32 = SerializationVisitor_get_Result_m86A4A31AF1084FBA20548920573755CE396F8A31_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_32);
		StringBuilder_t * L_33;
		L_33 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_32, _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D, /*hidden argument*/NULL);
		ValueExpression_t1E49B717CBB41CB95F6554127CCC773DA6C152C9 * L_34 = ___expression0;
		NullCheck(L_34);
		RuntimeObject * L_35;
		L_35 = ValueExpression_get_Value_mA695F1A0450AB1E047716E2914A9C1334C867572_inline(L_34, /*hidden argument*/NULL);
		NullCheck(L_35);
		String_t* L_36;
		L_36 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_35);
		NullCheck(L_33);
		StringBuilder_t * L_37;
		L_37 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_33, L_36, /*hidden argument*/NULL);
		NullCheck(L_37);
		StringBuilder_t * L_38;
		L_38 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_37, _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D, /*hidden argument*/NULL);
		NullCheck(L_38);
		StringBuilder_t * L_39;
		L_39 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_38, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Naninovel.NCalc.Domain.SerializationVisitor::Visit(Naninovel.NCalc.Domain.Function)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationVisitor_Visit_m998C05B8DAC8EAC12ADC6470F456E2D7B5109F47 (SerializationVisitor_t7FA9CCD67A83DF85E052BC13D42D6CF05B3B65B3 * __this, Function_tB79B8AC81F9EBA9B68A61E8A501D74173D90EA72 * ___function0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC087E631060AB76B7C814C0E1B92D5C7C4C4B924);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		StringBuilder_t * L_0;
		L_0 = SerializationVisitor_get_Result_m86A4A31AF1084FBA20548920573755CE396F8A31_inline(__this, /*hidden argument*/NULL);
		Function_tB79B8AC81F9EBA9B68A61E8A501D74173D90EA72 * L_1 = ___function0;
		NullCheck(L_1);
		Identifier_t64A304AE1762074E38912767107A5B7DAC0D54DD * L_2;
		L_2 = Function_get_Identifier_mC18FB28C369FB55EEE9E5C200DB5774666FEB307_inline(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = Identifier_get_Name_mFFF912B4C6BC7616A1221B2265AA47B22F85A171_inline(L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		StringBuilder_t * L_4;
		L_4 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_0, L_3, /*hidden argument*/NULL);
		StringBuilder_t * L_5;
		L_5 = SerializationVisitor_get_Result_m86A4A31AF1084FBA20548920573755CE396F8A31_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		StringBuilder_t * L_6;
		L_6 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_5, _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73, /*hidden argument*/NULL);
		V_0 = 0;
		goto IL_0076;
	}

IL_002c:
	{
		Function_tB79B8AC81F9EBA9B68A61E8A501D74173D90EA72 * L_7 = ___function0;
		NullCheck(L_7);
		LogicalExpressionU5BU5D_t35167AD411F36531A33B384D413583735F19360A* L_8;
		L_8 = Function_get_Expressions_m2A235F71737257E7684D74BD40FE24CE3873656B_inline(L_7, /*hidden argument*/NULL);
		int32_t L_9 = V_0;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_11);
		VirtActionInvoker1< LogicalExpressionVisitor_t4FEC2A3FF1F4D8E4207828C80EBEC796EC6AED13 * >::Invoke(4 /* System.Void Naninovel.NCalc.Domain.LogicalExpression::Accept(Naninovel.NCalc.Domain.LogicalExpressionVisitor) */, L_11, __this);
		int32_t L_12 = V_0;
		Function_tB79B8AC81F9EBA9B68A61E8A501D74173D90EA72 * L_13 = ___function0;
		NullCheck(L_13);
		LogicalExpressionU5BU5D_t35167AD411F36531A33B384D413583735F19360A* L_14;
		L_14 = Function_get_Expressions_m2A235F71737257E7684D74BD40FE24CE3873656B_inline(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		if ((((int32_t)L_12) >= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))), (int32_t)1)))))
		{
			goto IL_0072;
		}
	}
	{
		StringBuilder_t * L_15;
		L_15 = SerializationVisitor_get_Result_m86A4A31AF1084FBA20548920573755CE396F8A31_inline(__this, /*hidden argument*/NULL);
		StringBuilder_t * L_16;
		L_16 = SerializationVisitor_get_Result_m86A4A31AF1084FBA20548920573755CE396F8A31_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_16);
		int32_t L_17;
		L_17 = StringBuilder_get_Length_m680500263C59ACFD9582BF2AEEED8E92C87FF5C0(L_16, /*hidden argument*/NULL);
		NullCheck(L_15);
		StringBuilder_t * L_18;
		L_18 = StringBuilder_Remove_m6ABF9CF3D10160EB52E0768262A9B179F987571E(L_15, ((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)1)), 1, /*hidden argument*/NULL);
		StringBuilder_t * L_19;
		L_19 = SerializationVisitor_get_Result_m86A4A31AF1084FBA20548920573755CE396F8A31_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_19);
		StringBuilder_t * L_20;
		L_20 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_19, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, /*hidden argument*/NULL);
	}

IL_0072:
	{
		int32_t L_21 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
	}

IL_0076:
	{
		int32_t L_22 = V_0;
		Function_tB79B8AC81F9EBA9B68A61E8A501D74173D90EA72 * L_23 = ___function0;
		NullCheck(L_23);
		LogicalExpressionU5BU5D_t35167AD411F36531A33B384D413583735F19360A* L_24;
		L_24 = Function_get_Expressions_m2A235F71737257E7684D74BD40FE24CE3873656B_inline(L_23, /*hidden argument*/NULL);
		NullCheck(L_24);
		if ((((int32_t)L_22) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length))))))
		{
			goto IL_002c;
		}
	}
	{
		goto IL_009d;
	}

IL_0083:
	{
		StringBuilder_t * L_25;
		L_25 = SerializationVisitor_get_Result_m86A4A31AF1084FBA20548920573755CE396F8A31_inline(__this, /*hidden argument*/NULL);
		StringBuilder_t * L_26;
		L_26 = SerializationVisitor_get_Result_m86A4A31AF1084FBA20548920573755CE396F8A31_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_26);
		int32_t L_27;
		L_27 = StringBuilder_get_Length_m680500263C59ACFD9582BF2AEEED8E92C87FF5C0(L_26, /*hidden argument*/NULL);
		NullCheck(L_25);
		StringBuilder_t * L_28;
		L_28 = StringBuilder_Remove_m6ABF9CF3D10160EB52E0768262A9B179F987571E(L_25, ((int32_t)il2cpp_codegen_subtract((int32_t)L_27, (int32_t)1)), 1, /*hidden argument*/NULL);
	}

IL_009d:
	{
		StringBuilder_t * L_29;
		L_29 = SerializationVisitor_get_Result_m86A4A31AF1084FBA20548920573755CE396F8A31_inline(__this, /*hidden argument*/NULL);
		StringBuilder_t * L_30;
		L_30 = SerializationVisitor_get_Result_m86A4A31AF1084FBA20548920573755CE396F8A31_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_30);
		int32_t L_31;
		L_31 = StringBuilder_get_Length_m680500263C59ACFD9582BF2AEEED8E92C87FF5C0(L_30, /*hidden argument*/NULL);
		NullCheck(L_29);
		Il2CppChar L_32;
		L_32 = StringBuilder_get_Chars_m5961A0987EEF0A0F8C335048A33EC4584B53F1E3(L_29, ((int32_t)il2cpp_codegen_subtract((int32_t)L_31, (int32_t)1)), /*hidden argument*/NULL);
		if ((((int32_t)L_32) == ((int32_t)((int32_t)32))))
		{
			goto IL_0083;
		}
	}
	{
		StringBuilder_t * L_33;
		L_33 = SerializationVisitor_get_Result_m86A4A31AF1084FBA20548920573755CE396F8A31_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_33);
		StringBuilder_t * L_34;
		L_34 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_33, _stringLiteralC087E631060AB76B7C814C0E1B92D5C7C4C4B924, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Naninovel.NCalc.Domain.SerializationVisitor::Visit(Naninovel.NCalc.Domain.Identifier)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationVisitor_Visit_mCBF30C17BF19FF914A9501C487BEC4F44E519263 (SerializationVisitor_t7FA9CCD67A83DF85E052BC13D42D6CF05B3B65B3 * __this, Identifier_t64A304AE1762074E38912767107A5B7DAC0D54DD * ___parameter0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral10A105116F1400FFCE661E402C3C12DDCA0D688C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringBuilder_t * L_0;
		L_0 = SerializationVisitor_get_Result_m86A4A31AF1084FBA20548920573755CE396F8A31_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		StringBuilder_t * L_1;
		L_1 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_0, _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1, /*hidden argument*/NULL);
		Identifier_t64A304AE1762074E38912767107A5B7DAC0D54DD * L_2 = ___parameter0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = Identifier_get_Name_mFFF912B4C6BC7616A1221B2265AA47B22F85A171_inline(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		StringBuilder_t * L_4;
		L_4 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_1, L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		StringBuilder_t * L_5;
		L_5 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_4, _stringLiteral10A105116F1400FFCE661E402C3C12DDCA0D688C, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Naninovel.NCalc.Domain.SerializationVisitor::EncapsulateNoValue(Naninovel.NCalc.Domain.LogicalExpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationVisitor_EncapsulateNoValue_m2E13D2652CE97F06D8555392BCE9BF42878A546C (SerializationVisitor_t7FA9CCD67A83DF85E052BC13D42D6CF05B3B65B3 * __this, LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * ___expression0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueExpression_t1E49B717CBB41CB95F6554127CCC773DA6C152C9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC087E631060AB76B7C814C0E1B92D5C7C4C4B924);
		s_Il2CppMethodInitialized = true;
	}
	{
		LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * L_0 = ___expression0;
		if (!((ValueExpression_t1E49B717CBB41CB95F6554127CCC773DA6C152C9 *)IsInstClass((RuntimeObject*)L_0, ValueExpression_t1E49B717CBB41CB95F6554127CCC773DA6C152C9_il2cpp_TypeInfo_var)))
		{
			goto IL_0010;
		}
	}
	{
		LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * L_1 = ___expression0;
		NullCheck(L_1);
		VirtActionInvoker1< LogicalExpressionVisitor_t4FEC2A3FF1F4D8E4207828C80EBEC796EC6AED13 * >::Invoke(4 /* System.Void Naninovel.NCalc.Domain.LogicalExpression::Accept(Naninovel.NCalc.Domain.LogicalExpressionVisitor) */, L_1, __this);
		return;
	}

IL_0010:
	{
		StringBuilder_t * L_2;
		L_2 = SerializationVisitor_get_Result_m86A4A31AF1084FBA20548920573755CE396F8A31_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		StringBuilder_t * L_3;
		L_3 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_2, _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73, /*hidden argument*/NULL);
		LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * L_4 = ___expression0;
		NullCheck(L_4);
		VirtActionInvoker1< LogicalExpressionVisitor_t4FEC2A3FF1F4D8E4207828C80EBEC796EC6AED13 * >::Invoke(4 /* System.Void Naninovel.NCalc.Domain.LogicalExpression::Accept(Naninovel.NCalc.Domain.LogicalExpressionVisitor) */, L_4, __this);
		goto IL_0044;
	}

IL_002a:
	{
		StringBuilder_t * L_5;
		L_5 = SerializationVisitor_get_Result_m86A4A31AF1084FBA20548920573755CE396F8A31_inline(__this, /*hidden argument*/NULL);
		StringBuilder_t * L_6;
		L_6 = SerializationVisitor_get_Result_m86A4A31AF1084FBA20548920573755CE396F8A31_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		int32_t L_7;
		L_7 = StringBuilder_get_Length_m680500263C59ACFD9582BF2AEEED8E92C87FF5C0(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		StringBuilder_t * L_8;
		L_8 = StringBuilder_Remove_m6ABF9CF3D10160EB52E0768262A9B179F987571E(L_5, ((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)1)), 1, /*hidden argument*/NULL);
	}

IL_0044:
	{
		StringBuilder_t * L_9;
		L_9 = SerializationVisitor_get_Result_m86A4A31AF1084FBA20548920573755CE396F8A31_inline(__this, /*hidden argument*/NULL);
		StringBuilder_t * L_10;
		L_10 = SerializationVisitor_get_Result_m86A4A31AF1084FBA20548920573755CE396F8A31_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		int32_t L_11;
		L_11 = StringBuilder_get_Length_m680500263C59ACFD9582BF2AEEED8E92C87FF5C0(L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		Il2CppChar L_12;
		L_12 = StringBuilder_get_Chars_m5961A0987EEF0A0F8C335048A33EC4584B53F1E3(L_9, ((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)1)), /*hidden argument*/NULL);
		if ((((int32_t)L_12) == ((int32_t)((int32_t)32))))
		{
			goto IL_002a;
		}
	}
	{
		StringBuilder_t * L_13;
		L_13 = SerializationVisitor_get_Result_m86A4A31AF1084FBA20548920573755CE396F8A31_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		StringBuilder_t * L_14;
		L_14 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_13, _stringLiteralC087E631060AB76B7C814C0E1B92D5C7C4C4B924, /*hidden argument*/NULL);
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
// System.Void Naninovel.Antlr.Runtime.SpecialStateTransitionHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpecialStateTransitionHandler__ctor_m3A5176EE260726B032ACC6EC102654206D9B9F63 (SpecialStateTransitionHandler_t27F1B147487F7736825C69BA1576DEFD7AACA37C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 Naninovel.Antlr.Runtime.SpecialStateTransitionHandler::Invoke(Naninovel.Antlr.Runtime.DFA,System.Int32,Naninovel.Antlr.Runtime.IIntStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpecialStateTransitionHandler_Invoke_mCA711881F073F1202C07AD822AFC3CCD2B84093B (SpecialStateTransitionHandler_t27F1B147487F7736825C69BA1576DEFD7AACA37C * __this, DFA_t96370EB42325F06C749FB6668FF6025F2D7BFDB3 * ___dfa0, int32_t ___s1, RuntimeObject* ___input2, const RuntimeMethod* method)
{
	int32_t result = 0;
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
			if (___parameterCount == 3)
			{
				// open
				typedef int32_t (*FunctionPointerType) (DFA_t96370EB42325F06C749FB6668FF6025F2D7BFDB3 *, int32_t, RuntimeObject*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___dfa0, ___s1, ___input2, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, DFA_t96370EB42325F06C749FB6668FF6025F2D7BFDB3 *, int32_t, RuntimeObject*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___dfa0, ___s1, ___input2, targetMethod);
			}
		}
		else if (___parameterCount != 3)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker2< int32_t, int32_t, RuntimeObject* >::Invoke(targetMethod, ___dfa0, ___s1, ___input2);
					else
						result = GenericVirtFuncInvoker2< int32_t, int32_t, RuntimeObject* >::Invoke(targetMethod, ___dfa0, ___s1, ___input2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< int32_t, int32_t, RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___dfa0, ___s1, ___input2);
					else
						result = VirtFuncInvoker2< int32_t, int32_t, RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___dfa0, ___s1, ___input2);
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (DFA_t96370EB42325F06C749FB6668FF6025F2D7BFDB3 *, int32_t, RuntimeObject*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___dfa0, ___s1, ___input2, targetMethod);
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
						result = GenericInterfaceFuncInvoker3< int32_t, DFA_t96370EB42325F06C749FB6668FF6025F2D7BFDB3 *, int32_t, RuntimeObject* >::Invoke(targetMethod, targetThis, ___dfa0, ___s1, ___input2);
					else
						result = GenericVirtFuncInvoker3< int32_t, DFA_t96370EB42325F06C749FB6668FF6025F2D7BFDB3 *, int32_t, RuntimeObject* >::Invoke(targetMethod, targetThis, ___dfa0, ___s1, ___input2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker3< int32_t, DFA_t96370EB42325F06C749FB6668FF6025F2D7BFDB3 *, int32_t, RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___dfa0, ___s1, ___input2);
					else
						result = VirtFuncInvoker3< int32_t, DFA_t96370EB42325F06C749FB6668FF6025F2D7BFDB3 *, int32_t, RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___dfa0, ___s1, ___input2);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef int32_t (*FunctionPointerType) (DFA_t96370EB42325F06C749FB6668FF6025F2D7BFDB3 *, int32_t, RuntimeObject*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___dfa0, ___s1, ___input2, targetMethod);
				}
				else
				{
					typedef int32_t (*FunctionPointerType) (void*, DFA_t96370EB42325F06C749FB6668FF6025F2D7BFDB3 *, int32_t, RuntimeObject*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___dfa0, ___s1, ___input2, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Naninovel.Antlr.Runtime.SpecialStateTransitionHandler::BeginInvoke(Naninovel.Antlr.Runtime.DFA,System.Int32,Naninovel.Antlr.Runtime.IIntStream,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SpecialStateTransitionHandler_BeginInvoke_m89F464CD2CEB4D58193F4FBCF33FA7489D6D952D (SpecialStateTransitionHandler_t27F1B147487F7736825C69BA1576DEFD7AACA37C * __this, DFA_t96370EB42325F06C749FB6668FF6025F2D7BFDB3 * ___dfa0, int32_t ___s1, RuntimeObject* ___input2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___dfa0;
	__d_args[1] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___s1);
	__d_args[2] = ___input2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Int32 Naninovel.Antlr.Runtime.SpecialStateTransitionHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpecialStateTransitionHandler_EndInvoke_m98071BEF93FBBE7C83C5B4EF9B1DF285C69B0E3C (SpecialStateTransitionHandler_t27F1B147487F7736825C69BA1576DEFD7AACA37C * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Naninovel.NCalc.Domain.TernaryExpression::.ctor(Naninovel.NCalc.Domain.LogicalExpression,Naninovel.NCalc.Domain.LogicalExpression,Naninovel.NCalc.Domain.LogicalExpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TernaryExpression__ctor_m3CBC9FD609CB0598D9CA3DD824D91436A7B068AE (TernaryExpression_tB518CB82C2E5F08ACA68A8062B3076B8614252A8 * __this, LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * ___leftExpression0, LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * ___middleExpression1, LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * ___rightExpression2, const RuntimeMethod* method)
{
	{
		LogicalExpression__ctor_mD386835649582E50D469E32CB8EF66D815D8A53D(__this, /*hidden argument*/NULL);
		LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * L_0 = ___leftExpression0;
		TernaryExpression_set_LeftExpression_mD8D7DEE6E2CA7103DF027048D7CCD8736813F5DA_inline(__this, L_0, /*hidden argument*/NULL);
		LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * L_1 = ___middleExpression1;
		TernaryExpression_set_MiddleExpression_mED2D2AD67A43EE9F211CBE4644ED551CEFC21727_inline(__this, L_1, /*hidden argument*/NULL);
		LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * L_2 = ___rightExpression2;
		TernaryExpression_set_RightExpression_m5A2857236329C9385F8F133B0F4FA962D97BD6E3_inline(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// Naninovel.NCalc.Domain.LogicalExpression Naninovel.NCalc.Domain.TernaryExpression::get_LeftExpression()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * TernaryExpression_get_LeftExpression_m77B0DFDE3F7D09EC6CB9530F1CD05D1FF030D533 (TernaryExpression_tB518CB82C2E5F08ACA68A8062B3076B8614252A8 * __this, const RuntimeMethod* method)
{
	{
		LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * L_0 = __this->get_U3CLeftExpressionU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Naninovel.NCalc.Domain.TernaryExpression::set_LeftExpression(Naninovel.NCalc.Domain.LogicalExpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TernaryExpression_set_LeftExpression_mD8D7DEE6E2CA7103DF027048D7CCD8736813F5DA (TernaryExpression_tB518CB82C2E5F08ACA68A8062B3076B8614252A8 * __this, LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * ___value0, const RuntimeMethod* method)
{
	{
		LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * L_0 = ___value0;
		__this->set_U3CLeftExpressionU3Ek__BackingField_0(L_0);
		return;
	}
}
// Naninovel.NCalc.Domain.LogicalExpression Naninovel.NCalc.Domain.TernaryExpression::get_MiddleExpression()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * TernaryExpression_get_MiddleExpression_mD9A14BB9DCD0EF78870AAD92FC5CABE1335B55C3 (TernaryExpression_tB518CB82C2E5F08ACA68A8062B3076B8614252A8 * __this, const RuntimeMethod* method)
{
	{
		LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * L_0 = __this->get_U3CMiddleExpressionU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Naninovel.NCalc.Domain.TernaryExpression::set_MiddleExpression(Naninovel.NCalc.Domain.LogicalExpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TernaryExpression_set_MiddleExpression_mED2D2AD67A43EE9F211CBE4644ED551CEFC21727 (TernaryExpression_tB518CB82C2E5F08ACA68A8062B3076B8614252A8 * __this, LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * ___value0, const RuntimeMethod* method)
{
	{
		LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * L_0 = ___value0;
		__this->set_U3CMiddleExpressionU3Ek__BackingField_1(L_0);
		return;
	}
}
// Naninovel.NCalc.Domain.LogicalExpression Naninovel.NCalc.Domain.TernaryExpression::get_RightExpression()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * TernaryExpression_get_RightExpression_m106754242C74124B03A7E967F105DCD4C5FE3A88 (TernaryExpression_tB518CB82C2E5F08ACA68A8062B3076B8614252A8 * __this, const RuntimeMethod* method)
{
	{
		LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * L_0 = __this->get_U3CRightExpressionU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Naninovel.NCalc.Domain.TernaryExpression::set_RightExpression(Naninovel.NCalc.Domain.LogicalExpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TernaryExpression_set_RightExpression_m5A2857236329C9385F8F133B0F4FA962D97BD6E3 (TernaryExpression_tB518CB82C2E5F08ACA68A8062B3076B8614252A8 * __this, LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * ___value0, const RuntimeMethod* method)
{
	{
		LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * L_0 = ___value0;
		__this->set_U3CRightExpressionU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Void Naninovel.NCalc.Domain.TernaryExpression::Accept(Naninovel.NCalc.Domain.LogicalExpressionVisitor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TernaryExpression_Accept_mA75F7CA591FE97EA9C4FAC2CDF9F6E4A6F267097 (TernaryExpression_tB518CB82C2E5F08ACA68A8062B3076B8614252A8 * __this, LogicalExpressionVisitor_t4FEC2A3FF1F4D8E4207828C80EBEC796EC6AED13 * ___visitor0, const RuntimeMethod* method)
{
	{
		LogicalExpressionVisitor_t4FEC2A3FF1F4D8E4207828C80EBEC796EC6AED13 * L_0 = ___visitor0;
		NullCheck(L_0);
		VirtActionInvoker1< TernaryExpression_tB518CB82C2E5F08ACA68A8062B3076B8614252A8 * >::Invoke(5 /* System.Void Naninovel.NCalc.Domain.LogicalExpressionVisitor::Visit(Naninovel.NCalc.Domain.TernaryExpression) */, L_0, __this);
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
// System.Void Naninovel.Antlr.Runtime.Tokens::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tokens__cctor_m8F4C8EFD7D197FF0F792AD3F14B30C4DA5664212 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonToken_tAD014B56C894BF06C90025CC6BE550B60C31B668_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tokens_1_t79E905ACB671E7A5D400442DF0E8EF9C4E6FF1D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tokens_tDC8B3C3FB6A2724A8AF82592E67CA6F41BCA22F2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Tokens_1_t79E905ACB671E7A5D400442DF0E8EF9C4E6FF1D7_il2cpp_TypeInfo_var);
		CommonToken_tAD014B56C894BF06C90025CC6BE550B60C31B668 * L_0 = ((Tokens_1_t79E905ACB671E7A5D400442DF0E8EF9C4E6FF1D7_StaticFields*)il2cpp_codegen_static_fields_for(Tokens_1_t79E905ACB671E7A5D400442DF0E8EF9C4E6FF1D7_il2cpp_TypeInfo_var))->get_EndOfFile_0();
		((Tokens_tDC8B3C3FB6A2724A8AF82592E67CA6F41BCA22F2_StaticFields*)il2cpp_codegen_static_fields_for(Tokens_tDC8B3C3FB6A2724A8AF82592E67CA6F41BCA22F2_il2cpp_TypeInfo_var))->set_EndOfFile_0(L_0);
		CommonToken_tAD014B56C894BF06C90025CC6BE550B60C31B668 * L_1 = (CommonToken_tAD014B56C894BF06C90025CC6BE550B60C31B668 *)il2cpp_codegen_object_new(CommonToken_tAD014B56C894BF06C90025CC6BE550B60C31B668_il2cpp_TypeInfo_var);
		CommonToken__ctor_mAC3047B7E415643A8FCC52A22E8FFE27EBDA23BC(L_1, 0, /*hidden argument*/NULL);
		((Tokens_tDC8B3C3FB6A2724A8AF82592E67CA6F41BCA22F2_StaticFields*)il2cpp_codegen_static_fields_for(Tokens_tDC8B3C3FB6A2724A8AF82592E67CA6F41BCA22F2_il2cpp_TypeInfo_var))->set_Invalid_1(L_1);
		CommonToken_tAD014B56C894BF06C90025CC6BE550B60C31B668 * L_2 = (CommonToken_tAD014B56C894BF06C90025CC6BE550B60C31B668 *)il2cpp_codegen_object_new(CommonToken_tAD014B56C894BF06C90025CC6BE550B60C31B668_il2cpp_TypeInfo_var);
		CommonToken__ctor_mAC3047B7E415643A8FCC52A22E8FFE27EBDA23BC(L_2, 0, /*hidden argument*/NULL);
		((Tokens_tDC8B3C3FB6A2724A8AF82592E67CA6F41BCA22F2_StaticFields*)il2cpp_codegen_static_fields_for(Tokens_tDC8B3C3FB6A2724A8AF82592E67CA6F41BCA22F2_il2cpp_TypeInfo_var))->set_Skip_2(L_2);
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
// System.TypeCode Naninovel.NCalc.TypeExtensions::GetTypeCode(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TypeExtensions_GetTypeCode_mB663BC14FB0E7AA37949494EB4C9002997A1F49A (RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeExtensions_tE1DD98AE3B6855ED7E4CC08F646E06243174E287_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (int32_t)(0);
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___obj0;
		NullCheck(L_1);
		Type_t * L_2;
		L_2 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(TypeExtensions_tE1DD98AE3B6855ED7E4CC08F646E06243174E287_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = TypeExtensions_ToTypeCode_m02D963DF5E91F38666BF9B52B5964814D4880127(L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.TypeCode Naninovel.NCalc.TypeExtensions::ToTypeCode(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TypeExtensions_ToTypeCode_m02D963DF5E91F38666BF9B52B5964814D4880127 (Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mEB7779B1C76872FE124E0485DC70AC544C78825E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeExtensions_tE1DD98AE3B6855ED7E4CC08F646E06243174E287_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Type_t * L_0 = ___type0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_0, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000b;
		}
	}
	{
		return (int32_t)(0);
	}

IL_000b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(TypeExtensions_tE1DD98AE3B6855ED7E4CC08F646E06243174E287_il2cpp_TypeInfo_var);
		Dictionary_2_tD1E7320AFFDAE6777C97AF253CBDC0E6858A81A5 * L_2 = ((TypeExtensions_tE1DD98AE3B6855ED7E4CC08F646E06243174E287_StaticFields*)il2cpp_codegen_static_fields_for(TypeExtensions_tE1DD98AE3B6855ED7E4CC08F646E06243174E287_il2cpp_TypeInfo_var))->get_TypeCodeMap_0();
		Type_t * L_3 = ___type0;
		NullCheck(L_2);
		bool L_4;
		L_4 = Dictionary_2_TryGetValue_mEB7779B1C76872FE124E0485DC70AC544C78825E(L_2, L_3, (int32_t*)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_mEB7779B1C76872FE124E0485DC70AC544C78825E_RuntimeMethod_var);
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		V_0 = 1;
	}

IL_001c:
	{
		int32_t L_5 = V_0;
		return L_5;
	}
}
// System.Void Naninovel.NCalc.TypeExtensions::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeExtensions__cctor_m86954685894B48582BA20C5B43D07816E20D1A2A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mC767F10D68C167C03A96F658AD04CAC22B1648AD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m2463ED61645C6B1B0AD8AB4DB052897E2AE10847_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tD1E7320AFFDAE6777C97AF253CBDC0E6858A81A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tD0F031114106263BB459DA1F099FF9F42691295A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeExtensions_tE1DD98AE3B6855ED7E4CC08F646E06243174E287_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_tD1E7320AFFDAE6777C97AF253CBDC0E6858A81A5 * L_0 = (Dictionary_2_tD1E7320AFFDAE6777C97AF253CBDC0E6858A81A5 *)il2cpp_codegen_object_new(Dictionary_2_tD1E7320AFFDAE6777C97AF253CBDC0E6858A81A5_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2463ED61645C6B1B0AD8AB4DB052897E2AE10847(L_0, /*hidden argument*/Dictionary_2__ctor_m2463ED61645C6B1B0AD8AB4DB052897E2AE10847_RuntimeMethod_var);
		Dictionary_2_tD1E7320AFFDAE6777C97AF253CBDC0E6858A81A5 * L_1 = L_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_2 = { reinterpret_cast<intptr_t> (Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3;
		L_3 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		Dictionary_2_Add_mC767F10D68C167C03A96F658AD04CAC22B1648AD(L_1, L_3, 3, /*hidden argument*/Dictionary_2_Add_mC767F10D68C167C03A96F658AD04CAC22B1648AD_RuntimeMethod_var);
		Dictionary_2_tD1E7320AFFDAE6777C97AF253CBDC0E6858A81A5 * L_4 = L_1;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_5 = { reinterpret_cast<intptr_t> (Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_0_0_0_var) };
		Type_t * L_6;
		L_6 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		Dictionary_2_Add_mC767F10D68C167C03A96F658AD04CAC22B1648AD(L_4, L_6, 6, /*hidden argument*/Dictionary_2_Add_mC767F10D68C167C03A96F658AD04CAC22B1648AD_RuntimeMethod_var);
		Dictionary_2_tD1E7320AFFDAE6777C97AF253CBDC0E6858A81A5 * L_7 = L_4;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_8 = { reinterpret_cast<intptr_t> (SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_0_0_0_var) };
		Type_t * L_9;
		L_9 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		Dictionary_2_Add_mC767F10D68C167C03A96F658AD04CAC22B1648AD(L_7, L_9, 5, /*hidden argument*/Dictionary_2_Add_mC767F10D68C167C03A96F658AD04CAC22B1648AD_RuntimeMethod_var);
		Dictionary_2_tD1E7320AFFDAE6777C97AF253CBDC0E6858A81A5 * L_10 = L_7;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_11 = { reinterpret_cast<intptr_t> (Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_0_0_0_var) };
		Type_t * L_12;
		L_12 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		Dictionary_2_Add_mC767F10D68C167C03A96F658AD04CAC22B1648AD(L_10, L_12, 4, /*hidden argument*/Dictionary_2_Add_mC767F10D68C167C03A96F658AD04CAC22B1648AD_RuntimeMethod_var);
		Dictionary_2_tD1E7320AFFDAE6777C97AF253CBDC0E6858A81A5 * L_13 = L_10;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_14 = { reinterpret_cast<intptr_t> (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_0_0_0_var) };
		Type_t * L_15;
		L_15 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_14, /*hidden argument*/NULL);
		NullCheck(L_13);
		Dictionary_2_Add_mC767F10D68C167C03A96F658AD04CAC22B1648AD(L_13, L_15, ((int32_t)16), /*hidden argument*/Dictionary_2_Add_mC767F10D68C167C03A96F658AD04CAC22B1648AD_RuntimeMethod_var);
		Dictionary_2_tD1E7320AFFDAE6777C97AF253CBDC0E6858A81A5 * L_16 = L_13;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_17 = { reinterpret_cast<intptr_t> (Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_0_0_0_var) };
		Type_t * L_18;
		L_18 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_17, /*hidden argument*/NULL);
		NullCheck(L_16);
		Dictionary_2_Add_mC767F10D68C167C03A96F658AD04CAC22B1648AD(L_16, L_18, ((int32_t)15), /*hidden argument*/Dictionary_2_Add_mC767F10D68C167C03A96F658AD04CAC22B1648AD_RuntimeMethod_var);
		Dictionary_2_tD1E7320AFFDAE6777C97AF253CBDC0E6858A81A5 * L_19 = L_16;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_20 = { reinterpret_cast<intptr_t> (Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_0_0_0_var) };
		Type_t * L_21;
		L_21 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_20, /*hidden argument*/NULL);
		NullCheck(L_19);
		Dictionary_2_Add_mC767F10D68C167C03A96F658AD04CAC22B1648AD(L_19, L_21, ((int32_t)14), /*hidden argument*/Dictionary_2_Add_mC767F10D68C167C03A96F658AD04CAC22B1648AD_RuntimeMethod_var);
		Dictionary_2_tD1E7320AFFDAE6777C97AF253CBDC0E6858A81A5 * L_22 = L_19;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_23 = { reinterpret_cast<intptr_t> (Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var) };
		Type_t * L_24;
		L_24 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_23, /*hidden argument*/NULL);
		NullCheck(L_22);
		Dictionary_2_Add_mC767F10D68C167C03A96F658AD04CAC22B1648AD(L_22, L_24, ((int32_t)13), /*hidden argument*/Dictionary_2_Add_mC767F10D68C167C03A96F658AD04CAC22B1648AD_RuntimeMethod_var);
		Dictionary_2_tD1E7320AFFDAE6777C97AF253CBDC0E6858A81A5 * L_25 = L_22;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_26 = { reinterpret_cast<intptr_t> (Int16_tD0F031114106263BB459DA1F099FF9F42691295A_0_0_0_var) };
		Type_t * L_27;
		L_27 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_26, /*hidden argument*/NULL);
		NullCheck(L_25);
		Dictionary_2_Add_mC767F10D68C167C03A96F658AD04CAC22B1648AD(L_25, L_27, 7, /*hidden argument*/Dictionary_2_Add_mC767F10D68C167C03A96F658AD04CAC22B1648AD_RuntimeMethod_var);
		Dictionary_2_tD1E7320AFFDAE6777C97AF253CBDC0E6858A81A5 * L_28 = L_25;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_29 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		Type_t * L_30;
		L_30 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_29, /*hidden argument*/NULL);
		NullCheck(L_28);
		Dictionary_2_Add_mC767F10D68C167C03A96F658AD04CAC22B1648AD(L_28, L_30, ((int32_t)9), /*hidden argument*/Dictionary_2_Add_mC767F10D68C167C03A96F658AD04CAC22B1648AD_RuntimeMethod_var);
		Dictionary_2_tD1E7320AFFDAE6777C97AF253CBDC0E6858A81A5 * L_31 = L_28;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_32 = { reinterpret_cast<intptr_t> (Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_0_0_0_var) };
		Type_t * L_33;
		L_33 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_32, /*hidden argument*/NULL);
		NullCheck(L_31);
		Dictionary_2_Add_mC767F10D68C167C03A96F658AD04CAC22B1648AD(L_31, L_33, ((int32_t)11), /*hidden argument*/Dictionary_2_Add_mC767F10D68C167C03A96F658AD04CAC22B1648AD_RuntimeMethod_var);
		Dictionary_2_tD1E7320AFFDAE6777C97AF253CBDC0E6858A81A5 * L_34 = L_31;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_35 = { reinterpret_cast<intptr_t> (UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_0_0_0_var) };
		Type_t * L_36;
		L_36 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_35, /*hidden argument*/NULL);
		NullCheck(L_34);
		Dictionary_2_Add_mC767F10D68C167C03A96F658AD04CAC22B1648AD(L_34, L_36, 8, /*hidden argument*/Dictionary_2_Add_mC767F10D68C167C03A96F658AD04CAC22B1648AD_RuntimeMethod_var);
		Dictionary_2_tD1E7320AFFDAE6777C97AF253CBDC0E6858A81A5 * L_37 = L_34;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_38 = { reinterpret_cast<intptr_t> (UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_0_0_0_var) };
		Type_t * L_39;
		L_39 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_38, /*hidden argument*/NULL);
		NullCheck(L_37);
		Dictionary_2_Add_mC767F10D68C167C03A96F658AD04CAC22B1648AD(L_37, L_39, ((int32_t)10), /*hidden argument*/Dictionary_2_Add_mC767F10D68C167C03A96F658AD04CAC22B1648AD_RuntimeMethod_var);
		Dictionary_2_tD1E7320AFFDAE6777C97AF253CBDC0E6858A81A5 * L_40 = L_37;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_41 = { reinterpret_cast<intptr_t> (UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_0_0_0_var) };
		Type_t * L_42;
		L_42 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_41, /*hidden argument*/NULL);
		NullCheck(L_40);
		Dictionary_2_Add_mC767F10D68C167C03A96F658AD04CAC22B1648AD(L_40, L_42, ((int32_t)12), /*hidden argument*/Dictionary_2_Add_mC767F10D68C167C03A96F658AD04CAC22B1648AD_RuntimeMethod_var);
		Dictionary_2_tD1E7320AFFDAE6777C97AF253CBDC0E6858A81A5 * L_43 = L_40;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_44 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t * L_45;
		L_45 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_44, /*hidden argument*/NULL);
		NullCheck(L_43);
		Dictionary_2_Add_mC767F10D68C167C03A96F658AD04CAC22B1648AD(L_43, L_45, ((int32_t)18), /*hidden argument*/Dictionary_2_Add_mC767F10D68C167C03A96F658AD04CAC22B1648AD_RuntimeMethod_var);
		((TypeExtensions_tE1DD98AE3B6855ED7E4CC08F646E06243174E287_StaticFields*)il2cpp_codegen_static_fields_for(TypeExtensions_tE1DD98AE3B6855ED7E4CC08F646E06243174E287_il2cpp_TypeInfo_var))->set_TypeCodeMap_0(L_43);
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
// System.Void Naninovel.NCalc.Domain.UnaryExpression::.ctor(Naninovel.NCalc.Domain.UnaryExpressionType,Naninovel.NCalc.Domain.LogicalExpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnaryExpression__ctor_m7504FA999708EFB3A9B0399C9A77C642DABF9400 (UnaryExpression_t726EAD7F63036A3F19780AC9E55AD4715F567A9C * __this, int32_t ___type0, LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * ___expression1, const RuntimeMethod* method)
{
	{
		LogicalExpression__ctor_mD386835649582E50D469E32CB8EF66D815D8A53D(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___type0;
		UnaryExpression_set_Type_mC6D80EC44E842AEA674E3EB92AFC37930DC28C05_inline(__this, L_0, /*hidden argument*/NULL);
		LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * L_1 = ___expression1;
		UnaryExpression_set_Expression_m3B74F4F793C61AA248458F1D41F974D42C5C3353_inline(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// Naninovel.NCalc.Domain.LogicalExpression Naninovel.NCalc.Domain.UnaryExpression::get_Expression()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * UnaryExpression_get_Expression_m6EF74F22F871FB6C6A126F8E9A616A99E95FAF1F (UnaryExpression_t726EAD7F63036A3F19780AC9E55AD4715F567A9C * __this, const RuntimeMethod* method)
{
	{
		LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * L_0 = __this->get_U3CExpressionU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Naninovel.NCalc.Domain.UnaryExpression::set_Expression(Naninovel.NCalc.Domain.LogicalExpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnaryExpression_set_Expression_m3B74F4F793C61AA248458F1D41F974D42C5C3353 (UnaryExpression_t726EAD7F63036A3F19780AC9E55AD4715F567A9C * __this, LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * ___value0, const RuntimeMethod* method)
{
	{
		LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * L_0 = ___value0;
		__this->set_U3CExpressionU3Ek__BackingField_0(L_0);
		return;
	}
}
// Naninovel.NCalc.Domain.UnaryExpressionType Naninovel.NCalc.Domain.UnaryExpression::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnaryExpression_get_Type_m8A96E64024BB216BF33300527066AC7FE825366D (UnaryExpression_t726EAD7F63036A3F19780AC9E55AD4715F567A9C * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CTypeU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Naninovel.NCalc.Domain.UnaryExpression::set_Type(Naninovel.NCalc.Domain.UnaryExpressionType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnaryExpression_set_Type_mC6D80EC44E842AEA674E3EB92AFC37930DC28C05 (UnaryExpression_t726EAD7F63036A3F19780AC9E55AD4715F567A9C * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CTypeU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void Naninovel.NCalc.Domain.UnaryExpression::Accept(Naninovel.NCalc.Domain.LogicalExpressionVisitor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnaryExpression_Accept_m97B5F97D75C6DD047A1900BDF293CAC11318D575 (UnaryExpression_t726EAD7F63036A3F19780AC9E55AD4715F567A9C * __this, LogicalExpressionVisitor_t4FEC2A3FF1F4D8E4207828C80EBEC796EC6AED13 * ___visitor0, const RuntimeMethod* method)
{
	{
		LogicalExpressionVisitor_t4FEC2A3FF1F4D8E4207828C80EBEC796EC6AED13 * L_0 = ___visitor0;
		NullCheck(L_0);
		VirtActionInvoker1< UnaryExpression_t726EAD7F63036A3F19780AC9E55AD4715F567A9C * >::Invoke(7 /* System.Void Naninovel.NCalc.Domain.LogicalExpressionVisitor::Visit(Naninovel.NCalc.Domain.UnaryExpression) */, L_0, __this);
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
// System.Void Naninovel.Antlr.Runtime.UnwantedTokenException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnwantedTokenException__ctor_mCD783FB05ED62805460458C328CB397D42F208A2 (UnwantedTokenException_t479DCB651C50887711B47AEB2A234B1660CC95A3 * __this, const RuntimeMethod* method)
{
	{
		MismatchedTokenException__ctor_m86C63A8297BD25673D4AB712AE40BEC0D7378C70(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Naninovel.Antlr.Runtime.UnwantedTokenException::.ctor(System.Int32,Naninovel.Antlr.Runtime.IIntStream,System.Collections.Generic.IList`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnwantedTokenException__ctor_mAF8033E14C5F759709D533BC6B4BF5257CB5F535 (UnwantedTokenException_t479DCB651C50887711B47AEB2A234B1660CC95A3 * __this, int32_t ___expecting0, RuntimeObject* ___input1, RuntimeObject* ___tokenNames2, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___expecting0;
		RuntimeObject* L_1 = ___input1;
		RuntimeObject* L_2 = ___tokenNames2;
		MismatchedTokenException__ctor_m5526F12F0DE096828BA16DB516C4AA4F7A0E95F4(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Naninovel.Antlr.Runtime.UnwantedTokenException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnwantedTokenException__ctor_m996FA7C7F0D036C4C52A0F02F885B7546A378735 (UnwantedTokenException_t479DCB651C50887711B47AEB2A234B1660CC95A3 * __this, SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ___info0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, const RuntimeMethod* method)
{
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_0 = ___info0;
		StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  L_1 = ___context1;
		MismatchedTokenException__ctor_mE1C76B324723AD37D13348747CC40D0FB069435E(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// Naninovel.Antlr.Runtime.IToken Naninovel.Antlr.Runtime.UnwantedTokenException::get_UnexpectedToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnwantedTokenException_get_UnexpectedToken_mBA19F4C71DCCC7BD45A3465B2971EF612F84D591 (UnwantedTokenException_t479DCB651C50887711B47AEB2A234B1660CC95A3 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = RecognitionException_get_Token_m1452A2EF907C38B39351DBC8D9E02AEDD27F284B_inline(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String Naninovel.Antlr.Runtime.UnwantedTokenException::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnwantedTokenException_ToString_m855BD2BC5ACB81D3C2197F876D9D5256602508CE (UnwantedTokenException_t479DCB651C50887711B47AEB2A234B1660CC95A3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t0DEEE9C1FBAC843AF39112E1AD14FDA3A5C230A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyCollection_1_get_Count_m0305A3E9E3584B020FC61CD5605898C600D69AE7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyCollection_1_get_Item_m2CA4EA69200FE3AD332DA97E648783A810E9CA9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral89613337171E9DEFA7887E7F72F841FC8CD2A91D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB38643AD57CD8AD5D44FF10AFEC78B1EA05C2E2);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	String_t* G_B5_0 = NULL;
	{
		ReadOnlyCollection_1_t4348A40742B97AA544A2F3845FA1C60512811C28 * L_0;
		L_0 = MismatchedTokenException_get_TokenNames_m1347F772B3E6E3483FD20A84CE1DD17322C2EF9F_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_1;
		L_1 = MismatchedTokenException_get_Expecting_m3DE6D6FCC74ECF15F8D0D99DBDE51820C6A8AC22_inline(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_2;
		L_2 = MismatchedTokenException_get_Expecting_m3DE6D6FCC74ECF15F8D0D99DBDE51820C6A8AC22_inline(__this, /*hidden argument*/NULL);
		ReadOnlyCollection_1_t4348A40742B97AA544A2F3845FA1C60512811C28 * L_3;
		L_3 = MismatchedTokenException_get_TokenNames_m1347F772B3E6E3483FD20A84CE1DD17322C2EF9F_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = ReadOnlyCollection_1_get_Count_m0305A3E9E3584B020FC61CD5605898C600D69AE7(L_3, /*hidden argument*/ReadOnlyCollection_1_get_Count_m0305A3E9E3584B020FC61CD5605898C600D69AE7_RuntimeMethod_var);
		if ((((int32_t)L_2) < ((int32_t)L_4)))
		{
			goto IL_0034;
		}
	}

IL_0024:
	{
		int32_t L_5;
		L_5 = MismatchedTokenException_get_Expecting_m3DE6D6FCC74ECF15F8D0D99DBDE51820C6A8AC22_inline(__this, /*hidden argument*/NULL);
		V_2 = L_5;
		String_t* L_6;
		L_6 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_2), /*hidden argument*/NULL);
		G_B5_0 = L_6;
		goto IL_0045;
	}

IL_0034:
	{
		ReadOnlyCollection_1_t4348A40742B97AA544A2F3845FA1C60512811C28 * L_7;
		L_7 = MismatchedTokenException_get_TokenNames_m1347F772B3E6E3483FD20A84CE1DD17322C2EF9F_inline(__this, /*hidden argument*/NULL);
		int32_t L_8;
		L_8 = MismatchedTokenException_get_Expecting_m3DE6D6FCC74ECF15F8D0D99DBDE51820C6A8AC22_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		String_t* L_9;
		L_9 = ReadOnlyCollection_1_get_Item_m2CA4EA69200FE3AD332DA97E648783A810E9CA9C(L_7, L_8, /*hidden argument*/ReadOnlyCollection_1_get_Item_m2CA4EA69200FE3AD332DA97E648783A810E9CA9C_RuntimeMethod_var);
		G_B5_0 = L_9;
	}

IL_0045:
	{
		V_0 = G_B5_0;
		String_t* L_10 = V_0;
		String_t* L_11;
		L_11 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral89613337171E9DEFA7887E7F72F841FC8CD2A91D, L_10, /*hidden argument*/NULL);
		V_1 = L_11;
		int32_t L_12;
		L_12 = MismatchedTokenException_get_Expecting_m3DE6D6FCC74ECF15F8D0D99DBDE51820C6A8AC22_inline(__this, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_0060;
		}
	}
	{
		V_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_0060:
	{
		RuntimeObject* L_13;
		L_13 = RecognitionException_get_Token_m1452A2EF907C38B39351DBC8D9E02AEDD27F284B_inline(__this, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_0079;
		}
	}
	{
		String_t* L_14 = V_1;
		String_t* L_15;
		L_15 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteralDB38643AD57CD8AD5D44FF10AFEC78B1EA05C2E2, L_14, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, /*hidden argument*/NULL);
		return L_15;
	}

IL_0079:
	{
		RuntimeObject* L_16;
		L_16 = RecognitionException_get_Token_m1452A2EF907C38B39351DBC8D9E02AEDD27F284B_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_16);
		String_t* L_17;
		L_17 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Naninovel.Antlr.Runtime.IToken::get_Text() */, IToken_t0DEEE9C1FBAC843AF39112E1AD14FDA3A5C230A6_il2cpp_TypeInfo_var, L_16);
		String_t* L_18 = V_1;
		String_t* L_19;
		L_19 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(_stringLiteralDB38643AD57CD8AD5D44FF10AFEC78B1EA05C2E2, L_17, L_18, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, /*hidden argument*/NULL);
		return L_19;
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
// System.Void Naninovel.NCalc.Domain.ValueExpression::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueExpression__ctor_m6F10869B9329D88CC08F3EFD7DCCFAD531068DC5 (ValueExpression_t1E49B717CBB41CB95F6554127CCC773DA6C152C9 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeExtensions_tE1DD98AE3B6855ED7E4CC08F646E06243174E287_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* G_B9_0 = NULL;
	String_t* G_B8_0 = NULL;
	String_t* G_B10_0 = NULL;
	String_t* G_B10_1 = NULL;
	{
		LogicalExpression__ctor_mD386835649582E50D469E32CB8EF66D815D8A53D(__this, /*hidden argument*/NULL);
		RuntimeObject * L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(TypeExtensions_tE1DD98AE3B6855ED7E4CC08F646E06243174E287_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = TypeExtensions_GetTypeCode_mB663BC14FB0E7AA37949494EB4C9002997A1F49A(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)3)))
		{
			case 0:
			{
				goto IL_0057;
			}
			case 1:
			{
				goto IL_0084;
			}
			case 2:
			{
				goto IL_0072;
			}
			case 3:
			{
				goto IL_0072;
			}
			case 4:
			{
				goto IL_0072;
			}
			case 5:
			{
				goto IL_0072;
			}
			case 6:
			{
				goto IL_0072;
			}
			case 7:
			{
				goto IL_0072;
			}
			case 8:
			{
				goto IL_0072;
			}
			case 9:
			{
				goto IL_0072;
			}
			case 10:
			{
				goto IL_0069;
			}
			case 11:
			{
				goto IL_0069;
			}
			case 12:
			{
				goto IL_0069;
			}
			case 13:
			{
				goto IL_0060;
			}
			case 14:
			{
				goto IL_0084;
			}
			case 15:
			{
				goto IL_007b;
			}
		}
	}
	{
		goto IL_0084;
	}

IL_0057:
	{
		ValueExpression_set_Type_m9980A651812880091FDDE4827EB65C9E8213E132_inline(__this, 4, /*hidden argument*/NULL);
		goto IL_00a0;
	}

IL_0060:
	{
		ValueExpression_set_Type_m9980A651812880091FDDE4827EB65C9E8213E132_inline(__this, 2, /*hidden argument*/NULL);
		goto IL_00a0;
	}

IL_0069:
	{
		ValueExpression_set_Type_m9980A651812880091FDDE4827EB65C9E8213E132_inline(__this, 3, /*hidden argument*/NULL);
		goto IL_00a0;
	}

IL_0072:
	{
		ValueExpression_set_Type_m9980A651812880091FDDE4827EB65C9E8213E132_inline(__this, 0, /*hidden argument*/NULL);
		goto IL_00a0;
	}

IL_007b:
	{
		ValueExpression_set_Type_m9980A651812880091FDDE4827EB65C9E8213E132_inline(__this, 1, /*hidden argument*/NULL);
		goto IL_00a0;
	}

IL_0084:
	{
		RuntimeObject * L_3 = ___value0;
		G_B8_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8F89784DF2CB8ABD4A4F34F5A767DF3253A9AAFE));
		if (L_3)
		{
			G_B9_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8F89784DF2CB8ABD4A4F34F5A767DF3253A9AAFE));
			goto IL_008f;
		}
	}
	{
		G_B10_0 = ((String_t*)(NULL));
		G_B10_1 = G_B8_0;
		goto IL_0095;
	}

IL_008f:
	{
		RuntimeObject * L_4 = ___value0;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_4);
		G_B10_0 = L_5;
		G_B10_1 = G_B9_0;
	}

IL_0095:
	{
		String_t* L_6;
		L_6 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(G_B10_1, G_B10_0, /*hidden argument*/NULL);
		EvaluationException_t4153896D46C5CE3F846F38E028958533206CCEC4 * L_7 = (EvaluationException_t4153896D46C5CE3F846F38E028958533206CCEC4 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EvaluationException_t4153896D46C5CE3F846F38E028958533206CCEC4_il2cpp_TypeInfo_var)));
		EvaluationException__ctor_mA54E1043C47920EDE155DC555EBDC4AC1571AF73(L_7, L_6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueExpression__ctor_m6F10869B9329D88CC08F3EFD7DCCFAD531068DC5_RuntimeMethod_var)));
	}

IL_00a0:
	{
		RuntimeObject * L_8 = ___value0;
		ValueExpression_set_Value_m357ED6C7DB3C7B63CB86A6442511DCD003B1F88A_inline(__this, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Naninovel.NCalc.Domain.ValueExpression::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueExpression__ctor_m3F90E2FF1534C45C4309C84CEEE7DF1F392FDB41 (ValueExpression_t1E49B717CBB41CB95F6554127CCC773DA6C152C9 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		LogicalExpression__ctor_mD386835649582E50D469E32CB8EF66D815D8A53D(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___value0;
		ValueExpression_set_Value_m357ED6C7DB3C7B63CB86A6442511DCD003B1F88A_inline(__this, L_0, /*hidden argument*/NULL);
		ValueExpression_set_Type_m9980A651812880091FDDE4827EB65C9E8213E132_inline(__this, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Naninovel.NCalc.Domain.ValueExpression::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueExpression__ctor_mB5578352567C2E6A6BE49277DAA235A45A05C8F5 (ValueExpression_t1E49B717CBB41CB95F6554127CCC773DA6C152C9 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		LogicalExpression__ctor_mD386835649582E50D469E32CB8EF66D815D8A53D(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___value0;
		int32_t L_1 = L_0;
		RuntimeObject * L_2 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_1);
		ValueExpression_set_Value_m357ED6C7DB3C7B63CB86A6442511DCD003B1F88A_inline(__this, L_2, /*hidden argument*/NULL);
		ValueExpression_set_Type_m9980A651812880091FDDE4827EB65C9E8213E132_inline(__this, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Naninovel.NCalc.Domain.ValueExpression::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueExpression__ctor_mC2E2EE38A0E85D59576A0052B26AAA1058979E03 (ValueExpression_t1E49B717CBB41CB95F6554127CCC773DA6C152C9 * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		LogicalExpression__ctor_mD386835649582E50D469E32CB8EF66D815D8A53D(__this, /*hidden argument*/NULL);
		float L_0 = ___value0;
		float L_1 = L_0;
		RuntimeObject * L_2 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_1);
		ValueExpression_set_Value_m357ED6C7DB3C7B63CB86A6442511DCD003B1F88A_inline(__this, L_2, /*hidden argument*/NULL);
		ValueExpression_set_Type_m9980A651812880091FDDE4827EB65C9E8213E132_inline(__this, 3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Naninovel.NCalc.Domain.ValueExpression::.ctor(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueExpression__ctor_m6202345AE4E9511EE0E9ADC4091983EF3DAECF72 (ValueExpression_t1E49B717CBB41CB95F6554127CCC773DA6C152C9 * __this, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		LogicalExpression__ctor_mD386835649582E50D469E32CB8EF66D815D8A53D(__this, /*hidden argument*/NULL);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0 = ___value0;
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_1 = L_0;
		RuntimeObject * L_2 = Box(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var, &L_1);
		ValueExpression_set_Value_m357ED6C7DB3C7B63CB86A6442511DCD003B1F88A_inline(__this, L_2, /*hidden argument*/NULL);
		ValueExpression_set_Type_m9980A651812880091FDDE4827EB65C9E8213E132_inline(__this, 2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Naninovel.NCalc.Domain.ValueExpression::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueExpression__ctor_mE36E7CF3F0A0D3DABB41AF078BAC29A93D718ABD (ValueExpression_t1E49B717CBB41CB95F6554127CCC773DA6C152C9 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		LogicalExpression__ctor_mD386835649582E50D469E32CB8EF66D815D8A53D(__this, /*hidden argument*/NULL);
		bool L_0 = ___value0;
		bool L_1 = L_0;
		RuntimeObject * L_2 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_1);
		ValueExpression_set_Value_m357ED6C7DB3C7B63CB86A6442511DCD003B1F88A_inline(__this, L_2, /*hidden argument*/NULL);
		ValueExpression_set_Type_m9980A651812880091FDDE4827EB65C9E8213E132_inline(__this, 4, /*hidden argument*/NULL);
		return;
	}
}
// System.Object Naninovel.NCalc.Domain.ValueExpression::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ValueExpression_get_Value_mA695F1A0450AB1E047716E2914A9C1334C867572 (ValueExpression_t1E49B717CBB41CB95F6554127CCC773DA6C152C9 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CValueU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Naninovel.NCalc.Domain.ValueExpression::set_Value(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueExpression_set_Value_m357ED6C7DB3C7B63CB86A6442511DCD003B1F88A (ValueExpression_t1E49B717CBB41CB95F6554127CCC773DA6C152C9 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_U3CValueU3Ek__BackingField_0(L_0);
		return;
	}
}
// Naninovel.NCalc.Domain.ValueType Naninovel.NCalc.Domain.ValueExpression::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueExpression_get_Type_m13B487027A48793E899BB46C05F1F9C3DB4126A7 (ValueExpression_t1E49B717CBB41CB95F6554127CCC773DA6C152C9 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CTypeU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Naninovel.NCalc.Domain.ValueExpression::set_Type(Naninovel.NCalc.Domain.ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueExpression_set_Type_m9980A651812880091FDDE4827EB65C9E8213E132 (ValueExpression_t1E49B717CBB41CB95F6554127CCC773DA6C152C9 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CTypeU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void Naninovel.NCalc.Domain.ValueExpression::Accept(Naninovel.NCalc.Domain.LogicalExpressionVisitor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueExpression_Accept_mFFCD6CA924D9BCBBAC89421F7EAE9456CA5CDBCD (ValueExpression_t1E49B717CBB41CB95F6554127CCC773DA6C152C9 * __this, LogicalExpressionVisitor_t4FEC2A3FF1F4D8E4207828C80EBEC796EC6AED13 * ___visitor0, const RuntimeMethod* method)
{
	{
		LogicalExpressionVisitor_t4FEC2A3FF1F4D8E4207828C80EBEC796EC6AED13 * L_0 = ___visitor0;
		NullCheck(L_0);
		VirtActionInvoker1< ValueExpression_t1E49B717CBB41CB95F6554127CCC773DA6C152C9 * >::Invoke(8 /* System.Void Naninovel.NCalc.Domain.LogicalExpressionVisitor::Visit(Naninovel.NCalc.Domain.ValueExpression) */, L_0, __this);
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
// System.Void Naninovel.NCalc.Domain.EvaluationVisitor/<>c__DisplayClass22_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass22_0__ctor_m7A686923A5C1A0B4DFE6827265EB58707925CB63 (U3CU3Ec__DisplayClass22_0_tE2DBA219B6505F442898A670ED39458F9138F243 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object Naninovel.NCalc.Domain.EvaluationVisitor/<>c__DisplayClass22_0::<Visit>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec__DisplayClass22_0_U3CVisitU3Eb__0_m05877499420DC106918AA18E9406193394491B4F (U3CU3Ec__DisplayClass22_0_tE2DBA219B6505F442898A670ED39458F9138F243 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_leftValue_0();
		if (L_0)
		{
			goto IL_002f;
		}
	}
	{
		BinaryExpression_t6B952CF817520F64ACE95BE470B2F349856B92D9 * L_1 = __this->get_expression_1();
		NullCheck(L_1);
		LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * L_2;
		L_2 = BinaryExpression_get_LeftExpression_m24757E3C644A04E5A533343DB0AB5A477F7B467D_inline(L_1, /*hidden argument*/NULL);
		EvaluationVisitor_t3A83237C8491A3205B23CE40CE4ECAF2EFB0BAB1 * L_3 = __this->get_U3CU3E4__this_2();
		NullCheck(L_2);
		VirtActionInvoker1< LogicalExpressionVisitor_t4FEC2A3FF1F4D8E4207828C80EBEC796EC6AED13 * >::Invoke(4 /* System.Void Naninovel.NCalc.Domain.LogicalExpression::Accept(Naninovel.NCalc.Domain.LogicalExpressionVisitor) */, L_2, L_3);
		EvaluationVisitor_t3A83237C8491A3205B23CE40CE4ECAF2EFB0BAB1 * L_4 = __this->get_U3CU3E4__this_2();
		NullCheck(L_4);
		RuntimeObject * L_5;
		L_5 = EvaluationVisitor_get_Result_mAD62E905A017049161B428FDB10CC8B34A1F3230_inline(L_4, /*hidden argument*/NULL);
		__this->set_leftValue_0(L_5);
	}

IL_002f:
	{
		RuntimeObject * L_6 = __this->get_leftValue_0();
		return L_6;
	}
}
// System.Object Naninovel.NCalc.Domain.EvaluationVisitor/<>c__DisplayClass22_0::<Visit>b__1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec__DisplayClass22_0_U3CVisitU3Eb__1_m342DA7AD655245A217AD89CBA46B2BA2CE4A2462 (U3CU3Ec__DisplayClass22_0_tE2DBA219B6505F442898A670ED39458F9138F243 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_rightValue_3();
		if (L_0)
		{
			goto IL_002f;
		}
	}
	{
		BinaryExpression_t6B952CF817520F64ACE95BE470B2F349856B92D9 * L_1 = __this->get_expression_1();
		NullCheck(L_1);
		LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * L_2;
		L_2 = BinaryExpression_get_RightExpression_mA1958FB72F75C1A8B427F70091648ABD3232E2A7_inline(L_1, /*hidden argument*/NULL);
		EvaluationVisitor_t3A83237C8491A3205B23CE40CE4ECAF2EFB0BAB1 * L_3 = __this->get_U3CU3E4__this_2();
		NullCheck(L_2);
		VirtActionInvoker1< LogicalExpressionVisitor_t4FEC2A3FF1F4D8E4207828C80EBEC796EC6AED13 * >::Invoke(4 /* System.Void Naninovel.NCalc.Domain.LogicalExpression::Accept(Naninovel.NCalc.Domain.LogicalExpressionVisitor) */, L_2, L_3);
		EvaluationVisitor_t3A83237C8491A3205B23CE40CE4ECAF2EFB0BAB1 * L_4 = __this->get_U3CU3E4__this_2();
		NullCheck(L_4);
		RuntimeObject * L_5;
		L_5 = EvaluationVisitor_get_Result_mAD62E905A017049161B428FDB10CC8B34A1F3230_inline(L_4, /*hidden argument*/NULL);
		__this->set_rightValue_3(L_5);
	}

IL_002f:
	{
		RuntimeObject * L_6 = __this->get_rightValue_3();
		return L_6;
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
// System.Void Naninovel.NCalc.NCalcLexer/DFA14::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DFA14__cctor_m0871E2335F6A7EC700352176092E802A96D8CCFA (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DFA14_tC9B965A0D084146E2480BD928AB4134D86F9181C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16U5BU5DU5BU5D_t543ACA7B5432CCA0395B0944D21B4E37B8825D77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral089154EBAA0CAE049B31D2C45A287D265383A152);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral097AF4A51A5BF0CB0DCBB0CC78BB061E38CC49D7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A3DDC082A107AAC3CF0C64346D5B72E0C0084EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1BD5605D605E9DB646EAFE1D24735ADE66415A92);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral215CD8D96234D677FBB0A636A3703BE57952E6A3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AC6083C483F1BF1F591977D4E71E5393F090F28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral33F1DA9C0003538318DC30913828A1E40A392432);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4BFDCF42E37B95CBF3D2171AC1F9B19216A1E284);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4F852489CE553A1F0F13DDD6AF41530F67A530D9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral55234E6D5DAF34FA810474A661C00B6476A94A72);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5ABD82D07022B1B5B219C6597FD5B252F6452D4E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6194CD45606F9D7E79024E07DA6BBCB48FC30ED0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65F97535E05DAC6C605B395369ECA52C26DA31AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B73D221EC596320F925FB04D9C0A13E84E9D995);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9061E7BA6E3CBE2417F45B8DE3615F10A01C7FF2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral92D5F105B1F3D9895F413EA6E090D9AE1D420BC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA36126B0FB56E1FF328242A6A28CC07AC8C1D963);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA648A89747674239B90448727AE724D7AA4FFA34);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAA9EB47068DE4AAAC68E6899275B8D3B9348EEF9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAC86AB9AF2791DE2DBF757337E6E1A549750EADA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1534B395382723189F07F3A82B678C2B0E1AC32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB78685C9E96592B3A1563AB8614FB95FC9C8BC7B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5052D84247EDB375A6865995A60E8ABF03D67E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5622E3A481093F632330B78ED09A288D933439D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE06E988AC69FCF2C4B1E46F33238C288BF12DC33);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE2D804F7E2FD438007BEB1F8F8CA3F7762EB71C0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF5B1331CB765F104AD6E9DE8513A99C1EB32C1C6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFAA787FF953B91B403AA9C0209F040D854A35531);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB462FA9646DDDD95BB522C691AC7B815196D11C);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)67));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteralA36126B0FB56E1FF328242A6A28CC07AC8C1D963);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralA36126B0FB56E1FF328242A6A28CC07AC8C1D963);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral55234E6D5DAF34FA810474A661C00B6476A94A72);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral55234E6D5DAF34FA810474A661C00B6476A94A72);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral9061E7BA6E3CBE2417F45B8DE3615F10A01C7FF2);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral9061E7BA6E3CBE2417F45B8DE3615F10A01C7FF2);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = L_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = L_6;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8 = L_7;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = L_8;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_10 = L_9;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_11 = L_10;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_12 = L_11;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_13 = L_12;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteral5ABD82D07022B1B5B219C6597FD5B252F6452D4E);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (String_t*)_stringLiteral5ABD82D07022B1B5B219C6597FD5B252F6452D4E);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_14 = L_13;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, _stringLiteral4F852489CE553A1F0F13DDD6AF41530F67A530D9);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (String_t*)_stringLiteral4F852489CE553A1F0F13DDD6AF41530F67A530D9);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_15 = L_14;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteralF5B1331CB765F104AD6E9DE8513A99C1EB32C1C6);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (String_t*)_stringLiteralF5B1331CB765F104AD6E9DE8513A99C1EB32C1C6);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_16 = L_15;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_17 = L_16;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)16)), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_18 = L_17;
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, _stringLiteralAC86AB9AF2791DE2DBF757337E6E1A549750EADA);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)17)), (String_t*)_stringLiteralAC86AB9AF2791DE2DBF757337E6E1A549750EADA);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_19 = L_18;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, _stringLiteral2AC6083C483F1BF1F591977D4E71E5393F090F28);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)18)), (String_t*)_stringLiteral2AC6083C483F1BF1F591977D4E71E5393F090F28);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_20 = L_19;
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, _stringLiteralC5622E3A481093F632330B78ED09A288D933439D);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)19)), (String_t*)_stringLiteralC5622E3A481093F632330B78ED09A288D933439D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_21 = L_20;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, _stringLiteralFB462FA9646DDDD95BB522C691AC7B815196D11C);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)20)), (String_t*)_stringLiteralFB462FA9646DDDD95BB522C691AC7B815196D11C);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_22 = L_21;
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)21)), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_23 = L_22;
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, _stringLiteral097AF4A51A5BF0CB0DCBB0CC78BB061E38CC49D7);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)22)), (String_t*)_stringLiteral097AF4A51A5BF0CB0DCBB0CC78BB061E38CC49D7);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_24 = L_23;
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, _stringLiteralAA9EB47068DE4AAAC68E6899275B8D3B9348EEF9);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)23)), (String_t*)_stringLiteralAA9EB47068DE4AAAC68E6899275B8D3B9348EEF9);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_25 = L_24;
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, _stringLiteral65F97535E05DAC6C605B395369ECA52C26DA31AF);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)24)), (String_t*)_stringLiteral65F97535E05DAC6C605B395369ECA52C26DA31AF);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_26 = L_25;
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, _stringLiteral4BFDCF42E37B95CBF3D2171AC1F9B19216A1E284);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)25)), (String_t*)_stringLiteral4BFDCF42E37B95CBF3D2171AC1F9B19216A1E284);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_27 = L_26;
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)26)), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_28 = L_27;
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)27)), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_29 = L_28;
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)28)), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_30 = L_29;
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)29)), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_31 = L_30;
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)30)), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_32 = L_31;
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)31)), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_33 = L_32;
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)32)), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_34 = L_33;
		NullCheck(L_34);
		ArrayElementTypeCheck (L_34, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)33)), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_35 = L_34;
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)34)), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_36 = L_35;
		NullCheck(L_36);
		ArrayElementTypeCheck (L_36, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)35)), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_37 = L_36;
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)36)), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_38 = L_37;
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)37)), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_39 = L_38;
		NullCheck(L_39);
		ArrayElementTypeCheck (L_39, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)38)), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_40 = L_39;
		NullCheck(L_40);
		ArrayElementTypeCheck (L_40, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)39)), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_41 = L_40;
		NullCheck(L_41);
		ArrayElementTypeCheck (L_41, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)40)), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_42 = L_41;
		NullCheck(L_42);
		ArrayElementTypeCheck (L_42, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)41)), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_43 = L_42;
		NullCheck(L_43);
		ArrayElementTypeCheck (L_43, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)42)), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_44 = L_43;
		NullCheck(L_44);
		ArrayElementTypeCheck (L_44, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)43)), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_45 = L_44;
		NullCheck(L_45);
		ArrayElementTypeCheck (L_45, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)44)), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_46 = L_45;
		NullCheck(L_46);
		ArrayElementTypeCheck (L_46, _stringLiteral0A3DDC082A107AAC3CF0C64346D5B72E0C0084EC);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)45)), (String_t*)_stringLiteral0A3DDC082A107AAC3CF0C64346D5B72E0C0084EC);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_47 = L_46;
		NullCheck(L_47);
		ArrayElementTypeCheck (L_47, _stringLiteralB1534B395382723189F07F3A82B678C2B0E1AC32);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)46)), (String_t*)_stringLiteralB1534B395382723189F07F3A82B678C2B0E1AC32);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_48 = L_47;
		NullCheck(L_48);
		ArrayElementTypeCheck (L_48, _stringLiteral33F1DA9C0003538318DC30913828A1E40A392432);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)47)), (String_t*)_stringLiteral33F1DA9C0003538318DC30913828A1E40A392432);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_49 = L_48;
		NullCheck(L_49);
		ArrayElementTypeCheck (L_49, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)48)), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_50 = L_49;
		NullCheck(L_50);
		ArrayElementTypeCheck (L_50, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)49)), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_51 = L_50;
		NullCheck(L_51);
		ArrayElementTypeCheck (L_51, _stringLiteralE2D804F7E2FD438007BEB1F8F8CA3F7762EB71C0);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)50)), (String_t*)_stringLiteralE2D804F7E2FD438007BEB1F8F8CA3F7762EB71C0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_52 = L_51;
		NullCheck(L_52);
		ArrayElementTypeCheck (L_52, _stringLiteralC5052D84247EDB375A6865995A60E8ABF03D67E1);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)51)), (String_t*)_stringLiteralC5052D84247EDB375A6865995A60E8ABF03D67E1);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_53 = L_52;
		NullCheck(L_53);
		ArrayElementTypeCheck (L_53, _stringLiteral6194CD45606F9D7E79024E07DA6BBCB48FC30ED0);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)52)), (String_t*)_stringLiteral6194CD45606F9D7E79024E07DA6BBCB48FC30ED0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_54 = L_53;
		NullCheck(L_54);
		ArrayElementTypeCheck (L_54, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)53)), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_55 = L_54;
		NullCheck(L_55);
		ArrayElementTypeCheck (L_55, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)54)), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_56 = L_55;
		NullCheck(L_56);
		ArrayElementTypeCheck (L_56, _stringLiteral33F1DA9C0003538318DC30913828A1E40A392432);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)55)), (String_t*)_stringLiteral33F1DA9C0003538318DC30913828A1E40A392432);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_57 = L_56;
		NullCheck(L_57);
		ArrayElementTypeCheck (L_57, _stringLiteral33F1DA9C0003538318DC30913828A1E40A392432);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)56)), (String_t*)_stringLiteral33F1DA9C0003538318DC30913828A1E40A392432);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_58 = L_57;
		NullCheck(L_58);
		ArrayElementTypeCheck (L_58, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)57)), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_59 = L_58;
		NullCheck(L_59);
		ArrayElementTypeCheck (L_59, _stringLiteral089154EBAA0CAE049B31D2C45A287D265383A152);
		(L_59)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)58)), (String_t*)_stringLiteral089154EBAA0CAE049B31D2C45A287D265383A152);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_60 = L_59;
		NullCheck(L_60);
		ArrayElementTypeCheck (L_60, _stringLiteralE06E988AC69FCF2C4B1E46F33238C288BF12DC33);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)59)), (String_t*)_stringLiteralE06E988AC69FCF2C4B1E46F33238C288BF12DC33);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_61 = L_60;
		NullCheck(L_61);
		ArrayElementTypeCheck (L_61, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_61)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)60)), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_62 = L_61;
		NullCheck(L_62);
		ArrayElementTypeCheck (L_62, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)61)), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_63 = L_62;
		NullCheck(L_63);
		ArrayElementTypeCheck (L_63, _stringLiteral33F1DA9C0003538318DC30913828A1E40A392432);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)62)), (String_t*)_stringLiteral33F1DA9C0003538318DC30913828A1E40A392432);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_64 = L_63;
		NullCheck(L_64);
		ArrayElementTypeCheck (L_64, _stringLiteral215CD8D96234D677FBB0A636A3703BE57952E6A3);
		(L_64)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)63)), (String_t*)_stringLiteral215CD8D96234D677FBB0A636A3703BE57952E6A3);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_65 = L_64;
		NullCheck(L_65);
		ArrayElementTypeCheck (L_65, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)64)), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_66 = L_65;
		NullCheck(L_66);
		ArrayElementTypeCheck (L_66, _stringLiteral33F1DA9C0003538318DC30913828A1E40A392432);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)65)), (String_t*)_stringLiteral33F1DA9C0003538318DC30913828A1E40A392432);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_67 = L_66;
		NullCheck(L_67);
		ArrayElementTypeCheck (L_67, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)66)), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		((DFA14_tC9B965A0D084146E2480BD928AB4134D86F9181C_StaticFields*)il2cpp_codegen_static_fields_for(DFA14_tC9B965A0D084146E2480BD928AB4134D86F9181C_il2cpp_TypeInfo_var))->set_DFA14_transitionS_11(L_67);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_68;
		L_68 = DFA_UnpackEncodedString_mCFCAE2FA1EDD22EFD0468E7B3523AAAE2151D3FA(_stringLiteral7B73D221EC596320F925FB04D9C0A13E84E9D995, /*hidden argument*/NULL);
		((DFA14_tC9B965A0D084146E2480BD928AB4134D86F9181C_StaticFields*)il2cpp_codegen_static_fields_for(DFA14_tC9B965A0D084146E2480BD928AB4134D86F9181C_il2cpp_TypeInfo_var))->set_DFA14_eot_12(L_68);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_69;
		L_69 = DFA_UnpackEncodedString_mCFCAE2FA1EDD22EFD0468E7B3523AAAE2151D3FA(_stringLiteral92D5F105B1F3D9895F413EA6E090D9AE1D420BC3, /*hidden argument*/NULL);
		((DFA14_tC9B965A0D084146E2480BD928AB4134D86F9181C_StaticFields*)il2cpp_codegen_static_fields_for(DFA14_tC9B965A0D084146E2480BD928AB4134D86F9181C_il2cpp_TypeInfo_var))->set_DFA14_eof_13(L_69);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_70;
		L_70 = DFA_UnpackEncodedStringToUnsignedChars_m5746E7DC654C1583256D0439D6AFD09361C059AF(_stringLiteral1BD5605D605E9DB646EAFE1D24735ADE66415A92, /*hidden argument*/NULL);
		((DFA14_tC9B965A0D084146E2480BD928AB4134D86F9181C_StaticFields*)il2cpp_codegen_static_fields_for(DFA14_tC9B965A0D084146E2480BD928AB4134D86F9181C_il2cpp_TypeInfo_var))->set_DFA14_min_14(L_70);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_71;
		L_71 = DFA_UnpackEncodedStringToUnsignedChars_m5746E7DC654C1583256D0439D6AFD09361C059AF(_stringLiteralFAA787FF953B91B403AA9C0209F040D854A35531, /*hidden argument*/NULL);
		((DFA14_tC9B965A0D084146E2480BD928AB4134D86F9181C_StaticFields*)il2cpp_codegen_static_fields_for(DFA14_tC9B965A0D084146E2480BD928AB4134D86F9181C_il2cpp_TypeInfo_var))->set_DFA14_max_15(L_71);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_72;
		L_72 = DFA_UnpackEncodedString_mCFCAE2FA1EDD22EFD0468E7B3523AAAE2151D3FA(_stringLiteralB78685C9E96592B3A1563AB8614FB95FC9C8BC7B, /*hidden argument*/NULL);
		((DFA14_tC9B965A0D084146E2480BD928AB4134D86F9181C_StaticFields*)il2cpp_codegen_static_fields_for(DFA14_tC9B965A0D084146E2480BD928AB4134D86F9181C_il2cpp_TypeInfo_var))->set_DFA14_accept_16(L_72);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_73;
		L_73 = DFA_UnpackEncodedString_mCFCAE2FA1EDD22EFD0468E7B3523AAAE2151D3FA(_stringLiteralA648A89747674239B90448727AE724D7AA4FFA34, /*hidden argument*/NULL);
		((DFA14_tC9B965A0D084146E2480BD928AB4134D86F9181C_StaticFields*)il2cpp_codegen_static_fields_for(DFA14_tC9B965A0D084146E2480BD928AB4134D86F9181C_il2cpp_TypeInfo_var))->set_DFA14_special_17(L_73);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_74 = ((DFA14_tC9B965A0D084146E2480BD928AB4134D86F9181C_StaticFields*)il2cpp_codegen_static_fields_for(DFA14_tC9B965A0D084146E2480BD928AB4134D86F9181C_il2cpp_TypeInfo_var))->get_DFA14_transitionS_11();
		NullCheck(L_74);
		V_0 = ((int32_t)((int32_t)(((RuntimeArray*)L_74)->max_length)));
		int32_t L_75 = V_0;
		Int16U5BU5DU5BU5D_t543ACA7B5432CCA0395B0944D21B4E37B8825D77* L_76 = (Int16U5BU5DU5BU5D_t543ACA7B5432CCA0395B0944D21B4E37B8825D77*)(Int16U5BU5DU5BU5D_t543ACA7B5432CCA0395B0944D21B4E37B8825D77*)SZArrayNew(Int16U5BU5DU5BU5D_t543ACA7B5432CCA0395B0944D21B4E37B8825D77_il2cpp_TypeInfo_var, (uint32_t)L_75);
		((DFA14_tC9B965A0D084146E2480BD928AB4134D86F9181C_StaticFields*)il2cpp_codegen_static_fields_for(DFA14_tC9B965A0D084146E2480BD928AB4134D86F9181C_il2cpp_TypeInfo_var))->set_DFA14_transition_18(L_76);
		V_1 = 0;
		goto IL_02e6;
	}

IL_02cf:
	{
		Int16U5BU5DU5BU5D_t543ACA7B5432CCA0395B0944D21B4E37B8825D77* L_77 = ((DFA14_tC9B965A0D084146E2480BD928AB4134D86F9181C_StaticFields*)il2cpp_codegen_static_fields_for(DFA14_tC9B965A0D084146E2480BD928AB4134D86F9181C_il2cpp_TypeInfo_var))->get_DFA14_transition_18();
		int32_t L_78 = V_1;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_79 = ((DFA14_tC9B965A0D084146E2480BD928AB4134D86F9181C_StaticFields*)il2cpp_codegen_static_fields_for(DFA14_tC9B965A0D084146E2480BD928AB4134D86F9181C_il2cpp_TypeInfo_var))->get_DFA14_transitionS_11();
		int32_t L_80 = V_1;
		NullCheck(L_79);
		int32_t L_81 = L_80;
		String_t* L_82 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_81));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_83;
		L_83 = DFA_UnpackEncodedString_mCFCAE2FA1EDD22EFD0468E7B3523AAAE2151D3FA(L_82, /*hidden argument*/NULL);
		NullCheck(L_77);
		ArrayElementTypeCheck (L_77, L_83);
		(L_77)->SetAt(static_cast<il2cpp_array_size_t>(L_78), (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)L_83);
		int32_t L_84 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_84, (int32_t)1));
	}

IL_02e6:
	{
		int32_t L_85 = V_1;
		int32_t L_86 = V_0;
		if ((((int32_t)L_85) < ((int32_t)L_86)))
		{
			goto IL_02cf;
		}
	}
	{
		return;
	}
}
// System.Void Naninovel.NCalc.NCalcLexer/DFA14::.ctor(Naninovel.Antlr.Runtime.BaseRecognizer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DFA14__ctor_mF970CC56DCBD6D15743753599882CEFDBB9C3780 (DFA14_tC9B965A0D084146E2480BD928AB4134D86F9181C * __this, BaseRecognizer_tB62A3AE694CEC553C74F519EE830E68C521C3DEC * ___recognizer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DFA14_tC9B965A0D084146E2480BD928AB4134D86F9181C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DFA__ctor_m8F6750FCA2AD76A942C9047CE217DCB1A231F4DC(__this, /*hidden argument*/NULL);
		BaseRecognizer_tB62A3AE694CEC553C74F519EE830E68C521C3DEC * L_0 = ___recognizer0;
		((DFA_t96370EB42325F06C749FB6668FF6025F2D7BFDB3 *)__this)->set_recognizer_8(L_0);
		((DFA_t96370EB42325F06C749FB6668FF6025F2D7BFDB3 *)__this)->set_decisionNumber_7(((int32_t)14));
		IL2CPP_RUNTIME_CLASS_INIT(DFA14_tC9B965A0D084146E2480BD928AB4134D86F9181C_il2cpp_TypeInfo_var);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_1 = ((DFA14_tC9B965A0D084146E2480BD928AB4134D86F9181C_StaticFields*)il2cpp_codegen_static_fields_for(DFA14_tC9B965A0D084146E2480BD928AB4134D86F9181C_il2cpp_TypeInfo_var))->get_DFA14_eot_12();
		((DFA_t96370EB42325F06C749FB6668FF6025F2D7BFDB3 *)__this)->set_eot_0(L_1);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_2 = ((DFA14_tC9B965A0D084146E2480BD928AB4134D86F9181C_StaticFields*)il2cpp_codegen_static_fields_for(DFA14_tC9B965A0D084146E2480BD928AB4134D86F9181C_il2cpp_TypeInfo_var))->get_DFA14_eof_13();
		((DFA_t96370EB42325F06C749FB6668FF6025F2D7BFDB3 *)__this)->set_eof_1(L_2);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_3 = ((DFA14_tC9B965A0D084146E2480BD928AB4134D86F9181C_StaticFields*)il2cpp_codegen_static_fields_for(DFA14_tC9B965A0D084146E2480BD928AB4134D86F9181C_il2cpp_TypeInfo_var))->get_DFA14_min_14();
		((DFA_t96370EB42325F06C749FB6668FF6025F2D7BFDB3 *)__this)->set_min_2(L_3);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_4 = ((DFA14_tC9B965A0D084146E2480BD928AB4134D86F9181C_StaticFields*)il2cpp_codegen_static_fields_for(DFA14_tC9B965A0D084146E2480BD928AB4134D86F9181C_il2cpp_TypeInfo_var))->get_DFA14_max_15();
		((DFA_t96370EB42325F06C749FB6668FF6025F2D7BFDB3 *)__this)->set_max_3(L_4);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_5 = ((DFA14_tC9B965A0D084146E2480BD928AB4134D86F9181C_StaticFields*)il2cpp_codegen_static_fields_for(DFA14_tC9B965A0D084146E2480BD928AB4134D86F9181C_il2cpp_TypeInfo_var))->get_DFA14_accept_16();
		((DFA_t96370EB42325F06C749FB6668FF6025F2D7BFDB3 *)__this)->set_accept_4(L_5);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_6 = ((DFA14_tC9B965A0D084146E2480BD928AB4134D86F9181C_StaticFields*)il2cpp_codegen_static_fields_for(DFA14_tC9B965A0D084146E2480BD928AB4134D86F9181C_il2cpp_TypeInfo_var))->get_DFA14_special_17();
		((DFA_t96370EB42325F06C749FB6668FF6025F2D7BFDB3 *)__this)->set_special_5(L_6);
		Int16U5BU5DU5BU5D_t543ACA7B5432CCA0395B0944D21B4E37B8825D77* L_7 = ((DFA14_tC9B965A0D084146E2480BD928AB4134D86F9181C_StaticFields*)il2cpp_codegen_static_fields_for(DFA14_tC9B965A0D084146E2480BD928AB4134D86F9181C_il2cpp_TypeInfo_var))->get_DFA14_transition_18();
		((DFA_t96370EB42325F06C749FB6668FF6025F2D7BFDB3 *)__this)->set_transition_6(L_7);
		return;
	}
}
// System.String Naninovel.NCalc.NCalcLexer/DFA14::get_Description()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DFA14_get_Description_m844117A7174D260246B96170C604CD5E97053285 (DFA14_tC9B965A0D084146E2480BD928AB4134D86F9181C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF8F7F2E55A1CD606D289F34C8A4DB8782887AA83);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralF8F7F2E55A1CD606D289F34C8A4DB8782887AA83;
	}
}
// System.Void Naninovel.NCalc.NCalcLexer/DFA14::Error(Naninovel.Antlr.Runtime.NoViableAltException)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DFA14_Error_mBC09F1DBD07401968236925CB5F54BFD798CFE06 (DFA14_tC9B965A0D084146E2480BD928AB4134D86F9181C * __this, NoViableAltException_tD839861F743DD0F39FEF05038736B49327E123D6 * ___nvae0, const RuntimeMethod* method)
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
// System.Void Naninovel.NCalc.NCalcLexer/DFA7::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DFA7__cctor_mDD8C822D501C7C85C3BC3CAC2F60400AFBF9AD1B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DFA7_t3E8B607423D0670275F37241C9AC095E95BB9421_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16U5BU5DU5BU5D_t543ACA7B5432CCA0395B0944D21B4E37B8825D77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0414E3274E6539D58A6691021628AC3EC0B5E575);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1AAA87BACDBB2798517C0B984881B425E20035DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral35BE86BE04537C20F1D92CDDE1C271EA43492402);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4C64FAF248B3C58A3DBD011DCB21AB1FBAD05F3E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB2156EED3E1A351927BAD37510F67ACA2F8B955);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB82867822F37DEE1D0A162494A3D82B11C422456);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF4E486EEEE82295CCBBB3A1A7461668B2130E36B);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)4);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteralB82867822F37DEE1D0A162494A3D82B11C422456);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralB82867822F37DEE1D0A162494A3D82B11C422456);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral1AAA87BACDBB2798517C0B984881B425E20035DF);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral1AAA87BACDBB2798517C0B984881B425E20035DF);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		((DFA7_t3E8B607423D0670275F37241C9AC095E95BB9421_StaticFields*)il2cpp_codegen_static_fields_for(DFA7_t3E8B607423D0670275F37241C9AC095E95BB9421_il2cpp_TypeInfo_var))->set_DFA7_transitionS_11(L_4);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_5;
		L_5 = DFA_UnpackEncodedString_mCFCAE2FA1EDD22EFD0468E7B3523AAAE2151D3FA(_stringLiteralAB2156EED3E1A351927BAD37510F67ACA2F8B955, /*hidden argument*/NULL);
		((DFA7_t3E8B607423D0670275F37241C9AC095E95BB9421_StaticFields*)il2cpp_codegen_static_fields_for(DFA7_t3E8B607423D0670275F37241C9AC095E95BB9421_il2cpp_TypeInfo_var))->set_DFA7_eot_12(L_5);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_6;
		L_6 = DFA_UnpackEncodedString_mCFCAE2FA1EDD22EFD0468E7B3523AAAE2151D3FA(_stringLiteralAB2156EED3E1A351927BAD37510F67ACA2F8B955, /*hidden argument*/NULL);
		((DFA7_t3E8B607423D0670275F37241C9AC095E95BB9421_StaticFields*)il2cpp_codegen_static_fields_for(DFA7_t3E8B607423D0670275F37241C9AC095E95BB9421_il2cpp_TypeInfo_var))->set_DFA7_eof_13(L_6);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_7;
		L_7 = DFA_UnpackEncodedStringToUnsignedChars_m5746E7DC654C1583256D0439D6AFD09361C059AF(_stringLiteral0414E3274E6539D58A6691021628AC3EC0B5E575, /*hidden argument*/NULL);
		((DFA7_t3E8B607423D0670275F37241C9AC095E95BB9421_StaticFields*)il2cpp_codegen_static_fields_for(DFA7_t3E8B607423D0670275F37241C9AC095E95BB9421_il2cpp_TypeInfo_var))->set_DFA7_min_14(L_7);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_8;
		L_8 = DFA_UnpackEncodedStringToUnsignedChars_m5746E7DC654C1583256D0439D6AFD09361C059AF(_stringLiteral4C64FAF248B3C58A3DBD011DCB21AB1FBAD05F3E, /*hidden argument*/NULL);
		((DFA7_t3E8B607423D0670275F37241C9AC095E95BB9421_StaticFields*)il2cpp_codegen_static_fields_for(DFA7_t3E8B607423D0670275F37241C9AC095E95BB9421_il2cpp_TypeInfo_var))->set_DFA7_max_15(L_8);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_9;
		L_9 = DFA_UnpackEncodedString_mCFCAE2FA1EDD22EFD0468E7B3523AAAE2151D3FA(_stringLiteralF4E486EEEE82295CCBBB3A1A7461668B2130E36B, /*hidden argument*/NULL);
		((DFA7_t3E8B607423D0670275F37241C9AC095E95BB9421_StaticFields*)il2cpp_codegen_static_fields_for(DFA7_t3E8B607423D0670275F37241C9AC095E95BB9421_il2cpp_TypeInfo_var))->set_DFA7_accept_16(L_9);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_10;
		L_10 = DFA_UnpackEncodedString_mCFCAE2FA1EDD22EFD0468E7B3523AAAE2151D3FA(_stringLiteral35BE86BE04537C20F1D92CDDE1C271EA43492402, /*hidden argument*/NULL);
		((DFA7_t3E8B607423D0670275F37241C9AC095E95BB9421_StaticFields*)il2cpp_codegen_static_fields_for(DFA7_t3E8B607423D0670275F37241C9AC095E95BB9421_il2cpp_TypeInfo_var))->set_DFA7_special_17(L_10);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_11 = ((DFA7_t3E8B607423D0670275F37241C9AC095E95BB9421_StaticFields*)il2cpp_codegen_static_fields_for(DFA7_t3E8B607423D0670275F37241C9AC095E95BB9421_il2cpp_TypeInfo_var))->get_DFA7_transitionS_11();
		NullCheck(L_11);
		V_0 = ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)));
		int32_t L_12 = V_0;
		Int16U5BU5DU5BU5D_t543ACA7B5432CCA0395B0944D21B4E37B8825D77* L_13 = (Int16U5BU5DU5BU5D_t543ACA7B5432CCA0395B0944D21B4E37B8825D77*)(Int16U5BU5DU5BU5D_t543ACA7B5432CCA0395B0944D21B4E37B8825D77*)SZArrayNew(Int16U5BU5DU5BU5D_t543ACA7B5432CCA0395B0944D21B4E37B8825D77_il2cpp_TypeInfo_var, (uint32_t)L_12);
		((DFA7_t3E8B607423D0670275F37241C9AC095E95BB9421_StaticFields*)il2cpp_codegen_static_fields_for(DFA7_t3E8B607423D0670275F37241C9AC095E95BB9421_il2cpp_TypeInfo_var))->set_DFA7_transition_18(L_13);
		V_1 = 0;
		goto IL_00b3;
	}

IL_009c:
	{
		Int16U5BU5DU5BU5D_t543ACA7B5432CCA0395B0944D21B4E37B8825D77* L_14 = ((DFA7_t3E8B607423D0670275F37241C9AC095E95BB9421_StaticFields*)il2cpp_codegen_static_fields_for(DFA7_t3E8B607423D0670275F37241C9AC095E95BB9421_il2cpp_TypeInfo_var))->get_DFA7_transition_18();
		int32_t L_15 = V_1;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_16 = ((DFA7_t3E8B607423D0670275F37241C9AC095E95BB9421_StaticFields*)il2cpp_codegen_static_fields_for(DFA7_t3E8B607423D0670275F37241C9AC095E95BB9421_il2cpp_TypeInfo_var))->get_DFA7_transitionS_11();
		int32_t L_17 = V_1;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		String_t* L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_20;
		L_20 = DFA_UnpackEncodedString_mCFCAE2FA1EDD22EFD0468E7B3523AAAE2151D3FA(L_19, /*hidden argument*/NULL);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_20);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)L_20);
		int32_t L_21 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
	}

IL_00b3:
	{
		int32_t L_22 = V_1;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_009c;
		}
	}
	{
		return;
	}
}
// System.Void Naninovel.NCalc.NCalcLexer/DFA7::.ctor(Naninovel.Antlr.Runtime.BaseRecognizer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DFA7__ctor_m71D9A3A10E68EC2C64603CB479736D51522F2AD7 (DFA7_t3E8B607423D0670275F37241C9AC095E95BB9421 * __this, BaseRecognizer_tB62A3AE694CEC553C74F519EE830E68C521C3DEC * ___recognizer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DFA7_t3E8B607423D0670275F37241C9AC095E95BB9421_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DFA__ctor_m8F6750FCA2AD76A942C9047CE217DCB1A231F4DC(__this, /*hidden argument*/NULL);
		BaseRecognizer_tB62A3AE694CEC553C74F519EE830E68C521C3DEC * L_0 = ___recognizer0;
		((DFA_t96370EB42325F06C749FB6668FF6025F2D7BFDB3 *)__this)->set_recognizer_8(L_0);
		((DFA_t96370EB42325F06C749FB6668FF6025F2D7BFDB3 *)__this)->set_decisionNumber_7(7);
		IL2CPP_RUNTIME_CLASS_INIT(DFA7_t3E8B607423D0670275F37241C9AC095E95BB9421_il2cpp_TypeInfo_var);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_1 = ((DFA7_t3E8B607423D0670275F37241C9AC095E95BB9421_StaticFields*)il2cpp_codegen_static_fields_for(DFA7_t3E8B607423D0670275F37241C9AC095E95BB9421_il2cpp_TypeInfo_var))->get_DFA7_eot_12();
		((DFA_t96370EB42325F06C749FB6668FF6025F2D7BFDB3 *)__this)->set_eot_0(L_1);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_2 = ((DFA7_t3E8B607423D0670275F37241C9AC095E95BB9421_StaticFields*)il2cpp_codegen_static_fields_for(DFA7_t3E8B607423D0670275F37241C9AC095E95BB9421_il2cpp_TypeInfo_var))->get_DFA7_eof_13();
		((DFA_t96370EB42325F06C749FB6668FF6025F2D7BFDB3 *)__this)->set_eof_1(L_2);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_3 = ((DFA7_t3E8B607423D0670275F37241C9AC095E95BB9421_StaticFields*)il2cpp_codegen_static_fields_for(DFA7_t3E8B607423D0670275F37241C9AC095E95BB9421_il2cpp_TypeInfo_var))->get_DFA7_min_14();
		((DFA_t96370EB42325F06C749FB6668FF6025F2D7BFDB3 *)__this)->set_min_2(L_3);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_4 = ((DFA7_t3E8B607423D0670275F37241C9AC095E95BB9421_StaticFields*)il2cpp_codegen_static_fields_for(DFA7_t3E8B607423D0670275F37241C9AC095E95BB9421_il2cpp_TypeInfo_var))->get_DFA7_max_15();
		((DFA_t96370EB42325F06C749FB6668FF6025F2D7BFDB3 *)__this)->set_max_3(L_4);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_5 = ((DFA7_t3E8B607423D0670275F37241C9AC095E95BB9421_StaticFields*)il2cpp_codegen_static_fields_for(DFA7_t3E8B607423D0670275F37241C9AC095E95BB9421_il2cpp_TypeInfo_var))->get_DFA7_accept_16();
		((DFA_t96370EB42325F06C749FB6668FF6025F2D7BFDB3 *)__this)->set_accept_4(L_5);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_6 = ((DFA7_t3E8B607423D0670275F37241C9AC095E95BB9421_StaticFields*)il2cpp_codegen_static_fields_for(DFA7_t3E8B607423D0670275F37241C9AC095E95BB9421_il2cpp_TypeInfo_var))->get_DFA7_special_17();
		((DFA_t96370EB42325F06C749FB6668FF6025F2D7BFDB3 *)__this)->set_special_5(L_6);
		Int16U5BU5DU5BU5D_t543ACA7B5432CCA0395B0944D21B4E37B8825D77* L_7 = ((DFA7_t3E8B607423D0670275F37241C9AC095E95BB9421_StaticFields*)il2cpp_codegen_static_fields_for(DFA7_t3E8B607423D0670275F37241C9AC095E95BB9421_il2cpp_TypeInfo_var))->get_DFA7_transition_18();
		((DFA_t96370EB42325F06C749FB6668FF6025F2D7BFDB3 *)__this)->set_transition_6(L_7);
		return;
	}
}
// System.String Naninovel.NCalc.NCalcLexer/DFA7::get_Description()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DFA7_get_Description_mD5029B0A863E6896BBA75F514D823C11DFA92D58 (DFA7_t3E8B607423D0670275F37241C9AC095E95BB9421 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D280E7E733EC7E25A38F3C52ADCAF04C3DA0CD9);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral3D280E7E733EC7E25A38F3C52ADCAF04C3DA0CD9;
	}
}
// System.Void Naninovel.NCalc.NCalcLexer/DFA7::Error(Naninovel.Antlr.Runtime.NoViableAltException)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DFA7_Error_mBA291CBAC7F0F9A23B03A3F8A4E780A871EDC5DF (DFA7_t3E8B607423D0670275F37241C9AC095E95BB9421 * __this, NoViableAltException_tD839861F743DD0F39FEF05038736B49327E123D6 * ___nvae0, const RuntimeMethod* method)
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
// System.Void Naninovel.NCalc.NCalcParser/Follow::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Follow__cctor_m596FA607BB2C3418429687AC41ABAAB5D534F87F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Follow_t8062F7C92640B848282CA7382579322185C96CA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_0 = (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)SZArrayNew(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2_il2cpp_TypeInfo_var, (uint32_t)1);
		BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * L_1 = (BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 *)il2cpp_codegen_object_new(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5_il2cpp_TypeInfo_var);
		BitSet__ctor_mCE89D120F858E945437A2174669597480EDB2BC4(L_1, L_0, /*hidden argument*/NULL);
		((Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields*)il2cpp_codegen_static_fields_for(Follow_t8062F7C92640B848282CA7382579322185C96CA1_il2cpp_TypeInfo_var))->set__logicalExpression_in_ncalcExpression56_0(L_1);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_2 = (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)SZArrayNew(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_3 = L_2;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)((int64_t)2)));
		BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * L_4 = (BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 *)il2cpp_codegen_object_new(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5_il2cpp_TypeInfo_var);
		BitSet__ctor_mCE89D120F858E945437A2174669597480EDB2BC4(L_4, L_3, /*hidden argument*/NULL);
		((Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields*)il2cpp_codegen_static_fields_for(Follow_t8062F7C92640B848282CA7382579322185C96CA1_il2cpp_TypeInfo_var))->set__EOF_in_ncalcExpression58_1(L_4);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_5 = (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)SZArrayNew(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_6 = L_5;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)2199023255554LL));
		BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * L_7 = (BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 *)il2cpp_codegen_object_new(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5_il2cpp_TypeInfo_var);
		BitSet__ctor_mCE89D120F858E945437A2174669597480EDB2BC4(L_7, L_6, /*hidden argument*/NULL);
		((Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields*)il2cpp_codegen_static_fields_for(Follow_t8062F7C92640B848282CA7382579322185C96CA1_il2cpp_TypeInfo_var))->set__conditionalExpression_in_logicalExpression78_2(L_7);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_8 = (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)SZArrayNew(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_9 = L_8;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)299067717049104LL));
		BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * L_10 = (BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 *)il2cpp_codegen_object_new(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5_il2cpp_TypeInfo_var);
		BitSet__ctor_mCE89D120F858E945437A2174669597480EDB2BC4(L_10, L_9, /*hidden argument*/NULL);
		((Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields*)il2cpp_codegen_static_fields_for(Follow_t8062F7C92640B848282CA7382579322185C96CA1_il2cpp_TypeInfo_var))->set__41_in_logicalExpression84_3(L_10);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_11 = (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)SZArrayNew(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_12 = L_11;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)((uint64_t)((uint32_t)((uint32_t)((int32_t)-2147483648LL))))));
		BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * L_13 = (BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 *)il2cpp_codegen_object_new(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5_il2cpp_TypeInfo_var);
		BitSet__ctor_mCE89D120F858E945437A2174669597480EDB2BC4(L_13, L_12, /*hidden argument*/NULL);
		((Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields*)il2cpp_codegen_static_fields_for(Follow_t8062F7C92640B848282CA7382579322185C96CA1_il2cpp_TypeInfo_var))->set__conditionalExpression_in_logicalExpression88_4(L_13);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_14 = (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)SZArrayNew(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_15 = L_14;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)299067717049104LL));
		BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * L_16 = (BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 *)il2cpp_codegen_object_new(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5_il2cpp_TypeInfo_var);
		BitSet__ctor_mCE89D120F858E945437A2174669597480EDB2BC4(L_16, L_15, /*hidden argument*/NULL);
		((Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields*)il2cpp_codegen_static_fields_for(Follow_t8062F7C92640B848282CA7382579322185C96CA1_il2cpp_TypeInfo_var))->set__31_in_logicalExpression90_5(L_16);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_17 = (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)SZArrayNew(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_18 = L_17;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)((int64_t)2)));
		BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * L_19 = (BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 *)il2cpp_codegen_object_new(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5_il2cpp_TypeInfo_var);
		BitSet__ctor_mCE89D120F858E945437A2174669597480EDB2BC4(L_19, L_18, /*hidden argument*/NULL);
		((Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields*)il2cpp_codegen_static_fields_for(Follow_t8062F7C92640B848282CA7382579322185C96CA1_il2cpp_TypeInfo_var))->set__conditionalExpression_in_logicalExpression94_6(L_19);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_20 = (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)SZArrayNew(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_21 = L_20;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)175921860444162LL));
		BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * L_22 = (BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 *)il2cpp_codegen_object_new(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5_il2cpp_TypeInfo_var);
		BitSet__ctor_mCE89D120F858E945437A2174669597480EDB2BC4(L_22, L_21, /*hidden argument*/NULL);
		((Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields*)il2cpp_codegen_static_fields_for(Follow_t8062F7C92640B848282CA7382579322185C96CA1_il2cpp_TypeInfo_var))->set__booleanAndExpression_in_conditionalExpression121_7(L_22);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_23 = (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)SZArrayNew(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_24 = L_23;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)299067717049104LL));
		BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * L_25 = (BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 *)il2cpp_codegen_object_new(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5_il2cpp_TypeInfo_var);
		BitSet__ctor_mCE89D120F858E945437A2174669597480EDB2BC4(L_25, L_24, /*hidden argument*/NULL);
		((Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields*)il2cpp_codegen_static_fields_for(Follow_t8062F7C92640B848282CA7382579322185C96CA1_il2cpp_TypeInfo_var))->set__set_in_conditionalExpression130_8(L_25);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_26 = (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)SZArrayNew(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_27 = L_26;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)175921860444162LL));
		BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * L_28 = (BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 *)il2cpp_codegen_object_new(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5_il2cpp_TypeInfo_var);
		BitSet__ctor_mCE89D120F858E945437A2174669597480EDB2BC4(L_28, L_27, /*hidden argument*/NULL);
		((Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields*)il2cpp_codegen_static_fields_for(Follow_t8062F7C92640B848282CA7382579322185C96CA1_il2cpp_TypeInfo_var))->set__conditionalExpression_in_conditionalExpression146_9(L_28);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_29 = (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)SZArrayNew(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_30 = L_29;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)8796097216514LL));
		BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * L_31 = (BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 *)il2cpp_codegen_object_new(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5_il2cpp_TypeInfo_var);
		BitSet__ctor_mCE89D120F858E945437A2174669597480EDB2BC4(L_31, L_30, /*hidden argument*/NULL);
		((Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields*)il2cpp_codegen_static_fields_for(Follow_t8062F7C92640B848282CA7382579322185C96CA1_il2cpp_TypeInfo_var))->set__bitwiseOrExpression_in_booleanAndExpression180_10(L_31);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_32 = (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)SZArrayNew(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_33 = L_32;
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)299067717049104LL));
		BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * L_34 = (BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 *)il2cpp_codegen_object_new(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5_il2cpp_TypeInfo_var);
		BitSet__ctor_mCE89D120F858E945437A2174669597480EDB2BC4(L_34, L_33, /*hidden argument*/NULL);
		((Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields*)il2cpp_codegen_static_fields_for(Follow_t8062F7C92640B848282CA7382579322185C96CA1_il2cpp_TypeInfo_var))->set__set_in_booleanAndExpression189_11(L_34);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_35 = (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)SZArrayNew(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_36 = L_35;
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)8796097216514LL));
		BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * L_37 = (BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 *)il2cpp_codegen_object_new(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5_il2cpp_TypeInfo_var);
		BitSet__ctor_mCE89D120F858E945437A2174669597480EDB2BC4(L_37, L_36, /*hidden argument*/NULL);
		((Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields*)il2cpp_codegen_static_fields_for(Follow_t8062F7C92640B848282CA7382579322185C96CA1_il2cpp_TypeInfo_var))->set__bitwiseOrExpression_in_booleanAndExpression205_12(L_37);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_38 = (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)SZArrayNew(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_39 = L_38;
		NullCheck(L_39);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)70368744177666LL));
		BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * L_40 = (BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 *)il2cpp_codegen_object_new(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5_il2cpp_TypeInfo_var);
		BitSet__ctor_mCE89D120F858E945437A2174669597480EDB2BC4(L_40, L_39, /*hidden argument*/NULL);
		((Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields*)il2cpp_codegen_static_fields_for(Follow_t8062F7C92640B848282CA7382579322185C96CA1_il2cpp_TypeInfo_var))->set__bitwiseXOrExpression_in_bitwiseOrExpression237_13(L_40);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_41 = (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)SZArrayNew(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_42 = L_41;
		NullCheck(L_42);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)299067717049104LL));
		BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * L_43 = (BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 *)il2cpp_codegen_object_new(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5_il2cpp_TypeInfo_var);
		BitSet__ctor_mCE89D120F858E945437A2174669597480EDB2BC4(L_43, L_42, /*hidden argument*/NULL);
		((Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields*)il2cpp_codegen_static_fields_for(Follow_t8062F7C92640B848282CA7382579322185C96CA1_il2cpp_TypeInfo_var))->set__46_in_bitwiseOrExpression246_14(L_43);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_44 = (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)SZArrayNew(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_45 = L_44;
		NullCheck(L_45);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)70368744177666LL));
		BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * L_46 = (BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 *)il2cpp_codegen_object_new(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5_il2cpp_TypeInfo_var);
		BitSet__ctor_mCE89D120F858E945437A2174669597480EDB2BC4(L_46, L_45, /*hidden argument*/NULL);
		((Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields*)il2cpp_codegen_static_fields_for(Follow_t8062F7C92640B848282CA7382579322185C96CA1_il2cpp_TypeInfo_var))->set__bitwiseOrExpression_in_bitwiseOrExpression256_15(L_46);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_47 = (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)SZArrayNew(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_48 = L_47;
		NullCheck(L_48);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)4398046511106LL));
		BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * L_49 = (BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 *)il2cpp_codegen_object_new(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5_il2cpp_TypeInfo_var);
		BitSet__ctor_mCE89D120F858E945437A2174669597480EDB2BC4(L_49, L_48, /*hidden argument*/NULL);
		((Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields*)il2cpp_codegen_static_fields_for(Follow_t8062F7C92640B848282CA7382579322185C96CA1_il2cpp_TypeInfo_var))->set__bitwiseAndExpression_in_bitwiseXOrExpression290_16(L_49);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_50 = (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)SZArrayNew(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_51 = L_50;
		NullCheck(L_51);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)299067717049104LL));
		BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * L_52 = (BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 *)il2cpp_codegen_object_new(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5_il2cpp_TypeInfo_var);
		BitSet__ctor_mCE89D120F858E945437A2174669597480EDB2BC4(L_52, L_51, /*hidden argument*/NULL);
		((Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields*)il2cpp_codegen_static_fields_for(Follow_t8062F7C92640B848282CA7382579322185C96CA1_il2cpp_TypeInfo_var))->set__42_in_bitwiseXOrExpression299_17(L_52);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_53 = (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)SZArrayNew(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_54 = L_53;
		NullCheck(L_54);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)4398046511106LL));
		BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * L_55 = (BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 *)il2cpp_codegen_object_new(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5_il2cpp_TypeInfo_var);
		BitSet__ctor_mCE89D120F858E945437A2174669597480EDB2BC4(L_55, L_54, /*hidden argument*/NULL);
		((Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields*)il2cpp_codegen_static_fields_for(Follow_t8062F7C92640B848282CA7382579322185C96CA1_il2cpp_TypeInfo_var))->set__bitwiseAndExpression_in_bitwiseXOrExpression309_18(L_55);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_56 = (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)SZArrayNew(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_57 = L_56;
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)((int64_t)((int32_t)8388610))));
		BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * L_58 = (BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 *)il2cpp_codegen_object_new(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5_il2cpp_TypeInfo_var);
		BitSet__ctor_mCE89D120F858E945437A2174669597480EDB2BC4(L_58, L_57, /*hidden argument*/NULL);
		((Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields*)il2cpp_codegen_static_fields_for(Follow_t8062F7C92640B848282CA7382579322185C96CA1_il2cpp_TypeInfo_var))->set__equalityExpression_in_bitwiseAndExpression341_19(L_58);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_59 = (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)SZArrayNew(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_60 = L_59;
		NullCheck(L_60);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)299067717049104LL));
		BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * L_61 = (BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 *)il2cpp_codegen_object_new(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5_il2cpp_TypeInfo_var);
		BitSet__ctor_mCE89D120F858E945437A2174669597480EDB2BC4(L_61, L_60, /*hidden argument*/NULL);
		((Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields*)il2cpp_codegen_static_fields_for(Follow_t8062F7C92640B848282CA7382579322185C96CA1_il2cpp_TypeInfo_var))->set__23_in_bitwiseAndExpression350_20(L_61);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_62 = (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)SZArrayNew(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_63 = L_62;
		NullCheck(L_63);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)((int64_t)((int32_t)8388610))));
		BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * L_64 = (BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 *)il2cpp_codegen_object_new(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5_il2cpp_TypeInfo_var);
		BitSet__ctor_mCE89D120F858E945437A2174669597480EDB2BC4(L_64, L_63, /*hidden argument*/NULL);
		((Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields*)il2cpp_codegen_static_fields_for(Follow_t8062F7C92640B848282CA7382579322185C96CA1_il2cpp_TypeInfo_var))->set__equalityExpression_in_bitwiseAndExpression360_21(L_64);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_65 = (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)SZArrayNew(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_66 = L_65;
		NullCheck(L_66);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)240519217154LL));
		BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * L_67 = (BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 *)il2cpp_codegen_object_new(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5_il2cpp_TypeInfo_var);
		BitSet__ctor_mCE89D120F858E945437A2174669597480EDB2BC4(L_67, L_66, /*hidden argument*/NULL);
		((Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields*)il2cpp_codegen_static_fields_for(Follow_t8062F7C92640B848282CA7382579322185C96CA1_il2cpp_TypeInfo_var))->set__relationalExpression_in_equalityExpression394_22(L_67);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_68 = (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)SZArrayNew(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_69 = L_68;
		NullCheck(L_69);
		(L_69)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)299067717049104LL));
		BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * L_70 = (BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 *)il2cpp_codegen_object_new(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5_il2cpp_TypeInfo_var);
		BitSet__ctor_mCE89D120F858E945437A2174669597480EDB2BC4(L_70, L_69, /*hidden argument*/NULL);
		((Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields*)il2cpp_codegen_static_fields_for(Follow_t8062F7C92640B848282CA7382579322185C96CA1_il2cpp_TypeInfo_var))->set__set_in_equalityExpression405_23(L_70);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_71 = (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)SZArrayNew(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_72 = L_71;
		NullCheck(L_72);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)299067717049104LL));
		BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * L_73 = (BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 *)il2cpp_codegen_object_new(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5_il2cpp_TypeInfo_var);
		BitSet__ctor_mCE89D120F858E945437A2174669597480EDB2BC4(L_73, L_72, /*hidden argument*/NULL);
		((Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields*)il2cpp_codegen_static_fields_for(Follow_t8062F7C92640B848282CA7382579322185C96CA1_il2cpp_TypeInfo_var))->set__set_in_equalityExpression422_24(L_73);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_74 = (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)SZArrayNew(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_75 = L_74;
		NullCheck(L_75);
		(L_75)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)240519217154LL));
		BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * L_76 = (BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 *)il2cpp_codegen_object_new(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5_il2cpp_TypeInfo_var);
		BitSet__ctor_mCE89D120F858E945437A2174669597480EDB2BC4(L_76, L_75, /*hidden argument*/NULL);
		((Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields*)il2cpp_codegen_static_fields_for(Follow_t8062F7C92640B848282CA7382579322185C96CA1_il2cpp_TypeInfo_var))->set__relationalExpression_in_equalityExpression441_25(L_76);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_77 = (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)SZArrayNew(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_78 = L_77;
		NullCheck(L_78);
		(L_78)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)846108557314LL));
		BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * L_79 = (BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 *)il2cpp_codegen_object_new(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5_il2cpp_TypeInfo_var);
		BitSet__ctor_mCE89D120F858E945437A2174669597480EDB2BC4(L_79, L_78, /*hidden argument*/NULL);
		((Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields*)il2cpp_codegen_static_fields_for(Follow_t8062F7C92640B848282CA7382579322185C96CA1_il2cpp_TypeInfo_var))->set__shiftExpression_in_relationalExpression474_26(L_79);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_80 = (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)SZArrayNew(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_81 = L_80;
		NullCheck(L_81);
		(L_81)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)299067717049104LL));
		BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * L_82 = (BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 *)il2cpp_codegen_object_new(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5_il2cpp_TypeInfo_var);
		BitSet__ctor_mCE89D120F858E945437A2174669597480EDB2BC4(L_82, L_81, /*hidden argument*/NULL);
		((Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields*)il2cpp_codegen_static_fields_for(Follow_t8062F7C92640B848282CA7382579322185C96CA1_il2cpp_TypeInfo_var))->set__32_in_relationalExpression485_27(L_82);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_83 = (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)SZArrayNew(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_84 = L_83;
		NullCheck(L_84);
		(L_84)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)299067717049104LL));
		BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * L_85 = (BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 *)il2cpp_codegen_object_new(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5_il2cpp_TypeInfo_var);
		BitSet__ctor_mCE89D120F858E945437A2174669597480EDB2BC4(L_85, L_84, /*hidden argument*/NULL);
		((Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields*)il2cpp_codegen_static_fields_for(Follow_t8062F7C92640B848282CA7382579322185C96CA1_il2cpp_TypeInfo_var))->set__34_in_relationalExpression495_28(L_85);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_86 = (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)SZArrayNew(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_87 = L_86;
		NullCheck(L_87);
		(L_87)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)299067717049104LL));
		BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * L_88 = (BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 *)il2cpp_codegen_object_new(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5_il2cpp_TypeInfo_var);
		BitSet__ctor_mCE89D120F858E945437A2174669597480EDB2BC4(L_88, L_87, /*hidden argument*/NULL);
		((Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields*)il2cpp_codegen_static_fields_for(Follow_t8062F7C92640B848282CA7382579322185C96CA1_il2cpp_TypeInfo_var))->set__38_in_relationalExpression506_29(L_88);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_89 = (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)SZArrayNew(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_90 = L_89;
		NullCheck(L_90);
		(L_90)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)299067717049104LL));
		BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * L_91 = (BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 *)il2cpp_codegen_object_new(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5_il2cpp_TypeInfo_var);
		BitSet__ctor_mCE89D120F858E945437A2174669597480EDB2BC4(L_91, L_90, /*hidden argument*/NULL);
		((Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields*)il2cpp_codegen_static_fields_for(Follow_t8062F7C92640B848282CA7382579322185C96CA1_il2cpp_TypeInfo_var))->set__39_in_relationalExpression516_30(L_91);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_92 = (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)SZArrayNew(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_93 = L_92;
		NullCheck(L_93);
		(L_93)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)846108557314LL));
		BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * L_94 = (BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 *)il2cpp_codegen_object_new(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5_il2cpp_TypeInfo_var);
		BitSet__ctor_mCE89D120F858E945437A2174669597480EDB2BC4(L_94, L_93, /*hidden argument*/NULL);
		((Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields*)il2cpp_codegen_static_fields_for(Follow_t8062F7C92640B848282CA7382579322185C96CA1_il2cpp_TypeInfo_var))->set__shiftExpression_in_relationalExpression528_31(L_94);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_95 = (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)SZArrayNew(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_96 = L_95;
		NullCheck(L_96);
		(L_96)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)1108101562370LL));
		BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * L_97 = (BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 *)il2cpp_codegen_object_new(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5_il2cpp_TypeInfo_var);
		BitSet__ctor_mCE89D120F858E945437A2174669597480EDB2BC4(L_97, L_96, /*hidden argument*/NULL);
		((Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields*)il2cpp_codegen_static_fields_for(Follow_t8062F7C92640B848282CA7382579322185C96CA1_il2cpp_TypeInfo_var))->set__additiveExpression_in_shiftExpression560_32(L_97);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_98 = (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)SZArrayNew(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_99 = L_98;
		NullCheck(L_99);
		(L_99)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)299067717049104LL));
		BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * L_100 = (BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 *)il2cpp_codegen_object_new(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5_il2cpp_TypeInfo_var);
		BitSet__ctor_mCE89D120F858E945437A2174669597480EDB2BC4(L_100, L_99, /*hidden argument*/NULL);
		((Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields*)il2cpp_codegen_static_fields_for(Follow_t8062F7C92640B848282CA7382579322185C96CA1_il2cpp_TypeInfo_var))->set__33_in_shiftExpression571_33(L_100);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_101 = (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)SZArrayNew(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_102 = L_101;
		NullCheck(L_102);
		(L_102)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)299067717049104LL));
		BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * L_103 = (BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 *)il2cpp_codegen_object_new(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5_il2cpp_TypeInfo_var);
		BitSet__ctor_mCE89D120F858E945437A2174669597480EDB2BC4(L_103, L_102, /*hidden argument*/NULL);
		((Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields*)il2cpp_codegen_static_fields_for(Follow_t8062F7C92640B848282CA7382579322185C96CA1_il2cpp_TypeInfo_var))->set__40_in_shiftExpression581_34(L_103);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_104 = (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)SZArrayNew(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_105 = L_104;
		NullCheck(L_105);
		(L_105)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)1108101562370LL));
		BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * L_106 = (BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 *)il2cpp_codegen_object_new(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5_il2cpp_TypeInfo_var);
		BitSet__ctor_mCE89D120F858E945437A2174669597480EDB2BC4(L_106, L_105, /*hidden argument*/NULL);
		((Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields*)il2cpp_codegen_static_fields_for(Follow_t8062F7C92640B848282CA7382579322185C96CA1_il2cpp_TypeInfo_var))->set__additiveExpression_in_shiftExpression593_35(L_106);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_107 = (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)SZArrayNew(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_108 = L_107;
		NullCheck(L_108);
		(L_108)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)((int64_t)((int32_t)671088642))));
		BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * L_109 = (BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 *)il2cpp_codegen_object_new(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5_il2cpp_TypeInfo_var);
		BitSet__ctor_mCE89D120F858E945437A2174669597480EDB2BC4(L_109, L_108, /*hidden argument*/NULL);
		((Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields*)il2cpp_codegen_static_fields_for(Follow_t8062F7C92640B848282CA7382579322185C96CA1_il2cpp_TypeInfo_var))->set__multiplicativeExpression_in_additiveExpression625_36(L_109);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_110 = (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)SZArrayNew(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_111 = L_110;
		NullCheck(L_111);
		(L_111)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)299067717049104LL));
		BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * L_112 = (BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 *)il2cpp_codegen_object_new(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5_il2cpp_TypeInfo_var);
		BitSet__ctor_mCE89D120F858E945437A2174669597480EDB2BC4(L_112, L_111, /*hidden argument*/NULL);
		((Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields*)il2cpp_codegen_static_fields_for(Follow_t8062F7C92640B848282CA7382579322185C96CA1_il2cpp_TypeInfo_var))->set__27_in_additiveExpression636_37(L_112);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_113 = (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)SZArrayNew(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_114 = L_113;
		NullCheck(L_114);
		(L_114)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)299067717049104LL));
		BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * L_115 = (BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 *)il2cpp_codegen_object_new(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5_il2cpp_TypeInfo_var);
		BitSet__ctor_mCE89D120F858E945437A2174669597480EDB2BC4(L_115, L_114, /*hidden argument*/NULL);
		((Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields*)il2cpp_codegen_static_fields_for(Follow_t8062F7C92640B848282CA7382579322185C96CA1_il2cpp_TypeInfo_var))->set__29_in_additiveExpression646_38(L_115);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_116 = (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)SZArrayNew(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_117 = L_116;
		NullCheck(L_117);
		(L_117)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)((int64_t)((int32_t)671088642))));
		BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * L_118 = (BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 *)il2cpp_codegen_object_new(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5_il2cpp_TypeInfo_var);
		BitSet__ctor_mCE89D120F858E945437A2174669597480EDB2BC4(L_118, L_117, /*hidden argument*/NULL);
		((Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields*)il2cpp_codegen_static_fields_for(Follow_t8062F7C92640B848282CA7382579322185C96CA1_il2cpp_TypeInfo_var))->set__multiplicativeExpression_in_additiveExpression658_39(L_118);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_119 = (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)SZArrayNew(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_120 = L_119;
		NullCheck(L_120);
		(L_120)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)((int64_t)((int32_t)1142947842))));
		BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * L_121 = (BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 *)il2cpp_codegen_object_new(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5_il2cpp_TypeInfo_var);
		BitSet__ctor_mCE89D120F858E945437A2174669597480EDB2BC4(L_121, L_120, /*hidden argument*/NULL);
		((Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields*)il2cpp_codegen_static_fields_for(Follow_t8062F7C92640B848282CA7382579322185C96CA1_il2cpp_TypeInfo_var))->set__unaryExpression_in_multiplicativeExpression690_40(L_121);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_122 = (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)SZArrayNew(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_123 = L_122;
		NullCheck(L_123);
		(L_123)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)299067717049104LL));
		BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * L_124 = (BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 *)il2cpp_codegen_object_new(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5_il2cpp_TypeInfo_var);
		BitSet__ctor_mCE89D120F858E945437A2174669597480EDB2BC4(L_124, L_123, /*hidden argument*/NULL);
		((Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields*)il2cpp_codegen_static_fields_for(Follow_t8062F7C92640B848282CA7382579322185C96CA1_il2cpp_TypeInfo_var))->set__26_in_multiplicativeExpression701_41(L_124);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_125 = (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)SZArrayNew(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_126 = L_125;
		NullCheck(L_126);
		(L_126)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)299067717049104LL));
		BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * L_127 = (BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 *)il2cpp_codegen_object_new(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5_il2cpp_TypeInfo_var);
		BitSet__ctor_mCE89D120F858E945437A2174669597480EDB2BC4(L_127, L_126, /*hidden argument*/NULL);
		((Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields*)il2cpp_codegen_static_fields_for(Follow_t8062F7C92640B848282CA7382579322185C96CA1_il2cpp_TypeInfo_var))->set__30_in_multiplicativeExpression711_42(L_127);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_128 = (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)SZArrayNew(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_129 = L_128;
		NullCheck(L_129);
		(L_129)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)299067717049104LL));
		BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * L_130 = (BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 *)il2cpp_codegen_object_new(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5_il2cpp_TypeInfo_var);
		BitSet__ctor_mCE89D120F858E945437A2174669597480EDB2BC4(L_130, L_129, /*hidden argument*/NULL);
		((Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields*)il2cpp_codegen_static_fields_for(Follow_t8062F7C92640B848282CA7382579322185C96CA1_il2cpp_TypeInfo_var))->set__21_in_multiplicativeExpression721_43(L_130);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_131 = (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)SZArrayNew(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_132 = L_131;
		NullCheck(L_132);
		(L_132)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)((int64_t)((int32_t)1142947842))));
		BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * L_133 = (BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 *)il2cpp_codegen_object_new(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5_il2cpp_TypeInfo_var);
		BitSet__ctor_mCE89D120F858E945437A2174669597480EDB2BC4(L_133, L_132, /*hidden argument*/NULL);
		((Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields*)il2cpp_codegen_static_fields_for(Follow_t8062F7C92640B848282CA7382579322185C96CA1_il2cpp_TypeInfo_var))->set__unaryExpression_in_multiplicativeExpression733_44(L_133);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_134 = (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)SZArrayNew(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_135 = L_134;
		NullCheck(L_135);
		(L_135)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)((int64_t)2)));
		BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * L_136 = (BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 *)il2cpp_codegen_object_new(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5_il2cpp_TypeInfo_var);
		BitSet__ctor_mCE89D120F858E945437A2174669597480EDB2BC4(L_136, L_135, /*hidden argument*/NULL);
		((Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields*)il2cpp_codegen_static_fields_for(Follow_t8062F7C92640B848282CA7382579322185C96CA1_il2cpp_TypeInfo_var))->set__primaryExpression_in_unaryExpression760_45(L_136);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_137 = (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)SZArrayNew(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_138 = L_137;
		NullCheck(L_138);
		(L_138)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)((int64_t)((int32_t)16898832))));
		BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * L_139 = (BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 *)il2cpp_codegen_object_new(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5_il2cpp_TypeInfo_var);
		BitSet__ctor_mCE89D120F858E945437A2174669597480EDB2BC4(L_139, L_138, /*hidden argument*/NULL);
		((Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields*)il2cpp_codegen_static_fields_for(Follow_t8062F7C92640B848282CA7382579322185C96CA1_il2cpp_TypeInfo_var))->set__set_in_unaryExpression771_46(L_139);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_140 = (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)SZArrayNew(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_141 = L_140;
		NullCheck(L_141);
		(L_141)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)((int64_t)2)));
		BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * L_142 = (BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 *)il2cpp_codegen_object_new(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5_il2cpp_TypeInfo_var);
		BitSet__ctor_mCE89D120F858E945437A2174669597480EDB2BC4(L_142, L_141, /*hidden argument*/NULL);
		((Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields*)il2cpp_codegen_static_fields_for(Follow_t8062F7C92640B848282CA7382579322185C96CA1_il2cpp_TypeInfo_var))->set__primaryExpression_in_unaryExpression779_47(L_142);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_143 = (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)SZArrayNew(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_144 = L_143;
		NullCheck(L_144);
		(L_144)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)((int64_t)((int32_t)16898832))));
		BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * L_145 = (BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 *)il2cpp_codegen_object_new(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5_il2cpp_TypeInfo_var);
		BitSet__ctor_mCE89D120F858E945437A2174669597480EDB2BC4(L_145, L_144, /*hidden argument*/NULL);
		((Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields*)il2cpp_codegen_static_fields_for(Follow_t8062F7C92640B848282CA7382579322185C96CA1_il2cpp_TypeInfo_var))->set__48_in_unaryExpression791_48(L_145);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_146 = (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)SZArrayNew(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_147 = L_146;
		NullCheck(L_147);
		(L_147)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)((int64_t)2)));
		BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * L_148 = (BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 *)il2cpp_codegen_object_new(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5_il2cpp_TypeInfo_var);
		BitSet__ctor_mCE89D120F858E945437A2174669597480EDB2BC4(L_148, L_147, /*hidden argument*/NULL);
		((Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields*)il2cpp_codegen_static_fields_for(Follow_t8062F7C92640B848282CA7382579322185C96CA1_il2cpp_TypeInfo_var))->set__primaryExpression_in_unaryExpression794_49(L_148);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_149 = (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)SZArrayNew(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_150 = L_149;
		NullCheck(L_150);
		(L_150)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)((int64_t)((int32_t)16898832))));
		BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * L_151 = (BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 *)il2cpp_codegen_object_new(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5_il2cpp_TypeInfo_var);
		BitSet__ctor_mCE89D120F858E945437A2174669597480EDB2BC4(L_151, L_150, /*hidden argument*/NULL);
		((Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields*)il2cpp_codegen_static_fields_for(Follow_t8062F7C92640B848282CA7382579322185C96CA1_il2cpp_TypeInfo_var))->set__29_in_unaryExpression805_50(L_151);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_152 = (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)SZArrayNew(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_153 = L_152;
		NullCheck(L_153);
		(L_153)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)((int64_t)2)));
		BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * L_154 = (BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 *)il2cpp_codegen_object_new(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5_il2cpp_TypeInfo_var);
		BitSet__ctor_mCE89D120F858E945437A2174669597480EDB2BC4(L_154, L_153, /*hidden argument*/NULL);
		((Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields*)il2cpp_codegen_static_fields_for(Follow_t8062F7C92640B848282CA7382579322185C96CA1_il2cpp_TypeInfo_var))->set__primaryExpression_in_unaryExpression807_51(L_154);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_155 = (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)SZArrayNew(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_156 = L_155;
		NullCheck(L_156);
		(L_156)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)299067717049104LL));
		BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * L_157 = (BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 *)il2cpp_codegen_object_new(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5_il2cpp_TypeInfo_var);
		BitSet__ctor_mCE89D120F858E945437A2174669597480EDB2BC4(L_157, L_156, /*hidden argument*/NULL);
		((Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields*)il2cpp_codegen_static_fields_for(Follow_t8062F7C92640B848282CA7382579322185C96CA1_il2cpp_TypeInfo_var))->set__24_in_primaryExpression829_52(L_157);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_158 = (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)SZArrayNew(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_159 = L_158;
		NullCheck(L_159);
		(L_159)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)((int64_t)((int32_t)33554432))));
		BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * L_160 = (BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 *)il2cpp_codegen_object_new(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5_il2cpp_TypeInfo_var);
		BitSet__ctor_mCE89D120F858E945437A2174669597480EDB2BC4(L_160, L_159, /*hidden argument*/NULL);
		((Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields*)il2cpp_codegen_static_fields_for(Follow_t8062F7C92640B848282CA7382579322185C96CA1_il2cpp_TypeInfo_var))->set__logicalExpression_in_primaryExpression831_53(L_160);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_161 = (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)SZArrayNew(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_162 = L_161;
		NullCheck(L_162);
		(L_162)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)((int64_t)2)));
		BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * L_163 = (BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 *)il2cpp_codegen_object_new(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5_il2cpp_TypeInfo_var);
		BitSet__ctor_mCE89D120F858E945437A2174669597480EDB2BC4(L_163, L_162, /*hidden argument*/NULL);
		((Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields*)il2cpp_codegen_static_fields_for(Follow_t8062F7C92640B848282CA7382579322185C96CA1_il2cpp_TypeInfo_var))->set__25_in_primaryExpression833_54(L_163);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_164 = (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)SZArrayNew(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_165 = L_164;
		NullCheck(L_165);
		(L_165)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)((int64_t)2)));
		BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * L_166 = (BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 *)il2cpp_codegen_object_new(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5_il2cpp_TypeInfo_var);
		BitSet__ctor_mCE89D120F858E945437A2174669597480EDB2BC4(L_166, L_165, /*hidden argument*/NULL);
		((Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields*)il2cpp_codegen_static_fields_for(Follow_t8062F7C92640B848282CA7382579322185C96CA1_il2cpp_TypeInfo_var))->set__value_in_primaryExpression843_55(L_166);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_167 = (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)SZArrayNew(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_168 = L_167;
		NullCheck(L_168);
		(L_168)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)((int64_t)((int32_t)16777218))));
		BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * L_169 = (BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 *)il2cpp_codegen_object_new(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5_il2cpp_TypeInfo_var);
		BitSet__ctor_mCE89D120F858E945437A2174669597480EDB2BC4(L_169, L_168, /*hidden argument*/NULL);
		((Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields*)il2cpp_codegen_static_fields_for(Follow_t8062F7C92640B848282CA7382579322185C96CA1_il2cpp_TypeInfo_var))->set__identifier_in_primaryExpression851_56(L_169);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_170 = (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)SZArrayNew(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_171 = L_170;
		NullCheck(L_171);
		(L_171)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)((int64_t)2)));
		BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * L_172 = (BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 *)il2cpp_codegen_object_new(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5_il2cpp_TypeInfo_var);
		BitSet__ctor_mCE89D120F858E945437A2174669597480EDB2BC4(L_172, L_171, /*hidden argument*/NULL);
		((Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields*)il2cpp_codegen_static_fields_for(Follow_t8062F7C92640B848282CA7382579322185C96CA1_il2cpp_TypeInfo_var))->set__arguments_in_primaryExpression856_57(L_172);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_173 = (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)SZArrayNew(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_174 = L_173;
		NullCheck(L_174);
		(L_174)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)((int64_t)2)));
		BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * L_175 = (BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 *)il2cpp_codegen_object_new(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5_il2cpp_TypeInfo_var);
		BitSet__ctor_mCE89D120F858E945437A2174669597480EDB2BC4(L_175, L_174, /*hidden argument*/NULL);
		((Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields*)il2cpp_codegen_static_fields_for(Follow_t8062F7C92640B848282CA7382579322185C96CA1_il2cpp_TypeInfo_var))->set__INTEGER_in_value876_58(L_175);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_176 = (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)SZArrayNew(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_177 = L_176;
		NullCheck(L_177);
		(L_177)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)((int64_t)2)));
		BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * L_178 = (BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 *)il2cpp_codegen_object_new(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5_il2cpp_TypeInfo_var);
		BitSet__ctor_mCE89D120F858E945437A2174669597480EDB2BC4(L_178, L_177, /*hidden argument*/NULL);
		((Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields*)il2cpp_codegen_static_fields_for(Follow_t8062F7C92640B848282CA7382579322185C96CA1_il2cpp_TypeInfo_var))->set__FLOAT_in_value884_59(L_178);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_179 = (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)SZArrayNew(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_180 = L_179;
		NullCheck(L_180);
		(L_180)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)((int64_t)2)));
		BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * L_181 = (BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 *)il2cpp_codegen_object_new(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5_il2cpp_TypeInfo_var);
		BitSet__ctor_mCE89D120F858E945437A2174669597480EDB2BC4(L_181, L_180, /*hidden argument*/NULL);
		((Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields*)il2cpp_codegen_static_fields_for(Follow_t8062F7C92640B848282CA7382579322185C96CA1_il2cpp_TypeInfo_var))->set__STRING_in_value892_60(L_181);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_182 = (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)SZArrayNew(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_183 = L_182;
		NullCheck(L_183);
		(L_183)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)((int64_t)2)));
		BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * L_184 = (BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 *)il2cpp_codegen_object_new(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5_il2cpp_TypeInfo_var);
		BitSet__ctor_mCE89D120F858E945437A2174669597480EDB2BC4(L_184, L_183, /*hidden argument*/NULL);
		((Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields*)il2cpp_codegen_static_fields_for(Follow_t8062F7C92640B848282CA7382579322185C96CA1_il2cpp_TypeInfo_var))->set__DATETIME_in_value901_61(L_184);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_185 = (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)SZArrayNew(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_186 = L_185;
		NullCheck(L_186);
		(L_186)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)((int64_t)2)));
		BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * L_187 = (BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 *)il2cpp_codegen_object_new(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5_il2cpp_TypeInfo_var);
		BitSet__ctor_mCE89D120F858E945437A2174669597480EDB2BC4(L_187, L_186, /*hidden argument*/NULL);
		((Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields*)il2cpp_codegen_static_fields_for(Follow_t8062F7C92640B848282CA7382579322185C96CA1_il2cpp_TypeInfo_var))->set__TRUE_in_value908_62(L_187);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_188 = (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)SZArrayNew(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_189 = L_188;
		NullCheck(L_189);
		(L_189)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)((int64_t)2)));
		BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * L_190 = (BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 *)il2cpp_codegen_object_new(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5_il2cpp_TypeInfo_var);
		BitSet__ctor_mCE89D120F858E945437A2174669597480EDB2BC4(L_190, L_189, /*hidden argument*/NULL);
		((Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields*)il2cpp_codegen_static_fields_for(Follow_t8062F7C92640B848282CA7382579322185C96CA1_il2cpp_TypeInfo_var))->set__FALSE_in_value916_63(L_190);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_191 = (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)SZArrayNew(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_192 = L_191;
		NullCheck(L_192);
		(L_192)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)((int64_t)2)));
		BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * L_193 = (BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 *)il2cpp_codegen_object_new(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5_il2cpp_TypeInfo_var);
		BitSet__ctor_mCE89D120F858E945437A2174669597480EDB2BC4(L_193, L_192, /*hidden argument*/NULL);
		((Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields*)il2cpp_codegen_static_fields_for(Follow_t8062F7C92640B848282CA7382579322185C96CA1_il2cpp_TypeInfo_var))->set__ID_in_identifier934_64(L_193);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_194 = (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)SZArrayNew(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_195 = L_194;
		NullCheck(L_195);
		(L_195)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)((int64_t)2)));
		BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * L_196 = (BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 *)il2cpp_codegen_object_new(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5_il2cpp_TypeInfo_var);
		BitSet__ctor_mCE89D120F858E945437A2174669597480EDB2BC4(L_196, L_195, /*hidden argument*/NULL);
		((Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields*)il2cpp_codegen_static_fields_for(Follow_t8062F7C92640B848282CA7382579322185C96CA1_il2cpp_TypeInfo_var))->set__NAME_in_identifier942_65(L_196);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_197 = (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)SZArrayNew(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_198 = L_197;
		NullCheck(L_198);
		(L_198)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)((int64_t)((int32_t)268435458))));
		BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * L_199 = (BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 *)il2cpp_codegen_object_new(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5_il2cpp_TypeInfo_var);
		BitSet__ctor_mCE89D120F858E945437A2174669597480EDB2BC4(L_199, L_198, /*hidden argument*/NULL);
		((Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields*)il2cpp_codegen_static_fields_for(Follow_t8062F7C92640B848282CA7382579322185C96CA1_il2cpp_TypeInfo_var))->set__logicalExpression_in_expressionList966_66(L_199);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_200 = (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)SZArrayNew(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_201 = L_200;
		NullCheck(L_201);
		(L_201)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)299067717049104LL));
		BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * L_202 = (BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 *)il2cpp_codegen_object_new(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5_il2cpp_TypeInfo_var);
		BitSet__ctor_mCE89D120F858E945437A2174669597480EDB2BC4(L_202, L_201, /*hidden argument*/NULL);
		((Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields*)il2cpp_codegen_static_fields_for(Follow_t8062F7C92640B848282CA7382579322185C96CA1_il2cpp_TypeInfo_var))->set__28_in_expressionList973_67(L_202);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_203 = (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)SZArrayNew(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_204 = L_203;
		NullCheck(L_204);
		(L_204)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)((int64_t)((int32_t)268435458))));
		BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * L_205 = (BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 *)il2cpp_codegen_object_new(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5_il2cpp_TypeInfo_var);
		BitSet__ctor_mCE89D120F858E945437A2174669597480EDB2BC4(L_205, L_204, /*hidden argument*/NULL);
		((Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields*)il2cpp_codegen_static_fields_for(Follow_t8062F7C92640B848282CA7382579322185C96CA1_il2cpp_TypeInfo_var))->set__logicalExpression_in_expressionList977_68(L_205);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_206 = (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)SZArrayNew(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_207 = L_206;
		NullCheck(L_207);
		(L_207)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)299067750603536LL));
		BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * L_208 = (BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 *)il2cpp_codegen_object_new(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5_il2cpp_TypeInfo_var);
		BitSet__ctor_mCE89D120F858E945437A2174669597480EDB2BC4(L_208, L_207, /*hidden argument*/NULL);
		((Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields*)il2cpp_codegen_static_fields_for(Follow_t8062F7C92640B848282CA7382579322185C96CA1_il2cpp_TypeInfo_var))->set__24_in_arguments1006_69(L_208);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_209 = (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)SZArrayNew(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_210 = L_209;
		NullCheck(L_210);
		(L_210)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)((int64_t)((int32_t)33554432))));
		BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * L_211 = (BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 *)il2cpp_codegen_object_new(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5_il2cpp_TypeInfo_var);
		BitSet__ctor_mCE89D120F858E945437A2174669597480EDB2BC4(L_211, L_210, /*hidden argument*/NULL);
		((Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields*)il2cpp_codegen_static_fields_for(Follow_t8062F7C92640B848282CA7382579322185C96CA1_il2cpp_TypeInfo_var))->set__expressionList_in_arguments1010_70(L_211);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_212 = (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)SZArrayNew(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* L_213 = L_212;
		NullCheck(L_213);
		(L_213)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)((int64_t)2)));
		BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 * L_214 = (BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5 *)il2cpp_codegen_object_new(BitSet_tA55EB9D463DCEBF41552914A9460F5237B1BCDF5_il2cpp_TypeInfo_var);
		BitSet__ctor_mCE89D120F858E945437A2174669597480EDB2BC4(L_214, L_213, /*hidden argument*/NULL);
		((Follow_t8062F7C92640B848282CA7382579322185C96CA1_StaticFields*)il2cpp_codegen_static_fields_for(Follow_t8062F7C92640B848282CA7382579322185C96CA1_il2cpp_TypeInfo_var))->set__25_in_arguments1017_71(L_214);
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
// Naninovel.Antlr.Runtime.Tree.CommonTree Naninovel.NCalc.NCalcParser/additiveExpression_return::get_Tree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * additiveExpression_return_get_Tree_m99C1C060127A205A8C4E87C73A9F9C55C010F2AD (additiveExpression_return_t7B20A0AB4A427B4232D9749D0E11F7449A6A173F * __this, const RuntimeMethod* method)
{
	{
		CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * L_0 = __this->get__tree_3();
		return L_0;
	}
}
// System.Void Naninovel.NCalc.NCalcParser/additiveExpression_return::set_Tree(Naninovel.Antlr.Runtime.Tree.CommonTree)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void additiveExpression_return_set_Tree_mF38F4A157B1AB9489D7B8CC573A47FFB47398A3B (additiveExpression_return_t7B20A0AB4A427B4232D9749D0E11F7449A6A173F * __this, CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * ___value0, const RuntimeMethod* method)
{
	{
		CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * L_0 = ___value0;
		__this->set__tree_3(L_0);
		return;
	}
}
// System.Void Naninovel.NCalc.NCalcParser/additiveExpression_return::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void additiveExpression_return__ctor_m05809F385329C9937B529E6483D9EF9F48E60984 (additiveExpression_return_t7B20A0AB4A427B4232D9749D0E11F7449A6A173F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParserRuleReturnScope_1__ctor_m7C32AB73674119386F491757CFE57CC07350C5B8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ParserRuleReturnScope_1__ctor_m7C32AB73674119386F491757CFE57CC07350C5B8(__this, /*hidden argument*/ParserRuleReturnScope_1__ctor_m7C32AB73674119386F491757CFE57CC07350C5B8_RuntimeMethod_var);
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
// Naninovel.Antlr.Runtime.Tree.CommonTree Naninovel.NCalc.NCalcParser/arguments_return::get_Tree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * arguments_return_get_Tree_mD11E1E0014C6A41B234E10ECCE3C18E145B7458B (arguments_return_t71831D4E6B23911C48BC9159A9561CE4858EFE5C * __this, const RuntimeMethod* method)
{
	{
		CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * L_0 = __this->get__tree_3();
		return L_0;
	}
}
// System.Void Naninovel.NCalc.NCalcParser/arguments_return::set_Tree(Naninovel.Antlr.Runtime.Tree.CommonTree)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void arguments_return_set_Tree_mE8A5E1292B1EDAF171ADE0C8DE61B4901E64893F (arguments_return_t71831D4E6B23911C48BC9159A9561CE4858EFE5C * __this, CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * ___value0, const RuntimeMethod* method)
{
	{
		CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * L_0 = ___value0;
		__this->set__tree_3(L_0);
		return;
	}
}
// System.Void Naninovel.NCalc.NCalcParser/arguments_return::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void arguments_return__ctor_mE9E5B5A050A044A6E90DCACD65FC3C367FC6AD78 (arguments_return_t71831D4E6B23911C48BC9159A9561CE4858EFE5C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParserRuleReturnScope_1__ctor_m7C32AB73674119386F491757CFE57CC07350C5B8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ParserRuleReturnScope_1__ctor_m7C32AB73674119386F491757CFE57CC07350C5B8(__this, /*hidden argument*/ParserRuleReturnScope_1__ctor_m7C32AB73674119386F491757CFE57CC07350C5B8_RuntimeMethod_var);
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
// Naninovel.Antlr.Runtime.Tree.CommonTree Naninovel.NCalc.NCalcParser/bitwiseAndExpression_return::get_Tree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * bitwiseAndExpression_return_get_Tree_m986395B4C54A431456DC9F17AA733B3294591C56 (bitwiseAndExpression_return_tB62FF7C4DD57583AC2A909A58B8ECF821711EAC1 * __this, const RuntimeMethod* method)
{
	{
		CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * L_0 = __this->get__tree_3();
		return L_0;
	}
}
// System.Void Naninovel.NCalc.NCalcParser/bitwiseAndExpression_return::set_Tree(Naninovel.Antlr.Runtime.Tree.CommonTree)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void bitwiseAndExpression_return_set_Tree_mE325FBC249B096B12D8E9D135344CAED0BAAFEB8 (bitwiseAndExpression_return_tB62FF7C4DD57583AC2A909A58B8ECF821711EAC1 * __this, CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * ___value0, const RuntimeMethod* method)
{
	{
		CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * L_0 = ___value0;
		__this->set__tree_3(L_0);
		return;
	}
}
// System.Void Naninovel.NCalc.NCalcParser/bitwiseAndExpression_return::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void bitwiseAndExpression_return__ctor_m9B66A7BD33F54FEC73A7B55B853CB7020F9D023D (bitwiseAndExpression_return_tB62FF7C4DD57583AC2A909A58B8ECF821711EAC1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParserRuleReturnScope_1__ctor_m7C32AB73674119386F491757CFE57CC07350C5B8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ParserRuleReturnScope_1__ctor_m7C32AB73674119386F491757CFE57CC07350C5B8(__this, /*hidden argument*/ParserRuleReturnScope_1__ctor_m7C32AB73674119386F491757CFE57CC07350C5B8_RuntimeMethod_var);
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
// Naninovel.Antlr.Runtime.Tree.CommonTree Naninovel.NCalc.NCalcParser/bitwiseOrExpression_return::get_Tree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * bitwiseOrExpression_return_get_Tree_m2FD29E367A295627DA3522EA2C0EBCC5D7570AD7 (bitwiseOrExpression_return_tD269C7AC623828818D14BE34E58BA4C6BD557E54 * __this, const RuntimeMethod* method)
{
	{
		CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * L_0 = __this->get__tree_3();
		return L_0;
	}
}
// System.Void Naninovel.NCalc.NCalcParser/bitwiseOrExpression_return::set_Tree(Naninovel.Antlr.Runtime.Tree.CommonTree)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void bitwiseOrExpression_return_set_Tree_mFFAD746CF81C0E336684BE1833676C102FACEF93 (bitwiseOrExpression_return_tD269C7AC623828818D14BE34E58BA4C6BD557E54 * __this, CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * ___value0, const RuntimeMethod* method)
{
	{
		CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * L_0 = ___value0;
		__this->set__tree_3(L_0);
		return;
	}
}
// System.Void Naninovel.NCalc.NCalcParser/bitwiseOrExpression_return::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void bitwiseOrExpression_return__ctor_m6D516E1D76CA23B3E81844B4343947A619D67FAE (bitwiseOrExpression_return_tD269C7AC623828818D14BE34E58BA4C6BD557E54 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParserRuleReturnScope_1__ctor_m7C32AB73674119386F491757CFE57CC07350C5B8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ParserRuleReturnScope_1__ctor_m7C32AB73674119386F491757CFE57CC07350C5B8(__this, /*hidden argument*/ParserRuleReturnScope_1__ctor_m7C32AB73674119386F491757CFE57CC07350C5B8_RuntimeMethod_var);
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
// Naninovel.Antlr.Runtime.Tree.CommonTree Naninovel.NCalc.NCalcParser/bitwiseXOrExpression_return::get_Tree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * bitwiseXOrExpression_return_get_Tree_m6B59E5D5F0C9CE21EB3914CCF747AA089B208A6F (bitwiseXOrExpression_return_t61EA467B0152C06EB4262BF6EB43602965419A15 * __this, const RuntimeMethod* method)
{
	{
		CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * L_0 = __this->get__tree_3();
		return L_0;
	}
}
// System.Void Naninovel.NCalc.NCalcParser/bitwiseXOrExpression_return::set_Tree(Naninovel.Antlr.Runtime.Tree.CommonTree)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void bitwiseXOrExpression_return_set_Tree_m60681340287E17F0186690383BFE9BC8555358B3 (bitwiseXOrExpression_return_t61EA467B0152C06EB4262BF6EB43602965419A15 * __this, CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * ___value0, const RuntimeMethod* method)
{
	{
		CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * L_0 = ___value0;
		__this->set__tree_3(L_0);
		return;
	}
}
// System.Void Naninovel.NCalc.NCalcParser/bitwiseXOrExpression_return::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void bitwiseXOrExpression_return__ctor_m9D0E199C8C7BBB37DB2F716323A92C860553845C (bitwiseXOrExpression_return_t61EA467B0152C06EB4262BF6EB43602965419A15 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParserRuleReturnScope_1__ctor_m7C32AB73674119386F491757CFE57CC07350C5B8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ParserRuleReturnScope_1__ctor_m7C32AB73674119386F491757CFE57CC07350C5B8(__this, /*hidden argument*/ParserRuleReturnScope_1__ctor_m7C32AB73674119386F491757CFE57CC07350C5B8_RuntimeMethod_var);
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
// Naninovel.Antlr.Runtime.Tree.CommonTree Naninovel.NCalc.NCalcParser/booleanAndExpression_return::get_Tree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * booleanAndExpression_return_get_Tree_mC741E8E6F6634FEDB7E4F0C10C4B558BAC43871F (booleanAndExpression_return_tF61EB28AB3F87201FCA3D1C93DB424D62A29A698 * __this, const RuntimeMethod* method)
{
	{
		CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * L_0 = __this->get__tree_3();
		return L_0;
	}
}
// System.Void Naninovel.NCalc.NCalcParser/booleanAndExpression_return::set_Tree(Naninovel.Antlr.Runtime.Tree.CommonTree)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void booleanAndExpression_return_set_Tree_m36DC592124E4B023FCFDED118D2C6B2704C7694A (booleanAndExpression_return_tF61EB28AB3F87201FCA3D1C93DB424D62A29A698 * __this, CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * ___value0, const RuntimeMethod* method)
{
	{
		CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * L_0 = ___value0;
		__this->set__tree_3(L_0);
		return;
	}
}
// System.Void Naninovel.NCalc.NCalcParser/booleanAndExpression_return::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void booleanAndExpression_return__ctor_mF63735ADE01004CB5B560D1B9F4861064315DDC8 (booleanAndExpression_return_tF61EB28AB3F87201FCA3D1C93DB424D62A29A698 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParserRuleReturnScope_1__ctor_m7C32AB73674119386F491757CFE57CC07350C5B8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ParserRuleReturnScope_1__ctor_m7C32AB73674119386F491757CFE57CC07350C5B8(__this, /*hidden argument*/ParserRuleReturnScope_1__ctor_m7C32AB73674119386F491757CFE57CC07350C5B8_RuntimeMethod_var);
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
// Naninovel.Antlr.Runtime.Tree.CommonTree Naninovel.NCalc.NCalcParser/conditionalExpression_return::get_Tree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * conditionalExpression_return_get_Tree_m8649598D9EE0AF19B3F1CF859592B1FA2F6DF69E (conditionalExpression_return_tB42A32FA8607B0F6FCD60B893CF3C97E8AFFDD65 * __this, const RuntimeMethod* method)
{
	{
		CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * L_0 = __this->get__tree_3();
		return L_0;
	}
}
// System.Void Naninovel.NCalc.NCalcParser/conditionalExpression_return::set_Tree(Naninovel.Antlr.Runtime.Tree.CommonTree)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void conditionalExpression_return_set_Tree_m4AA4745744527D6D19EF6EAF50C306D0E9526294 (conditionalExpression_return_tB42A32FA8607B0F6FCD60B893CF3C97E8AFFDD65 * __this, CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * ___value0, const RuntimeMethod* method)
{
	{
		CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * L_0 = ___value0;
		__this->set__tree_3(L_0);
		return;
	}
}
// System.Void Naninovel.NCalc.NCalcParser/conditionalExpression_return::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void conditionalExpression_return__ctor_mAF2F527EA4D985B220C6CAFA4F34F3ECB642D918 (conditionalExpression_return_tB42A32FA8607B0F6FCD60B893CF3C97E8AFFDD65 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParserRuleReturnScope_1__ctor_m7C32AB73674119386F491757CFE57CC07350C5B8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ParserRuleReturnScope_1__ctor_m7C32AB73674119386F491757CFE57CC07350C5B8(__this, /*hidden argument*/ParserRuleReturnScope_1__ctor_m7C32AB73674119386F491757CFE57CC07350C5B8_RuntimeMethod_var);
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
// Naninovel.Antlr.Runtime.Tree.CommonTree Naninovel.NCalc.NCalcParser/equalityExpression_return::get_Tree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * equalityExpression_return_get_Tree_mA721FE27925FAB13C1BEEFECF1961F10D561E685 (equalityExpression_return_tAC0FDD0D06D1E3189C76B665112BA5B7824947D5 * __this, const RuntimeMethod* method)
{
	{
		CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * L_0 = __this->get__tree_3();
		return L_0;
	}
}
// System.Void Naninovel.NCalc.NCalcParser/equalityExpression_return::set_Tree(Naninovel.Antlr.Runtime.Tree.CommonTree)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void equalityExpression_return_set_Tree_m7ACC30210337A1C7D25F990E5C04B64939E0E972 (equalityExpression_return_tAC0FDD0D06D1E3189C76B665112BA5B7824947D5 * __this, CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * ___value0, const RuntimeMethod* method)
{
	{
		CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * L_0 = ___value0;
		__this->set__tree_3(L_0);
		return;
	}
}
// System.Void Naninovel.NCalc.NCalcParser/equalityExpression_return::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void equalityExpression_return__ctor_mD7B758B7B6CC094B4744BC70EC028CBFA89C66B1 (equalityExpression_return_tAC0FDD0D06D1E3189C76B665112BA5B7824947D5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParserRuleReturnScope_1__ctor_m7C32AB73674119386F491757CFE57CC07350C5B8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ParserRuleReturnScope_1__ctor_m7C32AB73674119386F491757CFE57CC07350C5B8(__this, /*hidden argument*/ParserRuleReturnScope_1__ctor_m7C32AB73674119386F491757CFE57CC07350C5B8_RuntimeMethod_var);
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
// Naninovel.Antlr.Runtime.Tree.CommonTree Naninovel.NCalc.NCalcParser/expressionList_return::get_Tree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * expressionList_return_get_Tree_m6722BA2D364282A47564B2810AC59B1AEBD98995 (expressionList_return_t9B440CBDDC891CAEBCA1D67BE7AA1983BEEC6883 * __this, const RuntimeMethod* method)
{
	{
		CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * L_0 = __this->get__tree_3();
		return L_0;
	}
}
// System.Void Naninovel.NCalc.NCalcParser/expressionList_return::set_Tree(Naninovel.Antlr.Runtime.Tree.CommonTree)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void expressionList_return_set_Tree_mBE19EEB8ABEFF3045BE38B3AB9526913725B8EF7 (expressionList_return_t9B440CBDDC891CAEBCA1D67BE7AA1983BEEC6883 * __this, CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * ___value0, const RuntimeMethod* method)
{
	{
		CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * L_0 = ___value0;
		__this->set__tree_3(L_0);
		return;
	}
}
// System.Void Naninovel.NCalc.NCalcParser/expressionList_return::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void expressionList_return__ctor_m72B2130CA750FFBB396DE6C7B7CE27F65B0C59B7 (expressionList_return_t9B440CBDDC891CAEBCA1D67BE7AA1983BEEC6883 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParserRuleReturnScope_1__ctor_m7C32AB73674119386F491757CFE57CC07350C5B8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ParserRuleReturnScope_1__ctor_m7C32AB73674119386F491757CFE57CC07350C5B8(__this, /*hidden argument*/ParserRuleReturnScope_1__ctor_m7C32AB73674119386F491757CFE57CC07350C5B8_RuntimeMethod_var);
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
// Naninovel.Antlr.Runtime.Tree.CommonTree Naninovel.NCalc.NCalcParser/identifier_return::get_Tree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * identifier_return_get_Tree_m8CF76D3D918A996F10285332E91A7FAC0594304D (identifier_return_t887187A427D6BDD304A6DCEE909047FC757428D3 * __this, const RuntimeMethod* method)
{
	{
		CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * L_0 = __this->get__tree_3();
		return L_0;
	}
}
// System.Void Naninovel.NCalc.NCalcParser/identifier_return::set_Tree(Naninovel.Antlr.Runtime.Tree.CommonTree)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void identifier_return_set_Tree_m519482739EE0F80BDB89BF669A89C3A185445484 (identifier_return_t887187A427D6BDD304A6DCEE909047FC757428D3 * __this, CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * ___value0, const RuntimeMethod* method)
{
	{
		CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * L_0 = ___value0;
		__this->set__tree_3(L_0);
		return;
	}
}
// System.Void Naninovel.NCalc.NCalcParser/identifier_return::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void identifier_return__ctor_m7E861E967822007C8FB8EB1C46C9E5CFF60A8A21 (identifier_return_t887187A427D6BDD304A6DCEE909047FC757428D3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParserRuleReturnScope_1__ctor_m7C32AB73674119386F491757CFE57CC07350C5B8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ParserRuleReturnScope_1__ctor_m7C32AB73674119386F491757CFE57CC07350C5B8(__this, /*hidden argument*/ParserRuleReturnScope_1__ctor_m7C32AB73674119386F491757CFE57CC07350C5B8_RuntimeMethod_var);
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
// Naninovel.Antlr.Runtime.Tree.CommonTree Naninovel.NCalc.NCalcParser/logicalExpression_return::get_Tree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * logicalExpression_return_get_Tree_m44EAA4410E39F756B1DE1DC5E5F23A66D5A442E9 (logicalExpression_return_t4B9B5239A70029EDD25738726D4440F19698F97D * __this, const RuntimeMethod* method)
{
	{
		CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * L_0 = __this->get__tree_3();
		return L_0;
	}
}
// System.Void Naninovel.NCalc.NCalcParser/logicalExpression_return::set_Tree(Naninovel.Antlr.Runtime.Tree.CommonTree)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void logicalExpression_return_set_Tree_mB4E7AFE1005CFCA99A17A6D0E51E57D9022EA8E8 (logicalExpression_return_t4B9B5239A70029EDD25738726D4440F19698F97D * __this, CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * ___value0, const RuntimeMethod* method)
{
	{
		CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * L_0 = ___value0;
		__this->set__tree_3(L_0);
		return;
	}
}
// System.Void Naninovel.NCalc.NCalcParser/logicalExpression_return::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void logicalExpression_return__ctor_m83070E36BF457E96AA76CA22F52A1015558CB633 (logicalExpression_return_t4B9B5239A70029EDD25738726D4440F19698F97D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParserRuleReturnScope_1__ctor_m7C32AB73674119386F491757CFE57CC07350C5B8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ParserRuleReturnScope_1__ctor_m7C32AB73674119386F491757CFE57CC07350C5B8(__this, /*hidden argument*/ParserRuleReturnScope_1__ctor_m7C32AB73674119386F491757CFE57CC07350C5B8_RuntimeMethod_var);
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
// Naninovel.Antlr.Runtime.Tree.CommonTree Naninovel.NCalc.NCalcParser/multiplicativeExpression_return::get_Tree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * multiplicativeExpression_return_get_Tree_m57912746EFC25EE669105B983C5DCA33C72EDC16 (multiplicativeExpression_return_t2F29D00FBE8F6F71BACC7F04D2409758F1EEC9FB * __this, const RuntimeMethod* method)
{
	{
		CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * L_0 = __this->get__tree_3();
		return L_0;
	}
}
// System.Void Naninovel.NCalc.NCalcParser/multiplicativeExpression_return::set_Tree(Naninovel.Antlr.Runtime.Tree.CommonTree)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void multiplicativeExpression_return_set_Tree_m51C18AB822342DB0948D9D01261B8329976C5668 (multiplicativeExpression_return_t2F29D00FBE8F6F71BACC7F04D2409758F1EEC9FB * __this, CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * ___value0, const RuntimeMethod* method)
{
	{
		CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * L_0 = ___value0;
		__this->set__tree_3(L_0);
		return;
	}
}
// System.Void Naninovel.NCalc.NCalcParser/multiplicativeExpression_return::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void multiplicativeExpression_return__ctor_m54FA11E32CC2A5B2E911E599FF7B7EA1C4BA4D13 (multiplicativeExpression_return_t2F29D00FBE8F6F71BACC7F04D2409758F1EEC9FB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParserRuleReturnScope_1__ctor_m7C32AB73674119386F491757CFE57CC07350C5B8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ParserRuleReturnScope_1__ctor_m7C32AB73674119386F491757CFE57CC07350C5B8(__this, /*hidden argument*/ParserRuleReturnScope_1__ctor_m7C32AB73674119386F491757CFE57CC07350C5B8_RuntimeMethod_var);
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
// Naninovel.Antlr.Runtime.Tree.CommonTree Naninovel.NCalc.NCalcParser/ncalcExpression_return::get_Tree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * ncalcExpression_return_get_Tree_m325A85EFD3753A7764B366B4F94C72891BBC09D9 (ncalcExpression_return_t66EF927254FDFAA1ABE3AEF1AD5BC5EF910CCA8A * __this, const RuntimeMethod* method)
{
	{
		CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * L_0 = __this->get__tree_3();
		return L_0;
	}
}
// System.Void Naninovel.NCalc.NCalcParser/ncalcExpression_return::set_Tree(Naninovel.Antlr.Runtime.Tree.CommonTree)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ncalcExpression_return_set_Tree_mB0367A5C06827B21BD15F317A34F8F2ED62C9B31 (ncalcExpression_return_t66EF927254FDFAA1ABE3AEF1AD5BC5EF910CCA8A * __this, CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * ___value0, const RuntimeMethod* method)
{
	{
		CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * L_0 = ___value0;
		__this->set__tree_3(L_0);
		return;
	}
}
// System.Void Naninovel.NCalc.NCalcParser/ncalcExpression_return::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ncalcExpression_return__ctor_m8C7B4EF78444939C92DF877A94A1835706536AE2 (ncalcExpression_return_t66EF927254FDFAA1ABE3AEF1AD5BC5EF910CCA8A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParserRuleReturnScope_1__ctor_m7C32AB73674119386F491757CFE57CC07350C5B8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ParserRuleReturnScope_1__ctor_m7C32AB73674119386F491757CFE57CC07350C5B8(__this, /*hidden argument*/ParserRuleReturnScope_1__ctor_m7C32AB73674119386F491757CFE57CC07350C5B8_RuntimeMethod_var);
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
// Naninovel.Antlr.Runtime.Tree.CommonTree Naninovel.NCalc.NCalcParser/primaryExpression_return::get_Tree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * primaryExpression_return_get_Tree_m252354F19ABEB11BA0ABC71AB42D86BA788AA1FE (primaryExpression_return_t3BC619508077312D30852257CAA580AAA95DBC00 * __this, const RuntimeMethod* method)
{
	{
		CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * L_0 = __this->get__tree_3();
		return L_0;
	}
}
// System.Void Naninovel.NCalc.NCalcParser/primaryExpression_return::set_Tree(Naninovel.Antlr.Runtime.Tree.CommonTree)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void primaryExpression_return_set_Tree_mCFBF373C25AF13C3591A6C6F8603CFCC499FA238 (primaryExpression_return_t3BC619508077312D30852257CAA580AAA95DBC00 * __this, CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * ___value0, const RuntimeMethod* method)
{
	{
		CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * L_0 = ___value0;
		__this->set__tree_3(L_0);
		return;
	}
}
// System.Void Naninovel.NCalc.NCalcParser/primaryExpression_return::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void primaryExpression_return__ctor_m2D2E6FD9274A48B3A9778A52E70C2084E9C9AB5D (primaryExpression_return_t3BC619508077312D30852257CAA580AAA95DBC00 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParserRuleReturnScope_1__ctor_m7C32AB73674119386F491757CFE57CC07350C5B8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ParserRuleReturnScope_1__ctor_m7C32AB73674119386F491757CFE57CC07350C5B8(__this, /*hidden argument*/ParserRuleReturnScope_1__ctor_m7C32AB73674119386F491757CFE57CC07350C5B8_RuntimeMethod_var);
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
// Naninovel.Antlr.Runtime.Tree.CommonTree Naninovel.NCalc.NCalcParser/relationalExpression_return::get_Tree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * relationalExpression_return_get_Tree_m8446ED44269E434234ADC2BAC34C6FBDC5322386 (relationalExpression_return_t34D4DA562F00E169C74C2CE1E245489AD917BB60 * __this, const RuntimeMethod* method)
{
	{
		CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * L_0 = __this->get__tree_3();
		return L_0;
	}
}
// System.Void Naninovel.NCalc.NCalcParser/relationalExpression_return::set_Tree(Naninovel.Antlr.Runtime.Tree.CommonTree)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void relationalExpression_return_set_Tree_m6ADDC5B85EAE4CF2B8D8C1632A0B18BFDE9B404E (relationalExpression_return_t34D4DA562F00E169C74C2CE1E245489AD917BB60 * __this, CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * ___value0, const RuntimeMethod* method)
{
	{
		CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * L_0 = ___value0;
		__this->set__tree_3(L_0);
		return;
	}
}
// System.Void Naninovel.NCalc.NCalcParser/relationalExpression_return::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void relationalExpression_return__ctor_m655FE9B24067B447AC1E0F8676058EB650B4B6FE (relationalExpression_return_t34D4DA562F00E169C74C2CE1E245489AD917BB60 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParserRuleReturnScope_1__ctor_m7C32AB73674119386F491757CFE57CC07350C5B8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ParserRuleReturnScope_1__ctor_m7C32AB73674119386F491757CFE57CC07350C5B8(__this, /*hidden argument*/ParserRuleReturnScope_1__ctor_m7C32AB73674119386F491757CFE57CC07350C5B8_RuntimeMethod_var);
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
// Naninovel.Antlr.Runtime.Tree.CommonTree Naninovel.NCalc.NCalcParser/shiftExpression_return::get_Tree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * shiftExpression_return_get_Tree_m75510EEBF653AFC889312D5A0C3C21033D97CFF6 (shiftExpression_return_t022A96295D36250C2C6C604752FF6E339E270FCA * __this, const RuntimeMethod* method)
{
	{
		CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * L_0 = __this->get__tree_3();
		return L_0;
	}
}
// System.Void Naninovel.NCalc.NCalcParser/shiftExpression_return::set_Tree(Naninovel.Antlr.Runtime.Tree.CommonTree)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void shiftExpression_return_set_Tree_mB0603D4D22C19784AC69B4DDD4954BD46D881B35 (shiftExpression_return_t022A96295D36250C2C6C604752FF6E339E270FCA * __this, CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * ___value0, const RuntimeMethod* method)
{
	{
		CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * L_0 = ___value0;
		__this->set__tree_3(L_0);
		return;
	}
}
// System.Void Naninovel.NCalc.NCalcParser/shiftExpression_return::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void shiftExpression_return__ctor_mA2A57D6C2D9DA76C00D24DE8EFFE90A6ECCFBD9C (shiftExpression_return_t022A96295D36250C2C6C604752FF6E339E270FCA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParserRuleReturnScope_1__ctor_m7C32AB73674119386F491757CFE57CC07350C5B8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ParserRuleReturnScope_1__ctor_m7C32AB73674119386F491757CFE57CC07350C5B8(__this, /*hidden argument*/ParserRuleReturnScope_1__ctor_m7C32AB73674119386F491757CFE57CC07350C5B8_RuntimeMethod_var);
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
// Naninovel.Antlr.Runtime.Tree.CommonTree Naninovel.NCalc.NCalcParser/unaryExpression_return::get_Tree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * unaryExpression_return_get_Tree_mC7EECD99923BF972DACB98BC57AB68D1D450ACFF (unaryExpression_return_t7D5BB6EE3838BC888EC5FB09A9AE81E4BBF84663 * __this, const RuntimeMethod* method)
{
	{
		CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * L_0 = __this->get__tree_3();
		return L_0;
	}
}
// System.Void Naninovel.NCalc.NCalcParser/unaryExpression_return::set_Tree(Naninovel.Antlr.Runtime.Tree.CommonTree)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unaryExpression_return_set_Tree_m4298672CAB75324A7C283151E6B1E8CAD4AA35B6 (unaryExpression_return_t7D5BB6EE3838BC888EC5FB09A9AE81E4BBF84663 * __this, CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * ___value0, const RuntimeMethod* method)
{
	{
		CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * L_0 = ___value0;
		__this->set__tree_3(L_0);
		return;
	}
}
// System.Void Naninovel.NCalc.NCalcParser/unaryExpression_return::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unaryExpression_return__ctor_m940D8AA022BF493780FCCB6C6DF22A76C868D4F5 (unaryExpression_return_t7D5BB6EE3838BC888EC5FB09A9AE81E4BBF84663 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParserRuleReturnScope_1__ctor_m7C32AB73674119386F491757CFE57CC07350C5B8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ParserRuleReturnScope_1__ctor_m7C32AB73674119386F491757CFE57CC07350C5B8(__this, /*hidden argument*/ParserRuleReturnScope_1__ctor_m7C32AB73674119386F491757CFE57CC07350C5B8_RuntimeMethod_var);
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
// Naninovel.Antlr.Runtime.Tree.CommonTree Naninovel.NCalc.NCalcParser/value_return::get_Tree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * value_return_get_Tree_m49FA962C019D9C69EDC3E954C28083B5FDA6FA77 (value_return_t9D64C256C6B414FD3F848D274106AC56229CBF43 * __this, const RuntimeMethod* method)
{
	{
		CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * L_0 = __this->get__tree_3();
		return L_0;
	}
}
// System.Void Naninovel.NCalc.NCalcParser/value_return::set_Tree(Naninovel.Antlr.Runtime.Tree.CommonTree)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void value_return_set_Tree_m244ECB59C1EEF95642755984542B0BF8DF9DF3AF (value_return_t9D64C256C6B414FD3F848D274106AC56229CBF43 * __this, CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * ___value0, const RuntimeMethod* method)
{
	{
		CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * L_0 = ___value0;
		__this->set__tree_3(L_0);
		return;
	}
}
// System.Void Naninovel.NCalc.NCalcParser/value_return::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void value_return__ctor_m444F60C90C098970A563DF8BD20738F1714C77AA (value_return_t9D64C256C6B414FD3F848D274106AC56229CBF43 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParserRuleReturnScope_1__ctor_m7C32AB73674119386F491757CFE57CC07350C5B8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ParserRuleReturnScope_1__ctor_m7C32AB73674119386F491757CFE57CC07350C5B8(__this, /*hidden argument*/ParserRuleReturnScope_1__ctor_m7C32AB73674119386F491757CFE57CC07350C5B8_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ParameterArgs_set_HasResult_m5DB7A912096B2A5AC71C447E862C146798F6B0F5_inline (ParameterArgs_t7201DE499D85C7B63EBC096614680084E8464C98 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CHasResultU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CommonToken_set_Line_m9F2A1FFE79F0A721CC4F778E9EF3C8A91F6056A7_inline (CommonToken_tAD014B56C894BF06C90025CC6BE550B60C31B668 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_line_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CommonToken_set_CharPositionInLine_m2C55E25DCF9323A0D39529DC4A13ED444BC2B20F_inline (CommonToken_tAD014B56C894BF06C90025CC6BE550B60C31B668 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_charPositionInLine_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CommonToken_set_Channel_m0C5E95710A99A3BCB266F41BBCC0C41F0D9D8577_inline (CommonToken_tAD014B56C894BF06C90025CC6BE550B60C31B668 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_channel_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CommonTree_get_Token_mBD1B69B6BA06B672FF50C0DB3FDB0A73808E5E07_inline (CommonTree_tE80A9DB6D757C5594D5632B854F09178C8CEC697 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get__token_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SerializationVisitor_set_Result_mDE081A8F53AC297426FC7ADBF00F2FC5B98D95A5_inline (SerializationVisitor_t7FA9CCD67A83DF85E052BC13D42D6CF05B3B65B3 * __this, StringBuilder_t * ___value0, const RuntimeMethod* method)
{
	{
		StringBuilder_t * L_0 = ___value0;
		__this->set_U3CResultU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * TernaryExpression_get_LeftExpression_m77B0DFDE3F7D09EC6CB9530F1CD05D1FF030D533_inline (TernaryExpression_tB518CB82C2E5F08ACA68A8062B3076B8614252A8 * __this, const RuntimeMethod* method)
{
	{
		LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * L_0 = __this->get_U3CLeftExpressionU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringBuilder_t * SerializationVisitor_get_Result_m86A4A31AF1084FBA20548920573755CE396F8A31_inline (SerializationVisitor_t7FA9CCD67A83DF85E052BC13D42D6CF05B3B65B3 * __this, const RuntimeMethod* method)
{
	{
		StringBuilder_t * L_0 = __this->get_U3CResultU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * TernaryExpression_get_MiddleExpression_mD9A14BB9DCD0EF78870AAD92FC5CABE1335B55C3_inline (TernaryExpression_tB518CB82C2E5F08ACA68A8062B3076B8614252A8 * __this, const RuntimeMethod* method)
{
	{
		LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * L_0 = __this->get_U3CMiddleExpressionU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * TernaryExpression_get_RightExpression_m106754242C74124B03A7E967F105DCD4C5FE3A88_inline (TernaryExpression_tB518CB82C2E5F08ACA68A8062B3076B8614252A8 * __this, const RuntimeMethod* method)
{
	{
		LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * L_0 = __this->get_U3CRightExpressionU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * BinaryExpression_get_LeftExpression_m24757E3C644A04E5A533343DB0AB5A477F7B467D_inline (BinaryExpression_t6B952CF817520F64ACE95BE470B2F349856B92D9 * __this, const RuntimeMethod* method)
{
	{
		LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * L_0 = __this->get_U3CLeftExpressionU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BinaryExpression_get_Type_m46E6CDC98E8AAEC35C3FEAE26A8FEB6A59CC700D_inline (BinaryExpression_t6B952CF817520F64ACE95BE470B2F349856B92D9 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CTypeU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * BinaryExpression_get_RightExpression_mA1958FB72F75C1A8B427F70091648ABD3232E2A7_inline (BinaryExpression_t6B952CF817520F64ACE95BE470B2F349856B92D9 * __this, const RuntimeMethod* method)
{
	{
		LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * L_0 = __this->get_U3CRightExpressionU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnaryExpression_get_Type_m8A96E64024BB216BF33300527066AC7FE825366D_inline (UnaryExpression_t726EAD7F63036A3F19780AC9E55AD4715F567A9C * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CTypeU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * UnaryExpression_get_Expression_m6EF74F22F871FB6C6A126F8E9A616A99E95FAF1F_inline (UnaryExpression_t726EAD7F63036A3F19780AC9E55AD4715F567A9C * __this, const RuntimeMethod* method)
{
	{
		LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * L_0 = __this->get_U3CExpressionU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ValueExpression_get_Type_m13B487027A48793E899BB46C05F1F9C3DB4126A7_inline (ValueExpression_t1E49B717CBB41CB95F6554127CCC773DA6C152C9 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CTypeU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * ValueExpression_get_Value_mA695F1A0450AB1E047716E2914A9C1334C867572_inline (ValueExpression_t1E49B717CBB41CB95F6554127CCC773DA6C152C9 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CValueU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Identifier_t64A304AE1762074E38912767107A5B7DAC0D54DD * Function_get_Identifier_mC18FB28C369FB55EEE9E5C200DB5774666FEB307_inline (Function_tB79B8AC81F9EBA9B68A61E8A501D74173D90EA72 * __this, const RuntimeMethod* method)
{
	{
		Identifier_t64A304AE1762074E38912767107A5B7DAC0D54DD * L_0 = __this->get_U3CIdentifierU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Identifier_get_Name_mFFF912B4C6BC7616A1221B2265AA47B22F85A171_inline (Identifier_t64A304AE1762074E38912767107A5B7DAC0D54DD * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CNameU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LogicalExpressionU5BU5D_t35167AD411F36531A33B384D413583735F19360A* Function_get_Expressions_m2A235F71737257E7684D74BD40FE24CE3873656B_inline (Function_tB79B8AC81F9EBA9B68A61E8A501D74173D90EA72 * __this, const RuntimeMethod* method)
{
	{
		LogicalExpressionU5BU5D_t35167AD411F36531A33B384D413583735F19360A* L_0 = __this->get_U3CExpressionsU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TernaryExpression_set_LeftExpression_mD8D7DEE6E2CA7103DF027048D7CCD8736813F5DA_inline (TernaryExpression_tB518CB82C2E5F08ACA68A8062B3076B8614252A8 * __this, LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * ___value0, const RuntimeMethod* method)
{
	{
		LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * L_0 = ___value0;
		__this->set_U3CLeftExpressionU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TernaryExpression_set_MiddleExpression_mED2D2AD67A43EE9F211CBE4644ED551CEFC21727_inline (TernaryExpression_tB518CB82C2E5F08ACA68A8062B3076B8614252A8 * __this, LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * ___value0, const RuntimeMethod* method)
{
	{
		LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * L_0 = ___value0;
		__this->set_U3CMiddleExpressionU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TernaryExpression_set_RightExpression_m5A2857236329C9385F8F133B0F4FA962D97BD6E3_inline (TernaryExpression_tB518CB82C2E5F08ACA68A8062B3076B8614252A8 * __this, LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * ___value0, const RuntimeMethod* method)
{
	{
		LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * L_0 = ___value0;
		__this->set_U3CRightExpressionU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnaryExpression_set_Type_mC6D80EC44E842AEA674E3EB92AFC37930DC28C05_inline (UnaryExpression_t726EAD7F63036A3F19780AC9E55AD4715F567A9C * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CTypeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnaryExpression_set_Expression_m3B74F4F793C61AA248458F1D41F974D42C5C3353_inline (UnaryExpression_t726EAD7F63036A3F19780AC9E55AD4715F567A9C * __this, LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * ___value0, const RuntimeMethod* method)
{
	{
		LogicalExpression_t75E3D579FAC8529E0FD5713596F48AC652F76968 * L_0 = ___value0;
		__this->set_U3CExpressionU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* RecognitionException_get_Token_m1452A2EF907C38B39351DBC8D9E02AEDD27F284B_inline (RecognitionException_tF5714BA0E5C3032188B67ED85181048EABDF9155 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get__token_19();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t4348A40742B97AA544A2F3845FA1C60512811C28 * MismatchedTokenException_get_TokenNames_m1347F772B3E6E3483FD20A84CE1DD17322C2EF9F_inline (MismatchedTokenException_tEAA1C7458209F7A0220F2083AC2918F63AE306DE * __this, const RuntimeMethod* method)
{
	{
		ReadOnlyCollection_1_t4348A40742B97AA544A2F3845FA1C60512811C28 * L_0 = __this->get__tokenNames_26();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MismatchedTokenException_get_Expecting_m3DE6D6FCC74ECF15F8D0D99DBDE51820C6A8AC22_inline (MismatchedTokenException_tEAA1C7458209F7A0220F2083AC2918F63AE306DE * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__expecting_25();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueExpression_set_Type_m9980A651812880091FDDE4827EB65C9E8213E132_inline (ValueExpression_t1E49B717CBB41CB95F6554127CCC773DA6C152C9 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CTypeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueExpression_set_Value_m357ED6C7DB3C7B63CB86A6442511DCD003B1F88A_inline (ValueExpression_t1E49B717CBB41CB95F6554127CCC773DA6C152C9 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_U3CValueU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * EvaluationVisitor_get_Result_mAD62E905A017049161B428FDB10CC8B34A1F3230_inline (EvaluationVisitor_t3A83237C8491A3205B23CE40CE4ECAF2EFB0BAB1 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CResultU3Ek__BackingField_1();
		return L_0;
	}
}
