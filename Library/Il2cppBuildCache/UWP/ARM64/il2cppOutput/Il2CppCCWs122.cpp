﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>

#include "vm/CachedCCWBase.h"
#include "utils/New.h"

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

// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractableRegisteredEventArgs>
struct Action_1_t9F32937D0483D7D5F5EE6D501C90EC8AD96A73BD;
// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractableUnregisteredEventArgs>
struct Action_1_t093BAA55388BF4C1A03FA3625640C13B56C601AA;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRInteractor,UnityEngine.GameObject>
struct Dictionary_2_tA69FF83EA17DA0267E4A9ADE6AFF4334D537FBD8;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor,UnityEngine.Pose>
struct Dictionary_2_tA3135A847BDD5B3E11304035C508DFB9DE47F8CC;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5;
// System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.TextCore.Glyph>
struct Dictionary_2_tDA5C03A58B5E004C6D454EF31BF9C5307FE785BE;
// System.Collections.Generic.Dictionary`2<System.UInt32,TMPro.TMP_Character>
struct Dictionary_2_t6BB43D0F158FE3B19E71F6F48A84283B5250E1B4;
// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRHoverFilter>
struct ExposedRegistrationList_1_t5ECEBE78A1A1B74E793C57E99502825849754A91;
// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRSelectFilter>
struct ExposedRegistrationList_1_t2925F032505D027FCBA7F35721D8B3461BE44E08;
// System.Func`3<UnityEngine.XR.Interaction.Toolkit.IXRInteractable,UnityEngine.Vector3,UnityEngine.XR.Interaction.Toolkit.DistanceInfo>
struct Func_3_tC0D6CA7DF2D961F4198C83B60BDB01420D3CBB04;
// System.Collections.Generic.HashSet`1<System.Int32>
struct HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5;
// System.Collections.Generic.HashSet`1<System.UInt32>
struct HashSet_1_tE1C51BB41CBDB9CD639DE8689780E3494FDE999B;
// System.Collections.Generic.List`1<UnityEngine.Collider>
struct List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B;
// System.Collections.Generic.List`1<UnityEngine.TextCore.Glyph>
struct List_1_tA740960861E81663EBF03A56DE52E25A9283E954;
// System.Collections.Generic.List`1<UnityEngine.TextCore.GlyphRect>
struct List_1_tE870449A6BC21548542BC92F18B284004FA8668A;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.IGazeInteractor>
struct List_1_t6A98966986E9CD8C2D9EC17DE0FA73D12C2F6078;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.IGazePinchInteractor>
struct List_1_t383B255BE0B068E7B08592C708091272BB72462A;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.IGrabInteractor>
struct List_1_tDD803577385E0D8D1E89F4FC6EA49215AEC4FF89;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.IPokeInteractor>
struct List_1_t7CFB55349BA082C1FD4571D4384BEE8BA23A1EB3;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.IRayInteractor>
struct List_1_tA69B0C7E6EFED3B424A8D93E9358CE2BFB38CB2E;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor>
struct List_1_t8F5833796A8407AFD49E7C1864E6E76653D3F2C4;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor>
struct List_1_tCCED540317FA295CA1BAEBCCD4362DE7EFFB64FD;
// System.Collections.Generic.List`1<UnityEngine.Object>
struct List_1_t9D216521E6A213FF8562D215598D336ABB5474F4;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.SystemInterfaceType>
struct List_1_t50F7DB434300724D6B4DD90C3D02C971B591D71B;
// System.Collections.Generic.List`1<TMPro.TMP_Character>
struct List_1_tE8F1656A7A5AF5AEE27ED7B656B56CACB417FEB8;
// System.Collections.Generic.List`1<TMPro.TMP_FontAsset>
struct List_1_tBE22F0B6C1EBDB760862FAD201AFE75E3DEBBBFD;
// System.Collections.Generic.List`1<TMPro.TMP_Glyph>
struct List_1_t3F387498A6DE374D972293A68DB91FDF1A530E2E;
// System.Collections.Generic.List`1<System.UInt32>
struct List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor>
struct List_1_tEF7E6AA6FF2A58B22A1943486BE24649DC3CC2AC;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Diagnostics.StackFrame[]
struct StackFrameU5BU5D_t29238B62C287BAACD78F100511D4023931CEA8A1;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// TMPro.TMP_FontWeightPair[]
struct TMP_FontWeightPairU5BU5D_t537F746E35AD2938424D897D937D0F26B0EC45BC;
// UnityEngine.Texture2D[]
struct Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316;
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
// UnityEngine.XR.Interaction.Toolkit.ActivateEvent
struct ActivateEvent_tA788B1E186D477BA625450B006EA76D0370B0C7F;
// UnityEngine.XR.Interaction.Toolkit.DeactivateEvent
struct DeactivateEvent_t587971B94B6589C04E9D72515DF079C1EE91DB3C;
// TMPro.FaceInfo_Legacy
struct FaceInfo_Legacy_t9002691F7DB46E42ADE3B69A8861C144379D192F;
// UnityEngine.Font
struct Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.TextCore.Glyph
struct Glyph_tC58ED6BC718B82A55B7E1A3690A289FFA8EBEFD1;
// Microsoft.MixedReality.Toolkit.Subsystems.HandsSubsystemDescriptor
struct HandsSubsystemDescriptor_t38C003E17CF81F91EEF297B0A1E1EA3B3A900C8C;
// UnityEngine.XR.Interaction.Toolkit.HoverEnterEvent
struct HoverEnterEvent_t0CC8E826E7F14B3A2B7A343424C3533BFCE32FC6;
// UnityEngine.XR.Interaction.Toolkit.HoverExitEvent
struct HoverExitEvent_tAAF1D57BA8CEBA5B39F1409EBD6978CE06A5B341;
// System.IFormatProvider
struct IFormatProvider_tF2AECC4B14F41D36718920D67F930CED940412DF;
// Microsoft.MixedReality.OpenXR.IOpenXRContext
struct IOpenXRContext_tFE663E6E30179B960E10D9BD244B39467D16E12E;
// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor
struct IXRSelectInteractor_t48BDDD33F735BFB31B95990F96FA44A8B2C00E1A;
// TMPro.KerningTable
struct KerningTable_t820628F74178B0781DBFFB55BF1277247047617D;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50;
// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent
struct SelectEnterEvent_t147569BD69EAD584499BE2FC174458E3150C5918;
// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent
struct SelectExitEvent_t8A19A5E960E731FDA7BC2509D96527199FDA57F8;
// System.Diagnostics.StackFrame
struct StackFrame_t6018A5362C2E8F6F80F153F3D40623D213094E0F;
// System.Diagnostics.StackTrace
struct StackTrace_t43C03122C6B2AAF0DCCF684B2D5FA6E673F02888;
// Microsoft.MixedReality.Toolkit.StatefulInteractable
struct StatefulInteractable_t67843E0A65DBFB7777C42C51281749C8C71AA203;
// System.String
struct String_t;
// UnityEngine.Subsystem
struct Subsystem_t2D97454A946149D608974CB6B674F5F5C613A6A4;
// Microsoft.MixedReality.OpenXR.SubsystemController
struct SubsystemController_tA2034604D6D2C2CB86AAD55E10318533191D80DC;
// UnityEngine.SubsystemDescriptor
struct SubsystemDescriptor_tF663011CB44AB1D342821BBEF7B6811E799A7245;
// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider
struct SubsystemDescriptorWithProvider_t32DD334657CFBA22F2FBA399258B087104A29C3E;
// UnityEngine.SubsystemsImplementation.SubsystemProvider
struct SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9;
// UnityEngine.SubsystemsImplementation.SubsystemWithProvider
struct SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E;
// Microsoft.MixedReality.Toolkit.Input.SyntheticHandsSubsystem
struct SyntheticHandsSubsystem_t7DA1899A502CE90BDF70B2A352B66B639B10CA19;
// Microsoft.MixedReality.Toolkit.SystemInterfaceType
struct SystemInterfaceType_tD26D47D33FB0297B63287F4344DDE904AD50B2F8;
// Microsoft.MixedReality.Toolkit.SystemType
struct SystemType_tC66B6E67B2D1045958296A6D7D4EFE000A5EF7F6;
// TMPro.TMP_Asset
struct TMP_Asset_tEE129B2B2FE167D4B860286167207DD3AD45B45E;
// TMPro.TMP_Character
struct TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2;
// TMPro.TMP_FontFeatureTable
struct TMP_FontFeatureTable_t4A06C31656BB8CB686657DC85E0179FA3D15E2F1;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714;
// TMPro.TMP_TextElement
struct TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// Microsoft.MixedReality.Toolkit.TimedFlag
struct TimedFlag_tC5C87C9B210414D5EFFF70BA26D6C98CD11D655A;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent
struct XRInteractableEvent_tD08962B410D993D428BA0CDF9D1AD5273AEA53DD;
// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager
struct XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4;
// Microsoft.MixedReality.Toolkit.Subsystems.HandsSubsystem/Provider
struct Provider_t507D5E75FF99AA1F2C885CB6D83AE3C10E18CE78;
// Microsoft.MixedReality.Toolkit.Input.SyntheticHandsSubsystem/SyntheticHandsProvider
struct SyntheticHandsProvider_tFB28CA8BEA3582AF4B6E9A19D4C5F2BE2F83E6EB;

IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GuidU5BU5D_t6DCED1B9FC5592C43FAA73D81705104BD18151B8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2_il2cpp_TypeInfo_var;
struct DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ;
struct Guid_t ;
struct IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8;
struct IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB;
struct IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA;
struct IIterable_1_t76BB785EC29C8526627DE0ACEA068DB15E5388CE;
struct IIterator_1_t125F1266580B29D637CD7546CA3812EB7C0B0D9D;
struct IIterator_1_t6A46A7244E5AAD0AE4F2A07AF43DA5052D55F4A4;
struct IIterator_1_t966CEB5AF294B82E90C669B54974D432637938CF;
struct IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C;
struct IVectorView_1_tCFBC8EDE229384588147EBD3FD82FC05B2094F7B;
struct Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ;
struct Rect_tC45F1DDF39812623644DE296D8057A4958176627 ;
struct Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ;
struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB;
struct GuidU5BU5D_t6DCED1B9FC5592C43FAA73D81705104BD18151B8;
struct Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6;
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
struct StackFrameU5BU5D_t29238B62C287BAACD78F100511D4023931CEA8A1;
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
struct StatefulInteractableU5BU5D_t492BAF2D5618C99849FE7EF1747205A10778B462;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct SubstringU5BU5D_tE332884993470F5CF7BAAA950414E4E24691A8D0;
struct SubsystemU5BU5D_t4353D7C1DD71692C1BF7D355ADCB47DBD6DB91ED;
struct SubsystemControllerU5BU5D_t62CBE9EA40E0F24F9058CEDCD6C6A65A0652697D;
struct SubsystemDescriptorU5BU5D_t52E78FFA3141BD25855CE03337EB1BB6C2984877;
struct SubsystemDescriptorWithProviderU5BU5D_tD40368996299CE59717A7256C15AE12F9DD44EC0;
struct SubsystemWithProviderU5BU5D_t8A3DC7B8FFB1D676FD165C6B1FFE6DC8DF52CFCB;
struct SyntheticHandsSubsystemU5BU5D_tFE1E7D298E21D70C2D1000ECAE1593D221CE6964;
struct SystemInterfaceTypeU5BU5D_t1945B9B93E492DC6110554F4306655E31A023D3D;
struct SystemTypeU5BU5D_t2F237B21A84670845C7EF2FD11853407CB62BAB0;
struct TMP_CharacterU5BU5D_tCE0489A7F16625E12EE66C9B6347340904A6DF8F;
struct TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970;
struct TMP_ColorGradientU5BU5D_t5271ED3FC5D741D05A220867865A1DA1EB04919A;
struct TMP_FontAssetU5BU5D_t428AAB45232CFFF6A5EF8E12B0633C5E6226902F;
struct UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67;
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
struct UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Foundation.Collections.IIterable`1<System.Collections.Generic.IEnumerable`1<System.Char>>
struct NOVTABLE IIterable_1_t05BE14C1DEA010486117E0E313F29EF024BDB2BF : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mD8D790F1EED3414261E3D73A15AA6B40BD8B4A87(IIterator_1_t966CEB5AF294B82E90C669B54974D432637938CF** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Collections.IEnumerable>
struct NOVTABLE IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m512126C71D7E9D1C31B56F64455F33E9FEEC89F8(IIterator_1_t6A46A7244E5AAD0AE4F2A07AF43DA5052D55F4A4** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Object>
struct NOVTABLE IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.String>
struct NOVTABLE IIterable_1_t94592E586C395F026290ACC676E74C560595CC26 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m03F765E1BD333E4E315525DE80BF54183A4D54D7(IIterator_1_t125F1266580B29D637CD7546CA3812EB7C0B0D9D** comReturnValue) = 0;
};
// Windows.Foundation.IReferenceArray`1<System.String>
struct NOVTABLE IReferenceArray_1_t3DC61A9786523DA4AD29B000631513D291526E95 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReferenceArray_1_get_Value_m566B7DDA77DE15F95C23C868F14F9834692C2327(uint32_t* comReturnValueArraySize, Il2CppHString** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVectorView`1<System.Collections.Generic.IEnumerable`1<System.Char>>
struct NOVTABLE IVectorView_1_tD47C8EE1F4E3E949FBCFF7E383769FCC5371088F : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m0855A7387A667ECB7E4D4F1B3A31A83AACCD05ED(uint32_t ___index0, IIterable_1_t76BB785EC29C8526627DE0ACEA068DB15E5388CE** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_mE2ADD9F055E46C323505106C943968E34D150C79(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m9E8AA67DA019A757DFE52F6CA5F2270742D3E1AB(IIterable_1_t76BB785EC29C8526627DE0ACEA068DB15E5388CE* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m44B463D211EE79DF2C5C415E68967A15E1C14090(uint32_t ___startIndex0, uint32_t ___items1ArraySize, IIterable_1_t76BB785EC29C8526627DE0ACEA068DB15E5388CE** ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVectorView`1<System.Collections.IEnumerable>
struct NOVTABLE IVectorView_1_t7215C7C44306F73B6AC4A835AEABA3B0222EA80A : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m72849F526862E096635BA971A074D9B06ABFEE1E(uint32_t ___index0, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_mB93C08E36F2225BE1862007FAF30C9F2DEE8DAD9(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m3D87181F28EC65303ECB5017476C3B38D0944E17(IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_mE432D0460C5D84FEC9104DF80F5809975EAE32F8(uint32_t ___startIndex0, uint32_t ___items1ArraySize, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8** ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVectorView`1<System.Object>
struct NOVTABLE IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVectorView`1<System.String>
struct NOVTABLE IVectorView_1_tCFBC8EDE229384588147EBD3FD82FC05B2094F7B : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m82D2A577BA5648EC2250965C3B5C387D4F4B4B37(uint32_t ___index0, Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m54221802171BF5F28DF4CA0F24E67F313422DD22(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m118FF0974AC87D8D3672CAECB4F65905FF6DFB36(Il2CppHString ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m5074F5434651286428FFD37C739E8F74B21F9933(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppHString* ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVector`1<System.String>
struct NOVTABLE IVector_1_t093B62FDC20CAEC2AC32527E7B0AAD1861378742 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetAt_mBA6C23BCC40C7DF84A536625893E9A0555934648(uint32_t ___index0, Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_get_Size_mC0B5D4782738E0B24A270191E21433602822E83C(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetView_m66C23AB450B239D180A8CFB5845DE953DCA5B1BC(IVectorView_1_tCFBC8EDE229384588147EBD3FD82FC05B2094F7B** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_IndexOf_mFE8055199D6BAE9AC1A710B850D42E2420BA7A1C(Il2CppHString ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_SetAt_m74B4EACCE0FD046A69612801BE89576D1B89EFE7(uint32_t ___index0, Il2CppHString ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_InsertAt_mA7015C0AC21D78FBF5445079FC5E599864DF1AAB(uint32_t ___index0, Il2CppHString ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAt_mD94C0BA56DC42A6A7E4ACD74916F54E28BB7560B(uint32_t ___index0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Append_m0D965981CC375C82D81BEB38BD507A7758162C03(Il2CppHString ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAtEnd_m5ECF9A79E5C9BEFA6F649F505E5C0ECA3352005A() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Clear_mD0C225076F84170D7A1852A7E2AAA6E78C2FC3F6() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetMany_mF25979266471B5DB5B97337018AF6EBFF5A7E6ED(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppHString* ___items1, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_ReplaceAll_mD4659488CFF7E3374C5B90E81DA65309CA0383DA(uint32_t ___items0ArraySize, Il2CppHString* ___items0) = 0;
};
// Windows.UI.Xaml.Interop.IBindableIterable
struct NOVTABLE IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) = 0;
};
// Windows.UI.Xaml.Interop.IBindableVector
struct NOVTABLE IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() = 0;
};

// System.Object


// System.Diagnostics.StackFrame
struct StackFrame_t6018A5362C2E8F6F80F153F3D40623D213094E0F  : public RuntimeObject
{
public:
	// System.Int32 System.Diagnostics.StackFrame::ilOffset
	int32_t ___ilOffset_1;
	// System.Int32 System.Diagnostics.StackFrame::nativeOffset
	int32_t ___nativeOffset_2;
	// System.Int64 System.Diagnostics.StackFrame::methodAddress
	int64_t ___methodAddress_3;
	// System.UInt32 System.Diagnostics.StackFrame::methodIndex
	uint32_t ___methodIndex_4;
	// System.Reflection.MethodBase System.Diagnostics.StackFrame::methodBase
	MethodBase_t * ___methodBase_5;
	// System.String System.Diagnostics.StackFrame::fileName
	String_t* ___fileName_6;
	// System.Int32 System.Diagnostics.StackFrame::lineNumber
	int32_t ___lineNumber_7;
	// System.Int32 System.Diagnostics.StackFrame::columnNumber
	int32_t ___columnNumber_8;
	// System.String System.Diagnostics.StackFrame::internalMethodName
	String_t* ___internalMethodName_9;

public:
	inline static int32_t get_offset_of_ilOffset_1() { return static_cast<int32_t>(offsetof(StackFrame_t6018A5362C2E8F6F80F153F3D40623D213094E0F, ___ilOffset_1)); }
	inline int32_t get_ilOffset_1() const { return ___ilOffset_1; }
	inline int32_t* get_address_of_ilOffset_1() { return &___ilOffset_1; }
	inline void set_ilOffset_1(int32_t value)
	{
		___ilOffset_1 = value;
	}

	inline static int32_t get_offset_of_nativeOffset_2() { return static_cast<int32_t>(offsetof(StackFrame_t6018A5362C2E8F6F80F153F3D40623D213094E0F, ___nativeOffset_2)); }
	inline int32_t get_nativeOffset_2() const { return ___nativeOffset_2; }
	inline int32_t* get_address_of_nativeOffset_2() { return &___nativeOffset_2; }
	inline void set_nativeOffset_2(int32_t value)
	{
		___nativeOffset_2 = value;
	}

	inline static int32_t get_offset_of_methodAddress_3() { return static_cast<int32_t>(offsetof(StackFrame_t6018A5362C2E8F6F80F153F3D40623D213094E0F, ___methodAddress_3)); }
	inline int64_t get_methodAddress_3() const { return ___methodAddress_3; }
	inline int64_t* get_address_of_methodAddress_3() { return &___methodAddress_3; }
	inline void set_methodAddress_3(int64_t value)
	{
		___methodAddress_3 = value;
	}

	inline static int32_t get_offset_of_methodIndex_4() { return static_cast<int32_t>(offsetof(StackFrame_t6018A5362C2E8F6F80F153F3D40623D213094E0F, ___methodIndex_4)); }
	inline uint32_t get_methodIndex_4() const { return ___methodIndex_4; }
	inline uint32_t* get_address_of_methodIndex_4() { return &___methodIndex_4; }
	inline void set_methodIndex_4(uint32_t value)
	{
		___methodIndex_4 = value;
	}

	inline static int32_t get_offset_of_methodBase_5() { return static_cast<int32_t>(offsetof(StackFrame_t6018A5362C2E8F6F80F153F3D40623D213094E0F, ___methodBase_5)); }
	inline MethodBase_t * get_methodBase_5() const { return ___methodBase_5; }
	inline MethodBase_t ** get_address_of_methodBase_5() { return &___methodBase_5; }
	inline void set_methodBase_5(MethodBase_t * value)
	{
		___methodBase_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___methodBase_5), (void*)value);
	}

	inline static int32_t get_offset_of_fileName_6() { return static_cast<int32_t>(offsetof(StackFrame_t6018A5362C2E8F6F80F153F3D40623D213094E0F, ___fileName_6)); }
	inline String_t* get_fileName_6() const { return ___fileName_6; }
	inline String_t** get_address_of_fileName_6() { return &___fileName_6; }
	inline void set_fileName_6(String_t* value)
	{
		___fileName_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fileName_6), (void*)value);
	}

	inline static int32_t get_offset_of_lineNumber_7() { return static_cast<int32_t>(offsetof(StackFrame_t6018A5362C2E8F6F80F153F3D40623D213094E0F, ___lineNumber_7)); }
	inline int32_t get_lineNumber_7() const { return ___lineNumber_7; }
	inline int32_t* get_address_of_lineNumber_7() { return &___lineNumber_7; }
	inline void set_lineNumber_7(int32_t value)
	{
		___lineNumber_7 = value;
	}

	inline static int32_t get_offset_of_columnNumber_8() { return static_cast<int32_t>(offsetof(StackFrame_t6018A5362C2E8F6F80F153F3D40623D213094E0F, ___columnNumber_8)); }
	inline int32_t get_columnNumber_8() const { return ___columnNumber_8; }
	inline int32_t* get_address_of_columnNumber_8() { return &___columnNumber_8; }
	inline void set_columnNumber_8(int32_t value)
	{
		___columnNumber_8 = value;
	}

	inline static int32_t get_offset_of_internalMethodName_9() { return static_cast<int32_t>(offsetof(StackFrame_t6018A5362C2E8F6F80F153F3D40623D213094E0F, ___internalMethodName_9)); }
	inline String_t* get_internalMethodName_9() const { return ___internalMethodName_9; }
	inline String_t** get_address_of_internalMethodName_9() { return &___internalMethodName_9; }
	inline void set_internalMethodName_9(String_t* value)
	{
		___internalMethodName_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___internalMethodName_9), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Diagnostics.StackFrame
struct StackFrame_t6018A5362C2E8F6F80F153F3D40623D213094E0F_marshaled_pinvoke
{
	int32_t ___ilOffset_1;
	int32_t ___nativeOffset_2;
	int64_t ___methodAddress_3;
	uint32_t ___methodIndex_4;
	MethodBase_t * ___methodBase_5;
	char* ___fileName_6;
	int32_t ___lineNumber_7;
	int32_t ___columnNumber_8;
	char* ___internalMethodName_9;
};
// Native definition for COM marshalling of System.Diagnostics.StackFrame
struct StackFrame_t6018A5362C2E8F6F80F153F3D40623D213094E0F_marshaled_com
{
	int32_t ___ilOffset_1;
	int32_t ___nativeOffset_2;
	int64_t ___methodAddress_3;
	uint32_t ___methodIndex_4;
	MethodBase_t * ___methodBase_5;
	Il2CppChar* ___fileName_6;
	int32_t ___lineNumber_7;
	int32_t ___columnNumber_8;
	Il2CppChar* ___internalMethodName_9;
};

// System.Diagnostics.StackTrace
struct StackTrace_t43C03122C6B2AAF0DCCF684B2D5FA6E673F02888  : public RuntimeObject
{
public:
	// System.Diagnostics.StackFrame[] System.Diagnostics.StackTrace::frames
	StackFrameU5BU5D_t29238B62C287BAACD78F100511D4023931CEA8A1* ___frames_1;
	// System.Diagnostics.StackTrace[] System.Diagnostics.StackTrace::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_2;
	// System.Boolean System.Diagnostics.StackTrace::debug_info
	bool ___debug_info_3;

public:
	inline static int32_t get_offset_of_frames_1() { return static_cast<int32_t>(offsetof(StackTrace_t43C03122C6B2AAF0DCCF684B2D5FA6E673F02888, ___frames_1)); }
	inline StackFrameU5BU5D_t29238B62C287BAACD78F100511D4023931CEA8A1* get_frames_1() const { return ___frames_1; }
	inline StackFrameU5BU5D_t29238B62C287BAACD78F100511D4023931CEA8A1** get_address_of_frames_1() { return &___frames_1; }
	inline void set_frames_1(StackFrameU5BU5D_t29238B62C287BAACD78F100511D4023931CEA8A1* value)
	{
		___frames_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___frames_1), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_2() { return static_cast<int32_t>(offsetof(StackTrace_t43C03122C6B2AAF0DCCF684B2D5FA6E673F02888, ___captured_traces_2)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_2() const { return ___captured_traces_2; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_2() { return &___captured_traces_2; }
	inline void set_captured_traces_2(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_2), (void*)value);
	}

	inline static int32_t get_offset_of_debug_info_3() { return static_cast<int32_t>(offsetof(StackTrace_t43C03122C6B2AAF0DCCF684B2D5FA6E673F02888, ___debug_info_3)); }
	inline bool get_debug_info_3() const { return ___debug_info_3; }
	inline bool* get_address_of_debug_info_3() { return &___debug_info_3; }
	inline void set_debug_info_3(bool value)
	{
		___debug_info_3 = value;
	}
};

struct StackTrace_t43C03122C6B2AAF0DCCF684B2D5FA6E673F02888_StaticFields
{
public:
	// System.Boolean System.Diagnostics.StackTrace::isAotidSet
	bool ___isAotidSet_4;
	// System.String System.Diagnostics.StackTrace::aotid
	String_t* ___aotid_5;

public:
	inline static int32_t get_offset_of_isAotidSet_4() { return static_cast<int32_t>(offsetof(StackTrace_t43C03122C6B2AAF0DCCF684B2D5FA6E673F02888_StaticFields, ___isAotidSet_4)); }
	inline bool get_isAotidSet_4() const { return ___isAotidSet_4; }
	inline bool* get_address_of_isAotidSet_4() { return &___isAotidSet_4; }
	inline void set_isAotidSet_4(bool value)
	{
		___isAotidSet_4 = value;
	}

	inline static int32_t get_offset_of_aotid_5() { return static_cast<int32_t>(offsetof(StackTrace_t43C03122C6B2AAF0DCCF684B2D5FA6E673F02888_StaticFields, ___aotid_5)); }
	inline String_t* get_aotid_5() const { return ___aotid_5; }
	inline String_t** get_address_of_aotid_5() { return &___aotid_5; }
	inline void set_aotid_5(String_t* value)
	{
		___aotid_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___aotid_5), (void*)value);
	}
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


// UnityEngine.Subsystem
struct Subsystem_t2D97454A946149D608974CB6B674F5F5C613A6A4  : public RuntimeObject
{
public:

public:
};


// Microsoft.MixedReality.OpenXR.SubsystemController
struct SubsystemController_tA2034604D6D2C2CB86AAD55E10318533191D80DC  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.OpenXR.IOpenXRContext Microsoft.MixedReality.OpenXR.SubsystemController::Context
	RuntimeObject* ___Context_0;

public:
	inline static int32_t get_offset_of_Context_0() { return static_cast<int32_t>(offsetof(SubsystemController_tA2034604D6D2C2CB86AAD55E10318533191D80DC, ___Context_0)); }
	inline RuntimeObject* get_Context_0() const { return ___Context_0; }
	inline RuntimeObject** get_address_of_Context_0() { return &___Context_0; }
	inline void set_Context_0(RuntimeObject* value)
	{
		___Context_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Context_0), (void*)value);
	}
};


// UnityEngine.SubsystemDescriptor
struct SubsystemDescriptor_tF663011CB44AB1D342821BBEF7B6811E799A7245  : public RuntimeObject
{
public:
	// System.String UnityEngine.SubsystemDescriptor::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(SubsystemDescriptor_tF663011CB44AB1D342821BBEF7B6811E799A7245, ___U3CidU3Ek__BackingField_0)); }
	inline String_t* get_U3CidU3Ek__BackingField_0() const { return ___U3CidU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_0() { return &___U3CidU3Ek__BackingField_0; }
	inline void set_U3CidU3Ek__BackingField_0(String_t* value)
	{
		___U3CidU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CidU3Ek__BackingField_0), (void*)value);
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


// Microsoft.MixedReality.Toolkit.SystemType
struct SystemType_tC66B6E67B2D1045958296A6D7D4EFE000A5EF7F6  : public RuntimeObject
{
public:
	// System.String Microsoft.MixedReality.Toolkit.SystemType::reference
	String_t* ___reference_0;
	// System.Type Microsoft.MixedReality.Toolkit.SystemType::type
	Type_t * ___type_1;

public:
	inline static int32_t get_offset_of_reference_0() { return static_cast<int32_t>(offsetof(SystemType_tC66B6E67B2D1045958296A6D7D4EFE000A5EF7F6, ___reference_0)); }
	inline String_t* get_reference_0() const { return ___reference_0; }
	inline String_t** get_address_of_reference_0() { return &___reference_0; }
	inline void set_reference_0(String_t* value)
	{
		___reference_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reference_0), (void*)value);
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(SystemType_tC66B6E67B2D1045958296A6D7D4EFE000A5EF7F6, ___type_1)); }
	inline Type_t * get_type_1() const { return ___type_1; }
	inline Type_t ** get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(Type_t * value)
	{
		___type_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___type_1), (void*)value);
	}
};

struct SystemType_tC66B6E67B2D1045958296A6D7D4EFE000A5EF7F6_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Microsoft.MixedReality.Toolkit.SystemType::ReferenceMappings
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___ReferenceMappings_2;

public:
	inline static int32_t get_offset_of_ReferenceMappings_2() { return static_cast<int32_t>(offsetof(SystemType_tC66B6E67B2D1045958296A6D7D4EFE000A5EF7F6_StaticFields, ___ReferenceMappings_2)); }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * get_ReferenceMappings_2() const { return ___ReferenceMappings_2; }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** get_address_of_ReferenceMappings_2() { return &___ReferenceMappings_2; }
	inline void set_ReferenceMappings_2(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * value)
	{
		___ReferenceMappings_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ReferenceMappings_2), (void*)value);
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

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<Microsoft.MixedReality.Toolkit.Subsystems.HandsSubsystem,Microsoft.MixedReality.Toolkit.Subsystems.HandsSubsystemDescriptor,Microsoft.MixedReality.Toolkit.Subsystems.HandsSubsystem/Provider>
struct SubsystemWithProvider_3_tFAE280866CFF8B30AA7FBD24D27B6E53E394030A  : public SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E
{
public:
	// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<subsystemDescriptor>k__BackingField
	HandsSubsystemDescriptor_t38C003E17CF81F91EEF297B0A1E1EA3B3A900C8C * ___U3CsubsystemDescriptorU3Ek__BackingField_2;
	// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<provider>k__BackingField
	Provider_t507D5E75FF99AA1F2C885CB6D83AE3C10E18CE78 * ___U3CproviderU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CsubsystemDescriptorU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_3_tFAE280866CFF8B30AA7FBD24D27B6E53E394030A, ___U3CsubsystemDescriptorU3Ek__BackingField_2)); }
	inline HandsSubsystemDescriptor_t38C003E17CF81F91EEF297B0A1E1EA3B3A900C8C * get_U3CsubsystemDescriptorU3Ek__BackingField_2() const { return ___U3CsubsystemDescriptorU3Ek__BackingField_2; }
	inline HandsSubsystemDescriptor_t38C003E17CF81F91EEF297B0A1E1EA3B3A900C8C ** get_address_of_U3CsubsystemDescriptorU3Ek__BackingField_2() { return &___U3CsubsystemDescriptorU3Ek__BackingField_2; }
	inline void set_U3CsubsystemDescriptorU3Ek__BackingField_2(HandsSubsystemDescriptor_t38C003E17CF81F91EEF297B0A1E1EA3B3A900C8C * value)
	{
		___U3CsubsystemDescriptorU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemDescriptorU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CproviderU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_3_tFAE280866CFF8B30AA7FBD24D27B6E53E394030A, ___U3CproviderU3Ek__BackingField_3)); }
	inline Provider_t507D5E75FF99AA1F2C885CB6D83AE3C10E18CE78 * get_U3CproviderU3Ek__BackingField_3() const { return ___U3CproviderU3Ek__BackingField_3; }
	inline Provider_t507D5E75FF99AA1F2C885CB6D83AE3C10E18CE78 ** get_address_of_U3CproviderU3Ek__BackingField_3() { return &___U3CproviderU3Ek__BackingField_3; }
	inline void set_U3CproviderU3Ek__BackingField_3(Provider_t507D5E75FF99AA1F2C885CB6D83AE3C10E18CE78 * value)
	{
		___U3CproviderU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproviderU3Ek__BackingField_3), (void*)value);
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


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
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


// Windows.Foundation.DateTime
struct DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C 
{
public:
	// System.Int64 Windows.Foundation.DateTime::UniversalTime
	int64_t ___UniversalTime_0;

public:
	inline static int32_t get_offset_of_UniversalTime_0() { return static_cast<int32_t>(offsetof(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C, ___UniversalTime_0)); }
	inline int64_t get_UniversalTime_0() const { return ___UniversalTime_0; }
	inline int64_t* get_address_of_UniversalTime_0() { return &___UniversalTime_0; }
	inline void set_UniversalTime_0(int64_t value)
	{
		___UniversalTime_0 = value;
	}
};


// System.Double
struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
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

// UnityEngine.TextCore.FaceInfo
struct FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979 
{
public:
	// System.Int32 UnityEngine.TextCore.FaceInfo::m_FaceIndex
	int32_t ___m_FaceIndex_0;
	// System.String UnityEngine.TextCore.FaceInfo::m_FamilyName
	String_t* ___m_FamilyName_1;
	// System.String UnityEngine.TextCore.FaceInfo::m_StyleName
	String_t* ___m_StyleName_2;
	// System.Int32 UnityEngine.TextCore.FaceInfo::m_PointSize
	int32_t ___m_PointSize_3;
	// System.Single UnityEngine.TextCore.FaceInfo::m_Scale
	float ___m_Scale_4;
	// System.Single UnityEngine.TextCore.FaceInfo::m_LineHeight
	float ___m_LineHeight_5;
	// System.Single UnityEngine.TextCore.FaceInfo::m_AscentLine
	float ___m_AscentLine_6;
	// System.Single UnityEngine.TextCore.FaceInfo::m_CapLine
	float ___m_CapLine_7;
	// System.Single UnityEngine.TextCore.FaceInfo::m_MeanLine
	float ___m_MeanLine_8;
	// System.Single UnityEngine.TextCore.FaceInfo::m_Baseline
	float ___m_Baseline_9;
	// System.Single UnityEngine.TextCore.FaceInfo::m_DescentLine
	float ___m_DescentLine_10;
	// System.Single UnityEngine.TextCore.FaceInfo::m_SuperscriptOffset
	float ___m_SuperscriptOffset_11;
	// System.Single UnityEngine.TextCore.FaceInfo::m_SuperscriptSize
	float ___m_SuperscriptSize_12;
	// System.Single UnityEngine.TextCore.FaceInfo::m_SubscriptOffset
	float ___m_SubscriptOffset_13;
	// System.Single UnityEngine.TextCore.FaceInfo::m_SubscriptSize
	float ___m_SubscriptSize_14;
	// System.Single UnityEngine.TextCore.FaceInfo::m_UnderlineOffset
	float ___m_UnderlineOffset_15;
	// System.Single UnityEngine.TextCore.FaceInfo::m_UnderlineThickness
	float ___m_UnderlineThickness_16;
	// System.Single UnityEngine.TextCore.FaceInfo::m_StrikethroughOffset
	float ___m_StrikethroughOffset_17;
	// System.Single UnityEngine.TextCore.FaceInfo::m_StrikethroughThickness
	float ___m_StrikethroughThickness_18;
	// System.Single UnityEngine.TextCore.FaceInfo::m_TabWidth
	float ___m_TabWidth_19;

public:
	inline static int32_t get_offset_of_m_FaceIndex_0() { return static_cast<int32_t>(offsetof(FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979, ___m_FaceIndex_0)); }
	inline int32_t get_m_FaceIndex_0() const { return ___m_FaceIndex_0; }
	inline int32_t* get_address_of_m_FaceIndex_0() { return &___m_FaceIndex_0; }
	inline void set_m_FaceIndex_0(int32_t value)
	{
		___m_FaceIndex_0 = value;
	}

	inline static int32_t get_offset_of_m_FamilyName_1() { return static_cast<int32_t>(offsetof(FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979, ___m_FamilyName_1)); }
	inline String_t* get_m_FamilyName_1() const { return ___m_FamilyName_1; }
	inline String_t** get_address_of_m_FamilyName_1() { return &___m_FamilyName_1; }
	inline void set_m_FamilyName_1(String_t* value)
	{
		___m_FamilyName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FamilyName_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_StyleName_2() { return static_cast<int32_t>(offsetof(FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979, ___m_StyleName_2)); }
	inline String_t* get_m_StyleName_2() const { return ___m_StyleName_2; }
	inline String_t** get_address_of_m_StyleName_2() { return &___m_StyleName_2; }
	inline void set_m_StyleName_2(String_t* value)
	{
		___m_StyleName_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StyleName_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_PointSize_3() { return static_cast<int32_t>(offsetof(FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979, ___m_PointSize_3)); }
	inline int32_t get_m_PointSize_3() const { return ___m_PointSize_3; }
	inline int32_t* get_address_of_m_PointSize_3() { return &___m_PointSize_3; }
	inline void set_m_PointSize_3(int32_t value)
	{
		___m_PointSize_3 = value;
	}

	inline static int32_t get_offset_of_m_Scale_4() { return static_cast<int32_t>(offsetof(FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979, ___m_Scale_4)); }
	inline float get_m_Scale_4() const { return ___m_Scale_4; }
	inline float* get_address_of_m_Scale_4() { return &___m_Scale_4; }
	inline void set_m_Scale_4(float value)
	{
		___m_Scale_4 = value;
	}

	inline static int32_t get_offset_of_m_LineHeight_5() { return static_cast<int32_t>(offsetof(FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979, ___m_LineHeight_5)); }
	inline float get_m_LineHeight_5() const { return ___m_LineHeight_5; }
	inline float* get_address_of_m_LineHeight_5() { return &___m_LineHeight_5; }
	inline void set_m_LineHeight_5(float value)
	{
		___m_LineHeight_5 = value;
	}

	inline static int32_t get_offset_of_m_AscentLine_6() { return static_cast<int32_t>(offsetof(FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979, ___m_AscentLine_6)); }
	inline float get_m_AscentLine_6() const { return ___m_AscentLine_6; }
	inline float* get_address_of_m_AscentLine_6() { return &___m_AscentLine_6; }
	inline void set_m_AscentLine_6(float value)
	{
		___m_AscentLine_6 = value;
	}

	inline static int32_t get_offset_of_m_CapLine_7() { return static_cast<int32_t>(offsetof(FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979, ___m_CapLine_7)); }
	inline float get_m_CapLine_7() const { return ___m_CapLine_7; }
	inline float* get_address_of_m_CapLine_7() { return &___m_CapLine_7; }
	inline void set_m_CapLine_7(float value)
	{
		___m_CapLine_7 = value;
	}

	inline static int32_t get_offset_of_m_MeanLine_8() { return static_cast<int32_t>(offsetof(FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979, ___m_MeanLine_8)); }
	inline float get_m_MeanLine_8() const { return ___m_MeanLine_8; }
	inline float* get_address_of_m_MeanLine_8() { return &___m_MeanLine_8; }
	inline void set_m_MeanLine_8(float value)
	{
		___m_MeanLine_8 = value;
	}

	inline static int32_t get_offset_of_m_Baseline_9() { return static_cast<int32_t>(offsetof(FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979, ___m_Baseline_9)); }
	inline float get_m_Baseline_9() const { return ___m_Baseline_9; }
	inline float* get_address_of_m_Baseline_9() { return &___m_Baseline_9; }
	inline void set_m_Baseline_9(float value)
	{
		___m_Baseline_9 = value;
	}

	inline static int32_t get_offset_of_m_DescentLine_10() { return static_cast<int32_t>(offsetof(FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979, ___m_DescentLine_10)); }
	inline float get_m_DescentLine_10() const { return ___m_DescentLine_10; }
	inline float* get_address_of_m_DescentLine_10() { return &___m_DescentLine_10; }
	inline void set_m_DescentLine_10(float value)
	{
		___m_DescentLine_10 = value;
	}

	inline static int32_t get_offset_of_m_SuperscriptOffset_11() { return static_cast<int32_t>(offsetof(FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979, ___m_SuperscriptOffset_11)); }
	inline float get_m_SuperscriptOffset_11() const { return ___m_SuperscriptOffset_11; }
	inline float* get_address_of_m_SuperscriptOffset_11() { return &___m_SuperscriptOffset_11; }
	inline void set_m_SuperscriptOffset_11(float value)
	{
		___m_SuperscriptOffset_11 = value;
	}

	inline static int32_t get_offset_of_m_SuperscriptSize_12() { return static_cast<int32_t>(offsetof(FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979, ___m_SuperscriptSize_12)); }
	inline float get_m_SuperscriptSize_12() const { return ___m_SuperscriptSize_12; }
	inline float* get_address_of_m_SuperscriptSize_12() { return &___m_SuperscriptSize_12; }
	inline void set_m_SuperscriptSize_12(float value)
	{
		___m_SuperscriptSize_12 = value;
	}

	inline static int32_t get_offset_of_m_SubscriptOffset_13() { return static_cast<int32_t>(offsetof(FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979, ___m_SubscriptOffset_13)); }
	inline float get_m_SubscriptOffset_13() const { return ___m_SubscriptOffset_13; }
	inline float* get_address_of_m_SubscriptOffset_13() { return &___m_SubscriptOffset_13; }
	inline void set_m_SubscriptOffset_13(float value)
	{
		___m_SubscriptOffset_13 = value;
	}

	inline static int32_t get_offset_of_m_SubscriptSize_14() { return static_cast<int32_t>(offsetof(FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979, ___m_SubscriptSize_14)); }
	inline float get_m_SubscriptSize_14() const { return ___m_SubscriptSize_14; }
	inline float* get_address_of_m_SubscriptSize_14() { return &___m_SubscriptSize_14; }
	inline void set_m_SubscriptSize_14(float value)
	{
		___m_SubscriptSize_14 = value;
	}

	inline static int32_t get_offset_of_m_UnderlineOffset_15() { return static_cast<int32_t>(offsetof(FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979, ___m_UnderlineOffset_15)); }
	inline float get_m_UnderlineOffset_15() const { return ___m_UnderlineOffset_15; }
	inline float* get_address_of_m_UnderlineOffset_15() { return &___m_UnderlineOffset_15; }
	inline void set_m_UnderlineOffset_15(float value)
	{
		___m_UnderlineOffset_15 = value;
	}

	inline static int32_t get_offset_of_m_UnderlineThickness_16() { return static_cast<int32_t>(offsetof(FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979, ___m_UnderlineThickness_16)); }
	inline float get_m_UnderlineThickness_16() const { return ___m_UnderlineThickness_16; }
	inline float* get_address_of_m_UnderlineThickness_16() { return &___m_UnderlineThickness_16; }
	inline void set_m_UnderlineThickness_16(float value)
	{
		___m_UnderlineThickness_16 = value;
	}

	inline static int32_t get_offset_of_m_StrikethroughOffset_17() { return static_cast<int32_t>(offsetof(FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979, ___m_StrikethroughOffset_17)); }
	inline float get_m_StrikethroughOffset_17() const { return ___m_StrikethroughOffset_17; }
	inline float* get_address_of_m_StrikethroughOffset_17() { return &___m_StrikethroughOffset_17; }
	inline void set_m_StrikethroughOffset_17(float value)
	{
		___m_StrikethroughOffset_17 = value;
	}

	inline static int32_t get_offset_of_m_StrikethroughThickness_18() { return static_cast<int32_t>(offsetof(FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979, ___m_StrikethroughThickness_18)); }
	inline float get_m_StrikethroughThickness_18() const { return ___m_StrikethroughThickness_18; }
	inline float* get_address_of_m_StrikethroughThickness_18() { return &___m_StrikethroughThickness_18; }
	inline void set_m_StrikethroughThickness_18(float value)
	{
		___m_StrikethroughThickness_18 = value;
	}

	inline static int32_t get_offset_of_m_TabWidth_19() { return static_cast<int32_t>(offsetof(FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979, ___m_TabWidth_19)); }
	inline float get_m_TabWidth_19() const { return ___m_TabWidth_19; }
	inline float* get_address_of_m_TabWidth_19() { return &___m_TabWidth_19; }
	inline void set_m_TabWidth_19(float value)
	{
		___m_TabWidth_19 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.TextCore.FaceInfo
struct FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979_marshaled_pinvoke
{
	int32_t ___m_FaceIndex_0;
	char* ___m_FamilyName_1;
	char* ___m_StyleName_2;
	int32_t ___m_PointSize_3;
	float ___m_Scale_4;
	float ___m_LineHeight_5;
	float ___m_AscentLine_6;
	float ___m_CapLine_7;
	float ___m_MeanLine_8;
	float ___m_Baseline_9;
	float ___m_DescentLine_10;
	float ___m_SuperscriptOffset_11;
	float ___m_SuperscriptSize_12;
	float ___m_SubscriptOffset_13;
	float ___m_SubscriptSize_14;
	float ___m_UnderlineOffset_15;
	float ___m_UnderlineThickness_16;
	float ___m_StrikethroughOffset_17;
	float ___m_StrikethroughThickness_18;
	float ___m_TabWidth_19;
};
// Native definition for COM marshalling of UnityEngine.TextCore.FaceInfo
struct FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979_marshaled_com
{
	int32_t ___m_FaceIndex_0;
	Il2CppChar* ___m_FamilyName_1;
	Il2CppChar* ___m_StyleName_2;
	int32_t ___m_PointSize_3;
	float ___m_Scale_4;
	float ___m_LineHeight_5;
	float ___m_AscentLine_6;
	float ___m_CapLine_7;
	float ___m_MeanLine_8;
	float ___m_Baseline_9;
	float ___m_DescentLine_10;
	float ___m_SuperscriptOffset_11;
	float ___m_SuperscriptSize_12;
	float ___m_SubscriptOffset_13;
	float ___m_SubscriptSize_14;
	float ___m_UnderlineOffset_15;
	float ___m_UnderlineThickness_16;
	float ___m_StrikethroughOffset_17;
	float ___m_StrikethroughThickness_18;
	float ___m_TabWidth_19;
};

// TMPro.FontAssetCreationSettings
struct FontAssetCreationSettings_t70B67907C3CF96F5289A141EA8D87A2A422802A1 
{
public:
	// System.String TMPro.FontAssetCreationSettings::sourceFontFileName
	String_t* ___sourceFontFileName_0;
	// System.String TMPro.FontAssetCreationSettings::sourceFontFileGUID
	String_t* ___sourceFontFileGUID_1;
	// System.Int32 TMPro.FontAssetCreationSettings::pointSizeSamplingMode
	int32_t ___pointSizeSamplingMode_2;
	// System.Int32 TMPro.FontAssetCreationSettings::pointSize
	int32_t ___pointSize_3;
	// System.Int32 TMPro.FontAssetCreationSettings::padding
	int32_t ___padding_4;
	// System.Int32 TMPro.FontAssetCreationSettings::packingMode
	int32_t ___packingMode_5;
	// System.Int32 TMPro.FontAssetCreationSettings::atlasWidth
	int32_t ___atlasWidth_6;
	// System.Int32 TMPro.FontAssetCreationSettings::atlasHeight
	int32_t ___atlasHeight_7;
	// System.Int32 TMPro.FontAssetCreationSettings::characterSetSelectionMode
	int32_t ___characterSetSelectionMode_8;
	// System.String TMPro.FontAssetCreationSettings::characterSequence
	String_t* ___characterSequence_9;
	// System.String TMPro.FontAssetCreationSettings::referencedFontAssetGUID
	String_t* ___referencedFontAssetGUID_10;
	// System.String TMPro.FontAssetCreationSettings::referencedTextAssetGUID
	String_t* ___referencedTextAssetGUID_11;
	// System.Int32 TMPro.FontAssetCreationSettings::fontStyle
	int32_t ___fontStyle_12;
	// System.Single TMPro.FontAssetCreationSettings::fontStyleModifier
	float ___fontStyleModifier_13;
	// System.Int32 TMPro.FontAssetCreationSettings::renderMode
	int32_t ___renderMode_14;
	// System.Boolean TMPro.FontAssetCreationSettings::includeFontFeatures
	bool ___includeFontFeatures_15;

public:
	inline static int32_t get_offset_of_sourceFontFileName_0() { return static_cast<int32_t>(offsetof(FontAssetCreationSettings_t70B67907C3CF96F5289A141EA8D87A2A422802A1, ___sourceFontFileName_0)); }
	inline String_t* get_sourceFontFileName_0() const { return ___sourceFontFileName_0; }
	inline String_t** get_address_of_sourceFontFileName_0() { return &___sourceFontFileName_0; }
	inline void set_sourceFontFileName_0(String_t* value)
	{
		___sourceFontFileName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sourceFontFileName_0), (void*)value);
	}

	inline static int32_t get_offset_of_sourceFontFileGUID_1() { return static_cast<int32_t>(offsetof(FontAssetCreationSettings_t70B67907C3CF96F5289A141EA8D87A2A422802A1, ___sourceFontFileGUID_1)); }
	inline String_t* get_sourceFontFileGUID_1() const { return ___sourceFontFileGUID_1; }
	inline String_t** get_address_of_sourceFontFileGUID_1() { return &___sourceFontFileGUID_1; }
	inline void set_sourceFontFileGUID_1(String_t* value)
	{
		___sourceFontFileGUID_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sourceFontFileGUID_1), (void*)value);
	}

	inline static int32_t get_offset_of_pointSizeSamplingMode_2() { return static_cast<int32_t>(offsetof(FontAssetCreationSettings_t70B67907C3CF96F5289A141EA8D87A2A422802A1, ___pointSizeSamplingMode_2)); }
	inline int32_t get_pointSizeSamplingMode_2() const { return ___pointSizeSamplingMode_2; }
	inline int32_t* get_address_of_pointSizeSamplingMode_2() { return &___pointSizeSamplingMode_2; }
	inline void set_pointSizeSamplingMode_2(int32_t value)
	{
		___pointSizeSamplingMode_2 = value;
	}

	inline static int32_t get_offset_of_pointSize_3() { return static_cast<int32_t>(offsetof(FontAssetCreationSettings_t70B67907C3CF96F5289A141EA8D87A2A422802A1, ___pointSize_3)); }
	inline int32_t get_pointSize_3() const { return ___pointSize_3; }
	inline int32_t* get_address_of_pointSize_3() { return &___pointSize_3; }
	inline void set_pointSize_3(int32_t value)
	{
		___pointSize_3 = value;
	}

	inline static int32_t get_offset_of_padding_4() { return static_cast<int32_t>(offsetof(FontAssetCreationSettings_t70B67907C3CF96F5289A141EA8D87A2A422802A1, ___padding_4)); }
	inline int32_t get_padding_4() const { return ___padding_4; }
	inline int32_t* get_address_of_padding_4() { return &___padding_4; }
	inline void set_padding_4(int32_t value)
	{
		___padding_4 = value;
	}

	inline static int32_t get_offset_of_packingMode_5() { return static_cast<int32_t>(offsetof(FontAssetCreationSettings_t70B67907C3CF96F5289A141EA8D87A2A422802A1, ___packingMode_5)); }
	inline int32_t get_packingMode_5() const { return ___packingMode_5; }
	inline int32_t* get_address_of_packingMode_5() { return &___packingMode_5; }
	inline void set_packingMode_5(int32_t value)
	{
		___packingMode_5 = value;
	}

	inline static int32_t get_offset_of_atlasWidth_6() { return static_cast<int32_t>(offsetof(FontAssetCreationSettings_t70B67907C3CF96F5289A141EA8D87A2A422802A1, ___atlasWidth_6)); }
	inline int32_t get_atlasWidth_6() const { return ___atlasWidth_6; }
	inline int32_t* get_address_of_atlasWidth_6() { return &___atlasWidth_6; }
	inline void set_atlasWidth_6(int32_t value)
	{
		___atlasWidth_6 = value;
	}

	inline static int32_t get_offset_of_atlasHeight_7() { return static_cast<int32_t>(offsetof(FontAssetCreationSettings_t70B67907C3CF96F5289A141EA8D87A2A422802A1, ___atlasHeight_7)); }
	inline int32_t get_atlasHeight_7() const { return ___atlasHeight_7; }
	inline int32_t* get_address_of_atlasHeight_7() { return &___atlasHeight_7; }
	inline void set_atlasHeight_7(int32_t value)
	{
		___atlasHeight_7 = value;
	}

	inline static int32_t get_offset_of_characterSetSelectionMode_8() { return static_cast<int32_t>(offsetof(FontAssetCreationSettings_t70B67907C3CF96F5289A141EA8D87A2A422802A1, ___characterSetSelectionMode_8)); }
	inline int32_t get_characterSetSelectionMode_8() const { return ___characterSetSelectionMode_8; }
	inline int32_t* get_address_of_characterSetSelectionMode_8() { return &___characterSetSelectionMode_8; }
	inline void set_characterSetSelectionMode_8(int32_t value)
	{
		___characterSetSelectionMode_8 = value;
	}

	inline static int32_t get_offset_of_characterSequence_9() { return static_cast<int32_t>(offsetof(FontAssetCreationSettings_t70B67907C3CF96F5289A141EA8D87A2A422802A1, ___characterSequence_9)); }
	inline String_t* get_characterSequence_9() const { return ___characterSequence_9; }
	inline String_t** get_address_of_characterSequence_9() { return &___characterSequence_9; }
	inline void set_characterSequence_9(String_t* value)
	{
		___characterSequence_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___characterSequence_9), (void*)value);
	}

	inline static int32_t get_offset_of_referencedFontAssetGUID_10() { return static_cast<int32_t>(offsetof(FontAssetCreationSettings_t70B67907C3CF96F5289A141EA8D87A2A422802A1, ___referencedFontAssetGUID_10)); }
	inline String_t* get_referencedFontAssetGUID_10() const { return ___referencedFontAssetGUID_10; }
	inline String_t** get_address_of_referencedFontAssetGUID_10() { return &___referencedFontAssetGUID_10; }
	inline void set_referencedFontAssetGUID_10(String_t* value)
	{
		___referencedFontAssetGUID_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___referencedFontAssetGUID_10), (void*)value);
	}

	inline static int32_t get_offset_of_referencedTextAssetGUID_11() { return static_cast<int32_t>(offsetof(FontAssetCreationSettings_t70B67907C3CF96F5289A141EA8D87A2A422802A1, ___referencedTextAssetGUID_11)); }
	inline String_t* get_referencedTextAssetGUID_11() const { return ___referencedTextAssetGUID_11; }
	inline String_t** get_address_of_referencedTextAssetGUID_11() { return &___referencedTextAssetGUID_11; }
	inline void set_referencedTextAssetGUID_11(String_t* value)
	{
		___referencedTextAssetGUID_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___referencedTextAssetGUID_11), (void*)value);
	}

	inline static int32_t get_offset_of_fontStyle_12() { return static_cast<int32_t>(offsetof(FontAssetCreationSettings_t70B67907C3CF96F5289A141EA8D87A2A422802A1, ___fontStyle_12)); }
	inline int32_t get_fontStyle_12() const { return ___fontStyle_12; }
	inline int32_t* get_address_of_fontStyle_12() { return &___fontStyle_12; }
	inline void set_fontStyle_12(int32_t value)
	{
		___fontStyle_12 = value;
	}

	inline static int32_t get_offset_of_fontStyleModifier_13() { return static_cast<int32_t>(offsetof(FontAssetCreationSettings_t70B67907C3CF96F5289A141EA8D87A2A422802A1, ___fontStyleModifier_13)); }
	inline float get_fontStyleModifier_13() const { return ___fontStyleModifier_13; }
	inline float* get_address_of_fontStyleModifier_13() { return &___fontStyleModifier_13; }
	inline void set_fontStyleModifier_13(float value)
	{
		___fontStyleModifier_13 = value;
	}

	inline static int32_t get_offset_of_renderMode_14() { return static_cast<int32_t>(offsetof(FontAssetCreationSettings_t70B67907C3CF96F5289A141EA8D87A2A422802A1, ___renderMode_14)); }
	inline int32_t get_renderMode_14() const { return ___renderMode_14; }
	inline int32_t* get_address_of_renderMode_14() { return &___renderMode_14; }
	inline void set_renderMode_14(int32_t value)
	{
		___renderMode_14 = value;
	}

	inline static int32_t get_offset_of_includeFontFeatures_15() { return static_cast<int32_t>(offsetof(FontAssetCreationSettings_t70B67907C3CF96F5289A141EA8D87A2A422802A1, ___includeFontFeatures_15)); }
	inline bool get_includeFontFeatures_15() const { return ___includeFontFeatures_15; }
	inline bool* get_address_of_includeFontFeatures_15() { return &___includeFontFeatures_15; }
	inline void set_includeFontFeatures_15(bool value)
	{
		___includeFontFeatures_15 = value;
	}
};

// Native definition for P/Invoke marshalling of TMPro.FontAssetCreationSettings
struct FontAssetCreationSettings_t70B67907C3CF96F5289A141EA8D87A2A422802A1_marshaled_pinvoke
{
	char* ___sourceFontFileName_0;
	char* ___sourceFontFileGUID_1;
	int32_t ___pointSizeSamplingMode_2;
	int32_t ___pointSize_3;
	int32_t ___padding_4;
	int32_t ___packingMode_5;
	int32_t ___atlasWidth_6;
	int32_t ___atlasHeight_7;
	int32_t ___characterSetSelectionMode_8;
	char* ___characterSequence_9;
	char* ___referencedFontAssetGUID_10;
	char* ___referencedTextAssetGUID_11;
	int32_t ___fontStyle_12;
	float ___fontStyleModifier_13;
	int32_t ___renderMode_14;
	int32_t ___includeFontFeatures_15;
};
// Native definition for COM marshalling of TMPro.FontAssetCreationSettings
struct FontAssetCreationSettings_t70B67907C3CF96F5289A141EA8D87A2A422802A1_marshaled_com
{
	Il2CppChar* ___sourceFontFileName_0;
	Il2CppChar* ___sourceFontFileGUID_1;
	int32_t ___pointSizeSamplingMode_2;
	int32_t ___pointSize_3;
	int32_t ___padding_4;
	int32_t ___packingMode_5;
	int32_t ___atlasWidth_6;
	int32_t ___atlasHeight_7;
	int32_t ___characterSetSelectionMode_8;
	Il2CppChar* ___characterSequence_9;
	Il2CppChar* ___referencedFontAssetGUID_10;
	Il2CppChar* ___referencedTextAssetGUID_11;
	int32_t ___fontStyle_12;
	float ___fontStyleModifier_13;
	int32_t ___renderMode_14;
	int32_t ___includeFontFeatures_15;
};

// System.Guid
struct Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rngAccess_12), (void*)value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rng_13), (void*)value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fastRng_14), (void*)value);
	}
};


// System.Int16
struct Int16_tD0F031114106263BB459DA1F099FF9F42691295A 
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


// System.Int64
struct Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
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


// UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask
struct InteractionLayerMask_t9AFE7E0AC5956A410A71C6C26CB6793B882C3D47 
{
public:
	// System.UInt32 UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask::m_Bits
	uint32_t ___m_Bits_0;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask::m_Mask
	int32_t ___m_Mask_1;

public:
	inline static int32_t get_offset_of_m_Bits_0() { return static_cast<int32_t>(offsetof(InteractionLayerMask_t9AFE7E0AC5956A410A71C6C26CB6793B882C3D47, ___m_Bits_0)); }
	inline uint32_t get_m_Bits_0() const { return ___m_Bits_0; }
	inline uint32_t* get_address_of_m_Bits_0() { return &___m_Bits_0; }
	inline void set_m_Bits_0(uint32_t value)
	{
		___m_Bits_0 = value;
	}

	inline static int32_t get_offset_of_m_Mask_1() { return static_cast<int32_t>(offsetof(InteractionLayerMask_t9AFE7E0AC5956A410A71C6C26CB6793B882C3D47, ___m_Mask_1)); }
	inline int32_t get_m_Mask_1() const { return ___m_Mask_1; }
	inline int32_t* get_address_of_m_Mask_1() { return &___m_Mask_1; }
	inline void set_m_Mask_1(int32_t value)
	{
		___m_Mask_1 = value;
	}
};


// UnityEngine.LayerMask
struct LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
	}
};


// Windows.Foundation.Point
struct Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 
{
public:
	// System.Single Windows.Foundation.Point::_x
	float ____x_0;
	// System.Single Windows.Foundation.Point::_y
	float ____y_1;

public:
	inline static int32_t get_offset_of__x_0() { return static_cast<int32_t>(offsetof(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578, ____x_0)); }
	inline float get__x_0() const { return ____x_0; }
	inline float* get_address_of__x_0() { return &____x_0; }
	inline void set__x_0(float value)
	{
		____x_0 = value;
	}

	inline static int32_t get_offset_of__y_1() { return static_cast<int32_t>(offsetof(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578, ____y_1)); }
	inline float get__y_1() const { return ____y_1; }
	inline float* get_address_of__y_1() { return &____y_1; }
	inline void set__y_1(float value)
	{
		____y_1 = value;
	}
};


// Windows.Foundation.Rect
struct Rect_tC45F1DDF39812623644DE296D8057A4958176627 
{
public:
	// System.Single Windows.Foundation.Rect::_x
	float ____x_0;
	// System.Single Windows.Foundation.Rect::_y
	float ____y_1;
	// System.Single Windows.Foundation.Rect::_width
	float ____width_2;
	// System.Single Windows.Foundation.Rect::_height
	float ____height_3;

public:
	inline static int32_t get_offset_of__x_0() { return static_cast<int32_t>(offsetof(Rect_tC45F1DDF39812623644DE296D8057A4958176627, ____x_0)); }
	inline float get__x_0() const { return ____x_0; }
	inline float* get_address_of__x_0() { return &____x_0; }
	inline void set__x_0(float value)
	{
		____x_0 = value;
	}

	inline static int32_t get_offset_of__y_1() { return static_cast<int32_t>(offsetof(Rect_tC45F1DDF39812623644DE296D8057A4958176627, ____y_1)); }
	inline float get__y_1() const { return ____y_1; }
	inline float* get_address_of__y_1() { return &____y_1; }
	inline void set__y_1(float value)
	{
		____y_1 = value;
	}

	inline static int32_t get_offset_of__width_2() { return static_cast<int32_t>(offsetof(Rect_tC45F1DDF39812623644DE296D8057A4958176627, ____width_2)); }
	inline float get__width_2() const { return ____width_2; }
	inline float* get_address_of__width_2() { return &____width_2; }
	inline void set__width_2(float value)
	{
		____width_2 = value;
	}

	inline static int32_t get_offset_of__height_3() { return static_cast<int32_t>(offsetof(Rect_tC45F1DDF39812623644DE296D8057A4958176627, ____height_3)); }
	inline float get__height_3() const { return ____height_3; }
	inline float* get_address_of__height_3() { return &____height_3; }
	inline void set__height_3(float value)
	{
		____height_3 = value;
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


// Windows.Foundation.Size
struct Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 
{
public:
	// System.Single Windows.Foundation.Size::_width
	float ____width_0;
	// System.Single Windows.Foundation.Size::_height
	float ____height_1;

public:
	inline static int32_t get_offset_of__width_0() { return static_cast<int32_t>(offsetof(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92, ____width_0)); }
	inline float get__width_0() const { return ____width_0; }
	inline float* get_address_of__width_0() { return &____width_0; }
	inline void set__width_0(float value)
	{
		____width_0 = value;
	}

	inline static int32_t get_offset_of__height_1() { return static_cast<int32_t>(offsetof(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92, ____height_1)); }
	inline float get__height_1() const { return ____height_1; }
	inline float* get_address_of__height_1() { return &____height_1; }
	inline void set__height_1(float value)
	{
		____height_1 = value;
	}
};


// UnityEngine.InputSystem.Utilities.Substring
struct Substring_t9EE457D8CFFFB970B2967B31E9D9AB465415571F 
{
public:
	// System.String UnityEngine.InputSystem.Utilities.Substring::m_String
	String_t* ___m_String_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.Substring::m_Index
	int32_t ___m_Index_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.Substring::m_Length
	int32_t ___m_Length_2;

public:
	inline static int32_t get_offset_of_m_String_0() { return static_cast<int32_t>(offsetof(Substring_t9EE457D8CFFFB970B2967B31E9D9AB465415571F, ___m_String_0)); }
	inline String_t* get_m_String_0() const { return ___m_String_0; }
	inline String_t** get_address_of_m_String_0() { return &___m_String_0; }
	inline void set_m_String_0(String_t* value)
	{
		___m_String_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_String_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Index_1() { return static_cast<int32_t>(offsetof(Substring_t9EE457D8CFFFB970B2967B31E9D9AB465415571F, ___m_Index_1)); }
	inline int32_t get_m_Index_1() const { return ___m_Index_1; }
	inline int32_t* get_address_of_m_Index_1() { return &___m_Index_1; }
	inline void set_m_Index_1(int32_t value)
	{
		___m_Index_1 = value;
	}

	inline static int32_t get_offset_of_m_Length_2() { return static_cast<int32_t>(offsetof(Substring_t9EE457D8CFFFB970B2967B31E9D9AB465415571F, ___m_Length_2)); }
	inline int32_t get_m_Length_2() const { return ___m_Length_2; }
	inline int32_t* get_address_of_m_Length_2() { return &___m_Length_2; }
	inline void set_m_Length_2(int32_t value)
	{
		___m_Length_2 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.Substring
struct Substring_t9EE457D8CFFFB970B2967B31E9D9AB465415571F_marshaled_pinvoke
{
	char* ___m_String_0;
	int32_t ___m_Index_1;
	int32_t ___m_Length_2;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.Substring
struct Substring_t9EE457D8CFFFB970B2967B31E9D9AB465415571F_marshaled_com
{
	Il2CppChar* ___m_String_0;
	int32_t ___m_Index_1;
	int32_t ___m_Length_2;
};

// Microsoft.MixedReality.Toolkit.SystemInterfaceType
struct SystemInterfaceType_tD26D47D33FB0297B63287F4344DDE904AD50B2F8  : public SystemType_tC66B6E67B2D1045958296A6D7D4EFE000A5EF7F6
{
public:

public:
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


// System.UInt16
struct UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt64
struct UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281 
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


// TMPro.AtlasPopulationMode
struct AtlasPopulationMode_t23261B68B33F6966CAB75B6F5162648F7F0F8999 
{
public:
	// System.Int32 TMPro.AtlasPopulationMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AtlasPopulationMode_t23261B68B33F6966CAB75B6F5162648F7F0F8999, ___value___2)); }
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


// UnityEngine.TextCore.LowLevel.GlyphRenderMode
struct GlyphRenderMode_t43D8B1ECDEC4836D7689CB73D0D6C1EF346F973C 
{
public:
	// System.Int32 UnityEngine.TextCore.LowLevel.GlyphRenderMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GlyphRenderMode_t43D8B1ECDEC4836D7689CB73D0D6C1EF346F973C, ___value___2)); }
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


// UnityEngine.XR.Interaction.Toolkit.InteractableSelectMode
struct InteractableSelectMode_t60921C1737D9470BB32F45B4E557B29F17ACAD68 
{
public:
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.InteractableSelectMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InteractableSelectMode_t60921C1737D9470BB32F45B4E557B29F17ACAD68, ___value___2)); }
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


// Windows.Foundation.PropertyType
struct PropertyType_tE0EA93A7BFC9AC532D4D960D9F87C6E0B5C4F808 
{
public:
	// System.Int32 Windows.Foundation.PropertyType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PropertyType_tE0EA93A7BFC9AC532D4D960D9F87C6E0B5C4F808, ___value___2)); }
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


// TMPro.TMP_Vertex
struct TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E 
{
public:
	// UnityEngine.Vector3 TMPro.TMP_Vertex::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_0;
	// UnityEngine.Vector2 TMPro.TMP_Vertex::uv
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___uv_1;
	// UnityEngine.Vector2 TMPro.TMP_Vertex::uv2
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___uv2_2;
	// UnityEngine.Vector2 TMPro.TMP_Vertex::uv4
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___uv4_3;
	// UnityEngine.Color32 TMPro.TMP_Vertex::color
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___color_4;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E, ___position_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_0() const { return ___position_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_uv_1() { return static_cast<int32_t>(offsetof(TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E, ___uv_1)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_uv_1() const { return ___uv_1; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_uv_1() { return &___uv_1; }
	inline void set_uv_1(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___uv_1 = value;
	}

	inline static int32_t get_offset_of_uv2_2() { return static_cast<int32_t>(offsetof(TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E, ___uv2_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_uv2_2() const { return ___uv2_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_uv2_2() { return &___uv2_2; }
	inline void set_uv2_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___uv2_2 = value;
	}

	inline static int32_t get_offset_of_uv4_3() { return static_cast<int32_t>(offsetof(TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E, ___uv4_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_uv4_3() const { return ___uv4_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_uv4_3() { return &___uv4_3; }
	inline void set_uv4_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___uv4_3 = value;
	}

	inline static int32_t get_offset_of_color_4() { return static_cast<int32_t>(offsetof(TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E, ___color_4)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_color_4() const { return ___color_4; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_color_4() { return &___color_4; }
	inline void set_color_4(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___color_4 = value;
	}
};

struct TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E_StaticFields
{
public:
	// TMPro.TMP_Vertex TMPro.TMP_Vertex::k_Zero
	TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  ___k_Zero_5;

public:
	inline static int32_t get_offset_of_k_Zero_5() { return static_cast<int32_t>(offsetof(TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E_StaticFields, ___k_Zero_5)); }
	inline TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  get_k_Zero_5() const { return ___k_Zero_5; }
	inline TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E * get_address_of_k_Zero_5() { return &___k_Zero_5; }
	inline void set_k_Zero_5(TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  value)
	{
		___k_Zero_5 = value;
	}
};


// TMPro.TextElementType
struct TextElementType_t2D8E05268B46E26157BE5E075752253FF0CE344F 
{
public:
	// System.Byte TMPro.TextElementType::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextElementType_t2D8E05268B46E26157BE5E075752253FF0CE344F, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// System.TimeSpan
struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 
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


// Microsoft.MixedReality.Toolkit.StatefulInteractable/ToggleType
struct ToggleType_t4069EC252D191E2CB0B994A5D8D0E4DEEFB0FF18 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.StatefulInteractable/ToggleType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ToggleType_t4069EC252D191E2CB0B994A5D8D0E4DEEFB0FF18, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable/DistanceCalculationMode
struct DistanceCalculationMode_t00FF5390A69797A443BB8F325981AF9AA220BCAF 
{
public:
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable/DistanceCalculationMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DistanceCalculationMode_t00FF5390A69797A443BB8F325981AF9AA220BCAF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystem`3<Microsoft.MixedReality.Toolkit.Subsystems.HandsSubsystem,Microsoft.MixedReality.Toolkit.Subsystems.HandsSubsystemDescriptor,Microsoft.MixedReality.Toolkit.Subsystems.HandsSubsystem/Provider>
struct MRTKSubsystem_3_tD6062F1EA97AD6CC9D5991C4550298332FE29FAA  : public SubsystemWithProvider_3_tFAE280866CFF8B30AA7FBD24D27B6E53E394030A
{
public:

public:
};

struct MRTKSubsystem_3_tD6062F1EA97AD6CC9D5991C4550298332FE29FAA_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystem`3::UpdatePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdatePerfMarker_4;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystem`3::LateUpdatePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___LateUpdatePerfMarker_5;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystem`3::FixedUpdatePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___FixedUpdatePerfMarker_6;

public:
	inline static int32_t get_offset_of_UpdatePerfMarker_4() { return static_cast<int32_t>(offsetof(MRTKSubsystem_3_tD6062F1EA97AD6CC9D5991C4550298332FE29FAA_StaticFields, ___UpdatePerfMarker_4)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdatePerfMarker_4() const { return ___UpdatePerfMarker_4; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdatePerfMarker_4() { return &___UpdatePerfMarker_4; }
	inline void set_UpdatePerfMarker_4(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdatePerfMarker_4 = value;
	}

	inline static int32_t get_offset_of_LateUpdatePerfMarker_5() { return static_cast<int32_t>(offsetof(MRTKSubsystem_3_tD6062F1EA97AD6CC9D5991C4550298332FE29FAA_StaticFields, ___LateUpdatePerfMarker_5)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_LateUpdatePerfMarker_5() const { return ___LateUpdatePerfMarker_5; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_LateUpdatePerfMarker_5() { return &___LateUpdatePerfMarker_5; }
	inline void set_LateUpdatePerfMarker_5(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___LateUpdatePerfMarker_5 = value;
	}

	inline static int32_t get_offset_of_FixedUpdatePerfMarker_6() { return static_cast<int32_t>(offsetof(MRTKSubsystem_3_tD6062F1EA97AD6CC9D5991C4550298332FE29FAA_StaticFields, ___FixedUpdatePerfMarker_6)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_FixedUpdatePerfMarker_6() const { return ___FixedUpdatePerfMarker_6; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_FixedUpdatePerfMarker_6() { return &___FixedUpdatePerfMarker_6; }
	inline void set_FixedUpdatePerfMarker_6(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___FixedUpdatePerfMarker_6 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Windows.Foundation.IPropertyValue
struct NOVTABLE IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_Type_m2BC440F5119A133BE4DD895657519ADAA3B34272(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_IsNumericScalar_mC8DE97926668A5F2EA3F4A9B128E966CBC7B0D60(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8_m25D96C5F9AC133BF7B682C59FE83EE05A0075B05(uint8_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_mBE4A7DC8A2B92F83EE058AE7515E84DADFA206AE(int16_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_mCF513D800195CA7050FD5AFB4E710FB0CFB531B5(uint16_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_mDE5543C20D3D3C9E773CB6EDBDBC789D12CC59BA(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_mD48C2097876EAE6D1E218D9123F58F168B374205(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m4BAC154BEC3584DF3E34EDA6033EEF3DB6D4132E(int64_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_m981379F85C0C44EDBDD830A293693BE0BB3F62CA(uint64_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_mED031D57B17B0F7BD3B4B250821D070155889F1F(float* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_mA0880A7E89CE09C2639D6F8065B18E8F77EB082F(double* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m7B2226E30F72B0CCAE54B8EDB1AC4ACF1BE860A8(Il2CppChar* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m21FCEEA690B32CD86A36D40FB837FC7D894D5587(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_m8D5702E4E1C67366D65DA23CA2812D6572DF819C(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m885F2850B49DB4B046564BC5FE414256801D9A11(Guid_t * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_m023A766ED6FC58B347CF6F777F5C18C6AE246A3C(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m063CE76264EDAF37A1DA3CA5C9CF4AF85D8FC239(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m014D5E859273BA28DE642E38438EDCC64AB5C41B(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_m0A952D186E59BEA03E6185EDEBAC26D544AFADAC(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_m0A96600149C7E6A493B8420CB316938AEF9A1A06(Rect_tC45F1DDF39812623644DE296D8057A4958176627 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8Array_m540E0503D8CFAE2579D449884B6AA883509C79D1(uint32_t* ___value0ArraySize, uint8_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16Array_m279C289854DE8A2D45A6B6B09112DD9D2F0DF849(uint32_t* ___value0ArraySize, int16_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16Array_m090AA712F6BB39F869BCC5CB90236377EE8673B1(uint32_t* ___value0ArraySize, uint16_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32Array_mADF499B8CD16185128795A7B74D63E8CFE692B9A(uint32_t* ___value0ArraySize, int32_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32Array_m9B44B8D2EA2907A9A96ED653ACEF04873D9483F8(uint32_t* ___value0ArraySize, uint32_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64Array_m9A04AC5F477463928280B42E2C40F13B15A1D564(uint32_t* ___value0ArraySize, int64_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64Array_m776484C9C41D5A03991D89401FF84F9D425D6A5E(uint32_t* ___value0ArraySize, uint64_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingleArray_m1E9CE76FA942B3AFA8995FBAE605E84733917B57(uint32_t* ___value0ArraySize, float** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDoubleArray_m5DAB086BEB4816CAF7553E325B91A4B0B07953A5(uint32_t* ___value0ArraySize, double** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16Array_m2C69248F68D7705FE44FA8F777B061FA77C706A1(uint32_t* ___value0ArraySize, Il2CppChar** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_m083CB5579BC465B4D1BD84CE8382CB747A9FCC8C(uint32_t* ___value0ArraySize, bool** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetStringArray_m680617C6226187D28C4978B710AFBB8581AAC98F(uint32_t* ___value0ArraySize, Il2CppHString** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInspectableArray_m6DCBE370A8CAC129E6D6BD91C6503D14A8109F79(uint32_t* ___value0ArraySize, Il2CppIInspectable*** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuidArray_mE9983D9B5EE9AC1935C3EBD2F9E82DC7188E1D07(uint32_t* ___value0ArraySize, Guid_t ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTimeArray_mEECFC6C321405CDBC425D321E2A8EF3E7BC306A7(uint32_t* ___value0ArraySize, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_mEAF3CA18AA928DAF3046F0F530B9324711650167(uint32_t* ___value0ArraySize, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_mD4ACB0F49C7BFEC1C03A4EE4263B23B2040CECD0(uint32_t* ___value0ArraySize, Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m3C079B4191330FAC3B2131D308C825BC72A5F0DC(uint32_t* ___value0ArraySize, Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_m09598924D31716E1E653AE941186F8B16EA11A87(uint32_t* ___value0ArraySize, Rect_tC45F1DDF39812623644DE296D8057A4958176627 ** ___value0) = 0;
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

// TMPro.TMP_CharacterInfo
struct TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B 
{
public:
	// System.Char TMPro.TMP_CharacterInfo::character
	Il2CppChar ___character_0;
	// System.Int32 TMPro.TMP_CharacterInfo::index
	int32_t ___index_1;
	// System.Int32 TMPro.TMP_CharacterInfo::stringLength
	int32_t ___stringLength_2;
	// TMPro.TMP_TextElementType TMPro.TMP_CharacterInfo::elementType
	int32_t ___elementType_3;
	// TMPro.TMP_TextElement TMPro.TMP_CharacterInfo::textElement
	TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832 * ___textElement_4;
	// TMPro.TMP_FontAsset TMPro.TMP_CharacterInfo::fontAsset
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___fontAsset_5;
	// TMPro.TMP_SpriteAsset TMPro.TMP_CharacterInfo::spriteAsset
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___spriteAsset_6;
	// System.Int32 TMPro.TMP_CharacterInfo::spriteIndex
	int32_t ___spriteIndex_7;
	// UnityEngine.Material TMPro.TMP_CharacterInfo::material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_8;
	// System.Int32 TMPro.TMP_CharacterInfo::materialReferenceIndex
	int32_t ___materialReferenceIndex_9;
	// System.Boolean TMPro.TMP_CharacterInfo::isUsingAlternateTypeface
	bool ___isUsingAlternateTypeface_10;
	// System.Single TMPro.TMP_CharacterInfo::pointSize
	float ___pointSize_11;
	// System.Int32 TMPro.TMP_CharacterInfo::lineNumber
	int32_t ___lineNumber_12;
	// System.Int32 TMPro.TMP_CharacterInfo::pageNumber
	int32_t ___pageNumber_13;
	// System.Int32 TMPro.TMP_CharacterInfo::vertexIndex
	int32_t ___vertexIndex_14;
	// TMPro.TMP_Vertex TMPro.TMP_CharacterInfo::vertex_BL
	TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  ___vertex_BL_15;
	// TMPro.TMP_Vertex TMPro.TMP_CharacterInfo::vertex_TL
	TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  ___vertex_TL_16;
	// TMPro.TMP_Vertex TMPro.TMP_CharacterInfo::vertex_TR
	TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  ___vertex_TR_17;
	// TMPro.TMP_Vertex TMPro.TMP_CharacterInfo::vertex_BR
	TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  ___vertex_BR_18;
	// UnityEngine.Vector3 TMPro.TMP_CharacterInfo::topLeft
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___topLeft_19;
	// UnityEngine.Vector3 TMPro.TMP_CharacterInfo::bottomLeft
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___bottomLeft_20;
	// UnityEngine.Vector3 TMPro.TMP_CharacterInfo::topRight
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___topRight_21;
	// UnityEngine.Vector3 TMPro.TMP_CharacterInfo::bottomRight
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___bottomRight_22;
	// System.Single TMPro.TMP_CharacterInfo::origin
	float ___origin_23;
	// System.Single TMPro.TMP_CharacterInfo::xAdvance
	float ___xAdvance_24;
	// System.Single TMPro.TMP_CharacterInfo::ascender
	float ___ascender_25;
	// System.Single TMPro.TMP_CharacterInfo::baseLine
	float ___baseLine_26;
	// System.Single TMPro.TMP_CharacterInfo::descender
	float ___descender_27;
	// System.Single TMPro.TMP_CharacterInfo::adjustedAscender
	float ___adjustedAscender_28;
	// System.Single TMPro.TMP_CharacterInfo::adjustedDescender
	float ___adjustedDescender_29;
	// System.Single TMPro.TMP_CharacterInfo::aspectRatio
	float ___aspectRatio_30;
	// System.Single TMPro.TMP_CharacterInfo::scale
	float ___scale_31;
	// UnityEngine.Color32 TMPro.TMP_CharacterInfo::color
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___color_32;
	// UnityEngine.Color32 TMPro.TMP_CharacterInfo::underlineColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___underlineColor_33;
	// System.Int32 TMPro.TMP_CharacterInfo::underlineVertexIndex
	int32_t ___underlineVertexIndex_34;
	// UnityEngine.Color32 TMPro.TMP_CharacterInfo::strikethroughColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___strikethroughColor_35;
	// System.Int32 TMPro.TMP_CharacterInfo::strikethroughVertexIndex
	int32_t ___strikethroughVertexIndex_36;
	// UnityEngine.Color32 TMPro.TMP_CharacterInfo::highlightColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___highlightColor_37;
	// TMPro.HighlightState TMPro.TMP_CharacterInfo::highlightState
	HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759  ___highlightState_38;
	// TMPro.FontStyles TMPro.TMP_CharacterInfo::style
	int32_t ___style_39;
	// System.Boolean TMPro.TMP_CharacterInfo::isVisible
	bool ___isVisible_40;

public:
	inline static int32_t get_offset_of_character_0() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___character_0)); }
	inline Il2CppChar get_character_0() const { return ___character_0; }
	inline Il2CppChar* get_address_of_character_0() { return &___character_0; }
	inline void set_character_0(Il2CppChar value)
	{
		___character_0 = value;
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_stringLength_2() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___stringLength_2)); }
	inline int32_t get_stringLength_2() const { return ___stringLength_2; }
	inline int32_t* get_address_of_stringLength_2() { return &___stringLength_2; }
	inline void set_stringLength_2(int32_t value)
	{
		___stringLength_2 = value;
	}

	inline static int32_t get_offset_of_elementType_3() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___elementType_3)); }
	inline int32_t get_elementType_3() const { return ___elementType_3; }
	inline int32_t* get_address_of_elementType_3() { return &___elementType_3; }
	inline void set_elementType_3(int32_t value)
	{
		___elementType_3 = value;
	}

	inline static int32_t get_offset_of_textElement_4() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___textElement_4)); }
	inline TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832 * get_textElement_4() const { return ___textElement_4; }
	inline TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832 ** get_address_of_textElement_4() { return &___textElement_4; }
	inline void set_textElement_4(TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832 * value)
	{
		___textElement_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textElement_4), (void*)value);
	}

	inline static int32_t get_offset_of_fontAsset_5() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___fontAsset_5)); }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * get_fontAsset_5() const { return ___fontAsset_5; }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 ** get_address_of_fontAsset_5() { return &___fontAsset_5; }
	inline void set_fontAsset_5(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * value)
	{
		___fontAsset_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fontAsset_5), (void*)value);
	}

	inline static int32_t get_offset_of_spriteAsset_6() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___spriteAsset_6)); }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * get_spriteAsset_6() const { return ___spriteAsset_6; }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 ** get_address_of_spriteAsset_6() { return &___spriteAsset_6; }
	inline void set_spriteAsset_6(TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * value)
	{
		___spriteAsset_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spriteAsset_6), (void*)value);
	}

	inline static int32_t get_offset_of_spriteIndex_7() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___spriteIndex_7)); }
	inline int32_t get_spriteIndex_7() const { return ___spriteIndex_7; }
	inline int32_t* get_address_of_spriteIndex_7() { return &___spriteIndex_7; }
	inline void set_spriteIndex_7(int32_t value)
	{
		___spriteIndex_7 = value;
	}

	inline static int32_t get_offset_of_material_8() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___material_8)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_material_8() const { return ___material_8; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_material_8() { return &___material_8; }
	inline void set_material_8(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___material_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___material_8), (void*)value);
	}

	inline static int32_t get_offset_of_materialReferenceIndex_9() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___materialReferenceIndex_9)); }
	inline int32_t get_materialReferenceIndex_9() const { return ___materialReferenceIndex_9; }
	inline int32_t* get_address_of_materialReferenceIndex_9() { return &___materialReferenceIndex_9; }
	inline void set_materialReferenceIndex_9(int32_t value)
	{
		___materialReferenceIndex_9 = value;
	}

	inline static int32_t get_offset_of_isUsingAlternateTypeface_10() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___isUsingAlternateTypeface_10)); }
	inline bool get_isUsingAlternateTypeface_10() const { return ___isUsingAlternateTypeface_10; }
	inline bool* get_address_of_isUsingAlternateTypeface_10() { return &___isUsingAlternateTypeface_10; }
	inline void set_isUsingAlternateTypeface_10(bool value)
	{
		___isUsingAlternateTypeface_10 = value;
	}

	inline static int32_t get_offset_of_pointSize_11() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___pointSize_11)); }
	inline float get_pointSize_11() const { return ___pointSize_11; }
	inline float* get_address_of_pointSize_11() { return &___pointSize_11; }
	inline void set_pointSize_11(float value)
	{
		___pointSize_11 = value;
	}

	inline static int32_t get_offset_of_lineNumber_12() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___lineNumber_12)); }
	inline int32_t get_lineNumber_12() const { return ___lineNumber_12; }
	inline int32_t* get_address_of_lineNumber_12() { return &___lineNumber_12; }
	inline void set_lineNumber_12(int32_t value)
	{
		___lineNumber_12 = value;
	}

	inline static int32_t get_offset_of_pageNumber_13() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___pageNumber_13)); }
	inline int32_t get_pageNumber_13() const { return ___pageNumber_13; }
	inline int32_t* get_address_of_pageNumber_13() { return &___pageNumber_13; }
	inline void set_pageNumber_13(int32_t value)
	{
		___pageNumber_13 = value;
	}

	inline static int32_t get_offset_of_vertexIndex_14() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___vertexIndex_14)); }
	inline int32_t get_vertexIndex_14() const { return ___vertexIndex_14; }
	inline int32_t* get_address_of_vertexIndex_14() { return &___vertexIndex_14; }
	inline void set_vertexIndex_14(int32_t value)
	{
		___vertexIndex_14 = value;
	}

	inline static int32_t get_offset_of_vertex_BL_15() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___vertex_BL_15)); }
	inline TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  get_vertex_BL_15() const { return ___vertex_BL_15; }
	inline TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E * get_address_of_vertex_BL_15() { return &___vertex_BL_15; }
	inline void set_vertex_BL_15(TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  value)
	{
		___vertex_BL_15 = value;
	}

	inline static int32_t get_offset_of_vertex_TL_16() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___vertex_TL_16)); }
	inline TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  get_vertex_TL_16() const { return ___vertex_TL_16; }
	inline TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E * get_address_of_vertex_TL_16() { return &___vertex_TL_16; }
	inline void set_vertex_TL_16(TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  value)
	{
		___vertex_TL_16 = value;
	}

	inline static int32_t get_offset_of_vertex_TR_17() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___vertex_TR_17)); }
	inline TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  get_vertex_TR_17() const { return ___vertex_TR_17; }
	inline TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E * get_address_of_vertex_TR_17() { return &___vertex_TR_17; }
	inline void set_vertex_TR_17(TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  value)
	{
		___vertex_TR_17 = value;
	}

	inline static int32_t get_offset_of_vertex_BR_18() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___vertex_BR_18)); }
	inline TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  get_vertex_BR_18() const { return ___vertex_BR_18; }
	inline TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E * get_address_of_vertex_BR_18() { return &___vertex_BR_18; }
	inline void set_vertex_BR_18(TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  value)
	{
		___vertex_BR_18 = value;
	}

	inline static int32_t get_offset_of_topLeft_19() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___topLeft_19)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_topLeft_19() const { return ___topLeft_19; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_topLeft_19() { return &___topLeft_19; }
	inline void set_topLeft_19(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___topLeft_19 = value;
	}

	inline static int32_t get_offset_of_bottomLeft_20() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___bottomLeft_20)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_bottomLeft_20() const { return ___bottomLeft_20; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_bottomLeft_20() { return &___bottomLeft_20; }
	inline void set_bottomLeft_20(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___bottomLeft_20 = value;
	}

	inline static int32_t get_offset_of_topRight_21() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___topRight_21)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_topRight_21() const { return ___topRight_21; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_topRight_21() { return &___topRight_21; }
	inline void set_topRight_21(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___topRight_21 = value;
	}

	inline static int32_t get_offset_of_bottomRight_22() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___bottomRight_22)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_bottomRight_22() const { return ___bottomRight_22; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_bottomRight_22() { return &___bottomRight_22; }
	inline void set_bottomRight_22(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___bottomRight_22 = value;
	}

	inline static int32_t get_offset_of_origin_23() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___origin_23)); }
	inline float get_origin_23() const { return ___origin_23; }
	inline float* get_address_of_origin_23() { return &___origin_23; }
	inline void set_origin_23(float value)
	{
		___origin_23 = value;
	}

	inline static int32_t get_offset_of_xAdvance_24() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___xAdvance_24)); }
	inline float get_xAdvance_24() const { return ___xAdvance_24; }
	inline float* get_address_of_xAdvance_24() { return &___xAdvance_24; }
	inline void set_xAdvance_24(float value)
	{
		___xAdvance_24 = value;
	}

	inline static int32_t get_offset_of_ascender_25() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___ascender_25)); }
	inline float get_ascender_25() const { return ___ascender_25; }
	inline float* get_address_of_ascender_25() { return &___ascender_25; }
	inline void set_ascender_25(float value)
	{
		___ascender_25 = value;
	}

	inline static int32_t get_offset_of_baseLine_26() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___baseLine_26)); }
	inline float get_baseLine_26() const { return ___baseLine_26; }
	inline float* get_address_of_baseLine_26() { return &___baseLine_26; }
	inline void set_baseLine_26(float value)
	{
		___baseLine_26 = value;
	}

	inline static int32_t get_offset_of_descender_27() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___descender_27)); }
	inline float get_descender_27() const { return ___descender_27; }
	inline float* get_address_of_descender_27() { return &___descender_27; }
	inline void set_descender_27(float value)
	{
		___descender_27 = value;
	}

	inline static int32_t get_offset_of_adjustedAscender_28() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___adjustedAscender_28)); }
	inline float get_adjustedAscender_28() const { return ___adjustedAscender_28; }
	inline float* get_address_of_adjustedAscender_28() { return &___adjustedAscender_28; }
	inline void set_adjustedAscender_28(float value)
	{
		___adjustedAscender_28 = value;
	}

	inline static int32_t get_offset_of_adjustedDescender_29() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___adjustedDescender_29)); }
	inline float get_adjustedDescender_29() const { return ___adjustedDescender_29; }
	inline float* get_address_of_adjustedDescender_29() { return &___adjustedDescender_29; }
	inline void set_adjustedDescender_29(float value)
	{
		___adjustedDescender_29 = value;
	}

	inline static int32_t get_offset_of_aspectRatio_30() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___aspectRatio_30)); }
	inline float get_aspectRatio_30() const { return ___aspectRatio_30; }
	inline float* get_address_of_aspectRatio_30() { return &___aspectRatio_30; }
	inline void set_aspectRatio_30(float value)
	{
		___aspectRatio_30 = value;
	}

	inline static int32_t get_offset_of_scale_31() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___scale_31)); }
	inline float get_scale_31() const { return ___scale_31; }
	inline float* get_address_of_scale_31() { return &___scale_31; }
	inline void set_scale_31(float value)
	{
		___scale_31 = value;
	}

	inline static int32_t get_offset_of_color_32() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___color_32)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_color_32() const { return ___color_32; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_color_32() { return &___color_32; }
	inline void set_color_32(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___color_32 = value;
	}

	inline static int32_t get_offset_of_underlineColor_33() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___underlineColor_33)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_underlineColor_33() const { return ___underlineColor_33; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_underlineColor_33() { return &___underlineColor_33; }
	inline void set_underlineColor_33(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___underlineColor_33 = value;
	}

	inline static int32_t get_offset_of_underlineVertexIndex_34() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___underlineVertexIndex_34)); }
	inline int32_t get_underlineVertexIndex_34() const { return ___underlineVertexIndex_34; }
	inline int32_t* get_address_of_underlineVertexIndex_34() { return &___underlineVertexIndex_34; }
	inline void set_underlineVertexIndex_34(int32_t value)
	{
		___underlineVertexIndex_34 = value;
	}

	inline static int32_t get_offset_of_strikethroughColor_35() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___strikethroughColor_35)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_strikethroughColor_35() const { return ___strikethroughColor_35; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_strikethroughColor_35() { return &___strikethroughColor_35; }
	inline void set_strikethroughColor_35(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___strikethroughColor_35 = value;
	}

	inline static int32_t get_offset_of_strikethroughVertexIndex_36() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___strikethroughVertexIndex_36)); }
	inline int32_t get_strikethroughVertexIndex_36() const { return ___strikethroughVertexIndex_36; }
	inline int32_t* get_address_of_strikethroughVertexIndex_36() { return &___strikethroughVertexIndex_36; }
	inline void set_strikethroughVertexIndex_36(int32_t value)
	{
		___strikethroughVertexIndex_36 = value;
	}

	inline static int32_t get_offset_of_highlightColor_37() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___highlightColor_37)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_highlightColor_37() const { return ___highlightColor_37; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_highlightColor_37() { return &___highlightColor_37; }
	inline void set_highlightColor_37(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___highlightColor_37 = value;
	}

	inline static int32_t get_offset_of_highlightState_38() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___highlightState_38)); }
	inline HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759  get_highlightState_38() const { return ___highlightState_38; }
	inline HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759 * get_address_of_highlightState_38() { return &___highlightState_38; }
	inline void set_highlightState_38(HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759  value)
	{
		___highlightState_38 = value;
	}

	inline static int32_t get_offset_of_style_39() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___style_39)); }
	inline int32_t get_style_39() const { return ___style_39; }
	inline int32_t* get_address_of_style_39() { return &___style_39; }
	inline void set_style_39(int32_t value)
	{
		___style_39 = value;
	}

	inline static int32_t get_offset_of_isVisible_40() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___isVisible_40)); }
	inline bool get_isVisible_40() const { return ___isVisible_40; }
	inline bool* get_address_of_isVisible_40() { return &___isVisible_40; }
	inline void set_isVisible_40(bool value)
	{
		___isVisible_40 = value;
	}
};

// Native definition for P/Invoke marshalling of TMPro.TMP_CharacterInfo
struct TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B_marshaled_pinvoke
{
	uint8_t ___character_0;
	int32_t ___index_1;
	int32_t ___stringLength_2;
	int32_t ___elementType_3;
	TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832 * ___textElement_4;
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___fontAsset_5;
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___spriteAsset_6;
	int32_t ___spriteIndex_7;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_8;
	int32_t ___materialReferenceIndex_9;
	int32_t ___isUsingAlternateTypeface_10;
	float ___pointSize_11;
	int32_t ___lineNumber_12;
	int32_t ___pageNumber_13;
	int32_t ___vertexIndex_14;
	TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  ___vertex_BL_15;
	TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  ___vertex_TL_16;
	TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  ___vertex_TR_17;
	TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  ___vertex_BR_18;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___topLeft_19;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___bottomLeft_20;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___topRight_21;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___bottomRight_22;
	float ___origin_23;
	float ___xAdvance_24;
	float ___ascender_25;
	float ___baseLine_26;
	float ___descender_27;
	float ___adjustedAscender_28;
	float ___adjustedDescender_29;
	float ___aspectRatio_30;
	float ___scale_31;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___color_32;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___underlineColor_33;
	int32_t ___underlineVertexIndex_34;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___strikethroughColor_35;
	int32_t ___strikethroughVertexIndex_36;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___highlightColor_37;
	HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759  ___highlightState_38;
	int32_t ___style_39;
	int32_t ___isVisible_40;
};
// Native definition for COM marshalling of TMPro.TMP_CharacterInfo
struct TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B_marshaled_com
{
	uint8_t ___character_0;
	int32_t ___index_1;
	int32_t ___stringLength_2;
	int32_t ___elementType_3;
	TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832 * ___textElement_4;
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___fontAsset_5;
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___spriteAsset_6;
	int32_t ___spriteIndex_7;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_8;
	int32_t ___materialReferenceIndex_9;
	int32_t ___isUsingAlternateTypeface_10;
	float ___pointSize_11;
	int32_t ___lineNumber_12;
	int32_t ___pageNumber_13;
	int32_t ___vertexIndex_14;
	TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  ___vertex_BL_15;
	TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  ___vertex_TL_16;
	TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  ___vertex_TR_17;
	TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  ___vertex_BR_18;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___topLeft_19;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___bottomLeft_20;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___topRight_21;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___bottomRight_22;
	float ___origin_23;
	float ___xAdvance_24;
	float ___ascender_25;
	float ___baseLine_26;
	float ___descender_27;
	float ___adjustedAscender_28;
	float ___adjustedDescender_29;
	float ___aspectRatio_30;
	float ___scale_31;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___color_32;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___underlineColor_33;
	int32_t ___underlineVertexIndex_34;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___strikethroughColor_35;
	int32_t ___strikethroughVertexIndex_36;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___highlightColor_37;
	HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759  ___highlightState_38;
	int32_t ___style_39;
	int32_t ___isVisible_40;
};

// TMPro.TMP_TextElement
struct TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832  : public RuntimeObject
{
public:
	// TMPro.TextElementType TMPro.TMP_TextElement::m_ElementType
	uint8_t ___m_ElementType_0;
	// System.UInt32 TMPro.TMP_TextElement::m_Unicode
	uint32_t ___m_Unicode_1;
	// TMPro.TMP_Asset TMPro.TMP_TextElement::m_TextAsset
	TMP_Asset_tEE129B2B2FE167D4B860286167207DD3AD45B45E * ___m_TextAsset_2;
	// UnityEngine.TextCore.Glyph TMPro.TMP_TextElement::m_Glyph
	Glyph_tC58ED6BC718B82A55B7E1A3690A289FFA8EBEFD1 * ___m_Glyph_3;
	// System.UInt32 TMPro.TMP_TextElement::m_GlyphIndex
	uint32_t ___m_GlyphIndex_4;
	// System.Single TMPro.TMP_TextElement::m_Scale
	float ___m_Scale_5;

public:
	inline static int32_t get_offset_of_m_ElementType_0() { return static_cast<int32_t>(offsetof(TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832, ___m_ElementType_0)); }
	inline uint8_t get_m_ElementType_0() const { return ___m_ElementType_0; }
	inline uint8_t* get_address_of_m_ElementType_0() { return &___m_ElementType_0; }
	inline void set_m_ElementType_0(uint8_t value)
	{
		___m_ElementType_0 = value;
	}

	inline static int32_t get_offset_of_m_Unicode_1() { return static_cast<int32_t>(offsetof(TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832, ___m_Unicode_1)); }
	inline uint32_t get_m_Unicode_1() const { return ___m_Unicode_1; }
	inline uint32_t* get_address_of_m_Unicode_1() { return &___m_Unicode_1; }
	inline void set_m_Unicode_1(uint32_t value)
	{
		___m_Unicode_1 = value;
	}

	inline static int32_t get_offset_of_m_TextAsset_2() { return static_cast<int32_t>(offsetof(TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832, ___m_TextAsset_2)); }
	inline TMP_Asset_tEE129B2B2FE167D4B860286167207DD3AD45B45E * get_m_TextAsset_2() const { return ___m_TextAsset_2; }
	inline TMP_Asset_tEE129B2B2FE167D4B860286167207DD3AD45B45E ** get_address_of_m_TextAsset_2() { return &___m_TextAsset_2; }
	inline void set_m_TextAsset_2(TMP_Asset_tEE129B2B2FE167D4B860286167207DD3AD45B45E * value)
	{
		___m_TextAsset_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextAsset_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Glyph_3() { return static_cast<int32_t>(offsetof(TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832, ___m_Glyph_3)); }
	inline Glyph_tC58ED6BC718B82A55B7E1A3690A289FFA8EBEFD1 * get_m_Glyph_3() const { return ___m_Glyph_3; }
	inline Glyph_tC58ED6BC718B82A55B7E1A3690A289FFA8EBEFD1 ** get_address_of_m_Glyph_3() { return &___m_Glyph_3; }
	inline void set_m_Glyph_3(Glyph_tC58ED6BC718B82A55B7E1A3690A289FFA8EBEFD1 * value)
	{
		___m_Glyph_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Glyph_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_GlyphIndex_4() { return static_cast<int32_t>(offsetof(TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832, ___m_GlyphIndex_4)); }
	inline uint32_t get_m_GlyphIndex_4() const { return ___m_GlyphIndex_4; }
	inline uint32_t* get_address_of_m_GlyphIndex_4() { return &___m_GlyphIndex_4; }
	inline void set_m_GlyphIndex_4(uint32_t value)
	{
		___m_GlyphIndex_4 = value;
	}

	inline static int32_t get_offset_of_m_Scale_5() { return static_cast<int32_t>(offsetof(TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832, ___m_Scale_5)); }
	inline float get_m_Scale_5() const { return ___m_Scale_5; }
	inline float* get_address_of_m_Scale_5() { return &___m_Scale_5; }
	inline void set_m_Scale_5(float value)
	{
		___m_Scale_5 = value;
	}
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Subsystems.HandsSubsystem
struct HandsSubsystem_tC663594642CED98A12E9AD49055577EF6A60A2A2  : public MRTKSubsystem_3_tD6062F1EA97AD6CC9D5991C4550298332FE29FAA
{
public:

public:
};


// TMPro.TMP_Asset
struct TMP_Asset_tEE129B2B2FE167D4B860286167207DD3AD45B45E  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.Int32 TMPro.TMP_Asset::m_InstanceID
	int32_t ___m_InstanceID_4;
	// System.Int32 TMPro.TMP_Asset::hashCode
	int32_t ___hashCode_5;
	// UnityEngine.Material TMPro.TMP_Asset::material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_6;
	// System.Int32 TMPro.TMP_Asset::materialHashCode
	int32_t ___materialHashCode_7;

public:
	inline static int32_t get_offset_of_m_InstanceID_4() { return static_cast<int32_t>(offsetof(TMP_Asset_tEE129B2B2FE167D4B860286167207DD3AD45B45E, ___m_InstanceID_4)); }
	inline int32_t get_m_InstanceID_4() const { return ___m_InstanceID_4; }
	inline int32_t* get_address_of_m_InstanceID_4() { return &___m_InstanceID_4; }
	inline void set_m_InstanceID_4(int32_t value)
	{
		___m_InstanceID_4 = value;
	}

	inline static int32_t get_offset_of_hashCode_5() { return static_cast<int32_t>(offsetof(TMP_Asset_tEE129B2B2FE167D4B860286167207DD3AD45B45E, ___hashCode_5)); }
	inline int32_t get_hashCode_5() const { return ___hashCode_5; }
	inline int32_t* get_address_of_hashCode_5() { return &___hashCode_5; }
	inline void set_hashCode_5(int32_t value)
	{
		___hashCode_5 = value;
	}

	inline static int32_t get_offset_of_material_6() { return static_cast<int32_t>(offsetof(TMP_Asset_tEE129B2B2FE167D4B860286167207DD3AD45B45E, ___material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_material_6() const { return ___material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_material_6() { return &___material_6; }
	inline void set_material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___material_6), (void*)value);
	}

	inline static int32_t get_offset_of_materialHashCode_7() { return static_cast<int32_t>(offsetof(TMP_Asset_tEE129B2B2FE167D4B860286167207DD3AD45B45E, ___materialHashCode_7)); }
	inline int32_t get_materialHashCode_7() const { return ___materialHashCode_7; }
	inline int32_t* get_address_of_materialHashCode_7() { return &___materialHashCode_7; }
	inline void set_materialHashCode_7(int32_t value)
	{
		___materialHashCode_7 = value;
	}
};


// TMPro.TMP_Character
struct TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C  : public TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832
{
public:

public:
};


// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// TMPro.ColorMode TMPro.TMP_ColorGradient::colorMode
	int32_t ___colorMode_4;
	// UnityEngine.Color TMPro.TMP_ColorGradient::topLeft
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___topLeft_5;
	// UnityEngine.Color TMPro.TMP_ColorGradient::topRight
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___topRight_6;
	// UnityEngine.Color TMPro.TMP_ColorGradient::bottomLeft
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___bottomLeft_7;
	// UnityEngine.Color TMPro.TMP_ColorGradient::bottomRight
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___bottomRight_8;

public:
	inline static int32_t get_offset_of_colorMode_4() { return static_cast<int32_t>(offsetof(TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461, ___colorMode_4)); }
	inline int32_t get_colorMode_4() const { return ___colorMode_4; }
	inline int32_t* get_address_of_colorMode_4() { return &___colorMode_4; }
	inline void set_colorMode_4(int32_t value)
	{
		___colorMode_4 = value;
	}

	inline static int32_t get_offset_of_topLeft_5() { return static_cast<int32_t>(offsetof(TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461, ___topLeft_5)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_topLeft_5() const { return ___topLeft_5; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_topLeft_5() { return &___topLeft_5; }
	inline void set_topLeft_5(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___topLeft_5 = value;
	}

	inline static int32_t get_offset_of_topRight_6() { return static_cast<int32_t>(offsetof(TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461, ___topRight_6)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_topRight_6() const { return ___topRight_6; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_topRight_6() { return &___topRight_6; }
	inline void set_topRight_6(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___topRight_6 = value;
	}

	inline static int32_t get_offset_of_bottomLeft_7() { return static_cast<int32_t>(offsetof(TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461, ___bottomLeft_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_bottomLeft_7() const { return ___bottomLeft_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_bottomLeft_7() { return &___bottomLeft_7; }
	inline void set_bottomLeft_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___bottomLeft_7 = value;
	}

	inline static int32_t get_offset_of_bottomRight_8() { return static_cast<int32_t>(offsetof(TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461, ___bottomRight_8)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_bottomRight_8() const { return ___bottomRight_8; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_bottomRight_8() { return &___bottomRight_8; }
	inline void set_bottomRight_8(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___bottomRight_8 = value;
	}
};

struct TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461_StaticFields
{
public:
	// UnityEngine.Color TMPro.TMP_ColorGradient::k_DefaultColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___k_DefaultColor_10;

public:
	inline static int32_t get_offset_of_k_DefaultColor_10() { return static_cast<int32_t>(offsetof(TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461_StaticFields, ___k_DefaultColor_10)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_k_DefaultColor_10() const { return ___k_DefaultColor_10; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_k_DefaultColor_10() { return &___k_DefaultColor_10; }
	inline void set_k_DefaultColor_10(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___k_DefaultColor_10 = value;
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Input.SyntheticHandsSubsystem
struct SyntheticHandsSubsystem_t7DA1899A502CE90BDF70B2A352B66B639B10CA19  : public HandsSubsystem_tC663594642CED98A12E9AD49055577EF6A60A2A2
{
public:
	// Microsoft.MixedReality.Toolkit.Input.SyntheticHandsSubsystem/SyntheticHandsProvider Microsoft.MixedReality.Toolkit.Input.SyntheticHandsSubsystem::syntheticProvider
	SyntheticHandsProvider_tFB28CA8BEA3582AF4B6E9A19D4C5F2BE2F83E6EB * ___syntheticProvider_7;

public:
	inline static int32_t get_offset_of_syntheticProvider_7() { return static_cast<int32_t>(offsetof(SyntheticHandsSubsystem_t7DA1899A502CE90BDF70B2A352B66B639B10CA19, ___syntheticProvider_7)); }
	inline SyntheticHandsProvider_tFB28CA8BEA3582AF4B6E9A19D4C5F2BE2F83E6EB * get_syntheticProvider_7() const { return ___syntheticProvider_7; }
	inline SyntheticHandsProvider_tFB28CA8BEA3582AF4B6E9A19D4C5F2BE2F83E6EB ** get_address_of_syntheticProvider_7() { return &___syntheticProvider_7; }
	inline void set_syntheticProvider_7(SyntheticHandsProvider_tFB28CA8BEA3582AF4B6E9A19D4C5F2BE2F83E6EB * value)
	{
		___syntheticProvider_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___syntheticProvider_7), (void*)value);
	}
};


// TMPro.TMP_FontAsset
struct TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2  : public TMP_Asset_tEE129B2B2FE167D4B860286167207DD3AD45B45E
{
public:
	// System.String TMPro.TMP_FontAsset::m_Version
	String_t* ___m_Version_8;
	// System.String TMPro.TMP_FontAsset::m_SourceFontFileGUID
	String_t* ___m_SourceFontFileGUID_9;
	// UnityEngine.Font TMPro.TMP_FontAsset::m_SourceFontFile
	Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 * ___m_SourceFontFile_10;
	// TMPro.AtlasPopulationMode TMPro.TMP_FontAsset::m_AtlasPopulationMode
	int32_t ___m_AtlasPopulationMode_11;
	// UnityEngine.TextCore.FaceInfo TMPro.TMP_FontAsset::m_FaceInfo
	FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979  ___m_FaceInfo_12;
	// System.Collections.Generic.List`1<UnityEngine.TextCore.Glyph> TMPro.TMP_FontAsset::m_GlyphTable
	List_1_tA740960861E81663EBF03A56DE52E25A9283E954 * ___m_GlyphTable_13;
	// System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.TextCore.Glyph> TMPro.TMP_FontAsset::m_GlyphLookupDictionary
	Dictionary_2_tDA5C03A58B5E004C6D454EF31BF9C5307FE785BE * ___m_GlyphLookupDictionary_14;
	// System.Collections.Generic.List`1<TMPro.TMP_Character> TMPro.TMP_FontAsset::m_CharacterTable
	List_1_tE8F1656A7A5AF5AEE27ED7B656B56CACB417FEB8 * ___m_CharacterTable_15;
	// System.Collections.Generic.Dictionary`2<System.UInt32,TMPro.TMP_Character> TMPro.TMP_FontAsset::m_CharacterLookupDictionary
	Dictionary_2_t6BB43D0F158FE3B19E71F6F48A84283B5250E1B4 * ___m_CharacterLookupDictionary_16;
	// UnityEngine.Texture2D TMPro.TMP_FontAsset::m_AtlasTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___m_AtlasTexture_17;
	// UnityEngine.Texture2D[] TMPro.TMP_FontAsset::m_AtlasTextures
	Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316* ___m_AtlasTextures_18;
	// System.Int32 TMPro.TMP_FontAsset::m_AtlasTextureIndex
	int32_t ___m_AtlasTextureIndex_19;
	// System.Boolean TMPro.TMP_FontAsset::m_IsMultiAtlasTexturesEnabled
	bool ___m_IsMultiAtlasTexturesEnabled_20;
	// System.Boolean TMPro.TMP_FontAsset::m_ClearDynamicDataOnBuild
	bool ___m_ClearDynamicDataOnBuild_21;
	// System.Collections.Generic.List`1<UnityEngine.TextCore.GlyphRect> TMPro.TMP_FontAsset::m_UsedGlyphRects
	List_1_tE870449A6BC21548542BC92F18B284004FA8668A * ___m_UsedGlyphRects_22;
	// System.Collections.Generic.List`1<UnityEngine.TextCore.GlyphRect> TMPro.TMP_FontAsset::m_FreeGlyphRects
	List_1_tE870449A6BC21548542BC92F18B284004FA8668A * ___m_FreeGlyphRects_23;
	// TMPro.FaceInfo_Legacy TMPro.TMP_FontAsset::m_fontInfo
	FaceInfo_Legacy_t9002691F7DB46E42ADE3B69A8861C144379D192F * ___m_fontInfo_24;
	// UnityEngine.Texture2D TMPro.TMP_FontAsset::atlas
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___atlas_25;
	// System.Int32 TMPro.TMP_FontAsset::m_AtlasWidth
	int32_t ___m_AtlasWidth_26;
	// System.Int32 TMPro.TMP_FontAsset::m_AtlasHeight
	int32_t ___m_AtlasHeight_27;
	// System.Int32 TMPro.TMP_FontAsset::m_AtlasPadding
	int32_t ___m_AtlasPadding_28;
	// UnityEngine.TextCore.LowLevel.GlyphRenderMode TMPro.TMP_FontAsset::m_AtlasRenderMode
	int32_t ___m_AtlasRenderMode_29;
	// System.Collections.Generic.List`1<TMPro.TMP_Glyph> TMPro.TMP_FontAsset::m_glyphInfoList
	List_1_t3F387498A6DE374D972293A68DB91FDF1A530E2E * ___m_glyphInfoList_30;
	// TMPro.KerningTable TMPro.TMP_FontAsset::m_KerningTable
	KerningTable_t820628F74178B0781DBFFB55BF1277247047617D * ___m_KerningTable_31;
	// TMPro.TMP_FontFeatureTable TMPro.TMP_FontAsset::m_FontFeatureTable
	TMP_FontFeatureTable_t4A06C31656BB8CB686657DC85E0179FA3D15E2F1 * ___m_FontFeatureTable_32;
	// System.Collections.Generic.List`1<TMPro.TMP_FontAsset> TMPro.TMP_FontAsset::fallbackFontAssets
	List_1_tBE22F0B6C1EBDB760862FAD201AFE75E3DEBBBFD * ___fallbackFontAssets_33;
	// System.Collections.Generic.List`1<TMPro.TMP_FontAsset> TMPro.TMP_FontAsset::m_FallbackFontAssetTable
	List_1_tBE22F0B6C1EBDB760862FAD201AFE75E3DEBBBFD * ___m_FallbackFontAssetTable_34;
	// TMPro.FontAssetCreationSettings TMPro.TMP_FontAsset::m_CreationSettings
	FontAssetCreationSettings_t70B67907C3CF96F5289A141EA8D87A2A422802A1  ___m_CreationSettings_35;
	// TMPro.TMP_FontWeightPair[] TMPro.TMP_FontAsset::m_FontWeightTable
	TMP_FontWeightPairU5BU5D_t537F746E35AD2938424D897D937D0F26B0EC45BC* ___m_FontWeightTable_36;
	// TMPro.TMP_FontWeightPair[] TMPro.TMP_FontAsset::fontWeights
	TMP_FontWeightPairU5BU5D_t537F746E35AD2938424D897D937D0F26B0EC45BC* ___fontWeights_37;
	// System.Single TMPro.TMP_FontAsset::normalStyle
	float ___normalStyle_38;
	// System.Single TMPro.TMP_FontAsset::normalSpacingOffset
	float ___normalSpacingOffset_39;
	// System.Single TMPro.TMP_FontAsset::boldStyle
	float ___boldStyle_40;
	// System.Single TMPro.TMP_FontAsset::boldSpacing
	float ___boldSpacing_41;
	// System.Byte TMPro.TMP_FontAsset::italicStyle
	uint8_t ___italicStyle_42;
	// System.Byte TMPro.TMP_FontAsset::tabSize
	uint8_t ___tabSize_43;
	// System.Boolean TMPro.TMP_FontAsset::IsFontAssetLookupTablesDirty
	bool ___IsFontAssetLookupTablesDirty_44;
	// System.Collections.Generic.HashSet`1<System.Int32> TMPro.TMP_FontAsset::FallbackSearchQueryLookup
	HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 * ___FallbackSearchQueryLookup_53;
	// System.Collections.Generic.List`1<UnityEngine.TextCore.Glyph> TMPro.TMP_FontAsset::m_GlyphsToRender
	List_1_tA740960861E81663EBF03A56DE52E25A9283E954 * ___m_GlyphsToRender_59;
	// System.Collections.Generic.List`1<UnityEngine.TextCore.Glyph> TMPro.TMP_FontAsset::m_GlyphsRendered
	List_1_tA740960861E81663EBF03A56DE52E25A9283E954 * ___m_GlyphsRendered_60;
	// System.Collections.Generic.List`1<System.UInt32> TMPro.TMP_FontAsset::m_GlyphIndexList
	List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 * ___m_GlyphIndexList_61;
	// System.Collections.Generic.List`1<System.UInt32> TMPro.TMP_FontAsset::m_GlyphIndexListNewlyAdded
	List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 * ___m_GlyphIndexListNewlyAdded_62;
	// System.Collections.Generic.List`1<System.UInt32> TMPro.TMP_FontAsset::m_GlyphsToAdd
	List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 * ___m_GlyphsToAdd_63;
	// System.Collections.Generic.HashSet`1<System.UInt32> TMPro.TMP_FontAsset::m_GlyphsToAddLookup
	HashSet_1_tE1C51BB41CBDB9CD639DE8689780E3494FDE999B * ___m_GlyphsToAddLookup_64;
	// System.Collections.Generic.List`1<TMPro.TMP_Character> TMPro.TMP_FontAsset::m_CharactersToAdd
	List_1_tE8F1656A7A5AF5AEE27ED7B656B56CACB417FEB8 * ___m_CharactersToAdd_65;
	// System.Collections.Generic.HashSet`1<System.UInt32> TMPro.TMP_FontAsset::m_CharactersToAddLookup
	HashSet_1_tE1C51BB41CBDB9CD639DE8689780E3494FDE999B * ___m_CharactersToAddLookup_66;
	// System.Collections.Generic.List`1<System.UInt32> TMPro.TMP_FontAsset::s_MissingCharacterList
	List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 * ___s_MissingCharacterList_67;
	// System.Collections.Generic.HashSet`1<System.UInt32> TMPro.TMP_FontAsset::m_MissingUnicodesFromFontFile
	HashSet_1_tE1C51BB41CBDB9CD639DE8689780E3494FDE999B * ___m_MissingUnicodesFromFontFile_68;

public:
	inline static int32_t get_offset_of_m_Version_8() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2, ___m_Version_8)); }
	inline String_t* get_m_Version_8() const { return ___m_Version_8; }
	inline String_t** get_address_of_m_Version_8() { return &___m_Version_8; }
	inline void set_m_Version_8(String_t* value)
	{
		___m_Version_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Version_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_SourceFontFileGUID_9() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2, ___m_SourceFontFileGUID_9)); }
	inline String_t* get_m_SourceFontFileGUID_9() const { return ___m_SourceFontFileGUID_9; }
	inline String_t** get_address_of_m_SourceFontFileGUID_9() { return &___m_SourceFontFileGUID_9; }
	inline void set_m_SourceFontFileGUID_9(String_t* value)
	{
		___m_SourceFontFileGUID_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SourceFontFileGUID_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_SourceFontFile_10() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2, ___m_SourceFontFile_10)); }
	inline Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 * get_m_SourceFontFile_10() const { return ___m_SourceFontFile_10; }
	inline Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 ** get_address_of_m_SourceFontFile_10() { return &___m_SourceFontFile_10; }
	inline void set_m_SourceFontFile_10(Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 * value)
	{
		___m_SourceFontFile_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SourceFontFile_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_AtlasPopulationMode_11() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2, ___m_AtlasPopulationMode_11)); }
	inline int32_t get_m_AtlasPopulationMode_11() const { return ___m_AtlasPopulationMode_11; }
	inline int32_t* get_address_of_m_AtlasPopulationMode_11() { return &___m_AtlasPopulationMode_11; }
	inline void set_m_AtlasPopulationMode_11(int32_t value)
	{
		___m_AtlasPopulationMode_11 = value;
	}

	inline static int32_t get_offset_of_m_FaceInfo_12() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2, ___m_FaceInfo_12)); }
	inline FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979  get_m_FaceInfo_12() const { return ___m_FaceInfo_12; }
	inline FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979 * get_address_of_m_FaceInfo_12() { return &___m_FaceInfo_12; }
	inline void set_m_FaceInfo_12(FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979  value)
	{
		___m_FaceInfo_12 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_FaceInfo_12))->___m_FamilyName_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_FaceInfo_12))->___m_StyleName_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_GlyphTable_13() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2, ___m_GlyphTable_13)); }
	inline List_1_tA740960861E81663EBF03A56DE52E25A9283E954 * get_m_GlyphTable_13() const { return ___m_GlyphTable_13; }
	inline List_1_tA740960861E81663EBF03A56DE52E25A9283E954 ** get_address_of_m_GlyphTable_13() { return &___m_GlyphTable_13; }
	inline void set_m_GlyphTable_13(List_1_tA740960861E81663EBF03A56DE52E25A9283E954 * value)
	{
		___m_GlyphTable_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GlyphTable_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GlyphLookupDictionary_14() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2, ___m_GlyphLookupDictionary_14)); }
	inline Dictionary_2_tDA5C03A58B5E004C6D454EF31BF9C5307FE785BE * get_m_GlyphLookupDictionary_14() const { return ___m_GlyphLookupDictionary_14; }
	inline Dictionary_2_tDA5C03A58B5E004C6D454EF31BF9C5307FE785BE ** get_address_of_m_GlyphLookupDictionary_14() { return &___m_GlyphLookupDictionary_14; }
	inline void set_m_GlyphLookupDictionary_14(Dictionary_2_tDA5C03A58B5E004C6D454EF31BF9C5307FE785BE * value)
	{
		___m_GlyphLookupDictionary_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GlyphLookupDictionary_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_CharacterTable_15() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2, ___m_CharacterTable_15)); }
	inline List_1_tE8F1656A7A5AF5AEE27ED7B656B56CACB417FEB8 * get_m_CharacterTable_15() const { return ___m_CharacterTable_15; }
	inline List_1_tE8F1656A7A5AF5AEE27ED7B656B56CACB417FEB8 ** get_address_of_m_CharacterTable_15() { return &___m_CharacterTable_15; }
	inline void set_m_CharacterTable_15(List_1_tE8F1656A7A5AF5AEE27ED7B656B56CACB417FEB8 * value)
	{
		___m_CharacterTable_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CharacterTable_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_CharacterLookupDictionary_16() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2, ___m_CharacterLookupDictionary_16)); }
	inline Dictionary_2_t6BB43D0F158FE3B19E71F6F48A84283B5250E1B4 * get_m_CharacterLookupDictionary_16() const { return ___m_CharacterLookupDictionary_16; }
	inline Dictionary_2_t6BB43D0F158FE3B19E71F6F48A84283B5250E1B4 ** get_address_of_m_CharacterLookupDictionary_16() { return &___m_CharacterLookupDictionary_16; }
	inline void set_m_CharacterLookupDictionary_16(Dictionary_2_t6BB43D0F158FE3B19E71F6F48A84283B5250E1B4 * value)
	{
		___m_CharacterLookupDictionary_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CharacterLookupDictionary_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_AtlasTexture_17() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2, ___m_AtlasTexture_17)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_m_AtlasTexture_17() const { return ___m_AtlasTexture_17; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_m_AtlasTexture_17() { return &___m_AtlasTexture_17; }
	inline void set_m_AtlasTexture_17(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___m_AtlasTexture_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AtlasTexture_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_AtlasTextures_18() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2, ___m_AtlasTextures_18)); }
	inline Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316* get_m_AtlasTextures_18() const { return ___m_AtlasTextures_18; }
	inline Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316** get_address_of_m_AtlasTextures_18() { return &___m_AtlasTextures_18; }
	inline void set_m_AtlasTextures_18(Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316* value)
	{
		___m_AtlasTextures_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AtlasTextures_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_AtlasTextureIndex_19() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2, ___m_AtlasTextureIndex_19)); }
	inline int32_t get_m_AtlasTextureIndex_19() const { return ___m_AtlasTextureIndex_19; }
	inline int32_t* get_address_of_m_AtlasTextureIndex_19() { return &___m_AtlasTextureIndex_19; }
	inline void set_m_AtlasTextureIndex_19(int32_t value)
	{
		___m_AtlasTextureIndex_19 = value;
	}

	inline static int32_t get_offset_of_m_IsMultiAtlasTexturesEnabled_20() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2, ___m_IsMultiAtlasTexturesEnabled_20)); }
	inline bool get_m_IsMultiAtlasTexturesEnabled_20() const { return ___m_IsMultiAtlasTexturesEnabled_20; }
	inline bool* get_address_of_m_IsMultiAtlasTexturesEnabled_20() { return &___m_IsMultiAtlasTexturesEnabled_20; }
	inline void set_m_IsMultiAtlasTexturesEnabled_20(bool value)
	{
		___m_IsMultiAtlasTexturesEnabled_20 = value;
	}

	inline static int32_t get_offset_of_m_ClearDynamicDataOnBuild_21() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2, ___m_ClearDynamicDataOnBuild_21)); }
	inline bool get_m_ClearDynamicDataOnBuild_21() const { return ___m_ClearDynamicDataOnBuild_21; }
	inline bool* get_address_of_m_ClearDynamicDataOnBuild_21() { return &___m_ClearDynamicDataOnBuild_21; }
	inline void set_m_ClearDynamicDataOnBuild_21(bool value)
	{
		___m_ClearDynamicDataOnBuild_21 = value;
	}

	inline static int32_t get_offset_of_m_UsedGlyphRects_22() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2, ___m_UsedGlyphRects_22)); }
	inline List_1_tE870449A6BC21548542BC92F18B284004FA8668A * get_m_UsedGlyphRects_22() const { return ___m_UsedGlyphRects_22; }
	inline List_1_tE870449A6BC21548542BC92F18B284004FA8668A ** get_address_of_m_UsedGlyphRects_22() { return &___m_UsedGlyphRects_22; }
	inline void set_m_UsedGlyphRects_22(List_1_tE870449A6BC21548542BC92F18B284004FA8668A * value)
	{
		___m_UsedGlyphRects_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UsedGlyphRects_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_FreeGlyphRects_23() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2, ___m_FreeGlyphRects_23)); }
	inline List_1_tE870449A6BC21548542BC92F18B284004FA8668A * get_m_FreeGlyphRects_23() const { return ___m_FreeGlyphRects_23; }
	inline List_1_tE870449A6BC21548542BC92F18B284004FA8668A ** get_address_of_m_FreeGlyphRects_23() { return &___m_FreeGlyphRects_23; }
	inline void set_m_FreeGlyphRects_23(List_1_tE870449A6BC21548542BC92F18B284004FA8668A * value)
	{
		___m_FreeGlyphRects_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FreeGlyphRects_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_fontInfo_24() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2, ___m_fontInfo_24)); }
	inline FaceInfo_Legacy_t9002691F7DB46E42ADE3B69A8861C144379D192F * get_m_fontInfo_24() const { return ___m_fontInfo_24; }
	inline FaceInfo_Legacy_t9002691F7DB46E42ADE3B69A8861C144379D192F ** get_address_of_m_fontInfo_24() { return &___m_fontInfo_24; }
	inline void set_m_fontInfo_24(FaceInfo_Legacy_t9002691F7DB46E42ADE3B69A8861C144379D192F * value)
	{
		___m_fontInfo_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontInfo_24), (void*)value);
	}

	inline static int32_t get_offset_of_atlas_25() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2, ___atlas_25)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_atlas_25() const { return ___atlas_25; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_atlas_25() { return &___atlas_25; }
	inline void set_atlas_25(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___atlas_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___atlas_25), (void*)value);
	}

	inline static int32_t get_offset_of_m_AtlasWidth_26() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2, ___m_AtlasWidth_26)); }
	inline int32_t get_m_AtlasWidth_26() const { return ___m_AtlasWidth_26; }
	inline int32_t* get_address_of_m_AtlasWidth_26() { return &___m_AtlasWidth_26; }
	inline void set_m_AtlasWidth_26(int32_t value)
	{
		___m_AtlasWidth_26 = value;
	}

	inline static int32_t get_offset_of_m_AtlasHeight_27() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2, ___m_AtlasHeight_27)); }
	inline int32_t get_m_AtlasHeight_27() const { return ___m_AtlasHeight_27; }
	inline int32_t* get_address_of_m_AtlasHeight_27() { return &___m_AtlasHeight_27; }
	inline void set_m_AtlasHeight_27(int32_t value)
	{
		___m_AtlasHeight_27 = value;
	}

	inline static int32_t get_offset_of_m_AtlasPadding_28() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2, ___m_AtlasPadding_28)); }
	inline int32_t get_m_AtlasPadding_28() const { return ___m_AtlasPadding_28; }
	inline int32_t* get_address_of_m_AtlasPadding_28() { return &___m_AtlasPadding_28; }
	inline void set_m_AtlasPadding_28(int32_t value)
	{
		___m_AtlasPadding_28 = value;
	}

	inline static int32_t get_offset_of_m_AtlasRenderMode_29() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2, ___m_AtlasRenderMode_29)); }
	inline int32_t get_m_AtlasRenderMode_29() const { return ___m_AtlasRenderMode_29; }
	inline int32_t* get_address_of_m_AtlasRenderMode_29() { return &___m_AtlasRenderMode_29; }
	inline void set_m_AtlasRenderMode_29(int32_t value)
	{
		___m_AtlasRenderMode_29 = value;
	}

	inline static int32_t get_offset_of_m_glyphInfoList_30() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2, ___m_glyphInfoList_30)); }
	inline List_1_t3F387498A6DE374D972293A68DB91FDF1A530E2E * get_m_glyphInfoList_30() const { return ___m_glyphInfoList_30; }
	inline List_1_t3F387498A6DE374D972293A68DB91FDF1A530E2E ** get_address_of_m_glyphInfoList_30() { return &___m_glyphInfoList_30; }
	inline void set_m_glyphInfoList_30(List_1_t3F387498A6DE374D972293A68DB91FDF1A530E2E * value)
	{
		___m_glyphInfoList_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_glyphInfoList_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_KerningTable_31() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2, ___m_KerningTable_31)); }
	inline KerningTable_t820628F74178B0781DBFFB55BF1277247047617D * get_m_KerningTable_31() const { return ___m_KerningTable_31; }
	inline KerningTable_t820628F74178B0781DBFFB55BF1277247047617D ** get_address_of_m_KerningTable_31() { return &___m_KerningTable_31; }
	inline void set_m_KerningTable_31(KerningTable_t820628F74178B0781DBFFB55BF1277247047617D * value)
	{
		___m_KerningTable_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_KerningTable_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_FontFeatureTable_32() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2, ___m_FontFeatureTable_32)); }
	inline TMP_FontFeatureTable_t4A06C31656BB8CB686657DC85E0179FA3D15E2F1 * get_m_FontFeatureTable_32() const { return ___m_FontFeatureTable_32; }
	inline TMP_FontFeatureTable_t4A06C31656BB8CB686657DC85E0179FA3D15E2F1 ** get_address_of_m_FontFeatureTable_32() { return &___m_FontFeatureTable_32; }
	inline void set_m_FontFeatureTable_32(TMP_FontFeatureTable_t4A06C31656BB8CB686657DC85E0179FA3D15E2F1 * value)
	{
		___m_FontFeatureTable_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontFeatureTable_32), (void*)value);
	}

	inline static int32_t get_offset_of_fallbackFontAssets_33() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2, ___fallbackFontAssets_33)); }
	inline List_1_tBE22F0B6C1EBDB760862FAD201AFE75E3DEBBBFD * get_fallbackFontAssets_33() const { return ___fallbackFontAssets_33; }
	inline List_1_tBE22F0B6C1EBDB760862FAD201AFE75E3DEBBBFD ** get_address_of_fallbackFontAssets_33() { return &___fallbackFontAssets_33; }
	inline void set_fallbackFontAssets_33(List_1_tBE22F0B6C1EBDB760862FAD201AFE75E3DEBBBFD * value)
	{
		___fallbackFontAssets_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fallbackFontAssets_33), (void*)value);
	}

	inline static int32_t get_offset_of_m_FallbackFontAssetTable_34() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2, ___m_FallbackFontAssetTable_34)); }
	inline List_1_tBE22F0B6C1EBDB760862FAD201AFE75E3DEBBBFD * get_m_FallbackFontAssetTable_34() const { return ___m_FallbackFontAssetTable_34; }
	inline List_1_tBE22F0B6C1EBDB760862FAD201AFE75E3DEBBBFD ** get_address_of_m_FallbackFontAssetTable_34() { return &___m_FallbackFontAssetTable_34; }
	inline void set_m_FallbackFontAssetTable_34(List_1_tBE22F0B6C1EBDB760862FAD201AFE75E3DEBBBFD * value)
	{
		___m_FallbackFontAssetTable_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FallbackFontAssetTable_34), (void*)value);
	}

	inline static int32_t get_offset_of_m_CreationSettings_35() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2, ___m_CreationSettings_35)); }
	inline FontAssetCreationSettings_t70B67907C3CF96F5289A141EA8D87A2A422802A1  get_m_CreationSettings_35() const { return ___m_CreationSettings_35; }
	inline FontAssetCreationSettings_t70B67907C3CF96F5289A141EA8D87A2A422802A1 * get_address_of_m_CreationSettings_35() { return &___m_CreationSettings_35; }
	inline void set_m_CreationSettings_35(FontAssetCreationSettings_t70B67907C3CF96F5289A141EA8D87A2A422802A1  value)
	{
		___m_CreationSettings_35 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CreationSettings_35))->___sourceFontFileName_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CreationSettings_35))->___sourceFontFileGUID_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CreationSettings_35))->___characterSequence_9), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CreationSettings_35))->___referencedFontAssetGUID_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CreationSettings_35))->___referencedTextAssetGUID_11), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_FontWeightTable_36() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2, ___m_FontWeightTable_36)); }
	inline TMP_FontWeightPairU5BU5D_t537F746E35AD2938424D897D937D0F26B0EC45BC* get_m_FontWeightTable_36() const { return ___m_FontWeightTable_36; }
	inline TMP_FontWeightPairU5BU5D_t537F746E35AD2938424D897D937D0F26B0EC45BC** get_address_of_m_FontWeightTable_36() { return &___m_FontWeightTable_36; }
	inline void set_m_FontWeightTable_36(TMP_FontWeightPairU5BU5D_t537F746E35AD2938424D897D937D0F26B0EC45BC* value)
	{
		___m_FontWeightTable_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontWeightTable_36), (void*)value);
	}

	inline static int32_t get_offset_of_fontWeights_37() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2, ___fontWeights_37)); }
	inline TMP_FontWeightPairU5BU5D_t537F746E35AD2938424D897D937D0F26B0EC45BC* get_fontWeights_37() const { return ___fontWeights_37; }
	inline TMP_FontWeightPairU5BU5D_t537F746E35AD2938424D897D937D0F26B0EC45BC** get_address_of_fontWeights_37() { return &___fontWeights_37; }
	inline void set_fontWeights_37(TMP_FontWeightPairU5BU5D_t537F746E35AD2938424D897D937D0F26B0EC45BC* value)
	{
		___fontWeights_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fontWeights_37), (void*)value);
	}

	inline static int32_t get_offset_of_normalStyle_38() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2, ___normalStyle_38)); }
	inline float get_normalStyle_38() const { return ___normalStyle_38; }
	inline float* get_address_of_normalStyle_38() { return &___normalStyle_38; }
	inline void set_normalStyle_38(float value)
	{
		___normalStyle_38 = value;
	}

	inline static int32_t get_offset_of_normalSpacingOffset_39() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2, ___normalSpacingOffset_39)); }
	inline float get_normalSpacingOffset_39() const { return ___normalSpacingOffset_39; }
	inline float* get_address_of_normalSpacingOffset_39() { return &___normalSpacingOffset_39; }
	inline void set_normalSpacingOffset_39(float value)
	{
		___normalSpacingOffset_39 = value;
	}

	inline static int32_t get_offset_of_boldStyle_40() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2, ___boldStyle_40)); }
	inline float get_boldStyle_40() const { return ___boldStyle_40; }
	inline float* get_address_of_boldStyle_40() { return &___boldStyle_40; }
	inline void set_boldStyle_40(float value)
	{
		___boldStyle_40 = value;
	}

	inline static int32_t get_offset_of_boldSpacing_41() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2, ___boldSpacing_41)); }
	inline float get_boldSpacing_41() const { return ___boldSpacing_41; }
	inline float* get_address_of_boldSpacing_41() { return &___boldSpacing_41; }
	inline void set_boldSpacing_41(float value)
	{
		___boldSpacing_41 = value;
	}

	inline static int32_t get_offset_of_italicStyle_42() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2, ___italicStyle_42)); }
	inline uint8_t get_italicStyle_42() const { return ___italicStyle_42; }
	inline uint8_t* get_address_of_italicStyle_42() { return &___italicStyle_42; }
	inline void set_italicStyle_42(uint8_t value)
	{
		___italicStyle_42 = value;
	}

	inline static int32_t get_offset_of_tabSize_43() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2, ___tabSize_43)); }
	inline uint8_t get_tabSize_43() const { return ___tabSize_43; }
	inline uint8_t* get_address_of_tabSize_43() { return &___tabSize_43; }
	inline void set_tabSize_43(uint8_t value)
	{
		___tabSize_43 = value;
	}

	inline static int32_t get_offset_of_IsFontAssetLookupTablesDirty_44() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2, ___IsFontAssetLookupTablesDirty_44)); }
	inline bool get_IsFontAssetLookupTablesDirty_44() const { return ___IsFontAssetLookupTablesDirty_44; }
	inline bool* get_address_of_IsFontAssetLookupTablesDirty_44() { return &___IsFontAssetLookupTablesDirty_44; }
	inline void set_IsFontAssetLookupTablesDirty_44(bool value)
	{
		___IsFontAssetLookupTablesDirty_44 = value;
	}

	inline static int32_t get_offset_of_FallbackSearchQueryLookup_53() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2, ___FallbackSearchQueryLookup_53)); }
	inline HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 * get_FallbackSearchQueryLookup_53() const { return ___FallbackSearchQueryLookup_53; }
	inline HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 ** get_address_of_FallbackSearchQueryLookup_53() { return &___FallbackSearchQueryLookup_53; }
	inline void set_FallbackSearchQueryLookup_53(HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 * value)
	{
		___FallbackSearchQueryLookup_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FallbackSearchQueryLookup_53), (void*)value);
	}

	inline static int32_t get_offset_of_m_GlyphsToRender_59() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2, ___m_GlyphsToRender_59)); }
	inline List_1_tA740960861E81663EBF03A56DE52E25A9283E954 * get_m_GlyphsToRender_59() const { return ___m_GlyphsToRender_59; }
	inline List_1_tA740960861E81663EBF03A56DE52E25A9283E954 ** get_address_of_m_GlyphsToRender_59() { return &___m_GlyphsToRender_59; }
	inline void set_m_GlyphsToRender_59(List_1_tA740960861E81663EBF03A56DE52E25A9283E954 * value)
	{
		___m_GlyphsToRender_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GlyphsToRender_59), (void*)value);
	}

	inline static int32_t get_offset_of_m_GlyphsRendered_60() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2, ___m_GlyphsRendered_60)); }
	inline List_1_tA740960861E81663EBF03A56DE52E25A9283E954 * get_m_GlyphsRendered_60() const { return ___m_GlyphsRendered_60; }
	inline List_1_tA740960861E81663EBF03A56DE52E25A9283E954 ** get_address_of_m_GlyphsRendered_60() { return &___m_GlyphsRendered_60; }
	inline void set_m_GlyphsRendered_60(List_1_tA740960861E81663EBF03A56DE52E25A9283E954 * value)
	{
		___m_GlyphsRendered_60 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GlyphsRendered_60), (void*)value);
	}

	inline static int32_t get_offset_of_m_GlyphIndexList_61() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2, ___m_GlyphIndexList_61)); }
	inline List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 * get_m_GlyphIndexList_61() const { return ___m_GlyphIndexList_61; }
	inline List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 ** get_address_of_m_GlyphIndexList_61() { return &___m_GlyphIndexList_61; }
	inline void set_m_GlyphIndexList_61(List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 * value)
	{
		___m_GlyphIndexList_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GlyphIndexList_61), (void*)value);
	}

	inline static int32_t get_offset_of_m_GlyphIndexListNewlyAdded_62() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2, ___m_GlyphIndexListNewlyAdded_62)); }
	inline List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 * get_m_GlyphIndexListNewlyAdded_62() const { return ___m_GlyphIndexListNewlyAdded_62; }
	inline List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 ** get_address_of_m_GlyphIndexListNewlyAdded_62() { return &___m_GlyphIndexListNewlyAdded_62; }
	inline void set_m_GlyphIndexListNewlyAdded_62(List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 * value)
	{
		___m_GlyphIndexListNewlyAdded_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GlyphIndexListNewlyAdded_62), (void*)value);
	}

	inline static int32_t get_offset_of_m_GlyphsToAdd_63() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2, ___m_GlyphsToAdd_63)); }
	inline List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 * get_m_GlyphsToAdd_63() const { return ___m_GlyphsToAdd_63; }
	inline List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 ** get_address_of_m_GlyphsToAdd_63() { return &___m_GlyphsToAdd_63; }
	inline void set_m_GlyphsToAdd_63(List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 * value)
	{
		___m_GlyphsToAdd_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GlyphsToAdd_63), (void*)value);
	}

	inline static int32_t get_offset_of_m_GlyphsToAddLookup_64() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2, ___m_GlyphsToAddLookup_64)); }
	inline HashSet_1_tE1C51BB41CBDB9CD639DE8689780E3494FDE999B * get_m_GlyphsToAddLookup_64() const { return ___m_GlyphsToAddLookup_64; }
	inline HashSet_1_tE1C51BB41CBDB9CD639DE8689780E3494FDE999B ** get_address_of_m_GlyphsToAddLookup_64() { return &___m_GlyphsToAddLookup_64; }
	inline void set_m_GlyphsToAddLookup_64(HashSet_1_tE1C51BB41CBDB9CD639DE8689780E3494FDE999B * value)
	{
		___m_GlyphsToAddLookup_64 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GlyphsToAddLookup_64), (void*)value);
	}

	inline static int32_t get_offset_of_m_CharactersToAdd_65() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2, ___m_CharactersToAdd_65)); }
	inline List_1_tE8F1656A7A5AF5AEE27ED7B656B56CACB417FEB8 * get_m_CharactersToAdd_65() const { return ___m_CharactersToAdd_65; }
	inline List_1_tE8F1656A7A5AF5AEE27ED7B656B56CACB417FEB8 ** get_address_of_m_CharactersToAdd_65() { return &___m_CharactersToAdd_65; }
	inline void set_m_CharactersToAdd_65(List_1_tE8F1656A7A5AF5AEE27ED7B656B56CACB417FEB8 * value)
	{
		___m_CharactersToAdd_65 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CharactersToAdd_65), (void*)value);
	}

	inline static int32_t get_offset_of_m_CharactersToAddLookup_66() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2, ___m_CharactersToAddLookup_66)); }
	inline HashSet_1_tE1C51BB41CBDB9CD639DE8689780E3494FDE999B * get_m_CharactersToAddLookup_66() const { return ___m_CharactersToAddLookup_66; }
	inline HashSet_1_tE1C51BB41CBDB9CD639DE8689780E3494FDE999B ** get_address_of_m_CharactersToAddLookup_66() { return &___m_CharactersToAddLookup_66; }
	inline void set_m_CharactersToAddLookup_66(HashSet_1_tE1C51BB41CBDB9CD639DE8689780E3494FDE999B * value)
	{
		___m_CharactersToAddLookup_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CharactersToAddLookup_66), (void*)value);
	}

	inline static int32_t get_offset_of_s_MissingCharacterList_67() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2, ___s_MissingCharacterList_67)); }
	inline List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 * get_s_MissingCharacterList_67() const { return ___s_MissingCharacterList_67; }
	inline List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 ** get_address_of_s_MissingCharacterList_67() { return &___s_MissingCharacterList_67; }
	inline void set_s_MissingCharacterList_67(List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 * value)
	{
		___s_MissingCharacterList_67 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_MissingCharacterList_67), (void*)value);
	}

	inline static int32_t get_offset_of_m_MissingUnicodesFromFontFile_68() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2, ___m_MissingUnicodesFromFontFile_68)); }
	inline HashSet_1_tE1C51BB41CBDB9CD639DE8689780E3494FDE999B * get_m_MissingUnicodesFromFontFile_68() const { return ___m_MissingUnicodesFromFontFile_68; }
	inline HashSet_1_tE1C51BB41CBDB9CD639DE8689780E3494FDE999B ** get_address_of_m_MissingUnicodesFromFontFile_68() { return &___m_MissingUnicodesFromFontFile_68; }
	inline void set_m_MissingUnicodesFromFontFile_68(HashSet_1_tE1C51BB41CBDB9CD639DE8689780E3494FDE999B * value)
	{
		___m_MissingUnicodesFromFontFile_68 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MissingUnicodesFromFontFile_68), (void*)value);
	}
};

struct TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker TMPro.TMP_FontAsset::k_ReadFontAssetDefinitionMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___k_ReadFontAssetDefinitionMarker_45;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_FontAsset::k_AddSynthesizedCharactersMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___k_AddSynthesizedCharactersMarker_46;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_FontAsset::k_TryAddCharacterMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___k_TryAddCharacterMarker_47;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_FontAsset::k_TryAddCharactersMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___k_TryAddCharactersMarker_48;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_FontAsset::k_UpdateGlyphAdjustmentRecordsMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___k_UpdateGlyphAdjustmentRecordsMarker_49;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_FontAsset::k_ClearFontAssetDataMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___k_ClearFontAssetDataMarker_50;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_FontAsset::k_UpdateFontAssetDataMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___k_UpdateFontAssetDataMarker_51;
	// System.String TMPro.TMP_FontAsset::s_DefaultMaterialSuffix
	String_t* ___s_DefaultMaterialSuffix_52;
	// System.Collections.Generic.HashSet`1<System.Int32> TMPro.TMP_FontAsset::k_SearchedFontAssetLookup
	HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 * ___k_SearchedFontAssetLookup_54;
	// System.Collections.Generic.List`1<TMPro.TMP_FontAsset> TMPro.TMP_FontAsset::k_FontAssets_FontFeaturesUpdateQueue
	List_1_tBE22F0B6C1EBDB760862FAD201AFE75E3DEBBBFD * ___k_FontAssets_FontFeaturesUpdateQueue_55;
	// System.Collections.Generic.HashSet`1<System.Int32> TMPro.TMP_FontAsset::k_FontAssets_FontFeaturesUpdateQueueLookup
	HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 * ___k_FontAssets_FontFeaturesUpdateQueueLookup_56;
	// System.Collections.Generic.List`1<TMPro.TMP_FontAsset> TMPro.TMP_FontAsset::k_FontAssets_AtlasTexturesUpdateQueue
	List_1_tBE22F0B6C1EBDB760862FAD201AFE75E3DEBBBFD * ___k_FontAssets_AtlasTexturesUpdateQueue_57;
	// System.Collections.Generic.HashSet`1<System.Int32> TMPro.TMP_FontAsset::k_FontAssets_AtlasTexturesUpdateQueueLookup
	HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 * ___k_FontAssets_AtlasTexturesUpdateQueueLookup_58;
	// System.UInt32[] TMPro.TMP_FontAsset::k_GlyphIndexArray
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___k_GlyphIndexArray_69;

public:
	inline static int32_t get_offset_of_k_ReadFontAssetDefinitionMarker_45() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2_StaticFields, ___k_ReadFontAssetDefinitionMarker_45)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_k_ReadFontAssetDefinitionMarker_45() const { return ___k_ReadFontAssetDefinitionMarker_45; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_k_ReadFontAssetDefinitionMarker_45() { return &___k_ReadFontAssetDefinitionMarker_45; }
	inline void set_k_ReadFontAssetDefinitionMarker_45(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___k_ReadFontAssetDefinitionMarker_45 = value;
	}

	inline static int32_t get_offset_of_k_AddSynthesizedCharactersMarker_46() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2_StaticFields, ___k_AddSynthesizedCharactersMarker_46)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_k_AddSynthesizedCharactersMarker_46() const { return ___k_AddSynthesizedCharactersMarker_46; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_k_AddSynthesizedCharactersMarker_46() { return &___k_AddSynthesizedCharactersMarker_46; }
	inline void set_k_AddSynthesizedCharactersMarker_46(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___k_AddSynthesizedCharactersMarker_46 = value;
	}

	inline static int32_t get_offset_of_k_TryAddCharacterMarker_47() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2_StaticFields, ___k_TryAddCharacterMarker_47)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_k_TryAddCharacterMarker_47() const { return ___k_TryAddCharacterMarker_47; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_k_TryAddCharacterMarker_47() { return &___k_TryAddCharacterMarker_47; }
	inline void set_k_TryAddCharacterMarker_47(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___k_TryAddCharacterMarker_47 = value;
	}

	inline static int32_t get_offset_of_k_TryAddCharactersMarker_48() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2_StaticFields, ___k_TryAddCharactersMarker_48)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_k_TryAddCharactersMarker_48() const { return ___k_TryAddCharactersMarker_48; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_k_TryAddCharactersMarker_48() { return &___k_TryAddCharactersMarker_48; }
	inline void set_k_TryAddCharactersMarker_48(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___k_TryAddCharactersMarker_48 = value;
	}

	inline static int32_t get_offset_of_k_UpdateGlyphAdjustmentRecordsMarker_49() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2_StaticFields, ___k_UpdateGlyphAdjustmentRecordsMarker_49)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_k_UpdateGlyphAdjustmentRecordsMarker_49() const { return ___k_UpdateGlyphAdjustmentRecordsMarker_49; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_k_UpdateGlyphAdjustmentRecordsMarker_49() { return &___k_UpdateGlyphAdjustmentRecordsMarker_49; }
	inline void set_k_UpdateGlyphAdjustmentRecordsMarker_49(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___k_UpdateGlyphAdjustmentRecordsMarker_49 = value;
	}

	inline static int32_t get_offset_of_k_ClearFontAssetDataMarker_50() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2_StaticFields, ___k_ClearFontAssetDataMarker_50)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_k_ClearFontAssetDataMarker_50() const { return ___k_ClearFontAssetDataMarker_50; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_k_ClearFontAssetDataMarker_50() { return &___k_ClearFontAssetDataMarker_50; }
	inline void set_k_ClearFontAssetDataMarker_50(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___k_ClearFontAssetDataMarker_50 = value;
	}

	inline static int32_t get_offset_of_k_UpdateFontAssetDataMarker_51() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2_StaticFields, ___k_UpdateFontAssetDataMarker_51)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_k_UpdateFontAssetDataMarker_51() const { return ___k_UpdateFontAssetDataMarker_51; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_k_UpdateFontAssetDataMarker_51() { return &___k_UpdateFontAssetDataMarker_51; }
	inline void set_k_UpdateFontAssetDataMarker_51(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___k_UpdateFontAssetDataMarker_51 = value;
	}

	inline static int32_t get_offset_of_s_DefaultMaterialSuffix_52() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2_StaticFields, ___s_DefaultMaterialSuffix_52)); }
	inline String_t* get_s_DefaultMaterialSuffix_52() const { return ___s_DefaultMaterialSuffix_52; }
	inline String_t** get_address_of_s_DefaultMaterialSuffix_52() { return &___s_DefaultMaterialSuffix_52; }
	inline void set_s_DefaultMaterialSuffix_52(String_t* value)
	{
		___s_DefaultMaterialSuffix_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultMaterialSuffix_52), (void*)value);
	}

	inline static int32_t get_offset_of_k_SearchedFontAssetLookup_54() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2_StaticFields, ___k_SearchedFontAssetLookup_54)); }
	inline HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 * get_k_SearchedFontAssetLookup_54() const { return ___k_SearchedFontAssetLookup_54; }
	inline HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 ** get_address_of_k_SearchedFontAssetLookup_54() { return &___k_SearchedFontAssetLookup_54; }
	inline void set_k_SearchedFontAssetLookup_54(HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 * value)
	{
		___k_SearchedFontAssetLookup_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___k_SearchedFontAssetLookup_54), (void*)value);
	}

	inline static int32_t get_offset_of_k_FontAssets_FontFeaturesUpdateQueue_55() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2_StaticFields, ___k_FontAssets_FontFeaturesUpdateQueue_55)); }
	inline List_1_tBE22F0B6C1EBDB760862FAD201AFE75E3DEBBBFD * get_k_FontAssets_FontFeaturesUpdateQueue_55() const { return ___k_FontAssets_FontFeaturesUpdateQueue_55; }
	inline List_1_tBE22F0B6C1EBDB760862FAD201AFE75E3DEBBBFD ** get_address_of_k_FontAssets_FontFeaturesUpdateQueue_55() { return &___k_FontAssets_FontFeaturesUpdateQueue_55; }
	inline void set_k_FontAssets_FontFeaturesUpdateQueue_55(List_1_tBE22F0B6C1EBDB760862FAD201AFE75E3DEBBBFD * value)
	{
		___k_FontAssets_FontFeaturesUpdateQueue_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___k_FontAssets_FontFeaturesUpdateQueue_55), (void*)value);
	}

	inline static int32_t get_offset_of_k_FontAssets_FontFeaturesUpdateQueueLookup_56() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2_StaticFields, ___k_FontAssets_FontFeaturesUpdateQueueLookup_56)); }
	inline HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 * get_k_FontAssets_FontFeaturesUpdateQueueLookup_56() const { return ___k_FontAssets_FontFeaturesUpdateQueueLookup_56; }
	inline HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 ** get_address_of_k_FontAssets_FontFeaturesUpdateQueueLookup_56() { return &___k_FontAssets_FontFeaturesUpdateQueueLookup_56; }
	inline void set_k_FontAssets_FontFeaturesUpdateQueueLookup_56(HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 * value)
	{
		___k_FontAssets_FontFeaturesUpdateQueueLookup_56 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___k_FontAssets_FontFeaturesUpdateQueueLookup_56), (void*)value);
	}

	inline static int32_t get_offset_of_k_FontAssets_AtlasTexturesUpdateQueue_57() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2_StaticFields, ___k_FontAssets_AtlasTexturesUpdateQueue_57)); }
	inline List_1_tBE22F0B6C1EBDB760862FAD201AFE75E3DEBBBFD * get_k_FontAssets_AtlasTexturesUpdateQueue_57() const { return ___k_FontAssets_AtlasTexturesUpdateQueue_57; }
	inline List_1_tBE22F0B6C1EBDB760862FAD201AFE75E3DEBBBFD ** get_address_of_k_FontAssets_AtlasTexturesUpdateQueue_57() { return &___k_FontAssets_AtlasTexturesUpdateQueue_57; }
	inline void set_k_FontAssets_AtlasTexturesUpdateQueue_57(List_1_tBE22F0B6C1EBDB760862FAD201AFE75E3DEBBBFD * value)
	{
		___k_FontAssets_AtlasTexturesUpdateQueue_57 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___k_FontAssets_AtlasTexturesUpdateQueue_57), (void*)value);
	}

	inline static int32_t get_offset_of_k_FontAssets_AtlasTexturesUpdateQueueLookup_58() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2_StaticFields, ___k_FontAssets_AtlasTexturesUpdateQueueLookup_58)); }
	inline HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 * get_k_FontAssets_AtlasTexturesUpdateQueueLookup_58() const { return ___k_FontAssets_AtlasTexturesUpdateQueueLookup_58; }
	inline HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 ** get_address_of_k_FontAssets_AtlasTexturesUpdateQueueLookup_58() { return &___k_FontAssets_AtlasTexturesUpdateQueueLookup_58; }
	inline void set_k_FontAssets_AtlasTexturesUpdateQueueLookup_58(HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 * value)
	{
		___k_FontAssets_AtlasTexturesUpdateQueueLookup_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___k_FontAssets_AtlasTexturesUpdateQueueLookup_58), (void*)value);
	}

	inline static int32_t get_offset_of_k_GlyphIndexArray_69() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2_StaticFields, ___k_GlyphIndexArray_69)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_k_GlyphIndexArray_69() const { return ___k_GlyphIndexArray_69; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_k_GlyphIndexArray_69() { return &___k_GlyphIndexArray_69; }
	inline void set_k_GlyphIndexArray_69(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___k_GlyphIndexArray_69 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___k_GlyphIndexArray_69), (void*)value);
	}
};


// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable
struct XRBaseInteractable_t6D8F476542495E625DE6A3454D4BC9323B6EDCBF  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractableRegisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::registered
	Action_1_t9F32937D0483D7D5F5EE6D501C90EC8AD96A73BD * ___registered_4;
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractableUnregisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::unregistered
	Action_1_t093BAA55388BF4C1A03FA3625640C13B56C601AA * ___unregistered_5;
	// System.Func`3<UnityEngine.XR.Interaction.Toolkit.IXRInteractable,UnityEngine.Vector3,UnityEngine.XR.Interaction.Toolkit.DistanceInfo> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::<getDistanceOverride>k__BackingField
	Func_3_tC0D6CA7DF2D961F4198C83B60BDB01420D3CBB04 * ___U3CgetDistanceOverrideU3Ek__BackingField_6;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_InteractionManager
	XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4 * ___m_InteractionManager_7;
	// System.Collections.Generic.List`1<UnityEngine.Collider> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_Colliders
	List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B * ___m_Colliders_8;
	// UnityEngine.LayerMask UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_InteractionLayerMask
	LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___m_InteractionLayerMask_9;
	// UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_InteractionLayers
	InteractionLayerMask_t9AFE7E0AC5956A410A71C6C26CB6793B882C3D47  ___m_InteractionLayers_10;
	// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable/DistanceCalculationMode UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_DistanceCalculationMode
	int32_t ___m_DistanceCalculationMode_11;
	// UnityEngine.XR.Interaction.Toolkit.InteractableSelectMode UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_SelectMode
	int32_t ___m_SelectMode_12;
	// UnityEngine.GameObject UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_CustomReticle
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_CustomReticle_13;
	// UnityEngine.XR.Interaction.Toolkit.HoverEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_FirstHoverEntered
	HoverEnterEvent_t0CC8E826E7F14B3A2B7A343424C3533BFCE32FC6 * ___m_FirstHoverEntered_14;
	// UnityEngine.XR.Interaction.Toolkit.HoverExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_LastHoverExited
	HoverExitEvent_tAAF1D57BA8CEBA5B39F1409EBD6978CE06A5B341 * ___m_LastHoverExited_15;
	// UnityEngine.XR.Interaction.Toolkit.HoverEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_HoverEntered
	HoverEnterEvent_t0CC8E826E7F14B3A2B7A343424C3533BFCE32FC6 * ___m_HoverEntered_16;
	// UnityEngine.XR.Interaction.Toolkit.HoverExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_HoverExited
	HoverExitEvent_tAAF1D57BA8CEBA5B39F1409EBD6978CE06A5B341 * ___m_HoverExited_17;
	// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_FirstSelectEntered
	SelectEnterEvent_t147569BD69EAD584499BE2FC174458E3150C5918 * ___m_FirstSelectEntered_18;
	// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_LastSelectExited
	SelectExitEvent_t8A19A5E960E731FDA7BC2509D96527199FDA57F8 * ___m_LastSelectExited_19;
	// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_SelectEntered
	SelectEnterEvent_t147569BD69EAD584499BE2FC174458E3150C5918 * ___m_SelectEntered_20;
	// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_SelectExited
	SelectExitEvent_t8A19A5E960E731FDA7BC2509D96527199FDA57F8 * ___m_SelectExited_21;
	// UnityEngine.XR.Interaction.Toolkit.ActivateEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_Activated
	ActivateEvent_tA788B1E186D477BA625450B006EA76D0370B0C7F * ___m_Activated_22;
	// UnityEngine.XR.Interaction.Toolkit.DeactivateEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_Deactivated
	DeactivateEvent_t587971B94B6589C04E9D72515DF079C1EE91DB3C * ___m_Deactivated_23;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::<interactorsHovering>k__BackingField
	List_1_t8F5833796A8407AFD49E7C1864E6E76653D3F2C4 * ___U3CinteractorsHoveringU3Ek__BackingField_24;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::<interactorsSelecting>k__BackingField
	List_1_tCCED540317FA295CA1BAEBCCD4362DE7EFFB64FD * ___U3CinteractorsSelectingU3Ek__BackingField_25;
	// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::<firstInteractorSelecting>k__BackingField
	RuntimeObject* ___U3CfirstInteractorSelectingU3Ek__BackingField_26;
	// System.Collections.Generic.List`1<UnityEngine.Object> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_StartingHoverFilters
	List_1_t9D216521E6A213FF8562D215598D336ABB5474F4 * ___m_StartingHoverFilters_27;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRHoverFilter> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_HoverFilters
	ExposedRegistrationList_1_t5ECEBE78A1A1B74E793C57E99502825849754A91 * ___m_HoverFilters_28;
	// System.Collections.Generic.List`1<UnityEngine.Object> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_StartingSelectFilters
	List_1_t9D216521E6A213FF8562D215598D336ABB5474F4 * ___m_StartingSelectFilters_29;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRSelectFilter> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_SelectFilters
	ExposedRegistrationList_1_t2925F032505D027FCBA7F35721D8B3461BE44E08 * ___m_SelectFilters_30;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor,UnityEngine.Pose> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_AttachPoseOnSelect
	Dictionary_2_tA3135A847BDD5B3E11304035C508DFB9DE47F8CC * ___m_AttachPoseOnSelect_31;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor,UnityEngine.Pose> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_LocalAttachPoseOnSelect
	Dictionary_2_tA3135A847BDD5B3E11304035C508DFB9DE47F8CC * ___m_LocalAttachPoseOnSelect_32;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRInteractor,UnityEngine.GameObject> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_ReticleCache
	Dictionary_2_tA69FF83EA17DA0267E4A9ADE6AFF4334D537FBD8 * ___m_ReticleCache_33;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_RegisteredInteractionManager
	XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4 * ___m_RegisteredInteractionManager_34;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnFirstHoverEntered
	XRInteractableEvent_tD08962B410D993D428BA0CDF9D1AD5273AEA53DD * ___m_OnFirstHoverEntered_36;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnLastHoverExited
	XRInteractableEvent_tD08962B410D993D428BA0CDF9D1AD5273AEA53DD * ___m_OnLastHoverExited_37;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnHoverEntered
	XRInteractableEvent_tD08962B410D993D428BA0CDF9D1AD5273AEA53DD * ___m_OnHoverEntered_38;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnHoverExited
	XRInteractableEvent_tD08962B410D993D428BA0CDF9D1AD5273AEA53DD * ___m_OnHoverExited_39;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnSelectEntered
	XRInteractableEvent_tD08962B410D993D428BA0CDF9D1AD5273AEA53DD * ___m_OnSelectEntered_40;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnSelectExited
	XRInteractableEvent_tD08962B410D993D428BA0CDF9D1AD5273AEA53DD * ___m_OnSelectExited_41;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnSelectCanceled
	XRInteractableEvent_tD08962B410D993D428BA0CDF9D1AD5273AEA53DD * ___m_OnSelectCanceled_42;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnActivate
	XRInteractableEvent_tD08962B410D993D428BA0CDF9D1AD5273AEA53DD * ___m_OnActivate_43;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnDeactivate
	XRInteractableEvent_tD08962B410D993D428BA0CDF9D1AD5273AEA53DD * ___m_OnDeactivate_44;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::<hoveringInteractors>k__BackingField
	List_1_tEF7E6AA6FF2A58B22A1943486BE24649DC3CC2AC * ___U3ChoveringInteractorsU3Ek__BackingField_45;

public:
	inline static int32_t get_offset_of_registered_4() { return static_cast<int32_t>(offsetof(XRBaseInteractable_t6D8F476542495E625DE6A3454D4BC9323B6EDCBF, ___registered_4)); }
	inline Action_1_t9F32937D0483D7D5F5EE6D501C90EC8AD96A73BD * get_registered_4() const { return ___registered_4; }
	inline Action_1_t9F32937D0483D7D5F5EE6D501C90EC8AD96A73BD ** get_address_of_registered_4() { return &___registered_4; }
	inline void set_registered_4(Action_1_t9F32937D0483D7D5F5EE6D501C90EC8AD96A73BD * value)
	{
		___registered_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___registered_4), (void*)value);
	}

	inline static int32_t get_offset_of_unregistered_5() { return static_cast<int32_t>(offsetof(XRBaseInteractable_t6D8F476542495E625DE6A3454D4BC9323B6EDCBF, ___unregistered_5)); }
	inline Action_1_t093BAA55388BF4C1A03FA3625640C13B56C601AA * get_unregistered_5() const { return ___unregistered_5; }
	inline Action_1_t093BAA55388BF4C1A03FA3625640C13B56C601AA ** get_address_of_unregistered_5() { return &___unregistered_5; }
	inline void set_unregistered_5(Action_1_t093BAA55388BF4C1A03FA3625640C13B56C601AA * value)
	{
		___unregistered_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unregistered_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CgetDistanceOverrideU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(XRBaseInteractable_t6D8F476542495E625DE6A3454D4BC9323B6EDCBF, ___U3CgetDistanceOverrideU3Ek__BackingField_6)); }
	inline Func_3_tC0D6CA7DF2D961F4198C83B60BDB01420D3CBB04 * get_U3CgetDistanceOverrideU3Ek__BackingField_6() const { return ___U3CgetDistanceOverrideU3Ek__BackingField_6; }
	inline Func_3_tC0D6CA7DF2D961F4198C83B60BDB01420D3CBB04 ** get_address_of_U3CgetDistanceOverrideU3Ek__BackingField_6() { return &___U3CgetDistanceOverrideU3Ek__BackingField_6; }
	inline void set_U3CgetDistanceOverrideU3Ek__BackingField_6(Func_3_tC0D6CA7DF2D961F4198C83B60BDB01420D3CBB04 * value)
	{
		___U3CgetDistanceOverrideU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CgetDistanceOverrideU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_InteractionManager_7() { return static_cast<int32_t>(offsetof(XRBaseInteractable_t6D8F476542495E625DE6A3454D4BC9323B6EDCBF, ___m_InteractionManager_7)); }
	inline XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4 * get_m_InteractionManager_7() const { return ___m_InteractionManager_7; }
	inline XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4 ** get_address_of_m_InteractionManager_7() { return &___m_InteractionManager_7; }
	inline void set_m_InteractionManager_7(XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4 * value)
	{
		___m_InteractionManager_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InteractionManager_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_Colliders_8() { return static_cast<int32_t>(offsetof(XRBaseInteractable_t6D8F476542495E625DE6A3454D4BC9323B6EDCBF, ___m_Colliders_8)); }
	inline List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B * get_m_Colliders_8() const { return ___m_Colliders_8; }
	inline List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B ** get_address_of_m_Colliders_8() { return &___m_Colliders_8; }
	inline void set_m_Colliders_8(List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B * value)
	{
		___m_Colliders_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Colliders_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_InteractionLayerMask_9() { return static_cast<int32_t>(offsetof(XRBaseInteractable_t6D8F476542495E625DE6A3454D4BC9323B6EDCBF, ___m_InteractionLayerMask_9)); }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  get_m_InteractionLayerMask_9() const { return ___m_InteractionLayerMask_9; }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * get_address_of_m_InteractionLayerMask_9() { return &___m_InteractionLayerMask_9; }
	inline void set_m_InteractionLayerMask_9(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  value)
	{
		___m_InteractionLayerMask_9 = value;
	}

	inline static int32_t get_offset_of_m_InteractionLayers_10() { return static_cast<int32_t>(offsetof(XRBaseInteractable_t6D8F476542495E625DE6A3454D4BC9323B6EDCBF, ___m_InteractionLayers_10)); }
	inline InteractionLayerMask_t9AFE7E0AC5956A410A71C6C26CB6793B882C3D47  get_m_InteractionLayers_10() const { return ___m_InteractionLayers_10; }
	inline InteractionLayerMask_t9AFE7E0AC5956A410A71C6C26CB6793B882C3D47 * get_address_of_m_InteractionLayers_10() { return &___m_InteractionLayers_10; }
	inline void set_m_InteractionLayers_10(InteractionLayerMask_t9AFE7E0AC5956A410A71C6C26CB6793B882C3D47  value)
	{
		___m_InteractionLayers_10 = value;
	}

	inline static int32_t get_offset_of_m_DistanceCalculationMode_11() { return static_cast<int32_t>(offsetof(XRBaseInteractable_t6D8F476542495E625DE6A3454D4BC9323B6EDCBF, ___m_DistanceCalculationMode_11)); }
	inline int32_t get_m_DistanceCalculationMode_11() const { return ___m_DistanceCalculationMode_11; }
	inline int32_t* get_address_of_m_DistanceCalculationMode_11() { return &___m_DistanceCalculationMode_11; }
	inline void set_m_DistanceCalculationMode_11(int32_t value)
	{
		___m_DistanceCalculationMode_11 = value;
	}

	inline static int32_t get_offset_of_m_SelectMode_12() { return static_cast<int32_t>(offsetof(XRBaseInteractable_t6D8F476542495E625DE6A3454D4BC9323B6EDCBF, ___m_SelectMode_12)); }
	inline int32_t get_m_SelectMode_12() const { return ___m_SelectMode_12; }
	inline int32_t* get_address_of_m_SelectMode_12() { return &___m_SelectMode_12; }
	inline void set_m_SelectMode_12(int32_t value)
	{
		___m_SelectMode_12 = value;
	}

	inline static int32_t get_offset_of_m_CustomReticle_13() { return static_cast<int32_t>(offsetof(XRBaseInteractable_t6D8F476542495E625DE6A3454D4BC9323B6EDCBF, ___m_CustomReticle_13)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_CustomReticle_13() const { return ___m_CustomReticle_13; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_CustomReticle_13() { return &___m_CustomReticle_13; }
	inline void set_m_CustomReticle_13(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_CustomReticle_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CustomReticle_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_FirstHoverEntered_14() { return static_cast<int32_t>(offsetof(XRBaseInteractable_t6D8F476542495E625DE6A3454D4BC9323B6EDCBF, ___m_FirstHoverEntered_14)); }
	inline HoverEnterEvent_t0CC8E826E7F14B3A2B7A343424C3533BFCE32FC6 * get_m_FirstHoverEntered_14() const { return ___m_FirstHoverEntered_14; }
	inline HoverEnterEvent_t0CC8E826E7F14B3A2B7A343424C3533BFCE32FC6 ** get_address_of_m_FirstHoverEntered_14() { return &___m_FirstHoverEntered_14; }
	inline void set_m_FirstHoverEntered_14(HoverEnterEvent_t0CC8E826E7F14B3A2B7A343424C3533BFCE32FC6 * value)
	{
		___m_FirstHoverEntered_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FirstHoverEntered_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_LastHoverExited_15() { return static_cast<int32_t>(offsetof(XRBaseInteractable_t6D8F476542495E625DE6A3454D4BC9323B6EDCBF, ___m_LastHoverExited_15)); }
	inline HoverExitEvent_tAAF1D57BA8CEBA5B39F1409EBD6978CE06A5B341 * get_m_LastHoverExited_15() const { return ___m_LastHoverExited_15; }
	inline HoverExitEvent_tAAF1D57BA8CEBA5B39F1409EBD6978CE06A5B341 ** get_address_of_m_LastHoverExited_15() { return &___m_LastHoverExited_15; }
	inline void set_m_LastHoverExited_15(HoverExitEvent_tAAF1D57BA8CEBA5B39F1409EBD6978CE06A5B341 * value)
	{
		___m_LastHoverExited_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LastHoverExited_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_HoverEntered_16() { return static_cast<int32_t>(offsetof(XRBaseInteractable_t6D8F476542495E625DE6A3454D4BC9323B6EDCBF, ___m_HoverEntered_16)); }
	inline HoverEnterEvent_t0CC8E826E7F14B3A2B7A343424C3533BFCE32FC6 * get_m_HoverEntered_16() const { return ___m_HoverEntered_16; }
	inline HoverEnterEvent_t0CC8E826E7F14B3A2B7A343424C3533BFCE32FC6 ** get_address_of_m_HoverEntered_16() { return &___m_HoverEntered_16; }
	inline void set_m_HoverEntered_16(HoverEnterEvent_t0CC8E826E7F14B3A2B7A343424C3533BFCE32FC6 * value)
	{
		___m_HoverEntered_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HoverEntered_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_HoverExited_17() { return static_cast<int32_t>(offsetof(XRBaseInteractable_t6D8F476542495E625DE6A3454D4BC9323B6EDCBF, ___m_HoverExited_17)); }
	inline HoverExitEvent_tAAF1D57BA8CEBA5B39F1409EBD6978CE06A5B341 * get_m_HoverExited_17() const { return ___m_HoverExited_17; }
	inline HoverExitEvent_tAAF1D57BA8CEBA5B39F1409EBD6978CE06A5B341 ** get_address_of_m_HoverExited_17() { return &___m_HoverExited_17; }
	inline void set_m_HoverExited_17(HoverExitEvent_tAAF1D57BA8CEBA5B39F1409EBD6978CE06A5B341 * value)
	{
		___m_HoverExited_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HoverExited_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_FirstSelectEntered_18() { return static_cast<int32_t>(offsetof(XRBaseInteractable_t6D8F476542495E625DE6A3454D4BC9323B6EDCBF, ___m_FirstSelectEntered_18)); }
	inline SelectEnterEvent_t147569BD69EAD584499BE2FC174458E3150C5918 * get_m_FirstSelectEntered_18() const { return ___m_FirstSelectEntered_18; }
	inline SelectEnterEvent_t147569BD69EAD584499BE2FC174458E3150C5918 ** get_address_of_m_FirstSelectEntered_18() { return &___m_FirstSelectEntered_18; }
	inline void set_m_FirstSelectEntered_18(SelectEnterEvent_t147569BD69EAD584499BE2FC174458E3150C5918 * value)
	{
		___m_FirstSelectEntered_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FirstSelectEntered_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_LastSelectExited_19() { return static_cast<int32_t>(offsetof(XRBaseInteractable_t6D8F476542495E625DE6A3454D4BC9323B6EDCBF, ___m_LastSelectExited_19)); }
	inline SelectExitEvent_t8A19A5E960E731FDA7BC2509D96527199FDA57F8 * get_m_LastSelectExited_19() const { return ___m_LastSelectExited_19; }
	inline SelectExitEvent_t8A19A5E960E731FDA7BC2509D96527199FDA57F8 ** get_address_of_m_LastSelectExited_19() { return &___m_LastSelectExited_19; }
	inline void set_m_LastSelectExited_19(SelectExitEvent_t8A19A5E960E731FDA7BC2509D96527199FDA57F8 * value)
	{
		___m_LastSelectExited_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LastSelectExited_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectEntered_20() { return static_cast<int32_t>(offsetof(XRBaseInteractable_t6D8F476542495E625DE6A3454D4BC9323B6EDCBF, ___m_SelectEntered_20)); }
	inline SelectEnterEvent_t147569BD69EAD584499BE2FC174458E3150C5918 * get_m_SelectEntered_20() const { return ___m_SelectEntered_20; }
	inline SelectEnterEvent_t147569BD69EAD584499BE2FC174458E3150C5918 ** get_address_of_m_SelectEntered_20() { return &___m_SelectEntered_20; }
	inline void set_m_SelectEntered_20(SelectEnterEvent_t147569BD69EAD584499BE2FC174458E3150C5918 * value)
	{
		___m_SelectEntered_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectEntered_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectExited_21() { return static_cast<int32_t>(offsetof(XRBaseInteractable_t6D8F476542495E625DE6A3454D4BC9323B6EDCBF, ___m_SelectExited_21)); }
	inline SelectExitEvent_t8A19A5E960E731FDA7BC2509D96527199FDA57F8 * get_m_SelectExited_21() const { return ___m_SelectExited_21; }
	inline SelectExitEvent_t8A19A5E960E731FDA7BC2509D96527199FDA57F8 ** get_address_of_m_SelectExited_21() { return &___m_SelectExited_21; }
	inline void set_m_SelectExited_21(SelectExitEvent_t8A19A5E960E731FDA7BC2509D96527199FDA57F8 * value)
	{
		___m_SelectExited_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectExited_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_Activated_22() { return static_cast<int32_t>(offsetof(XRBaseInteractable_t6D8F476542495E625DE6A3454D4BC9323B6EDCBF, ___m_Activated_22)); }
	inline ActivateEvent_tA788B1E186D477BA625450B006EA76D0370B0C7F * get_m_Activated_22() const { return ___m_Activated_22; }
	inline ActivateEvent_tA788B1E186D477BA625450B006EA76D0370B0C7F ** get_address_of_m_Activated_22() { return &___m_Activated_22; }
	inline void set_m_Activated_22(ActivateEvent_tA788B1E186D477BA625450B006EA76D0370B0C7F * value)
	{
		___m_Activated_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Activated_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_Deactivated_23() { return static_cast<int32_t>(offsetof(XRBaseInteractable_t6D8F476542495E625DE6A3454D4BC9323B6EDCBF, ___m_Deactivated_23)); }
	inline DeactivateEvent_t587971B94B6589C04E9D72515DF079C1EE91DB3C * get_m_Deactivated_23() const { return ___m_Deactivated_23; }
	inline DeactivateEvent_t587971B94B6589C04E9D72515DF079C1EE91DB3C ** get_address_of_m_Deactivated_23() { return &___m_Deactivated_23; }
	inline void set_m_Deactivated_23(DeactivateEvent_t587971B94B6589C04E9D72515DF079C1EE91DB3C * value)
	{
		___m_Deactivated_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Deactivated_23), (void*)value);
	}

	inline static int32_t get_offset_of_U3CinteractorsHoveringU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(XRBaseInteractable_t6D8F476542495E625DE6A3454D4BC9323B6EDCBF, ___U3CinteractorsHoveringU3Ek__BackingField_24)); }
	inline List_1_t8F5833796A8407AFD49E7C1864E6E76653D3F2C4 * get_U3CinteractorsHoveringU3Ek__BackingField_24() const { return ___U3CinteractorsHoveringU3Ek__BackingField_24; }
	inline List_1_t8F5833796A8407AFD49E7C1864E6E76653D3F2C4 ** get_address_of_U3CinteractorsHoveringU3Ek__BackingField_24() { return &___U3CinteractorsHoveringU3Ek__BackingField_24; }
	inline void set_U3CinteractorsHoveringU3Ek__BackingField_24(List_1_t8F5833796A8407AFD49E7C1864E6E76653D3F2C4 * value)
	{
		___U3CinteractorsHoveringU3Ek__BackingField_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CinteractorsHoveringU3Ek__BackingField_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CinteractorsSelectingU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(XRBaseInteractable_t6D8F476542495E625DE6A3454D4BC9323B6EDCBF, ___U3CinteractorsSelectingU3Ek__BackingField_25)); }
	inline List_1_tCCED540317FA295CA1BAEBCCD4362DE7EFFB64FD * get_U3CinteractorsSelectingU3Ek__BackingField_25() const { return ___U3CinteractorsSelectingU3Ek__BackingField_25; }
	inline List_1_tCCED540317FA295CA1BAEBCCD4362DE7EFFB64FD ** get_address_of_U3CinteractorsSelectingU3Ek__BackingField_25() { return &___U3CinteractorsSelectingU3Ek__BackingField_25; }
	inline void set_U3CinteractorsSelectingU3Ek__BackingField_25(List_1_tCCED540317FA295CA1BAEBCCD4362DE7EFFB64FD * value)
	{
		___U3CinteractorsSelectingU3Ek__BackingField_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CinteractorsSelectingU3Ek__BackingField_25), (void*)value);
	}

	inline static int32_t get_offset_of_U3CfirstInteractorSelectingU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(XRBaseInteractable_t6D8F476542495E625DE6A3454D4BC9323B6EDCBF, ___U3CfirstInteractorSelectingU3Ek__BackingField_26)); }
	inline RuntimeObject* get_U3CfirstInteractorSelectingU3Ek__BackingField_26() const { return ___U3CfirstInteractorSelectingU3Ek__BackingField_26; }
	inline RuntimeObject** get_address_of_U3CfirstInteractorSelectingU3Ek__BackingField_26() { return &___U3CfirstInteractorSelectingU3Ek__BackingField_26; }
	inline void set_U3CfirstInteractorSelectingU3Ek__BackingField_26(RuntimeObject* value)
	{
		___U3CfirstInteractorSelectingU3Ek__BackingField_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CfirstInteractorSelectingU3Ek__BackingField_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_StartingHoverFilters_27() { return static_cast<int32_t>(offsetof(XRBaseInteractable_t6D8F476542495E625DE6A3454D4BC9323B6EDCBF, ___m_StartingHoverFilters_27)); }
	inline List_1_t9D216521E6A213FF8562D215598D336ABB5474F4 * get_m_StartingHoverFilters_27() const { return ___m_StartingHoverFilters_27; }
	inline List_1_t9D216521E6A213FF8562D215598D336ABB5474F4 ** get_address_of_m_StartingHoverFilters_27() { return &___m_StartingHoverFilters_27; }
	inline void set_m_StartingHoverFilters_27(List_1_t9D216521E6A213FF8562D215598D336ABB5474F4 * value)
	{
		___m_StartingHoverFilters_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StartingHoverFilters_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_HoverFilters_28() { return static_cast<int32_t>(offsetof(XRBaseInteractable_t6D8F476542495E625DE6A3454D4BC9323B6EDCBF, ___m_HoverFilters_28)); }
	inline ExposedRegistrationList_1_t5ECEBE78A1A1B74E793C57E99502825849754A91 * get_m_HoverFilters_28() const { return ___m_HoverFilters_28; }
	inline ExposedRegistrationList_1_t5ECEBE78A1A1B74E793C57E99502825849754A91 ** get_address_of_m_HoverFilters_28() { return &___m_HoverFilters_28; }
	inline void set_m_HoverFilters_28(ExposedRegistrationList_1_t5ECEBE78A1A1B74E793C57E99502825849754A91 * value)
	{
		___m_HoverFilters_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HoverFilters_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_StartingSelectFilters_29() { return static_cast<int32_t>(offsetof(XRBaseInteractable_t6D8F476542495E625DE6A3454D4BC9323B6EDCBF, ___m_StartingSelectFilters_29)); }
	inline List_1_t9D216521E6A213FF8562D215598D336ABB5474F4 * get_m_StartingSelectFilters_29() const { return ___m_StartingSelectFilters_29; }
	inline List_1_t9D216521E6A213FF8562D215598D336ABB5474F4 ** get_address_of_m_StartingSelectFilters_29() { return &___m_StartingSelectFilters_29; }
	inline void set_m_StartingSelectFilters_29(List_1_t9D216521E6A213FF8562D215598D336ABB5474F4 * value)
	{
		___m_StartingSelectFilters_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StartingSelectFilters_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectFilters_30() { return static_cast<int32_t>(offsetof(XRBaseInteractable_t6D8F476542495E625DE6A3454D4BC9323B6EDCBF, ___m_SelectFilters_30)); }
	inline ExposedRegistrationList_1_t2925F032505D027FCBA7F35721D8B3461BE44E08 * get_m_SelectFilters_30() const { return ___m_SelectFilters_30; }
	inline ExposedRegistrationList_1_t2925F032505D027FCBA7F35721D8B3461BE44E08 ** get_address_of_m_SelectFilters_30() { return &___m_SelectFilters_30; }
	inline void set_m_SelectFilters_30(ExposedRegistrationList_1_t2925F032505D027FCBA7F35721D8B3461BE44E08 * value)
	{
		___m_SelectFilters_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectFilters_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_AttachPoseOnSelect_31() { return static_cast<int32_t>(offsetof(XRBaseInteractable_t6D8F476542495E625DE6A3454D4BC9323B6EDCBF, ___m_AttachPoseOnSelect_31)); }
	inline Dictionary_2_tA3135A847BDD5B3E11304035C508DFB9DE47F8CC * get_m_AttachPoseOnSelect_31() const { return ___m_AttachPoseOnSelect_31; }
	inline Dictionary_2_tA3135A847BDD5B3E11304035C508DFB9DE47F8CC ** get_address_of_m_AttachPoseOnSelect_31() { return &___m_AttachPoseOnSelect_31; }
	inline void set_m_AttachPoseOnSelect_31(Dictionary_2_tA3135A847BDD5B3E11304035C508DFB9DE47F8CC * value)
	{
		___m_AttachPoseOnSelect_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AttachPoseOnSelect_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_LocalAttachPoseOnSelect_32() { return static_cast<int32_t>(offsetof(XRBaseInteractable_t6D8F476542495E625DE6A3454D4BC9323B6EDCBF, ___m_LocalAttachPoseOnSelect_32)); }
	inline Dictionary_2_tA3135A847BDD5B3E11304035C508DFB9DE47F8CC * get_m_LocalAttachPoseOnSelect_32() const { return ___m_LocalAttachPoseOnSelect_32; }
	inline Dictionary_2_tA3135A847BDD5B3E11304035C508DFB9DE47F8CC ** get_address_of_m_LocalAttachPoseOnSelect_32() { return &___m_LocalAttachPoseOnSelect_32; }
	inline void set_m_LocalAttachPoseOnSelect_32(Dictionary_2_tA3135A847BDD5B3E11304035C508DFB9DE47F8CC * value)
	{
		___m_LocalAttachPoseOnSelect_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LocalAttachPoseOnSelect_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ReticleCache_33() { return static_cast<int32_t>(offsetof(XRBaseInteractable_t6D8F476542495E625DE6A3454D4BC9323B6EDCBF, ___m_ReticleCache_33)); }
	inline Dictionary_2_tA69FF83EA17DA0267E4A9ADE6AFF4334D537FBD8 * get_m_ReticleCache_33() const { return ___m_ReticleCache_33; }
	inline Dictionary_2_tA69FF83EA17DA0267E4A9ADE6AFF4334D537FBD8 ** get_address_of_m_ReticleCache_33() { return &___m_ReticleCache_33; }
	inline void set_m_ReticleCache_33(Dictionary_2_tA69FF83EA17DA0267E4A9ADE6AFF4334D537FBD8 * value)
	{
		___m_ReticleCache_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ReticleCache_33), (void*)value);
	}

	inline static int32_t get_offset_of_m_RegisteredInteractionManager_34() { return static_cast<int32_t>(offsetof(XRBaseInteractable_t6D8F476542495E625DE6A3454D4BC9323B6EDCBF, ___m_RegisteredInteractionManager_34)); }
	inline XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4 * get_m_RegisteredInteractionManager_34() const { return ___m_RegisteredInteractionManager_34; }
	inline XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4 ** get_address_of_m_RegisteredInteractionManager_34() { return &___m_RegisteredInteractionManager_34; }
	inline void set_m_RegisteredInteractionManager_34(XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4 * value)
	{
		___m_RegisteredInteractionManager_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RegisteredInteractionManager_34), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnFirstHoverEntered_36() { return static_cast<int32_t>(offsetof(XRBaseInteractable_t6D8F476542495E625DE6A3454D4BC9323B6EDCBF, ___m_OnFirstHoverEntered_36)); }
	inline XRInteractableEvent_tD08962B410D993D428BA0CDF9D1AD5273AEA53DD * get_m_OnFirstHoverEntered_36() const { return ___m_OnFirstHoverEntered_36; }
	inline XRInteractableEvent_tD08962B410D993D428BA0CDF9D1AD5273AEA53DD ** get_address_of_m_OnFirstHoverEntered_36() { return &___m_OnFirstHoverEntered_36; }
	inline void set_m_OnFirstHoverEntered_36(XRInteractableEvent_tD08962B410D993D428BA0CDF9D1AD5273AEA53DD * value)
	{
		___m_OnFirstHoverEntered_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnFirstHoverEntered_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnLastHoverExited_37() { return static_cast<int32_t>(offsetof(XRBaseInteractable_t6D8F476542495E625DE6A3454D4BC9323B6EDCBF, ___m_OnLastHoverExited_37)); }
	inline XRInteractableEvent_tD08962B410D993D428BA0CDF9D1AD5273AEA53DD * get_m_OnLastHoverExited_37() const { return ___m_OnLastHoverExited_37; }
	inline XRInteractableEvent_tD08962B410D993D428BA0CDF9D1AD5273AEA53DD ** get_address_of_m_OnLastHoverExited_37() { return &___m_OnLastHoverExited_37; }
	inline void set_m_OnLastHoverExited_37(XRInteractableEvent_tD08962B410D993D428BA0CDF9D1AD5273AEA53DD * value)
	{
		___m_OnLastHoverExited_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnLastHoverExited_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnHoverEntered_38() { return static_cast<int32_t>(offsetof(XRBaseInteractable_t6D8F476542495E625DE6A3454D4BC9323B6EDCBF, ___m_OnHoverEntered_38)); }
	inline XRInteractableEvent_tD08962B410D993D428BA0CDF9D1AD5273AEA53DD * get_m_OnHoverEntered_38() const { return ___m_OnHoverEntered_38; }
	inline XRInteractableEvent_tD08962B410D993D428BA0CDF9D1AD5273AEA53DD ** get_address_of_m_OnHoverEntered_38() { return &___m_OnHoverEntered_38; }
	inline void set_m_OnHoverEntered_38(XRInteractableEvent_tD08962B410D993D428BA0CDF9D1AD5273AEA53DD * value)
	{
		___m_OnHoverEntered_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnHoverEntered_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnHoverExited_39() { return static_cast<int32_t>(offsetof(XRBaseInteractable_t6D8F476542495E625DE6A3454D4BC9323B6EDCBF, ___m_OnHoverExited_39)); }
	inline XRInteractableEvent_tD08962B410D993D428BA0CDF9D1AD5273AEA53DD * get_m_OnHoverExited_39() const { return ___m_OnHoverExited_39; }
	inline XRInteractableEvent_tD08962B410D993D428BA0CDF9D1AD5273AEA53DD ** get_address_of_m_OnHoverExited_39() { return &___m_OnHoverExited_39; }
	inline void set_m_OnHoverExited_39(XRInteractableEvent_tD08962B410D993D428BA0CDF9D1AD5273AEA53DD * value)
	{
		___m_OnHoverExited_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnHoverExited_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnSelectEntered_40() { return static_cast<int32_t>(offsetof(XRBaseInteractable_t6D8F476542495E625DE6A3454D4BC9323B6EDCBF, ___m_OnSelectEntered_40)); }
	inline XRInteractableEvent_tD08962B410D993D428BA0CDF9D1AD5273AEA53DD * get_m_OnSelectEntered_40() const { return ___m_OnSelectEntered_40; }
	inline XRInteractableEvent_tD08962B410D993D428BA0CDF9D1AD5273AEA53DD ** get_address_of_m_OnSelectEntered_40() { return &___m_OnSelectEntered_40; }
	inline void set_m_OnSelectEntered_40(XRInteractableEvent_tD08962B410D993D428BA0CDF9D1AD5273AEA53DD * value)
	{
		___m_OnSelectEntered_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnSelectEntered_40), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnSelectExited_41() { return static_cast<int32_t>(offsetof(XRBaseInteractable_t6D8F476542495E625DE6A3454D4BC9323B6EDCBF, ___m_OnSelectExited_41)); }
	inline XRInteractableEvent_tD08962B410D993D428BA0CDF9D1AD5273AEA53DD * get_m_OnSelectExited_41() const { return ___m_OnSelectExited_41; }
	inline XRInteractableEvent_tD08962B410D993D428BA0CDF9D1AD5273AEA53DD ** get_address_of_m_OnSelectExited_41() { return &___m_OnSelectExited_41; }
	inline void set_m_OnSelectExited_41(XRInteractableEvent_tD08962B410D993D428BA0CDF9D1AD5273AEA53DD * value)
	{
		___m_OnSelectExited_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnSelectExited_41), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnSelectCanceled_42() { return static_cast<int32_t>(offsetof(XRBaseInteractable_t6D8F476542495E625DE6A3454D4BC9323B6EDCBF, ___m_OnSelectCanceled_42)); }
	inline XRInteractableEvent_tD08962B410D993D428BA0CDF9D1AD5273AEA53DD * get_m_OnSelectCanceled_42() const { return ___m_OnSelectCanceled_42; }
	inline XRInteractableEvent_tD08962B410D993D428BA0CDF9D1AD5273AEA53DD ** get_address_of_m_OnSelectCanceled_42() { return &___m_OnSelectCanceled_42; }
	inline void set_m_OnSelectCanceled_42(XRInteractableEvent_tD08962B410D993D428BA0CDF9D1AD5273AEA53DD * value)
	{
		___m_OnSelectCanceled_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnSelectCanceled_42), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnActivate_43() { return static_cast<int32_t>(offsetof(XRBaseInteractable_t6D8F476542495E625DE6A3454D4BC9323B6EDCBF, ___m_OnActivate_43)); }
	inline XRInteractableEvent_tD08962B410D993D428BA0CDF9D1AD5273AEA53DD * get_m_OnActivate_43() const { return ___m_OnActivate_43; }
	inline XRInteractableEvent_tD08962B410D993D428BA0CDF9D1AD5273AEA53DD ** get_address_of_m_OnActivate_43() { return &___m_OnActivate_43; }
	inline void set_m_OnActivate_43(XRInteractableEvent_tD08962B410D993D428BA0CDF9D1AD5273AEA53DD * value)
	{
		___m_OnActivate_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnActivate_43), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDeactivate_44() { return static_cast<int32_t>(offsetof(XRBaseInteractable_t6D8F476542495E625DE6A3454D4BC9323B6EDCBF, ___m_OnDeactivate_44)); }
	inline XRInteractableEvent_tD08962B410D993D428BA0CDF9D1AD5273AEA53DD * get_m_OnDeactivate_44() const { return ___m_OnDeactivate_44; }
	inline XRInteractableEvent_tD08962B410D993D428BA0CDF9D1AD5273AEA53DD ** get_address_of_m_OnDeactivate_44() { return &___m_OnDeactivate_44; }
	inline void set_m_OnDeactivate_44(XRInteractableEvent_tD08962B410D993D428BA0CDF9D1AD5273AEA53DD * value)
	{
		___m_OnDeactivate_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDeactivate_44), (void*)value);
	}

	inline static int32_t get_offset_of_U3ChoveringInteractorsU3Ek__BackingField_45() { return static_cast<int32_t>(offsetof(XRBaseInteractable_t6D8F476542495E625DE6A3454D4BC9323B6EDCBF, ___U3ChoveringInteractorsU3Ek__BackingField_45)); }
	inline List_1_tEF7E6AA6FF2A58B22A1943486BE24649DC3CC2AC * get_U3ChoveringInteractorsU3Ek__BackingField_45() const { return ___U3ChoveringInteractorsU3Ek__BackingField_45; }
	inline List_1_tEF7E6AA6FF2A58B22A1943486BE24649DC3CC2AC ** get_address_of_U3ChoveringInteractorsU3Ek__BackingField_45() { return &___U3ChoveringInteractorsU3Ek__BackingField_45; }
	inline void set_U3ChoveringInteractorsU3Ek__BackingField_45(List_1_tEF7E6AA6FF2A58B22A1943486BE24649DC3CC2AC * value)
	{
		___U3ChoveringInteractorsU3Ek__BackingField_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ChoveringInteractorsU3Ek__BackingField_45), (void*)value);
	}
};

struct XRBaseInteractable_t6D8F476542495E625DE6A3454D4BC9323B6EDCBF_StaticFields
{
public:
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::s_InteractionManagerCache
	XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4 * ___s_InteractionManagerCache_35;

public:
	inline static int32_t get_offset_of_s_InteractionManagerCache_35() { return static_cast<int32_t>(offsetof(XRBaseInteractable_t6D8F476542495E625DE6A3454D4BC9323B6EDCBF_StaticFields, ___s_InteractionManagerCache_35)); }
	inline XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4 * get_s_InteractionManagerCache_35() const { return ___s_InteractionManagerCache_35; }
	inline XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4 ** get_address_of_s_InteractionManagerCache_35() { return &___s_InteractionManagerCache_35; }
	inline void set_s_InteractionManagerCache_35(XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4 * value)
	{
		___s_InteractionManagerCache_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InteractionManagerCache_35), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.MRTKBaseInteractable
struct MRTKBaseInteractable_tD2EF3F3747FEC77DC86C6F96F61C3496529229A7  : public XRBaseInteractable_t6D8F476542495E625DE6A3454D4BC9323B6EDCBF
{
public:
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.IGazeInteractor> Microsoft.MixedReality.Toolkit.MRTKBaseInteractable::hoveringGazeInteractors
	List_1_t6A98966986E9CD8C2D9EC17DE0FA73D12C2F6078 * ___hoveringGazeInteractors_46;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.IGazePinchInteractor> Microsoft.MixedReality.Toolkit.MRTKBaseInteractable::hoveringGazePinchInteractors
	List_1_t383B255BE0B068E7B08592C708091272BB72462A * ___hoveringGazePinchInteractors_47;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.IGazePinchInteractor> Microsoft.MixedReality.Toolkit.MRTKBaseInteractable::selectingGazePinchInteractors
	List_1_t383B255BE0B068E7B08592C708091272BB72462A * ___selectingGazePinchInteractors_48;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.IPokeInteractor> Microsoft.MixedReality.Toolkit.MRTKBaseInteractable::hoveringPokeInteractors
	List_1_t7CFB55349BA082C1FD4571D4384BEE8BA23A1EB3 * ___hoveringPokeInteractors_49;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.IGrabInteractor> Microsoft.MixedReality.Toolkit.MRTKBaseInteractable::hoveringGrabInteractors
	List_1_tDD803577385E0D8D1E89F4FC6EA49215AEC4FF89 * ___hoveringGrabInteractors_50;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.IGrabInteractor> Microsoft.MixedReality.Toolkit.MRTKBaseInteractable::selectingGrabInteractors
	List_1_tDD803577385E0D8D1E89F4FC6EA49215AEC4FF89 * ___selectingGrabInteractors_51;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.IRayInteractor> Microsoft.MixedReality.Toolkit.MRTKBaseInteractable::hoveringRayInteractors
	List_1_tA69B0C7E6EFED3B424A8D93E9358CE2BFB38CB2E * ___hoveringRayInteractors_52;
	// Microsoft.MixedReality.Toolkit.TimedFlag Microsoft.MixedReality.Toolkit.MRTKBaseInteractable::isGazePinchSelected
	TimedFlag_tC5C87C9B210414D5EFFF70BA26D6C98CD11D655A * ___isGazePinchSelected_53;
	// Microsoft.MixedReality.Toolkit.TimedFlag Microsoft.MixedReality.Toolkit.MRTKBaseInteractable::isRaySelected
	TimedFlag_tC5C87C9B210414D5EFFF70BA26D6C98CD11D655A * ___isRaySelected_54;
	// Microsoft.MixedReality.Toolkit.TimedFlag Microsoft.MixedReality.Toolkit.MRTKBaseInteractable::isPokeSelected
	TimedFlag_tC5C87C9B210414D5EFFF70BA26D6C98CD11D655A * ___isPokeSelected_55;
	// Microsoft.MixedReality.Toolkit.TimedFlag Microsoft.MixedReality.Toolkit.MRTKBaseInteractable::isGrabSelected
	TimedFlag_tC5C87C9B210414D5EFFF70BA26D6C98CD11D655A * ___isGrabSelected_56;
	// Microsoft.MixedReality.Toolkit.TimedFlag Microsoft.MixedReality.Toolkit.MRTKBaseInteractable::isGazeHovered
	TimedFlag_tC5C87C9B210414D5EFFF70BA26D6C98CD11D655A * ___isGazeHovered_57;
	// Microsoft.MixedReality.Toolkit.TimedFlag Microsoft.MixedReality.Toolkit.MRTKBaseInteractable::isGazePinchHovered
	TimedFlag_tC5C87C9B210414D5EFFF70BA26D6C98CD11D655A * ___isGazePinchHovered_58;
	// Microsoft.MixedReality.Toolkit.TimedFlag Microsoft.MixedReality.Toolkit.MRTKBaseInteractable::isRayHovered
	TimedFlag_tC5C87C9B210414D5EFFF70BA26D6C98CD11D655A * ___isRayHovered_59;
	// Microsoft.MixedReality.Toolkit.TimedFlag Microsoft.MixedReality.Toolkit.MRTKBaseInteractable::isGrabHovered
	TimedFlag_tC5C87C9B210414D5EFFF70BA26D6C98CD11D655A * ___isGrabHovered_60;
	// Microsoft.MixedReality.Toolkit.TimedFlag Microsoft.MixedReality.Toolkit.MRTKBaseInteractable::isPokeHovered
	TimedFlag_tC5C87C9B210414D5EFFF70BA26D6C98CD11D655A * ___isPokeHovered_61;
	// Microsoft.MixedReality.Toolkit.TimedFlag Microsoft.MixedReality.Toolkit.MRTKBaseInteractable::isActiveHovered
	TimedFlag_tC5C87C9B210414D5EFFF70BA26D6C98CD11D655A * ___isActiveHovered_62;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.SystemInterfaceType> Microsoft.MixedReality.Toolkit.MRTKBaseInteractable::disabledInteractorTypes
	List_1_t50F7DB434300724D6B4DD90C3D02C971B591D71B * ___disabledInteractorTypes_63;
	// System.Int32 Microsoft.MixedReality.Toolkit.MRTKBaseInteractable::raySelectCount
	int32_t ___raySelectCount_64;
	// System.Int32 Microsoft.MixedReality.Toolkit.MRTKBaseInteractable::gazePinchSelectCount
	int32_t ___gazePinchSelectCount_65;
	// System.Int32 Microsoft.MixedReality.Toolkit.MRTKBaseInteractable::grabSelectCount
	int32_t ___grabSelectCount_66;
	// System.Int32 Microsoft.MixedReality.Toolkit.MRTKBaseInteractable::pokeSelectCount
	int32_t ___pokeSelectCount_67;
	// System.Int32 Microsoft.MixedReality.Toolkit.MRTKBaseInteractable::activeHoverCount
	int32_t ___activeHoverCount_68;

public:
	inline static int32_t get_offset_of_hoveringGazeInteractors_46() { return static_cast<int32_t>(offsetof(MRTKBaseInteractable_tD2EF3F3747FEC77DC86C6F96F61C3496529229A7, ___hoveringGazeInteractors_46)); }
	inline List_1_t6A98966986E9CD8C2D9EC17DE0FA73D12C2F6078 * get_hoveringGazeInteractors_46() const { return ___hoveringGazeInteractors_46; }
	inline List_1_t6A98966986E9CD8C2D9EC17DE0FA73D12C2F6078 ** get_address_of_hoveringGazeInteractors_46() { return &___hoveringGazeInteractors_46; }
	inline void set_hoveringGazeInteractors_46(List_1_t6A98966986E9CD8C2D9EC17DE0FA73D12C2F6078 * value)
	{
		___hoveringGazeInteractors_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hoveringGazeInteractors_46), (void*)value);
	}

	inline static int32_t get_offset_of_hoveringGazePinchInteractors_47() { return static_cast<int32_t>(offsetof(MRTKBaseInteractable_tD2EF3F3747FEC77DC86C6F96F61C3496529229A7, ___hoveringGazePinchInteractors_47)); }
	inline List_1_t383B255BE0B068E7B08592C708091272BB72462A * get_hoveringGazePinchInteractors_47() const { return ___hoveringGazePinchInteractors_47; }
	inline List_1_t383B255BE0B068E7B08592C708091272BB72462A ** get_address_of_hoveringGazePinchInteractors_47() { return &___hoveringGazePinchInteractors_47; }
	inline void set_hoveringGazePinchInteractors_47(List_1_t383B255BE0B068E7B08592C708091272BB72462A * value)
	{
		___hoveringGazePinchInteractors_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hoveringGazePinchInteractors_47), (void*)value);
	}

	inline static int32_t get_offset_of_selectingGazePinchInteractors_48() { return static_cast<int32_t>(offsetof(MRTKBaseInteractable_tD2EF3F3747FEC77DC86C6F96F61C3496529229A7, ___selectingGazePinchInteractors_48)); }
	inline List_1_t383B255BE0B068E7B08592C708091272BB72462A * get_selectingGazePinchInteractors_48() const { return ___selectingGazePinchInteractors_48; }
	inline List_1_t383B255BE0B068E7B08592C708091272BB72462A ** get_address_of_selectingGazePinchInteractors_48() { return &___selectingGazePinchInteractors_48; }
	inline void set_selectingGazePinchInteractors_48(List_1_t383B255BE0B068E7B08592C708091272BB72462A * value)
	{
		___selectingGazePinchInteractors_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selectingGazePinchInteractors_48), (void*)value);
	}

	inline static int32_t get_offset_of_hoveringPokeInteractors_49() { return static_cast<int32_t>(offsetof(MRTKBaseInteractable_tD2EF3F3747FEC77DC86C6F96F61C3496529229A7, ___hoveringPokeInteractors_49)); }
	inline List_1_t7CFB55349BA082C1FD4571D4384BEE8BA23A1EB3 * get_hoveringPokeInteractors_49() const { return ___hoveringPokeInteractors_49; }
	inline List_1_t7CFB55349BA082C1FD4571D4384BEE8BA23A1EB3 ** get_address_of_hoveringPokeInteractors_49() { return &___hoveringPokeInteractors_49; }
	inline void set_hoveringPokeInteractors_49(List_1_t7CFB55349BA082C1FD4571D4384BEE8BA23A1EB3 * value)
	{
		___hoveringPokeInteractors_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hoveringPokeInteractors_49), (void*)value);
	}

	inline static int32_t get_offset_of_hoveringGrabInteractors_50() { return static_cast<int32_t>(offsetof(MRTKBaseInteractable_tD2EF3F3747FEC77DC86C6F96F61C3496529229A7, ___hoveringGrabInteractors_50)); }
	inline List_1_tDD803577385E0D8D1E89F4FC6EA49215AEC4FF89 * get_hoveringGrabInteractors_50() const { return ___hoveringGrabInteractors_50; }
	inline List_1_tDD803577385E0D8D1E89F4FC6EA49215AEC4FF89 ** get_address_of_hoveringGrabInteractors_50() { return &___hoveringGrabInteractors_50; }
	inline void set_hoveringGrabInteractors_50(List_1_tDD803577385E0D8D1E89F4FC6EA49215AEC4FF89 * value)
	{
		___hoveringGrabInteractors_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hoveringGrabInteractors_50), (void*)value);
	}

	inline static int32_t get_offset_of_selectingGrabInteractors_51() { return static_cast<int32_t>(offsetof(MRTKBaseInteractable_tD2EF3F3747FEC77DC86C6F96F61C3496529229A7, ___selectingGrabInteractors_51)); }
	inline List_1_tDD803577385E0D8D1E89F4FC6EA49215AEC4FF89 * get_selectingGrabInteractors_51() const { return ___selectingGrabInteractors_51; }
	inline List_1_tDD803577385E0D8D1E89F4FC6EA49215AEC4FF89 ** get_address_of_selectingGrabInteractors_51() { return &___selectingGrabInteractors_51; }
	inline void set_selectingGrabInteractors_51(List_1_tDD803577385E0D8D1E89F4FC6EA49215AEC4FF89 * value)
	{
		___selectingGrabInteractors_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selectingGrabInteractors_51), (void*)value);
	}

	inline static int32_t get_offset_of_hoveringRayInteractors_52() { return static_cast<int32_t>(offsetof(MRTKBaseInteractable_tD2EF3F3747FEC77DC86C6F96F61C3496529229A7, ___hoveringRayInteractors_52)); }
	inline List_1_tA69B0C7E6EFED3B424A8D93E9358CE2BFB38CB2E * get_hoveringRayInteractors_52() const { return ___hoveringRayInteractors_52; }
	inline List_1_tA69B0C7E6EFED3B424A8D93E9358CE2BFB38CB2E ** get_address_of_hoveringRayInteractors_52() { return &___hoveringRayInteractors_52; }
	inline void set_hoveringRayInteractors_52(List_1_tA69B0C7E6EFED3B424A8D93E9358CE2BFB38CB2E * value)
	{
		___hoveringRayInteractors_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hoveringRayInteractors_52), (void*)value);
	}

	inline static int32_t get_offset_of_isGazePinchSelected_53() { return static_cast<int32_t>(offsetof(MRTKBaseInteractable_tD2EF3F3747FEC77DC86C6F96F61C3496529229A7, ___isGazePinchSelected_53)); }
	inline TimedFlag_tC5C87C9B210414D5EFFF70BA26D6C98CD11D655A * get_isGazePinchSelected_53() const { return ___isGazePinchSelected_53; }
	inline TimedFlag_tC5C87C9B210414D5EFFF70BA26D6C98CD11D655A ** get_address_of_isGazePinchSelected_53() { return &___isGazePinchSelected_53; }
	inline void set_isGazePinchSelected_53(TimedFlag_tC5C87C9B210414D5EFFF70BA26D6C98CD11D655A * value)
	{
		___isGazePinchSelected_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___isGazePinchSelected_53), (void*)value);
	}

	inline static int32_t get_offset_of_isRaySelected_54() { return static_cast<int32_t>(offsetof(MRTKBaseInteractable_tD2EF3F3747FEC77DC86C6F96F61C3496529229A7, ___isRaySelected_54)); }
	inline TimedFlag_tC5C87C9B210414D5EFFF70BA26D6C98CD11D655A * get_isRaySelected_54() const { return ___isRaySelected_54; }
	inline TimedFlag_tC5C87C9B210414D5EFFF70BA26D6C98CD11D655A ** get_address_of_isRaySelected_54() { return &___isRaySelected_54; }
	inline void set_isRaySelected_54(TimedFlag_tC5C87C9B210414D5EFFF70BA26D6C98CD11D655A * value)
	{
		___isRaySelected_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___isRaySelected_54), (void*)value);
	}

	inline static int32_t get_offset_of_isPokeSelected_55() { return static_cast<int32_t>(offsetof(MRTKBaseInteractable_tD2EF3F3747FEC77DC86C6F96F61C3496529229A7, ___isPokeSelected_55)); }
	inline TimedFlag_tC5C87C9B210414D5EFFF70BA26D6C98CD11D655A * get_isPokeSelected_55() const { return ___isPokeSelected_55; }
	inline TimedFlag_tC5C87C9B210414D5EFFF70BA26D6C98CD11D655A ** get_address_of_isPokeSelected_55() { return &___isPokeSelected_55; }
	inline void set_isPokeSelected_55(TimedFlag_tC5C87C9B210414D5EFFF70BA26D6C98CD11D655A * value)
	{
		___isPokeSelected_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___isPokeSelected_55), (void*)value);
	}

	inline static int32_t get_offset_of_isGrabSelected_56() { return static_cast<int32_t>(offsetof(MRTKBaseInteractable_tD2EF3F3747FEC77DC86C6F96F61C3496529229A7, ___isGrabSelected_56)); }
	inline TimedFlag_tC5C87C9B210414D5EFFF70BA26D6C98CD11D655A * get_isGrabSelected_56() const { return ___isGrabSelected_56; }
	inline TimedFlag_tC5C87C9B210414D5EFFF70BA26D6C98CD11D655A ** get_address_of_isGrabSelected_56() { return &___isGrabSelected_56; }
	inline void set_isGrabSelected_56(TimedFlag_tC5C87C9B210414D5EFFF70BA26D6C98CD11D655A * value)
	{
		___isGrabSelected_56 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___isGrabSelected_56), (void*)value);
	}

	inline static int32_t get_offset_of_isGazeHovered_57() { return static_cast<int32_t>(offsetof(MRTKBaseInteractable_tD2EF3F3747FEC77DC86C6F96F61C3496529229A7, ___isGazeHovered_57)); }
	inline TimedFlag_tC5C87C9B210414D5EFFF70BA26D6C98CD11D655A * get_isGazeHovered_57() const { return ___isGazeHovered_57; }
	inline TimedFlag_tC5C87C9B210414D5EFFF70BA26D6C98CD11D655A ** get_address_of_isGazeHovered_57() { return &___isGazeHovered_57; }
	inline void set_isGazeHovered_57(TimedFlag_tC5C87C9B210414D5EFFF70BA26D6C98CD11D655A * value)
	{
		___isGazeHovered_57 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___isGazeHovered_57), (void*)value);
	}

	inline static int32_t get_offset_of_isGazePinchHovered_58() { return static_cast<int32_t>(offsetof(MRTKBaseInteractable_tD2EF3F3747FEC77DC86C6F96F61C3496529229A7, ___isGazePinchHovered_58)); }
	inline TimedFlag_tC5C87C9B210414D5EFFF70BA26D6C98CD11D655A * get_isGazePinchHovered_58() const { return ___isGazePinchHovered_58; }
	inline TimedFlag_tC5C87C9B210414D5EFFF70BA26D6C98CD11D655A ** get_address_of_isGazePinchHovered_58() { return &___isGazePinchHovered_58; }
	inline void set_isGazePinchHovered_58(TimedFlag_tC5C87C9B210414D5EFFF70BA26D6C98CD11D655A * value)
	{
		___isGazePinchHovered_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___isGazePinchHovered_58), (void*)value);
	}

	inline static int32_t get_offset_of_isRayHovered_59() { return static_cast<int32_t>(offsetof(MRTKBaseInteractable_tD2EF3F3747FEC77DC86C6F96F61C3496529229A7, ___isRayHovered_59)); }
	inline TimedFlag_tC5C87C9B210414D5EFFF70BA26D6C98CD11D655A * get_isRayHovered_59() const { return ___isRayHovered_59; }
	inline TimedFlag_tC5C87C9B210414D5EFFF70BA26D6C98CD11D655A ** get_address_of_isRayHovered_59() { return &___isRayHovered_59; }
	inline void set_isRayHovered_59(TimedFlag_tC5C87C9B210414D5EFFF70BA26D6C98CD11D655A * value)
	{
		___isRayHovered_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___isRayHovered_59), (void*)value);
	}

	inline static int32_t get_offset_of_isGrabHovered_60() { return static_cast<int32_t>(offsetof(MRTKBaseInteractable_tD2EF3F3747FEC77DC86C6F96F61C3496529229A7, ___isGrabHovered_60)); }
	inline TimedFlag_tC5C87C9B210414D5EFFF70BA26D6C98CD11D655A * get_isGrabHovered_60() const { return ___isGrabHovered_60; }
	inline TimedFlag_tC5C87C9B210414D5EFFF70BA26D6C98CD11D655A ** get_address_of_isGrabHovered_60() { return &___isGrabHovered_60; }
	inline void set_isGrabHovered_60(TimedFlag_tC5C87C9B210414D5EFFF70BA26D6C98CD11D655A * value)
	{
		___isGrabHovered_60 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___isGrabHovered_60), (void*)value);
	}

	inline static int32_t get_offset_of_isPokeHovered_61() { return static_cast<int32_t>(offsetof(MRTKBaseInteractable_tD2EF3F3747FEC77DC86C6F96F61C3496529229A7, ___isPokeHovered_61)); }
	inline TimedFlag_tC5C87C9B210414D5EFFF70BA26D6C98CD11D655A * get_isPokeHovered_61() const { return ___isPokeHovered_61; }
	inline TimedFlag_tC5C87C9B210414D5EFFF70BA26D6C98CD11D655A ** get_address_of_isPokeHovered_61() { return &___isPokeHovered_61; }
	inline void set_isPokeHovered_61(TimedFlag_tC5C87C9B210414D5EFFF70BA26D6C98CD11D655A * value)
	{
		___isPokeHovered_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___isPokeHovered_61), (void*)value);
	}

	inline static int32_t get_offset_of_isActiveHovered_62() { return static_cast<int32_t>(offsetof(MRTKBaseInteractable_tD2EF3F3747FEC77DC86C6F96F61C3496529229A7, ___isActiveHovered_62)); }
	inline TimedFlag_tC5C87C9B210414D5EFFF70BA26D6C98CD11D655A * get_isActiveHovered_62() const { return ___isActiveHovered_62; }
	inline TimedFlag_tC5C87C9B210414D5EFFF70BA26D6C98CD11D655A ** get_address_of_isActiveHovered_62() { return &___isActiveHovered_62; }
	inline void set_isActiveHovered_62(TimedFlag_tC5C87C9B210414D5EFFF70BA26D6C98CD11D655A * value)
	{
		___isActiveHovered_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___isActiveHovered_62), (void*)value);
	}

	inline static int32_t get_offset_of_disabledInteractorTypes_63() { return static_cast<int32_t>(offsetof(MRTKBaseInteractable_tD2EF3F3747FEC77DC86C6F96F61C3496529229A7, ___disabledInteractorTypes_63)); }
	inline List_1_t50F7DB434300724D6B4DD90C3D02C971B591D71B * get_disabledInteractorTypes_63() const { return ___disabledInteractorTypes_63; }
	inline List_1_t50F7DB434300724D6B4DD90C3D02C971B591D71B ** get_address_of_disabledInteractorTypes_63() { return &___disabledInteractorTypes_63; }
	inline void set_disabledInteractorTypes_63(List_1_t50F7DB434300724D6B4DD90C3D02C971B591D71B * value)
	{
		___disabledInteractorTypes_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___disabledInteractorTypes_63), (void*)value);
	}

	inline static int32_t get_offset_of_raySelectCount_64() { return static_cast<int32_t>(offsetof(MRTKBaseInteractable_tD2EF3F3747FEC77DC86C6F96F61C3496529229A7, ___raySelectCount_64)); }
	inline int32_t get_raySelectCount_64() const { return ___raySelectCount_64; }
	inline int32_t* get_address_of_raySelectCount_64() { return &___raySelectCount_64; }
	inline void set_raySelectCount_64(int32_t value)
	{
		___raySelectCount_64 = value;
	}

	inline static int32_t get_offset_of_gazePinchSelectCount_65() { return static_cast<int32_t>(offsetof(MRTKBaseInteractable_tD2EF3F3747FEC77DC86C6F96F61C3496529229A7, ___gazePinchSelectCount_65)); }
	inline int32_t get_gazePinchSelectCount_65() const { return ___gazePinchSelectCount_65; }
	inline int32_t* get_address_of_gazePinchSelectCount_65() { return &___gazePinchSelectCount_65; }
	inline void set_gazePinchSelectCount_65(int32_t value)
	{
		___gazePinchSelectCount_65 = value;
	}

	inline static int32_t get_offset_of_grabSelectCount_66() { return static_cast<int32_t>(offsetof(MRTKBaseInteractable_tD2EF3F3747FEC77DC86C6F96F61C3496529229A7, ___grabSelectCount_66)); }
	inline int32_t get_grabSelectCount_66() const { return ___grabSelectCount_66; }
	inline int32_t* get_address_of_grabSelectCount_66() { return &___grabSelectCount_66; }
	inline void set_grabSelectCount_66(int32_t value)
	{
		___grabSelectCount_66 = value;
	}

	inline static int32_t get_offset_of_pokeSelectCount_67() { return static_cast<int32_t>(offsetof(MRTKBaseInteractable_tD2EF3F3747FEC77DC86C6F96F61C3496529229A7, ___pokeSelectCount_67)); }
	inline int32_t get_pokeSelectCount_67() const { return ___pokeSelectCount_67; }
	inline int32_t* get_address_of_pokeSelectCount_67() { return &___pokeSelectCount_67; }
	inline void set_pokeSelectCount_67(int32_t value)
	{
		___pokeSelectCount_67 = value;
	}

	inline static int32_t get_offset_of_activeHoverCount_68() { return static_cast<int32_t>(offsetof(MRTKBaseInteractable_tD2EF3F3747FEC77DC86C6F96F61C3496529229A7, ___activeHoverCount_68)); }
	inline int32_t get_activeHoverCount_68() const { return ___activeHoverCount_68; }
	inline int32_t* get_address_of_activeHoverCount_68() { return &___activeHoverCount_68; }
	inline void set_activeHoverCount_68(int32_t value)
	{
		___activeHoverCount_68 = value;
	}
};


// Microsoft.MixedReality.Toolkit.StatefulInteractable
struct StatefulInteractable_t67843E0A65DBFB7777C42C51281749C8C71AA203  : public MRTKBaseInteractable_tD2EF3F3747FEC77DC86C6F96F61C3496529229A7
{
public:
	// Microsoft.MixedReality.Toolkit.StatefulInteractable/ToggleType Microsoft.MixedReality.Toolkit.StatefulInteractable::<ToggleMode>k__BackingField
	int32_t ___U3CToggleModeU3Ek__BackingField_69;
	// System.Single Microsoft.MixedReality.Toolkit.StatefulInteractable::<SelectThreshold>k__BackingField
	float ___U3CSelectThresholdU3Ek__BackingField_70;
	// System.Single Microsoft.MixedReality.Toolkit.StatefulInteractable::<DeselectThreshold>k__BackingField
	float ___U3CDeselectThresholdU3Ek__BackingField_71;
	// System.Boolean Microsoft.MixedReality.Toolkit.StatefulInteractable::<TriggerOnRelease>k__BackingField
	bool ___U3CTriggerOnReleaseU3Ek__BackingField_72;
	// System.Boolean Microsoft.MixedReality.Toolkit.StatefulInteractable::<UseGazeDwell>k__BackingField
	bool ___U3CUseGazeDwellU3Ek__BackingField_73;
	// System.Single Microsoft.MixedReality.Toolkit.StatefulInteractable::<GazeDwellTime>k__BackingField
	float ___U3CGazeDwellTimeU3Ek__BackingField_74;
	// System.Boolean Microsoft.MixedReality.Toolkit.StatefulInteractable::<UseFarDwell>k__BackingField
	bool ___U3CUseFarDwellU3Ek__BackingField_75;
	// System.Single Microsoft.MixedReality.Toolkit.StatefulInteractable::<FarDwellTime>k__BackingField
	float ___U3CFarDwellTimeU3Ek__BackingField_76;
	// System.Boolean Microsoft.MixedReality.Toolkit.StatefulInteractable::allowSelectByVoice
	bool ___allowSelectByVoice_77;
	// System.String Microsoft.MixedReality.Toolkit.StatefulInteractable::speechRecognitionKeyword
	String_t* ___speechRecognitionKeyword_78;
	// System.Boolean Microsoft.MixedReality.Toolkit.StatefulInteractable::<VoiceRequiresFocus>k__BackingField
	bool ___U3CVoiceRequiresFocusU3Ek__BackingField_79;
	// Microsoft.MixedReality.Toolkit.TimedFlag Microsoft.MixedReality.Toolkit.StatefulInteractable::<IsToggled>k__BackingField
	TimedFlag_tC5C87C9B210414D5EFFF70BA26D6C98CD11D655A * ___U3CIsToggledU3Ek__BackingField_80;
	// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.StatefulInteractable::<OnClicked>k__BackingField
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___U3COnClickedU3Ek__BackingField_81;
	// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.StatefulInteractable::<OnEnabled>k__BackingField
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___U3COnEnabledU3Ek__BackingField_82;
	// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.StatefulInteractable::<OnDisabled>k__BackingField
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___U3COnDisabledU3Ek__BackingField_83;

public:
	inline static int32_t get_offset_of_U3CToggleModeU3Ek__BackingField_69() { return static_cast<int32_t>(offsetof(StatefulInteractable_t67843E0A65DBFB7777C42C51281749C8C71AA203, ___U3CToggleModeU3Ek__BackingField_69)); }
	inline int32_t get_U3CToggleModeU3Ek__BackingField_69() const { return ___U3CToggleModeU3Ek__BackingField_69; }
	inline int32_t* get_address_of_U3CToggleModeU3Ek__BackingField_69() { return &___U3CToggleModeU3Ek__BackingField_69; }
	inline void set_U3CToggleModeU3Ek__BackingField_69(int32_t value)
	{
		___U3CToggleModeU3Ek__BackingField_69 = value;
	}

	inline static int32_t get_offset_of_U3CSelectThresholdU3Ek__BackingField_70() { return static_cast<int32_t>(offsetof(StatefulInteractable_t67843E0A65DBFB7777C42C51281749C8C71AA203, ___U3CSelectThresholdU3Ek__BackingField_70)); }
	inline float get_U3CSelectThresholdU3Ek__BackingField_70() const { return ___U3CSelectThresholdU3Ek__BackingField_70; }
	inline float* get_address_of_U3CSelectThresholdU3Ek__BackingField_70() { return &___U3CSelectThresholdU3Ek__BackingField_70; }
	inline void set_U3CSelectThresholdU3Ek__BackingField_70(float value)
	{
		___U3CSelectThresholdU3Ek__BackingField_70 = value;
	}

	inline static int32_t get_offset_of_U3CDeselectThresholdU3Ek__BackingField_71() { return static_cast<int32_t>(offsetof(StatefulInteractable_t67843E0A65DBFB7777C42C51281749C8C71AA203, ___U3CDeselectThresholdU3Ek__BackingField_71)); }
	inline float get_U3CDeselectThresholdU3Ek__BackingField_71() const { return ___U3CDeselectThresholdU3Ek__BackingField_71; }
	inline float* get_address_of_U3CDeselectThresholdU3Ek__BackingField_71() { return &___U3CDeselectThresholdU3Ek__BackingField_71; }
	inline void set_U3CDeselectThresholdU3Ek__BackingField_71(float value)
	{
		___U3CDeselectThresholdU3Ek__BackingField_71 = value;
	}

	inline static int32_t get_offset_of_U3CTriggerOnReleaseU3Ek__BackingField_72() { return static_cast<int32_t>(offsetof(StatefulInteractable_t67843E0A65DBFB7777C42C51281749C8C71AA203, ___U3CTriggerOnReleaseU3Ek__BackingField_72)); }
	inline bool get_U3CTriggerOnReleaseU3Ek__BackingField_72() const { return ___U3CTriggerOnReleaseU3Ek__BackingField_72; }
	inline bool* get_address_of_U3CTriggerOnReleaseU3Ek__BackingField_72() { return &___U3CTriggerOnReleaseU3Ek__BackingField_72; }
	inline void set_U3CTriggerOnReleaseU3Ek__BackingField_72(bool value)
	{
		___U3CTriggerOnReleaseU3Ek__BackingField_72 = value;
	}

	inline static int32_t get_offset_of_U3CUseGazeDwellU3Ek__BackingField_73() { return static_cast<int32_t>(offsetof(StatefulInteractable_t67843E0A65DBFB7777C42C51281749C8C71AA203, ___U3CUseGazeDwellU3Ek__BackingField_73)); }
	inline bool get_U3CUseGazeDwellU3Ek__BackingField_73() const { return ___U3CUseGazeDwellU3Ek__BackingField_73; }
	inline bool* get_address_of_U3CUseGazeDwellU3Ek__BackingField_73() { return &___U3CUseGazeDwellU3Ek__BackingField_73; }
	inline void set_U3CUseGazeDwellU3Ek__BackingField_73(bool value)
	{
		___U3CUseGazeDwellU3Ek__BackingField_73 = value;
	}

	inline static int32_t get_offset_of_U3CGazeDwellTimeU3Ek__BackingField_74() { return static_cast<int32_t>(offsetof(StatefulInteractable_t67843E0A65DBFB7777C42C51281749C8C71AA203, ___U3CGazeDwellTimeU3Ek__BackingField_74)); }
	inline float get_U3CGazeDwellTimeU3Ek__BackingField_74() const { return ___U3CGazeDwellTimeU3Ek__BackingField_74; }
	inline float* get_address_of_U3CGazeDwellTimeU3Ek__BackingField_74() { return &___U3CGazeDwellTimeU3Ek__BackingField_74; }
	inline void set_U3CGazeDwellTimeU3Ek__BackingField_74(float value)
	{
		___U3CGazeDwellTimeU3Ek__BackingField_74 = value;
	}

	inline static int32_t get_offset_of_U3CUseFarDwellU3Ek__BackingField_75() { return static_cast<int32_t>(offsetof(StatefulInteractable_t67843E0A65DBFB7777C42C51281749C8C71AA203, ___U3CUseFarDwellU3Ek__BackingField_75)); }
	inline bool get_U3CUseFarDwellU3Ek__BackingField_75() const { return ___U3CUseFarDwellU3Ek__BackingField_75; }
	inline bool* get_address_of_U3CUseFarDwellU3Ek__BackingField_75() { return &___U3CUseFarDwellU3Ek__BackingField_75; }
	inline void set_U3CUseFarDwellU3Ek__BackingField_75(bool value)
	{
		___U3CUseFarDwellU3Ek__BackingField_75 = value;
	}

	inline static int32_t get_offset_of_U3CFarDwellTimeU3Ek__BackingField_76() { return static_cast<int32_t>(offsetof(StatefulInteractable_t67843E0A65DBFB7777C42C51281749C8C71AA203, ___U3CFarDwellTimeU3Ek__BackingField_76)); }
	inline float get_U3CFarDwellTimeU3Ek__BackingField_76() const { return ___U3CFarDwellTimeU3Ek__BackingField_76; }
	inline float* get_address_of_U3CFarDwellTimeU3Ek__BackingField_76() { return &___U3CFarDwellTimeU3Ek__BackingField_76; }
	inline void set_U3CFarDwellTimeU3Ek__BackingField_76(float value)
	{
		___U3CFarDwellTimeU3Ek__BackingField_76 = value;
	}

	inline static int32_t get_offset_of_allowSelectByVoice_77() { return static_cast<int32_t>(offsetof(StatefulInteractable_t67843E0A65DBFB7777C42C51281749C8C71AA203, ___allowSelectByVoice_77)); }
	inline bool get_allowSelectByVoice_77() const { return ___allowSelectByVoice_77; }
	inline bool* get_address_of_allowSelectByVoice_77() { return &___allowSelectByVoice_77; }
	inline void set_allowSelectByVoice_77(bool value)
	{
		___allowSelectByVoice_77 = value;
	}

	inline static int32_t get_offset_of_speechRecognitionKeyword_78() { return static_cast<int32_t>(offsetof(StatefulInteractable_t67843E0A65DBFB7777C42C51281749C8C71AA203, ___speechRecognitionKeyword_78)); }
	inline String_t* get_speechRecognitionKeyword_78() const { return ___speechRecognitionKeyword_78; }
	inline String_t** get_address_of_speechRecognitionKeyword_78() { return &___speechRecognitionKeyword_78; }
	inline void set_speechRecognitionKeyword_78(String_t* value)
	{
		___speechRecognitionKeyword_78 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___speechRecognitionKeyword_78), (void*)value);
	}

	inline static int32_t get_offset_of_U3CVoiceRequiresFocusU3Ek__BackingField_79() { return static_cast<int32_t>(offsetof(StatefulInteractable_t67843E0A65DBFB7777C42C51281749C8C71AA203, ___U3CVoiceRequiresFocusU3Ek__BackingField_79)); }
	inline bool get_U3CVoiceRequiresFocusU3Ek__BackingField_79() const { return ___U3CVoiceRequiresFocusU3Ek__BackingField_79; }
	inline bool* get_address_of_U3CVoiceRequiresFocusU3Ek__BackingField_79() { return &___U3CVoiceRequiresFocusU3Ek__BackingField_79; }
	inline void set_U3CVoiceRequiresFocusU3Ek__BackingField_79(bool value)
	{
		___U3CVoiceRequiresFocusU3Ek__BackingField_79 = value;
	}

	inline static int32_t get_offset_of_U3CIsToggledU3Ek__BackingField_80() { return static_cast<int32_t>(offsetof(StatefulInteractable_t67843E0A65DBFB7777C42C51281749C8C71AA203, ___U3CIsToggledU3Ek__BackingField_80)); }
	inline TimedFlag_tC5C87C9B210414D5EFFF70BA26D6C98CD11D655A * get_U3CIsToggledU3Ek__BackingField_80() const { return ___U3CIsToggledU3Ek__BackingField_80; }
	inline TimedFlag_tC5C87C9B210414D5EFFF70BA26D6C98CD11D655A ** get_address_of_U3CIsToggledU3Ek__BackingField_80() { return &___U3CIsToggledU3Ek__BackingField_80; }
	inline void set_U3CIsToggledU3Ek__BackingField_80(TimedFlag_tC5C87C9B210414D5EFFF70BA26D6C98CD11D655A * value)
	{
		___U3CIsToggledU3Ek__BackingField_80 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CIsToggledU3Ek__BackingField_80), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnClickedU3Ek__BackingField_81() { return static_cast<int32_t>(offsetof(StatefulInteractable_t67843E0A65DBFB7777C42C51281749C8C71AA203, ___U3COnClickedU3Ek__BackingField_81)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_U3COnClickedU3Ek__BackingField_81() const { return ___U3COnClickedU3Ek__BackingField_81; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_U3COnClickedU3Ek__BackingField_81() { return &___U3COnClickedU3Ek__BackingField_81; }
	inline void set_U3COnClickedU3Ek__BackingField_81(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___U3COnClickedU3Ek__BackingField_81 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnClickedU3Ek__BackingField_81), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnEnabledU3Ek__BackingField_82() { return static_cast<int32_t>(offsetof(StatefulInteractable_t67843E0A65DBFB7777C42C51281749C8C71AA203, ___U3COnEnabledU3Ek__BackingField_82)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_U3COnEnabledU3Ek__BackingField_82() const { return ___U3COnEnabledU3Ek__BackingField_82; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_U3COnEnabledU3Ek__BackingField_82() { return &___U3COnEnabledU3Ek__BackingField_82; }
	inline void set_U3COnEnabledU3Ek__BackingField_82(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___U3COnEnabledU3Ek__BackingField_82 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnEnabledU3Ek__BackingField_82), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnDisabledU3Ek__BackingField_83() { return static_cast<int32_t>(offsetof(StatefulInteractable_t67843E0A65DBFB7777C42C51281749C8C71AA203, ___U3COnDisabledU3Ek__BackingField_83)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_U3COnDisabledU3Ek__BackingField_83() const { return ___U3COnDisabledU3Ek__BackingField_83; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_U3COnDisabledU3Ek__BackingField_83() { return &___U3COnDisabledU3Ek__BackingField_83; }
	inline void set_U3COnDisabledU3Ek__BackingField_83(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___U3COnDisabledU3Ek__BackingField_83 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnDisabledU3Ek__BackingField_83), (void*)value);
	}
};

struct StatefulInteractable_t67843E0A65DBFB7777C42C51281749C8C71AA203_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.StatefulInteractable::StatefulInteractableSelectednessMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___StatefulInteractableSelectednessMarker_84;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.StatefulInteractable::OnFirstSelectEnteredPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___OnFirstSelectEnteredPerfMarker_85;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.StatefulInteractable::OnLastSelectExitedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___OnLastSelectExitedPerfMarker_86;

public:
	inline static int32_t get_offset_of_StatefulInteractableSelectednessMarker_84() { return static_cast<int32_t>(offsetof(StatefulInteractable_t67843E0A65DBFB7777C42C51281749C8C71AA203_StaticFields, ___StatefulInteractableSelectednessMarker_84)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_StatefulInteractableSelectednessMarker_84() const { return ___StatefulInteractableSelectednessMarker_84; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_StatefulInteractableSelectednessMarker_84() { return &___StatefulInteractableSelectednessMarker_84; }
	inline void set_StatefulInteractableSelectednessMarker_84(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___StatefulInteractableSelectednessMarker_84 = value;
	}

	inline static int32_t get_offset_of_OnFirstSelectEnteredPerfMarker_85() { return static_cast<int32_t>(offsetof(StatefulInteractable_t67843E0A65DBFB7777C42C51281749C8C71AA203_StaticFields, ___OnFirstSelectEnteredPerfMarker_85)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_OnFirstSelectEnteredPerfMarker_85() const { return ___OnFirstSelectEnteredPerfMarker_85; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_OnFirstSelectEnteredPerfMarker_85() { return &___OnFirstSelectEnteredPerfMarker_85; }
	inline void set_OnFirstSelectEnteredPerfMarker_85(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___OnFirstSelectEnteredPerfMarker_85 = value;
	}

	inline static int32_t get_offset_of_OnLastSelectExitedPerfMarker_86() { return static_cast<int32_t>(offsetof(StatefulInteractable_t67843E0A65DBFB7777C42C51281749C8C71AA203_StaticFields, ___OnLastSelectExitedPerfMarker_86)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_OnLastSelectExitedPerfMarker_86() const { return ___OnLastSelectExitedPerfMarker_86; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_OnLastSelectExitedPerfMarker_86() { return &___OnLastSelectExitedPerfMarker_86; }
	inline void set_OnLastSelectExitedPerfMarker_86(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___OnLastSelectExitedPerfMarker_86 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Diagnostics.StackFrame[]
struct StackFrameU5BU5D_t29238B62C287BAACD78F100511D4023931CEA8A1  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) StackFrame_t6018A5362C2E8F6F80F153F3D40623D213094E0F * m_Items[1];

public:
	inline StackFrame_t6018A5362C2E8F6F80F153F3D40623D213094E0F * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline StackFrame_t6018A5362C2E8F6F80F153F3D40623D213094E0F ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, StackFrame_t6018A5362C2E8F6F80F153F3D40623D213094E0F * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline StackFrame_t6018A5362C2E8F6F80F153F3D40623D213094E0F * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline StackFrame_t6018A5362C2E8F6F80F153F3D40623D213094E0F ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, StackFrame_t6018A5362C2E8F6F80F153F3D40623D213094E0F * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) StackTrace_t43C03122C6B2AAF0DCCF684B2D5FA6E673F02888 * m_Items[1];

public:
	inline StackTrace_t43C03122C6B2AAF0DCCF684B2D5FA6E673F02888 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline StackTrace_t43C03122C6B2AAF0DCCF684B2D5FA6E673F02888 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, StackTrace_t43C03122C6B2AAF0DCCF684B2D5FA6E673F02888 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline StackTrace_t43C03122C6B2AAF0DCCF684B2D5FA6E673F02888 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline StackTrace_t43C03122C6B2AAF0DCCF684B2D5FA6E673F02888 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, StackTrace_t43C03122C6B2AAF0DCCF684B2D5FA6E673F02888 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Microsoft.MixedReality.Toolkit.StatefulInteractable[]
struct StatefulInteractableU5BU5D_t492BAF2D5618C99849FE7EF1747205A10778B462  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) StatefulInteractable_t67843E0A65DBFB7777C42C51281749C8C71AA203 * m_Items[1];

public:
	inline StatefulInteractable_t67843E0A65DBFB7777C42C51281749C8C71AA203 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline StatefulInteractable_t67843E0A65DBFB7777C42C51281749C8C71AA203 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, StatefulInteractable_t67843E0A65DBFB7777C42C51281749C8C71AA203 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline StatefulInteractable_t67843E0A65DBFB7777C42C51281749C8C71AA203 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline StatefulInteractable_t67843E0A65DBFB7777C42C51281749C8C71AA203 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, StatefulInteractable_t67843E0A65DBFB7777C42C51281749C8C71AA203 * value)
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
// System.UInt16[]
struct UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint16_t m_Items[1];

public:
	inline uint16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint16_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint32_t m_Items[1];

public:
	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int64[]
struct Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int64_t m_Items[1];

public:
	inline int64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int64_t value)
	{
		m_Items[index] = value;
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
// System.Double[]
struct DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) double m_Items[1];

public:
	inline double GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline double* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, double value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline double GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline double* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, double value)
	{
		m_Items[index] = value;
	}
};
// System.Guid[]
struct GuidU5BU5D_t6DCED1B9FC5592C43FAA73D81705104BD18151B8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Guid_t  m_Items[1];

public:
	inline Guid_t  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Guid_t * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Guid_t  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Guid_t  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Guid_t * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Guid_t  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.InputSystem.Utilities.Substring[]
struct SubstringU5BU5D_tE332884993470F5CF7BAAA950414E4E24691A8D0  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Substring_t9EE457D8CFFFB970B2967B31E9D9AB465415571F  m_Items[1];

public:
	inline Substring_t9EE457D8CFFFB970B2967B31E9D9AB465415571F  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Substring_t9EE457D8CFFFB970B2967B31E9D9AB465415571F * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Substring_t9EE457D8CFFFB970B2967B31E9D9AB465415571F  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_String_0), (void*)NULL);
	}
	inline Substring_t9EE457D8CFFFB970B2967B31E9D9AB465415571F  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Substring_t9EE457D8CFFFB970B2967B31E9D9AB465415571F * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Substring_t9EE457D8CFFFB970B2967B31E9D9AB465415571F  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_String_0), (void*)NULL);
	}
};
// UnityEngine.Subsystem[]
struct SubsystemU5BU5D_t4353D7C1DD71692C1BF7D355ADCB47DBD6DB91ED  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Subsystem_t2D97454A946149D608974CB6B674F5F5C613A6A4 * m_Items[1];

public:
	inline Subsystem_t2D97454A946149D608974CB6B674F5F5C613A6A4 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Subsystem_t2D97454A946149D608974CB6B674F5F5C613A6A4 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Subsystem_t2D97454A946149D608974CB6B674F5F5C613A6A4 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Subsystem_t2D97454A946149D608974CB6B674F5F5C613A6A4 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Subsystem_t2D97454A946149D608974CB6B674F5F5C613A6A4 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Subsystem_t2D97454A946149D608974CB6B674F5F5C613A6A4 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Microsoft.MixedReality.OpenXR.SubsystemController[]
struct SubsystemControllerU5BU5D_t62CBE9EA40E0F24F9058CEDCD6C6A65A0652697D  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) SubsystemController_tA2034604D6D2C2CB86AAD55E10318533191D80DC * m_Items[1];

public:
	inline SubsystemController_tA2034604D6D2C2CB86AAD55E10318533191D80DC * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SubsystemController_tA2034604D6D2C2CB86AAD55E10318533191D80DC ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SubsystemController_tA2034604D6D2C2CB86AAD55E10318533191D80DC * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline SubsystemController_tA2034604D6D2C2CB86AAD55E10318533191D80DC * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SubsystemController_tA2034604D6D2C2CB86AAD55E10318533191D80DC ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SubsystemController_tA2034604D6D2C2CB86AAD55E10318533191D80DC * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.SubsystemDescriptor[]
struct SubsystemDescriptorU5BU5D_t52E78FFA3141BD25855CE03337EB1BB6C2984877  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) SubsystemDescriptor_tF663011CB44AB1D342821BBEF7B6811E799A7245 * m_Items[1];

public:
	inline SubsystemDescriptor_tF663011CB44AB1D342821BBEF7B6811E799A7245 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SubsystemDescriptor_tF663011CB44AB1D342821BBEF7B6811E799A7245 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SubsystemDescriptor_tF663011CB44AB1D342821BBEF7B6811E799A7245 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline SubsystemDescriptor_tF663011CB44AB1D342821BBEF7B6811E799A7245 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SubsystemDescriptor_tF663011CB44AB1D342821BBEF7B6811E799A7245 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SubsystemDescriptor_tF663011CB44AB1D342821BBEF7B6811E799A7245 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider[]
struct SubsystemDescriptorWithProviderU5BU5D_tD40368996299CE59717A7256C15AE12F9DD44EC0  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) SubsystemDescriptorWithProvider_t32DD334657CFBA22F2FBA399258B087104A29C3E * m_Items[1];

public:
	inline SubsystemDescriptorWithProvider_t32DD334657CFBA22F2FBA399258B087104A29C3E * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SubsystemDescriptorWithProvider_t32DD334657CFBA22F2FBA399258B087104A29C3E ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SubsystemDescriptorWithProvider_t32DD334657CFBA22F2FBA399258B087104A29C3E * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline SubsystemDescriptorWithProvider_t32DD334657CFBA22F2FBA399258B087104A29C3E * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SubsystemDescriptorWithProvider_t32DD334657CFBA22F2FBA399258B087104A29C3E ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SubsystemDescriptorWithProvider_t32DD334657CFBA22F2FBA399258B087104A29C3E * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.SubsystemsImplementation.SubsystemWithProvider[]
struct SubsystemWithProviderU5BU5D_t8A3DC7B8FFB1D676FD165C6B1FFE6DC8DF52CFCB  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E * m_Items[1];

public:
	inline SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Microsoft.MixedReality.Toolkit.Input.SyntheticHandsSubsystem[]
struct SyntheticHandsSubsystemU5BU5D_tFE1E7D298E21D70C2D1000ECAE1593D221CE6964  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) SyntheticHandsSubsystem_t7DA1899A502CE90BDF70B2A352B66B639B10CA19 * m_Items[1];

public:
	inline SyntheticHandsSubsystem_t7DA1899A502CE90BDF70B2A352B66B639B10CA19 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SyntheticHandsSubsystem_t7DA1899A502CE90BDF70B2A352B66B639B10CA19 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SyntheticHandsSubsystem_t7DA1899A502CE90BDF70B2A352B66B639B10CA19 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline SyntheticHandsSubsystem_t7DA1899A502CE90BDF70B2A352B66B639B10CA19 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SyntheticHandsSubsystem_t7DA1899A502CE90BDF70B2A352B66B639B10CA19 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SyntheticHandsSubsystem_t7DA1899A502CE90BDF70B2A352B66B639B10CA19 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Microsoft.MixedReality.Toolkit.SystemInterfaceType[]
struct SystemInterfaceTypeU5BU5D_t1945B9B93E492DC6110554F4306655E31A023D3D  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) SystemInterfaceType_tD26D47D33FB0297B63287F4344DDE904AD50B2F8 * m_Items[1];

public:
	inline SystemInterfaceType_tD26D47D33FB0297B63287F4344DDE904AD50B2F8 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SystemInterfaceType_tD26D47D33FB0297B63287F4344DDE904AD50B2F8 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SystemInterfaceType_tD26D47D33FB0297B63287F4344DDE904AD50B2F8 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline SystemInterfaceType_tD26D47D33FB0297B63287F4344DDE904AD50B2F8 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SystemInterfaceType_tD26D47D33FB0297B63287F4344DDE904AD50B2F8 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SystemInterfaceType_tD26D47D33FB0297B63287F4344DDE904AD50B2F8 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Microsoft.MixedReality.Toolkit.SystemType[]
struct SystemTypeU5BU5D_t2F237B21A84670845C7EF2FD11853407CB62BAB0  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) SystemType_tC66B6E67B2D1045958296A6D7D4EFE000A5EF7F6 * m_Items[1];

public:
	inline SystemType_tC66B6E67B2D1045958296A6D7D4EFE000A5EF7F6 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SystemType_tC66B6E67B2D1045958296A6D7D4EFE000A5EF7F6 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SystemType_tC66B6E67B2D1045958296A6D7D4EFE000A5EF7F6 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline SystemType_tC66B6E67B2D1045958296A6D7D4EFE000A5EF7F6 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SystemType_tC66B6E67B2D1045958296A6D7D4EFE000A5EF7F6 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SystemType_tC66B6E67B2D1045958296A6D7D4EFE000A5EF7F6 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// TMPro.TMP_Character[]
struct TMP_CharacterU5BU5D_tCE0489A7F16625E12EE66C9B6347340904A6DF8F  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C * m_Items[1];

public:
	inline TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B  m_Items[1];

public:
	inline TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___textElement_4), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___fontAsset_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___spriteAsset_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___material_8), (void*)NULL);
		#endif
	}
	inline TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___textElement_4), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___fontAsset_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___spriteAsset_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___material_8), (void*)NULL);
		#endif
	}
};
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t5271ED3FC5D741D05A220867865A1DA1EB04919A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * m_Items[1];

public:
	inline TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// TMPro.TMP_FontAsset[]
struct TMP_FontAssetU5BU5D_t428AAB45232CFFF6A5EF8E12B0633C5E6226902F  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * m_Items[1];

public:
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};

il2cpp_hresult_t IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue);
il2cpp_hresult_t IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue);
il2cpp_hresult_t IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, Il2CppIInspectable** comReturnValue);
il2cpp_hresult_t IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue);
il2cpp_hresult_t IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue);
il2cpp_hresult_t IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, Il2CppIInspectable** comReturnValue);
il2cpp_hresult_t IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue);
il2cpp_hresult_t IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue);
il2cpp_hresult_t IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, Il2CppIInspectable* ___value1);
il2cpp_hresult_t IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, Il2CppIInspectable* ___value1);
il2cpp_hresult_t IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0);
il2cpp_hresult_t IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___value0);
il2cpp_hresult_t IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IVector_1_GetAt_mBA6C23BCC40C7DF84A536625893E9A0555934648_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, Il2CppHString* comReturnValue);
il2cpp_hresult_t IVector_1_get_Size_mC0B5D4782738E0B24A270191E21433602822E83C_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IVector_1_GetView_m66C23AB450B239D180A8CFB5845DE953DCA5B1BC_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IVectorView_1_tCFBC8EDE229384588147EBD3FD82FC05B2094F7B** comReturnValue);
il2cpp_hresult_t IVector_1_IndexOf_mFE8055199D6BAE9AC1A710B850D42E2420BA7A1C_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___value0, uint32_t* ___index1, bool* comReturnValue);
il2cpp_hresult_t IVector_1_SetAt_m74B4EACCE0FD046A69612801BE89576D1B89EFE7_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, Il2CppHString ___value1);
il2cpp_hresult_t IVector_1_InsertAt_mA7015C0AC21D78FBF5445079FC5E599864DF1AAB_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, Il2CppHString ___value1);
il2cpp_hresult_t IVector_1_RemoveAt_mD94C0BA56DC42A6A7E4ACD74916F54E28BB7560B_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0);
il2cpp_hresult_t IVector_1_Append_m0D965981CC375C82D81BEB38BD507A7758162C03_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___value0);
il2cpp_hresult_t IVector_1_RemoveAtEnd_m5ECF9A79E5C9BEFA6F649F505E5C0ECA3352005A_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IVector_1_Clear_mD0C225076F84170D7A1852A7E2AAA6E78C2FC3F6_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IVector_1_GetMany_mF25979266471B5DB5B97337018AF6EBFF5A7E6ED_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppHString* ___items1, uint32_t* comReturnValue);
il2cpp_hresult_t IVector_1_ReplaceAll_mD4659488CFF7E3374C5B90E81DA65309CA0383DA_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___items0ArraySize, Il2CppHString* ___items0);
il2cpp_hresult_t IIterable_1_First_m03F765E1BD333E4E315525DE80BF54183A4D54D7_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t125F1266580B29D637CD7546CA3812EB7C0B0D9D** comReturnValue);
il2cpp_hresult_t IIterable_1_First_m512126C71D7E9D1C31B56F64455F33E9FEEC89F8_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t6A46A7244E5AAD0AE4F2A07AF43DA5052D55F4A4** comReturnValue);
il2cpp_hresult_t IIterable_1_First_mD8D790F1EED3414261E3D73A15AA6B40BD8B4A87_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t966CEB5AF294B82E90C669B54974D432637938CF** comReturnValue);
il2cpp_hresult_t IVectorView_1_GetAt_m82D2A577BA5648EC2250965C3B5C387D4F4B4B37_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, Il2CppHString* comReturnValue);
il2cpp_hresult_t IVectorView_1_get_Size_m54221802171BF5F28DF4CA0F24E67F313422DD22_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IVectorView_1_IndexOf_m118FF0974AC87D8D3672CAECB4F65905FF6DFB36_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___value0, uint32_t* ___index1, bool* comReturnValue);
il2cpp_hresult_t IVectorView_1_GetMany_m5074F5434651286428FFD37C739E8F74B21F9933_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppHString* ___items1, uint32_t* comReturnValue);
il2cpp_hresult_t IVectorView_1_GetAt_m72849F526862E096635BA971A074D9B06ABFEE1E_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8** comReturnValue);
il2cpp_hresult_t IVectorView_1_get_Size_mB93C08E36F2225BE1862007FAF30C9F2DEE8DAD9_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IVectorView_1_IndexOf_m3D87181F28EC65303ECB5017476C3B38D0944E17_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8* ___value0, uint32_t* ___index1, bool* comReturnValue);
il2cpp_hresult_t IVectorView_1_GetMany_mE432D0460C5D84FEC9104DF80F5809975EAE32F8_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___startIndex0, uint32_t ___items1ArraySize, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8** ___items1, uint32_t* comReturnValue);
il2cpp_hresult_t IVectorView_1_GetAt_m0855A7387A667ECB7E4D4F1B3A31A83AACCD05ED_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, IIterable_1_t76BB785EC29C8526627DE0ACEA068DB15E5388CE** comReturnValue);
il2cpp_hresult_t IVectorView_1_get_Size_mE2ADD9F055E46C323505106C943968E34D150C79_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IVectorView_1_IndexOf_m9E8AA67DA019A757DFE52F6CA5F2270742D3E1AB_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterable_1_t76BB785EC29C8526627DE0ACEA068DB15E5388CE* ___value0, uint32_t* ___index1, bool* comReturnValue);
il2cpp_hresult_t IVectorView_1_GetMany_m44B463D211EE79DF2C5C415E68967A15E1C14090_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___startIndex0, uint32_t ___items1ArraySize, IIterable_1_t76BB785EC29C8526627DE0ACEA068DB15E5388CE** ___items1, uint32_t* comReturnValue);


// System.Byte System.String::System.IConvertible.ToByte(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t String_System_IConvertible_ToByte_m0372A27BC0CA7092D0243C51084E07E93033E14E (String_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Int16 System.String::System.IConvertible.ToInt16(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t String_System_IConvertible_ToInt16_mDDF2CB78C98BB55D203D2F553792E8925DD7CE91 (String_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.UInt16 System.String::System.IConvertible.ToUInt16(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t String_System_IConvertible_ToUInt16_mCD4F964432212E2E7CA146644743242E37027BE3 (String_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Int32 System.String::System.IConvertible.ToInt32(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_System_IConvertible_ToInt32_m28311B4AFA170DEE7B935992B8F9BA2840B29DBB (String_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.UInt32 System.String::System.IConvertible.ToUInt32(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t String_System_IConvertible_ToUInt32_m838FDEB65F9DF280A0277AA06B9D183D00F521FC (String_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Int64 System.String::System.IConvertible.ToInt64(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t String_System_IConvertible_ToInt64_mA6D47A4259AB52C426A9BC9BA0836BFC70823F5D (String_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.UInt64 System.String::System.IConvertible.ToUInt64(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t String_System_IConvertible_ToUInt64_m13806C91DEBC3534456C10A569CAEDF96B5D9A6D (String_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Single System.String::System.IConvertible.ToSingle(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float String_System_IConvertible_ToSingle_m86AAA7DF36F2533D2FE86919319FF52B9CB1B32C (String_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Double System.String::System.IConvertible.ToDouble(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double String_System_IConvertible_ToDouble_m98ACDCD0DE2EDEE705A3C799F8819D8F2EDABA4A (String_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Guid System.Guid::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t  Guid_Parse_mE51B684FA0F87BDAFAFCCB699A209B1ACB56960A (String_t* ___input0, const RuntimeMethod* method);

// COM Callable Wrapper for System.Diagnostics.StackFrame[]
struct StackFrameU5BU5D_t29238B62C287BAACD78F100511D4023931CEA8A1_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<StackFrameU5BU5D_t29238B62C287BAACD78F100511D4023931CEA8A1_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline StackFrameU5BU5D_t29238B62C287BAACD78F100511D4023931CEA8A1_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<StackFrameU5BU5D_t29238B62C287BAACD78F100511D4023931CEA8A1_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_StackFrameU5BU5D_t29238B62C287BAACD78F100511D4023931CEA8A1(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(StackFrameU5BU5D_t29238B62C287BAACD78F100511D4023931CEA8A1_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) StackFrameU5BU5D_t29238B62C287BAACD78F100511D4023931CEA8A1_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.StatefulInteractable[]
struct StatefulInteractableU5BU5D_t492BAF2D5618C99849FE7EF1747205A10778B462_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<StatefulInteractableU5BU5D_t492BAF2D5618C99849FE7EF1747205A10778B462_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline StatefulInteractableU5BU5D_t492BAF2D5618C99849FE7EF1747205A10778B462_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<StatefulInteractableU5BU5D_t492BAF2D5618C99849FE7EF1747205A10778B462_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_StatefulInteractableU5BU5D_t492BAF2D5618C99849FE7EF1747205A10778B462(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(StatefulInteractableU5BU5D_t492BAF2D5618C99849FE7EF1747205A10778B462_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) StatefulInteractableU5BU5D_t492BAF2D5618C99849FE7EF1747205A10778B462_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_ComCallableWrapper>, IVector_1_t093B62FDC20CAEC2AC32527E7B0AAD1861378742, IIterable_1_t94592E586C395F026290ACC676E74C560595CC26, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824, IIterable_1_t05BE14C1DEA010486117E0E313F29EF024BDB2BF, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_tCFBC8EDE229384588147EBD3FD82FC05B2094F7B, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IVectorView_1_t7215C7C44306F73B6AC4A835AEABA3B0222EA80A, IVectorView_1_tD47C8EE1F4E3E949FBCFF7E383769FCC5371088F, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC, IReferenceArray_1_t3DC61A9786523DA4AD29B000631513D291526E95, IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8
{
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVector_1_t093B62FDC20CAEC2AC32527E7B0AAD1861378742::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVector_1_t093B62FDC20CAEC2AC32527E7B0AAD1861378742*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t94592E586C395F026290ACC676E74C560595CC26::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t94592E586C395F026290ACC676E74C560595CC26*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t05BE14C1DEA010486117E0E313F29EF024BDB2BF::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t05BE14C1DEA010486117E0E313F29EF024BDB2BF*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_tCFBC8EDE229384588147EBD3FD82FC05B2094F7B::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_tCFBC8EDE229384588147EBD3FD82FC05B2094F7B*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t7215C7C44306F73B6AC4A835AEABA3B0222EA80A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t7215C7C44306F73B6AC4A835AEABA3B0222EA80A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_tD47C8EE1F4E3E949FBCFF7E383769FCC5371088F::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_tD47C8EE1F4E3E949FBCFF7E383769FCC5371088F*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IReferenceArray_1_t3DC61A9786523DA4AD29B000631513D291526E95::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IReferenceArray_1_t3DC61A9786523DA4AD29B000631513D291526E95*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(13);
		interfaceIds[0] = IVector_1_t093B62FDC20CAEC2AC32527E7B0AAD1861378742::IID;
		interfaceIds[1] = IIterable_1_t94592E586C395F026290ACC676E74C560595CC26::IID;
		interfaceIds[2] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[3] = IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824::IID;
		interfaceIds[4] = IIterable_1_t05BE14C1DEA010486117E0E313F29EF024BDB2BF::IID;
		interfaceIds[5] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[6] = IVectorView_1_tCFBC8EDE229384588147EBD3FD82FC05B2094F7B::IID;
		interfaceIds[7] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[8] = IVectorView_1_t7215C7C44306F73B6AC4A835AEABA3B0222EA80A::IID;
		interfaceIds[9] = IVectorView_1_tD47C8EE1F4E3E949FBCFF7E383769FCC5371088F::IID;
		interfaceIds[10] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;
		interfaceIds[11] = IReferenceArray_1_t3DC61A9786523DA4AD29B000631513D291526E95::IID;
		interfaceIds[12] = IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID;

		*iidCount = 13;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_GetAt_mBA6C23BCC40C7DF84A536625893E9A0555934648(uint32_t ___index0, Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVector_1_GetAt_mBA6C23BCC40C7DF84A536625893E9A0555934648_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_get_Size_mC0B5D4782738E0B24A270191E21433602822E83C(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVector_1_get_Size_mC0B5D4782738E0B24A270191E21433602822E83C_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_GetView_m66C23AB450B239D180A8CFB5845DE953DCA5B1BC(IVectorView_1_tCFBC8EDE229384588147EBD3FD82FC05B2094F7B** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVector_1_GetView_m66C23AB450B239D180A8CFB5845DE953DCA5B1BC_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_IndexOf_mFE8055199D6BAE9AC1A710B850D42E2420BA7A1C(Il2CppHString ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVector_1_IndexOf_mFE8055199D6BAE9AC1A710B850D42E2420BA7A1C_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_SetAt_m74B4EACCE0FD046A69612801BE89576D1B89EFE7(uint32_t ___index0, Il2CppHString ___value1) IL2CPP_OVERRIDE
	{
		return IVector_1_SetAt_m74B4EACCE0FD046A69612801BE89576D1B89EFE7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_InsertAt_mA7015C0AC21D78FBF5445079FC5E599864DF1AAB(uint32_t ___index0, Il2CppHString ___value1) IL2CPP_OVERRIDE
	{
		return IVector_1_InsertAt_mA7015C0AC21D78FBF5445079FC5E599864DF1AAB_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAt_mD94C0BA56DC42A6A7E4ACD74916F54E28BB7560B(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IVector_1_RemoveAt_mD94C0BA56DC42A6A7E4ACD74916F54E28BB7560B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_Append_m0D965981CC375C82D81BEB38BD507A7758162C03(Il2CppHString ___value0) IL2CPP_OVERRIDE
	{
		return IVector_1_Append_m0D965981CC375C82D81BEB38BD507A7758162C03_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAtEnd_m5ECF9A79E5C9BEFA6F649F505E5C0ECA3352005A() IL2CPP_OVERRIDE
	{
		return IVector_1_RemoveAtEnd_m5ECF9A79E5C9BEFA6F649F505E5C0ECA3352005A_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_Clear_mD0C225076F84170D7A1852A7E2AAA6E78C2FC3F6() IL2CPP_OVERRIDE
	{
		return IVector_1_Clear_mD0C225076F84170D7A1852A7E2AAA6E78C2FC3F6_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_GetMany_mF25979266471B5DB5B97337018AF6EBFF5A7E6ED(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppHString* ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVector_1_GetMany_mF25979266471B5DB5B97337018AF6EBFF5A7E6ED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_ReplaceAll_mD4659488CFF7E3374C5B90E81DA65309CA0383DA(uint32_t ___items0ArraySize, Il2CppHString* ___items0) IL2CPP_OVERRIDE
	{
		return IVector_1_ReplaceAll_mD4659488CFF7E3374C5B90E81DA65309CA0383DA_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___items0ArraySize, ___items0);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m03F765E1BD333E4E315525DE80BF54183A4D54D7(IIterator_1_t125F1266580B29D637CD7546CA3812EB7C0B0D9D** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m03F765E1BD333E4E315525DE80BF54183A4D54D7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m512126C71D7E9D1C31B56F64455F33E9FEEC89F8(IIterator_1_t6A46A7244E5AAD0AE4F2A07AF43DA5052D55F4A4** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m512126C71D7E9D1C31B56F64455F33E9FEEC89F8_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mD8D790F1EED3414261E3D73A15AA6B40BD8B4A87(IIterator_1_t966CEB5AF294B82E90C669B54974D432637938CF** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mD8D790F1EED3414261E3D73A15AA6B40BD8B4A87_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m82D2A577BA5648EC2250965C3B5C387D4F4B4B37(uint32_t ___index0, Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m82D2A577BA5648EC2250965C3B5C387D4F4B4B37_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m54221802171BF5F28DF4CA0F24E67F313422DD22(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m54221802171BF5F28DF4CA0F24E67F313422DD22_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m118FF0974AC87D8D3672CAECB4F65905FF6DFB36(Il2CppHString ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_m118FF0974AC87D8D3672CAECB4F65905FF6DFB36_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m5074F5434651286428FFD37C739E8F74B21F9933(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppHString* ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m5074F5434651286428FFD37C739E8F74B21F9933_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m72849F526862E096635BA971A074D9B06ABFEE1E(uint32_t ___index0, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m72849F526862E096635BA971A074D9B06ABFEE1E_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_mB93C08E36F2225BE1862007FAF30C9F2DEE8DAD9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_mB93C08E36F2225BE1862007FAF30C9F2DEE8DAD9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m3D87181F28EC65303ECB5017476C3B38D0944E17(IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_m3D87181F28EC65303ECB5017476C3B38D0944E17_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_mE432D0460C5D84FEC9104DF80F5809975EAE32F8(uint32_t ___startIndex0, uint32_t ___items1ArraySize, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_mE432D0460C5D84FEC9104DF80F5809975EAE32F8_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m0855A7387A667ECB7E4D4F1B3A31A83AACCD05ED(uint32_t ___index0, IIterable_1_t76BB785EC29C8526627DE0ACEA068DB15E5388CE** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m0855A7387A667ECB7E4D4F1B3A31A83AACCD05ED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_mE2ADD9F055E46C323505106C943968E34D150C79(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_mE2ADD9F055E46C323505106C943968E34D150C79_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m9E8AA67DA019A757DFE52F6CA5F2270742D3E1AB(IIterable_1_t76BB785EC29C8526627DE0ACEA068DB15E5388CE* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_m9E8AA67DA019A757DFE52F6CA5F2270742D3E1AB_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m44B463D211EE79DF2C5C415E68967A15E1C14090(uint32_t ___startIndex0, uint32_t ___items1ArraySize, IIterable_1_t76BB785EC29C8526627DE0ACEA068DB15E5388CE** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m44B463D211EE79DF2C5C415E68967A15E1C14090_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IReferenceArray_1_get_Value_m566B7DDA77DE15F95C23C868F14F9834692C2327(uint32_t* comReturnValueArraySize, Il2CppHString** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* returnValue;
		try
		{
			returnValue = static_cast<StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*>(GetManagedObjectInline());
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of return value back from managed representation
		uint32_t _returnValue_marshaledArraySize = 0;
		Il2CppHString* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			_returnValue_marshaledArraySize = static_cast<uint32_t>((returnValue)->max_length);
			_returnValue_marshaled = il2cpp_codegen_marshal_allocate_array<Il2CppHString>(static_cast<int32_t>(_returnValue_marshaledArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(_returnValue_marshaledArraySize)); i++)
			{
				if ((returnValue)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)) == NULL)
				{
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("returnValue_item"), NULL);
				}
				(_returnValue_marshaled)[i] = il2cpp_codegen_create_hstring((returnValue)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
			}
		}
		else
		{
			_returnValue_marshaledArraySize = 0;
			_returnValue_marshaled = NULL;
		}

		*comReturnValueArraySize = _returnValue_marshaledArraySize;
		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_Type_m2BC440F5119A133BE4DD895657519ADAA3B34272(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			returnValue = 1036;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_IsNumericScalar_mC8DE97926668A5F2EA3F4A9B128E966CBC7B0D60(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		bool returnValue;
		try
		{
			returnValue = false;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8_m25D96C5F9AC133BF7B682C59FE83EE05A0075B05(uint8_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("StringArray", "Byte");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_mBE4A7DC8A2B92F83EE058AE7515E84DADFA206AE(int16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("StringArray", "Int16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_mCF513D800195CA7050FD5AFB4E710FB0CFB531B5(uint16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("StringArray", "UInt16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_mDE5543C20D3D3C9E773CB6EDBDBC789D12CC59BA(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("StringArray", "Int32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_mD48C2097876EAE6D1E218D9123F58F168B374205(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("StringArray", "UInt32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m4BAC154BEC3584DF3E34EDA6033EEF3DB6D4132E(int64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("StringArray", "Int64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_m981379F85C0C44EDBDD830A293693BE0BB3F62CA(uint64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("StringArray", "UInt64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_mED031D57B17B0F7BD3B4B250821D070155889F1F(float* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("StringArray", "Single");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_mA0880A7E89CE09C2639D6F8065B18E8F77EB082F(double* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("StringArray", "Double");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m7B2226E30F72B0CCAE54B8EDB1AC4ACF1BE860A8(Il2CppChar* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("StringArray", "Char16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m21FCEEA690B32CD86A36D40FB837FC7D894D5587(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("StringArray", "Boolean");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_m8D5702E4E1C67366D65DA23CA2812D6572DF819C(Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("StringArray", "String");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m885F2850B49DB4B046564BC5FE414256801D9A11(Guid_t * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("StringArray", "Guid");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_m023A766ED6FC58B347CF6F777F5C18C6AE246A3C(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("StringArray", "DateTime");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m063CE76264EDAF37A1DA3CA5C9CF4AF85D8FC239(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("StringArray", "TimeSpan");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m014D5E859273BA28DE642E38438EDCC64AB5C41B(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("StringArray", "Point");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_m0A952D186E59BEA03E6185EDEBAC26D544AFADAC(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("StringArray", "Size");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_m0A96600149C7E6A493B8420CB316938AEF9A1A06(Rect_tC45F1DDF39812623644DE296D8057A4958176627 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("StringArray", "Rect");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8Array_m540E0503D8CFAE2579D449884B6AA883509C79D1(uint32_t* ___value0ArraySize, uint8_t** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* managedArray = static_cast<StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			____value0_empty = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, static_cast<uint32_t>(arrayLength));
			for (il2cpp_array_size_t i = 0; i < arrayLength; i++)
			{
				String_t* item = (managedArray)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
				try
				{
					uint8_t il2cppRetVal;
					il2cppRetVal = String_System_IConvertible_ToByte_m0372A27BC0CA7092D0243C51084E07E93033E14E(item, NULL, NULL);
					(____value0_empty)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), il2cppRetVal);
				}
				catch (const Il2CppExceptionWrapper& ex)
				{
					if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
					{
						return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion((managedArray)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)), "StringArray", "String", "Byte", i);
					}

					return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("StringArray", "String", "Byte", i);
				}
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<uint8_t>(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				(*___value0)[i] = (____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16Array_m279C289854DE8A2D45A6B6B09112DD9D2F0DF849(uint32_t* ___value0ArraySize, int16_t** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* managedArray = static_cast<StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			____value0_empty = (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)SZArrayNew(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var, static_cast<uint32_t>(arrayLength));
			for (il2cpp_array_size_t i = 0; i < arrayLength; i++)
			{
				String_t* item = (managedArray)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
				try
				{
					int16_t il2cppRetVal;
					il2cppRetVal = String_System_IConvertible_ToInt16_mDDF2CB78C98BB55D203D2F553792E8925DD7CE91(item, NULL, NULL);
					(____value0_empty)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), il2cppRetVal);
				}
				catch (const Il2CppExceptionWrapper& ex)
				{
					if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
					{
						return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion((managedArray)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)), "StringArray", "String", "Int16", i);
					}

					return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("StringArray", "String", "Int16", i);
				}
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<int16_t>(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				(*___value0)[i] = (____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16Array_m090AA712F6BB39F869BCC5CB90236377EE8673B1(uint32_t* ___value0ArraySize, uint16_t** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* managedArray = static_cast<StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			____value0_empty = (UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67*)SZArrayNew(UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67_il2cpp_TypeInfo_var, static_cast<uint32_t>(arrayLength));
			for (il2cpp_array_size_t i = 0; i < arrayLength; i++)
			{
				String_t* item = (managedArray)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
				try
				{
					uint16_t il2cppRetVal;
					il2cppRetVal = String_System_IConvertible_ToUInt16_mCD4F964432212E2E7CA146644743242E37027BE3(item, NULL, NULL);
					(____value0_empty)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), il2cppRetVal);
				}
				catch (const Il2CppExceptionWrapper& ex)
				{
					if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
					{
						return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion((managedArray)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)), "StringArray", "String", "UInt16", i);
					}

					return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("StringArray", "String", "UInt16", i);
				}
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<uint16_t>(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				(*___value0)[i] = (____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32Array_mADF499B8CD16185128795A7B74D63E8CFE692B9A(uint32_t* ___value0ArraySize, int32_t** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* managedArray = static_cast<StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			____value0_empty = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, static_cast<uint32_t>(arrayLength));
			for (il2cpp_array_size_t i = 0; i < arrayLength; i++)
			{
				String_t* item = (managedArray)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
				try
				{
					int32_t il2cppRetVal;
					il2cppRetVal = String_System_IConvertible_ToInt32_m28311B4AFA170DEE7B935992B8F9BA2840B29DBB(item, NULL, NULL);
					(____value0_empty)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), il2cppRetVal);
				}
				catch (const Il2CppExceptionWrapper& ex)
				{
					if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
					{
						return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion((managedArray)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)), "StringArray", "String", "Int32", i);
					}

					return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("StringArray", "String", "Int32", i);
				}
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<int32_t>(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				(*___value0)[i] = (____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32Array_m9B44B8D2EA2907A9A96ED653ACEF04873D9483F8(uint32_t* ___value0ArraySize, uint32_t** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* managedArray = static_cast<StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			____value0_empty = (UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*)SZArrayNew(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF_il2cpp_TypeInfo_var, static_cast<uint32_t>(arrayLength));
			for (il2cpp_array_size_t i = 0; i < arrayLength; i++)
			{
				String_t* item = (managedArray)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
				try
				{
					uint32_t il2cppRetVal;
					il2cppRetVal = String_System_IConvertible_ToUInt32_m838FDEB65F9DF280A0277AA06B9D183D00F521FC(item, NULL, NULL);
					(____value0_empty)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), il2cppRetVal);
				}
				catch (const Il2CppExceptionWrapper& ex)
				{
					if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
					{
						return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion((managedArray)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)), "StringArray", "String", "UInt32", i);
					}

					return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("StringArray", "String", "UInt32", i);
				}
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<uint32_t>(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				(*___value0)[i] = (____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64Array_m9A04AC5F477463928280B42E2C40F13B15A1D564(uint32_t* ___value0ArraySize, int64_t** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* managedArray = static_cast<StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			____value0_empty = (Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6*)SZArrayNew(Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6_il2cpp_TypeInfo_var, static_cast<uint32_t>(arrayLength));
			for (il2cpp_array_size_t i = 0; i < arrayLength; i++)
			{
				String_t* item = (managedArray)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
				try
				{
					int64_t il2cppRetVal;
					il2cppRetVal = String_System_IConvertible_ToInt64_mA6D47A4259AB52C426A9BC9BA0836BFC70823F5D(item, NULL, NULL);
					(____value0_empty)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), il2cppRetVal);
				}
				catch (const Il2CppExceptionWrapper& ex)
				{
					if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
					{
						return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion((managedArray)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)), "StringArray", "String", "Int64", i);
					}

					return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("StringArray", "String", "Int64", i);
				}
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<int64_t>(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				(*___value0)[i] = (____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64Array_m776484C9C41D5A03991D89401FF84F9D425D6A5E(uint32_t* ___value0ArraySize, uint64_t** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* managedArray = static_cast<StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			____value0_empty = (UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2*)SZArrayNew(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2_il2cpp_TypeInfo_var, static_cast<uint32_t>(arrayLength));
			for (il2cpp_array_size_t i = 0; i < arrayLength; i++)
			{
				String_t* item = (managedArray)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
				try
				{
					uint64_t il2cppRetVal;
					il2cppRetVal = String_System_IConvertible_ToUInt64_m13806C91DEBC3534456C10A569CAEDF96B5D9A6D(item, NULL, NULL);
					(____value0_empty)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), il2cppRetVal);
				}
				catch (const Il2CppExceptionWrapper& ex)
				{
					if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
					{
						return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion((managedArray)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)), "StringArray", "String", "UInt64", i);
					}

					return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("StringArray", "String", "UInt64", i);
				}
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<uint64_t>(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				(*___value0)[i] = (____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingleArray_m1E9CE76FA942B3AFA8995FBAE605E84733917B57(uint32_t* ___value0ArraySize, float** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* managedArray = static_cast<StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			____value0_empty = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, static_cast<uint32_t>(arrayLength));
			for (il2cpp_array_size_t i = 0; i < arrayLength; i++)
			{
				String_t* item = (managedArray)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
				try
				{
					float il2cppRetVal;
					il2cppRetVal = String_System_IConvertible_ToSingle_m86AAA7DF36F2533D2FE86919319FF52B9CB1B32C(item, NULL, NULL);
					(____value0_empty)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), il2cppRetVal);
				}
				catch (const Il2CppExceptionWrapper& ex)
				{
					if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
					{
						return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion((managedArray)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)), "StringArray", "String", "Single", i);
					}

					return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("StringArray", "String", "Single", i);
				}
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<float>(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				(*___value0)[i] = (____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDoubleArray_m5DAB086BEB4816CAF7553E325B91A4B0B07953A5(uint32_t* ___value0ArraySize, double** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* managedArray = static_cast<StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			____value0_empty = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, static_cast<uint32_t>(arrayLength));
			for (il2cpp_array_size_t i = 0; i < arrayLength; i++)
			{
				String_t* item = (managedArray)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
				try
				{
					double il2cppRetVal;
					il2cppRetVal = String_System_IConvertible_ToDouble_m98ACDCD0DE2EDEE705A3C799F8819D8F2EDABA4A(item, NULL, NULL);
					(____value0_empty)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), il2cppRetVal);
				}
				catch (const Il2CppExceptionWrapper& ex)
				{
					if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
					{
						return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion((managedArray)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)), "StringArray", "String", "Double", i);
					}

					return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("StringArray", "String", "Double", i);
				}
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<double>(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				(*___value0)[i] = (____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16Array_m2C69248F68D7705FE44FA8F777B061FA77C706A1(uint32_t* ___value0ArraySize, Il2CppChar** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("StringArray", "Char16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_m083CB5579BC465B4D1BD84CE8382CB747A9FCC8C(uint32_t* ___value0ArraySize, bool** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("StringArray", "Boolean[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetStringArray_m680617C6226187D28C4978B710AFBB8581AAC98F(uint32_t* ___value0ArraySize, Il2CppHString** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			____value0_empty = static_cast<StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*>(GetManagedObjectInline());
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<Il2CppHString>(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				if ((____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)) == NULL)
				{
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("value"), NULL);
				}
				(*___value0)[i] = il2cpp_codegen_create_hstring((____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInspectableArray_m6DCBE370A8CAC129E6D6BD91C6503D14A8109F79(uint32_t* ___value0ArraySize, Il2CppIInspectable*** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("StringArray", "Inspectable[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuidArray_mE9983D9B5EE9AC1935C3EBD2F9E82DC7188E1D07(uint32_t* ___value0ArraySize, Guid_t ** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GuidU5BU5D_t6DCED1B9FC5592C43FAA73D81705104BD18151B8_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		GuidU5BU5D_t6DCED1B9FC5592C43FAA73D81705104BD18151B8* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* managedArray = static_cast<StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			____value0_empty = (GuidU5BU5D_t6DCED1B9FC5592C43FAA73D81705104BD18151B8*)SZArrayNew(GuidU5BU5D_t6DCED1B9FC5592C43FAA73D81705104BD18151B8_il2cpp_TypeInfo_var, static_cast<uint32_t>(arrayLength));
			for (il2cpp_array_size_t i = 0; i < arrayLength; i++)
			{
				String_t* item = (managedArray)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
				try
				{
					Guid_t  il2cppRetVal;
					il2cppRetVal = Guid_Parse_mE51B684FA0F87BDAFAFCCB699A209B1ACB56960A(item, NULL);
					(____value0_empty)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), il2cppRetVal);
				}
				catch (const Il2CppExceptionWrapper&)
				{
					return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("StringArray", "String", "Guid", i);
				}
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<Guid_t >(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				(*___value0)[i] = (____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTimeArray_mEECFC6C321405CDBC425D321E2A8EF3E7BC306A7(uint32_t* ___value0ArraySize, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("StringArray", "DateTimeOffset[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_mEAF3CA18AA928DAF3046F0F530B9324711650167(uint32_t* ___value0ArraySize, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("StringArray", "TimeSpan[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_mD4ACB0F49C7BFEC1C03A4EE4263B23B2040CECD0(uint32_t* ___value0ArraySize, Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("StringArray", "Point[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m3C079B4191330FAC3B2131D308C825BC72A5F0DC(uint32_t* ___value0ArraySize, Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("StringArray", "Size[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_m09598924D31716E1E653AE941186F8B16EA11A87(uint32_t* ___value0ArraySize, Rect_tC45F1DDF39812623644DE296D8057A4958176627 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("StringArray", "Rect[]");
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.Utilities.Substring[]
struct SubstringU5BU5D_tE332884993470F5CF7BAAA950414E4E24691A8D0_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<SubstringU5BU5D_tE332884993470F5CF7BAAA950414E4E24691A8D0_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline SubstringU5BU5D_tE332884993470F5CF7BAAA950414E4E24691A8D0_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<SubstringU5BU5D_tE332884993470F5CF7BAAA950414E4E24691A8D0_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[1] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_SubstringU5BU5D_tE332884993470F5CF7BAAA950414E4E24691A8D0(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(SubstringU5BU5D_tE332884993470F5CF7BAAA950414E4E24691A8D0_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) SubstringU5BU5D_tE332884993470F5CF7BAAA950414E4E24691A8D0_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.Subsystem[]
struct SubsystemU5BU5D_t4353D7C1DD71692C1BF7D355ADCB47DBD6DB91ED_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<SubsystemU5BU5D_t4353D7C1DD71692C1BF7D355ADCB47DBD6DB91ED_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline SubsystemU5BU5D_t4353D7C1DD71692C1BF7D355ADCB47DBD6DB91ED_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<SubsystemU5BU5D_t4353D7C1DD71692C1BF7D355ADCB47DBD6DB91ED_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_SubsystemU5BU5D_t4353D7C1DD71692C1BF7D355ADCB47DBD6DB91ED(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(SubsystemU5BU5D_t4353D7C1DD71692C1BF7D355ADCB47DBD6DB91ED_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) SubsystemU5BU5D_t4353D7C1DD71692C1BF7D355ADCB47DBD6DB91ED_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.OpenXR.SubsystemController[]
struct SubsystemControllerU5BU5D_t62CBE9EA40E0F24F9058CEDCD6C6A65A0652697D_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<SubsystemControllerU5BU5D_t62CBE9EA40E0F24F9058CEDCD6C6A65A0652697D_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline SubsystemControllerU5BU5D_t62CBE9EA40E0F24F9058CEDCD6C6A65A0652697D_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<SubsystemControllerU5BU5D_t62CBE9EA40E0F24F9058CEDCD6C6A65A0652697D_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_SubsystemControllerU5BU5D_t62CBE9EA40E0F24F9058CEDCD6C6A65A0652697D(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(SubsystemControllerU5BU5D_t62CBE9EA40E0F24F9058CEDCD6C6A65A0652697D_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) SubsystemControllerU5BU5D_t62CBE9EA40E0F24F9058CEDCD6C6A65A0652697D_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.SubsystemDescriptor[]
struct SubsystemDescriptorU5BU5D_t52E78FFA3141BD25855CE03337EB1BB6C2984877_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<SubsystemDescriptorU5BU5D_t52E78FFA3141BD25855CE03337EB1BB6C2984877_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline SubsystemDescriptorU5BU5D_t52E78FFA3141BD25855CE03337EB1BB6C2984877_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<SubsystemDescriptorU5BU5D_t52E78FFA3141BD25855CE03337EB1BB6C2984877_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_SubsystemDescriptorU5BU5D_t52E78FFA3141BD25855CE03337EB1BB6C2984877(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(SubsystemDescriptorU5BU5D_t52E78FFA3141BD25855CE03337EB1BB6C2984877_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) SubsystemDescriptorU5BU5D_t52E78FFA3141BD25855CE03337EB1BB6C2984877_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider[]
struct SubsystemDescriptorWithProviderU5BU5D_tD40368996299CE59717A7256C15AE12F9DD44EC0_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<SubsystemDescriptorWithProviderU5BU5D_tD40368996299CE59717A7256C15AE12F9DD44EC0_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline SubsystemDescriptorWithProviderU5BU5D_tD40368996299CE59717A7256C15AE12F9DD44EC0_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<SubsystemDescriptorWithProviderU5BU5D_tD40368996299CE59717A7256C15AE12F9DD44EC0_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_SubsystemDescriptorWithProviderU5BU5D_tD40368996299CE59717A7256C15AE12F9DD44EC0(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(SubsystemDescriptorWithProviderU5BU5D_tD40368996299CE59717A7256C15AE12F9DD44EC0_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) SubsystemDescriptorWithProviderU5BU5D_tD40368996299CE59717A7256C15AE12F9DD44EC0_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.SubsystemsImplementation.SubsystemWithProvider[]
struct SubsystemWithProviderU5BU5D_t8A3DC7B8FFB1D676FD165C6B1FFE6DC8DF52CFCB_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<SubsystemWithProviderU5BU5D_t8A3DC7B8FFB1D676FD165C6B1FFE6DC8DF52CFCB_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline SubsystemWithProviderU5BU5D_t8A3DC7B8FFB1D676FD165C6B1FFE6DC8DF52CFCB_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<SubsystemWithProviderU5BU5D_t8A3DC7B8FFB1D676FD165C6B1FFE6DC8DF52CFCB_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_SubsystemWithProviderU5BU5D_t8A3DC7B8FFB1D676FD165C6B1FFE6DC8DF52CFCB(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(SubsystemWithProviderU5BU5D_t8A3DC7B8FFB1D676FD165C6B1FFE6DC8DF52CFCB_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) SubsystemWithProviderU5BU5D_t8A3DC7B8FFB1D676FD165C6B1FFE6DC8DF52CFCB_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Input.SyntheticHandsSubsystem[]
struct SyntheticHandsSubsystemU5BU5D_tFE1E7D298E21D70C2D1000ECAE1593D221CE6964_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<SyntheticHandsSubsystemU5BU5D_tFE1E7D298E21D70C2D1000ECAE1593D221CE6964_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline SyntheticHandsSubsystemU5BU5D_tFE1E7D298E21D70C2D1000ECAE1593D221CE6964_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<SyntheticHandsSubsystemU5BU5D_tFE1E7D298E21D70C2D1000ECAE1593D221CE6964_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_SyntheticHandsSubsystemU5BU5D_tFE1E7D298E21D70C2D1000ECAE1593D221CE6964(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(SyntheticHandsSubsystemU5BU5D_tFE1E7D298E21D70C2D1000ECAE1593D221CE6964_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) SyntheticHandsSubsystemU5BU5D_tFE1E7D298E21D70C2D1000ECAE1593D221CE6964_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.SystemInterfaceType[]
struct SystemInterfaceTypeU5BU5D_t1945B9B93E492DC6110554F4306655E31A023D3D_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<SystemInterfaceTypeU5BU5D_t1945B9B93E492DC6110554F4306655E31A023D3D_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline SystemInterfaceTypeU5BU5D_t1945B9B93E492DC6110554F4306655E31A023D3D_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<SystemInterfaceTypeU5BU5D_t1945B9B93E492DC6110554F4306655E31A023D3D_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_SystemInterfaceTypeU5BU5D_t1945B9B93E492DC6110554F4306655E31A023D3D(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(SystemInterfaceTypeU5BU5D_t1945B9B93E492DC6110554F4306655E31A023D3D_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) SystemInterfaceTypeU5BU5D_t1945B9B93E492DC6110554F4306655E31A023D3D_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.SystemType[]
struct SystemTypeU5BU5D_t2F237B21A84670845C7EF2FD11853407CB62BAB0_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<SystemTypeU5BU5D_t2F237B21A84670845C7EF2FD11853407CB62BAB0_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline SystemTypeU5BU5D_t2F237B21A84670845C7EF2FD11853407CB62BAB0_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<SystemTypeU5BU5D_t2F237B21A84670845C7EF2FD11853407CB62BAB0_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_SystemTypeU5BU5D_t2F237B21A84670845C7EF2FD11853407CB62BAB0(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(SystemTypeU5BU5D_t2F237B21A84670845C7EF2FD11853407CB62BAB0_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) SystemTypeU5BU5D_t2F237B21A84670845C7EF2FD11853407CB62BAB0_ComCallableWrapper(obj));
}

// COM Callable Wrapper for TMPro.TMP_Character[]
struct TMP_CharacterU5BU5D_tCE0489A7F16625E12EE66C9B6347340904A6DF8F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<TMP_CharacterU5BU5D_tCE0489A7F16625E12EE66C9B6347340904A6DF8F_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline TMP_CharacterU5BU5D_tCE0489A7F16625E12EE66C9B6347340904A6DF8F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<TMP_CharacterU5BU5D_tCE0489A7F16625E12EE66C9B6347340904A6DF8F_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_TMP_CharacterU5BU5D_tCE0489A7F16625E12EE66C9B6347340904A6DF8F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(TMP_CharacterU5BU5D_tCE0489A7F16625E12EE66C9B6347340904A6DF8F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) TMP_CharacterU5BU5D_tCE0489A7F16625E12EE66C9B6347340904A6DF8F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[1] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970_ComCallableWrapper(obj));
}

// COM Callable Wrapper for TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t5271ED3FC5D741D05A220867865A1DA1EB04919A_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<TMP_ColorGradientU5BU5D_t5271ED3FC5D741D05A220867865A1DA1EB04919A_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline TMP_ColorGradientU5BU5D_t5271ED3FC5D741D05A220867865A1DA1EB04919A_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<TMP_ColorGradientU5BU5D_t5271ED3FC5D741D05A220867865A1DA1EB04919A_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_TMP_ColorGradientU5BU5D_t5271ED3FC5D741D05A220867865A1DA1EB04919A(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(TMP_ColorGradientU5BU5D_t5271ED3FC5D741D05A220867865A1DA1EB04919A_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) TMP_ColorGradientU5BU5D_t5271ED3FC5D741D05A220867865A1DA1EB04919A_ComCallableWrapper(obj));
}

// COM Callable Wrapper for TMPro.TMP_FontAsset[]
struct TMP_FontAssetU5BU5D_t428AAB45232CFFF6A5EF8E12B0633C5E6226902F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<TMP_FontAssetU5BU5D_t428AAB45232CFFF6A5EF8E12B0633C5E6226902F_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline TMP_FontAssetU5BU5D_t428AAB45232CFFF6A5EF8E12B0633C5E6226902F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<TMP_FontAssetU5BU5D_t428AAB45232CFFF6A5EF8E12B0633C5E6226902F_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_TMP_FontAssetU5BU5D_t428AAB45232CFFF6A5EF8E12B0633C5E6226902F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(TMP_FontAssetU5BU5D_t428AAB45232CFFF6A5EF8E12B0633C5E6226902F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) TMP_FontAssetU5BU5D_t428AAB45232CFFF6A5EF8E12B0633C5E6226902F_ComCallableWrapper(obj));
}
