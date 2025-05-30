﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<System.Boolean>
struct Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83;
// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_t170B3E821B49B45FA7134A2CF48A2E64CA371D42;
// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Accessibility.AccessibleObjectClassification,System.Collections.Generic.List`1<UnityEngine.GameObject>>
struct Dictionary_2_tAB54087C57C52C41006918B526AE3953D1779243;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tD4EA9DBB68453335E80C2917C93BDE503A28F3F0;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t540BC7F75C78E0C70D6C37F2D220418DABC4B9EA;
// System.Collections.Generic.IEnumerable`1<Microsoft.MixedReality.Toolkit.Accessibility.AccessibleObjectClassification>
struct IEnumerable_1_tB32ECF14EC95D05DCC8126AE7C3E69AE3714C0BF;
// System.Collections.Generic.IEnumerable`1<UnityEngine.GameObject>
struct IEnumerable_1_t59A95566E6FBF6B195B841B400D0A6B7264A738B;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEqualityComparer`1<Microsoft.MixedReality.Toolkit.Accessibility.AccessibleObjectClassification>
struct IEqualityComparer_1_t93B1F70BDB21D37EFBCF21343EBD836B17532F01;
// System.Collections.Generic.Dictionary`2/KeyCollection<Microsoft.MixedReality.Toolkit.Accessibility.AccessibleObjectClassification,System.Collections.Generic.List`1<UnityEngine.GameObject>>
struct KeyCollection_t066FE47FD65D965E339C02B22641D43C76611475;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_tCA4820F8266AF4059CC5A14888D8195F0D797499;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Accessibility.AccessibleObjectClassification>
struct List_1_t698C3F6B3DCEEE7EB6FA28060F8268F41585F616;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemProvider`1<Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem>
struct MRTKSubsystemProvider_1_t4741C1AB5FAC6316ED2ED815084AA3DF14E415FA;
// Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemProvider`1<System.Object>
struct MRTKSubsystemProvider_1_tB9483814C5602281344C4305E2F1ACD8672CF3BB;
// Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystem`3<Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem,Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor,Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem/Provider>
struct MRTKSubsystem_3_t5F52E397AE4EBAFBD7876AC3F752EA1E37851EFD;
// Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystem`3<System.Object,System.Object,System.Object>
struct MRTKSubsystem_3_t49F739AC5ED36E878F901F2DAFBE328E4AD5FA9E;
// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem,Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem/Provider>
struct SubsystemDescriptorWithProvider_2_t2D1854AB87A3269BC7E36F53FF45696C2BE5BD7E;
// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<System.Object,System.Object>
struct SubsystemDescriptorWithProvider_2_t4F631AC12A41E95D188968B1776F2A1F983B90A4;
// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem,Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor,Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem/Provider>
struct SubsystemWithProvider_3_t154F5F2C7158DFC3C3FA7F293802A56FC15DA196;
// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<System.Object,System.Object,System.Object>
struct SubsystemWithProvider_3_t80ABC03E4A5E84C63AB7C26719F2C5CA1FAA7EC2;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Collections.Generic.Dictionary`2/ValueCollection<Microsoft.MixedReality.Toolkit.Accessibility.AccessibleObjectClassification,System.Collections.Generic.List`1<UnityEngine.GameObject>>
struct ValueCollection_tDD96960CECF937DA06FA286B47415A7F890CB52A;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t0ACCC25930444F15B1857D00E9FB6021E5842852;
// System.Collections.Generic.Dictionary`2/Entry<Microsoft.MixedReality.Toolkit.Accessibility.AccessibleObjectClassification,System.Collections.Generic.List`1<UnityEngine.GameObject>>[]
struct EntryU5BU5D_tEB396A7FB596D9C0F3231E51365F4D141FA083E1;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t1E4BEAC3D61A2AD0284E919166D0F38D21540A37;
// Microsoft.MixedReality.Toolkit.Accessibility.AccessibleObjectClassification[]
struct AccessibleObjectClassificationU5BU5D_t6E56C19FF257F138642106343F0C19F5FBF08D04;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.Color32[]
struct Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2;
// System.Decimal[]
struct DecimalU5BU5D_tAA3302A4A6ACCE77638A2346993A0FAAE2F9FDBA;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t0C9E436904E570F798885BC6F264C7AE6608B5C6;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_t8150DD4545DE751DD24E4106F1E66C41DFFE38EA;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t57D37E3CA431B98ECF9444788AA9C047B990DDBB;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.Material[]
struct MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t81DC8CE2ED156F9CA996E2DC8A64A973A156D615;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t5271ED3FC5D741D05A220867865A1DA1EB04919A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t4B20066E10D8FF621FB20C05F21B22167C90F548;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_tB233FC88865130D0B1EA18DA685C2AF41FB134F7;
// Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem
struct AccessibilitySubsystem_t87660EFBF1E770B16033F7AD38AB76370B50895B;
// Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemConfig
struct AccessibilitySubsystemConfig_tA71A24B93F43AAD4BD12AA1FB4116F1EB4B4BA3B;
// Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor
struct AccessibilitySubsystemDescriptor_t8E1234483302B1C8578B13351406A4782F203A8C;
// Microsoft.MixedReality.Toolkit.Accessibility.AccessibleObject
struct AccessibleObject_t4E0F38F72E0B6F31139051C90869ABEB9E64224A;
// Microsoft.MixedReality.Toolkit.Accessibility.AccessibleObjectClassification
struct AccessibleObjectClassification_t5FAEC0486A9F61EBBF0F6D7E189FE35B0C9EA5E2;
// System.ApplicationException
struct ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// Microsoft.MixedReality.Toolkit.BaseSubsystemConfig
struct BaseSubsystemConfig_t6A872EC7E317759CA469B4184C04599CB5520E09;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_t4D7C2C115C9A65FB6B24304700B1E9167410EB54;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tE514951184806899FE23EC4FA6112A5F2038CECF;
// Microsoft.MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem
struct MRTKAccessibilitySubsystem_t41A3DE7F8F47C58ACC35F7B3790B4F3B6950B9BF;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// Microsoft.MixedReality.Toolkit.Accessibility.ObjectRole
struct ObjectRole_t3AE1A8C919DCC4DA799FC8384919434DF43997E8;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// Microsoft.MixedReality.Toolkit.Accessibility.ScreenReaderObjectSettings
struct ScreenReaderObjectSettings_t997C0D291D64E4A1BA7AE394A2AAD63792FF4082;
// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A;
// System.String
struct String_t;
// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider
struct SubsystemDescriptorWithProvider_t32DD334657CFBA22F2FBA399258B087104A29C3E;
// UnityEngine.SubsystemsImplementation.SubsystemProvider
struct SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9;
// UnityEngine.SubsystemsImplementation.SubsystemWithProvider
struct SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E;
// TMPro.TMP_Character
struct TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t07C769A1F1F85B545DD32357826E08F569E3D902;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714;
// TMPro.TMP_Style
struct TMP_Style_t078D8A76F4A60B868298420272B7089582EF53AB;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t8E2FC777D06D295BE700B8EDE56389D3581BA94E;
// TMPro.TMP_Text
struct TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262;
// TMPro.TMP_TextElement
struct TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547;
// Microsoft.MixedReality.Toolkit.Accessibility.TextAccessibility
struct TextAccessibility_t903FCF08C24E1F72018F27355BA6B1C86F0D2AD5;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem/Provider
struct Provider_t1B885BF706B62D27FB206A6C1631D2D5699CB596;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// Microsoft.MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem/AccessibilityProvider
struct AccessibilityProvider_tB927231E25CC81A175ED2DF8538BE30F986C830F;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;

IL2CPP_EXTERN_C RuntimeClass* AccessibilityHelpers_t6756D7290A7B3A1DB18EBCEE84E1A40AE2DF4C8D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AccessibilitySubsystemDescriptor_t8E1234483302B1C8578B13351406A4782F203A8C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AccessibilityUtilities_t011ABCE2EBCE2F6EC0A898BCB48076F57B26D0D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AccessibleObject_t4E0F38F72E0B6F31139051C90869ABEB9E64224A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CameraFOVChecker_t2DDF8DF532B3FCC24568E208BF3038A7A42F07CA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tAB54087C57C52C41006918B526AE3953D1779243_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_tE19DF962738977670C6F3FE0F98F2568575977DA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MRTKSubsystem_3_t5F52E397AE4EBAFBD7876AC3F752EA1E37851EFD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SubsystemDescriptorStore_tE5D99C3159868DE6506269CB6B830621F8BC31A6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRSubsystemHelpers_t1ABA0E77205A5382BC3173866C111D39150FBCF1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0514B8E4342F7B936BE02120037C20832C1C2F20;
IL2CPP_EXTERN_C String_t* _stringLiteral0B0FA4353F2CBCCACE1A1F98B3C3F3738127E492;
IL2CPP_EXTERN_C String_t* _stringLiteral2714B1EC52279442F9A3B7ED93239624B9226A15;
IL2CPP_EXTERN_C String_t* _stringLiteral281033B411A2723B0C82F6B48AC1E70FEB902A11;
IL2CPP_EXTERN_C String_t* _stringLiteral52D2CD097CFAA0461035A19E2C6115F54219A6EE;
IL2CPP_EXTERN_C String_t* _stringLiteral680D5F85FF107897716444439FE6176166BED070;
IL2CPP_EXTERN_C String_t* _stringLiteral8B158F9A3667630BBA0D7A4DB24E6105065433E7;
IL2CPP_EXTERN_C String_t* _stringLiteral906F379A3EDE20E3AEF88CF2F80715B39D89684B;
IL2CPP_EXTERN_C String_t* _stringLiteralA48C0F16E39A46C469EC5BB4DA73F02A7D84D8E7;
IL2CPP_EXTERN_C String_t* _stringLiteralA8731F4AEB28CD3592CFFC1849F528FCA9738497;
IL2CPP_EXTERN_C String_t* _stringLiteralACBDBFBF2CD1DAF969EC64771234F755CFEFF59A;
IL2CPP_EXTERN_C String_t* _stringLiteralC059A8FD08BCE672BF2CB48A49B7329B485F3ED8;
IL2CPP_EXTERN_C String_t* _stringLiteralE528A64618644524EC116F5E5BB24B0B6C94B55F;
IL2CPP_EXTERN_C String_t* _stringLiteralE9DAA516D37F8A67FD590A557B2B18E7B9BC8F7C;
IL2CPP_EXTERN_C const RuntimeMethod* AccessibilitySubsystemCinfo_GetHashCode_m0080E9D81666CAFEAB6CE67DF1E43F1AC7A8F785_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AccessibilitySubsystemDescriptor_Create_m4F72BC53ACA18F19261307D18076A7368204A20E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m2A1B34C27CAE6ED7FD924E5F59C0A1ACBBF22C38_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_TryGetComponent_TisTMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_m9E2FEC0D250683C6578E23A114D561CCD3F71370_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m5A43CB3FC04A1B84E8CB60A00184539875648265_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mD207369A2FCE41436A4609B76C958BEEC8F37EC3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m3CC1FE6C7C54A9AAAA089CCF77AF34302DD9F3FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mAAB6D25E7D41246F664073F4EED032C56B5548D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Keys_mB86AF1E852095B18711C943E13AB11F26F0BF017_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Values_m4E4EEA774FA753BDCABF4896923FB73E0F82D0C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m2FC14128F62E290E708E5C7D5984AE069A1109C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m4E5DE744EBE4CE39AD86387422A29291BA0167C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m0A54F9646B41FD5BCB18A49D1D8DDA2BE5CB6F2D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mF389CD1EF88A0968458E08E9741CA778AA3EC842_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m63C0E50C81167F19BB0707F6518C2361357D8E80_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mF3A1ADD682AA120B123EE5F3C1BAB7B70C2641A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_TryGetComponent_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_m279C0F83A21E7657BB20A78E0F6CDE17345778A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_m930C66498FD2B22B59C9BB83A2926008427DF6A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_mBB5A94518A9831C99032BB0ABBBD6D5E0F6C0CE3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m7DF03CE7132B7D4C6AA2AEEA9BD1A8755AE12432_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m894DFD2A6BA50A84E676E060218D441B70A8E2FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_mE508A129A7CB4DC89530674E7854B7F699BB486F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m926EDF55F89815C5AD9733FE63CE689E98B37274_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mD36BF07C31C1DF947856EFECE89BAF4D6A24DEB7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MRTKSubsystemProvider_1__ctor_m8CE4867BC76E307D836B4145A9CA59EBE595CE51_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MRTKSubsystem_3__ctor_m0D0AD00677C420F33B52262106A8520A459D1233_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemDescriptorWithProvider_2__ctor_mAB3A2A7FCD71DEF8FA38A98DB5EFB24F0CB03B96_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemWithProvider_3_get_provider_m09F2214A50AEB93124216EEEB94D6B75E862C64A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TextAccessibility_OnInvertTextColorChanged_mED2CA36546DDEF3F0D855207B5BD47BE7ABA16EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_GetEnumerator_mCA421A011AD8F94BBAE0979395C9E5925809A225_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRSubsystemHelpers_CheckTypes_TisAccessibilitySubsystem_t87660EFBF1E770B16033F7AD38AB76370B50895B_TisProvider_t1B885BF706B62D27FB206A6C1631D2D5699CB596_m7AD91827E692C693C661C07A275B8CC418803E2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRSubsystemHelpers_ConstructCinfo_TisMRTKAccessibilitySubsystem_t41A3DE7F8F47C58ACC35F7B3790B4F3B6950B9BF_TisAccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1_mF7AA1B00CB73143CEB3F3D8FA115827103518A36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRSubsystemHelpers_GetConfiguration_TisAccessibilitySubsystemConfig_tA71A24B93F43AAD4BD12AA1FB4116F1EB4B4BA3B_TisMRTKAccessibilitySubsystem_t41A3DE7F8F47C58ACC35F7B3790B4F3B6950B9BF_m72B8445AC3AE9543E7F010A956D8C58C2D23F093_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRSubsystemHelpers_GetFirstRunningSubsystem_TisAccessibilitySubsystem_t87660EFBF1E770B16033F7AD38AB76370B50895B_mD2359E88D4EFCBD3575ED235A1E166C653A77D52_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t858291B918D36600B60C010B2E706B6EC9BB4CFA 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Accessibility.AccessibleObjectClassification,System.Collections.Generic.List`1<UnityEngine.GameObject>>
struct Dictionary_2_tAB54087C57C52C41006918B526AE3953D1779243  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tEB396A7FB596D9C0F3231E51365F4D141FA083E1* ___entries_1;
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
	KeyCollection_t066FE47FD65D965E339C02B22641D43C76611475 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tDD96960CECF937DA06FA286B47415A7F890CB52A * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tAB54087C57C52C41006918B526AE3953D1779243, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tAB54087C57C52C41006918B526AE3953D1779243, ___entries_1)); }
	inline EntryU5BU5D_tEB396A7FB596D9C0F3231E51365F4D141FA083E1* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tEB396A7FB596D9C0F3231E51365F4D141FA083E1** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tEB396A7FB596D9C0F3231E51365F4D141FA083E1* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tAB54087C57C52C41006918B526AE3953D1779243, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tAB54087C57C52C41006918B526AE3953D1779243, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tAB54087C57C52C41006918B526AE3953D1779243, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tAB54087C57C52C41006918B526AE3953D1779243, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tAB54087C57C52C41006918B526AE3953D1779243, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tAB54087C57C52C41006918B526AE3953D1779243, ___keys_7)); }
	inline KeyCollection_t066FE47FD65D965E339C02B22641D43C76611475 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t066FE47FD65D965E339C02B22641D43C76611475 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t066FE47FD65D965E339C02B22641D43C76611475 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tAB54087C57C52C41006918B526AE3953D1779243, ___values_8)); }
	inline ValueCollection_tDD96960CECF937DA06FA286B47415A7F890CB52A * get_values_8() const { return ___values_8; }
	inline ValueCollection_tDD96960CECF937DA06FA286B47415A7F890CB52A ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tDD96960CECF937DA06FA286B47415A7F890CB52A * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tAB54087C57C52C41006918B526AE3953D1779243, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/KeyCollection<Microsoft.MixedReality.Toolkit.Accessibility.AccessibleObjectClassification,System.Collections.Generic.List`1<UnityEngine.GameObject>>
struct KeyCollection_t066FE47FD65D965E339C02B22641D43C76611475  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::dictionary
	Dictionary_2_tAB54087C57C52C41006918B526AE3953D1779243 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(KeyCollection_t066FE47FD65D965E339C02B22641D43C76611475, ___dictionary_0)); }
	inline Dictionary_2_tAB54087C57C52C41006918B526AE3953D1779243 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tAB54087C57C52C41006918B526AE3953D1779243 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tAB54087C57C52C41006918B526AE3953D1779243 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};


// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Accessibility.AccessibleObjectClassification>
struct List_1_t698C3F6B3DCEEE7EB6FA28060F8268F41585F616  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	AccessibleObjectClassificationU5BU5D_t6E56C19FF257F138642106343F0C19F5FBF08D04* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t698C3F6B3DCEEE7EB6FA28060F8268F41585F616, ____items_1)); }
	inline AccessibleObjectClassificationU5BU5D_t6E56C19FF257F138642106343F0C19F5FBF08D04* get__items_1() const { return ____items_1; }
	inline AccessibleObjectClassificationU5BU5D_t6E56C19FF257F138642106343F0C19F5FBF08D04** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(AccessibleObjectClassificationU5BU5D_t6E56C19FF257F138642106343F0C19F5FBF08D04* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t698C3F6B3DCEEE7EB6FA28060F8268F41585F616, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t698C3F6B3DCEEE7EB6FA28060F8268F41585F616, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t698C3F6B3DCEEE7EB6FA28060F8268F41585F616, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t698C3F6B3DCEEE7EB6FA28060F8268F41585F616_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	AccessibleObjectClassificationU5BU5D_t6E56C19FF257F138642106343F0C19F5FBF08D04* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t698C3F6B3DCEEE7EB6FA28060F8268F41585F616_StaticFields, ____emptyArray_5)); }
	inline AccessibleObjectClassificationU5BU5D_t6E56C19FF257F138642106343F0C19F5FBF08D04* get__emptyArray_5() const { return ____emptyArray_5; }
	inline AccessibleObjectClassificationU5BU5D_t6E56C19FF257F138642106343F0C19F5FBF08D04** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(AccessibleObjectClassificationU5BU5D_t6E56C19FF257F138642106343F0C19F5FBF08D04* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____items_1)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get__items_1() const { return ____items_1; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_StaticFields, ____emptyArray_5)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get__emptyArray_5() const { return ____emptyArray_5; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
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


// System.Collections.Generic.Dictionary`2/ValueCollection<Microsoft.MixedReality.Toolkit.Accessibility.AccessibleObjectClassification,System.Collections.Generic.List`1<UnityEngine.GameObject>>
struct ValueCollection_tDD96960CECF937DA06FA286B47415A7F890CB52A  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::dictionary
	Dictionary_2_tAB54087C57C52C41006918B526AE3953D1779243 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_tDD96960CECF937DA06FA286B47415A7F890CB52A, ___dictionary_0)); }
	inline Dictionary_2_tAB54087C57C52C41006918B526AE3953D1779243 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tAB54087C57C52C41006918B526AE3953D1779243 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tAB54087C57C52C41006918B526AE3953D1779243 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Accessibility.AccessibilityHelpers
struct AccessibilityHelpers_t6756D7290A7B3A1DB18EBCEE84E1A40AE2DF4C8D  : public RuntimeObject
{
public:

public:
};

struct AccessibilityHelpers_t6756D7290A7B3A1DB18EBCEE84E1A40AE2DF4C8D_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem Microsoft.MixedReality.Toolkit.Accessibility.AccessibilityHelpers::subsystem
	AccessibilitySubsystem_t87660EFBF1E770B16033F7AD38AB76370B50895B * ___subsystem_0;

public:
	inline static int32_t get_offset_of_subsystem_0() { return static_cast<int32_t>(offsetof(AccessibilityHelpers_t6756D7290A7B3A1DB18EBCEE84E1A40AE2DF4C8D_StaticFields, ___subsystem_0)); }
	inline AccessibilitySubsystem_t87660EFBF1E770B16033F7AD38AB76370B50895B * get_subsystem_0() const { return ___subsystem_0; }
	inline AccessibilitySubsystem_t87660EFBF1E770B16033F7AD38AB76370B50895B ** get_address_of_subsystem_0() { return &___subsystem_0; }
	inline void set_subsystem_0(AccessibilitySubsystem_t87660EFBF1E770B16033F7AD38AB76370B50895B * value)
	{
		___subsystem_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subsystem_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
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


// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider
struct SubsystemDescriptorWithProvider_t32DD334657CFBA22F2FBA399258B087104A29C3E  : public RuntimeObject
{
public:
	// System.String UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.Type UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::<providerType>k__BackingField
	Type_t * ___U3CproviderTypeU3Ek__BackingField_1;
	// System.Type UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::<subsystemTypeOverride>k__BackingField
	Type_t * ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(SubsystemDescriptorWithProvider_t32DD334657CFBA22F2FBA399258B087104A29C3E, ___U3CidU3Ek__BackingField_0)); }
	inline String_t* get_U3CidU3Ek__BackingField_0() const { return ___U3CidU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_0() { return &___U3CidU3Ek__BackingField_0; }
	inline void set_U3CidU3Ek__BackingField_0(String_t* value)
	{
		___U3CidU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CidU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CproviderTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(SubsystemDescriptorWithProvider_t32DD334657CFBA22F2FBA399258B087104A29C3E, ___U3CproviderTypeU3Ek__BackingField_1)); }
	inline Type_t * get_U3CproviderTypeU3Ek__BackingField_1() const { return ___U3CproviderTypeU3Ek__BackingField_1; }
	inline Type_t ** get_address_of_U3CproviderTypeU3Ek__BackingField_1() { return &___U3CproviderTypeU3Ek__BackingField_1; }
	inline void set_U3CproviderTypeU3Ek__BackingField_1(Type_t * value)
	{
		___U3CproviderTypeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproviderTypeU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubsystemTypeOverrideU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SubsystemDescriptorWithProvider_t32DD334657CFBA22F2FBA399258B087104A29C3E, ___U3CsubsystemTypeOverrideU3Ek__BackingField_2)); }
	inline Type_t * get_U3CsubsystemTypeOverrideU3Ek__BackingField_2() const { return ___U3CsubsystemTypeOverrideU3Ek__BackingField_2; }
	inline Type_t ** get_address_of_U3CsubsystemTypeOverrideU3Ek__BackingField_2() { return &___U3CsubsystemTypeOverrideU3Ek__BackingField_2; }
	inline void set_U3CsubsystemTypeOverrideU3Ek__BackingField_2(Type_t * value)
	{
		___U3CsubsystemTypeOverrideU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemTypeOverrideU3Ek__BackingField_2), (void*)value);
	}
};


// UnityEngine.SubsystemsImplementation.SubsystemProvider
struct SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.SubsystemsImplementation.SubsystemProvider::m_Running
	bool ___m_Running_0;

public:
	inline static int32_t get_offset_of_m_Running_0() { return static_cast<int32_t>(offsetof(SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9, ___m_Running_0)); }
	inline bool get_m_Running_0() const { return ___m_Running_0; }
	inline bool* get_address_of_m_Running_0() { return &___m_Running_0; }
	inline void set_m_Running_0(bool value)
	{
		___m_Running_0 = value;
	}
};


// UnityEngine.SubsystemsImplementation.SubsystemWithProvider
struct SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.SubsystemsImplementation.SubsystemWithProvider::<running>k__BackingField
	bool ___U3CrunningU3Ek__BackingField_0;
	// UnityEngine.SubsystemsImplementation.SubsystemProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider::<providerBase>k__BackingField
	SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9 * ___U3CproviderBaseU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CrunningU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E, ___U3CrunningU3Ek__BackingField_0)); }
	inline bool get_U3CrunningU3Ek__BackingField_0() const { return ___U3CrunningU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CrunningU3Ek__BackingField_0() { return &___U3CrunningU3Ek__BackingField_0; }
	inline void set_U3CrunningU3Ek__BackingField_0(bool value)
	{
		___U3CrunningU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CproviderBaseU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E, ___U3CproviderBaseU3Ek__BackingField_1)); }
	inline SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9 * get_U3CproviderBaseU3Ek__BackingField_1() const { return ___U3CproviderBaseU3Ek__BackingField_1; }
	inline SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9 ** get_address_of_U3CproviderBaseU3Ek__BackingField_1() { return &___U3CproviderBaseU3Ek__BackingField_1; }
	inline void set_U3CproviderBaseU3Ek__BackingField_1(SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9 * value)
	{
		___U3CproviderBaseU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproviderBaseU3Ek__BackingField_1), (void*)value);
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

// System.Collections.Generic.List`1/Enumerator<Microsoft.MixedReality.Toolkit.Accessibility.AccessibleObjectClassification>
struct Enumerator_tFA80B3A9A75313FDFB80BDEB56E275732BC7B6E3 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t698C3F6B3DCEEE7EB6FA28060F8268F41585F616 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	AccessibleObjectClassification_t5FAEC0486A9F61EBBF0F6D7E189FE35B0C9EA5E2 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tFA80B3A9A75313FDFB80BDEB56E275732BC7B6E3, ___list_0)); }
	inline List_1_t698C3F6B3DCEEE7EB6FA28060F8268F41585F616 * get_list_0() const { return ___list_0; }
	inline List_1_t698C3F6B3DCEEE7EB6FA28060F8268F41585F616 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t698C3F6B3DCEEE7EB6FA28060F8268F41585F616 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tFA80B3A9A75313FDFB80BDEB56E275732BC7B6E3, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tFA80B3A9A75313FDFB80BDEB56E275732BC7B6E3, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tFA80B3A9A75313FDFB80BDEB56E275732BC7B6E3, ___current_3)); }
	inline AccessibleObjectClassification_t5FAEC0486A9F61EBBF0F6D7E189FE35B0C9EA5E2 * get_current_3() const { return ___current_3; }
	inline AccessibleObjectClassification_t5FAEC0486A9F61EBBF0F6D7E189FE35B0C9EA5E2 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(AccessibleObjectClassification_t5FAEC0486A9F61EBBF0F6D7E189FE35B0C9EA5E2 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<Microsoft.MixedReality.Toolkit.Accessibility.AccessibleObjectClassification,System.Collections.Generic.List`1<UnityEngine.GameObject>>
struct Enumerator_t275D0381C7D498B50DA370FFAC01EF51919C91A8 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::dictionary
	Dictionary_2_tAB54087C57C52C41006918B526AE3953D1779243 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::version
	int32_t ___version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::currentValue
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___currentValue_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t275D0381C7D498B50DA370FFAC01EF51919C91A8, ___dictionary_0)); }
	inline Dictionary_2_tAB54087C57C52C41006918B526AE3953D1779243 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tAB54087C57C52C41006918B526AE3953D1779243 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tAB54087C57C52C41006918B526AE3953D1779243 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t275D0381C7D498B50DA370FFAC01EF51919C91A8, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t275D0381C7D498B50DA370FFAC01EF51919C91A8, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_currentValue_3() { return static_cast<int32_t>(offsetof(Enumerator_t275D0381C7D498B50DA370FFAC01EF51919C91A8, ___currentValue_3)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_currentValue_3() const { return ___currentValue_3; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_currentValue_3() { return &___currentValue_3; }
	inline void set_currentValue_3(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___currentValue_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentValue_3), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>
struct Enumerator_t125181DA94FAAEC346371E0582D50084E0B602E2 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::dictionary
	Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::version
	int32_t ___version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::currentValue
	RuntimeObject * ___currentValue_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t125181DA94FAAEC346371E0582D50084E0B602E2, ___dictionary_0)); }
	inline Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t125181DA94FAAEC346371E0582D50084E0B602E2, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t125181DA94FAAEC346371E0582D50084E0B602E2, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_currentValue_3() { return static_cast<int32_t>(offsetof(Enumerator_t125181DA94FAAEC346371E0582D50084E0B602E2, ___currentValue_3)); }
	inline RuntimeObject * get_currentValue_3() const { return ___currentValue_3; }
	inline RuntimeObject ** get_address_of_currentValue_3() { return &___currentValue_3; }
	inline void set_currentValue_3(RuntimeObject * value)
	{
		___currentValue_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentValue_3), (void*)value);
	}
};


// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem,Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem/Provider>
struct SubsystemDescriptorWithProvider_2_t2D1854AB87A3269BC7E36F53FF45696C2BE5BD7E  : public SubsystemDescriptorWithProvider_t32DD334657CFBA22F2FBA399258B087104A29C3E
{
public:

public:
};


// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem>
struct SubsystemProvider_1_tA58F51D9E76260751F2C8CE386EC21B8AC89DBEB  : public SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9
{
public:

public:
};


// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem,Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor,Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem/Provider>
struct SubsystemWithProvider_3_t154F5F2C7158DFC3C3FA7F293802A56FC15DA196  : public SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E
{
public:
	// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<subsystemDescriptor>k__BackingField
	AccessibilitySubsystemDescriptor_t8E1234483302B1C8578B13351406A4782F203A8C * ___U3CsubsystemDescriptorU3Ek__BackingField_2;
	// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<provider>k__BackingField
	Provider_t1B885BF706B62D27FB206A6C1631D2D5699CB596 * ___U3CproviderU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CsubsystemDescriptorU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_3_t154F5F2C7158DFC3C3FA7F293802A56FC15DA196, ___U3CsubsystemDescriptorU3Ek__BackingField_2)); }
	inline AccessibilitySubsystemDescriptor_t8E1234483302B1C8578B13351406A4782F203A8C * get_U3CsubsystemDescriptorU3Ek__BackingField_2() const { return ___U3CsubsystemDescriptorU3Ek__BackingField_2; }
	inline AccessibilitySubsystemDescriptor_t8E1234483302B1C8578B13351406A4782F203A8C ** get_address_of_U3CsubsystemDescriptorU3Ek__BackingField_2() { return &___U3CsubsystemDescriptorU3Ek__BackingField_2; }
	inline void set_U3CsubsystemDescriptorU3Ek__BackingField_2(AccessibilitySubsystemDescriptor_t8E1234483302B1C8578B13351406A4782F203A8C * value)
	{
		___U3CsubsystemDescriptorU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemDescriptorU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CproviderU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_3_t154F5F2C7158DFC3C3FA7F293802A56FC15DA196, ___U3CproviderU3Ek__BackingField_3)); }
	inline Provider_t1B885BF706B62D27FB206A6C1631D2D5699CB596 * get_U3CproviderU3Ek__BackingField_3() const { return ___U3CproviderU3Ek__BackingField_3; }
	inline Provider_t1B885BF706B62D27FB206A6C1631D2D5699CB596 ** get_address_of_U3CproviderU3Ek__BackingField_3() { return &___U3CproviderU3Ek__BackingField_3; }
	inline void set_U3CproviderU3Ek__BackingField_3(Provider_t1B885BF706B62D27FB206A6C1631D2D5699CB596 * value)
	{
		___U3CproviderU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproviderU3Ek__BackingField_3), (void*)value);
	}
};


// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<System.Object,System.Object,System.Object>
struct SubsystemWithProvider_3_t80ABC03E4A5E84C63AB7C26719F2C5CA1FAA7EC2  : public SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E
{
public:
	// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<subsystemDescriptor>k__BackingField
	RuntimeObject * ___U3CsubsystemDescriptorU3Ek__BackingField_2;
	// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<provider>k__BackingField
	RuntimeObject * ___U3CproviderU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CsubsystemDescriptorU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_3_t80ABC03E4A5E84C63AB7C26719F2C5CA1FAA7EC2, ___U3CsubsystemDescriptorU3Ek__BackingField_2)); }
	inline RuntimeObject * get_U3CsubsystemDescriptorU3Ek__BackingField_2() const { return ___U3CsubsystemDescriptorU3Ek__BackingField_2; }
	inline RuntimeObject ** get_address_of_U3CsubsystemDescriptorU3Ek__BackingField_2() { return &___U3CsubsystemDescriptorU3Ek__BackingField_2; }
	inline void set_U3CsubsystemDescriptorU3Ek__BackingField_2(RuntimeObject * value)
	{
		___U3CsubsystemDescriptorU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemDescriptorU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CproviderU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_3_t80ABC03E4A5E84C63AB7C26719F2C5CA1FAA7EC2, ___U3CproviderU3Ek__BackingField_3)); }
	inline RuntimeObject * get_U3CproviderU3Ek__BackingField_3() const { return ___U3CproviderU3Ek__BackingField_3; }
	inline RuntimeObject ** get_address_of_U3CproviderU3Ek__BackingField_3() { return &___U3CproviderU3Ek__BackingField_3; }
	inline void set_U3CproviderU3Ek__BackingField_3(RuntimeObject * value)
	{
		___U3CproviderU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproviderU3Ek__BackingField_3), (void*)value);
	}
};


// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA, ___itemStack_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_itemStack_0() const { return ___itemStack_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA, ___m_DefaultItem_2)); }
	inline int32_t get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline int32_t* get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(int32_t value)
	{
		___m_DefaultItem_2 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17, ___itemStack_0)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_itemStack_0() const { return ___itemStack_0; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17, ___m_DefaultItem_2)); }
	inline float get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline float* get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(float value)
	{
		___m_DefaultItem_2 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t5271ED3FC5D741D05A220867865A1DA1EB04919A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804, ___itemStack_0)); }
	inline TMP_ColorGradientU5BU5D_t5271ED3FC5D741D05A220867865A1DA1EB04919A* get_itemStack_0() const { return ___itemStack_0; }
	inline TMP_ColorGradientU5BU5D_t5271ED3FC5D741D05A220867865A1DA1EB04919A** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(TMP_ColorGradientU5BU5D_t5271ED3FC5D741D05A220867865A1DA1EB04919A* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804, ___m_DefaultItem_2)); }
	inline TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 ** get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * value)
	{
		___m_DefaultItem_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DefaultItem_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo
struct AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1 
{
public:
	// System.String Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
	// System.String Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::<DisplayName>k__BackingField
	String_t* ___U3CDisplayNameU3Ek__BackingField_1;
	// System.String Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::<Author>k__BackingField
	String_t* ___U3CAuthorU3Ek__BackingField_2;
	// System.Type Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::<ConfigType>k__BackingField
	Type_t * ___U3CConfigTypeU3Ek__BackingField_3;
	// System.Type Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::<ProviderType>k__BackingField
	Type_t * ___U3CProviderTypeU3Ek__BackingField_4;
	// System.Type Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::<SubsystemTypeOverride>k__BackingField
	Type_t * ___U3CSubsystemTypeOverrideU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1, ___U3CNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CNameU3Ek__BackingField_0() const { return ___U3CNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_0() { return &___U3CNameU3Ek__BackingField_0; }
	inline void set_U3CNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDisplayNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1, ___U3CDisplayNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CDisplayNameU3Ek__BackingField_1() const { return ___U3CDisplayNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CDisplayNameU3Ek__BackingField_1() { return &___U3CDisplayNameU3Ek__BackingField_1; }
	inline void set_U3CDisplayNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CDisplayNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDisplayNameU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAuthorU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1, ___U3CAuthorU3Ek__BackingField_2)); }
	inline String_t* get_U3CAuthorU3Ek__BackingField_2() const { return ___U3CAuthorU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CAuthorU3Ek__BackingField_2() { return &___U3CAuthorU3Ek__BackingField_2; }
	inline void set_U3CAuthorU3Ek__BackingField_2(String_t* value)
	{
		___U3CAuthorU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAuthorU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CConfigTypeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1, ___U3CConfigTypeU3Ek__BackingField_3)); }
	inline Type_t * get_U3CConfigTypeU3Ek__BackingField_3() const { return ___U3CConfigTypeU3Ek__BackingField_3; }
	inline Type_t ** get_address_of_U3CConfigTypeU3Ek__BackingField_3() { return &___U3CConfigTypeU3Ek__BackingField_3; }
	inline void set_U3CConfigTypeU3Ek__BackingField_3(Type_t * value)
	{
		___U3CConfigTypeU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CConfigTypeU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CProviderTypeU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1, ___U3CProviderTypeU3Ek__BackingField_4)); }
	inline Type_t * get_U3CProviderTypeU3Ek__BackingField_4() const { return ___U3CProviderTypeU3Ek__BackingField_4; }
	inline Type_t ** get_address_of_U3CProviderTypeU3Ek__BackingField_4() { return &___U3CProviderTypeU3Ek__BackingField_4; }
	inline void set_U3CProviderTypeU3Ek__BackingField_4(Type_t * value)
	{
		___U3CProviderTypeU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CProviderTypeU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSubsystemTypeOverrideU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1, ___U3CSubsystemTypeOverrideU3Ek__BackingField_5)); }
	inline Type_t * get_U3CSubsystemTypeOverrideU3Ek__BackingField_5() const { return ___U3CSubsystemTypeOverrideU3Ek__BackingField_5; }
	inline Type_t ** get_address_of_U3CSubsystemTypeOverrideU3Ek__BackingField_5() { return &___U3CSubsystemTypeOverrideU3Ek__BackingField_5; }
	inline void set_U3CSubsystemTypeOverrideU3Ek__BackingField_5(Type_t * value)
	{
		___U3CSubsystemTypeOverrideU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSubsystemTypeOverrideU3Ek__BackingField_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo
struct AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1_marshaled_pinvoke
{
	char* ___U3CNameU3Ek__BackingField_0;
	char* ___U3CDisplayNameU3Ek__BackingField_1;
	char* ___U3CAuthorU3Ek__BackingField_2;
	Type_t * ___U3CConfigTypeU3Ek__BackingField_3;
	Type_t * ___U3CProviderTypeU3Ek__BackingField_4;
	Type_t * ___U3CSubsystemTypeOverrideU3Ek__BackingField_5;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo
struct AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1_marshaled_com
{
	Il2CppChar* ___U3CNameU3Ek__BackingField_0;
	Il2CppChar* ___U3CDisplayNameU3Ek__BackingField_1;
	Il2CppChar* ___U3CAuthorU3Ek__BackingField_2;
	Type_t * ___U3CConfigTypeU3Ek__BackingField_3;
	Type_t * ___U3CProviderTypeU3Ek__BackingField_4;
	Type_t * ___U3CSubsystemTypeOverrideU3Ek__BackingField_5;
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


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
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


// UnityEngine.Color32
struct Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_rgba_0() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___rgba_0)); }
	inline int32_t get_rgba_0() const { return ___rgba_0; }
	inline int32_t* get_address_of_rgba_0() { return &___rgba_0; }
	inline void set_rgba_0(int32_t value)
	{
		___rgba_0 = value;
	}

	inline static int32_t get_offset_of_r_1() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___r_1)); }
	inline uint8_t get_r_1() const { return ___r_1; }
	inline uint8_t* get_address_of_r_1() { return &___r_1; }
	inline void set_r_1(uint8_t value)
	{
		___r_1 = value;
	}

	inline static int32_t get_offset_of_g_2() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___g_2)); }
	inline uint8_t get_g_2() const { return ___g_2; }
	inline uint8_t* get_address_of_g_2() { return &___g_2; }
	inline void set_g_2(uint8_t value)
	{
		___g_2 = value;
	}

	inline static int32_t get_offset_of_b_3() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___b_3)); }
	inline uint8_t get_b_3() const { return ___b_3; }
	inline uint8_t* get_address_of_b_3() { return &___b_3; }
	inline void set_b_3(uint8_t value)
	{
		___b_3 = value;
	}

	inline static int32_t get_offset_of_a_4() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___a_4)); }
	inline uint8_t get_a_4() const { return ___a_4; }
	inline uint8_t* get_address_of_a_4() { return &___a_4; }
	inline void set_a_4(uint8_t value)
	{
		___a_4 = value;
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

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
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
struct IntPtr_t 
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


// TMPro.MaterialReference
struct MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B 
{
public:
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;

public:
	inline static int32_t get_offset_of_index_0() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___index_0)); }
	inline int32_t get_index_0() const { return ___index_0; }
	inline int32_t* get_address_of_index_0() { return &___index_0; }
	inline void set_index_0(int32_t value)
	{
		___index_0 = value;
	}

	inline static int32_t get_offset_of_fontAsset_1() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___fontAsset_1)); }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * get_fontAsset_1() const { return ___fontAsset_1; }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 ** get_address_of_fontAsset_1() { return &___fontAsset_1; }
	inline void set_fontAsset_1(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * value)
	{
		___fontAsset_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fontAsset_1), (void*)value);
	}

	inline static int32_t get_offset_of_spriteAsset_2() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___spriteAsset_2)); }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * get_spriteAsset_2() const { return ___spriteAsset_2; }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 ** get_address_of_spriteAsset_2() { return &___spriteAsset_2; }
	inline void set_spriteAsset_2(TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * value)
	{
		___spriteAsset_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spriteAsset_2), (void*)value);
	}

	inline static int32_t get_offset_of_material_3() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___material_3)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_material_3() const { return ___material_3; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_material_3() { return &___material_3; }
	inline void set_material_3(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___material_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___material_3), (void*)value);
	}

	inline static int32_t get_offset_of_isDefaultMaterial_4() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___isDefaultMaterial_4)); }
	inline bool get_isDefaultMaterial_4() const { return ___isDefaultMaterial_4; }
	inline bool* get_address_of_isDefaultMaterial_4() { return &___isDefaultMaterial_4; }
	inline void set_isDefaultMaterial_4(bool value)
	{
		___isDefaultMaterial_4 = value;
	}

	inline static int32_t get_offset_of_isFallbackMaterial_5() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___isFallbackMaterial_5)); }
	inline bool get_isFallbackMaterial_5() const { return ___isFallbackMaterial_5; }
	inline bool* get_address_of_isFallbackMaterial_5() { return &___isFallbackMaterial_5; }
	inline void set_isFallbackMaterial_5(bool value)
	{
		___isFallbackMaterial_5 = value;
	}

	inline static int32_t get_offset_of_fallbackMaterial_6() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___fallbackMaterial_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_fallbackMaterial_6() const { return ___fallbackMaterial_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_fallbackMaterial_6() { return &___fallbackMaterial_6; }
	inline void set_fallbackMaterial_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___fallbackMaterial_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fallbackMaterial_6), (void*)value);
	}

	inline static int32_t get_offset_of_padding_7() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___padding_7)); }
	inline float get_padding_7() const { return ___padding_7; }
	inline float* get_address_of_padding_7() { return &___padding_7; }
	inline void set_padding_7(float value)
	{
		___padding_7 = value;
	}

	inline static int32_t get_offset_of_referenceCount_8() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___referenceCount_8)); }
	inline int32_t get_referenceCount_8() const { return ___referenceCount_8; }
	inline int32_t* get_address_of_referenceCount_8() { return &___referenceCount_8; }
	inline void set_referenceCount_8(int32_t value)
	{
		___referenceCount_8 = value;
	}
};

// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___fontAsset_1;
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___spriteAsset_2;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___fontAsset_1;
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___spriteAsset_2;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___identityMatrix_17 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
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


// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9 
{
public:
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;

public:
	inline static int32_t get_offset_of_bold_0() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___bold_0)); }
	inline uint8_t get_bold_0() const { return ___bold_0; }
	inline uint8_t* get_address_of_bold_0() { return &___bold_0; }
	inline void set_bold_0(uint8_t value)
	{
		___bold_0 = value;
	}

	inline static int32_t get_offset_of_italic_1() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___italic_1)); }
	inline uint8_t get_italic_1() const { return ___italic_1; }
	inline uint8_t* get_address_of_italic_1() { return &___italic_1; }
	inline void set_italic_1(uint8_t value)
	{
		___italic_1 = value;
	}

	inline static int32_t get_offset_of_underline_2() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___underline_2)); }
	inline uint8_t get_underline_2() const { return ___underline_2; }
	inline uint8_t* get_address_of_underline_2() { return &___underline_2; }
	inline void set_underline_2(uint8_t value)
	{
		___underline_2 = value;
	}

	inline static int32_t get_offset_of_strikethrough_3() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___strikethrough_3)); }
	inline uint8_t get_strikethrough_3() const { return ___strikethrough_3; }
	inline uint8_t* get_address_of_strikethrough_3() { return &___strikethrough_3; }
	inline void set_strikethrough_3(uint8_t value)
	{
		___strikethrough_3 = value;
	}

	inline static int32_t get_offset_of_highlight_4() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___highlight_4)); }
	inline uint8_t get_highlight_4() const { return ___highlight_4; }
	inline uint8_t* get_address_of_highlight_4() { return &___highlight_4; }
	inline void set_highlight_4(uint8_t value)
	{
		___highlight_4 = value;
	}

	inline static int32_t get_offset_of_superscript_5() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___superscript_5)); }
	inline uint8_t get_superscript_5() const { return ___superscript_5; }
	inline uint8_t* get_address_of_superscript_5() { return &___superscript_5; }
	inline void set_superscript_5(uint8_t value)
	{
		___superscript_5 = value;
	}

	inline static int32_t get_offset_of_subscript_6() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___subscript_6)); }
	inline uint8_t get_subscript_6() const { return ___subscript_6; }
	inline uint8_t* get_address_of_subscript_6() { return &___subscript_6; }
	inline void set_subscript_6(uint8_t value)
	{
		___subscript_6 = value;
	}

	inline static int32_t get_offset_of_uppercase_7() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___uppercase_7)); }
	inline uint8_t get_uppercase_7() const { return ___uppercase_7; }
	inline uint8_t* get_address_of_uppercase_7() { return &___uppercase_7; }
	inline void set_uppercase_7(uint8_t value)
	{
		___uppercase_7 = value;
	}

	inline static int32_t get_offset_of_lowercase_8() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___lowercase_8)); }
	inline uint8_t get_lowercase_8() const { return ___lowercase_8; }
	inline uint8_t* get_address_of_lowercase_8() { return &___lowercase_8; }
	inline void set_lowercase_8(uint8_t value)
	{
		___lowercase_8 = value;
	}

	inline static int32_t get_offset_of_smallcaps_9() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___smallcaps_9)); }
	inline uint8_t get_smallcaps_9() const { return ___smallcaps_9; }
	inline uint8_t* get_address_of_smallcaps_9() { return &___smallcaps_9; }
	inline void set_smallcaps_9(uint8_t value)
	{
		___smallcaps_9 = value;
	}
};


// TMPro.TMP_Offset
struct TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 
{
public:
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;

public:
	inline static int32_t get_offset_of_m_Left_0() { return static_cast<int32_t>(offsetof(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117, ___m_Left_0)); }
	inline float get_m_Left_0() const { return ___m_Left_0; }
	inline float* get_address_of_m_Left_0() { return &___m_Left_0; }
	inline void set_m_Left_0(float value)
	{
		___m_Left_0 = value;
	}

	inline static int32_t get_offset_of_m_Right_1() { return static_cast<int32_t>(offsetof(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117, ___m_Right_1)); }
	inline float get_m_Right_1() const { return ___m_Right_1; }
	inline float* get_address_of_m_Right_1() { return &___m_Right_1; }
	inline void set_m_Right_1(float value)
	{
		___m_Right_1 = value;
	}

	inline static int32_t get_offset_of_m_Top_2() { return static_cast<int32_t>(offsetof(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117, ___m_Top_2)); }
	inline float get_m_Top_2() const { return ___m_Top_2; }
	inline float* get_address_of_m_Top_2() { return &___m_Top_2; }
	inline void set_m_Top_2(float value)
	{
		___m_Top_2 = value;
	}

	inline static int32_t get_offset_of_m_Bottom_3() { return static_cast<int32_t>(offsetof(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117, ___m_Bottom_3)); }
	inline float get_m_Bottom_3() const { return ___m_Bottom_3; }
	inline float* get_address_of_m_Bottom_3() { return &___m_Bottom_3; }
	inline void set_m_Bottom_3(float value)
	{
		___m_Bottom_3 = value;
	}
};

struct TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117_StaticFields
{
public:
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117  ___k_ZeroOffset_4;

public:
	inline static int32_t get_offset_of_k_ZeroOffset_4() { return static_cast<int32_t>(offsetof(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117_StaticFields, ___k_ZeroOffset_4)); }
	inline TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117  get_k_ZeroOffset_4() const { return ___k_ZeroOffset_4; }
	inline TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 * get_address_of_k_ZeroOffset_4() { return &___k_ZeroOffset_4; }
	inline void set_k_ZeroOffset_4(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117  value)
	{
		___k_ZeroOffset_4 = value;
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
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


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
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
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
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


// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F 
{
public:
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C * ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;

public:
	inline static int32_t get_offset_of_character_0() { return static_cast<int32_t>(offsetof(SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F, ___character_0)); }
	inline TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C * get_character_0() const { return ___character_0; }
	inline TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C ** get_address_of_character_0() { return &___character_0; }
	inline void set_character_0(TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C * value)
	{
		___character_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___character_0), (void*)value);
	}

	inline static int32_t get_offset_of_fontAsset_1() { return static_cast<int32_t>(offsetof(SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F, ___fontAsset_1)); }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * get_fontAsset_1() const { return ___fontAsset_1; }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 ** get_address_of_fontAsset_1() { return &___fontAsset_1; }
	inline void set_fontAsset_1(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * value)
	{
		___fontAsset_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fontAsset_1), (void*)value);
	}

	inline static int32_t get_offset_of_material_2() { return static_cast<int32_t>(offsetof(SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F, ___material_2)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_material_2() const { return ___material_2; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_material_2() { return &___material_2; }
	inline void set_material_2(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___material_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___material_2), (void*)value);
	}

	inline static int32_t get_offset_of_materialIndex_3() { return static_cast<int32_t>(offsetof(SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F, ___materialIndex_3)); }
	inline int32_t get_materialIndex_3() const { return ___materialIndex_3; }
	inline int32_t* get_address_of_materialIndex_3() { return &___materialIndex_3; }
	inline void set_materialIndex_3(int32_t value)
	{
		___materialIndex_3 = value;
	}
};

// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F_marshaled_pinvoke
{
	TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C * ___character_0;
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___fontAsset_1;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F_marshaled_com
{
	TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C * ___character_0;
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___fontAsset_1;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t50AA56C265D2A3DB961E3DD200165FE78270562B 
{
public:
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;

public:
	inline static int32_t get_offset_of_m_Array_0() { return static_cast<int32_t>(offsetof(TextBackingContainer_t50AA56C265D2A3DB961E3DD200165FE78270562B, ___m_Array_0)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_m_Array_0() const { return ___m_Array_0; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_m_Array_0() { return &___m_Array_0; }
	inline void set_m_Array_0(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___m_Array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Array_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Count_1() { return static_cast<int32_t>(offsetof(TextBackingContainer_t50AA56C265D2A3DB961E3DD200165FE78270562B, ___m_Count_1)); }
	inline int32_t get_m_Count_1() const { return ___m_Count_1; }
	inline int32_t* get_address_of_m_Count_1() { return &___m_Count_1; }
	inline void set_m_Count_1(int32_t value)
	{
		___m_Count_1 = value;
	}
};

// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t50AA56C265D2A3DB961E3DD200165FE78270562B_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t50AA56C265D2A3DB961E3DD200165FE78270562B_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemProvider`1<Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem>
struct MRTKSubsystemProvider_1_t4741C1AB5FAC6316ED2ED815084AA3DF14E415FA  : public SubsystemProvider_1_tA58F51D9E76260751F2C8CE386EC21B8AC89DBEB
{
public:

public:
};


// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D, ___itemStack_0)); }
	inline Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* get_itemStack_0() const { return ___itemStack_0; }
	inline Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D, ___m_DefaultItem_2)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_DefaultItem_2 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B  ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3, ___itemStack_0)); }
	inline MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD* get_itemStack_0() const { return ___itemStack_0; }
	inline MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3, ___m_DefaultItem_2)); }
	inline MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B  get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B * get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B  value)
	{
		___m_DefaultItem_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor
struct AccessibilitySubsystemDescriptor_t8E1234483302B1C8578B13351406A4782F203A8C  : public SubsystemDescriptorWithProvider_2_t2D1854AB87A3269BC7E36F53FF45696C2BE5BD7E
{
public:
	// System.String Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor::<DisplayName>k__BackingField
	String_t* ___U3CDisplayNameU3Ek__BackingField_3;
	// System.String Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor::<Author>k__BackingField
	String_t* ___U3CAuthorU3Ek__BackingField_4;
	// System.Type Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor::<ConfigType>k__BackingField
	Type_t * ___U3CConfigTypeU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CDisplayNameU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(AccessibilitySubsystemDescriptor_t8E1234483302B1C8578B13351406A4782F203A8C, ___U3CDisplayNameU3Ek__BackingField_3)); }
	inline String_t* get_U3CDisplayNameU3Ek__BackingField_3() const { return ___U3CDisplayNameU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CDisplayNameU3Ek__BackingField_3() { return &___U3CDisplayNameU3Ek__BackingField_3; }
	inline void set_U3CDisplayNameU3Ek__BackingField_3(String_t* value)
	{
		___U3CDisplayNameU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDisplayNameU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAuthorU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(AccessibilitySubsystemDescriptor_t8E1234483302B1C8578B13351406A4782F203A8C, ___U3CAuthorU3Ek__BackingField_4)); }
	inline String_t* get_U3CAuthorU3Ek__BackingField_4() const { return ___U3CAuthorU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CAuthorU3Ek__BackingField_4() { return &___U3CAuthorU3Ek__BackingField_4; }
	inline void set_U3CAuthorU3Ek__BackingField_4(String_t* value)
	{
		___U3CAuthorU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAuthorU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CConfigTypeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(AccessibilitySubsystemDescriptor_t8E1234483302B1C8578B13351406A4782F203A8C, ___U3CConfigTypeU3Ek__BackingField_5)); }
	inline Type_t * get_U3CConfigTypeU3Ek__BackingField_5() const { return ___U3CConfigTypeU3Ek__BackingField_5; }
	inline Type_t ** get_address_of_U3CConfigTypeU3Ek__BackingField_5() { return &___U3CConfigTypeU3Ek__BackingField_5; }
	inline void set_U3CConfigTypeU3Ek__BackingField_5(Type_t * value)
	{
		___U3CConfigTypeU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CConfigTypeU3Ek__BackingField_5), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Accessibility.AccessibleObjectVisibility
struct AccessibleObjectVisibility_t5CAAEC6B70A7F1A8F08AFE0D906AD96D6F2A06E6 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Accessibility.AccessibleObjectVisibility::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AccessibleObjectVisibility_t5CAAEC6B70A7F1A8F08AFE0D906AD96D6F2A06E6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
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


// TMPro.ColorMode
struct ColorMode_t2C99ABBE35C08A863709500BFBBD6784D7114C09 
{
public:
	// System.Int32 TMPro.ColorMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ColorMode_t2C99ABBE35C08A863709500BFBBD6784D7114C09, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
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
struct Exception_t  : public RuntimeObject
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

// TMPro.Extents
struct Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA 
{
public:
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___max_3;

public:
	inline static int32_t get_offset_of_min_2() { return static_cast<int32_t>(offsetof(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA, ___min_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_min_2() const { return ___min_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_min_2() { return &___min_2; }
	inline void set_min_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___min_2 = value;
	}

	inline static int32_t get_offset_of_max_3() { return static_cast<int32_t>(offsetof(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA, ___max_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_max_3() const { return ___max_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_max_3() { return &___max_3; }
	inline void set_max_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___max_3 = value;
	}
};

struct Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA_StaticFields
{
public:
	// TMPro.Extents TMPro.Extents::zero
	Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  ___uninitialized_1;

public:
	inline static int32_t get_offset_of_zero_0() { return static_cast<int32_t>(offsetof(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA_StaticFields, ___zero_0)); }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  get_zero_0() const { return ___zero_0; }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA * get_address_of_zero_0() { return &___zero_0; }
	inline void set_zero_0(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  value)
	{
		___zero_0 = value;
	}

	inline static int32_t get_offset_of_uninitialized_1() { return static_cast<int32_t>(offsetof(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA_StaticFields, ___uninitialized_1)); }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  get_uninitialized_1() const { return ___uninitialized_1; }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA * get_address_of_uninitialized_1() { return &___uninitialized_1; }
	inline void set_uninitialized_1(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  value)
	{
		___uninitialized_1 = value;
	}
};


// TMPro.FontStyles
struct FontStyles_tAB9AC2C8316219AE73612ED4DD60417C14B5B74C 
{
public:
	// System.Int32 TMPro.FontStyles::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FontStyles_tAB9AC2C8316219AE73612ED4DD60417C14B5B74C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.FontWeight
struct FontWeight_tBF8B23C3A4F63D5602FEC93BE775C93CA4DDDC26 
{
public:
	// System.Int32 TMPro.FontWeight::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FontWeight_tBF8B23C3A4F63D5602FEC93BE775C93CA4DDDC26, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.HighlightState
struct HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759 
{
public:
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117  ___padding_1;

public:
	inline static int32_t get_offset_of_color_0() { return static_cast<int32_t>(offsetof(HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759, ___color_0)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_color_0() const { return ___color_0; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_color_0() { return &___color_0; }
	inline void set_color_0(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___color_0 = value;
	}

	inline static int32_t get_offset_of_padding_1() { return static_cast<int32_t>(offsetof(HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759, ___padding_1)); }
	inline TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117  get_padding_1() const { return ___padding_1; }
	inline TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 * get_address_of_padding_1() { return &___padding_1; }
	inline void set_padding_1(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117  value)
	{
		___padding_1 = value;
	}
};


// TMPro.HorizontalAlignmentOptions
struct HorizontalAlignmentOptions_tCBBC74167BDEF6B5B510DDC43B5136F793A05193 
{
public:
	// System.Int32 TMPro.HorizontalAlignmentOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HorizontalAlignmentOptions_tCBBC74167BDEF6B5B510DDC43B5136F793A05193, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
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

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 
{
public:
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
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


// Microsoft.MixedReality.Toolkit.Accessibility.ScreenReaderSpatializationOption
struct ScreenReaderSpatializationOption_tB56684908DC7E75B08CB2A073EC478BE758837BF 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Accessibility.ScreenReaderSpatializationOption::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ScreenReaderSpatializationOption_tB56684908DC7E75B08CB2A073EC478BE758837BF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TMP_TextElementType
struct TMP_TextElementType_t4BDF96DA2071216188B19EB33C35912BD185ECA3 
{
public:
	// System.Int32 TMPro.TMP_TextElementType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TMP_TextElementType_t4BDF96DA2071216188B19EB33C35912BD185ECA3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TextAlignmentOptions
struct TextAlignmentOptions_t682AC2BC382B468C04A23B008505ACCBF826AD63 
{
public:
	// System.Int32 TMPro.TextAlignmentOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextAlignmentOptions_t682AC2BC382B468C04A23B008505ACCBF826AD63, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TextOverflowModes
struct TextOverflowModes_t3E5E40446E0C1088788010EE07323B45DB7549C6 
{
public:
	// System.Int32 TMPro.TextOverflowModes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextOverflowModes_t3E5E40446E0C1088788010EE07323B45DB7549C6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TextRenderFlags
struct TextRenderFlags_tBA599FEF207E56A80860B6266E3C9F57B59CA9F4 
{
public:
	// System.Int32 TMPro.TextRenderFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextRenderFlags_tBA599FEF207E56A80860B6266E3C9F57B59CA9F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TextureMappingOptions
struct TextureMappingOptions_t9FA25F9B2D01E6B7D8DA8761AAED241D285A285A 
{
public:
	// System.Int32 TMPro.TextureMappingOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureMappingOptions_t9FA25F9B2D01E6B7D8DA8761AAED241D285A285A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.VertexGradient
struct VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D 
{
public:
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___bottomRight_3;

public:
	inline static int32_t get_offset_of_topLeft_0() { return static_cast<int32_t>(offsetof(VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D, ___topLeft_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_topLeft_0() const { return ___topLeft_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_topLeft_0() { return &___topLeft_0; }
	inline void set_topLeft_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___topLeft_0 = value;
	}

	inline static int32_t get_offset_of_topRight_1() { return static_cast<int32_t>(offsetof(VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D, ___topRight_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_topRight_1() const { return ___topRight_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_topRight_1() { return &___topRight_1; }
	inline void set_topRight_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___topRight_1 = value;
	}

	inline static int32_t get_offset_of_bottomLeft_2() { return static_cast<int32_t>(offsetof(VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D, ___bottomLeft_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_bottomLeft_2() const { return ___bottomLeft_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_bottomLeft_2() { return &___bottomLeft_2; }
	inline void set_bottomLeft_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___bottomLeft_2 = value;
	}

	inline static int32_t get_offset_of_bottomRight_3() { return static_cast<int32_t>(offsetof(VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D, ___bottomRight_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_bottomRight_3() const { return ___bottomRight_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_bottomRight_3() { return &___bottomRight_3; }
	inline void set_bottomRight_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___bottomRight_3 = value;
	}
};


// TMPro.VertexSortingOrder
struct VertexSortingOrder_t8D099B77634C901CB5D2497AEAC94127E9DE013B 
{
public:
	// System.Int32 TMPro.VertexSortingOrder::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VertexSortingOrder_t8D099B77634C901CB5D2497AEAC94127E9DE013B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.VerticalAlignmentOptions
struct VerticalAlignmentOptions_t6F8B6FBA36D97C6CA534AE3956D9060E39C9D326 
{
public:
	// System.Int32 TMPro.VerticalAlignmentOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VerticalAlignmentOptions_t6F8B6FBA36D97C6CA534AE3956D9060E39C9D326, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TMP_Text/TextInputSources
struct TextInputSources_t8A0451130450FC08C5847209E7551F27F5CAF4D0 
{
public:
	// System.Int32 TMPro.TMP_Text/TextInputSources::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextInputSources_t8A0451130450FC08C5847209E7551F27F5CAF4D0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystem`3<Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem,Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor,Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem/Provider>
struct MRTKSubsystem_3_t5F52E397AE4EBAFBD7876AC3F752EA1E37851EFD  : public SubsystemWithProvider_3_t154F5F2C7158DFC3C3FA7F293802A56FC15DA196
{
public:

public:
};

struct MRTKSubsystem_3_t5F52E397AE4EBAFBD7876AC3F752EA1E37851EFD_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystem`3::UpdatePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdatePerfMarker_4;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystem`3::LateUpdatePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___LateUpdatePerfMarker_5;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystem`3::FixedUpdatePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___FixedUpdatePerfMarker_6;

public:
	inline static int32_t get_offset_of_UpdatePerfMarker_4() { return static_cast<int32_t>(offsetof(MRTKSubsystem_3_t5F52E397AE4EBAFBD7876AC3F752EA1E37851EFD_StaticFields, ___UpdatePerfMarker_4)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdatePerfMarker_4() const { return ___UpdatePerfMarker_4; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdatePerfMarker_4() { return &___UpdatePerfMarker_4; }
	inline void set_UpdatePerfMarker_4(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdatePerfMarker_4 = value;
	}

	inline static int32_t get_offset_of_LateUpdatePerfMarker_5() { return static_cast<int32_t>(offsetof(MRTKSubsystem_3_t5F52E397AE4EBAFBD7876AC3F752EA1E37851EFD_StaticFields, ___LateUpdatePerfMarker_5)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_LateUpdatePerfMarker_5() const { return ___LateUpdatePerfMarker_5; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_LateUpdatePerfMarker_5() { return &___LateUpdatePerfMarker_5; }
	inline void set_LateUpdatePerfMarker_5(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___LateUpdatePerfMarker_5 = value;
	}

	inline static int32_t get_offset_of_FixedUpdatePerfMarker_6() { return static_cast<int32_t>(offsetof(MRTKSubsystem_3_t5F52E397AE4EBAFBD7876AC3F752EA1E37851EFD_StaticFields, ___FixedUpdatePerfMarker_6)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_FixedUpdatePerfMarker_6() const { return ___FixedUpdatePerfMarker_6; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_FixedUpdatePerfMarker_6() { return &___FixedUpdatePerfMarker_6; }
	inline void set_FixedUpdatePerfMarker_6(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___FixedUpdatePerfMarker_6 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t0C9E436904E570F798885BC6F264C7AE6608B5C6* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7, ___itemStack_0)); }
	inline FontWeightU5BU5D_t0C9E436904E570F798885BC6F264C7AE6608B5C6* get_itemStack_0() const { return ___itemStack_0; }
	inline FontWeightU5BU5D_t0C9E436904E570F798885BC6F264C7AE6608B5C6** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(FontWeightU5BU5D_t0C9E436904E570F798885BC6F264C7AE6608B5C6* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7, ___m_DefaultItem_2)); }
	inline int32_t get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline int32_t* get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(int32_t value)
	{
		___m_DefaultItem_2 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_t8150DD4545DE751DD24E4106F1E66C41DFFE38EA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759  ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E, ___itemStack_0)); }
	inline HighlightStateU5BU5D_t8150DD4545DE751DD24E4106F1E66C41DFFE38EA* get_itemStack_0() const { return ___itemStack_0; }
	inline HighlightStateU5BU5D_t8150DD4545DE751DD24E4106F1E66C41DFFE38EA** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(HighlightStateU5BU5D_t8150DD4545DE751DD24E4106F1E66C41DFFE38EA* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E, ___m_DefaultItem_2)); }
	inline HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759  get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759 * get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759  value)
	{
		___m_DefaultItem_2 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t57D37E3CA431B98ECF9444788AA9C047B990DDBB* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B, ___itemStack_0)); }
	inline HorizontalAlignmentOptionsU5BU5D_t57D37E3CA431B98ECF9444788AA9C047B990DDBB* get_itemStack_0() const { return ___itemStack_0; }
	inline HorizontalAlignmentOptionsU5BU5D_t57D37E3CA431B98ECF9444788AA9C047B990DDBB** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(HorizontalAlignmentOptionsU5BU5D_t57D37E3CA431B98ECF9444788AA9C047B990DDBB* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B, ___m_DefaultItem_2)); }
	inline int32_t get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline int32_t* get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(int32_t value)
	{
		___m_DefaultItem_2 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// System.ApplicationException
struct ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407  : public Exception_t
{
public:

public:
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
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

// Microsoft.MixedReality.Toolkit.Accessibility.ScreenReaderObjectSettings
struct ScreenReaderObjectSettings_t997C0D291D64E4A1BA7AE394A2AAD63792FF4082  : public RuntimeObject
{
public:
	// System.Single Microsoft.MixedReality.Toolkit.Accessibility.ScreenReaderObjectSettings::maxObjectDistance
	float ___maxObjectDistance_0;
	// Microsoft.MixedReality.Toolkit.Accessibility.ScreenReaderSpatializationOption Microsoft.MixedReality.Toolkit.Accessibility.ScreenReaderObjectSettings::spatializationOption
	int32_t ___spatializationOption_1;

public:
	inline static int32_t get_offset_of_maxObjectDistance_0() { return static_cast<int32_t>(offsetof(ScreenReaderObjectSettings_t997C0D291D64E4A1BA7AE394A2AAD63792FF4082, ___maxObjectDistance_0)); }
	inline float get_maxObjectDistance_0() const { return ___maxObjectDistance_0; }
	inline float* get_address_of_maxObjectDistance_0() { return &___maxObjectDistance_0; }
	inline void set_maxObjectDistance_0(float value)
	{
		___maxObjectDistance_0 = value;
	}

	inline static int32_t get_offset_of_spatializationOption_1() { return static_cast<int32_t>(offsetof(ScreenReaderObjectSettings_t997C0D291D64E4A1BA7AE394A2AAD63792FF4082, ___spatializationOption_1)); }
	inline int32_t get_spatializationOption_1() const { return ___spatializationOption_1; }
	inline int32_t* get_address_of_spatializationOption_1() { return &___spatializationOption_1; }
	inline void set_spatializationOption_1(int32_t value)
	{
		___spatializationOption_1 = value;
	}
};


// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
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

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7 
{
public:
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  ___lineExtents_19;

public:
	inline static int32_t get_offset_of_controlCharacterCount_0() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___controlCharacterCount_0)); }
	inline int32_t get_controlCharacterCount_0() const { return ___controlCharacterCount_0; }
	inline int32_t* get_address_of_controlCharacterCount_0() { return &___controlCharacterCount_0; }
	inline void set_controlCharacterCount_0(int32_t value)
	{
		___controlCharacterCount_0 = value;
	}

	inline static int32_t get_offset_of_characterCount_1() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___characterCount_1)); }
	inline int32_t get_characterCount_1() const { return ___characterCount_1; }
	inline int32_t* get_address_of_characterCount_1() { return &___characterCount_1; }
	inline void set_characterCount_1(int32_t value)
	{
		___characterCount_1 = value;
	}

	inline static int32_t get_offset_of_visibleCharacterCount_2() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___visibleCharacterCount_2)); }
	inline int32_t get_visibleCharacterCount_2() const { return ___visibleCharacterCount_2; }
	inline int32_t* get_address_of_visibleCharacterCount_2() { return &___visibleCharacterCount_2; }
	inline void set_visibleCharacterCount_2(int32_t value)
	{
		___visibleCharacterCount_2 = value;
	}

	inline static int32_t get_offset_of_spaceCount_3() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___spaceCount_3)); }
	inline int32_t get_spaceCount_3() const { return ___spaceCount_3; }
	inline int32_t* get_address_of_spaceCount_3() { return &___spaceCount_3; }
	inline void set_spaceCount_3(int32_t value)
	{
		___spaceCount_3 = value;
	}

	inline static int32_t get_offset_of_wordCount_4() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___wordCount_4)); }
	inline int32_t get_wordCount_4() const { return ___wordCount_4; }
	inline int32_t* get_address_of_wordCount_4() { return &___wordCount_4; }
	inline void set_wordCount_4(int32_t value)
	{
		___wordCount_4 = value;
	}

	inline static int32_t get_offset_of_firstCharacterIndex_5() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___firstCharacterIndex_5)); }
	inline int32_t get_firstCharacterIndex_5() const { return ___firstCharacterIndex_5; }
	inline int32_t* get_address_of_firstCharacterIndex_5() { return &___firstCharacterIndex_5; }
	inline void set_firstCharacterIndex_5(int32_t value)
	{
		___firstCharacterIndex_5 = value;
	}

	inline static int32_t get_offset_of_firstVisibleCharacterIndex_6() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___firstVisibleCharacterIndex_6)); }
	inline int32_t get_firstVisibleCharacterIndex_6() const { return ___firstVisibleCharacterIndex_6; }
	inline int32_t* get_address_of_firstVisibleCharacterIndex_6() { return &___firstVisibleCharacterIndex_6; }
	inline void set_firstVisibleCharacterIndex_6(int32_t value)
	{
		___firstVisibleCharacterIndex_6 = value;
	}

	inline static int32_t get_offset_of_lastCharacterIndex_7() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___lastCharacterIndex_7)); }
	inline int32_t get_lastCharacterIndex_7() const { return ___lastCharacterIndex_7; }
	inline int32_t* get_address_of_lastCharacterIndex_7() { return &___lastCharacterIndex_7; }
	inline void set_lastCharacterIndex_7(int32_t value)
	{
		___lastCharacterIndex_7 = value;
	}

	inline static int32_t get_offset_of_lastVisibleCharacterIndex_8() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___lastVisibleCharacterIndex_8)); }
	inline int32_t get_lastVisibleCharacterIndex_8() const { return ___lastVisibleCharacterIndex_8; }
	inline int32_t* get_address_of_lastVisibleCharacterIndex_8() { return &___lastVisibleCharacterIndex_8; }
	inline void set_lastVisibleCharacterIndex_8(int32_t value)
	{
		___lastVisibleCharacterIndex_8 = value;
	}

	inline static int32_t get_offset_of_length_9() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___length_9)); }
	inline float get_length_9() const { return ___length_9; }
	inline float* get_address_of_length_9() { return &___length_9; }
	inline void set_length_9(float value)
	{
		___length_9 = value;
	}

	inline static int32_t get_offset_of_lineHeight_10() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___lineHeight_10)); }
	inline float get_lineHeight_10() const { return ___lineHeight_10; }
	inline float* get_address_of_lineHeight_10() { return &___lineHeight_10; }
	inline void set_lineHeight_10(float value)
	{
		___lineHeight_10 = value;
	}

	inline static int32_t get_offset_of_ascender_11() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___ascender_11)); }
	inline float get_ascender_11() const { return ___ascender_11; }
	inline float* get_address_of_ascender_11() { return &___ascender_11; }
	inline void set_ascender_11(float value)
	{
		___ascender_11 = value;
	}

	inline static int32_t get_offset_of_baseline_12() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___baseline_12)); }
	inline float get_baseline_12() const { return ___baseline_12; }
	inline float* get_address_of_baseline_12() { return &___baseline_12; }
	inline void set_baseline_12(float value)
	{
		___baseline_12 = value;
	}

	inline static int32_t get_offset_of_descender_13() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___descender_13)); }
	inline float get_descender_13() const { return ___descender_13; }
	inline float* get_address_of_descender_13() { return &___descender_13; }
	inline void set_descender_13(float value)
	{
		___descender_13 = value;
	}

	inline static int32_t get_offset_of_maxAdvance_14() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___maxAdvance_14)); }
	inline float get_maxAdvance_14() const { return ___maxAdvance_14; }
	inline float* get_address_of_maxAdvance_14() { return &___maxAdvance_14; }
	inline void set_maxAdvance_14(float value)
	{
		___maxAdvance_14 = value;
	}

	inline static int32_t get_offset_of_width_15() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___width_15)); }
	inline float get_width_15() const { return ___width_15; }
	inline float* get_address_of_width_15() { return &___width_15; }
	inline void set_width_15(float value)
	{
		___width_15 = value;
	}

	inline static int32_t get_offset_of_marginLeft_16() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___marginLeft_16)); }
	inline float get_marginLeft_16() const { return ___marginLeft_16; }
	inline float* get_address_of_marginLeft_16() { return &___marginLeft_16; }
	inline void set_marginLeft_16(float value)
	{
		___marginLeft_16 = value;
	}

	inline static int32_t get_offset_of_marginRight_17() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___marginRight_17)); }
	inline float get_marginRight_17() const { return ___marginRight_17; }
	inline float* get_address_of_marginRight_17() { return &___marginRight_17; }
	inline void set_marginRight_17(float value)
	{
		___marginRight_17 = value;
	}

	inline static int32_t get_offset_of_alignment_18() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___alignment_18)); }
	inline int32_t get_alignment_18() const { return ___alignment_18; }
	inline int32_t* get_address_of_alignment_18() { return &___alignment_18; }
	inline void set_alignment_18(int32_t value)
	{
		___alignment_18 = value;
	}

	inline static int32_t get_offset_of_lineExtents_19() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___lineExtents_19)); }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  get_lineExtents_19() const { return ___lineExtents_19; }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA * get_address_of_lineExtents_19() { return &___lineExtents_19; }
	inline void set_lineExtents_19(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  value)
	{
		___lineExtents_19 = value;
	}
};


// System.Type
struct Type_t  : public MemberInfo_t
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


// Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem/Provider
struct Provider_t1B885BF706B62D27FB206A6C1631D2D5699CB596  : public MRTKSubsystemProvider_1_t4741C1AB5FAC6316ED2ED815084AA3DF14E415FA
{
public:

public:
};


// System.Action`1<System.Boolean>
struct Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83  : public MulticastDelegate_t
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem
struct AccessibilitySubsystem_t87660EFBF1E770B16033F7AD38AB76370B50895B  : public MRTKSubsystem_3_t5F52E397AE4EBAFBD7876AC3F752EA1E37851EFD
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Accessibility.AccessibleObjectClassification
struct AccessibleObjectClassification_t5FAEC0486A9F61EBBF0F6D7E189FE35B0C9EA5E2  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.String Microsoft.MixedReality.Toolkit.Accessibility.AccessibleObjectClassification::description
	String_t* ___description_4;
	// System.String Microsoft.MixedReality.Toolkit.Accessibility.AccessibleObjectClassification::<Description>k__BackingField
	String_t* ___U3CDescriptionU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_description_4() { return static_cast<int32_t>(offsetof(AccessibleObjectClassification_t5FAEC0486A9F61EBBF0F6D7E189FE35B0C9EA5E2, ___description_4)); }
	inline String_t* get_description_4() const { return ___description_4; }
	inline String_t** get_address_of_description_4() { return &___description_4; }
	inline void set_description_4(String_t* value)
	{
		___description_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___description_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDescriptionU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(AccessibleObjectClassification_t5FAEC0486A9F61EBBF0F6D7E189FE35B0C9EA5E2, ___U3CDescriptionU3Ek__BackingField_5)); }
	inline String_t* get_U3CDescriptionU3Ek__BackingField_5() const { return ___U3CDescriptionU3Ek__BackingField_5; }
	inline String_t** get_address_of_U3CDescriptionU3Ek__BackingField_5() { return &___U3CDescriptionU3Ek__BackingField_5; }
	inline void set_U3CDescriptionU3Ek__BackingField_5(String_t* value)
	{
		___U3CDescriptionU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDescriptionU3Ek__BackingField_5), (void*)value);
	}
};


// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
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


// Microsoft.MixedReality.Toolkit.BaseSubsystemConfig
struct BaseSubsystemConfig_t6A872EC7E317759CA469B4184C04599CB5520E09  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Accessibility.ObjectRole
struct ObjectRole_t3AE1A8C919DCC4DA799FC8384919434DF43997E8  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.String Microsoft.MixedReality.Toolkit.Accessibility.ObjectRole::description
	String_t* ___description_4;
	// System.String Microsoft.MixedReality.Toolkit.Accessibility.ObjectRole::formalName
	String_t* ___formalName_5;
	// System.Boolean Microsoft.MixedReality.Toolkit.Accessibility.ObjectRole::isAria
	bool ___isAria_6;
	// System.String Microsoft.MixedReality.Toolkit.Accessibility.ObjectRole::referenceLink
	String_t* ___referenceLink_7;

public:
	inline static int32_t get_offset_of_description_4() { return static_cast<int32_t>(offsetof(ObjectRole_t3AE1A8C919DCC4DA799FC8384919434DF43997E8, ___description_4)); }
	inline String_t* get_description_4() const { return ___description_4; }
	inline String_t** get_address_of_description_4() { return &___description_4; }
	inline void set_description_4(String_t* value)
	{
		___description_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___description_4), (void*)value);
	}

	inline static int32_t get_offset_of_formalName_5() { return static_cast<int32_t>(offsetof(ObjectRole_t3AE1A8C919DCC4DA799FC8384919434DF43997E8, ___formalName_5)); }
	inline String_t* get_formalName_5() const { return ___formalName_5; }
	inline String_t** get_address_of_formalName_5() { return &___formalName_5; }
	inline void set_formalName_5(String_t* value)
	{
		___formalName_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___formalName_5), (void*)value);
	}

	inline static int32_t get_offset_of_isAria_6() { return static_cast<int32_t>(offsetof(ObjectRole_t3AE1A8C919DCC4DA799FC8384919434DF43997E8, ___isAria_6)); }
	inline bool get_isAria_6() const { return ___isAria_6; }
	inline bool* get_address_of_isAria_6() { return &___isAria_6; }
	inline void set_isAria_6(bool value)
	{
		___isAria_6 = value;
	}

	inline static int32_t get_offset_of_referenceLink_7() { return static_cast<int32_t>(offsetof(ObjectRole_t3AE1A8C919DCC4DA799FC8384919434DF43997E8, ___referenceLink_7)); }
	inline String_t* get_referenceLink_7() const { return ___referenceLink_7; }
	inline String_t** get_address_of_referenceLink_7() { return &___referenceLink_7; }
	inline void set_referenceLink_7(String_t* value)
	{
		___referenceLink_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___referenceLink_7), (void*)value);
	}
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// TMPro.WordWrapState
struct WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99 
{
public:
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7  ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E  ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804  ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7  ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3  ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B  ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;

public:
	inline static int32_t get_offset_of_previous_WordBreak_0() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___previous_WordBreak_0)); }
	inline int32_t get_previous_WordBreak_0() const { return ___previous_WordBreak_0; }
	inline int32_t* get_address_of_previous_WordBreak_0() { return &___previous_WordBreak_0; }
	inline void set_previous_WordBreak_0(int32_t value)
	{
		___previous_WordBreak_0 = value;
	}

	inline static int32_t get_offset_of_total_CharacterCount_1() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___total_CharacterCount_1)); }
	inline int32_t get_total_CharacterCount_1() const { return ___total_CharacterCount_1; }
	inline int32_t* get_address_of_total_CharacterCount_1() { return &___total_CharacterCount_1; }
	inline void set_total_CharacterCount_1(int32_t value)
	{
		___total_CharacterCount_1 = value;
	}

	inline static int32_t get_offset_of_visible_CharacterCount_2() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___visible_CharacterCount_2)); }
	inline int32_t get_visible_CharacterCount_2() const { return ___visible_CharacterCount_2; }
	inline int32_t* get_address_of_visible_CharacterCount_2() { return &___visible_CharacterCount_2; }
	inline void set_visible_CharacterCount_2(int32_t value)
	{
		___visible_CharacterCount_2 = value;
	}

	inline static int32_t get_offset_of_visible_SpriteCount_3() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___visible_SpriteCount_3)); }
	inline int32_t get_visible_SpriteCount_3() const { return ___visible_SpriteCount_3; }
	inline int32_t* get_address_of_visible_SpriteCount_3() { return &___visible_SpriteCount_3; }
	inline void set_visible_SpriteCount_3(int32_t value)
	{
		___visible_SpriteCount_3 = value;
	}

	inline static int32_t get_offset_of_visible_LinkCount_4() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___visible_LinkCount_4)); }
	inline int32_t get_visible_LinkCount_4() const { return ___visible_LinkCount_4; }
	inline int32_t* get_address_of_visible_LinkCount_4() { return &___visible_LinkCount_4; }
	inline void set_visible_LinkCount_4(int32_t value)
	{
		___visible_LinkCount_4 = value;
	}

	inline static int32_t get_offset_of_firstCharacterIndex_5() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___firstCharacterIndex_5)); }
	inline int32_t get_firstCharacterIndex_5() const { return ___firstCharacterIndex_5; }
	inline int32_t* get_address_of_firstCharacterIndex_5() { return &___firstCharacterIndex_5; }
	inline void set_firstCharacterIndex_5(int32_t value)
	{
		___firstCharacterIndex_5 = value;
	}

	inline static int32_t get_offset_of_firstVisibleCharacterIndex_6() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___firstVisibleCharacterIndex_6)); }
	inline int32_t get_firstVisibleCharacterIndex_6() const { return ___firstVisibleCharacterIndex_6; }
	inline int32_t* get_address_of_firstVisibleCharacterIndex_6() { return &___firstVisibleCharacterIndex_6; }
	inline void set_firstVisibleCharacterIndex_6(int32_t value)
	{
		___firstVisibleCharacterIndex_6 = value;
	}

	inline static int32_t get_offset_of_lastCharacterIndex_7() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___lastCharacterIndex_7)); }
	inline int32_t get_lastCharacterIndex_7() const { return ___lastCharacterIndex_7; }
	inline int32_t* get_address_of_lastCharacterIndex_7() { return &___lastCharacterIndex_7; }
	inline void set_lastCharacterIndex_7(int32_t value)
	{
		___lastCharacterIndex_7 = value;
	}

	inline static int32_t get_offset_of_lastVisibleCharIndex_8() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___lastVisibleCharIndex_8)); }
	inline int32_t get_lastVisibleCharIndex_8() const { return ___lastVisibleCharIndex_8; }
	inline int32_t* get_address_of_lastVisibleCharIndex_8() { return &___lastVisibleCharIndex_8; }
	inline void set_lastVisibleCharIndex_8(int32_t value)
	{
		___lastVisibleCharIndex_8 = value;
	}

	inline static int32_t get_offset_of_lineNumber_9() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___lineNumber_9)); }
	inline int32_t get_lineNumber_9() const { return ___lineNumber_9; }
	inline int32_t* get_address_of_lineNumber_9() { return &___lineNumber_9; }
	inline void set_lineNumber_9(int32_t value)
	{
		___lineNumber_9 = value;
	}

	inline static int32_t get_offset_of_maxCapHeight_10() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___maxCapHeight_10)); }
	inline float get_maxCapHeight_10() const { return ___maxCapHeight_10; }
	inline float* get_address_of_maxCapHeight_10() { return &___maxCapHeight_10; }
	inline void set_maxCapHeight_10(float value)
	{
		___maxCapHeight_10 = value;
	}

	inline static int32_t get_offset_of_maxAscender_11() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___maxAscender_11)); }
	inline float get_maxAscender_11() const { return ___maxAscender_11; }
	inline float* get_address_of_maxAscender_11() { return &___maxAscender_11; }
	inline void set_maxAscender_11(float value)
	{
		___maxAscender_11 = value;
	}

	inline static int32_t get_offset_of_maxDescender_12() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___maxDescender_12)); }
	inline float get_maxDescender_12() const { return ___maxDescender_12; }
	inline float* get_address_of_maxDescender_12() { return &___maxDescender_12; }
	inline void set_maxDescender_12(float value)
	{
		___maxDescender_12 = value;
	}

	inline static int32_t get_offset_of_startOfLineAscender_13() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___startOfLineAscender_13)); }
	inline float get_startOfLineAscender_13() const { return ___startOfLineAscender_13; }
	inline float* get_address_of_startOfLineAscender_13() { return &___startOfLineAscender_13; }
	inline void set_startOfLineAscender_13(float value)
	{
		___startOfLineAscender_13 = value;
	}

	inline static int32_t get_offset_of_maxLineAscender_14() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___maxLineAscender_14)); }
	inline float get_maxLineAscender_14() const { return ___maxLineAscender_14; }
	inline float* get_address_of_maxLineAscender_14() { return &___maxLineAscender_14; }
	inline void set_maxLineAscender_14(float value)
	{
		___maxLineAscender_14 = value;
	}

	inline static int32_t get_offset_of_maxLineDescender_15() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___maxLineDescender_15)); }
	inline float get_maxLineDescender_15() const { return ___maxLineDescender_15; }
	inline float* get_address_of_maxLineDescender_15() { return &___maxLineDescender_15; }
	inline void set_maxLineDescender_15(float value)
	{
		___maxLineDescender_15 = value;
	}

	inline static int32_t get_offset_of_pageAscender_16() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___pageAscender_16)); }
	inline float get_pageAscender_16() const { return ___pageAscender_16; }
	inline float* get_address_of_pageAscender_16() { return &___pageAscender_16; }
	inline void set_pageAscender_16(float value)
	{
		___pageAscender_16 = value;
	}

	inline static int32_t get_offset_of_horizontalAlignment_17() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___horizontalAlignment_17)); }
	inline int32_t get_horizontalAlignment_17() const { return ___horizontalAlignment_17; }
	inline int32_t* get_address_of_horizontalAlignment_17() { return &___horizontalAlignment_17; }
	inline void set_horizontalAlignment_17(int32_t value)
	{
		___horizontalAlignment_17 = value;
	}

	inline static int32_t get_offset_of_marginLeft_18() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___marginLeft_18)); }
	inline float get_marginLeft_18() const { return ___marginLeft_18; }
	inline float* get_address_of_marginLeft_18() { return &___marginLeft_18; }
	inline void set_marginLeft_18(float value)
	{
		___marginLeft_18 = value;
	}

	inline static int32_t get_offset_of_marginRight_19() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___marginRight_19)); }
	inline float get_marginRight_19() const { return ___marginRight_19; }
	inline float* get_address_of_marginRight_19() { return &___marginRight_19; }
	inline void set_marginRight_19(float value)
	{
		___marginRight_19 = value;
	}

	inline static int32_t get_offset_of_xAdvance_20() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___xAdvance_20)); }
	inline float get_xAdvance_20() const { return ___xAdvance_20; }
	inline float* get_address_of_xAdvance_20() { return &___xAdvance_20; }
	inline void set_xAdvance_20(float value)
	{
		___xAdvance_20 = value;
	}

	inline static int32_t get_offset_of_preferredWidth_21() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___preferredWidth_21)); }
	inline float get_preferredWidth_21() const { return ___preferredWidth_21; }
	inline float* get_address_of_preferredWidth_21() { return &___preferredWidth_21; }
	inline void set_preferredWidth_21(float value)
	{
		___preferredWidth_21 = value;
	}

	inline static int32_t get_offset_of_preferredHeight_22() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___preferredHeight_22)); }
	inline float get_preferredHeight_22() const { return ___preferredHeight_22; }
	inline float* get_address_of_preferredHeight_22() { return &___preferredHeight_22; }
	inline void set_preferredHeight_22(float value)
	{
		___preferredHeight_22 = value;
	}

	inline static int32_t get_offset_of_previousLineScale_23() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___previousLineScale_23)); }
	inline float get_previousLineScale_23() const { return ___previousLineScale_23; }
	inline float* get_address_of_previousLineScale_23() { return &___previousLineScale_23; }
	inline void set_previousLineScale_23(float value)
	{
		___previousLineScale_23 = value;
	}

	inline static int32_t get_offset_of_wordCount_24() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___wordCount_24)); }
	inline int32_t get_wordCount_24() const { return ___wordCount_24; }
	inline int32_t* get_address_of_wordCount_24() { return &___wordCount_24; }
	inline void set_wordCount_24(int32_t value)
	{
		___wordCount_24 = value;
	}

	inline static int32_t get_offset_of_fontStyle_25() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___fontStyle_25)); }
	inline int32_t get_fontStyle_25() const { return ___fontStyle_25; }
	inline int32_t* get_address_of_fontStyle_25() { return &___fontStyle_25; }
	inline void set_fontStyle_25(int32_t value)
	{
		___fontStyle_25 = value;
	}

	inline static int32_t get_offset_of_italicAngle_26() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___italicAngle_26)); }
	inline int32_t get_italicAngle_26() const { return ___italicAngle_26; }
	inline int32_t* get_address_of_italicAngle_26() { return &___italicAngle_26; }
	inline void set_italicAngle_26(int32_t value)
	{
		___italicAngle_26 = value;
	}

	inline static int32_t get_offset_of_fontScaleMultiplier_27() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___fontScaleMultiplier_27)); }
	inline float get_fontScaleMultiplier_27() const { return ___fontScaleMultiplier_27; }
	inline float* get_address_of_fontScaleMultiplier_27() { return &___fontScaleMultiplier_27; }
	inline void set_fontScaleMultiplier_27(float value)
	{
		___fontScaleMultiplier_27 = value;
	}

	inline static int32_t get_offset_of_currentFontSize_28() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___currentFontSize_28)); }
	inline float get_currentFontSize_28() const { return ___currentFontSize_28; }
	inline float* get_address_of_currentFontSize_28() { return &___currentFontSize_28; }
	inline void set_currentFontSize_28(float value)
	{
		___currentFontSize_28 = value;
	}

	inline static int32_t get_offset_of_baselineOffset_29() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___baselineOffset_29)); }
	inline float get_baselineOffset_29() const { return ___baselineOffset_29; }
	inline float* get_address_of_baselineOffset_29() { return &___baselineOffset_29; }
	inline void set_baselineOffset_29(float value)
	{
		___baselineOffset_29 = value;
	}

	inline static int32_t get_offset_of_lineOffset_30() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___lineOffset_30)); }
	inline float get_lineOffset_30() const { return ___lineOffset_30; }
	inline float* get_address_of_lineOffset_30() { return &___lineOffset_30; }
	inline void set_lineOffset_30(float value)
	{
		___lineOffset_30 = value;
	}

	inline static int32_t get_offset_of_isDrivenLineSpacing_31() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___isDrivenLineSpacing_31)); }
	inline bool get_isDrivenLineSpacing_31() const { return ___isDrivenLineSpacing_31; }
	inline bool* get_address_of_isDrivenLineSpacing_31() { return &___isDrivenLineSpacing_31; }
	inline void set_isDrivenLineSpacing_31(bool value)
	{
		___isDrivenLineSpacing_31 = value;
	}

	inline static int32_t get_offset_of_glyphHorizontalAdvanceAdjustment_32() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___glyphHorizontalAdvanceAdjustment_32)); }
	inline float get_glyphHorizontalAdvanceAdjustment_32() const { return ___glyphHorizontalAdvanceAdjustment_32; }
	inline float* get_address_of_glyphHorizontalAdvanceAdjustment_32() { return &___glyphHorizontalAdvanceAdjustment_32; }
	inline void set_glyphHorizontalAdvanceAdjustment_32(float value)
	{
		___glyphHorizontalAdvanceAdjustment_32 = value;
	}

	inline static int32_t get_offset_of_cSpace_33() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___cSpace_33)); }
	inline float get_cSpace_33() const { return ___cSpace_33; }
	inline float* get_address_of_cSpace_33() { return &___cSpace_33; }
	inline void set_cSpace_33(float value)
	{
		___cSpace_33 = value;
	}

	inline static int32_t get_offset_of_mSpace_34() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___mSpace_34)); }
	inline float get_mSpace_34() const { return ___mSpace_34; }
	inline float* get_address_of_mSpace_34() { return &___mSpace_34; }
	inline void set_mSpace_34(float value)
	{
		___mSpace_34 = value;
	}

	inline static int32_t get_offset_of_textInfo_35() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___textInfo_35)); }
	inline TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * get_textInfo_35() const { return ___textInfo_35; }
	inline TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 ** get_address_of_textInfo_35() { return &___textInfo_35; }
	inline void set_textInfo_35(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * value)
	{
		___textInfo_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textInfo_35), (void*)value);
	}

	inline static int32_t get_offset_of_lineInfo_36() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___lineInfo_36)); }
	inline TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7  get_lineInfo_36() const { return ___lineInfo_36; }
	inline TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7 * get_address_of_lineInfo_36() { return &___lineInfo_36; }
	inline void set_lineInfo_36(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7  value)
	{
		___lineInfo_36 = value;
	}

	inline static int32_t get_offset_of_vertexColor_37() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___vertexColor_37)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_vertexColor_37() const { return ___vertexColor_37; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_vertexColor_37() { return &___vertexColor_37; }
	inline void set_vertexColor_37(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___vertexColor_37 = value;
	}

	inline static int32_t get_offset_of_underlineColor_38() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___underlineColor_38)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_underlineColor_38() const { return ___underlineColor_38; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_underlineColor_38() { return &___underlineColor_38; }
	inline void set_underlineColor_38(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___underlineColor_38 = value;
	}

	inline static int32_t get_offset_of_strikethroughColor_39() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___strikethroughColor_39)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_strikethroughColor_39() const { return ___strikethroughColor_39; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_strikethroughColor_39() { return &___strikethroughColor_39; }
	inline void set_strikethroughColor_39(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___strikethroughColor_39 = value;
	}

	inline static int32_t get_offset_of_highlightColor_40() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___highlightColor_40)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_highlightColor_40() const { return ___highlightColor_40; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_highlightColor_40() { return &___highlightColor_40; }
	inline void set_highlightColor_40(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___highlightColor_40 = value;
	}

	inline static int32_t get_offset_of_basicStyleStack_41() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___basicStyleStack_41)); }
	inline TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  get_basicStyleStack_41() const { return ___basicStyleStack_41; }
	inline TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9 * get_address_of_basicStyleStack_41() { return &___basicStyleStack_41; }
	inline void set_basicStyleStack_41(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  value)
	{
		___basicStyleStack_41 = value;
	}

	inline static int32_t get_offset_of_italicAngleStack_42() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___italicAngleStack_42)); }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  get_italicAngleStack_42() const { return ___italicAngleStack_42; }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA * get_address_of_italicAngleStack_42() { return &___italicAngleStack_42; }
	inline void set_italicAngleStack_42(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  value)
	{
		___italicAngleStack_42 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___italicAngleStack_42))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorStack_43() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___colorStack_43)); }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  get_colorStack_43() const { return ___colorStack_43; }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D * get_address_of_colorStack_43() { return &___colorStack_43; }
	inline void set_colorStack_43(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  value)
	{
		___colorStack_43 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorStack_43))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_underlineColorStack_44() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___underlineColorStack_44)); }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  get_underlineColorStack_44() const { return ___underlineColorStack_44; }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D * get_address_of_underlineColorStack_44() { return &___underlineColorStack_44; }
	inline void set_underlineColorStack_44(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  value)
	{
		___underlineColorStack_44 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___underlineColorStack_44))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_strikethroughColorStack_45() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___strikethroughColorStack_45)); }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  get_strikethroughColorStack_45() const { return ___strikethroughColorStack_45; }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D * get_address_of_strikethroughColorStack_45() { return &___strikethroughColorStack_45; }
	inline void set_strikethroughColorStack_45(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  value)
	{
		___strikethroughColorStack_45 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___strikethroughColorStack_45))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_highlightColorStack_46() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___highlightColorStack_46)); }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  get_highlightColorStack_46() const { return ___highlightColorStack_46; }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D * get_address_of_highlightColorStack_46() { return &___highlightColorStack_46; }
	inline void set_highlightColorStack_46(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  value)
	{
		___highlightColorStack_46 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___highlightColorStack_46))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_highlightStateStack_47() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___highlightStateStack_47)); }
	inline TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E  get_highlightStateStack_47() const { return ___highlightStateStack_47; }
	inline TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E * get_address_of_highlightStateStack_47() { return &___highlightStateStack_47; }
	inline void set_highlightStateStack_47(TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E  value)
	{
		___highlightStateStack_47 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___highlightStateStack_47))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorGradientStack_48() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___colorGradientStack_48)); }
	inline TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804  get_colorGradientStack_48() const { return ___colorGradientStack_48; }
	inline TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804 * get_address_of_colorGradientStack_48() { return &___colorGradientStack_48; }
	inline void set_colorGradientStack_48(TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804  value)
	{
		___colorGradientStack_48 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorGradientStack_48))->___itemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorGradientStack_48))->___m_DefaultItem_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_sizeStack_49() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___sizeStack_49)); }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  get_sizeStack_49() const { return ___sizeStack_49; }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17 * get_address_of_sizeStack_49() { return &___sizeStack_49; }
	inline void set_sizeStack_49(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  value)
	{
		___sizeStack_49 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___sizeStack_49))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_indentStack_50() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___indentStack_50)); }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  get_indentStack_50() const { return ___indentStack_50; }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17 * get_address_of_indentStack_50() { return &___indentStack_50; }
	inline void set_indentStack_50(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  value)
	{
		___indentStack_50 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___indentStack_50))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_fontWeightStack_51() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___fontWeightStack_51)); }
	inline TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7  get_fontWeightStack_51() const { return ___fontWeightStack_51; }
	inline TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7 * get_address_of_fontWeightStack_51() { return &___fontWeightStack_51; }
	inline void set_fontWeightStack_51(TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7  value)
	{
		___fontWeightStack_51 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___fontWeightStack_51))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_styleStack_52() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___styleStack_52)); }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  get_styleStack_52() const { return ___styleStack_52; }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA * get_address_of_styleStack_52() { return &___styleStack_52; }
	inline void set_styleStack_52(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  value)
	{
		___styleStack_52 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___styleStack_52))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_baselineStack_53() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___baselineStack_53)); }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  get_baselineStack_53() const { return ___baselineStack_53; }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17 * get_address_of_baselineStack_53() { return &___baselineStack_53; }
	inline void set_baselineStack_53(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  value)
	{
		___baselineStack_53 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___baselineStack_53))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_actionStack_54() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___actionStack_54)); }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  get_actionStack_54() const { return ___actionStack_54; }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA * get_address_of_actionStack_54() { return &___actionStack_54; }
	inline void set_actionStack_54(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  value)
	{
		___actionStack_54 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___actionStack_54))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_materialReferenceStack_55() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___materialReferenceStack_55)); }
	inline TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3  get_materialReferenceStack_55() const { return ___materialReferenceStack_55; }
	inline TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3 * get_address_of_materialReferenceStack_55() { return &___materialReferenceStack_55; }
	inline void set_materialReferenceStack_55(TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3  value)
	{
		___materialReferenceStack_55 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___materialReferenceStack_55))->___itemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___materialReferenceStack_55))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___materialReferenceStack_55))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___materialReferenceStack_55))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___materialReferenceStack_55))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_lineJustificationStack_56() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___lineJustificationStack_56)); }
	inline TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B  get_lineJustificationStack_56() const { return ___lineJustificationStack_56; }
	inline TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B * get_address_of_lineJustificationStack_56() { return &___lineJustificationStack_56; }
	inline void set_lineJustificationStack_56(TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B  value)
	{
		___lineJustificationStack_56 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___lineJustificationStack_56))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_spriteAnimationID_57() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___spriteAnimationID_57)); }
	inline int32_t get_spriteAnimationID_57() const { return ___spriteAnimationID_57; }
	inline int32_t* get_address_of_spriteAnimationID_57() { return &___spriteAnimationID_57; }
	inline void set_spriteAnimationID_57(int32_t value)
	{
		___spriteAnimationID_57 = value;
	}

	inline static int32_t get_offset_of_currentFontAsset_58() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___currentFontAsset_58)); }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * get_currentFontAsset_58() const { return ___currentFontAsset_58; }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 ** get_address_of_currentFontAsset_58() { return &___currentFontAsset_58; }
	inline void set_currentFontAsset_58(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * value)
	{
		___currentFontAsset_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentFontAsset_58), (void*)value);
	}

	inline static int32_t get_offset_of_currentSpriteAsset_59() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___currentSpriteAsset_59)); }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * get_currentSpriteAsset_59() const { return ___currentSpriteAsset_59; }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 ** get_address_of_currentSpriteAsset_59() { return &___currentSpriteAsset_59; }
	inline void set_currentSpriteAsset_59(TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * value)
	{
		___currentSpriteAsset_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentSpriteAsset_59), (void*)value);
	}

	inline static int32_t get_offset_of_currentMaterial_60() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___currentMaterial_60)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_currentMaterial_60() const { return ___currentMaterial_60; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_currentMaterial_60() { return &___currentMaterial_60; }
	inline void set_currentMaterial_60(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___currentMaterial_60 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentMaterial_60), (void*)value);
	}

	inline static int32_t get_offset_of_currentMaterialIndex_61() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___currentMaterialIndex_61)); }
	inline int32_t get_currentMaterialIndex_61() const { return ___currentMaterialIndex_61; }
	inline int32_t* get_address_of_currentMaterialIndex_61() { return &___currentMaterialIndex_61; }
	inline void set_currentMaterialIndex_61(int32_t value)
	{
		___currentMaterialIndex_61 = value;
	}

	inline static int32_t get_offset_of_meshExtents_62() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___meshExtents_62)); }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  get_meshExtents_62() const { return ___meshExtents_62; }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA * get_address_of_meshExtents_62() { return &___meshExtents_62; }
	inline void set_meshExtents_62(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  value)
	{
		___meshExtents_62 = value;
	}

	inline static int32_t get_offset_of_tagNoParsing_63() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___tagNoParsing_63)); }
	inline bool get_tagNoParsing_63() const { return ___tagNoParsing_63; }
	inline bool* get_address_of_tagNoParsing_63() { return &___tagNoParsing_63; }
	inline void set_tagNoParsing_63(bool value)
	{
		___tagNoParsing_63 = value;
	}

	inline static int32_t get_offset_of_isNonBreakingSpace_64() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___isNonBreakingSpace_64)); }
	inline bool get_isNonBreakingSpace_64() const { return ___isNonBreakingSpace_64; }
	inline bool* get_address_of_isNonBreakingSpace_64() { return &___isNonBreakingSpace_64; }
	inline void set_isNonBreakingSpace_64(bool value)
	{
		___isNonBreakingSpace_64 = value;
	}
};

// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * ___textInfo_35;
	TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7  ___lineInfo_36;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___vertexColor_37;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___underlineColor_38;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___strikethroughColor_39;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___highlightColor_40;
	TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___colorStack_43;
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E  ___highlightStateStack_47;
	TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804  ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___sizeStack_49;
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___indentStack_50;
	TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7  ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___styleStack_52;
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___baselineStack_53;
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___actionStack_54;
	TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3  ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B  ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___currentFontAsset_58;
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___currentSpriteAsset_59;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * ___textInfo_35;
	TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7  ___lineInfo_36;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___vertexColor_37;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___underlineColor_38;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___strikethroughColor_39;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___highlightColor_40;
	TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___colorStack_43;
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E  ___highlightStateStack_47;
	TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804  ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___sizeStack_49;
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___indentStack_50;
	TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7  ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___styleStack_52;
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___baselineStack_53;
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___actionStack_54;
	TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3  ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B  ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___currentFontAsset_58;
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___currentSpriteAsset_59;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// Microsoft.MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem/AccessibilityProvider
struct AccessibilityProvider_tB927231E25CC81A175ED2DF8538BE30F986C830F  : public Provider_t1B885BF706B62D27FB206A6C1631D2D5699CB596
{
public:
	// Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemConfig Microsoft.MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem/AccessibilityProvider::<Config>k__BackingField
	AccessibilitySubsystemConfig_tA71A24B93F43AAD4BD12AA1FB4116F1EB4B4BA3B * ___U3CConfigU3Ek__BackingField_1;
	// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Accessibility.AccessibleObjectClassification,System.Collections.Generic.List`1<UnityEngine.GameObject>> Microsoft.MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem/AccessibilityProvider::accessibleObjects
	Dictionary_2_tAB54087C57C52C41006918B526AE3953D1779243 * ___accessibleObjects_2;
	// System.Boolean Microsoft.MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem/AccessibilityProvider::invertTextColor
	bool ___invertTextColor_3;
	// System.Action`1<System.Boolean> Microsoft.MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem/AccessibilityProvider::InvertTextColorChanged
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___InvertTextColorChanged_4;

public:
	inline static int32_t get_offset_of_U3CConfigU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AccessibilityProvider_tB927231E25CC81A175ED2DF8538BE30F986C830F, ___U3CConfigU3Ek__BackingField_1)); }
	inline AccessibilitySubsystemConfig_tA71A24B93F43AAD4BD12AA1FB4116F1EB4B4BA3B * get_U3CConfigU3Ek__BackingField_1() const { return ___U3CConfigU3Ek__BackingField_1; }
	inline AccessibilitySubsystemConfig_tA71A24B93F43AAD4BD12AA1FB4116F1EB4B4BA3B ** get_address_of_U3CConfigU3Ek__BackingField_1() { return &___U3CConfigU3Ek__BackingField_1; }
	inline void set_U3CConfigU3Ek__BackingField_1(AccessibilitySubsystemConfig_tA71A24B93F43AAD4BD12AA1FB4116F1EB4B4BA3B * value)
	{
		___U3CConfigU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CConfigU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_accessibleObjects_2() { return static_cast<int32_t>(offsetof(AccessibilityProvider_tB927231E25CC81A175ED2DF8538BE30F986C830F, ___accessibleObjects_2)); }
	inline Dictionary_2_tAB54087C57C52C41006918B526AE3953D1779243 * get_accessibleObjects_2() const { return ___accessibleObjects_2; }
	inline Dictionary_2_tAB54087C57C52C41006918B526AE3953D1779243 ** get_address_of_accessibleObjects_2() { return &___accessibleObjects_2; }
	inline void set_accessibleObjects_2(Dictionary_2_tAB54087C57C52C41006918B526AE3953D1779243 * value)
	{
		___accessibleObjects_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___accessibleObjects_2), (void*)value);
	}

	inline static int32_t get_offset_of_invertTextColor_3() { return static_cast<int32_t>(offsetof(AccessibilityProvider_tB927231E25CC81A175ED2DF8538BE30F986C830F, ___invertTextColor_3)); }
	inline bool get_invertTextColor_3() const { return ___invertTextColor_3; }
	inline bool* get_address_of_invertTextColor_3() { return &___invertTextColor_3; }
	inline void set_invertTextColor_3(bool value)
	{
		___invertTextColor_3 = value;
	}

	inline static int32_t get_offset_of_InvertTextColorChanged_4() { return static_cast<int32_t>(offsetof(AccessibilityProvider_tB927231E25CC81A175ED2DF8538BE30F986C830F, ___InvertTextColorChanged_4)); }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * get_InvertTextColorChanged_4() const { return ___InvertTextColorChanged_4; }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 ** get_address_of_InvertTextColorChanged_4() { return &___InvertTextColorChanged_4; }
	inline void set_InvertTextColorChanged_4(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * value)
	{
		___InvertTextColorChanged_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InvertTextColorChanged_4), (void*)value);
	}
};


// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t4B20066E10D8FF621FB20C05F21B22167C90F548* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7, ___itemStack_0)); }
	inline WordWrapStateU5BU5D_t4B20066E10D8FF621FB20C05F21B22167C90F548* get_itemStack_0() const { return ___itemStack_0; }
	inline WordWrapStateU5BU5D_t4B20066E10D8FF621FB20C05F21B22167C90F548** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(WordWrapStateU5BU5D_t4B20066E10D8FF621FB20C05F21B22167C90F548* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7, ___m_DefaultItem_2)); }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99 * get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  value)
	{
		___m_DefaultItem_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___textInfo_35), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___italicAngleStack_42))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___colorStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___underlineColorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___strikethroughColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___highlightColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___highlightStateStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___colorGradientStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___colorGradientStack_48))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___sizeStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___indentStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___fontWeightStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___styleStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___baselineStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___actionStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___materialReferenceStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_DefaultItem_2))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_DefaultItem_2))->___materialReferenceStack_55))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_DefaultItem_2))->___materialReferenceStack_55))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_DefaultItem_2))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___lineJustificationStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___currentFontAsset_58), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___currentSpriteAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___currentMaterial_60), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemConfig
struct AccessibilitySubsystemConfig_tA71A24B93F43AAD4BD12AA1FB4116F1EB4B4BA3B  : public BaseSubsystemConfig_t6A872EC7E317759CA469B4184C04599CB5520E09
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemConfig::invertTextColor
	bool ___invertTextColor_4;

public:
	inline static int32_t get_offset_of_invertTextColor_4() { return static_cast<int32_t>(offsetof(AccessibilitySubsystemConfig_tA71A24B93F43AAD4BD12AA1FB4116F1EB4B4BA3B, ___invertTextColor_4)); }
	inline bool get_invertTextColor_4() const { return ___invertTextColor_4; }
	inline bool* get_address_of_invertTextColor_4() { return &___invertTextColor_4; }
	inline void set_invertTextColor_4(bool value)
	{
		___invertTextColor_4 = value;
	}
};


// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem
struct MRTKAccessibilitySubsystem_t41A3DE7F8F47C58ACC35F7B3790B4F3B6950B9BF  : public AccessibilitySubsystem_t87660EFBF1E770B16033F7AD38AB76370B50895B
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Accessibility.AccessibleObject
struct AccessibleObject_t4E0F38F72E0B6F31139051C90869ABEB9E64224A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Microsoft.MixedReality.Toolkit.Accessibility.AccessibleObjectClassification Microsoft.MixedReality.Toolkit.Accessibility.AccessibleObject::classification
	AccessibleObjectClassification_t5FAEC0486A9F61EBBF0F6D7E189FE35B0C9EA5E2 * ___classification_4;
	// System.String Microsoft.MixedReality.Toolkit.Accessibility.AccessibleObject::contents
	String_t* ___contents_5;
	// System.String Microsoft.MixedReality.Toolkit.Accessibility.AccessibleObject::contentSummary
	String_t* ___contentSummary_6;
	// System.String Microsoft.MixedReality.Toolkit.Accessibility.AccessibleObject::description
	String_t* ___description_7;
	// System.String Microsoft.MixedReality.Toolkit.Accessibility.AccessibleObject::instructions
	String_t* ___instructions_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.Accessibility.AccessibleObject::isContextuallyRelevant
	bool ___isContextuallyRelevant_9;
	// Microsoft.MixedReality.Toolkit.Accessibility.ObjectRole Microsoft.MixedReality.Toolkit.Accessibility.AccessibleObject::role
	ObjectRole_t3AE1A8C919DCC4DA799FC8384919434DF43997E8 * ___role_10;
	// System.String Microsoft.MixedReality.Toolkit.Accessibility.AccessibleObject::semantic
	String_t* ___semantic_11;

public:
	inline static int32_t get_offset_of_classification_4() { return static_cast<int32_t>(offsetof(AccessibleObject_t4E0F38F72E0B6F31139051C90869ABEB9E64224A, ___classification_4)); }
	inline AccessibleObjectClassification_t5FAEC0486A9F61EBBF0F6D7E189FE35B0C9EA5E2 * get_classification_4() const { return ___classification_4; }
	inline AccessibleObjectClassification_t5FAEC0486A9F61EBBF0F6D7E189FE35B0C9EA5E2 ** get_address_of_classification_4() { return &___classification_4; }
	inline void set_classification_4(AccessibleObjectClassification_t5FAEC0486A9F61EBBF0F6D7E189FE35B0C9EA5E2 * value)
	{
		___classification_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___classification_4), (void*)value);
	}

	inline static int32_t get_offset_of_contents_5() { return static_cast<int32_t>(offsetof(AccessibleObject_t4E0F38F72E0B6F31139051C90869ABEB9E64224A, ___contents_5)); }
	inline String_t* get_contents_5() const { return ___contents_5; }
	inline String_t** get_address_of_contents_5() { return &___contents_5; }
	inline void set_contents_5(String_t* value)
	{
		___contents_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___contents_5), (void*)value);
	}

	inline static int32_t get_offset_of_contentSummary_6() { return static_cast<int32_t>(offsetof(AccessibleObject_t4E0F38F72E0B6F31139051C90869ABEB9E64224A, ___contentSummary_6)); }
	inline String_t* get_contentSummary_6() const { return ___contentSummary_6; }
	inline String_t** get_address_of_contentSummary_6() { return &___contentSummary_6; }
	inline void set_contentSummary_6(String_t* value)
	{
		___contentSummary_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___contentSummary_6), (void*)value);
	}

	inline static int32_t get_offset_of_description_7() { return static_cast<int32_t>(offsetof(AccessibleObject_t4E0F38F72E0B6F31139051C90869ABEB9E64224A, ___description_7)); }
	inline String_t* get_description_7() const { return ___description_7; }
	inline String_t** get_address_of_description_7() { return &___description_7; }
	inline void set_description_7(String_t* value)
	{
		___description_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___description_7), (void*)value);
	}

	inline static int32_t get_offset_of_instructions_8() { return static_cast<int32_t>(offsetof(AccessibleObject_t4E0F38F72E0B6F31139051C90869ABEB9E64224A, ___instructions_8)); }
	inline String_t* get_instructions_8() const { return ___instructions_8; }
	inline String_t** get_address_of_instructions_8() { return &___instructions_8; }
	inline void set_instructions_8(String_t* value)
	{
		___instructions_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instructions_8), (void*)value);
	}

	inline static int32_t get_offset_of_isContextuallyRelevant_9() { return static_cast<int32_t>(offsetof(AccessibleObject_t4E0F38F72E0B6F31139051C90869ABEB9E64224A, ___isContextuallyRelevant_9)); }
	inline bool get_isContextuallyRelevant_9() const { return ___isContextuallyRelevant_9; }
	inline bool* get_address_of_isContextuallyRelevant_9() { return &___isContextuallyRelevant_9; }
	inline void set_isContextuallyRelevant_9(bool value)
	{
		___isContextuallyRelevant_9 = value;
	}

	inline static int32_t get_offset_of_role_10() { return static_cast<int32_t>(offsetof(AccessibleObject_t4E0F38F72E0B6F31139051C90869ABEB9E64224A, ___role_10)); }
	inline ObjectRole_t3AE1A8C919DCC4DA799FC8384919434DF43997E8 * get_role_10() const { return ___role_10; }
	inline ObjectRole_t3AE1A8C919DCC4DA799FC8384919434DF43997E8 ** get_address_of_role_10() { return &___role_10; }
	inline void set_role_10(ObjectRole_t3AE1A8C919DCC4DA799FC8384919434DF43997E8 * value)
	{
		___role_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___role_10), (void*)value);
	}

	inline static int32_t get_offset_of_semantic_11() { return static_cast<int32_t>(offsetof(AccessibleObject_t4E0F38F72E0B6F31139051C90869ABEB9E64224A, ___semantic_11)); }
	inline String_t* get_semantic_11() const { return ___semantic_11; }
	inline String_t** get_address_of_semantic_11() { return &___semantic_11; }
	inline void set_semantic_11(String_t* value)
	{
		___semantic_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___semantic_11), (void*)value);
	}
};

struct AccessibleObject_t4E0F38F72E0B6F31139051C90869ABEB9E64224A_StaticFields
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Accessibility.AccessibleObject::suppressSubsystemNotFound
	bool ___suppressSubsystemNotFound_12;

public:
	inline static int32_t get_offset_of_suppressSubsystemNotFound_12() { return static_cast<int32_t>(offsetof(AccessibleObject_t4E0F38F72E0B6F31139051C90869ABEB9E64224A_StaticFields, ___suppressSubsystemNotFound_12)); }
	inline bool get_suppressSubsystemNotFound_12() const { return ___suppressSubsystemNotFound_12; }
	inline bool* get_address_of_suppressSubsystemNotFound_12() { return &___suppressSubsystemNotFound_12; }
	inline void set_suppressSubsystemNotFound_12(bool value)
	{
		___suppressSubsystemNotFound_12 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Accessibility.TextAccessibility
struct TextAccessibility_t903FCF08C24E1F72018F27355BA6B1C86F0D2AD5  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem Microsoft.MixedReality.Toolkit.Accessibility.TextAccessibility::accessibilitySubsystem
	AccessibilitySubsystem_t87660EFBF1E770B16033F7AD38AB76370B50895B * ___accessibilitySubsystem_4;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Accessibility.TextAccessibility::material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_5;

public:
	inline static int32_t get_offset_of_accessibilitySubsystem_4() { return static_cast<int32_t>(offsetof(TextAccessibility_t903FCF08C24E1F72018F27355BA6B1C86F0D2AD5, ___accessibilitySubsystem_4)); }
	inline AccessibilitySubsystem_t87660EFBF1E770B16033F7AD38AB76370B50895B * get_accessibilitySubsystem_4() const { return ___accessibilitySubsystem_4; }
	inline AccessibilitySubsystem_t87660EFBF1E770B16033F7AD38AB76370B50895B ** get_address_of_accessibilitySubsystem_4() { return &___accessibilitySubsystem_4; }
	inline void set_accessibilitySubsystem_4(AccessibilitySubsystem_t87660EFBF1E770B16033F7AD38AB76370B50895B * value)
	{
		___accessibilitySubsystem_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___accessibilitySubsystem_4), (void*)value);
	}

	inline static int32_t get_offset_of_material_5() { return static_cast<int32_t>(offsetof(TextAccessibility_t903FCF08C24E1F72018F27355BA6B1C86F0D2AD5, ___material_5)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_material_5() const { return ___material_5; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_material_5() { return &___material_5; }
	inline void set_material_5(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___material_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___material_5), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
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


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
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


// TMPro.TMP_Text
struct TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_36;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_37;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_38;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_39;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___m_fontAsset_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___m_currentFontAsset_41;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_42;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_sharedMaterial_43;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_currentMaterial_44;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_48;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* ___m_fontSharedMaterials_49;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_fontMaterial_50;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* ___m_fontMaterials_51;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_52;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_fontColor32_53;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_fontColor_54;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_underlineColor_56;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_strikethroughColor_57;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_58;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_59;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D  ___m_fontColorGradient_60;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * ___m_fontColorGradientPreset_61;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___m_spriteAsset_62;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_63;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_64;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_spriteColor_65;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t8E2FC777D06D295BE700B8EDE56389D3581BA94E * ___m_StyleSheet_66;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_t078D8A76F4A60B868298420272B7089582EF53AB * ___m_TextStyle_67;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_68;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_69;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_faceColor_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_outlineColor_71;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_72;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_73;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_74;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_75;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___m_sizeStack_76;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_78;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7  ___m_FontWeightStack_79;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_80;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_81;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_82;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_84;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_85;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_87;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_89;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  ___m_fontStyleStack_90;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_91;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_92;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_93;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_94;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_95;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B  ___m_lineJustificationStack_96;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_textContainerLocalCorners_97;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_98;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_99;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_100;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_101;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_103;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_104;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_105;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_106;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_107;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_108;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_109;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_110;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_111;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_112;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_113;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_114;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_115;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_116;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * ___m_linkedTextComponent_117;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * ___parentLinkedComponent_118;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_119;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_120;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_121;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_122;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_123;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_124;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_125;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_126;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_127;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_128;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_129;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_130;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_131;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_133;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_134;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_135;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_136;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_137;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_138;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_139;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_142;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_143;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_144;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_145;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_margin_146;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_147;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_148;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_149;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_150;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_151;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * ___m_textInfo_152;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_153;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_154;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_transform_155;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_rectTransform_156;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_PreviousRectTransformSize_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_PreviousPivotPosition_158;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_159;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_160;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_mesh_161;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_162;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_t170B3E821B49B45FA7134A2CF48A2E64CA371D42 * ___OnPreRenderText_165;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t07C769A1F1F85B545DD32357826E08F569E3D902 * ___m_spriteAnimator_166;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_167;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_168;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_169;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_170;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_171;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_172;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tE514951184806899FE23EC4FA6112A5F2038CECF * ___m_LayoutElement_173;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_174;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_175;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_176;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_177;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_178;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_179;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_180;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_181;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_182;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_183;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_184;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_185;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_186;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_190;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_191;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___m_indentStack_192;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_193;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_194;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___m_FXMatrix_195;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_196;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_tB233FC88865130D0B1EA18DA685C2AF41FB134F7* ___m_TextProcessingArray_197;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_198;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970* ___m_internalCharacterInfo_199;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_200;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_207;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_208;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_212;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_213;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_214;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_215;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_216;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_217;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_218;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_219;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_220;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_221;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_223;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_224;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  ___m_meshExtents_225;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_htmlColor_226;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___m_colorStack_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___m_underlineColorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___m_strikethroughColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E  ___m_HighlightStateStack_230;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * ___m_colorGradientPreset_231;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804  ___m_colorGradientStack_232;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_233;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_234;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_235;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t1E4BEAC3D61A2AD0284E919166D0F38D21540A37* ___m_TextStyleStacks_236;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_237;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___m_ItalicAngleStack_238;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_239;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___m_actionStack_240;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_241;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_242;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___m_baselineOffsetStack_243;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_244;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_245;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832 * ___m_cached_TextElement_246;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F  ___m_Ellipsis_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F  ___m_Underline_248;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___m_defaultSpriteAsset_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___m_currentSpriteAsset_250;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_251;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_252;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_253;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_256;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t50AA56C265D2A3DB961E3DD200165FE78270562B  ___m_TextBackingArray_257;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_tAA3302A4A6ACCE77638A2346993A0FAAE2F9FDBA* ___k_Power_258;

public:
	inline static int32_t get_offset_of_m_text_36() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_text_36)); }
	inline String_t* get_m_text_36() const { return ___m_text_36; }
	inline String_t** get_address_of_m_text_36() { return &___m_text_36; }
	inline void set_m_text_36(String_t* value)
	{
		___m_text_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_text_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_IsTextBackingStringDirty_37() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_IsTextBackingStringDirty_37)); }
	inline bool get_m_IsTextBackingStringDirty_37() const { return ___m_IsTextBackingStringDirty_37; }
	inline bool* get_address_of_m_IsTextBackingStringDirty_37() { return &___m_IsTextBackingStringDirty_37; }
	inline void set_m_IsTextBackingStringDirty_37(bool value)
	{
		___m_IsTextBackingStringDirty_37 = value;
	}

	inline static int32_t get_offset_of_m_TextPreprocessor_38() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_TextPreprocessor_38)); }
	inline RuntimeObject* get_m_TextPreprocessor_38() const { return ___m_TextPreprocessor_38; }
	inline RuntimeObject** get_address_of_m_TextPreprocessor_38() { return &___m_TextPreprocessor_38; }
	inline void set_m_TextPreprocessor_38(RuntimeObject* value)
	{
		___m_TextPreprocessor_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextPreprocessor_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_isRightToLeft_39() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isRightToLeft_39)); }
	inline bool get_m_isRightToLeft_39() const { return ___m_isRightToLeft_39; }
	inline bool* get_address_of_m_isRightToLeft_39() { return &___m_isRightToLeft_39; }
	inline void set_m_isRightToLeft_39(bool value)
	{
		___m_isRightToLeft_39 = value;
	}

	inline static int32_t get_offset_of_m_fontAsset_40() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontAsset_40)); }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * get_m_fontAsset_40() const { return ___m_fontAsset_40; }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 ** get_address_of_m_fontAsset_40() { return &___m_fontAsset_40; }
	inline void set_m_fontAsset_40(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * value)
	{
		___m_fontAsset_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontAsset_40), (void*)value);
	}

	inline static int32_t get_offset_of_m_currentFontAsset_41() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_currentFontAsset_41)); }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * get_m_currentFontAsset_41() const { return ___m_currentFontAsset_41; }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 ** get_address_of_m_currentFontAsset_41() { return &___m_currentFontAsset_41; }
	inline void set_m_currentFontAsset_41(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * value)
	{
		___m_currentFontAsset_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_currentFontAsset_41), (void*)value);
	}

	inline static int32_t get_offset_of_m_isSDFShader_42() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isSDFShader_42)); }
	inline bool get_m_isSDFShader_42() const { return ___m_isSDFShader_42; }
	inline bool* get_address_of_m_isSDFShader_42() { return &___m_isSDFShader_42; }
	inline void set_m_isSDFShader_42(bool value)
	{
		___m_isSDFShader_42 = value;
	}

	inline static int32_t get_offset_of_m_sharedMaterial_43() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_sharedMaterial_43)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_sharedMaterial_43() const { return ___m_sharedMaterial_43; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_sharedMaterial_43() { return &___m_sharedMaterial_43; }
	inline void set_m_sharedMaterial_43(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_sharedMaterial_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_sharedMaterial_43), (void*)value);
	}

	inline static int32_t get_offset_of_m_currentMaterial_44() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_currentMaterial_44)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_currentMaterial_44() const { return ___m_currentMaterial_44; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_currentMaterial_44() { return &___m_currentMaterial_44; }
	inline void set_m_currentMaterial_44(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_currentMaterial_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_currentMaterial_44), (void*)value);
	}

	inline static int32_t get_offset_of_m_currentMaterialIndex_48() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_currentMaterialIndex_48)); }
	inline int32_t get_m_currentMaterialIndex_48() const { return ___m_currentMaterialIndex_48; }
	inline int32_t* get_address_of_m_currentMaterialIndex_48() { return &___m_currentMaterialIndex_48; }
	inline void set_m_currentMaterialIndex_48(int32_t value)
	{
		___m_currentMaterialIndex_48 = value;
	}

	inline static int32_t get_offset_of_m_fontSharedMaterials_49() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontSharedMaterials_49)); }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* get_m_fontSharedMaterials_49() const { return ___m_fontSharedMaterials_49; }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492** get_address_of_m_fontSharedMaterials_49() { return &___m_fontSharedMaterials_49; }
	inline void set_m_fontSharedMaterials_49(MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* value)
	{
		___m_fontSharedMaterials_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontSharedMaterials_49), (void*)value);
	}

	inline static int32_t get_offset_of_m_fontMaterial_50() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontMaterial_50)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_fontMaterial_50() const { return ___m_fontMaterial_50; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_fontMaterial_50() { return &___m_fontMaterial_50; }
	inline void set_m_fontMaterial_50(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_fontMaterial_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontMaterial_50), (void*)value);
	}

	inline static int32_t get_offset_of_m_fontMaterials_51() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontMaterials_51)); }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* get_m_fontMaterials_51() const { return ___m_fontMaterials_51; }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492** get_address_of_m_fontMaterials_51() { return &___m_fontMaterials_51; }
	inline void set_m_fontMaterials_51(MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* value)
	{
		___m_fontMaterials_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontMaterials_51), (void*)value);
	}

	inline static int32_t get_offset_of_m_isMaterialDirty_52() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isMaterialDirty_52)); }
	inline bool get_m_isMaterialDirty_52() const { return ___m_isMaterialDirty_52; }
	inline bool* get_address_of_m_isMaterialDirty_52() { return &___m_isMaterialDirty_52; }
	inline void set_m_isMaterialDirty_52(bool value)
	{
		___m_isMaterialDirty_52 = value;
	}

	inline static int32_t get_offset_of_m_fontColor32_53() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontColor32_53)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_fontColor32_53() const { return ___m_fontColor32_53; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_fontColor32_53() { return &___m_fontColor32_53; }
	inline void set_m_fontColor32_53(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_fontColor32_53 = value;
	}

	inline static int32_t get_offset_of_m_fontColor_54() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontColor_54)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_fontColor_54() const { return ___m_fontColor_54; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_fontColor_54() { return &___m_fontColor_54; }
	inline void set_m_fontColor_54(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_fontColor_54 = value;
	}

	inline static int32_t get_offset_of_m_underlineColor_56() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_underlineColor_56)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_underlineColor_56() const { return ___m_underlineColor_56; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_underlineColor_56() { return &___m_underlineColor_56; }
	inline void set_m_underlineColor_56(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_underlineColor_56 = value;
	}

	inline static int32_t get_offset_of_m_strikethroughColor_57() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_strikethroughColor_57)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_strikethroughColor_57() const { return ___m_strikethroughColor_57; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_strikethroughColor_57() { return &___m_strikethroughColor_57; }
	inline void set_m_strikethroughColor_57(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_strikethroughColor_57 = value;
	}

	inline static int32_t get_offset_of_m_enableVertexGradient_58() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_enableVertexGradient_58)); }
	inline bool get_m_enableVertexGradient_58() const { return ___m_enableVertexGradient_58; }
	inline bool* get_address_of_m_enableVertexGradient_58() { return &___m_enableVertexGradient_58; }
	inline void set_m_enableVertexGradient_58(bool value)
	{
		___m_enableVertexGradient_58 = value;
	}

	inline static int32_t get_offset_of_m_colorMode_59() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_colorMode_59)); }
	inline int32_t get_m_colorMode_59() const { return ___m_colorMode_59; }
	inline int32_t* get_address_of_m_colorMode_59() { return &___m_colorMode_59; }
	inline void set_m_colorMode_59(int32_t value)
	{
		___m_colorMode_59 = value;
	}

	inline static int32_t get_offset_of_m_fontColorGradient_60() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontColorGradient_60)); }
	inline VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D  get_m_fontColorGradient_60() const { return ___m_fontColorGradient_60; }
	inline VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D * get_address_of_m_fontColorGradient_60() { return &___m_fontColorGradient_60; }
	inline void set_m_fontColorGradient_60(VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D  value)
	{
		___m_fontColorGradient_60 = value;
	}

	inline static int32_t get_offset_of_m_fontColorGradientPreset_61() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontColorGradientPreset_61)); }
	inline TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * get_m_fontColorGradientPreset_61() const { return ___m_fontColorGradientPreset_61; }
	inline TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 ** get_address_of_m_fontColorGradientPreset_61() { return &___m_fontColorGradientPreset_61; }
	inline void set_m_fontColorGradientPreset_61(TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * value)
	{
		___m_fontColorGradientPreset_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontColorGradientPreset_61), (void*)value);
	}

	inline static int32_t get_offset_of_m_spriteAsset_62() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_spriteAsset_62)); }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * get_m_spriteAsset_62() const { return ___m_spriteAsset_62; }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 ** get_address_of_m_spriteAsset_62() { return &___m_spriteAsset_62; }
	inline void set_m_spriteAsset_62(TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * value)
	{
		___m_spriteAsset_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_spriteAsset_62), (void*)value);
	}

	inline static int32_t get_offset_of_m_tintAllSprites_63() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_tintAllSprites_63)); }
	inline bool get_m_tintAllSprites_63() const { return ___m_tintAllSprites_63; }
	inline bool* get_address_of_m_tintAllSprites_63() { return &___m_tintAllSprites_63; }
	inline void set_m_tintAllSprites_63(bool value)
	{
		___m_tintAllSprites_63 = value;
	}

	inline static int32_t get_offset_of_m_tintSprite_64() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_tintSprite_64)); }
	inline bool get_m_tintSprite_64() const { return ___m_tintSprite_64; }
	inline bool* get_address_of_m_tintSprite_64() { return &___m_tintSprite_64; }
	inline void set_m_tintSprite_64(bool value)
	{
		___m_tintSprite_64 = value;
	}

	inline static int32_t get_offset_of_m_spriteColor_65() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_spriteColor_65)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_spriteColor_65() const { return ___m_spriteColor_65; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_spriteColor_65() { return &___m_spriteColor_65; }
	inline void set_m_spriteColor_65(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_spriteColor_65 = value;
	}

	inline static int32_t get_offset_of_m_StyleSheet_66() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_StyleSheet_66)); }
	inline TMP_StyleSheet_t8E2FC777D06D295BE700B8EDE56389D3581BA94E * get_m_StyleSheet_66() const { return ___m_StyleSheet_66; }
	inline TMP_StyleSheet_t8E2FC777D06D295BE700B8EDE56389D3581BA94E ** get_address_of_m_StyleSheet_66() { return &___m_StyleSheet_66; }
	inline void set_m_StyleSheet_66(TMP_StyleSheet_t8E2FC777D06D295BE700B8EDE56389D3581BA94E * value)
	{
		___m_StyleSheet_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StyleSheet_66), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextStyle_67() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_TextStyle_67)); }
	inline TMP_Style_t078D8A76F4A60B868298420272B7089582EF53AB * get_m_TextStyle_67() const { return ___m_TextStyle_67; }
	inline TMP_Style_t078D8A76F4A60B868298420272B7089582EF53AB ** get_address_of_m_TextStyle_67() { return &___m_TextStyle_67; }
	inline void set_m_TextStyle_67(TMP_Style_t078D8A76F4A60B868298420272B7089582EF53AB * value)
	{
		___m_TextStyle_67 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextStyle_67), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextStyleHashCode_68() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_TextStyleHashCode_68)); }
	inline int32_t get_m_TextStyleHashCode_68() const { return ___m_TextStyleHashCode_68; }
	inline int32_t* get_address_of_m_TextStyleHashCode_68() { return &___m_TextStyleHashCode_68; }
	inline void set_m_TextStyleHashCode_68(int32_t value)
	{
		___m_TextStyleHashCode_68 = value;
	}

	inline static int32_t get_offset_of_m_overrideHtmlColors_69() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_overrideHtmlColors_69)); }
	inline bool get_m_overrideHtmlColors_69() const { return ___m_overrideHtmlColors_69; }
	inline bool* get_address_of_m_overrideHtmlColors_69() { return &___m_overrideHtmlColors_69; }
	inline void set_m_overrideHtmlColors_69(bool value)
	{
		___m_overrideHtmlColors_69 = value;
	}

	inline static int32_t get_offset_of_m_faceColor_70() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_faceColor_70)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_faceColor_70() const { return ___m_faceColor_70; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_faceColor_70() { return &___m_faceColor_70; }
	inline void set_m_faceColor_70(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_faceColor_70 = value;
	}

	inline static int32_t get_offset_of_m_outlineColor_71() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_outlineColor_71)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_outlineColor_71() const { return ___m_outlineColor_71; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_outlineColor_71() { return &___m_outlineColor_71; }
	inline void set_m_outlineColor_71(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_outlineColor_71 = value;
	}

	inline static int32_t get_offset_of_m_outlineWidth_72() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_outlineWidth_72)); }
	inline float get_m_outlineWidth_72() const { return ___m_outlineWidth_72; }
	inline float* get_address_of_m_outlineWidth_72() { return &___m_outlineWidth_72; }
	inline void set_m_outlineWidth_72(float value)
	{
		___m_outlineWidth_72 = value;
	}

	inline static int32_t get_offset_of_m_fontSize_73() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontSize_73)); }
	inline float get_m_fontSize_73() const { return ___m_fontSize_73; }
	inline float* get_address_of_m_fontSize_73() { return &___m_fontSize_73; }
	inline void set_m_fontSize_73(float value)
	{
		___m_fontSize_73 = value;
	}

	inline static int32_t get_offset_of_m_currentFontSize_74() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_currentFontSize_74)); }
	inline float get_m_currentFontSize_74() const { return ___m_currentFontSize_74; }
	inline float* get_address_of_m_currentFontSize_74() { return &___m_currentFontSize_74; }
	inline void set_m_currentFontSize_74(float value)
	{
		___m_currentFontSize_74 = value;
	}

	inline static int32_t get_offset_of_m_fontSizeBase_75() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontSizeBase_75)); }
	inline float get_m_fontSizeBase_75() const { return ___m_fontSizeBase_75; }
	inline float* get_address_of_m_fontSizeBase_75() { return &___m_fontSizeBase_75; }
	inline void set_m_fontSizeBase_75(float value)
	{
		___m_fontSizeBase_75 = value;
	}

	inline static int32_t get_offset_of_m_sizeStack_76() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_sizeStack_76)); }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  get_m_sizeStack_76() const { return ___m_sizeStack_76; }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17 * get_address_of_m_sizeStack_76() { return &___m_sizeStack_76; }
	inline void set_m_sizeStack_76(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  value)
	{
		___m_sizeStack_76 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_sizeStack_76))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_fontWeight_77() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontWeight_77)); }
	inline int32_t get_m_fontWeight_77() const { return ___m_fontWeight_77; }
	inline int32_t* get_address_of_m_fontWeight_77() { return &___m_fontWeight_77; }
	inline void set_m_fontWeight_77(int32_t value)
	{
		___m_fontWeight_77 = value;
	}

	inline static int32_t get_offset_of_m_FontWeightInternal_78() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_FontWeightInternal_78)); }
	inline int32_t get_m_FontWeightInternal_78() const { return ___m_FontWeightInternal_78; }
	inline int32_t* get_address_of_m_FontWeightInternal_78() { return &___m_FontWeightInternal_78; }
	inline void set_m_FontWeightInternal_78(int32_t value)
	{
		___m_FontWeightInternal_78 = value;
	}

	inline static int32_t get_offset_of_m_FontWeightStack_79() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_FontWeightStack_79)); }
	inline TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7  get_m_FontWeightStack_79() const { return ___m_FontWeightStack_79; }
	inline TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7 * get_address_of_m_FontWeightStack_79() { return &___m_FontWeightStack_79; }
	inline void set_m_FontWeightStack_79(TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7  value)
	{
		___m_FontWeightStack_79 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_FontWeightStack_79))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_enableAutoSizing_80() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_enableAutoSizing_80)); }
	inline bool get_m_enableAutoSizing_80() const { return ___m_enableAutoSizing_80; }
	inline bool* get_address_of_m_enableAutoSizing_80() { return &___m_enableAutoSizing_80; }
	inline void set_m_enableAutoSizing_80(bool value)
	{
		___m_enableAutoSizing_80 = value;
	}

	inline static int32_t get_offset_of_m_maxFontSize_81() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxFontSize_81)); }
	inline float get_m_maxFontSize_81() const { return ___m_maxFontSize_81; }
	inline float* get_address_of_m_maxFontSize_81() { return &___m_maxFontSize_81; }
	inline void set_m_maxFontSize_81(float value)
	{
		___m_maxFontSize_81 = value;
	}

	inline static int32_t get_offset_of_m_minFontSize_82() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_minFontSize_82)); }
	inline float get_m_minFontSize_82() const { return ___m_minFontSize_82; }
	inline float* get_address_of_m_minFontSize_82() { return &___m_minFontSize_82; }
	inline void set_m_minFontSize_82(float value)
	{
		___m_minFontSize_82 = value;
	}

	inline static int32_t get_offset_of_m_AutoSizeIterationCount_83() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_AutoSizeIterationCount_83)); }
	inline int32_t get_m_AutoSizeIterationCount_83() const { return ___m_AutoSizeIterationCount_83; }
	inline int32_t* get_address_of_m_AutoSizeIterationCount_83() { return &___m_AutoSizeIterationCount_83; }
	inline void set_m_AutoSizeIterationCount_83(int32_t value)
	{
		___m_AutoSizeIterationCount_83 = value;
	}

	inline static int32_t get_offset_of_m_AutoSizeMaxIterationCount_84() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_AutoSizeMaxIterationCount_84)); }
	inline int32_t get_m_AutoSizeMaxIterationCount_84() const { return ___m_AutoSizeMaxIterationCount_84; }
	inline int32_t* get_address_of_m_AutoSizeMaxIterationCount_84() { return &___m_AutoSizeMaxIterationCount_84; }
	inline void set_m_AutoSizeMaxIterationCount_84(int32_t value)
	{
		___m_AutoSizeMaxIterationCount_84 = value;
	}

	inline static int32_t get_offset_of_m_IsAutoSizePointSizeSet_85() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_IsAutoSizePointSizeSet_85)); }
	inline bool get_m_IsAutoSizePointSizeSet_85() const { return ___m_IsAutoSizePointSizeSet_85; }
	inline bool* get_address_of_m_IsAutoSizePointSizeSet_85() { return &___m_IsAutoSizePointSizeSet_85; }
	inline void set_m_IsAutoSizePointSizeSet_85(bool value)
	{
		___m_IsAutoSizePointSizeSet_85 = value;
	}

	inline static int32_t get_offset_of_m_fontSizeMin_86() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontSizeMin_86)); }
	inline float get_m_fontSizeMin_86() const { return ___m_fontSizeMin_86; }
	inline float* get_address_of_m_fontSizeMin_86() { return &___m_fontSizeMin_86; }
	inline void set_m_fontSizeMin_86(float value)
	{
		___m_fontSizeMin_86 = value;
	}

	inline static int32_t get_offset_of_m_fontSizeMax_87() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontSizeMax_87)); }
	inline float get_m_fontSizeMax_87() const { return ___m_fontSizeMax_87; }
	inline float* get_address_of_m_fontSizeMax_87() { return &___m_fontSizeMax_87; }
	inline void set_m_fontSizeMax_87(float value)
	{
		___m_fontSizeMax_87 = value;
	}

	inline static int32_t get_offset_of_m_fontStyle_88() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontStyle_88)); }
	inline int32_t get_m_fontStyle_88() const { return ___m_fontStyle_88; }
	inline int32_t* get_address_of_m_fontStyle_88() { return &___m_fontStyle_88; }
	inline void set_m_fontStyle_88(int32_t value)
	{
		___m_fontStyle_88 = value;
	}

	inline static int32_t get_offset_of_m_FontStyleInternal_89() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_FontStyleInternal_89)); }
	inline int32_t get_m_FontStyleInternal_89() const { return ___m_FontStyleInternal_89; }
	inline int32_t* get_address_of_m_FontStyleInternal_89() { return &___m_FontStyleInternal_89; }
	inline void set_m_FontStyleInternal_89(int32_t value)
	{
		___m_FontStyleInternal_89 = value;
	}

	inline static int32_t get_offset_of_m_fontStyleStack_90() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontStyleStack_90)); }
	inline TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  get_m_fontStyleStack_90() const { return ___m_fontStyleStack_90; }
	inline TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9 * get_address_of_m_fontStyleStack_90() { return &___m_fontStyleStack_90; }
	inline void set_m_fontStyleStack_90(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  value)
	{
		___m_fontStyleStack_90 = value;
	}

	inline static int32_t get_offset_of_m_isUsingBold_91() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isUsingBold_91)); }
	inline bool get_m_isUsingBold_91() const { return ___m_isUsingBold_91; }
	inline bool* get_address_of_m_isUsingBold_91() { return &___m_isUsingBold_91; }
	inline void set_m_isUsingBold_91(bool value)
	{
		___m_isUsingBold_91 = value;
	}

	inline static int32_t get_offset_of_m_HorizontalAlignment_92() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_HorizontalAlignment_92)); }
	inline int32_t get_m_HorizontalAlignment_92() const { return ___m_HorizontalAlignment_92; }
	inline int32_t* get_address_of_m_HorizontalAlignment_92() { return &___m_HorizontalAlignment_92; }
	inline void set_m_HorizontalAlignment_92(int32_t value)
	{
		___m_HorizontalAlignment_92 = value;
	}

	inline static int32_t get_offset_of_m_VerticalAlignment_93() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_VerticalAlignment_93)); }
	inline int32_t get_m_VerticalAlignment_93() const { return ___m_VerticalAlignment_93; }
	inline int32_t* get_address_of_m_VerticalAlignment_93() { return &___m_VerticalAlignment_93; }
	inline void set_m_VerticalAlignment_93(int32_t value)
	{
		___m_VerticalAlignment_93 = value;
	}

	inline static int32_t get_offset_of_m_textAlignment_94() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_textAlignment_94)); }
	inline int32_t get_m_textAlignment_94() const { return ___m_textAlignment_94; }
	inline int32_t* get_address_of_m_textAlignment_94() { return &___m_textAlignment_94; }
	inline void set_m_textAlignment_94(int32_t value)
	{
		___m_textAlignment_94 = value;
	}

	inline static int32_t get_offset_of_m_lineJustification_95() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineJustification_95)); }
	inline int32_t get_m_lineJustification_95() const { return ___m_lineJustification_95; }
	inline int32_t* get_address_of_m_lineJustification_95() { return &___m_lineJustification_95; }
	inline void set_m_lineJustification_95(int32_t value)
	{
		___m_lineJustification_95 = value;
	}

	inline static int32_t get_offset_of_m_lineJustificationStack_96() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineJustificationStack_96)); }
	inline TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B  get_m_lineJustificationStack_96() const { return ___m_lineJustificationStack_96; }
	inline TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B * get_address_of_m_lineJustificationStack_96() { return &___m_lineJustificationStack_96; }
	inline void set_m_lineJustificationStack_96(TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B  value)
	{
		___m_lineJustificationStack_96 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_lineJustificationStack_96))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_textContainerLocalCorners_97() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_textContainerLocalCorners_97)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_textContainerLocalCorners_97() const { return ___m_textContainerLocalCorners_97; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_textContainerLocalCorners_97() { return &___m_textContainerLocalCorners_97; }
	inline void set_m_textContainerLocalCorners_97(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_textContainerLocalCorners_97 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_textContainerLocalCorners_97), (void*)value);
	}

	inline static int32_t get_offset_of_m_characterSpacing_98() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_characterSpacing_98)); }
	inline float get_m_characterSpacing_98() const { return ___m_characterSpacing_98; }
	inline float* get_address_of_m_characterSpacing_98() { return &___m_characterSpacing_98; }
	inline void set_m_characterSpacing_98(float value)
	{
		___m_characterSpacing_98 = value;
	}

	inline static int32_t get_offset_of_m_cSpacing_99() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_cSpacing_99)); }
	inline float get_m_cSpacing_99() const { return ___m_cSpacing_99; }
	inline float* get_address_of_m_cSpacing_99() { return &___m_cSpacing_99; }
	inline void set_m_cSpacing_99(float value)
	{
		___m_cSpacing_99 = value;
	}

	inline static int32_t get_offset_of_m_monoSpacing_100() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_monoSpacing_100)); }
	inline float get_m_monoSpacing_100() const { return ___m_monoSpacing_100; }
	inline float* get_address_of_m_monoSpacing_100() { return &___m_monoSpacing_100; }
	inline void set_m_monoSpacing_100(float value)
	{
		___m_monoSpacing_100 = value;
	}

	inline static int32_t get_offset_of_m_wordSpacing_101() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_wordSpacing_101)); }
	inline float get_m_wordSpacing_101() const { return ___m_wordSpacing_101; }
	inline float* get_address_of_m_wordSpacing_101() { return &___m_wordSpacing_101; }
	inline void set_m_wordSpacing_101(float value)
	{
		___m_wordSpacing_101 = value;
	}

	inline static int32_t get_offset_of_m_lineSpacing_102() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineSpacing_102)); }
	inline float get_m_lineSpacing_102() const { return ___m_lineSpacing_102; }
	inline float* get_address_of_m_lineSpacing_102() { return &___m_lineSpacing_102; }
	inline void set_m_lineSpacing_102(float value)
	{
		___m_lineSpacing_102 = value;
	}

	inline static int32_t get_offset_of_m_lineSpacingDelta_103() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineSpacingDelta_103)); }
	inline float get_m_lineSpacingDelta_103() const { return ___m_lineSpacingDelta_103; }
	inline float* get_address_of_m_lineSpacingDelta_103() { return &___m_lineSpacingDelta_103; }
	inline void set_m_lineSpacingDelta_103(float value)
	{
		___m_lineSpacingDelta_103 = value;
	}

	inline static int32_t get_offset_of_m_lineHeight_104() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineHeight_104)); }
	inline float get_m_lineHeight_104() const { return ___m_lineHeight_104; }
	inline float* get_address_of_m_lineHeight_104() { return &___m_lineHeight_104; }
	inline void set_m_lineHeight_104(float value)
	{
		___m_lineHeight_104 = value;
	}

	inline static int32_t get_offset_of_m_IsDrivenLineSpacing_105() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_IsDrivenLineSpacing_105)); }
	inline bool get_m_IsDrivenLineSpacing_105() const { return ___m_IsDrivenLineSpacing_105; }
	inline bool* get_address_of_m_IsDrivenLineSpacing_105() { return &___m_IsDrivenLineSpacing_105; }
	inline void set_m_IsDrivenLineSpacing_105(bool value)
	{
		___m_IsDrivenLineSpacing_105 = value;
	}

	inline static int32_t get_offset_of_m_lineSpacingMax_106() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineSpacingMax_106)); }
	inline float get_m_lineSpacingMax_106() const { return ___m_lineSpacingMax_106; }
	inline float* get_address_of_m_lineSpacingMax_106() { return &___m_lineSpacingMax_106; }
	inline void set_m_lineSpacingMax_106(float value)
	{
		___m_lineSpacingMax_106 = value;
	}

	inline static int32_t get_offset_of_m_paragraphSpacing_107() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_paragraphSpacing_107)); }
	inline float get_m_paragraphSpacing_107() const { return ___m_paragraphSpacing_107; }
	inline float* get_address_of_m_paragraphSpacing_107() { return &___m_paragraphSpacing_107; }
	inline void set_m_paragraphSpacing_107(float value)
	{
		___m_paragraphSpacing_107 = value;
	}

	inline static int32_t get_offset_of_m_charWidthMaxAdj_108() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_charWidthMaxAdj_108)); }
	inline float get_m_charWidthMaxAdj_108() const { return ___m_charWidthMaxAdj_108; }
	inline float* get_address_of_m_charWidthMaxAdj_108() { return &___m_charWidthMaxAdj_108; }
	inline void set_m_charWidthMaxAdj_108(float value)
	{
		___m_charWidthMaxAdj_108 = value;
	}

	inline static int32_t get_offset_of_m_charWidthAdjDelta_109() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_charWidthAdjDelta_109)); }
	inline float get_m_charWidthAdjDelta_109() const { return ___m_charWidthAdjDelta_109; }
	inline float* get_address_of_m_charWidthAdjDelta_109() { return &___m_charWidthAdjDelta_109; }
	inline void set_m_charWidthAdjDelta_109(float value)
	{
		___m_charWidthAdjDelta_109 = value;
	}

	inline static int32_t get_offset_of_m_enableWordWrapping_110() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_enableWordWrapping_110)); }
	inline bool get_m_enableWordWrapping_110() const { return ___m_enableWordWrapping_110; }
	inline bool* get_address_of_m_enableWordWrapping_110() { return &___m_enableWordWrapping_110; }
	inline void set_m_enableWordWrapping_110(bool value)
	{
		___m_enableWordWrapping_110 = value;
	}

	inline static int32_t get_offset_of_m_isCharacterWrappingEnabled_111() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isCharacterWrappingEnabled_111)); }
	inline bool get_m_isCharacterWrappingEnabled_111() const { return ___m_isCharacterWrappingEnabled_111; }
	inline bool* get_address_of_m_isCharacterWrappingEnabled_111() { return &___m_isCharacterWrappingEnabled_111; }
	inline void set_m_isCharacterWrappingEnabled_111(bool value)
	{
		___m_isCharacterWrappingEnabled_111 = value;
	}

	inline static int32_t get_offset_of_m_isNonBreakingSpace_112() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isNonBreakingSpace_112)); }
	inline bool get_m_isNonBreakingSpace_112() const { return ___m_isNonBreakingSpace_112; }
	inline bool* get_address_of_m_isNonBreakingSpace_112() { return &___m_isNonBreakingSpace_112; }
	inline void set_m_isNonBreakingSpace_112(bool value)
	{
		___m_isNonBreakingSpace_112 = value;
	}

	inline static int32_t get_offset_of_m_isIgnoringAlignment_113() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isIgnoringAlignment_113)); }
	inline bool get_m_isIgnoringAlignment_113() const { return ___m_isIgnoringAlignment_113; }
	inline bool* get_address_of_m_isIgnoringAlignment_113() { return &___m_isIgnoringAlignment_113; }
	inline void set_m_isIgnoringAlignment_113(bool value)
	{
		___m_isIgnoringAlignment_113 = value;
	}

	inline static int32_t get_offset_of_m_wordWrappingRatios_114() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_wordWrappingRatios_114)); }
	inline float get_m_wordWrappingRatios_114() const { return ___m_wordWrappingRatios_114; }
	inline float* get_address_of_m_wordWrappingRatios_114() { return &___m_wordWrappingRatios_114; }
	inline void set_m_wordWrappingRatios_114(float value)
	{
		___m_wordWrappingRatios_114 = value;
	}

	inline static int32_t get_offset_of_m_overflowMode_115() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_overflowMode_115)); }
	inline int32_t get_m_overflowMode_115() const { return ___m_overflowMode_115; }
	inline int32_t* get_address_of_m_overflowMode_115() { return &___m_overflowMode_115; }
	inline void set_m_overflowMode_115(int32_t value)
	{
		___m_overflowMode_115 = value;
	}

	inline static int32_t get_offset_of_m_firstOverflowCharacterIndex_116() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_firstOverflowCharacterIndex_116)); }
	inline int32_t get_m_firstOverflowCharacterIndex_116() const { return ___m_firstOverflowCharacterIndex_116; }
	inline int32_t* get_address_of_m_firstOverflowCharacterIndex_116() { return &___m_firstOverflowCharacterIndex_116; }
	inline void set_m_firstOverflowCharacterIndex_116(int32_t value)
	{
		___m_firstOverflowCharacterIndex_116 = value;
	}

	inline static int32_t get_offset_of_m_linkedTextComponent_117() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_linkedTextComponent_117)); }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * get_m_linkedTextComponent_117() const { return ___m_linkedTextComponent_117; }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 ** get_address_of_m_linkedTextComponent_117() { return &___m_linkedTextComponent_117; }
	inline void set_m_linkedTextComponent_117(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * value)
	{
		___m_linkedTextComponent_117 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_linkedTextComponent_117), (void*)value);
	}

	inline static int32_t get_offset_of_parentLinkedComponent_118() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___parentLinkedComponent_118)); }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * get_parentLinkedComponent_118() const { return ___parentLinkedComponent_118; }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 ** get_address_of_parentLinkedComponent_118() { return &___parentLinkedComponent_118; }
	inline void set_parentLinkedComponent_118(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * value)
	{
		___parentLinkedComponent_118 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parentLinkedComponent_118), (void*)value);
	}

	inline static int32_t get_offset_of_m_isTextTruncated_119() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isTextTruncated_119)); }
	inline bool get_m_isTextTruncated_119() const { return ___m_isTextTruncated_119; }
	inline bool* get_address_of_m_isTextTruncated_119() { return &___m_isTextTruncated_119; }
	inline void set_m_isTextTruncated_119(bool value)
	{
		___m_isTextTruncated_119 = value;
	}

	inline static int32_t get_offset_of_m_enableKerning_120() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_enableKerning_120)); }
	inline bool get_m_enableKerning_120() const { return ___m_enableKerning_120; }
	inline bool* get_address_of_m_enableKerning_120() { return &___m_enableKerning_120; }
	inline void set_m_enableKerning_120(bool value)
	{
		___m_enableKerning_120 = value;
	}

	inline static int32_t get_offset_of_m_GlyphHorizontalAdvanceAdjustment_121() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_GlyphHorizontalAdvanceAdjustment_121)); }
	inline float get_m_GlyphHorizontalAdvanceAdjustment_121() const { return ___m_GlyphHorizontalAdvanceAdjustment_121; }
	inline float* get_address_of_m_GlyphHorizontalAdvanceAdjustment_121() { return &___m_GlyphHorizontalAdvanceAdjustment_121; }
	inline void set_m_GlyphHorizontalAdvanceAdjustment_121(float value)
	{
		___m_GlyphHorizontalAdvanceAdjustment_121 = value;
	}

	inline static int32_t get_offset_of_m_enableExtraPadding_122() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_enableExtraPadding_122)); }
	inline bool get_m_enableExtraPadding_122() const { return ___m_enableExtraPadding_122; }
	inline bool* get_address_of_m_enableExtraPadding_122() { return &___m_enableExtraPadding_122; }
	inline void set_m_enableExtraPadding_122(bool value)
	{
		___m_enableExtraPadding_122 = value;
	}

	inline static int32_t get_offset_of_checkPaddingRequired_123() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___checkPaddingRequired_123)); }
	inline bool get_checkPaddingRequired_123() const { return ___checkPaddingRequired_123; }
	inline bool* get_address_of_checkPaddingRequired_123() { return &___checkPaddingRequired_123; }
	inline void set_checkPaddingRequired_123(bool value)
	{
		___checkPaddingRequired_123 = value;
	}

	inline static int32_t get_offset_of_m_isRichText_124() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isRichText_124)); }
	inline bool get_m_isRichText_124() const { return ___m_isRichText_124; }
	inline bool* get_address_of_m_isRichText_124() { return &___m_isRichText_124; }
	inline void set_m_isRichText_124(bool value)
	{
		___m_isRichText_124 = value;
	}

	inline static int32_t get_offset_of_m_parseCtrlCharacters_125() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_parseCtrlCharacters_125)); }
	inline bool get_m_parseCtrlCharacters_125() const { return ___m_parseCtrlCharacters_125; }
	inline bool* get_address_of_m_parseCtrlCharacters_125() { return &___m_parseCtrlCharacters_125; }
	inline void set_m_parseCtrlCharacters_125(bool value)
	{
		___m_parseCtrlCharacters_125 = value;
	}

	inline static int32_t get_offset_of_m_isOverlay_126() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isOverlay_126)); }
	inline bool get_m_isOverlay_126() const { return ___m_isOverlay_126; }
	inline bool* get_address_of_m_isOverlay_126() { return &___m_isOverlay_126; }
	inline void set_m_isOverlay_126(bool value)
	{
		___m_isOverlay_126 = value;
	}

	inline static int32_t get_offset_of_m_isOrthographic_127() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isOrthographic_127)); }
	inline bool get_m_isOrthographic_127() const { return ___m_isOrthographic_127; }
	inline bool* get_address_of_m_isOrthographic_127() { return &___m_isOrthographic_127; }
	inline void set_m_isOrthographic_127(bool value)
	{
		___m_isOrthographic_127 = value;
	}

	inline static int32_t get_offset_of_m_isCullingEnabled_128() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isCullingEnabled_128)); }
	inline bool get_m_isCullingEnabled_128() const { return ___m_isCullingEnabled_128; }
	inline bool* get_address_of_m_isCullingEnabled_128() { return &___m_isCullingEnabled_128; }
	inline void set_m_isCullingEnabled_128(bool value)
	{
		___m_isCullingEnabled_128 = value;
	}

	inline static int32_t get_offset_of_m_isMaskingEnabled_129() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isMaskingEnabled_129)); }
	inline bool get_m_isMaskingEnabled_129() const { return ___m_isMaskingEnabled_129; }
	inline bool* get_address_of_m_isMaskingEnabled_129() { return &___m_isMaskingEnabled_129; }
	inline void set_m_isMaskingEnabled_129(bool value)
	{
		___m_isMaskingEnabled_129 = value;
	}

	inline static int32_t get_offset_of_isMaskUpdateRequired_130() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___isMaskUpdateRequired_130)); }
	inline bool get_isMaskUpdateRequired_130() const { return ___isMaskUpdateRequired_130; }
	inline bool* get_address_of_isMaskUpdateRequired_130() { return &___isMaskUpdateRequired_130; }
	inline void set_isMaskUpdateRequired_130(bool value)
	{
		___isMaskUpdateRequired_130 = value;
	}

	inline static int32_t get_offset_of_m_ignoreCulling_131() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_ignoreCulling_131)); }
	inline bool get_m_ignoreCulling_131() const { return ___m_ignoreCulling_131; }
	inline bool* get_address_of_m_ignoreCulling_131() { return &___m_ignoreCulling_131; }
	inline void set_m_ignoreCulling_131(bool value)
	{
		___m_ignoreCulling_131 = value;
	}

	inline static int32_t get_offset_of_m_horizontalMapping_132() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_horizontalMapping_132)); }
	inline int32_t get_m_horizontalMapping_132() const { return ___m_horizontalMapping_132; }
	inline int32_t* get_address_of_m_horizontalMapping_132() { return &___m_horizontalMapping_132; }
	inline void set_m_horizontalMapping_132(int32_t value)
	{
		___m_horizontalMapping_132 = value;
	}

	inline static int32_t get_offset_of_m_verticalMapping_133() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_verticalMapping_133)); }
	inline int32_t get_m_verticalMapping_133() const { return ___m_verticalMapping_133; }
	inline int32_t* get_address_of_m_verticalMapping_133() { return &___m_verticalMapping_133; }
	inline void set_m_verticalMapping_133(int32_t value)
	{
		___m_verticalMapping_133 = value;
	}

	inline static int32_t get_offset_of_m_uvLineOffset_134() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_uvLineOffset_134)); }
	inline float get_m_uvLineOffset_134() const { return ___m_uvLineOffset_134; }
	inline float* get_address_of_m_uvLineOffset_134() { return &___m_uvLineOffset_134; }
	inline void set_m_uvLineOffset_134(float value)
	{
		___m_uvLineOffset_134 = value;
	}

	inline static int32_t get_offset_of_m_renderMode_135() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_renderMode_135)); }
	inline int32_t get_m_renderMode_135() const { return ___m_renderMode_135; }
	inline int32_t* get_address_of_m_renderMode_135() { return &___m_renderMode_135; }
	inline void set_m_renderMode_135(int32_t value)
	{
		___m_renderMode_135 = value;
	}

	inline static int32_t get_offset_of_m_geometrySortingOrder_136() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_geometrySortingOrder_136)); }
	inline int32_t get_m_geometrySortingOrder_136() const { return ___m_geometrySortingOrder_136; }
	inline int32_t* get_address_of_m_geometrySortingOrder_136() { return &___m_geometrySortingOrder_136; }
	inline void set_m_geometrySortingOrder_136(int32_t value)
	{
		___m_geometrySortingOrder_136 = value;
	}

	inline static int32_t get_offset_of_m_IsTextObjectScaleStatic_137() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_IsTextObjectScaleStatic_137)); }
	inline bool get_m_IsTextObjectScaleStatic_137() const { return ___m_IsTextObjectScaleStatic_137; }
	inline bool* get_address_of_m_IsTextObjectScaleStatic_137() { return &___m_IsTextObjectScaleStatic_137; }
	inline void set_m_IsTextObjectScaleStatic_137(bool value)
	{
		___m_IsTextObjectScaleStatic_137 = value;
	}

	inline static int32_t get_offset_of_m_VertexBufferAutoSizeReduction_138() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_VertexBufferAutoSizeReduction_138)); }
	inline bool get_m_VertexBufferAutoSizeReduction_138() const { return ___m_VertexBufferAutoSizeReduction_138; }
	inline bool* get_address_of_m_VertexBufferAutoSizeReduction_138() { return &___m_VertexBufferAutoSizeReduction_138; }
	inline void set_m_VertexBufferAutoSizeReduction_138(bool value)
	{
		___m_VertexBufferAutoSizeReduction_138 = value;
	}

	inline static int32_t get_offset_of_m_firstVisibleCharacter_139() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_firstVisibleCharacter_139)); }
	inline int32_t get_m_firstVisibleCharacter_139() const { return ___m_firstVisibleCharacter_139; }
	inline int32_t* get_address_of_m_firstVisibleCharacter_139() { return &___m_firstVisibleCharacter_139; }
	inline void set_m_firstVisibleCharacter_139(int32_t value)
	{
		___m_firstVisibleCharacter_139 = value;
	}

	inline static int32_t get_offset_of_m_maxVisibleCharacters_140() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxVisibleCharacters_140)); }
	inline int32_t get_m_maxVisibleCharacters_140() const { return ___m_maxVisibleCharacters_140; }
	inline int32_t* get_address_of_m_maxVisibleCharacters_140() { return &___m_maxVisibleCharacters_140; }
	inline void set_m_maxVisibleCharacters_140(int32_t value)
	{
		___m_maxVisibleCharacters_140 = value;
	}

	inline static int32_t get_offset_of_m_maxVisibleWords_141() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxVisibleWords_141)); }
	inline int32_t get_m_maxVisibleWords_141() const { return ___m_maxVisibleWords_141; }
	inline int32_t* get_address_of_m_maxVisibleWords_141() { return &___m_maxVisibleWords_141; }
	inline void set_m_maxVisibleWords_141(int32_t value)
	{
		___m_maxVisibleWords_141 = value;
	}

	inline static int32_t get_offset_of_m_maxVisibleLines_142() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxVisibleLines_142)); }
	inline int32_t get_m_maxVisibleLines_142() const { return ___m_maxVisibleLines_142; }
	inline int32_t* get_address_of_m_maxVisibleLines_142() { return &___m_maxVisibleLines_142; }
	inline void set_m_maxVisibleLines_142(int32_t value)
	{
		___m_maxVisibleLines_142 = value;
	}

	inline static int32_t get_offset_of_m_useMaxVisibleDescender_143() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_useMaxVisibleDescender_143)); }
	inline bool get_m_useMaxVisibleDescender_143() const { return ___m_useMaxVisibleDescender_143; }
	inline bool* get_address_of_m_useMaxVisibleDescender_143() { return &___m_useMaxVisibleDescender_143; }
	inline void set_m_useMaxVisibleDescender_143(bool value)
	{
		___m_useMaxVisibleDescender_143 = value;
	}

	inline static int32_t get_offset_of_m_pageToDisplay_144() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_pageToDisplay_144)); }
	inline int32_t get_m_pageToDisplay_144() const { return ___m_pageToDisplay_144; }
	inline int32_t* get_address_of_m_pageToDisplay_144() { return &___m_pageToDisplay_144; }
	inline void set_m_pageToDisplay_144(int32_t value)
	{
		___m_pageToDisplay_144 = value;
	}

	inline static int32_t get_offset_of_m_isNewPage_145() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isNewPage_145)); }
	inline bool get_m_isNewPage_145() const { return ___m_isNewPage_145; }
	inline bool* get_address_of_m_isNewPage_145() { return &___m_isNewPage_145; }
	inline void set_m_isNewPage_145(bool value)
	{
		___m_isNewPage_145 = value;
	}

	inline static int32_t get_offset_of_m_margin_146() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_margin_146)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_margin_146() const { return ___m_margin_146; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_margin_146() { return &___m_margin_146; }
	inline void set_m_margin_146(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_margin_146 = value;
	}

	inline static int32_t get_offset_of_m_marginLeft_147() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_marginLeft_147)); }
	inline float get_m_marginLeft_147() const { return ___m_marginLeft_147; }
	inline float* get_address_of_m_marginLeft_147() { return &___m_marginLeft_147; }
	inline void set_m_marginLeft_147(float value)
	{
		___m_marginLeft_147 = value;
	}

	inline static int32_t get_offset_of_m_marginRight_148() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_marginRight_148)); }
	inline float get_m_marginRight_148() const { return ___m_marginRight_148; }
	inline float* get_address_of_m_marginRight_148() { return &___m_marginRight_148; }
	inline void set_m_marginRight_148(float value)
	{
		___m_marginRight_148 = value;
	}

	inline static int32_t get_offset_of_m_marginWidth_149() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_marginWidth_149)); }
	inline float get_m_marginWidth_149() const { return ___m_marginWidth_149; }
	inline float* get_address_of_m_marginWidth_149() { return &___m_marginWidth_149; }
	inline void set_m_marginWidth_149(float value)
	{
		___m_marginWidth_149 = value;
	}

	inline static int32_t get_offset_of_m_marginHeight_150() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_marginHeight_150)); }
	inline float get_m_marginHeight_150() const { return ___m_marginHeight_150; }
	inline float* get_address_of_m_marginHeight_150() { return &___m_marginHeight_150; }
	inline void set_m_marginHeight_150(float value)
	{
		___m_marginHeight_150 = value;
	}

	inline static int32_t get_offset_of_m_width_151() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_width_151)); }
	inline float get_m_width_151() const { return ___m_width_151; }
	inline float* get_address_of_m_width_151() { return &___m_width_151; }
	inline void set_m_width_151(float value)
	{
		___m_width_151 = value;
	}

	inline static int32_t get_offset_of_m_textInfo_152() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_textInfo_152)); }
	inline TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * get_m_textInfo_152() const { return ___m_textInfo_152; }
	inline TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 ** get_address_of_m_textInfo_152() { return &___m_textInfo_152; }
	inline void set_m_textInfo_152(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * value)
	{
		___m_textInfo_152 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_textInfo_152), (void*)value);
	}

	inline static int32_t get_offset_of_m_havePropertiesChanged_153() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_havePropertiesChanged_153)); }
	inline bool get_m_havePropertiesChanged_153() const { return ___m_havePropertiesChanged_153; }
	inline bool* get_address_of_m_havePropertiesChanged_153() { return &___m_havePropertiesChanged_153; }
	inline void set_m_havePropertiesChanged_153(bool value)
	{
		___m_havePropertiesChanged_153 = value;
	}

	inline static int32_t get_offset_of_m_isUsingLegacyAnimationComponent_154() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isUsingLegacyAnimationComponent_154)); }
	inline bool get_m_isUsingLegacyAnimationComponent_154() const { return ___m_isUsingLegacyAnimationComponent_154; }
	inline bool* get_address_of_m_isUsingLegacyAnimationComponent_154() { return &___m_isUsingLegacyAnimationComponent_154; }
	inline void set_m_isUsingLegacyAnimationComponent_154(bool value)
	{
		___m_isUsingLegacyAnimationComponent_154 = value;
	}

	inline static int32_t get_offset_of_m_transform_155() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_transform_155)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_transform_155() const { return ___m_transform_155; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_transform_155() { return &___m_transform_155; }
	inline void set_m_transform_155(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_transform_155 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_transform_155), (void*)value);
	}

	inline static int32_t get_offset_of_m_rectTransform_156() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_rectTransform_156)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_rectTransform_156() const { return ___m_rectTransform_156; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_rectTransform_156() { return &___m_rectTransform_156; }
	inline void set_m_rectTransform_156(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_rectTransform_156 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_rectTransform_156), (void*)value);
	}

	inline static int32_t get_offset_of_m_PreviousRectTransformSize_157() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_PreviousRectTransformSize_157)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_PreviousRectTransformSize_157() const { return ___m_PreviousRectTransformSize_157; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_PreviousRectTransformSize_157() { return &___m_PreviousRectTransformSize_157; }
	inline void set_m_PreviousRectTransformSize_157(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_PreviousRectTransformSize_157 = value;
	}

	inline static int32_t get_offset_of_m_PreviousPivotPosition_158() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_PreviousPivotPosition_158)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_PreviousPivotPosition_158() const { return ___m_PreviousPivotPosition_158; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_PreviousPivotPosition_158() { return &___m_PreviousPivotPosition_158; }
	inline void set_m_PreviousPivotPosition_158(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_PreviousPivotPosition_158 = value;
	}

	inline static int32_t get_offset_of_U3CautoSizeTextContainerU3Ek__BackingField_159() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___U3CautoSizeTextContainerU3Ek__BackingField_159)); }
	inline bool get_U3CautoSizeTextContainerU3Ek__BackingField_159() const { return ___U3CautoSizeTextContainerU3Ek__BackingField_159; }
	inline bool* get_address_of_U3CautoSizeTextContainerU3Ek__BackingField_159() { return &___U3CautoSizeTextContainerU3Ek__BackingField_159; }
	inline void set_U3CautoSizeTextContainerU3Ek__BackingField_159(bool value)
	{
		___U3CautoSizeTextContainerU3Ek__BackingField_159 = value;
	}

	inline static int32_t get_offset_of_m_autoSizeTextContainer_160() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_autoSizeTextContainer_160)); }
	inline bool get_m_autoSizeTextContainer_160() const { return ___m_autoSizeTextContainer_160; }
	inline bool* get_address_of_m_autoSizeTextContainer_160() { return &___m_autoSizeTextContainer_160; }
	inline void set_m_autoSizeTextContainer_160(bool value)
	{
		___m_autoSizeTextContainer_160 = value;
	}

	inline static int32_t get_offset_of_m_mesh_161() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_mesh_161)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_mesh_161() const { return ___m_mesh_161; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_mesh_161() { return &___m_mesh_161; }
	inline void set_m_mesh_161(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_mesh_161 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_mesh_161), (void*)value);
	}

	inline static int32_t get_offset_of_m_isVolumetricText_162() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isVolumetricText_162)); }
	inline bool get_m_isVolumetricText_162() const { return ___m_isVolumetricText_162; }
	inline bool* get_address_of_m_isVolumetricText_162() { return &___m_isVolumetricText_162; }
	inline void set_m_isVolumetricText_162(bool value)
	{
		___m_isVolumetricText_162 = value;
	}

	inline static int32_t get_offset_of_OnPreRenderText_165() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___OnPreRenderText_165)); }
	inline Action_1_t170B3E821B49B45FA7134A2CF48A2E64CA371D42 * get_OnPreRenderText_165() const { return ___OnPreRenderText_165; }
	inline Action_1_t170B3E821B49B45FA7134A2CF48A2E64CA371D42 ** get_address_of_OnPreRenderText_165() { return &___OnPreRenderText_165; }
	inline void set_OnPreRenderText_165(Action_1_t170B3E821B49B45FA7134A2CF48A2E64CA371D42 * value)
	{
		___OnPreRenderText_165 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPreRenderText_165), (void*)value);
	}

	inline static int32_t get_offset_of_m_spriteAnimator_166() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_spriteAnimator_166)); }
	inline TMP_SpriteAnimator_t07C769A1F1F85B545DD32357826E08F569E3D902 * get_m_spriteAnimator_166() const { return ___m_spriteAnimator_166; }
	inline TMP_SpriteAnimator_t07C769A1F1F85B545DD32357826E08F569E3D902 ** get_address_of_m_spriteAnimator_166() { return &___m_spriteAnimator_166; }
	inline void set_m_spriteAnimator_166(TMP_SpriteAnimator_t07C769A1F1F85B545DD32357826E08F569E3D902 * value)
	{
		___m_spriteAnimator_166 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_spriteAnimator_166), (void*)value);
	}

	inline static int32_t get_offset_of_m_flexibleHeight_167() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_flexibleHeight_167)); }
	inline float get_m_flexibleHeight_167() const { return ___m_flexibleHeight_167; }
	inline float* get_address_of_m_flexibleHeight_167() { return &___m_flexibleHeight_167; }
	inline void set_m_flexibleHeight_167(float value)
	{
		___m_flexibleHeight_167 = value;
	}

	inline static int32_t get_offset_of_m_flexibleWidth_168() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_flexibleWidth_168)); }
	inline float get_m_flexibleWidth_168() const { return ___m_flexibleWidth_168; }
	inline float* get_address_of_m_flexibleWidth_168() { return &___m_flexibleWidth_168; }
	inline void set_m_flexibleWidth_168(float value)
	{
		___m_flexibleWidth_168 = value;
	}

	inline static int32_t get_offset_of_m_minWidth_169() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_minWidth_169)); }
	inline float get_m_minWidth_169() const { return ___m_minWidth_169; }
	inline float* get_address_of_m_minWidth_169() { return &___m_minWidth_169; }
	inline void set_m_minWidth_169(float value)
	{
		___m_minWidth_169 = value;
	}

	inline static int32_t get_offset_of_m_minHeight_170() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_minHeight_170)); }
	inline float get_m_minHeight_170() const { return ___m_minHeight_170; }
	inline float* get_address_of_m_minHeight_170() { return &___m_minHeight_170; }
	inline void set_m_minHeight_170(float value)
	{
		___m_minHeight_170 = value;
	}

	inline static int32_t get_offset_of_m_maxWidth_171() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxWidth_171)); }
	inline float get_m_maxWidth_171() const { return ___m_maxWidth_171; }
	inline float* get_address_of_m_maxWidth_171() { return &___m_maxWidth_171; }
	inline void set_m_maxWidth_171(float value)
	{
		___m_maxWidth_171 = value;
	}

	inline static int32_t get_offset_of_m_maxHeight_172() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxHeight_172)); }
	inline float get_m_maxHeight_172() const { return ___m_maxHeight_172; }
	inline float* get_address_of_m_maxHeight_172() { return &___m_maxHeight_172; }
	inline void set_m_maxHeight_172(float value)
	{
		___m_maxHeight_172 = value;
	}

	inline static int32_t get_offset_of_m_LayoutElement_173() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_LayoutElement_173)); }
	inline LayoutElement_tE514951184806899FE23EC4FA6112A5F2038CECF * get_m_LayoutElement_173() const { return ___m_LayoutElement_173; }
	inline LayoutElement_tE514951184806899FE23EC4FA6112A5F2038CECF ** get_address_of_m_LayoutElement_173() { return &___m_LayoutElement_173; }
	inline void set_m_LayoutElement_173(LayoutElement_tE514951184806899FE23EC4FA6112A5F2038CECF * value)
	{
		___m_LayoutElement_173 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LayoutElement_173), (void*)value);
	}

	inline static int32_t get_offset_of_m_preferredWidth_174() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_preferredWidth_174)); }
	inline float get_m_preferredWidth_174() const { return ___m_preferredWidth_174; }
	inline float* get_address_of_m_preferredWidth_174() { return &___m_preferredWidth_174; }
	inline void set_m_preferredWidth_174(float value)
	{
		___m_preferredWidth_174 = value;
	}

	inline static int32_t get_offset_of_m_renderedWidth_175() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_renderedWidth_175)); }
	inline float get_m_renderedWidth_175() const { return ___m_renderedWidth_175; }
	inline float* get_address_of_m_renderedWidth_175() { return &___m_renderedWidth_175; }
	inline void set_m_renderedWidth_175(float value)
	{
		___m_renderedWidth_175 = value;
	}

	inline static int32_t get_offset_of_m_isPreferredWidthDirty_176() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isPreferredWidthDirty_176)); }
	inline bool get_m_isPreferredWidthDirty_176() const { return ___m_isPreferredWidthDirty_176; }
	inline bool* get_address_of_m_isPreferredWidthDirty_176() { return &___m_isPreferredWidthDirty_176; }
	inline void set_m_isPreferredWidthDirty_176(bool value)
	{
		___m_isPreferredWidthDirty_176 = value;
	}

	inline static int32_t get_offset_of_m_preferredHeight_177() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_preferredHeight_177)); }
	inline float get_m_preferredHeight_177() const { return ___m_preferredHeight_177; }
	inline float* get_address_of_m_preferredHeight_177() { return &___m_preferredHeight_177; }
	inline void set_m_preferredHeight_177(float value)
	{
		___m_preferredHeight_177 = value;
	}

	inline static int32_t get_offset_of_m_renderedHeight_178() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_renderedHeight_178)); }
	inline float get_m_renderedHeight_178() const { return ___m_renderedHeight_178; }
	inline float* get_address_of_m_renderedHeight_178() { return &___m_renderedHeight_178; }
	inline void set_m_renderedHeight_178(float value)
	{
		___m_renderedHeight_178 = value;
	}

	inline static int32_t get_offset_of_m_isPreferredHeightDirty_179() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isPreferredHeightDirty_179)); }
	inline bool get_m_isPreferredHeightDirty_179() const { return ___m_isPreferredHeightDirty_179; }
	inline bool* get_address_of_m_isPreferredHeightDirty_179() { return &___m_isPreferredHeightDirty_179; }
	inline void set_m_isPreferredHeightDirty_179(bool value)
	{
		___m_isPreferredHeightDirty_179 = value;
	}

	inline static int32_t get_offset_of_m_isCalculatingPreferredValues_180() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isCalculatingPreferredValues_180)); }
	inline bool get_m_isCalculatingPreferredValues_180() const { return ___m_isCalculatingPreferredValues_180; }
	inline bool* get_address_of_m_isCalculatingPreferredValues_180() { return &___m_isCalculatingPreferredValues_180; }
	inline void set_m_isCalculatingPreferredValues_180(bool value)
	{
		___m_isCalculatingPreferredValues_180 = value;
	}

	inline static int32_t get_offset_of_m_layoutPriority_181() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_layoutPriority_181)); }
	inline int32_t get_m_layoutPriority_181() const { return ___m_layoutPriority_181; }
	inline int32_t* get_address_of_m_layoutPriority_181() { return &___m_layoutPriority_181; }
	inline void set_m_layoutPriority_181(int32_t value)
	{
		___m_layoutPriority_181 = value;
	}

	inline static int32_t get_offset_of_m_isLayoutDirty_182() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isLayoutDirty_182)); }
	inline bool get_m_isLayoutDirty_182() const { return ___m_isLayoutDirty_182; }
	inline bool* get_address_of_m_isLayoutDirty_182() { return &___m_isLayoutDirty_182; }
	inline void set_m_isLayoutDirty_182(bool value)
	{
		___m_isLayoutDirty_182 = value;
	}

	inline static int32_t get_offset_of_m_isAwake_183() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isAwake_183)); }
	inline bool get_m_isAwake_183() const { return ___m_isAwake_183; }
	inline bool* get_address_of_m_isAwake_183() { return &___m_isAwake_183; }
	inline void set_m_isAwake_183(bool value)
	{
		___m_isAwake_183 = value;
	}

	inline static int32_t get_offset_of_m_isWaitingOnResourceLoad_184() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isWaitingOnResourceLoad_184)); }
	inline bool get_m_isWaitingOnResourceLoad_184() const { return ___m_isWaitingOnResourceLoad_184; }
	inline bool* get_address_of_m_isWaitingOnResourceLoad_184() { return &___m_isWaitingOnResourceLoad_184; }
	inline void set_m_isWaitingOnResourceLoad_184(bool value)
	{
		___m_isWaitingOnResourceLoad_184 = value;
	}

	inline static int32_t get_offset_of_m_inputSource_185() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_inputSource_185)); }
	inline int32_t get_m_inputSource_185() const { return ___m_inputSource_185; }
	inline int32_t* get_address_of_m_inputSource_185() { return &___m_inputSource_185; }
	inline void set_m_inputSource_185(int32_t value)
	{
		___m_inputSource_185 = value;
	}

	inline static int32_t get_offset_of_m_fontScaleMultiplier_186() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontScaleMultiplier_186)); }
	inline float get_m_fontScaleMultiplier_186() const { return ___m_fontScaleMultiplier_186; }
	inline float* get_address_of_m_fontScaleMultiplier_186() { return &___m_fontScaleMultiplier_186; }
	inline void set_m_fontScaleMultiplier_186(float value)
	{
		___m_fontScaleMultiplier_186 = value;
	}

	inline static int32_t get_offset_of_tag_LineIndent_190() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___tag_LineIndent_190)); }
	inline float get_tag_LineIndent_190() const { return ___tag_LineIndent_190; }
	inline float* get_address_of_tag_LineIndent_190() { return &___tag_LineIndent_190; }
	inline void set_tag_LineIndent_190(float value)
	{
		___tag_LineIndent_190 = value;
	}

	inline static int32_t get_offset_of_tag_Indent_191() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___tag_Indent_191)); }
	inline float get_tag_Indent_191() const { return ___tag_Indent_191; }
	inline float* get_address_of_tag_Indent_191() { return &___tag_Indent_191; }
	inline void set_tag_Indent_191(float value)
	{
		___tag_Indent_191 = value;
	}

	inline static int32_t get_offset_of_m_indentStack_192() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_indentStack_192)); }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  get_m_indentStack_192() const { return ___m_indentStack_192; }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17 * get_address_of_m_indentStack_192() { return &___m_indentStack_192; }
	inline void set_m_indentStack_192(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  value)
	{
		___m_indentStack_192 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_indentStack_192))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_tag_NoParsing_193() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___tag_NoParsing_193)); }
	inline bool get_tag_NoParsing_193() const { return ___tag_NoParsing_193; }
	inline bool* get_address_of_tag_NoParsing_193() { return &___tag_NoParsing_193; }
	inline void set_tag_NoParsing_193(bool value)
	{
		___tag_NoParsing_193 = value;
	}

	inline static int32_t get_offset_of_m_isParsingText_194() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isParsingText_194)); }
	inline bool get_m_isParsingText_194() const { return ___m_isParsingText_194; }
	inline bool* get_address_of_m_isParsingText_194() { return &___m_isParsingText_194; }
	inline void set_m_isParsingText_194(bool value)
	{
		___m_isParsingText_194 = value;
	}

	inline static int32_t get_offset_of_m_FXMatrix_195() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_FXMatrix_195)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_m_FXMatrix_195() const { return ___m_FXMatrix_195; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_m_FXMatrix_195() { return &___m_FXMatrix_195; }
	inline void set_m_FXMatrix_195(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___m_FXMatrix_195 = value;
	}

	inline static int32_t get_offset_of_m_isFXMatrixSet_196() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isFXMatrixSet_196)); }
	inline bool get_m_isFXMatrixSet_196() const { return ___m_isFXMatrixSet_196; }
	inline bool* get_address_of_m_isFXMatrixSet_196() { return &___m_isFXMatrixSet_196; }
	inline void set_m_isFXMatrixSet_196(bool value)
	{
		___m_isFXMatrixSet_196 = value;
	}

	inline static int32_t get_offset_of_m_TextProcessingArray_197() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_TextProcessingArray_197)); }
	inline UnicodeCharU5BU5D_tB233FC88865130D0B1EA18DA685C2AF41FB134F7* get_m_TextProcessingArray_197() const { return ___m_TextProcessingArray_197; }
	inline UnicodeCharU5BU5D_tB233FC88865130D0B1EA18DA685C2AF41FB134F7** get_address_of_m_TextProcessingArray_197() { return &___m_TextProcessingArray_197; }
	inline void set_m_TextProcessingArray_197(UnicodeCharU5BU5D_tB233FC88865130D0B1EA18DA685C2AF41FB134F7* value)
	{
		___m_TextProcessingArray_197 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextProcessingArray_197), (void*)value);
	}

	inline static int32_t get_offset_of_m_InternalTextProcessingArraySize_198() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_InternalTextProcessingArraySize_198)); }
	inline int32_t get_m_InternalTextProcessingArraySize_198() const { return ___m_InternalTextProcessingArraySize_198; }
	inline int32_t* get_address_of_m_InternalTextProcessingArraySize_198() { return &___m_InternalTextProcessingArraySize_198; }
	inline void set_m_InternalTextProcessingArraySize_198(int32_t value)
	{
		___m_InternalTextProcessingArraySize_198 = value;
	}

	inline static int32_t get_offset_of_m_internalCharacterInfo_199() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_internalCharacterInfo_199)); }
	inline TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970* get_m_internalCharacterInfo_199() const { return ___m_internalCharacterInfo_199; }
	inline TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970** get_address_of_m_internalCharacterInfo_199() { return &___m_internalCharacterInfo_199; }
	inline void set_m_internalCharacterInfo_199(TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970* value)
	{
		___m_internalCharacterInfo_199 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_internalCharacterInfo_199), (void*)value);
	}

	inline static int32_t get_offset_of_m_totalCharacterCount_200() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_totalCharacterCount_200)); }
	inline int32_t get_m_totalCharacterCount_200() const { return ___m_totalCharacterCount_200; }
	inline int32_t* get_address_of_m_totalCharacterCount_200() { return &___m_totalCharacterCount_200; }
	inline void set_m_totalCharacterCount_200(int32_t value)
	{
		___m_totalCharacterCount_200 = value;
	}

	inline static int32_t get_offset_of_m_characterCount_207() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_characterCount_207)); }
	inline int32_t get_m_characterCount_207() const { return ___m_characterCount_207; }
	inline int32_t* get_address_of_m_characterCount_207() { return &___m_characterCount_207; }
	inline void set_m_characterCount_207(int32_t value)
	{
		___m_characterCount_207 = value;
	}

	inline static int32_t get_offset_of_m_firstCharacterOfLine_208() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_firstCharacterOfLine_208)); }
	inline int32_t get_m_firstCharacterOfLine_208() const { return ___m_firstCharacterOfLine_208; }
	inline int32_t* get_address_of_m_firstCharacterOfLine_208() { return &___m_firstCharacterOfLine_208; }
	inline void set_m_firstCharacterOfLine_208(int32_t value)
	{
		___m_firstCharacterOfLine_208 = value;
	}

	inline static int32_t get_offset_of_m_firstVisibleCharacterOfLine_209() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_firstVisibleCharacterOfLine_209)); }
	inline int32_t get_m_firstVisibleCharacterOfLine_209() const { return ___m_firstVisibleCharacterOfLine_209; }
	inline int32_t* get_address_of_m_firstVisibleCharacterOfLine_209() { return &___m_firstVisibleCharacterOfLine_209; }
	inline void set_m_firstVisibleCharacterOfLine_209(int32_t value)
	{
		___m_firstVisibleCharacterOfLine_209 = value;
	}

	inline static int32_t get_offset_of_m_lastCharacterOfLine_210() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lastCharacterOfLine_210)); }
	inline int32_t get_m_lastCharacterOfLine_210() const { return ___m_lastCharacterOfLine_210; }
	inline int32_t* get_address_of_m_lastCharacterOfLine_210() { return &___m_lastCharacterOfLine_210; }
	inline void set_m_lastCharacterOfLine_210(int32_t value)
	{
		___m_lastCharacterOfLine_210 = value;
	}

	inline static int32_t get_offset_of_m_lastVisibleCharacterOfLine_211() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lastVisibleCharacterOfLine_211)); }
	inline int32_t get_m_lastVisibleCharacterOfLine_211() const { return ___m_lastVisibleCharacterOfLine_211; }
	inline int32_t* get_address_of_m_lastVisibleCharacterOfLine_211() { return &___m_lastVisibleCharacterOfLine_211; }
	inline void set_m_lastVisibleCharacterOfLine_211(int32_t value)
	{
		___m_lastVisibleCharacterOfLine_211 = value;
	}

	inline static int32_t get_offset_of_m_lineNumber_212() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineNumber_212)); }
	inline int32_t get_m_lineNumber_212() const { return ___m_lineNumber_212; }
	inline int32_t* get_address_of_m_lineNumber_212() { return &___m_lineNumber_212; }
	inline void set_m_lineNumber_212(int32_t value)
	{
		___m_lineNumber_212 = value;
	}

	inline static int32_t get_offset_of_m_lineVisibleCharacterCount_213() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineVisibleCharacterCount_213)); }
	inline int32_t get_m_lineVisibleCharacterCount_213() const { return ___m_lineVisibleCharacterCount_213; }
	inline int32_t* get_address_of_m_lineVisibleCharacterCount_213() { return &___m_lineVisibleCharacterCount_213; }
	inline void set_m_lineVisibleCharacterCount_213(int32_t value)
	{
		___m_lineVisibleCharacterCount_213 = value;
	}

	inline static int32_t get_offset_of_m_pageNumber_214() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_pageNumber_214)); }
	inline int32_t get_m_pageNumber_214() const { return ___m_pageNumber_214; }
	inline int32_t* get_address_of_m_pageNumber_214() { return &___m_pageNumber_214; }
	inline void set_m_pageNumber_214(int32_t value)
	{
		___m_pageNumber_214 = value;
	}

	inline static int32_t get_offset_of_m_PageAscender_215() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_PageAscender_215)); }
	inline float get_m_PageAscender_215() const { return ___m_PageAscender_215; }
	inline float* get_address_of_m_PageAscender_215() { return &___m_PageAscender_215; }
	inline void set_m_PageAscender_215(float value)
	{
		___m_PageAscender_215 = value;
	}

	inline static int32_t get_offset_of_m_maxTextAscender_216() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxTextAscender_216)); }
	inline float get_m_maxTextAscender_216() const { return ___m_maxTextAscender_216; }
	inline float* get_address_of_m_maxTextAscender_216() { return &___m_maxTextAscender_216; }
	inline void set_m_maxTextAscender_216(float value)
	{
		___m_maxTextAscender_216 = value;
	}

	inline static int32_t get_offset_of_m_maxCapHeight_217() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxCapHeight_217)); }
	inline float get_m_maxCapHeight_217() const { return ___m_maxCapHeight_217; }
	inline float* get_address_of_m_maxCapHeight_217() { return &___m_maxCapHeight_217; }
	inline void set_m_maxCapHeight_217(float value)
	{
		___m_maxCapHeight_217 = value;
	}

	inline static int32_t get_offset_of_m_ElementAscender_218() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_ElementAscender_218)); }
	inline float get_m_ElementAscender_218() const { return ___m_ElementAscender_218; }
	inline float* get_address_of_m_ElementAscender_218() { return &___m_ElementAscender_218; }
	inline void set_m_ElementAscender_218(float value)
	{
		___m_ElementAscender_218 = value;
	}

	inline static int32_t get_offset_of_m_ElementDescender_219() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_ElementDescender_219)); }
	inline float get_m_ElementDescender_219() const { return ___m_ElementDescender_219; }
	inline float* get_address_of_m_ElementDescender_219() { return &___m_ElementDescender_219; }
	inline void set_m_ElementDescender_219(float value)
	{
		___m_ElementDescender_219 = value;
	}

	inline static int32_t get_offset_of_m_maxLineAscender_220() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxLineAscender_220)); }
	inline float get_m_maxLineAscender_220() const { return ___m_maxLineAscender_220; }
	inline float* get_address_of_m_maxLineAscender_220() { return &___m_maxLineAscender_220; }
	inline void set_m_maxLineAscender_220(float value)
	{
		___m_maxLineAscender_220 = value;
	}

	inline static int32_t get_offset_of_m_maxLineDescender_221() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxLineDescender_221)); }
	inline float get_m_maxLineDescender_221() const { return ___m_maxLineDescender_221; }
	inline float* get_address_of_m_maxLineDescender_221() { return &___m_maxLineDescender_221; }
	inline void set_m_maxLineDescender_221(float value)
	{
		___m_maxLineDescender_221 = value;
	}

	inline static int32_t get_offset_of_m_startOfLineAscender_222() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_startOfLineAscender_222)); }
	inline float get_m_startOfLineAscender_222() const { return ___m_startOfLineAscender_222; }
	inline float* get_address_of_m_startOfLineAscender_222() { return &___m_startOfLineAscender_222; }
	inline void set_m_startOfLineAscender_222(float value)
	{
		___m_startOfLineAscender_222 = value;
	}

	inline static int32_t get_offset_of_m_startOfLineDescender_223() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_startOfLineDescender_223)); }
	inline float get_m_startOfLineDescender_223() const { return ___m_startOfLineDescender_223; }
	inline float* get_address_of_m_startOfLineDescender_223() { return &___m_startOfLineDescender_223; }
	inline void set_m_startOfLineDescender_223(float value)
	{
		___m_startOfLineDescender_223 = value;
	}

	inline static int32_t get_offset_of_m_lineOffset_224() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineOffset_224)); }
	inline float get_m_lineOffset_224() const { return ___m_lineOffset_224; }
	inline float* get_address_of_m_lineOffset_224() { return &___m_lineOffset_224; }
	inline void set_m_lineOffset_224(float value)
	{
		___m_lineOffset_224 = value;
	}

	inline static int32_t get_offset_of_m_meshExtents_225() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_meshExtents_225)); }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  get_m_meshExtents_225() const { return ___m_meshExtents_225; }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA * get_address_of_m_meshExtents_225() { return &___m_meshExtents_225; }
	inline void set_m_meshExtents_225(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  value)
	{
		___m_meshExtents_225 = value;
	}

	inline static int32_t get_offset_of_m_htmlColor_226() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_htmlColor_226)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_htmlColor_226() const { return ___m_htmlColor_226; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_htmlColor_226() { return &___m_htmlColor_226; }
	inline void set_m_htmlColor_226(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_htmlColor_226 = value;
	}

	inline static int32_t get_offset_of_m_colorStack_227() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_colorStack_227)); }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  get_m_colorStack_227() const { return ___m_colorStack_227; }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D * get_address_of_m_colorStack_227() { return &___m_colorStack_227; }
	inline void set_m_colorStack_227(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  value)
	{
		___m_colorStack_227 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_colorStack_227))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_underlineColorStack_228() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_underlineColorStack_228)); }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  get_m_underlineColorStack_228() const { return ___m_underlineColorStack_228; }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D * get_address_of_m_underlineColorStack_228() { return &___m_underlineColorStack_228; }
	inline void set_m_underlineColorStack_228(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  value)
	{
		___m_underlineColorStack_228 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_underlineColorStack_228))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_strikethroughColorStack_229() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_strikethroughColorStack_229)); }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  get_m_strikethroughColorStack_229() const { return ___m_strikethroughColorStack_229; }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D * get_address_of_m_strikethroughColorStack_229() { return &___m_strikethroughColorStack_229; }
	inline void set_m_strikethroughColorStack_229(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  value)
	{
		___m_strikethroughColorStack_229 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_strikethroughColorStack_229))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_HighlightStateStack_230() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_HighlightStateStack_230)); }
	inline TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E  get_m_HighlightStateStack_230() const { return ___m_HighlightStateStack_230; }
	inline TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E * get_address_of_m_HighlightStateStack_230() { return &___m_HighlightStateStack_230; }
	inline void set_m_HighlightStateStack_230(TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E  value)
	{
		___m_HighlightStateStack_230 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_HighlightStateStack_230))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_colorGradientPreset_231() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_colorGradientPreset_231)); }
	inline TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * get_m_colorGradientPreset_231() const { return ___m_colorGradientPreset_231; }
	inline TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 ** get_address_of_m_colorGradientPreset_231() { return &___m_colorGradientPreset_231; }
	inline void set_m_colorGradientPreset_231(TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * value)
	{
		___m_colorGradientPreset_231 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_colorGradientPreset_231), (void*)value);
	}

	inline static int32_t get_offset_of_m_colorGradientStack_232() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_colorGradientStack_232)); }
	inline TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804  get_m_colorGradientStack_232() const { return ___m_colorGradientStack_232; }
	inline TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804 * get_address_of_m_colorGradientStack_232() { return &___m_colorGradientStack_232; }
	inline void set_m_colorGradientStack_232(TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804  value)
	{
		___m_colorGradientStack_232 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_colorGradientStack_232))->___itemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_colorGradientStack_232))->___m_DefaultItem_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_colorGradientPresetIsTinted_233() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_colorGradientPresetIsTinted_233)); }
	inline bool get_m_colorGradientPresetIsTinted_233() const { return ___m_colorGradientPresetIsTinted_233; }
	inline bool* get_address_of_m_colorGradientPresetIsTinted_233() { return &___m_colorGradientPresetIsTinted_233; }
	inline void set_m_colorGradientPresetIsTinted_233(bool value)
	{
		___m_colorGradientPresetIsTinted_233 = value;
	}

	inline static int32_t get_offset_of_m_tabSpacing_234() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_tabSpacing_234)); }
	inline float get_m_tabSpacing_234() const { return ___m_tabSpacing_234; }
	inline float* get_address_of_m_tabSpacing_234() { return &___m_tabSpacing_234; }
	inline void set_m_tabSpacing_234(float value)
	{
		___m_tabSpacing_234 = value;
	}

	inline static int32_t get_offset_of_m_spacing_235() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_spacing_235)); }
	inline float get_m_spacing_235() const { return ___m_spacing_235; }
	inline float* get_address_of_m_spacing_235() { return &___m_spacing_235; }
	inline void set_m_spacing_235(float value)
	{
		___m_spacing_235 = value;
	}

	inline static int32_t get_offset_of_m_TextStyleStacks_236() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_TextStyleStacks_236)); }
	inline TMP_TextProcessingStack_1U5BU5D_t1E4BEAC3D61A2AD0284E919166D0F38D21540A37* get_m_TextStyleStacks_236() const { return ___m_TextStyleStacks_236; }
	inline TMP_TextProcessingStack_1U5BU5D_t1E4BEAC3D61A2AD0284E919166D0F38D21540A37** get_address_of_m_TextStyleStacks_236() { return &___m_TextStyleStacks_236; }
	inline void set_m_TextStyleStacks_236(TMP_TextProcessingStack_1U5BU5D_t1E4BEAC3D61A2AD0284E919166D0F38D21540A37* value)
	{
		___m_TextStyleStacks_236 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextStyleStacks_236), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextStyleStackDepth_237() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_TextStyleStackDepth_237)); }
	inline int32_t get_m_TextStyleStackDepth_237() const { return ___m_TextStyleStackDepth_237; }
	inline int32_t* get_address_of_m_TextStyleStackDepth_237() { return &___m_TextStyleStackDepth_237; }
	inline void set_m_TextStyleStackDepth_237(int32_t value)
	{
		___m_TextStyleStackDepth_237 = value;
	}

	inline static int32_t get_offset_of_m_ItalicAngleStack_238() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_ItalicAngleStack_238)); }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  get_m_ItalicAngleStack_238() const { return ___m_ItalicAngleStack_238; }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA * get_address_of_m_ItalicAngleStack_238() { return &___m_ItalicAngleStack_238; }
	inline void set_m_ItalicAngleStack_238(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  value)
	{
		___m_ItalicAngleStack_238 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ItalicAngleStack_238))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_ItalicAngle_239() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_ItalicAngle_239)); }
	inline int32_t get_m_ItalicAngle_239() const { return ___m_ItalicAngle_239; }
	inline int32_t* get_address_of_m_ItalicAngle_239() { return &___m_ItalicAngle_239; }
	inline void set_m_ItalicAngle_239(int32_t value)
	{
		___m_ItalicAngle_239 = value;
	}

	inline static int32_t get_offset_of_m_actionStack_240() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_actionStack_240)); }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  get_m_actionStack_240() const { return ___m_actionStack_240; }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA * get_address_of_m_actionStack_240() { return &___m_actionStack_240; }
	inline void set_m_actionStack_240(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  value)
	{
		___m_actionStack_240 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_actionStack_240))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_padding_241() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_padding_241)); }
	inline float get_m_padding_241() const { return ___m_padding_241; }
	inline float* get_address_of_m_padding_241() { return &___m_padding_241; }
	inline void set_m_padding_241(float value)
	{
		___m_padding_241 = value;
	}

	inline static int32_t get_offset_of_m_baselineOffset_242() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_baselineOffset_242)); }
	inline float get_m_baselineOffset_242() const { return ___m_baselineOffset_242; }
	inline float* get_address_of_m_baselineOffset_242() { return &___m_baselineOffset_242; }
	inline void set_m_baselineOffset_242(float value)
	{
		___m_baselineOffset_242 = value;
	}

	inline static int32_t get_offset_of_m_baselineOffsetStack_243() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_baselineOffsetStack_243)); }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  get_m_baselineOffsetStack_243() const { return ___m_baselineOffsetStack_243; }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17 * get_address_of_m_baselineOffsetStack_243() { return &___m_baselineOffsetStack_243; }
	inline void set_m_baselineOffsetStack_243(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  value)
	{
		___m_baselineOffsetStack_243 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_baselineOffsetStack_243))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_xAdvance_244() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_xAdvance_244)); }
	inline float get_m_xAdvance_244() const { return ___m_xAdvance_244; }
	inline float* get_address_of_m_xAdvance_244() { return &___m_xAdvance_244; }
	inline void set_m_xAdvance_244(float value)
	{
		___m_xAdvance_244 = value;
	}

	inline static int32_t get_offset_of_m_textElementType_245() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_textElementType_245)); }
	inline int32_t get_m_textElementType_245() const { return ___m_textElementType_245; }
	inline int32_t* get_address_of_m_textElementType_245() { return &___m_textElementType_245; }
	inline void set_m_textElementType_245(int32_t value)
	{
		___m_textElementType_245 = value;
	}

	inline static int32_t get_offset_of_m_cached_TextElement_246() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_cached_TextElement_246)); }
	inline TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832 * get_m_cached_TextElement_246() const { return ___m_cached_TextElement_246; }
	inline TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832 ** get_address_of_m_cached_TextElement_246() { return &___m_cached_TextElement_246; }
	inline void set_m_cached_TextElement_246(TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832 * value)
	{
		___m_cached_TextElement_246 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cached_TextElement_246), (void*)value);
	}

	inline static int32_t get_offset_of_m_Ellipsis_247() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_Ellipsis_247)); }
	inline SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F  get_m_Ellipsis_247() const { return ___m_Ellipsis_247; }
	inline SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F * get_address_of_m_Ellipsis_247() { return &___m_Ellipsis_247; }
	inline void set_m_Ellipsis_247(SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F  value)
	{
		___m_Ellipsis_247 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Ellipsis_247))->___character_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Ellipsis_247))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Ellipsis_247))->___material_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Underline_248() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_Underline_248)); }
	inline SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F  get_m_Underline_248() const { return ___m_Underline_248; }
	inline SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F * get_address_of_m_Underline_248() { return &___m_Underline_248; }
	inline void set_m_Underline_248(SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F  value)
	{
		___m_Underline_248 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Underline_248))->___character_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Underline_248))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Underline_248))->___material_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_defaultSpriteAsset_249() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_defaultSpriteAsset_249)); }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * get_m_defaultSpriteAsset_249() const { return ___m_defaultSpriteAsset_249; }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 ** get_address_of_m_defaultSpriteAsset_249() { return &___m_defaultSpriteAsset_249; }
	inline void set_m_defaultSpriteAsset_249(TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * value)
	{
		___m_defaultSpriteAsset_249 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultSpriteAsset_249), (void*)value);
	}

	inline static int32_t get_offset_of_m_currentSpriteAsset_250() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_currentSpriteAsset_250)); }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * get_m_currentSpriteAsset_250() const { return ___m_currentSpriteAsset_250; }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 ** get_address_of_m_currentSpriteAsset_250() { return &___m_currentSpriteAsset_250; }
	inline void set_m_currentSpriteAsset_250(TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * value)
	{
		___m_currentSpriteAsset_250 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_currentSpriteAsset_250), (void*)value);
	}

	inline static int32_t get_offset_of_m_spriteCount_251() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_spriteCount_251)); }
	inline int32_t get_m_spriteCount_251() const { return ___m_spriteCount_251; }
	inline int32_t* get_address_of_m_spriteCount_251() { return &___m_spriteCount_251; }
	inline void set_m_spriteCount_251(int32_t value)
	{
		___m_spriteCount_251 = value;
	}

	inline static int32_t get_offset_of_m_spriteIndex_252() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_spriteIndex_252)); }
	inline int32_t get_m_spriteIndex_252() const { return ___m_spriteIndex_252; }
	inline int32_t* get_address_of_m_spriteIndex_252() { return &___m_spriteIndex_252; }
	inline void set_m_spriteIndex_252(int32_t value)
	{
		___m_spriteIndex_252 = value;
	}

	inline static int32_t get_offset_of_m_spriteAnimationID_253() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_spriteAnimationID_253)); }
	inline int32_t get_m_spriteAnimationID_253() const { return ___m_spriteAnimationID_253; }
	inline int32_t* get_address_of_m_spriteAnimationID_253() { return &___m_spriteAnimationID_253; }
	inline void set_m_spriteAnimationID_253(int32_t value)
	{
		___m_spriteAnimationID_253 = value;
	}

	inline static int32_t get_offset_of_m_ignoreActiveState_256() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_ignoreActiveState_256)); }
	inline bool get_m_ignoreActiveState_256() const { return ___m_ignoreActiveState_256; }
	inline bool* get_address_of_m_ignoreActiveState_256() { return &___m_ignoreActiveState_256; }
	inline void set_m_ignoreActiveState_256(bool value)
	{
		___m_ignoreActiveState_256 = value;
	}

	inline static int32_t get_offset_of_m_TextBackingArray_257() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_TextBackingArray_257)); }
	inline TextBackingContainer_t50AA56C265D2A3DB961E3DD200165FE78270562B  get_m_TextBackingArray_257() const { return ___m_TextBackingArray_257; }
	inline TextBackingContainer_t50AA56C265D2A3DB961E3DD200165FE78270562B * get_address_of_m_TextBackingArray_257() { return &___m_TextBackingArray_257; }
	inline void set_m_TextBackingArray_257(TextBackingContainer_t50AA56C265D2A3DB961E3DD200165FE78270562B  value)
	{
		___m_TextBackingArray_257 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_TextBackingArray_257))->___m_Array_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_k_Power_258() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___k_Power_258)); }
	inline DecimalU5BU5D_tAA3302A4A6ACCE77638A2346993A0FAAE2F9FDBA* get_k_Power_258() const { return ___k_Power_258; }
	inline DecimalU5BU5D_tAA3302A4A6ACCE77638A2346993A0FAAE2F9FDBA** get_address_of_k_Power_258() { return &___k_Power_258; }
	inline void set_k_Power_258(DecimalU5BU5D_tAA3302A4A6ACCE77638A2346993A0FAAE2F9FDBA* value)
	{
		___k_Power_258 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___k_Power_258), (void*)value);
	}
};

struct TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields
{
public:
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD* ___m_materialReferences_45;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * ___m_materialReferenceIndexLookup_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3  ___m_materialReferenceStack_47;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___s_colorWhite_55;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tD4EA9DBB68453335E80C2917C93BDE503A28F3F0 * ___OnFontAssetRequest_163;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t540BC7F75C78E0C70D6C37F2D220418DABC4B9EA * ___OnSpriteAssetRequest_164;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___m_htmlTag_187;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t81DC8CE2ED156F9CA996E2DC8A64A973A156D615* ___m_xmlAttribute_188;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___m_attributeParameterValues_189;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  ___m_SavedWordWrapState_201;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  ___m_SavedLineState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  ___m_SavedEllipsisState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  ___m_SavedLastValidState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  ___m_SavedSoftLineBreakState_205;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7  ___m_EllipsisInsertionCandidateStack_206;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___k_ParseTextMarker_254;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___k_InsertNewLineMarker_255;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___k_LargePositiveVector2_259;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___k_LargeNegativeVector2_260;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_261;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_262;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_263;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_264;

public:
	inline static int32_t get_offset_of_m_materialReferences_45() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___m_materialReferences_45)); }
	inline MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD* get_m_materialReferences_45() const { return ___m_materialReferences_45; }
	inline MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD** get_address_of_m_materialReferences_45() { return &___m_materialReferences_45; }
	inline void set_m_materialReferences_45(MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD* value)
	{
		___m_materialReferences_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_materialReferences_45), (void*)value);
	}

	inline static int32_t get_offset_of_m_materialReferenceIndexLookup_46() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___m_materialReferenceIndexLookup_46)); }
	inline Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * get_m_materialReferenceIndexLookup_46() const { return ___m_materialReferenceIndexLookup_46; }
	inline Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 ** get_address_of_m_materialReferenceIndexLookup_46() { return &___m_materialReferenceIndexLookup_46; }
	inline void set_m_materialReferenceIndexLookup_46(Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * value)
	{
		___m_materialReferenceIndexLookup_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_materialReferenceIndexLookup_46), (void*)value);
	}

	inline static int32_t get_offset_of_m_materialReferenceStack_47() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___m_materialReferenceStack_47)); }
	inline TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3  get_m_materialReferenceStack_47() const { return ___m_materialReferenceStack_47; }
	inline TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3 * get_address_of_m_materialReferenceStack_47() { return &___m_materialReferenceStack_47; }
	inline void set_m_materialReferenceStack_47(TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3  value)
	{
		___m_materialReferenceStack_47 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_materialReferenceStack_47))->___itemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_materialReferenceStack_47))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_materialReferenceStack_47))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_materialReferenceStack_47))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_materialReferenceStack_47))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_s_colorWhite_55() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___s_colorWhite_55)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_s_colorWhite_55() const { return ___s_colorWhite_55; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_s_colorWhite_55() { return &___s_colorWhite_55; }
	inline void set_s_colorWhite_55(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___s_colorWhite_55 = value;
	}

	inline static int32_t get_offset_of_OnFontAssetRequest_163() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___OnFontAssetRequest_163)); }
	inline Func_3_tD4EA9DBB68453335E80C2917C93BDE503A28F3F0 * get_OnFontAssetRequest_163() const { return ___OnFontAssetRequest_163; }
	inline Func_3_tD4EA9DBB68453335E80C2917C93BDE503A28F3F0 ** get_address_of_OnFontAssetRequest_163() { return &___OnFontAssetRequest_163; }
	inline void set_OnFontAssetRequest_163(Func_3_tD4EA9DBB68453335E80C2917C93BDE503A28F3F0 * value)
	{
		___OnFontAssetRequest_163 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnFontAssetRequest_163), (void*)value);
	}

	inline static int32_t get_offset_of_OnSpriteAssetRequest_164() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___OnSpriteAssetRequest_164)); }
	inline Func_3_t540BC7F75C78E0C70D6C37F2D220418DABC4B9EA * get_OnSpriteAssetRequest_164() const { return ___OnSpriteAssetRequest_164; }
	inline Func_3_t540BC7F75C78E0C70D6C37F2D220418DABC4B9EA ** get_address_of_OnSpriteAssetRequest_164() { return &___OnSpriteAssetRequest_164; }
	inline void set_OnSpriteAssetRequest_164(Func_3_t540BC7F75C78E0C70D6C37F2D220418DABC4B9EA * value)
	{
		___OnSpriteAssetRequest_164 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSpriteAssetRequest_164), (void*)value);
	}

	inline static int32_t get_offset_of_m_htmlTag_187() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___m_htmlTag_187)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_m_htmlTag_187() const { return ___m_htmlTag_187; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_m_htmlTag_187() { return &___m_htmlTag_187; }
	inline void set_m_htmlTag_187(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___m_htmlTag_187 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_htmlTag_187), (void*)value);
	}

	inline static int32_t get_offset_of_m_xmlAttribute_188() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___m_xmlAttribute_188)); }
	inline RichTextTagAttributeU5BU5D_t81DC8CE2ED156F9CA996E2DC8A64A973A156D615* get_m_xmlAttribute_188() const { return ___m_xmlAttribute_188; }
	inline RichTextTagAttributeU5BU5D_t81DC8CE2ED156F9CA996E2DC8A64A973A156D615** get_address_of_m_xmlAttribute_188() { return &___m_xmlAttribute_188; }
	inline void set_m_xmlAttribute_188(RichTextTagAttributeU5BU5D_t81DC8CE2ED156F9CA996E2DC8A64A973A156D615* value)
	{
		___m_xmlAttribute_188 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_xmlAttribute_188), (void*)value);
	}

	inline static int32_t get_offset_of_m_attributeParameterValues_189() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___m_attributeParameterValues_189)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_m_attributeParameterValues_189() const { return ___m_attributeParameterValues_189; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_m_attributeParameterValues_189() { return &___m_attributeParameterValues_189; }
	inline void set_m_attributeParameterValues_189(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___m_attributeParameterValues_189 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_attributeParameterValues_189), (void*)value);
	}

	inline static int32_t get_offset_of_m_SavedWordWrapState_201() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___m_SavedWordWrapState_201)); }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  get_m_SavedWordWrapState_201() const { return ___m_SavedWordWrapState_201; }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99 * get_address_of_m_SavedWordWrapState_201() { return &___m_SavedWordWrapState_201; }
	inline void set_m_SavedWordWrapState_201(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  value)
	{
		___m_SavedWordWrapState_201 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedWordWrapState_201))->___textInfo_35), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_201))->___italicAngleStack_42))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_201))->___colorStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_201))->___underlineColorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_201))->___strikethroughColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_201))->___highlightColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_201))->___highlightStateStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_201))->___colorGradientStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_201))->___colorGradientStack_48))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_201))->___sizeStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_201))->___indentStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_201))->___fontWeightStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_201))->___styleStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_201))->___baselineStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_201))->___actionStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_201))->___materialReferenceStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedWordWrapState_201))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedWordWrapState_201))->___materialReferenceStack_55))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedWordWrapState_201))->___materialReferenceStack_55))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedWordWrapState_201))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_201))->___lineJustificationStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedWordWrapState_201))->___currentFontAsset_58), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedWordWrapState_201))->___currentSpriteAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedWordWrapState_201))->___currentMaterial_60), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_SavedLineState_202() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___m_SavedLineState_202)); }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  get_m_SavedLineState_202() const { return ___m_SavedLineState_202; }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99 * get_address_of_m_SavedLineState_202() { return &___m_SavedLineState_202; }
	inline void set_m_SavedLineState_202(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  value)
	{
		___m_SavedLineState_202 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLineState_202))->___textInfo_35), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_202))->___italicAngleStack_42))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_202))->___colorStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_202))->___underlineColorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_202))->___strikethroughColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_202))->___highlightColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_202))->___highlightStateStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_202))->___colorGradientStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_202))->___colorGradientStack_48))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_202))->___sizeStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_202))->___indentStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_202))->___fontWeightStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_202))->___styleStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_202))->___baselineStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_202))->___actionStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_202))->___materialReferenceStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLineState_202))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLineState_202))->___materialReferenceStack_55))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLineState_202))->___materialReferenceStack_55))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLineState_202))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_202))->___lineJustificationStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLineState_202))->___currentFontAsset_58), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLineState_202))->___currentSpriteAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLineState_202))->___currentMaterial_60), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_SavedEllipsisState_203() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___m_SavedEllipsisState_203)); }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  get_m_SavedEllipsisState_203() const { return ___m_SavedEllipsisState_203; }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99 * get_address_of_m_SavedEllipsisState_203() { return &___m_SavedEllipsisState_203; }
	inline void set_m_SavedEllipsisState_203(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  value)
	{
		___m_SavedEllipsisState_203 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedEllipsisState_203))->___textInfo_35), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_203))->___italicAngleStack_42))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_203))->___colorStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_203))->___underlineColorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_203))->___strikethroughColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_203))->___highlightColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_203))->___highlightStateStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_203))->___colorGradientStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_203))->___colorGradientStack_48))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_203))->___sizeStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_203))->___indentStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_203))->___fontWeightStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_203))->___styleStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_203))->___baselineStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_203))->___actionStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_203))->___materialReferenceStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedEllipsisState_203))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedEllipsisState_203))->___materialReferenceStack_55))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedEllipsisState_203))->___materialReferenceStack_55))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedEllipsisState_203))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_203))->___lineJustificationStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedEllipsisState_203))->___currentFontAsset_58), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedEllipsisState_203))->___currentSpriteAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedEllipsisState_203))->___currentMaterial_60), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_SavedLastValidState_204() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___m_SavedLastValidState_204)); }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  get_m_SavedLastValidState_204() const { return ___m_SavedLastValidState_204; }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99 * get_address_of_m_SavedLastValidState_204() { return &___m_SavedLastValidState_204; }
	inline void set_m_SavedLastValidState_204(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  value)
	{
		___m_SavedLastValidState_204 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLastValidState_204))->___textInfo_35), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_204))->___italicAngleStack_42))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_204))->___colorStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_204))->___underlineColorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_204))->___strikethroughColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_204))->___highlightColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_204))->___highlightStateStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_204))->___colorGradientStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_204))->___colorGradientStack_48))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_204))->___sizeStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_204))->___indentStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_204))->___fontWeightStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_204))->___styleStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_204))->___baselineStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_204))->___actionStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_204))->___materialReferenceStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLastValidState_204))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLastValidState_204))->___materialReferenceStack_55))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLastValidState_204))->___materialReferenceStack_55))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLastValidState_204))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_204))->___lineJustificationStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLastValidState_204))->___currentFontAsset_58), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLastValidState_204))->___currentSpriteAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLastValidState_204))->___currentMaterial_60), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_SavedSoftLineBreakState_205() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___m_SavedSoftLineBreakState_205)); }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  get_m_SavedSoftLineBreakState_205() const { return ___m_SavedSoftLineBreakState_205; }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99 * get_address_of_m_SavedSoftLineBreakState_205() { return &___m_SavedSoftLineBreakState_205; }
	inline void set_m_SavedSoftLineBreakState_205(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  value)
	{
		___m_SavedSoftLineBreakState_205 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedSoftLineBreakState_205))->___textInfo_35), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_205))->___italicAngleStack_42))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_205))->___colorStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_205))->___underlineColorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_205))->___strikethroughColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_205))->___highlightColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_205))->___highlightStateStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_205))->___colorGradientStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_205))->___colorGradientStack_48))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_205))->___sizeStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_205))->___indentStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_205))->___fontWeightStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_205))->___styleStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_205))->___baselineStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_205))->___actionStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_205))->___materialReferenceStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedSoftLineBreakState_205))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedSoftLineBreakState_205))->___materialReferenceStack_55))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedSoftLineBreakState_205))->___materialReferenceStack_55))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedSoftLineBreakState_205))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_205))->___lineJustificationStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedSoftLineBreakState_205))->___currentFontAsset_58), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedSoftLineBreakState_205))->___currentSpriteAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedSoftLineBreakState_205))->___currentMaterial_60), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_EllipsisInsertionCandidateStack_206() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___m_EllipsisInsertionCandidateStack_206)); }
	inline TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7  get_m_EllipsisInsertionCandidateStack_206() const { return ___m_EllipsisInsertionCandidateStack_206; }
	inline TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7 * get_address_of_m_EllipsisInsertionCandidateStack_206() { return &___m_EllipsisInsertionCandidateStack_206; }
	inline void set_m_EllipsisInsertionCandidateStack_206(TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7  value)
	{
		___m_EllipsisInsertionCandidateStack_206 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_EllipsisInsertionCandidateStack_206))->___itemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___textInfo_35), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___italicAngleStack_42))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___colorStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___underlineColorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___strikethroughColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___highlightColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___highlightStateStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___colorGradientStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___colorGradientStack_48))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___sizeStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___indentStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___fontWeightStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___styleStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___baselineStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___actionStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___materialReferenceStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___materialReferenceStack_55))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___materialReferenceStack_55))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___lineJustificationStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___currentFontAsset_58), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___currentSpriteAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_EllipsisInsertionCandidateStack_206))->___m_DefaultItem_2))->___currentMaterial_60), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_k_ParseTextMarker_254() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___k_ParseTextMarker_254)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_k_ParseTextMarker_254() const { return ___k_ParseTextMarker_254; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_k_ParseTextMarker_254() { return &___k_ParseTextMarker_254; }
	inline void set_k_ParseTextMarker_254(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___k_ParseTextMarker_254 = value;
	}

	inline static int32_t get_offset_of_k_InsertNewLineMarker_255() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___k_InsertNewLineMarker_255)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_k_InsertNewLineMarker_255() const { return ___k_InsertNewLineMarker_255; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_k_InsertNewLineMarker_255() { return &___k_InsertNewLineMarker_255; }
	inline void set_k_InsertNewLineMarker_255(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___k_InsertNewLineMarker_255 = value;
	}

	inline static int32_t get_offset_of_k_LargePositiveVector2_259() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___k_LargePositiveVector2_259)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_k_LargePositiveVector2_259() const { return ___k_LargePositiveVector2_259; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_k_LargePositiveVector2_259() { return &___k_LargePositiveVector2_259; }
	inline void set_k_LargePositiveVector2_259(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___k_LargePositiveVector2_259 = value;
	}

	inline static int32_t get_offset_of_k_LargeNegativeVector2_260() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___k_LargeNegativeVector2_260)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_k_LargeNegativeVector2_260() const { return ___k_LargeNegativeVector2_260; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_k_LargeNegativeVector2_260() { return &___k_LargeNegativeVector2_260; }
	inline void set_k_LargeNegativeVector2_260(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___k_LargeNegativeVector2_260 = value;
	}

	inline static int32_t get_offset_of_k_LargePositiveFloat_261() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___k_LargePositiveFloat_261)); }
	inline float get_k_LargePositiveFloat_261() const { return ___k_LargePositiveFloat_261; }
	inline float* get_address_of_k_LargePositiveFloat_261() { return &___k_LargePositiveFloat_261; }
	inline void set_k_LargePositiveFloat_261(float value)
	{
		___k_LargePositiveFloat_261 = value;
	}

	inline static int32_t get_offset_of_k_LargeNegativeFloat_262() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___k_LargeNegativeFloat_262)); }
	inline float get_k_LargeNegativeFloat_262() const { return ___k_LargeNegativeFloat_262; }
	inline float* get_address_of_k_LargeNegativeFloat_262() { return &___k_LargeNegativeFloat_262; }
	inline void set_k_LargeNegativeFloat_262(float value)
	{
		___k_LargeNegativeFloat_262 = value;
	}

	inline static int32_t get_offset_of_k_LargePositiveInt_263() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___k_LargePositiveInt_263)); }
	inline int32_t get_k_LargePositiveInt_263() const { return ___k_LargePositiveInt_263; }
	inline int32_t* get_address_of_k_LargePositiveInt_263() { return &___k_LargePositiveInt_263; }
	inline void set_k_LargePositiveInt_263(int32_t value)
	{
		___k_LargePositiveInt_263 = value;
	}

	inline static int32_t get_offset_of_k_LargeNegativeInt_264() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___k_LargeNegativeInt_264)); }
	inline int32_t get_k_LargeNegativeInt_264() const { return ___k_LargeNegativeInt_264; }
	inline int32_t* get_address_of_k_LargeNegativeInt_264() { return &___k_LargeNegativeInt_264; }
	inline void set_k_LargeNegativeInt_264(int32_t value)
	{
		___k_LargeNegativeInt_264 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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


// !!0 Microsoft.MixedReality.Toolkit.XRSubsystemHelpers::GetFirstRunningSubsystem<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * XRSubsystemHelpers_GetFirstRunningSubsystem_TisRuntimeObject_m0FEA38E009C9119E487C4F75A1F08FA0239D6016_gshared (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystem`3<System.Object,System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MRTKSubsystem_3__ctor_m7F99705D5281FDE1DE26C667D09EBD1702CF02EC_gshared (MRTKSubsystem_3_t49F739AC5ED36E878F901F2DAFBE328E4AD5FA9E * __this, const RuntimeMethod* method);
// !2 UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<System.Object,System.Object,System.Object>::get_provider()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * SubsystemWithProvider_3_get_provider_m1C17796ABB973D3A5F6B1C31B84298C076AA7E1B_gshared_inline (SubsystemWithProvider_3_t80ABC03E4A5E84C63AB7C26719F2C5CA1FAA7EC2 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemDescriptorWithProvider_2__ctor_mF969744E314332AC762279256CF288A3769ABC93_gshared (SubsystemDescriptorWithProvider_2_t4F631AC12A41E95D188968B1776F2A1F983B90A4 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.XRSubsystemHelpers::CheckTypes<System.Object,System.Object>(System.String,System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRSubsystemHelpers_CheckTypes_TisRuntimeObject_TisRuntimeObject_m3CFE89F081F8A4ABA3B2C2E6533EAAC909F4892F_gshared (String_t* ___name0, Type_t * ___subsystemTypeOverride1, Type_t * ___providerType2, const RuntimeMethod* method);
// !!1 Microsoft.MixedReality.Toolkit.XRSubsystemHelpers::ConstructCinfo<System.Object,Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1  XRSubsystemHelpers_ConstructCinfo_TisRuntimeObject_TisAccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1_m3149A4DFD08837AAFF2DF91DC10469969F09C285_gshared (const RuntimeMethod* method);
// System.Boolean UnityEngine.Component::TryGetComponent<System.Object>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_TryGetComponent_TisRuntimeObject_m409D64ADC25ED175ADC7ED4C3F7ABF5439AD63AF_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, RuntimeObject ** ___component0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2A1B34C27CAE6ED7FD924E5F59C0A1ACBBF22C38_gshared (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemProvider`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MRTKSubsystemProvider_1__ctor_m860FF5DC84B4B9A81EA973D224B1FE69243BC6B4_gshared (MRTKSubsystemProvider_1_tB9483814C5602281344C4305E2F1ACD8672CF3BB * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// !!0 Microsoft.MixedReality.Toolkit.XRSubsystemHelpers::GetConfiguration<System.Object,System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * XRSubsystemHelpers_GetConfiguration_TisRuntimeObject_TisRuntimeObject_m68410B65EA4A21A8718A5DAA92AAAC7179719101_gshared (const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/KeyCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tCA4820F8266AF4059CC5A14888D8195F0D797499 * Dictionary_2_get_Keys_m771BB389A4CB93B7EDBDC71F503B50049B8999C7_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m6465DEF706EB529B4227F2AF79338419D517EDF9_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/ValueCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t0ACCC25930444F15B1857D00E9FB6021E5842852 * Dictionary_2_get_Values_mC8EC343FADAE6B9CB93639D7FBCDB19ACD807DB5_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t125181DA94FAAEC346371E0582D50084E0B602E2  ValueCollection_GetEnumerator_m401C0FF4E5F0194244B19D7B9EF4B173FB7E88C3_gshared (ValueCollection_t0ACCC25930444F15B1857D00E9FB6021E5842852 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m5EAB60888D4E661A01C7F32AD890D785F8B6225B_gshared_inline (Enumerator_t125181DA94FAAEC346371E0582D50084E0B602E2 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mAEC22D730EB290F4405C47EE9F330B3CD4E2DC68_gshared (Enumerator_t125181DA94FAAEC346371E0582D50084E0B602E2 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m20B0D06631B9715D2C26F9F0D0665BF0092FF7A6_gshared (Enumerator_t125181DA94FAAEC346371E0582D50084E0B602E2 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m99C700668AC6D272188471D2D6B784A2B5636C8E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::TryGetComponent<System.Object>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_TryGetComponent_TisRuntimeObject_mC7639C3E3E2A65695113BCF25718826CC392D6CB_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, RuntimeObject ** ___component0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Boolean>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_gshared (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * __this, bool ___obj0, const RuntimeMethod* method);

// System.Boolean UnityEngine.SubsystemsImplementation.SubsystemWithProvider::get_running()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SubsystemWithProvider_get_running_m42399652EC4AB466AFBAC9035FA77C1BD6C72406_inline (SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E * __this, const RuntimeMethod* method);
// !!0 Microsoft.MixedReality.Toolkit.XRSubsystemHelpers::GetFirstRunningSubsystem<Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem>()
inline AccessibilitySubsystem_t87660EFBF1E770B16033F7AD38AB76370B50895B * XRSubsystemHelpers_GetFirstRunningSubsystem_TisAccessibilitySubsystem_t87660EFBF1E770B16033F7AD38AB76370B50895B_mD2359E88D4EFCBD3575ED235A1E166C653A77D52 (const RuntimeMethod* method)
{
	return ((  AccessibilitySubsystem_t87660EFBF1E770B16033F7AD38AB76370B50895B * (*) (const RuntimeMethod*))XRSubsystemHelpers_GetFirstRunningSubsystem_TisRuntimeObject_m0FEA38E009C9119E487C4F75A1F08FA0239D6016_gshared)(method);
}
// System.Void Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystem`3<Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem,Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor,Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem/Provider>::.ctor()
inline void MRTKSubsystem_3__ctor_m0D0AD00677C420F33B52262106A8520A459D1233 (MRTKSubsystem_3_t5F52E397AE4EBAFBD7876AC3F752EA1E37851EFD * __this, const RuntimeMethod* method)
{
	((  void (*) (MRTKSubsystem_3_t5F52E397AE4EBAFBD7876AC3F752EA1E37851EFD *, const RuntimeMethod*))MRTKSubsystem_3__ctor_m7F99705D5281FDE1DE26C667D09EBD1702CF02EC_gshared)(__this, method);
}
// !2 UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem,Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor,Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem/Provider>::get_provider()
inline Provider_t1B885BF706B62D27FB206A6C1631D2D5699CB596 * SubsystemWithProvider_3_get_provider_m09F2214A50AEB93124216EEEB94D6B75E862C64A_inline (SubsystemWithProvider_3_t154F5F2C7158DFC3C3FA7F293802A56FC15DA196 * __this, const RuntimeMethod* method)
{
	return ((  Provider_t1B885BF706B62D27FB206A6C1631D2D5699CB596 * (*) (SubsystemWithProvider_3_t154F5F2C7158DFC3C3FA7F293802A56FC15DA196 *, const RuntimeMethod*))SubsystemWithProvider_3_get_provider_m1C17796ABB973D3A5F6B1C31B84298C076AA7E1B_gshared_inline)(__this, method);
}
// Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor::Create(Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AccessibilitySubsystemDescriptor_t8E1234483302B1C8578B13351406A4782F203A8C * AccessibilitySubsystemDescriptor_Create_m4F72BC53ACA18F19261307D18076A7368204A20E (AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1  ___cinfo0, const RuntimeMethod* method);
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorStore::RegisterDescriptor(UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemDescriptorStore_RegisterDescriptor_m5586866BB233EF26B98640851816DD1764657688 (SubsystemDescriptorWithProvider_t32DD334657CFBA22F2FBA399258B087104A29C3E * ___descriptor0, const RuntimeMethod* method);
// System.String Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AccessibilitySubsystemCinfo_get_Name_mAEFE7ECD134505F8A539CCC28A53B74AC32D0141_inline (AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::set_Name(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AccessibilitySubsystemCinfo_set_Name_mDE5DB332C91A428D352B3B05542F119F96E6FA3E_inline (AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.String Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::get_DisplayName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AccessibilitySubsystemCinfo_get_DisplayName_m6E96C34FB1643787BB1A90CC636FEF1002632CBD_inline (AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::set_DisplayName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AccessibilitySubsystemCinfo_set_DisplayName_mDE3C3A930DBA22355FF21BF9A3162F0A68800A21_inline (AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.String Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::get_Author()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AccessibilitySubsystemCinfo_get_Author_m78FC773521537E06658B3B37E8097ED526C9ADD5_inline (AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::set_Author(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AccessibilitySubsystemCinfo_set_Author_m2818A3C728C081C81057451DD10C80319FD86FFD_inline (AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Type Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::get_ConfigType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * AccessibilitySubsystemCinfo_get_ConfigType_m7F4958ADDF9F967D7D2B3037EA7654F48DC345A9_inline (AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::set_ConfigType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AccessibilitySubsystemCinfo_set_ConfigType_m2CF378889C3A7E77A393F73BF0FE242E60D66610_inline (AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1 * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Type Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::get_ProviderType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * AccessibilitySubsystemCinfo_get_ProviderType_m051410A8508E5E9D123B3DA2604F6AD309724C8D_inline (AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::set_ProviderType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AccessibilitySubsystemCinfo_set_ProviderType_m94D2185D2D5D30649983089F7479AFE753AEE103_inline (AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1 * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Type Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::get_SubsystemTypeOverride()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * AccessibilitySubsystemCinfo_get_SubsystemTypeOverride_m293E9A3B3EAA0096CD68A9CF8A29EC09C49EA07E_inline (AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::set_SubsystemTypeOverride(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AccessibilitySubsystemCinfo_set_SubsystemTypeOverride_mE6F0018C4BFEAE9F3FCFDEF53F2C3F06EF69E413_inline (AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1 * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::Equals(Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AccessibilitySubsystemCinfo_Equals_mCD42C3DEE86AA963A48B0AC2FA2E32DBD005AA25 (AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1 * __this, AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1  ___other0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AccessibilitySubsystemCinfo_Equals_m82153E62E85DEEC6A82F8D2F4C55B198EFACE29A (AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::op_Equality(Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo,Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AccessibilitySubsystemCinfo_op_Equality_m6CE2BF29EC7E8C90503926A1747FCA85751A5BC7 (AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1  ___lhs0, AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1  ___rhs1, const RuntimeMethod* method);
// System.Void System.ApplicationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationException__ctor_mF8E9704C91C2F1912909448E5BABFE9EC61D4E8F (ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Int32 Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AccessibilitySubsystemCinfo_GetHashCode_m0080E9D81666CAFEAB6CE67DF1E43F1AC7A8F785 (AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseSubsystemConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseSubsystemConfig__ctor_m47DB5EEFFF324042A03D2D327F3752F321D47F90 (BaseSubsystemConfig_t6A872EC7E317759CA469B4184C04599CB5520E09 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem,Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem/Provider>::.ctor()
inline void SubsystemDescriptorWithProvider_2__ctor_mAB3A2A7FCD71DEF8FA38A98DB5EFB24F0CB03B96 (SubsystemDescriptorWithProvider_2_t2D1854AB87A3269BC7E36F53FF45696C2BE5BD7E * __this, const RuntimeMethod* method)
{
	((  void (*) (SubsystemDescriptorWithProvider_2_t2D1854AB87A3269BC7E36F53FF45696C2BE5BD7E *, const RuntimeMethod*))SubsystemDescriptorWithProvider_2__ctor_mF969744E314332AC762279256CF288A3769ABC93_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystemDescriptor_set_Name_m9CB5B30E150ECBFDFAE816CAC4AE90027F29D6C7 (AccessibilitySubsystemDescriptor_t8E1234483302B1C8578B13351406A4782F203A8C * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor::set_DisplayName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AccessibilitySubsystemDescriptor_set_DisplayName_mC7E899436FC679A1D6EE2BB6FD457CD15E1F34B6_inline (AccessibilitySubsystemDescriptor_t8E1234483302B1C8578B13351406A4782F203A8C * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor::set_Author(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AccessibilitySubsystemDescriptor_set_Author_m47775B486E1D03B12E5008B5E2DE0B1221AA8F99_inline (AccessibilitySubsystemDescriptor_t8E1234483302B1C8578B13351406A4782F203A8C * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor::set_ProviderType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystemDescriptor_set_ProviderType_m6C18FC545C4D28C0051F879C474160E3024F7069 (AccessibilitySubsystemDescriptor_t8E1234483302B1C8578B13351406A4782F203A8C * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor::set_SubsystemTypeOverride(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystemDescriptor_set_SubsystemTypeOverride_mB65FA48458AE2C18606ABC622B8C949731DC5E94 (AccessibilitySubsystemDescriptor_t8E1234483302B1C8578B13351406A4782F203A8C * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.String UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::get_id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SubsystemDescriptorWithProvider_get_id_m0341F88D726C677F81277CD2C4A43919EA942861_inline (SubsystemDescriptorWithProvider_t32DD334657CFBA22F2FBA399258B087104A29C3E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::set_id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubsystemDescriptorWithProvider_set_id_mEC6863CDB21597618394D2ED4182A9ED3ACBF220_inline (SubsystemDescriptorWithProvider_t32DD334657CFBA22F2FBA399258B087104A29C3E * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Type UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::get_providerType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * SubsystemDescriptorWithProvider_get_providerType_m61D62BCC0790E915342C35E416324F065300A29E_inline (SubsystemDescriptorWithProvider_t32DD334657CFBA22F2FBA399258B087104A29C3E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::set_providerType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubsystemDescriptorWithProvider_set_providerType_m672B1F3CC7A12E8569D801F7C79538753C0D9C2D_inline (SubsystemDescriptorWithProvider_t32DD334657CFBA22F2FBA399258B087104A29C3E * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Type UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::get_subsystemTypeOverride()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * SubsystemDescriptorWithProvider_get_subsystemTypeOverride_mC1EE74BB1F7FC5ABEDEB70BD624B018A17206888_inline (SubsystemDescriptorWithProvider_t32DD334657CFBA22F2FBA399258B087104A29C3E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::set_subsystemTypeOverride(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubsystemDescriptorWithProvider_set_subsystemTypeOverride_mA453100A7A8FAB35FBE7154E63B5A17D518F41B6_inline (SubsystemDescriptorWithProvider_t32DD334657CFBA22F2FBA399258B087104A29C3E * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.XRSubsystemHelpers::CheckTypes<Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem,Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem/Provider>(System.String,System.Type,System.Type)
inline bool XRSubsystemHelpers_CheckTypes_TisAccessibilitySubsystem_t87660EFBF1E770B16033F7AD38AB76370B50895B_TisProvider_t1B885BF706B62D27FB206A6C1631D2D5699CB596_m7AD91827E692C693C661C07A275B8CC418803E2A (String_t* ___name0, Type_t * ___subsystemTypeOverride1, Type_t * ___providerType2, const RuntimeMethod* method)
{
	return ((  bool (*) (String_t*, Type_t *, Type_t *, const RuntimeMethod*))XRSubsystemHelpers_CheckTypes_TisRuntimeObject_TisRuntimeObject_m3CFE89F081F8A4ABA3B2C2E6533EAAC909F4892F_gshared)(___name0, ___subsystemTypeOverride1, ___providerType2, method);
}
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor::.ctor(Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystemDescriptor__ctor_m8E676B38C901A4CB99F7B869E171A5A6A36BEC85 (AccessibilitySubsystemDescriptor_t8E1234483302B1C8578B13351406A4782F203A8C * __this, AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1  ___accessibilitySubsystemCinfo0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem Microsoft.MixedReality.Toolkit.Accessibility.AccessibilityHelpers::get_Subsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AccessibilitySubsystem_t87660EFBF1E770B16033F7AD38AB76370B50895B * AccessibilityHelpers_get_Subsystem_mC716F62FC7D6E7E550762C250DF76EC5C6FCA805 (const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7 (RuntimeObject * ___message0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Accessibility.AccessibleObjectClassification Microsoft.MixedReality.Toolkit.Accessibility.AccessibleObject::get_Classification()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AccessibleObjectClassification_t5FAEC0486A9F61EBBF0F6D7E189FE35B0C9EA5E2 * AccessibleObject_get_Classification_m9016EF9068E43175DF149158EEB6373739A88CCA_inline (AccessibleObject_t4E0F38F72E0B6F31139051C90869ABEB9E64224A * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem::TryRegisterAccessibleObject(UnityEngine.GameObject,Microsoft.MixedReality.Toolkit.Accessibility.AccessibleObjectClassification)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AccessibilitySubsystem_TryRegisterAccessibleObject_mC59E593EB33009F6068FA9DAC588E0D48073BF5F (AccessibilitySubsystem_t87660EFBF1E770B16033F7AD38AB76370B50895B * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___accessibleObject0, AccessibleObjectClassification_t5FAEC0486A9F61EBBF0F6D7E189FE35B0C9EA5E2 * ___classification1, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem::TryUnregisterAccessibleObject(UnityEngine.GameObject,Microsoft.MixedReality.Toolkit.Accessibility.AccessibleObjectClassification)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AccessibilitySubsystem_TryUnregisterAccessibleObject_mAD709836410CBE905F845FF5C19550D46C84C76F (AccessibilitySubsystem_t87660EFBF1E770B16033F7AD38AB76370B50895B * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___accessibleObject0, AccessibleObjectClassification_t5FAEC0486A9F61EBBF0F6D7E189FE35B0C9EA5E2 * ___classification1, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063 (ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A * __this, const RuntimeMethod* method);
// !!1 Microsoft.MixedReality.Toolkit.XRSubsystemHelpers::ConstructCinfo<Microsoft.MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem,Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo>()
inline AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1  XRSubsystemHelpers_ConstructCinfo_TisMRTKAccessibilitySubsystem_t41A3DE7F8F47C58ACC35F7B3790B4F3B6950B9BF_TisAccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1_mF7AA1B00CB73143CEB3F3D8FA115827103518A36 (const RuntimeMethod* method)
{
	return ((  AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1  (*) (const RuntimeMethod*))XRSubsystemHelpers_ConstructCinfo_TisRuntimeObject_TisAccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1_m3149A4DFD08837AAFF2DF91DC10469969F09C285_gshared)(method);
}
// System.Boolean Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem::Register(Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AccessibilitySubsystem_Register_m871B67F843208B6CD0B45549F377AC931B1CB218 (AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1  ___accessibilitySubsystemParams0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystem__ctor_mA55D05EA57A33A794A6893ECE7ABA94BA20C39E2 (AccessibilitySubsystem_t87660EFBF1E770B16033F7AD38AB76370B50895B * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem::get_InvertTextColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AccessibilitySubsystem_get_InvertTextColor_m34E647786B422BBFA6E94DAA502FE735D4709F65 (AccessibilitySubsystem_t87660EFBF1E770B16033F7AD38AB76370B50895B * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.TextAccessibility::OnInvertTextColorChanged(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextAccessibility_OnInvertTextColorChanged_mED2CA36546DDEF3F0D855207B5BD47BE7ABA16EA (TextAccessibility_t903FCF08C24E1F72018F27355BA6B1C86F0D2AD5 * __this, bool ___invert0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Component::TryGetComponent<TMPro.TMP_Text>(!!0&)
inline bool Component_TryGetComponent_TisTMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_m9E2FEC0D250683C6578E23A114D561CCD3F71370 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 ** ___component0, const RuntimeMethod* method)
{
	return ((  bool (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 **, const RuntimeMethod*))Component_TryGetComponent_TisRuntimeObject_m409D64ADC25ED175ADC7ED4C3F7ABF5439AD63AF_gshared)(__this, ___component0, method);
}
// UnityEngine.Material TMPro.TMP_Text::get_fontMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * TMP_Text_get_fontMaterial_mA58C75BFC0CDB2C835CA4536C7A1A727FCA641CF (TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem::ApplyTextColorInversion(UnityEngine.Material,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystem_ApplyTextColorInversion_mBFB893FB6AF187F0988339D5721C547698029E98 (AccessibilitySubsystem_t87660EFBF1E770B16033F7AD38AB76370B50895B * __this, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material0, bool ___enable1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.TextAccessibility::ApplyInitialConfiguration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextAccessibility_ApplyInitialConfiguration_mB5E94A2A76DF07DCA44779E90EAFD8412F794A9E (TextAccessibility_t903FCF08C24E1F72018F27355BA6B1C86F0D2AD5 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m2A1B34C27CAE6ED7FD924E5F59C0A1ACBBF22C38 (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m2A1B34C27CAE6ED7FD924E5F59C0A1ACBBF22C38_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem::add_InvertTextColorChanged(System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystem_add_InvertTextColorChanged_mC26444E31318FDA534ACD16A3DE7ADC5B6C615B5 (AccessibilitySubsystem_t87660EFBF1E770B16033F7AD38AB76370B50895B * __this, Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem::remove_InvertTextColorChanged(System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystem_remove_InvertTextColorChanged_mBC0014F741E73D6262C34A326A3F091663398B3A (AccessibilitySubsystem_t87660EFBF1E770B16033F7AD38AB76370B50895B * __this, Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.TextAccessibility::GetTextMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextAccessibility_GetTextMaterial_m54E9FE21E57A554460F5376BA4E893A24CA87C6C (TextAccessibility_t903FCF08C24E1F72018F27355BA6B1C86F0D2AD5 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.TextAccessibility::RegisterHandlers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextAccessibility_RegisterHandlers_m865A4F7B0A23B0D0D394EDEA959FF3203D2B6EB6 (TextAccessibility_t903FCF08C24E1F72018F27355BA6B1C86F0D2AD5 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.TextAccessibility::UnregisterHandlers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextAccessibility_UnregisterHandlers_mAA56B908B30EA29D0FCA943F60AADB5AB39037E6 (TextAccessibility_t903FCF08C24E1F72018F27355BA6B1C86F0D2AD5 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemProvider`1<Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem>::.ctor()
inline void MRTKSubsystemProvider_1__ctor_m8CE4867BC76E307D836B4145A9CA59EBE595CE51 (MRTKSubsystemProvider_1_t4741C1AB5FAC6316ED2ED815084AA3DF14E415FA * __this, const RuntimeMethod* method)
{
	((  void (*) (MRTKSubsystemProvider_1_t4741C1AB5FAC6316ED2ED815084AA3DF14E415FA *, const RuntimeMethod*))MRTKSubsystemProvider_1__ctor_m860FF5DC84B4B9A81EA973D224B1FE69243BC6B4_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Accessibility.AccessibleObjectClassification,System.Collections.Generic.List`1<UnityEngine.GameObject>>::.ctor()
inline void Dictionary_2__ctor_m3CC1FE6C7C54A9AAAA089CCF77AF34302DD9F3FE (Dictionary_2_tAB54087C57C52C41006918B526AE3953D1779243 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tAB54087C57C52C41006918B526AE3953D1779243 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_m1F1BC809F591CBAB73E0FDA6CC5190257520631F (Provider_t1B885BF706B62D27FB206A6C1631D2D5699CB596 * __this, const RuntimeMethod* method);
// !!0 Microsoft.MixedReality.Toolkit.XRSubsystemHelpers::GetConfiguration<Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemConfig,Microsoft.MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem>()
inline AccessibilitySubsystemConfig_tA71A24B93F43AAD4BD12AA1FB4116F1EB4B4BA3B * XRSubsystemHelpers_GetConfiguration_TisAccessibilitySubsystemConfig_tA71A24B93F43AAD4BD12AA1FB4116F1EB4B4BA3B_TisMRTKAccessibilitySubsystem_t41A3DE7F8F47C58ACC35F7B3790B4F3B6950B9BF_m72B8445AC3AE9543E7F010A956D8C58C2D23F093 (const RuntimeMethod* method)
{
	return ((  AccessibilitySubsystemConfig_tA71A24B93F43AAD4BD12AA1FB4116F1EB4B4BA3B * (*) (const RuntimeMethod*))XRSubsystemHelpers_GetConfiguration_TisRuntimeObject_TisRuntimeObject_m68410B65EA4A21A8718A5DAA92AAAC7179719101_gshared)(method);
}
// Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemConfig Microsoft.MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem/AccessibilityProvider::get_Config()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AccessibilitySubsystemConfig_tA71A24B93F43AAD4BD12AA1FB4116F1EB4B4BA3B * AccessibilityProvider_get_Config_mC7D1CE31D8B6EE22BB93407D2478D308A8B5C693_inline (AccessibilityProvider_tB927231E25CC81A175ED2DF8538BE30F986C830F * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemConfig::get_InvertTextColor()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AccessibilitySubsystemConfig_get_InvertTextColor_mA053AFC4843807C6A566569363EB79908C4D12B9_inline (AccessibilitySubsystemConfig_tA71A24B93F43AAD4BD12AA1FB4116F1EB4B4BA3B * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Clear()
inline void List_1_Clear_m7DF03CE7132B7D4C6AA2AEEA9BD1A8755AE12432 (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem/AccessibilityProvider::AssembleAccessibleObjects(System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Accessibility.AccessibleObjectClassification>,System.Collections.Generic.List`1<UnityEngine.GameObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilityProvider_AssembleAccessibleObjects_mEBF75963CEB7779AA5951EF70202B62060920C20 (AccessibilityProvider_tB927231E25CC81A175ED2DF8538BE30F986C830F * __this, List_1_t698C3F6B3DCEEE7EB6FA28060F8268F41585F616 * ___classifications0, List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___accessibleObjectsList1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem/AccessibilityProvider::FilterAccessibleObjects(Microsoft.MixedReality.Toolkit.Accessibility.AccessibleObjectVisibility,System.Single,System.Collections.Generic.List`1<UnityEngine.GameObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilityProvider_FilterAccessibleObjects_m09E76BB774F9CF76F42295037324B0C1CCBAF74B (AccessibilityProvider_tB927231E25CC81A175ED2DF8538BE30F986C830F * __this, int32_t ___visibility0, float ___maxDistance1, List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___objectList2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Accessibility.AccessibleObjectClassification>::Clear()
inline void List_1_Clear_m894DFD2A6BA50A84E676E060218D441B70A8E2FD (List_1_t698C3F6B3DCEEE7EB6FA28060F8268F41585F616 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t698C3F6B3DCEEE7EB6FA28060F8268F41585F616 *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/KeyCollection<!0,!1> System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Accessibility.AccessibleObjectClassification,System.Collections.Generic.List`1<UnityEngine.GameObject>>::get_Keys()
inline KeyCollection_t066FE47FD65D965E339C02B22641D43C76611475 * Dictionary_2_get_Keys_mB86AF1E852095B18711C943E13AB11F26F0BF017 (Dictionary_2_tAB54087C57C52C41006918B526AE3953D1779243 * __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_t066FE47FD65D965E339C02B22641D43C76611475 * (*) (Dictionary_2_tAB54087C57C52C41006918B526AE3953D1779243 *, const RuntimeMethod*))Dictionary_2_get_Keys_m771BB389A4CB93B7EDBDC71F503B50049B8999C7_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Accessibility.AccessibleObjectClassification>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1_AddRange_mBB5A94518A9831C99032BB0ABBBD6D5E0F6C0CE3 (List_1_t698C3F6B3DCEEE7EB6FA28060F8268F41585F616 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t698C3F6B3DCEEE7EB6FA28060F8268F41585F616 *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m6465DEF706EB529B4227F2AF79338419D517EDF9_gshared)(__this, ___collection0, method);
}
// System.Collections.Generic.Dictionary`2/ValueCollection<!0,!1> System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Accessibility.AccessibleObjectClassification,System.Collections.Generic.List`1<UnityEngine.GameObject>>::get_Values()
inline ValueCollection_tDD96960CECF937DA06FA286B47415A7F890CB52A * Dictionary_2_get_Values_m4E4EEA774FA753BDCABF4896923FB73E0F82D0C7 (Dictionary_2_tAB54087C57C52C41006918B526AE3953D1779243 * __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_tDD96960CECF937DA06FA286B47415A7F890CB52A * (*) (Dictionary_2_tAB54087C57C52C41006918B526AE3953D1779243 *, const RuntimeMethod*))Dictionary_2_get_Values_mC8EC343FADAE6B9CB93639D7FBCDB19ACD807DB5_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2/ValueCollection<Microsoft.MixedReality.Toolkit.Accessibility.AccessibleObjectClassification,System.Collections.Generic.List`1<UnityEngine.GameObject>>::GetEnumerator()
inline Enumerator_t275D0381C7D498B50DA370FFAC01EF51919C91A8  ValueCollection_GetEnumerator_mCA421A011AD8F94BBAE0979395C9E5925809A225 (ValueCollection_tDD96960CECF937DA06FA286B47415A7F890CB52A * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t275D0381C7D498B50DA370FFAC01EF51919C91A8  (*) (ValueCollection_tDD96960CECF937DA06FA286B47415A7F890CB52A *, const RuntimeMethod*))ValueCollection_GetEnumerator_m401C0FF4E5F0194244B19D7B9EF4B173FB7E88C3_gshared)(__this, method);
}
// !1 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<Microsoft.MixedReality.Toolkit.Accessibility.AccessibleObjectClassification,System.Collections.Generic.List`1<UnityEngine.GameObject>>::get_Current()
inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * Enumerator_get_Current_m63C0E50C81167F19BB0707F6518C2361357D8E80_inline (Enumerator_t275D0381C7D498B50DA370FFAC01EF51919C91A8 * __this, const RuntimeMethod* method)
{
	return ((  List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * (*) (Enumerator_t275D0381C7D498B50DA370FFAC01EF51919C91A8 *, const RuntimeMethod*))Enumerator_get_Current_m5EAB60888D4E661A01C7F32AD890D785F8B6225B_gshared_inline)(__this, method);
}
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<Microsoft.MixedReality.Toolkit.Accessibility.AccessibleObjectClassification,System.Collections.Generic.List`1<UnityEngine.GameObject>>::MoveNext()
inline bool Enumerator_MoveNext_mF389CD1EF88A0968458E08E9741CA778AA3EC842 (Enumerator_t275D0381C7D498B50DA370FFAC01EF51919C91A8 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t275D0381C7D498B50DA370FFAC01EF51919C91A8 *, const RuntimeMethod*))Enumerator_MoveNext_mAEC22D730EB290F4405C47EE9F330B3CD4E2DC68_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<Microsoft.MixedReality.Toolkit.Accessibility.AccessibleObjectClassification,System.Collections.Generic.List`1<UnityEngine.GameObject>>::Dispose()
inline void Enumerator_Dispose_m4E5DE744EBE4CE39AD86387422A29291BA0167C7 (Enumerator_t275D0381C7D498B50DA370FFAC01EF51919C91A8 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t275D0381C7D498B50DA370FFAC01EF51919C91A8 *, const RuntimeMethod*))Enumerator_Dispose_m20B0D06631B9715D2C26F9F0D0665BF0092FF7A6_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Accessibility.AccessibleObjectClassification,System.Collections.Generic.List`1<UnityEngine.GameObject>>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_mD207369A2FCE41436A4609B76C958BEEC8F37EC3 (Dictionary_2_tAB54087C57C52C41006918B526AE3953D1779243 * __this, AccessibleObjectClassification_t5FAEC0486A9F61EBBF0F6D7E189FE35B0C9EA5E2 * ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tAB54087C57C52C41006918B526AE3953D1779243 *, AccessibleObjectClassification_t5FAEC0486A9F61EBBF0F6D7E189FE35B0C9EA5E2 *, const RuntimeMethod*))Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8 (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Accessibility.AccessibleObjectClassification,System.Collections.Generic.List`1<UnityEngine.GameObject>>::Add(!0,!1)
inline void Dictionary_2_Add_m5A43CB3FC04A1B84E8CB60A00184539875648265 (Dictionary_2_tAB54087C57C52C41006918B526AE3953D1779243 * __this, AccessibleObjectClassification_t5FAEC0486A9F61EBBF0F6D7E189FE35B0C9EA5E2 * ___key0, List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tAB54087C57C52C41006918B526AE3953D1779243 *, AccessibleObjectClassification_t5FAEC0486A9F61EBBF0F6D7E189FE35B0C9EA5E2 *, List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, const RuntimeMethod*))Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared)(__this, ___key0, ___value1, method);
}
// !1 System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Accessibility.AccessibleObjectClassification,System.Collections.Generic.List`1<UnityEngine.GameObject>>::get_Item(!0)
inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * Dictionary_2_get_Item_mAAB6D25E7D41246F664073F4EED032C56B5548D4 (Dictionary_2_tAB54087C57C52C41006918B526AE3953D1779243 * __this, AccessibleObjectClassification_t5FAEC0486A9F61EBBF0F6D7E189FE35B0C9EA5E2 * ___key0, const RuntimeMethod* method)
{
	return ((  List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * (*) (Dictionary_2_tAB54087C57C52C41006918B526AE3953D1779243 *, AccessibleObjectClassification_t5FAEC0486A9F61EBBF0F6D7E189FE35B0C9EA5E2 *, const RuntimeMethod*))Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(!0)
inline void List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3 (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GameObject>::Contains(!0)
inline bool List_1_Contains_mE508A129A7CB4DC89530674E7854B7F699BB486F (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))List_1_Contains_m99C700668AC6D272188471D2D6B784A2B5636C8E_gshared)(__this, ___item0, method);
}
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GameObject>::Remove(!0)
inline bool List_1_Remove_mD36BF07C31C1DF947856EFECE89BAF4D6A24DEB7 (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared)(__this, ___item0, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Accessibility.AccessibleObjectClassification>::GetEnumerator()
inline Enumerator_tFA80B3A9A75313FDFB80BDEB56E275732BC7B6E3  List_1_GetEnumerator_m926EDF55F89815C5AD9733FE63CE689E98B37274 (List_1_t698C3F6B3DCEEE7EB6FA28060F8268F41585F616 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tFA80B3A9A75313FDFB80BDEB56E275732BC7B6E3  (*) (List_1_t698C3F6B3DCEEE7EB6FA28060F8268F41585F616 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<Microsoft.MixedReality.Toolkit.Accessibility.AccessibleObjectClassification>::get_Current()
inline AccessibleObjectClassification_t5FAEC0486A9F61EBBF0F6D7E189FE35B0C9EA5E2 * Enumerator_get_Current_mF3A1ADD682AA120B123EE5F3C1BAB7B70C2641A0_inline (Enumerator_tFA80B3A9A75313FDFB80BDEB56E275732BC7B6E3 * __this, const RuntimeMethod* method)
{
	return ((  AccessibleObjectClassification_t5FAEC0486A9F61EBBF0F6D7E189FE35B0C9EA5E2 * (*) (Enumerator_tFA80B3A9A75313FDFB80BDEB56E275732BC7B6E3 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1_AddRange_m930C66498FD2B22B59C9BB83A2926008427DF6A0 (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m6465DEF706EB529B4227F2AF79338419D517EDF9_gshared)(__this, ___collection0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Microsoft.MixedReality.Toolkit.Accessibility.AccessibleObjectClassification>::MoveNext()
inline bool Enumerator_MoveNext_m0A54F9646B41FD5BCB18A49D1D8DDA2BE5CB6F2D (Enumerator_tFA80B3A9A75313FDFB80BDEB56E275732BC7B6E3 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tFA80B3A9A75313FDFB80BDEB56E275732BC7B6E3 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Microsoft.MixedReality.Toolkit.Accessibility.AccessibleObjectClassification>::Dispose()
inline void Enumerator_Dispose_m2FC14128F62E290E708E5C7D5984AE069A1109C0 (Enumerator_tFA80B3A9A75313FDFB80BDEB56E275732BC7B6E3 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tFA80B3A9A75313FDFB80BDEB56E275732BC7B6E3 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
inline int32_t List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Boolean UnityEngine.GameObject::TryGetComponent<UnityEngine.Collider>(!!0&)
inline bool GameObject_TryGetComponent_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_m279C0F83A21E7657BB20A78E0F6CDE17345778A1 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 ** ___component0, const RuntimeMethod* method)
{
	return ((  bool (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 **, const RuntimeMethod*))GameObject_TryGetComponent_TisRuntimeObject_mC7639C3E3E2A65695113BCF25718826CC392D6CB_gshared)(__this, ___component0, method);
}
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C (const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.CameraFOVChecker::IsInFOVCached(UnityEngine.Camera,UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraFOVChecker_IsInFOVCached_m4ED3870F44AA410AE22DD8E870691DFE789DE3D8 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___cam0, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___myCollider1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem/AccessibilityProvider::RaiseInvertTextColorChanged(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilityProvider_RaiseInvertTextColorChanged_m759BD6CC7E6FC288DF7921EB4DFCEFCC533F81F7 (AccessibilityProvider_tB927231E25CC81A175ED2DF8538BE30F986C830F * __this, bool ___invert0, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4 (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.GraphicsTools.AccessibilityUtilities::SetTextColorInversion(UnityEngine.Material,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilityUtilities_SetTextColorInversion_mB78AC806C69A6C0DA5407DBBCC22EAB8C91E3272 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___textMaterial0, bool ___Invert1, const RuntimeMethod* method);
// System.Void System.Action`1<System.Boolean>::Invoke(!0)
inline void Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5 (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * __this, bool ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 *, bool, const RuntimeMethod*))Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_gshared)(__this, ___obj0, method);
}
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
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
// Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem Microsoft.MixedReality.Toolkit.Accessibility.AccessibilityHelpers::get_Subsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AccessibilitySubsystem_t87660EFBF1E770B16033F7AD38AB76370B50895B * AccessibilityHelpers_get_Subsystem_mC716F62FC7D6E7E550762C250DF76EC5C6FCA805 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AccessibilityHelpers_t6756D7290A7B3A1DB18EBCEE84E1A40AE2DF4C8D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSubsystemHelpers_GetFirstRunningSubsystem_TisAccessibilitySubsystem_t87660EFBF1E770B16033F7AD38AB76370B50895B_mD2359E88D4EFCBD3575ED235A1E166C653A77D52_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSubsystemHelpers_t1ABA0E77205A5382BC3173866C111D39150FBCF1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (subsystem == null || !subsystem.running)
		IL2CPP_RUNTIME_CLASS_INIT(AccessibilityHelpers_t6756D7290A7B3A1DB18EBCEE84E1A40AE2DF4C8D_il2cpp_TypeInfo_var);
		AccessibilitySubsystem_t87660EFBF1E770B16033F7AD38AB76370B50895B * L_0 = ((AccessibilityHelpers_t6756D7290A7B3A1DB18EBCEE84E1A40AE2DF4C8D_StaticFields*)il2cpp_codegen_static_fields_for(AccessibilityHelpers_t6756D7290A7B3A1DB18EBCEE84E1A40AE2DF4C8D_il2cpp_TypeInfo_var))->get_subsystem_0();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AccessibilityHelpers_t6756D7290A7B3A1DB18EBCEE84E1A40AE2DF4C8D_il2cpp_TypeInfo_var);
		AccessibilitySubsystem_t87660EFBF1E770B16033F7AD38AB76370B50895B * L_1 = ((AccessibilityHelpers_t6756D7290A7B3A1DB18EBCEE84E1A40AE2DF4C8D_StaticFields*)il2cpp_codegen_static_fields_for(AccessibilityHelpers_t6756D7290A7B3A1DB18EBCEE84E1A40AE2DF4C8D_il2cpp_TypeInfo_var))->get_subsystem_0();
		NullCheck(L_1);
		bool L_2;
		L_2 = SubsystemWithProvider_get_running_m42399652EC4AB466AFBAC9035FA77C1BD6C72406_inline(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_001d;
		}
	}

IL_0013:
	{
		// subsystem = XRSubsystemHelpers.GetFirstRunningSubsystem<AccessibilitySubsystem>();
		IL2CPP_RUNTIME_CLASS_INIT(XRSubsystemHelpers_t1ABA0E77205A5382BC3173866C111D39150FBCF1_il2cpp_TypeInfo_var);
		AccessibilitySubsystem_t87660EFBF1E770B16033F7AD38AB76370B50895B * L_3;
		L_3 = XRSubsystemHelpers_GetFirstRunningSubsystem_TisAccessibilitySubsystem_t87660EFBF1E770B16033F7AD38AB76370B50895B_mD2359E88D4EFCBD3575ED235A1E166C653A77D52(/*hidden argument*/XRSubsystemHelpers_GetFirstRunningSubsystem_TisAccessibilitySubsystem_t87660EFBF1E770B16033F7AD38AB76370B50895B_mD2359E88D4EFCBD3575ED235A1E166C653A77D52_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(AccessibilityHelpers_t6756D7290A7B3A1DB18EBCEE84E1A40AE2DF4C8D_il2cpp_TypeInfo_var);
		((AccessibilityHelpers_t6756D7290A7B3A1DB18EBCEE84E1A40AE2DF4C8D_StaticFields*)il2cpp_codegen_static_fields_for(AccessibilityHelpers_t6756D7290A7B3A1DB18EBCEE84E1A40AE2DF4C8D_il2cpp_TypeInfo_var))->set_subsystem_0(L_3);
	}

IL_001d:
	{
		// return subsystem;
		IL2CPP_RUNTIME_CLASS_INIT(AccessibilityHelpers_t6756D7290A7B3A1DB18EBCEE84E1A40AE2DF4C8D_il2cpp_TypeInfo_var);
		AccessibilitySubsystem_t87660EFBF1E770B16033F7AD38AB76370B50895B * L_4 = ((AccessibilityHelpers_t6756D7290A7B3A1DB18EBCEE84E1A40AE2DF4C8D_StaticFields*)il2cpp_codegen_static_fields_for(AccessibilityHelpers_t6756D7290A7B3A1DB18EBCEE84E1A40AE2DF4C8D_il2cpp_TypeInfo_var))->get_subsystem_0();
		return L_4;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilityHelpers::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilityHelpers__cctor_m126BC0383A12023CF24C69508E5DF7EED0BE8997 (const RuntimeMethod* method)
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
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystem__ctor_mA55D05EA57A33A794A6893ECE7ABA94BA20C39E2 (AccessibilitySubsystem_t87660EFBF1E770B16033F7AD38AB76370B50895B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MRTKSubsystem_3__ctor_m0D0AD00677C420F33B52262106A8520A459D1233_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MRTKSubsystem_3_t5F52E397AE4EBAFBD7876AC3F752EA1E37851EFD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public AccessibilitySubsystem()
		IL2CPP_RUNTIME_CLASS_INIT(MRTKSubsystem_3_t5F52E397AE4EBAFBD7876AC3F752EA1E37851EFD_il2cpp_TypeInfo_var);
		MRTKSubsystem_3__ctor_m0D0AD00677C420F33B52262106A8520A459D1233(__this, /*hidden argument*/MRTKSubsystem_3__ctor_m0D0AD00677C420F33B52262106A8520A459D1233_RuntimeMethod_var);
		// { }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem::TryGetAccessibleObjects(System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Accessibility.AccessibleObjectClassification>,Microsoft.MixedReality.Toolkit.Accessibility.AccessibleObjectVisibility,System.Single,System.Collections.Generic.List`1<UnityEngine.GameObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AccessibilitySubsystem_TryGetAccessibleObjects_mFB28F659480BBC211FB36C6B128FB1BEC9B45937 (AccessibilitySubsystem_t87660EFBF1E770B16033F7AD38AB76370B50895B * __this, List_1_t698C3F6B3DCEEE7EB6FA28060F8268F41585F616 * ___classifications0, int32_t ___readerView1, float ___maxDistance2, List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___accessibleObjectList3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m09F2214A50AEB93124216EEEB94D6B75E862C64A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// provider.TryGetAccessibleObjects(classifications, readerView, maxDistance, accessibleObjectList);
		Provider_t1B885BF706B62D27FB206A6C1631D2D5699CB596 * L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m09F2214A50AEB93124216EEEB94D6B75E862C64A_inline(__this, /*hidden argument*/SubsystemWithProvider_3_get_provider_m09F2214A50AEB93124216EEEB94D6B75E862C64A_RuntimeMethod_var);
		List_1_t698C3F6B3DCEEE7EB6FA28060F8268F41585F616 * L_1 = ___classifications0;
		int32_t L_2 = ___readerView1;
		float L_3 = ___maxDistance2;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_4 = ___accessibleObjectList3;
		NullCheck(L_0);
		bool L_5;
		L_5 = VirtFuncInvoker4< bool, List_1_t698C3F6B3DCEEE7EB6FA28060F8268F41585F616 *, int32_t, float, List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * >::Invoke(25 /* System.Boolean Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem/Provider::TryGetAccessibleObjects(System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Accessibility.AccessibleObjectClassification>,Microsoft.MixedReality.Toolkit.Accessibility.AccessibleObjectVisibility,System.Single,System.Collections.Generic.List`1<UnityEngine.GameObject>) */, L_0, L_1, L_2, L_3, L_4);
		return L_5;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem::TryGetAccessibleObjectClassifications(System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Accessibility.AccessibleObjectClassification>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AccessibilitySubsystem_TryGetAccessibleObjectClassifications_m7CC66D75D76C6DC178EE60CE8B39C7EE1CE1433B (AccessibilitySubsystem_t87660EFBF1E770B16033F7AD38AB76370B50895B * __this, List_1_t698C3F6B3DCEEE7EB6FA28060F8268F41585F616 * ___classifications0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m09F2214A50AEB93124216EEEB94D6B75E862C64A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// provider.TryGetAccessibleObjectClassifications(classifications);
		Provider_t1B885BF706B62D27FB206A6C1631D2D5699CB596 * L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m09F2214A50AEB93124216EEEB94D6B75E862C64A_inline(__this, /*hidden argument*/SubsystemWithProvider_3_get_provider_m09F2214A50AEB93124216EEEB94D6B75E862C64A_RuntimeMethod_var);
		List_1_t698C3F6B3DCEEE7EB6FA28060F8268F41585F616 * L_1 = ___classifications0;
		NullCheck(L_0);
		bool L_2;
		L_2 = VirtFuncInvoker1< bool, List_1_t698C3F6B3DCEEE7EB6FA28060F8268F41585F616 * >::Invoke(26 /* System.Boolean Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem/Provider::TryGetAccessibleObjectClassifications(System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Accessibility.AccessibleObjectClassification>) */, L_0, L_1);
		return L_2;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem::TryRegisterAccessibleObject(UnityEngine.GameObject,Microsoft.MixedReality.Toolkit.Accessibility.AccessibleObjectClassification)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AccessibilitySubsystem_TryRegisterAccessibleObject_mC59E593EB33009F6068FA9DAC588E0D48073BF5F (AccessibilitySubsystem_t87660EFBF1E770B16033F7AD38AB76370B50895B * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___accessibleObject0, AccessibleObjectClassification_t5FAEC0486A9F61EBBF0F6D7E189FE35B0C9EA5E2 * ___classification1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m09F2214A50AEB93124216EEEB94D6B75E862C64A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// provider.TryRegisterAccessibleObject(accessibleObject, classification);
		Provider_t1B885BF706B62D27FB206A6C1631D2D5699CB596 * L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m09F2214A50AEB93124216EEEB94D6B75E862C64A_inline(__this, /*hidden argument*/SubsystemWithProvider_3_get_provider_m09F2214A50AEB93124216EEEB94D6B75E862C64A_RuntimeMethod_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = ___accessibleObject0;
		AccessibleObjectClassification_t5FAEC0486A9F61EBBF0F6D7E189FE35B0C9EA5E2 * L_2 = ___classification1;
		NullCheck(L_0);
		bool L_3;
		L_3 = VirtFuncInvoker2< bool, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, AccessibleObjectClassification_t5FAEC0486A9F61EBBF0F6D7E189FE35B0C9EA5E2 * >::Invoke(27 /* System.Boolean Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem/Provider::TryRegisterAccessibleObject(UnityEngine.GameObject,Microsoft.MixedReality.Toolkit.Accessibility.AccessibleObjectClassification) */, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem::TryUnregisterAccessibleObject(UnityEngine.GameObject,Microsoft.MixedReality.Toolkit.Accessibility.AccessibleObjectClassification)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AccessibilitySubsystem_TryUnregisterAccessibleObject_mAD709836410CBE905F845FF5C19550D46C84C76F (AccessibilitySubsystem_t87660EFBF1E770B16033F7AD38AB76370B50895B * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___accessibleObject0, AccessibleObjectClassification_t5FAEC0486A9F61EBBF0F6D7E189FE35B0C9EA5E2 * ___classification1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m09F2214A50AEB93124216EEEB94D6B75E862C64A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// provider.TryUnregisterAccessibleObject(accessibleObject, classification);
		Provider_t1B885BF706B62D27FB206A6C1631D2D5699CB596 * L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m09F2214A50AEB93124216EEEB94D6B75E862C64A_inline(__this, /*hidden argument*/SubsystemWithProvider_3_get_provider_m09F2214A50AEB93124216EEEB94D6B75E862C64A_RuntimeMethod_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = ___accessibleObject0;
		AccessibleObjectClassification_t5FAEC0486A9F61EBBF0F6D7E189FE35B0C9EA5E2 * L_2 = ___classification1;
		NullCheck(L_0);
		bool L_3;
		L_3 = VirtFuncInvoker2< bool, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, AccessibleObjectClassification_t5FAEC0486A9F61EBBF0F6D7E189FE35B0C9EA5E2 * >::Invoke(28 /* System.Boolean Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem/Provider::TryUnregisterAccessibleObject(UnityEngine.GameObject,Microsoft.MixedReality.Toolkit.Accessibility.AccessibleObjectClassification) */, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem::get_InvertTextColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AccessibilitySubsystem_get_InvertTextColor_m34E647786B422BBFA6E94DAA502FE735D4709F65 (AccessibilitySubsystem_t87660EFBF1E770B16033F7AD38AB76370B50895B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m09F2214A50AEB93124216EEEB94D6B75E862C64A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get => provider.InvertTextColor;
		Provider_t1B885BF706B62D27FB206A6C1631D2D5699CB596 * L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m09F2214A50AEB93124216EEEB94D6B75E862C64A_inline(__this, /*hidden argument*/SubsystemWithProvider_3_get_provider_m09F2214A50AEB93124216EEEB94D6B75E862C64A_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtFuncInvoker0< bool >::Invoke(29 /* System.Boolean Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem/Provider::get_InvertTextColor() */, L_0);
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem::set_InvertTextColor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystem_set_InvertTextColor_m7F51475B276307F956488C1DE82B520F5AD50C3F (AccessibilitySubsystem_t87660EFBF1E770B16033F7AD38AB76370B50895B * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m09F2214A50AEB93124216EEEB94D6B75E862C64A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set => provider.InvertTextColor = value;
		Provider_t1B885BF706B62D27FB206A6C1631D2D5699CB596 * L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m09F2214A50AEB93124216EEEB94D6B75E862C64A_inline(__this, /*hidden argument*/SubsystemWithProvider_3_get_provider_m09F2214A50AEB93124216EEEB94D6B75E862C64A_RuntimeMethod_var);
		bool L_1 = ___value0;
		NullCheck(L_0);
		VirtActionInvoker1< bool >::Invoke(30 /* System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem/Provider::set_InvertTextColor(System.Boolean) */, L_0, L_1);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem::add_InvertTextColorChanged(System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystem_add_InvertTextColorChanged_mC26444E31318FDA534ACD16A3DE7ADC5B6C615B5 (AccessibilitySubsystem_t87660EFBF1E770B16033F7AD38AB76370B50895B * __this, Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m09F2214A50AEB93124216EEEB94D6B75E862C64A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// add => provider.InvertTextColorChanged += value;
		Provider_t1B885BF706B62D27FB206A6C1631D2D5699CB596 * L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m09F2214A50AEB93124216EEEB94D6B75E862C64A_inline(__this, /*hidden argument*/SubsystemWithProvider_3_get_provider_m09F2214A50AEB93124216EEEB94D6B75E862C64A_RuntimeMethod_var);
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_1 = ___value0;
		NullCheck(L_0);
		VirtActionInvoker1< Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * >::Invoke(31 /* System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem/Provider::add_InvertTextColorChanged(System.Action`1<System.Boolean>) */, L_0, L_1);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem::remove_InvertTextColorChanged(System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystem_remove_InvertTextColorChanged_mBC0014F741E73D6262C34A326A3F091663398B3A (AccessibilitySubsystem_t87660EFBF1E770B16033F7AD38AB76370B50895B * __this, Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m09F2214A50AEB93124216EEEB94D6B75E862C64A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// remove => provider.InvertTextColorChanged -= value;
		Provider_t1B885BF706B62D27FB206A6C1631D2D5699CB596 * L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m09F2214A50AEB93124216EEEB94D6B75E862C64A_inline(__this, /*hidden argument*/SubsystemWithProvider_3_get_provider_m09F2214A50AEB93124216EEEB94D6B75E862C64A_RuntimeMethod_var);
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_1 = ___value0;
		NullCheck(L_0);
		VirtActionInvoker1< Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * >::Invoke(32 /* System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem/Provider::remove_InvertTextColorChanged(System.Action`1<System.Boolean>) */, L_0, L_1);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem::ApplyTextColorInversion(UnityEngine.Material,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystem_ApplyTextColorInversion_mBFB893FB6AF187F0988339D5721C547698029E98 (AccessibilitySubsystem_t87660EFBF1E770B16033F7AD38AB76370B50895B * __this, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material0, bool ___enable1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m09F2214A50AEB93124216EEEB94D6B75E862C64A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// bool enable) => provider.ApplyTextColorInversion(material, enable);
		Provider_t1B885BF706B62D27FB206A6C1631D2D5699CB596 * L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m09F2214A50AEB93124216EEEB94D6B75E862C64A_inline(__this, /*hidden argument*/SubsystemWithProvider_3_get_provider_m09F2214A50AEB93124216EEEB94D6B75E862C64A_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_1 = ___material0;
		bool L_2 = ___enable1;
		NullCheck(L_0);
		VirtActionInvoker2< Material_t8927C00353A72755313F046D0CE85178AE8218EE *, bool >::Invoke(33 /* System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem/Provider::ApplyTextColorInversion(UnityEngine.Material,System.Boolean) */, L_0, L_1, L_2);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem::Register(Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AccessibilitySubsystem_Register_m871B67F843208B6CD0B45549F377AC931B1CB218 (AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1  ___accessibilitySubsystemParams0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptorStore_tE5D99C3159868DE6506269CB6B830621F8BC31A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AccessibilitySubsystemDescriptor descriptor = AccessibilitySubsystemDescriptor.Create(accessibilitySubsystemParams);
		AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1  L_0 = ___accessibilitySubsystemParams0;
		AccessibilitySubsystemDescriptor_t8E1234483302B1C8578B13351406A4782F203A8C * L_1;
		L_1 = AccessibilitySubsystemDescriptor_Create_m4F72BC53ACA18F19261307D18076A7368204A20E(L_0, /*hidden argument*/NULL);
		// SubsystemDescriptorStore.RegisterDescriptor(descriptor);
		IL2CPP_RUNTIME_CLASS_INIT(SubsystemDescriptorStore_tE5D99C3159868DE6506269CB6B830621F8BC31A6_il2cpp_TypeInfo_var);
		SubsystemDescriptorStore_RegisterDescriptor_m5586866BB233EF26B98640851816DD1764657688(L_1, /*hidden argument*/NULL);
		// return true;
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
// Conversion methods for marshalling of: Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo
IL2CPP_EXTERN_C void AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1_marshal_pinvoke(const AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1& unmarshaled, AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1_marshaled_pinvoke& marshaled)
{
	Exception_t* ___U3CConfigTypeU3Ek__BackingField_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<ConfigType>k__BackingField' of type 'AccessibilitySubsystemCinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CConfigTypeU3Ek__BackingField_3Exception, NULL);
}
IL2CPP_EXTERN_C void AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1_marshal_pinvoke_back(const AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1_marshaled_pinvoke& marshaled, AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1& unmarshaled)
{
	Exception_t* ___U3CConfigTypeU3Ek__BackingField_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<ConfigType>k__BackingField' of type 'AccessibilitySubsystemCinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CConfigTypeU3Ek__BackingField_3Exception, NULL);
}
// Conversion method for clean up from marshalling of: Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo
IL2CPP_EXTERN_C void AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1_marshal_pinvoke_cleanup(AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo
IL2CPP_EXTERN_C void AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1_marshal_com(const AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1& unmarshaled, AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1_marshaled_com& marshaled)
{
	Exception_t* ___U3CConfigTypeU3Ek__BackingField_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<ConfigType>k__BackingField' of type 'AccessibilitySubsystemCinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CConfigTypeU3Ek__BackingField_3Exception, NULL);
}
IL2CPP_EXTERN_C void AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1_marshal_com_back(const AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1_marshaled_com& marshaled, AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1& unmarshaled)
{
	Exception_t* ___U3CConfigTypeU3Ek__BackingField_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<ConfigType>k__BackingField' of type 'AccessibilitySubsystemCinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CConfigTypeU3Ek__BackingField_3Exception, NULL);
}
// Conversion method for clean up from marshalling of: Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo
IL2CPP_EXTERN_C void AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1_marshal_com_cleanup(AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1_marshaled_com& marshaled)
{
}
// System.String Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AccessibilitySubsystemCinfo_get_Name_mAEFE7ECD134505F8A539CCC28A53B74AC32D0141 (AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1 * __this, const RuntimeMethod* method)
{
	{
		// public string Name { get; set; }
		String_t* L_0 = __this->get_U3CNameU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* AccessibilitySubsystemCinfo_get_Name_mAEFE7ECD134505F8A539CCC28A53B74AC32D0141_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1 * _thisAdjusted = reinterpret_cast<AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = AccessibilitySubsystemCinfo_get_Name_mAEFE7ECD134505F8A539CCC28A53B74AC32D0141_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystemCinfo_set_Name_mDE5DB332C91A428D352B3B05542F119F96E6FA3E (AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Name { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CNameU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void AccessibilitySubsystemCinfo_set_Name_mDE5DB332C91A428D352B3B05542F119F96E6FA3E_AdjustorThunk (RuntimeObject * __this, String_t* ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1 * _thisAdjusted = reinterpret_cast<AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1 *>(__this + _offset);
	AccessibilitySubsystemCinfo_set_Name_mDE5DB332C91A428D352B3B05542F119F96E6FA3E_inline(_thisAdjusted, ___value0, method);
}
// System.String Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::get_DisplayName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AccessibilitySubsystemCinfo_get_DisplayName_m6E96C34FB1643787BB1A90CC636FEF1002632CBD (AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1 * __this, const RuntimeMethod* method)
{
	{
		// public string DisplayName { get; set; }
		String_t* L_0 = __this->get_U3CDisplayNameU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* AccessibilitySubsystemCinfo_get_DisplayName_m6E96C34FB1643787BB1A90CC636FEF1002632CBD_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1 * _thisAdjusted = reinterpret_cast<AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = AccessibilitySubsystemCinfo_get_DisplayName_m6E96C34FB1643787BB1A90CC636FEF1002632CBD_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::set_DisplayName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystemCinfo_set_DisplayName_mDE3C3A930DBA22355FF21BF9A3162F0A68800A21 (AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string DisplayName { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CDisplayNameU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void AccessibilitySubsystemCinfo_set_DisplayName_mDE3C3A930DBA22355FF21BF9A3162F0A68800A21_AdjustorThunk (RuntimeObject * __this, String_t* ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1 * _thisAdjusted = reinterpret_cast<AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1 *>(__this + _offset);
	AccessibilitySubsystemCinfo_set_DisplayName_mDE3C3A930DBA22355FF21BF9A3162F0A68800A21_inline(_thisAdjusted, ___value0, method);
}
// System.String Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::get_Author()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AccessibilitySubsystemCinfo_get_Author_m78FC773521537E06658B3B37E8097ED526C9ADD5 (AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1 * __this, const RuntimeMethod* method)
{
	{
		// public string Author { get; set; }
		String_t* L_0 = __this->get_U3CAuthorU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* AccessibilitySubsystemCinfo_get_Author_m78FC773521537E06658B3B37E8097ED526C9ADD5_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1 * _thisAdjusted = reinterpret_cast<AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = AccessibilitySubsystemCinfo_get_Author_m78FC773521537E06658B3B37E8097ED526C9ADD5_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::set_Author(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystemCinfo_set_Author_m2818A3C728C081C81057451DD10C80319FD86FFD (AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Author { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CAuthorU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void AccessibilitySubsystemCinfo_set_Author_m2818A3C728C081C81057451DD10C80319FD86FFD_AdjustorThunk (RuntimeObject * __this, String_t* ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1 * _thisAdjusted = reinterpret_cast<AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1 *>(__this + _offset);
	AccessibilitySubsystemCinfo_set_Author_m2818A3C728C081C81057451DD10C80319FD86FFD_inline(_thisAdjusted, ___value0, method);
}
// System.Type Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::get_ConfigType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * AccessibilitySubsystemCinfo_get_ConfigType_m7F4958ADDF9F967D7D2B3037EA7654F48DC345A9 (AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1 * __this, const RuntimeMethod* method)
{
	{
		// public Type ConfigType { get; set; }
		Type_t * L_0 = __this->get_U3CConfigTypeU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Type_t * AccessibilitySubsystemCinfo_get_ConfigType_m7F4958ADDF9F967D7D2B3037EA7654F48DC345A9_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1 * _thisAdjusted = reinterpret_cast<AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1 *>(__this + _offset);
	Type_t * _returnValue;
	_returnValue = AccessibilitySubsystemCinfo_get_ConfigType_m7F4958ADDF9F967D7D2B3037EA7654F48DC345A9_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::set_ConfigType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystemCinfo_set_ConfigType_m2CF378889C3A7E77A393F73BF0FE242E60D66610 (AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1 * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type ConfigType { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CConfigTypeU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void AccessibilitySubsystemCinfo_set_ConfigType_m2CF378889C3A7E77A393F73BF0FE242E60D66610_AdjustorThunk (RuntimeObject * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1 * _thisAdjusted = reinterpret_cast<AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1 *>(__this + _offset);
	AccessibilitySubsystemCinfo_set_ConfigType_m2CF378889C3A7E77A393F73BF0FE242E60D66610_inline(_thisAdjusted, ___value0, method);
}
// System.Type Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::get_ProviderType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * AccessibilitySubsystemCinfo_get_ProviderType_m051410A8508E5E9D123B3DA2604F6AD309724C8D (AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1 * __this, const RuntimeMethod* method)
{
	{
		// public Type ProviderType { get; set; }
		Type_t * L_0 = __this->get_U3CProviderTypeU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Type_t * AccessibilitySubsystemCinfo_get_ProviderType_m051410A8508E5E9D123B3DA2604F6AD309724C8D_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1 * _thisAdjusted = reinterpret_cast<AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1 *>(__this + _offset);
	Type_t * _returnValue;
	_returnValue = AccessibilitySubsystemCinfo_get_ProviderType_m051410A8508E5E9D123B3DA2604F6AD309724C8D_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::set_ProviderType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystemCinfo_set_ProviderType_m94D2185D2D5D30649983089F7479AFE753AEE103 (AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1 * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type ProviderType { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CProviderTypeU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void AccessibilitySubsystemCinfo_set_ProviderType_m94D2185D2D5D30649983089F7479AFE753AEE103_AdjustorThunk (RuntimeObject * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1 * _thisAdjusted = reinterpret_cast<AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1 *>(__this + _offset);
	AccessibilitySubsystemCinfo_set_ProviderType_m94D2185D2D5D30649983089F7479AFE753AEE103_inline(_thisAdjusted, ___value0, method);
}
// System.Type Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::get_SubsystemTypeOverride()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * AccessibilitySubsystemCinfo_get_SubsystemTypeOverride_m293E9A3B3EAA0096CD68A9CF8A29EC09C49EA07E (AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1 * __this, const RuntimeMethod* method)
{
	{
		// public Type SubsystemTypeOverride { get; set; }
		Type_t * L_0 = __this->get_U3CSubsystemTypeOverrideU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Type_t * AccessibilitySubsystemCinfo_get_SubsystemTypeOverride_m293E9A3B3EAA0096CD68A9CF8A29EC09C49EA07E_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1 * _thisAdjusted = reinterpret_cast<AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1 *>(__this + _offset);
	Type_t * _returnValue;
	_returnValue = AccessibilitySubsystemCinfo_get_SubsystemTypeOverride_m293E9A3B3EAA0096CD68A9CF8A29EC09C49EA07E_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::set_SubsystemTypeOverride(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystemCinfo_set_SubsystemTypeOverride_mE6F0018C4BFEAE9F3FCFDEF53F2C3F06EF69E413 (AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1 * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type SubsystemTypeOverride { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CSubsystemTypeOverrideU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void AccessibilitySubsystemCinfo_set_SubsystemTypeOverride_mE6F0018C4BFEAE9F3FCFDEF53F2C3F06EF69E413_AdjustorThunk (RuntimeObject * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1 * _thisAdjusted = reinterpret_cast<AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1 *>(__this + _offset);
	AccessibilitySubsystemCinfo_set_SubsystemTypeOverride_mE6F0018C4BFEAE9F3FCFDEF53F2C3F06EF69E413_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::Equals(Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AccessibilitySubsystemCinfo_Equals_mCD42C3DEE86AA963A48B0AC2FA2E32DBD005AA25 (AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1 * __this, AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1  ___other0, const RuntimeMethod* method)
{
	{
		// return
		//     ReferenceEquals(Name, other.Name)
		//     && ReferenceEquals(ProviderType, other.ProviderType)
		//     && ReferenceEquals(SubsystemTypeOverride, other.SubsystemTypeOverride);
		String_t* L_0;
		L_0 = AccessibilitySubsystemCinfo_get_Name_mAEFE7ECD134505F8A539CCC28A53B74AC32D0141_inline((AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1 *)__this, /*hidden argument*/NULL);
		String_t* L_1;
		L_1 = AccessibilitySubsystemCinfo_get_Name_mAEFE7ECD134505F8A539CCC28A53B74AC32D0141_inline((AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1 *)(&___other0), /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(String_t*)L_0) == ((RuntimeObject*)(String_t*)L_1))))
		{
			goto IL_002e;
		}
	}
	{
		Type_t * L_2;
		L_2 = AccessibilitySubsystemCinfo_get_ProviderType_m051410A8508E5E9D123B3DA2604F6AD309724C8D_inline((AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1 *)__this, /*hidden argument*/NULL);
		Type_t * L_3;
		L_3 = AccessibilitySubsystemCinfo_get_ProviderType_m051410A8508E5E9D123B3DA2604F6AD309724C8D_inline((AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1 *)(&___other0), /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_2) == ((RuntimeObject*)(Type_t *)L_3))))
		{
			goto IL_002e;
		}
	}
	{
		Type_t * L_4;
		L_4 = AccessibilitySubsystemCinfo_get_SubsystemTypeOverride_m293E9A3B3EAA0096CD68A9CF8A29EC09C49EA07E_inline((AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1 *)__this, /*hidden argument*/NULL);
		Type_t * L_5;
		L_5 = AccessibilitySubsystemCinfo_get_SubsystemTypeOverride_m293E9A3B3EAA0096CD68A9CF8A29EC09C49EA07E_inline((AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1 *)(&___other0), /*hidden argument*/NULL);
		return (bool)((((RuntimeObject*)(Type_t *)L_4) == ((RuntimeObject*)(Type_t *)L_5))? 1 : 0);
	}

IL_002e:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool AccessibilitySubsystemCinfo_Equals_mCD42C3DEE86AA963A48B0AC2FA2E32DBD005AA25_AdjustorThunk (RuntimeObject * __this, AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1 * _thisAdjusted = reinterpret_cast<AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1 *>(__this + _offset);
	bool _returnValue;
	_returnValue = AccessibilitySubsystemCinfo_Equals_mCD42C3DEE86AA963A48B0AC2FA2E32DBD005AA25(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AccessibilitySubsystemCinfo_Equals_m82153E62E85DEEC6A82F8D2F4C55B198EFACE29A (AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return (obj is AccessibilitySubsystemCinfo cinfo) && Equals(cinfo);
		RuntimeObject * L_0 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1_il2cpp_TypeInfo_var)))
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject * L_1 = ___obj0;
		V_0 = ((*(AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1 *)((AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1 *)UnBox(L_1, AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1_il2cpp_TypeInfo_var))));
		AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1  L_2 = V_0;
		bool L_3;
		L_3 = AccessibilitySubsystemCinfo_Equals_mCD42C3DEE86AA963A48B0AC2FA2E32DBD005AA25((AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1 *)__this, L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_0017:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool AccessibilitySubsystemCinfo_Equals_m82153E62E85DEEC6A82F8D2F4C55B198EFACE29A_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1 * _thisAdjusted = reinterpret_cast<AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1 *>(__this + _offset);
	bool _returnValue;
	_returnValue = AccessibilitySubsystemCinfo_Equals_m82153E62E85DEEC6A82F8D2F4C55B198EFACE29A(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Boolean Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::op_Equality(Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo,Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AccessibilitySubsystemCinfo_op_Equality_m6CE2BF29EC7E8C90503926A1747FCA85751A5BC7 (AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1  ___lhs0, AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1  ___rhs1, const RuntimeMethod* method)
{
	{
		// return lhs.Equals(rhs);
		AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1  L_0 = ___rhs1;
		bool L_1;
		L_1 = AccessibilitySubsystemCinfo_Equals_mCD42C3DEE86AA963A48B0AC2FA2E32DBD005AA25((AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1 *)(&___lhs0), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::op_Inequality(Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo,Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AccessibilitySubsystemCinfo_op_Inequality_mD86C3DD69B09EA2797DBBAC5A6FFFDEC2FC3151E (AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1  ___lhs0, AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1  ___rhs1, const RuntimeMethod* method)
{
	{
		// return !(lhs == rhs);
		AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1  L_0 = ___lhs0;
		AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1  L_1 = ___rhs1;
		bool L_2;
		L_2 = AccessibilitySubsystemCinfo_op_Equality_m6CE2BF29EC7E8C90503926A1747FCA85751A5BC7(L_0, L_1, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AccessibilitySubsystemCinfo_GetHashCode_m0080E9D81666CAFEAB6CE67DF1E43F1AC7A8F785 (AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1 * __this, const RuntimeMethod* method)
{
	{
		// throw new ApplicationException("Do not hash subsystem descriptors as keys.");
		ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407 * L_0 = (ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407_il2cpp_TypeInfo_var)));
		ApplicationException__ctor_mF8E9704C91C2F1912909448E5BABFE9EC61D4E8F(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0514B8E4342F7B936BE02120037C20832C1C2F20)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AccessibilitySubsystemCinfo_GetHashCode_m0080E9D81666CAFEAB6CE67DF1E43F1AC7A8F785_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C  int32_t AccessibilitySubsystemCinfo_GetHashCode_m0080E9D81666CAFEAB6CE67DF1E43F1AC7A8F785_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1 * _thisAdjusted = reinterpret_cast<AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = AccessibilitySubsystemCinfo_GetHashCode_m0080E9D81666CAFEAB6CE67DF1E43F1AC7A8F785(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemConfig::get_InvertTextColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AccessibilitySubsystemConfig_get_InvertTextColor_mA053AFC4843807C6A566569363EB79908C4D12B9 (AccessibilitySubsystemConfig_tA71A24B93F43AAD4BD12AA1FB4116F1EB4B4BA3B * __this, const RuntimeMethod* method)
{
	{
		// get => invertTextColor;
		bool L_0 = __this->get_invertTextColor_4();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemConfig::set_InvertTextColor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystemConfig_set_InvertTextColor_m37A4CB7E293313172414D6289F9CE84039BCC6AF (AccessibilitySubsystemConfig_tA71A24B93F43AAD4BD12AA1FB4116F1EB4B4BA3B * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set => invertTextColor = value;
		bool L_0 = ___value0;
		__this->set_invertTextColor_4(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemConfig::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystemConfig_Reset_m24CD8681436B6E205B3259DDEA7307236813E986 (AccessibilitySubsystemConfig_tA71A24B93F43AAD4BD12AA1FB4116F1EB4B4BA3B * __this, const RuntimeMethod* method)
{
	{
		// invertTextColor = default;
		__this->set_invertTextColor_4((bool)0);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystemConfig__ctor_m50F106F4EF10D9ABD785DBEBA01F835B60CCB66F (AccessibilitySubsystemConfig_tA71A24B93F43AAD4BD12AA1FB4116F1EB4B4BA3B * __this, const RuntimeMethod* method)
{
	{
		BaseSubsystemConfig__ctor_m47DB5EEFFF324042A03D2D327F3752F321D47F90(__this, /*hidden argument*/NULL);
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
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor::.ctor(Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystemDescriptor__ctor_m8E676B38C901A4CB99F7B869E171A5A6A36BEC85 (AccessibilitySubsystemDescriptor_t8E1234483302B1C8578B13351406A4782F203A8C * __this, AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1  ___accessibilitySubsystemCinfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptorWithProvider_2__ctor_mAB3A2A7FCD71DEF8FA38A98DB5EFB24F0CB03B96_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AccessibilitySubsystemDescriptor(AccessibilitySubsystemCinfo accessibilitySubsystemCinfo)
		SubsystemDescriptorWithProvider_2__ctor_mAB3A2A7FCD71DEF8FA38A98DB5EFB24F0CB03B96(__this, /*hidden argument*/SubsystemDescriptorWithProvider_2__ctor_mAB3A2A7FCD71DEF8FA38A98DB5EFB24F0CB03B96_RuntimeMethod_var);
		// Name = accessibilitySubsystemCinfo.Name;
		String_t* L_0;
		L_0 = AccessibilitySubsystemCinfo_get_Name_mAEFE7ECD134505F8A539CCC28A53B74AC32D0141_inline((AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1 *)(&___accessibilitySubsystemCinfo0), /*hidden argument*/NULL);
		AccessibilitySubsystemDescriptor_set_Name_m9CB5B30E150ECBFDFAE816CAC4AE90027F29D6C7(__this, L_0, /*hidden argument*/NULL);
		// DisplayName = accessibilitySubsystemCinfo.DisplayName;
		String_t* L_1;
		L_1 = AccessibilitySubsystemCinfo_get_DisplayName_m6E96C34FB1643787BB1A90CC636FEF1002632CBD_inline((AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1 *)(&___accessibilitySubsystemCinfo0), /*hidden argument*/NULL);
		AccessibilitySubsystemDescriptor_set_DisplayName_mC7E899436FC679A1D6EE2BB6FD457CD15E1F34B6_inline(__this, L_1, /*hidden argument*/NULL);
		// Author = accessibilitySubsystemCinfo.Author;
		String_t* L_2;
		L_2 = AccessibilitySubsystemCinfo_get_Author_m78FC773521537E06658B3B37E8097ED526C9ADD5_inline((AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1 *)(&___accessibilitySubsystemCinfo0), /*hidden argument*/NULL);
		AccessibilitySubsystemDescriptor_set_Author_m47775B486E1D03B12E5008B5E2DE0B1221AA8F99_inline(__this, L_2, /*hidden argument*/NULL);
		// ProviderType = accessibilitySubsystemCinfo.ProviderType;
		Type_t * L_3;
		L_3 = AccessibilitySubsystemCinfo_get_ProviderType_m051410A8508E5E9D123B3DA2604F6AD309724C8D_inline((AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1 *)(&___accessibilitySubsystemCinfo0), /*hidden argument*/NULL);
		AccessibilitySubsystemDescriptor_set_ProviderType_m6C18FC545C4D28C0051F879C474160E3024F7069(__this, L_3, /*hidden argument*/NULL);
		// SubsystemTypeOverride = accessibilitySubsystemCinfo.SubsystemTypeOverride;
		Type_t * L_4;
		L_4 = AccessibilitySubsystemCinfo_get_SubsystemTypeOverride_m293E9A3B3EAA0096CD68A9CF8A29EC09C49EA07E_inline((AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1 *)(&___accessibilitySubsystemCinfo0), /*hidden argument*/NULL);
		AccessibilitySubsystemDescriptor_set_SubsystemTypeOverride_mB65FA48458AE2C18606ABC622B8C949731DC5E94(__this, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.String Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AccessibilitySubsystemDescriptor_get_Name_m226A04CC65447601D6CF3E21C349CAB89BC1CFC2 (AccessibilitySubsystemDescriptor_t8E1234483302B1C8578B13351406A4782F203A8C * __this, const RuntimeMethod* method)
{
	{
		// public string Name { get => id; set => id = value; }
		String_t* L_0;
		L_0 = SubsystemDescriptorWithProvider_get_id_m0341F88D726C677F81277CD2C4A43919EA942861_inline(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystemDescriptor_set_Name_m9CB5B30E150ECBFDFAE816CAC4AE90027F29D6C7 (AccessibilitySubsystemDescriptor_t8E1234483302B1C8578B13351406A4782F203A8C * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Name { get => id; set => id = value; }
		String_t* L_0 = ___value0;
		SubsystemDescriptorWithProvider_set_id_mEC6863CDB21597618394D2ED4182A9ED3ACBF220_inline(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.String Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor::get_DisplayName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AccessibilitySubsystemDescriptor_get_DisplayName_m87FA2C2AD9836F62E614062B1271D245B89FC177 (AccessibilitySubsystemDescriptor_t8E1234483302B1C8578B13351406A4782F203A8C * __this, const RuntimeMethod* method)
{
	{
		// public string DisplayName { get; set; }
		String_t* L_0 = __this->get_U3CDisplayNameU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor::set_DisplayName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystemDescriptor_set_DisplayName_mC7E899436FC679A1D6EE2BB6FD457CD15E1F34B6 (AccessibilitySubsystemDescriptor_t8E1234483302B1C8578B13351406A4782F203A8C * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string DisplayName { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CDisplayNameU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.String Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor::get_Author()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AccessibilitySubsystemDescriptor_get_Author_mCE767C45ED0B405A24AE22A06E2DAA793D52D30D (AccessibilitySubsystemDescriptor_t8E1234483302B1C8578B13351406A4782F203A8C * __this, const RuntimeMethod* method)
{
	{
		// public string Author { get; set; }
		String_t* L_0 = __this->get_U3CAuthorU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor::set_Author(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystemDescriptor_set_Author_m47775B486E1D03B12E5008B5E2DE0B1221AA8F99 (AccessibilitySubsystemDescriptor_t8E1234483302B1C8578B13351406A4782F203A8C * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Author { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CAuthorU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Type Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor::get_ConfigType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * AccessibilitySubsystemDescriptor_get_ConfigType_m4A3DC35D8A9CB7E1F78B0DFCE00E140BA80FB676 (AccessibilitySubsystemDescriptor_t8E1234483302B1C8578B13351406A4782F203A8C * __this, const RuntimeMethod* method)
{
	{
		// public Type ConfigType { get; set; }
		Type_t * L_0 = __this->get_U3CConfigTypeU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor::set_ConfigType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystemDescriptor_set_ConfigType_mBE59F520027F316297A10A2347094F9FB9997A6A (AccessibilitySubsystemDescriptor_t8E1234483302B1C8578B13351406A4782F203A8C * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type ConfigType { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CConfigTypeU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Type Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor::get_ProviderType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * AccessibilitySubsystemDescriptor_get_ProviderType_m5AA595A8DF90A197DAD641639886958178A53F0C (AccessibilitySubsystemDescriptor_t8E1234483302B1C8578B13351406A4782F203A8C * __this, const RuntimeMethod* method)
{
	{
		// public Type ProviderType { get => providerType; set => providerType = value; }
		Type_t * L_0;
		L_0 = SubsystemDescriptorWithProvider_get_providerType_m61D62BCC0790E915342C35E416324F065300A29E_inline(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor::set_ProviderType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystemDescriptor_set_ProviderType_m6C18FC545C4D28C0051F879C474160E3024F7069 (AccessibilitySubsystemDescriptor_t8E1234483302B1C8578B13351406A4782F203A8C * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type ProviderType { get => providerType; set => providerType = value; }
		Type_t * L_0 = ___value0;
		SubsystemDescriptorWithProvider_set_providerType_m672B1F3CC7A12E8569D801F7C79538753C0D9C2D_inline(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Type Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor::get_SubsystemTypeOverride()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * AccessibilitySubsystemDescriptor_get_SubsystemTypeOverride_mA567AB6517F913C6CD87172ADAA0B7B0B9ECE706 (AccessibilitySubsystemDescriptor_t8E1234483302B1C8578B13351406A4782F203A8C * __this, const RuntimeMethod* method)
{
	{
		// public Type SubsystemTypeOverride { get => subsystemTypeOverride; set => subsystemTypeOverride = value; }
		Type_t * L_0;
		L_0 = SubsystemDescriptorWithProvider_get_subsystemTypeOverride_mC1EE74BB1F7FC5ABEDEB70BD624B018A17206888_inline(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor::set_SubsystemTypeOverride(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilitySubsystemDescriptor_set_SubsystemTypeOverride_mB65FA48458AE2C18606ABC622B8C949731DC5E94 (AccessibilitySubsystemDescriptor_t8E1234483302B1C8578B13351406A4782F203A8C * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type SubsystemTypeOverride { get => subsystemTypeOverride; set => subsystemTypeOverride = value; }
		Type_t * L_0 = ___value0;
		SubsystemDescriptorWithProvider_set_subsystemTypeOverride_mA453100A7A8FAB35FBE7154E63B5A17D518F41B6_inline(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemDescriptor::Create(Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AccessibilitySubsystemDescriptor_t8E1234483302B1C8578B13351406A4782F203A8C * AccessibilitySubsystemDescriptor_Create_m4F72BC53ACA18F19261307D18076A7368204A20E (AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1  ___cinfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AccessibilitySubsystemDescriptor_t8E1234483302B1C8578B13351406A4782F203A8C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSubsystemHelpers_CheckTypes_TisAccessibilitySubsystem_t87660EFBF1E770B16033F7AD38AB76370B50895B_TisProvider_t1B885BF706B62D27FB206A6C1631D2D5699CB596_m7AD91827E692C693C661C07A275B8CC418803E2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSubsystemHelpers_t1ABA0E77205A5382BC3173866C111D39150FBCF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral680D5F85FF107897716444439FE6176166BED070);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!XRSubsystemHelpers.CheckTypes<AccessibilitySubsystem, AccessibilitySubsystem.Provider>(cinfo.Name,
		//                                                                                   cinfo.SubsystemTypeOverride,
		//                                                                                   cinfo.ProviderType))
		String_t* L_0;
		L_0 = AccessibilitySubsystemCinfo_get_Name_mAEFE7ECD134505F8A539CCC28A53B74AC32D0141_inline((AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1 *)(&___cinfo0), /*hidden argument*/NULL);
		Type_t * L_1;
		L_1 = AccessibilitySubsystemCinfo_get_SubsystemTypeOverride_m293E9A3B3EAA0096CD68A9CF8A29EC09C49EA07E_inline((AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1 *)(&___cinfo0), /*hidden argument*/NULL);
		Type_t * L_2;
		L_2 = AccessibilitySubsystemCinfo_get_ProviderType_m051410A8508E5E9D123B3DA2604F6AD309724C8D_inline((AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1 *)(&___cinfo0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(XRSubsystemHelpers_t1ABA0E77205A5382BC3173866C111D39150FBCF1_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = XRSubsystemHelpers_CheckTypes_TisAccessibilitySubsystem_t87660EFBF1E770B16033F7AD38AB76370B50895B_TisProvider_t1B885BF706B62D27FB206A6C1631D2D5699CB596_m7AD91827E692C693C661C07A275B8CC418803E2A(L_0, L_1, L_2, /*hidden argument*/XRSubsystemHelpers_CheckTypes_TisAccessibilitySubsystem_t87660EFBF1E770B16033F7AD38AB76370B50895B_TisProvider_t1B885BF706B62D27FB206A6C1631D2D5699CB596_m7AD91827E692C693C661C07A275B8CC418803E2A_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_0027;
		}
	}
	{
		// throw new ArgumentException("Could not create AccessibilitySubsystemDescriptor.");
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_4 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8B158F9A3667630BBA0D7A4DB24E6105065433E7)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AccessibilitySubsystemDescriptor_Create_m4F72BC53ACA18F19261307D18076A7368204A20E_RuntimeMethod_var)));
	}

IL_0027:
	{
		// Debug.Log("Successfully created new descriptor");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral680D5F85FF107897716444439FE6176166BED070, /*hidden argument*/NULL);
		// return new AccessibilitySubsystemDescriptor(cinfo);
		AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1  L_5 = ___cinfo0;
		AccessibilitySubsystemDescriptor_t8E1234483302B1C8578B13351406A4782F203A8C * L_6 = (AccessibilitySubsystemDescriptor_t8E1234483302B1C8578B13351406A4782F203A8C *)il2cpp_codegen_object_new(AccessibilitySubsystemDescriptor_t8E1234483302B1C8578B13351406A4782F203A8C_il2cpp_TypeInfo_var);
		AccessibilitySubsystemDescriptor__ctor_m8E676B38C901A4CB99F7B869E171A5A6A36BEC85(L_6, L_5, /*hidden argument*/NULL);
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
// Microsoft.MixedReality.Toolkit.Accessibility.AccessibleObjectClassification Microsoft.MixedReality.Toolkit.Accessibility.AccessibleObject::get_Classification()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AccessibleObjectClassification_t5FAEC0486A9F61EBBF0F6D7E189FE35B0C9EA5E2 * AccessibleObject_get_Classification_m9016EF9068E43175DF149158EEB6373739A88CCA (AccessibleObject_t4E0F38F72E0B6F31139051C90869ABEB9E64224A * __this, const RuntimeMethod* method)
{
	{
		// public AccessibleObjectClassification Classification => classification;
		AccessibleObjectClassification_t5FAEC0486A9F61EBBF0F6D7E189FE35B0C9EA5E2 * L_0 = __this->get_classification_4();
		return L_0;
	}
}
// System.String Microsoft.MixedReality.Toolkit.Accessibility.AccessibleObject::get_Contents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AccessibleObject_get_Contents_m4600468E4A75F7C67DDC689C2DEF45649AE7AD53 (AccessibleObject_t4E0F38F72E0B6F31139051C90869ABEB9E64224A * __this, const RuntimeMethod* method)
{
	{
		// public string Contents => contents;
		String_t* L_0 = __this->get_contents_5();
		return L_0;
	}
}
// System.String Microsoft.MixedReality.Toolkit.Accessibility.AccessibleObject::get_ContentSummary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AccessibleObject_get_ContentSummary_mE2F8A6F22868129C7CE92C411940C74C88FACD09 (AccessibleObject_t4E0F38F72E0B6F31139051C90869ABEB9E64224A * __this, const RuntimeMethod* method)
{
	{
		// public string ContentSummary => contentSummary;
		String_t* L_0 = __this->get_contentSummary_6();
		return L_0;
	}
}
// System.String Microsoft.MixedReality.Toolkit.Accessibility.AccessibleObject::get_Description()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AccessibleObject_get_Description_m935F3B6428AF774B63C38B08032694B342107E03 (AccessibleObject_t4E0F38F72E0B6F31139051C90869ABEB9E64224A * __this, const RuntimeMethod* method)
{
	{
		// public string Description => description;
		String_t* L_0 = __this->get_description_7();
		return L_0;
	}
}
// System.String Microsoft.MixedReality.Toolkit.Accessibility.AccessibleObject::get_Instructions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AccessibleObject_get_Instructions_m35CB33124F0D70CD818DF680897EA413ACA22443 (AccessibleObject_t4E0F38F72E0B6F31139051C90869ABEB9E64224A * __this, const RuntimeMethod* method)
{
	{
		// public string Instructions => instructions;
		String_t* L_0 = __this->get_instructions_8();
		return L_0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Accessibility.AccessibleObject::get_IsContextuallyRelevant()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AccessibleObject_get_IsContextuallyRelevant_m8DF904B9095BC8CC2FFAFA7F59E228782FCA6009 (AccessibleObject_t4E0F38F72E0B6F31139051C90869ABEB9E64224A * __this, const RuntimeMethod* method)
{
	{
		// get => isContextuallyRelevant;
		bool L_0 = __this->get_isContextuallyRelevant_9();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibleObject::set_IsContextuallyRelevant(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibleObject_set_IsContextuallyRelevant_m155CFD76562A186F9D8C6C4189645FD7962AF1A3 (AccessibleObject_t4E0F38F72E0B6F31139051C90869ABEB9E64224A * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set => isContextuallyRelevant = value;
		bool L_0 = ___value0;
		__this->set_isContextuallyRelevant_9(L_0);
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Accessibility.ObjectRole Microsoft.MixedReality.Toolkit.Accessibility.AccessibleObject::get_Role()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectRole_t3AE1A8C919DCC4DA799FC8384919434DF43997E8 * AccessibleObject_get_Role_m9FBD96A1322875164A6DD131B940412455ED213E (AccessibleObject_t4E0F38F72E0B6F31139051C90869ABEB9E64224A * __this, const RuntimeMethod* method)
{
	{
		// public ObjectRole Role => role;
		ObjectRole_t3AE1A8C919DCC4DA799FC8384919434DF43997E8 * L_0 = __this->get_role_10();
		return L_0;
	}
}
// System.String Microsoft.MixedReality.Toolkit.Accessibility.AccessibleObject::get_Semantic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AccessibleObject_get_Semantic_m545498657DE67EE844D2770008355E9F39658F68 (AccessibleObject_t4E0F38F72E0B6F31139051C90869ABEB9E64224A * __this, const RuntimeMethod* method)
{
	{
		// public string Semantic => semantic;
		String_t* L_0 = __this->get_semantic_11();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibleObject::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibleObject_OnEnable_m52EFFCA7E4AC75952989BE50EA223AA2E8FE640F (AccessibleObject_t4E0F38F72E0B6F31139051C90869ABEB9E64224A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AccessibilityHelpers_t6756D7290A7B3A1DB18EBCEE84E1A40AE2DF4C8D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AccessibleObject_t4E0F38F72E0B6F31139051C90869ABEB9E64224A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B0FA4353F2CBCCACE1A1F98B3C3F3738127E492);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2714B1EC52279442F9A3B7ED93239624B9226A15);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralACBDBFBF2CD1DAF969EC64771234F755CFEFF59A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if ((AccessibilityHelpers.Subsystem == null) && !suppressSubsystemNotFound)
		IL2CPP_RUNTIME_CLASS_INIT(AccessibilityHelpers_t6756D7290A7B3A1DB18EBCEE84E1A40AE2DF4C8D_il2cpp_TypeInfo_var);
		AccessibilitySubsystem_t87660EFBF1E770B16033F7AD38AB76370B50895B * L_0;
		L_0 = AccessibilityHelpers_get_Subsystem_mC716F62FC7D6E7E550762C250DF76EC5C6FCA805(/*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_001f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AccessibleObject_t4E0F38F72E0B6F31139051C90869ABEB9E64224A_il2cpp_TypeInfo_var);
		bool L_1 = ((AccessibleObject_t4E0F38F72E0B6F31139051C90869ABEB9E64224A_StaticFields*)il2cpp_codegen_static_fields_for(AccessibleObject_t4E0F38F72E0B6F31139051C90869ABEB9E64224A_il2cpp_TypeInfo_var))->get_suppressSubsystemNotFound_12();
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		// Debug.LogWarning("The accessibility subsystem is not enabled or has not yet started.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteral2714B1EC52279442F9A3B7ED93239624B9226A15, /*hidden argument*/NULL);
		// suppressSubsystemNotFound = true;
		IL2CPP_RUNTIME_CLASS_INIT(AccessibleObject_t4E0F38F72E0B6F31139051C90869ABEB9E64224A_il2cpp_TypeInfo_var);
		((AccessibleObject_t4E0F38F72E0B6F31139051C90869ABEB9E64224A_StaticFields*)il2cpp_codegen_static_fields_for(AccessibleObject_t4E0F38F72E0B6F31139051C90869ABEB9E64224A_il2cpp_TypeInfo_var))->set_suppressSubsystemNotFound_12((bool)1);
		// return;
		return;
	}

IL_001f:
	{
		// if (!AccessibilityHelpers.Subsystem.TryRegisterAccessibleObject(gameObject, Classification))
		IL2CPP_RUNTIME_CLASS_INIT(AccessibilityHelpers_t6756D7290A7B3A1DB18EBCEE84E1A40AE2DF4C8D_il2cpp_TypeInfo_var);
		AccessibilitySubsystem_t87660EFBF1E770B16033F7AD38AB76370B50895B * L_2;
		L_2 = AccessibilityHelpers_get_Subsystem_mC716F62FC7D6E7E550762C250DF76EC5C6FCA805(/*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		AccessibleObjectClassification_t5FAEC0486A9F61EBBF0F6D7E189FE35B0C9EA5E2 * L_4;
		L_4 = AccessibleObject_get_Classification_m9016EF9068E43175DF149158EEB6373739A88CCA_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_5;
		L_5 = AccessibilitySubsystem_TryRegisterAccessibleObject_mC59E593EB33009F6068FA9DAC588E0D48073BF5F(L_2, L_3, L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0056;
		}
	}
	{
		// Debug.LogError($"Failed to register {gameObject.name} with the accessibility subsystem.");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		String_t* L_7;
		L_7 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_6, /*hidden argument*/NULL);
		String_t* L_8;
		L_8 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteralACBDBFBF2CD1DAF969EC64771234F755CFEFF59A, L_7, _stringLiteral0B0FA4353F2CBCCACE1A1F98B3C3F3738127E492, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_8, /*hidden argument*/NULL);
	}

IL_0056:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibleObject::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibleObject_OnDisable_mA8BECC1CAB3C3B3AEC423FA4D21C95D4D0A118F1 (AccessibleObject_t4E0F38F72E0B6F31139051C90869ABEB9E64224A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AccessibilityHelpers_t6756D7290A7B3A1DB18EBCEE84E1A40AE2DF4C8D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B0FA4353F2CBCCACE1A1F98B3C3F3738127E492);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA8731F4AEB28CD3592CFFC1849F528FCA9738497);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (AccessibilityHelpers.Subsystem == null) { return; }
		IL2CPP_RUNTIME_CLASS_INIT(AccessibilityHelpers_t6756D7290A7B3A1DB18EBCEE84E1A40AE2DF4C8D_il2cpp_TypeInfo_var);
		AccessibilitySubsystem_t87660EFBF1E770B16033F7AD38AB76370B50895B * L_0;
		L_0 = AccessibilityHelpers_get_Subsystem_mC716F62FC7D6E7E550762C250DF76EC5C6FCA805(/*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// if (AccessibilityHelpers.Subsystem == null) { return; }
		return;
	}

IL_0008:
	{
		// if (!AccessibilityHelpers.Subsystem.TryUnregisterAccessibleObject(gameObject, Classification))
		IL2CPP_RUNTIME_CLASS_INIT(AccessibilityHelpers_t6756D7290A7B3A1DB18EBCEE84E1A40AE2DF4C8D_il2cpp_TypeInfo_var);
		AccessibilitySubsystem_t87660EFBF1E770B16033F7AD38AB76370B50895B * L_1;
		L_1 = AccessibilityHelpers_get_Subsystem_mC716F62FC7D6E7E550762C250DF76EC5C6FCA805(/*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		AccessibleObjectClassification_t5FAEC0486A9F61EBBF0F6D7E189FE35B0C9EA5E2 * L_3;
		L_3 = AccessibleObject_get_Classification_m9016EF9068E43175DF149158EEB6373739A88CCA_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = AccessibilitySubsystem_TryUnregisterAccessibleObject_mAD709836410CBE905F845FF5C19550D46C84C76F(L_1, L_2, L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_003f;
		}
	}
	{
		// Debug.LogError($"Failed to unregister {gameObject.name} with the accessibility subsystem.");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		String_t* L_6;
		L_6 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_5, /*hidden argument*/NULL);
		String_t* L_7;
		L_7 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteralA8731F4AEB28CD3592CFFC1849F528FCA9738497, L_6, _stringLiteral0B0FA4353F2CBCCACE1A1F98B3C3F3738127E492, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_7, /*hidden argument*/NULL);
	}

IL_003f:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibleObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibleObject__ctor_mA4F927665E7120C661A311BBDB8EBA3889DA6446 (AccessibleObject_t4E0F38F72E0B6F31139051C90869ABEB9E64224A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string contents = string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_contents_5(L_0);
		// private string contentSummary = string.Empty;
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_contentSummary_6(L_1);
		// private string description = string.Empty;
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_description_7(L_2);
		// private string instructions = string.Empty;
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_instructions_8(L_3);
		// private bool isContextuallyRelevant = true;
		__this->set_isContextuallyRelevant_9((bool)1);
		// private string semantic = string.Empty;
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_semantic_11(L_4);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibleObject::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibleObject__cctor_m43A30155CD7328C5AB89D13F5C9E930A751CBD2C (const RuntimeMethod* method)
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
// System.String Microsoft.MixedReality.Toolkit.Accessibility.AccessibleObjectClassification::get_Description()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AccessibleObjectClassification_get_Description_m92EB6613C316CC49C8021355D149D495701DB126 (AccessibleObjectClassification_t5FAEC0486A9F61EBBF0F6D7E189FE35B0C9EA5E2 * __this, const RuntimeMethod* method)
{
	{
		// public string Description { get; set; }
		String_t* L_0 = __this->get_U3CDescriptionU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibleObjectClassification::set_Description(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibleObjectClassification_set_Description_m7B9C0708E6E106E905A087B05A282B60B5C26C82 (AccessibleObjectClassification_t5FAEC0486A9F61EBBF0F6D7E189FE35B0C9EA5E2 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Description { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CDescriptionU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibleObjectClassification::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibleObjectClassification__ctor_mDD7318B48239EAA267E799C4992B3CFCA2618C8F (AccessibleObjectClassification_t5FAEC0486A9F61EBBF0F6D7E189FE35B0C9EA5E2 * __this, const RuntimeMethod* method)
{
	{
		ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063(__this, /*hidden argument*/NULL);
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
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem::Register()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MRTKAccessibilitySubsystem_Register_m5ED361CD30BF0FB017D984CCD84AF59A43323D57 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSubsystemHelpers_ConstructCinfo_TisMRTKAccessibilitySubsystem_t41A3DE7F8F47C58ACC35F7B3790B4F3B6950B9BF_TisAccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1_mF7AA1B00CB73143CEB3F3D8FA115827103518A36_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSubsystemHelpers_t1ABA0E77205A5382BC3173866C111D39150FBCF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA48C0F16E39A46C469EC5BB4DA73F02A7D84D8E7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE528A64618644524EC116F5E5BB24B0B6C94B55F);
		s_Il2CppMethodInitialized = true;
	}
	AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var cinfo = XRSubsystemHelpers.ConstructCinfo<MRTKAccessibilitySubsystem, AccessibilitySubsystemCinfo>();
		IL2CPP_RUNTIME_CLASS_INIT(XRSubsystemHelpers_t1ABA0E77205A5382BC3173866C111D39150FBCF1_il2cpp_TypeInfo_var);
		AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1  L_0;
		L_0 = XRSubsystemHelpers_ConstructCinfo_TisMRTKAccessibilitySubsystem_t41A3DE7F8F47C58ACC35F7B3790B4F3B6950B9BF_TisAccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1_mF7AA1B00CB73143CEB3F3D8FA115827103518A36(/*hidden argument*/XRSubsystemHelpers_ConstructCinfo_TisMRTKAccessibilitySubsystem_t41A3DE7F8F47C58ACC35F7B3790B4F3B6950B9BF_TisAccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1_mF7AA1B00CB73143CEB3F3D8FA115827103518A36_RuntimeMethod_var);
		V_0 = L_0;
		// if (!AccessibilitySubsystem.Register(cinfo))
		AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1  L_1 = V_0;
		bool L_2;
		L_2 = AccessibilitySubsystem_Register_m871B67F843208B6CD0B45549F377AC931B1CB218(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0029;
		}
	}
	{
		// Debug.LogError($"Failed to register the {cinfo.Name} subsystem.");
		String_t* L_3;
		L_3 = AccessibilitySubsystemCinfo_get_Name_mAEFE7ECD134505F8A539CCC28A53B74AC32D0141_inline((AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1 *)(&V_0), /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteralA48C0F16E39A46C469EC5BB4DA73F02A7D84D8E7, L_3, _stringLiteralE528A64618644524EC116F5E5BB24B0B6C94B55F, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_4, /*hidden argument*/NULL);
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MRTKAccessibilitySubsystem__ctor_m661CEA115C69050868EF5A8F53A314D96D8FEDC5 (MRTKAccessibilitySubsystem_t41A3DE7F8F47C58ACC35F7B3790B4F3B6950B9BF * __this, const RuntimeMethod* method)
{
	{
		AccessibilitySubsystem__ctor_mA55D05EA57A33A794A6893ECE7ABA94BA20C39E2(__this, /*hidden argument*/NULL);
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
// System.String Microsoft.MixedReality.Toolkit.Accessibility.ObjectRole::get_Description()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ObjectRole_get_Description_mA06E0D8CD956B99D097D9A412B09242919B7D17C (ObjectRole_t3AE1A8C919DCC4DA799FC8384919434DF43997E8 * __this, const RuntimeMethod* method)
{
	{
		// get => description;
		String_t* L_0 = __this->get_description_4();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.ObjectRole::set_Description(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectRole_set_Description_m11EC7EA769A07A1B9176B041710FA256D54252FA (ObjectRole_t3AE1A8C919DCC4DA799FC8384919434DF43997E8 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// set => description = value;
		String_t* L_0 = ___value0;
		__this->set_description_4(L_0);
		return;
	}
}
// System.String Microsoft.MixedReality.Toolkit.Accessibility.ObjectRole::get_FormalName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ObjectRole_get_FormalName_m7406411908343CB7C5BC355E74EE57B866598DA0 (ObjectRole_t3AE1A8C919DCC4DA799FC8384919434DF43997E8 * __this, const RuntimeMethod* method)
{
	{
		// get => formalName;
		String_t* L_0 = __this->get_formalName_5();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.ObjectRole::set_FormalName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectRole_set_FormalName_m82B1C3EC4BA1473E26944BE5A885AD0F5CB145EC (ObjectRole_t3AE1A8C919DCC4DA799FC8384919434DF43997E8 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// set => formalName = value;
		String_t* L_0 = ___value0;
		__this->set_formalName_5(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Accessibility.ObjectRole::get_IsAria()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ObjectRole_get_IsAria_mA7943A72E0E5895D8DFC38CE847660F85E9EF9B7 (ObjectRole_t3AE1A8C919DCC4DA799FC8384919434DF43997E8 * __this, const RuntimeMethod* method)
{
	{
		// get => isAria;
		bool L_0 = __this->get_isAria_6();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.ObjectRole::set_IsAria(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectRole_set_IsAria_m29C468945C766D2E553380C67AF2448D6D98636A (ObjectRole_t3AE1A8C919DCC4DA799FC8384919434DF43997E8 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set => isAria = value;
		bool L_0 = ___value0;
		__this->set_isAria_6(L_0);
		return;
	}
}
// System.String Microsoft.MixedReality.Toolkit.Accessibility.ObjectRole::get_ReferenceLink()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ObjectRole_get_ReferenceLink_mB0AE720E188F26AA0DA1B8C2AD1724FC9A94062F (ObjectRole_t3AE1A8C919DCC4DA799FC8384919434DF43997E8 * __this, const RuntimeMethod* method)
{
	{
		// get => referenceLink;
		String_t* L_0 = __this->get_referenceLink_7();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.ObjectRole::set_ReferenceLink(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectRole_set_ReferenceLink_mB90C87BC7C839C4F28278CC7A6CDDF54D8B03AB6 (ObjectRole_t3AE1A8C919DCC4DA799FC8384919434DF43997E8 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// set => referenceLink = value;
		String_t* L_0 = ___value0;
		__this->set_referenceLink_7(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.ObjectRole::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectRole__ctor_mA0B7DBA2591DF5546C1C72D4CF4D4A1AC77D3487 (ObjectRole_t3AE1A8C919DCC4DA799FC8384919434DF43997E8 * __this, const RuntimeMethod* method)
{
	{
		ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063(__this, /*hidden argument*/NULL);
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
// System.Single Microsoft.MixedReality.Toolkit.Accessibility.ScreenReaderObjectSettings::get_MaxObjectDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ScreenReaderObjectSettings_get_MaxObjectDistance_mBC994602F72D0DDF115478FFD3D2BDBC09234EEA (ScreenReaderObjectSettings_t997C0D291D64E4A1BA7AE394A2AAD63792FF4082 * __this, const RuntimeMethod* method)
{
	{
		// get => maxObjectDistance;
		float L_0 = __this->get_maxObjectDistance_0();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.ScreenReaderObjectSettings::set_MaxObjectDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScreenReaderObjectSettings_set_MaxObjectDistance_mBA826E4B6FDA8AC6AEE59CBBB1465381F9435FF0 (ScreenReaderObjectSettings_t997C0D291D64E4A1BA7AE394A2AAD63792FF4082 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => maxObjectDistance = value;
		float L_0 = ___value0;
		__this->set_maxObjectDistance_0(L_0);
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Accessibility.ScreenReaderSpatializationOption Microsoft.MixedReality.Toolkit.Accessibility.ScreenReaderObjectSettings::get_SpatializationOption()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ScreenReaderObjectSettings_get_SpatializationOption_m8B40A543DF9AE4F4CC22BA6329610118E9D6A0A6 (ScreenReaderObjectSettings_t997C0D291D64E4A1BA7AE394A2AAD63792FF4082 * __this, const RuntimeMethod* method)
{
	{
		// get => spatializationOption;
		int32_t L_0 = __this->get_spatializationOption_1();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.ScreenReaderObjectSettings::set_SpatializationOption(Microsoft.MixedReality.Toolkit.Accessibility.ScreenReaderSpatializationOption)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScreenReaderObjectSettings_set_SpatializationOption_mA061969DE5D64F7381F3C57886A53C8540B5F674 (ScreenReaderObjectSettings_t997C0D291D64E4A1BA7AE394A2AAD63792FF4082 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set => spatializationOption = value;
		int32_t L_0 = ___value0;
		__this->set_spatializationOption_1(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.ScreenReaderObjectSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScreenReaderObjectSettings__ctor_m9C0DA4BB4F81E1C9D419881FBB05A5585A8A4464 (ScreenReaderObjectSettings_t997C0D291D64E4A1BA7AE394A2AAD63792FF4082 * __this, const RuntimeMethod* method)
{
	{
		// private float maxObjectDistance = float.PositiveInfinity;
		__this->set_maxObjectDistance_0((std::numeric_limits<float>::infinity()));
		// private ScreenReaderSpatializationOption spatializationOption = ScreenReaderSpatializationOption.Full;
		__this->set_spatializationOption_1(1);
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
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.TextAccessibility::ApplyInitialConfiguration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextAccessibility_ApplyInitialConfiguration_mB5E94A2A76DF07DCA44779E90EAFD8412F794A9E (TextAccessibility_t903FCF08C24E1F72018F27355BA6B1C86F0D2AD5 * __this, const RuntimeMethod* method)
{
	{
		// OnInvertTextColorChanged(accessibilitySubsystem.InvertTextColor);
		AccessibilitySubsystem_t87660EFBF1E770B16033F7AD38AB76370B50895B * L_0 = __this->get_accessibilitySubsystem_4();
		NullCheck(L_0);
		bool L_1;
		L_1 = AccessibilitySubsystem_get_InvertTextColor_m34E647786B422BBFA6E94DAA502FE735D4709F65(L_0, /*hidden argument*/NULL);
		TextAccessibility_OnInvertTextColorChanged_mED2CA36546DDEF3F0D855207B5BD47BE7ABA16EA(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.TextAccessibility::GetTextMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextAccessibility_GetTextMaterial_m54E9FE21E57A554460F5376BA4E893A24CA87C6C (TextAccessibility_t903FCF08C24E1F72018F27355BA6B1C86F0D2AD5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_TryGetComponent_TisTMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_m9E2FEC0D250683C6578E23A114D561CCD3F71370_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC059A8FD08BCE672BF2CB48A49B7329B485F3ED8);
		s_Il2CppMethodInitialized = true;
	}
	TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * V_0 = NULL;
	{
		// if (TryGetComponent(out TMP_Text tmpText))
		bool L_0;
		L_0 = Component_TryGetComponent_TisTMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_m9E2FEC0D250683C6578E23A114D561CCD3F71370(__this, (TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 **)(&V_0), /*hidden argument*/Component_TryGetComponent_TisTMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_m9E2FEC0D250683C6578E23A114D561CCD3F71370_RuntimeMethod_var);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		// material = tmpText.fontMaterial;
		TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * L_1 = V_0;
		NullCheck(L_1);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_2;
		L_2 = TMP_Text_get_fontMaterial_mA58C75BFC0CDB2C835CA4536C7A1A727FCA641CF(L_1, /*hidden argument*/NULL);
		__this->set_material_5(L_2);
		// return;
		return;
	}

IL_0017:
	{
		// Debug.LogError($"{nameof(TextAccessibility)} requires being attached to a TextMeshPro or TextMeshProUGUI object");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteralC059A8FD08BCE672BF2CB48A49B7329B485F3ED8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.TextAccessibility::OnInvertTextColorChanged(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextAccessibility_OnInvertTextColorChanged_mED2CA36546DDEF3F0D855207B5BD47BE7ABA16EA (TextAccessibility_t903FCF08C24E1F72018F27355BA6B1C86F0D2AD5 * __this, bool ___invert0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AccessibilitySubsystem_t87660EFBF1E770B16033F7AD38AB76370B50895B * G_B4_0 = NULL;
	AccessibilitySubsystem_t87660EFBF1E770B16033F7AD38AB76370B50895B * G_B3_0 = NULL;
	{
		// if (material == null) { return; }
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_0 = __this->get_material_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// if (material == null) { return; }
		return;
	}

IL_000f:
	{
		// accessibilitySubsystem?.ApplyTextColorInversion(material, invert);
		AccessibilitySubsystem_t87660EFBF1E770B16033F7AD38AB76370B50895B * L_2 = __this->get_accessibilitySubsystem_4();
		AccessibilitySubsystem_t87660EFBF1E770B16033F7AD38AB76370B50895B * L_3 = L_2;
		G_B3_0 = L_3;
		if (L_3)
		{
			G_B4_0 = L_3;
			goto IL_001a;
		}
	}
	{
		return;
	}

IL_001a:
	{
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_4 = __this->get_material_5();
		bool L_5 = ___invert0;
		NullCheck(G_B4_0);
		AccessibilitySubsystem_ApplyTextColorInversion_mBFB893FB6AF187F0988339D5721C547698029E98(G_B4_0, L_4, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.TextAccessibility::RegisterHandlers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextAccessibility_RegisterHandlers_m865A4F7B0A23B0D0D394EDEA959FF3203D2B6EB6 (TextAccessibility_t903FCF08C24E1F72018F27355BA6B1C86F0D2AD5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m2A1B34C27CAE6ED7FD924E5F59C0A1ACBBF22C38_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextAccessibility_OnInvertTextColorChanged_mED2CA36546DDEF3F0D855207B5BD47BE7ABA16EA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (accessibilitySubsystem != null)
		AccessibilitySubsystem_t87660EFBF1E770B16033F7AD38AB76370B50895B * L_0 = __this->get_accessibilitySubsystem_4();
		if (!L_0)
		{
			goto IL_0025;
		}
	}
	{
		// ApplyInitialConfiguration();
		TextAccessibility_ApplyInitialConfiguration_mB5E94A2A76DF07DCA44779E90EAFD8412F794A9E(__this, /*hidden argument*/NULL);
		// accessibilitySubsystem.InvertTextColorChanged += OnInvertTextColorChanged;
		AccessibilitySubsystem_t87660EFBF1E770B16033F7AD38AB76370B50895B * L_1 = __this->get_accessibilitySubsystem_4();
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_2 = (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 *)il2cpp_codegen_object_new(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83_il2cpp_TypeInfo_var);
		Action_1__ctor_m2A1B34C27CAE6ED7FD924E5F59C0A1ACBBF22C38(L_2, __this, (intptr_t)((intptr_t)TextAccessibility_OnInvertTextColorChanged_mED2CA36546DDEF3F0D855207B5BD47BE7ABA16EA_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m2A1B34C27CAE6ED7FD924E5F59C0A1ACBBF22C38_RuntimeMethod_var);
		NullCheck(L_1);
		AccessibilitySubsystem_add_InvertTextColorChanged_mC26444E31318FDA534ACD16A3DE7ADC5B6C615B5(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.TextAccessibility::UnregisterHandlers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextAccessibility_UnregisterHandlers_mAA56B908B30EA29D0FCA943F60AADB5AB39037E6 (TextAccessibility_t903FCF08C24E1F72018F27355BA6B1C86F0D2AD5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m2A1B34C27CAE6ED7FD924E5F59C0A1ACBBF22C38_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextAccessibility_OnInvertTextColorChanged_mED2CA36546DDEF3F0D855207B5BD47BE7ABA16EA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (accessibilitySubsystem != null)
		AccessibilitySubsystem_t87660EFBF1E770B16033F7AD38AB76370B50895B * L_0 = __this->get_accessibilitySubsystem_4();
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		// accessibilitySubsystem.InvertTextColorChanged -= OnInvertTextColorChanged;
		AccessibilitySubsystem_t87660EFBF1E770B16033F7AD38AB76370B50895B * L_1 = __this->get_accessibilitySubsystem_4();
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_2 = (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 *)il2cpp_codegen_object_new(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83_il2cpp_TypeInfo_var);
		Action_1__ctor_m2A1B34C27CAE6ED7FD924E5F59C0A1ACBBF22C38(L_2, __this, (intptr_t)((intptr_t)TextAccessibility_OnInvertTextColorChanged_mED2CA36546DDEF3F0D855207B5BD47BE7ABA16EA_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m2A1B34C27CAE6ED7FD924E5F59C0A1ACBBF22C38_RuntimeMethod_var);
		NullCheck(L_1);
		AccessibilitySubsystem_remove_InvertTextColorChanged_mBC0014F741E73D6262C34A326A3F091663398B3A(L_1, L_2, /*hidden argument*/NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.TextAccessibility::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextAccessibility_Start_m66EF513C16ED39020A4D2A17D2F6B82521301935 (TextAccessibility_t903FCF08C24E1F72018F27355BA6B1C86F0D2AD5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSubsystemHelpers_GetFirstRunningSubsystem_TisAccessibilitySubsystem_t87660EFBF1E770B16033F7AD38AB76370B50895B_mD2359E88D4EFCBD3575ED235A1E166C653A77D52_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSubsystemHelpers_t1ABA0E77205A5382BC3173866C111D39150FBCF1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetTextMaterial();
		TextAccessibility_GetTextMaterial_m54E9FE21E57A554460F5376BA4E893A24CA87C6C(__this, /*hidden argument*/NULL);
		// accessibilitySubsystem = XRSubsystemHelpers.GetFirstRunningSubsystem<AccessibilitySubsystem>();
		IL2CPP_RUNTIME_CLASS_INIT(XRSubsystemHelpers_t1ABA0E77205A5382BC3173866C111D39150FBCF1_il2cpp_TypeInfo_var);
		AccessibilitySubsystem_t87660EFBF1E770B16033F7AD38AB76370B50895B * L_0;
		L_0 = XRSubsystemHelpers_GetFirstRunningSubsystem_TisAccessibilitySubsystem_t87660EFBF1E770B16033F7AD38AB76370B50895B_mD2359E88D4EFCBD3575ED235A1E166C653A77D52(/*hidden argument*/XRSubsystemHelpers_GetFirstRunningSubsystem_TisAccessibilitySubsystem_t87660EFBF1E770B16033F7AD38AB76370B50895B_mD2359E88D4EFCBD3575ED235A1E166C653A77D52_RuntimeMethod_var);
		__this->set_accessibilitySubsystem_4(L_0);
		// RegisterHandlers();
		TextAccessibility_RegisterHandlers_m865A4F7B0A23B0D0D394EDEA959FF3203D2B6EB6(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.TextAccessibility::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextAccessibility_OnEnable_mEABCD32781DFAC198A737447C16A6ABAA7A5DB82 (TextAccessibility_t903FCF08C24E1F72018F27355BA6B1C86F0D2AD5 * __this, const RuntimeMethod* method)
{
	{
		// RegisterHandlers();
		TextAccessibility_RegisterHandlers_m865A4F7B0A23B0D0D394EDEA959FF3203D2B6EB6(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.TextAccessibility::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextAccessibility_OnDisable_m9DEE668A5A99CD3F5572B3FF2F11F95E33BD0B04 (TextAccessibility_t903FCF08C24E1F72018F27355BA6B1C86F0D2AD5 * __this, const RuntimeMethod* method)
{
	{
		// UnregisterHandlers();
		TextAccessibility_UnregisterHandlers_mAA56B908B30EA29D0FCA943F60AADB5AB39037E6(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.TextAccessibility::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextAccessibility_OnDestroy_mF89A293F32E2107DA802D7AA65E563105B8E26B9 (TextAccessibility_t903FCF08C24E1F72018F27355BA6B1C86F0D2AD5 * __this, const RuntimeMethod* method)
{
	{
		// accessibilitySubsystem = null;
		__this->set_accessibilitySubsystem_4((AccessibilitySubsystem_t87660EFBF1E770B16033F7AD38AB76370B50895B *)NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.TextAccessibility::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextAccessibility__ctor_m05816B8450B281E60CAB7B4794267D32486D2955 (TextAccessibility_t903FCF08C24E1F72018F27355BA6B1C86F0D2AD5 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_m1F1BC809F591CBAB73E0FDA6CC5190257520631F (Provider_t1B885BF706B62D27FB206A6C1631D2D5699CB596 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MRTKSubsystemProvider_1__ctor_m8CE4867BC76E307D836B4145A9CA59EBE595CE51_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MRTKSubsystemProvider_1__ctor_m8CE4867BC76E307D836B4145A9CA59EBE595CE51(__this, /*hidden argument*/MRTKSubsystemProvider_1__ctor_m8CE4867BC76E307D836B4145A9CA59EBE595CE51_RuntimeMethod_var);
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
// Microsoft.MixedReality.Toolkit.Accessibility.AccessibilitySubsystemConfig Microsoft.MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem/AccessibilityProvider::get_Config()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AccessibilitySubsystemConfig_tA71A24B93F43AAD4BD12AA1FB4116F1EB4B4BA3B * AccessibilityProvider_get_Config_mC7D1CE31D8B6EE22BB93407D2478D308A8B5C693 (AccessibilityProvider_tB927231E25CC81A175ED2DF8538BE30F986C830F * __this, const RuntimeMethod* method)
{
	{
		// protected AccessibilitySubsystemConfig Config { get; }
		AccessibilitySubsystemConfig_tA71A24B93F43AAD4BD12AA1FB4116F1EB4B4BA3B * L_0 = __this->get_U3CConfigU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem/AccessibilityProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilityProvider__ctor_mE3AA4590C910856D7BCD83F944673D82E7F69B12 (AccessibilityProvider_tB927231E25CC81A175ED2DF8538BE30F986C830F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3CC1FE6C7C54A9AAAA089CCF77AF34302DD9F3FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tAB54087C57C52C41006918B526AE3953D1779243_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSubsystemHelpers_GetConfiguration_TisAccessibilitySubsystemConfig_tA71A24B93F43AAD4BD12AA1FB4116F1EB4B4BA3B_TisMRTKAccessibilitySubsystem_t41A3DE7F8F47C58ACC35F7B3790B4F3B6950B9BF_m72B8445AC3AE9543E7F010A956D8C58C2D23F093_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSubsystemHelpers_t1ABA0E77205A5382BC3173866C111D39150FBCF1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly Dictionary<AccessibleObjectClassification, List<GameObject>> accessibleObjects =
		//     new Dictionary<AccessibleObjectClassification, List<GameObject>>();
		Dictionary_2_tAB54087C57C52C41006918B526AE3953D1779243 * L_0 = (Dictionary_2_tAB54087C57C52C41006918B526AE3953D1779243 *)il2cpp_codegen_object_new(Dictionary_2_tAB54087C57C52C41006918B526AE3953D1779243_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3CC1FE6C7C54A9AAAA089CCF77AF34302DD9F3FE(L_0, /*hidden argument*/Dictionary_2__ctor_m3CC1FE6C7C54A9AAAA089CCF77AF34302DD9F3FE_RuntimeMethod_var);
		__this->set_accessibleObjects_2(L_0);
		// public AccessibilityProvider() : base()
		Provider__ctor_m1F1BC809F591CBAB73E0FDA6CC5190257520631F(__this, /*hidden argument*/NULL);
		// Config = XRSubsystemHelpers.GetConfiguration<AccessibilitySubsystemConfig, MRTKAccessibilitySubsystem>();
		IL2CPP_RUNTIME_CLASS_INIT(XRSubsystemHelpers_t1ABA0E77205A5382BC3173866C111D39150FBCF1_il2cpp_TypeInfo_var);
		AccessibilitySubsystemConfig_tA71A24B93F43AAD4BD12AA1FB4116F1EB4B4BA3B * L_1;
		L_1 = XRSubsystemHelpers_GetConfiguration_TisAccessibilitySubsystemConfig_tA71A24B93F43AAD4BD12AA1FB4116F1EB4B4BA3B_TisMRTKAccessibilitySubsystem_t41A3DE7F8F47C58ACC35F7B3790B4F3B6950B9BF_m72B8445AC3AE9543E7F010A956D8C58C2D23F093(/*hidden argument*/XRSubsystemHelpers_GetConfiguration_TisAccessibilitySubsystemConfig_tA71A24B93F43AAD4BD12AA1FB4116F1EB4B4BA3B_TisMRTKAccessibilitySubsystem_t41A3DE7F8F47C58ACC35F7B3790B4F3B6950B9BF_m72B8445AC3AE9543E7F010A956D8C58C2D23F093_RuntimeMethod_var);
		__this->set_U3CConfigU3Ek__BackingField_1(L_1);
		// invertTextColor = Config.InvertTextColor;
		AccessibilitySubsystemConfig_tA71A24B93F43AAD4BD12AA1FB4116F1EB4B4BA3B * L_2;
		L_2 = AccessibilityProvider_get_Config_mC7D1CE31D8B6EE22BB93407D2478D308A8B5C693_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = AccessibilitySubsystemConfig_get_InvertTextColor_mA053AFC4843807C6A566569363EB79908C4D12B9_inline(L_2, /*hidden argument*/NULL);
		__this->set_invertTextColor_3(L_3);
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem/AccessibilityProvider::TryGetAccessibleObjects(System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Accessibility.AccessibleObjectClassification>,Microsoft.MixedReality.Toolkit.Accessibility.AccessibleObjectVisibility,System.Single,System.Collections.Generic.List`1<UnityEngine.GameObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AccessibilityProvider_TryGetAccessibleObjects_m74A38AF0B35BDC4462AEB6E0FEE2469BE3C1C291 (AccessibilityProvider_tB927231E25CC81A175ED2DF8538BE30F986C830F * __this, List_1_t698C3F6B3DCEEE7EB6FA28060F8268F41585F616 * ___classifications0, int32_t ___visibility1, float ___maxDistance2, List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___accessibleObjectsList3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m7DF03CE7132B7D4C6AA2AEEA9BD1A8755AE12432_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral906F379A3EDE20E3AEF88CF2F80715B39D89684B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (maxDistance <= 0)
		float L_0 = ___maxDistance2;
		if ((!(((float)L_0) <= ((float)(0.0f)))))
		{
			goto IL_0014;
		}
	}
	{
		// Debug.LogError("The distance from the camera to the objects cannot be less than or equal to zero.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral906F379A3EDE20E3AEF88CF2F80715B39D89684B, /*hidden argument*/NULL);
		// return false;
		return (bool)0;
	}

IL_0014:
	{
		// accessibleObjectsList.Clear();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_1 = ___accessibleObjectsList3;
		NullCheck(L_1);
		List_1_Clear_m7DF03CE7132B7D4C6AA2AEEA9BD1A8755AE12432(L_1, /*hidden argument*/List_1_Clear_m7DF03CE7132B7D4C6AA2AEEA9BD1A8755AE12432_RuntimeMethod_var);
		// AssembleAccessibleObjects(classifications, accessibleObjectsList);
		List_1_t698C3F6B3DCEEE7EB6FA28060F8268F41585F616 * L_2 = ___classifications0;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_3 = ___accessibleObjectsList3;
		AccessibilityProvider_AssembleAccessibleObjects_mEBF75963CEB7779AA5951EF70202B62060920C20(__this, L_2, L_3, /*hidden argument*/NULL);
		// FilterAccessibleObjects(visibility, maxDistance, accessibleObjectsList);
		int32_t L_4 = ___visibility1;
		float L_5 = ___maxDistance2;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_6 = ___accessibleObjectsList3;
		AccessibilityProvider_FilterAccessibleObjects_m09E76BB774F9CF76F42295037324B0C1CCBAF74B(__this, L_4, L_5, L_6, /*hidden argument*/NULL);
		// return true;
		return (bool)1;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem/AccessibilityProvider::TryGetAccessibleObjectClassifications(System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Accessibility.AccessibleObjectClassification>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AccessibilityProvider_TryGetAccessibleObjectClassifications_mDDE8D5E9DA963C760EF89B1B048F848A6EE5E4E5 (AccessibilityProvider_tB927231E25CC81A175ED2DF8538BE30F986C830F * __this, List_1_t698C3F6B3DCEEE7EB6FA28060F8268F41585F616 * ___classifications0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Keys_mB86AF1E852095B18711C943E13AB11F26F0BF017_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_mBB5A94518A9831C99032BB0ABBBD6D5E0F6C0CE3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m894DFD2A6BA50A84E676E060218D441B70A8E2FD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// classifications.Clear();
		List_1_t698C3F6B3DCEEE7EB6FA28060F8268F41585F616 * L_0 = ___classifications0;
		NullCheck(L_0);
		List_1_Clear_m894DFD2A6BA50A84E676E060218D441B70A8E2FD(L_0, /*hidden argument*/List_1_Clear_m894DFD2A6BA50A84E676E060218D441B70A8E2FD_RuntimeMethod_var);
		// classifications.AddRange(accessibleObjects.Keys);
		List_1_t698C3F6B3DCEEE7EB6FA28060F8268F41585F616 * L_1 = ___classifications0;
		Dictionary_2_tAB54087C57C52C41006918B526AE3953D1779243 * L_2 = __this->get_accessibleObjects_2();
		NullCheck(L_2);
		KeyCollection_t066FE47FD65D965E339C02B22641D43C76611475 * L_3;
		L_3 = Dictionary_2_get_Keys_mB86AF1E852095B18711C943E13AB11F26F0BF017(L_2, /*hidden argument*/Dictionary_2_get_Keys_mB86AF1E852095B18711C943E13AB11F26F0BF017_RuntimeMethod_var);
		NullCheck(L_1);
		List_1_AddRange_mBB5A94518A9831C99032BB0ABBBD6D5E0F6C0CE3(L_1, L_3, /*hidden argument*/List_1_AddRange_mBB5A94518A9831C99032BB0ABBBD6D5E0F6C0CE3_RuntimeMethod_var);
		// return true;
		return (bool)1;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem/AccessibilityProvider::TryRegisterAccessibleObject(UnityEngine.GameObject,Microsoft.MixedReality.Toolkit.Accessibility.AccessibleObjectClassification)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AccessibilityProvider_TryRegisterAccessibleObject_m76B3AD67E87238C1AF8DD0BB5EA5103F5A6B85A8 (AccessibilityProvider_tB927231E25CC81A175ED2DF8538BE30F986C830F * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___accessibleObject0, AccessibleObjectClassification_t5FAEC0486A9F61EBBF0F6D7E189FE35B0C9EA5E2 * ___classification1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m5A43CB3FC04A1B84E8CB60A00184539875648265_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mD207369A2FCE41436A4609B76C958BEEC8F37EC3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mAAB6D25E7D41246F664073F4EED032C56B5548D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_m4E4EEA774FA753BDCABF4896923FB73E0F82D0C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m4E5DE744EBE4CE39AD86387422A29291BA0167C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mF389CD1EF88A0968458E08E9741CA778AA3EC842_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m63C0E50C81167F19BB0707F6518C2361357D8E80_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_tE19DF962738977670C6F3FE0F98F2568575977DA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueCollection_GetEnumerator_mCA421A011AD8F94BBAE0979395C9E5925809A225_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral281033B411A2723B0C82F6B48AC1E70FEB902A11);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t275D0381C7D498B50DA370FFAC01EF51919C91A8  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// foreach (IList<GameObject> list in accessibleObjects.Values)
		Dictionary_2_tAB54087C57C52C41006918B526AE3953D1779243 * L_0 = __this->get_accessibleObjects_2();
		NullCheck(L_0);
		ValueCollection_tDD96960CECF937DA06FA286B47415A7F890CB52A * L_1;
		L_1 = Dictionary_2_get_Values_m4E4EEA774FA753BDCABF4896923FB73E0F82D0C7(L_0, /*hidden argument*/Dictionary_2_get_Values_m4E4EEA774FA753BDCABF4896923FB73E0F82D0C7_RuntimeMethod_var);
		NullCheck(L_1);
		Enumerator_t275D0381C7D498B50DA370FFAC01EF51919C91A8  L_2;
		L_2 = ValueCollection_GetEnumerator_mCA421A011AD8F94BBAE0979395C9E5925809A225(L_1, /*hidden argument*/ValueCollection_GetEnumerator_mCA421A011AD8F94BBAE0979395C9E5925809A225_RuntimeMethod_var);
		V_0 = L_2;
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003b;
		}

IL_0013:
		{
			// foreach (IList<GameObject> list in accessibleObjects.Values)
			List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_3;
			L_3 = Enumerator_get_Current_m63C0E50C81167F19BB0707F6518C2361357D8E80_inline((Enumerator_t275D0381C7D498B50DA370FFAC01EF51919C91A8 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m63C0E50C81167F19BB0707F6518C2361357D8E80_RuntimeMethod_var);
			// if (list.Contains(accessibleObject))
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = ___accessibleObject0;
			NullCheck(L_3);
			bool L_5;
			L_5 = InterfaceFuncInvoker1< bool, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.GameObject>::Contains(!0) */, ICollection_1_tE19DF962738977670C6F3FE0F98F2568575977DA_il2cpp_TypeInfo_var, L_3, L_4);
			if (!L_5)
			{
				goto IL_003b;
			}
		}

IL_0022:
		{
			// Debug.LogError($"{accessibleObject.name} has already been registered as a accessible object");
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = ___accessibleObject0;
			NullCheck(L_6);
			String_t* L_7;
			L_7 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_6, /*hidden argument*/NULL);
			String_t* L_8;
			L_8 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_7, _stringLiteral281033B411A2723B0C82F6B48AC1E70FEB902A11, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_8, /*hidden argument*/NULL);
			// return false;
			V_1 = (bool)0;
			IL2CPP_LEAVE(0x87, FINALLY_0046);
		}

IL_003b:
		{
			// foreach (IList<GameObject> list in accessibleObjects.Values)
			bool L_9;
			L_9 = Enumerator_MoveNext_mF389CD1EF88A0968458E08E9741CA778AA3EC842((Enumerator_t275D0381C7D498B50DA370FFAC01EF51919C91A8 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mF389CD1EF88A0968458E08E9741CA778AA3EC842_RuntimeMethod_var);
			if (L_9)
			{
				goto IL_0013;
			}
		}

IL_0044:
		{
			IL2CPP_LEAVE(0x54, FINALLY_0046);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0046;
	}

FINALLY_0046:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m4E5DE744EBE4CE39AD86387422A29291BA0167C7((Enumerator_t275D0381C7D498B50DA370FFAC01EF51919C91A8 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m4E5DE744EBE4CE39AD86387422A29291BA0167C7_RuntimeMethod_var);
		IL2CPP_END_FINALLY(70)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(70)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x87, IL_0087)
		IL2CPP_JUMP_TBL(0x54, IL_0054)
	}

IL_0054:
	{
		// if (!accessibleObjects.ContainsKey(classification))
		Dictionary_2_tAB54087C57C52C41006918B526AE3953D1779243 * L_10 = __this->get_accessibleObjects_2();
		AccessibleObjectClassification_t5FAEC0486A9F61EBBF0F6D7E189FE35B0C9EA5E2 * L_11 = ___classification1;
		NullCheck(L_10);
		bool L_12;
		L_12 = Dictionary_2_ContainsKey_mD207369A2FCE41436A4609B76C958BEEC8F37EC3(L_10, L_11, /*hidden argument*/Dictionary_2_ContainsKey_mD207369A2FCE41436A4609B76C958BEEC8F37EC3_RuntimeMethod_var);
		if (L_12)
		{
			goto IL_0073;
		}
	}
	{
		// accessibleObjects.Add(classification, new List<GameObject>());
		Dictionary_2_tAB54087C57C52C41006918B526AE3953D1779243 * L_13 = __this->get_accessibleObjects_2();
		AccessibleObjectClassification_t5FAEC0486A9F61EBBF0F6D7E189FE35B0C9EA5E2 * L_14 = ___classification1;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_15 = (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)il2cpp_codegen_object_new(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var);
		List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8(L_15, /*hidden argument*/List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var);
		NullCheck(L_13);
		Dictionary_2_Add_m5A43CB3FC04A1B84E8CB60A00184539875648265(L_13, L_14, L_15, /*hidden argument*/Dictionary_2_Add_m5A43CB3FC04A1B84E8CB60A00184539875648265_RuntimeMethod_var);
	}

IL_0073:
	{
		// accessibleObjects[classification].Add(accessibleObject);
		Dictionary_2_tAB54087C57C52C41006918B526AE3953D1779243 * L_16 = __this->get_accessibleObjects_2();
		AccessibleObjectClassification_t5FAEC0486A9F61EBBF0F6D7E189FE35B0C9EA5E2 * L_17 = ___classification1;
		NullCheck(L_16);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_18;
		L_18 = Dictionary_2_get_Item_mAAB6D25E7D41246F664073F4EED032C56B5548D4(L_16, L_17, /*hidden argument*/Dictionary_2_get_Item_mAAB6D25E7D41246F664073F4EED032C56B5548D4_RuntimeMethod_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19 = ___accessibleObject0;
		NullCheck(L_18);
		List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3(L_18, L_19, /*hidden argument*/List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		// return true;
		return (bool)1;
	}

IL_0087:
	{
		// }
		bool L_20 = V_1;
		return L_20;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem/AccessibilityProvider::TryUnregisterAccessibleObject(UnityEngine.GameObject,Microsoft.MixedReality.Toolkit.Accessibility.AccessibleObjectClassification)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AccessibilityProvider_TryUnregisterAccessibleObject_m8CCE3D1FC22AC0233DB06244B2F4EFD121081935 (AccessibilityProvider_tB927231E25CC81A175ED2DF8538BE30F986C830F * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___accessibleObject0, AccessibleObjectClassification_t5FAEC0486A9F61EBBF0F6D7E189FE35B0C9EA5E2 * ___classification1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mAAB6D25E7D41246F664073F4EED032C56B5548D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_mE508A129A7CB4DC89530674E7854B7F699BB486F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mD36BF07C31C1DF947856EFECE89BAF4D6A24DEB7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52D2CD097CFAA0461035A19E2C6115F54219A6EE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE9DAA516D37F8A67FD590A557B2B18E7B9BC8F7C);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * V_0 = NULL;
	{
		// List<GameObject> objCollection = accessibleObjects[classification];
		Dictionary_2_tAB54087C57C52C41006918B526AE3953D1779243 * L_0 = __this->get_accessibleObjects_2();
		AccessibleObjectClassification_t5FAEC0486A9F61EBBF0F6D7E189FE35B0C9EA5E2 * L_1 = ___classification1;
		NullCheck(L_0);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_2;
		L_2 = Dictionary_2_get_Item_mAAB6D25E7D41246F664073F4EED032C56B5548D4(L_0, L_1, /*hidden argument*/Dictionary_2_get_Item_mAAB6D25E7D41246F664073F4EED032C56B5548D4_RuntimeMethod_var);
		V_0 = L_2;
		// if (!objCollection.Contains(accessibleObject))
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_3 = V_0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = ___accessibleObject0;
		NullCheck(L_3);
		bool L_5;
		L_5 = List_1_Contains_mE508A129A7CB4DC89530674E7854B7F699BB486F(L_3, L_4, /*hidden argument*/List_1_Contains_mE508A129A7CB4DC89530674E7854B7F699BB486F_RuntimeMethod_var);
		if (L_5)
		{
			goto IL_002e;
		}
	}
	{
		// Debug.LogError($"{accessibleObject.name} has not been registered as a accessible object of classification {classification}");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = ___accessibleObject0;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_6, /*hidden argument*/NULL);
		AccessibleObjectClassification_t5FAEC0486A9F61EBBF0F6D7E189FE35B0C9EA5E2 * L_8 = ___classification1;
		String_t* L_9;
		L_9 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteral52D2CD097CFAA0461035A19E2C6115F54219A6EE, L_7, L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_9, /*hidden argument*/NULL);
		// return false;
		return (bool)0;
	}

IL_002e:
	{
		// if (!objCollection.Remove(accessibleObject))
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_10 = V_0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = ___accessibleObject0;
		NullCheck(L_10);
		bool L_12;
		L_12 = List_1_Remove_mD36BF07C31C1DF947856EFECE89BAF4D6A24DEB7(L_10, L_11, /*hidden argument*/List_1_Remove_mD36BF07C31C1DF947856EFECE89BAF4D6A24DEB7_RuntimeMethod_var);
		if (L_12)
		{
			goto IL_004f;
		}
	}
	{
		// Debug.LogError($"Failed to unregister {accessibleObject.name} as a accessible object of classification {classification}");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = ___accessibleObject0;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_13, /*hidden argument*/NULL);
		AccessibleObjectClassification_t5FAEC0486A9F61EBBF0F6D7E189FE35B0C9EA5E2 * L_15 = ___classification1;
		String_t* L_16;
		L_16 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteralE9DAA516D37F8A67FD590A557B2B18E7B9BC8F7C, L_14, L_15, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_16, /*hidden argument*/NULL);
		// return false;
		return (bool)0;
	}

IL_004f:
	{
		// return true;
		return (bool)1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem/AccessibilityProvider::AssembleAccessibleObjects(System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Accessibility.AccessibleObjectClassification>,System.Collections.Generic.List`1<UnityEngine.GameObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilityProvider_AssembleAccessibleObjects_mEBF75963CEB7779AA5951EF70202B62060920C20 (AccessibilityProvider_tB927231E25CC81A175ED2DF8538BE30F986C830F * __this, List_1_t698C3F6B3DCEEE7EB6FA28060F8268F41585F616 * ___classifications0, List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___accessibleObjectsList1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mAAB6D25E7D41246F664073F4EED032C56B5548D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m2FC14128F62E290E708E5C7D5984AE069A1109C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m0A54F9646B41FD5BCB18A49D1D8DDA2BE5CB6F2D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mF3A1ADD682AA120B123EE5F3C1BAB7B70C2641A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m930C66498FD2B22B59C9BB83A2926008427DF6A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m926EDF55F89815C5AD9733FE63CE689E98B37274_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tFA80B3A9A75313FDFB80BDEB56E275732BC7B6E3  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AccessibleObjectClassification_t5FAEC0486A9F61EBBF0F6D7E189FE35B0C9EA5E2 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// foreach (AccessibleObjectClassification classification in classifications)
		List_1_t698C3F6B3DCEEE7EB6FA28060F8268F41585F616 * L_0 = ___classifications0;
		NullCheck(L_0);
		Enumerator_tFA80B3A9A75313FDFB80BDEB56E275732BC7B6E3  L_1;
		L_1 = List_1_GetEnumerator_m926EDF55F89815C5AD9733FE63CE689E98B37274(L_0, /*hidden argument*/List_1_GetEnumerator_m926EDF55F89815C5AD9733FE63CE689E98B37274_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0023;
		}

IL_0009:
		{
			// foreach (AccessibleObjectClassification classification in classifications)
			AccessibleObjectClassification_t5FAEC0486A9F61EBBF0F6D7E189FE35B0C9EA5E2 * L_2;
			L_2 = Enumerator_get_Current_mF3A1ADD682AA120B123EE5F3C1BAB7B70C2641A0_inline((Enumerator_tFA80B3A9A75313FDFB80BDEB56E275732BC7B6E3 *)(&V_0), /*hidden argument*/Enumerator_get_Current_mF3A1ADD682AA120B123EE5F3C1BAB7B70C2641A0_RuntimeMethod_var);
			V_1 = L_2;
			// accessibleObjectsList.AddRange(accessibleObjects[classification]);
			List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_3 = ___accessibleObjectsList1;
			Dictionary_2_tAB54087C57C52C41006918B526AE3953D1779243 * L_4 = __this->get_accessibleObjects_2();
			AccessibleObjectClassification_t5FAEC0486A9F61EBBF0F6D7E189FE35B0C9EA5E2 * L_5 = V_1;
			NullCheck(L_4);
			List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_6;
			L_6 = Dictionary_2_get_Item_mAAB6D25E7D41246F664073F4EED032C56B5548D4(L_4, L_5, /*hidden argument*/Dictionary_2_get_Item_mAAB6D25E7D41246F664073F4EED032C56B5548D4_RuntimeMethod_var);
			NullCheck(L_3);
			List_1_AddRange_m930C66498FD2B22B59C9BB83A2926008427DF6A0(L_3, L_6, /*hidden argument*/List_1_AddRange_m930C66498FD2B22B59C9BB83A2926008427DF6A0_RuntimeMethod_var);
		}

IL_0023:
		{
			// foreach (AccessibleObjectClassification classification in classifications)
			bool L_7;
			L_7 = Enumerator_MoveNext_m0A54F9646B41FD5BCB18A49D1D8DDA2BE5CB6F2D((Enumerator_tFA80B3A9A75313FDFB80BDEB56E275732BC7B6E3 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m0A54F9646B41FD5BCB18A49D1D8DDA2BE5CB6F2D_RuntimeMethod_var);
			if (L_7)
			{
				goto IL_0009;
			}
		}

IL_002c:
		{
			IL2CPP_LEAVE(0x3C, FINALLY_002e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002e;
	}

FINALLY_002e:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m2FC14128F62E290E708E5C7D5984AE069A1109C0((Enumerator_tFA80B3A9A75313FDFB80BDEB56E275732BC7B6E3 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m2FC14128F62E290E708E5C7D5984AE069A1109C0_RuntimeMethod_var);
		IL2CPP_END_FINALLY(46)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(46)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x3C, IL_003c)
	}

IL_003c:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem/AccessibilityProvider::FilterAccessibleObjects(Microsoft.MixedReality.Toolkit.Accessibility.AccessibleObjectVisibility,System.Single,System.Collections.Generic.List`1<UnityEngine.GameObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilityProvider_FilterAccessibleObjects_m09E76BB774F9CF76F42295037324B0C1CCBAF74B (AccessibilityProvider_tB927231E25CC81A175ED2DF8538BE30F986C830F * __this, int32_t ___visibility0, float ___maxDistance1, List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___objectList2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraFOVChecker_t2DDF8DF532B3FCC24568E208BF3038A7A42F07CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_TryGetComponent_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_m279C0F83A21E7657BB20A78E0F6CDE17345778A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mD36BF07C31C1DF947856EFECE89BAF4D6A24DEB7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_2 = NULL;
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * V_3 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// if (objectList.Count == 0) { return; }
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_0 = ___objectList2;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_0, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		// if (objectList.Count == 0) { return; }
		return;
	}

IL_0009:
	{
		// float maxDistanceSquared = maxDistance * maxDistance;
		float L_2 = ___maxDistance1;
		float L_3 = ___maxDistance1;
		V_0 = ((float)il2cpp_codegen_multiply((float)L_2, (float)L_3));
		// for (int i = (objectList.Count - 1); i != 0; i--)
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_4 = ___objectList2;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_4, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)1));
		goto IL_0084;
	}

IL_0018:
	{
		// GameObject obj = objectList[i];
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_6 = ___objectList2;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_6, L_7, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		V_2 = L_8;
		// if (!obj.TryGetComponent<Collider>(out Collider collider))
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = V_2;
		NullCheck(L_9);
		bool L_10;
		L_10 = GameObject_TryGetComponent_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_m279C0F83A21E7657BB20A78E0F6CDE17345778A1(L_9, (Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 **)(&V_3), /*hidden argument*/GameObject_TryGetComponent_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_m279C0F83A21E7657BB20A78E0F6CDE17345778A1_RuntimeMethod_var);
		if (L_10)
		{
			goto IL_0034;
		}
	}
	{
		// objectList.Remove(obj);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_11 = ___objectList2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = V_2;
		NullCheck(L_11);
		bool L_13;
		L_13 = List_1_Remove_mD36BF07C31C1DF947856EFECE89BAF4D6A24DEB7(L_11, L_12, /*hidden argument*/List_1_Remove_mD36BF07C31C1DF947856EFECE89BAF4D6A24DEB7_RuntimeMethod_var);
		// continue;
		goto IL_0080;
	}

IL_0034:
	{
		// if ((visibility == AccessibleObjectVisibility.FieldOfView) &&
		//     !CameraFOVChecker.IsInFOVCached(Camera.main, collider))
		int32_t L_14 = ___visibility0;
		if ((!(((uint32_t)L_14) == ((uint32_t)1))))
		{
			goto IL_004d;
		}
	}
	{
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_15;
		L_15 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_16 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(CameraFOVChecker_t2DDF8DF532B3FCC24568E208BF3038A7A42F07CA_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = CameraFOVChecker_IsInFOVCached_m4ED3870F44AA410AE22DD8E870691DFE789DE3D8(L_15, L_16, /*hidden argument*/NULL);
		if (L_17)
		{
			goto IL_004d;
		}
	}
	{
		// objectList.Remove(obj);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_18 = ___objectList2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19 = V_2;
		NullCheck(L_18);
		bool L_20;
		L_20 = List_1_Remove_mD36BF07C31C1DF947856EFECE89BAF4D6A24DEB7(L_18, L_19, /*hidden argument*/List_1_Remove_mD36BF07C31C1DF947856EFECE89BAF4D6A24DEB7_RuntimeMethod_var);
	}

IL_004d:
	{
		// if (maxDistanceSquared < (Camera.main.transform.position - obj.transform.position).sqrMagnitude)
		float L_21 = V_0;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_22;
		L_22 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		NullCheck(L_22);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_23;
		L_23 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_22, /*hidden argument*/NULL);
		NullCheck(L_23);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
		L_24 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_23, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25 = V_2;
		NullCheck(L_25);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_26;
		L_26 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_25, /*hidden argument*/NULL);
		NullCheck(L_26);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
		L_27 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_26, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		L_28 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_24, L_27, /*hidden argument*/NULL);
		V_4 = L_28;
		float L_29;
		L_29 = Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_4), /*hidden argument*/NULL);
		if ((!(((float)L_21) < ((float)L_29))))
		{
			goto IL_0080;
		}
	}
	{
		// objectList.Remove(obj);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_30 = ___objectList2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_31 = V_2;
		NullCheck(L_30);
		bool L_32;
		L_32 = List_1_Remove_mD36BF07C31C1DF947856EFECE89BAF4D6A24DEB7(L_30, L_31, /*hidden argument*/List_1_Remove_mD36BF07C31C1DF947856EFECE89BAF4D6A24DEB7_RuntimeMethod_var);
	}

IL_0080:
	{
		// for (int i = (objectList.Count - 1); i != 0; i--)
		int32_t L_33 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_33, (int32_t)1));
	}

IL_0084:
	{
		// for (int i = (objectList.Count - 1); i != 0; i--)
		int32_t L_34 = V_1;
		if (L_34)
		{
			goto IL_0018;
		}
	}
	{
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem/AccessibilityProvider::get_InvertTextColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AccessibilityProvider_get_InvertTextColor_m23125E469D0612B48C8B16F159DE5B5AC1FDA940 (AccessibilityProvider_tB927231E25CC81A175ED2DF8538BE30F986C830F * __this, const RuntimeMethod* method)
{
	{
		// get => invertTextColor;
		bool L_0 = __this->get_invertTextColor_3();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem/AccessibilityProvider::set_InvertTextColor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilityProvider_set_InvertTextColor_mC90F24EFB3014498D259E0ABE3718CAA44717AEA (AccessibilityProvider_tB927231E25CC81A175ED2DF8538BE30F986C830F * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// if (invertTextColor != value)
		bool L_0 = __this->get_invertTextColor_3();
		bool L_1 = ___value0;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_001c;
		}
	}
	{
		// invertTextColor = value;
		bool L_2 = ___value0;
		__this->set_invertTextColor_3(L_2);
		// RaiseInvertTextColorChanged(invertTextColor);
		bool L_3 = __this->get_invertTextColor_3();
		AccessibilityProvider_RaiseInvertTextColorChanged_m759BD6CC7E6FC288DF7921EB4DFCEFCC533F81F7(__this, L_3, /*hidden argument*/NULL);
	}

IL_001c:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem/AccessibilityProvider::add_InvertTextColorChanged(System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilityProvider_add_InvertTextColorChanged_mEB2A7EFF7B6EEA6B4B487D1C15B51AC033C6216E (AccessibilityProvider_tB927231E25CC81A175ED2DF8538BE30F986C830F * __this, Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * V_0 = NULL;
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * V_1 = NULL;
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * V_2 = NULL;
	{
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_0 = __this->get_InvertTextColorChanged_4();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_1 = V_0;
		V_1 = L_1;
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_2 = V_1;
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 *)CastclassSealed((RuntimeObject*)L_4, Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83_il2cpp_TypeInfo_var));
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 ** L_5 = __this->get_address_of_InvertTextColorChanged_4();
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_6 = V_2;
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_7 = V_1;
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 *>((Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_9 = V_0;
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 *)L_9) == ((RuntimeObject*)(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem/AccessibilityProvider::remove_InvertTextColorChanged(System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilityProvider_remove_InvertTextColorChanged_m73212FDD934EE3BA93B9CB4CECBC015D0687CAB5 (AccessibilityProvider_tB927231E25CC81A175ED2DF8538BE30F986C830F * __this, Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * V_0 = NULL;
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * V_1 = NULL;
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * V_2 = NULL;
	{
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_0 = __this->get_InvertTextColorChanged_4();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_1 = V_0;
		V_1 = L_1;
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_2 = V_1;
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 *)CastclassSealed((RuntimeObject*)L_4, Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83_il2cpp_TypeInfo_var));
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 ** L_5 = __this->get_address_of_InvertTextColorChanged_4();
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_6 = V_2;
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_7 = V_1;
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 *>((Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_9 = V_0;
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 *)L_9) == ((RuntimeObject*)(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem/AccessibilityProvider::ApplyTextColorInversion(UnityEngine.Material,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilityProvider_ApplyTextColorInversion_mBC4A0D2938F91636479464B8915BBCFCC0D0ADC0 (AccessibilityProvider_tB927231E25CC81A175ED2DF8538BE30F986C830F * __this, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material0, bool ___enable1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AccessibilityUtilities_t011ABCE2EBCE2F6EC0A898BCB48076F57B26D0D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AccessibilityUtilities.SetTextColorInversion(material, enable);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_0 = ___material0;
		bool L_1 = ___enable1;
		IL2CPP_RUNTIME_CLASS_INIT(AccessibilityUtilities_t011ABCE2EBCE2F6EC0A898BCB48076F57B26D0D4_il2cpp_TypeInfo_var);
		AccessibilityUtilities_SetTextColorInversion_mB78AC806C69A6C0DA5407DBBCC22EAB8C91E3272(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Accessibility.MRTKAccessibilitySubsystem/AccessibilityProvider::RaiseInvertTextColorChanged(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessibilityProvider_RaiseInvertTextColorChanged_m759BD6CC7E6FC288DF7921EB4DFCEFCC533F81F7 (AccessibilityProvider_tB927231E25CC81A175ED2DF8538BE30F986C830F * __this, bool ___invert0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * G_B2_0 = NULL;
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * G_B1_0 = NULL;
	{
		// InvertTextColorChanged?.Invoke(invert);
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_0 = __this->get_InvertTextColorChanged_4();
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		bool L_2 = ___invert0;
		NullCheck(G_B2_0);
		Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5(G_B2_0, L_2, /*hidden argument*/Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_RuntimeMethod_var);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SubsystemWithProvider_get_running_m42399652EC4AB466AFBAC9035FA77C1BD6C72406_inline (SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CrunningU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AccessibilitySubsystemCinfo_get_Name_mAEFE7ECD134505F8A539CCC28A53B74AC32D0141_inline (AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1 * __this, const RuntimeMethod* method)
{
	{
		// public string Name { get; set; }
		String_t* L_0 = __this->get_U3CNameU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AccessibilitySubsystemCinfo_set_Name_mDE5DB332C91A428D352B3B05542F119F96E6FA3E_inline (AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Name { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CNameU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AccessibilitySubsystemCinfo_get_DisplayName_m6E96C34FB1643787BB1A90CC636FEF1002632CBD_inline (AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1 * __this, const RuntimeMethod* method)
{
	{
		// public string DisplayName { get; set; }
		String_t* L_0 = __this->get_U3CDisplayNameU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AccessibilitySubsystemCinfo_set_DisplayName_mDE3C3A930DBA22355FF21BF9A3162F0A68800A21_inline (AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string DisplayName { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CDisplayNameU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AccessibilitySubsystemCinfo_get_Author_m78FC773521537E06658B3B37E8097ED526C9ADD5_inline (AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1 * __this, const RuntimeMethod* method)
{
	{
		// public string Author { get; set; }
		String_t* L_0 = __this->get_U3CAuthorU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AccessibilitySubsystemCinfo_set_Author_m2818A3C728C081C81057451DD10C80319FD86FFD_inline (AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Author { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CAuthorU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * AccessibilitySubsystemCinfo_get_ConfigType_m7F4958ADDF9F967D7D2B3037EA7654F48DC345A9_inline (AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1 * __this, const RuntimeMethod* method)
{
	{
		// public Type ConfigType { get; set; }
		Type_t * L_0 = __this->get_U3CConfigTypeU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AccessibilitySubsystemCinfo_set_ConfigType_m2CF378889C3A7E77A393F73BF0FE242E60D66610_inline (AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1 * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type ConfigType { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CConfigTypeU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * AccessibilitySubsystemCinfo_get_ProviderType_m051410A8508E5E9D123B3DA2604F6AD309724C8D_inline (AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1 * __this, const RuntimeMethod* method)
{
	{
		// public Type ProviderType { get; set; }
		Type_t * L_0 = __this->get_U3CProviderTypeU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AccessibilitySubsystemCinfo_set_ProviderType_m94D2185D2D5D30649983089F7479AFE753AEE103_inline (AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1 * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type ProviderType { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CProviderTypeU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * AccessibilitySubsystemCinfo_get_SubsystemTypeOverride_m293E9A3B3EAA0096CD68A9CF8A29EC09C49EA07E_inline (AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1 * __this, const RuntimeMethod* method)
{
	{
		// public Type SubsystemTypeOverride { get; set; }
		Type_t * L_0 = __this->get_U3CSubsystemTypeOverrideU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AccessibilitySubsystemCinfo_set_SubsystemTypeOverride_mE6F0018C4BFEAE9F3FCFDEF53F2C3F06EF69E413_inline (AccessibilitySubsystemCinfo_t5CD108EA35541E728468BDBF59D87179536B6AE1 * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type SubsystemTypeOverride { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CSubsystemTypeOverrideU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AccessibilitySubsystemDescriptor_set_DisplayName_mC7E899436FC679A1D6EE2BB6FD457CD15E1F34B6_inline (AccessibilitySubsystemDescriptor_t8E1234483302B1C8578B13351406A4782F203A8C * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string DisplayName { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CDisplayNameU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AccessibilitySubsystemDescriptor_set_Author_m47775B486E1D03B12E5008B5E2DE0B1221AA8F99_inline (AccessibilitySubsystemDescriptor_t8E1234483302B1C8578B13351406A4782F203A8C * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Author { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CAuthorU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SubsystemDescriptorWithProvider_get_id_m0341F88D726C677F81277CD2C4A43919EA942861_inline (SubsystemDescriptorWithProvider_t32DD334657CFBA22F2FBA399258B087104A29C3E * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CidU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubsystemDescriptorWithProvider_set_id_mEC6863CDB21597618394D2ED4182A9ED3ACBF220_inline (SubsystemDescriptorWithProvider_t32DD334657CFBA22F2FBA399258B087104A29C3E * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * SubsystemDescriptorWithProvider_get_providerType_m61D62BCC0790E915342C35E416324F065300A29E_inline (SubsystemDescriptorWithProvider_t32DD334657CFBA22F2FBA399258B087104A29C3E * __this, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = __this->get_U3CproviderTypeU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubsystemDescriptorWithProvider_set_providerType_m672B1F3CC7A12E8569D801F7C79538753C0D9C2D_inline (SubsystemDescriptorWithProvider_t32DD334657CFBA22F2FBA399258B087104A29C3E * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___value0;
		__this->set_U3CproviderTypeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * SubsystemDescriptorWithProvider_get_subsystemTypeOverride_mC1EE74BB1F7FC5ABEDEB70BD624B018A17206888_inline (SubsystemDescriptorWithProvider_t32DD334657CFBA22F2FBA399258B087104A29C3E * __this, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = __this->get_U3CsubsystemTypeOverrideU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubsystemDescriptorWithProvider_set_subsystemTypeOverride_mA453100A7A8FAB35FBE7154E63B5A17D518F41B6_inline (SubsystemDescriptorWithProvider_t32DD334657CFBA22F2FBA399258B087104A29C3E * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___value0;
		__this->set_U3CsubsystemTypeOverrideU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AccessibleObjectClassification_t5FAEC0486A9F61EBBF0F6D7E189FE35B0C9EA5E2 * AccessibleObject_get_Classification_m9016EF9068E43175DF149158EEB6373739A88CCA_inline (AccessibleObject_t4E0F38F72E0B6F31139051C90869ABEB9E64224A * __this, const RuntimeMethod* method)
{
	{
		// public AccessibleObjectClassification Classification => classification;
		AccessibleObjectClassification_t5FAEC0486A9F61EBBF0F6D7E189FE35B0C9EA5E2 * L_0 = __this->get_classification_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AccessibilitySubsystemConfig_tA71A24B93F43AAD4BD12AA1FB4116F1EB4B4BA3B * AccessibilityProvider_get_Config_mC7D1CE31D8B6EE22BB93407D2478D308A8B5C693_inline (AccessibilityProvider_tB927231E25CC81A175ED2DF8538BE30F986C830F * __this, const RuntimeMethod* method)
{
	{
		// protected AccessibilitySubsystemConfig Config { get; }
		AccessibilitySubsystemConfig_tA71A24B93F43AAD4BD12AA1FB4116F1EB4B4BA3B * L_0 = __this->get_U3CConfigU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AccessibilitySubsystemConfig_get_InvertTextColor_mA053AFC4843807C6A566569363EB79908C4D12B9_inline (AccessibilitySubsystemConfig_tA71A24B93F43AAD4BD12AA1FB4116F1EB4B4BA3B * __this, const RuntimeMethod* method)
{
	{
		// get => invertTextColor;
		bool L_0 = __this->get_invertTextColor_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * SubsystemWithProvider_3_get_provider_m1C17796ABB973D3A5F6B1C31B84298C076AA7E1B_gshared_inline (SubsystemWithProvider_3_t80ABC03E4A5E84C63AB7C26719F2C5CA1FAA7EC2 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_U3CproviderU3Ek__BackingField_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m5EAB60888D4E661A01C7F32AD890D785F8B6225B_gshared_inline (Enumerator_t125181DA94FAAEC346371E0582D50084E0B602E2 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_currentValue_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
