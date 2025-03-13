#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractableRegisteredEventArgs>
struct Action_1_t9F32937D0483D7D5F5EE6D501C90EC8AD96A73BD;
// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractableUnregisteredEventArgs>
struct Action_1_t093BAA55388BF4C1A03FA3625640C13B56C601AA;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81;
// System.Comparison`1<Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals/HandlePoint>
struct Comparison_1_t317DBD3E8FEC7893E5A036339DA3726A990AD813;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRInteractor,UnityEngine.GameObject>
struct Dictionary_2_tA69FF83EA17DA0267E4A9ADE6AFF4334D537FBD8;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor,UnityEngine.Pose>
struct Dictionary_2_tA3135A847BDD5B3E11304035C508DFB9DE47F8CC;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5;
// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRHoverFilter>
struct ExposedRegistrationList_1_t5ECEBE78A1A1B74E793C57E99502825849754A91;
// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRSelectFilter>
struct ExposedRegistrationList_1_t2925F032505D027FCBA7F35721D8B3461BE44E08;
// System.Func`3<UnityEngine.XR.Interaction.Toolkit.IXRInteractable,UnityEngine.Vector3,UnityEngine.XR.Interaction.Toolkit.DistanceInfo>
struct Func_3_tC0D6CA7DF2D961F4198C83B60BDB01420D3CBB04;
// System.Collections.Generic.IEnumerable`1<Microsoft.MixedReality.Toolkit.SpatialManipulation.BoundsHandleInteractable>
struct IEnumerable_1_t53E3E3F8B2D60D7A31BE0A513DB6B51F79074B1D;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.SpatialManipulation.BoundsHandleInteractable>
struct List_1_t4A4AF37F205259DAE4A1A36EF9F01A2931624C8F;
// System.Collections.Generic.List`1<UnityEngine.Collider>
struct List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B;
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
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<UnityEngine.Object>
struct List_1_t9D216521E6A213FF8562D215598D336ABB5474F4;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver>
struct List_1_t9A5B88927BC40F25C1C254F6BE66C7E8E6FFC63E;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.SystemInterfaceType>
struct List_1_t50F7DB434300724D6B4DD90C3D02C971B591D71B;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.SpatialManipulation.TransformConstraint>
struct List_1_tA91EA8B6A14E0CF8B4F507C0492B2B22257FF79C;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor>
struct List_1_tEF7E6AA6FF2A58B22A1943486BE24649DC3CC2AC;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals/HandlePoint>
struct List_1_t5B44A6C65ABA13F93E4D6EC9EC79567BB087CC9B;
// Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemDescriptor`2<Microsoft.MixedReality.Toolkit.Subsystems.HandsAggregatorSubsystem,Microsoft.MixedReality.Toolkit.Subsystems.HandsAggregatorSubsystem/Provider>
struct MRTKSubsystemDescriptor_2_tF923444318FDC4C120FF22CEF7F15CF0901BC07F;
// Microsoft.MixedReality.Toolkit.SpatialManipulation.ManipulationLogic`1<UnityEngine.Quaternion>
struct ManipulationLogic_1_tEA47F95D3636EB75B1FE4323EF1F28E0BBD8806A;
// Microsoft.MixedReality.Toolkit.SpatialManipulation.ManipulationLogic`1<UnityEngine.Vector3>
struct ManipulationLogic_1_t96147C3BA5BC388CAC408A8E6E0F9250563B6FE0;
// System.Collections.Generic.Stack`1<Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals/HandlePoint>
struct Stack_1_tBBB21EE44D1282CA179A656956ED6B3BF9DD4B32;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>[]
struct Action_1U5BU5D_t8054A94E13920B6EAD3A3ACE9E49CCEB297F5292;
// System.Boolean[]
struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C;
// Microsoft.MixedReality.Toolkit.SpatialManipulation.BoundsHandleInteractable[]
struct BoundsHandleInteractableU5BU5D_t53F23C752969C1C7D05C449BF6CC5467AEF39E9E;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// Microsoft.MixedReality.Toolkit.SpatialManipulation.ConstraintManager[]
struct ConstraintManagerU5BU5D_t9EB29F6BCA4EDA40BE2B2D64ADDB33461924E6D2;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.InputSystem.InputBinding[]
struct InputBindingU5BU5D_tFBF775077101E34ED6C54C4468F6E0722ECB2EF6;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.LayerMask[]
struct LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// Microsoft.MixedReality.Toolkit.SpatialManipulation.HandConstraint/SolverSafeZone[]
struct SolverSafeZoneU5BU5D_t682C02E4E1267E13E7968977F5DB0E6B3259E796;
// Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals/HandlePoint[]
struct HandlePointU5BU5D_tF4198D52EE89D95AA3DAEA10800965485AB31C28;
// UnityEngine.XR.Interaction.Toolkit.ActivateEvent
struct ActivateEvent_tA788B1E186D477BA625450B006EA76D0370B0C7F;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// Microsoft.MixedReality.Toolkit.SpatialManipulation.BoundsControl
struct BoundsControl_t020B1395A554F19C45493DAA05E7ECF0D611AB9E;
// Microsoft.MixedReality.Toolkit.SpatialManipulation.BoundsHandleInteractable
struct BoundsHandleInteractable_tF957D394A29234622B27304D99E5408B7971132B;
// UnityEngine.BoxCollider
struct BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// Microsoft.MixedReality.Toolkit.SpatialManipulation.ConstraintManager
struct ConstraintManager_tE7450B2135FBFBA3217990D1B06D57EF56A85AD0;
// Microsoft.MixedReality.Toolkit.ControllerLookup
struct ControllerLookup_tD0B78B87AC3FB26F191A1BB5E5DF863D5285A9C9;
// UnityEngine.XR.Interaction.Toolkit.DeactivateEvent
struct DeactivateEvent_t587971B94B6589C04E9D72515DF079C1EE91DB3C;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// Microsoft.MixedReality.Toolkit.HandBounds
struct HandBounds_t207C2DB17C5F23DBCE0FF37C3A349E1725D40510;
// Microsoft.MixedReality.Toolkit.SpatialManipulation.HandConstraintPalmUp
struct HandConstraintPalmUp_t7213D04B52E9AF3933402DCFACAFF6EEC8424F46;
// Microsoft.MixedReality.Toolkit.Subsystems.HandsAggregatorSubsystem
struct HandsAggregatorSubsystem_tD97840A5BCF555DA3D8F08A5D47AD08F1E0F8FFE;
// UnityEngine.XR.Interaction.Toolkit.HoverEnterEvent
struct HoverEnterEvent_t0CC8E826E7F14B3A2B7A343424C3533BFCE32FC6;
// UnityEngine.XR.Interaction.Toolkit.HoverExitEvent
struct HoverExitEvent_tAAF1D57BA8CEBA5B39F1409EBD6978CE06A5B341;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor
struct IXRSelectInteractor_t48BDDD33F735BFB31B95990F96FA44A8B2C00E1A;
// UnityEngine.InputSystem.InputAction
struct InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B;
// UnityEngine.InputSystem.InputActionAsset
struct InputActionAsset_t528ACD0ABA45255A4FD391F0C3D26B1B50B82B18;
// UnityEngine.InputSystem.InputActionMap
struct InputActionMap_t588F4834F020838C4E8AE148F8A42CC84FA75B44;
// UnityEngine.InputSystem.InputActionReference
struct InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621;
// UnityEngine.InputSystem.InputActionState
struct InputActionState_tBAB20591FD6515A6FF5D70EF641A423E270A33F9;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9;
// Microsoft.MixedReality.Toolkit.MRTKBaseInteractable
struct MRTKBaseInteractable_tD2EF3F3747FEC77DC86C6F96F61C3496529229A7;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0;
// UnityEngine.MeshRenderer
struct MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC;
// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent
struct SelectEnterEvent_t147569BD69EAD584499BE2FC174458E3150C5918;
// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent
struct SelectExitEvent_t8A19A5E960E731FDA7BC2509D96527199FDA57F8;
// Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver
struct Solver_tA73899FFFB9BC2103F0BC1C9BCF601856A5BB455;
// Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler
struct SolverHandler_t59B1037EA04BC8C41E82EAC219138D9DE50F7AC2;
// Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals
struct SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E;
// Microsoft.MixedReality.Toolkit.StatefulInteractable
struct StatefulInteractable_t67843E0A65DBFB7777C42C51281749C8C71AA203;
// Microsoft.MixedReality.Toolkit.StatefulTimerEvent
struct StatefulTimerEvent_t927481F66F373F0FBDF12B0358DDBBE179426EC2;
// System.String
struct String_t;
// UnityEngine.SubsystemsImplementation.SubsystemProvider
struct SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9;
// Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism
struct SurfaceMagnetism_t23AC1508708E4CA5D97B38DEDEDD8DB5FE6E6161;
// Microsoft.MixedReality.Toolkit.SystemType
struct SystemType_tC66B6E67B2D1045958296A6D7D4EFE000A5EF7F6;
// Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace
struct TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2;
// Microsoft.MixedReality.Toolkit.TimedFlag
struct TimedFlag_tC5C87C9B210414D5EFFF70BA26D6C98CD11D655A;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// Microsoft.MixedReality.Toolkit.SpatialManipulation.TransformConstraint
struct TransformConstraint_t5F1A52B3005A031C1D9DCE0DD7FE13CCAD6DEF70;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable
struct XRBaseInteractable_t6D8F476542495E625DE6A3454D4BC9323B6EDCBF;
// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor
struct XRBaseInteractor_t78FB23CA3FFA1C934E25A72B172879C3AE6D887F;
// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent
struct XRInteractableEvent_tD08962B410D993D428BA0CDF9D1AD5273AEA53DD;
// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager
struct XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// Microsoft.MixedReality.Toolkit.SpatialManipulation.ConstraintManager/<>c__DisplayClass9_0
struct U3CU3Ec__DisplayClass9_0_tC1C416D48DFA1656C7D07D0F756FA32EAB996022;
// Microsoft.MixedReality.Toolkit.SpatialManipulation.HandConstraintPalmUp/<WorldLockedReattachCheck>d__44
struct U3CWorldLockedReattachCheckU3Ed__44_t5C2D407949FC1A50AA5DFCDC31B071F7E88CE4A8;
// Microsoft.MixedReality.Toolkit.Subsystems.HandsAggregatorSubsystem/Provider
struct Provider_tBC4AED706D555B8DEA468EE4E93B08F061731AE4;
// Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals/<>c
struct U3CU3Ec_t3ED49D580091D12AAF39D1B417F831F77CFFE5A1;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BoundsCalculator_tF5C4F6617178343FDC372B9AE75769BBCEB35A4B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Comparison_1_t317DBD3E8FEC7893E5A036339DA3726A990AD813_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t4A4AF37F205259DAE4A1A36EF9F01A2931624C8F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t5B44A6C65ABA13F93E4D6EC9EC79567BB087CC9B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityRaycaster_t1C4D8F90AF243DB6D246BF422C68F79C9F261239_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Solver_tA73899FFFB9BC2103F0BC1C9BCF601856A5BB455_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stack_1_tBBB21EE44D1282CA179A656956ED6B3BF9DD4B32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SurfaceMagnetism_t23AC1508708E4CA5D97B38DEDEDD8DB5FE6E6161_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t3ED49D580091D12AAF39D1B417F831F77CFFE5A1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRSubsystemHelpers_t1ABA0E77205A5382BC3173866C111D39150FBCF1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral02AA96707E7A8BC913E2055F3E956D4373F24EB4;
IL2CPP_EXTERN_C String_t* _stringLiteral0C5F77CBC6B48EEFA86CFC18E2E3A9CDF9071345;
IL2CPP_EXTERN_C String_t* _stringLiteral156474BE65CE38994FD208F520EF105B1442BDD2;
IL2CPP_EXTERN_C String_t* _stringLiteral32E2B8232B2A08F835DCBBADA5F6DD4AC8F950D6;
IL2CPP_EXTERN_C String_t* _stringLiteral386364D784E9EBB79BC2A529A56F1826D1CD16F6;
IL2CPP_EXTERN_C String_t* _stringLiteral461082FC6ABF98ACF128E2A88129BCFA9B682EC3;
IL2CPP_EXTERN_C String_t* _stringLiteral4741E14BAD1CEA187512B70D290114C5BF9FCA56;
IL2CPP_EXTERN_C String_t* _stringLiteral5529465409870544CE39603F0D2335F17AE8D433;
IL2CPP_EXTERN_C String_t* _stringLiteral5ABB6FC69C3BB627523BDF509BFD8377A238734C;
IL2CPP_EXTERN_C String_t* _stringLiteral61DB809903C95AF153BB9D39E15FCAC1EFD46716;
IL2CPP_EXTERN_C String_t* _stringLiteral7A6508B26871C3DB541D9CAAC62647C013C60BBF;
IL2CPP_EXTERN_C String_t* _stringLiteral8C740521F660B7C87495E9139EB63C242FFE0761;
IL2CPP_EXTERN_C String_t* _stringLiteral9BEC9AF53B4B6458569197244F0C5DADAD305015;
IL2CPP_EXTERN_C String_t* _stringLiteral9FEEB188C926E0D8DEBF50B93373E1DCADD88966;
IL2CPP_EXTERN_C String_t* _stringLiteralA5D8D154E5D9B4EACA86B890F2045DDCA6D915C5;
IL2CPP_EXTERN_C String_t* _stringLiteralC64F4B5B39878B5E701C71B2444ADEF3A2ECC142;
IL2CPP_EXTERN_C String_t* _stringLiteralF1B7FE9BB51A6514C5834FC0EC81CCBBF51170CD;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Comparison_1__ctor_mAC4B4A4706C8AD9BD7C5EE4EA23D66F6AD73F781_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisBoundsControl_t020B1395A554F19C45493DAA05E7ECF0D611AB9E_m84FCE31B29B93D2BAB65E24307E5C70AD984BB06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisBoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5_m0D682A42739E30A25411905C0A712C2BEE81F861_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisBoundsHandleInteractable_tF957D394A29234622B27304D99E5408B7971132B_mACB2E0D250B040FCBCB2C067A47D46B60E1DDD1A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mAB7D3DF999558CD6245266C570CF75C29A43A1C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mB21A193101C88B730BE0B4DE81333C745F419D53_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mEB4642B6BC4D45AAE8E03221E90BCFA0F9BAFFF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m51E7329BE651336CDE20A1ACC587870E066A58C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mB2700F1C088F51347988BAA8C41621826690C69D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mDA401CA344A1D0C2206FE99A7C68424742A2BD5E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mB6F14CF1BA6F38DAD0F0C414B0CCF360059913B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mC13697F6D9750E1DEA40C725761EE84AB6E7FC3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mE89B20D8EC205D2D4623900FBE848AA1A37F0CAC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_m7CB95AA45111B8F2FD8968CBDF0CE3359F6B2E08_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponents_TisConstraintManager_tE7450B2135FBFBA3217990D1B06D57EF56A85AD0_m165620A204E2A78B7D975C8F074E065FFAFC6654_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mB42E6C9F1BFF90BF7EE0DE8A2AFE68F57E9D9EF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mA9B71CA5FE7A5192A5E7B174EEEC71A8996E8120_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mFE607C7BCF5A596A1EFC651C2FFE3A530E54F8E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Sort_mD8ABD2909DA715E266F0343CC5D7CB47DBAB264F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m4AC6B8038A2B837A12F960D994624CFFAF1F1E63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m804A3970592F889B9BD2AA874A6F035465A01984_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m3336665B1EEF196DEE976CCC6504C965A9C4ECF0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mF40959BD2A0D8F1CBDCE115BDA37F7E3767EB922_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_m0A3B0C345A30C7D0D47CF483208F63593E0BAE86_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mE4286200AE97E8C0C15A5C0FEB726FAFBC770F0B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mCAF8ABB9DF08E31C419963F0B8015DAC371F4E54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SqueezableBoxVisuals_PeekSecond_TisHandlePoint_t91E19093111D8B0BCA87EDF0F669B78522CA0164_mAF9C886EE8728BAE90CCD8911E2723C89309098F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Clear_mAED243D4C34FE98E91DE4A6B27A0CA04C3BFFD98_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_GetEnumerator_mD2562D5378B6C16527028F59DB3C17101237168F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Peek_m47284331780BBF375E430E115E8A9CFC5F4A6F8B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Pop_m858C764B7F081CEF9F071C664AF31B14BDA49F56_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Push_mF803016D3C93704671BC1796E5A743AB9775A17B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1__ctor_mEC9656D31ED109BE06283F42A02BADD682FDB68F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_get_Count_mED24A025DF95B8CE560C82EE94A2A96B990BA8B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TapToPlace_OnPlacementPerformed_m5306803519FDD46FEA6F3309E23A5C3AB75CA342_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__54_0_mA39103D24E08340BDA03E05AE19202411A49A49E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWorldLockedReattachCheckU3Ed__44_System_Collections_IEnumerator_Reset_m8AF3DBBE4CFBFBEC5EEA3E36570F7F4981CEF6B0_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C;
struct BoundsHandleInteractableU5BU5D_t53F23C752969C1C7D05C449BF6CC5467AEF39E9E;
struct ConstraintManagerU5BU5D_t9EB29F6BCA4EDA40BE2B2D64ADDB33461924E6D2;
struct LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F;
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
struct HandlePointU5BU5D_tF4198D52EE89D95AA3DAEA10800965485AB31C28;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.SpatialManipulation.BoundsHandleInteractable>
struct List_1_t4A4AF37F205259DAE4A1A36EF9F01A2931624C8F  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	BoundsHandleInteractableU5BU5D_t53F23C752969C1C7D05C449BF6CC5467AEF39E9E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t4A4AF37F205259DAE4A1A36EF9F01A2931624C8F, ____items_1)); }
	inline BoundsHandleInteractableU5BU5D_t53F23C752969C1C7D05C449BF6CC5467AEF39E9E* get__items_1() const { return ____items_1; }
	inline BoundsHandleInteractableU5BU5D_t53F23C752969C1C7D05C449BF6CC5467AEF39E9E** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(BoundsHandleInteractableU5BU5D_t53F23C752969C1C7D05C449BF6CC5467AEF39E9E* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t4A4AF37F205259DAE4A1A36EF9F01A2931624C8F, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t4A4AF37F205259DAE4A1A36EF9F01A2931624C8F, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t4A4AF37F205259DAE4A1A36EF9F01A2931624C8F, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t4A4AF37F205259DAE4A1A36EF9F01A2931624C8F_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	BoundsHandleInteractableU5BU5D_t53F23C752969C1C7D05C449BF6CC5467AEF39E9E* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t4A4AF37F205259DAE4A1A36EF9F01A2931624C8F_StaticFields, ____emptyArray_5)); }
	inline BoundsHandleInteractableU5BU5D_t53F23C752969C1C7D05C449BF6CC5467AEF39E9E* get__emptyArray_5() const { return ____emptyArray_5; }
	inline BoundsHandleInteractableU5BU5D_t53F23C752969C1C7D05C449BF6CC5467AEF39E9E** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(BoundsHandleInteractableU5BU5D_t53F23C752969C1C7D05C449BF6CC5467AEF39E9E* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals/HandlePoint>
struct List_1_t5B44A6C65ABA13F93E4D6EC9EC79567BB087CC9B  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	HandlePointU5BU5D_tF4198D52EE89D95AA3DAEA10800965485AB31C28* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t5B44A6C65ABA13F93E4D6EC9EC79567BB087CC9B, ____items_1)); }
	inline HandlePointU5BU5D_tF4198D52EE89D95AA3DAEA10800965485AB31C28* get__items_1() const { return ____items_1; }
	inline HandlePointU5BU5D_tF4198D52EE89D95AA3DAEA10800965485AB31C28** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(HandlePointU5BU5D_tF4198D52EE89D95AA3DAEA10800965485AB31C28* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t5B44A6C65ABA13F93E4D6EC9EC79567BB087CC9B, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t5B44A6C65ABA13F93E4D6EC9EC79567BB087CC9B, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t5B44A6C65ABA13F93E4D6EC9EC79567BB087CC9B, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t5B44A6C65ABA13F93E4D6EC9EC79567BB087CC9B_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	HandlePointU5BU5D_tF4198D52EE89D95AA3DAEA10800965485AB31C28* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t5B44A6C65ABA13F93E4D6EC9EC79567BB087CC9B_StaticFields, ____emptyArray_5)); }
	inline HandlePointU5BU5D_tF4198D52EE89D95AA3DAEA10800965485AB31C28* get__emptyArray_5() const { return ____emptyArray_5; }
	inline HandlePointU5BU5D_tF4198D52EE89D95AA3DAEA10800965485AB31C28** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(HandlePointU5BU5D_tF4198D52EE89D95AA3DAEA10800965485AB31C28* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.SpatialManipulation.ManipulationLogic`1<UnityEngine.Quaternion>
struct ManipulationLogic_1_tEA47F95D3636EB75B1FE4323EF1F28E0BBD8806A  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialManipulation.ManipulationLogic`1::<NumInteractors>k__BackingField
	int32_t ___U3CNumInteractorsU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CNumInteractorsU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ManipulationLogic_1_tEA47F95D3636EB75B1FE4323EF1F28E0BBD8806A, ___U3CNumInteractorsU3Ek__BackingField_0)); }
	inline int32_t get_U3CNumInteractorsU3Ek__BackingField_0() const { return ___U3CNumInteractorsU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CNumInteractorsU3Ek__BackingField_0() { return &___U3CNumInteractorsU3Ek__BackingField_0; }
	inline void set_U3CNumInteractorsU3Ek__BackingField_0(int32_t value)
	{
		___U3CNumInteractorsU3Ek__BackingField_0 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SpatialManipulation.ManipulationLogic`1<UnityEngine.Vector3>
struct ManipulationLogic_1_t96147C3BA5BC388CAC408A8E6E0F9250563B6FE0  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialManipulation.ManipulationLogic`1::<NumInteractors>k__BackingField
	int32_t ___U3CNumInteractorsU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CNumInteractorsU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ManipulationLogic_1_t96147C3BA5BC388CAC408A8E6E0F9250563B6FE0, ___U3CNumInteractorsU3Ek__BackingField_0)); }
	inline int32_t get_U3CNumInteractorsU3Ek__BackingField_0() const { return ___U3CNumInteractorsU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CNumInteractorsU3Ek__BackingField_0() { return &___U3CNumInteractorsU3Ek__BackingField_0; }
	inline void set_U3CNumInteractorsU3Ek__BackingField_0(int32_t value)
	{
		___U3CNumInteractorsU3Ek__BackingField_0 = value;
	}
};


// System.Collections.Generic.Stack`1<Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals/HandlePoint>
struct Stack_1_tBBB21EE44D1282CA179A656956ED6B3BF9DD4B32  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Stack`1::_array
	HandlePointU5BU5D_tF4198D52EE89D95AA3DAEA10800965485AB31C28* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Stack_1_tBBB21EE44D1282CA179A656956ED6B3BF9DD4B32, ____array_0)); }
	inline HandlePointU5BU5D_tF4198D52EE89D95AA3DAEA10800965485AB31C28* get__array_0() const { return ____array_0; }
	inline HandlePointU5BU5D_tF4198D52EE89D95AA3DAEA10800965485AB31C28** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(HandlePointU5BU5D_tF4198D52EE89D95AA3DAEA10800965485AB31C28* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(Stack_1_tBBB21EE44D1282CA179A656956ED6B3BF9DD4B32, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Stack_1_tBBB21EE44D1282CA179A656956ED6B3BF9DD4B32, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(Stack_1_tBBB21EE44D1282CA179A656956ED6B3BF9DD4B32, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_3), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


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


// Microsoft.MixedReality.Toolkit.TimedFlag
struct TimedFlag_tC5C87C9B210414D5EFFF70BA26D6C98CD11D655A  : public RuntimeObject
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.TimedFlag::active
	bool ___active_0;
	// System.Single Microsoft.MixedReality.Toolkit.TimedFlag::startTime
	float ___startTime_1;
	// System.Single Microsoft.MixedReality.Toolkit.TimedFlag::endTime
	float ___endTime_2;
	// Microsoft.MixedReality.Toolkit.StatefulTimerEvent Microsoft.MixedReality.Toolkit.TimedFlag::onEntered
	StatefulTimerEvent_t927481F66F373F0FBDF12B0358DDBBE179426EC2 * ___onEntered_3;
	// Microsoft.MixedReality.Toolkit.StatefulTimerEvent Microsoft.MixedReality.Toolkit.TimedFlag::onExited
	StatefulTimerEvent_t927481F66F373F0FBDF12B0358DDBBE179426EC2 * ___onExited_4;

public:
	inline static int32_t get_offset_of_active_0() { return static_cast<int32_t>(offsetof(TimedFlag_tC5C87C9B210414D5EFFF70BA26D6C98CD11D655A, ___active_0)); }
	inline bool get_active_0() const { return ___active_0; }
	inline bool* get_address_of_active_0() { return &___active_0; }
	inline void set_active_0(bool value)
	{
		___active_0 = value;
	}

	inline static int32_t get_offset_of_startTime_1() { return static_cast<int32_t>(offsetof(TimedFlag_tC5C87C9B210414D5EFFF70BA26D6C98CD11D655A, ___startTime_1)); }
	inline float get_startTime_1() const { return ___startTime_1; }
	inline float* get_address_of_startTime_1() { return &___startTime_1; }
	inline void set_startTime_1(float value)
	{
		___startTime_1 = value;
	}

	inline static int32_t get_offset_of_endTime_2() { return static_cast<int32_t>(offsetof(TimedFlag_tC5C87C9B210414D5EFFF70BA26D6C98CD11D655A, ___endTime_2)); }
	inline float get_endTime_2() const { return ___endTime_2; }
	inline float* get_address_of_endTime_2() { return &___endTime_2; }
	inline void set_endTime_2(float value)
	{
		___endTime_2 = value;
	}

	inline static int32_t get_offset_of_onEntered_3() { return static_cast<int32_t>(offsetof(TimedFlag_tC5C87C9B210414D5EFFF70BA26D6C98CD11D655A, ___onEntered_3)); }
	inline StatefulTimerEvent_t927481F66F373F0FBDF12B0358DDBBE179426EC2 * get_onEntered_3() const { return ___onEntered_3; }
	inline StatefulTimerEvent_t927481F66F373F0FBDF12B0358DDBBE179426EC2 ** get_address_of_onEntered_3() { return &___onEntered_3; }
	inline void set_onEntered_3(StatefulTimerEvent_t927481F66F373F0FBDF12B0358DDBBE179426EC2 * value)
	{
		___onEntered_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onEntered_3), (void*)value);
	}

	inline static int32_t get_offset_of_onExited_4() { return static_cast<int32_t>(offsetof(TimedFlag_tC5C87C9B210414D5EFFF70BA26D6C98CD11D655A, ___onExited_4)); }
	inline StatefulTimerEvent_t927481F66F373F0FBDF12B0358DDBBE179426EC2 * get_onExited_4() const { return ___onExited_4; }
	inline StatefulTimerEvent_t927481F66F373F0FBDF12B0358DDBBE179426EC2 ** get_address_of_onExited_4() { return &___onExited_4; }
	inline void set_onExited_4(StatefulTimerEvent_t927481F66F373F0FBDF12B0358DDBBE179426EC2 * value)
	{
		___onExited_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onExited_4), (void*)value);
	}
};


// UnityEngine.Events.UnityEventBase
struct UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB  : public RuntimeObject
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

// Microsoft.MixedReality.Toolkit.SpatialManipulation.ConstraintManager/<>c__DisplayClass9_0
struct U3CU3Ec__DisplayClass9_0_tC1C416D48DFA1656C7D07D0F756FA32EAB996022  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.Toolkit.SpatialManipulation.TransformConstraint Microsoft.MixedReality.Toolkit.SpatialManipulation.ConstraintManager/<>c__DisplayClass9_0::constraint
	TransformConstraint_t5F1A52B3005A031C1D9DCE0DD7FE13CCAD6DEF70 * ___constraint_0;

public:
	inline static int32_t get_offset_of_constraint_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass9_0_tC1C416D48DFA1656C7D07D0F756FA32EAB996022, ___constraint_0)); }
	inline TransformConstraint_t5F1A52B3005A031C1D9DCE0DD7FE13CCAD6DEF70 * get_constraint_0() const { return ___constraint_0; }
	inline TransformConstraint_t5F1A52B3005A031C1D9DCE0DD7FE13CCAD6DEF70 ** get_address_of_constraint_0() { return &___constraint_0; }
	inline void set_constraint_0(TransformConstraint_t5F1A52B3005A031C1D9DCE0DD7FE13CCAD6DEF70 * value)
	{
		___constraint_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___constraint_0), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.SpatialManipulation.HandConstraintPalmUp/<WorldLockedReattachCheck>d__44
struct U3CWorldLockedReattachCheckU3Ed__44_t5C2D407949FC1A50AA5DFCDC31B071F7E88CE4A8  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialManipulation.HandConstraintPalmUp/<WorldLockedReattachCheck>d__44::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.SpatialManipulation.HandConstraintPalmUp/<WorldLockedReattachCheck>d__44::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Microsoft.MixedReality.Toolkit.SpatialManipulation.HandConstraintPalmUp Microsoft.MixedReality.Toolkit.SpatialManipulation.HandConstraintPalmUp/<WorldLockedReattachCheck>d__44::<>4__this
	HandConstraintPalmUp_t7213D04B52E9AF3933402DCFACAFF6EEC8424F46 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CWorldLockedReattachCheckU3Ed__44_t5C2D407949FC1A50AA5DFCDC31B071F7E88CE4A8, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CWorldLockedReattachCheckU3Ed__44_t5C2D407949FC1A50AA5DFCDC31B071F7E88CE4A8, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CWorldLockedReattachCheckU3Ed__44_t5C2D407949FC1A50AA5DFCDC31B071F7E88CE4A8, ___U3CU3E4__this_2)); }
	inline HandConstraintPalmUp_t7213D04B52E9AF3933402DCFACAFF6EEC8424F46 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline HandConstraintPalmUp_t7213D04B52E9AF3933402DCFACAFF6EEC8424F46 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(HandConstraintPalmUp_t7213D04B52E9AF3933402DCFACAFF6EEC8424F46 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals/<>c
struct U3CU3Ec_t3ED49D580091D12AAF39D1B417F831F77CFFE5A1  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t3ED49D580091D12AAF39D1B417F831F77CFFE5A1_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals/<>c Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals/<>c::<>9
	U3CU3Ec_t3ED49D580091D12AAF39D1B417F831F77CFFE5A1 * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3ED49D580091D12AAF39D1B417F831F77CFFE5A1_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t3ED49D580091D12AAF39D1B417F831F77CFFE5A1 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t3ED49D580091D12AAF39D1B417F831F77CFFE5A1 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t3ED49D580091D12AAF39D1B417F831F77CFFE5A1 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<Microsoft.MixedReality.Toolkit.SpatialManipulation.BoundsHandleInteractable>
struct Enumerator_t696A52EF7570791EFC6606C9FCEF3360FFC644CD 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t4A4AF37F205259DAE4A1A36EF9F01A2931624C8F * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	BoundsHandleInteractable_tF957D394A29234622B27304D99E5408B7971132B * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t696A52EF7570791EFC6606C9FCEF3360FFC644CD, ___list_0)); }
	inline List_1_t4A4AF37F205259DAE4A1A36EF9F01A2931624C8F * get_list_0() const { return ___list_0; }
	inline List_1_t4A4AF37F205259DAE4A1A36EF9F01A2931624C8F ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t4A4AF37F205259DAE4A1A36EF9F01A2931624C8F * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t696A52EF7570791EFC6606C9FCEF3360FFC644CD, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t696A52EF7570791EFC6606C9FCEF3360FFC644CD, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t696A52EF7570791EFC6606C9FCEF3360FFC644CD, ___current_3)); }
	inline BoundsHandleInteractable_tF957D394A29234622B27304D99E5408B7971132B * get_current_3() const { return ___current_3; }
	inline BoundsHandleInteractable_tF957D394A29234622B27304D99E5408B7971132B ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(BoundsHandleInteractable_tF957D394A29234622B27304D99E5408B7971132B * value)
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


// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>
struct InlinedArray_1_t02AB39E6F94F40A915AE5843BDB88347C7AD02B5 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 * ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_1U5BU5D_t8054A94E13920B6EAD3A3ACE9E49CCEB297F5292* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_t02AB39E6F94F40A915AE5843BDB88347C7AD02B5, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_t02AB39E6F94F40A915AE5843BDB88347C7AD02B5, ___firstValue_1)); }
	inline Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 * get_firstValue_1() const { return ___firstValue_1; }
	inline Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 ** get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 * value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_t02AB39E6F94F40A915AE5843BDB88347C7AD02B5, ___additionalValues_2)); }
	inline Action_1U5BU5D_t8054A94E13920B6EAD3A3ACE9E49CCEB297F5292* get_additionalValues_2() const { return ___additionalValues_2; }
	inline Action_1U5BU5D_t8054A94E13920B6EAD3A3ACE9E49CCEB297F5292** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(Action_1U5BU5D_t8054A94E13920B6EAD3A3ACE9E49CCEB297F5292* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<Microsoft.MixedReality.Toolkit.Subsystems.HandsAggregatorSubsystem,Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemDescriptor`2<Microsoft.MixedReality.Toolkit.Subsystems.HandsAggregatorSubsystem,Microsoft.MixedReality.Toolkit.Subsystems.HandsAggregatorSubsystem/Provider>,Microsoft.MixedReality.Toolkit.Subsystems.HandsAggregatorSubsystem/Provider>
struct SubsystemWithProvider_3_t7AB809AFC6912BEE32D202BD06EC497877E8FE40  : public SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E
{
public:
	// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<subsystemDescriptor>k__BackingField
	MRTKSubsystemDescriptor_2_tF923444318FDC4C120FF22CEF7F15CF0901BC07F * ___U3CsubsystemDescriptorU3Ek__BackingField_2;
	// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<provider>k__BackingField
	Provider_tBC4AED706D555B8DEA468EE4E93B08F061731AE4 * ___U3CproviderU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CsubsystemDescriptorU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_3_t7AB809AFC6912BEE32D202BD06EC497877E8FE40, ___U3CsubsystemDescriptorU3Ek__BackingField_2)); }
	inline MRTKSubsystemDescriptor_2_tF923444318FDC4C120FF22CEF7F15CF0901BC07F * get_U3CsubsystemDescriptorU3Ek__BackingField_2() const { return ___U3CsubsystemDescriptorU3Ek__BackingField_2; }
	inline MRTKSubsystemDescriptor_2_tF923444318FDC4C120FF22CEF7F15CF0901BC07F ** get_address_of_U3CsubsystemDescriptorU3Ek__BackingField_2() { return &___U3CsubsystemDescriptorU3Ek__BackingField_2; }
	inline void set_U3CsubsystemDescriptorU3Ek__BackingField_2(MRTKSubsystemDescriptor_2_tF923444318FDC4C120FF22CEF7F15CF0901BC07F * value)
	{
		___U3CsubsystemDescriptorU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemDescriptorU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CproviderU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_3_t7AB809AFC6912BEE32D202BD06EC497877E8FE40, ___U3CproviderU3Ek__BackingField_3)); }
	inline Provider_tBC4AED706D555B8DEA468EE4E93B08F061731AE4 * get_U3CproviderU3Ek__BackingField_3() const { return ___U3CproviderU3Ek__BackingField_3; }
	inline Provider_tBC4AED706D555B8DEA468EE4E93B08F061731AE4 ** get_address_of_U3CproviderU3Ek__BackingField_3() { return &___U3CproviderU3Ek__BackingField_3; }
	inline void set_U3CproviderU3Ek__BackingField_3(Provider_tBC4AED706D555B8DEA468EE4E93B08F061731AE4 * value)
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


// UnityEngine.Mathf
struct Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194__padding[1];
	};

public:
};

struct Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_StaticFields
{
public:
	// System.Single UnityEngine.Mathf::Epsilon
	float ___Epsilon_0;

public:
	inline static int32_t get_offset_of_Epsilon_0() { return static_cast<int32_t>(offsetof(Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_StaticFields, ___Epsilon_0)); }
	inline float get_Epsilon_0() const { return ___Epsilon_0; }
	inline float* get_address_of_Epsilon_0() { return &___Epsilon_0; }
	inline void set_Epsilon_0(float value)
	{
		___Epsilon_0 = value;
	}
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


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
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


// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
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


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16
struct __StaticArrayInitTypeSizeU3D16_t8C0E815652E04B23E6435339748E8AA8503C5E2D 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D16_t8C0E815652E04B23E6435339748E8AA8503C5E2D__padding[16];
	};

public:
};


// UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D 
{
public:
	// UnityEngine.InputSystem.InputActionState UnityEngine.InputSystem.InputAction/CallbackContext::m_State
	InputActionState_tBAB20591FD6515A6FF5D70EF641A423E270A33F9 * ___m_State_0;
	// System.Int32 UnityEngine.InputSystem.InputAction/CallbackContext::m_ActionIndex
	int32_t ___m_ActionIndex_1;

public:
	inline static int32_t get_offset_of_m_State_0() { return static_cast<int32_t>(offsetof(CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D, ___m_State_0)); }
	inline InputActionState_tBAB20591FD6515A6FF5D70EF641A423E270A33F9 * get_m_State_0() const { return ___m_State_0; }
	inline InputActionState_tBAB20591FD6515A6FF5D70EF641A423E270A33F9 ** get_address_of_m_State_0() { return &___m_State_0; }
	inline void set_m_State_0(InputActionState_tBAB20591FD6515A6FF5D70EF641A423E270A33F9 * value)
	{
		___m_State_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_State_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionIndex_1() { return static_cast<int32_t>(offsetof(CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D, ___m_ActionIndex_1)); }
	inline int32_t get_m_ActionIndex_1() const { return ___m_ActionIndex_1; }
	inline int32_t* get_address_of_m_ActionIndex_1() { return &___m_ActionIndex_1; }
	inline void set_m_ActionIndex_1(int32_t value)
	{
		___m_ActionIndex_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D_marshaled_pinvoke
{
	InputActionState_tBAB20591FD6515A6FF5D70EF641A423E270A33F9 * ___m_State_0;
	int32_t ___m_ActionIndex_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D_marshaled_com
{
	InputActionState_tBAB20591FD6515A6FF5D70EF641A423E270A33F9 * ___m_State_0;
	int32_t ___m_ActionIndex_1;
};

// Microsoft.MixedReality.Toolkit.SpatialManipulation.ObjectManipulator/LogicImplementation
struct LogicImplementation_t9847E1B6A092FB8BA4E507DED3FD1938D096740E 
{
public:
	// Microsoft.MixedReality.Toolkit.SpatialManipulation.ManipulationLogic`1<UnityEngine.Vector3> Microsoft.MixedReality.Toolkit.SpatialManipulation.ObjectManipulator/LogicImplementation::moveLogic
	ManipulationLogic_1_t96147C3BA5BC388CAC408A8E6E0F9250563B6FE0 * ___moveLogic_0;
	// Microsoft.MixedReality.Toolkit.SpatialManipulation.ManipulationLogic`1<UnityEngine.Quaternion> Microsoft.MixedReality.Toolkit.SpatialManipulation.ObjectManipulator/LogicImplementation::rotateLogic
	ManipulationLogic_1_tEA47F95D3636EB75B1FE4323EF1F28E0BBD8806A * ___rotateLogic_1;
	// Microsoft.MixedReality.Toolkit.SpatialManipulation.ManipulationLogic`1<UnityEngine.Vector3> Microsoft.MixedReality.Toolkit.SpatialManipulation.ObjectManipulator/LogicImplementation::scaleLogic
	ManipulationLogic_1_t96147C3BA5BC388CAC408A8E6E0F9250563B6FE0 * ___scaleLogic_2;

public:
	inline static int32_t get_offset_of_moveLogic_0() { return static_cast<int32_t>(offsetof(LogicImplementation_t9847E1B6A092FB8BA4E507DED3FD1938D096740E, ___moveLogic_0)); }
	inline ManipulationLogic_1_t96147C3BA5BC388CAC408A8E6E0F9250563B6FE0 * get_moveLogic_0() const { return ___moveLogic_0; }
	inline ManipulationLogic_1_t96147C3BA5BC388CAC408A8E6E0F9250563B6FE0 ** get_address_of_moveLogic_0() { return &___moveLogic_0; }
	inline void set_moveLogic_0(ManipulationLogic_1_t96147C3BA5BC388CAC408A8E6E0F9250563B6FE0 * value)
	{
		___moveLogic_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___moveLogic_0), (void*)value);
	}

	inline static int32_t get_offset_of_rotateLogic_1() { return static_cast<int32_t>(offsetof(LogicImplementation_t9847E1B6A092FB8BA4E507DED3FD1938D096740E, ___rotateLogic_1)); }
	inline ManipulationLogic_1_tEA47F95D3636EB75B1FE4323EF1F28E0BBD8806A * get_rotateLogic_1() const { return ___rotateLogic_1; }
	inline ManipulationLogic_1_tEA47F95D3636EB75B1FE4323EF1F28E0BBD8806A ** get_address_of_rotateLogic_1() { return &___rotateLogic_1; }
	inline void set_rotateLogic_1(ManipulationLogic_1_tEA47F95D3636EB75B1FE4323EF1F28E0BBD8806A * value)
	{
		___rotateLogic_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rotateLogic_1), (void*)value);
	}

	inline static int32_t get_offset_of_scaleLogic_2() { return static_cast<int32_t>(offsetof(LogicImplementation_t9847E1B6A092FB8BA4E507DED3FD1938D096740E, ___scaleLogic_2)); }
	inline ManipulationLogic_1_t96147C3BA5BC388CAC408A8E6E0F9250563B6FE0 * get_scaleLogic_2() const { return ___scaleLogic_2; }
	inline ManipulationLogic_1_t96147C3BA5BC388CAC408A8E6E0F9250563B6FE0 ** get_address_of_scaleLogic_2() { return &___scaleLogic_2; }
	inline void set_scaleLogic_2(ManipulationLogic_1_t96147C3BA5BC388CAC408A8E6E0F9250563B6FE0 * value)
	{
		___scaleLogic_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scaleLogic_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.SpatialManipulation.ObjectManipulator/LogicImplementation
struct LogicImplementation_t9847E1B6A092FB8BA4E507DED3FD1938D096740E_marshaled_pinvoke
{
	ManipulationLogic_1_t96147C3BA5BC388CAC408A8E6E0F9250563B6FE0 * ___moveLogic_0;
	ManipulationLogic_1_tEA47F95D3636EB75B1FE4323EF1F28E0BBD8806A * ___rotateLogic_1;
	ManipulationLogic_1_t96147C3BA5BC388CAC408A8E6E0F9250563B6FE0 * ___scaleLogic_2;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.SpatialManipulation.ObjectManipulator/LogicImplementation
struct LogicImplementation_t9847E1B6A092FB8BA4E507DED3FD1938D096740E_marshaled_com
{
	ManipulationLogic_1_t96147C3BA5BC388CAC408A8E6E0F9250563B6FE0 * ___moveLogic_0;
	ManipulationLogic_1_tEA47F95D3636EB75B1FE4323EF1F28E0BBD8806A * ___rotateLogic_1;
	ManipulationLogic_1_t96147C3BA5BC388CAC408A8E6E0F9250563B6FE0 * ___scaleLogic_2;
};

// Microsoft.MixedReality.Toolkit.SpatialManipulation.ObjectManipulator/LogicType
struct LogicType_t0CADC9EB6EB2484EE9977A752D9CA023C57FE610 
{
public:
	// Microsoft.MixedReality.Toolkit.SystemType Microsoft.MixedReality.Toolkit.SpatialManipulation.ObjectManipulator/LogicType::moveLogicType
	SystemType_tC66B6E67B2D1045958296A6D7D4EFE000A5EF7F6 * ___moveLogicType_0;
	// Microsoft.MixedReality.Toolkit.SystemType Microsoft.MixedReality.Toolkit.SpatialManipulation.ObjectManipulator/LogicType::rotateLogicType
	SystemType_tC66B6E67B2D1045958296A6D7D4EFE000A5EF7F6 * ___rotateLogicType_1;
	// Microsoft.MixedReality.Toolkit.SystemType Microsoft.MixedReality.Toolkit.SpatialManipulation.ObjectManipulator/LogicType::scaleLogicType
	SystemType_tC66B6E67B2D1045958296A6D7D4EFE000A5EF7F6 * ___scaleLogicType_2;

public:
	inline static int32_t get_offset_of_moveLogicType_0() { return static_cast<int32_t>(offsetof(LogicType_t0CADC9EB6EB2484EE9977A752D9CA023C57FE610, ___moveLogicType_0)); }
	inline SystemType_tC66B6E67B2D1045958296A6D7D4EFE000A5EF7F6 * get_moveLogicType_0() const { return ___moveLogicType_0; }
	inline SystemType_tC66B6E67B2D1045958296A6D7D4EFE000A5EF7F6 ** get_address_of_moveLogicType_0() { return &___moveLogicType_0; }
	inline void set_moveLogicType_0(SystemType_tC66B6E67B2D1045958296A6D7D4EFE000A5EF7F6 * value)
	{
		___moveLogicType_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___moveLogicType_0), (void*)value);
	}

	inline static int32_t get_offset_of_rotateLogicType_1() { return static_cast<int32_t>(offsetof(LogicType_t0CADC9EB6EB2484EE9977A752D9CA023C57FE610, ___rotateLogicType_1)); }
	inline SystemType_tC66B6E67B2D1045958296A6D7D4EFE000A5EF7F6 * get_rotateLogicType_1() const { return ___rotateLogicType_1; }
	inline SystemType_tC66B6E67B2D1045958296A6D7D4EFE000A5EF7F6 ** get_address_of_rotateLogicType_1() { return &___rotateLogicType_1; }
	inline void set_rotateLogicType_1(SystemType_tC66B6E67B2D1045958296A6D7D4EFE000A5EF7F6 * value)
	{
		___rotateLogicType_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rotateLogicType_1), (void*)value);
	}

	inline static int32_t get_offset_of_scaleLogicType_2() { return static_cast<int32_t>(offsetof(LogicType_t0CADC9EB6EB2484EE9977A752D9CA023C57FE610, ___scaleLogicType_2)); }
	inline SystemType_tC66B6E67B2D1045958296A6D7D4EFE000A5EF7F6 * get_scaleLogicType_2() const { return ___scaleLogicType_2; }
	inline SystemType_tC66B6E67B2D1045958296A6D7D4EFE000A5EF7F6 ** get_address_of_scaleLogicType_2() { return &___scaleLogicType_2; }
	inline void set_scaleLogicType_2(SystemType_tC66B6E67B2D1045958296A6D7D4EFE000A5EF7F6 * value)
	{
		___scaleLogicType_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scaleLogicType_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.SpatialManipulation.ObjectManipulator/LogicType
struct LogicType_t0CADC9EB6EB2484EE9977A752D9CA023C57FE610_marshaled_pinvoke
{
	SystemType_tC66B6E67B2D1045958296A6D7D4EFE000A5EF7F6 * ___moveLogicType_0;
	SystemType_tC66B6E67B2D1045958296A6D7D4EFE000A5EF7F6 * ___rotateLogicType_1;
	SystemType_tC66B6E67B2D1045958296A6D7D4EFE000A5EF7F6 * ___scaleLogicType_2;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.SpatialManipulation.ObjectManipulator/LogicType
struct LogicType_t0CADC9EB6EB2484EE9977A752D9CA023C57FE610_marshaled_com
{
	SystemType_tC66B6E67B2D1045958296A6D7D4EFE000A5EF7F6 * ___moveLogicType_0;
	SystemType_tC66B6E67B2D1045958296A6D7D4EFE000A5EF7F6 * ___rotateLogicType_1;
	SystemType_tC66B6E67B2D1045958296A6D7D4EFE000A5EF7F6 * ___scaleLogicType_2;
};

// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>
struct CallbackArray_1_t9AA7F1C91BD426A599B158F2A207F494A0D431F1 
{
public:
	// System.Boolean UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CannotMutateCallbacksArray
	bool ___m_CannotMutateCallbacksArray_0;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_Callbacks
	InlinedArray_1_t02AB39E6F94F40A915AE5843BDB88347C7AD02B5  ___m_Callbacks_1;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToAdd
	InlinedArray_1_t02AB39E6F94F40A915AE5843BDB88347C7AD02B5  ___m_CallbacksToAdd_2;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToRemove
	InlinedArray_1_t02AB39E6F94F40A915AE5843BDB88347C7AD02B5  ___m_CallbacksToRemove_3;

public:
	inline static int32_t get_offset_of_m_CannotMutateCallbacksArray_0() { return static_cast<int32_t>(offsetof(CallbackArray_1_t9AA7F1C91BD426A599B158F2A207F494A0D431F1, ___m_CannotMutateCallbacksArray_0)); }
	inline bool get_m_CannotMutateCallbacksArray_0() const { return ___m_CannotMutateCallbacksArray_0; }
	inline bool* get_address_of_m_CannotMutateCallbacksArray_0() { return &___m_CannotMutateCallbacksArray_0; }
	inline void set_m_CannotMutateCallbacksArray_0(bool value)
	{
		___m_CannotMutateCallbacksArray_0 = value;
	}

	inline static int32_t get_offset_of_m_Callbacks_1() { return static_cast<int32_t>(offsetof(CallbackArray_1_t9AA7F1C91BD426A599B158F2A207F494A0D431F1, ___m_Callbacks_1)); }
	inline InlinedArray_1_t02AB39E6F94F40A915AE5843BDB88347C7AD02B5  get_m_Callbacks_1() const { return ___m_Callbacks_1; }
	inline InlinedArray_1_t02AB39E6F94F40A915AE5843BDB88347C7AD02B5 * get_address_of_m_Callbacks_1() { return &___m_Callbacks_1; }
	inline void set_m_Callbacks_1(InlinedArray_1_t02AB39E6F94F40A915AE5843BDB88347C7AD02B5  value)
	{
		___m_Callbacks_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Callbacks_1))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Callbacks_1))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_CallbacksToAdd_2() { return static_cast<int32_t>(offsetof(CallbackArray_1_t9AA7F1C91BD426A599B158F2A207F494A0D431F1, ___m_CallbacksToAdd_2)); }
	inline InlinedArray_1_t02AB39E6F94F40A915AE5843BDB88347C7AD02B5  get_m_CallbacksToAdd_2() const { return ___m_CallbacksToAdd_2; }
	inline InlinedArray_1_t02AB39E6F94F40A915AE5843BDB88347C7AD02B5 * get_address_of_m_CallbacksToAdd_2() { return &___m_CallbacksToAdd_2; }
	inline void set_m_CallbacksToAdd_2(InlinedArray_1_t02AB39E6F94F40A915AE5843BDB88347C7AD02B5  value)
	{
		___m_CallbacksToAdd_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CallbacksToAdd_2))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CallbacksToAdd_2))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_CallbacksToRemove_3() { return static_cast<int32_t>(offsetof(CallbackArray_1_t9AA7F1C91BD426A599B158F2A207F494A0D431F1, ___m_CallbacksToRemove_3)); }
	inline InlinedArray_1_t02AB39E6F94F40A915AE5843BDB88347C7AD02B5  get_m_CallbacksToRemove_3() const { return ___m_CallbacksToRemove_3; }
	inline InlinedArray_1_t02AB39E6F94F40A915AE5843BDB88347C7AD02B5 * get_address_of_m_CallbacksToRemove_3() { return &___m_CallbacksToRemove_3; }
	inline void set_m_CallbacksToRemove_3(InlinedArray_1_t02AB39E6F94F40A915AE5843BDB88347C7AD02B5  value)
	{
		___m_CallbacksToRemove_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CallbacksToRemove_3))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CallbacksToRemove_3))->___additionalValues_2), (void*)NULL);
		#endif
	}
};


// UnityEngine.Bounds
struct Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 
{
public:
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Extents_1;

public:
	inline static int32_t get_offset_of_m_Center_0() { return static_cast<int32_t>(offsetof(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37, ___m_Center_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Center_0() const { return ___m_Center_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Center_0() { return &___m_Center_0; }
	inline void set_m_Center_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Center_0 = value;
	}

	inline static int32_t get_offset_of_m_Extents_1() { return static_cast<int32_t>(offsetof(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37, ___m_Extents_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Extents_1() const { return ___m_Extents_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Extents_1() { return &___m_Extents_1; }
	inline void set_m_Extents_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Extents_1 = value;
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

// Microsoft.MixedReality.Toolkit.SpatialManipulation.FlattenMode
struct FlattenMode_t5CC2C146CC1B1D13CCFA0D758DD903989DEFE3D6 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialManipulation.FlattenMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FlattenMode_t5CC2C146CC1B1D13CCFA0D758DD903989DEFE3D6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Handedness
struct Handedness_t1CCF163E7C020C8CAE284CBAE7675141A3763874 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Handedness::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Handedness_t1CCF163E7C020C8CAE284CBAE7675141A3763874, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SpatialManipulation.HandleScaleMode
struct HandleScaleMode_tB290EE05589A42F1C0EE507350FF9CBDFABDFF0C 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialManipulation.HandleScaleMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HandleScaleMode_tB290EE05589A42F1C0EE507350FF9CBDFABDFF0C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SpatialManipulation.HandleType
struct HandleType_tB2C59126240BD10B589923340DF517E6964BE9BE 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialManipulation.HandleType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HandleType_tB2C59126240BD10B589923340DF517E6964BE9BE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.InputActionType
struct InputActionType_tF334DB4C306B973538251E50C2CFE7939899AB35 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputActionType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputActionType_tF334DB4C306B973538251E50C2CFE7939899AB35, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Int32Enum
struct Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C 
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


// Microsoft.MixedReality.Toolkit.SpatialManipulation.ManipulationHandFlags
struct ManipulationHandFlags_tA592BB2FE122991B642980E99EAF838D8CFEF8F1 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialManipulation.ManipulationHandFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ManipulationHandFlags_tA592BB2FE122991B642980E99EAF838D8CFEF8F1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SpatialManipulation.ManipulationProximityFlags
struct ManipulationProximityFlags_tC33342BB2A7551C4FDEEF412261FED0272E421A8 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialManipulation.ManipulationProximityFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ManipulationProximityFlags_tC33342BB2A7551C4FDEEF412261FED0272E421A8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Profiling.LowLevel.MarkerFlags
struct MarkerFlags_t4A8B5185BAD24803CE9A57187867CB93451AA9E8 
{
public:
	// System.UInt16 Unity.Profiling.LowLevel.MarkerFlags::value__
	uint16_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MarkerFlags_t4A8B5185BAD24803CE9A57187867CB93451AA9E8, ___value___2)); }
	inline uint16_t get_value___2() const { return ___value___2; }
	inline uint16_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint16_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.MaterialPropertyBlock::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
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

// UnityEngine.Plane
struct Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 
{
public:
	// UnityEngine.Vector3 UnityEngine.Plane::m_Normal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Normal_1;
	// System.Single UnityEngine.Plane::m_Distance
	float ___m_Distance_2;

public:
	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7, ___m_Normal_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_Distance_2() { return static_cast<int32_t>(offsetof(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7, ___m_Distance_2)); }
	inline float get_m_Distance_2() const { return ___m_Distance_2; }
	inline float* get_address_of_m_Distance_2() { return &___m_Distance_2; }
	inline void set_m_Distance_2(float value)
	{
		___m_Distance_2 = value;
	}
};


// UnityEngine.Pose
struct Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A 
{
public:
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation_1;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A, ___position_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_0() const { return ___position_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_rotation_1() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A, ___rotation_1)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_rotation_1() const { return ___rotation_1; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_rotation_1() { return &___rotation_1; }
	inline void set_rotation_1(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___rotation_1 = value;
	}
};

struct Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_StaticFields
{
public:
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___k_Identity_2;

public:
	inline static int32_t get_offset_of_k_Identity_2() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_StaticFields, ___k_Identity_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_k_Identity_2() const { return ___k_Identity_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_k_Identity_2() { return &___k_Identity_2; }
	inline void set_k_Identity_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___k_Identity_2 = value;
	}
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


// UnityEngine.Ray
struct Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6, ___m_Origin_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6, ___m_Direction_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Direction_1 = value;
	}
};


// Microsoft.MixedReality.Toolkit.RayStep
struct RayStep_t68267BADF85DF3BC948899D189E94EC8C2D87C6F 
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.RayStep::<Origin>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3COriginU3Ek__BackingField_3;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.RayStep::<Terminus>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CTerminusU3Ek__BackingField_4;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.RayStep::<Direction>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CDirectionU3Ek__BackingField_5;
	// System.Single Microsoft.MixedReality.Toolkit.RayStep::<Length>k__BackingField
	float ___U3CLengthU3Ek__BackingField_6;
	// System.Single Microsoft.MixedReality.Toolkit.RayStep::epsilon
	float ___epsilon_7;

public:
	inline static int32_t get_offset_of_U3COriginU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(RayStep_t68267BADF85DF3BC948899D189E94EC8C2D87C6F, ___U3COriginU3Ek__BackingField_3)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3COriginU3Ek__BackingField_3() const { return ___U3COriginU3Ek__BackingField_3; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3COriginU3Ek__BackingField_3() { return &___U3COriginU3Ek__BackingField_3; }
	inline void set_U3COriginU3Ek__BackingField_3(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3COriginU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CTerminusU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(RayStep_t68267BADF85DF3BC948899D189E94EC8C2D87C6F, ___U3CTerminusU3Ek__BackingField_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CTerminusU3Ek__BackingField_4() const { return ___U3CTerminusU3Ek__BackingField_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CTerminusU3Ek__BackingField_4() { return &___U3CTerminusU3Ek__BackingField_4; }
	inline void set_U3CTerminusU3Ek__BackingField_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CTerminusU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CDirectionU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(RayStep_t68267BADF85DF3BC948899D189E94EC8C2D87C6F, ___U3CDirectionU3Ek__BackingField_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CDirectionU3Ek__BackingField_5() const { return ___U3CDirectionU3Ek__BackingField_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CDirectionU3Ek__BackingField_5() { return &___U3CDirectionU3Ek__BackingField_5; }
	inline void set_U3CDirectionU3Ek__BackingField_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CDirectionU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CLengthU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(RayStep_t68267BADF85DF3BC948899D189E94EC8C2D87C6F, ___U3CLengthU3Ek__BackingField_6)); }
	inline float get_U3CLengthU3Ek__BackingField_6() const { return ___U3CLengthU3Ek__BackingField_6; }
	inline float* get_address_of_U3CLengthU3Ek__BackingField_6() { return &___U3CLengthU3Ek__BackingField_6; }
	inline void set_U3CLengthU3Ek__BackingField_6(float value)
	{
		___U3CLengthU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_epsilon_7() { return static_cast<int32_t>(offsetof(RayStep_t68267BADF85DF3BC948899D189E94EC8C2D87C6F, ___epsilon_7)); }
	inline float get_epsilon_7() const { return ___epsilon_7; }
	inline float* get_address_of_epsilon_7() { return &___epsilon_7; }
	inline void set_epsilon_7(float value)
	{
		___epsilon_7 = value;
	}
};

struct RayStep_t68267BADF85DF3BC948899D189E94EC8C2D87C6F_StaticFields
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.RayStep::dist
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___dist_0;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.RayStep::dir
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___dir_1;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.RayStep::pos
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos_2;

public:
	inline static int32_t get_offset_of_dist_0() { return static_cast<int32_t>(offsetof(RayStep_t68267BADF85DF3BC948899D189E94EC8C2D87C6F_StaticFields, ___dist_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_dist_0() const { return ___dist_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_dist_0() { return &___dist_0; }
	inline void set_dist_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___dist_0 = value;
	}

	inline static int32_t get_offset_of_dir_1() { return static_cast<int32_t>(offsetof(RayStep_t68267BADF85DF3BC948899D189E94EC8C2D87C6F_StaticFields, ___dir_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_dir_1() const { return ___dir_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_dir_1() { return &___dir_1; }
	inline void set_dir_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___dir_1 = value;
	}

	inline static int32_t get_offset_of_pos_2() { return static_cast<int32_t>(offsetof(RayStep_t68267BADF85DF3BC948899D189E94EC8C2D87C6F_StaticFields, ___pos_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_pos_2() const { return ___pos_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_pos_2() { return &___pos_2; }
	inline void set_pos_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___pos_2 = value;
	}
};


// UnityEngine.RaycastHit
struct RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 
{
public:
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Point_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Normal_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_FaceID_2() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_FaceID_2)); }
	inline uint32_t get_m_FaceID_2() const { return ___m_FaceID_2; }
	inline uint32_t* get_address_of_m_FaceID_2() { return &___m_FaceID_2; }
	inline void set_m_FaceID_2(uint32_t value)
	{
		___m_FaceID_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_UV_4() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_UV_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_UV_4() const { return ___m_UV_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_UV_4() { return &___m_UV_4; }
	inline void set_m_UV_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_UV_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Collider_5)); }
	inline int32_t get_m_Collider_5() const { return ___m_Collider_5; }
	inline int32_t* get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(int32_t value)
	{
		___m_Collider_5 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SpatialManipulation.RotateAnchorType
struct RotateAnchorType_t15E1423C0093BA173FBE8A29EA7A37A80D867AB9 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialManipulation.RotateAnchorType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RotateAnchorType_t15E1423C0093BA173FBE8A29EA7A37A80D867AB9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SpatialManipulation.ScaleAnchorType
struct ScaleAnchorType_t84F2967620B3042C809877847BD28F81A304A40A 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialManipulation.ScaleAnchorType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ScaleAnchorType_t84F2967620B3042C809877847BD28F81A304A40A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverOrientationType
struct SolverOrientationType_t924894CAFF3EFF661FB67E68192E777A8D0F158C 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverOrientationType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SolverOrientationType_t924894CAFF3EFF661FB67E68192E777A8D0F158C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.TrackedHandJoint
struct TrackedHandJoint_t39ECEF3295488E64B480D55E0E04960AB3596ADF 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.TrackedHandJoint::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackedHandJoint_t39ECEF3295488E64B480D55E0E04960AB3596ADF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SpatialManipulation.TrackedObjectType
struct TrackedObjectType_t1EEB2A1677492C01E6A323343AF678A02A3E3082 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialManipulation.TrackedObjectType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackedObjectType_t1EEB2A1677492C01E6A323343AF678A02A3E3082, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SpatialManipulation.Vector3Smoothed
struct Vector3Smoothed_tD20A5F686B12E3C524D8C369DF09A20DAAEDB3D3 
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialManipulation.Vector3Smoothed::<Current>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CCurrentU3Ek__BackingField_0;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialManipulation.Vector3Smoothed::<Goal>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CGoalU3Ek__BackingField_1;
	// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.Vector3Smoothed::<SmoothTime>k__BackingField
	float ___U3CSmoothTimeU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CCurrentU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Vector3Smoothed_tD20A5F686B12E3C524D8C369DF09A20DAAEDB3D3, ___U3CCurrentU3Ek__BackingField_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CCurrentU3Ek__BackingField_0() const { return ___U3CCurrentU3Ek__BackingField_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CCurrentU3Ek__BackingField_0() { return &___U3CCurrentU3Ek__BackingField_0; }
	inline void set_U3CCurrentU3Ek__BackingField_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CCurrentU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CGoalU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Vector3Smoothed_tD20A5F686B12E3C524D8C369DF09A20DAAEDB3D3, ___U3CGoalU3Ek__BackingField_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CGoalU3Ek__BackingField_1() const { return ___U3CGoalU3Ek__BackingField_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CGoalU3Ek__BackingField_1() { return &___U3CGoalU3Ek__BackingField_1; }
	inline void set_U3CGoalU3Ek__BackingField_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CGoalU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CSmoothTimeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Vector3Smoothed_tD20A5F686B12E3C524D8C369DF09A20DAAEDB3D3, ___U3CSmoothTimeU3Ek__BackingField_2)); }
	inline float get_U3CSmoothTimeU3Ek__BackingField_2() const { return ___U3CSmoothTimeU3Ek__BackingField_2; }
	inline float* get_address_of_U3CSmoothTimeU3Ek__BackingField_2() { return &___U3CSmoothTimeU3Ek__BackingField_2; }
	inline void set_U3CSmoothTimeU3Ek__BackingField_2(float value)
	{
		___U3CSmoothTimeU3Ek__BackingField_2 = value;
	}
};


// UnityEngine.XR.XRNode
struct XRNode_t07B789D60F5B3A4F0E4A169143881ABCA4176DBD 
{
public:
	// System.Int32 UnityEngine.XR.XRNode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(XRNode_t07B789D60F5B3A4F0E4A169143881ABCA4176DBD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SpatialManipulation.BoundsCalculator/BoundsCalculationMethod
struct BoundsCalculationMethod_t0F65FE7446787C3ECE753285469113777C8B1330 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialManipulation.BoundsCalculator/BoundsCalculationMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BoundsCalculationMethod_t0F65FE7446787C3ECE753285469113777C8B1330, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SpatialManipulation.Follow/AngularClampType
struct AngularClampType_tA5AA166B273A3B69C3422F127D145B8EC51C5E8D 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialManipulation.Follow/AngularClampType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AngularClampType_tA5AA166B273A3B69C3422F127D145B8EC51C5E8D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SpatialManipulation.HandConstraint/SolverOffsetBehavior
struct SolverOffsetBehavior_t105CFB70DF995933F408210463FB4D7402A9B33F 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialManipulation.HandConstraint/SolverOffsetBehavior::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SolverOffsetBehavior_t105CFB70DF995933F408210463FB4D7402A9B33F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SpatialManipulation.HandConstraint/SolverRotationBehavior
struct SolverRotationBehavior_tA40B2CB2D89A56EB3E31F91DF439B08B690DD430 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialManipulation.HandConstraint/SolverRotationBehavior::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SolverRotationBehavior_tA40B2CB2D89A56EB3E31F91DF439B08B690DD430, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SpatialManipulation.HandConstraint/SolverSafeZone
struct SolverSafeZone_tF50E5F6FA6332EC786AD11BAA4A63F3B3082E5DF 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialManipulation.HandConstraint/SolverSafeZone::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SolverSafeZone_tF50E5F6FA6332EC786AD11BAA4A63F3B3082E5DF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.InputAction/ActionFlags
struct ActionFlags_t7D04593349EAB81D5C0E58D2B0DBAABA6B914252 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputAction/ActionFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ActionFlags_t7D04593349EAB81D5C0E58D2B0DBAABA6B914252, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.InputBinding/Flags
struct Flags_tB8C0F66F19426A1903E4D43B669650457D5057D1 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputBinding/Flags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_tB8C0F66F19426A1903E4D43B669650457D5057D1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SpatialManipulation.ObjectManipulator/ReleaseBehaviorType
struct ReleaseBehaviorType_tA7E0D682ED5687A9EA6BB5BA277443B9B927FB5C 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialManipulation.ObjectManipulator/ReleaseBehaviorType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ReleaseBehaviorType_tA7E0D682ED5687A9EA6BB5BA277443B9B927FB5C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SpatialManipulation.ObjectManipulator/RotateAnchorType
struct RotateAnchorType_tFF54D235EE199C74B675DA3CC5472F5752AEBAAA 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialManipulation.ObjectManipulator/RotateAnchorType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RotateAnchorType_tFF54D235EE199C74B675DA3CC5472F5752AEBAAA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Profiling.ProfilerMarker/AutoScope
struct AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D 
{
public:
	// System.IntPtr Unity.Profiling.ProfilerMarker/AutoScope::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals/HandlePoint
struct HandlePoint_t91E19093111D8B0BCA87EDF0F669B78522CA0164 
{
public:
	// Microsoft.MixedReality.Toolkit.SpatialManipulation.BoundsHandleInteractable Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals/HandlePoint::Handle
	BoundsHandleInteractable_tF957D394A29234622B27304D99E5408B7971132B * ___Handle_0;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals/HandlePoint::Position
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___Position_1;

public:
	inline static int32_t get_offset_of_Handle_0() { return static_cast<int32_t>(offsetof(HandlePoint_t91E19093111D8B0BCA87EDF0F669B78522CA0164, ___Handle_0)); }
	inline BoundsHandleInteractable_tF957D394A29234622B27304D99E5408B7971132B * get_Handle_0() const { return ___Handle_0; }
	inline BoundsHandleInteractable_tF957D394A29234622B27304D99E5408B7971132B ** get_address_of_Handle_0() { return &___Handle_0; }
	inline void set_Handle_0(BoundsHandleInteractable_tF957D394A29234622B27304D99E5408B7971132B * value)
	{
		___Handle_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Handle_0), (void*)value);
	}

	inline static int32_t get_offset_of_Position_1() { return static_cast<int32_t>(offsetof(HandlePoint_t91E19093111D8B0BCA87EDF0F669B78522CA0164, ___Position_1)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_Position_1() const { return ___Position_1; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_Position_1() { return &___Position_1; }
	inline void set_Position_1(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___Position_1 = value;
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals/HandlePoint
struct HandlePoint_t91E19093111D8B0BCA87EDF0F669B78522CA0164_marshaled_pinvoke
{
	BoundsHandleInteractable_tF957D394A29234622B27304D99E5408B7971132B * ___Handle_0;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___Position_1;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals/HandlePoint
struct HandlePoint_t91E19093111D8B0BCA87EDF0F669B78522CA0164_marshaled_com
{
	BoundsHandleInteractable_tF957D394A29234622B27304D99E5408B7971132B * ___Handle_0;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___Position_1;
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


// Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism/OrientationMode
struct OrientationMode_tDBD21CFDFBE15DF6D8A67153792F4752BEED5A80 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism/OrientationMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(OrientationMode_tDBD21CFDFBE15DF6D8A67153792F4752BEED5A80, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism/RaycastDirectionMode
struct RaycastDirectionMode_tDFC8C3EF71098F23F619477502781662B378A86C 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism/RaycastDirectionMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RaycastDirectionMode_tDFC8C3EF71098F23F619477502781662B378A86C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism/SceneQueryType
struct SceneQueryType_tE808F3E9F2D8CD6D15D0DBDEE4280D0B676FB844 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism/SceneQueryType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SceneQueryType_tE808F3E9F2D8CD6D15D0DBDEE4280D0B676FB844, ___value___2)); }
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


// System.Collections.Generic.List`1/Enumerator<Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals/HandlePoint>
struct Enumerator_t26258AA2194D0AA0FCFD867C989EBA242854BD2B 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t5B44A6C65ABA13F93E4D6EC9EC79567BB087CC9B * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	HandlePoint_t91E19093111D8B0BCA87EDF0F669B78522CA0164  ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t26258AA2194D0AA0FCFD867C989EBA242854BD2B, ___list_0)); }
	inline List_1_t5B44A6C65ABA13F93E4D6EC9EC79567BB087CC9B * get_list_0() const { return ___list_0; }
	inline List_1_t5B44A6C65ABA13F93E4D6EC9EC79567BB087CC9B ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t5B44A6C65ABA13F93E4D6EC9EC79567BB087CC9B * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t26258AA2194D0AA0FCFD867C989EBA242854BD2B, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t26258AA2194D0AA0FCFD867C989EBA242854BD2B, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t26258AA2194D0AA0FCFD867C989EBA242854BD2B, ___current_3)); }
	inline HandlePoint_t91E19093111D8B0BCA87EDF0F669B78522CA0164  get_current_3() const { return ___current_3; }
	inline HandlePoint_t91E19093111D8B0BCA87EDF0F669B78522CA0164 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(HandlePoint_t91E19093111D8B0BCA87EDF0F669B78522CA0164  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___Handle_0), (void*)NULL);
	}
};


// System.Collections.Generic.Stack`1/Enumerator<Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals/HandlePoint>
struct Enumerator_t9668CA47EB00CD68666FE902B91D9D7606DEF749 
{
public:
	// System.Collections.Generic.Stack`1<T> System.Collections.Generic.Stack`1/Enumerator::_stack
	Stack_1_tBBB21EE44D1282CA179A656956ED6B3BF9DD4B32 * ____stack_0;
	// System.Int32 System.Collections.Generic.Stack`1/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Stack`1/Enumerator::_index
	int32_t ____index_2;
	// T System.Collections.Generic.Stack`1/Enumerator::_currentElement
	HandlePoint_t91E19093111D8B0BCA87EDF0F669B78522CA0164  ____currentElement_3;

public:
	inline static int32_t get_offset_of__stack_0() { return static_cast<int32_t>(offsetof(Enumerator_t9668CA47EB00CD68666FE902B91D9D7606DEF749, ____stack_0)); }
	inline Stack_1_tBBB21EE44D1282CA179A656956ED6B3BF9DD4B32 * get__stack_0() const { return ____stack_0; }
	inline Stack_1_tBBB21EE44D1282CA179A656956ED6B3BF9DD4B32 ** get_address_of__stack_0() { return &____stack_0; }
	inline void set__stack_0(Stack_1_tBBB21EE44D1282CA179A656956ED6B3BF9DD4B32 * value)
	{
		____stack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stack_0), (void*)value);
	}

	inline static int32_t get_offset_of__version_1() { return static_cast<int32_t>(offsetof(Enumerator_t9668CA47EB00CD68666FE902B91D9D7606DEF749, ____version_1)); }
	inline int32_t get__version_1() const { return ____version_1; }
	inline int32_t* get_address_of__version_1() { return &____version_1; }
	inline void set__version_1(int32_t value)
	{
		____version_1 = value;
	}

	inline static int32_t get_offset_of__index_2() { return static_cast<int32_t>(offsetof(Enumerator_t9668CA47EB00CD68666FE902B91D9D7606DEF749, ____index_2)); }
	inline int32_t get__index_2() const { return ____index_2; }
	inline int32_t* get_address_of__index_2() { return &____index_2; }
	inline void set__index_2(int32_t value)
	{
		____index_2 = value;
	}

	inline static int32_t get_offset_of__currentElement_3() { return static_cast<int32_t>(offsetof(Enumerator_t9668CA47EB00CD68666FE902B91D9D7606DEF749, ____currentElement_3)); }
	inline HandlePoint_t91E19093111D8B0BCA87EDF0F669B78522CA0164  get__currentElement_3() const { return ____currentElement_3; }
	inline HandlePoint_t91E19093111D8B0BCA87EDF0F669B78522CA0164 * get_address_of__currentElement_3() { return &____currentElement_3; }
	inline void set__currentElement_3(HandlePoint_t91E19093111D8B0BCA87EDF0F669B78522CA0164  value)
	{
		____currentElement_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____currentElement_3))->___Handle_0), (void*)NULL);
	}
};


// Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystem`3<Microsoft.MixedReality.Toolkit.Subsystems.HandsAggregatorSubsystem,Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemDescriptor`2<Microsoft.MixedReality.Toolkit.Subsystems.HandsAggregatorSubsystem,Microsoft.MixedReality.Toolkit.Subsystems.HandsAggregatorSubsystem/Provider>,Microsoft.MixedReality.Toolkit.Subsystems.HandsAggregatorSubsystem/Provider>
struct MRTKSubsystem_3_t6FC6B517F07CAFC73294D2D9F655D2A51C967E53  : public SubsystemWithProvider_3_t7AB809AFC6912BEE32D202BD06EC497877E8FE40
{
public:

public:
};

struct MRTKSubsystem_3_t6FC6B517F07CAFC73294D2D9F655D2A51C967E53_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystem`3::UpdatePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdatePerfMarker_4;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystem`3::LateUpdatePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___LateUpdatePerfMarker_5;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystem`3::FixedUpdatePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___FixedUpdatePerfMarker_6;

public:
	inline static int32_t get_offset_of_UpdatePerfMarker_4() { return static_cast<int32_t>(offsetof(MRTKSubsystem_3_t6FC6B517F07CAFC73294D2D9F655D2A51C967E53_StaticFields, ___UpdatePerfMarker_4)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdatePerfMarker_4() const { return ___UpdatePerfMarker_4; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdatePerfMarker_4() { return &___UpdatePerfMarker_4; }
	inline void set_UpdatePerfMarker_4(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdatePerfMarker_4 = value;
	}

	inline static int32_t get_offset_of_LateUpdatePerfMarker_5() { return static_cast<int32_t>(offsetof(MRTKSubsystem_3_t6FC6B517F07CAFC73294D2D9F655D2A51C967E53_StaticFields, ___LateUpdatePerfMarker_5)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_LateUpdatePerfMarker_5() const { return ___LateUpdatePerfMarker_5; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_LateUpdatePerfMarker_5() { return &___LateUpdatePerfMarker_5; }
	inline void set_LateUpdatePerfMarker_5(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___LateUpdatePerfMarker_5 = value;
	}

	inline static int32_t get_offset_of_FixedUpdatePerfMarker_6() { return static_cast<int32_t>(offsetof(MRTKSubsystem_3_t6FC6B517F07CAFC73294D2D9F655D2A51C967E53_StaticFields, ___FixedUpdatePerfMarker_6)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_FixedUpdatePerfMarker_6() const { return ___FixedUpdatePerfMarker_6; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_FixedUpdatePerfMarker_6() { return &___FixedUpdatePerfMarker_6; }
	inline void set_FixedUpdatePerfMarker_6(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___FixedUpdatePerfMarker_6 = value;
	}
};


// System.Nullable`1<System.Int32Enum>
struct Nullable_1_t64244F99361E39CBE565C5E89436C898F18DF5DC 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t64244F99361E39CBE565C5E89436C898F18DF5DC, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t64244F99361E39CBE565C5E89436C898F18DF5DC, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<UnityEngine.XR.XRNode>
struct Nullable_1_t8A53876455F27274DD4D239DDFF544F081FBC07E 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t8A53876455F27274DD4D239DDFF544F081FBC07E, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t8A53876455F27274DD4D239DDFF544F081FBC07E, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
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


// Microsoft.MixedReality.Toolkit.HandJointPose
struct HandJointPose_t77237A471B6A985C8F8DCE3D0D3E19357BC2DB65 
{
public:
	// UnityEngine.Pose Microsoft.MixedReality.Toolkit.HandJointPose::pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___pose_0;
	// System.Single Microsoft.MixedReality.Toolkit.HandJointPose::radius
	float ___radius_1;

public:
	inline static int32_t get_offset_of_pose_0() { return static_cast<int32_t>(offsetof(HandJointPose_t77237A471B6A985C8F8DCE3D0D3E19357BC2DB65, ___pose_0)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_pose_0() const { return ___pose_0; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_pose_0() { return &___pose_0; }
	inline void set_pose_0(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___pose_0 = value;
	}

	inline static int32_t get_offset_of_radius_1() { return static_cast<int32_t>(offsetof(HandJointPose_t77237A471B6A985C8F8DCE3D0D3E19357BC2DB65, ___radius_1)); }
	inline float get_radius_1() const { return ___radius_1; }
	inline float* get_address_of_radius_1() { return &___radius_1; }
	inline void set_radius_1(float value)
	{
		___radius_1 = value;
	}
};


// UnityEngine.InputSystem.InputBinding
struct InputBinding_t95FC40907C92DDB8F118F0062BE49C22ADF28FFB 
{
public:
	// System.String UnityEngine.InputSystem.InputBinding::m_Name
	String_t* ___m_Name_2;
	// System.String UnityEngine.InputSystem.InputBinding::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputBinding::m_Path
	String_t* ___m_Path_4;
	// System.String UnityEngine.InputSystem.InputBinding::m_Interactions
	String_t* ___m_Interactions_5;
	// System.String UnityEngine.InputSystem.InputBinding::m_Processors
	String_t* ___m_Processors_6;
	// System.String UnityEngine.InputSystem.InputBinding::m_Groups
	String_t* ___m_Groups_7;
	// System.String UnityEngine.InputSystem.InputBinding::m_Action
	String_t* ___m_Action_8;
	// UnityEngine.InputSystem.InputBinding/Flags UnityEngine.InputSystem.InputBinding::m_Flags
	int32_t ___m_Flags_9;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverridePath
	String_t* ___m_OverridePath_10;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideInteractions
	String_t* ___m_OverrideInteractions_11;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideProcessors
	String_t* ___m_OverrideProcessors_12;

public:
	inline static int32_t get_offset_of_m_Name_2() { return static_cast<int32_t>(offsetof(InputBinding_t95FC40907C92DDB8F118F0062BE49C22ADF28FFB, ___m_Name_2)); }
	inline String_t* get_m_Name_2() const { return ___m_Name_2; }
	inline String_t** get_address_of_m_Name_2() { return &___m_Name_2; }
	inline void set_m_Name_2(String_t* value)
	{
		___m_Name_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Id_3() { return static_cast<int32_t>(offsetof(InputBinding_t95FC40907C92DDB8F118F0062BE49C22ADF28FFB, ___m_Id_3)); }
	inline String_t* get_m_Id_3() const { return ___m_Id_3; }
	inline String_t** get_address_of_m_Id_3() { return &___m_Id_3; }
	inline void set_m_Id_3(String_t* value)
	{
		___m_Id_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Id_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Path_4() { return static_cast<int32_t>(offsetof(InputBinding_t95FC40907C92DDB8F118F0062BE49C22ADF28FFB, ___m_Path_4)); }
	inline String_t* get_m_Path_4() const { return ___m_Path_4; }
	inline String_t** get_address_of_m_Path_4() { return &___m_Path_4; }
	inline void set_m_Path_4(String_t* value)
	{
		___m_Path_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Path_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactions_5() { return static_cast<int32_t>(offsetof(InputBinding_t95FC40907C92DDB8F118F0062BE49C22ADF28FFB, ___m_Interactions_5)); }
	inline String_t* get_m_Interactions_5() const { return ___m_Interactions_5; }
	inline String_t** get_address_of_m_Interactions_5() { return &___m_Interactions_5; }
	inline void set_m_Interactions_5(String_t* value)
	{
		___m_Interactions_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Interactions_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_Processors_6() { return static_cast<int32_t>(offsetof(InputBinding_t95FC40907C92DDB8F118F0062BE49C22ADF28FFB, ___m_Processors_6)); }
	inline String_t* get_m_Processors_6() const { return ___m_Processors_6; }
	inline String_t** get_address_of_m_Processors_6() { return &___m_Processors_6; }
	inline void set_m_Processors_6(String_t* value)
	{
		___m_Processors_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Processors_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Groups_7() { return static_cast<int32_t>(offsetof(InputBinding_t95FC40907C92DDB8F118F0062BE49C22ADF28FFB, ___m_Groups_7)); }
	inline String_t* get_m_Groups_7() const { return ___m_Groups_7; }
	inline String_t** get_address_of_m_Groups_7() { return &___m_Groups_7; }
	inline void set_m_Groups_7(String_t* value)
	{
		___m_Groups_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Groups_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_Action_8() { return static_cast<int32_t>(offsetof(InputBinding_t95FC40907C92DDB8F118F0062BE49C22ADF28FFB, ___m_Action_8)); }
	inline String_t* get_m_Action_8() const { return ___m_Action_8; }
	inline String_t** get_address_of_m_Action_8() { return &___m_Action_8; }
	inline void set_m_Action_8(String_t* value)
	{
		___m_Action_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Action_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_Flags_9() { return static_cast<int32_t>(offsetof(InputBinding_t95FC40907C92DDB8F118F0062BE49C22ADF28FFB, ___m_Flags_9)); }
	inline int32_t get_m_Flags_9() const { return ___m_Flags_9; }
	inline int32_t* get_address_of_m_Flags_9() { return &___m_Flags_9; }
	inline void set_m_Flags_9(int32_t value)
	{
		___m_Flags_9 = value;
	}

	inline static int32_t get_offset_of_m_OverridePath_10() { return static_cast<int32_t>(offsetof(InputBinding_t95FC40907C92DDB8F118F0062BE49C22ADF28FFB, ___m_OverridePath_10)); }
	inline String_t* get_m_OverridePath_10() const { return ___m_OverridePath_10; }
	inline String_t** get_address_of_m_OverridePath_10() { return &___m_OverridePath_10; }
	inline void set_m_OverridePath_10(String_t* value)
	{
		___m_OverridePath_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverridePath_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideInteractions_11() { return static_cast<int32_t>(offsetof(InputBinding_t95FC40907C92DDB8F118F0062BE49C22ADF28FFB, ___m_OverrideInteractions_11)); }
	inline String_t* get_m_OverrideInteractions_11() const { return ___m_OverrideInteractions_11; }
	inline String_t** get_address_of_m_OverrideInteractions_11() { return &___m_OverrideInteractions_11; }
	inline void set_m_OverrideInteractions_11(String_t* value)
	{
		___m_OverrideInteractions_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideInteractions_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideProcessors_12() { return static_cast<int32_t>(offsetof(InputBinding_t95FC40907C92DDB8F118F0062BE49C22ADF28FFB, ___m_OverrideProcessors_12)); }
	inline String_t* get_m_OverrideProcessors_12() const { return ___m_OverrideProcessors_12; }
	inline String_t** get_address_of_m_OverrideProcessors_12() { return &___m_OverrideProcessors_12; }
	inline void set_m_OverrideProcessors_12(String_t* value)
	{
		___m_OverrideProcessors_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideProcessors_12), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t95FC40907C92DDB8F118F0062BE49C22ADF28FFB_marshaled_pinvoke
{
	char* ___m_Name_2;
	char* ___m_Id_3;
	char* ___m_Path_4;
	char* ___m_Interactions_5;
	char* ___m_Processors_6;
	char* ___m_Groups_7;
	char* ___m_Action_8;
	int32_t ___m_Flags_9;
	char* ___m_OverridePath_10;
	char* ___m_OverrideInteractions_11;
	char* ___m_OverrideProcessors_12;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t95FC40907C92DDB8F118F0062BE49C22ADF28FFB_marshaled_com
{
	Il2CppChar* ___m_Name_2;
	Il2CppChar* ___m_Id_3;
	Il2CppChar* ___m_Path_4;
	Il2CppChar* ___m_Interactions_5;
	Il2CppChar* ___m_Processors_6;
	Il2CppChar* ___m_Groups_7;
	Il2CppChar* ___m_Action_8;
	int32_t ___m_Flags_9;
	Il2CppChar* ___m_OverridePath_10;
	Il2CppChar* ___m_OverrideInteractions_11;
	Il2CppChar* ___m_OverrideProcessors_12;
};

// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.MixedRealityTransform
struct MixedRealityTransform_tFD89323F4387C375948490EAF26CD10F0F6E3568 
{
public:
	// UnityEngine.Pose Microsoft.MixedReality.Toolkit.MixedRealityTransform::pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___pose_1;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.MixedRealityTransform::scale
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___scale_2;

public:
	inline static int32_t get_offset_of_pose_1() { return static_cast<int32_t>(offsetof(MixedRealityTransform_tFD89323F4387C375948490EAF26CD10F0F6E3568, ___pose_1)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_pose_1() const { return ___pose_1; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_pose_1() { return &___pose_1; }
	inline void set_pose_1(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___pose_1 = value;
	}

	inline static int32_t get_offset_of_scale_2() { return static_cast<int32_t>(offsetof(MixedRealityTransform_tFD89323F4387C375948490EAF26CD10F0F6E3568, ___scale_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_scale_2() const { return ___scale_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_scale_2() { return &___scale_2; }
	inline void set_scale_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___scale_2 = value;
	}
};

struct MixedRealityTransform_tFD89323F4387C375948490EAF26CD10F0F6E3568_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.MixedRealityTransform Microsoft.MixedReality.Toolkit.MixedRealityTransform::<Identity>k__BackingField
	MixedRealityTransform_tFD89323F4387C375948490EAF26CD10F0F6E3568  ___U3CIdentityU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CIdentityU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MixedRealityTransform_tFD89323F4387C375948490EAF26CD10F0F6E3568_StaticFields, ___U3CIdentityU3Ek__BackingField_0)); }
	inline MixedRealityTransform_tFD89323F4387C375948490EAF26CD10F0F6E3568  get_U3CIdentityU3Ek__BackingField_0() const { return ___U3CIdentityU3Ek__BackingField_0; }
	inline MixedRealityTransform_tFD89323F4387C375948490EAF26CD10F0F6E3568 * get_address_of_U3CIdentityU3Ek__BackingField_0() { return &___U3CIdentityU3Ek__BackingField_0; }
	inline void set_U3CIdentityU3Ek__BackingField_0(MixedRealityTransform_tFD89323F4387C375948490EAF26CD10F0F6E3568  value)
	{
		___U3CIdentityU3Ek__BackingField_0 = value;
	}
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


// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81  : public MulticastDelegate_t
{
public:

public:
};


// System.Comparison`1<Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals/HandlePoint>
struct Comparison_1_t317DBD3E8FEC7893E5A036339DA3726A990AD813  : public MulticastDelegate_t
{
public:

public:
};


// System.Nullable`1<UnityEngine.InputSystem.InputBinding>
struct Nullable_1_t2055E88624438E34B0C4AEB7B387170528759E07 
{
public:
	// T System.Nullable`1::value
	InputBinding_t95FC40907C92DDB8F118F0062BE49C22ADF28FFB  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t2055E88624438E34B0C4AEB7B387170528759E07, ___value_0)); }
	inline InputBinding_t95FC40907C92DDB8F118F0062BE49C22ADF28FFB  get_value_0() const { return ___value_0; }
	inline InputBinding_t95FC40907C92DDB8F118F0062BE49C22ADF28FFB * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(InputBinding_t95FC40907C92DDB8F118F0062BE49C22ADF28FFB  value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Name_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Id_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Path_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Interactions_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Processors_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Groups_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Action_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_OverridePath_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_OverrideInteractions_11), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_OverrideProcessors_12), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t2055E88624438E34B0C4AEB7B387170528759E07, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
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


// Microsoft.MixedReality.Toolkit.Subsystems.HandsAggregatorSubsystem
struct HandsAggregatorSubsystem_tD97840A5BCF555DA3D8F08A5D47AD08F1E0F8FFE  : public MRTKSubsystem_3_t6FC6B517F07CAFC73294D2D9F655D2A51C967E53
{
public:

public:
};


// UnityEngine.InputSystem.InputActionReference
struct InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// UnityEngine.InputSystem.InputActionAsset UnityEngine.InputSystem.InputActionReference::m_Asset
	InputActionAsset_t528ACD0ABA45255A4FD391F0C3D26B1B50B82B18 * ___m_Asset_4;
	// System.String UnityEngine.InputSystem.InputActionReference::m_ActionId
	String_t* ___m_ActionId_5;
	// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionReference::m_Action
	InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * ___m_Action_6;

public:
	inline static int32_t get_offset_of_m_Asset_4() { return static_cast<int32_t>(offsetof(InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621, ___m_Asset_4)); }
	inline InputActionAsset_t528ACD0ABA45255A4FD391F0C3D26B1B50B82B18 * get_m_Asset_4() const { return ___m_Asset_4; }
	inline InputActionAsset_t528ACD0ABA45255A4FD391F0C3D26B1B50B82B18 ** get_address_of_m_Asset_4() { return &___m_Asset_4; }
	inline void set_m_Asset_4(InputActionAsset_t528ACD0ABA45255A4FD391F0C3D26B1B50B82B18 * value)
	{
		___m_Asset_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Asset_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionId_5() { return static_cast<int32_t>(offsetof(InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621, ___m_ActionId_5)); }
	inline String_t* get_m_ActionId_5() const { return ___m_ActionId_5; }
	inline String_t** get_address_of_m_ActionId_5() { return &___m_ActionId_5; }
	inline void set_m_ActionId_5(String_t* value)
	{
		___m_ActionId_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionId_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_Action_6() { return static_cast<int32_t>(offsetof(InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621, ___m_Action_6)); }
	inline InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * get_m_Action_6() const { return ___m_Action_6; }
	inline InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B ** get_address_of_m_Action_6() { return &___m_Action_6; }
	inline void set_m_Action_6(InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * value)
	{
		___m_Action_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Action_6), (void*)value);
	}
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.BoxCollider
struct BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5  : public Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02
{
public:

public:
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


// UnityEngine.InputSystem.InputAction
struct InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B  : public RuntimeObject
{
public:
	// System.String UnityEngine.InputSystem.InputAction::m_Name
	String_t* ___m_Name_0;
	// UnityEngine.InputSystem.InputActionType UnityEngine.InputSystem.InputAction::m_Type
	int32_t ___m_Type_1;
	// System.String UnityEngine.InputSystem.InputAction::m_ExpectedControlType
	String_t* ___m_ExpectedControlType_2;
	// System.String UnityEngine.InputSystem.InputAction::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputAction::m_Processors
	String_t* ___m_Processors_4;
	// System.String UnityEngine.InputSystem.InputAction::m_Interactions
	String_t* ___m_Interactions_5;
	// UnityEngine.InputSystem.InputBinding[] UnityEngine.InputSystem.InputAction::m_SingletonActionBindings
	InputBindingU5BU5D_tFBF775077101E34ED6C54C4468F6E0722ECB2EF6* ___m_SingletonActionBindings_6;
	// UnityEngine.InputSystem.InputAction/ActionFlags UnityEngine.InputSystem.InputAction::m_Flags
	int32_t ___m_Flags_7;
	// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputAction::m_BindingMask
	Nullable_1_t2055E88624438E34B0C4AEB7B387170528759E07  ___m_BindingMask_8;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_BindingsStartIndex
	int32_t ___m_BindingsStartIndex_9;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_BindingsCount
	int32_t ___m_BindingsCount_10;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ControlStartIndex
	int32_t ___m_ControlStartIndex_11;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ControlCount
	int32_t ___m_ControlCount_12;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ActionIndexInState
	int32_t ___m_ActionIndexInState_13;
	// UnityEngine.InputSystem.InputActionMap UnityEngine.InputSystem.InputAction::m_ActionMap
	InputActionMap_t588F4834F020838C4E8AE148F8A42CC84FA75B44 * ___m_ActionMap_14;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnStarted
	CallbackArray_1_t9AA7F1C91BD426A599B158F2A207F494A0D431F1  ___m_OnStarted_15;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnCanceled
	CallbackArray_1_t9AA7F1C91BD426A599B158F2A207F494A0D431F1  ___m_OnCanceled_16;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnPerformed
	CallbackArray_1_t9AA7F1C91BD426A599B158F2A207F494A0D431F1  ___m_OnPerformed_17;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B, ___m_Name_0)); }
	inline String_t* get_m_Name_0() const { return ___m_Name_0; }
	inline String_t** get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(String_t* value)
	{
		___m_Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_1() { return static_cast<int32_t>(offsetof(InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B, ___m_Type_1)); }
	inline int32_t get_m_Type_1() const { return ___m_Type_1; }
	inline int32_t* get_address_of_m_Type_1() { return &___m_Type_1; }
	inline void set_m_Type_1(int32_t value)
	{
		___m_Type_1 = value;
	}

	inline static int32_t get_offset_of_m_ExpectedControlType_2() { return static_cast<int32_t>(offsetof(InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B, ___m_ExpectedControlType_2)); }
	inline String_t* get_m_ExpectedControlType_2() const { return ___m_ExpectedControlType_2; }
	inline String_t** get_address_of_m_ExpectedControlType_2() { return &___m_ExpectedControlType_2; }
	inline void set_m_ExpectedControlType_2(String_t* value)
	{
		___m_ExpectedControlType_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ExpectedControlType_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Id_3() { return static_cast<int32_t>(offsetof(InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B, ___m_Id_3)); }
	inline String_t* get_m_Id_3() const { return ___m_Id_3; }
	inline String_t** get_address_of_m_Id_3() { return &___m_Id_3; }
	inline void set_m_Id_3(String_t* value)
	{
		___m_Id_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Id_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Processors_4() { return static_cast<int32_t>(offsetof(InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B, ___m_Processors_4)); }
	inline String_t* get_m_Processors_4() const { return ___m_Processors_4; }
	inline String_t** get_address_of_m_Processors_4() { return &___m_Processors_4; }
	inline void set_m_Processors_4(String_t* value)
	{
		___m_Processors_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Processors_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactions_5() { return static_cast<int32_t>(offsetof(InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B, ___m_Interactions_5)); }
	inline String_t* get_m_Interactions_5() const { return ___m_Interactions_5; }
	inline String_t** get_address_of_m_Interactions_5() { return &___m_Interactions_5; }
	inline void set_m_Interactions_5(String_t* value)
	{
		___m_Interactions_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Interactions_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_SingletonActionBindings_6() { return static_cast<int32_t>(offsetof(InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B, ___m_SingletonActionBindings_6)); }
	inline InputBindingU5BU5D_tFBF775077101E34ED6C54C4468F6E0722ECB2EF6* get_m_SingletonActionBindings_6() const { return ___m_SingletonActionBindings_6; }
	inline InputBindingU5BU5D_tFBF775077101E34ED6C54C4468F6E0722ECB2EF6** get_address_of_m_SingletonActionBindings_6() { return &___m_SingletonActionBindings_6; }
	inline void set_m_SingletonActionBindings_6(InputBindingU5BU5D_tFBF775077101E34ED6C54C4468F6E0722ECB2EF6* value)
	{
		___m_SingletonActionBindings_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SingletonActionBindings_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Flags_7() { return static_cast<int32_t>(offsetof(InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B, ___m_Flags_7)); }
	inline int32_t get_m_Flags_7() const { return ___m_Flags_7; }
	inline int32_t* get_address_of_m_Flags_7() { return &___m_Flags_7; }
	inline void set_m_Flags_7(int32_t value)
	{
		___m_Flags_7 = value;
	}

	inline static int32_t get_offset_of_m_BindingMask_8() { return static_cast<int32_t>(offsetof(InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B, ___m_BindingMask_8)); }
	inline Nullable_1_t2055E88624438E34B0C4AEB7B387170528759E07  get_m_BindingMask_8() const { return ___m_BindingMask_8; }
	inline Nullable_1_t2055E88624438E34B0C4AEB7B387170528759E07 * get_address_of_m_BindingMask_8() { return &___m_BindingMask_8; }
	inline void set_m_BindingMask_8(Nullable_1_t2055E88624438E34B0C4AEB7B387170528759E07  value)
	{
		___m_BindingMask_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_Name_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_Id_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_Path_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_Interactions_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_Processors_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_Groups_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_Action_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_OverridePath_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_OverrideInteractions_11), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_OverrideProcessors_12), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_BindingsStartIndex_9() { return static_cast<int32_t>(offsetof(InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B, ___m_BindingsStartIndex_9)); }
	inline int32_t get_m_BindingsStartIndex_9() const { return ___m_BindingsStartIndex_9; }
	inline int32_t* get_address_of_m_BindingsStartIndex_9() { return &___m_BindingsStartIndex_9; }
	inline void set_m_BindingsStartIndex_9(int32_t value)
	{
		___m_BindingsStartIndex_9 = value;
	}

	inline static int32_t get_offset_of_m_BindingsCount_10() { return static_cast<int32_t>(offsetof(InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B, ___m_BindingsCount_10)); }
	inline int32_t get_m_BindingsCount_10() const { return ___m_BindingsCount_10; }
	inline int32_t* get_address_of_m_BindingsCount_10() { return &___m_BindingsCount_10; }
	inline void set_m_BindingsCount_10(int32_t value)
	{
		___m_BindingsCount_10 = value;
	}

	inline static int32_t get_offset_of_m_ControlStartIndex_11() { return static_cast<int32_t>(offsetof(InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B, ___m_ControlStartIndex_11)); }
	inline int32_t get_m_ControlStartIndex_11() const { return ___m_ControlStartIndex_11; }
	inline int32_t* get_address_of_m_ControlStartIndex_11() { return &___m_ControlStartIndex_11; }
	inline void set_m_ControlStartIndex_11(int32_t value)
	{
		___m_ControlStartIndex_11 = value;
	}

	inline static int32_t get_offset_of_m_ControlCount_12() { return static_cast<int32_t>(offsetof(InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B, ___m_ControlCount_12)); }
	inline int32_t get_m_ControlCount_12() const { return ___m_ControlCount_12; }
	inline int32_t* get_address_of_m_ControlCount_12() { return &___m_ControlCount_12; }
	inline void set_m_ControlCount_12(int32_t value)
	{
		___m_ControlCount_12 = value;
	}

	inline static int32_t get_offset_of_m_ActionIndexInState_13() { return static_cast<int32_t>(offsetof(InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B, ___m_ActionIndexInState_13)); }
	inline int32_t get_m_ActionIndexInState_13() const { return ___m_ActionIndexInState_13; }
	inline int32_t* get_address_of_m_ActionIndexInState_13() { return &___m_ActionIndexInState_13; }
	inline void set_m_ActionIndexInState_13(int32_t value)
	{
		___m_ActionIndexInState_13 = value;
	}

	inline static int32_t get_offset_of_m_ActionMap_14() { return static_cast<int32_t>(offsetof(InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B, ___m_ActionMap_14)); }
	inline InputActionMap_t588F4834F020838C4E8AE148F8A42CC84FA75B44 * get_m_ActionMap_14() const { return ___m_ActionMap_14; }
	inline InputActionMap_t588F4834F020838C4E8AE148F8A42CC84FA75B44 ** get_address_of_m_ActionMap_14() { return &___m_ActionMap_14; }
	inline void set_m_ActionMap_14(InputActionMap_t588F4834F020838C4E8AE148F8A42CC84FA75B44 * value)
	{
		___m_ActionMap_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionMap_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnStarted_15() { return static_cast<int32_t>(offsetof(InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B, ___m_OnStarted_15)); }
	inline CallbackArray_1_t9AA7F1C91BD426A599B158F2A207F494A0D431F1  get_m_OnStarted_15() const { return ___m_OnStarted_15; }
	inline CallbackArray_1_t9AA7F1C91BD426A599B158F2A207F494A0D431F1 * get_address_of_m_OnStarted_15() { return &___m_OnStarted_15; }
	inline void set_m_OnStarted_15(CallbackArray_1_t9AA7F1C91BD426A599B158F2A207F494A0D431F1  value)
	{
		___m_OnStarted_15 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_OnStarted_15))->___m_Callbacks_1))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_OnStarted_15))->___m_Callbacks_1))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_OnStarted_15))->___m_CallbacksToAdd_2))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_OnStarted_15))->___m_CallbacksToAdd_2))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_OnStarted_15))->___m_CallbacksToRemove_3))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_OnStarted_15))->___m_CallbacksToRemove_3))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_OnCanceled_16() { return static_cast<int32_t>(offsetof(InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B, ___m_OnCanceled_16)); }
	inline CallbackArray_1_t9AA7F1C91BD426A599B158F2A207F494A0D431F1  get_m_OnCanceled_16() const { return ___m_OnCanceled_16; }
	inline CallbackArray_1_t9AA7F1C91BD426A599B158F2A207F494A0D431F1 * get_address_of_m_OnCanceled_16() { return &___m_OnCanceled_16; }
	inline void set_m_OnCanceled_16(CallbackArray_1_t9AA7F1C91BD426A599B158F2A207F494A0D431F1  value)
	{
		___m_OnCanceled_16 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_OnCanceled_16))->___m_Callbacks_1))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_OnCanceled_16))->___m_Callbacks_1))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_OnCanceled_16))->___m_CallbacksToAdd_2))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_OnCanceled_16))->___m_CallbacksToAdd_2))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_OnCanceled_16))->___m_CallbacksToRemove_3))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_OnCanceled_16))->___m_CallbacksToRemove_3))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_OnPerformed_17() { return static_cast<int32_t>(offsetof(InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B, ___m_OnPerformed_17)); }
	inline CallbackArray_1_t9AA7F1C91BD426A599B158F2A207F494A0D431F1  get_m_OnPerformed_17() const { return ___m_OnPerformed_17; }
	inline CallbackArray_1_t9AA7F1C91BD426A599B158F2A207F494A0D431F1 * get_address_of_m_OnPerformed_17() { return &___m_OnPerformed_17; }
	inline void set_m_OnPerformed_17(CallbackArray_1_t9AA7F1C91BD426A599B158F2A207F494A0D431F1  value)
	{
		___m_OnPerformed_17 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_OnPerformed_17))->___m_Callbacks_1))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_OnPerformed_17))->___m_Callbacks_1))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_OnPerformed_17))->___m_CallbacksToAdd_2))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_OnPerformed_17))->___m_CallbacksToAdd_2))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_OnPerformed_17))->___m_CallbacksToRemove_3))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_OnPerformed_17))->___m_CallbacksToRemove_3))->___additionalValues_2), (void*)NULL);
		#endif
	}
};


// UnityEngine.MeshRenderer
struct MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B  : public Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C
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


// Microsoft.MixedReality.Toolkit.SpatialManipulation.BoundsControl
struct BoundsControl_t020B1395A554F19C45493DAA05E7ECF0D611AB9E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.SpatialManipulation.BoundsControl::boundsVisualsPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___boundsVisualsPrefab_4;
	// Microsoft.MixedReality.Toolkit.SpatialManipulation.BoundsCalculator/BoundsCalculationMethod Microsoft.MixedReality.Toolkit.SpatialManipulation.BoundsControl::boundsCalculationMethod
	int32_t ___boundsCalculationMethod_5;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.BoundsControl::includeInactiveObjects
	bool ___includeInactiveObjects_6;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.BoundsControl::overrideBounds
	bool ___overrideBounds_7;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.SpatialManipulation.BoundsControl::boundsOverride
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___boundsOverride_8;
	// Microsoft.MixedReality.Toolkit.SpatialManipulation.FlattenMode Microsoft.MixedReality.Toolkit.SpatialManipulation.BoundsControl::flattenMode
	int32_t ___flattenMode_9;
	// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.BoundsControl::boundsPadding
	float ___boundsPadding_10;
	// Microsoft.MixedReality.Toolkit.StatefulInteractable Microsoft.MixedReality.Toolkit.SpatialManipulation.BoundsControl::interactable
	StatefulInteractable_t67843E0A65DBFB7777C42C51281749C8C71AA203 * ___interactable_11;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.BoundsControl::toggleHandlesOnClick
	bool ___toggleHandlesOnClick_12;
	// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.BoundsControl::dragToggleThreshold
	float ___dragToggleThreshold_13;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.SpatialManipulation.BoundsControl::target
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___target_14;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.BoundsControl::handlesActive
	bool ___handlesActive_15;
	// Microsoft.MixedReality.Toolkit.SpatialManipulation.HandleType Microsoft.MixedReality.Toolkit.SpatialManipulation.BoundsControl::enabledHandles
	int32_t ___enabledHandles_16;
	// Microsoft.MixedReality.Toolkit.SpatialManipulation.RotateAnchorType Microsoft.MixedReality.Toolkit.SpatialManipulation.BoundsControl::rotateAnchor
	int32_t ___rotateAnchor_17;
	// Microsoft.MixedReality.Toolkit.SpatialManipulation.ScaleAnchorType Microsoft.MixedReality.Toolkit.SpatialManipulation.BoundsControl::scaleAnchor
	int32_t ___scaleAnchor_18;
	// Microsoft.MixedReality.Toolkit.SpatialManipulation.HandleScaleMode Microsoft.MixedReality.Toolkit.SpatialManipulation.BoundsControl::scaleBehavior
	int32_t ___scaleBehavior_19;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.BoundsControl::smoothingActive
	bool ___smoothingActive_20;
	// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.BoundsControl::rotateLerpTime
	float ___rotateLerpTime_21;
	// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.BoundsControl::scaleLerpTime
	float ___scaleLerpTime_22;
	// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.BoundsControl::translateLerpTime
	float ___translateLerpTime_23;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.BoundsControl::enableConstraints
	bool ___enableConstraints_24;
	// Microsoft.MixedReality.Toolkit.SpatialManipulation.ConstraintManager Microsoft.MixedReality.Toolkit.SpatialManipulation.BoundsControl::constraintsManager
	ConstraintManager_tE7450B2135FBFBA3217990D1B06D57EF56A85AD0 * ___constraintsManager_25;
	// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent Microsoft.MixedReality.Toolkit.SpatialManipulation.BoundsControl::manipulationStarted
	SelectEnterEvent_t147569BD69EAD584499BE2FC174458E3150C5918 * ___manipulationStarted_26;
	// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent Microsoft.MixedReality.Toolkit.SpatialManipulation.BoundsControl::manipulationEnded
	SelectExitEvent_t8A19A5E960E731FDA7BC2509D96527199FDA57F8 * ___manipulationEnded_27;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.BoundsControl::<IsFlat>k__BackingField
	bool ___U3CIsFlatU3Ek__BackingField_28;
	// UnityEngine.Bounds Microsoft.MixedReality.Toolkit.SpatialManipulation.BoundsControl::currentBounds
	Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  ___currentBounds_29;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.SpatialManipulation.BoundsControl::boxInstance
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___boxInstance_30;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialManipulation.BoundsControl::startMovePosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___startMovePosition_31;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialManipulation.BoundsControl::initialGrabPoint
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___initialGrabPoint_32;
	// Microsoft.MixedReality.Toolkit.SpatialManipulation.BoundsHandleInteractable Microsoft.MixedReality.Toolkit.SpatialManipulation.BoundsControl::currentHandle
	BoundsHandleInteractable_tF957D394A29234622B27304D99E5408B7971132B * ___currentHandle_33;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialManipulation.BoundsControl::flattenVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___flattenVector_34;
	// Microsoft.MixedReality.Toolkit.MixedRealityTransform Microsoft.MixedReality.Toolkit.SpatialManipulation.BoundsControl::initialTransformOnGrabStart
	MixedRealityTransform_tFD89323F4387C375948490EAF26CD10F0F6E3568  ___initialTransformOnGrabStart_35;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialManipulation.BoundsControl::oppositeCorner
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oppositeCorner_36;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialManipulation.BoundsControl::diagonalDir
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___diagonalDir_37;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialManipulation.BoundsControl::initialAnchorOnGrabStart
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___initialAnchorOnGrabStart_38;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialManipulation.BoundsControl::initialAnchorDeltaOnGrabStart
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___initialAnchorDeltaOnGrabStart_39;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialManipulation.BoundsControl::currentManipulationAxis
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___currentManipulationAxis_40;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.BoundsControl::needsBoundsRecompute
	bool ___needsBoundsRecompute_41;
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialManipulation.BoundsControl::waitForFrames
	int32_t ___waitForFrames_42;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialManipulation.BoundsControl::minimumScale
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___minimumScale_43;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.BoundsControl::isHostSelected
	bool ___isHostSelected_45;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.BoundsControl::hasPassedToggleThreshold
	bool ___hasPassedToggleThreshold_46;

public:
	inline static int32_t get_offset_of_boundsVisualsPrefab_4() { return static_cast<int32_t>(offsetof(BoundsControl_t020B1395A554F19C45493DAA05E7ECF0D611AB9E, ___boundsVisualsPrefab_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_boundsVisualsPrefab_4() const { return ___boundsVisualsPrefab_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_boundsVisualsPrefab_4() { return &___boundsVisualsPrefab_4; }
	inline void set_boundsVisualsPrefab_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___boundsVisualsPrefab_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boundsVisualsPrefab_4), (void*)value);
	}

	inline static int32_t get_offset_of_boundsCalculationMethod_5() { return static_cast<int32_t>(offsetof(BoundsControl_t020B1395A554F19C45493DAA05E7ECF0D611AB9E, ___boundsCalculationMethod_5)); }
	inline int32_t get_boundsCalculationMethod_5() const { return ___boundsCalculationMethod_5; }
	inline int32_t* get_address_of_boundsCalculationMethod_5() { return &___boundsCalculationMethod_5; }
	inline void set_boundsCalculationMethod_5(int32_t value)
	{
		___boundsCalculationMethod_5 = value;
	}

	inline static int32_t get_offset_of_includeInactiveObjects_6() { return static_cast<int32_t>(offsetof(BoundsControl_t020B1395A554F19C45493DAA05E7ECF0D611AB9E, ___includeInactiveObjects_6)); }
	inline bool get_includeInactiveObjects_6() const { return ___includeInactiveObjects_6; }
	inline bool* get_address_of_includeInactiveObjects_6() { return &___includeInactiveObjects_6; }
	inline void set_includeInactiveObjects_6(bool value)
	{
		___includeInactiveObjects_6 = value;
	}

	inline static int32_t get_offset_of_overrideBounds_7() { return static_cast<int32_t>(offsetof(BoundsControl_t020B1395A554F19C45493DAA05E7ECF0D611AB9E, ___overrideBounds_7)); }
	inline bool get_overrideBounds_7() const { return ___overrideBounds_7; }
	inline bool* get_address_of_overrideBounds_7() { return &___overrideBounds_7; }
	inline void set_overrideBounds_7(bool value)
	{
		___overrideBounds_7 = value;
	}

	inline static int32_t get_offset_of_boundsOverride_8() { return static_cast<int32_t>(offsetof(BoundsControl_t020B1395A554F19C45493DAA05E7ECF0D611AB9E, ___boundsOverride_8)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_boundsOverride_8() const { return ___boundsOverride_8; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_boundsOverride_8() { return &___boundsOverride_8; }
	inline void set_boundsOverride_8(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___boundsOverride_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boundsOverride_8), (void*)value);
	}

	inline static int32_t get_offset_of_flattenMode_9() { return static_cast<int32_t>(offsetof(BoundsControl_t020B1395A554F19C45493DAA05E7ECF0D611AB9E, ___flattenMode_9)); }
	inline int32_t get_flattenMode_9() const { return ___flattenMode_9; }
	inline int32_t* get_address_of_flattenMode_9() { return &___flattenMode_9; }
	inline void set_flattenMode_9(int32_t value)
	{
		___flattenMode_9 = value;
	}

	inline static int32_t get_offset_of_boundsPadding_10() { return static_cast<int32_t>(offsetof(BoundsControl_t020B1395A554F19C45493DAA05E7ECF0D611AB9E, ___boundsPadding_10)); }
	inline float get_boundsPadding_10() const { return ___boundsPadding_10; }
	inline float* get_address_of_boundsPadding_10() { return &___boundsPadding_10; }
	inline void set_boundsPadding_10(float value)
	{
		___boundsPadding_10 = value;
	}

	inline static int32_t get_offset_of_interactable_11() { return static_cast<int32_t>(offsetof(BoundsControl_t020B1395A554F19C45493DAA05E7ECF0D611AB9E, ___interactable_11)); }
	inline StatefulInteractable_t67843E0A65DBFB7777C42C51281749C8C71AA203 * get_interactable_11() const { return ___interactable_11; }
	inline StatefulInteractable_t67843E0A65DBFB7777C42C51281749C8C71AA203 ** get_address_of_interactable_11() { return &___interactable_11; }
	inline void set_interactable_11(StatefulInteractable_t67843E0A65DBFB7777C42C51281749C8C71AA203 * value)
	{
		___interactable_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___interactable_11), (void*)value);
	}

	inline static int32_t get_offset_of_toggleHandlesOnClick_12() { return static_cast<int32_t>(offsetof(BoundsControl_t020B1395A554F19C45493DAA05E7ECF0D611AB9E, ___toggleHandlesOnClick_12)); }
	inline bool get_toggleHandlesOnClick_12() const { return ___toggleHandlesOnClick_12; }
	inline bool* get_address_of_toggleHandlesOnClick_12() { return &___toggleHandlesOnClick_12; }
	inline void set_toggleHandlesOnClick_12(bool value)
	{
		___toggleHandlesOnClick_12 = value;
	}

	inline static int32_t get_offset_of_dragToggleThreshold_13() { return static_cast<int32_t>(offsetof(BoundsControl_t020B1395A554F19C45493DAA05E7ECF0D611AB9E, ___dragToggleThreshold_13)); }
	inline float get_dragToggleThreshold_13() const { return ___dragToggleThreshold_13; }
	inline float* get_address_of_dragToggleThreshold_13() { return &___dragToggleThreshold_13; }
	inline void set_dragToggleThreshold_13(float value)
	{
		___dragToggleThreshold_13 = value;
	}

	inline static int32_t get_offset_of_target_14() { return static_cast<int32_t>(offsetof(BoundsControl_t020B1395A554F19C45493DAA05E7ECF0D611AB9E, ___target_14)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_target_14() const { return ___target_14; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_target_14() { return &___target_14; }
	inline void set_target_14(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___target_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_14), (void*)value);
	}

	inline static int32_t get_offset_of_handlesActive_15() { return static_cast<int32_t>(offsetof(BoundsControl_t020B1395A554F19C45493DAA05E7ECF0D611AB9E, ___handlesActive_15)); }
	inline bool get_handlesActive_15() const { return ___handlesActive_15; }
	inline bool* get_address_of_handlesActive_15() { return &___handlesActive_15; }
	inline void set_handlesActive_15(bool value)
	{
		___handlesActive_15 = value;
	}

	inline static int32_t get_offset_of_enabledHandles_16() { return static_cast<int32_t>(offsetof(BoundsControl_t020B1395A554F19C45493DAA05E7ECF0D611AB9E, ___enabledHandles_16)); }
	inline int32_t get_enabledHandles_16() const { return ___enabledHandles_16; }
	inline int32_t* get_address_of_enabledHandles_16() { return &___enabledHandles_16; }
	inline void set_enabledHandles_16(int32_t value)
	{
		___enabledHandles_16 = value;
	}

	inline static int32_t get_offset_of_rotateAnchor_17() { return static_cast<int32_t>(offsetof(BoundsControl_t020B1395A554F19C45493DAA05E7ECF0D611AB9E, ___rotateAnchor_17)); }
	inline int32_t get_rotateAnchor_17() const { return ___rotateAnchor_17; }
	inline int32_t* get_address_of_rotateAnchor_17() { return &___rotateAnchor_17; }
	inline void set_rotateAnchor_17(int32_t value)
	{
		___rotateAnchor_17 = value;
	}

	inline static int32_t get_offset_of_scaleAnchor_18() { return static_cast<int32_t>(offsetof(BoundsControl_t020B1395A554F19C45493DAA05E7ECF0D611AB9E, ___scaleAnchor_18)); }
	inline int32_t get_scaleAnchor_18() const { return ___scaleAnchor_18; }
	inline int32_t* get_address_of_scaleAnchor_18() { return &___scaleAnchor_18; }
	inline void set_scaleAnchor_18(int32_t value)
	{
		___scaleAnchor_18 = value;
	}

	inline static int32_t get_offset_of_scaleBehavior_19() { return static_cast<int32_t>(offsetof(BoundsControl_t020B1395A554F19C45493DAA05E7ECF0D611AB9E, ___scaleBehavior_19)); }
	inline int32_t get_scaleBehavior_19() const { return ___scaleBehavior_19; }
	inline int32_t* get_address_of_scaleBehavior_19() { return &___scaleBehavior_19; }
	inline void set_scaleBehavior_19(int32_t value)
	{
		___scaleBehavior_19 = value;
	}

	inline static int32_t get_offset_of_smoothingActive_20() { return static_cast<int32_t>(offsetof(BoundsControl_t020B1395A554F19C45493DAA05E7ECF0D611AB9E, ___smoothingActive_20)); }
	inline bool get_smoothingActive_20() const { return ___smoothingActive_20; }
	inline bool* get_address_of_smoothingActive_20() { return &___smoothingActive_20; }
	inline void set_smoothingActive_20(bool value)
	{
		___smoothingActive_20 = value;
	}

	inline static int32_t get_offset_of_rotateLerpTime_21() { return static_cast<int32_t>(offsetof(BoundsControl_t020B1395A554F19C45493DAA05E7ECF0D611AB9E, ___rotateLerpTime_21)); }
	inline float get_rotateLerpTime_21() const { return ___rotateLerpTime_21; }
	inline float* get_address_of_rotateLerpTime_21() { return &___rotateLerpTime_21; }
	inline void set_rotateLerpTime_21(float value)
	{
		___rotateLerpTime_21 = value;
	}

	inline static int32_t get_offset_of_scaleLerpTime_22() { return static_cast<int32_t>(offsetof(BoundsControl_t020B1395A554F19C45493DAA05E7ECF0D611AB9E, ___scaleLerpTime_22)); }
	inline float get_scaleLerpTime_22() const { return ___scaleLerpTime_22; }
	inline float* get_address_of_scaleLerpTime_22() { return &___scaleLerpTime_22; }
	inline void set_scaleLerpTime_22(float value)
	{
		___scaleLerpTime_22 = value;
	}

	inline static int32_t get_offset_of_translateLerpTime_23() { return static_cast<int32_t>(offsetof(BoundsControl_t020B1395A554F19C45493DAA05E7ECF0D611AB9E, ___translateLerpTime_23)); }
	inline float get_translateLerpTime_23() const { return ___translateLerpTime_23; }
	inline float* get_address_of_translateLerpTime_23() { return &___translateLerpTime_23; }
	inline void set_translateLerpTime_23(float value)
	{
		___translateLerpTime_23 = value;
	}

	inline static int32_t get_offset_of_enableConstraints_24() { return static_cast<int32_t>(offsetof(BoundsControl_t020B1395A554F19C45493DAA05E7ECF0D611AB9E, ___enableConstraints_24)); }
	inline bool get_enableConstraints_24() const { return ___enableConstraints_24; }
	inline bool* get_address_of_enableConstraints_24() { return &___enableConstraints_24; }
	inline void set_enableConstraints_24(bool value)
	{
		___enableConstraints_24 = value;
	}

	inline static int32_t get_offset_of_constraintsManager_25() { return static_cast<int32_t>(offsetof(BoundsControl_t020B1395A554F19C45493DAA05E7ECF0D611AB9E, ___constraintsManager_25)); }
	inline ConstraintManager_tE7450B2135FBFBA3217990D1B06D57EF56A85AD0 * get_constraintsManager_25() const { return ___constraintsManager_25; }
	inline ConstraintManager_tE7450B2135FBFBA3217990D1B06D57EF56A85AD0 ** get_address_of_constraintsManager_25() { return &___constraintsManager_25; }
	inline void set_constraintsManager_25(ConstraintManager_tE7450B2135FBFBA3217990D1B06D57EF56A85AD0 * value)
	{
		___constraintsManager_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___constraintsManager_25), (void*)value);
	}

	inline static int32_t get_offset_of_manipulationStarted_26() { return static_cast<int32_t>(offsetof(BoundsControl_t020B1395A554F19C45493DAA05E7ECF0D611AB9E, ___manipulationStarted_26)); }
	inline SelectEnterEvent_t147569BD69EAD584499BE2FC174458E3150C5918 * get_manipulationStarted_26() const { return ___manipulationStarted_26; }
	inline SelectEnterEvent_t147569BD69EAD584499BE2FC174458E3150C5918 ** get_address_of_manipulationStarted_26() { return &___manipulationStarted_26; }
	inline void set_manipulationStarted_26(SelectEnterEvent_t147569BD69EAD584499BE2FC174458E3150C5918 * value)
	{
		___manipulationStarted_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___manipulationStarted_26), (void*)value);
	}

	inline static int32_t get_offset_of_manipulationEnded_27() { return static_cast<int32_t>(offsetof(BoundsControl_t020B1395A554F19C45493DAA05E7ECF0D611AB9E, ___manipulationEnded_27)); }
	inline SelectExitEvent_t8A19A5E960E731FDA7BC2509D96527199FDA57F8 * get_manipulationEnded_27() const { return ___manipulationEnded_27; }
	inline SelectExitEvent_t8A19A5E960E731FDA7BC2509D96527199FDA57F8 ** get_address_of_manipulationEnded_27() { return &___manipulationEnded_27; }
	inline void set_manipulationEnded_27(SelectExitEvent_t8A19A5E960E731FDA7BC2509D96527199FDA57F8 * value)
	{
		___manipulationEnded_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___manipulationEnded_27), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsFlatU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(BoundsControl_t020B1395A554F19C45493DAA05E7ECF0D611AB9E, ___U3CIsFlatU3Ek__BackingField_28)); }
	inline bool get_U3CIsFlatU3Ek__BackingField_28() const { return ___U3CIsFlatU3Ek__BackingField_28; }
	inline bool* get_address_of_U3CIsFlatU3Ek__BackingField_28() { return &___U3CIsFlatU3Ek__BackingField_28; }
	inline void set_U3CIsFlatU3Ek__BackingField_28(bool value)
	{
		___U3CIsFlatU3Ek__BackingField_28 = value;
	}

	inline static int32_t get_offset_of_currentBounds_29() { return static_cast<int32_t>(offsetof(BoundsControl_t020B1395A554F19C45493DAA05E7ECF0D611AB9E, ___currentBounds_29)); }
	inline Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  get_currentBounds_29() const { return ___currentBounds_29; }
	inline Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * get_address_of_currentBounds_29() { return &___currentBounds_29; }
	inline void set_currentBounds_29(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  value)
	{
		___currentBounds_29 = value;
	}

	inline static int32_t get_offset_of_boxInstance_30() { return static_cast<int32_t>(offsetof(BoundsControl_t020B1395A554F19C45493DAA05E7ECF0D611AB9E, ___boxInstance_30)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_boxInstance_30() const { return ___boxInstance_30; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_boxInstance_30() { return &___boxInstance_30; }
	inline void set_boxInstance_30(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___boxInstance_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boxInstance_30), (void*)value);
	}

	inline static int32_t get_offset_of_startMovePosition_31() { return static_cast<int32_t>(offsetof(BoundsControl_t020B1395A554F19C45493DAA05E7ECF0D611AB9E, ___startMovePosition_31)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_startMovePosition_31() const { return ___startMovePosition_31; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_startMovePosition_31() { return &___startMovePosition_31; }
	inline void set_startMovePosition_31(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___startMovePosition_31 = value;
	}

	inline static int32_t get_offset_of_initialGrabPoint_32() { return static_cast<int32_t>(offsetof(BoundsControl_t020B1395A554F19C45493DAA05E7ECF0D611AB9E, ___initialGrabPoint_32)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_initialGrabPoint_32() const { return ___initialGrabPoint_32; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_initialGrabPoint_32() { return &___initialGrabPoint_32; }
	inline void set_initialGrabPoint_32(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___initialGrabPoint_32 = value;
	}

	inline static int32_t get_offset_of_currentHandle_33() { return static_cast<int32_t>(offsetof(BoundsControl_t020B1395A554F19C45493DAA05E7ECF0D611AB9E, ___currentHandle_33)); }
	inline BoundsHandleInteractable_tF957D394A29234622B27304D99E5408B7971132B * get_currentHandle_33() const { return ___currentHandle_33; }
	inline BoundsHandleInteractable_tF957D394A29234622B27304D99E5408B7971132B ** get_address_of_currentHandle_33() { return &___currentHandle_33; }
	inline void set_currentHandle_33(BoundsHandleInteractable_tF957D394A29234622B27304D99E5408B7971132B * value)
	{
		___currentHandle_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentHandle_33), (void*)value);
	}

	inline static int32_t get_offset_of_flattenVector_34() { return static_cast<int32_t>(offsetof(BoundsControl_t020B1395A554F19C45493DAA05E7ECF0D611AB9E, ___flattenVector_34)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_flattenVector_34() const { return ___flattenVector_34; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_flattenVector_34() { return &___flattenVector_34; }
	inline void set_flattenVector_34(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___flattenVector_34 = value;
	}

	inline static int32_t get_offset_of_initialTransformOnGrabStart_35() { return static_cast<int32_t>(offsetof(BoundsControl_t020B1395A554F19C45493DAA05E7ECF0D611AB9E, ___initialTransformOnGrabStart_35)); }
	inline MixedRealityTransform_tFD89323F4387C375948490EAF26CD10F0F6E3568  get_initialTransformOnGrabStart_35() const { return ___initialTransformOnGrabStart_35; }
	inline MixedRealityTransform_tFD89323F4387C375948490EAF26CD10F0F6E3568 * get_address_of_initialTransformOnGrabStart_35() { return &___initialTransformOnGrabStart_35; }
	inline void set_initialTransformOnGrabStart_35(MixedRealityTransform_tFD89323F4387C375948490EAF26CD10F0F6E3568  value)
	{
		___initialTransformOnGrabStart_35 = value;
	}

	inline static int32_t get_offset_of_oppositeCorner_36() { return static_cast<int32_t>(offsetof(BoundsControl_t020B1395A554F19C45493DAA05E7ECF0D611AB9E, ___oppositeCorner_36)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oppositeCorner_36() const { return ___oppositeCorner_36; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oppositeCorner_36() { return &___oppositeCorner_36; }
	inline void set_oppositeCorner_36(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oppositeCorner_36 = value;
	}

	inline static int32_t get_offset_of_diagonalDir_37() { return static_cast<int32_t>(offsetof(BoundsControl_t020B1395A554F19C45493DAA05E7ECF0D611AB9E, ___diagonalDir_37)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_diagonalDir_37() const { return ___diagonalDir_37; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_diagonalDir_37() { return &___diagonalDir_37; }
	inline void set_diagonalDir_37(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___diagonalDir_37 = value;
	}

	inline static int32_t get_offset_of_initialAnchorOnGrabStart_38() { return static_cast<int32_t>(offsetof(BoundsControl_t020B1395A554F19C45493DAA05E7ECF0D611AB9E, ___initialAnchorOnGrabStart_38)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_initialAnchorOnGrabStart_38() const { return ___initialAnchorOnGrabStart_38; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_initialAnchorOnGrabStart_38() { return &___initialAnchorOnGrabStart_38; }
	inline void set_initialAnchorOnGrabStart_38(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___initialAnchorOnGrabStart_38 = value;
	}

	inline static int32_t get_offset_of_initialAnchorDeltaOnGrabStart_39() { return static_cast<int32_t>(offsetof(BoundsControl_t020B1395A554F19C45493DAA05E7ECF0D611AB9E, ___initialAnchorDeltaOnGrabStart_39)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_initialAnchorDeltaOnGrabStart_39() const { return ___initialAnchorDeltaOnGrabStart_39; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_initialAnchorDeltaOnGrabStart_39() { return &___initialAnchorDeltaOnGrabStart_39; }
	inline void set_initialAnchorDeltaOnGrabStart_39(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___initialAnchorDeltaOnGrabStart_39 = value;
	}

	inline static int32_t get_offset_of_currentManipulationAxis_40() { return static_cast<int32_t>(offsetof(BoundsControl_t020B1395A554F19C45493DAA05E7ECF0D611AB9E, ___currentManipulationAxis_40)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_currentManipulationAxis_40() const { return ___currentManipulationAxis_40; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_currentManipulationAxis_40() { return &___currentManipulationAxis_40; }
	inline void set_currentManipulationAxis_40(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___currentManipulationAxis_40 = value;
	}

	inline static int32_t get_offset_of_needsBoundsRecompute_41() { return static_cast<int32_t>(offsetof(BoundsControl_t020B1395A554F19C45493DAA05E7ECF0D611AB9E, ___needsBoundsRecompute_41)); }
	inline bool get_needsBoundsRecompute_41() const { return ___needsBoundsRecompute_41; }
	inline bool* get_address_of_needsBoundsRecompute_41() { return &___needsBoundsRecompute_41; }
	inline void set_needsBoundsRecompute_41(bool value)
	{
		___needsBoundsRecompute_41 = value;
	}

	inline static int32_t get_offset_of_waitForFrames_42() { return static_cast<int32_t>(offsetof(BoundsControl_t020B1395A554F19C45493DAA05E7ECF0D611AB9E, ___waitForFrames_42)); }
	inline int32_t get_waitForFrames_42() const { return ___waitForFrames_42; }
	inline int32_t* get_address_of_waitForFrames_42() { return &___waitForFrames_42; }
	inline void set_waitForFrames_42(int32_t value)
	{
		___waitForFrames_42 = value;
	}

	inline static int32_t get_offset_of_minimumScale_43() { return static_cast<int32_t>(offsetof(BoundsControl_t020B1395A554F19C45493DAA05E7ECF0D611AB9E, ___minimumScale_43)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_minimumScale_43() const { return ___minimumScale_43; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_minimumScale_43() { return &___minimumScale_43; }
	inline void set_minimumScale_43(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___minimumScale_43 = value;
	}

	inline static int32_t get_offset_of_isHostSelected_45() { return static_cast<int32_t>(offsetof(BoundsControl_t020B1395A554F19C45493DAA05E7ECF0D611AB9E, ___isHostSelected_45)); }
	inline bool get_isHostSelected_45() const { return ___isHostSelected_45; }
	inline bool* get_address_of_isHostSelected_45() { return &___isHostSelected_45; }
	inline void set_isHostSelected_45(bool value)
	{
		___isHostSelected_45 = value;
	}

	inline static int32_t get_offset_of_hasPassedToggleThreshold_46() { return static_cast<int32_t>(offsetof(BoundsControl_t020B1395A554F19C45493DAA05E7ECF0D611AB9E, ___hasPassedToggleThreshold_46)); }
	inline bool get_hasPassedToggleThreshold_46() const { return ___hasPassedToggleThreshold_46; }
	inline bool* get_address_of_hasPassedToggleThreshold_46() { return &___hasPassedToggleThreshold_46; }
	inline void set_hasPassedToggleThreshold_46(bool value)
	{
		___hasPassedToggleThreshold_46 = value;
	}
};

struct BoundsControl_t020B1395A554F19C45493DAA05E7ECF0D611AB9E_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialManipulation.BoundsControl::TransformTargetPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___TransformTargetPerfMarker_47;

public:
	inline static int32_t get_offset_of_TransformTargetPerfMarker_47() { return static_cast<int32_t>(offsetof(BoundsControl_t020B1395A554F19C45493DAA05E7ECF0D611AB9E_StaticFields, ___TransformTargetPerfMarker_47)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_TransformTargetPerfMarker_47() const { return ___TransformTargetPerfMarker_47; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_TransformTargetPerfMarker_47() { return &___TransformTargetPerfMarker_47; }
	inline void set_TransformTargetPerfMarker_47(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___TransformTargetPerfMarker_47 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SpatialManipulation.ConstraintManager
struct ConstraintManager_tE7450B2135FBFBA3217990D1B06D57EF56A85AD0  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.ConstraintManager::autoConstraintSelection
	bool ___autoConstraintSelection_4;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.SpatialManipulation.TransformConstraint> Microsoft.MixedReality.Toolkit.SpatialManipulation.ConstraintManager::selectedConstraints
	List_1_tA91EA8B6A14E0CF8B4F507C0492B2B22257FF79C * ___selectedConstraints_5;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.SpatialManipulation.TransformConstraint> Microsoft.MixedReality.Toolkit.SpatialManipulation.ConstraintManager::constraints
	List_1_tA91EA8B6A14E0CF8B4F507C0492B2B22257FF79C * ___constraints_6;
	// Microsoft.MixedReality.Toolkit.MixedRealityTransform Microsoft.MixedReality.Toolkit.SpatialManipulation.ConstraintManager::initialWorldPose
	MixedRealityTransform_tFD89323F4387C375948490EAF26CD10F0F6E3568  ___initialWorldPose_7;

public:
	inline static int32_t get_offset_of_autoConstraintSelection_4() { return static_cast<int32_t>(offsetof(ConstraintManager_tE7450B2135FBFBA3217990D1B06D57EF56A85AD0, ___autoConstraintSelection_4)); }
	inline bool get_autoConstraintSelection_4() const { return ___autoConstraintSelection_4; }
	inline bool* get_address_of_autoConstraintSelection_4() { return &___autoConstraintSelection_4; }
	inline void set_autoConstraintSelection_4(bool value)
	{
		___autoConstraintSelection_4 = value;
	}

	inline static int32_t get_offset_of_selectedConstraints_5() { return static_cast<int32_t>(offsetof(ConstraintManager_tE7450B2135FBFBA3217990D1B06D57EF56A85AD0, ___selectedConstraints_5)); }
	inline List_1_tA91EA8B6A14E0CF8B4F507C0492B2B22257FF79C * get_selectedConstraints_5() const { return ___selectedConstraints_5; }
	inline List_1_tA91EA8B6A14E0CF8B4F507C0492B2B22257FF79C ** get_address_of_selectedConstraints_5() { return &___selectedConstraints_5; }
	inline void set_selectedConstraints_5(List_1_tA91EA8B6A14E0CF8B4F507C0492B2B22257FF79C * value)
	{
		___selectedConstraints_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selectedConstraints_5), (void*)value);
	}

	inline static int32_t get_offset_of_constraints_6() { return static_cast<int32_t>(offsetof(ConstraintManager_tE7450B2135FBFBA3217990D1B06D57EF56A85AD0, ___constraints_6)); }
	inline List_1_tA91EA8B6A14E0CF8B4F507C0492B2B22257FF79C * get_constraints_6() const { return ___constraints_6; }
	inline List_1_tA91EA8B6A14E0CF8B4F507C0492B2B22257FF79C ** get_address_of_constraints_6() { return &___constraints_6; }
	inline void set_constraints_6(List_1_tA91EA8B6A14E0CF8B4F507C0492B2B22257FF79C * value)
	{
		___constraints_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___constraints_6), (void*)value);
	}

	inline static int32_t get_offset_of_initialWorldPose_7() { return static_cast<int32_t>(offsetof(ConstraintManager_tE7450B2135FBFBA3217990D1B06D57EF56A85AD0, ___initialWorldPose_7)); }
	inline MixedRealityTransform_tFD89323F4387C375948490EAF26CD10F0F6E3568  get_initialWorldPose_7() const { return ___initialWorldPose_7; }
	inline MixedRealityTransform_tFD89323F4387C375948490EAF26CD10F0F6E3568 * get_address_of_initialWorldPose_7() { return &___initialWorldPose_7; }
	inline void set_initialWorldPose_7(MixedRealityTransform_tFD89323F4387C375948490EAF26CD10F0F6E3568  value)
	{
		___initialWorldPose_7 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver
struct Solver_tA73899FFFB9BC2103F0BC1C9BCF601856A5BB455  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver::updateLinkedTransform
	bool ___updateLinkedTransform_5;
	// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver::moveLerpTime
	float ___moveLerpTime_6;
	// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver::rotateLerpTime
	float ___rotateLerpTime_7;
	// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver::scaleLerpTime
	float ___scaleLerpTime_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver::maintainScaleOnInitialization
	bool ___maintainScaleOnInitialization_9;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver::smoothing
	bool ___smoothing_10;
	// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver::lifetime
	float ___lifetime_11;
	// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver::currentLifetime
	float ___currentLifetime_12;
	// Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver::SolverHandler
	SolverHandler_t59B1037EA04BC8C41E82EAC219138D9DE50F7AC2 * ___SolverHandler_13;

public:
	inline static int32_t get_offset_of_updateLinkedTransform_5() { return static_cast<int32_t>(offsetof(Solver_tA73899FFFB9BC2103F0BC1C9BCF601856A5BB455, ___updateLinkedTransform_5)); }
	inline bool get_updateLinkedTransform_5() const { return ___updateLinkedTransform_5; }
	inline bool* get_address_of_updateLinkedTransform_5() { return &___updateLinkedTransform_5; }
	inline void set_updateLinkedTransform_5(bool value)
	{
		___updateLinkedTransform_5 = value;
	}

	inline static int32_t get_offset_of_moveLerpTime_6() { return static_cast<int32_t>(offsetof(Solver_tA73899FFFB9BC2103F0BC1C9BCF601856A5BB455, ___moveLerpTime_6)); }
	inline float get_moveLerpTime_6() const { return ___moveLerpTime_6; }
	inline float* get_address_of_moveLerpTime_6() { return &___moveLerpTime_6; }
	inline void set_moveLerpTime_6(float value)
	{
		___moveLerpTime_6 = value;
	}

	inline static int32_t get_offset_of_rotateLerpTime_7() { return static_cast<int32_t>(offsetof(Solver_tA73899FFFB9BC2103F0BC1C9BCF601856A5BB455, ___rotateLerpTime_7)); }
	inline float get_rotateLerpTime_7() const { return ___rotateLerpTime_7; }
	inline float* get_address_of_rotateLerpTime_7() { return &___rotateLerpTime_7; }
	inline void set_rotateLerpTime_7(float value)
	{
		___rotateLerpTime_7 = value;
	}

	inline static int32_t get_offset_of_scaleLerpTime_8() { return static_cast<int32_t>(offsetof(Solver_tA73899FFFB9BC2103F0BC1C9BCF601856A5BB455, ___scaleLerpTime_8)); }
	inline float get_scaleLerpTime_8() const { return ___scaleLerpTime_8; }
	inline float* get_address_of_scaleLerpTime_8() { return &___scaleLerpTime_8; }
	inline void set_scaleLerpTime_8(float value)
	{
		___scaleLerpTime_8 = value;
	}

	inline static int32_t get_offset_of_maintainScaleOnInitialization_9() { return static_cast<int32_t>(offsetof(Solver_tA73899FFFB9BC2103F0BC1C9BCF601856A5BB455, ___maintainScaleOnInitialization_9)); }
	inline bool get_maintainScaleOnInitialization_9() const { return ___maintainScaleOnInitialization_9; }
	inline bool* get_address_of_maintainScaleOnInitialization_9() { return &___maintainScaleOnInitialization_9; }
	inline void set_maintainScaleOnInitialization_9(bool value)
	{
		___maintainScaleOnInitialization_9 = value;
	}

	inline static int32_t get_offset_of_smoothing_10() { return static_cast<int32_t>(offsetof(Solver_tA73899FFFB9BC2103F0BC1C9BCF601856A5BB455, ___smoothing_10)); }
	inline bool get_smoothing_10() const { return ___smoothing_10; }
	inline bool* get_address_of_smoothing_10() { return &___smoothing_10; }
	inline void set_smoothing_10(bool value)
	{
		___smoothing_10 = value;
	}

	inline static int32_t get_offset_of_lifetime_11() { return static_cast<int32_t>(offsetof(Solver_tA73899FFFB9BC2103F0BC1C9BCF601856A5BB455, ___lifetime_11)); }
	inline float get_lifetime_11() const { return ___lifetime_11; }
	inline float* get_address_of_lifetime_11() { return &___lifetime_11; }
	inline void set_lifetime_11(float value)
	{
		___lifetime_11 = value;
	}

	inline static int32_t get_offset_of_currentLifetime_12() { return static_cast<int32_t>(offsetof(Solver_tA73899FFFB9BC2103F0BC1C9BCF601856A5BB455, ___currentLifetime_12)); }
	inline float get_currentLifetime_12() const { return ___currentLifetime_12; }
	inline float* get_address_of_currentLifetime_12() { return &___currentLifetime_12; }
	inline void set_currentLifetime_12(float value)
	{
		___currentLifetime_12 = value;
	}

	inline static int32_t get_offset_of_SolverHandler_13() { return static_cast<int32_t>(offsetof(Solver_tA73899FFFB9BC2103F0BC1C9BCF601856A5BB455, ___SolverHandler_13)); }
	inline SolverHandler_t59B1037EA04BC8C41E82EAC219138D9DE50F7AC2 * get_SolverHandler_13() const { return ___SolverHandler_13; }
	inline SolverHandler_t59B1037EA04BC8C41E82EAC219138D9DE50F7AC2 ** get_address_of_SolverHandler_13() { return &___SolverHandler_13; }
	inline void set_SolverHandler_13(SolverHandler_t59B1037EA04BC8C41E82EAC219138D9DE50F7AC2 * value)
	{
		___SolverHandler_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SolverHandler_13), (void*)value);
	}
};

struct Solver_tA73899FFFB9BC2103F0BC1C9BCF601856A5BB455_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.ControllerLookup Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver::controllerLookup
	ControllerLookup_tD0B78B87AC3FB26F191A1BB5E5DF863D5285A9C9 * ___controllerLookup_4;

public:
	inline static int32_t get_offset_of_controllerLookup_4() { return static_cast<int32_t>(offsetof(Solver_tA73899FFFB9BC2103F0BC1C9BCF601856A5BB455_StaticFields, ___controllerLookup_4)); }
	inline ControllerLookup_tD0B78B87AC3FB26F191A1BB5E5DF863D5285A9C9 * get_controllerLookup_4() const { return ___controllerLookup_4; }
	inline ControllerLookup_tD0B78B87AC3FB26F191A1BB5E5DF863D5285A9C9 ** get_address_of_controllerLookup_4() { return &___controllerLookup_4; }
	inline void set_controllerLookup_4(ControllerLookup_tD0B78B87AC3FB26F191A1BB5E5DF863D5285A9C9 * value)
	{
		___controllerLookup_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___controllerLookup_4), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler
struct SolverHandler_t59B1037EA04BC8C41E82EAC219138D9DE50F7AC2  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::leftInteractor
	XRBaseInteractor_t78FB23CA3FFA1C934E25A72B172879C3AE6D887F * ___leftInteractor_4;
	// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::rightInteractor
	XRBaseInteractor_t78FB23CA3FFA1C934E25A72B172879C3AE6D887F * ___rightInteractor_5;
	// Microsoft.MixedReality.Toolkit.SpatialManipulation.TrackedObjectType Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::trackedTargetType
	int32_t ___trackedTargetType_6;
	// Microsoft.MixedReality.Toolkit.Handedness Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::trackedHandedness
	int32_t ___trackedHandedness_7;
	// Microsoft.MixedReality.Toolkit.TrackedHandJoint Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::trackedHandJoint
	int32_t ___trackedHandJoint_8;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::transformOverride
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transformOverride_9;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::additionalOffset
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___additionalOffset_10;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::additionalRotation
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___additionalRotation_11;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::updateSolvers
	bool ___updateSolvers_12;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver> Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::solvers
	List_1_t9A5B88927BC40F25C1C254F6BE66C7E8E6FFC63E * ___solvers_13;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::<GoalPosition>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CGoalPositionU3Ek__BackingField_14;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::<GoalRotation>k__BackingField
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___U3CGoalRotationU3Ek__BackingField_15;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::<GoalScale>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CGoalScaleU3Ek__BackingField_16;
	// Microsoft.MixedReality.Toolkit.SpatialManipulation.Vector3Smoothed Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::<AltScale>k__BackingField
	Vector3Smoothed_tD20A5F686B12E3C524D8C369DF09A20DAAEDB3D3  ___U3CAltScaleU3Ek__BackingField_17;
	// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::<DeltaTime>k__BackingField
	float ___U3CDeltaTimeU3Ek__BackingField_18;
	// Microsoft.MixedReality.Toolkit.Handedness Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::currentTrackedHandedness
	int32_t ___currentTrackedHandedness_19;
	// Microsoft.MixedReality.Toolkit.Handedness Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::preferredTrackedHandedness
	int32_t ___preferredTrackedHandedness_20;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::trackingTarget
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___trackingTarget_21;
	// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::controllerInteractor
	XRBaseInteractor_t78FB23CA3FFA1C934E25A72B172879C3AE6D887F * ___controllerInteractor_22;
	// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::lastUpdateTime
	float ___lastUpdateTime_23;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver> Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::inspectorOrderedSolvers
	List_1_t9A5B88927BC40F25C1C254F6BE66C7E8E6FFC63E * ___inspectorOrderedSolvers_25;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::cachedHandJointTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___cachedHandJointTransform_26;

public:
	inline static int32_t get_offset_of_leftInteractor_4() { return static_cast<int32_t>(offsetof(SolverHandler_t59B1037EA04BC8C41E82EAC219138D9DE50F7AC2, ___leftInteractor_4)); }
	inline XRBaseInteractor_t78FB23CA3FFA1C934E25A72B172879C3AE6D887F * get_leftInteractor_4() const { return ___leftInteractor_4; }
	inline XRBaseInteractor_t78FB23CA3FFA1C934E25A72B172879C3AE6D887F ** get_address_of_leftInteractor_4() { return &___leftInteractor_4; }
	inline void set_leftInteractor_4(XRBaseInteractor_t78FB23CA3FFA1C934E25A72B172879C3AE6D887F * value)
	{
		___leftInteractor_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___leftInteractor_4), (void*)value);
	}

	inline static int32_t get_offset_of_rightInteractor_5() { return static_cast<int32_t>(offsetof(SolverHandler_t59B1037EA04BC8C41E82EAC219138D9DE50F7AC2, ___rightInteractor_5)); }
	inline XRBaseInteractor_t78FB23CA3FFA1C934E25A72B172879C3AE6D887F * get_rightInteractor_5() const { return ___rightInteractor_5; }
	inline XRBaseInteractor_t78FB23CA3FFA1C934E25A72B172879C3AE6D887F ** get_address_of_rightInteractor_5() { return &___rightInteractor_5; }
	inline void set_rightInteractor_5(XRBaseInteractor_t78FB23CA3FFA1C934E25A72B172879C3AE6D887F * value)
	{
		___rightInteractor_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rightInteractor_5), (void*)value);
	}

	inline static int32_t get_offset_of_trackedTargetType_6() { return static_cast<int32_t>(offsetof(SolverHandler_t59B1037EA04BC8C41E82EAC219138D9DE50F7AC2, ___trackedTargetType_6)); }
	inline int32_t get_trackedTargetType_6() const { return ___trackedTargetType_6; }
	inline int32_t* get_address_of_trackedTargetType_6() { return &___trackedTargetType_6; }
	inline void set_trackedTargetType_6(int32_t value)
	{
		___trackedTargetType_6 = value;
	}

	inline static int32_t get_offset_of_trackedHandedness_7() { return static_cast<int32_t>(offsetof(SolverHandler_t59B1037EA04BC8C41E82EAC219138D9DE50F7AC2, ___trackedHandedness_7)); }
	inline int32_t get_trackedHandedness_7() const { return ___trackedHandedness_7; }
	inline int32_t* get_address_of_trackedHandedness_7() { return &___trackedHandedness_7; }
	inline void set_trackedHandedness_7(int32_t value)
	{
		___trackedHandedness_7 = value;
	}

	inline static int32_t get_offset_of_trackedHandJoint_8() { return static_cast<int32_t>(offsetof(SolverHandler_t59B1037EA04BC8C41E82EAC219138D9DE50F7AC2, ___trackedHandJoint_8)); }
	inline int32_t get_trackedHandJoint_8() const { return ___trackedHandJoint_8; }
	inline int32_t* get_address_of_trackedHandJoint_8() { return &___trackedHandJoint_8; }
	inline void set_trackedHandJoint_8(int32_t value)
	{
		___trackedHandJoint_8 = value;
	}

	inline static int32_t get_offset_of_transformOverride_9() { return static_cast<int32_t>(offsetof(SolverHandler_t59B1037EA04BC8C41E82EAC219138D9DE50F7AC2, ___transformOverride_9)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_transformOverride_9() const { return ___transformOverride_9; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_transformOverride_9() { return &___transformOverride_9; }
	inline void set_transformOverride_9(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___transformOverride_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___transformOverride_9), (void*)value);
	}

	inline static int32_t get_offset_of_additionalOffset_10() { return static_cast<int32_t>(offsetof(SolverHandler_t59B1037EA04BC8C41E82EAC219138D9DE50F7AC2, ___additionalOffset_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_additionalOffset_10() const { return ___additionalOffset_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_additionalOffset_10() { return &___additionalOffset_10; }
	inline void set_additionalOffset_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___additionalOffset_10 = value;
	}

	inline static int32_t get_offset_of_additionalRotation_11() { return static_cast<int32_t>(offsetof(SolverHandler_t59B1037EA04BC8C41E82EAC219138D9DE50F7AC2, ___additionalRotation_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_additionalRotation_11() const { return ___additionalRotation_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_additionalRotation_11() { return &___additionalRotation_11; }
	inline void set_additionalRotation_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___additionalRotation_11 = value;
	}

	inline static int32_t get_offset_of_updateSolvers_12() { return static_cast<int32_t>(offsetof(SolverHandler_t59B1037EA04BC8C41E82EAC219138D9DE50F7AC2, ___updateSolvers_12)); }
	inline bool get_updateSolvers_12() const { return ___updateSolvers_12; }
	inline bool* get_address_of_updateSolvers_12() { return &___updateSolvers_12; }
	inline void set_updateSolvers_12(bool value)
	{
		___updateSolvers_12 = value;
	}

	inline static int32_t get_offset_of_solvers_13() { return static_cast<int32_t>(offsetof(SolverHandler_t59B1037EA04BC8C41E82EAC219138D9DE50F7AC2, ___solvers_13)); }
	inline List_1_t9A5B88927BC40F25C1C254F6BE66C7E8E6FFC63E * get_solvers_13() const { return ___solvers_13; }
	inline List_1_t9A5B88927BC40F25C1C254F6BE66C7E8E6FFC63E ** get_address_of_solvers_13() { return &___solvers_13; }
	inline void set_solvers_13(List_1_t9A5B88927BC40F25C1C254F6BE66C7E8E6FFC63E * value)
	{
		___solvers_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___solvers_13), (void*)value);
	}

	inline static int32_t get_offset_of_U3CGoalPositionU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(SolverHandler_t59B1037EA04BC8C41E82EAC219138D9DE50F7AC2, ___U3CGoalPositionU3Ek__BackingField_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CGoalPositionU3Ek__BackingField_14() const { return ___U3CGoalPositionU3Ek__BackingField_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CGoalPositionU3Ek__BackingField_14() { return &___U3CGoalPositionU3Ek__BackingField_14; }
	inline void set_U3CGoalPositionU3Ek__BackingField_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CGoalPositionU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CGoalRotationU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(SolverHandler_t59B1037EA04BC8C41E82EAC219138D9DE50F7AC2, ___U3CGoalRotationU3Ek__BackingField_15)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_U3CGoalRotationU3Ek__BackingField_15() const { return ___U3CGoalRotationU3Ek__BackingField_15; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_U3CGoalRotationU3Ek__BackingField_15() { return &___U3CGoalRotationU3Ek__BackingField_15; }
	inline void set_U3CGoalRotationU3Ek__BackingField_15(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___U3CGoalRotationU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CGoalScaleU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(SolverHandler_t59B1037EA04BC8C41E82EAC219138D9DE50F7AC2, ___U3CGoalScaleU3Ek__BackingField_16)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CGoalScaleU3Ek__BackingField_16() const { return ___U3CGoalScaleU3Ek__BackingField_16; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CGoalScaleU3Ek__BackingField_16() { return &___U3CGoalScaleU3Ek__BackingField_16; }
	inline void set_U3CGoalScaleU3Ek__BackingField_16(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CGoalScaleU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CAltScaleU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(SolverHandler_t59B1037EA04BC8C41E82EAC219138D9DE50F7AC2, ___U3CAltScaleU3Ek__BackingField_17)); }
	inline Vector3Smoothed_tD20A5F686B12E3C524D8C369DF09A20DAAEDB3D3  get_U3CAltScaleU3Ek__BackingField_17() const { return ___U3CAltScaleU3Ek__BackingField_17; }
	inline Vector3Smoothed_tD20A5F686B12E3C524D8C369DF09A20DAAEDB3D3 * get_address_of_U3CAltScaleU3Ek__BackingField_17() { return &___U3CAltScaleU3Ek__BackingField_17; }
	inline void set_U3CAltScaleU3Ek__BackingField_17(Vector3Smoothed_tD20A5F686B12E3C524D8C369DF09A20DAAEDB3D3  value)
	{
		___U3CAltScaleU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CDeltaTimeU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(SolverHandler_t59B1037EA04BC8C41E82EAC219138D9DE50F7AC2, ___U3CDeltaTimeU3Ek__BackingField_18)); }
	inline float get_U3CDeltaTimeU3Ek__BackingField_18() const { return ___U3CDeltaTimeU3Ek__BackingField_18; }
	inline float* get_address_of_U3CDeltaTimeU3Ek__BackingField_18() { return &___U3CDeltaTimeU3Ek__BackingField_18; }
	inline void set_U3CDeltaTimeU3Ek__BackingField_18(float value)
	{
		___U3CDeltaTimeU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_currentTrackedHandedness_19() { return static_cast<int32_t>(offsetof(SolverHandler_t59B1037EA04BC8C41E82EAC219138D9DE50F7AC2, ___currentTrackedHandedness_19)); }
	inline int32_t get_currentTrackedHandedness_19() const { return ___currentTrackedHandedness_19; }
	inline int32_t* get_address_of_currentTrackedHandedness_19() { return &___currentTrackedHandedness_19; }
	inline void set_currentTrackedHandedness_19(int32_t value)
	{
		___currentTrackedHandedness_19 = value;
	}

	inline static int32_t get_offset_of_preferredTrackedHandedness_20() { return static_cast<int32_t>(offsetof(SolverHandler_t59B1037EA04BC8C41E82EAC219138D9DE50F7AC2, ___preferredTrackedHandedness_20)); }
	inline int32_t get_preferredTrackedHandedness_20() const { return ___preferredTrackedHandedness_20; }
	inline int32_t* get_address_of_preferredTrackedHandedness_20() { return &___preferredTrackedHandedness_20; }
	inline void set_preferredTrackedHandedness_20(int32_t value)
	{
		___preferredTrackedHandedness_20 = value;
	}

	inline static int32_t get_offset_of_trackingTarget_21() { return static_cast<int32_t>(offsetof(SolverHandler_t59B1037EA04BC8C41E82EAC219138D9DE50F7AC2, ___trackingTarget_21)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_trackingTarget_21() const { return ___trackingTarget_21; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_trackingTarget_21() { return &___trackingTarget_21; }
	inline void set_trackingTarget_21(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___trackingTarget_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trackingTarget_21), (void*)value);
	}

	inline static int32_t get_offset_of_controllerInteractor_22() { return static_cast<int32_t>(offsetof(SolverHandler_t59B1037EA04BC8C41E82EAC219138D9DE50F7AC2, ___controllerInteractor_22)); }
	inline XRBaseInteractor_t78FB23CA3FFA1C934E25A72B172879C3AE6D887F * get_controllerInteractor_22() const { return ___controllerInteractor_22; }
	inline XRBaseInteractor_t78FB23CA3FFA1C934E25A72B172879C3AE6D887F ** get_address_of_controllerInteractor_22() { return &___controllerInteractor_22; }
	inline void set_controllerInteractor_22(XRBaseInteractor_t78FB23CA3FFA1C934E25A72B172879C3AE6D887F * value)
	{
		___controllerInteractor_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___controllerInteractor_22), (void*)value);
	}

	inline static int32_t get_offset_of_lastUpdateTime_23() { return static_cast<int32_t>(offsetof(SolverHandler_t59B1037EA04BC8C41E82EAC219138D9DE50F7AC2, ___lastUpdateTime_23)); }
	inline float get_lastUpdateTime_23() const { return ___lastUpdateTime_23; }
	inline float* get_address_of_lastUpdateTime_23() { return &___lastUpdateTime_23; }
	inline void set_lastUpdateTime_23(float value)
	{
		___lastUpdateTime_23 = value;
	}

	inline static int32_t get_offset_of_inspectorOrderedSolvers_25() { return static_cast<int32_t>(offsetof(SolverHandler_t59B1037EA04BC8C41E82EAC219138D9DE50F7AC2, ___inspectorOrderedSolvers_25)); }
	inline List_1_t9A5B88927BC40F25C1C254F6BE66C7E8E6FFC63E * get_inspectorOrderedSolvers_25() const { return ___inspectorOrderedSolvers_25; }
	inline List_1_t9A5B88927BC40F25C1C254F6BE66C7E8E6FFC63E ** get_address_of_inspectorOrderedSolvers_25() { return &___inspectorOrderedSolvers_25; }
	inline void set_inspectorOrderedSolvers_25(List_1_t9A5B88927BC40F25C1C254F6BE66C7E8E6FFC63E * value)
	{
		___inspectorOrderedSolvers_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inspectorOrderedSolvers_25), (void*)value);
	}

	inline static int32_t get_offset_of_cachedHandJointTransform_26() { return static_cast<int32_t>(offsetof(SolverHandler_t59B1037EA04BC8C41E82EAC219138D9DE50F7AC2, ___cachedHandJointTransform_26)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_cachedHandJointTransform_26() const { return ___cachedHandJointTransform_26; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_cachedHandJointTransform_26() { return &___cachedHandJointTransform_26; }
	inline void set_cachedHandJointTransform_26(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___cachedHandJointTransform_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cachedHandJointTransform_26), (void*)value);
	}
};

struct SolverHandler_t59B1037EA04BC8C41E82EAC219138D9DE50F7AC2_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::AttachToNewTrackedObjectPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___AttachToNewTrackedObjectPerfMarker_27;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::UpdateCachedHandJointTransformPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateCachedHandJointTransformPerfMarker_28;

public:
	inline static int32_t get_offset_of_AttachToNewTrackedObjectPerfMarker_27() { return static_cast<int32_t>(offsetof(SolverHandler_t59B1037EA04BC8C41E82EAC219138D9DE50F7AC2_StaticFields, ___AttachToNewTrackedObjectPerfMarker_27)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_AttachToNewTrackedObjectPerfMarker_27() const { return ___AttachToNewTrackedObjectPerfMarker_27; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_AttachToNewTrackedObjectPerfMarker_27() { return &___AttachToNewTrackedObjectPerfMarker_27; }
	inline void set_AttachToNewTrackedObjectPerfMarker_27(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___AttachToNewTrackedObjectPerfMarker_27 = value;
	}

	inline static int32_t get_offset_of_UpdateCachedHandJointTransformPerfMarker_28() { return static_cast<int32_t>(offsetof(SolverHandler_t59B1037EA04BC8C41E82EAC219138D9DE50F7AC2_StaticFields, ___UpdateCachedHandJointTransformPerfMarker_28)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateCachedHandJointTransformPerfMarker_28() const { return ___UpdateCachedHandJointTransformPerfMarker_28; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateCachedHandJointTransformPerfMarker_28() { return &___UpdateCachedHandJointTransformPerfMarker_28; }
	inline void set_UpdateCachedHandJointTransformPerfMarker_28(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateCachedHandJointTransformPerfMarker_28 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals
struct SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Microsoft.MixedReality.Toolkit.StatefulInteractable Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals::interactable
	StatefulInteractable_t67843E0A65DBFB7777C42C51281749C8C71AA203 * ___interactable_5;
	// UnityEngine.MaterialPropertyBlock Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals::propertyBlock
	MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * ___propertyBlock_6;
	// UnityEngine.MeshRenderer Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals::boundsRenderer
	MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * ___boundsRenderer_7;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals::handlesContainer
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___handlesContainer_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals::showInternalHandles
	bool ___showInternalHandles_9;
	// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals::focusLerpTime
	float ___focusLerpTime_10;
	// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals::shrinkLerpTime
	float ___shrinkLerpTime_11;
	// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals::activationLerpTime
	float ___activationLerpTime_12;
	// Microsoft.MixedReality.Toolkit.SpatialManipulation.BoundsControl Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals::boundsControl
	BoundsControl_t020B1395A554F19C45493DAA05E7ECF0D611AB9E * ___boundsControl_13;
	// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals::activeFocus
	float ___activeFocus_14;
	// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals::shrink
	float ___shrink_15;
	// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals::activation
	float ___activation_16;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.SpatialManipulation.BoundsHandleInteractable> Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals::handles
	List_1_t4A4AF37F205259DAE4A1A36EF9F01A2931624C8F * ___handles_17;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals/HandlePoint> Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals::projectedHandles
	List_1_t5B44A6C65ABA13F93E4D6EC9EC79567BB087CC9B * ___projectedHandles_18;
	// System.Collections.Generic.Stack`1<Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals/HandlePoint> Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals::stack
	Stack_1_tBBB21EE44D1282CA179A656956ED6B3BF9DD4B32 * ___stack_19;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals::unpinchScaleOffset
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___unpinchScaleOffset_20;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals::pinchScaleOffset
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pinchScaleOffset_21;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals::flattenVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___flattenVector_24;

public:
	inline static int32_t get_offset_of_interactable_5() { return static_cast<int32_t>(offsetof(SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E, ___interactable_5)); }
	inline StatefulInteractable_t67843E0A65DBFB7777C42C51281749C8C71AA203 * get_interactable_5() const { return ___interactable_5; }
	inline StatefulInteractable_t67843E0A65DBFB7777C42C51281749C8C71AA203 ** get_address_of_interactable_5() { return &___interactable_5; }
	inline void set_interactable_5(StatefulInteractable_t67843E0A65DBFB7777C42C51281749C8C71AA203 * value)
	{
		___interactable_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___interactable_5), (void*)value);
	}

	inline static int32_t get_offset_of_propertyBlock_6() { return static_cast<int32_t>(offsetof(SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E, ___propertyBlock_6)); }
	inline MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * get_propertyBlock_6() const { return ___propertyBlock_6; }
	inline MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 ** get_address_of_propertyBlock_6() { return &___propertyBlock_6; }
	inline void set_propertyBlock_6(MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * value)
	{
		___propertyBlock_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___propertyBlock_6), (void*)value);
	}

	inline static int32_t get_offset_of_boundsRenderer_7() { return static_cast<int32_t>(offsetof(SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E, ___boundsRenderer_7)); }
	inline MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * get_boundsRenderer_7() const { return ___boundsRenderer_7; }
	inline MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B ** get_address_of_boundsRenderer_7() { return &___boundsRenderer_7; }
	inline void set_boundsRenderer_7(MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * value)
	{
		___boundsRenderer_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boundsRenderer_7), (void*)value);
	}

	inline static int32_t get_offset_of_handlesContainer_8() { return static_cast<int32_t>(offsetof(SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E, ___handlesContainer_8)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_handlesContainer_8() const { return ___handlesContainer_8; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_handlesContainer_8() { return &___handlesContainer_8; }
	inline void set_handlesContainer_8(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___handlesContainer_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handlesContainer_8), (void*)value);
	}

	inline static int32_t get_offset_of_showInternalHandles_9() { return static_cast<int32_t>(offsetof(SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E, ___showInternalHandles_9)); }
	inline bool get_showInternalHandles_9() const { return ___showInternalHandles_9; }
	inline bool* get_address_of_showInternalHandles_9() { return &___showInternalHandles_9; }
	inline void set_showInternalHandles_9(bool value)
	{
		___showInternalHandles_9 = value;
	}

	inline static int32_t get_offset_of_focusLerpTime_10() { return static_cast<int32_t>(offsetof(SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E, ___focusLerpTime_10)); }
	inline float get_focusLerpTime_10() const { return ___focusLerpTime_10; }
	inline float* get_address_of_focusLerpTime_10() { return &___focusLerpTime_10; }
	inline void set_focusLerpTime_10(float value)
	{
		___focusLerpTime_10 = value;
	}

	inline static int32_t get_offset_of_shrinkLerpTime_11() { return static_cast<int32_t>(offsetof(SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E, ___shrinkLerpTime_11)); }
	inline float get_shrinkLerpTime_11() const { return ___shrinkLerpTime_11; }
	inline float* get_address_of_shrinkLerpTime_11() { return &___shrinkLerpTime_11; }
	inline void set_shrinkLerpTime_11(float value)
	{
		___shrinkLerpTime_11 = value;
	}

	inline static int32_t get_offset_of_activationLerpTime_12() { return static_cast<int32_t>(offsetof(SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E, ___activationLerpTime_12)); }
	inline float get_activationLerpTime_12() const { return ___activationLerpTime_12; }
	inline float* get_address_of_activationLerpTime_12() { return &___activationLerpTime_12; }
	inline void set_activationLerpTime_12(float value)
	{
		___activationLerpTime_12 = value;
	}

	inline static int32_t get_offset_of_boundsControl_13() { return static_cast<int32_t>(offsetof(SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E, ___boundsControl_13)); }
	inline BoundsControl_t020B1395A554F19C45493DAA05E7ECF0D611AB9E * get_boundsControl_13() const { return ___boundsControl_13; }
	inline BoundsControl_t020B1395A554F19C45493DAA05E7ECF0D611AB9E ** get_address_of_boundsControl_13() { return &___boundsControl_13; }
	inline void set_boundsControl_13(BoundsControl_t020B1395A554F19C45493DAA05E7ECF0D611AB9E * value)
	{
		___boundsControl_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boundsControl_13), (void*)value);
	}

	inline static int32_t get_offset_of_activeFocus_14() { return static_cast<int32_t>(offsetof(SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E, ___activeFocus_14)); }
	inline float get_activeFocus_14() const { return ___activeFocus_14; }
	inline float* get_address_of_activeFocus_14() { return &___activeFocus_14; }
	inline void set_activeFocus_14(float value)
	{
		___activeFocus_14 = value;
	}

	inline static int32_t get_offset_of_shrink_15() { return static_cast<int32_t>(offsetof(SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E, ___shrink_15)); }
	inline float get_shrink_15() const { return ___shrink_15; }
	inline float* get_address_of_shrink_15() { return &___shrink_15; }
	inline void set_shrink_15(float value)
	{
		___shrink_15 = value;
	}

	inline static int32_t get_offset_of_activation_16() { return static_cast<int32_t>(offsetof(SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E, ___activation_16)); }
	inline float get_activation_16() const { return ___activation_16; }
	inline float* get_address_of_activation_16() { return &___activation_16; }
	inline void set_activation_16(float value)
	{
		___activation_16 = value;
	}

	inline static int32_t get_offset_of_handles_17() { return static_cast<int32_t>(offsetof(SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E, ___handles_17)); }
	inline List_1_t4A4AF37F205259DAE4A1A36EF9F01A2931624C8F * get_handles_17() const { return ___handles_17; }
	inline List_1_t4A4AF37F205259DAE4A1A36EF9F01A2931624C8F ** get_address_of_handles_17() { return &___handles_17; }
	inline void set_handles_17(List_1_t4A4AF37F205259DAE4A1A36EF9F01A2931624C8F * value)
	{
		___handles_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handles_17), (void*)value);
	}

	inline static int32_t get_offset_of_projectedHandles_18() { return static_cast<int32_t>(offsetof(SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E, ___projectedHandles_18)); }
	inline List_1_t5B44A6C65ABA13F93E4D6EC9EC79567BB087CC9B * get_projectedHandles_18() const { return ___projectedHandles_18; }
	inline List_1_t5B44A6C65ABA13F93E4D6EC9EC79567BB087CC9B ** get_address_of_projectedHandles_18() { return &___projectedHandles_18; }
	inline void set_projectedHandles_18(List_1_t5B44A6C65ABA13F93E4D6EC9EC79567BB087CC9B * value)
	{
		___projectedHandles_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___projectedHandles_18), (void*)value);
	}

	inline static int32_t get_offset_of_stack_19() { return static_cast<int32_t>(offsetof(SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E, ___stack_19)); }
	inline Stack_1_tBBB21EE44D1282CA179A656956ED6B3BF9DD4B32 * get_stack_19() const { return ___stack_19; }
	inline Stack_1_tBBB21EE44D1282CA179A656956ED6B3BF9DD4B32 ** get_address_of_stack_19() { return &___stack_19; }
	inline void set_stack_19(Stack_1_tBBB21EE44D1282CA179A656956ED6B3BF9DD4B32 * value)
	{
		___stack_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stack_19), (void*)value);
	}

	inline static int32_t get_offset_of_unpinchScaleOffset_20() { return static_cast<int32_t>(offsetof(SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E, ___unpinchScaleOffset_20)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_unpinchScaleOffset_20() const { return ___unpinchScaleOffset_20; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_unpinchScaleOffset_20() { return &___unpinchScaleOffset_20; }
	inline void set_unpinchScaleOffset_20(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___unpinchScaleOffset_20 = value;
	}

	inline static int32_t get_offset_of_pinchScaleOffset_21() { return static_cast<int32_t>(offsetof(SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E, ___pinchScaleOffset_21)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_pinchScaleOffset_21() const { return ___pinchScaleOffset_21; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_pinchScaleOffset_21() { return &___pinchScaleOffset_21; }
	inline void set_pinchScaleOffset_21(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___pinchScaleOffset_21 = value;
	}

	inline static int32_t get_offset_of_flattenVector_24() { return static_cast<int32_t>(offsetof(SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E, ___flattenVector_24)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_flattenVector_24() const { return ___flattenVector_24; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_flattenVector_24() { return &___flattenVector_24; }
	inline void set_flattenVector_24(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___flattenVector_24 = value;
	}
};

struct SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E_StaticFields
{
public:
	// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals::convexPadding
	float ___convexPadding_22;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals::comparisonAnchor
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___comparisonAnchor_23;
	// System.Comparison`1<Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals/HandlePoint> Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals::CompareHandlePoints
	Comparison_1_t317DBD3E8FEC7893E5A036339DA3726A990AD813 * ___CompareHandlePoints_25;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals::UpdateHandlesPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateHandlesPerfMarker_26;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals::ConvexHullPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ConvexHullPerfMarker_27;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals::HideFlattenedHandlesPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___HideFlattenedHandlesPerfMarker_28;

public:
	inline static int32_t get_offset_of_convexPadding_22() { return static_cast<int32_t>(offsetof(SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E_StaticFields, ___convexPadding_22)); }
	inline float get_convexPadding_22() const { return ___convexPadding_22; }
	inline float* get_address_of_convexPadding_22() { return &___convexPadding_22; }
	inline void set_convexPadding_22(float value)
	{
		___convexPadding_22 = value;
	}

	inline static int32_t get_offset_of_comparisonAnchor_23() { return static_cast<int32_t>(offsetof(SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E_StaticFields, ___comparisonAnchor_23)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_comparisonAnchor_23() const { return ___comparisonAnchor_23; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_comparisonAnchor_23() { return &___comparisonAnchor_23; }
	inline void set_comparisonAnchor_23(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___comparisonAnchor_23 = value;
	}

	inline static int32_t get_offset_of_CompareHandlePoints_25() { return static_cast<int32_t>(offsetof(SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E_StaticFields, ___CompareHandlePoints_25)); }
	inline Comparison_1_t317DBD3E8FEC7893E5A036339DA3726A990AD813 * get_CompareHandlePoints_25() const { return ___CompareHandlePoints_25; }
	inline Comparison_1_t317DBD3E8FEC7893E5A036339DA3726A990AD813 ** get_address_of_CompareHandlePoints_25() { return &___CompareHandlePoints_25; }
	inline void set_CompareHandlePoints_25(Comparison_1_t317DBD3E8FEC7893E5A036339DA3726A990AD813 * value)
	{
		___CompareHandlePoints_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CompareHandlePoints_25), (void*)value);
	}

	inline static int32_t get_offset_of_UpdateHandlesPerfMarker_26() { return static_cast<int32_t>(offsetof(SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E_StaticFields, ___UpdateHandlesPerfMarker_26)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateHandlesPerfMarker_26() const { return ___UpdateHandlesPerfMarker_26; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateHandlesPerfMarker_26() { return &___UpdateHandlesPerfMarker_26; }
	inline void set_UpdateHandlesPerfMarker_26(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateHandlesPerfMarker_26 = value;
	}

	inline static int32_t get_offset_of_ConvexHullPerfMarker_27() { return static_cast<int32_t>(offsetof(SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E_StaticFields, ___ConvexHullPerfMarker_27)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ConvexHullPerfMarker_27() const { return ___ConvexHullPerfMarker_27; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ConvexHullPerfMarker_27() { return &___ConvexHullPerfMarker_27; }
	inline void set_ConvexHullPerfMarker_27(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ConvexHullPerfMarker_27 = value;
	}

	inline static int32_t get_offset_of_HideFlattenedHandlesPerfMarker_28() { return static_cast<int32_t>(offsetof(SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E_StaticFields, ___HideFlattenedHandlesPerfMarker_28)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_HideFlattenedHandlesPerfMarker_28() const { return ___HideFlattenedHandlesPerfMarker_28; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_HideFlattenedHandlesPerfMarker_28() { return &___HideFlattenedHandlesPerfMarker_28; }
	inline void set_HideFlattenedHandlesPerfMarker_28(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___HideFlattenedHandlesPerfMarker_28 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SpatialManipulation.TransformConstraint
struct TransformConstraint_t5F1A52B3005A031C1D9DCE0DD7FE13CCAD6DEF70  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Microsoft.MixedReality.Toolkit.SpatialManipulation.ManipulationHandFlags Microsoft.MixedReality.Toolkit.SpatialManipulation.TransformConstraint::handType
	int32_t ___handType_4;
	// Microsoft.MixedReality.Toolkit.SpatialManipulation.ManipulationProximityFlags Microsoft.MixedReality.Toolkit.SpatialManipulation.TransformConstraint::proximityType
	int32_t ___proximityType_5;
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialManipulation.TransformConstraint::executionOrder
	int32_t ___executionOrder_6;
	// Microsoft.MixedReality.Toolkit.MixedRealityTransform Microsoft.MixedReality.Toolkit.SpatialManipulation.TransformConstraint::WorldPoseOnManipulationStart
	MixedRealityTransform_tFD89323F4387C375948490EAF26CD10F0F6E3568  ___WorldPoseOnManipulationStart_7;
	// Microsoft.MixedReality.Toolkit.MixedRealityTransform Microsoft.MixedReality.Toolkit.SpatialManipulation.TransformConstraint::InitialWorldPose
	MixedRealityTransform_tFD89323F4387C375948490EAF26CD10F0F6E3568  ___InitialWorldPose_8;

public:
	inline static int32_t get_offset_of_handType_4() { return static_cast<int32_t>(offsetof(TransformConstraint_t5F1A52B3005A031C1D9DCE0DD7FE13CCAD6DEF70, ___handType_4)); }
	inline int32_t get_handType_4() const { return ___handType_4; }
	inline int32_t* get_address_of_handType_4() { return &___handType_4; }
	inline void set_handType_4(int32_t value)
	{
		___handType_4 = value;
	}

	inline static int32_t get_offset_of_proximityType_5() { return static_cast<int32_t>(offsetof(TransformConstraint_t5F1A52B3005A031C1D9DCE0DD7FE13CCAD6DEF70, ___proximityType_5)); }
	inline int32_t get_proximityType_5() const { return ___proximityType_5; }
	inline int32_t* get_address_of_proximityType_5() { return &___proximityType_5; }
	inline void set_proximityType_5(int32_t value)
	{
		___proximityType_5 = value;
	}

	inline static int32_t get_offset_of_executionOrder_6() { return static_cast<int32_t>(offsetof(TransformConstraint_t5F1A52B3005A031C1D9DCE0DD7FE13CCAD6DEF70, ___executionOrder_6)); }
	inline int32_t get_executionOrder_6() const { return ___executionOrder_6; }
	inline int32_t* get_address_of_executionOrder_6() { return &___executionOrder_6; }
	inline void set_executionOrder_6(int32_t value)
	{
		___executionOrder_6 = value;
	}

	inline static int32_t get_offset_of_WorldPoseOnManipulationStart_7() { return static_cast<int32_t>(offsetof(TransformConstraint_t5F1A52B3005A031C1D9DCE0DD7FE13CCAD6DEF70, ___WorldPoseOnManipulationStart_7)); }
	inline MixedRealityTransform_tFD89323F4387C375948490EAF26CD10F0F6E3568  get_WorldPoseOnManipulationStart_7() const { return ___WorldPoseOnManipulationStart_7; }
	inline MixedRealityTransform_tFD89323F4387C375948490EAF26CD10F0F6E3568 * get_address_of_WorldPoseOnManipulationStart_7() { return &___WorldPoseOnManipulationStart_7; }
	inline void set_WorldPoseOnManipulationStart_7(MixedRealityTransform_tFD89323F4387C375948490EAF26CD10F0F6E3568  value)
	{
		___WorldPoseOnManipulationStart_7 = value;
	}

	inline static int32_t get_offset_of_InitialWorldPose_8() { return static_cast<int32_t>(offsetof(TransformConstraint_t5F1A52B3005A031C1D9DCE0DD7FE13CCAD6DEF70, ___InitialWorldPose_8)); }
	inline MixedRealityTransform_tFD89323F4387C375948490EAF26CD10F0F6E3568  get_InitialWorldPose_8() const { return ___InitialWorldPose_8; }
	inline MixedRealityTransform_tFD89323F4387C375948490EAF26CD10F0F6E3568 * get_address_of_InitialWorldPose_8() { return &___InitialWorldPose_8; }
	inline void set_InitialWorldPose_8(MixedRealityTransform_tFD89323F4387C375948490EAF26CD10F0F6E3568  value)
	{
		___InitialWorldPose_8 = value;
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


// Microsoft.MixedReality.Toolkit.SpatialManipulation.HandConstraint
struct HandConstraint_t61C8E01D329720D8F14106F6285C2DD91388F0B2  : public Solver_tA73899FFFB9BC2103F0BC1C9BCF601856A5BB455
{
public:
	// Microsoft.MixedReality.Toolkit.SpatialManipulation.HandConstraint/SolverSafeZone Microsoft.MixedReality.Toolkit.SpatialManipulation.HandConstraint::safeZone
	int32_t ___safeZone_15;
	// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.HandConstraint::safeZoneBuffer
	float ___safeZoneBuffer_16;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.HandConstraint::updateWhenOppositeHandNear
	bool ___updateWhenOppositeHandNear_17;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.HandConstraint::hideHandCursorsOnActivate
	bool ___hideHandCursorsOnActivate_18;
	// Microsoft.MixedReality.Toolkit.SpatialManipulation.HandConstraint/SolverRotationBehavior Microsoft.MixedReality.Toolkit.SpatialManipulation.HandConstraint::rotationBehavior
	int32_t ___rotationBehavior_19;
	// Microsoft.MixedReality.Toolkit.SpatialManipulation.HandConstraint/SolverOffsetBehavior Microsoft.MixedReality.Toolkit.SpatialManipulation.HandConstraint::offsetBehavior
	int32_t ___offsetBehavior_20;
	// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.HandConstraint::forwardOffset
	float ___forwardOffset_21;
	// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.HandConstraint::safeZoneAngleOffset
	float ___safeZoneAngleOffset_22;
	// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.SpatialManipulation.HandConstraint::onFirstHandDetected
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___onFirstHandDetected_23;
	// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.SpatialManipulation.HandConstraint::onLastHandLost
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___onLastHandLost_24;
	// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.SpatialManipulation.HandConstraint::onHandActivate
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___onHandActivate_25;
	// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.SpatialManipulation.HandConstraint::onHandDeactivate
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___onHandDeactivate_26;
	// Microsoft.MixedReality.Toolkit.Handedness Microsoft.MixedReality.Toolkit.SpatialManipulation.HandConstraint::previousHandedness
	int32_t ___previousHandedness_27;
	// System.Nullable`1<UnityEngine.XR.XRNode> Microsoft.MixedReality.Toolkit.SpatialManipulation.HandConstraint::trackedNode
	Nullable_1_t8A53876455F27274DD4D239DDFF544F081FBC07E  ___trackedNode_28;
	// Microsoft.MixedReality.Toolkit.HandBounds Microsoft.MixedReality.Toolkit.SpatialManipulation.HandConstraint::handBounds
	HandBounds_t207C2DB17C5F23DBCE0FF37C3A349E1725D40510 * ___handBounds_29;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.SpatialManipulation.HandConstraint::handToWorldRotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___handToWorldRotation_30;

public:
	inline static int32_t get_offset_of_safeZone_15() { return static_cast<int32_t>(offsetof(HandConstraint_t61C8E01D329720D8F14106F6285C2DD91388F0B2, ___safeZone_15)); }
	inline int32_t get_safeZone_15() const { return ___safeZone_15; }
	inline int32_t* get_address_of_safeZone_15() { return &___safeZone_15; }
	inline void set_safeZone_15(int32_t value)
	{
		___safeZone_15 = value;
	}

	inline static int32_t get_offset_of_safeZoneBuffer_16() { return static_cast<int32_t>(offsetof(HandConstraint_t61C8E01D329720D8F14106F6285C2DD91388F0B2, ___safeZoneBuffer_16)); }
	inline float get_safeZoneBuffer_16() const { return ___safeZoneBuffer_16; }
	inline float* get_address_of_safeZoneBuffer_16() { return &___safeZoneBuffer_16; }
	inline void set_safeZoneBuffer_16(float value)
	{
		___safeZoneBuffer_16 = value;
	}

	inline static int32_t get_offset_of_updateWhenOppositeHandNear_17() { return static_cast<int32_t>(offsetof(HandConstraint_t61C8E01D329720D8F14106F6285C2DD91388F0B2, ___updateWhenOppositeHandNear_17)); }
	inline bool get_updateWhenOppositeHandNear_17() const { return ___updateWhenOppositeHandNear_17; }
	inline bool* get_address_of_updateWhenOppositeHandNear_17() { return &___updateWhenOppositeHandNear_17; }
	inline void set_updateWhenOppositeHandNear_17(bool value)
	{
		___updateWhenOppositeHandNear_17 = value;
	}

	inline static int32_t get_offset_of_hideHandCursorsOnActivate_18() { return static_cast<int32_t>(offsetof(HandConstraint_t61C8E01D329720D8F14106F6285C2DD91388F0B2, ___hideHandCursorsOnActivate_18)); }
	inline bool get_hideHandCursorsOnActivate_18() const { return ___hideHandCursorsOnActivate_18; }
	inline bool* get_address_of_hideHandCursorsOnActivate_18() { return &___hideHandCursorsOnActivate_18; }
	inline void set_hideHandCursorsOnActivate_18(bool value)
	{
		___hideHandCursorsOnActivate_18 = value;
	}

	inline static int32_t get_offset_of_rotationBehavior_19() { return static_cast<int32_t>(offsetof(HandConstraint_t61C8E01D329720D8F14106F6285C2DD91388F0B2, ___rotationBehavior_19)); }
	inline int32_t get_rotationBehavior_19() const { return ___rotationBehavior_19; }
	inline int32_t* get_address_of_rotationBehavior_19() { return &___rotationBehavior_19; }
	inline void set_rotationBehavior_19(int32_t value)
	{
		___rotationBehavior_19 = value;
	}

	inline static int32_t get_offset_of_offsetBehavior_20() { return static_cast<int32_t>(offsetof(HandConstraint_t61C8E01D329720D8F14106F6285C2DD91388F0B2, ___offsetBehavior_20)); }
	inline int32_t get_offsetBehavior_20() const { return ___offsetBehavior_20; }
	inline int32_t* get_address_of_offsetBehavior_20() { return &___offsetBehavior_20; }
	inline void set_offsetBehavior_20(int32_t value)
	{
		___offsetBehavior_20 = value;
	}

	inline static int32_t get_offset_of_forwardOffset_21() { return static_cast<int32_t>(offsetof(HandConstraint_t61C8E01D329720D8F14106F6285C2DD91388F0B2, ___forwardOffset_21)); }
	inline float get_forwardOffset_21() const { return ___forwardOffset_21; }
	inline float* get_address_of_forwardOffset_21() { return &___forwardOffset_21; }
	inline void set_forwardOffset_21(float value)
	{
		___forwardOffset_21 = value;
	}

	inline static int32_t get_offset_of_safeZoneAngleOffset_22() { return static_cast<int32_t>(offsetof(HandConstraint_t61C8E01D329720D8F14106F6285C2DD91388F0B2, ___safeZoneAngleOffset_22)); }
	inline float get_safeZoneAngleOffset_22() const { return ___safeZoneAngleOffset_22; }
	inline float* get_address_of_safeZoneAngleOffset_22() { return &___safeZoneAngleOffset_22; }
	inline void set_safeZoneAngleOffset_22(float value)
	{
		___safeZoneAngleOffset_22 = value;
	}

	inline static int32_t get_offset_of_onFirstHandDetected_23() { return static_cast<int32_t>(offsetof(HandConstraint_t61C8E01D329720D8F14106F6285C2DD91388F0B2, ___onFirstHandDetected_23)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_onFirstHandDetected_23() const { return ___onFirstHandDetected_23; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_onFirstHandDetected_23() { return &___onFirstHandDetected_23; }
	inline void set_onFirstHandDetected_23(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___onFirstHandDetected_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onFirstHandDetected_23), (void*)value);
	}

	inline static int32_t get_offset_of_onLastHandLost_24() { return static_cast<int32_t>(offsetof(HandConstraint_t61C8E01D329720D8F14106F6285C2DD91388F0B2, ___onLastHandLost_24)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_onLastHandLost_24() const { return ___onLastHandLost_24; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_onLastHandLost_24() { return &___onLastHandLost_24; }
	inline void set_onLastHandLost_24(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___onLastHandLost_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onLastHandLost_24), (void*)value);
	}

	inline static int32_t get_offset_of_onHandActivate_25() { return static_cast<int32_t>(offsetof(HandConstraint_t61C8E01D329720D8F14106F6285C2DD91388F0B2, ___onHandActivate_25)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_onHandActivate_25() const { return ___onHandActivate_25; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_onHandActivate_25() { return &___onHandActivate_25; }
	inline void set_onHandActivate_25(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___onHandActivate_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onHandActivate_25), (void*)value);
	}

	inline static int32_t get_offset_of_onHandDeactivate_26() { return static_cast<int32_t>(offsetof(HandConstraint_t61C8E01D329720D8F14106F6285C2DD91388F0B2, ___onHandDeactivate_26)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_onHandDeactivate_26() const { return ___onHandDeactivate_26; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_onHandDeactivate_26() { return &___onHandDeactivate_26; }
	inline void set_onHandDeactivate_26(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___onHandDeactivate_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onHandDeactivate_26), (void*)value);
	}

	inline static int32_t get_offset_of_previousHandedness_27() { return static_cast<int32_t>(offsetof(HandConstraint_t61C8E01D329720D8F14106F6285C2DD91388F0B2, ___previousHandedness_27)); }
	inline int32_t get_previousHandedness_27() const { return ___previousHandedness_27; }
	inline int32_t* get_address_of_previousHandedness_27() { return &___previousHandedness_27; }
	inline void set_previousHandedness_27(int32_t value)
	{
		___previousHandedness_27 = value;
	}

	inline static int32_t get_offset_of_trackedNode_28() { return static_cast<int32_t>(offsetof(HandConstraint_t61C8E01D329720D8F14106F6285C2DD91388F0B2, ___trackedNode_28)); }
	inline Nullable_1_t8A53876455F27274DD4D239DDFF544F081FBC07E  get_trackedNode_28() const { return ___trackedNode_28; }
	inline Nullable_1_t8A53876455F27274DD4D239DDFF544F081FBC07E * get_address_of_trackedNode_28() { return &___trackedNode_28; }
	inline void set_trackedNode_28(Nullable_1_t8A53876455F27274DD4D239DDFF544F081FBC07E  value)
	{
		___trackedNode_28 = value;
	}

	inline static int32_t get_offset_of_handBounds_29() { return static_cast<int32_t>(offsetof(HandConstraint_t61C8E01D329720D8F14106F6285C2DD91388F0B2, ___handBounds_29)); }
	inline HandBounds_t207C2DB17C5F23DBCE0FF37C3A349E1725D40510 * get_handBounds_29() const { return ___handBounds_29; }
	inline HandBounds_t207C2DB17C5F23DBCE0FF37C3A349E1725D40510 ** get_address_of_handBounds_29() { return &___handBounds_29; }
	inline void set_handBounds_29(HandBounds_t207C2DB17C5F23DBCE0FF37C3A349E1725D40510 * value)
	{
		___handBounds_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handBounds_29), (void*)value);
	}

	inline static int32_t get_offset_of_handToWorldRotation_30() { return static_cast<int32_t>(offsetof(HandConstraint_t61C8E01D329720D8F14106F6285C2DD91388F0B2, ___handToWorldRotation_30)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_handToWorldRotation_30() const { return ___handToWorldRotation_30; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_handToWorldRotation_30() { return &___handToWorldRotation_30; }
	inline void set_handToWorldRotation_30(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___handToWorldRotation_30 = value;
	}
};

struct HandConstraint_t61C8E01D329720D8F14106F6285C2DD91388F0B2_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.SpatialManipulation.HandConstraint/SolverSafeZone[] Microsoft.MixedReality.Toolkit.SpatialManipulation.HandConstraint::handSafeZonesClockWiseRightHand
	SolverSafeZoneU5BU5D_t682C02E4E1267E13E7968977F5DB0E6B3259E796* ___handSafeZonesClockWiseRightHand_14;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialManipulation.HandConstraint::SolverUpdatePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___SolverUpdatePerfMarker_31;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialManipulation.HandConstraint::CalculateGoalPositionPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___CalculateGoalPositionPerfMarker_32;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialManipulation.HandConstraint::CalculateGoalRotationPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___CalculateGoalRotationPerfMarker_33;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialManipulation.HandConstraint::IsOppositeHandNearPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___IsOppositeHandNearPerfMarker_34;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialManipulation.HandConstraint::CalculateRayForSafeZonePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___CalculateRayForSafeZonePerfMarker_35;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialManipulation.HandConstraint::CalculateGoalPositionRayPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___CalculateGoalPositionRayPerfMarker_36;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialManipulation.HandConstraint::GetPalmPosePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___GetPalmPosePerfMarker_37;

public:
	inline static int32_t get_offset_of_handSafeZonesClockWiseRightHand_14() { return static_cast<int32_t>(offsetof(HandConstraint_t61C8E01D329720D8F14106F6285C2DD91388F0B2_StaticFields, ___handSafeZonesClockWiseRightHand_14)); }
	inline SolverSafeZoneU5BU5D_t682C02E4E1267E13E7968977F5DB0E6B3259E796* get_handSafeZonesClockWiseRightHand_14() const { return ___handSafeZonesClockWiseRightHand_14; }
	inline SolverSafeZoneU5BU5D_t682C02E4E1267E13E7968977F5DB0E6B3259E796** get_address_of_handSafeZonesClockWiseRightHand_14() { return &___handSafeZonesClockWiseRightHand_14; }
	inline void set_handSafeZonesClockWiseRightHand_14(SolverSafeZoneU5BU5D_t682C02E4E1267E13E7968977F5DB0E6B3259E796* value)
	{
		___handSafeZonesClockWiseRightHand_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handSafeZonesClockWiseRightHand_14), (void*)value);
	}

	inline static int32_t get_offset_of_SolverUpdatePerfMarker_31() { return static_cast<int32_t>(offsetof(HandConstraint_t61C8E01D329720D8F14106F6285C2DD91388F0B2_StaticFields, ___SolverUpdatePerfMarker_31)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_SolverUpdatePerfMarker_31() const { return ___SolverUpdatePerfMarker_31; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_SolverUpdatePerfMarker_31() { return &___SolverUpdatePerfMarker_31; }
	inline void set_SolverUpdatePerfMarker_31(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___SolverUpdatePerfMarker_31 = value;
	}

	inline static int32_t get_offset_of_CalculateGoalPositionPerfMarker_32() { return static_cast<int32_t>(offsetof(HandConstraint_t61C8E01D329720D8F14106F6285C2DD91388F0B2_StaticFields, ___CalculateGoalPositionPerfMarker_32)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_CalculateGoalPositionPerfMarker_32() const { return ___CalculateGoalPositionPerfMarker_32; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_CalculateGoalPositionPerfMarker_32() { return &___CalculateGoalPositionPerfMarker_32; }
	inline void set_CalculateGoalPositionPerfMarker_32(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___CalculateGoalPositionPerfMarker_32 = value;
	}

	inline static int32_t get_offset_of_CalculateGoalRotationPerfMarker_33() { return static_cast<int32_t>(offsetof(HandConstraint_t61C8E01D329720D8F14106F6285C2DD91388F0B2_StaticFields, ___CalculateGoalRotationPerfMarker_33)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_CalculateGoalRotationPerfMarker_33() const { return ___CalculateGoalRotationPerfMarker_33; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_CalculateGoalRotationPerfMarker_33() { return &___CalculateGoalRotationPerfMarker_33; }
	inline void set_CalculateGoalRotationPerfMarker_33(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___CalculateGoalRotationPerfMarker_33 = value;
	}

	inline static int32_t get_offset_of_IsOppositeHandNearPerfMarker_34() { return static_cast<int32_t>(offsetof(HandConstraint_t61C8E01D329720D8F14106F6285C2DD91388F0B2_StaticFields, ___IsOppositeHandNearPerfMarker_34)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_IsOppositeHandNearPerfMarker_34() const { return ___IsOppositeHandNearPerfMarker_34; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_IsOppositeHandNearPerfMarker_34() { return &___IsOppositeHandNearPerfMarker_34; }
	inline void set_IsOppositeHandNearPerfMarker_34(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___IsOppositeHandNearPerfMarker_34 = value;
	}

	inline static int32_t get_offset_of_CalculateRayForSafeZonePerfMarker_35() { return static_cast<int32_t>(offsetof(HandConstraint_t61C8E01D329720D8F14106F6285C2DD91388F0B2_StaticFields, ___CalculateRayForSafeZonePerfMarker_35)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_CalculateRayForSafeZonePerfMarker_35() const { return ___CalculateRayForSafeZonePerfMarker_35; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_CalculateRayForSafeZonePerfMarker_35() { return &___CalculateRayForSafeZonePerfMarker_35; }
	inline void set_CalculateRayForSafeZonePerfMarker_35(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___CalculateRayForSafeZonePerfMarker_35 = value;
	}

	inline static int32_t get_offset_of_CalculateGoalPositionRayPerfMarker_36() { return static_cast<int32_t>(offsetof(HandConstraint_t61C8E01D329720D8F14106F6285C2DD91388F0B2_StaticFields, ___CalculateGoalPositionRayPerfMarker_36)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_CalculateGoalPositionRayPerfMarker_36() const { return ___CalculateGoalPositionRayPerfMarker_36; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_CalculateGoalPositionRayPerfMarker_36() { return &___CalculateGoalPositionRayPerfMarker_36; }
	inline void set_CalculateGoalPositionRayPerfMarker_36(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___CalculateGoalPositionRayPerfMarker_36 = value;
	}

	inline static int32_t get_offset_of_GetPalmPosePerfMarker_37() { return static_cast<int32_t>(offsetof(HandConstraint_t61C8E01D329720D8F14106F6285C2DD91388F0B2_StaticFields, ___GetPalmPosePerfMarker_37)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_GetPalmPosePerfMarker_37() const { return ___GetPalmPosePerfMarker_37; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_GetPalmPosePerfMarker_37() { return &___GetPalmPosePerfMarker_37; }
	inline void set_GetPalmPosePerfMarker_37(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___GetPalmPosePerfMarker_37 = value;
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


// Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism
struct SurfaceMagnetism_t23AC1508708E4CA5D97B38DEDEDD8DB5FE6E6161  : public Solver_tA73899FFFB9BC2103F0BC1C9BCF601856A5BB455
{
public:
	// UnityEngine.LayerMask[] Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::magneticSurfaces
	LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F* ___magneticSurfaces_14;
	// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::maxRaycastDistance
	float ___maxRaycastDistance_15;
	// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::closestDistance
	float ___closestDistance_16;
	// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::surfaceNormalOffset
	float ___surfaceNormalOffset_17;
	// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::surfaceRayOffset
	float ___surfaceRayOffset_18;
	// Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism/SceneQueryType Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::raycastMode
	int32_t ___raycastMode_19;
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::boxRaysPerEdge
	int32_t ___boxRaysPerEdge_20;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::orthographicBoxCast
	bool ___orthographicBoxCast_21;
	// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::maximumNormalVariance
	float ___maximumNormalVariance_22;
	// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::sphereSize
	float ___sphereSize_23;
	// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::volumeCastSizeOverride
	float ___volumeCastSizeOverride_24;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::useLinkedAltScaleOverride
	bool ___useLinkedAltScaleOverride_25;
	// Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism/RaycastDirectionMode Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::currentRaycastDirectionMode
	int32_t ___currentRaycastDirectionMode_26;
	// Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism/OrientationMode Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::orientationMode
	int32_t ___orientationMode_27;
	// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::orientationBlend
	float ___orientationBlend_28;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::keepOrientationVertical
	bool ___keepOrientationVertical_29;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::debugEnabled
	bool ___debugEnabled_30;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::<OnSurface>k__BackingField
	bool ___U3COnSurfaceU3Ek__BackingField_31;
	// Microsoft.MixedReality.Toolkit.RayStep Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::currentRayStep
	RayStep_t68267BADF85DF3BC948899D189E94EC8C2D87C6F  ___currentRayStep_33;
	// UnityEngine.BoxCollider Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::boxCollider
	BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * ___boxCollider_34;

public:
	inline static int32_t get_offset_of_magneticSurfaces_14() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_t23AC1508708E4CA5D97B38DEDEDD8DB5FE6E6161, ___magneticSurfaces_14)); }
	inline LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F* get_magneticSurfaces_14() const { return ___magneticSurfaces_14; }
	inline LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F** get_address_of_magneticSurfaces_14() { return &___magneticSurfaces_14; }
	inline void set_magneticSurfaces_14(LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F* value)
	{
		___magneticSurfaces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___magneticSurfaces_14), (void*)value);
	}

	inline static int32_t get_offset_of_maxRaycastDistance_15() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_t23AC1508708E4CA5D97B38DEDEDD8DB5FE6E6161, ___maxRaycastDistance_15)); }
	inline float get_maxRaycastDistance_15() const { return ___maxRaycastDistance_15; }
	inline float* get_address_of_maxRaycastDistance_15() { return &___maxRaycastDistance_15; }
	inline void set_maxRaycastDistance_15(float value)
	{
		___maxRaycastDistance_15 = value;
	}

	inline static int32_t get_offset_of_closestDistance_16() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_t23AC1508708E4CA5D97B38DEDEDD8DB5FE6E6161, ___closestDistance_16)); }
	inline float get_closestDistance_16() const { return ___closestDistance_16; }
	inline float* get_address_of_closestDistance_16() { return &___closestDistance_16; }
	inline void set_closestDistance_16(float value)
	{
		___closestDistance_16 = value;
	}

	inline static int32_t get_offset_of_surfaceNormalOffset_17() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_t23AC1508708E4CA5D97B38DEDEDD8DB5FE6E6161, ___surfaceNormalOffset_17)); }
	inline float get_surfaceNormalOffset_17() const { return ___surfaceNormalOffset_17; }
	inline float* get_address_of_surfaceNormalOffset_17() { return &___surfaceNormalOffset_17; }
	inline void set_surfaceNormalOffset_17(float value)
	{
		___surfaceNormalOffset_17 = value;
	}

	inline static int32_t get_offset_of_surfaceRayOffset_18() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_t23AC1508708E4CA5D97B38DEDEDD8DB5FE6E6161, ___surfaceRayOffset_18)); }
	inline float get_surfaceRayOffset_18() const { return ___surfaceRayOffset_18; }
	inline float* get_address_of_surfaceRayOffset_18() { return &___surfaceRayOffset_18; }
	inline void set_surfaceRayOffset_18(float value)
	{
		___surfaceRayOffset_18 = value;
	}

	inline static int32_t get_offset_of_raycastMode_19() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_t23AC1508708E4CA5D97B38DEDEDD8DB5FE6E6161, ___raycastMode_19)); }
	inline int32_t get_raycastMode_19() const { return ___raycastMode_19; }
	inline int32_t* get_address_of_raycastMode_19() { return &___raycastMode_19; }
	inline void set_raycastMode_19(int32_t value)
	{
		___raycastMode_19 = value;
	}

	inline static int32_t get_offset_of_boxRaysPerEdge_20() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_t23AC1508708E4CA5D97B38DEDEDD8DB5FE6E6161, ___boxRaysPerEdge_20)); }
	inline int32_t get_boxRaysPerEdge_20() const { return ___boxRaysPerEdge_20; }
	inline int32_t* get_address_of_boxRaysPerEdge_20() { return &___boxRaysPerEdge_20; }
	inline void set_boxRaysPerEdge_20(int32_t value)
	{
		___boxRaysPerEdge_20 = value;
	}

	inline static int32_t get_offset_of_orthographicBoxCast_21() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_t23AC1508708E4CA5D97B38DEDEDD8DB5FE6E6161, ___orthographicBoxCast_21)); }
	inline bool get_orthographicBoxCast_21() const { return ___orthographicBoxCast_21; }
	inline bool* get_address_of_orthographicBoxCast_21() { return &___orthographicBoxCast_21; }
	inline void set_orthographicBoxCast_21(bool value)
	{
		___orthographicBoxCast_21 = value;
	}

	inline static int32_t get_offset_of_maximumNormalVariance_22() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_t23AC1508708E4CA5D97B38DEDEDD8DB5FE6E6161, ___maximumNormalVariance_22)); }
	inline float get_maximumNormalVariance_22() const { return ___maximumNormalVariance_22; }
	inline float* get_address_of_maximumNormalVariance_22() { return &___maximumNormalVariance_22; }
	inline void set_maximumNormalVariance_22(float value)
	{
		___maximumNormalVariance_22 = value;
	}

	inline static int32_t get_offset_of_sphereSize_23() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_t23AC1508708E4CA5D97B38DEDEDD8DB5FE6E6161, ___sphereSize_23)); }
	inline float get_sphereSize_23() const { return ___sphereSize_23; }
	inline float* get_address_of_sphereSize_23() { return &___sphereSize_23; }
	inline void set_sphereSize_23(float value)
	{
		___sphereSize_23 = value;
	}

	inline static int32_t get_offset_of_volumeCastSizeOverride_24() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_t23AC1508708E4CA5D97B38DEDEDD8DB5FE6E6161, ___volumeCastSizeOverride_24)); }
	inline float get_volumeCastSizeOverride_24() const { return ___volumeCastSizeOverride_24; }
	inline float* get_address_of_volumeCastSizeOverride_24() { return &___volumeCastSizeOverride_24; }
	inline void set_volumeCastSizeOverride_24(float value)
	{
		___volumeCastSizeOverride_24 = value;
	}

	inline static int32_t get_offset_of_useLinkedAltScaleOverride_25() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_t23AC1508708E4CA5D97B38DEDEDD8DB5FE6E6161, ___useLinkedAltScaleOverride_25)); }
	inline bool get_useLinkedAltScaleOverride_25() const { return ___useLinkedAltScaleOverride_25; }
	inline bool* get_address_of_useLinkedAltScaleOverride_25() { return &___useLinkedAltScaleOverride_25; }
	inline void set_useLinkedAltScaleOverride_25(bool value)
	{
		___useLinkedAltScaleOverride_25 = value;
	}

	inline static int32_t get_offset_of_currentRaycastDirectionMode_26() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_t23AC1508708E4CA5D97B38DEDEDD8DB5FE6E6161, ___currentRaycastDirectionMode_26)); }
	inline int32_t get_currentRaycastDirectionMode_26() const { return ___currentRaycastDirectionMode_26; }
	inline int32_t* get_address_of_currentRaycastDirectionMode_26() { return &___currentRaycastDirectionMode_26; }
	inline void set_currentRaycastDirectionMode_26(int32_t value)
	{
		___currentRaycastDirectionMode_26 = value;
	}

	inline static int32_t get_offset_of_orientationMode_27() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_t23AC1508708E4CA5D97B38DEDEDD8DB5FE6E6161, ___orientationMode_27)); }
	inline int32_t get_orientationMode_27() const { return ___orientationMode_27; }
	inline int32_t* get_address_of_orientationMode_27() { return &___orientationMode_27; }
	inline void set_orientationMode_27(int32_t value)
	{
		___orientationMode_27 = value;
	}

	inline static int32_t get_offset_of_orientationBlend_28() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_t23AC1508708E4CA5D97B38DEDEDD8DB5FE6E6161, ___orientationBlend_28)); }
	inline float get_orientationBlend_28() const { return ___orientationBlend_28; }
	inline float* get_address_of_orientationBlend_28() { return &___orientationBlend_28; }
	inline void set_orientationBlend_28(float value)
	{
		___orientationBlend_28 = value;
	}

	inline static int32_t get_offset_of_keepOrientationVertical_29() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_t23AC1508708E4CA5D97B38DEDEDD8DB5FE6E6161, ___keepOrientationVertical_29)); }
	inline bool get_keepOrientationVertical_29() const { return ___keepOrientationVertical_29; }
	inline bool* get_address_of_keepOrientationVertical_29() { return &___keepOrientationVertical_29; }
	inline void set_keepOrientationVertical_29(bool value)
	{
		___keepOrientationVertical_29 = value;
	}

	inline static int32_t get_offset_of_debugEnabled_30() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_t23AC1508708E4CA5D97B38DEDEDD8DB5FE6E6161, ___debugEnabled_30)); }
	inline bool get_debugEnabled_30() const { return ___debugEnabled_30; }
	inline bool* get_address_of_debugEnabled_30() { return &___debugEnabled_30; }
	inline void set_debugEnabled_30(bool value)
	{
		___debugEnabled_30 = value;
	}

	inline static int32_t get_offset_of_U3COnSurfaceU3Ek__BackingField_31() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_t23AC1508708E4CA5D97B38DEDEDD8DB5FE6E6161, ___U3COnSurfaceU3Ek__BackingField_31)); }
	inline bool get_U3COnSurfaceU3Ek__BackingField_31() const { return ___U3COnSurfaceU3Ek__BackingField_31; }
	inline bool* get_address_of_U3COnSurfaceU3Ek__BackingField_31() { return &___U3COnSurfaceU3Ek__BackingField_31; }
	inline void set_U3COnSurfaceU3Ek__BackingField_31(bool value)
	{
		___U3COnSurfaceU3Ek__BackingField_31 = value;
	}

	inline static int32_t get_offset_of_currentRayStep_33() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_t23AC1508708E4CA5D97B38DEDEDD8DB5FE6E6161, ___currentRayStep_33)); }
	inline RayStep_t68267BADF85DF3BC948899D189E94EC8C2D87C6F  get_currentRayStep_33() const { return ___currentRayStep_33; }
	inline RayStep_t68267BADF85DF3BC948899D189E94EC8C2D87C6F * get_address_of_currentRayStep_33() { return &___currentRayStep_33; }
	inline void set_currentRayStep_33(RayStep_t68267BADF85DF3BC948899D189E94EC8C2D87C6F  value)
	{
		___currentRayStep_33 = value;
	}

	inline static int32_t get_offset_of_boxCollider_34() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_t23AC1508708E4CA5D97B38DEDEDD8DB5FE6E6161, ___boxCollider_34)); }
	inline BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * get_boxCollider_34() const { return ___boxCollider_34; }
	inline BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 ** get_address_of_boxCollider_34() { return &___boxCollider_34; }
	inline void set_boxCollider_34(BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * value)
	{
		___boxCollider_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boxCollider_34), (void*)value);
	}
};

struct SurfaceMagnetism_t23AC1508708E4CA5D97B38DEDEDD8DB5FE6E6161_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::SolverUpdatePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___SolverUpdatePerfMarker_35;

public:
	inline static int32_t get_offset_of_SolverUpdatePerfMarker_35() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_t23AC1508708E4CA5D97B38DEDEDD8DB5FE6E6161_StaticFields, ___SolverUpdatePerfMarker_35)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_SolverUpdatePerfMarker_35() const { return ___SolverUpdatePerfMarker_35; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_SolverUpdatePerfMarker_35() { return &___SolverUpdatePerfMarker_35; }
	inline void set_SolverUpdatePerfMarker_35(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___SolverUpdatePerfMarker_35 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace
struct TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2  : public Solver_tA73899FFFB9BC2103F0BC1C9BCF601856A5BB455
{
public:
	// UnityEngine.InputSystem.InputActionReference Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::placementActionReference
	InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * ___placementActionReference_14;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::autoStart
	bool ___autoStart_15;
	// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::defaultPlacementDistance
	float ___defaultPlacementDistance_16;
	// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::maxRaycastDistance
	float ___maxRaycastDistance_17;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::<IsBeingPlaced>k__BackingField
	bool ___U3CIsBeingPlacedU3Ek__BackingField_18;
	// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::surfaceNormalOffset
	float ___surfaceNormalOffset_19;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::useDefaultSurfaceNormalOffset
	bool ___useDefaultSurfaceNormalOffset_20;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::keepOrientationVertical
	bool ___keepOrientationVertical_21;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::rotateAccordingToSurface
	bool ___rotateAccordingToSurface_22;
	// UnityEngine.LayerMask[] Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::magneticSurfaces
	LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F* ___magneticSurfaces_23;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::debugEnabled
	bool ___debugEnabled_24;
	// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::onPlacingStarted
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___onPlacingStarted_25;
	// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::onPlacingStopped
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___onPlacingStopped_26;
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::<GameObjectLayer>k__BackingField
	int32_t ___U3CGameObjectLayerU3Ek__BackingField_27;
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::ignoreRaycastLayer
	int32_t ___ignoreRaycastLayer_28;
	// Microsoft.MixedReality.Toolkit.RayStep Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::CurrentRay
	RayStep_t68267BADF85DF3BC948899D189E94EC8C2D87C6F  ___CurrentRay_29;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::DidHitSurface
	bool ___DidHitSurface_30;
	// UnityEngine.RaycastHit Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::CurrentHit
	RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  ___CurrentHit_31;
	// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::LastTimeClicked
	float ___LastTimeClicked_32;
	// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::DoubleClickTimeout
	float ___DoubleClickTimeout_33;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::startCalled
	bool ___startCalled_34;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::placementRequested
	bool ___placementRequested_35;

public:
	inline static int32_t get_offset_of_placementActionReference_14() { return static_cast<int32_t>(offsetof(TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2, ___placementActionReference_14)); }
	inline InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * get_placementActionReference_14() const { return ___placementActionReference_14; }
	inline InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 ** get_address_of_placementActionReference_14() { return &___placementActionReference_14; }
	inline void set_placementActionReference_14(InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * value)
	{
		___placementActionReference_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___placementActionReference_14), (void*)value);
	}

	inline static int32_t get_offset_of_autoStart_15() { return static_cast<int32_t>(offsetof(TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2, ___autoStart_15)); }
	inline bool get_autoStart_15() const { return ___autoStart_15; }
	inline bool* get_address_of_autoStart_15() { return &___autoStart_15; }
	inline void set_autoStart_15(bool value)
	{
		___autoStart_15 = value;
	}

	inline static int32_t get_offset_of_defaultPlacementDistance_16() { return static_cast<int32_t>(offsetof(TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2, ___defaultPlacementDistance_16)); }
	inline float get_defaultPlacementDistance_16() const { return ___defaultPlacementDistance_16; }
	inline float* get_address_of_defaultPlacementDistance_16() { return &___defaultPlacementDistance_16; }
	inline void set_defaultPlacementDistance_16(float value)
	{
		___defaultPlacementDistance_16 = value;
	}

	inline static int32_t get_offset_of_maxRaycastDistance_17() { return static_cast<int32_t>(offsetof(TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2, ___maxRaycastDistance_17)); }
	inline float get_maxRaycastDistance_17() const { return ___maxRaycastDistance_17; }
	inline float* get_address_of_maxRaycastDistance_17() { return &___maxRaycastDistance_17; }
	inline void set_maxRaycastDistance_17(float value)
	{
		___maxRaycastDistance_17 = value;
	}

	inline static int32_t get_offset_of_U3CIsBeingPlacedU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2, ___U3CIsBeingPlacedU3Ek__BackingField_18)); }
	inline bool get_U3CIsBeingPlacedU3Ek__BackingField_18() const { return ___U3CIsBeingPlacedU3Ek__BackingField_18; }
	inline bool* get_address_of_U3CIsBeingPlacedU3Ek__BackingField_18() { return &___U3CIsBeingPlacedU3Ek__BackingField_18; }
	inline void set_U3CIsBeingPlacedU3Ek__BackingField_18(bool value)
	{
		___U3CIsBeingPlacedU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_surfaceNormalOffset_19() { return static_cast<int32_t>(offsetof(TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2, ___surfaceNormalOffset_19)); }
	inline float get_surfaceNormalOffset_19() const { return ___surfaceNormalOffset_19; }
	inline float* get_address_of_surfaceNormalOffset_19() { return &___surfaceNormalOffset_19; }
	inline void set_surfaceNormalOffset_19(float value)
	{
		___surfaceNormalOffset_19 = value;
	}

	inline static int32_t get_offset_of_useDefaultSurfaceNormalOffset_20() { return static_cast<int32_t>(offsetof(TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2, ___useDefaultSurfaceNormalOffset_20)); }
	inline bool get_useDefaultSurfaceNormalOffset_20() const { return ___useDefaultSurfaceNormalOffset_20; }
	inline bool* get_address_of_useDefaultSurfaceNormalOffset_20() { return &___useDefaultSurfaceNormalOffset_20; }
	inline void set_useDefaultSurfaceNormalOffset_20(bool value)
	{
		___useDefaultSurfaceNormalOffset_20 = value;
	}

	inline static int32_t get_offset_of_keepOrientationVertical_21() { return static_cast<int32_t>(offsetof(TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2, ___keepOrientationVertical_21)); }
	inline bool get_keepOrientationVertical_21() const { return ___keepOrientationVertical_21; }
	inline bool* get_address_of_keepOrientationVertical_21() { return &___keepOrientationVertical_21; }
	inline void set_keepOrientationVertical_21(bool value)
	{
		___keepOrientationVertical_21 = value;
	}

	inline static int32_t get_offset_of_rotateAccordingToSurface_22() { return static_cast<int32_t>(offsetof(TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2, ___rotateAccordingToSurface_22)); }
	inline bool get_rotateAccordingToSurface_22() const { return ___rotateAccordingToSurface_22; }
	inline bool* get_address_of_rotateAccordingToSurface_22() { return &___rotateAccordingToSurface_22; }
	inline void set_rotateAccordingToSurface_22(bool value)
	{
		___rotateAccordingToSurface_22 = value;
	}

	inline static int32_t get_offset_of_magneticSurfaces_23() { return static_cast<int32_t>(offsetof(TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2, ___magneticSurfaces_23)); }
	inline LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F* get_magneticSurfaces_23() const { return ___magneticSurfaces_23; }
	inline LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F** get_address_of_magneticSurfaces_23() { return &___magneticSurfaces_23; }
	inline void set_magneticSurfaces_23(LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F* value)
	{
		___magneticSurfaces_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___magneticSurfaces_23), (void*)value);
	}

	inline static int32_t get_offset_of_debugEnabled_24() { return static_cast<int32_t>(offsetof(TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2, ___debugEnabled_24)); }
	inline bool get_debugEnabled_24() const { return ___debugEnabled_24; }
	inline bool* get_address_of_debugEnabled_24() { return &___debugEnabled_24; }
	inline void set_debugEnabled_24(bool value)
	{
		___debugEnabled_24 = value;
	}

	inline static int32_t get_offset_of_onPlacingStarted_25() { return static_cast<int32_t>(offsetof(TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2, ___onPlacingStarted_25)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_onPlacingStarted_25() const { return ___onPlacingStarted_25; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_onPlacingStarted_25() { return &___onPlacingStarted_25; }
	inline void set_onPlacingStarted_25(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___onPlacingStarted_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPlacingStarted_25), (void*)value);
	}

	inline static int32_t get_offset_of_onPlacingStopped_26() { return static_cast<int32_t>(offsetof(TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2, ___onPlacingStopped_26)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_onPlacingStopped_26() const { return ___onPlacingStopped_26; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_onPlacingStopped_26() { return &___onPlacingStopped_26; }
	inline void set_onPlacingStopped_26(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___onPlacingStopped_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPlacingStopped_26), (void*)value);
	}

	inline static int32_t get_offset_of_U3CGameObjectLayerU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2, ___U3CGameObjectLayerU3Ek__BackingField_27)); }
	inline int32_t get_U3CGameObjectLayerU3Ek__BackingField_27() const { return ___U3CGameObjectLayerU3Ek__BackingField_27; }
	inline int32_t* get_address_of_U3CGameObjectLayerU3Ek__BackingField_27() { return &___U3CGameObjectLayerU3Ek__BackingField_27; }
	inline void set_U3CGameObjectLayerU3Ek__BackingField_27(int32_t value)
	{
		___U3CGameObjectLayerU3Ek__BackingField_27 = value;
	}

	inline static int32_t get_offset_of_ignoreRaycastLayer_28() { return static_cast<int32_t>(offsetof(TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2, ___ignoreRaycastLayer_28)); }
	inline int32_t get_ignoreRaycastLayer_28() const { return ___ignoreRaycastLayer_28; }
	inline int32_t* get_address_of_ignoreRaycastLayer_28() { return &___ignoreRaycastLayer_28; }
	inline void set_ignoreRaycastLayer_28(int32_t value)
	{
		___ignoreRaycastLayer_28 = value;
	}

	inline static int32_t get_offset_of_CurrentRay_29() { return static_cast<int32_t>(offsetof(TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2, ___CurrentRay_29)); }
	inline RayStep_t68267BADF85DF3BC948899D189E94EC8C2D87C6F  get_CurrentRay_29() const { return ___CurrentRay_29; }
	inline RayStep_t68267BADF85DF3BC948899D189E94EC8C2D87C6F * get_address_of_CurrentRay_29() { return &___CurrentRay_29; }
	inline void set_CurrentRay_29(RayStep_t68267BADF85DF3BC948899D189E94EC8C2D87C6F  value)
	{
		___CurrentRay_29 = value;
	}

	inline static int32_t get_offset_of_DidHitSurface_30() { return static_cast<int32_t>(offsetof(TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2, ___DidHitSurface_30)); }
	inline bool get_DidHitSurface_30() const { return ___DidHitSurface_30; }
	inline bool* get_address_of_DidHitSurface_30() { return &___DidHitSurface_30; }
	inline void set_DidHitSurface_30(bool value)
	{
		___DidHitSurface_30 = value;
	}

	inline static int32_t get_offset_of_CurrentHit_31() { return static_cast<int32_t>(offsetof(TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2, ___CurrentHit_31)); }
	inline RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  get_CurrentHit_31() const { return ___CurrentHit_31; }
	inline RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * get_address_of_CurrentHit_31() { return &___CurrentHit_31; }
	inline void set_CurrentHit_31(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  value)
	{
		___CurrentHit_31 = value;
	}

	inline static int32_t get_offset_of_LastTimeClicked_32() { return static_cast<int32_t>(offsetof(TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2, ___LastTimeClicked_32)); }
	inline float get_LastTimeClicked_32() const { return ___LastTimeClicked_32; }
	inline float* get_address_of_LastTimeClicked_32() { return &___LastTimeClicked_32; }
	inline void set_LastTimeClicked_32(float value)
	{
		___LastTimeClicked_32 = value;
	}

	inline static int32_t get_offset_of_DoubleClickTimeout_33() { return static_cast<int32_t>(offsetof(TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2, ___DoubleClickTimeout_33)); }
	inline float get_DoubleClickTimeout_33() const { return ___DoubleClickTimeout_33; }
	inline float* get_address_of_DoubleClickTimeout_33() { return &___DoubleClickTimeout_33; }
	inline void set_DoubleClickTimeout_33(float value)
	{
		___DoubleClickTimeout_33 = value;
	}

	inline static int32_t get_offset_of_startCalled_34() { return static_cast<int32_t>(offsetof(TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2, ___startCalled_34)); }
	inline bool get_startCalled_34() const { return ___startCalled_34; }
	inline bool* get_address_of_startCalled_34() { return &___startCalled_34; }
	inline void set_startCalled_34(bool value)
	{
		___startCalled_34 = value;
	}

	inline static int32_t get_offset_of_placementRequested_35() { return static_cast<int32_t>(offsetof(TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2, ___placementRequested_35)); }
	inline bool get_placementRequested_35() const { return ___placementRequested_35; }
	inline bool* get_address_of_placementRequested_35() { return &___placementRequested_35; }
	inline void set_placementRequested_35(bool value)
	{
		___placementRequested_35 = value;
	}
};

struct TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::StartPlacementPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___StartPlacementPerfMarker_36;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::StopPlacementPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___StopPlacementPerfMarker_37;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::SolverUpdatePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___SolverUpdatePerfMarker_38;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::PerformRaycastPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___PerformRaycastPerfMarker_39;

public:
	inline static int32_t get_offset_of_StartPlacementPerfMarker_36() { return static_cast<int32_t>(offsetof(TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2_StaticFields, ___StartPlacementPerfMarker_36)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_StartPlacementPerfMarker_36() const { return ___StartPlacementPerfMarker_36; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_StartPlacementPerfMarker_36() { return &___StartPlacementPerfMarker_36; }
	inline void set_StartPlacementPerfMarker_36(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___StartPlacementPerfMarker_36 = value;
	}

	inline static int32_t get_offset_of_StopPlacementPerfMarker_37() { return static_cast<int32_t>(offsetof(TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2_StaticFields, ___StopPlacementPerfMarker_37)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_StopPlacementPerfMarker_37() const { return ___StopPlacementPerfMarker_37; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_StopPlacementPerfMarker_37() { return &___StopPlacementPerfMarker_37; }
	inline void set_StopPlacementPerfMarker_37(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___StopPlacementPerfMarker_37 = value;
	}

	inline static int32_t get_offset_of_SolverUpdatePerfMarker_38() { return static_cast<int32_t>(offsetof(TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2_StaticFields, ___SolverUpdatePerfMarker_38)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_SolverUpdatePerfMarker_38() const { return ___SolverUpdatePerfMarker_38; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_SolverUpdatePerfMarker_38() { return &___SolverUpdatePerfMarker_38; }
	inline void set_SolverUpdatePerfMarker_38(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___SolverUpdatePerfMarker_38 = value;
	}

	inline static int32_t get_offset_of_PerformRaycastPerfMarker_39() { return static_cast<int32_t>(offsetof(TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2_StaticFields, ___PerformRaycastPerfMarker_39)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_PerformRaycastPerfMarker_39() const { return ___PerformRaycastPerfMarker_39; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_PerformRaycastPerfMarker_39() { return &___PerformRaycastPerfMarker_39; }
	inline void set_PerformRaycastPerfMarker_39(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___PerformRaycastPerfMarker_39 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SpatialManipulation.HandConstraintPalmUp
struct HandConstraintPalmUp_t7213D04B52E9AF3933402DCFACAFF6EEC8424F46  : public HandConstraint_t61C8E01D329720D8F14106F6285C2DD91388F0B2
{
public:
	// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.HandConstraintPalmUp::facingCameraTrackingThreshold
	float ___facingCameraTrackingThreshold_38;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.HandConstraintPalmUp::requireFlatHand
	bool ___requireFlatHand_39;
	// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.HandConstraintPalmUp::flatHandThreshold
	float ___flatHandThreshold_40;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.HandConstraintPalmUp::followHandUntilFacingCamera
	bool ___followHandUntilFacingCamera_41;
	// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.HandConstraintPalmUp::followHandCameraFacingThresholdAngle
	float ___followHandCameraFacingThresholdAngle_42;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.HandConstraintPalmUp::useGazeActivation
	bool ___useGazeActivation_43;
	// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.HandConstraintPalmUp::eyeGazeProximityThreshold
	float ___eyeGazeProximityThreshold_44;
	// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.HandConstraintPalmUp::headGazeProximityThreshold
	float ___headGazeProximityThreshold_45;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.HandConstraintPalmUp::gazeActivationAlreadyTriggered
	bool ___gazeActivationAlreadyTriggered_46;

public:
	inline static int32_t get_offset_of_facingCameraTrackingThreshold_38() { return static_cast<int32_t>(offsetof(HandConstraintPalmUp_t7213D04B52E9AF3933402DCFACAFF6EEC8424F46, ___facingCameraTrackingThreshold_38)); }
	inline float get_facingCameraTrackingThreshold_38() const { return ___facingCameraTrackingThreshold_38; }
	inline float* get_address_of_facingCameraTrackingThreshold_38() { return &___facingCameraTrackingThreshold_38; }
	inline void set_facingCameraTrackingThreshold_38(float value)
	{
		___facingCameraTrackingThreshold_38 = value;
	}

	inline static int32_t get_offset_of_requireFlatHand_39() { return static_cast<int32_t>(offsetof(HandConstraintPalmUp_t7213D04B52E9AF3933402DCFACAFF6EEC8424F46, ___requireFlatHand_39)); }
	inline bool get_requireFlatHand_39() const { return ___requireFlatHand_39; }
	inline bool* get_address_of_requireFlatHand_39() { return &___requireFlatHand_39; }
	inline void set_requireFlatHand_39(bool value)
	{
		___requireFlatHand_39 = value;
	}

	inline static int32_t get_offset_of_flatHandThreshold_40() { return static_cast<int32_t>(offsetof(HandConstraintPalmUp_t7213D04B52E9AF3933402DCFACAFF6EEC8424F46, ___flatHandThreshold_40)); }
	inline float get_flatHandThreshold_40() const { return ___flatHandThreshold_40; }
	inline float* get_address_of_flatHandThreshold_40() { return &___flatHandThreshold_40; }
	inline void set_flatHandThreshold_40(float value)
	{
		___flatHandThreshold_40 = value;
	}

	inline static int32_t get_offset_of_followHandUntilFacingCamera_41() { return static_cast<int32_t>(offsetof(HandConstraintPalmUp_t7213D04B52E9AF3933402DCFACAFF6EEC8424F46, ___followHandUntilFacingCamera_41)); }
	inline bool get_followHandUntilFacingCamera_41() const { return ___followHandUntilFacingCamera_41; }
	inline bool* get_address_of_followHandUntilFacingCamera_41() { return &___followHandUntilFacingCamera_41; }
	inline void set_followHandUntilFacingCamera_41(bool value)
	{
		___followHandUntilFacingCamera_41 = value;
	}

	inline static int32_t get_offset_of_followHandCameraFacingThresholdAngle_42() { return static_cast<int32_t>(offsetof(HandConstraintPalmUp_t7213D04B52E9AF3933402DCFACAFF6EEC8424F46, ___followHandCameraFacingThresholdAngle_42)); }
	inline float get_followHandCameraFacingThresholdAngle_42() const { return ___followHandCameraFacingThresholdAngle_42; }
	inline float* get_address_of_followHandCameraFacingThresholdAngle_42() { return &___followHandCameraFacingThresholdAngle_42; }
	inline void set_followHandCameraFacingThresholdAngle_42(float value)
	{
		___followHandCameraFacingThresholdAngle_42 = value;
	}

	inline static int32_t get_offset_of_useGazeActivation_43() { return static_cast<int32_t>(offsetof(HandConstraintPalmUp_t7213D04B52E9AF3933402DCFACAFF6EEC8424F46, ___useGazeActivation_43)); }
	inline bool get_useGazeActivation_43() const { return ___useGazeActivation_43; }
	inline bool* get_address_of_useGazeActivation_43() { return &___useGazeActivation_43; }
	inline void set_useGazeActivation_43(bool value)
	{
		___useGazeActivation_43 = value;
	}

	inline static int32_t get_offset_of_eyeGazeProximityThreshold_44() { return static_cast<int32_t>(offsetof(HandConstraintPalmUp_t7213D04B52E9AF3933402DCFACAFF6EEC8424F46, ___eyeGazeProximityThreshold_44)); }
	inline float get_eyeGazeProximityThreshold_44() const { return ___eyeGazeProximityThreshold_44; }
	inline float* get_address_of_eyeGazeProximityThreshold_44() { return &___eyeGazeProximityThreshold_44; }
	inline void set_eyeGazeProximityThreshold_44(float value)
	{
		___eyeGazeProximityThreshold_44 = value;
	}

	inline static int32_t get_offset_of_headGazeProximityThreshold_45() { return static_cast<int32_t>(offsetof(HandConstraintPalmUp_t7213D04B52E9AF3933402DCFACAFF6EEC8424F46, ___headGazeProximityThreshold_45)); }
	inline float get_headGazeProximityThreshold_45() const { return ___headGazeProximityThreshold_45; }
	inline float* get_address_of_headGazeProximityThreshold_45() { return &___headGazeProximityThreshold_45; }
	inline void set_headGazeProximityThreshold_45(float value)
	{
		___headGazeProximityThreshold_45 = value;
	}

	inline static int32_t get_offset_of_gazeActivationAlreadyTriggered_46() { return static_cast<int32_t>(offsetof(HandConstraintPalmUp_t7213D04B52E9AF3933402DCFACAFF6EEC8424F46, ___gazeActivationAlreadyTriggered_46)); }
	inline bool get_gazeActivationAlreadyTriggered_46() const { return ___gazeActivationAlreadyTriggered_46; }
	inline bool* get_address_of_gazeActivationAlreadyTriggered_46() { return &___gazeActivationAlreadyTriggered_46; }
	inline void set_gazeActivationAlreadyTriggered_46(bool value)
	{
		___gazeActivationAlreadyTriggered_46 = value;
	}
};

struct HandConstraintPalmUp_t7213D04B52E9AF3933402DCFACAFF6EEC8424F46_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialManipulation.HandConstraintPalmUp::IsValidControllerPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___IsValidControllerPerfMarker_47;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialManipulation.HandConstraintPalmUp::IsPalmMeetingThresholdRequirementsPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___IsPalmMeetingThresholdRequirementsPerfMarker_48;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialManipulation.HandConstraintPalmUp::IsUserGazeMeetingThresholdRequirementsPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___IsUserGazeMeetingThresholdRequirementsPerfMarker_49;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialManipulation.HandConstraintPalmUp::TryGenerateHandPlaneAndActivationPointPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___TryGenerateHandPlaneAndActivationPointPerfMarker_50;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialManipulation.HandConstraintPalmUp::TryGenerateActivationPointPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___TryGenerateActivationPointPerfMarker_51;

public:
	inline static int32_t get_offset_of_IsValidControllerPerfMarker_47() { return static_cast<int32_t>(offsetof(HandConstraintPalmUp_t7213D04B52E9AF3933402DCFACAFF6EEC8424F46_StaticFields, ___IsValidControllerPerfMarker_47)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_IsValidControllerPerfMarker_47() const { return ___IsValidControllerPerfMarker_47; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_IsValidControllerPerfMarker_47() { return &___IsValidControllerPerfMarker_47; }
	inline void set_IsValidControllerPerfMarker_47(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___IsValidControllerPerfMarker_47 = value;
	}

	inline static int32_t get_offset_of_IsPalmMeetingThresholdRequirementsPerfMarker_48() { return static_cast<int32_t>(offsetof(HandConstraintPalmUp_t7213D04B52E9AF3933402DCFACAFF6EEC8424F46_StaticFields, ___IsPalmMeetingThresholdRequirementsPerfMarker_48)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_IsPalmMeetingThresholdRequirementsPerfMarker_48() const { return ___IsPalmMeetingThresholdRequirementsPerfMarker_48; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_IsPalmMeetingThresholdRequirementsPerfMarker_48() { return &___IsPalmMeetingThresholdRequirementsPerfMarker_48; }
	inline void set_IsPalmMeetingThresholdRequirementsPerfMarker_48(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___IsPalmMeetingThresholdRequirementsPerfMarker_48 = value;
	}

	inline static int32_t get_offset_of_IsUserGazeMeetingThresholdRequirementsPerfMarker_49() { return static_cast<int32_t>(offsetof(HandConstraintPalmUp_t7213D04B52E9AF3933402DCFACAFF6EEC8424F46_StaticFields, ___IsUserGazeMeetingThresholdRequirementsPerfMarker_49)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_IsUserGazeMeetingThresholdRequirementsPerfMarker_49() const { return ___IsUserGazeMeetingThresholdRequirementsPerfMarker_49; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_IsUserGazeMeetingThresholdRequirementsPerfMarker_49() { return &___IsUserGazeMeetingThresholdRequirementsPerfMarker_49; }
	inline void set_IsUserGazeMeetingThresholdRequirementsPerfMarker_49(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___IsUserGazeMeetingThresholdRequirementsPerfMarker_49 = value;
	}

	inline static int32_t get_offset_of_TryGenerateHandPlaneAndActivationPointPerfMarker_50() { return static_cast<int32_t>(offsetof(HandConstraintPalmUp_t7213D04B52E9AF3933402DCFACAFF6EEC8424F46_StaticFields, ___TryGenerateHandPlaneAndActivationPointPerfMarker_50)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_TryGenerateHandPlaneAndActivationPointPerfMarker_50() const { return ___TryGenerateHandPlaneAndActivationPointPerfMarker_50; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_TryGenerateHandPlaneAndActivationPointPerfMarker_50() { return &___TryGenerateHandPlaneAndActivationPointPerfMarker_50; }
	inline void set_TryGenerateHandPlaneAndActivationPointPerfMarker_50(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___TryGenerateHandPlaneAndActivationPointPerfMarker_50 = value;
	}

	inline static int32_t get_offset_of_TryGenerateActivationPointPerfMarker_51() { return static_cast<int32_t>(offsetof(HandConstraintPalmUp_t7213D04B52E9AF3933402DCFACAFF6EEC8424F46_StaticFields, ___TryGenerateActivationPointPerfMarker_51)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_TryGenerateActivationPointPerfMarker_51() const { return ___TryGenerateActivationPointPerfMarker_51; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_TryGenerateActivationPointPerfMarker_51() { return &___TryGenerateActivationPointPerfMarker_51; }
	inline void set_TryGenerateActivationPointPerfMarker_51(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___TryGenerateActivationPointPerfMarker_51 = value;
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


// Microsoft.MixedReality.Toolkit.SpatialManipulation.BoundsHandleInteractable
struct BoundsHandleInteractable_tF957D394A29234622B27304D99E5408B7971132B  : public StatefulInteractable_t67843E0A65DBFB7777C42C51281749C8C71AA203
{
public:
	// Microsoft.MixedReality.Toolkit.SpatialManipulation.BoundsControl Microsoft.MixedReality.Toolkit.SpatialManipulation.BoundsHandleInteractable::boundsControlRoot
	BoundsControl_t020B1395A554F19C45493DAA05E7ECF0D611AB9E * ___boundsControlRoot_87;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.BoundsHandleInteractable::maintainGlobalSize
	bool ___maintainGlobalSize_88;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.BoundsHandleInteractable::<IsOccluded>k__BackingField
	bool ___U3CIsOccludedU3Ek__BackingField_89;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialManipulation.BoundsHandleInteractable::<FlattenVector>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CFlattenVectorU3Ek__BackingField_90;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.BoundsHandleInteractable::<IsFlattened>k__BackingField
	bool ___U3CIsFlattenedU3Ek__BackingField_91;
	// Microsoft.MixedReality.Toolkit.SpatialManipulation.HandleType Microsoft.MixedReality.Toolkit.SpatialManipulation.BoundsHandleInteractable::handleType
	int32_t ___handleType_92;
	// UnityEngine.MeshRenderer Microsoft.MixedReality.Toolkit.SpatialManipulation.BoundsHandleInteractable::handleRenderer
	MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * ___handleRenderer_93;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.BoundsHandleInteractable::wasOccludedLastFrame
	bool ___wasOccludedLastFrame_94;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialManipulation.BoundsHandleInteractable::initialLocalScale
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___initialLocalScale_95;
	// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.BoundsHandleInteractable::initialParentScale
	float ___initialParentScale_96;

public:
	inline static int32_t get_offset_of_boundsControlRoot_87() { return static_cast<int32_t>(offsetof(BoundsHandleInteractable_tF957D394A29234622B27304D99E5408B7971132B, ___boundsControlRoot_87)); }
	inline BoundsControl_t020B1395A554F19C45493DAA05E7ECF0D611AB9E * get_boundsControlRoot_87() const { return ___boundsControlRoot_87; }
	inline BoundsControl_t020B1395A554F19C45493DAA05E7ECF0D611AB9E ** get_address_of_boundsControlRoot_87() { return &___boundsControlRoot_87; }
	inline void set_boundsControlRoot_87(BoundsControl_t020B1395A554F19C45493DAA05E7ECF0D611AB9E * value)
	{
		___boundsControlRoot_87 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boundsControlRoot_87), (void*)value);
	}

	inline static int32_t get_offset_of_maintainGlobalSize_88() { return static_cast<int32_t>(offsetof(BoundsHandleInteractable_tF957D394A29234622B27304D99E5408B7971132B, ___maintainGlobalSize_88)); }
	inline bool get_maintainGlobalSize_88() const { return ___maintainGlobalSize_88; }
	inline bool* get_address_of_maintainGlobalSize_88() { return &___maintainGlobalSize_88; }
	inline void set_maintainGlobalSize_88(bool value)
	{
		___maintainGlobalSize_88 = value;
	}

	inline static int32_t get_offset_of_U3CIsOccludedU3Ek__BackingField_89() { return static_cast<int32_t>(offsetof(BoundsHandleInteractable_tF957D394A29234622B27304D99E5408B7971132B, ___U3CIsOccludedU3Ek__BackingField_89)); }
	inline bool get_U3CIsOccludedU3Ek__BackingField_89() const { return ___U3CIsOccludedU3Ek__BackingField_89; }
	inline bool* get_address_of_U3CIsOccludedU3Ek__BackingField_89() { return &___U3CIsOccludedU3Ek__BackingField_89; }
	inline void set_U3CIsOccludedU3Ek__BackingField_89(bool value)
	{
		___U3CIsOccludedU3Ek__BackingField_89 = value;
	}

	inline static int32_t get_offset_of_U3CFlattenVectorU3Ek__BackingField_90() { return static_cast<int32_t>(offsetof(BoundsHandleInteractable_tF957D394A29234622B27304D99E5408B7971132B, ___U3CFlattenVectorU3Ek__BackingField_90)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CFlattenVectorU3Ek__BackingField_90() const { return ___U3CFlattenVectorU3Ek__BackingField_90; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CFlattenVectorU3Ek__BackingField_90() { return &___U3CFlattenVectorU3Ek__BackingField_90; }
	inline void set_U3CFlattenVectorU3Ek__BackingField_90(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CFlattenVectorU3Ek__BackingField_90 = value;
	}

	inline static int32_t get_offset_of_U3CIsFlattenedU3Ek__BackingField_91() { return static_cast<int32_t>(offsetof(BoundsHandleInteractable_tF957D394A29234622B27304D99E5408B7971132B, ___U3CIsFlattenedU3Ek__BackingField_91)); }
	inline bool get_U3CIsFlattenedU3Ek__BackingField_91() const { return ___U3CIsFlattenedU3Ek__BackingField_91; }
	inline bool* get_address_of_U3CIsFlattenedU3Ek__BackingField_91() { return &___U3CIsFlattenedU3Ek__BackingField_91; }
	inline void set_U3CIsFlattenedU3Ek__BackingField_91(bool value)
	{
		___U3CIsFlattenedU3Ek__BackingField_91 = value;
	}

	inline static int32_t get_offset_of_handleType_92() { return static_cast<int32_t>(offsetof(BoundsHandleInteractable_tF957D394A29234622B27304D99E5408B7971132B, ___handleType_92)); }
	inline int32_t get_handleType_92() const { return ___handleType_92; }
	inline int32_t* get_address_of_handleType_92() { return &___handleType_92; }
	inline void set_handleType_92(int32_t value)
	{
		___handleType_92 = value;
	}

	inline static int32_t get_offset_of_handleRenderer_93() { return static_cast<int32_t>(offsetof(BoundsHandleInteractable_tF957D394A29234622B27304D99E5408B7971132B, ___handleRenderer_93)); }
	inline MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * get_handleRenderer_93() const { return ___handleRenderer_93; }
	inline MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B ** get_address_of_handleRenderer_93() { return &___handleRenderer_93; }
	inline void set_handleRenderer_93(MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * value)
	{
		___handleRenderer_93 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handleRenderer_93), (void*)value);
	}

	inline static int32_t get_offset_of_wasOccludedLastFrame_94() { return static_cast<int32_t>(offsetof(BoundsHandleInteractable_tF957D394A29234622B27304D99E5408B7971132B, ___wasOccludedLastFrame_94)); }
	inline bool get_wasOccludedLastFrame_94() const { return ___wasOccludedLastFrame_94; }
	inline bool* get_address_of_wasOccludedLastFrame_94() { return &___wasOccludedLastFrame_94; }
	inline void set_wasOccludedLastFrame_94(bool value)
	{
		___wasOccludedLastFrame_94 = value;
	}

	inline static int32_t get_offset_of_initialLocalScale_95() { return static_cast<int32_t>(offsetof(BoundsHandleInteractable_tF957D394A29234622B27304D99E5408B7971132B, ___initialLocalScale_95)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_initialLocalScale_95() const { return ___initialLocalScale_95; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_initialLocalScale_95() { return &___initialLocalScale_95; }
	inline void set_initialLocalScale_95(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___initialLocalScale_95 = value;
	}

	inline static int32_t get_offset_of_initialParentScale_96() { return static_cast<int32_t>(offsetof(BoundsHandleInteractable_tF957D394A29234622B27304D99E5408B7971132B, ___initialParentScale_96)); }
	inline float get_initialParentScale_96() const { return ___initialParentScale_96; }
	inline float* get_address_of_initialParentScale_96() { return &___initialParentScale_96; }
	inline void set_initialParentScale_96(float value)
	{
		___initialParentScale_96 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Microsoft.MixedReality.Toolkit.SpatialManipulation.BoundsHandleInteractable[]
struct BoundsHandleInteractableU5BU5D_t53F23C752969C1C7D05C449BF6CC5467AEF39E9E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) BoundsHandleInteractable_tF957D394A29234622B27304D99E5408B7971132B * m_Items[1];

public:
	inline BoundsHandleInteractable_tF957D394A29234622B27304D99E5408B7971132B * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BoundsHandleInteractable_tF957D394A29234622B27304D99E5408B7971132B ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BoundsHandleInteractable_tF957D394A29234622B27304D99E5408B7971132B * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline BoundsHandleInteractable_tF957D394A29234622B27304D99E5408B7971132B * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BoundsHandleInteractable_tF957D394A29234622B27304D99E5408B7971132B ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BoundsHandleInteractable_tF957D394A29234622B27304D99E5408B7971132B * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.LayerMask[]
struct LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  m_Items[1];

public:
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  m_Items[1];

public:
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		m_Items[index] = value;
	}
};
// System.Boolean[]
struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) bool m_Items[1];

public:
	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};
// Microsoft.MixedReality.Toolkit.SpatialManipulation.ConstraintManager[]
struct ConstraintManagerU5BU5D_t9EB29F6BCA4EDA40BE2B2D64ADDB33461924E6D2  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ConstraintManager_tE7450B2135FBFBA3217990D1B06D57EF56A85AD0 * m_Items[1];

public:
	inline ConstraintManager_tE7450B2135FBFBA3217990D1B06D57EF56A85AD0 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ConstraintManager_tE7450B2135FBFBA3217990D1B06D57EF56A85AD0 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ConstraintManager_tE7450B2135FBFBA3217990D1B06D57EF56A85AD0 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ConstraintManager_tE7450B2135FBFBA3217990D1B06D57EF56A85AD0 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ConstraintManager_tE7450B2135FBFBA3217990D1B06D57EF56A85AD0 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ConstraintManager_tE7450B2135FBFBA3217990D1B06D57EF56A85AD0 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals/HandlePoint[]
struct HandlePointU5BU5D_tF4198D52EE89D95AA3DAEA10800965485AB31C28  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) HandlePoint_t91E19093111D8B0BCA87EDF0F669B78522CA0164  m_Items[1];

public:
	inline HandlePoint_t91E19093111D8B0BCA87EDF0F669B78522CA0164  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline HandlePoint_t91E19093111D8B0BCA87EDF0F669B78522CA0164 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, HandlePoint_t91E19093111D8B0BCA87EDF0F669B78522CA0164  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Handle_0), (void*)NULL);
	}
	inline HandlePoint_t91E19093111D8B0BCA87EDF0F669B78522CA0164  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline HandlePoint_t91E19093111D8B0BCA87EDF0F669B78522CA0164 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, HandlePoint_t91E19093111D8B0BCA87EDF0F669B78522CA0164  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Handle_0), (void*)NULL);
	}
};


// !!0 UnityEngine.Component::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponentInParent_TisRuntimeObject_mADA186D1675BEA6779C469918206294354385EC3_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<System.Object>(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Component_GetComponentsInChildren_TisRuntimeObject_m1D678E828943F6A8613DC24926420EDA6EBFBF7E_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, bool ___includeInactive0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m1D864B65CCD0498EC4BFFBDA8F8D04AE5333195A_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals/HandlePoint>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mB42E6C9F1BFF90BF7EE0DE8A2AFE68F57E9D9EF2_gshared (List_1_t5B44A6C65ABA13F93E4D6EC9EC79567BB087CC9B * __this, HandlePoint_t91E19093111D8B0BCA87EDF0F669B78522CA0164  ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals/HandlePoint>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HandlePoint_t91E19093111D8B0BCA87EDF0F669B78522CA0164  List_1_get_Item_mF40959BD2A0D8F1CBDCE115BDA37F7E3767EB922_gshared_inline (List_1_t5B44A6C65ABA13F93E4D6EC9EC79567BB087CC9B * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals/HandlePoint>::set_Item(System.Int32,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m0A3B0C345A30C7D0D47CF483208F63593E0BAE86_gshared (List_1_t5B44A6C65ABA13F93E4D6EC9EC79567BB087CC9B * __this, int32_t ___index0, HandlePoint_t91E19093111D8B0BCA87EDF0F669B78522CA0164  ___value1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals/HandlePoint>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m3336665B1EEF196DEE976CCC6504C965A9C4ECF0_gshared_inline (List_1_t5B44A6C65ABA13F93E4D6EC9EC79567BB087CC9B * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals/HandlePoint>::Sort(System.Comparison`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mD8ABD2909DA715E266F0343CC5D7CB47DBAB264F_gshared (List_1_t5B44A6C65ABA13F93E4D6EC9EC79567BB087CC9B * __this, Comparison_1_t317DBD3E8FEC7893E5A036339DA3726A990AD813 * ___comparison0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals/HandlePoint>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Clear_mAED243D4C34FE98E91DE4A6B27A0CA04C3BFFD98_gshared (Stack_1_tBBB21EE44D1282CA179A656956ED6B3BF9DD4B32 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals/HandlePoint>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t26258AA2194D0AA0FCFD867C989EBA242854BD2B  List_1_GetEnumerator_mFE607C7BCF5A596A1EFC651C2FFE3A530E54F8E3_gshared (List_1_t5B44A6C65ABA13F93E4D6EC9EC79567BB087CC9B * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals/HandlePoint>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HandlePoint_t91E19093111D8B0BCA87EDF0F669B78522CA0164  Enumerator_get_Current_mC13697F6D9750E1DEA40C725761EE84AB6E7FC3F_gshared_inline (Enumerator_t26258AA2194D0AA0FCFD867C989EBA242854BD2B * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Stack`1<Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals/HandlePoint>::Pop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandlePoint_t91E19093111D8B0BCA87EDF0F669B78522CA0164  Stack_1_Pop_m858C764B7F081CEF9F071C664AF31B14BDA49F56_gshared (Stack_1_tBBB21EE44D1282CA179A656956ED6B3BF9DD4B32 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Stack`1<Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals/HandlePoint>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_mED24A025DF95B8CE560C82EE94A2A96B990BA8B1_gshared_inline (Stack_1_tBBB21EE44D1282CA179A656956ED6B3BF9DD4B32 * __this, const RuntimeMethod* method);
// T Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals::PeekSecond<Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals/HandlePoint>(System.Collections.Generic.Stack`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandlePoint_t91E19093111D8B0BCA87EDF0F669B78522CA0164  SqueezableBoxVisuals_PeekSecond_TisHandlePoint_t91E19093111D8B0BCA87EDF0F669B78522CA0164_mAF9C886EE8728BAE90CCD8911E2723C89309098F_gshared (SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E * __this, Stack_1_tBBB21EE44D1282CA179A656956ED6B3BF9DD4B32 * ___stack0, const RuntimeMethod* method);
// !0 System.Collections.Generic.Stack`1<Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals/HandlePoint>::Peek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandlePoint_t91E19093111D8B0BCA87EDF0F669B78522CA0164  Stack_1_Peek_m47284331780BBF375E430E115E8A9CFC5F4A6F8B_gshared (Stack_1_tBBB21EE44D1282CA179A656956ED6B3BF9DD4B32 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals/HandlePoint>::Push(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Push_mF803016D3C93704671BC1796E5A743AB9775A17B_gshared (Stack_1_tBBB21EE44D1282CA179A656956ED6B3BF9DD4B32 * __this, HandlePoint_t91E19093111D8B0BCA87EDF0F669B78522CA0164  ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals/HandlePoint>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mB2700F1C088F51347988BAA8C41621826690C69D_gshared (Enumerator_t26258AA2194D0AA0FCFD867C989EBA242854BD2B * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals/HandlePoint>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mAB7D3DF999558CD6245266C570CF75C29A43A1C3_gshared (Enumerator_t26258AA2194D0AA0FCFD867C989EBA242854BD2B * __this, const RuntimeMethod* method);
// System.Collections.Generic.Stack`1/Enumerator<!0> System.Collections.Generic.Stack`1<Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals/HandlePoint>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9668CA47EB00CD68666FE902B91D9D7606DEF749  Stack_1_GetEnumerator_mD2562D5378B6C16527028F59DB3C17101237168F_gshared (Stack_1_tBBB21EE44D1282CA179A656956ED6B3BF9DD4B32 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Stack`1/Enumerator<Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals/HandlePoint>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandlePoint_t91E19093111D8B0BCA87EDF0F669B78522CA0164  Enumerator_get_Current_mB6F14CF1BA6F38DAD0F0C414B0CCF360059913B3_gshared (Enumerator_t9668CA47EB00CD68666FE902B91D9D7606DEF749 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Stack`1/Enumerator<Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals/HandlePoint>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mDA401CA344A1D0C2206FE99A7C68424742A2BD5E_gshared (Enumerator_t9668CA47EB00CD68666FE902B91D9D7606DEF749 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1/Enumerator<Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals/HandlePoint>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mB21A193101C88B730BE0B4DE81333C745F419D53_gshared (Enumerator_t9668CA47EB00CD68666FE902B91D9D7606DEF749 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals/HandlePoint>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m4AC6B8038A2B837A12F960D994624CFFAF1F1E63_gshared (List_1_t5B44A6C65ABA13F93E4D6EC9EC79567BB087CC9B * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals/HandlePoint>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_mEC9656D31ED109BE06283F42A02BADD682FDB68F_gshared (Stack_1_tBBB21EE44D1282CA179A656956ED6B3BF9DD4B32 * __this, const RuntimeMethod* method);
// System.Void System.Comparison`1<Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals/HandlePoint>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Comparison_1__ctor_mAC4B4A4706C8AD9BD7C5EE4EA23D66F6AD73F781_gshared (Comparison_1_t317DBD3E8FEC7893E5A036339DA3726A990AD813 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D_gshared (Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !!0[] UnityEngine.GameObject::GetComponents<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* GameObject_GetComponents_TisRuntimeObject_mAB26971A1F37F81EEEF20F7897AA6FAE3B33779E_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Int32Enum>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m4C033F49F5318E94BC8CBA9CE5175EFDBFADEF9C_gshared_inline (Nullable_1_t64244F99361E39CBE565C5E89436C898F18DF5DC * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Int32Enum>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nullable_1_get_Value_m77372528F6C4C9FDB4E3E861D107E867B4AF04C2_gshared (Nullable_1_t64244F99361E39CBE565C5E89436C898F18DF5DC * __this, const RuntimeMethod* method);

// !!0 UnityEngine.Component::GetComponentInParent<Microsoft.MixedReality.Toolkit.SpatialManipulation.BoundsControl>()
inline BoundsControl_t020B1395A554F19C45493DAA05E7ECF0D611AB9E * Component_GetComponentInParent_TisBoundsControl_t020B1395A554F19C45493DAA05E7ECF0D611AB9E_m84FCE31B29B93D2BAB65E24307E5C70AD984BB06 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  BoundsControl_t020B1395A554F19C45493DAA05E7ECF0D611AB9E * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_mADA186D1675BEA6779C469918206294354385EC3_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.StatefulInteractable Microsoft.MixedReality.Toolkit.SpatialManipulation.BoundsControl::get_Interactable()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StatefulInteractable_t67843E0A65DBFB7777C42C51281749C8C71AA203 * BoundsControl_get_Interactable_m08A355DFDA7A174D014BC0E656B8BB18D5651FC6_inline (BoundsControl_t020B1395A554F19C45493DAA05E7ECF0D611AB9E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MaterialPropertyBlock::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialPropertyBlock__ctor_m8EB29E415C68427B841A0C68A902A8368B9228E8 (MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<Microsoft.MixedReality.Toolkit.SpatialManipulation.BoundsHandleInteractable>(System.Boolean)
inline BoundsHandleInteractableU5BU5D_t53F23C752969C1C7D05C449BF6CC5467AEF39E9E* Component_GetComponentsInChildren_TisBoundsHandleInteractable_tF957D394A29234622B27304D99E5408B7971132B_mACB2E0D250B040FCBCB2C067A47D46B60E1DDD1A (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, bool ___includeInactive0, const RuntimeMethod* method)
{
	return ((  BoundsHandleInteractableU5BU5D_t53F23C752969C1C7D05C449BF6CC5467AEF39E9E* (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, bool, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1D678E828943F6A8613DC24926420EDA6EBFBF7E_gshared)(__this, ___includeInactive0, method);
}
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.SpatialManipulation.BoundsHandleInteractable>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1__ctor_m804A3970592F889B9BD2AA874A6F035465A01984 (List_1_t4A4AF37F205259DAE4A1A36EF9F01A2931624C8F * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4A4AF37F205259DAE4A1A36EF9F01A2931624C8F *, RuntimeObject*, const RuntimeMethod*))List_1__ctor_m1D864B65CCD0498EC4BFFBDA8F8D04AE5333195A_gshared)(__this, ___collection0, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.SpatialManipulation.BoundsHandleInteractable>::GetEnumerator()
inline Enumerator_t696A52EF7570791EFC6606C9FCEF3360FFC644CD  List_1_GetEnumerator_mA9B71CA5FE7A5192A5E7B174EEEC71A8996E8120 (List_1_t4A4AF37F205259DAE4A1A36EF9F01A2931624C8F * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t696A52EF7570791EFC6606C9FCEF3360FFC644CD  (*) (List_1_t4A4AF37F205259DAE4A1A36EF9F01A2931624C8F *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<Microsoft.MixedReality.Toolkit.SpatialManipulation.BoundsHandleInteractable>::get_Current()
inline BoundsHandleInteractable_tF957D394A29234622B27304D99E5408B7971132B * Enumerator_get_Current_mE89B20D8EC205D2D4623900FBE848AA1A37F0CAC_inline (Enumerator_t696A52EF7570791EFC6606C9FCEF3360FFC644CD * __this, const RuntimeMethod* method)
{
	return ((  BoundsHandleInteractable_tF957D394A29234622B27304D99E5408B7971132B * (*) (Enumerator_t696A52EF7570791EFC6606C9FCEF3360FFC644CD *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals/HandlePoint>::Add(!0)
inline void List_1_Add_mB42E6C9F1BFF90BF7EE0DE8A2AFE68F57E9D9EF2 (List_1_t5B44A6C65ABA13F93E4D6EC9EC79567BB087CC9B * __this, HandlePoint_t91E19093111D8B0BCA87EDF0F669B78522CA0164  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5B44A6C65ABA13F93E4D6EC9EC79567BB087CC9B *, HandlePoint_t91E19093111D8B0BCA87EDF0F669B78522CA0164 , const RuntimeMethod*))List_1_Add_mB42E6C9F1BFF90BF7EE0DE8A2AFE68F57E9D9EF2_gshared)(__this, ___item0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.BoundsHandleInteractable::set_BoundsControlRoot(Microsoft.MixedReality.Toolkit.SpatialManipulation.BoundsControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BoundsHandleInteractable_set_BoundsControlRoot_m25B0DF1281A996B34B7C186944F262DE6C72B2FE_inline (BoundsHandleInteractable_tF957D394A29234622B27304D99E5408B7971132B * __this, BoundsControl_t020B1395A554F19C45493DAA05E7ECF0D611AB9E * ___value0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<Microsoft.MixedReality.Toolkit.SpatialManipulation.BoundsHandleInteractable>::MoveNext()
inline bool Enumerator_MoveNext_m51E7329BE651336CDE20A1ACC587870E066A58C2 (Enumerator_t696A52EF7570791EFC6606C9FCEF3360FFC644CD * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t696A52EF7570791EFC6606C9FCEF3360FFC644CD *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Microsoft.MixedReality.Toolkit.SpatialManipulation.BoundsHandleInteractable>::Dispose()
inline void Enumerator_Dispose_mEB4642B6BC4D45AAE8E03221E90BCFA0F9BAFFF2 (Enumerator_t696A52EF7570791EFC6606C9FCEF3360FFC644CD * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t696A52EF7570791EFC6606C9FCEF3360FFC644CD *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_lossyScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_lossyScale_m469A16F93F135C1E4D5955C7EBDB893D1892A331 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialManipulation.BoundsCalculator::CalculateFlattenVector(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  BoundsCalculator_CalculateFlattenVector_m195E751E0EC5077D79F59AAF1F687FFD138E7CA7 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___size0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.BoundsControl::get_HandlesActive()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BoundsControl_get_HandlesActive_m21C58775F42962D42B6084FF22F95248AB68ACF9_inline (BoundsControl_t020B1395A554F19C45493DAA05E7ECF0D611AB9E * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.BoundsControl::get_IsManipulated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BoundsControl_get_IsManipulated_mD245B7F9330BAF6ABA26151A293514B996A4AC16 (BoundsControl_t020B1395A554F19C45493DAA05E7ECF0D611AB9E * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.TimedFlag Microsoft.MixedReality.Toolkit.MRTKBaseInteractable::get_IsActiveHovered()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TimedFlag_tC5C87C9B210414D5EFFF70BA26D6C98CD11D655A * MRTKBaseInteractable_get_IsActiveHovered_mB8DD392FD90165A50B18E699499C059E22541183_inline (MRTKBaseInteractable_tD2EF3F3747FEC77DC86C6F96F61C3496529229A7 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.TimedFlag::op_Implicit(Microsoft.MixedReality.Toolkit.TimedFlag)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TimedFlag_op_Implicit_mBCE07FC8DC042B4DDB6F1F805F6FFDAFD7C86838 (TimedFlag_tC5C87C9B210414D5EFFF70BA26D6C98CD11D655A * ___flag0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::get_isSelected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRBaseInteractable_get_isSelected_mB1CAAE9B24246EC0384C7ADF7C7716FAD729E4BD (XRBaseInteractable_t6D8F476542495E625DE6A3454D4BC9323B6EDCBF * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87 (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C (float ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Smoothing::SmoothTo(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Smoothing_SmoothTo_m2D603400413997FE8F5534DA7AA1BF282F785490 (float ___source0, float ___goal1, float ___lerpTime2, float ___deltaTime3, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.BoundsControl::get_IsFlat()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BoundsControl_get_IsFlat_m7BAD3E2F1A04793D33E54598ACB524E26CF327BF_inline (BoundsControl_t020B1395A554F19C45493DAA05E7ECF0D611AB9E * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.SpatialManipulation.HandleType Microsoft.MixedReality.Toolkit.SpatialManipulation.BoundsControl::get_EnabledHandles()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BoundsControl_get_EnabledHandles_m61E55F00051AC9E6B857625E3C49272693948E81_inline (BoundsControl_t020B1395A554F19C45493DAA05E7ECF0D611AB9E * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals::UpdateHandles(System.Boolean,Microsoft.MixedReality.Toolkit.SpatialManipulation.HandleType,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqueezableBoxVisuals_UpdateHandles_m1379B351C7B1F11384E036F7ED9921882AC91431 (SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E * __this, bool ___handlesActive0, int32_t ___activeHandleTypes1, bool ___isFlat2, const RuntimeMethod* method);
// System.Void UnityEngine.Renderer::GetPropertyBlock(UnityEngine.MaterialPropertyBlock)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_GetPropertyBlock_mE73E51E42ED4F800C6422F5461A4D9E1DB61AEDC (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * ___properties0, const RuntimeMethod* method);
// System.Void UnityEngine.MaterialPropertyBlock::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialPropertyBlock_SetFloat_m5AADD8A9BFF5C1DD5A93BF028A2F001681221942 (MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * __this, String_t* ___name0, float ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Renderer::SetPropertyBlock(UnityEngine.MaterialPropertyBlock)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_SetPropertyBlock_m3F0E4E98D8274A1396AEBA8456AFA4036DCA7B7A (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * ___properties0, const RuntimeMethod* method);
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804 (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Material::GetFloat(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Material_GetFloat_mF2F48AFBDFC1E1E72A00F614EF20B656262EB167 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___name0, const RuntimeMethod* method);
// Unity.Profiling.ProfilerMarker/AutoScope Unity.Profiling.ProfilerMarker::Auto()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline (ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Scale(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Scale_m8805EE8D2586DE7B6143FA35819B3D5CF1981FB3_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.SpatialManipulation.HandleType Microsoft.MixedReality.Toolkit.SpatialManipulation.BoundsHandleInteractable::get_HandleType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BoundsHandleInteractable_get_HandleType_m4041910B9088D8F7E3FB3635B068B4A8B6715BB4_inline (BoundsHandleInteractable_tF957D394A29234622B27304D99E5408B7971132B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.BoundsHandleInteractable::set_IsFlattened(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BoundsHandleInteractable_set_IsFlattened_m0F2319FFD9812EAA65CFBD8EDE6F079A6760E87A_inline (BoundsHandleInteractable_tF957D394A29234622B27304D99E5408B7971132B * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals::HideFlattenedHandles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqueezableBoxVisuals_HideFlattenedHandles_mF29A8FB6179EC551A168C555C58D86F32E59EA87 (SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals::ConvexHull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqueezableBoxVisuals_ConvexHull_m54C921DB6F7B704E83D518A5B98DD6DA143F89BA (SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E * __this, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker/AutoScope::Dispose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline (AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals/HandlePoint>::get_Item(System.Int32)
inline HandlePoint_t91E19093111D8B0BCA87EDF0F669B78522CA0164  List_1_get_Item_mF40959BD2A0D8F1CBDCE115BDA37F7E3767EB922_inline (List_1_t5B44A6C65ABA13F93E4D6EC9EC79567BB087CC9B * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  HandlePoint_t91E19093111D8B0BCA87EDF0F669B78522CA0164  (*) (List_1_t5B44A6C65ABA13F93E4D6EC9EC79567BB087CC9B *, int32_t, const RuntimeMethod*))List_1_get_Item_mF40959BD2A0D8F1CBDCE115BDA37F7E3767EB922_gshared_inline)(__this, ___index0, method);
}
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Camera::WorldToScreenPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Camera_WorldToScreenPoint_m44710195E7736CE9DE5A9B05E32059A9A950F95C (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals/HandlePoint>::set_Item(System.Int32,!0)
inline void List_1_set_Item_m0A3B0C345A30C7D0D47CF483208F63593E0BAE86 (List_1_t5B44A6C65ABA13F93E4D6EC9EC79567BB087CC9B * __this, int32_t ___index0, HandlePoint_t91E19093111D8B0BCA87EDF0F669B78522CA0164  ___value1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5B44A6C65ABA13F93E4D6EC9EC79567BB087CC9B *, int32_t, HandlePoint_t91E19093111D8B0BCA87EDF0F669B78522CA0164 , const RuntimeMethod*))List_1_set_Item_m0A3B0C345A30C7D0D47CF483208F63593E0BAE86_gshared)(__this, ___index0, ___value1, method);
}
// System.Int32 System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals/HandlePoint>::get_Count()
inline int32_t List_1_get_Count_m3336665B1EEF196DEE976CCC6504C965A9C4ECF0_inline (List_1_t5B44A6C65ABA13F93E4D6EC9EC79567BB087CC9B * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t5B44A6C65ABA13F93E4D6EC9EC79567BB087CC9B *, const RuntimeMethod*))List_1_get_Count_m3336665B1EEF196DEE976CCC6504C965A9C4ECF0_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals/HandlePoint>::Sort(System.Comparison`1<!0>)
inline void List_1_Sort_mD8ABD2909DA715E266F0343CC5D7CB47DBAB264F (List_1_t5B44A6C65ABA13F93E4D6EC9EC79567BB087CC9B * __this, Comparison_1_t317DBD3E8FEC7893E5A036339DA3726A990AD813 * ___comparison0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5B44A6C65ABA13F93E4D6EC9EC79567BB087CC9B *, Comparison_1_t317DBD3E8FEC7893E5A036339DA3726A990AD813 *, const RuntimeMethod*))List_1_Sort_mD8ABD2909DA715E266F0343CC5D7CB47DBAB264F_gshared)(__this, ___comparison0, method);
}
// System.Void System.Collections.Generic.Stack`1<Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals/HandlePoint>::Clear()
inline void Stack_1_Clear_mAED243D4C34FE98E91DE4A6B27A0CA04C3BFFD98 (Stack_1_tBBB21EE44D1282CA179A656956ED6B3BF9DD4B32 * __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tBBB21EE44D1282CA179A656956ED6B3BF9DD4B32 *, const RuntimeMethod*))Stack_1_Clear_mAED243D4C34FE98E91DE4A6B27A0CA04C3BFFD98_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals/HandlePoint>::GetEnumerator()
inline Enumerator_t26258AA2194D0AA0FCFD867C989EBA242854BD2B  List_1_GetEnumerator_mFE607C7BCF5A596A1EFC651C2FFE3A530E54F8E3 (List_1_t5B44A6C65ABA13F93E4D6EC9EC79567BB087CC9B * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t26258AA2194D0AA0FCFD867C989EBA242854BD2B  (*) (List_1_t5B44A6C65ABA13F93E4D6EC9EC79567BB087CC9B *, const RuntimeMethod*))List_1_GetEnumerator_mFE607C7BCF5A596A1EFC651C2FFE3A530E54F8E3_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals/HandlePoint>::get_Current()
inline HandlePoint_t91E19093111D8B0BCA87EDF0F669B78522CA0164  Enumerator_get_Current_mC13697F6D9750E1DEA40C725761EE84AB6E7FC3F_inline (Enumerator_t26258AA2194D0AA0FCFD867C989EBA242854BD2B * __this, const RuntimeMethod* method)
{
	return ((  HandlePoint_t91E19093111D8B0BCA87EDF0F669B78522CA0164  (*) (Enumerator_t26258AA2194D0AA0FCFD867C989EBA242854BD2B *, const RuntimeMethod*))Enumerator_get_Current_mC13697F6D9750E1DEA40C725761EE84AB6E7FC3F_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.Stack`1<Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals/HandlePoint>::Pop()
inline HandlePoint_t91E19093111D8B0BCA87EDF0F669B78522CA0164  Stack_1_Pop_m858C764B7F081CEF9F071C664AF31B14BDA49F56 (Stack_1_tBBB21EE44D1282CA179A656956ED6B3BF9DD4B32 * __this, const RuntimeMethod* method)
{
	return ((  HandlePoint_t91E19093111D8B0BCA87EDF0F669B78522CA0164  (*) (Stack_1_tBBB21EE44D1282CA179A656956ED6B3BF9DD4B32 *, const RuntimeMethod*))Stack_1_Pop_m858C764B7F081CEF9F071C664AF31B14BDA49F56_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.Stack`1<Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals/HandlePoint>::get_Count()
inline int32_t Stack_1_get_Count_mED24A025DF95B8CE560C82EE94A2A96B990BA8B1_inline (Stack_1_tBBB21EE44D1282CA179A656956ED6B3BF9DD4B32 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Stack_1_tBBB21EE44D1282CA179A656956ED6B3BF9DD4B32 *, const RuntimeMethod*))Stack_1_get_Count_mED24A025DF95B8CE560C82EE94A2A96B990BA8B1_gshared_inline)(__this, method);
}
// T Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals::PeekSecond<Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals/HandlePoint>(System.Collections.Generic.Stack`1<T>)
inline HandlePoint_t91E19093111D8B0BCA87EDF0F669B78522CA0164  SqueezableBoxVisuals_PeekSecond_TisHandlePoint_t91E19093111D8B0BCA87EDF0F669B78522CA0164_mAF9C886EE8728BAE90CCD8911E2723C89309098F (SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E * __this, Stack_1_tBBB21EE44D1282CA179A656956ED6B3BF9DD4B32 * ___stack0, const RuntimeMethod* method)
{
	return ((  HandlePoint_t91E19093111D8B0BCA87EDF0F669B78522CA0164  (*) (SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E *, Stack_1_tBBB21EE44D1282CA179A656956ED6B3BF9DD4B32 *, const RuntimeMethod*))SqueezableBoxVisuals_PeekSecond_TisHandlePoint_t91E19093111D8B0BCA87EDF0F669B78522CA0164_mAF9C886EE8728BAE90CCD8911E2723C89309098F_gshared)(__this, ___stack0, method);
}
// !0 System.Collections.Generic.Stack`1<Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals/HandlePoint>::Peek()
inline HandlePoint_t91E19093111D8B0BCA87EDF0F669B78522CA0164  Stack_1_Peek_m47284331780BBF375E430E115E8A9CFC5F4A6F8B (Stack_1_tBBB21EE44D1282CA179A656956ED6B3BF9DD4B32 * __this, const RuntimeMethod* method)
{
	return ((  HandlePoint_t91E19093111D8B0BCA87EDF0F669B78522CA0164  (*) (Stack_1_tBBB21EE44D1282CA179A656956ED6B3BF9DD4B32 *, const RuntimeMethod*))Stack_1_Peek_m47284331780BBF375E430E115E8A9CFC5F4A6F8B_gshared)(__this, method);
}
// System.Int32 Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals::TurnDirection(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SqueezableBoxVisuals_TurnDirection_mC38DF3E8D30F77C4849540712403700162836ECB (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___anchor0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a1, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals/HandlePoint>::Push(!0)
inline void Stack_1_Push_mF803016D3C93704671BC1796E5A743AB9775A17B (Stack_1_tBBB21EE44D1282CA179A656956ED6B3BF9DD4B32 * __this, HandlePoint_t91E19093111D8B0BCA87EDF0F669B78522CA0164  ___item0, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tBBB21EE44D1282CA179A656956ED6B3BF9DD4B32 *, HandlePoint_t91E19093111D8B0BCA87EDF0F669B78522CA0164 , const RuntimeMethod*))Stack_1_Push_mF803016D3C93704671BC1796E5A743AB9775A17B_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals/HandlePoint>::MoveNext()
inline bool Enumerator_MoveNext_mB2700F1C088F51347988BAA8C41621826690C69D (Enumerator_t26258AA2194D0AA0FCFD867C989EBA242854BD2B * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t26258AA2194D0AA0FCFD867C989EBA242854BD2B *, const RuntimeMethod*))Enumerator_MoveNext_mB2700F1C088F51347988BAA8C41621826690C69D_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals/HandlePoint>::Dispose()
inline void Enumerator_Dispose_mAB7D3DF999558CD6245266C570CF75C29A43A1C3 (Enumerator_t26258AA2194D0AA0FCFD867C989EBA242854BD2B * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t26258AA2194D0AA0FCFD867C989EBA242854BD2B *, const RuntimeMethod*))Enumerator_Dispose_mAB7D3DF999558CD6245266C570CF75C29A43A1C3_gshared)(__this, method);
}
// System.Collections.Generic.Stack`1/Enumerator<!0> System.Collections.Generic.Stack`1<Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals/HandlePoint>::GetEnumerator()
inline Enumerator_t9668CA47EB00CD68666FE902B91D9D7606DEF749  Stack_1_GetEnumerator_mD2562D5378B6C16527028F59DB3C17101237168F (Stack_1_tBBB21EE44D1282CA179A656956ED6B3BF9DD4B32 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t9668CA47EB00CD68666FE902B91D9D7606DEF749  (*) (Stack_1_tBBB21EE44D1282CA179A656956ED6B3BF9DD4B32 *, const RuntimeMethod*))Stack_1_GetEnumerator_mD2562D5378B6C16527028F59DB3C17101237168F_gshared)(__this, method);
}
// !0 System.Collections.Generic.Stack`1/Enumerator<Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals/HandlePoint>::get_Current()
inline HandlePoint_t91E19093111D8B0BCA87EDF0F669B78522CA0164  Enumerator_get_Current_mB6F14CF1BA6F38DAD0F0C414B0CCF360059913B3 (Enumerator_t9668CA47EB00CD68666FE902B91D9D7606DEF749 * __this, const RuntimeMethod* method)
{
	return ((  HandlePoint_t91E19093111D8B0BCA87EDF0F669B78522CA0164  (*) (Enumerator_t9668CA47EB00CD68666FE902B91D9D7606DEF749 *, const RuntimeMethod*))Enumerator_get_Current_mB6F14CF1BA6F38DAD0F0C414B0CCF360059913B3_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Stack`1/Enumerator<Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals/HandlePoint>::MoveNext()
inline bool Enumerator_MoveNext_mDA401CA344A1D0C2206FE99A7C68424742A2BD5E (Enumerator_t9668CA47EB00CD68666FE902B91D9D7606DEF749 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t9668CA47EB00CD68666FE902B91D9D7606DEF749 *, const RuntimeMethod*))Enumerator_MoveNext_mDA401CA344A1D0C2206FE99A7C68424742A2BD5E_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Stack`1/Enumerator<Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals/HandlePoint>::Dispose()
inline void Enumerator_Dispose_mB21A193101C88B730BE0B4DE81333C745F419D53 (Enumerator_t9668CA47EB00CD68666FE902B91D9D7606DEF749 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t9668CA47EB00CD68666FE902B91D9D7606DEF749 *, const RuntimeMethod*))Enumerator_Dispose_mB21A193101C88B730BE0B4DE81333C745F419D53_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::TransformVector(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_TransformVector_m7C5F87858E82A686A233D1866443ACAEA296AA2B (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___vector0, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mD19905B093915BA12852732EA27AA2DBE030D11F_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Project(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Project_m57D54B16F36E620C294F4B209CD4C8E46A58D1B6 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___vector0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___onNormal1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.BoundsHandleInteractable::set_FlattenVector(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BoundsHandleInteractable_set_FlattenVector_m721D708E015A16A8AD37BC4885927F8B77451F3D_inline (BoundsHandleInteractable_tF957D394A29234622B27304D99E5408B7971132B * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::SqrMagnitude(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2_SqrMagnitude_mC2F6F1199AD28D4518D74C7C0A9371722126102A (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals/HandlePoint>::.ctor()
inline void List_1__ctor_m4AC6B8038A2B837A12F960D994624CFFAF1F1E63 (List_1_t5B44A6C65ABA13F93E4D6EC9EC79567BB087CC9B * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5B44A6C65ABA13F93E4D6EC9EC79567BB087CC9B *, const RuntimeMethod*))List_1__ctor_m4AC6B8038A2B837A12F960D994624CFFAF1F1E63_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Stack`1<Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals/HandlePoint>::.ctor()
inline void Stack_1__ctor_mEC9656D31ED109BE06283F42A02BADD682FDB68F (Stack_1_tBBB21EE44D1282CA179A656956ED6B3BF9DD4B32 * __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tBBB21EE44D1282CA179A656956ED6B3BF9DD4B32 *, const RuntimeMethod*))Stack_1__ctor_mEC9656D31ED109BE06283F42A02BADD682FDB68F_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void System.Comparison`1<Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals/HandlePoint>::.ctor(System.Object,System.IntPtr)
inline void Comparison_1__ctor_mAC4B4A4706C8AD9BD7C5EE4EA23D66F6AD73F781 (Comparison_1_t317DBD3E8FEC7893E5A036339DA3726A990AD813 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Comparison_1_t317DBD3E8FEC7893E5A036339DA3726A990AD813 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Comparison_1__ctor_mAC4B4A4706C8AD9BD7C5EE4EA23D66F6AD73F781_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Unity.Profiling.ProfilerMarker::.ctor(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline (ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * __this, String_t* ___name0, const RuntimeMethod* method);
// UnityEngine.Transform Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::get_TransformTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * SolverHandler_get_TransformTarget_mABAE412BA27F8E9535EB763689E4E6F668E1A5F6 (SolverHandler_t59B1037EA04BC8C41E82EAC219138D9DE50F7AC2 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::get_RaycastOrigin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  SurfaceMagnetism_get_RaycastOrigin_mFACC33A0D661E83E49C1E072B24A4A66DF7AE1D3 (SurfaceMagnetism_t23AC1508708E4CA5D97B38DEDEDD8DB5FE6E6161 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90 (const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism/RaycastDirectionMode Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::get_CurrentRaycastDirectionMode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SurfaceMagnetism_get_CurrentRaycastDirectionMode_mBD74605FDAAF6D1EE02C078E421A686BD5371600_inline (SurfaceMagnetism_t23AC1508708E4CA5D97B38DEDEDD8DB5FE6E6161 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::get_GoalPosition()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  SolverHandler_get_GoalPosition_mB7BCC11B22CDDA506695DD37C65D28E427C7AE6C_inline (SolverHandler_t59B1037EA04BC8C41E82EAC219138D9DE50F7AC2 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::get_RaycastEndPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  SurfaceMagnetism_get_RaycastEndPoint_m925ABD8387936B1E7D6304AD9C3E6F6C358E8652 (SurfaceMagnetism_t23AC1508708E4CA5D97B38DEDEDD8DB5FE6E6161 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.SpatialManipulation.Vector3Smoothed Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::get_AltScale()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3Smoothed_tD20A5F686B12E3C524D8C369DF09A20DAAEDB3D3  SolverHandler_get_AltScale_mA6848E5643047DABE31D22D0CA5C1E5DEB2B0FB6_inline (SolverHandler_t59B1037EA04BC8C41E82EAC219138D9DE50F7AC2 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialManipulation.Vector3Smoothed::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3Smoothed_get_Current_m837C12DCFC8C6A4280D20705736250D8B023EB0B_inline (Vector3Smoothed_tD20A5F686B12E3C524D8C369DF09A20DAAEDB3D3 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver::get_WorkingRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Solver_get_WorkingRotation_mAFD9085351C0E54099C30325B611CD1730AD0058 (Solver_tA73899FFFB9BC2103F0BC1C9BCF601856A5BB455 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_LookRotation_m8A7DB5BDBC361586191AB67ACF857F46160EE3F1 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forward0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upwards1, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::get_KeepOrientationVertical()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SurfaceMagnetism_get_KeepOrientationVertical_m092E225F8CD9B5C6A68EA6B9592FCCA7B4907F89_inline (SurfaceMagnetism_t23AC1508708E4CA5D97B38DEDEDD8DB5FE6E6161 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::FromToRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_FromToRotation_mD0EBB9993FC7C6A45724D0365B09F11F1CEADB80 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___fromDirection0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___toDirection1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___lhs0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rhs1, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism/OrientationMode Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::get_CurrentOrientationMode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SurfaceMagnetism_get_CurrentOrientationMode_m38F671EC6081B269DBEC0AA089D46365D1DC3ADF_inline (SurfaceMagnetism_t23AC1508708E4CA5D97B38DEDEDD8DB5FE6E6161 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::get_GoalRotation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  SolverHandler_get_GoalRotation_m0DA74B5AF6CAA31239A28FC657BC99BA69648DB7_inline (SolverHandler_t59B1037EA04BC8C41E82EAC219138D9DE50F7AC2 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Slerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Slerp_m6D2BD18286254E28D2288B51962EC71F85C7B5C8 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___a0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___b1, float ___t2, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver::get_WorkingPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Solver_get_WorkingPosition_mEE82CEE51332DA2285AFB29A3D4B36B3B41F93A3 (Solver_tA73899FFFB9BC2103F0BC1C9BCF601856A5BB455 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver::set_GoalPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_set_GoalPosition_m55CE128A1EAFAE0BC3FBFB0E59B5F1B1B4A492C7 (Solver_tA73899FFFB9BC2103F0BC1C9BCF601856A5BB455 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver::set_GoalRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_set_GoalRotation_mD7FBFA12D17ADCF284FC97A229604C8212343075 (Solver_tA73899FFFB9BC2103F0BC1C9BCF601856A5BB455 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.RayStep::UpdateRayStep(UnityEngine.Vector3&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RayStep_UpdateRayStep_m2098727F6DCBB3B719DBB954951E5A5F14CB0D29 (RayStep_t68267BADF85DF3BC948899D189E94EC8C2D87C6F * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___origin0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___terminus1, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.RayStep::get_Direction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  RayStep_get_Direction_m7D6703B9C3DC0D10655A7288A76BD7F029A0A9BA_inline (RayStep_t68267BADF85DF3BC948899D189E94EC8C2D87C6F * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3_op_Equality_m8A98C7F38641110A2F90445EF8E98ECE14B08296 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::get_DebugEnabled()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SurfaceMagnetism_get_DebugEnabled_m140F20D05A7F8260927FFB5CE8ED3E6ADA1B1DCA_inline (SurfaceMagnetism_t23AC1508708E4CA5D97B38DEDEDD8DB5FE6E6161 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.RayStep::get_Origin()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  RayStep_get_Origin_m4A2FBDEDA6BC36DC659AE2760E40F42128104F6C_inline (RayStep_t68267BADF85DF3BC948899D189E94EC8C2D87C6F * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.RayStep::get_Terminus()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  RayStep_get_Terminus_mBE0B27EF305C6079E6C8C6B7572C78630E332B7E_inline (RayStep_t68267BADF85DF3BC948899D189E94EC8C2D87C6F * __this, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_magenta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_magenta_m46B928AB3005B062069E5DF9CB271E1373A29FE0 (const RuntimeMethod* method);
// System.Void UnityEngine.Debug::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_DrawLine_m83E9014DE042AAFE0B97A66E2A23F701FFDBB8A3 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___start0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___end1, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color2, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism/SceneQueryType Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::get_RaycastMode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SurfaceMagnetism_get_RaycastMode_m4938850E9FAA66EB4EE6B5F1FEC27446ADFCC1F6_inline (SurfaceMagnetism_t23AC1508708E4CA5D97B38DEDEDD8DB5FE6E6161 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::SimpleRaycastStepUpdate(Microsoft.MixedReality.Toolkit.RayStep&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_SimpleRaycastStepUpdate_m50D7281C653DE8C0A12BC4ABAAC3EA19F009A008 (SurfaceMagnetism_t23AC1508708E4CA5D97B38DEDEDD8DB5FE6E6161 * __this, RayStep_t68267BADF85DF3BC948899D189E94EC8C2D87C6F * ___rayStep0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::BoxRaycastStepUpdate(Microsoft.MixedReality.Toolkit.RayStep&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_BoxRaycastStepUpdate_mDA5E04609EBB34437DB2E8D3BCBF879826BEEDAD (SurfaceMagnetism_t23AC1508708E4CA5D97B38DEDEDD8DB5FE6E6161 * __this, RayStep_t68267BADF85DF3BC948899D189E94EC8C2D87C6F * ___rayStep0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::SphereRaycastStepUpdate(Microsoft.MixedReality.Toolkit.RayStep&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_SphereRaycastStepUpdate_m2D572E1EFC74DC020A1FAACE03702BED42AA7456 (SurfaceMagnetism_t23AC1508708E4CA5D97B38DEDEDD8DB5FE6E6161 * __this, RayStep_t68267BADF85DF3BC948899D189E94EC8C2D87C6F * ___rayStep0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.MixedRealityRaycaster::RaycastSimplePhysicsStep(Microsoft.MixedReality.Toolkit.RayStep,System.Single,UnityEngine.LayerMask[],System.Boolean,UnityEngine.RaycastHit&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityRaycaster_RaycastSimplePhysicsStep_mA3693E6846182716219101FD4B7875A882119DEF (RayStep_t68267BADF85DF3BC948899D189E94EC8C2D87C6F  ___step0, float ___maxDistance1, LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F* ___prioritizedLayerMasks2, bool ___focusIndividualCompoundCollider3, RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * ___physicsHit4, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::set_OnSurface(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_OnSurface_m7D14342CE400FC2C7B2A2ECDF33D97F56B778A82_inline (SurfaceMagnetism_t23AC1508708E4CA5D97B38DEDEDD8DB5FE6E6161 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  RaycastHit_get_point_m32F7282CBB2E13393A33BAD046BDA218E48DD21E (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.RaycastHit::set_point(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RaycastHit_set_point_mBB4D9069F8DB5BA15E31DBA68AB68789687FA88F (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::get_OnSurface()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SurfaceMagnetism_get_OnSurface_m31311A1A3DBA940622E39BB8CABD8933F8128976_inline (SurfaceMagnetism_t23AC1508708E4CA5D97B38DEDEDD8DB5FE6E6161 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  RaycastHit_get_normal_m2C813B25BAECD87FD9E9CB294278B291F4CC6674 (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline (float ___d0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a1, const RuntimeMethod* method);
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::CalculateMagnetismOrientation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  SurfaceMagnetism_CalculateMagnetismOrientation_m912B6945F1A72F2D8A999C7A7B90224D0A7140C3 (SurfaceMagnetism_t23AC1508708E4CA5D97B38DEDEDD8DB5FE6E6161 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___direction0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___surfaceNormal1, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::get_ScaleOverride()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SurfaceMagnetism_get_ScaleOverride_mE47020E4F78C27B002E30664805CB4B2297347FE (SurfaceMagnetism_t23AC1508708E4CA5D97B38DEDEDD8DB5FE6E6161 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.MixedRealityRaycaster::RaycastSpherePhysicsStep(Microsoft.MixedReality.Toolkit.RayStep,System.Single,System.Single,UnityEngine.LayerMask[],System.Boolean,UnityEngine.RaycastHit&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityRaycaster_RaycastSpherePhysicsStep_mC4C5CFDF7C3105216C13A9C9048C7E569013F27B (RayStep_t68267BADF85DF3BC948899D189E94EC8C2D87C6F  ___step0, float ___radius1, float ___maxDistance2, LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F* ___prioritizedLayerMasks3, bool ___focusIndividualCompoundCollider4, RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * ___physicsHit5, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::TRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  Matrix4x4_TRS_m0CBC696D0BDF58DCEC40B99BC32C716FAD024CE5 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___q1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___s2, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.BoxCollider>()
inline BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * Component_GetComponent_TisBoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5_m0D682A42739E30A25411905C0A712C2BEE81F861 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.BoxCollider::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  BoxCollider_get_size_mBC38D4926D4BE54A6532F6E1D642F363CA3A58A1 (BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.MixedRealityRaycaster::RaycastBoxPhysicsStep(Microsoft.MixedReality.Toolkit.RayStep,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Matrix4x4,System.Single,UnityEngine.LayerMask[],System.Int32,System.Boolean,System.Boolean,UnityEngine.Vector3[]&,UnityEngine.Vector3[]&,System.Boolean[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityRaycaster_RaycastBoxPhysicsStep_m6FDF51499641BE2C3E173FA669261E60D7632168 (RayStep_t68267BADF85DF3BC948899D189E94EC8C2D87C6F  ___step0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___extents1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___targetPosition2, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___matrix3, float ___maxDistance4, LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F* ___prioritizedLayerMasks5, int32_t ___raysPerEdge6, bool ___isOrthographic7, bool ___focusIndividualCompoundCollider8, Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** ___points9, Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** ___normals10, BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C** ___hits11, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::FindPlacementPlane(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3[],UnityEngine.Vector3[],System.Boolean[],System.Single,System.Single,System.Boolean,System.Boolean,UnityEngine.Plane&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_FindPlacementPlane_mFF37B8BA7EF788DC7AD3974A52693E3B507E6E1A (SurfaceMagnetism_t23AC1508708E4CA5D97B38DEDEDD8DB5FE6E6161 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___origin0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___direction1, Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___positions2, Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___normals3, BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* ___hits4, float ___assetWidth5, float ___maxNormalVariance6, bool ___constrainVertical7, bool ___useClosestDistance8, Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 * ___plane9, float* ___closestDistance10, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Plane::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Plane_get_normal_m71CB4BAB04EE04CAEF9AD272B16766800F7D556B (Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::IsNormalVertical(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SurfaceMagnetism_IsNormalVertical_m69C8EB0517B34631D8EC67890A037ACE9644FE12 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___normal0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Mathf::Approximately(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mathf_Approximately_mC2A3F657E3FD0CCAD4A4936CEE2F67D624A2AA55 (float ___a0, float ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyVector(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Matrix4x4_MultiplyVector_m88C4BE23EB0B45BB701514AF3E1CA5A857F8212C (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___vector0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775 (float ___a0, float ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Plane::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plane__ctor_m5B830C0E99AA5A47EF0D15767828D6E859867E67 (Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___inNormal0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___inPoint1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::Normalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3_Normalize_m2258C159121FC81954C301DEE631BC24FCEDE780 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Cross(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Cross_m63414F0C545EBB616F339FF8830D37F9230736A4 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8 (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_green_mFF9BD42534D385A0717B1EAD083ADF08712984B9 (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_blue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_blue_m6D62D515CA10A6E760848E1BFB997E27B90BD07B (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_cyan()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_cyan_m0C608BC083FD98C45C1F4F15AE803D288C647686 (const RuntimeMethod* method);
// System.Void UnityEngine.Debug::DrawRay(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_DrawRay_m918D1131BACEBD7CCEA9D9BFDF3279F6CD56E121 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___start0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___dir1, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color2, const RuntimeMethod* method);
// System.Void UnityEngine.Ray::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ray__ctor_m75B1F651FF47EE6B887105101B7DA61CBF41F83C (Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___origin0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___direction1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Plane::Raycast(UnityEngine.Ray,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Plane_Raycast_m8E3B0EF5B22DF336430373D4997155B647E99A24 (Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 * __this, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___ray0, float* ___enter1, const RuntimeMethod* method);
// System.Boolean System.Single::Equals(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_Equals_m298A3A849F30B9900813BE6DD98AE6810CDBE914 (float* __this, float ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// UnityEngine.LayerMask UnityEngine.LayerMask::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  LayerMask_op_Implicit_mC7EE32122D2A4786D3C00B93E41604B71BF1397C (int32_t ___intVal0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver__ctor_mDC88C38275512FEDE74D8229AAB58652A56539A0 (Solver_tA73899FFFB9BC2103F0BC1C9BCF601856A5BB455 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Collider>()
inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * GameObject_GetComponent_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_m7CB95AA45111B8F2FD8968CBDF0CE3359F6B2E08 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UnityEngine.Bounds UnityEngine.Collider::get_bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  Collider_get_bounds_mE341D29E1DA184ADD53A474D57D9082A3550EACB (Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Bounds::get_extents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Bounds_get_extents_mA54D7497D65DCF21CA952FA754B9D1086305FF02 (Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_Start_m95787CA2A5E8901B23214D06D597957569FF0A59 (Solver_tA73899FFFB9BC2103F0BC1C9BCF601856A5BB455 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Physics::SyncTransforms()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Physics_SyncTransforms_m744C6ED0B04CAB03C7D5A7320896AE3B6D4674D1 (const RuntimeMethod* method);
// System.Int32 UnityEngine.LayerMask::NameToLayer(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_NameToLayer_m6A2BBB60EC90F7EC48A6A91CA98149C547A04C0A (String_t* ___layerName0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::get_AutoStart()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TapToPlace_get_AutoStart_m41ADB5B237F328EF0064B9383F4046BAA23C97C3_inline (TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::StartPlacement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_StartPlacement_m1685E7C6CFA07495040648CE54C9E06BD0F5346A (TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::set_UpdateSolvers(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SolverHandler_set_UpdateSolvers_m9B6784228879F3994A047B37CEAF9318057F7E32_inline (SolverHandler_t59B1037EA04BC8C41E82EAC219138D9DE50F7AC2 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::UnregisterPlacementAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_UnregisterPlacementAction_m0731CF019799B066DC1034E1AC96731BF96335D5 (TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_OnDisable_m7A73CE6F95339BC3373289A39EAF6343EC63C963 (Solver_tA73899FFFB9BC2103F0BC1C9BCF601856A5BB455 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::get_IsBeingPlaced()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TapToPlace_get_IsBeingPlaced_m25232DDC7097BC3FBAABFE12FB17D30693048EDC_inline (TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.GameObject::get_layer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameObject_get_layer_m9D4C23A2FD105AF9964445BF18A77E8A49012F9F (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::set_GameObjectLayer(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TapToPlace_set_GameObjectLayer_mDB28B91E3382B3EDB0DD60FE4C3375436844A7EF_inline (TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::set_layer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_set_layer_m2F946916ACB41A59C46346F5243F2BAC235A36A6 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::set_IsBeingPlaced(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TapToPlace_set_IsBeingPlaced_m03A0BCB10A5E98BB0410035F7994A5CD38FB5B6D_inline (TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::get_OnPlacingStarted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * TapToPlace_get_OnPlacingStarted_m57E0514AB953B6A0BA42E2F5D572EFCE2A83E498_inline (TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5 (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::RegisterPlacementAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_RegisterPlacementAction_m9156F4845DCD8F771AE195D7C40BE3E55E50CA45 (TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2 * __this, const RuntimeMethod* method);
// System.Int32 Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::get_GameObjectLayer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TapToPlace_get_GameObjectLayer_mF5DBC31FA0B3C36B1BE307AEB52C2CDB050A9617_inline (TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2 * __this, const RuntimeMethod* method);
// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::get_OnPlacingStopped()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * TapToPlace_get_OnPlacingStopped_mEC81B3BD90287C583B3A19D4F90FD26AC2D2B285_inline (TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2 * __this, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::get_MaxRaycastDistance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TapToPlace_get_MaxRaycastDistance_m835DCA8B0B00761F571E21B62B75EBF6808B68BC_inline (TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2 * __this, const RuntimeMethod* method);
// UnityEngine.LayerMask[] Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::get_MagneticSurfaces()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F* TapToPlace_get_MagneticSurfaces_m4C567AAFA92858D23B59A5E29FC3D6BCBC6EE787_inline (TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::get_UseDefaultSurfaceNormalOffset()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TapToPlace_get_UseDefaultSurfaceNormalOffset_m1FDFB6DBC6D5D0E9B2FBA4397BCAC77437628BD8_inline (TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2 * __this, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::get_SurfaceNormalOffset()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TapToPlace_get_SurfaceNormalOffset_m5380A9106B77116183123BA7D5E0E5B192663D00_inline (TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2 * __this, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::get_DefaultSurfaceNormalOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TapToPlace_get_DefaultSurfaceNormalOffset_m37A2FD3F60BBE411983EEE958EFBB5B41A7233F3 (TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2 * __this, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::get_DefaultPlacementDistance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TapToPlace_get_DefaultPlacementDistance_m9C42566D8DC5FAD7D9B6645EC745D98F142A8887_inline (TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::get_KeepOrientationVertical()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TapToPlace_get_KeepOrientationVertical_mAD456D2F0402A48461813F1BF92782AC42C1DA2A_inline (TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2 * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputAction Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::GetInputActionFromReference(UnityEngine.InputSystem.InputActionReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * TapToPlace_GetInputActionFromReference_m57012EB666AFCA8FDF4DE9D8AFF43919D8741996 (InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * ___actionReference0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D (Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.InputSystem.InputAction::add_performed(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_add_performed_m9FF12F3D5C984DB93D2DD75667F3B53D7B66C0A3 (InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * __this, Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.InputAction::remove_performed(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_remove_performed_m141C0FA72906BDF08A33EF3728C0193EFD0AAB06 (InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * __this, Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 * ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844 (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::StopPlacement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_StopPlacement_mA80BCCEBA7D1B60B991243883DE6433802EBA639 (TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2 * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionReference::get_action()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * InputActionReference_get_action_m8A9C3BDF9E0FC278DC682108E3E97E00F5DAC2A9 (InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent__ctor_m98D9C5A59898546B23A45388CFACA25F52A9E5A6 (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.GameObject::GetComponents<Microsoft.MixedReality.Toolkit.SpatialManipulation.ConstraintManager>()
inline ConstraintManagerU5BU5D_t9EB29F6BCA4EDA40BE2B2D64ADDB33461924E6D2* GameObject_GetComponents_TisConstraintManager_tE7450B2135FBFBA3217990D1B06D57EF56A85AD0_m165620A204E2A78B7D975C8F074E065FFAFC6654 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  ConstraintManagerU5BU5D_t9EB29F6BCA4EDA40BE2B2D64ADDB33461924E6D2* (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponents_TisRuntimeObject_mAB26971A1F37F81EEEF20F7897AA6FAE3B33779E_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.ConstraintManager::RefreshPriorities()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConstraintManager_RefreshPriorities_m12EEB55C83D16A52CE945330D456EA622C5EFCF1 (ConstraintManager_tE7450B2135FBFBA3217990D1B06D57EF56A85AD0 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.ConstraintManager::AutoRegisterConstraint(Microsoft.MixedReality.Toolkit.SpatialManipulation.TransformConstraint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConstraintManager_AutoRegisterConstraint_mA5B3DA87381813312C09112D094D20C4C16117F3 (ConstraintManager_tE7450B2135FBFBA3217990D1B06D57EF56A85AD0 * __this, TransformConstraint_t5F1A52B3005A031C1D9DCE0DD7FE13CCAD6DEF70 * ___constraint0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.ConstraintManager::AutoUnregisterConstraint(Microsoft.MixedReality.Toolkit.SpatialManipulation.TransformConstraint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConstraintManager_AutoUnregisterConstraint_m84348BBADEBD6BA8F051CBA1F3370F93A54EC9A3 (ConstraintManager_tE7450B2135FBFBA3217990D1B06D57EF56A85AD0 * __this, TransformConstraint_t5F1A52B3005A031C1D9DCE0DD7FE13CCAD6DEF70 * ___constraint0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.Vector3Smoothed::set_Current(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3Smoothed_set_Current_m784D4E4ABC2226BFAED8B69E52ECF3E8DD4E90BA_inline (Vector3Smoothed_tD20A5F686B12E3C524D8C369DF09A20DAAEDB3D3 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialManipulation.Vector3Smoothed::get_Goal()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3Smoothed_get_Goal_mE9E7C4864F3EC2E9F43533C4706F9AA628041F1C_inline (Vector3Smoothed_tD20A5F686B12E3C524D8C369DF09A20DAAEDB3D3 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.Vector3Smoothed::set_Goal(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3Smoothed_set_Goal_m6440222B5AB93BC55F0AC8D3D744B7FCDF3A3021_inline (Vector3Smoothed_tD20A5F686B12E3C524D8C369DF09A20DAAEDB3D3 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.Vector3Smoothed::get_SmoothTime()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3Smoothed_get_SmoothTime_mC21D1385C4498DBB250C49AF1238F4E5119FBE59_inline (Vector3Smoothed_tD20A5F686B12E3C524D8C369DF09A20DAAEDB3D3 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.Vector3Smoothed::set_SmoothTime(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3Smoothed_set_SmoothTime_mFF838A6B743BB5FF2581FABD9ED61267368F174A_inline (Vector3Smoothed_tD20A5F686B12E3C524D8C369DF09A20DAAEDB3D3 * __this, float ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.Vector3Smoothed::.ctor(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3Smoothed__ctor_m07062FF5A77155DA2C60ADCE3D5741925A0D142A (Vector3Smoothed_tD20A5F686B12E3C524D8C369DF09A20DAAEDB3D3 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, float ___smoothingTime1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.Vector3Smoothed::SetGoal(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3Smoothed_SetGoal_m8763C4731D994339758CCA73BD83ADAE49C6BA45 (Vector3Smoothed_tD20A5F686B12E3C524D8C369DF09A20DAAEDB3D3 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___goal0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.Vector3Smoothed::Update(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3Smoothed_Update_m5BD33E1C3D97477E6A1159EA5906CC69645D3FFC (Vector3Smoothed_tD20A5F686B12E3C524D8C369DF09A20DAAEDB3D3 * __this, float ___deltaTime0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Handedness Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::get_CurrentTrackedHandedness()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SolverHandler_get_CurrentTrackedHandedness_mF2D0953B090A0010C6E8659D5067178E8613A1A8_inline (SolverHandler_t59B1037EA04BC8C41E82EAC219138D9DE50F7AC2 * __this, const RuntimeMethod* method);
// System.Nullable`1<UnityEngine.XR.XRNode> Microsoft.MixedReality.Toolkit.HandednessExtensions::ToXRNode(Microsoft.MixedReality.Toolkit.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t8A53876455F27274DD4D239DDFF544F081FBC07E  HandednessExtensions_ToXRNode_m70BB6EE82B3DFD7DB0006A192BD653411F15BDF2 (int32_t ___hand0, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<UnityEngine.XR.XRNode>::get_HasValue()
inline bool Nullable_1_get_HasValue_mE4286200AE97E8C0C15A5C0FEB726FAFBC770F0B_inline (Nullable_1_t8A53876455F27274DD4D239DDFF544F081FBC07E * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t8A53876455F27274DD4D239DDFF544F081FBC07E *, const RuntimeMethod*))Nullable_1_get_HasValue_m4C033F49F5318E94BC8CBA9CE5175EFDBFADEF9C_gshared_inline)(__this, method);
}
// Microsoft.MixedReality.Toolkit.Subsystems.HandsAggregatorSubsystem Microsoft.MixedReality.Toolkit.XRSubsystemHelpers::get_HandsAggregator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandsAggregatorSubsystem_tD97840A5BCF555DA3D8F08A5D47AD08F1E0F8FFE * XRSubsystemHelpers_get_HandsAggregator_m9C262E2831ED75AEC3BCCCD8416D8B62EF7C0F2A (const RuntimeMethod* method);
// !0 System.Nullable`1<UnityEngine.XR.XRNode>::get_Value()
inline int32_t Nullable_1_get_Value_mCAF8ABB9DF08E31C419963F0B8015DAC371F4E54 (Nullable_1_t8A53876455F27274DD4D239DDFF544F081FBC07E * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_t8A53876455F27274DD4D239DDFF544F081FBC07E *, const RuntimeMethod*))Nullable_1_get_Value_m77372528F6C4C9FDB4E3E861D107E867B4AF04C2_gshared)(__this, method);
}
// System.Boolean Microsoft.MixedReality.Toolkit.Subsystems.HandsAggregatorSubsystem::TryGetJoint(Microsoft.MixedReality.Toolkit.TrackedHandJoint,UnityEngine.XR.XRNode,Microsoft.MixedReality.Toolkit.HandJointPose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandsAggregatorSubsystem_TryGetJoint_m02A332DF9F816CA6E10FC48B3E4D62E4F2D08E2D (HandsAggregatorSubsystem_tD97840A5BCF555DA3D8F08A5D47AD08F1E0F8FFE * __this, int32_t ___joint0, int32_t ___hand1, HandJointPose_t77237A471B6A985C8F8DCE3D0D3E19357BC2DB65 * ___jointPose2, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.HandJointPose::get_Up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  HandJointPose_get_Up_mFC5FF8890FB2E25933F84F5044B78C75C2AD4101 (HandJointPose_t77237A471B6A985C8F8DCE3D0D3E19357BC2DB65 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Angle(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_Angle_m3715AB03A36C59D8CF08F8D71E2F46454EB884C1 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___from0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___to1, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.HandConstraintPalmUp::IsPalmMeetingThresholdRequirements(UnityEngine.XR.XRNode,Microsoft.MixedReality.Toolkit.HandJointPose,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandConstraintPalmUp_IsPalmMeetingThresholdRequirements_mEAB77D416805BC49E4E3EAFBAF8E9DE8D11DF9CE (HandConstraintPalmUp_t7213D04B52E9AF3933402DCFACAFF6EEC8424F46 * __this, int32_t ___hand0, HandJointPose_t77237A471B6A985C8F8DCE3D0D3E19357BC2DB65  ___palmPose1, float ___palmCameraAngle2, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.HandConstraintPalmUp::IsUserGazeMeetingThresholdRequirements(UnityEngine.XR.XRNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandConstraintPalmUp_IsUserGazeMeetingThresholdRequirements_m4631D7154F48142C2BF0AEDA829382C74D5DD8F8 (HandConstraintPalmUp_t7213D04B52E9AF3933402DCFACAFF6EEC8424F46 * __this, int32_t ___hand0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.SolverHandler::get_UpdateSolvers()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SolverHandler_get_UpdateSolvers_m153B69D1F6394B3DD43373A554C6A7B8FF1B2AC2_inline (SolverHandler_t59B1037EA04BC8C41E82EAC219138D9DE50F7AC2 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m26080C9C925F1A1B2589B311B7DB47C3673E0417 (U3CU3Ec_t3ED49D580091D12AAF39D1B417F831F77CFFE5A1 * __this, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker/AutoScope::.ctor(System.IntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope__ctor_m4131730A501F687FF95B2963EABAC7844C6B9859_inline (AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * __this, intptr_t ___markerPtr0, const RuntimeMethod* method);
// System.Void Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerUnsafeUtility_EndSample_m0435B2EE7963614F3D154A83D44269FE4D1A85B0 (intptr_t ___markerPtr0, const RuntimeMethod* method);
// System.IntPtr Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::CreateMarker(System.String,System.UInt16,Unity.Profiling.LowLevel.MarkerFlags,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ProfilerUnsafeUtility_CreateMarker_m419027084C68545B765B9345949D8BFCB96C51AD (String_t* ___name0, uint16_t ___categoryId1, uint16_t ___flags2, int32_t ___metadataCount3, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
// System.Void Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::BeginSample(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerUnsafeUtility_BeginSample_m1B2CAD1BC7C7C390514317A8D51FB798D4622AE4 (intptr_t ___markerPtr0, const RuntimeMethod* method);
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
// UnityEngine.MeshRenderer Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals::get_BoundsRenderer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * SqueezableBoxVisuals_get_BoundsRenderer_m4814FBEEDE937450476EDA71B0E0305F23E0F3A1 (SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E * __this, const RuntimeMethod* method)
{
	{
		// get => boundsRenderer;
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_0 = __this->get_boundsRenderer_7();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals::set_BoundsRenderer(UnityEngine.MeshRenderer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqueezableBoxVisuals_set_BoundsRenderer_mC4521C325BD7E834BD0FF6DBE6D85CCA49C5480A (SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E * __this, MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * ___value0, const RuntimeMethod* method)
{
	{
		// set => boundsRenderer = value;
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_0 = ___value0;
		__this->set_boundsRenderer_7(L_0);
		return;
	}
}
// UnityEngine.Transform Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals::get_HandlesContainer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * SqueezableBoxVisuals_get_HandlesContainer_m1A940C82729CA6BFE4D090740680163F0DF1C43F (SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E * __this, const RuntimeMethod* method)
{
	{
		// get => handlesContainer;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_handlesContainer_8();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals::set_HandlesContainer(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqueezableBoxVisuals_set_HandlesContainer_m0E62C4B287B429F6339C2F38271CCC7135F7C495 (SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___value0, const RuntimeMethod* method)
{
	{
		// set => handlesContainer = value;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = ___value0;
		__this->set_handlesContainer_8(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals::get_ShowInternalHandles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqueezableBoxVisuals_get_ShowInternalHandles_mEE9642F48AF368EC6DBEB460734985A453B7C809 (SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E * __this, const RuntimeMethod* method)
{
	{
		// get => showInternalHandles;
		bool L_0 = __this->get_showInternalHandles_9();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals::set_ShowInternalHandles(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqueezableBoxVisuals_set_ShowInternalHandles_mF5E567E21546F81E300A2804FC57F29CE735D856 (SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set => showInternalHandles = value;
		bool L_0 = ___value0;
		__this->set_showInternalHandles_9(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals::get_FocusLerpTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SqueezableBoxVisuals_get_FocusLerpTime_m5B649CA9B728FF03035DA7A2FDB7729C2E3FDA5F (SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E * __this, const RuntimeMethod* method)
{
	{
		// get => focusLerpTime;
		float L_0 = __this->get_focusLerpTime_10();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals::set_FocusLerpTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqueezableBoxVisuals_set_FocusLerpTime_m084EB8D5E6F3606B99C823D5F4AA1ED8A5336041 (SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => focusLerpTime = value;
		float L_0 = ___value0;
		__this->set_focusLerpTime_10(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals::get_ShrinkLerpTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SqueezableBoxVisuals_get_ShrinkLerpTime_m355375CADF1D8C04EF4A3EE0C614DCA1941ED865 (SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E * __this, const RuntimeMethod* method)
{
	{
		// get => shrinkLerpTime;
		float L_0 = __this->get_shrinkLerpTime_11();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals::set_ShrinkLerpTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqueezableBoxVisuals_set_ShrinkLerpTime_m41E3E3135A42E336AE44D9C8007C26AC87897BF7 (SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => shrinkLerpTime = value;
		float L_0 = ___value0;
		__this->set_shrinkLerpTime_11(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals::get_ActivationLerpTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SqueezableBoxVisuals_get_ActivationLerpTime_mCD94713940A6EDEECC3335DAFE2FC999EC2D7DA0 (SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E * __this, const RuntimeMethod* method)
{
	{
		// get => activationLerpTime;
		float L_0 = __this->get_activationLerpTime_12();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals::set_ActivationLerpTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqueezableBoxVisuals_set_ActivationLerpTime_mD48CFC9D467AD60A608896E29DA7FEA57DAA827C (SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => activationLerpTime = value;
		float L_0 = ___value0;
		__this->set_activationLerpTime_12(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqueezableBoxVisuals_Awake_mCD94710D9B7F6A75B3745C9AD62B39966FDE5278 (SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoundsCalculator_tF5C4F6617178343FDC372B9AE75769BBCEB35A4B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisBoundsControl_t020B1395A554F19C45493DAA05E7ECF0D611AB9E_m84FCE31B29B93D2BAB65E24307E5C70AD984BB06_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisBoundsHandleInteractable_tF957D394A29234622B27304D99E5408B7971132B_mACB2E0D250B040FCBCB2C067A47D46B60E1DDD1A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mEB4642B6BC4D45AAE8E03221E90BCFA0F9BAFFF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m51E7329BE651336CDE20A1ACC587870E066A58C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mE89B20D8EC205D2D4623900FBE848AA1A37F0CAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB42E6C9F1BFF90BF7EE0DE8A2AFE68F57E9D9EF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mA9B71CA5FE7A5192A5E7B174EEEC71A8996E8120_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m804A3970592F889B9BD2AA874A6F035465A01984_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4A4AF37F205259DAE4A1A36EF9F01A2931624C8F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t696A52EF7570791EFC6606C9FCEF3360FFC644CD  V_0;
	memset((&V_0), 0, sizeof(V_0));
	BoundsHandleInteractable_tF957D394A29234622B27304D99E5408B7971132B * V_1 = NULL;
	HandlePoint_t91E19093111D8B0BCA87EDF0F669B78522CA0164  V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// boundsControl = GetComponentInParent<BoundsControl>();
		BoundsControl_t020B1395A554F19C45493DAA05E7ECF0D611AB9E * L_0;
		L_0 = Component_GetComponentInParent_TisBoundsControl_t020B1395A554F19C45493DAA05E7ECF0D611AB9E_m84FCE31B29B93D2BAB65E24307E5C70AD984BB06(__this, /*hidden argument*/Component_GetComponentInParent_TisBoundsControl_t020B1395A554F19C45493DAA05E7ECF0D611AB9E_m84FCE31B29B93D2BAB65E24307E5C70AD984BB06_RuntimeMethod_var);
		__this->set_boundsControl_13(L_0);
		// if (boundsControl != null)
		BoundsControl_t020B1395A554F19C45493DAA05E7ECF0D611AB9E * L_1 = __this->get_boundsControl_13();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		// interactable = boundsControl.Interactable;
		BoundsControl_t020B1395A554F19C45493DAA05E7ECF0D611AB9E * L_3 = __this->get_boundsControl_13();
		NullCheck(L_3);
		StatefulInteractable_t67843E0A65DBFB7777C42C51281749C8C71AA203 * L_4;
		L_4 = BoundsControl_get_Interactable_m08A355DFDA7A174D014BC0E656B8BB18D5651FC6_inline(L_3, /*hidden argument*/NULL);
		__this->set_interactable_5(L_4);
	}

IL_002b:
	{
		// propertyBlock = new MaterialPropertyBlock();
		MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * L_5 = (MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 *)il2cpp_codegen_object_new(MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0_il2cpp_TypeInfo_var);
		MaterialPropertyBlock__ctor_m8EB29E415C68427B841A0C68A902A8368B9228E8(L_5, /*hidden argument*/NULL);
		__this->set_propertyBlock_6(L_5);
		// handles = new List<BoundsHandleInteractable>(GetComponentsInChildren<BoundsHandleInteractable>(true));
		BoundsHandleInteractableU5BU5D_t53F23C752969C1C7D05C449BF6CC5467AEF39E9E* L_6;
		L_6 = Component_GetComponentsInChildren_TisBoundsHandleInteractable_tF957D394A29234622B27304D99E5408B7971132B_mACB2E0D250B040FCBCB2C067A47D46B60E1DDD1A(__this, (bool)1, /*hidden argument*/Component_GetComponentsInChildren_TisBoundsHandleInteractable_tF957D394A29234622B27304D99E5408B7971132B_mACB2E0D250B040FCBCB2C067A47D46B60E1DDD1A_RuntimeMethod_var);
		List_1_t4A4AF37F205259DAE4A1A36EF9F01A2931624C8F * L_7 = (List_1_t4A4AF37F205259DAE4A1A36EF9F01A2931624C8F *)il2cpp_codegen_object_new(List_1_t4A4AF37F205259DAE4A1A36EF9F01A2931624C8F_il2cpp_TypeInfo_var);
		List_1__ctor_m804A3970592F889B9BD2AA874A6F035465A01984(L_7, (RuntimeObject*)(RuntimeObject*)L_6, /*hidden argument*/List_1__ctor_m804A3970592F889B9BD2AA874A6F035465A01984_RuntimeMethod_var);
		__this->set_handles_17(L_7);
		// foreach (BoundsHandleInteractable handle in handles)
		List_1_t4A4AF37F205259DAE4A1A36EF9F01A2931624C8F * L_8 = __this->get_handles_17();
		NullCheck(L_8);
		Enumerator_t696A52EF7570791EFC6606C9FCEF3360FFC644CD  L_9;
		L_9 = List_1_GetEnumerator_mA9B71CA5FE7A5192A5E7B174EEEC71A8996E8120(L_8, /*hidden argument*/List_1_GetEnumerator_mA9B71CA5FE7A5192A5E7B174EEEC71A8996E8120_RuntimeMethod_var);
		V_0 = L_9;
	}

IL_0054:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0097;
		}

IL_0056:
		{
			// foreach (BoundsHandleInteractable handle in handles)
			BoundsHandleInteractable_tF957D394A29234622B27304D99E5408B7971132B * L_10;
			L_10 = Enumerator_get_Current_mE89B20D8EC205D2D4623900FBE848AA1A37F0CAC_inline((Enumerator_t696A52EF7570791EFC6606C9FCEF3360FFC644CD *)(&V_0), /*hidden argument*/Enumerator_get_Current_mE89B20D8EC205D2D4623900FBE848AA1A37F0CAC_RuntimeMethod_var);
			V_1 = L_10;
			// projectedHandles.Add(new HandlePoint() { Handle = handle, Position = Vector3.zero });
			List_1_t5B44A6C65ABA13F93E4D6EC9EC79567BB087CC9B * L_11 = __this->get_projectedHandles_18();
			il2cpp_codegen_initobj((&V_2), sizeof(HandlePoint_t91E19093111D8B0BCA87EDF0F669B78522CA0164 ));
			BoundsHandleInteractable_tF957D394A29234622B27304D99E5408B7971132B * L_12 = V_1;
			(&V_2)->set_Handle_0(L_12);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
			L_13 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_14;
			L_14 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_13, /*hidden argument*/NULL);
			(&V_2)->set_Position_1(L_14);
			HandlePoint_t91E19093111D8B0BCA87EDF0F669B78522CA0164  L_15 = V_2;
			NullCheck(L_11);
			List_1_Add_mB42E6C9F1BFF90BF7EE0DE8A2AFE68F57E9D9EF2(L_11, L_15, /*hidden argument*/List_1_Add_mB42E6C9F1BFF90BF7EE0DE8A2AFE68F57E9D9EF2_RuntimeMethod_var);
			// handle.BoundsControlRoot = boundsControl;
			BoundsHandleInteractable_tF957D394A29234622B27304D99E5408B7971132B * L_16 = V_1;
			BoundsControl_t020B1395A554F19C45493DAA05E7ECF0D611AB9E * L_17 = __this->get_boundsControl_13();
			NullCheck(L_16);
			BoundsHandleInteractable_set_BoundsControlRoot_m25B0DF1281A996B34B7C186944F262DE6C72B2FE_inline(L_16, L_17, /*hidden argument*/NULL);
		}

IL_0097:
		{
			// foreach (BoundsHandleInteractable handle in handles)
			bool L_18;
			L_18 = Enumerator_MoveNext_m51E7329BE651336CDE20A1ACC587870E066A58C2((Enumerator_t696A52EF7570791EFC6606C9FCEF3360FFC644CD *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m51E7329BE651336CDE20A1ACC587870E066A58C2_RuntimeMethod_var);
			if (L_18)
			{
				goto IL_0056;
			}
		}

IL_00a0:
		{
			IL2CPP_LEAVE(0xB0, FINALLY_00a2);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00a2;
	}

FINALLY_00a2:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mEB4642B6BC4D45AAE8E03221E90BCFA0F9BAFFF2((Enumerator_t696A52EF7570791EFC6606C9FCEF3360FFC644CD *)(&V_0), /*hidden argument*/Enumerator_Dispose_mEB4642B6BC4D45AAE8E03221E90BCFA0F9BAFFF2_RuntimeMethod_var);
		IL2CPP_END_FINALLY(162)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(162)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xB0, IL_00b0)
	}

IL_00b0:
	{
		// if (boundsRenderer != null)
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_19 = __this->get_boundsRenderer_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_19, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_00ff;
		}
	}
	{
		// GetBoxProperties(boundsRenderer, out float padding, out float shrinkFraction);
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_21 = __this->get_boundsRenderer_7();
		VirtActionInvoker3< MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B *, float*, float* >::Invoke(5 /* System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals::GetBoxProperties(UnityEngine.MeshRenderer,System.Single&,System.Single&) */, __this, L_21, (float*)(&V_3), (float*)(&V_4));
		// unpinchScaleOffset = (Vector3.one * (2.0f * (padding)));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		L_22 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB(/*hidden argument*/NULL);
		float L_23 = V_3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
		L_24 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_22, ((float)il2cpp_codegen_multiply((float)(2.0f), (float)L_23)), /*hidden argument*/NULL);
		__this->set_unpinchScaleOffset_20(L_24);
		// pinchScaleOffset = (Vector3.one * (2.0f * (padding * shrinkFraction)));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
		L_25 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB(/*hidden argument*/NULL);
		float L_26 = V_3;
		float L_27 = V_4;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		L_28 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_25, ((float)il2cpp_codegen_multiply((float)(2.0f), (float)((float)il2cpp_codegen_multiply((float)L_26, (float)L_27)))), /*hidden argument*/NULL);
		__this->set_pinchScaleOffset_21(L_28);
	}

IL_00ff:
	{
		// flattenVector = BoundsCalculator.CalculateFlattenVector(transform.lossyScale);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_29;
		L_29 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_29);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30;
		L_30 = Transform_get_lossyScale_m469A16F93F135C1E4D5955C7EBDB893D1892A331(L_29, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(BoundsCalculator_tF5C4F6617178343FDC372B9AE75769BBCEB35A4B_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31;
		L_31 = BoundsCalculator_CalculateFlattenVector_m195E751E0EC5077D79F59AAF1F687FFD138E7CA7(L_30, /*hidden argument*/NULL);
		__this->set_flattenVector_24(L_31);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqueezableBoxVisuals_Update_m3FD7E09296ECADC63AAAE287837D46E446BDCD91 (SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	int32_t G_B3_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B18_0 = 0;
	int32_t G_B21_0 = 0;
	float G_B24_0 = 0.0f;
	float G_B23_0 = 0.0f;
	int32_t G_B25_0 = 0;
	float G_B25_1 = 0.0f;
	bool G_B38_0 = false;
	SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E * G_B38_1 = NULL;
	bool G_B37_0 = false;
	SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E * G_B37_1 = NULL;
	int32_t G_B39_0 = 0;
	bool G_B39_1 = false;
	SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E * G_B39_2 = NULL;
	int32_t G_B41_0 = 0;
	bool G_B41_1 = false;
	SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E * G_B41_2 = NULL;
	int32_t G_B40_0 = 0;
	bool G_B40_1 = false;
	SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E * G_B40_2 = NULL;
	int32_t G_B42_0 = 0;
	int32_t G_B42_1 = 0;
	bool G_B42_2 = false;
	SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E * G_B42_3 = NULL;
	{
		// bool handlesActive = boundsControl != null && boundsControl.HandlesActive;
		BoundsControl_t020B1395A554F19C45493DAA05E7ECF0D611AB9E * L_0 = __this->get_boundsControl_13();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		BoundsControl_t020B1395A554F19C45493DAA05E7ECF0D611AB9E * L_2 = __this->get_boundsControl_13();
		NullCheck(L_2);
		bool L_3;
		L_3 = BoundsControl_get_HandlesActive_m21C58775F42962D42B6084FF22F95248AB68ACF9_inline(L_2, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = 0;
	}

IL_001c:
	{
		V_0 = (bool)G_B3_0;
		// bool isManipulated = boundsControl != null && boundsControl.IsManipulated;
		BoundsControl_t020B1395A554F19C45493DAA05E7ECF0D611AB9E * L_4 = __this->get_boundsControl_13();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0038;
		}
	}
	{
		BoundsControl_t020B1395A554F19C45493DAA05E7ECF0D611AB9E * L_6 = __this->get_boundsControl_13();
		NullCheck(L_6);
		bool L_7;
		L_7 = BoundsControl_get_IsManipulated_mD245B7F9330BAF6ABA26151A293514B996A4AC16(L_6, /*hidden argument*/NULL);
		G_B6_0 = ((int32_t)(L_7));
		goto IL_0039;
	}

IL_0038:
	{
		G_B6_0 = 0;
	}

IL_0039:
	{
		V_1 = (bool)G_B6_0;
		// float targetActiveFocus = 0;
		V_2 = (0.0f);
		// float targetActivation = 0;
		V_3 = (0.0f);
		// float targetShrink = 0;
		V_4 = (0.0f);
		// if (interactable != null)
		StatefulInteractable_t67843E0A65DBFB7777C42C51281749C8C71AA203 * L_8 = __this->get_interactable_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_8, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_00b6;
		}
	}
	{
		// targetActiveFocus = (interactable.IsActiveHovered || interactable.isSelected || handlesActive) ? 1 : 0;
		StatefulInteractable_t67843E0A65DBFB7777C42C51281749C8C71AA203 * L_10 = __this->get_interactable_5();
		NullCheck(L_10);
		TimedFlag_tC5C87C9B210414D5EFFF70BA26D6C98CD11D655A * L_11;
		L_11 = MRTKBaseInteractable_get_IsActiveHovered_mB8DD392FD90165A50B18E699499C059E22541183_inline(L_10, /*hidden argument*/NULL);
		bool L_12;
		L_12 = TimedFlag_op_Implicit_mBCE07FC8DC042B4DDB6F1F805F6FFDAFD7C86838(L_11, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_007a;
		}
	}
	{
		StatefulInteractable_t67843E0A65DBFB7777C42C51281749C8C71AA203 * L_13 = __this->get_interactable_5();
		NullCheck(L_13);
		bool L_14;
		L_14 = XRBaseInteractable_get_isSelected_mB1CAAE9B24246EC0384C7ADF7C7716FAD729E4BD(L_13, /*hidden argument*/NULL);
		G_B10_0 = ((int32_t)(L_14));
		goto IL_007b;
	}

IL_007a:
	{
		G_B10_0 = 1;
	}

IL_007b:
	{
		bool L_15 = V_0;
		if (((int32_t)((int32_t)G_B10_0|(int32_t)L_15)))
		{
			goto IL_0082;
		}
	}
	{
		G_B13_0 = 0;
		goto IL_0083;
	}

IL_0082:
	{
		G_B13_0 = 1;
	}

IL_0083:
	{
		V_2 = ((float)((float)G_B13_0));
		// targetActivation = interactable.Selectedness();
		StatefulInteractable_t67843E0A65DBFB7777C42C51281749C8C71AA203 * L_16 = __this->get_interactable_5();
		NullCheck(L_16);
		float L_17;
		L_17 = VirtFuncInvoker0< float >::Invoke(88 /* System.Single Microsoft.MixedReality.Toolkit.StatefulInteractable::Selectedness() */, L_16);
		V_3 = L_17;
		// targetShrink = interactable.Selectedness();
		StatefulInteractable_t67843E0A65DBFB7777C42C51281749C8C71AA203 * L_18 = __this->get_interactable_5();
		NullCheck(L_18);
		float L_19;
		L_19 = VirtFuncInvoker0< float >::Invoke(88 /* System.Single Microsoft.MixedReality.Toolkit.StatefulInteractable::Selectedness() */, L_18);
		V_4 = L_19;
		// if (handlesActive)
		bool L_20 = V_0;
		if (!L_20)
		{
			goto IL_00c9;
		}
	}
	{
		// targetShrink = Mathf.Clamp(targetShrink, 0.8f, 1);
		float L_21 = V_4;
		float L_22;
		L_22 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(L_21, (0.800000012f), (1.0f), /*hidden argument*/NULL);
		V_4 = L_22;
		// }
		goto IL_00c9;
	}

IL_00b6:
	{
		// targetActiveFocus = handlesActive ? 1 : 0;
		bool L_23 = V_0;
		if (L_23)
		{
			goto IL_00bc;
		}
	}
	{
		G_B18_0 = 0;
		goto IL_00bd;
	}

IL_00bc:
	{
		G_B18_0 = 1;
	}

IL_00bd:
	{
		V_2 = ((float)((float)G_B18_0));
		// targetShrink = handlesActive ? 1 : 0;
		bool L_24 = V_0;
		if (L_24)
		{
			goto IL_00c5;
		}
	}
	{
		G_B21_0 = 0;
		goto IL_00c6;
	}

IL_00c5:
	{
		G_B21_0 = 1;
	}

IL_00c6:
	{
		V_4 = ((float)((float)G_B21_0));
	}

IL_00c9:
	{
		// targetActivation = Mathf.Clamp01(targetActivation + (isManipulated ? 1 : 0));
		float L_25 = V_3;
		bool L_26 = V_1;
		G_B23_0 = L_25;
		if (L_26)
		{
			G_B24_0 = L_25;
			goto IL_00d0;
		}
	}
	{
		G_B25_0 = 0;
		G_B25_1 = G_B23_0;
		goto IL_00d1;
	}

IL_00d0:
	{
		G_B25_0 = 1;
		G_B25_1 = G_B24_0;
	}

IL_00d1:
	{
		float L_27;
		L_27 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(((float)il2cpp_codegen_add((float)G_B25_1, (float)((float)((float)G_B25_0)))), /*hidden argument*/NULL);
		V_3 = L_27;
		// activeFocus = Smoothing.SmoothTo(activeFocus, targetActiveFocus, focusLerpTime, Time.deltaTime);
		float L_28 = __this->get_activeFocus_14();
		float L_29 = V_2;
		float L_30 = __this->get_focusLerpTime_10();
		float L_31;
		L_31 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_32;
		L_32 = Smoothing_SmoothTo_m2D603400413997FE8F5534DA7AA1BF282F785490(L_28, L_29, L_30, L_31, /*hidden argument*/NULL);
		__this->set_activeFocus_14(L_32);
		// activation = Smoothing.SmoothTo(activation, targetActivation, activationLerpTime, Time.deltaTime);
		float L_33 = __this->get_activation_16();
		float L_34 = V_3;
		float L_35 = __this->get_activationLerpTime_12();
		float L_36;
		L_36 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_37;
		L_37 = Smoothing_SmoothTo_m2D603400413997FE8F5534DA7AA1BF282F785490(L_33, L_34, L_35, L_36, /*hidden argument*/NULL);
		__this->set_activation_16(L_37);
		// shrink = Smoothing.SmoothTo(shrink, targetShrink, shrinkLerpTime, Time.deltaTime);
		float L_38 = __this->get_shrink_15();
		float L_39 = V_4;
		float L_40 = __this->get_shrinkLerpTime_11();
		float L_41;
		L_41 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_42;
		L_42 = Smoothing_SmoothTo_m2D603400413997FE8F5534DA7AA1BF282F785490(L_38, L_39, L_40, L_41, /*hidden argument*/NULL);
		__this->set_shrink_15(L_42);
		// if (boundsRenderer != null)
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_43 = __this->get_boundsRenderer_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_44;
		L_44 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_43, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_44)
		{
			goto IL_0163;
		}
	}
	{
		// WritePropertyValues(boundsRenderer, propertyBlock, activeFocus, activation, shrink);
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_45 = __this->get_boundsRenderer_7();
		MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * L_46 = __this->get_propertyBlock_6();
		float L_47 = __this->get_activeFocus_14();
		float L_48 = __this->get_activation_16();
		float L_49 = __this->get_shrink_15();
		VirtActionInvoker5< MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B *, MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 *, float, float, float >::Invoke(4 /* System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals::WritePropertyValues(UnityEngine.MeshRenderer,UnityEngine.MaterialPropertyBlock,System.Single,System.Single,System.Single) */, __this, L_45, L_46, L_47, L_48, L_49);
	}

IL_0163:
	{
		// if (boundsControl != null && boundsControl.IsFlat)
		BoundsControl_t020B1395A554F19C45493DAA05E7ECF0D611AB9E * L_50 = __this->get_boundsControl_13();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_51;
		L_51 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_50, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_51)
		{
			goto IL_02b1;
		}
	}
	{
		BoundsControl_t020B1395A554F19C45493DAA05E7ECF0D611AB9E * L_52 = __this->get_boundsControl_13();
		NullCheck(L_52);
		bool L_53;
		L_53 = BoundsControl_get_IsFlat_m7BAD3E2F1A04793D33E54598ACB524E26CF327BF_inline(L_52, /*hidden argument*/NULL);
		if (!L_53)
		{
			goto IL_02b1;
		}
	}
	{
		// if (Mathf.Abs(flattenVector.x) > 0)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_54 = __this->get_address_of_flattenVector_24();
		float L_55 = L_54->get_x_2();
		float L_56;
		L_56 = fabsf(L_55);
		if ((!(((float)L_56) > ((float)(0.0f)))))
		{
			goto IL_01eb;
		}
	}
	{
		// transform.localScale = new Vector3(flattenThickness / transform.parent.localScale.x, transform.localScale.y, transform.localScale.z);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_57;
		L_57 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_58;
		L_58 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_58);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_59;
		L_59 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_58, /*hidden argument*/NULL);
		NullCheck(L_59);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_60;
		L_60 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_59, /*hidden argument*/NULL);
		float L_61 = L_60.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_62;
		L_62 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_62);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_63;
		L_63 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_62, /*hidden argument*/NULL);
		float L_64 = L_63.get_y_3();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_65;
		L_65 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_65);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_66;
		L_66 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_65, /*hidden argument*/NULL);
		float L_67 = L_66.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_68;
		memset((&L_68), 0, sizeof(L_68));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_68), ((float)((float)(0.00200000009f)/(float)L_61)), L_64, L_67, /*hidden argument*/NULL);
		NullCheck(L_57);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_57, L_68, /*hidden argument*/NULL);
		// }
		goto IL_02b1;
	}

IL_01eb:
	{
		// else if (Mathf.Abs(flattenVector.y) > 0)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_69 = __this->get_address_of_flattenVector_24();
		float L_70 = L_69->get_y_3();
		float L_71;
		L_71 = fabsf(L_70);
		if ((!(((float)L_71) > ((float)(0.0f)))))
		{
			goto IL_024f;
		}
	}
	{
		// transform.localScale = new Vector3(transform.localScale.x, flattenThickness / transform.parent.localScale.y, transform.localScale.z);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_72;
		L_72 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_73;
		L_73 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_73);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_74;
		L_74 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_73, /*hidden argument*/NULL);
		float L_75 = L_74.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_76;
		L_76 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_76);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_77;
		L_77 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_76, /*hidden argument*/NULL);
		NullCheck(L_77);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_78;
		L_78 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_77, /*hidden argument*/NULL);
		float L_79 = L_78.get_y_3();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_80;
		L_80 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_80);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_81;
		L_81 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_80, /*hidden argument*/NULL);
		float L_82 = L_81.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_83;
		memset((&L_83), 0, sizeof(L_83));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_83), L_75, ((float)((float)(0.00200000009f)/(float)L_79)), L_82, /*hidden argument*/NULL);
		NullCheck(L_72);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_72, L_83, /*hidden argument*/NULL);
		// }
		goto IL_02b1;
	}

IL_024f:
	{
		// else if (Mathf.Abs(flattenVector.z) > 0)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_84 = __this->get_address_of_flattenVector_24();
		float L_85 = L_84->get_z_4();
		float L_86;
		L_86 = fabsf(L_85);
		if ((!(((float)L_86) > ((float)(0.0f)))))
		{
			goto IL_02b1;
		}
	}
	{
		// transform.localScale = new Vector3(transform.localScale.x, transform.localScale.y, flattenThickness / transform.parent.localScale.z);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_87;
		L_87 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_88;
		L_88 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_88);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_89;
		L_89 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_88, /*hidden argument*/NULL);
		float L_90 = L_89.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_91;
		L_91 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_91);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_92;
		L_92 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_91, /*hidden argument*/NULL);
		float L_93 = L_92.get_y_3();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_94;
		L_94 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_94);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_95;
		L_95 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_94, /*hidden argument*/NULL);
		NullCheck(L_95);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_96;
		L_96 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_95, /*hidden argument*/NULL);
		float L_97 = L_96.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_98;
		memset((&L_98), 0, sizeof(L_98));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_98), L_90, L_93, ((float)((float)(0.00200000009f)/(float)L_97)), /*hidden argument*/NULL);
		NullCheck(L_87);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_87, L_98, /*hidden argument*/NULL);
	}

IL_02b1:
	{
		// if (handlesContainer != null)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_99 = __this->get_handlesContainer_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_100;
		L_100 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_99, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_100)
		{
			goto IL_02fe;
		}
	}
	{
		// UpdateHandles(handlesActive,
		//               boundsControl != null ? boundsControl.EnabledHandles : HandleType.None,
		//               boundsControl != null && boundsControl.IsFlat);
		bool L_101 = V_0;
		BoundsControl_t020B1395A554F19C45493DAA05E7ECF0D611AB9E * L_102 = __this->get_boundsControl_13();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_103;
		L_103 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_102, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		G_B37_0 = L_101;
		G_B37_1 = __this;
		if (L_103)
		{
			G_B38_0 = L_101;
			G_B38_1 = __this;
			goto IL_02d2;
		}
	}
	{
		G_B39_0 = 0;
		G_B39_1 = G_B37_0;
		G_B39_2 = G_B37_1;
		goto IL_02dd;
	}

IL_02d2:
	{
		BoundsControl_t020B1395A554F19C45493DAA05E7ECF0D611AB9E * L_104 = __this->get_boundsControl_13();
		NullCheck(L_104);
		int32_t L_105;
		L_105 = BoundsControl_get_EnabledHandles_m61E55F00051AC9E6B857625E3C49272693948E81_inline(L_104, /*hidden argument*/NULL);
		G_B39_0 = ((int32_t)(L_105));
		G_B39_1 = G_B38_0;
		G_B39_2 = G_B38_1;
	}

IL_02dd:
	{
		BoundsControl_t020B1395A554F19C45493DAA05E7ECF0D611AB9E * L_106 = __this->get_boundsControl_13();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_107;
		L_107 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_106, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		G_B40_0 = G_B39_0;
		G_B40_1 = G_B39_1;
		G_B40_2 = G_B39_2;
		if (!L_107)
		{
			G_B41_0 = G_B39_0;
			G_B41_1 = G_B39_1;
			G_B41_2 = G_B39_2;
			goto IL_02f8;
		}
	}
	{
		BoundsControl_t020B1395A554F19C45493DAA05E7ECF0D611AB9E * L_108 = __this->get_boundsControl_13();
		NullCheck(L_108);
		bool L_109;
		L_109 = BoundsControl_get_IsFlat_m7BAD3E2F1A04793D33E54598ACB524E26CF327BF_inline(L_108, /*hidden argument*/NULL);
		G_B42_0 = ((int32_t)(L_109));
		G_B42_1 = G_B40_0;
		G_B42_2 = G_B40_1;
		G_B42_3 = G_B40_2;
		goto IL_02f9;
	}

IL_02f8:
	{
		G_B42_0 = 0;
		G_B42_1 = G_B41_0;
		G_B42_2 = G_B41_1;
		G_B42_3 = G_B41_2;
	}

IL_02f9:
	{
		NullCheck(G_B42_3);
		SqueezableBoxVisuals_UpdateHandles_m1379B351C7B1F11384E036F7ED9921882AC91431(G_B42_3, G_B42_2, G_B42_1, (bool)G_B42_0, /*hidden argument*/NULL);
	}

IL_02fe:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals::WritePropertyValues(UnityEngine.MeshRenderer,UnityEngine.MaterialPropertyBlock,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqueezableBoxVisuals_WritePropertyValues_m94C033201079681C0518D83D1056106BBB256771 (SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E * __this, MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * ___renderer0, MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * ___propertyBlock1, float ___focus2, float ___activation3, float ___shrink4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral156474BE65CE38994FD208F520EF105B1442BDD2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A6508B26871C3DB541D9CAAC62647C013C60BBF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC64F4B5B39878B5E701C71B2444ADEF3A2ECC142);
		s_Il2CppMethodInitialized = true;
	}
	{
		// renderer.GetPropertyBlock(propertyBlock);
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_0 = ___renderer0;
		MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * L_1 = ___propertyBlock1;
		NullCheck(L_0);
		Renderer_GetPropertyBlock_mE73E51E42ED4F800C6422F5461A4D9E1DB61AEDC(L_0, L_1, /*hidden argument*/NULL);
		// propertyBlock.SetFloat("_Gaze_Focus_", focus);
		MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * L_2 = ___propertyBlock1;
		float L_3 = ___focus2;
		NullCheck(L_2);
		MaterialPropertyBlock_SetFloat_m5AADD8A9BFF5C1DD5A93BF028A2F001681221942(L_2, _stringLiteral156474BE65CE38994FD208F520EF105B1442BDD2, L_3, /*hidden argument*/NULL);
		// propertyBlock.SetFloat("_Pinched_", activation);
		MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * L_4 = ___propertyBlock1;
		float L_5 = ___activation3;
		NullCheck(L_4);
		MaterialPropertyBlock_SetFloat_m5AADD8A9BFF5C1DD5A93BF028A2F001681221942(L_4, _stringLiteralC64F4B5B39878B5E701C71B2444ADEF3A2ECC142, L_5, /*hidden argument*/NULL);
		// propertyBlock.SetFloat("_Extra_Input_Progress_", shrink);
		MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * L_6 = ___propertyBlock1;
		float L_7 = ___shrink4;
		NullCheck(L_6);
		MaterialPropertyBlock_SetFloat_m5AADD8A9BFF5C1DD5A93BF028A2F001681221942(L_6, _stringLiteral7A6508B26871C3DB541D9CAAC62647C013C60BBF, L_7, /*hidden argument*/NULL);
		// renderer.SetPropertyBlock(propertyBlock);
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_8 = ___renderer0;
		MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * L_9 = ___propertyBlock1;
		NullCheck(L_8);
		Renderer_SetPropertyBlock_m3F0E4E98D8274A1396AEBA8456AFA4036DCA7B7A(L_8, L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals::GetBoxProperties(UnityEngine.MeshRenderer,System.Single&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqueezableBoxVisuals_GetBoxProperties_mBCFD49674A8100E9405DF50058740F7FBFBD8E33 (SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E * __this, MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * ___renderer0, float* ___padding1, float* ___shrinkFraction2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral461082FC6ABF98ACF128E2A88129BCFA9B682EC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF1B7FE9BB51A6514C5834FC0EC81CCBBF51170CD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// padding = renderer.material.GetFloat("_Bevel_Radius_");
		float* L_0 = ___padding1;
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_1 = ___renderer0;
		NullCheck(L_1);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_2;
		L_2 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		float L_3;
		L_3 = Material_GetFloat_mF2F48AFBDFC1E1E72A00F614EF20B656262EB167(L_2, _stringLiteral461082FC6ABF98ACF128E2A88129BCFA9B682EC3, /*hidden argument*/NULL);
		*((float*)L_0) = (float)L_3;
		// shrinkFraction = renderer.material.GetFloat("_Shrunk_Radius_Fraction_");
		float* L_4 = ___shrinkFraction2;
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_5 = ___renderer0;
		NullCheck(L_5);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_6;
		L_6 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		float L_7;
		L_7 = Material_GetFloat_mF2F48AFBDFC1E1E72A00F614EF20B656262EB167(L_6, _stringLiteralF1B7FE9BB51A6514C5834FC0EC81CCBBF51170CD, /*hidden argument*/NULL);
		*((float*)L_4) = (float)L_7;
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals::UpdateHandles(System.Boolean,Microsoft.MixedReality.Toolkit.SpatialManipulation.HandleType,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqueezableBoxVisuals_UpdateHandles_m1379B351C7B1F11384E036F7ED9921882AC91431 (SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E * __this, bool ___handlesActive0, int32_t ___activeHandleTypes1, bool ___isFlat2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mEB4642B6BC4D45AAE8E03221E90BCFA0F9BAFFF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m51E7329BE651336CDE20A1ACC587870E066A58C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mE89B20D8EC205D2D4623900FBE848AA1A37F0CAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mA9B71CA5FE7A5192A5E7B174EEEC71A8996E8120_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Enumerator_t696A52EF7570791EFC6606C9FCEF3360FFC644CD  V_3;
	memset((&V_3), 0, sizeof(V_3));
	BoundsHandleInteractable_tF957D394A29234622B27304D99E5408B7971132B * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	BoundsHandleInteractable_tF957D394A29234622B27304D99E5408B7971132B * G_B5_0 = NULL;
	BoundsHandleInteractable_tF957D394A29234622B27304D99E5408B7971132B * G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	BoundsHandleInteractable_tF957D394A29234622B27304D99E5408B7971132B * G_B6_1 = NULL;
	{
		// using (UpdateHandlesPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E_StaticFields*)il2cpp_codegen_static_fields_for(SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E_il2cpp_TypeInfo_var))->get_UpdateHandlesPerfMarker_26();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// Vector3 scaleReciprocal = new Vector3(1.0f / handlesContainer.lossyScale.x, 1.0f / handlesContainer.lossyScale.y, 1.0f / handlesContainer.lossyScale.z);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = __this->get_handlesContainer_8();
			NullCheck(L_2);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
			L_3 = Transform_get_lossyScale_m469A16F93F135C1E4D5955C7EBDB893D1892A331(L_2, /*hidden argument*/NULL);
			float L_4 = L_3.get_x_2();
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = __this->get_handlesContainer_8();
			NullCheck(L_5);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
			L_6 = Transform_get_lossyScale_m469A16F93F135C1E4D5955C7EBDB893D1892A331(L_5, /*hidden argument*/NULL);
			float L_7 = L_6.get_y_3();
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8 = __this->get_handlesContainer_8();
			NullCheck(L_8);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
			L_9 = Transform_get_lossyScale_m469A16F93F135C1E4D5955C7EBDB893D1892A331(L_8, /*hidden argument*/NULL);
			float L_10 = L_9.get_z_4();
			Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_2), ((float)((float)(1.0f)/(float)L_4)), ((float)((float)(1.0f)/(float)L_7)), ((float)((float)(1.0f)/(float)L_10)), /*hidden argument*/NULL);
			// handlesContainer.localScale = Vector3.one + Vector3.Scale(Vector3.Lerp(unpinchScaleOffset, pinchScaleOffset, shrink), scaleReciprocal);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11 = __this->get_handlesContainer_8();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
			L_12 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB(/*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = __this->get_unpinchScaleOffset_20();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = __this->get_pinchScaleOffset_21();
			float L_15 = __this->get_shrink_15();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
			L_16 = Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline(L_13, L_14, L_15, /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17 = V_2;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
			L_18 = Vector3_Scale_m8805EE8D2586DE7B6143FA35819B3D5CF1981FB3_inline(L_16, L_17, /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
			L_19 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_12, L_18, /*hidden argument*/NULL);
			NullCheck(L_11);
			Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_11, L_19, /*hidden argument*/NULL);
			// foreach (var handle in handles)
			List_1_t4A4AF37F205259DAE4A1A36EF9F01A2931624C8F * L_20 = __this->get_handles_17();
			NullCheck(L_20);
			Enumerator_t696A52EF7570791EFC6606C9FCEF3360FFC644CD  L_21;
			L_21 = List_1_GetEnumerator_mA9B71CA5FE7A5192A5E7B174EEEC71A8996E8120(L_20, /*hidden argument*/List_1_GetEnumerator_mA9B71CA5FE7A5192A5E7B174EEEC71A8996E8120_RuntimeMethod_var);
			V_3 = L_21;
		}

IL_0095:
		try
		{ // begin try (depth: 2)
			{
				goto IL_00d7;
			}

IL_0097:
			{
				// foreach (var handle in handles)
				BoundsHandleInteractable_tF957D394A29234622B27304D99E5408B7971132B * L_22;
				L_22 = Enumerator_get_Current_mE89B20D8EC205D2D4623900FBE848AA1A37F0CAC_inline((Enumerator_t696A52EF7570791EFC6606C9FCEF3360FFC644CD *)(&V_3), /*hidden argument*/Enumerator_get_Current_mE89B20D8EC205D2D4623900FBE848AA1A37F0CAC_RuntimeMethod_var);
				V_4 = L_22;
				// handle.enabled = handlesActive && ((activeHandleTypes & handle.HandleType) == handle.HandleType);
				BoundsHandleInteractable_tF957D394A29234622B27304D99E5408B7971132B * L_23 = V_4;
				bool L_24 = ___handlesActive0;
				G_B4_0 = L_23;
				if (!L_24)
				{
					G_B5_0 = L_23;
					goto IL_00b9;
				}
			}

IL_00a5:
			{
				int32_t L_25 = ___activeHandleTypes1;
				BoundsHandleInteractable_tF957D394A29234622B27304D99E5408B7971132B * L_26 = V_4;
				NullCheck(L_26);
				int32_t L_27;
				L_27 = BoundsHandleInteractable_get_HandleType_m4041910B9088D8F7E3FB3635B068B4A8B6715BB4_inline(L_26, /*hidden argument*/NULL);
				BoundsHandleInteractable_tF957D394A29234622B27304D99E5408B7971132B * L_28 = V_4;
				NullCheck(L_28);
				int32_t L_29;
				L_29 = BoundsHandleInteractable_get_HandleType_m4041910B9088D8F7E3FB3635B068B4A8B6715BB4_inline(L_28, /*hidden argument*/NULL);
				G_B6_0 = ((((int32_t)((int32_t)((int32_t)L_25&(int32_t)L_27))) == ((int32_t)L_29))? 1 : 0);
				G_B6_1 = G_B4_0;
				goto IL_00ba;
			}

IL_00b9:
			{
				G_B6_0 = 0;
				G_B6_1 = G_B5_0;
			}

IL_00ba:
			{
				NullCheck(G_B6_1);
				Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(G_B6_1, (bool)G_B6_0, /*hidden argument*/NULL);
				// if (showInternalHandles)
				bool L_30 = __this->get_showInternalHandles_9();
				if (!L_30)
				{
					goto IL_00d7;
				}
			}

IL_00c7:
			{
				// handle.IsOccluded = false;
				BoundsHandleInteractable_tF957D394A29234622B27304D99E5408B7971132B * L_31 = V_4;
				NullCheck(L_31);
				VirtActionInvoker1< bool >::Invoke(95 /* System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.BoundsHandleInteractable::set_IsOccluded(System.Boolean) */, L_31, (bool)0);
				// handle.IsFlattened = false;
				BoundsHandleInteractable_tF957D394A29234622B27304D99E5408B7971132B * L_32 = V_4;
				NullCheck(L_32);
				BoundsHandleInteractable_set_IsFlattened_m0F2319FFD9812EAA65CFBD8EDE6F079A6760E87A_inline(L_32, (bool)0, /*hidden argument*/NULL);
			}

IL_00d7:
			{
				// foreach (var handle in handles)
				bool L_33;
				L_33 = Enumerator_MoveNext_m51E7329BE651336CDE20A1ACC587870E066A58C2((Enumerator_t696A52EF7570791EFC6606C9FCEF3360FFC644CD *)(&V_3), /*hidden argument*/Enumerator_MoveNext_m51E7329BE651336CDE20A1ACC587870E066A58C2_RuntimeMethod_var);
				if (L_33)
				{
					goto IL_0097;
				}
			}

IL_00e0:
			{
				IL2CPP_LEAVE(0xF0, FINALLY_00e2);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_00e2;
		}

FINALLY_00e2:
		{ // begin finally (depth: 2)
			Enumerator_Dispose_mEB4642B6BC4D45AAE8E03221E90BCFA0F9BAFFF2((Enumerator_t696A52EF7570791EFC6606C9FCEF3360FFC644CD *)(&V_3), /*hidden argument*/Enumerator_Dispose_mEB4642B6BC4D45AAE8E03221E90BCFA0F9BAFFF2_RuntimeMethod_var);
			IL2CPP_END_FINALLY(226)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(226)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0xF0, IL_00f0)
		}

IL_00f0:
		{
			// if (handlesActive)
			bool L_34 = ___handlesActive0;
			if (!L_34)
			{
				goto IL_010c;
			}
		}

IL_00f3:
		{
			// if (isFlat)
			bool L_35 = ___isFlat2;
			if (!L_35)
			{
				goto IL_00fe;
			}
		}

IL_00f6:
		{
			// HideFlattenedHandles();
			SqueezableBoxVisuals_HideFlattenedHandles_mF29A8FB6179EC551A168C555C58D86F32E59EA87(__this, /*hidden argument*/NULL);
			// }
			IL2CPP_LEAVE(0x11C, FINALLY_010e);
		}

IL_00fe:
		{
			// if (!showInternalHandles)
			bool L_36 = __this->get_showInternalHandles_9();
			if (L_36)
			{
				goto IL_010c;
			}
		}

IL_0106:
		{
			// ConvexHull();
			SqueezableBoxVisuals_ConvexHull_m54C921DB6F7B704E83D518A5B98DD6DA143F89BA(__this, /*hidden argument*/NULL);
		}

IL_010c:
		{
			// }
			IL2CPP_LEAVE(0x11C, FINALLY_010e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_010e;
	}

FINALLY_010e:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(270)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(270)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x11C, IL_011c)
	}

IL_011c:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals::ConvexHull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqueezableBoxVisuals_ConvexHull_m54C921DB6F7B704E83D518A5B98DD6DA143F89BA (SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mAB7D3DF999558CD6245266C570CF75C29A43A1C3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mB21A193101C88B730BE0B4DE81333C745F419D53_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mEB4642B6BC4D45AAE8E03221E90BCFA0F9BAFFF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m51E7329BE651336CDE20A1ACC587870E066A58C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mB2700F1C088F51347988BAA8C41621826690C69D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mDA401CA344A1D0C2206FE99A7C68424742A2BD5E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mB6F14CF1BA6F38DAD0F0C414B0CCF360059913B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mC13697F6D9750E1DEA40C725761EE84AB6E7FC3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mE89B20D8EC205D2D4623900FBE848AA1A37F0CAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mA9B71CA5FE7A5192A5E7B174EEEC71A8996E8120_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mFE607C7BCF5A596A1EFC651C2FFE3A530E54F8E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Sort_mD8ABD2909DA715E266F0343CC5D7CB47DBAB264F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m3336665B1EEF196DEE976CCC6504C965A9C4ECF0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mF40959BD2A0D8F1CBDCE115BDA37F7E3767EB922_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m0A3B0C345A30C7D0D47CF483208F63593E0BAE86_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqueezableBoxVisuals_PeekSecond_TisHandlePoint_t91E19093111D8B0BCA87EDF0F669B78522CA0164_mAF9C886EE8728BAE90CCD8911E2723C89309098F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Clear_mAED243D4C34FE98E91DE4A6B27A0CA04C3BFFD98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_GetEnumerator_mD2562D5378B6C16527028F59DB3C17101237168F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Peek_m47284331780BBF375E430E115E8A9CFC5F4A6F8B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_m858C764B7F081CEF9F071C664AF31B14BDA49F56_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_mF803016D3C93704671BC1796E5A743AB9775A17B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_get_Count_mED24A025DF95B8CE560C82EE94A2A96B990BA8B1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	HandlePoint_t91E19093111D8B0BCA87EDF0F669B78522CA0164  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	Enumerator_t26258AA2194D0AA0FCFD867C989EBA242854BD2B  V_6;
	memset((&V_6), 0, sizeof(V_6));
	HandlePoint_t91E19093111D8B0BCA87EDF0F669B78522CA0164  V_7;
	memset((&V_7), 0, sizeof(V_7));
	Enumerator_t9668CA47EB00CD68666FE902B91D9D7606DEF749  V_8;
	memset((&V_8), 0, sizeof(V_8));
	Enumerator_t696A52EF7570791EFC6606C9FCEF3360FFC644CD  V_9;
	memset((&V_9), 0, sizeof(V_9));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		// using (ConvexHullPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E_StaticFields*)il2cpp_codegen_static_fields_for(SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E_il2cpp_TypeInfo_var))->get_ConvexHullPerfMarker_27();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// for (int i = 0; i < projectedHandles.Count; i++)
			V_2 = 0;
			goto IL_00ba;
		}

IL_0015:
		{
			// projectedHandles[i] = new HandlePoint()
			// {
			//     Handle = projectedHandles[i].Handle,
			//     Position = Camera.main.WorldToScreenPoint(projectedHandles[i].Handle.transform.position + (projectedHandles[i].Handle.transform.position - transform.position).normalized * convexPadding),
			// };
			List_1_t5B44A6C65ABA13F93E4D6EC9EC79567BB087CC9B * L_2 = __this->get_projectedHandles_18();
			int32_t L_3 = V_2;
			il2cpp_codegen_initobj((&V_3), sizeof(HandlePoint_t91E19093111D8B0BCA87EDF0F669B78522CA0164 ));
			List_1_t5B44A6C65ABA13F93E4D6EC9EC79567BB087CC9B * L_4 = __this->get_projectedHandles_18();
			int32_t L_5 = V_2;
			NullCheck(L_4);
			HandlePoint_t91E19093111D8B0BCA87EDF0F669B78522CA0164  L_6;
			L_6 = List_1_get_Item_mF40959BD2A0D8F1CBDCE115BDA37F7E3767EB922_inline(L_4, L_5, /*hidden argument*/List_1_get_Item_mF40959BD2A0D8F1CBDCE115BDA37F7E3767EB922_RuntimeMethod_var);
			BoundsHandleInteractable_tF957D394A29234622B27304D99E5408B7971132B * L_7 = L_6.get_Handle_0();
			(&V_3)->set_Handle_0(L_7);
			Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_8;
			L_8 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
			List_1_t5B44A6C65ABA13F93E4D6EC9EC79567BB087CC9B * L_9 = __this->get_projectedHandles_18();
			int32_t L_10 = V_2;
			NullCheck(L_9);
			HandlePoint_t91E19093111D8B0BCA87EDF0F669B78522CA0164  L_11;
			L_11 = List_1_get_Item_mF40959BD2A0D8F1CBDCE115BDA37F7E3767EB922_inline(L_9, L_10, /*hidden argument*/List_1_get_Item_mF40959BD2A0D8F1CBDCE115BDA37F7E3767EB922_RuntimeMethod_var);
			BoundsHandleInteractable_tF957D394A29234622B27304D99E5408B7971132B * L_12 = L_11.get_Handle_0();
			NullCheck(L_12);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
			L_13 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_12, /*hidden argument*/NULL);
			NullCheck(L_13);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
			L_14 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_13, /*hidden argument*/NULL);
			List_1_t5B44A6C65ABA13F93E4D6EC9EC79567BB087CC9B * L_15 = __this->get_projectedHandles_18();
			int32_t L_16 = V_2;
			NullCheck(L_15);
			HandlePoint_t91E19093111D8B0BCA87EDF0F669B78522CA0164  L_17;
			L_17 = List_1_get_Item_mF40959BD2A0D8F1CBDCE115BDA37F7E3767EB922_inline(L_15, L_16, /*hidden argument*/List_1_get_Item_mF40959BD2A0D8F1CBDCE115BDA37F7E3767EB922_RuntimeMethod_var);
			BoundsHandleInteractable_tF957D394A29234622B27304D99E5408B7971132B * L_18 = L_17.get_Handle_0();
			NullCheck(L_18);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19;
			L_19 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_18, /*hidden argument*/NULL);
			NullCheck(L_19);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
			L_20 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_19, /*hidden argument*/NULL);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21;
			L_21 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
			NullCheck(L_21);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
			L_22 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_21, /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
			L_23 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_20, L_22, /*hidden argument*/NULL);
			V_4 = L_23;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
			L_24 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_4), /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E_il2cpp_TypeInfo_var);
			float L_25 = ((SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E_StaticFields*)il2cpp_codegen_static_fields_for(SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E_il2cpp_TypeInfo_var))->get_convexPadding_22();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
			L_26 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_24, L_25, /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
			L_27 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_14, L_26, /*hidden argument*/NULL);
			NullCheck(L_8);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
			L_28 = Camera_WorldToScreenPoint_m44710195E7736CE9DE5A9B05E32059A9A950F95C(L_8, L_27, /*hidden argument*/NULL);
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_29;
			L_29 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_28, /*hidden argument*/NULL);
			(&V_3)->set_Position_1(L_29);
			HandlePoint_t91E19093111D8B0BCA87EDF0F669B78522CA0164  L_30 = V_3;
			NullCheck(L_2);
			List_1_set_Item_m0A3B0C345A30C7D0D47CF483208F63593E0BAE86(L_2, L_3, L_30, /*hidden argument*/List_1_set_Item_m0A3B0C345A30C7D0D47CF483208F63593E0BAE86_RuntimeMethod_var);
			// for (int i = 0; i < projectedHandles.Count; i++)
			int32_t L_31 = V_2;
			V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1));
		}

IL_00ba:
		{
			// for (int i = 0; i < projectedHandles.Count; i++)
			int32_t L_32 = V_2;
			List_1_t5B44A6C65ABA13F93E4D6EC9EC79567BB087CC9B * L_33 = __this->get_projectedHandles_18();
			NullCheck(L_33);
			int32_t L_34;
			L_34 = List_1_get_Count_m3336665B1EEF196DEE976CCC6504C965A9C4ECF0_inline(L_33, /*hidden argument*/List_1_get_Count_m3336665B1EEF196DEE976CCC6504C965A9C4ECF0_RuntimeMethod_var);
			if ((((int32_t)L_32) < ((int32_t)L_34)))
			{
				goto IL_0015;
			}
		}

IL_00cb:
		{
			// comparisonAnchor = new Vector2(Mathf.Infinity, Mathf.Infinity);
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_35;
			memset((&L_35), 0, sizeof(L_35));
			Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_35), (std::numeric_limits<float>::infinity()), (std::numeric_limits<float>::infinity()), /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E_il2cpp_TypeInfo_var);
			((SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E_StaticFields*)il2cpp_codegen_static_fields_for(SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E_il2cpp_TypeInfo_var))->set_comparisonAnchor_23(L_35);
			// for (int i = 0; i < projectedHandles.Count; i++)
			V_5 = 0;
			goto IL_0186;
		}

IL_00e7:
		{
			// if (projectedHandles[i].Position.y < comparisonAnchor.y)
			List_1_t5B44A6C65ABA13F93E4D6EC9EC79567BB087CC9B * L_36 = __this->get_projectedHandles_18();
			int32_t L_37 = V_5;
			NullCheck(L_36);
			HandlePoint_t91E19093111D8B0BCA87EDF0F669B78522CA0164  L_38;
			L_38 = List_1_get_Item_mF40959BD2A0D8F1CBDCE115BDA37F7E3767EB922_inline(L_36, L_37, /*hidden argument*/List_1_get_Item_mF40959BD2A0D8F1CBDCE115BDA37F7E3767EB922_RuntimeMethod_var);
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_39 = L_38.get_Position_1();
			float L_40 = L_39.get_y_1();
			IL2CPP_RUNTIME_CLASS_INIT(SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E_il2cpp_TypeInfo_var);
			float L_41 = (((SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E_StaticFields*)il2cpp_codegen_static_fields_for(SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E_il2cpp_TypeInfo_var))->get_address_of_comparisonAnchor_23())->get_y_1();
			if ((!(((float)L_40) < ((float)L_41))))
			{
				goto IL_0123;
			}
		}

IL_010a:
		{
			// comparisonAnchor = projectedHandles[i].Position;
			List_1_t5B44A6C65ABA13F93E4D6EC9EC79567BB087CC9B * L_42 = __this->get_projectedHandles_18();
			int32_t L_43 = V_5;
			NullCheck(L_42);
			HandlePoint_t91E19093111D8B0BCA87EDF0F669B78522CA0164  L_44;
			L_44 = List_1_get_Item_mF40959BD2A0D8F1CBDCE115BDA37F7E3767EB922_inline(L_42, L_43, /*hidden argument*/List_1_get_Item_mF40959BD2A0D8F1CBDCE115BDA37F7E3767EB922_RuntimeMethod_var);
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_45 = L_44.get_Position_1();
			IL2CPP_RUNTIME_CLASS_INIT(SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E_il2cpp_TypeInfo_var);
			((SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E_StaticFields*)il2cpp_codegen_static_fields_for(SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E_il2cpp_TypeInfo_var))->set_comparisonAnchor_23(L_45);
			// }
			goto IL_0180;
		}

IL_0123:
		{
			// else if (projectedHandles[i].Position.y == comparisonAnchor.y && projectedHandles[i].Position.x < comparisonAnchor.x)
			List_1_t5B44A6C65ABA13F93E4D6EC9EC79567BB087CC9B * L_46 = __this->get_projectedHandles_18();
			int32_t L_47 = V_5;
			NullCheck(L_46);
			HandlePoint_t91E19093111D8B0BCA87EDF0F669B78522CA0164  L_48;
			L_48 = List_1_get_Item_mF40959BD2A0D8F1CBDCE115BDA37F7E3767EB922_inline(L_46, L_47, /*hidden argument*/List_1_get_Item_mF40959BD2A0D8F1CBDCE115BDA37F7E3767EB922_RuntimeMethod_var);
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_49 = L_48.get_Position_1();
			float L_50 = L_49.get_y_1();
			IL2CPP_RUNTIME_CLASS_INIT(SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E_il2cpp_TypeInfo_var);
			float L_51 = (((SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E_StaticFields*)il2cpp_codegen_static_fields_for(SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E_il2cpp_TypeInfo_var))->get_address_of_comparisonAnchor_23())->get_y_1();
			if ((!(((float)L_50) == ((float)L_51))))
			{
				goto IL_0180;
			}
		}

IL_0146:
		{
			List_1_t5B44A6C65ABA13F93E4D6EC9EC79567BB087CC9B * L_52 = __this->get_projectedHandles_18();
			int32_t L_53 = V_5;
			NullCheck(L_52);
			HandlePoint_t91E19093111D8B0BCA87EDF0F669B78522CA0164  L_54;
			L_54 = List_1_get_Item_mF40959BD2A0D8F1CBDCE115BDA37F7E3767EB922_inline(L_52, L_53, /*hidden argument*/List_1_get_Item_mF40959BD2A0D8F1CBDCE115BDA37F7E3767EB922_RuntimeMethod_var);
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_55 = L_54.get_Position_1();
			float L_56 = L_55.get_x_0();
			IL2CPP_RUNTIME_CLASS_INIT(SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E_il2cpp_TypeInfo_var);
			float L_57 = (((SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E_StaticFields*)il2cpp_codegen_static_fields_for(SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E_il2cpp_TypeInfo_var))->get_address_of_comparisonAnchor_23())->get_x_0();
			if ((!(((float)L_56) < ((float)L_57))))
			{
				goto IL_0180;
			}
		}

IL_0169:
		{
			// comparisonAnchor = projectedHandles[i].Position;
			List_1_t5B44A6C65ABA13F93E4D6EC9EC79567BB087CC9B * L_58 = __this->get_projectedHandles_18();
			int32_t L_59 = V_5;
			NullCheck(L_58);
			HandlePoint_t91E19093111D8B0BCA87EDF0F669B78522CA0164  L_60;
			L_60 = List_1_get_Item_mF40959BD2A0D8F1CBDCE115BDA37F7E3767EB922_inline(L_58, L_59, /*hidden argument*/List_1_get_Item_mF40959BD2A0D8F1CBDCE115BDA37F7E3767EB922_RuntimeMethod_var);
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_61 = L_60.get_Position_1();
			IL2CPP_RUNTIME_CLASS_INIT(SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E_il2cpp_TypeInfo_var);
			((SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E_StaticFields*)il2cpp_codegen_static_fields_for(SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E_il2cpp_TypeInfo_var))->set_comparisonAnchor_23(L_61);
		}

IL_0180:
		{
			// for (int i = 0; i < projectedHandles.Count; i++)
			int32_t L_62 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_62, (int32_t)1));
		}

IL_0186:
		{
			// for (int i = 0; i < projectedHandles.Count; i++)
			int32_t L_63 = V_5;
			List_1_t5B44A6C65ABA13F93E4D6EC9EC79567BB087CC9B * L_64 = __this->get_projectedHandles_18();
			NullCheck(L_64);
			int32_t L_65;
			L_65 = List_1_get_Count_m3336665B1EEF196DEE976CCC6504C965A9C4ECF0_inline(L_64, /*hidden argument*/List_1_get_Count_m3336665B1EEF196DEE976CCC6504C965A9C4ECF0_RuntimeMethod_var);
			if ((((int32_t)L_63) < ((int32_t)L_65)))
			{
				goto IL_00e7;
			}
		}

IL_0198:
		{
			// projectedHandles.Sort(CompareHandlePoints);
			List_1_t5B44A6C65ABA13F93E4D6EC9EC79567BB087CC9B * L_66 = __this->get_projectedHandles_18();
			IL2CPP_RUNTIME_CLASS_INIT(SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E_il2cpp_TypeInfo_var);
			Comparison_1_t317DBD3E8FEC7893E5A036339DA3726A990AD813 * L_67 = ((SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E_StaticFields*)il2cpp_codegen_static_fields_for(SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E_il2cpp_TypeInfo_var))->get_CompareHandlePoints_25();
			NullCheck(L_66);
			List_1_Sort_mD8ABD2909DA715E266F0343CC5D7CB47DBAB264F(L_66, L_67, /*hidden argument*/List_1_Sort_mD8ABD2909DA715E266F0343CC5D7CB47DBAB264F_RuntimeMethod_var);
			// stack.Clear();
			Stack_1_tBBB21EE44D1282CA179A656956ED6B3BF9DD4B32 * L_68 = __this->get_stack_19();
			NullCheck(L_68);
			Stack_1_Clear_mAED243D4C34FE98E91DE4A6B27A0CA04C3BFFD98(L_68, /*hidden argument*/Stack_1_Clear_mAED243D4C34FE98E91DE4A6B27A0CA04C3BFFD98_RuntimeMethod_var);
			// foreach (HandlePoint handlePoint in projectedHandles)
			List_1_t5B44A6C65ABA13F93E4D6EC9EC79567BB087CC9B * L_69 = __this->get_projectedHandles_18();
			NullCheck(L_69);
			Enumerator_t26258AA2194D0AA0FCFD867C989EBA242854BD2B  L_70;
			L_70 = List_1_GetEnumerator_mFE607C7BCF5A596A1EFC651C2FFE3A530E54F8E3(L_69, /*hidden argument*/List_1_GetEnumerator_mFE607C7BCF5A596A1EFC651C2FFE3A530E54F8E3_RuntimeMethod_var);
			V_6 = L_70;
		}

IL_01c0:
		try
		{ // begin try (depth: 2)
			{
				goto IL_023a;
			}

IL_01c2:
			{
				// foreach (HandlePoint handlePoint in projectedHandles)
				HandlePoint_t91E19093111D8B0BCA87EDF0F669B78522CA0164  L_71;
				L_71 = Enumerator_get_Current_mC13697F6D9750E1DEA40C725761EE84AB6E7FC3F_inline((Enumerator_t26258AA2194D0AA0FCFD867C989EBA242854BD2B *)(&V_6), /*hidden argument*/Enumerator_get_Current_mC13697F6D9750E1DEA40C725761EE84AB6E7FC3F_RuntimeMethod_var);
				V_7 = L_71;
				goto IL_01ef;
			}

IL_01cd:
			{
				// var popped = stack.Pop();
				Stack_1_tBBB21EE44D1282CA179A656956ED6B3BF9DD4B32 * L_72 = __this->get_stack_19();
				NullCheck(L_72);
				HandlePoint_t91E19093111D8B0BCA87EDF0F669B78522CA0164  L_73;
				L_73 = Stack_1_Pop_m858C764B7F081CEF9F071C664AF31B14BDA49F56(L_72, /*hidden argument*/Stack_1_Pop_m858C764B7F081CEF9F071C664AF31B14BDA49F56_RuntimeMethod_var);
				// popped.Handle.IsOccluded = true;
				HandlePoint_t91E19093111D8B0BCA87EDF0F669B78522CA0164  L_74 = L_73;
				BoundsHandleInteractable_tF957D394A29234622B27304D99E5408B7971132B * L_75 = L_74.get_Handle_0();
				NullCheck(L_75);
				VirtActionInvoker1< bool >::Invoke(95 /* System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.BoundsHandleInteractable::set_IsOccluded(System.Boolean) */, L_75, (bool)1);
				// popped.Handle.IsFlattened = false;
				BoundsHandleInteractable_tF957D394A29234622B27304D99E5408B7971132B * L_76 = L_74.get_Handle_0();
				NullCheck(L_76);
				BoundsHandleInteractable_set_IsFlattened_m0F2319FFD9812EAA65CFBD8EDE6F079A6760E87A_inline(L_76, (bool)0, /*hidden argument*/NULL);
			}

IL_01ef:
			{
				// while (stack.Count > 1 && TurnDirection(PeekSecond(stack).Position, stack.Peek().Position, handlePoint.Position) > 0)
				Stack_1_tBBB21EE44D1282CA179A656956ED6B3BF9DD4B32 * L_77 = __this->get_stack_19();
				NullCheck(L_77);
				int32_t L_78;
				L_78 = Stack_1_get_Count_mED24A025DF95B8CE560C82EE94A2A96B990BA8B1_inline(L_77, /*hidden argument*/Stack_1_get_Count_mED24A025DF95B8CE560C82EE94A2A96B990BA8B1_RuntimeMethod_var);
				if ((((int32_t)L_78) <= ((int32_t)1)))
				{
					goto IL_022d;
				}
			}

IL_01fd:
			{
				Stack_1_tBBB21EE44D1282CA179A656956ED6B3BF9DD4B32 * L_79 = __this->get_stack_19();
				HandlePoint_t91E19093111D8B0BCA87EDF0F669B78522CA0164  L_80;
				L_80 = SqueezableBoxVisuals_PeekSecond_TisHandlePoint_t91E19093111D8B0BCA87EDF0F669B78522CA0164_mAF9C886EE8728BAE90CCD8911E2723C89309098F(__this, L_79, /*hidden argument*/SqueezableBoxVisuals_PeekSecond_TisHandlePoint_t91E19093111D8B0BCA87EDF0F669B78522CA0164_mAF9C886EE8728BAE90CCD8911E2723C89309098F_RuntimeMethod_var);
				Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_81 = L_80.get_Position_1();
				Stack_1_tBBB21EE44D1282CA179A656956ED6B3BF9DD4B32 * L_82 = __this->get_stack_19();
				NullCheck(L_82);
				HandlePoint_t91E19093111D8B0BCA87EDF0F669B78522CA0164  L_83;
				L_83 = Stack_1_Peek_m47284331780BBF375E430E115E8A9CFC5F4A6F8B(L_82, /*hidden argument*/Stack_1_Peek_m47284331780BBF375E430E115E8A9CFC5F4A6F8B_RuntimeMethod_var);
				Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_84 = L_83.get_Position_1();
				HandlePoint_t91E19093111D8B0BCA87EDF0F669B78522CA0164  L_85 = V_7;
				Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_86 = L_85.get_Position_1();
				IL2CPP_RUNTIME_CLASS_INIT(SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E_il2cpp_TypeInfo_var);
				int32_t L_87;
				L_87 = SqueezableBoxVisuals_TurnDirection_mC38DF3E8D30F77C4849540712403700162836ECB(L_81, L_84, L_86, /*hidden argument*/NULL);
				if ((((int32_t)L_87) > ((int32_t)0)))
				{
					goto IL_01cd;
				}
			}

IL_022d:
			{
				// stack.Push(handlePoint);
				Stack_1_tBBB21EE44D1282CA179A656956ED6B3BF9DD4B32 * L_88 = __this->get_stack_19();
				HandlePoint_t91E19093111D8B0BCA87EDF0F669B78522CA0164  L_89 = V_7;
				NullCheck(L_88);
				Stack_1_Push_mF803016D3C93704671BC1796E5A743AB9775A17B(L_88, L_89, /*hidden argument*/Stack_1_Push_mF803016D3C93704671BC1796E5A743AB9775A17B_RuntimeMethod_var);
			}

IL_023a:
			{
				// foreach (HandlePoint handlePoint in projectedHandles)
				bool L_90;
				L_90 = Enumerator_MoveNext_mB2700F1C088F51347988BAA8C41621826690C69D((Enumerator_t26258AA2194D0AA0FCFD867C989EBA242854BD2B *)(&V_6), /*hidden argument*/Enumerator_MoveNext_mB2700F1C088F51347988BAA8C41621826690C69D_RuntimeMethod_var);
				if (L_90)
				{
					goto IL_01c2;
				}
			}

IL_0246:
			{
				IL2CPP_LEAVE(0x256, FINALLY_0248);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0248;
		}

FINALLY_0248:
		{ // begin finally (depth: 2)
			Enumerator_Dispose_mAB7D3DF999558CD6245266C570CF75C29A43A1C3((Enumerator_t26258AA2194D0AA0FCFD867C989EBA242854BD2B *)(&V_6), /*hidden argument*/Enumerator_Dispose_mAB7D3DF999558CD6245266C570CF75C29A43A1C3_RuntimeMethod_var);
			IL2CPP_END_FINALLY(584)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(584)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x256, IL_0256)
		}

IL_0256:
		{
			// foreach (var handle in stack)
			Stack_1_tBBB21EE44D1282CA179A656956ED6B3BF9DD4B32 * L_91 = __this->get_stack_19();
			NullCheck(L_91);
			Enumerator_t9668CA47EB00CD68666FE902B91D9D7606DEF749  L_92;
			L_92 = Stack_1_GetEnumerator_mD2562D5378B6C16527028F59DB3C17101237168F(L_91, /*hidden argument*/Stack_1_GetEnumerator_mD2562D5378B6C16527028F59DB3C17101237168F_RuntimeMethod_var);
			V_8 = L_92;
		}

IL_0263:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0283;
			}

IL_0265:
			{
				// foreach (var handle in stack)
				HandlePoint_t91E19093111D8B0BCA87EDF0F669B78522CA0164  L_93;
				L_93 = Enumerator_get_Current_mB6F14CF1BA6F38DAD0F0C414B0CCF360059913B3((Enumerator_t9668CA47EB00CD68666FE902B91D9D7606DEF749 *)(&V_8), /*hidden argument*/Enumerator_get_Current_mB6F14CF1BA6F38DAD0F0C414B0CCF360059913B3_RuntimeMethod_var);
				// handle.Handle.IsOccluded = false;
				HandlePoint_t91E19093111D8B0BCA87EDF0F669B78522CA0164  L_94 = L_93;
				BoundsHandleInteractable_tF957D394A29234622B27304D99E5408B7971132B * L_95 = L_94.get_Handle_0();
				NullCheck(L_95);
				VirtActionInvoker1< bool >::Invoke(95 /* System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.BoundsHandleInteractable::set_IsOccluded(System.Boolean) */, L_95, (bool)0);
				// handle.Handle.IsFlattened = false;
				BoundsHandleInteractable_tF957D394A29234622B27304D99E5408B7971132B * L_96 = L_94.get_Handle_0();
				NullCheck(L_96);
				BoundsHandleInteractable_set_IsFlattened_m0F2319FFD9812EAA65CFBD8EDE6F079A6760E87A_inline(L_96, (bool)0, /*hidden argument*/NULL);
			}

IL_0283:
			{
				// foreach (var handle in stack)
				bool L_97;
				L_97 = Enumerator_MoveNext_mDA401CA344A1D0C2206FE99A7C68424742A2BD5E((Enumerator_t9668CA47EB00CD68666FE902B91D9D7606DEF749 *)(&V_8), /*hidden argument*/Enumerator_MoveNext_mDA401CA344A1D0C2206FE99A7C68424742A2BD5E_RuntimeMethod_var);
				if (L_97)
				{
					goto IL_0265;
				}
			}

IL_028c:
			{
				IL2CPP_LEAVE(0x29C, FINALLY_028e);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_028e;
		}

FINALLY_028e:
		{ // begin finally (depth: 2)
			Enumerator_Dispose_mB21A193101C88B730BE0B4DE81333C745F419D53((Enumerator_t9668CA47EB00CD68666FE902B91D9D7606DEF749 *)(&V_8), /*hidden argument*/Enumerator_Dispose_mB21A193101C88B730BE0B4DE81333C745F419D53_RuntimeMethod_var);
			IL2CPP_END_FINALLY(654)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(654)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x29C, IL_029c)
		}

IL_029c:
		{
			// foreach (var handle in handles)
			List_1_t4A4AF37F205259DAE4A1A36EF9F01A2931624C8F * L_98 = __this->get_handles_17();
			NullCheck(L_98);
			Enumerator_t696A52EF7570791EFC6606C9FCEF3360FFC644CD  L_99;
			L_99 = List_1_GetEnumerator_mA9B71CA5FE7A5192A5E7B174EEEC71A8996E8120(L_98, /*hidden argument*/List_1_GetEnumerator_mA9B71CA5FE7A5192A5E7B174EEEC71A8996E8120_RuntimeMethod_var);
			V_9 = L_99;
		}

IL_02a9:
		try
		{ // begin try (depth: 2)
			{
				goto IL_02b8;
			}

IL_02ab:
			{
				// foreach (var handle in handles)
				BoundsHandleInteractable_tF957D394A29234622B27304D99E5408B7971132B * L_100;
				L_100 = Enumerator_get_Current_mE89B20D8EC205D2D4623900FBE848AA1A37F0CAC_inline((Enumerator_t696A52EF7570791EFC6606C9FCEF3360FFC644CD *)(&V_9), /*hidden argument*/Enumerator_get_Current_mE89B20D8EC205D2D4623900FBE848AA1A37F0CAC_RuntimeMethod_var);
				// handle.IsFlattened = false;
				NullCheck(L_100);
				BoundsHandleInteractable_set_IsFlattened_m0F2319FFD9812EAA65CFBD8EDE6F079A6760E87A_inline(L_100, (bool)0, /*hidden argument*/NULL);
			}

IL_02b8:
			{
				// foreach (var handle in handles)
				bool L_101;
				L_101 = Enumerator_MoveNext_m51E7329BE651336CDE20A1ACC587870E066A58C2((Enumerator_t696A52EF7570791EFC6606C9FCEF3360FFC644CD *)(&V_9), /*hidden argument*/Enumerator_MoveNext_m51E7329BE651336CDE20A1ACC587870E066A58C2_RuntimeMethod_var);
				if (L_101)
				{
					goto IL_02ab;
				}
			}

IL_02c1:
			{
				IL2CPP_LEAVE(0x2DF, FINALLY_02c3);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_02c3;
		}

FINALLY_02c3:
		{ // begin finally (depth: 2)
			Enumerator_Dispose_mEB4642B6BC4D45AAE8E03221E90BCFA0F9BAFFF2((Enumerator_t696A52EF7570791EFC6606C9FCEF3360FFC644CD *)(&V_9), /*hidden argument*/Enumerator_Dispose_mEB4642B6BC4D45AAE8E03221E90BCFA0F9BAFFF2_RuntimeMethod_var);
			IL2CPP_END_FINALLY(707)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(707)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_END_CLEANUP(0x2DF, FINALLY_02d1);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_02d1;
	}

FINALLY_02d1:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(721)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(721)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x2DF, IL_02df)
	}

IL_02df:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals::HideFlattenedHandles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqueezableBoxVisuals_HideFlattenedHandles_mF29A8FB6179EC551A168C555C58D86F32E59EA87 (SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mEB4642B6BC4D45AAE8E03221E90BCFA0F9BAFFF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m51E7329BE651336CDE20A1ACC587870E066A58C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mE89B20D8EC205D2D4623900FBE848AA1A37F0CAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mA9B71CA5FE7A5192A5E7B174EEEC71A8996E8120_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Enumerator_t696A52EF7570791EFC6606C9FCEF3360FFC644CD  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// using (HideFlattenedHandlesPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E_StaticFields*)il2cpp_codegen_static_fields_for(SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E_il2cpp_TypeInfo_var))->get_HideFlattenedHandlesPerfMarker_28();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// bool flattenPointsAway = Vector3.Dot(handlesContainer.TransformVector(flattenVector),
			//                                     handlesContainer.position - Camera.main.transform.position) > 0;
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = __this->get_handlesContainer_8();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = __this->get_flattenVector_24();
			NullCheck(L_2);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
			L_4 = Transform_TransformVector_m7C5F87858E82A686A233D1866443ACAEA296AA2B(L_2, L_3, /*hidden argument*/NULL);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = __this->get_handlesContainer_8();
			NullCheck(L_5);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
			L_6 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_5, /*hidden argument*/NULL);
			Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_7;
			L_7 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
			NullCheck(L_7);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
			L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_7, /*hidden argument*/NULL);
			NullCheck(L_8);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
			L_9 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_8, /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
			L_10 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_6, L_9, /*hidden argument*/NULL);
			float L_11;
			L_11 = Vector3_Dot_mD19905B093915BA12852732EA27AA2DBE030D11F_inline(L_4, L_10, /*hidden argument*/NULL);
			// if (flattenPointsAway)
			if (!((((float)L_11) > ((float)(0.0f)))? 1 : 0))
			{
				goto IL_005d;
			}
		}

IL_004c:
		{
			// flattenVector = -flattenVector;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = __this->get_flattenVector_24();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
			L_13 = Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline(L_12, /*hidden argument*/NULL);
			__this->set_flattenVector_24(L_13);
		}

IL_005d:
		{
			// foreach (var handle in handles)
			List_1_t4A4AF37F205259DAE4A1A36EF9F01A2931624C8F * L_14 = __this->get_handles_17();
			NullCheck(L_14);
			Enumerator_t696A52EF7570791EFC6606C9FCEF3360FFC644CD  L_15;
			L_15 = List_1_GetEnumerator_mA9B71CA5FE7A5192A5E7B174EEEC71A8996E8120(L_14, /*hidden argument*/List_1_GetEnumerator_mA9B71CA5FE7A5192A5E7B174EEEC71A8996E8120_RuntimeMethod_var);
			V_2 = L_15;
		}

IL_0069:
		try
		{ // begin try (depth: 2)
			{
				goto IL_00c1;
			}

IL_006b:
			{
				// foreach (var handle in handles)
				BoundsHandleInteractable_tF957D394A29234622B27304D99E5408B7971132B * L_16;
				L_16 = Enumerator_get_Current_mE89B20D8EC205D2D4623900FBE848AA1A37F0CAC_inline((Enumerator_t696A52EF7570791EFC6606C9FCEF3360FFC644CD *)(&V_2), /*hidden argument*/Enumerator_get_Current_mE89B20D8EC205D2D4623900FBE848AA1A37F0CAC_RuntimeMethod_var);
				// Vector3 projection = Vector3.Project(handle.transform.localPosition, flattenVector);
				BoundsHandleInteractable_tF957D394A29234622B27304D99E5408B7971132B * L_17 = L_16;
				NullCheck(L_17);
				Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18;
				L_18 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_17, /*hidden argument*/NULL);
				NullCheck(L_18);
				Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
				L_19 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_18, /*hidden argument*/NULL);
				Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = __this->get_flattenVector_24();
				Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
				L_21 = Vector3_Project_m57D54B16F36E620C294F4B209CD4C8E46A58D1B6(L_19, L_20, /*hidden argument*/NULL);
				// handle.IsOccluded = !(Vector3.Dot(handle.transform.localPosition, flattenVector) > 0);
				BoundsHandleInteractable_tF957D394A29234622B27304D99E5408B7971132B * L_22 = L_17;
				BoundsHandleInteractable_tF957D394A29234622B27304D99E5408B7971132B * L_23 = L_22;
				NullCheck(L_23);
				Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24;
				L_24 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_23, /*hidden argument*/NULL);
				NullCheck(L_24);
				Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
				L_25 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_24, /*hidden argument*/NULL);
				Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26 = __this->get_flattenVector_24();
				float L_27;
				L_27 = Vector3_Dot_mD19905B093915BA12852732EA27AA2DBE030D11F_inline(L_25, L_26, /*hidden argument*/NULL);
				NullCheck(L_23);
				VirtActionInvoker1< bool >::Invoke(95 /* System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.BoundsHandleInteractable::set_IsOccluded(System.Boolean) */, L_23, (bool)((((int32_t)((((float)L_27) > ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0));
				// handle.IsFlattened = true;
				BoundsHandleInteractable_tF957D394A29234622B27304D99E5408B7971132B * L_28 = L_22;
				NullCheck(L_28);
				BoundsHandleInteractable_set_IsFlattened_m0F2319FFD9812EAA65CFBD8EDE6F079A6760E87A_inline(L_28, (bool)1, /*hidden argument*/NULL);
				// handle.FlattenVector = flattenVector;
				Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29 = __this->get_flattenVector_24();
				NullCheck(L_28);
				BoundsHandleInteractable_set_FlattenVector_m721D708E015A16A8AD37BC4885927F8B77451F3D_inline(L_28, L_29, /*hidden argument*/NULL);
			}

IL_00c1:
			{
				// foreach (var handle in handles)
				bool L_30;
				L_30 = Enumerator_MoveNext_m51E7329BE651336CDE20A1ACC587870E066A58C2((Enumerator_t696A52EF7570791EFC6606C9FCEF3360FFC644CD *)(&V_2), /*hidden argument*/Enumerator_MoveNext_m51E7329BE651336CDE20A1ACC587870E066A58C2_RuntimeMethod_var);
				if (L_30)
				{
					goto IL_006b;
				}
			}

IL_00ca:
			{
				IL2CPP_LEAVE(0xE8, FINALLY_00cc);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_00cc;
		}

FINALLY_00cc:
		{ // begin finally (depth: 2)
			Enumerator_Dispose_mEB4642B6BC4D45AAE8E03221E90BCFA0F9BAFFF2((Enumerator_t696A52EF7570791EFC6606C9FCEF3360FFC644CD *)(&V_2), /*hidden argument*/Enumerator_Dispose_mEB4642B6BC4D45AAE8E03221E90BCFA0F9BAFFF2_RuntimeMethod_var);
			IL2CPP_END_FINALLY(204)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(204)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_END_CLEANUP(0xE8, FINALLY_00da);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00da;
	}

FINALLY_00da:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(218)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(218)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xE8, IL_00e8)
	}

IL_00e8:
	{
		// }
		return;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals::TurnDirection(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SqueezableBoxVisuals_TurnDirection_mC38DF3E8D30F77C4849540712403700162836ECB (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___anchor0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a1, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// float det = a.x * (b.y - anchor.y) + b.x * (anchor.y - a.y) + anchor.x * (a.y - b.y);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a1;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___b2;
		float L_3 = L_2.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___anchor0;
		float L_5 = L_4.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___b2;
		float L_7 = L_6.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8 = ___anchor0;
		float L_9 = L_8.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_10 = ___a1;
		float L_11 = L_10.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_12 = ___anchor0;
		float L_13 = L_12.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_14 = ___a1;
		float L_15 = L_14.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_16 = ___b2;
		float L_17 = L_16.get_y_1();
		V_0 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_1, (float)((float)il2cpp_codegen_subtract((float)L_3, (float)L_5)))), (float)((float)il2cpp_codegen_multiply((float)L_7, (float)((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)))))), (float)((float)il2cpp_codegen_multiply((float)L_13, (float)((float)il2cpp_codegen_subtract((float)L_15, (float)L_17))))));
		// if (det < -Mathf.Epsilon)
		float L_18 = V_0;
		float L_19 = ((Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var))->get_Epsilon_0();
		if ((!(((float)L_18) < ((float)((-L_19))))))
		{
			goto IL_004a;
		}
	}
	{
		// return 1;
		return 1;
	}

IL_004a:
	{
		// else if (det > Mathf.Epsilon)
		float L_20 = V_0;
		float L_21 = ((Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var))->get_Epsilon_0();
		if ((!(((float)L_20) > ((float)L_21))))
		{
			goto IL_0054;
		}
	}
	{
		// return -1;
		return (-1);
	}

IL_0054:
	{
		// return Vector2.SqrMagnitude(a - anchor) < Vector2.SqrMagnitude(b - anchor) ? -1 : 1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_22 = ___a1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_23 = ___anchor0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_24;
		L_24 = Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline(L_22, L_23, /*hidden argument*/NULL);
		float L_25;
		L_25 = Vector2_SqrMagnitude_mC2F6F1199AD28D4518D74C7C0A9371722126102A(L_24, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_26 = ___b2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_27 = ___anchor0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_28;
		L_28 = Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline(L_26, L_27, /*hidden argument*/NULL);
		float L_29;
		L_29 = Vector2_SqrMagnitude_mC2F6F1199AD28D4518D74C7C0A9371722126102A(L_28, /*hidden argument*/NULL);
		if ((((float)L_25) < ((float)L_29)))
		{
			goto IL_0070;
		}
	}
	{
		return 1;
	}

IL_0070:
	{
		return (-1);
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqueezableBoxVisuals__ctor_mD8C3AE656A8E42E2E2D785C5A4ED9A677D30F445 (SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m4AC6B8038A2B837A12F960D994624CFFAF1F1E63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t5B44A6C65ABA13F93E4D6EC9EC79567BB087CC9B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1__ctor_mEC9656D31ED109BE06283F42A02BADD682FDB68F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_tBBB21EE44D1282CA179A656956ED6B3BF9DD4B32_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private float focusLerpTime = 0.01f;
		__this->set_focusLerpTime_10((0.00999999978f));
		// private float shrinkLerpTime = 0.0000000001f;
		__this->set_shrinkLerpTime_11((1.00000001E-10f));
		// private float activationLerpTime = 0.001f;
		__this->set_activationLerpTime_12((0.00100000005f));
		// private List<HandlePoint> projectedHandles = new List<HandlePoint>();
		List_1_t5B44A6C65ABA13F93E4D6EC9EC79567BB087CC9B * L_0 = (List_1_t5B44A6C65ABA13F93E4D6EC9EC79567BB087CC9B *)il2cpp_codegen_object_new(List_1_t5B44A6C65ABA13F93E4D6EC9EC79567BB087CC9B_il2cpp_TypeInfo_var);
		List_1__ctor_m4AC6B8038A2B837A12F960D994624CFFAF1F1E63(L_0, /*hidden argument*/List_1__ctor_m4AC6B8038A2B837A12F960D994624CFFAF1F1E63_RuntimeMethod_var);
		__this->set_projectedHandles_18(L_0);
		// private Stack<HandlePoint> stack = new Stack<HandlePoint>();
		Stack_1_tBBB21EE44D1282CA179A656956ED6B3BF9DD4B32 * L_1 = (Stack_1_tBBB21EE44D1282CA179A656956ED6B3BF9DD4B32 *)il2cpp_codegen_object_new(Stack_1_tBBB21EE44D1282CA179A656956ED6B3BF9DD4B32_il2cpp_TypeInfo_var);
		Stack_1__ctor_mEC9656D31ED109BE06283F42A02BADD682FDB68F(L_1, /*hidden argument*/Stack_1__ctor_mEC9656D31ED109BE06283F42A02BADD682FDB68F_RuntimeMethod_var);
		__this->set_stack_19(L_1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqueezableBoxVisuals__cctor_m52A6AEF4D5D5005BCF6F4D26D41B40F1BAD627FB (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Comparison_1__ctor_mAC4B4A4706C8AD9BD7C5EE4EA23D66F6AD73F781_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Comparison_1_t317DBD3E8FEC7893E5A036339DA3726A990AD813_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__54_0_mA39103D24E08340BDA03E05AE19202411A49A49E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t3ED49D580091D12AAF39D1B417F831F77CFFE5A1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4741E14BAD1CEA187512B70D290114C5BF9FCA56);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5ABB6FC69C3BB627523BDF509BFD8377A238734C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9BEC9AF53B4B6458569197244F0C5DADAD305015);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static float convexPadding = 0.001f;
		((SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E_StaticFields*)il2cpp_codegen_static_fields_for(SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E_il2cpp_TypeInfo_var))->set_convexPadding_22((0.00100000005f));
		// private static Comparison<HandlePoint> CompareHandlePoints = (a, b) => TurnDirection(comparisonAnchor, a.Position, b.Position);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t3ED49D580091D12AAF39D1B417F831F77CFFE5A1_il2cpp_TypeInfo_var);
		U3CU3Ec_t3ED49D580091D12AAF39D1B417F831F77CFFE5A1 * L_0 = ((U3CU3Ec_t3ED49D580091D12AAF39D1B417F831F77CFFE5A1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3ED49D580091D12AAF39D1B417F831F77CFFE5A1_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Comparison_1_t317DBD3E8FEC7893E5A036339DA3726A990AD813 * L_1 = (Comparison_1_t317DBD3E8FEC7893E5A036339DA3726A990AD813 *)il2cpp_codegen_object_new(Comparison_1_t317DBD3E8FEC7893E5A036339DA3726A990AD813_il2cpp_TypeInfo_var);
		Comparison_1__ctor_mAC4B4A4706C8AD9BD7C5EE4EA23D66F6AD73F781(L_1, L_0, (intptr_t)((intptr_t)U3CU3Ec_U3C_cctorU3Eb__54_0_mA39103D24E08340BDA03E05AE19202411A49A49E_RuntimeMethod_var), /*hidden argument*/Comparison_1__ctor_mAC4B4A4706C8AD9BD7C5EE4EA23D66F6AD73F781_RuntimeMethod_var);
		((SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E_StaticFields*)il2cpp_codegen_static_fields_for(SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E_il2cpp_TypeInfo_var))->set_CompareHandlePoints_25(L_1);
		// private static readonly ProfilerMarker UpdateHandlesPerfMarker =
		//     new ProfilerMarker("[MRTK] SqueezableBoxVisuals.UpdateHandles");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_2;
		memset((&L_2), 0, sizeof(L_2));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_2), _stringLiteral4741E14BAD1CEA187512B70D290114C5BF9FCA56, /*hidden argument*/NULL);
		((SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E_StaticFields*)il2cpp_codegen_static_fields_for(SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E_il2cpp_TypeInfo_var))->set_UpdateHandlesPerfMarker_26(L_2);
		// private static readonly ProfilerMarker ConvexHullPerfMarker =
		//     new ProfilerMarker("[MRTK] SqueezableBoxVisuals.ConvexHull");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_3;
		memset((&L_3), 0, sizeof(L_3));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_3), _stringLiteral5ABB6FC69C3BB627523BDF509BFD8377A238734C, /*hidden argument*/NULL);
		((SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E_StaticFields*)il2cpp_codegen_static_fields_for(SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E_il2cpp_TypeInfo_var))->set_ConvexHullPerfMarker_27(L_3);
		// private static readonly ProfilerMarker HideFlattenedHandlesPerfMarker =
		//     new ProfilerMarker("[MRTK] SqueezableBoxVisuals.HideFlattenedHandles");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_4;
		memset((&L_4), 0, sizeof(L_4));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_4), _stringLiteral9BEC9AF53B4B6458569197244F0C5DADAD305015, /*hidden argument*/NULL);
		((SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E_StaticFields*)il2cpp_codegen_static_fields_for(SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E_il2cpp_TypeInfo_var))->set_HideFlattenedHandlesPerfMarker_28(L_4);
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
// UnityEngine.LayerMask[] Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::get_MagneticSurfaces()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F* SurfaceMagnetism_get_MagneticSurfaces_mE11CDDFA1092D9788BC8132B53FB54AF80D4BCE9 (SurfaceMagnetism_t23AC1508708E4CA5D97B38DEDEDD8DB5FE6E6161 * __this, const RuntimeMethod* method)
{
	{
		// get => magneticSurfaces;
		LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F* L_0 = __this->get_magneticSurfaces_14();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::set_MagneticSurfaces(UnityEngine.LayerMask[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_MagneticSurfaces_m6C8D89E77190E73CDFB09CD99875C743D27FF034 (SurfaceMagnetism_t23AC1508708E4CA5D97B38DEDEDD8DB5FE6E6161 * __this, LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F* ___value0, const RuntimeMethod* method)
{
	{
		// set => magneticSurfaces = value;
		LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F* L_0 = ___value0;
		__this->set_magneticSurfaces_14(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::get_MaxRaycastDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SurfaceMagnetism_get_MaxRaycastDistance_mBA7F9E6B65198F134EAC39AA7562C5FB01A3C25F (SurfaceMagnetism_t23AC1508708E4CA5D97B38DEDEDD8DB5FE6E6161 * __this, const RuntimeMethod* method)
{
	{
		// get => maxRaycastDistance;
		float L_0 = __this->get_maxRaycastDistance_15();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::set_MaxRaycastDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_MaxRaycastDistance_m22F17023252B266B8D2B5DDA63FB917628AA4378 (SurfaceMagnetism_t23AC1508708E4CA5D97B38DEDEDD8DB5FE6E6161 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => maxRaycastDistance = value;
		float L_0 = ___value0;
		__this->set_maxRaycastDistance_15(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::get_ClosestDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SurfaceMagnetism_get_ClosestDistance_mFDDEF651EADAE24358D32CA3A018D570D8332FF0 (SurfaceMagnetism_t23AC1508708E4CA5D97B38DEDEDD8DB5FE6E6161 * __this, const RuntimeMethod* method)
{
	{
		// get => closestDistance;
		float L_0 = __this->get_closestDistance_16();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::set_ClosestDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_ClosestDistance_m92C9C2AE55169D7CBBB4D055F9B7858BAE004C87 (SurfaceMagnetism_t23AC1508708E4CA5D97B38DEDEDD8DB5FE6E6161 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => closestDistance = value;
		float L_0 = ___value0;
		__this->set_closestDistance_16(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::get_SurfaceNormalOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SurfaceMagnetism_get_SurfaceNormalOffset_m3419DFB2CBFFABB656D044F1D7C4DFE6B376CA1F (SurfaceMagnetism_t23AC1508708E4CA5D97B38DEDEDD8DB5FE6E6161 * __this, const RuntimeMethod* method)
{
	{
		// get => surfaceNormalOffset;
		float L_0 = __this->get_surfaceNormalOffset_17();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::set_SurfaceNormalOffset(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_SurfaceNormalOffset_m6D56FB3D329CBA32CBF901C8FF2B4494F1B4BDF4 (SurfaceMagnetism_t23AC1508708E4CA5D97B38DEDEDD8DB5FE6E6161 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => surfaceNormalOffset = value;
		float L_0 = ___value0;
		__this->set_surfaceNormalOffset_17(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::get_SurfaceRayOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SurfaceMagnetism_get_SurfaceRayOffset_mC613315F7DA1A099FBD8A95DA5B85652276ABE95 (SurfaceMagnetism_t23AC1508708E4CA5D97B38DEDEDD8DB5FE6E6161 * __this, const RuntimeMethod* method)
{
	{
		// get => surfaceRayOffset;
		float L_0 = __this->get_surfaceRayOffset_18();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::set_SurfaceRayOffset(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_SurfaceRayOffset_mAF86731DB8A8EE0177B46398528AFFA73E0763CD (SurfaceMagnetism_t23AC1508708E4CA5D97B38DEDEDD8DB5FE6E6161 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => surfaceRayOffset = value;
		float L_0 = ___value0;
		__this->set_surfaceRayOffset_18(L_0);
		return;
	}
}
// Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism/SceneQueryType Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::get_RaycastMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SurfaceMagnetism_get_RaycastMode_m4938850E9FAA66EB4EE6B5F1FEC27446ADFCC1F6 (SurfaceMagnetism_t23AC1508708E4CA5D97B38DEDEDD8DB5FE6E6161 * __this, const RuntimeMethod* method)
{
	{
		// get => raycastMode;
		int32_t L_0 = __this->get_raycastMode_19();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::set_RaycastMode(Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism/SceneQueryType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_RaycastMode_m077E655B54162720C6C446752A463C5ACCA1122C (SurfaceMagnetism_t23AC1508708E4CA5D97B38DEDEDD8DB5FE6E6161 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set => raycastMode = value;
		int32_t L_0 = ___value0;
		__this->set_raycastMode_19(L_0);
		return;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::get_BoxRaysPerEdge()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SurfaceMagnetism_get_BoxRaysPerEdge_m502726B837B964D1ADA4C893047A97C22F1EC46D (SurfaceMagnetism_t23AC1508708E4CA5D97B38DEDEDD8DB5FE6E6161 * __this, const RuntimeMethod* method)
{
	{
		// get => boxRaysPerEdge;
		int32_t L_0 = __this->get_boxRaysPerEdge_20();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::set_BoxRaysPerEdge(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_BoxRaysPerEdge_m52DB9C374B463441B4CD31691FD5EB2BABFB6C74 (SurfaceMagnetism_t23AC1508708E4CA5D97B38DEDEDD8DB5FE6E6161 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set => boxRaysPerEdge = value;
		int32_t L_0 = ___value0;
		__this->set_boxRaysPerEdge_20(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::get_OrthographicBoxCast()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SurfaceMagnetism_get_OrthographicBoxCast_mD6B5D5A4E6401393297642B0BC35B6FF16DE2FCB (SurfaceMagnetism_t23AC1508708E4CA5D97B38DEDEDD8DB5FE6E6161 * __this, const RuntimeMethod* method)
{
	{
		// get => orthographicBoxCast;
		bool L_0 = __this->get_orthographicBoxCast_21();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::set_OrthographicBoxCast(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_OrthographicBoxCast_mD09EC0BE53230346528922FBC2E66CA5CBA5FCB7 (SurfaceMagnetism_t23AC1508708E4CA5D97B38DEDEDD8DB5FE6E6161 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set => orthographicBoxCast = value;
		bool L_0 = ___value0;
		__this->set_orthographicBoxCast_21(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::get_MaximumNormalVariance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SurfaceMagnetism_get_MaximumNormalVariance_m9003B64B67865AC701F46D0274B8B2E426C9C764 (SurfaceMagnetism_t23AC1508708E4CA5D97B38DEDEDD8DB5FE6E6161 * __this, const RuntimeMethod* method)
{
	{
		// get => maximumNormalVariance;
		float L_0 = __this->get_maximumNormalVariance_22();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::set_MaximumNormalVariance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_MaximumNormalVariance_m2AE440E592F5577BA0F42459FFA796C10CAC98CE (SurfaceMagnetism_t23AC1508708E4CA5D97B38DEDEDD8DB5FE6E6161 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => maximumNormalVariance = value;
		float L_0 = ___value0;
		__this->set_maximumNormalVariance_22(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::get_SphereSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SurfaceMagnetism_get_SphereSize_m54898F4A601AA3A6FB5159D1583E0CC723309DD6 (SurfaceMagnetism_t23AC1508708E4CA5D97B38DEDEDD8DB5FE6E6161 * __this, const RuntimeMethod* method)
{
	{
		// get => sphereSize;
		float L_0 = __this->get_sphereSize_23();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::set_SphereSize(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_SphereSize_m524B6B93173C7DED8D34B701E1F320894A268F58 (SurfaceMagnetism_t23AC1508708E4CA5D97B38DEDEDD8DB5FE6E6161 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => sphereSize = value;
		float L_0 = ___value0;
		__this->set_sphereSize_23(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::get_VolumeCastSizeOverride()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SurfaceMagnetism_get_VolumeCastSizeOverride_mB7926BBD769E2CD439C1517E4210E829A4B5A303 (SurfaceMagnetism_t23AC1508708E4CA5D97B38DEDEDD8DB5FE6E6161 * __this, const RuntimeMethod* method)
{
	{
		// get => volumeCastSizeOverride;
		float L_0 = __this->get_volumeCastSizeOverride_24();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::set_VolumeCastSizeOverride(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_VolumeCastSizeOverride_m46B6E23719B45AD4006800FE3482A1290461F45E (SurfaceMagnetism_t23AC1508708E4CA5D97B38DEDEDD8DB5FE6E6161 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => volumeCastSizeOverride = value;
		float L_0 = ___value0;
		__this->set_volumeCastSizeOverride_24(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::get_UseLinkedAltScaleOverride()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SurfaceMagnetism_get_UseLinkedAltScaleOverride_m5869659FF4D8FFAC78248323D38C83A7D1528A47 (SurfaceMagnetism_t23AC1508708E4CA5D97B38DEDEDD8DB5FE6E6161 * __this, const RuntimeMethod* method)
{
	{
		// get => useLinkedAltScaleOverride;
		bool L_0 = __this->get_useLinkedAltScaleOverride_25();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::set_UseLinkedAltScaleOverride(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_UseLinkedAltScaleOverride_mE69A3AA03DBB6A6E6544A583F13AD7A2A3E082A0 (SurfaceMagnetism_t23AC1508708E4CA5D97B38DEDEDD8DB5FE6E6161 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set => useLinkedAltScaleOverride = value;
		bool L_0 = ___value0;
		__this->set_useLinkedAltScaleOverride_25(L_0);
		return;
	}
}
// Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism/RaycastDirectionMode Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::get_CurrentRaycastDirectionMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SurfaceMagnetism_get_CurrentRaycastDirectionMode_mBD74605FDAAF6D1EE02C078E421A686BD5371600 (SurfaceMagnetism_t23AC1508708E4CA5D97B38DEDEDD8DB5FE6E6161 * __this, const RuntimeMethod* method)
{
	{
		// get => currentRaycastDirectionMode;
		int32_t L_0 = __this->get_currentRaycastDirectionMode_26();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::set_CurrentRaycastDirectionMode(Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism/RaycastDirectionMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_CurrentRaycastDirectionMode_mDC09B933203AA662EA6072C8DF64F15EE7743DFA (SurfaceMagnetism_t23AC1508708E4CA5D97B38DEDEDD8DB5FE6E6161 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set => currentRaycastDirectionMode = value;
		int32_t L_0 = ___value0;
		__this->set_currentRaycastDirectionMode_26(L_0);
		return;
	}
}
// Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism/OrientationMode Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::get_CurrentOrientationMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SurfaceMagnetism_get_CurrentOrientationMode_m38F671EC6081B269DBEC0AA089D46365D1DC3ADF (SurfaceMagnetism_t23AC1508708E4CA5D97B38DEDEDD8DB5FE6E6161 * __this, const RuntimeMethod* method)
{
	{
		// get => orientationMode;
		int32_t L_0 = __this->get_orientationMode_27();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::set_CurrentOrientationMode(Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism/OrientationMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_CurrentOrientationMode_mE53A42D81A02DBB1ACE8A394FBF1A167511CE053 (SurfaceMagnetism_t23AC1508708E4CA5D97B38DEDEDD8DB5FE6E6161 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set => orientationMode = value;
		int32_t L_0 = ___value0;
		__this->set_orientationMode_27(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::get_OrientationBlend()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SurfaceMagnetism_get_OrientationBlend_m281CDC3301A062B9FD2BBB82AB5BED7BF656956D (SurfaceMagnetism_t23AC1508708E4CA5D97B38DEDEDD8DB5FE6E6161 * __this, const RuntimeMethod* method)
{
	{
		// get => orientationBlend;
		float L_0 = __this->get_orientationBlend_28();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::set_OrientationBlend(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_OrientationBlend_m7BB53D4CD227FC54C9C7D4509B412B2F967532D3 (SurfaceMagnetism_t23AC1508708E4CA5D97B38DEDEDD8DB5FE6E6161 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => orientationBlend = value;
		float L_0 = ___value0;
		__this->set_orientationBlend_28(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::get_KeepOrientationVertical()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SurfaceMagnetism_get_KeepOrientationVertical_m092E225F8CD9B5C6A68EA6B9592FCCA7B4907F89 (SurfaceMagnetism_t23AC1508708E4CA5D97B38DEDEDD8DB5FE6E6161 * __this, const RuntimeMethod* method)
{
	{
		// get => keepOrientationVertical;
		bool L_0 = __this->get_keepOrientationVertical_29();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::set_KeepOrientationVertical(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_KeepOrientationVertical_mD6D2037AE7664F229070AF978B3B48896D3531AE (SurfaceMagnetism_t23AC1508708E4CA5D97B38DEDEDD8DB5FE6E6161 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set => keepOrientationVertical = value;
		bool L_0 = ___value0;
		__this->set_keepOrientationVertical_29(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::get_DebugEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SurfaceMagnetism_get_DebugEnabled_m140F20D05A7F8260927FFB5CE8ED3E6ADA1B1DCA (SurfaceMagnetism_t23AC1508708E4CA5D97B38DEDEDD8DB5FE6E6161 * __this, const RuntimeMethod* method)
{
	{
		// get => debugEnabled;
		bool L_0 = __this->get_debugEnabled_30();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::set_DebugEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_DebugEnabled_m8511670F18E0697D89F8EB22F8A541EB587BBDBB (SurfaceMagnetism_t23AC1508708E4CA5D97B38DEDEDD8DB5FE6E6161 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set => debugEnabled = value;
		bool L_0 = ___value0;
		__this->set_debugEnabled_30(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::get_OnSurface()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SurfaceMagnetism_get_OnSurface_m31311A1A3DBA940622E39BB8CABD8933F8128976 (SurfaceMagnetism_t23AC1508708E4CA5D97B38DEDEDD8DB5FE6E6161 * __this, const RuntimeMethod* method)
{
	{
		// public bool OnSurface { get; private set; }
		bool L_0 = __this->get_U3COnSurfaceU3Ek__BackingField_31();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::set_OnSurface(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_OnSurface_m7D14342CE400FC2C7B2A2ECDF33D97F56B778A82 (SurfaceMagnetism_t23AC1508708E4CA5D97B38DEDEDD8DB5FE6E6161 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool OnSurface { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3COnSurfaceU3Ek__BackingField_31(L_0);
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::get_RaycastOrigin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  SurfaceMagnetism_get_RaycastOrigin_mFACC33A0D661E83E49C1E072B24A4A66DF7AE1D3 (SurfaceMagnetism_t23AC1508708E4CA5D97B38DEDEDD8DB5FE6E6161 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Vector3 RaycastOrigin => SolverHandler.TransformTarget == null ? Vector3.zero : SolverHandler.TransformTarget.position;
		SolverHandler_t59B1037EA04BC8C41E82EAC219138D9DE50F7AC2 * L_0 = ((Solver_tA73899FFFB9BC2103F0BC1C9BCF601856A5BB455 *)__this)->get_SolverHandler_13();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = SolverHandler_get_TransformTarget_mABAE412BA27F8E9535EB763689E4E6F668E1A5F6(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		SolverHandler_t59B1037EA04BC8C41E82EAC219138D9DE50F7AC2 * L_3 = ((Solver_tA73899FFFB9BC2103F0BC1C9BCF601856A5BB455 *)__this)->get_SolverHandler_13();
		NullCheck(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = SolverHandler_get_TransformTarget_mABAE412BA27F8E9535EB763689E4E6F668E1A5F6(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_0024:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::get_RaycastEndPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  SurfaceMagnetism_get_RaycastEndPoint_m925ABD8387936B1E7D6304AD9C3E6F6C358E8652 (SurfaceMagnetism_t23AC1508708E4CA5D97B38DEDEDD8DB5FE6E6161 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// Vector3 origin = RaycastOrigin;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = SurfaceMagnetism_get_RaycastOrigin_mFACC33A0D661E83E49C1E072B24A4A66DF7AE1D3(__this, /*hidden argument*/NULL);
		// Vector3 endPoint = Vector3.forward;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90(/*hidden argument*/NULL);
		V_0 = L_1;
		// switch (CurrentRaycastDirectionMode)
		int32_t L_2;
		L_2 = SurfaceMagnetism_get_CurrentRaycastDirectionMode_mBD74605FDAAF6D1EE02C078E421A686BD5371600_inline(__this, /*hidden argument*/NULL);
		V_1 = L_2;
		int32_t L_3 = V_1;
		switch (L_3)
		{
			case 0:
			{
				goto IL_0028;
			}
			case 1:
			{
				goto IL_0071;
			}
			case 2:
			{
				goto IL_007f;
			}
		}
	}
	{
		goto IL_008b;
	}

IL_0028:
	{
		// if (SolverHandler != null && SolverHandler.TransformTarget != null)
		SolverHandler_t59B1037EA04BC8C41E82EAC219138D9DE50F7AC2 * L_4 = ((Solver_tA73899FFFB9BC2103F0BC1C9BCF601856A5BB455 *)__this)->get_SolverHandler_13();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_008b;
		}
	}
	{
		SolverHandler_t59B1037EA04BC8C41E82EAC219138D9DE50F7AC2 * L_6 = ((Solver_tA73899FFFB9BC2103F0BC1C9BCF601856A5BB455 *)__this)->get_SolverHandler_13();
		NullCheck(L_6);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = SolverHandler_get_TransformTarget_mABAE412BA27F8E9535EB763689E4E6F668E1A5F6(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_7, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_008b;
		}
	}
	{
		// endPoint = SolverHandler.TransformTarget.position + SolverHandler.TransformTarget.forward;
		SolverHandler_t59B1037EA04BC8C41E82EAC219138D9DE50F7AC2 * L_9 = ((Solver_tA73899FFFB9BC2103F0BC1C9BCF601856A5BB455 *)__this)->get_SolverHandler_13();
		NullCheck(L_9);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = SolverHandler_get_TransformTarget_mABAE412BA27F8E9535EB763689E4E6F668E1A5F6(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_10, /*hidden argument*/NULL);
		SolverHandler_t59B1037EA04BC8C41E82EAC219138D9DE50F7AC2 * L_12 = ((Solver_tA73899FFFB9BC2103F0BC1C9BCF601856A5BB455 *)__this)->get_SolverHandler_13();
		NullCheck(L_12);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = SolverHandler_get_TransformTarget_mABAE412BA27F8E9535EB763689E4E6F668E1A5F6(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_13, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_11, L_14, /*hidden argument*/NULL);
		V_0 = L_15;
		// break;
		goto IL_008b;
	}

IL_0071:
	{
		// endPoint = transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_16);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_16, /*hidden argument*/NULL);
		V_0 = L_17;
		// break;
		goto IL_008b;
	}

IL_007f:
	{
		// endPoint = SolverHandler.GoalPosition;
		SolverHandler_t59B1037EA04BC8C41E82EAC219138D9DE50F7AC2 * L_18 = ((Solver_tA73899FFFB9BC2103F0BC1C9BCF601856A5BB455 *)__this)->get_SolverHandler_13();
		NullCheck(L_18);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = SolverHandler_get_GoalPosition_mB7BCC11B22CDDA506695DD37C65D28E427C7AE6C_inline(L_18, /*hidden argument*/NULL);
		V_0 = L_19;
	}

IL_008b:
	{
		// return endPoint;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = V_0;
		return L_20;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::get_RaycastDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  SurfaceMagnetism_get_RaycastDirection_mE762DFA52AF654AFF8935B15D8DF947C7D22B9E0 (SurfaceMagnetism_t23AC1508708E4CA5D97B38DEDEDD8DB5FE6E6161 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector3 direction = Vector3.forward;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90(/*hidden argument*/NULL);
		V_0 = L_0;
		// if (CurrentRaycastDirectionMode == RaycastDirectionMode.TrackedTargetForward)
		int32_t L_1;
		L_1 = SurfaceMagnetism_get_CurrentRaycastDirectionMode_mBD74605FDAAF6D1EE02C078E421A686BD5371600_inline(__this, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0034;
		}
	}
	{
		// if (SolverHandler.TransformTarget != null)
		SolverHandler_t59B1037EA04BC8C41E82EAC219138D9DE50F7AC2 * L_2 = ((Solver_tA73899FFFB9BC2103F0BC1C9BCF601856A5BB455 *)__this)->get_SolverHandler_13();
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = SolverHandler_get_TransformTarget_mABAE412BA27F8E9535EB763689E4E6F668E1A5F6(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_004e;
		}
	}
	{
		// direction = SolverHandler.TransformTarget.forward;
		SolverHandler_t59B1037EA04BC8C41E82EAC219138D9DE50F7AC2 * L_5 = ((Solver_tA73899FFFB9BC2103F0BC1C9BCF601856A5BB455 *)__this)->get_SolverHandler_13();
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = SolverHandler_get_TransformTarget_mABAE412BA27F8E9535EB763689E4E6F668E1A5F6(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		// }
		goto IL_004e;
	}

IL_0034:
	{
		// direction = (RaycastEndPoint - RaycastOrigin).normalized;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = SurfaceMagnetism_get_RaycastEndPoint_m925ABD8387936B1E7D6304AD9C3E6F6C358E8652(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = SurfaceMagnetism_get_RaycastOrigin_mFACC33A0D661E83E49C1E072B24A4A66DF7AE1D3(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_8, L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_11;
	}

IL_004e:
	{
		// return direction;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = V_0;
		return L_12;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::get_ScaleOverride()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SurfaceMagnetism_get_ScaleOverride_mE47020E4F78C27B002E30664805CB4B2297347FE (SurfaceMagnetism_t23AC1508708E4CA5D97B38DEDEDD8DB5FE6E6161 * __this, const RuntimeMethod* method)
{
	Vector3Smoothed_tD20A5F686B12E3C524D8C369DF09A20DAAEDB3D3  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// private float ScaleOverride => useLinkedAltScaleOverride ? SolverHandler.AltScale.Current.magnitude : volumeCastSizeOverride;
		bool L_0 = __this->get_useLinkedAltScaleOverride_25();
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		float L_1 = __this->get_volumeCastSizeOverride_24();
		return L_1;
	}

IL_000f:
	{
		SolverHandler_t59B1037EA04BC8C41E82EAC219138D9DE50F7AC2 * L_2 = ((Solver_tA73899FFFB9BC2103F0BC1C9BCF601856A5BB455 *)__this)->get_SolverHandler_13();
		NullCheck(L_2);
		Vector3Smoothed_tD20A5F686B12E3C524D8C369DF09A20DAAEDB3D3  L_3;
		L_3 = SolverHandler_get_AltScale_mA6848E5643047DABE31D22D0CA5C1E5DEB2B0FB6_inline(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3Smoothed_get_Current_m837C12DCFC8C6A4280D20705736250D8B023EB0B_inline((Vector3Smoothed_tD20A5F686B12E3C524D8C369DF09A20DAAEDB3D3 *)(&V_0), /*hidden argument*/NULL);
		V_1 = L_4;
		float L_5;
		L_5 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_1), /*hidden argument*/NULL);
		return L_5;
	}
}
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::CalculateMagnetismOrientation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  SurfaceMagnetism_CalculateMagnetismOrientation_m912B6945F1A72F2D8A999C7A7B90224D0A7140C3 (SurfaceMagnetism_t23AC1508708E4CA5D97B38DEDEDD8DB5FE6E6161 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___direction0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___surfaceNormal1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	{
		// Vector3 currentUpVector = WorkingRotation * Vector3.up;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_0;
		L_0 = Solver_get_WorkingRotation_mAFD9085351C0E54099C30325B611CD1730AD0058(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// Quaternion trackedReferenceRotation = Quaternion.LookRotation(-direction, currentUpVector);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___direction0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline(L_3, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_6;
		L_6 = Quaternion_LookRotation_m8A7DB5BDBC361586191AB67ACF857F46160EE3F1(L_4, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		// Quaternion surfaceReferenceRotation = Quaternion.LookRotation(-surfaceNormal, currentUpVector);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = ___surfaceNormal1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline(L_7, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = V_0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_10;
		L_10 = Quaternion_LookRotation_m8A7DB5BDBC361586191AB67ACF857F46160EE3F1(L_8, L_9, /*hidden argument*/NULL);
		V_2 = L_10;
		// if (KeepOrientationVertical)
		bool L_11;
		L_11 = SurfaceMagnetism_get_KeepOrientationVertical_m092E225F8CD9B5C6A68EA6B9592FCCA7B4907F89_inline(__this, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_006b;
		}
	}
	{
		// Vector3 trackedReferenceUp = trackedReferenceRotation * Vector3.up;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_12 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D(L_12, L_13, /*hidden argument*/NULL);
		// trackedReferenceRotation = Quaternion.FromToRotation(trackedReferenceUp, Vector3.up) * trackedReferenceRotation;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_16;
		L_16 = Quaternion_FromToRotation_mD0EBB9993FC7C6A45724D0365B09F11F1CEADB80(L_14, L_15, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_17 = V_1;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_18;
		L_18 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_16, L_17, /*hidden argument*/NULL);
		V_1 = L_18;
		// Vector3 surfaceReferenceUp = surfaceReferenceRotation * Vector3.up;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_19 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D(L_19, L_20, /*hidden argument*/NULL);
		// surfaceReferenceRotation = Quaternion.FromToRotation(surfaceReferenceUp, Vector3.up) * surfaceReferenceRotation;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		L_22 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_23;
		L_23 = Quaternion_FromToRotation_mD0EBB9993FC7C6A45724D0365B09F11F1CEADB80(L_21, L_22, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_24 = V_2;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_25;
		L_25 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_23, L_24, /*hidden argument*/NULL);
		V_2 = L_25;
	}

IL_006b:
	{
		// switch (CurrentOrientationMode)
		int32_t L_26;
		L_26 = SurfaceMagnetism_get_CurrentOrientationMode_m38F671EC6081B269DBEC0AA089D46365D1DC3ADF_inline(__this, /*hidden argument*/NULL);
		V_3 = L_26;
		int32_t L_27 = V_3;
		switch (L_27)
		{
			case 0:
			{
				goto IL_008e;
			}
			case 1:
			{
				goto IL_009a;
			}
			case 2:
			{
				goto IL_009c;
			}
			case 3:
			{
				goto IL_009e;
			}
			case 4:
			{
				goto IL_00ac;
			}
		}
	}
	{
		goto IL_00b8;
	}

IL_008e:
	{
		// return SolverHandler.GoalRotation;
		SolverHandler_t59B1037EA04BC8C41E82EAC219138D9DE50F7AC2 * L_28 = ((Solver_tA73899FFFB9BC2103F0BC1C9BCF601856A5BB455 *)__this)->get_SolverHandler_13();
		NullCheck(L_28);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_29;
		L_29 = SolverHandler_get_GoalRotation_m0DA74B5AF6CAA31239A28FC657BC99BA69648DB7_inline(L_28, /*hidden argument*/NULL);
		return L_29;
	}

IL_009a:
	{
		// return trackedReferenceRotation;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_30 = V_1;
		return L_30;
	}

IL_009c:
	{
		// return surfaceReferenceRotation;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_31 = V_2;
		return L_31;
	}

IL_009e:
	{
		// return Quaternion.Slerp(trackedReferenceRotation, surfaceReferenceRotation, orientationBlend);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_32 = V_1;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_33 = V_2;
		float L_34 = __this->get_orientationBlend_28();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_35;
		L_35 = Quaternion_Slerp_m6D2BD18286254E28D2288B51962EC71F85C7B5C8(L_32, L_33, L_34, /*hidden argument*/NULL);
		return L_35;
	}

IL_00ac:
	{
		// return Quaternion.LookRotation(direction, Vector3.up);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36 = ___direction0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37;
		L_37 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_38;
		L_38 = Quaternion_LookRotation_m8A7DB5BDBC361586191AB67ACF857F46160EE3F1(L_36, L_37, /*hidden argument*/NULL);
		return L_38;
	}

IL_00b8:
	{
		// return Quaternion.identity;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_39;
		L_39 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		return L_39;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::SolverUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_SolverUpdate_m6CA1B08A8BDCEBFD81B6899576E42292A5E43209 (SurfaceMagnetism_t23AC1508708E4CA5D97B38DEDEDD8DB5FE6E6161 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SurfaceMagnetism_t23AC1508708E4CA5D97B38DEDEDD8DB5FE6E6161_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 5> __leave_targets;
	{
		// using (SolverUpdatePerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(SurfaceMagnetism_t23AC1508708E4CA5D97B38DEDEDD8DB5FE6E6161_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((SurfaceMagnetism_t23AC1508708E4CA5D97B38DEDEDD8DB5FE6E6161_StaticFields*)il2cpp_codegen_static_fields_for(SurfaceMagnetism_t23AC1508708E4CA5D97B38DEDEDD8DB5FE6E6161_il2cpp_TypeInfo_var))->get_SolverUpdatePerfMarker_35();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// GoalPosition = WorkingPosition;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
			L_2 = Solver_get_WorkingPosition_mEE82CEE51332DA2285AFB29A3D4B36B3B41F93A3(__this, /*hidden argument*/NULL);
			Solver_set_GoalPosition_m55CE128A1EAFAE0BC3FBFB0E59B5F1B1B4A492C7(__this, L_2, /*hidden argument*/NULL);
			// GoalRotation = WorkingRotation;
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_3;
			L_3 = Solver_get_WorkingRotation_mAFD9085351C0E54099C30325B611CD1730AD0058(__this, /*hidden argument*/NULL);
			Solver_set_GoalRotation_mD7FBFA12D17ADCF284FC97A229604C8212343075(__this, L_3, /*hidden argument*/NULL);
			// Vector3 origin = RaycastOrigin;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
			L_4 = SurfaceMagnetism_get_RaycastOrigin_mFACC33A0D661E83E49C1E072B24A4A66DF7AE1D3(__this, /*hidden argument*/NULL);
			V_2 = L_4;
			// Vector3 endpoint = RaycastEndPoint;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
			L_5 = SurfaceMagnetism_get_RaycastEndPoint_m925ABD8387936B1E7D6304AD9C3E6F6C358E8652(__this, /*hidden argument*/NULL);
			V_3 = L_5;
			// currentRayStep.UpdateRayStep(ref origin, ref endpoint);
			RayStep_t68267BADF85DF3BC948899D189E94EC8C2D87C6F * L_6 = __this->get_address_of_currentRayStep_33();
			RayStep_UpdateRayStep_m2098727F6DCBB3B719DBB954951E5A5F14CB0D29((RayStep_t68267BADF85DF3BC948899D189E94EC8C2D87C6F *)L_6, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_2), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_3), /*hidden argument*/NULL);
			// if (currentRayStep.Direction == Vector3.zero)
			RayStep_t68267BADF85DF3BC948899D189E94EC8C2D87C6F * L_7 = __this->get_address_of_currentRayStep_33();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
			L_8 = RayStep_get_Direction_m7D6703B9C3DC0D10655A7288A76BD7F029A0A9BA_inline((RayStep_t68267BADF85DF3BC948899D189E94EC8C2D87C6F *)L_7, /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
			L_9 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
			bool L_10;
			L_10 = Vector3_op_Equality_m8A98C7F38641110A2F90445EF8E98ECE14B08296(L_8, L_9, /*hidden argument*/NULL);
			if (!L_10)
			{
				goto IL_005c;
			}
		}

IL_005a:
		{
			// return;
			IL2CPP_LEAVE(0xD9, FINALLY_00cb);
		}

IL_005c:
		{
			// if (DebugEnabled)
			bool L_11;
			L_11 = SurfaceMagnetism_get_DebugEnabled_m140F20D05A7F8260927FFB5CE8ED3E6ADA1B1DCA_inline(__this, /*hidden argument*/NULL);
			if (!L_11)
			{
				goto IL_0084;
			}
		}

IL_0064:
		{
			// Debug.DrawLine(currentRayStep.Origin, currentRayStep.Terminus, Color.magenta);
			RayStep_t68267BADF85DF3BC948899D189E94EC8C2D87C6F * L_12 = __this->get_address_of_currentRayStep_33();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
			L_13 = RayStep_get_Origin_m4A2FBDEDA6BC36DC659AE2760E40F42128104F6C_inline((RayStep_t68267BADF85DF3BC948899D189E94EC8C2D87C6F *)L_12, /*hidden argument*/NULL);
			RayStep_t68267BADF85DF3BC948899D189E94EC8C2D87C6F * L_14 = __this->get_address_of_currentRayStep_33();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
			L_15 = RayStep_get_Terminus_mBE0B27EF305C6079E6C8C6B7572C78630E332B7E_inline((RayStep_t68267BADF85DF3BC948899D189E94EC8C2D87C6F *)L_14, /*hidden argument*/NULL);
			Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_16;
			L_16 = Color_get_magenta_m46B928AB3005B062069E5DF9CB271E1373A29FE0(/*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_DrawLine_m83E9014DE042AAFE0B97A66E2A23F701FFDBB8A3(L_13, L_15, L_16, /*hidden argument*/NULL);
		}

IL_0084:
		{
			// switch (RaycastMode)
			int32_t L_17;
			L_17 = SurfaceMagnetism_get_RaycastMode_m4938850E9FAA66EB4EE6B5F1FEC27446ADFCC1F6_inline(__this, /*hidden argument*/NULL);
			V_4 = L_17;
			int32_t L_18 = V_4;
			switch (L_18)
			{
				case 0:
				{
					goto IL_00a1;
				}
				case 1:
				{
					goto IL_00af;
				}
				case 2:
				{
					goto IL_00bd;
				}
			}
		}

IL_009f:
		{
			IL2CPP_LEAVE(0xD9, FINALLY_00cb);
		}

IL_00a1:
		{
			// SimpleRaycastStepUpdate(ref this.currentRayStep);
			RayStep_t68267BADF85DF3BC948899D189E94EC8C2D87C6F * L_19 = __this->get_address_of_currentRayStep_33();
			SurfaceMagnetism_SimpleRaycastStepUpdate_m50D7281C653DE8C0A12BC4ABAAC3EA19F009A008(__this, (RayStep_t68267BADF85DF3BC948899D189E94EC8C2D87C6F *)L_19, /*hidden argument*/NULL);
			// break;
			IL2CPP_LEAVE(0xD9, FINALLY_00cb);
		}

IL_00af:
		{
			// BoxRaycastStepUpdate(ref this.currentRayStep);
			RayStep_t68267BADF85DF3BC948899D189E94EC8C2D87C6F * L_20 = __this->get_address_of_currentRayStep_33();
			SurfaceMagnetism_BoxRaycastStepUpdate_mDA5E04609EBB34437DB2E8D3BCBF879826BEEDAD(__this, (RayStep_t68267BADF85DF3BC948899D189E94EC8C2D87C6F *)L_20, /*hidden argument*/NULL);
			// break;
			IL2CPP_LEAVE(0xD9, FINALLY_00cb);
		}

IL_00bd:
		{
			// SphereRaycastStepUpdate(ref this.currentRayStep);
			RayStep_t68267BADF85DF3BC948899D189E94EC8C2D87C6F * L_21 = __this->get_address_of_currentRayStep_33();
			SurfaceMagnetism_SphereRaycastStepUpdate_m2D572E1EFC74DC020A1FAACE03702BED42AA7456(__this, (RayStep_t68267BADF85DF3BC948899D189E94EC8C2D87C6F *)L_21, /*hidden argument*/NULL);
			// break;
			IL2CPP_LEAVE(0xD9, FINALLY_00cb);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00cb;
	}

FINALLY_00cb:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(203)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(203)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xD9, IL_00d9)
	}

IL_00d9:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::SimpleRaycastStepUpdate(Microsoft.MixedReality.Toolkit.RayStep&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_SimpleRaycastStepUpdate_m50D7281C653DE8C0A12BC4ABAAC3EA19F009A008 (SurfaceMagnetism_t23AC1508708E4CA5D97B38DEDEDD8DB5FE6E6161 * __this, RayStep_t68267BADF85DF3BC948899D189E94EC8C2D87C6F * ___rayStep0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityRaycaster_t1C4D8F90AF243DB6D246BF422C68F79C9F261239_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// OnSurface = MixedRealityRaycaster.RaycastSimplePhysicsStep(
		//     rayStep,
		//     maxRaycastDistance,
		//     magneticSurfaces,
		//     false,
		//     out RaycastHit result);
		RayStep_t68267BADF85DF3BC948899D189E94EC8C2D87C6F * L_0 = ___rayStep0;
		RayStep_t68267BADF85DF3BC948899D189E94EC8C2D87C6F  L_1 = (*(RayStep_t68267BADF85DF3BC948899D189E94EC8C2D87C6F *)L_0);
		float L_2 = __this->get_maxRaycastDistance_15();
		LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F* L_3 = __this->get_magneticSurfaces_14();
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityRaycaster_t1C4D8F90AF243DB6D246BF422C68F79C9F261239_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = MixedRealityRaycaster_RaycastSimplePhysicsStep_mA3693E6846182716219101FD4B7875A882119DEF(L_1, L_2, L_3, (bool)0, (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_0), /*hidden argument*/NULL);
		SurfaceMagnetism_set_OnSurface_m7D14342CE400FC2C7B2A2ECDF33D97F56B778A82_inline(__this, L_4, /*hidden argument*/NULL);
		// Vector3 hitDelta = result.point - rayStep.Origin;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = RaycastHit_get_point_m32F7282CBB2E13393A33BAD046BDA218E48DD21E((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_0), /*hidden argument*/NULL);
		RayStep_t68267BADF85DF3BC948899D189E94EC8C2D87C6F * L_6 = ___rayStep0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = RayStep_get_Origin_m4A2FBDEDA6BC36DC659AE2760E40F42128104F6C_inline((RayStep_t68267BADF85DF3BC948899D189E94EC8C2D87C6F *)L_6, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_5, L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		// float length = hitDelta.magnitude;
		float L_9;
		L_9 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_1), /*hidden argument*/NULL);
		// if (length < closestDistance)
		float L_10 = __this->get_closestDistance_16();
		if ((!(((float)L_9) < ((float)L_10))))
		{
			goto IL_0065;
		}
	}
	{
		// result.point = rayStep.Origin + rayStep.Direction * closestDistance;
		RayStep_t68267BADF85DF3BC948899D189E94EC8C2D87C6F * L_11 = ___rayStep0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = RayStep_get_Origin_m4A2FBDEDA6BC36DC659AE2760E40F42128104F6C_inline((RayStep_t68267BADF85DF3BC948899D189E94EC8C2D87C6F *)L_11, /*hidden argument*/NULL);
		RayStep_t68267BADF85DF3BC948899D189E94EC8C2D87C6F * L_13 = ___rayStep0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = RayStep_get_Direction_m7D6703B9C3DC0D10655A7288A76BD7F029A0A9BA_inline((RayStep_t68267BADF85DF3BC948899D189E94EC8C2D87C6F *)L_13, /*hidden argument*/NULL);
		float L_15 = __this->get_closestDistance_16();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_14, L_15, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_12, L_16, /*hidden argument*/NULL);
		RaycastHit_set_point_mBB4D9069F8DB5BA15E31DBA68AB68789687FA88F((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_0), L_17, /*hidden argument*/NULL);
	}

IL_0065:
	{
		// if (OnSurface)
		bool L_18;
		L_18 = SurfaceMagnetism_get_OnSurface_m31311A1A3DBA940622E39BB8CABD8933F8128976_inline(__this, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_00c0;
		}
	}
	{
		// GoalPosition = result.point + surfaceNormalOffset * result.normal + surfaceRayOffset * rayStep.Direction;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = RaycastHit_get_point_m32F7282CBB2E13393A33BAD046BDA218E48DD21E((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_0), /*hidden argument*/NULL);
		float L_20 = __this->get_surfaceNormalOffset_17();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = RaycastHit_get_normal_m2C813B25BAECD87FD9E9CB294278B291F4CC6674((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_0), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		L_22 = Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline(L_20, L_21, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_19, L_22, /*hidden argument*/NULL);
		float L_24 = __this->get_surfaceRayOffset_18();
		RayStep_t68267BADF85DF3BC948899D189E94EC8C2D87C6F * L_25 = ___rayStep0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		L_26 = RayStep_get_Direction_m7D6703B9C3DC0D10655A7288A76BD7F029A0A9BA_inline((RayStep_t68267BADF85DF3BC948899D189E94EC8C2D87C6F *)L_25, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
		L_27 = Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline(L_24, L_26, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		L_28 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_23, L_27, /*hidden argument*/NULL);
		Solver_set_GoalPosition_m55CE128A1EAFAE0BC3FBFB0E59B5F1B1B4A492C7(__this, L_28, /*hidden argument*/NULL);
		// GoalRotation = CalculateMagnetismOrientation(rayStep.Direction, result.normal);
		RayStep_t68267BADF85DF3BC948899D189E94EC8C2D87C6F * L_29 = ___rayStep0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30;
		L_30 = RayStep_get_Direction_m7D6703B9C3DC0D10655A7288A76BD7F029A0A9BA_inline((RayStep_t68267BADF85DF3BC948899D189E94EC8C2D87C6F *)L_29, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31;
		L_31 = RaycastHit_get_normal_m2C813B25BAECD87FD9E9CB294278B291F4CC6674((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_0), /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_32;
		L_32 = SurfaceMagnetism_CalculateMagnetismOrientation_m912B6945F1A72F2D8A999C7A7B90224D0A7140C3(__this, L_30, L_31, /*hidden argument*/NULL);
		Solver_set_GoalRotation_mD7FBFA12D17ADCF284FC97A229604C8212343075(__this, L_32, /*hidden argument*/NULL);
	}

IL_00c0:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::SphereRaycastStepUpdate(Microsoft.MixedReality.Toolkit.RayStep&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_SphereRaycastStepUpdate_m2D572E1EFC74DC020A1FAACE03702BED42AA7456 (SurfaceMagnetism_t23AC1508708E4CA5D97B38DEDEDD8DB5FE6E6161 * __this, RayStep_t68267BADF85DF3BC948899D189E94EC8C2D87C6F * ___rayStep0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityRaycaster_t1C4D8F90AF243DB6D246BF422C68F79C9F261239_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	float G_B3_0 = 0.0f;
	{
		// float size = ScaleOverride > 0 ? ScaleOverride : transform.lossyScale.x * sphereSize;
		float L_0;
		L_0 = SurfaceMagnetism_get_ScaleOverride_mE47020E4F78C27B002E30664805CB4B2297347FE(__this, /*hidden argument*/NULL);
		if ((((float)L_0) > ((float)(0.0f))))
		{
			goto IL_0026;
		}
	}
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_lossyScale_m469A16F93F135C1E4D5955C7EBDB893D1892A331(L_1, /*hidden argument*/NULL);
		float L_3 = L_2.get_x_2();
		float L_4 = __this->get_sphereSize_23();
		G_B3_0 = ((float)il2cpp_codegen_multiply((float)L_3, (float)L_4));
		goto IL_002c;
	}

IL_0026:
	{
		float L_5;
		L_5 = SurfaceMagnetism_get_ScaleOverride_mE47020E4F78C27B002E30664805CB4B2297347FE(__this, /*hidden argument*/NULL);
		G_B3_0 = L_5;
	}

IL_002c:
	{
		V_0 = G_B3_0;
		// OnSurface = MixedRealityRaycaster.RaycastSpherePhysicsStep(rayStep, size, maxRaycastDistance, magneticSurfaces, false, out RaycastHit result);
		RayStep_t68267BADF85DF3BC948899D189E94EC8C2D87C6F * L_6 = ___rayStep0;
		RayStep_t68267BADF85DF3BC948899D189E94EC8C2D87C6F  L_7 = (*(RayStep_t68267BADF85DF3BC948899D189E94EC8C2D87C6F *)L_6);
		float L_8 = V_0;
		float L_9 = __this->get_maxRaycastDistance_15();
		LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F* L_10 = __this->get_magneticSurfaces_14();
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityRaycaster_t1C4D8F90AF243DB6D246BF422C68F79C9F261239_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = MixedRealityRaycaster_RaycastSpherePhysicsStep_mC4C5CFDF7C3105216C13A9C9048C7E569013F27B(L_7, L_8, L_9, L_10, (bool)0, (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_1), /*hidden argument*/NULL);
		SurfaceMagnetism_set_OnSurface_m7D14342CE400FC2C7B2A2ECDF33D97F56B778A82_inline(__this, L_11, /*hidden argument*/NULL);
		// Vector3 hitDelta = result.point - rayStep.Origin;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = RaycastHit_get_point_m32F7282CBB2E13393A33BAD046BDA218E48DD21E((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_1), /*hidden argument*/NULL);
		RayStep_t68267BADF85DF3BC948899D189E94EC8C2D87C6F * L_13 = ___rayStep0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = RayStep_get_Origin_m4A2FBDEDA6BC36DC659AE2760E40F42128104F6C_inline((RayStep_t68267BADF85DF3BC948899D189E94EC8C2D87C6F *)L_13, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_12, L_14, /*hidden argument*/NULL);
		V_2 = L_15;
		// float length = hitDelta.magnitude;
		float L_16;
		L_16 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_2), /*hidden argument*/NULL);
		// if (length < closestDistance)
		float L_17 = __this->get_closestDistance_16();
		if ((!(((float)L_16) < ((float)L_17))))
		{
			goto IL_0093;
		}
	}
	{
		// result.point = rayStep.Origin + rayStep.Direction * closestDistance;
		RayStep_t68267BADF85DF3BC948899D189E94EC8C2D87C6F * L_18 = ___rayStep0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = RayStep_get_Origin_m4A2FBDEDA6BC36DC659AE2760E40F42128104F6C_inline((RayStep_t68267BADF85DF3BC948899D189E94EC8C2D87C6F *)L_18, /*hidden argument*/NULL);
		RayStep_t68267BADF85DF3BC948899D189E94EC8C2D87C6F * L_20 = ___rayStep0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = RayStep_get_Direction_m7D6703B9C3DC0D10655A7288A76BD7F029A0A9BA_inline((RayStep_t68267BADF85DF3BC948899D189E94EC8C2D87C6F *)L_20, /*hidden argument*/NULL);
		float L_22 = __this->get_closestDistance_16();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_21, L_22, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
		L_24 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_19, L_23, /*hidden argument*/NULL);
		RaycastHit_set_point_mBB4D9069F8DB5BA15E31DBA68AB68789687FA88F((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_1), L_24, /*hidden argument*/NULL);
	}

IL_0093:
	{
		// if (OnSurface)
		bool L_25;
		L_25 = SurfaceMagnetism_get_OnSurface_m31311A1A3DBA940622E39BB8CABD8933F8128976_inline(__this, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_00ee;
		}
	}
	{
		// GoalPosition = result.point + surfaceNormalOffset * result.normal + surfaceRayOffset * rayStep.Direction;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		L_26 = RaycastHit_get_point_m32F7282CBB2E13393A33BAD046BDA218E48DD21E((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_1), /*hidden argument*/NULL);
		float L_27 = __this->get_surfaceNormalOffset_17();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		L_28 = RaycastHit_get_normal_m2C813B25BAECD87FD9E9CB294278B291F4CC6674((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_1), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29;
		L_29 = Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline(L_27, L_28, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30;
		L_30 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_26, L_29, /*hidden argument*/NULL);
		float L_31 = __this->get_surfaceRayOffset_18();
		RayStep_t68267BADF85DF3BC948899D189E94EC8C2D87C6F * L_32 = ___rayStep0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33;
		L_33 = RayStep_get_Direction_m7D6703B9C3DC0D10655A7288A76BD7F029A0A9BA_inline((RayStep_t68267BADF85DF3BC948899D189E94EC8C2D87C6F *)L_32, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34;
		L_34 = Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline(L_31, L_33, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35;
		L_35 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_30, L_34, /*hidden argument*/NULL);
		Solver_set_GoalPosition_m55CE128A1EAFAE0BC3FBFB0E59B5F1B1B4A492C7(__this, L_35, /*hidden argument*/NULL);
		// GoalRotation = CalculateMagnetismOrientation(rayStep.Direction, result.normal);
		RayStep_t68267BADF85DF3BC948899D189E94EC8C2D87C6F * L_36 = ___rayStep0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37;
		L_37 = RayStep_get_Direction_m7D6703B9C3DC0D10655A7288A76BD7F029A0A9BA_inline((RayStep_t68267BADF85DF3BC948899D189E94EC8C2D87C6F *)L_36, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38;
		L_38 = RaycastHit_get_normal_m2C813B25BAECD87FD9E9CB294278B291F4CC6674((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_1), /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_39;
		L_39 = SurfaceMagnetism_CalculateMagnetismOrientation_m912B6945F1A72F2D8A999C7A7B90224D0A7140C3(__this, L_37, L_38, /*hidden argument*/NULL);
		Solver_set_GoalRotation_mD7FBFA12D17ADCF284FC97A229604C8212343075(__this, L_39, /*hidden argument*/NULL);
	}

IL_00ee:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::BoxRaycastStepUpdate(Microsoft.MixedReality.Toolkit.RayStep&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_BoxRaycastStepUpdate_mDA5E04609EBB34437DB2E8D3BCBF879826BEEDAD (SurfaceMagnetism_t23AC1508708E4CA5D97B38DEDEDD8DB5FE6E6161 * __this, RayStep_t68267BADF85DF3BC948899D189E94EC8C2D87C6F * ___rayStep0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5_m0D682A42739E30A25411905C0A712C2BEE81F861_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityRaycaster_t1C4D8F90AF243DB6D246BF422C68F79C9F261239_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SurfaceMagnetism_t23AC1508708E4CA5D97B38DEDEDD8DB5FE6E6161_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* V_4 = NULL;
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* V_5 = NULL;
	BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* V_6 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_7;
	memset((&V_7), 0, sizeof(V_7));
	Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  V_8;
	memset((&V_8), 0, sizeof(V_8));
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_12;
	memset((&V_12), 0, sizeof(V_12));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  G_B6_0;
	memset((&G_B6_0), 0, sizeof(G_B6_0));
	{
		// Vector3 scale = ScaleOverride > 0 ? transform.lossyScale.normalized * ScaleOverride : transform.lossyScale;
		float L_0;
		L_0 = SurfaceMagnetism_get_ScaleOverride_mE47020E4F78C27B002E30664805CB4B2297347FE(__this, /*hidden argument*/NULL);
		if ((((float)L_0) > ((float)(0.0f))))
		{
			goto IL_001a;
		}
	}
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_lossyScale_m469A16F93F135C1E4D5955C7EBDB893D1892A331(L_1, /*hidden argument*/NULL);
		G_B3_0 = L_2;
		goto IL_0039;
	}

IL_001a:
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_lossyScale_m469A16F93F135C1E4D5955C7EBDB893D1892A331(L_3, /*hidden argument*/NULL);
		V_7 = L_4;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_7), /*hidden argument*/NULL);
		float L_6;
		L_6 = SurfaceMagnetism_get_ScaleOverride_mE47020E4F78C27B002E30664805CB4B2297347FE(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_5, L_6, /*hidden argument*/NULL);
		G_B3_0 = L_7;
	}

IL_0039:
	{
		V_0 = G_B3_0;
		// Quaternion orientation = orientationMode == OrientationMode.None ?
		//     Quaternion.LookRotation(rayStep.Direction, Vector3.up) :
		//     CalculateMagnetismOrientation(rayStep.Direction, Vector3.up);
		int32_t L_8 = __this->get_orientationMode_27();
		if (!L_8)
		{
			goto IL_0055;
		}
	}
	{
		RayStep_t68267BADF85DF3BC948899D189E94EC8C2D87C6F * L_9 = ___rayStep0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = RayStep_get_Direction_m7D6703B9C3DC0D10655A7288A76BD7F029A0A9BA_inline((RayStep_t68267BADF85DF3BC948899D189E94EC8C2D87C6F *)L_9, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_12;
		L_12 = SurfaceMagnetism_CalculateMagnetismOrientation_m912B6945F1A72F2D8A999C7A7B90224D0A7140C3(__this, L_10, L_11, /*hidden argument*/NULL);
		G_B6_0 = L_12;
		goto IL_0065;
	}

IL_0055:
	{
		RayStep_t68267BADF85DF3BC948899D189E94EC8C2D87C6F * L_13 = ___rayStep0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = RayStep_get_Direction_m7D6703B9C3DC0D10655A7288A76BD7F029A0A9BA_inline((RayStep_t68267BADF85DF3BC948899D189E94EC8C2D87C6F *)L_13, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_16;
		L_16 = Quaternion_LookRotation_m8A7DB5BDBC361586191AB67ACF857F46160EE3F1(L_14, L_15, /*hidden argument*/NULL);
		G_B6_0 = L_16;
	}

IL_0065:
	{
		V_1 = G_B6_0;
		// Matrix4x4 targetMatrix = Matrix4x4.TRS(Vector3.zero, orientation, scale);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_18 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19 = V_0;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_20;
		L_20 = Matrix4x4_TRS_m0CBC696D0BDF58DCEC40B99BC32C716FAD024CE5(L_17, L_18, L_19, /*hidden argument*/NULL);
		V_2 = L_20;
		// if (this.boxCollider == null)
		BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * L_21 = __this->get_boxCollider_34();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_21, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_008d;
		}
	}
	{
		// this.boxCollider = GetComponent<BoxCollider>();
		BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * L_23;
		L_23 = Component_GetComponent_TisBoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5_m0D682A42739E30A25411905C0A712C2BEE81F861(__this, /*hidden argument*/Component_GetComponent_TisBoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5_m0D682A42739E30A25411905C0A712C2BEE81F861_RuntimeMethod_var);
		__this->set_boxCollider_34(L_23);
	}

IL_008d:
	{
		// Vector3 extents = boxCollider.size;
		BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * L_24 = __this->get_boxCollider_34();
		NullCheck(L_24);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
		L_25 = BoxCollider_get_size_mBC38D4926D4BE54A6532F6E1D642F363CA3A58A1(L_24, /*hidden argument*/NULL);
		V_3 = L_25;
		// if (MixedRealityRaycaster.RaycastBoxPhysicsStep(rayStep, extents, transform.position, targetMatrix, maxRaycastDistance, magneticSurfaces, boxRaysPerEdge, orthographicBoxCast, false, out Vector3[] positions, out Vector3[] normals, out bool[] hits))
		RayStep_t68267BADF85DF3BC948899D189E94EC8C2D87C6F * L_26 = ___rayStep0;
		RayStep_t68267BADF85DF3BC948899D189E94EC8C2D87C6F  L_27 = (*(RayStep_t68267BADF85DF3BC948899D189E94EC8C2D87C6F *)L_26);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28 = V_3;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_29;
		L_29 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_29);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30;
		L_30 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_29, /*hidden argument*/NULL);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_31 = V_2;
		float L_32 = __this->get_maxRaycastDistance_15();
		LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F* L_33 = __this->get_magneticSurfaces_14();
		int32_t L_34 = __this->get_boxRaysPerEdge_20();
		bool L_35 = __this->get_orthographicBoxCast_21();
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityRaycaster_t1C4D8F90AF243DB6D246BF422C68F79C9F261239_il2cpp_TypeInfo_var);
		bool L_36;
		L_36 = MixedRealityRaycaster_RaycastBoxPhysicsStep_m6FDF51499641BE2C3E173FA669261E60D7632168(L_27, L_28, L_30, L_31, L_32, L_33, L_34, L_35, (bool)0, (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4**)(&V_4), (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4**)(&V_5), (BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C**)(&V_6), /*hidden argument*/NULL);
		if (!L_36)
		{
			goto IL_0233;
		}
	}
	{
		// FindPlacementPlane(rayStep.Origin, rayStep.Direction, positions,
		//     normals, hits, boxCollider.size.x, maximumNormalVariance, false,
		//     orientationMode == OrientationMode.None, out Plane plane, out float distance);
		RayStep_t68267BADF85DF3BC948899D189E94EC8C2D87C6F * L_37 = ___rayStep0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38;
		L_38 = RayStep_get_Origin_m4A2FBDEDA6BC36DC659AE2760E40F42128104F6C_inline((RayStep_t68267BADF85DF3BC948899D189E94EC8C2D87C6F *)L_37, /*hidden argument*/NULL);
		RayStep_t68267BADF85DF3BC948899D189E94EC8C2D87C6F * L_39 = ___rayStep0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_40;
		L_40 = RayStep_get_Direction_m7D6703B9C3DC0D10655A7288A76BD7F029A0A9BA_inline((RayStep_t68267BADF85DF3BC948899D189E94EC8C2D87C6F *)L_39, /*hidden argument*/NULL);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_41 = V_4;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_42 = V_5;
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_43 = V_6;
		BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * L_44 = __this->get_boxCollider_34();
		NullCheck(L_44);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_45;
		L_45 = BoxCollider_get_size_mBC38D4926D4BE54A6532F6E1D642F363CA3A58A1(L_44, /*hidden argument*/NULL);
		float L_46 = L_45.get_x_2();
		float L_47 = __this->get_maximumNormalVariance_22();
		int32_t L_48 = __this->get_orientationMode_27();
		SurfaceMagnetism_FindPlacementPlane_mFF37B8BA7EF788DC7AD3974A52693E3B507E6E1A(__this, L_38, L_40, L_41, L_42, L_43, L_46, L_47, (bool)0, (bool)((((int32_t)L_48) == ((int32_t)0))? 1 : 0), (Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 *)(&V_8), (float*)(&V_9), /*hidden argument*/NULL);
		// float verticalCorrectionOffset = 0;
		V_10 = (0.0f);
		// if (IsNormalVertical(plane.normal) && !Mathf.Approximately(rayStep.Direction.y, 0))
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_49;
		L_49 = Plane_get_normal_m71CB4BAB04EE04CAEF9AD272B16766800F7D556B((Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 *)(&V_8), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SurfaceMagnetism_t23AC1508708E4CA5D97B38DEDEDD8DB5FE6E6161_il2cpp_TypeInfo_var);
		bool L_50;
		L_50 = SurfaceMagnetism_IsNormalVertical_m69C8EB0517B34631D8EC67890A037ACE9644FE12(L_49, /*hidden argument*/NULL);
		if (!L_50)
		{
			goto IL_018f;
		}
	}
	{
		RayStep_t68267BADF85DF3BC948899D189E94EC8C2D87C6F * L_51 = ___rayStep0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_52;
		L_52 = RayStep_get_Direction_m7D6703B9C3DC0D10655A7288A76BD7F029A0A9BA_inline((RayStep_t68267BADF85DF3BC948899D189E94EC8C2D87C6F *)L_51, /*hidden argument*/NULL);
		float L_53 = L_52.get_y_3();
		bool L_54;
		L_54 = Mathf_Approximately_mC2A3F657E3FD0CCAD4A4936CEE2F67D624A2AA55(L_53, (0.0f), /*hidden argument*/NULL);
		if (L_54)
		{
			goto IL_018f;
		}
	}
	{
		// float boxSurfaceVerticalOffset = targetMatrix.MultiplyVector(new Vector3(0, extents.y * 0.5f, 0)).magnitude;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_55 = V_3;
		float L_56 = L_55.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_57;
		memset((&L_57), 0, sizeof(L_57));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_57), (0.0f), ((float)il2cpp_codegen_multiply((float)L_56, (float)(0.5f))), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_58;
		L_58 = Matrix4x4_MultiplyVector_m88C4BE23EB0B45BB701514AF3E1CA5A857F8212C((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_2), L_57, /*hidden argument*/NULL);
		V_7 = L_58;
		float L_59;
		L_59 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_7), /*hidden argument*/NULL);
		// Vector3 correctionVector = boxSurfaceVerticalOffset * (rayStep.Direction / rayStep.Direction.y);
		RayStep_t68267BADF85DF3BC948899D189E94EC8C2D87C6F * L_60 = ___rayStep0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_61;
		L_61 = RayStep_get_Direction_m7D6703B9C3DC0D10655A7288A76BD7F029A0A9BA_inline((RayStep_t68267BADF85DF3BC948899D189E94EC8C2D87C6F *)L_60, /*hidden argument*/NULL);
		RayStep_t68267BADF85DF3BC948899D189E94EC8C2D87C6F * L_62 = ___rayStep0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_63;
		L_63 = RayStep_get_Direction_m7D6703B9C3DC0D10655A7288A76BD7F029A0A9BA_inline((RayStep_t68267BADF85DF3BC948899D189E94EC8C2D87C6F *)L_62, /*hidden argument*/NULL);
		float L_64 = L_63.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_65;
		L_65 = Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline(L_61, L_64, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_66;
		L_66 = Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline(L_59, L_65, /*hidden argument*/NULL);
		V_12 = L_66;
		// verticalCorrectionOffset = -correctionVector.magnitude;
		float L_67;
		L_67 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_12), /*hidden argument*/NULL);
		V_10 = ((-L_67));
	}

IL_018f:
	{
		// float boxSurfaceOffset = targetMatrix.MultiplyVector(new Vector3(0, 0, extents.z * 0.5f)).magnitude;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_68 = V_3;
		float L_69 = L_68.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_70;
		memset((&L_70), 0, sizeof(L_70));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_70), (0.0f), (0.0f), ((float)il2cpp_codegen_multiply((float)L_69, (float)(0.5f))), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_71;
		L_71 = Matrix4x4_MultiplyVector_m88C4BE23EB0B45BB701514AF3E1CA5A857F8212C((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_2), L_70, /*hidden argument*/NULL);
		V_7 = L_71;
		float L_72;
		L_72 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_7), /*hidden argument*/NULL);
		V_11 = L_72;
		// GoalPosition = rayStep.Origin + rayStep.Direction * Mathf.Max(closestDistance, distance + surfaceRayOffset + boxSurfaceOffset + verticalCorrectionOffset) + plane.normal * (0 * boxSurfaceOffset + surfaceNormalOffset);
		RayStep_t68267BADF85DF3BC948899D189E94EC8C2D87C6F * L_73 = ___rayStep0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_74;
		L_74 = RayStep_get_Origin_m4A2FBDEDA6BC36DC659AE2760E40F42128104F6C_inline((RayStep_t68267BADF85DF3BC948899D189E94EC8C2D87C6F *)L_73, /*hidden argument*/NULL);
		RayStep_t68267BADF85DF3BC948899D189E94EC8C2D87C6F * L_75 = ___rayStep0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_76;
		L_76 = RayStep_get_Direction_m7D6703B9C3DC0D10655A7288A76BD7F029A0A9BA_inline((RayStep_t68267BADF85DF3BC948899D189E94EC8C2D87C6F *)L_75, /*hidden argument*/NULL);
		float L_77 = __this->get_closestDistance_16();
		float L_78 = V_9;
		float L_79 = __this->get_surfaceRayOffset_18();
		float L_80 = V_11;
		float L_81 = V_10;
		float L_82;
		L_82 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775(L_77, ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_78, (float)L_79)), (float)L_80)), (float)L_81)), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_83;
		L_83 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_76, L_82, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_84;
		L_84 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_74, L_83, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_85;
		L_85 = Plane_get_normal_m71CB4BAB04EE04CAEF9AD272B16766800F7D556B((Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 *)(&V_8), /*hidden argument*/NULL);
		float L_86 = V_11;
		float L_87 = __this->get_surfaceNormalOffset_17();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_88;
		L_88 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_85, ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)(0.0f), (float)L_86)), (float)L_87)), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_89;
		L_89 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_84, L_88, /*hidden argument*/NULL);
		Solver_set_GoalPosition_m55CE128A1EAFAE0BC3FBFB0E59B5F1B1B4A492C7(__this, L_89, /*hidden argument*/NULL);
		// GoalRotation = CalculateMagnetismOrientation(rayStep.Direction, plane.normal);
		RayStep_t68267BADF85DF3BC948899D189E94EC8C2D87C6F * L_90 = ___rayStep0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_91;
		L_91 = RayStep_get_Direction_m7D6703B9C3DC0D10655A7288A76BD7F029A0A9BA_inline((RayStep_t68267BADF85DF3BC948899D189E94EC8C2D87C6F *)L_90, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_92;
		L_92 = Plane_get_normal_m71CB4BAB04EE04CAEF9AD272B16766800F7D556B((Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 *)(&V_8), /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_93;
		L_93 = SurfaceMagnetism_CalculateMagnetismOrientation_m912B6945F1A72F2D8A999C7A7B90224D0A7140C3(__this, L_91, L_92, /*hidden argument*/NULL);
		Solver_set_GoalRotation_mD7FBFA12D17ADCF284FC97A229604C8212343075(__this, L_93, /*hidden argument*/NULL);
		// OnSurface = true;
		SurfaceMagnetism_set_OnSurface_m7D14342CE400FC2C7B2A2ECDF33D97F56B778A82_inline(__this, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0233:
	{
		// OnSurface = false;
		SurfaceMagnetism_set_OnSurface_m7D14342CE400FC2C7B2A2ECDF33D97F56B778A82_inline(__this, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::FindPlacementPlane(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3[],UnityEngine.Vector3[],System.Boolean[],System.Single,System.Single,System.Boolean,System.Boolean,UnityEngine.Plane&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_FindPlacementPlane_mFF37B8BA7EF788DC7AD3974A52693E3B507E6E1A (SurfaceMagnetism_t23AC1508708E4CA5D97B38DEDEDD8DB5FE6E6161 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___origin0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___direction1, Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___positions2, Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___normals3, BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* ___hits4, float ___assetWidth5, float ___maxNormalVariance6, bool ___constrainVertical7, bool ___useClosestDistance8, Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 * ___plane9, float* ___closestDistance10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C5F77CBC6B48EEFA86CFC18E2E3A9CDF9071345);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_6;
	memset((&V_6), 0, sizeof(V_6));
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_12;
	memset((&V_12), 0, sizeof(V_12));
	int32_t V_13 = 0;
	float V_14 = 0.0f;
	int32_t V_15 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_16;
	memset((&V_16), 0, sizeof(V_16));
	int32_t V_17 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_18;
	memset((&V_18), 0, sizeof(V_18));
	float V_19 = 0.0f;
	int32_t V_20 = 0;
	float V_21 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_22;
	memset((&V_22), 0, sizeof(V_22));
	float V_23 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  G_B48_0;
	memset((&G_B48_0), 0, sizeof(G_B48_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  G_B47_0;
	memset((&G_B47_0), 0, sizeof(G_B47_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  G_B49_0;
	memset((&G_B49_0), 0, sizeof(G_B49_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  G_B49_1;
	memset((&G_B49_1), 0, sizeof(G_B49_1));
	{
		// int rayCount = positions.Length;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_0 = ___positions2;
		NullCheck(L_0);
		V_0 = ((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)));
		// Vector3 originalDirection = direction;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___direction1;
		V_1 = L_1;
		// if (constrainVertical)
		bool L_2 = ___constrainVertical7;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		// direction.y = 0.0f;
		(&___direction1)->set_y_3((0.0f));
		// direction = direction.normalized;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&___direction1), /*hidden argument*/NULL);
		___direction1 = L_3;
	}

IL_001f:
	{
		// closestDistance = float.PositiveInfinity;
		float* L_4 = ___closestDistance10;
		*((float*)L_4) = (float)(std::numeric_limits<float>::infinity());
		// int numHits = 0;
		V_2 = 0;
		// int closestPointIdx = -1;
		V_3 = (-1);
		// float farthestDistance = 0f;
		V_4 = (0.0f);
		// var averageNormal = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		V_5 = L_5;
		// for (int hitIndex = 0; hitIndex < rayCount; hitIndex++)
		V_13 = 0;
		goto IL_0090;
	}

IL_003e:
	{
		// if (hits[hitIndex])
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_6 = ___hits4;
		int32_t L_7 = V_13;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		uint8_t L_9 = (uint8_t)(L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		if (!L_9)
		{
			goto IL_008a;
		}
	}
	{
		// float distance = Vector3.Dot(direction, positions[hitIndex] - origin);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___direction1;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_11 = ___positions2;
		int32_t L_12 = V_13;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15 = ___origin0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_14, L_15, /*hidden argument*/NULL);
		float L_17;
		L_17 = Vector3_Dot_mD19905B093915BA12852732EA27AA2DBE030D11F_inline(L_10, L_16, /*hidden argument*/NULL);
		V_14 = L_17;
		// if (distance < closestDistance)
		float L_18 = V_14;
		float* L_19 = ___closestDistance10;
		float L_20 = *((float*)L_19);
		if ((!(((float)L_18) < ((float)L_20))))
		{
			goto IL_006a;
		}
	}
	{
		// closestPointIdx = hitIndex;
		int32_t L_21 = V_13;
		V_3 = L_21;
		// closestDistance = distance;
		float* L_22 = ___closestDistance10;
		float L_23 = V_14;
		*((float*)L_22) = (float)L_23;
	}

IL_006a:
	{
		// if (distance > farthestDistance)
		float L_24 = V_14;
		float L_25 = V_4;
		if ((!(((float)L_24) > ((float)L_25))))
		{
			goto IL_0074;
		}
	}
	{
		// farthestDistance = distance;
		float L_26 = V_14;
		V_4 = L_26;
	}

IL_0074:
	{
		// averageNormal += normals[hitIndex];
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27 = V_5;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_28 = ___normals3;
		int32_t L_29 = V_13;
		NullCheck(L_28);
		int32_t L_30 = L_29;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32;
		L_32 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_27, L_31, /*hidden argument*/NULL);
		V_5 = L_32;
		// ++numHits;
		int32_t L_33 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1));
	}

IL_008a:
	{
		// for (int hitIndex = 0; hitIndex < rayCount; hitIndex++)
		int32_t L_34 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)1));
	}

IL_0090:
	{
		// for (int hitIndex = 0; hitIndex < rayCount; hitIndex++)
		int32_t L_35 = V_13;
		int32_t L_36 = V_0;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_003e;
		}
	}
	{
		// Vector3 closestPoint = positions[closestPointIdx];
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_37 = ___positions2;
		int32_t L_38 = V_3;
		NullCheck(L_37);
		int32_t L_39 = L_38;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		V_6 = L_40;
		// averageNormal /= numHits;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_41 = V_5;
		int32_t L_42 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_43;
		L_43 = Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline(L_41, ((float)((float)L_42)), /*hidden argument*/NULL);
		V_5 = L_43;
		// float variance = 0;
		V_7 = (0.0f);
		// for (int hitIndex = 0; hitIndex < rayCount; ++hitIndex)
		V_15 = 0;
		goto IL_00e0;
	}

IL_00b5:
	{
		// if (hits[hitIndex])
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_44 = ___hits4;
		int32_t L_45 = V_15;
		NullCheck(L_44);
		int32_t L_46 = L_45;
		uint8_t L_47 = (uint8_t)(L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		if (!L_47)
		{
			goto IL_00da;
		}
	}
	{
		// variance += (normals[hitIndex] - averageNormal).magnitude;
		float L_48 = V_7;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_49 = ___normals3;
		int32_t L_50 = V_15;
		NullCheck(L_49);
		int32_t L_51 = L_50;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_52 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_53 = V_5;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_54;
		L_54 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_52, L_53, /*hidden argument*/NULL);
		V_16 = L_54;
		float L_55;
		L_55 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_16), /*hidden argument*/NULL);
		V_7 = ((float)il2cpp_codegen_add((float)L_48, (float)L_55));
	}

IL_00da:
	{
		// for (int hitIndex = 0; hitIndex < rayCount; ++hitIndex)
		int32_t L_56 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add((int32_t)L_56, (int32_t)1));
	}

IL_00e0:
	{
		// for (int hitIndex = 0; hitIndex < rayCount; ++hitIndex)
		int32_t L_57 = V_15;
		int32_t L_58 = V_0;
		if ((((int32_t)L_57) < ((int32_t)L_58)))
		{
			goto IL_00b5;
		}
	}
	{
		// variance /= numHits;
		float L_59 = V_7;
		int32_t L_60 = V_2;
		V_7 = ((float)((float)L_59/(float)((float)((float)L_60))));
		// if (variance > maxNormalVariance || numHits < rayCount * 0.25f)
		float L_61 = V_7;
		float L_62 = ___maxNormalVariance6;
		if ((((float)L_61) > ((float)L_62)))
		{
			goto IL_00fe;
		}
	}
	{
		int32_t L_63 = V_2;
		int32_t L_64 = V_0;
		if ((!(((float)((float)((float)L_63))) < ((float)((float)il2cpp_codegen_multiply((float)((float)((float)L_64)), (float)(0.25f)))))))
		{
			goto IL_0113;
		}
	}

IL_00fe:
	{
		// plane = new Plane(-direction, closestPoint);
		Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 * L_65 = ___plane9;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_66 = ___direction1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_67;
		L_67 = Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline(L_66, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_68 = V_6;
		Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  L_69;
		memset((&L_69), 0, sizeof(L_69));
		Plane__ctor_m5B830C0E99AA5A47EF0D15767828D6E859867E67((&L_69), L_67, L_68, /*hidden argument*/NULL);
		*(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 *)L_65 = L_69;
		// return;
		return;
	}

IL_0113:
	{
		// var lowAngle = float.PositiveInfinity;
		V_8 = (std::numeric_limits<float>::infinity());
		// var highAngle = float.NegativeInfinity;
		V_9 = (-std::numeric_limits<float>::infinity());
		// int lowIndex = -1;
		V_10 = (-1);
		// int highIndex = -1;
		V_11 = (-1);
		// for (int hitIndex = 0; hitIndex < rayCount; hitIndex++)
		V_17 = 0;
		goto IL_0193;
	}

IL_012c:
	{
		// if (hits[hitIndex] == false || hitIndex == closestPointIdx)
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_70 = ___hits4;
		int32_t L_71 = V_17;
		NullCheck(L_70);
		int32_t L_72 = L_71;
		uint8_t L_73 = (uint8_t)(L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		if (!L_73)
		{
			goto IL_018d;
		}
	}
	{
		int32_t L_74 = V_17;
		int32_t L_75 = V_3;
		if ((((int32_t)L_74) == ((int32_t)L_75)))
		{
			goto IL_018d;
		}
	}
	{
		// Vector3 difference = positions[hitIndex] - closestPoint;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_76 = ___positions2;
		int32_t L_77 = V_17;
		NullCheck(L_76);
		int32_t L_78 = L_77;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_79 = (L_76)->GetAt(static_cast<il2cpp_array_size_t>(L_78));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_80 = V_6;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_81;
		L_81 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_79, L_80, /*hidden argument*/NULL);
		V_18 = L_81;
		// if (constrainVertical)
		bool L_82 = ___constrainVertical7;
		if (!L_82)
		{
			goto IL_016e;
		}
	}
	{
		// difference.y = 0.0f;
		(&V_18)->set_y_3((0.0f));
		// difference.Normalize();
		Vector3_Normalize_m2258C159121FC81954C301DEE631BC24FCEDE780((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_18), /*hidden argument*/NULL);
		// if (difference == Vector3.zero)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_83 = V_18;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_84;
		L_84 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		bool L_85;
		L_85 = Vector3_op_Equality_m8A98C7F38641110A2F90445EF8E98ECE14B08296(L_83, L_84, /*hidden argument*/NULL);
		if (L_85)
		{
			goto IL_018d;
		}
	}

IL_016e:
	{
		// difference.Normalize();
		Vector3_Normalize_m2258C159121FC81954C301DEE631BC24FCEDE780((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_18), /*hidden argument*/NULL);
		// float angle = Vector3.Dot(direction, difference);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_86 = ___direction1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_87 = V_18;
		float L_88;
		L_88 = Vector3_Dot_mD19905B093915BA12852732EA27AA2DBE030D11F_inline(L_86, L_87, /*hidden argument*/NULL);
		V_19 = L_88;
		// if (angle < lowAngle)
		float L_89 = V_19;
		float L_90 = V_8;
		if ((!(((float)L_89) < ((float)L_90))))
		{
			goto IL_018d;
		}
	}
	{
		// lowAngle = angle;
		float L_91 = V_19;
		V_8 = L_91;
		// lowIndex = hitIndex;
		int32_t L_92 = V_17;
		V_10 = L_92;
	}

IL_018d:
	{
		// for (int hitIndex = 0; hitIndex < rayCount; hitIndex++)
		int32_t L_93 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add((int32_t)L_93, (int32_t)1));
	}

IL_0193:
	{
		// for (int hitIndex = 0; hitIndex < rayCount; hitIndex++)
		int32_t L_94 = V_17;
		int32_t L_95 = V_0;
		if ((((int32_t)L_94) < ((int32_t)L_95)))
		{
			goto IL_012c;
		}
	}
	{
		// if (!constrainVertical && lowIndex != -1)
		bool L_96 = ___constrainVertical7;
		if (L_96)
		{
			goto IL_0260;
		}
	}
	{
		int32_t L_97 = V_10;
		if ((((int32_t)L_97) == ((int32_t)(-1))))
		{
			goto IL_0260;
		}
	}
	{
		// for (int hitIndex = 0; hitIndex < rayCount; hitIndex++)
		V_20 = 0;
		goto IL_0258;
	}

IL_01af:
	{
		// if (hits[hitIndex] == false || hitIndex == closestPointIdx || hitIndex == lowIndex)
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_98 = ___hits4;
		int32_t L_99 = V_20;
		NullCheck(L_98);
		int32_t L_100 = L_99;
		uint8_t L_101 = (uint8_t)(L_98)->GetAt(static_cast<il2cpp_array_size_t>(L_100));
		if (!L_101)
		{
			goto IL_0252;
		}
	}
	{
		int32_t L_102 = V_20;
		int32_t L_103 = V_3;
		if ((((int32_t)L_102) == ((int32_t)L_103)))
		{
			goto IL_0252;
		}
	}
	{
		int32_t L_104 = V_20;
		int32_t L_105 = V_10;
		if ((((int32_t)L_104) == ((int32_t)L_105)))
		{
			goto IL_0252;
		}
	}
	{
		// float dot = Mathf.Abs(Vector3.Dot((positions[hitIndex] - closestPoint).normalized, (positions[lowIndex] - closestPoint).normalized));
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_106 = ___positions2;
		int32_t L_107 = V_20;
		NullCheck(L_106);
		int32_t L_108 = L_107;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_109 = (L_106)->GetAt(static_cast<il2cpp_array_size_t>(L_108));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_110 = V_6;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_111;
		L_111 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_109, L_110, /*hidden argument*/NULL);
		V_16 = L_111;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_112;
		L_112 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_16), /*hidden argument*/NULL);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_113 = ___positions2;
		int32_t L_114 = V_10;
		NullCheck(L_113);
		int32_t L_115 = L_114;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_116 = (L_113)->GetAt(static_cast<il2cpp_array_size_t>(L_115));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_117 = V_6;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_118;
		L_118 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_116, L_117, /*hidden argument*/NULL);
		V_16 = L_118;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_119;
		L_119 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_16), /*hidden argument*/NULL);
		float L_120;
		L_120 = Vector3_Dot_mD19905B093915BA12852732EA27AA2DBE030D11F_inline(L_112, L_119, /*hidden argument*/NULL);
		float L_121;
		L_121 = fabsf(L_120);
		// if (dot > MaxDot)
		if ((((float)L_121) > ((float)(0.970000029f))))
		{
			goto IL_0252;
		}
	}
	{
		// float nextAngle = Mathf.Abs(Vector3.Dot(direction, Vector3.Cross(positions[lowIndex] - closestPoint, positions[hitIndex] - closestPoint).normalized));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_122 = ___direction1;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_123 = ___positions2;
		int32_t L_124 = V_10;
		NullCheck(L_123);
		int32_t L_125 = L_124;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_126 = (L_123)->GetAt(static_cast<il2cpp_array_size_t>(L_125));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_127 = V_6;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_128;
		L_128 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_126, L_127, /*hidden argument*/NULL);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_129 = ___positions2;
		int32_t L_130 = V_20;
		NullCheck(L_129);
		int32_t L_131 = L_130;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_132 = (L_129)->GetAt(static_cast<il2cpp_array_size_t>(L_131));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_133 = V_6;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_134;
		L_134 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_132, L_133, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_135;
		L_135 = Vector3_Cross_m63414F0C545EBB616F339FF8830D37F9230736A4(L_128, L_134, /*hidden argument*/NULL);
		V_16 = L_135;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_136;
		L_136 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_16), /*hidden argument*/NULL);
		float L_137;
		L_137 = Vector3_Dot_mD19905B093915BA12852732EA27AA2DBE030D11F_inline(L_122, L_136, /*hidden argument*/NULL);
		float L_138;
		L_138 = fabsf(L_137);
		V_21 = L_138;
		// if (nextAngle > highAngle)
		float L_139 = V_21;
		float L_140 = V_9;
		if ((!(((float)L_139) > ((float)L_140))))
		{
			goto IL_0252;
		}
	}
	{
		// highAngle = nextAngle;
		float L_141 = V_21;
		V_9 = L_141;
		// highIndex = hitIndex;
		int32_t L_142 = V_20;
		V_11 = L_142;
	}

IL_0252:
	{
		// for (int hitIndex = 0; hitIndex < rayCount; hitIndex++)
		int32_t L_143 = V_20;
		V_20 = ((int32_t)il2cpp_codegen_add((int32_t)L_143, (int32_t)1));
	}

IL_0258:
	{
		// for (int hitIndex = 0; hitIndex < rayCount; hitIndex++)
		int32_t L_144 = V_20;
		int32_t L_145 = V_0;
		if ((((int32_t)L_144) < ((int32_t)L_145)))
		{
			goto IL_01af;
		}
	}

IL_0260:
	{
		// if (lowIndex != -1)
		int32_t L_146 = V_10;
		if ((((int32_t)L_146) == ((int32_t)(-1))))
		{
			goto IL_0337;
		}
	}
	{
		// if (debugEnabled)
		bool L_147 = __this->get_debugEnabled_30();
		if (!L_147)
		{
			goto IL_0284;
		}
	}
	{
		// Debug.DrawLine(closestPoint, positions[lowIndex], Color.red);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_148 = V_6;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_149 = ___positions2;
		int32_t L_150 = V_10;
		NullCheck(L_149);
		int32_t L_151 = L_150;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_152 = (L_149)->GetAt(static_cast<il2cpp_array_size_t>(L_151));
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_153;
		L_153 = Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_DrawLine_m83E9014DE042AAFE0B97A66E2A23F701FFDBB8A3(L_148, L_152, L_153, /*hidden argument*/NULL);
	}

IL_0284:
	{
		// if (highIndex != -1)
		int32_t L_154 = V_11;
		if ((((int32_t)L_154) == ((int32_t)(-1))))
		{
			goto IL_02d5;
		}
	}
	{
		// if (debugEnabled)
		bool L_155 = __this->get_debugEnabled_30();
		if (!L_155)
		{
			goto IL_02a5;
		}
	}
	{
		// Debug.DrawLine(closestPoint, positions[highIndex], Color.green);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_156 = V_6;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_157 = ___positions2;
		int32_t L_158 = V_11;
		NullCheck(L_157);
		int32_t L_159 = L_158;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_160 = (L_157)->GetAt(static_cast<il2cpp_array_size_t>(L_159));
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_161;
		L_161 = Color_get_green_mFF9BD42534D385A0717B1EAD083ADF08712984B9(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_DrawLine_m83E9014DE042AAFE0B97A66E2A23F701FFDBB8A3(L_156, L_160, L_161, /*hidden argument*/NULL);
	}

IL_02a5:
	{
		// placementNormal = Vector3.Cross(positions[lowIndex] - closestPoint, positions[highIndex] - closestPoint).normalized;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_162 = ___positions2;
		int32_t L_163 = V_10;
		NullCheck(L_162);
		int32_t L_164 = L_163;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_165 = (L_162)->GetAt(static_cast<il2cpp_array_size_t>(L_164));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_166 = V_6;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_167;
		L_167 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_165, L_166, /*hidden argument*/NULL);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_168 = ___positions2;
		int32_t L_169 = V_11;
		NullCheck(L_168);
		int32_t L_170 = L_169;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_171 = (L_168)->GetAt(static_cast<il2cpp_array_size_t>(L_170));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_172 = V_6;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_173;
		L_173 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_171, L_172, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_174;
		L_174 = Vector3_Cross_m63414F0C545EBB616F339FF8830D37F9230736A4(L_167, L_173, /*hidden argument*/NULL);
		V_16 = L_174;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_175;
		L_175 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_16), /*hidden argument*/NULL);
		V_12 = L_175;
		// }
		goto IL_0318;
	}

IL_02d5:
	{
		// Vector3 planeUp = Vector3.Cross(positions[lowIndex] - closestPoint, direction);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_176 = ___positions2;
		int32_t L_177 = V_10;
		NullCheck(L_176);
		int32_t L_178 = L_177;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_179 = (L_176)->GetAt(static_cast<il2cpp_array_size_t>(L_178));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_180 = V_6;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_181;
		L_181 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_179, L_180, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_182 = ___direction1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_183;
		L_183 = Vector3_Cross_m63414F0C545EBB616F339FF8830D37F9230736A4(L_181, L_182, /*hidden argument*/NULL);
		V_22 = L_183;
		// placementNormal = Vector3.Cross(positions[lowIndex] - closestPoint, constrainVertical ? Vector3.up : planeUp).normalized;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_184 = ___positions2;
		int32_t L_185 = V_10;
		NullCheck(L_184);
		int32_t L_186 = L_185;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_187 = (L_184)->GetAt(static_cast<il2cpp_array_size_t>(L_186));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_188 = V_6;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_189;
		L_189 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_187, L_188, /*hidden argument*/NULL);
		bool L_190 = ___constrainVertical7;
		G_B47_0 = L_189;
		if (L_190)
		{
			G_B48_0 = L_189;
			goto IL_0303;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_191 = V_22;
		G_B49_0 = L_191;
		G_B49_1 = G_B47_0;
		goto IL_0308;
	}

IL_0303:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_192;
		L_192 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		G_B49_0 = L_192;
		G_B49_1 = G_B48_0;
	}

IL_0308:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_193;
		L_193 = Vector3_Cross_m63414F0C545EBB616F339FF8830D37F9230736A4(G_B49_1, G_B49_0, /*hidden argument*/NULL);
		V_16 = L_193;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_194;
		L_194 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_16), /*hidden argument*/NULL);
		V_12 = L_194;
	}

IL_0318:
	{
		// if (debugEnabled)
		bool L_195 = __this->get_debugEnabled_30();
		if (!L_195)
		{
			goto IL_0344;
		}
	}
	{
		// Debug.DrawLine(closestPoint, closestPoint + placementNormal, Color.blue);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_196 = V_6;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_197 = V_6;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_198 = V_12;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_199;
		L_199 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_197, L_198, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_200;
		L_200 = Color_get_blue_m6D62D515CA10A6E760848E1BFB997E27B90BD07B(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_DrawLine_m83E9014DE042AAFE0B97A66E2A23F701FFDBB8A3(L_196, L_199, L_200, /*hidden argument*/NULL);
		// }
		goto IL_0344;
	}

IL_0337:
	{
		// placementNormal = direction * -1.0f;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_201 = ___direction1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_202;
		L_202 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_201, (-1.0f), /*hidden argument*/NULL);
		V_12 = L_202;
	}

IL_0344:
	{
		// if (Vector3.Dot(placementNormal, direction) > 0.0f)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_203 = V_12;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_204 = ___direction1;
		float L_205;
		L_205 = Vector3_Dot_mD19905B093915BA12852732EA27AA2DBE030D11F_inline(L_203, L_204, /*hidden argument*/NULL);
		if ((!(((float)L_205) > ((float)(0.0f)))))
		{
			goto IL_0361;
		}
	}
	{
		// placementNormal *= -1.0f;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_206 = V_12;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_207;
		L_207 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_206, (-1.0f), /*hidden argument*/NULL);
		V_12 = L_207;
	}

IL_0361:
	{
		// plane = new Plane(placementNormal, closestPoint);
		Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 * L_208 = ___plane9;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_209 = V_12;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_210 = V_6;
		Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  L_211;
		memset((&L_211), 0, sizeof(L_211));
		Plane__ctor_m5B830C0E99AA5A47EF0D15767828D6E859867E67((&L_211), L_209, L_210, /*hidden argument*/NULL);
		*(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 *)L_208 = L_211;
		// if (debugEnabled)
		bool L_212 = __this->get_debugEnabled_30();
		if (!L_212)
		{
			goto IL_0387;
		}
	}
	{
		// Debug.DrawRay(closestPoint, placementNormal, Color.cyan);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_213 = V_6;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_214 = V_12;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_215;
		L_215 = Color_get_cyan_m0C608BC083FD98C45C1F4F15AE803D288C647686(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_DrawRay_m918D1131BACEBD7CCEA9D9BFDF3279F6CD56E121(L_213, L_214, L_215, /*hidden argument*/NULL);
	}

IL_0387:
	{
		// if (!useClosestDistance && closestPointIdx >= 0)
		bool L_216 = ___useClosestDistance8;
		if (L_216)
		{
			goto IL_03d2;
		}
	}
	{
		int32_t L_217 = V_3;
		if ((((int32_t)L_217) < ((int32_t)0)))
		{
			goto IL_03d2;
		}
	}
	{
		// if (plane.Raycast(new Ray(origin, originalDirection), out float centerPlaneDistance) || !centerPlaneDistance.Equals(0.0f))
		Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 * L_218 = ___plane9;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_219 = ___origin0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_220 = V_1;
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_221;
		memset((&L_221), 0, sizeof(L_221));
		Ray__ctor_m75B1F651FF47EE6B887105101B7DA61CBF41F83C((&L_221), L_219, L_220, /*hidden argument*/NULL);
		bool L_222;
		L_222 = Plane_Raycast_m8E3B0EF5B22DF336430373D4997155B647E99A24((Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 *)L_218, L_221, (float*)(&V_23), /*hidden argument*/NULL);
		if (L_222)
		{
			goto IL_03af;
		}
	}
	{
		bool L_223;
		L_223 = Single_Equals_m298A3A849F30B9900813BE6DD98AE6810CDBE914((float*)(&V_23), (0.0f), /*hidden argument*/NULL);
		if (L_223)
		{
			goto IL_03c8;
		}
	}

IL_03af:
	{
		// closestDistance = Mathf.Clamp(centerPlaneDistance, closestDistance, farthestDistance + assetWidth * 0.5f);
		float* L_224 = ___closestDistance10;
		float L_225 = V_23;
		float* L_226 = ___closestDistance10;
		float L_227 = *((float*)L_226);
		float L_228 = V_4;
		float L_229 = ___assetWidth5;
		float L_230;
		L_230 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(L_225, L_227, ((float)il2cpp_codegen_add((float)L_228, (float)((float)il2cpp_codegen_multiply((float)L_229, (float)(0.5f))))), /*hidden argument*/NULL);
		*((float*)L_224) = (float)L_230;
		// }
		return;
	}

IL_03c8:
	{
		// Debug.LogError("FindPlacementPlane: Not expected to have the center point not intersect the plane.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral0C5F77CBC6B48EEFA86CFC18E2E3A9CDF9071345, /*hidden argument*/NULL);
	}

IL_03d2:
	{
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::IsNormalVertical(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SurfaceMagnetism_IsNormalVertical_m69C8EB0517B34631D8EC67890A037ACE9644FE12 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___normal0, const RuntimeMethod* method)
{
	{
		// private static bool IsNormalVertical(Vector3 normal) => 1f - Mathf.Abs(normal.y) < 0.01f;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___normal0;
		float L_1 = L_0.get_y_3();
		float L_2;
		L_2 = fabsf(L_1);
		return (bool)((((float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_2))) < ((float)(0.00999999978f)))? 1 : 0);
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism__ctor_m054598F599F487A57C12D93B90F4A6D2A635ACF0 (SurfaceMagnetism_t23AC1508708E4CA5D97B38DEDEDD8DB5FE6E6161 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Solver_tA73899FFFB9BC2103F0BC1C9BCF601856A5BB455_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private LayerMask[] magneticSurfaces = { UnityEngine.Physics.DefaultRaycastLayers };
		LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F* L_0 = (LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F*)(LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F*)SZArrayNew(LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F_il2cpp_TypeInfo_var, (uint32_t)1);
		LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F* L_1 = L_0;
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_2;
		L_2 = LayerMask_op_Implicit_mC7EE32122D2A4786D3C00B93E41604B71BF1397C(((int32_t)-5), /*hidden argument*/NULL);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 )L_2);
		__this->set_magneticSurfaces_14(L_1);
		// private float maxRaycastDistance = 50.0f;
		__this->set_maxRaycastDistance_15((50.0f));
		// private float closestDistance = 0.5f;
		__this->set_closestDistance_16((0.5f));
		// private float surfaceNormalOffset = 0.5f;
		__this->set_surfaceNormalOffset_17((0.5f));
		// private int boxRaysPerEdge = 3;
		__this->set_boxRaysPerEdge_20(3);
		// private float maximumNormalVariance = 0.5f;
		__this->set_maximumNormalVariance_22((0.5f));
		// private float sphereSize = 1.0f;
		__this->set_sphereSize_23((1.0f));
		// private OrientationMode orientationMode = OrientationMode.TrackedTarget;
		__this->set_orientationMode_27(1);
		// private float orientationBlend = 0.65f;
		__this->set_orientationBlend_28((0.649999976f));
		// private bool keepOrientationVertical = true;
		__this->set_keepOrientationVertical_29((bool)1);
		IL2CPP_RUNTIME_CLASS_INIT(Solver_tA73899FFFB9BC2103F0BC1C9BCF601856A5BB455_il2cpp_TypeInfo_var);
		Solver__ctor_mDC88C38275512FEDE74D8229AAB58652A56539A0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SurfaceMagnetism::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism__cctor_m1A80C4DDD6D0F75C61D84FB0F772C43D19ABF22A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SurfaceMagnetism_t23AC1508708E4CA5D97B38DEDEDD8DB5FE6E6161_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61DB809903C95AF153BB9D39E15FCAC1EFD46716);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ProfilerMarker SolverUpdatePerfMarker =
		//     new ProfilerMarker("[MRTK] SurfaceMagnetism.SolverUpdate");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_0), _stringLiteral61DB809903C95AF153BB9D39E15FCAC1EFD46716, /*hidden argument*/NULL);
		((SurfaceMagnetism_t23AC1508708E4CA5D97B38DEDEDD8DB5FE6E6161_StaticFields*)il2cpp_codegen_static_fields_for(SurfaceMagnetism_t23AC1508708E4CA5D97B38DEDEDD8DB5FE6E6161_il2cpp_TypeInfo_var))->set_SolverUpdatePerfMarker_35(L_0);
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
// UnityEngine.InputSystem.InputActionReference Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::get_PlacementActionReference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * TapToPlace_get_PlacementActionReference_m3A96620EED53140231C63880E45013F61A86C87D (TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2 * __this, const RuntimeMethod* method)
{
	{
		// get => placementActionReference;
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_0 = __this->get_placementActionReference_14();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::set_PlacementActionReference(UnityEngine.InputSystem.InputActionReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_set_PlacementActionReference_m054D42798B67C26908D1A25143856922D56CC372 (TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2 * __this, InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * ___value0, const RuntimeMethod* method)
{
	{
		// set => placementActionReference = value;
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_0 = ___value0;
		__this->set_placementActionReference_14(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::get_AutoStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TapToPlace_get_AutoStart_m41ADB5B237F328EF0064B9383F4046BAA23C97C3 (TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2 * __this, const RuntimeMethod* method)
{
	{
		// get => autoStart;
		bool L_0 = __this->get_autoStart_15();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::set_AutoStart(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_set_AutoStart_m6E43BE6EF9C9436AF2867BC3E9491B7094DF567E (TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set => autoStart = value;
		bool L_0 = ___value0;
		__this->set_autoStart_15(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::get_DefaultPlacementDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TapToPlace_get_DefaultPlacementDistance_m9C42566D8DC5FAD7D9B6645EC745D98F142A8887 (TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2 * __this, const RuntimeMethod* method)
{
	{
		// get => defaultPlacementDistance;
		float L_0 = __this->get_defaultPlacementDistance_16();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::set_DefaultPlacementDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_set_DefaultPlacementDistance_m44977EB86491851288F00E9AB432FDBD50C172CF (TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => defaultPlacementDistance = value;
		float L_0 = ___value0;
		__this->set_defaultPlacementDistance_16(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::get_MaxRaycastDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TapToPlace_get_MaxRaycastDistance_m835DCA8B0B00761F571E21B62B75EBF6808B68BC (TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2 * __this, const RuntimeMethod* method)
{
	{
		// get => maxRaycastDistance;
		float L_0 = __this->get_maxRaycastDistance_17();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::set_MaxRaycastDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_set_MaxRaycastDistance_m97416B863FADEBE6DB91BAD9EF63E75BA1516BDB (TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => maxRaycastDistance = value;
		float L_0 = ___value0;
		__this->set_maxRaycastDistance_17(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::get_IsBeingPlaced()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TapToPlace_get_IsBeingPlaced_m25232DDC7097BC3FBAABFE12FB17D30693048EDC (TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsBeingPlaced { get; protected set; }
		bool L_0 = __this->get_U3CIsBeingPlacedU3Ek__BackingField_18();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::set_IsBeingPlaced(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_set_IsBeingPlaced_m03A0BCB10A5E98BB0410035F7994A5CD38FB5B6D (TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsBeingPlaced { get; protected set; }
		bool L_0 = ___value0;
		__this->set_U3CIsBeingPlacedU3Ek__BackingField_18(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::get_SurfaceNormalOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TapToPlace_get_SurfaceNormalOffset_m5380A9106B77116183123BA7D5E0E5B192663D00 (TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2 * __this, const RuntimeMethod* method)
{
	{
		// get => surfaceNormalOffset;
		float L_0 = __this->get_surfaceNormalOffset_19();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::set_SurfaceNormalOffset(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_set_SurfaceNormalOffset_mE89A09D270955F7A12D77BEE22A7A60BD92B050C (TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// surfaceNormalOffset = value;
		float L_0 = ___value0;
		__this->set_surfaceNormalOffset_19(L_0);
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::get_UseDefaultSurfaceNormalOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TapToPlace_get_UseDefaultSurfaceNormalOffset_m1FDFB6DBC6D5D0E9B2FBA4397BCAC77437628BD8 (TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2 * __this, const RuntimeMethod* method)
{
	{
		// get => useDefaultSurfaceNormalOffset;
		bool L_0 = __this->get_useDefaultSurfaceNormalOffset_20();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::set_UseDefaultSurfaceNormalOffset(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_set_UseDefaultSurfaceNormalOffset_m484C2A99696BCB4789B676D5483BF58AE0756907 (TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set => useDefaultSurfaceNormalOffset = value;
		bool L_0 = ___value0;
		__this->set_useDefaultSurfaceNormalOffset_20(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::get_KeepOrientationVertical()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TapToPlace_get_KeepOrientationVertical_mAD456D2F0402A48461813F1BF92782AC42C1DA2A (TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2 * __this, const RuntimeMethod* method)
{
	{
		// get => keepOrientationVertical;
		bool L_0 = __this->get_keepOrientationVertical_21();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::set_KeepOrientationVertical(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_set_KeepOrientationVertical_mF268075D186DD2466DFDB5723620AB80B8B41494 (TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set => keepOrientationVertical = value;
		bool L_0 = ___value0;
		__this->set_keepOrientationVertical_21(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::get_RotateAccordingToSurface()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TapToPlace_get_RotateAccordingToSurface_m3192A6B81583E9465B195FBC10FC526568FAE9B1 (TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2 * __this, const RuntimeMethod* method)
{
	{
		// get => rotateAccordingToSurface;
		bool L_0 = __this->get_rotateAccordingToSurface_22();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::set_RotateAccordingToSurface(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_set_RotateAccordingToSurface_m321DBCDDDC88345D0B75C214054B734B42372FE6 (TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set => rotateAccordingToSurface = value;
		bool L_0 = ___value0;
		__this->set_rotateAccordingToSurface_22(L_0);
		return;
	}
}
// UnityEngine.LayerMask[] Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::get_MagneticSurfaces()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F* TapToPlace_get_MagneticSurfaces_m4C567AAFA92858D23B59A5E29FC3D6BCBC6EE787 (TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2 * __this, const RuntimeMethod* method)
{
	{
		// get => magneticSurfaces;
		LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F* L_0 = __this->get_magneticSurfaces_23();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::set_MagneticSurfaces(UnityEngine.LayerMask[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_set_MagneticSurfaces_m1DB7C13CFAF1551978557A256E475F7A07C1FED3 (TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2 * __this, LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F* ___value0, const RuntimeMethod* method)
{
	{
		// set => magneticSurfaces = value;
		LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F* L_0 = ___value0;
		__this->set_magneticSurfaces_23(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::get_DebugEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TapToPlace_get_DebugEnabled_m1D301E14C64CFAEC77BC5CB642730DF3EAF2F0AE (TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2 * __this, const RuntimeMethod* method)
{
	{
		// get => debugEnabled;
		bool L_0 = __this->get_debugEnabled_24();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::set_DebugEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_set_DebugEnabled_mD25A67C81E80E0EBD29622A72307B4706A247E6B (TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set => debugEnabled = value;
		bool L_0 = ___value0;
		__this->set_debugEnabled_24(L_0);
		return;
	}
}
// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::get_OnPlacingStarted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * TapToPlace_get_OnPlacingStarted_m57E0514AB953B6A0BA42E2F5D572EFCE2A83E498 (TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2 * __this, const RuntimeMethod* method)
{
	{
		// get => onPlacingStarted;
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_0 = __this->get_onPlacingStarted_25();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::set_OnPlacingStarted(UnityEngine.Events.UnityEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_set_OnPlacingStarted_m8BC3BAC1E212CA39563BB36D562D3BB66CBE73B5 (TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2 * __this, UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___value0, const RuntimeMethod* method)
{
	{
		// set => onPlacingStarted = value;
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_0 = ___value0;
		__this->set_onPlacingStarted_25(L_0);
		return;
	}
}
// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::get_OnPlacingStopped()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * TapToPlace_get_OnPlacingStopped_mEC81B3BD90287C583B3A19D4F90FD26AC2D2B285 (TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2 * __this, const RuntimeMethod* method)
{
	{
		// get => onPlacingStopped;
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_0 = __this->get_onPlacingStopped_26();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::set_OnPlacingStopped(UnityEngine.Events.UnityEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_set_OnPlacingStopped_m6E49F6A2B420AEFABBC4C8A9DBA411198BB97D14 (TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2 * __this, UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___value0, const RuntimeMethod* method)
{
	{
		// set => onPlacingStopped = value;
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_0 = ___value0;
		__this->set_onPlacingStopped_26(L_0);
		return;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::get_GameObjectLayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TapToPlace_get_GameObjectLayer_mF5DBC31FA0B3C36B1BE307AEB52C2CDB050A9617 (TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2 * __this, const RuntimeMethod* method)
{
	{
		// protected internal int GameObjectLayer { get; protected set; }
		int32_t L_0 = __this->get_U3CGameObjectLayerU3Ek__BackingField_27();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::set_GameObjectLayer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_set_GameObjectLayer_mDB28B91E3382B3EDB0DD60FE4C3375436844A7EF (TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// protected internal int GameObjectLayer { get; protected set; }
		int32_t L_0 = ___value0;
		__this->set_U3CGameObjectLayerU3Ek__BackingField_27(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::get_IsColliderPresent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TapToPlace_get_IsColliderPresent_m839390CC1A63E6D8762F7E591A81B59BC269A640 (TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_m7CB95AA45111B8F2FD8968CBDF0CE3359F6B2E08_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected internal bool IsColliderPresent => gameObject != null && gameObject.GetComponent<Collider>() != null;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_3;
		L_3 = GameObject_GetComponent_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_m7CB95AA45111B8F2FD8968CBDF0CE3359F6B2E08(L_2, /*hidden argument*/GameObject_GetComponent_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_m7CB95AA45111B8F2FD8968CBDF0CE3359F6B2E08_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		return L_4;
	}

IL_0020:
	{
		return (bool)0;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::get_DefaultSurfaceNormalOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TapToPlace_get_DefaultSurfaceNormalOffset_m37A2FD3F60BBE411983EEE958EFBB5B41A7233F3 (TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_m7CB95AA45111B8F2FD8968CBDF0CE3359F6B2E08_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// private float DefaultSurfaceNormalOffset => gameObject.GetComponent<Collider>().bounds.extents.z;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_1;
		L_1 = GameObject_GetComponent_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_m7CB95AA45111B8F2FD8968CBDF0CE3359F6B2E08(L_0, /*hidden argument*/GameObject_GetComponent_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_m7CB95AA45111B8F2FD8968CBDF0CE3359F6B2E08_RuntimeMethod_var);
		NullCheck(L_1);
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  L_2;
		L_2 = Collider_get_bounds_mE341D29E1DA184ADD53A474D57D9082A3550EACB(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Bounds_get_extents_mA54D7497D65DCF21CA952FA754B9D1086305FF02((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&V_0), /*hidden argument*/NULL);
		float L_4 = L_3.get_z_4();
		return L_4;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_Start_mB1D7DFE6D4C1E21B39AC0786E5CB6B13C84FEA88 (TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral386364D784E9EBB79BC2A529A56F1826D1CD16F6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Start();
		Solver_Start_m95787CA2A5E8901B23214D06D597957569FF0A59(__this, /*hidden argument*/NULL);
		// UnityPhysics.SyncTransforms();
		Physics_SyncTransforms_m744C6ED0B04CAB03C7D5A7320896AE3B6D4674D1(/*hidden argument*/NULL);
		// ignoreRaycastLayer = LayerMask.NameToLayer("Ignore Raycast");
		int32_t L_0;
		L_0 = LayerMask_NameToLayer_m6A2BBB60EC90F7EC48A6A91CA98149C547A04C0A(_stringLiteral386364D784E9EBB79BC2A529A56F1826D1CD16F6, /*hidden argument*/NULL);
		__this->set_ignoreRaycastLayer_28(L_0);
		// startCalled = true;
		__this->set_startCalled_34((bool)1);
		// if (AutoStart || placementRequested)
		bool L_1;
		L_1 = TapToPlace_get_AutoStart_m41ADB5B237F328EF0064B9383F4046BAA23C97C3_inline(__this, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0032;
		}
	}
	{
		bool L_2 = __this->get_placementRequested_35();
		if (!L_2)
		{
			goto IL_0039;
		}
	}

IL_0032:
	{
		// StartPlacement();
		TapToPlace_StartPlacement_m1685E7C6CFA07495040648CE54C9E06BD0F5346A(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0039:
	{
		// SolverHandler.UpdateSolvers = false;
		SolverHandler_t59B1037EA04BC8C41E82EAC219138D9DE50F7AC2 * L_3 = ((Solver_tA73899FFFB9BC2103F0BC1C9BCF601856A5BB455 *)__this)->get_SolverHandler_13();
		NullCheck(L_3);
		SolverHandler_set_UpdateSolvers_m9B6784228879F3994A047B37CEAF9318057F7E32_inline(L_3, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_OnDisable_mC4ED9C0D6A38DD159FD1392ADEFAAAF0603CAA46 (TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2 * __this, const RuntimeMethod* method)
{
	{
		// UnregisterPlacementAction();
		TapToPlace_UnregisterPlacementAction_m0731CF019799B066DC1034E1AC96731BF96335D5(__this, /*hidden argument*/NULL);
		// base.OnDisable();
		Solver_OnDisable_m7A73CE6F95339BC3373289A39EAF6343EC63C963(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::StartPlacement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_StartPlacement_m1685E7C6CFA07495040648CE54C9E06BD0F5346A (TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * G_B6_0 = NULL;
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * G_B5_0 = NULL;
	{
		// using (StartPlacementPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2_StaticFields*)il2cpp_codegen_static_fields_for(TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2_il2cpp_TypeInfo_var))->get_StartPlacementPerfMarker_36();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// if (!startCalled)
			bool L_2 = __this->get_startCalled_34();
			if (L_2)
			{
				goto IL_001f;
			}
		}

IL_0016:
		{
			// placementRequested = true;
			__this->set_placementRequested_35((bool)1);
			// return;
			IL2CPP_LEAVE(0x83, FINALLY_0075);
		}

IL_001f:
		{
			// if (!IsBeingPlaced)
			bool L_3;
			L_3 = TapToPlace_get_IsBeingPlaced_m25232DDC7097BC3FBAABFE12FB17D30693048EDC_inline(__this, /*hidden argument*/NULL);
			if (L_3)
			{
				goto IL_0073;
			}
		}

IL_0027:
		{
			// GameObjectLayer = gameObject.layer;
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
			L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
			NullCheck(L_4);
			int32_t L_5;
			L_5 = GameObject_get_layer_m9D4C23A2FD105AF9964445BF18A77E8A49012F9F(L_4, /*hidden argument*/NULL);
			TapToPlace_set_GameObjectLayer_mDB28B91E3382B3EDB0DD60FE4C3375436844A7EF_inline(__this, L_5, /*hidden argument*/NULL);
			// gameObject.layer = ignoreRaycastLayer;
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
			L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
			int32_t L_7 = __this->get_ignoreRaycastLayer_28();
			NullCheck(L_6);
			GameObject_set_layer_m2F946916ACB41A59C46346F5243F2BAC235A36A6(L_6, L_7, /*hidden argument*/NULL);
			// SolverHandler.UpdateSolvers = true;
			SolverHandler_t59B1037EA04BC8C41E82EAC219138D9DE50F7AC2 * L_8 = ((Solver_tA73899FFFB9BC2103F0BC1C9BCF601856A5BB455 *)__this)->get_SolverHandler_13();
			NullCheck(L_8);
			SolverHandler_set_UpdateSolvers_m9B6784228879F3994A047B37CEAF9318057F7E32_inline(L_8, (bool)1, /*hidden argument*/NULL);
			// IsBeingPlaced = true;
			TapToPlace_set_IsBeingPlaced_m03A0BCB10A5E98BB0410035F7994A5CD38FB5B6D_inline(__this, (bool)1, /*hidden argument*/NULL);
			// OnPlacingStarted?.Invoke();
			UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_9;
			L_9 = TapToPlace_get_OnPlacingStarted_m57E0514AB953B6A0BA42E2F5D572EFCE2A83E498_inline(__this, /*hidden argument*/NULL);
			UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_10 = L_9;
			G_B5_0 = L_10;
			if (L_10)
			{
				G_B6_0 = L_10;
				goto IL_0068;
			}
		}

IL_0065:
		{
			goto IL_006d;
		}

IL_0068:
		{
			NullCheck(G_B6_0);
			UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5(G_B6_0, /*hidden argument*/NULL);
		}

IL_006d:
		{
			// RegisterPlacementAction();
			TapToPlace_RegisterPlacementAction_m9156F4845DCD8F771AE195D7C40BE3E55E50CA45(__this, /*hidden argument*/NULL);
		}

IL_0073:
		{
			// }
			IL2CPP_LEAVE(0x83, FINALLY_0075);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0075;
	}

FINALLY_0075:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(117)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(117)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x83, IL_0083)
	}

IL_0083:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::StopPlacement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_StopPlacement_mA80BCCEBA7D1B60B991243883DE6433802EBA639 (TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * G_B4_0 = NULL;
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * G_B3_0 = NULL;
	{
		// using (StopPlacementPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2_StaticFields*)il2cpp_codegen_static_fields_for(TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2_il2cpp_TypeInfo_var))->get_StopPlacementPerfMarker_37();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// if (IsBeingPlaced)
			bool L_2;
			L_2 = TapToPlace_get_IsBeingPlaced_m25232DDC7097BC3FBAABFE12FB17D30693048EDC_inline(__this, /*hidden argument*/NULL);
			if (!L_2)
			{
				goto IL_0051;
			}
		}

IL_0016:
		{
			// gameObject.layer = GameObjectLayer;
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
			L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
			int32_t L_4;
			L_4 = TapToPlace_get_GameObjectLayer_mF5DBC31FA0B3C36B1BE307AEB52C2CDB050A9617_inline(__this, /*hidden argument*/NULL);
			NullCheck(L_3);
			GameObject_set_layer_m2F946916ACB41A59C46346F5243F2BAC235A36A6(L_3, L_4, /*hidden argument*/NULL);
			// SolverHandler.UpdateSolvers = false;
			SolverHandler_t59B1037EA04BC8C41E82EAC219138D9DE50F7AC2 * L_5 = ((Solver_tA73899FFFB9BC2103F0BC1C9BCF601856A5BB455 *)__this)->get_SolverHandler_13();
			NullCheck(L_5);
			SolverHandler_set_UpdateSolvers_m9B6784228879F3994A047B37CEAF9318057F7E32_inline(L_5, (bool)0, /*hidden argument*/NULL);
			// IsBeingPlaced = false;
			TapToPlace_set_IsBeingPlaced_m03A0BCB10A5E98BB0410035F7994A5CD38FB5B6D_inline(__this, (bool)0, /*hidden argument*/NULL);
			// OnPlacingStopped?.Invoke();
			UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_6;
			L_6 = TapToPlace_get_OnPlacingStopped_mEC81B3BD90287C583B3A19D4F90FD26AC2D2B285_inline(__this, /*hidden argument*/NULL);
			UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_7 = L_6;
			G_B3_0 = L_7;
			if (L_7)
			{
				G_B4_0 = L_7;
				goto IL_0046;
			}
		}

IL_0043:
		{
			goto IL_004b;
		}

IL_0046:
		{
			NullCheck(G_B4_0);
			UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5(G_B4_0, /*hidden argument*/NULL);
		}

IL_004b:
		{
			// UnregisterPlacementAction();
			TapToPlace_UnregisterPlacementAction_m0731CF019799B066DC1034E1AC96731BF96335D5(__this, /*hidden argument*/NULL);
		}

IL_0051:
		{
			// }
			IL2CPP_LEAVE(0x61, FINALLY_0053);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0053;
	}

FINALLY_0053:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(83)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(83)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x61, IL_0061)
	}

IL_0061:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::SolverUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_SolverUpdate_m59B126277AF8B04584F6D32AAD717F146F932497 (TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// using (SolverUpdatePerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2_StaticFields*)il2cpp_codegen_static_fields_for(TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2_il2cpp_TypeInfo_var))->get_SolverUpdatePerfMarker_38();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// if (SolverHandler.TransformTarget != null)
			SolverHandler_t59B1037EA04BC8C41E82EAC219138D9DE50F7AC2 * L_2 = ((Solver_tA73899FFFB9BC2103F0BC1C9BCF601856A5BB455 *)__this)->get_SolverHandler_13();
			NullCheck(L_2);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
			L_3 = SolverHandler_get_TransformTarget_mABAE412BA27F8E9535EB763689E4E6F668E1A5F6(L_2, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_4;
			L_4 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
			if (!L_4)
			{
				goto IL_0033;
			}
		}

IL_0021:
		{
			// PerformRaycast();
			VirtActionInvoker0::Invoke(12 /* System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::PerformRaycast() */, __this);
			// SetPosition();
			VirtActionInvoker0::Invoke(13 /* System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::SetPosition() */, __this);
			// SetRotation();
			VirtActionInvoker0::Invoke(14 /* System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::SetRotation() */, __this);
		}

IL_0033:
		{
			// }
			IL2CPP_LEAVE(0x43, FINALLY_0035);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0035;
	}

FINALLY_0035:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(53)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(53)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x43, IL_0043)
	}

IL_0043:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::PerformRaycast()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_PerformRaycast_m764856BE9CADB67C13D4FFC94D99BF0981B5D24A (TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityRaycaster_t1C4D8F90AF243DB6D246BF422C68F79C9F261239_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_2 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// using (PerformRaycastPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2_StaticFields*)il2cpp_codegen_static_fields_for(TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2_il2cpp_TypeInfo_var))->get_PerformRaycastPerfMarker_39();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		// Transform transform = SolverHandler.TransformTarget;
		SolverHandler_t59B1037EA04BC8C41E82EAC219138D9DE50F7AC2 * L_2 = ((Solver_tA73899FFFB9BC2103F0BC1C9BCF601856A5BB455 *)__this)->get_SolverHandler_13();
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = SolverHandler_get_TransformTarget_mABAE412BA27F8E9535EB763689E4E6F668E1A5F6(L_2, /*hidden argument*/NULL);
		V_2 = L_3;
		// Vector3 origin = transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4 = V_2;
		NullCheck(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		V_3 = L_5;
		// Vector3 endpoint = transform.position + transform.forward;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6 = V_2;
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_6, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8 = V_2;
		NullCheck(L_8);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_8, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_7, L_9, /*hidden argument*/NULL);
		V_4 = L_10;
		// CurrentRay.UpdateRayStep(ref origin, ref endpoint);
		RayStep_t68267BADF85DF3BC948899D189E94EC8C2D87C6F * L_11 = __this->get_address_of_CurrentRay_29();
		RayStep_UpdateRayStep_m2098727F6DCBB3B719DBB954951E5A5F14CB0D29((RayStep_t68267BADF85DF3BC948899D189E94EC8C2D87C6F *)L_11, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_3), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_4), /*hidden argument*/NULL);
		// DidHitSurface = MixedRealityRaycaster.RaycastSimplePhysicsStep(CurrentRay, MaxRaycastDistance, MagneticSurfaces, false, out CurrentHit);
		RayStep_t68267BADF85DF3BC948899D189E94EC8C2D87C6F  L_12 = __this->get_CurrentRay_29();
		float L_13;
		L_13 = TapToPlace_get_MaxRaycastDistance_m835DCA8B0B00761F571E21B62B75EBF6808B68BC_inline(__this, /*hidden argument*/NULL);
		LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F* L_14;
		L_14 = TapToPlace_get_MagneticSurfaces_m4C567AAFA92858D23B59A5E29FC3D6BCBC6EE787_inline(__this, /*hidden argument*/NULL);
		RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * L_15 = __this->get_address_of_CurrentHit_31();
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityRaycaster_t1C4D8F90AF243DB6D246BF422C68F79C9F261239_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = MixedRealityRaycaster_RaycastSimplePhysicsStep_mA3693E6846182716219101FD4B7875A882119DEF(L_12, L_13, L_14, (bool)0, (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)L_15, /*hidden argument*/NULL);
		__this->set_DidHitSurface_30(L_16);
		// }
		IL2CPP_LEAVE(0x77, FINALLY_0069);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0069;
	}

FINALLY_0069:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(105)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(105)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x77, IL_0077)
	}

IL_0077:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::SetPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_SetPosition_m92272E12A05A39CD55A96A2DD3036BD8843A8E88 (TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float G_B4_0 = 0.0f;
	{
		// if (DidHitSurface)
		bool L_0 = __this->get_DidHitSurface_30();
		if (!L_0)
		{
			goto IL_0048;
		}
	}
	{
		// GoalPosition = CurrentHit.point;
		RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * L_1 = __this->get_address_of_CurrentHit_31();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = RaycastHit_get_point_m32F7282CBB2E13393A33BAD046BDA218E48DD21E((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)L_1, /*hidden argument*/NULL);
		Solver_set_GoalPosition_m55CE128A1EAFAE0BC3FBFB0E59B5F1B1B4A492C7(__this, L_2, /*hidden argument*/NULL);
		// float currentSurfaceNormalOffset = UseDefaultSurfaceNormalOffset ? DefaultSurfaceNormalOffset : SurfaceNormalOffset;
		bool L_3;
		L_3 = TapToPlace_get_UseDefaultSurfaceNormalOffset_m1FDFB6DBC6D5D0E9B2FBA4397BCAC77437628BD8_inline(__this, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0029;
		}
	}
	{
		float L_4;
		L_4 = TapToPlace_get_SurfaceNormalOffset_m5380A9106B77116183123BA7D5E0E5B192663D00_inline(__this, /*hidden argument*/NULL);
		G_B4_0 = L_4;
		goto IL_002f;
	}

IL_0029:
	{
		float L_5;
		L_5 = TapToPlace_get_DefaultSurfaceNormalOffset_m37A2FD3F60BBE411983EEE958EFBB5B41A7233F3(__this, /*hidden argument*/NULL);
		G_B4_0 = L_5;
	}

IL_002f:
	{
		V_0 = G_B4_0;
		// AddOffset(CurrentHit.normal * currentSurfaceNormalOffset);
		RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * L_6 = __this->get_address_of_CurrentHit_31();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = RaycastHit_get_normal_m2C813B25BAECD87FD9E9CB294278B291F4CC6674((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)L_6, /*hidden argument*/NULL);
		float L_8 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_7, L_8, /*hidden argument*/NULL);
		VirtActionInvoker1< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(11 /* System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.Solver::AddOffset(UnityEngine.Vector3) */, __this, L_9);
		// }
		return;
	}

IL_0048:
	{
		// GoalPosition = SolverHandler.TransformTarget.position + (SolverHandler.TransformTarget.forward * DefaultPlacementDistance);
		SolverHandler_t59B1037EA04BC8C41E82EAC219138D9DE50F7AC2 * L_10 = ((Solver_tA73899FFFB9BC2103F0BC1C9BCF601856A5BB455 *)__this)->get_SolverHandler_13();
		NullCheck(L_10);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = SolverHandler_get_TransformTarget_mABAE412BA27F8E9535EB763689E4E6F668E1A5F6(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_11, /*hidden argument*/NULL);
		SolverHandler_t59B1037EA04BC8C41E82EAC219138D9DE50F7AC2 * L_13 = ((Solver_tA73899FFFB9BC2103F0BC1C9BCF601856A5BB455 *)__this)->get_SolverHandler_13();
		NullCheck(L_13);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = SolverHandler_get_TransformTarget_mABAE412BA27F8E9535EB763689E4E6F668E1A5F6(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_14, /*hidden argument*/NULL);
		float L_16;
		L_16 = TapToPlace_get_DefaultPlacementDistance_m9C42566D8DC5FAD7D9B6645EC745D98F142A8887_inline(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_15, L_16, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_12, L_17, /*hidden argument*/NULL);
		Solver_set_GoalPosition_m55CE128A1EAFAE0BC3FBFB0E59B5F1B1B4A492C7(__this, L_18, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::SetRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_SetRotation_m53DDB11074495C9B68F89FC236A1A1E260FAF48B (TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2 * __this, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector3 direction = CurrentRay.Direction;
		RayStep_t68267BADF85DF3BC948899D189E94EC8C2D87C6F * L_0 = __this->get_address_of_CurrentRay_29();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = RayStep_get_Direction_m7D6703B9C3DC0D10655A7288A76BD7F029A0A9BA_inline((RayStep_t68267BADF85DF3BC948899D189E94EC8C2D87C6F *)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// Vector3 surfaceNormal = CurrentHit.normal;
		RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * L_2 = __this->get_address_of_CurrentHit_31();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = RaycastHit_get_normal_m2C813B25BAECD87FD9E9CB294278B291F4CC6674((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		// if (KeepOrientationVertical)
		bool L_4;
		L_4 = TapToPlace_get_KeepOrientationVertical_mAD456D2F0402A48461813F1BF92782AC42C1DA2A_inline(__this, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0038;
		}
	}
	{
		// direction.y = 0;
		(&V_0)->set_y_3((0.0f));
		// surfaceNormal.y = 0;
		(&V_1)->set_y_3((0.0f));
	}

IL_0038:
	{
		// if (DidHitSurface && rotateAccordingToSurface)
		bool L_5 = __this->get_DidHitSurface_30();
		if (!L_5)
		{
			goto IL_005f;
		}
	}
	{
		bool L_6 = __this->get_rotateAccordingToSurface_22();
		if (!L_6)
		{
			goto IL_005f;
		}
	}
	{
		// GoalRotation = Quaternion.LookRotation(-surfaceNormal, Vector3.up);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline(L_7, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_10;
		L_10 = Quaternion_LookRotation_m8A7DB5BDBC361586191AB67ACF857F46160EE3F1(L_8, L_9, /*hidden argument*/NULL);
		Solver_set_GoalRotation_mD7FBFA12D17ADCF284FC97A229604C8212343075(__this, L_10, /*hidden argument*/NULL);
		// }
		return;
	}

IL_005f:
	{
		// GoalRotation = Quaternion.LookRotation(direction, Vector3.up);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_13;
		L_13 = Quaternion_LookRotation_m8A7DB5BDBC361586191AB67ACF857F46160EE3F1(L_11, L_12, /*hidden argument*/NULL);
		Solver_set_GoalRotation_mD7FBFA12D17ADCF284FC97A229604C8212343075(__this, L_13, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::RegisterPlacementAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_RegisterPlacementAction_m9156F4845DCD8F771AE195D7C40BE3E55E50CA45 (TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapToPlace_OnPlacementPerformed_m5306803519FDD46FEA6F3309E23A5C3AB75CA342_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral02AA96707E7A8BC913E2055F3E956D4373F24EB4);
		s_Il2CppMethodInitialized = true;
	}
	InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * V_0 = NULL;
	{
		// InputAction placementAction = GetInputActionFromReference(placementActionReference);
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_0 = __this->get_placementActionReference_14();
		IL2CPP_RUNTIME_CLASS_INIT(TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2_il2cpp_TypeInfo_var);
		InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * L_1;
		L_1 = TapToPlace_GetInputActionFromReference_m57012EB666AFCA8FDF4DE9D8AFF43919D8741996(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// if (placementAction == null)
		InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * L_2 = V_0;
		if (L_2)
		{
			goto IL_001a;
		}
	}
	{
		// Debug.Log("Failed to register the placement action, the action reference was null or contained no action.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral02AA96707E7A8BC913E2055F3E956D4373F24EB4, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_001a:
	{
		// placementAction.performed += OnPlacementPerformed;
		InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * L_3 = V_0;
		Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 * L_4 = (Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 *)il2cpp_codegen_object_new(Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81_il2cpp_TypeInfo_var);
		Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D(L_4, __this, (intptr_t)((intptr_t)TapToPlace_OnPlacementPerformed_m5306803519FDD46FEA6F3309E23A5C3AB75CA342_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D_RuntimeMethod_var);
		NullCheck(L_3);
		InputAction_add_performed_m9FF12F3D5C984DB93D2DD75667F3B53D7B66C0A3(L_3, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::UnregisterPlacementAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_UnregisterPlacementAction_m0731CF019799B066DC1034E1AC96731BF96335D5 (TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapToPlace_OnPlacementPerformed_m5306803519FDD46FEA6F3309E23A5C3AB75CA342_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9FEEB188C926E0D8DEBF50B93373E1DCADD88966);
		s_Il2CppMethodInitialized = true;
	}
	InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * V_0 = NULL;
	{
		// InputAction placementAction = GetInputActionFromReference(placementActionReference);
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_0 = __this->get_placementActionReference_14();
		IL2CPP_RUNTIME_CLASS_INIT(TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2_il2cpp_TypeInfo_var);
		InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * L_1;
		L_1 = TapToPlace_GetInputActionFromReference_m57012EB666AFCA8FDF4DE9D8AFF43919D8741996(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// if (placementAction == null)
		InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * L_2 = V_0;
		if (L_2)
		{
			goto IL_001a;
		}
	}
	{
		// Debug.Log("Failed to unregister the placement action, the action reference was null or contained no action.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral9FEEB188C926E0D8DEBF50B93373E1DCADD88966, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_001a:
	{
		// placementAction.performed -= OnPlacementPerformed;
		InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * L_3 = V_0;
		Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 * L_4 = (Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 *)il2cpp_codegen_object_new(Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81_il2cpp_TypeInfo_var);
		Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D(L_4, __this, (intptr_t)((intptr_t)TapToPlace_OnPlacementPerformed_m5306803519FDD46FEA6F3309E23A5C3AB75CA342_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D_RuntimeMethod_var);
		NullCheck(L_3);
		InputAction_remove_performed_m141C0FA72906BDF08A33EF3728C0193EFD0AAB06(L_3, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::OnPlacementPerformed(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_OnPlacementPerformed_m5306803519FDD46FEA6F3309E23A5C3AB75CA342 (TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2 * __this, CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D  ___context0, const RuntimeMethod* method)
{
	{
		// if ((Time.time - LastTimeClicked) < DoubleClickTimeout)
		float L_0;
		L_0 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_1 = __this->get_LastTimeClicked_32();
		float L_2 = __this->get_DoubleClickTimeout_33();
		if ((!(((float)((float)il2cpp_codegen_subtract((float)L_0, (float)L_1))) < ((float)L_2))))
		{
			goto IL_0015;
		}
	}
	{
		// return;
		return;
	}

IL_0015:
	{
		// if (!IsBeingPlaced)
		bool L_3;
		L_3 = TapToPlace_get_IsBeingPlaced_m25232DDC7097BC3FBAABFE12FB17D30693048EDC_inline(__this, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0025;
		}
	}
	{
		// StartPlacement();
		TapToPlace_StartPlacement_m1685E7C6CFA07495040648CE54C9E06BD0F5346A(__this, /*hidden argument*/NULL);
		// }
		goto IL_002b;
	}

IL_0025:
	{
		// StopPlacement();
		TapToPlace_StopPlacement_mA80BCCEBA7D1B60B991243883DE6433802EBA639(__this, /*hidden argument*/NULL);
	}

IL_002b:
	{
		// LastTimeClicked = Time.time;
		float L_4;
		L_4 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		__this->set_LastTimeClicked_32(L_4);
		// }
		return;
	}
}
// UnityEngine.InputSystem.InputAction Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::GetInputActionFromReference(UnityEngine.InputSystem.InputActionReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * TapToPlace_GetInputActionFromReference_m57012EB666AFCA8FDF4DE9D8AFF43919D8741996 (InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * ___actionReference0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (actionReference == null) { return null; }
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_0 = ___actionReference0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000b;
		}
	}
	{
		// if (actionReference == null) { return null; }
		return (InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B *)NULL;
	}

IL_000b:
	{
		// return actionReference.action;
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_2 = ___actionReference0;
		NullCheck(L_2);
		InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * L_3;
		L_3 = InputActionReference_get_action_m8A9C3BDF9E0FC278DC682108E3E97E00F5DAC2A9(L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace__ctor_mE51C8195E8AE7340513F8C5C10B163AFA19CFC0F (TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Solver_tA73899FFFB9BC2103F0BC1C9BCF601856A5BB455_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private float defaultPlacementDistance = 1.5f;
		__this->set_defaultPlacementDistance_16((1.5f));
		// private float maxRaycastDistance = 20.0f;
		__this->set_maxRaycastDistance_17((20.0f));
		// private bool useDefaultSurfaceNormalOffset = true;
		__this->set_useDefaultSurfaceNormalOffset_20((bool)1);
		// private LayerMask[] magneticSurfaces = { UnityEngine.Physics.DefaultRaycastLayers };
		LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F* L_0 = (LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F*)(LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F*)SZArrayNew(LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F_il2cpp_TypeInfo_var, (uint32_t)1);
		LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F* L_1 = L_0;
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_2;
		L_2 = LayerMask_op_Implicit_mC7EE32122D2A4786D3C00B93E41604B71BF1397C(((int32_t)-5), /*hidden argument*/NULL);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 )L_2);
		__this->set_magneticSurfaces_23(L_1);
		// private bool debugEnabled = true;
		__this->set_debugEnabled_24((bool)1);
		// private UnityEvent onPlacingStarted = new UnityEvent();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_3 = (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 *)il2cpp_codegen_object_new(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4_il2cpp_TypeInfo_var);
		UnityEvent__ctor_m98D9C5A59898546B23A45388CFACA25F52A9E5A6(L_3, /*hidden argument*/NULL);
		__this->set_onPlacingStarted_25(L_3);
		// private UnityEvent onPlacingStopped = new UnityEvent();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_4 = (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 *)il2cpp_codegen_object_new(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4_il2cpp_TypeInfo_var);
		UnityEvent__ctor_m98D9C5A59898546B23A45388CFACA25F52A9E5A6(L_4, /*hidden argument*/NULL);
		__this->set_onPlacingStopped_26(L_4);
		// protected float DoubleClickTimeout = 0.5f;
		__this->set_DoubleClickTimeout_33((0.5f));
		IL2CPP_RUNTIME_CLASS_INIT(Solver_tA73899FFFB9BC2103F0BC1C9BCF601856A5BB455_il2cpp_TypeInfo_var);
		Solver__ctor_mDC88C38275512FEDE74D8229AAB58652A56539A0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.TapToPlace::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace__cctor_mB0E2316B036AEDB5A0690CC3EF36C85B1315F99A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral32E2B8232B2A08F835DCBBADA5F6DD4AC8F950D6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5529465409870544CE39603F0D2335F17AE8D433);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C740521F660B7C87495E9139EB63C242FFE0761);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA5D8D154E5D9B4EACA86B890F2045DDCA6D915C5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ProfilerMarker StartPlacementPerfMarker =
		//     new ProfilerMarker("[MRTK] TapToPlace.StartPlacement");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_0), _stringLiteralA5D8D154E5D9B4EACA86B890F2045DDCA6D915C5, /*hidden argument*/NULL);
		((TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2_StaticFields*)il2cpp_codegen_static_fields_for(TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2_il2cpp_TypeInfo_var))->set_StartPlacementPerfMarker_36(L_0);
		// private static readonly ProfilerMarker StopPlacementPerfMarker =
		//     new ProfilerMarker("[MRTK] TapToPlace.StopPlacement");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_1;
		memset((&L_1), 0, sizeof(L_1));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_1), _stringLiteral8C740521F660B7C87495E9139EB63C242FFE0761, /*hidden argument*/NULL);
		((TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2_StaticFields*)il2cpp_codegen_static_fields_for(TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2_il2cpp_TypeInfo_var))->set_StopPlacementPerfMarker_37(L_1);
		// private static readonly ProfilerMarker SolverUpdatePerfMarker =
		//     new ProfilerMarker("[MRTK] TapToPlace.SolverUpdate");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_2;
		memset((&L_2), 0, sizeof(L_2));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_2), _stringLiteral5529465409870544CE39603F0D2335F17AE8D433, /*hidden argument*/NULL);
		((TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2_StaticFields*)il2cpp_codegen_static_fields_for(TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2_il2cpp_TypeInfo_var))->set_SolverUpdatePerfMarker_38(L_2);
		// private static readonly ProfilerMarker PerformRaycastPerfMarker =
		//     new ProfilerMarker("[MRTK] TapToPlace.PerformRaycast");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_3;
		memset((&L_3), 0, sizeof(L_3));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_3), _stringLiteral32E2B8232B2A08F835DCBBADA5F6DD4AC8F950D6, /*hidden argument*/NULL);
		((TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2_StaticFields*)il2cpp_codegen_static_fields_for(TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2_il2cpp_TypeInfo_var))->set_PerformRaycastPerfMarker_39(L_3);
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
// Microsoft.MixedReality.Toolkit.SpatialManipulation.ManipulationHandFlags Microsoft.MixedReality.Toolkit.SpatialManipulation.TransformConstraint::get_HandType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TransformConstraint_get_HandType_m1F060057641DE0DD34FE9712A46459283A9CBA79 (TransformConstraint_t5F1A52B3005A031C1D9DCE0DD7FE13CCAD6DEF70 * __this, const RuntimeMethod* method)
{
	{
		// get => handType;
		int32_t L_0 = __this->get_handType_4();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.TransformConstraint::set_HandType(Microsoft.MixedReality.Toolkit.SpatialManipulation.ManipulationHandFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformConstraint_set_HandType_mF27B8655CD38A47A5287337076C137B7436BE7C0 (TransformConstraint_t5F1A52B3005A031C1D9DCE0DD7FE13CCAD6DEF70 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set => handType = value;
		int32_t L_0 = ___value0;
		__this->set_handType_4(L_0);
		return;
	}
}
// Microsoft.MixedReality.Toolkit.SpatialManipulation.ManipulationProximityFlags Microsoft.MixedReality.Toolkit.SpatialManipulation.TransformConstraint::get_ProximityType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TransformConstraint_get_ProximityType_m0430821305FB4A1C8977F8B64098E36AD6A84324 (TransformConstraint_t5F1A52B3005A031C1D9DCE0DD7FE13CCAD6DEF70 * __this, const RuntimeMethod* method)
{
	{
		// get => proximityType;
		int32_t L_0 = __this->get_proximityType_5();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.TransformConstraint::set_ProximityType(Microsoft.MixedReality.Toolkit.SpatialManipulation.ManipulationProximityFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformConstraint_set_ProximityType_mBEB09C773A653DDC30FFD2C0E06EA4E3453AB6F2 (TransformConstraint_t5F1A52B3005A031C1D9DCE0DD7FE13CCAD6DEF70 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set => proximityType = value;
		int32_t L_0 = ___value0;
		__this->set_proximityType_5(L_0);
		return;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.SpatialManipulation.TransformConstraint::get_ExecutionPriority()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TransformConstraint_get_ExecutionPriority_mD36C8924765EE39F52E373B17FCB519EBF6C87A9 (TransformConstraint_t5F1A52B3005A031C1D9DCE0DD7FE13CCAD6DEF70 * __this, const RuntimeMethod* method)
{
	{
		// get => executionOrder;
		int32_t L_0 = __this->get_executionOrder_6();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.TransformConstraint::set_ExecutionPriority(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformConstraint_set_ExecutionPriority_mFB9FA1E3982B24608070924001EAF510B43D584F (TransformConstraint_t5F1A52B3005A031C1D9DCE0DD7FE13CCAD6DEF70 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponents_TisConstraintManager_tE7450B2135FBFBA3217990D1B06D57EF56A85AD0_m165620A204E2A78B7D975C8F074E065FFAFC6654_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ConstraintManagerU5BU5D_t9EB29F6BCA4EDA40BE2B2D64ADDB33461924E6D2* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// executionOrder = value;
		int32_t L_0 = ___value0;
		__this->set_executionOrder_6(L_0);
		// foreach (var mgr in gameObject.GetComponents<ConstraintManager>())
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		ConstraintManagerU5BU5D_t9EB29F6BCA4EDA40BE2B2D64ADDB33461924E6D2* L_2;
		L_2 = GameObject_GetComponents_TisConstraintManager_tE7450B2135FBFBA3217990D1B06D57EF56A85AD0_m165620A204E2A78B7D975C8F074E065FFAFC6654(L_1, /*hidden argument*/GameObject_GetComponents_TisConstraintManager_tE7450B2135FBFBA3217990D1B06D57EF56A85AD0_m165620A204E2A78B7D975C8F074E065FFAFC6654_RuntimeMethod_var);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0023;
	}

IL_0017:
	{
		// foreach (var mgr in gameObject.GetComponents<ConstraintManager>())
		ConstraintManagerU5BU5D_t9EB29F6BCA4EDA40BE2B2D64ADDB33461924E6D2* L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		ConstraintManager_tE7450B2135FBFBA3217990D1B06D57EF56A85AD0 * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		// mgr.RefreshPriorities();
		NullCheck(L_6);
		ConstraintManager_RefreshPriorities_m12EEB55C83D16A52CE945330D456EA622C5EFCF1(L_6, /*hidden argument*/NULL);
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0023:
	{
		// foreach (var mgr in gameObject.GetComponents<ConstraintManager>())
		int32_t L_8 = V_1;
		ConstraintManagerU5BU5D_t9EB29F6BCA4EDA40BE2B2D64ADDB33461924E6D2* L_9 = V_0;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))))
		{
			goto IL_0017;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.TransformConstraint::Setup(Microsoft.MixedReality.Toolkit.MixedRealityTransform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformConstraint_Setup_m4E20B95CC84F06B5DE97930352C3F638628BB88F (TransformConstraint_t5F1A52B3005A031C1D9DCE0DD7FE13CCAD6DEF70 * __this, MixedRealityTransform_tFD89323F4387C375948490EAF26CD10F0F6E3568  ___worldPose0, const RuntimeMethod* method)
{
	{
		// InitialWorldPose = worldPose;
		MixedRealityTransform_tFD89323F4387C375948490EAF26CD10F0F6E3568  L_0 = ___worldPose0;
		__this->set_InitialWorldPose_8(L_0);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.TransformConstraint::OnManipulationStarted(Microsoft.MixedReality.Toolkit.MixedRealityTransform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformConstraint_OnManipulationStarted_mE0568EF8767A9FAD47848CBE7BDB0A5E41AD0747 (TransformConstraint_t5F1A52B3005A031C1D9DCE0DD7FE13CCAD6DEF70 * __this, MixedRealityTransform_tFD89323F4387C375948490EAF26CD10F0F6E3568  ___worldPose0, const RuntimeMethod* method)
{
	{
		// WorldPoseOnManipulationStart = worldPose;
		MixedRealityTransform_tFD89323F4387C375948490EAF26CD10F0F6E3568  L_0 = ___worldPose0;
		__this->set_WorldPoseOnManipulationStart_7(L_0);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.TransformConstraint::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformConstraint_OnEnable_mA3D1A962D9DBDE18307A8D113B739209C5A7EA3C (TransformConstraint_t5F1A52B3005A031C1D9DCE0DD7FE13CCAD6DEF70 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponents_TisConstraintManager_tE7450B2135FBFBA3217990D1B06D57EF56A85AD0_m165620A204E2A78B7D975C8F074E065FFAFC6654_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ConstraintManagerU5BU5D_t9EB29F6BCA4EDA40BE2B2D64ADDB33461924E6D2* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// var managers = gameObject.GetComponents<ConstraintManager>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		ConstraintManagerU5BU5D_t9EB29F6BCA4EDA40BE2B2D64ADDB33461924E6D2* L_1;
		L_1 = GameObject_GetComponents_TisConstraintManager_tE7450B2135FBFBA3217990D1B06D57EF56A85AD0_m165620A204E2A78B7D975C8F074E065FFAFC6654(L_0, /*hidden argument*/GameObject_GetComponents_TisConstraintManager_tE7450B2135FBFBA3217990D1B06D57EF56A85AD0_m165620A204E2A78B7D975C8F074E065FFAFC6654_RuntimeMethod_var);
		// foreach (var manager in managers)
		V_0 = L_1;
		V_1 = 0;
		goto IL_001d;
	}

IL_0010:
	{
		// foreach (var manager in managers)
		ConstraintManagerU5BU5D_t9EB29F6BCA4EDA40BE2B2D64ADDB33461924E6D2* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		ConstraintManager_tE7450B2135FBFBA3217990D1B06D57EF56A85AD0 * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		// manager.AutoRegisterConstraint(this);
		NullCheck(L_5);
		ConstraintManager_AutoRegisterConstraint_mA5B3DA87381813312C09112D094D20C4C16117F3(L_5, __this, /*hidden argument*/NULL);
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_001d:
	{
		// foreach (var manager in managers)
		int32_t L_7 = V_1;
		ConstraintManagerU5BU5D_t9EB29F6BCA4EDA40BE2B2D64ADDB33461924E6D2* L_8 = V_0;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))))
		{
			goto IL_0010;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.TransformConstraint::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformConstraint_OnDisable_m372CF75A9B5E04A6A028678E9186E26F67DAAEDC (TransformConstraint_t5F1A52B3005A031C1D9DCE0DD7FE13CCAD6DEF70 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponents_TisConstraintManager_tE7450B2135FBFBA3217990D1B06D57EF56A85AD0_m165620A204E2A78B7D975C8F074E065FFAFC6654_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ConstraintManagerU5BU5D_t9EB29F6BCA4EDA40BE2B2D64ADDB33461924E6D2* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// var managers = gameObject.GetComponents<ConstraintManager>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		ConstraintManagerU5BU5D_t9EB29F6BCA4EDA40BE2B2D64ADDB33461924E6D2* L_1;
		L_1 = GameObject_GetComponents_TisConstraintManager_tE7450B2135FBFBA3217990D1B06D57EF56A85AD0_m165620A204E2A78B7D975C8F074E065FFAFC6654(L_0, /*hidden argument*/GameObject_GetComponents_TisConstraintManager_tE7450B2135FBFBA3217990D1B06D57EF56A85AD0_m165620A204E2A78B7D975C8F074E065FFAFC6654_RuntimeMethod_var);
		// foreach (var manager in managers)
		V_0 = L_1;
		V_1 = 0;
		goto IL_001d;
	}

IL_0010:
	{
		// foreach (var manager in managers)
		ConstraintManagerU5BU5D_t9EB29F6BCA4EDA40BE2B2D64ADDB33461924E6D2* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		ConstraintManager_tE7450B2135FBFBA3217990D1B06D57EF56A85AD0 * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		// manager.AutoUnregisterConstraint(this);
		NullCheck(L_5);
		ConstraintManager_AutoUnregisterConstraint_m84348BBADEBD6BA8F051CBA1F3370F93A54EC9A3(L_5, __this, /*hidden argument*/NULL);
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_001d:
	{
		// foreach (var manager in managers)
		int32_t L_7 = V_1;
		ConstraintManagerU5BU5D_t9EB29F6BCA4EDA40BE2B2D64ADDB33461924E6D2* L_8 = V_0;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))))
		{
			goto IL_0010;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.TransformConstraint::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformConstraint__ctor_m1942E7EF7194A87B1D37CC49B74F23D4D916E324 (TransformConstraint_t5F1A52B3005A031C1D9DCE0DD7FE13CCAD6DEF70 * __this, const RuntimeMethod* method)
{
	{
		// private ManipulationHandFlags handType = ManipulationHandFlags.OneHanded | ManipulationHandFlags.TwoHanded;
		__this->set_handType_4(3);
		// private ManipulationProximityFlags proximityType = ManipulationProximityFlags.Near | ManipulationProximityFlags.Far;
		__this->set_proximityType_5(3);
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
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialManipulation.Vector3Smoothed::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3Smoothed_get_Current_m837C12DCFC8C6A4280D20705736250D8B023EB0B (Vector3Smoothed_tD20A5F686B12E3C524D8C369DF09A20DAAEDB3D3 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 Current { get; private set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_U3CCurrentU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3Smoothed_get_Current_m837C12DCFC8C6A4280D20705736250D8B023EB0B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Vector3Smoothed_tD20A5F686B12E3C524D8C369DF09A20DAAEDB3D3 * _thisAdjusted = reinterpret_cast<Vector3Smoothed_tD20A5F686B12E3C524D8C369DF09A20DAAEDB3D3 *>(__this + _offset);
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  _returnValue;
	_returnValue = Vector3Smoothed_get_Current_m837C12DCFC8C6A4280D20705736250D8B023EB0B_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.Vector3Smoothed::set_Current(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3Smoothed_set_Current_m784D4E4ABC2226BFAED8B69E52ECF3E8DD4E90BA (Vector3Smoothed_tD20A5F686B12E3C524D8C369DF09A20DAAEDB3D3 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3 Current { get; private set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___value0;
		__this->set_U3CCurrentU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Vector3Smoothed_set_Current_m784D4E4ABC2226BFAED8B69E52ECF3E8DD4E90BA_AdjustorThunk (RuntimeObject * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Vector3Smoothed_tD20A5F686B12E3C524D8C369DF09A20DAAEDB3D3 * _thisAdjusted = reinterpret_cast<Vector3Smoothed_tD20A5F686B12E3C524D8C369DF09A20DAAEDB3D3 *>(__this + _offset);
	Vector3Smoothed_set_Current_m784D4E4ABC2226BFAED8B69E52ECF3E8DD4E90BA_inline(_thisAdjusted, ___value0, method);
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialManipulation.Vector3Smoothed::get_Goal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3Smoothed_get_Goal_mE9E7C4864F3EC2E9F43533C4706F9AA628041F1C (Vector3Smoothed_tD20A5F686B12E3C524D8C369DF09A20DAAEDB3D3 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 Goal { get; set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_U3CGoalU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3Smoothed_get_Goal_mE9E7C4864F3EC2E9F43533C4706F9AA628041F1C_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Vector3Smoothed_tD20A5F686B12E3C524D8C369DF09A20DAAEDB3D3 * _thisAdjusted = reinterpret_cast<Vector3Smoothed_tD20A5F686B12E3C524D8C369DF09A20DAAEDB3D3 *>(__this + _offset);
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  _returnValue;
	_returnValue = Vector3Smoothed_get_Goal_mE9E7C4864F3EC2E9F43533C4706F9AA628041F1C_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.Vector3Smoothed::set_Goal(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3Smoothed_set_Goal_m6440222B5AB93BC55F0AC8D3D744B7FCDF3A3021 (Vector3Smoothed_tD20A5F686B12E3C524D8C369DF09A20DAAEDB3D3 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3 Goal { get; set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___value0;
		__this->set_U3CGoalU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Vector3Smoothed_set_Goal_m6440222B5AB93BC55F0AC8D3D744B7FCDF3A3021_AdjustorThunk (RuntimeObject * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Vector3Smoothed_tD20A5F686B12E3C524D8C369DF09A20DAAEDB3D3 * _thisAdjusted = reinterpret_cast<Vector3Smoothed_tD20A5F686B12E3C524D8C369DF09A20DAAEDB3D3 *>(__this + _offset);
	Vector3Smoothed_set_Goal_m6440222B5AB93BC55F0AC8D3D744B7FCDF3A3021_inline(_thisAdjusted, ___value0, method);
}
// System.Single Microsoft.MixedReality.Toolkit.SpatialManipulation.Vector3Smoothed::get_SmoothTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3Smoothed_get_SmoothTime_mC21D1385C4498DBB250C49AF1238F4E5119FBE59 (Vector3Smoothed_tD20A5F686B12E3C524D8C369DF09A20DAAEDB3D3 * __this, const RuntimeMethod* method)
{
	{
		// public float SmoothTime { get; set; }
		float L_0 = __this->get_U3CSmoothTimeU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  float Vector3Smoothed_get_SmoothTime_mC21D1385C4498DBB250C49AF1238F4E5119FBE59_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Vector3Smoothed_tD20A5F686B12E3C524D8C369DF09A20DAAEDB3D3 * _thisAdjusted = reinterpret_cast<Vector3Smoothed_tD20A5F686B12E3C524D8C369DF09A20DAAEDB3D3 *>(__this + _offset);
	float _returnValue;
	_returnValue = Vector3Smoothed_get_SmoothTime_mC21D1385C4498DBB250C49AF1238F4E5119FBE59_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.Vector3Smoothed::set_SmoothTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3Smoothed_set_SmoothTime_mFF838A6B743BB5FF2581FABD9ED61267368F174A (Vector3Smoothed_tD20A5F686B12E3C524D8C369DF09A20DAAEDB3D3 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float SmoothTime { get; set; }
		float L_0 = ___value0;
		__this->set_U3CSmoothTimeU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Vector3Smoothed_set_SmoothTime_mFF838A6B743BB5FF2581FABD9ED61267368F174A_AdjustorThunk (RuntimeObject * __this, float ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Vector3Smoothed_tD20A5F686B12E3C524D8C369DF09A20DAAEDB3D3 * _thisAdjusted = reinterpret_cast<Vector3Smoothed_tD20A5F686B12E3C524D8C369DF09A20DAAEDB3D3 *>(__this + _offset);
	Vector3Smoothed_set_SmoothTime_mFF838A6B743BB5FF2581FABD9ED61267368F174A_inline(_thisAdjusted, ___value0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.Vector3Smoothed::.ctor(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3Smoothed__ctor_m07062FF5A77155DA2C60ADCE3D5741925A0D142A (Vector3Smoothed_tD20A5F686B12E3C524D8C369DF09A20DAAEDB3D3 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, float ___smoothingTime1, const RuntimeMethod* method)
{
	{
		// public Vector3Smoothed(Vector3 value, float smoothingTime) : this()
		il2cpp_codegen_initobj(__this, sizeof(Vector3Smoothed_tD20A5F686B12E3C524D8C369DF09A20DAAEDB3D3 ));
		// Current = value;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___value0;
		Vector3Smoothed_set_Current_m784D4E4ABC2226BFAED8B69E52ECF3E8DD4E90BA_inline((Vector3Smoothed_tD20A5F686B12E3C524D8C369DF09A20DAAEDB3D3 *)__this, L_0, /*hidden argument*/NULL);
		// Goal = value;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___value0;
		Vector3Smoothed_set_Goal_m6440222B5AB93BC55F0AC8D3D744B7FCDF3A3021_inline((Vector3Smoothed_tD20A5F686B12E3C524D8C369DF09A20DAAEDB3D3 *)__this, L_1, /*hidden argument*/NULL);
		// SmoothTime = smoothingTime;
		float L_2 = ___smoothingTime1;
		Vector3Smoothed_set_SmoothTime_mFF838A6B743BB5FF2581FABD9ED61267368F174A_inline((Vector3Smoothed_tD20A5F686B12E3C524D8C369DF09A20DAAEDB3D3 *)__this, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Vector3Smoothed__ctor_m07062FF5A77155DA2C60ADCE3D5741925A0D142A_AdjustorThunk (RuntimeObject * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, float ___smoothingTime1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Vector3Smoothed_tD20A5F686B12E3C524D8C369DF09A20DAAEDB3D3 * _thisAdjusted = reinterpret_cast<Vector3Smoothed_tD20A5F686B12E3C524D8C369DF09A20DAAEDB3D3 *>(__this + _offset);
	Vector3Smoothed__ctor_m07062FF5A77155DA2C60ADCE3D5741925A0D142A(_thisAdjusted, ___value0, ___smoothingTime1, method);
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.Vector3Smoothed::SetGoal(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3Smoothed_SetGoal_m8763C4731D994339758CCA73BD83ADAE49C6BA45 (Vector3Smoothed_tD20A5F686B12E3C524D8C369DF09A20DAAEDB3D3 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___goal0, const RuntimeMethod* method)
{
	{
		// Goal = goal;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___goal0;
		Vector3Smoothed_set_Goal_m6440222B5AB93BC55F0AC8D3D744B7FCDF3A3021_inline((Vector3Smoothed_tD20A5F686B12E3C524D8C369DF09A20DAAEDB3D3 *)__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Vector3Smoothed_SetGoal_m8763C4731D994339758CCA73BD83ADAE49C6BA45_AdjustorThunk (RuntimeObject * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___goal0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Vector3Smoothed_tD20A5F686B12E3C524D8C369DF09A20DAAEDB3D3 * _thisAdjusted = reinterpret_cast<Vector3Smoothed_tD20A5F686B12E3C524D8C369DF09A20DAAEDB3D3 *>(__this + _offset);
	Vector3Smoothed_SetGoal_m8763C4731D994339758CCA73BD83ADAE49C6BA45(_thisAdjusted, ___goal0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.Vector3Smoothed::Update(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3Smoothed_Update_m5BD33E1C3D97477E6A1159EA5906CC69645D3FFC (Vector3Smoothed_tD20A5F686B12E3C524D8C369DF09A20DAAEDB3D3 * __this, float ___deltaTime0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  G_B2_1;
	memset((&G_B2_1), 0, sizeof(G_B2_1));
	Vector3Smoothed_tD20A5F686B12E3C524D8C369DF09A20DAAEDB3D3 * G_B2_2 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  G_B1_1;
	memset((&G_B1_1), 0, sizeof(G_B1_1));
	Vector3Smoothed_tD20A5F686B12E3C524D8C369DF09A20DAAEDB3D3 * G_B1_2 = NULL;
	float G_B3_0 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  G_B3_1;
	memset((&G_B3_1), 0, sizeof(G_B3_1));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  G_B3_2;
	memset((&G_B3_2), 0, sizeof(G_B3_2));
	Vector3Smoothed_tD20A5F686B12E3C524D8C369DF09A20DAAEDB3D3 * G_B3_3 = NULL;
	{
		// Current = Vector3.Lerp(Current, Goal, (Math.Abs(SmoothTime) < Mathf.Epsilon) ? 1.0f : deltaTime / SmoothTime);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Vector3Smoothed_get_Current_m837C12DCFC8C6A4280D20705736250D8B023EB0B_inline((Vector3Smoothed_tD20A5F686B12E3C524D8C369DF09A20DAAEDB3D3 *)__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Vector3Smoothed_get_Goal_mE9E7C4864F3EC2E9F43533C4706F9AA628041F1C_inline((Vector3Smoothed_tD20A5F686B12E3C524D8C369DF09A20DAAEDB3D3 *)__this, /*hidden argument*/NULL);
		float L_2;
		L_2 = Vector3Smoothed_get_SmoothTime_mC21D1385C4498DBB250C49AF1238F4E5119FBE59_inline((Vector3Smoothed_tD20A5F686B12E3C524D8C369DF09A20DAAEDB3D3 *)__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		float L_3;
		L_3 = fabsf(L_2);
		float L_4 = ((Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var))->get_Epsilon_0();
		G_B1_0 = L_1;
		G_B1_1 = L_0;
		G_B1_2 = __this;
		if ((((float)L_3) < ((float)L_4)))
		{
			G_B2_0 = L_1;
			G_B2_1 = L_0;
			G_B2_2 = __this;
			goto IL_0029;
		}
	}
	{
		float L_5 = ___deltaTime0;
		float L_6;
		L_6 = Vector3Smoothed_get_SmoothTime_mC21D1385C4498DBB250C49AF1238F4E5119FBE59_inline((Vector3Smoothed_tD20A5F686B12E3C524D8C369DF09A20DAAEDB3D3 *)__this, /*hidden argument*/NULL);
		G_B3_0 = ((float)((float)L_5/(float)L_6));
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_002e;
	}

IL_0029:
	{
		G_B3_0 = (1.0f);
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_002e:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline(G_B3_2, G_B3_1, G_B3_0, /*hidden argument*/NULL);
		Vector3Smoothed_set_Current_m784D4E4ABC2226BFAED8B69E52ECF3E8DD4E90BA_inline((Vector3Smoothed_tD20A5F686B12E3C524D8C369DF09A20DAAEDB3D3 *)G_B3_3, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Vector3Smoothed_Update_m5BD33E1C3D97477E6A1159EA5906CC69645D3FFC_AdjustorThunk (RuntimeObject * __this, float ___deltaTime0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Vector3Smoothed_tD20A5F686B12E3C524D8C369DF09A20DAAEDB3D3 * _thisAdjusted = reinterpret_cast<Vector3Smoothed_tD20A5F686B12E3C524D8C369DF09A20DAAEDB3D3 *>(__this + _offset);
	Vector3Smoothed_Update_m5BD33E1C3D97477E6A1159EA5906CC69645D3FFC(_thisAdjusted, ___deltaTime0, method);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.ConstraintManager/<>c__DisplayClass9_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0__ctor_m9923409FD940F8E3965E2D008129DBAC73F1CD35 (U3CU3Ec__DisplayClass9_0_tC1C416D48DFA1656C7D07D0F756FA32EAB996022 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.ConstraintManager/<>c__DisplayClass9_0::<AddConstraintToManualSelection>b__0(Microsoft.MixedReality.Toolkit.SpatialManipulation.TransformConstraint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass9_0_U3CAddConstraintToManualSelectionU3Eb__0_m927072189750AF12641575059DCE735B6DC8E307 (U3CU3Ec__DisplayClass9_0_tC1C416D48DFA1656C7D07D0F756FA32EAB996022 * __this, TransformConstraint_t5F1A52B3005A031C1D9DCE0DD7FE13CCAD6DEF70 * ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var existingConstraint = selectedConstraints.Find(t => t == constraint);
		TransformConstraint_t5F1A52B3005A031C1D9DCE0DD7FE13CCAD6DEF70 * L_0 = ___t0;
		TransformConstraint_t5F1A52B3005A031C1D9DCE0DD7FE13CCAD6DEF70 * L_1 = __this->get_constraint_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.HandConstraintPalmUp/<WorldLockedReattachCheck>d__44::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWorldLockedReattachCheckU3Ed__44__ctor_m6D1981031B75BA3C11104D198960CB363CD841CF (U3CWorldLockedReattachCheckU3Ed__44_t5C2D407949FC1A50AA5DFCDC31B071F7E88CE4A8 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.HandConstraintPalmUp/<WorldLockedReattachCheck>d__44::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWorldLockedReattachCheckU3Ed__44_System_IDisposable_Dispose_m801FA5A7805D18F8C63EA190AC2EACCA8E4C291A (U3CWorldLockedReattachCheckU3Ed__44_t5C2D407949FC1A50AA5DFCDC31B071F7E88CE4A8 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.SpatialManipulation.HandConstraintPalmUp/<WorldLockedReattachCheck>d__44::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWorldLockedReattachCheckU3Ed__44_MoveNext_mADA5117B827E1815B2D0D963A6CC82A69BD598A0 (U3CWorldLockedReattachCheckU3Ed__44_t5C2D407949FC1A50AA5DFCDC31B071F7E88CE4A8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mE4286200AE97E8C0C15A5C0FEB726FAFBC770F0B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mCAF8ABB9DF08E31C419963F0B8015DAC371F4E54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSubsystemHelpers_t1ABA0E77205A5382BC3173866C111D39150FBCF1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	HandConstraintPalmUp_t7213D04B52E9AF3933402DCFACAFF6EEC8424F46 * V_1 = NULL;
	Nullable_1_t8A53876455F27274DD4D239DDFF544F081FBC07E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	HandJointPose_t77237A471B6A985C8F8DCE3D0D3E19357BC2DB65  V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		HandConstraintPalmUp_t7213D04B52E9AF3933402DCFACAFF6EEC8424F46 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00be;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		goto IL_00c5;
	}

IL_0026:
	{
		// XRNode? hand = SolverHandler.CurrentTrackedHandedness.ToXRNode();
		HandConstraintPalmUp_t7213D04B52E9AF3933402DCFACAFF6EEC8424F46 * L_4 = V_1;
		NullCheck(L_4);
		SolverHandler_t59B1037EA04BC8C41E82EAC219138D9DE50F7AC2 * L_5 = ((Solver_tA73899FFFB9BC2103F0BC1C9BCF601856A5BB455 *)L_4)->get_SolverHandler_13();
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SolverHandler_get_CurrentTrackedHandedness_mF2D0953B090A0010C6E8659D5067178E8613A1A8_inline(L_5, /*hidden argument*/NULL);
		Nullable_1_t8A53876455F27274DD4D239DDFF544F081FBC07E  L_7;
		L_7 = HandednessExtensions_ToXRNode_m70BB6EE82B3DFD7DB0006A192BD653411F15BDF2(L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		// if (hand.HasValue)
		bool L_8;
		L_8 = Nullable_1_get_HasValue_mE4286200AE97E8C0C15A5C0FEB726FAFBC770F0B_inline((Nullable_1_t8A53876455F27274DD4D239DDFF544F081FBC07E *)(&V_2), /*hidden argument*/Nullable_1_get_HasValue_mE4286200AE97E8C0C15A5C0FEB726FAFBC770F0B_RuntimeMethod_var);
		if (!L_8)
		{
			goto IL_00ae;
		}
	}
	{
		// if (XRSubsystemHelpers.HandsAggregator != null &&
		//     XRSubsystemHelpers.HandsAggregator.TryGetJoint(TrackedHandJoint.Palm, hand.Value, out HandJointPose palmPose))
		IL2CPP_RUNTIME_CLASS_INIT(XRSubsystemHelpers_t1ABA0E77205A5382BC3173866C111D39150FBCF1_il2cpp_TypeInfo_var);
		HandsAggregatorSubsystem_tD97840A5BCF555DA3D8F08A5D47AD08F1E0F8FFE * L_9;
		L_9 = XRSubsystemHelpers_get_HandsAggregator_m9C262E2831ED75AEC3BCCCD8416D8B62EF7C0F2A(/*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_00ae;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XRSubsystemHelpers_t1ABA0E77205A5382BC3173866C111D39150FBCF1_il2cpp_TypeInfo_var);
		HandsAggregatorSubsystem_tD97840A5BCF555DA3D8F08A5D47AD08F1E0F8FFE * L_10;
		L_10 = XRSubsystemHelpers_get_HandsAggregator_m9C262E2831ED75AEC3BCCCD8416D8B62EF7C0F2A(/*hidden argument*/NULL);
		int32_t L_11;
		L_11 = Nullable_1_get_Value_mCAF8ABB9DF08E31C419963F0B8015DAC371F4E54((Nullable_1_t8A53876455F27274DD4D239DDFF544F081FBC07E *)(&V_2), /*hidden argument*/Nullable_1_get_Value_mCAF8ABB9DF08E31C419963F0B8015DAC371F4E54_RuntimeMethod_var);
		NullCheck(L_10);
		bool L_12;
		L_12 = HandsAggregatorSubsystem_TryGetJoint_m02A332DF9F816CA6E10FC48B3E4D62E4F2D08E2D(L_10, 0, L_11, (HandJointPose_t77237A471B6A985C8F8DCE3D0D3E19357BC2DB65 *)(&V_3), /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_00ae;
		}
	}
	{
		// float palmCameraAngle = Vector3.Angle(palmPose.Up, Camera.main.transform.forward);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = HandJointPose_get_Up_mFC5FF8890FB2E25933F84F5044B78C75C2AD4101((HandJointPose_t77237A471B6A985C8F8DCE3D0D3E19357BC2DB65 *)(&V_3), /*hidden argument*/NULL);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_14;
		L_14 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		NullCheck(L_14);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_15, /*hidden argument*/NULL);
		float L_17;
		L_17 = Vector3_Angle_m3715AB03A36C59D8CF08F8D71E2F46454EB884C1(L_13, L_16, /*hidden argument*/NULL);
		V_4 = L_17;
		// if (IsPalmMeetingThresholdRequirements(hand.Value, palmPose, palmCameraAngle) &&
		//     IsUserGazeMeetingThresholdRequirements(hand.Value))
		HandConstraintPalmUp_t7213D04B52E9AF3933402DCFACAFF6EEC8424F46 * L_18 = V_1;
		int32_t L_19;
		L_19 = Nullable_1_get_Value_mCAF8ABB9DF08E31C419963F0B8015DAC371F4E54((Nullable_1_t8A53876455F27274DD4D239DDFF544F081FBC07E *)(&V_2), /*hidden argument*/Nullable_1_get_Value_mCAF8ABB9DF08E31C419963F0B8015DAC371F4E54_RuntimeMethod_var);
		HandJointPose_t77237A471B6A985C8F8DCE3D0D3E19357BC2DB65  L_20 = V_3;
		float L_21 = V_4;
		NullCheck(L_18);
		bool L_22;
		L_22 = HandConstraintPalmUp_IsPalmMeetingThresholdRequirements_mEAB77D416805BC49E4E3EAFBAF8E9DE8D11DF9CE(L_18, L_19, L_20, L_21, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_00ae;
		}
	}
	{
		HandConstraintPalmUp_t7213D04B52E9AF3933402DCFACAFF6EEC8424F46 * L_23 = V_1;
		int32_t L_24;
		L_24 = Nullable_1_get_Value_mCAF8ABB9DF08E31C419963F0B8015DAC371F4E54((Nullable_1_t8A53876455F27274DD4D239DDFF544F081FBC07E *)(&V_2), /*hidden argument*/Nullable_1_get_Value_mCAF8ABB9DF08E31C419963F0B8015DAC371F4E54_RuntimeMethod_var);
		NullCheck(L_23);
		bool L_25;
		L_25 = HandConstraintPalmUp_IsUserGazeMeetingThresholdRequirements_m4631D7154F48142C2BF0AEDA829382C74D5DD8F8(L_23, L_24, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_00ae;
		}
	}
	{
		// gazeActivationAlreadyTriggered = false;
		HandConstraintPalmUp_t7213D04B52E9AF3933402DCFACAFF6EEC8424F46 * L_26 = V_1;
		NullCheck(L_26);
		L_26->set_gazeActivationAlreadyTriggered_46((bool)0);
		// SolverHandler.UpdateSolvers = true;
		HandConstraintPalmUp_t7213D04B52E9AF3933402DCFACAFF6EEC8424F46 * L_27 = V_1;
		NullCheck(L_27);
		SolverHandler_t59B1037EA04BC8C41E82EAC219138D9DE50F7AC2 * L_28 = ((Solver_tA73899FFFB9BC2103F0BC1C9BCF601856A5BB455 *)L_27)->get_SolverHandler_13();
		NullCheck(L_28);
		SolverHandler_set_UpdateSolvers_m9B6784228879F3994A047B37CEAF9318057F7E32_inline(L_28, (bool)1, /*hidden argument*/NULL);
	}

IL_00ae:
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00be:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_00c5:
	{
		// while (!SolverHandler.UpdateSolvers && useGazeActivation)
		HandConstraintPalmUp_t7213D04B52E9AF3933402DCFACAFF6EEC8424F46 * L_29 = V_1;
		NullCheck(L_29);
		SolverHandler_t59B1037EA04BC8C41E82EAC219138D9DE50F7AC2 * L_30 = ((Solver_tA73899FFFB9BC2103F0BC1C9BCF601856A5BB455 *)L_29)->get_SolverHandler_13();
		NullCheck(L_30);
		bool L_31;
		L_31 = SolverHandler_get_UpdateSolvers_m153B69D1F6394B3DD43373A554C6A7B8FF1B2AC2_inline(L_30, /*hidden argument*/NULL);
		if (L_31)
		{
			goto IL_00dd;
		}
	}
	{
		HandConstraintPalmUp_t7213D04B52E9AF3933402DCFACAFF6EEC8424F46 * L_32 = V_1;
		NullCheck(L_32);
		bool L_33 = L_32->get_useGazeActivation_43();
		if (L_33)
		{
			goto IL_0026;
		}
	}

IL_00dd:
	{
		// }
		return (bool)0;
	}
}
// System.Object Microsoft.MixedReality.Toolkit.SpatialManipulation.HandConstraintPalmUp/<WorldLockedReattachCheck>d__44::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CWorldLockedReattachCheckU3Ed__44_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m5874B1C26814732219455B7AEFC849C5921B4CEF (U3CWorldLockedReattachCheckU3Ed__44_t5C2D407949FC1A50AA5DFCDC31B071F7E88CE4A8 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.HandConstraintPalmUp/<WorldLockedReattachCheck>d__44::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWorldLockedReattachCheckU3Ed__44_System_Collections_IEnumerator_Reset_m8AF3DBBE4CFBFBEC5EEA3E36570F7F4981CEF6B0 (U3CWorldLockedReattachCheckU3Ed__44_t5C2D407949FC1A50AA5DFCDC31B071F7E88CE4A8 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWorldLockedReattachCheckU3Ed__44_System_Collections_IEnumerator_Reset_m8AF3DBBE4CFBFBEC5EEA3E36570F7F4981CEF6B0_RuntimeMethod_var)));
	}
}
// System.Object Microsoft.MixedReality.Toolkit.SpatialManipulation.HandConstraintPalmUp/<WorldLockedReattachCheck>d__44::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CWorldLockedReattachCheckU3Ed__44_System_Collections_IEnumerator_get_Current_m40796E556C3D90BB4257DC1C1C3DF14606C360C2 (U3CWorldLockedReattachCheckU3Ed__44_t5C2D407949FC1A50AA5DFCDC31B071F7E88CE4A8 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// Conversion methods for marshalling of: Microsoft.MixedReality.Toolkit.SpatialManipulation.ObjectManipulator/LogicImplementation
IL2CPP_EXTERN_C void LogicImplementation_t9847E1B6A092FB8BA4E507DED3FD1938D096740E_marshal_pinvoke(const LogicImplementation_t9847E1B6A092FB8BA4E507DED3FD1938D096740E& unmarshaled, LogicImplementation_t9847E1B6A092FB8BA4E507DED3FD1938D096740E_marshaled_pinvoke& marshaled)
{
	Exception_t* ___moveLogic_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'moveLogic' of type 'LogicImplementation'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___moveLogic_0Exception, NULL);
}
IL2CPP_EXTERN_C void LogicImplementation_t9847E1B6A092FB8BA4E507DED3FD1938D096740E_marshal_pinvoke_back(const LogicImplementation_t9847E1B6A092FB8BA4E507DED3FD1938D096740E_marshaled_pinvoke& marshaled, LogicImplementation_t9847E1B6A092FB8BA4E507DED3FD1938D096740E& unmarshaled)
{
	Exception_t* ___moveLogic_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'moveLogic' of type 'LogicImplementation'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___moveLogic_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Microsoft.MixedReality.Toolkit.SpatialManipulation.ObjectManipulator/LogicImplementation
IL2CPP_EXTERN_C void LogicImplementation_t9847E1B6A092FB8BA4E507DED3FD1938D096740E_marshal_pinvoke_cleanup(LogicImplementation_t9847E1B6A092FB8BA4E507DED3FD1938D096740E_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Microsoft.MixedReality.Toolkit.SpatialManipulation.ObjectManipulator/LogicImplementation
IL2CPP_EXTERN_C void LogicImplementation_t9847E1B6A092FB8BA4E507DED3FD1938D096740E_marshal_com(const LogicImplementation_t9847E1B6A092FB8BA4E507DED3FD1938D096740E& unmarshaled, LogicImplementation_t9847E1B6A092FB8BA4E507DED3FD1938D096740E_marshaled_com& marshaled)
{
	Exception_t* ___moveLogic_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'moveLogic' of type 'LogicImplementation'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___moveLogic_0Exception, NULL);
}
IL2CPP_EXTERN_C void LogicImplementation_t9847E1B6A092FB8BA4E507DED3FD1938D096740E_marshal_com_back(const LogicImplementation_t9847E1B6A092FB8BA4E507DED3FD1938D096740E_marshaled_com& marshaled, LogicImplementation_t9847E1B6A092FB8BA4E507DED3FD1938D096740E& unmarshaled)
{
	Exception_t* ___moveLogic_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'moveLogic' of type 'LogicImplementation'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___moveLogic_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Microsoft.MixedReality.Toolkit.SpatialManipulation.ObjectManipulator/LogicImplementation
IL2CPP_EXTERN_C void LogicImplementation_t9847E1B6A092FB8BA4E507DED3FD1938D096740E_marshal_com_cleanup(LogicImplementation_t9847E1B6A092FB8BA4E507DED3FD1938D096740E_marshaled_com& marshaled)
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
// Conversion methods for marshalling of: Microsoft.MixedReality.Toolkit.SpatialManipulation.ObjectManipulator/LogicType
IL2CPP_EXTERN_C void LogicType_t0CADC9EB6EB2484EE9977A752D9CA023C57FE610_marshal_pinvoke(const LogicType_t0CADC9EB6EB2484EE9977A752D9CA023C57FE610& unmarshaled, LogicType_t0CADC9EB6EB2484EE9977A752D9CA023C57FE610_marshaled_pinvoke& marshaled)
{
	Exception_t* ___moveLogicType_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'moveLogicType' of type 'LogicType': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___moveLogicType_0Exception, NULL);
}
IL2CPP_EXTERN_C void LogicType_t0CADC9EB6EB2484EE9977A752D9CA023C57FE610_marshal_pinvoke_back(const LogicType_t0CADC9EB6EB2484EE9977A752D9CA023C57FE610_marshaled_pinvoke& marshaled, LogicType_t0CADC9EB6EB2484EE9977A752D9CA023C57FE610& unmarshaled)
{
	Exception_t* ___moveLogicType_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'moveLogicType' of type 'LogicType': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___moveLogicType_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Microsoft.MixedReality.Toolkit.SpatialManipulation.ObjectManipulator/LogicType
IL2CPP_EXTERN_C void LogicType_t0CADC9EB6EB2484EE9977A752D9CA023C57FE610_marshal_pinvoke_cleanup(LogicType_t0CADC9EB6EB2484EE9977A752D9CA023C57FE610_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Microsoft.MixedReality.Toolkit.SpatialManipulation.ObjectManipulator/LogicType
IL2CPP_EXTERN_C void LogicType_t0CADC9EB6EB2484EE9977A752D9CA023C57FE610_marshal_com(const LogicType_t0CADC9EB6EB2484EE9977A752D9CA023C57FE610& unmarshaled, LogicType_t0CADC9EB6EB2484EE9977A752D9CA023C57FE610_marshaled_com& marshaled)
{
	Exception_t* ___moveLogicType_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'moveLogicType' of type 'LogicType': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___moveLogicType_0Exception, NULL);
}
IL2CPP_EXTERN_C void LogicType_t0CADC9EB6EB2484EE9977A752D9CA023C57FE610_marshal_com_back(const LogicType_t0CADC9EB6EB2484EE9977A752D9CA023C57FE610_marshaled_com& marshaled, LogicType_t0CADC9EB6EB2484EE9977A752D9CA023C57FE610& unmarshaled)
{
	Exception_t* ___moveLogicType_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'moveLogicType' of type 'LogicType': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___moveLogicType_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Microsoft.MixedReality.Toolkit.SpatialManipulation.ObjectManipulator/LogicType
IL2CPP_EXTERN_C void LogicType_t0CADC9EB6EB2484EE9977A752D9CA023C57FE610_marshal_com_cleanup(LogicType_t0CADC9EB6EB2484EE9977A752D9CA023C57FE610_marshaled_com& marshaled)
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
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m5DDBCD2DB4AA10C9395DC190B01EE5E38CFAA9DF (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t3ED49D580091D12AAF39D1B417F831F77CFFE5A1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t3ED49D580091D12AAF39D1B417F831F77CFFE5A1 * L_0 = (U3CU3Ec_t3ED49D580091D12AAF39D1B417F831F77CFFE5A1 *)il2cpp_codegen_object_new(U3CU3Ec_t3ED49D580091D12AAF39D1B417F831F77CFFE5A1_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m26080C9C925F1A1B2589B311B7DB47C3673E0417(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t3ED49D580091D12AAF39D1B417F831F77CFFE5A1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3ED49D580091D12AAF39D1B417F831F77CFFE5A1_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m26080C9C925F1A1B2589B311B7DB47C3673E0417 (U3CU3Ec_t3ED49D580091D12AAF39D1B417F831F77CFFE5A1 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals/<>c::<.cctor>b__54_0(Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals/HandlePoint,Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals/HandlePoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3C_cctorU3Eb__54_0_mA39103D24E08340BDA03E05AE19202411A49A49E (U3CU3Ec_t3ED49D580091D12AAF39D1B417F831F77CFFE5A1 * __this, HandlePoint_t91E19093111D8B0BCA87EDF0F669B78522CA0164  ___a0, HandlePoint_t91E19093111D8B0BCA87EDF0F669B78522CA0164  ___b1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static Comparison<HandlePoint> CompareHandlePoints = (a, b) => TurnDirection(comparisonAnchor, a.Position, b.Position);
		IL2CPP_RUNTIME_CLASS_INIT(SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E_il2cpp_TypeInfo_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ((SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E_StaticFields*)il2cpp_codegen_static_fields_for(SqueezableBoxVisuals_tCBF5925090BBA28922788CCD2D3337BA98E95F9E_il2cpp_TypeInfo_var))->get_comparisonAnchor_23();
		HandlePoint_t91E19093111D8B0BCA87EDF0F669B78522CA0164  L_1 = ___a0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = L_1.get_Position_1();
		HandlePoint_t91E19093111D8B0BCA87EDF0F669B78522CA0164  L_3 = ___b1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = L_3.get_Position_1();
		int32_t L_5;
		L_5 = SqueezableBoxVisuals_TurnDirection_mC38DF3E8D30F77C4849540712403700162836ECB(L_0, L_2, L_4, /*hidden argument*/NULL);
		return L_5;
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
// Conversion methods for marshalling of: Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals/HandlePoint
IL2CPP_EXTERN_C void HandlePoint_t91E19093111D8B0BCA87EDF0F669B78522CA0164_marshal_pinvoke(const HandlePoint_t91E19093111D8B0BCA87EDF0F669B78522CA0164& unmarshaled, HandlePoint_t91E19093111D8B0BCA87EDF0F669B78522CA0164_marshaled_pinvoke& marshaled)
{
	Exception_t* ___Handle_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Handle' of type 'HandlePoint': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Handle_0Exception, NULL);
}
IL2CPP_EXTERN_C void HandlePoint_t91E19093111D8B0BCA87EDF0F669B78522CA0164_marshal_pinvoke_back(const HandlePoint_t91E19093111D8B0BCA87EDF0F669B78522CA0164_marshaled_pinvoke& marshaled, HandlePoint_t91E19093111D8B0BCA87EDF0F669B78522CA0164& unmarshaled)
{
	Exception_t* ___Handle_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Handle' of type 'HandlePoint': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Handle_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals/HandlePoint
IL2CPP_EXTERN_C void HandlePoint_t91E19093111D8B0BCA87EDF0F669B78522CA0164_marshal_pinvoke_cleanup(HandlePoint_t91E19093111D8B0BCA87EDF0F669B78522CA0164_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals/HandlePoint
IL2CPP_EXTERN_C void HandlePoint_t91E19093111D8B0BCA87EDF0F669B78522CA0164_marshal_com(const HandlePoint_t91E19093111D8B0BCA87EDF0F669B78522CA0164& unmarshaled, HandlePoint_t91E19093111D8B0BCA87EDF0F669B78522CA0164_marshaled_com& marshaled)
{
	Exception_t* ___Handle_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Handle' of type 'HandlePoint': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Handle_0Exception, NULL);
}
IL2CPP_EXTERN_C void HandlePoint_t91E19093111D8B0BCA87EDF0F669B78522CA0164_marshal_com_back(const HandlePoint_t91E19093111D8B0BCA87EDF0F669B78522CA0164_marshaled_com& marshaled, HandlePoint_t91E19093111D8B0BCA87EDF0F669B78522CA0164& unmarshaled)
{
	Exception_t* ___Handle_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Handle' of type 'HandlePoint': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Handle_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Microsoft.MixedReality.Toolkit.SpatialManipulation.SqueezableBoxVisuals/HandlePoint
IL2CPP_EXTERN_C void HandlePoint_t91E19093111D8B0BCA87EDF0F669B78522CA0164_marshal_com_cleanup(HandlePoint_t91E19093111D8B0BCA87EDF0F669B78522CA0164_marshaled_com& marshaled)
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StatefulInteractable_t67843E0A65DBFB7777C42C51281749C8C71AA203 * BoundsControl_get_Interactable_m08A355DFDA7A174D014BC0E656B8BB18D5651FC6_inline (BoundsControl_t020B1395A554F19C45493DAA05E7ECF0D611AB9E * __this, const RuntimeMethod* method)
{
	{
		// get => interactable;
		StatefulInteractable_t67843E0A65DBFB7777C42C51281749C8C71AA203 * L_0 = __this->get_interactable_11();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___v0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___v0;
		float L_3 = L_2.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BoundsHandleInteractable_set_BoundsControlRoot_m25B0DF1281A996B34B7C186944F262DE6C72B2FE_inline (BoundsHandleInteractable_tF957D394A29234622B27304D99E5408B7971132B * __this, BoundsControl_t020B1395A554F19C45493DAA05E7ECF0D611AB9E * ___value0, const RuntimeMethod* method)
{
	{
		// boundsControlRoot = value;
		BoundsControl_t020B1395A554F19C45493DAA05E7ECF0D611AB9E * L_0 = ___value0;
		__this->set_boundsControlRoot_87(L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BoundsControl_get_HandlesActive_m21C58775F42962D42B6084FF22F95248AB68ACF9_inline (BoundsControl_t020B1395A554F19C45493DAA05E7ECF0D611AB9E * __this, const RuntimeMethod* method)
{
	{
		// get => handlesActive;
		bool L_0 = __this->get_handlesActive_15();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TimedFlag_tC5C87C9B210414D5EFFF70BA26D6C98CD11D655A * MRTKBaseInteractable_get_IsActiveHovered_mB8DD392FD90165A50B18E699499C059E22541183_inline (MRTKBaseInteractable_tD2EF3F3747FEC77DC86C6F96F61C3496529229A7 * __this, const RuntimeMethod* method)
{
	{
		// public TimedFlag IsActiveHovered { get => isActiveHovered; }
		TimedFlag_tC5C87C9B210414D5EFFF70BA26D6C98CD11D655A * L_0 = __this->get_isActiveHovered_62();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BoundsControl_get_IsFlat_m7BAD3E2F1A04793D33E54598ACB524E26CF327BF_inline (BoundsControl_t020B1395A554F19C45493DAA05E7ECF0D611AB9E * __this, const RuntimeMethod* method)
{
	{
		// public bool IsFlat { get; protected set; }
		bool L_0 = __this->get_U3CIsFlatU3Ek__BackingField_28();
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BoundsControl_get_EnabledHandles_m61E55F00051AC9E6B857625E3C49272693948E81_inline (BoundsControl_t020B1395A554F19C45493DAA05E7ECF0D611AB9E * __this, const RuntimeMethod* method)
{
	{
		// get => enabledHandles;
		int32_t L_0 = __this->get_enabledHandles_16();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline (ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * __this, const RuntimeMethod* method)
{
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		memset((&L_1), 0, sizeof(L_1));
		AutoScope__ctor_m4131730A501F687FF95B2963EABAC7844C6B9859_inline((&L_1), (intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(L_0, /*hidden argument*/NULL);
		___t2 = L_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___a0;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___b1;
		float L_5 = L_4.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_x_2();
		float L_8 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = ___a0;
		float L_10 = L_9.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = ___b1;
		float L_12 = L_11.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = ___a0;
		float L_14 = L_13.get_y_3();
		float L_15 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = ___a0;
		float L_17 = L_16.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = ___b1;
		float L_19 = L_18.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = ___a0;
		float L_21 = L_20.get_z_4();
		float L_22 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_23), ((float)il2cpp_codegen_add((float)L_3, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), (float)L_8)))), ((float)il2cpp_codegen_add((float)L_10, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_12, (float)L_14)), (float)L_15)))), ((float)il2cpp_codegen_add((float)L_17, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_19, (float)L_21)), (float)L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Scale_m8805EE8D2586DE7B6143FA35819B3D5CF1981FB3_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
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
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_3)), ((float)il2cpp_codegen_multiply((float)L_5, (float)L_7)), ((float)il2cpp_codegen_multiply((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
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
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BoundsHandleInteractable_get_HandleType_m4041910B9088D8F7E3FB3635B068B4A8B6715BB4_inline (BoundsHandleInteractable_tF957D394A29234622B27304D99E5408B7971132B * __this, const RuntimeMethod* method)
{
	{
		// public HandleType HandleType { get => handleType; set => handleType = value; }
		int32_t L_0 = __this->get_handleType_92();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BoundsHandleInteractable_set_IsFlattened_m0F2319FFD9812EAA65CFBD8EDE6F079A6760E87A_inline (BoundsHandleInteractable_tF957D394A29234622B27304D99E5408B7971132B * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsFlattened { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CIsFlattenedU3Ek__BackingField_91(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline (AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * __this, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		ProfilerUnsafeUtility_EndSample_m0435B2EE7963614F3D154A83D44269FE4D1A85B0((intptr_t)L_0, /*hidden argument*/NULL);
		return;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mD19905B093915BA12852732EA27AA2DBE030D11F_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___lhs0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___rhs1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___lhs0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___rhs1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___lhs0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___rhs1;
		float L_11 = L_10.get_z_4();
		V_0 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_1, (float)L_3)), (float)((float)il2cpp_codegen_multiply((float)L_5, (float)L_7)))), (float)((float)il2cpp_codegen_multiply((float)L_9, (float)L_11))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_12 = V_0;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___a0;
		float L_3 = L_2.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_6), ((-L_1)), ((-L_3)), ((-L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BoundsHandleInteractable_set_FlattenVector_m721D708E015A16A8AD37BC4885927F8B77451F3D_inline (BoundsHandleInteractable_tF957D394A29234622B27304D99E5408B7971132B * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3 FlattenVector { get; set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___value0;
		__this->set_U3CFlattenVectorU3Ek__BackingField_90(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___b1;
		float L_3 = L_2.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___a0;
		float L_5 = L_4.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___b1;
		float L_7 = L_6.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_8), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline (ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
		intptr_t L_1;
		L_1 = ProfilerUnsafeUtility_CreateMarker_m419027084C68545B765B9345949D8BFCB96C51AD(L_0, (uint16_t)1, 0, 0, /*hidden argument*/NULL);
		__this->set_m_Ptr_0((intptr_t)L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SurfaceMagnetism_get_CurrentRaycastDirectionMode_mBD74605FDAAF6D1EE02C078E421A686BD5371600_inline (SurfaceMagnetism_t23AC1508708E4CA5D97B38DEDEDD8DB5FE6E6161 * __this, const RuntimeMethod* method)
{
	{
		// get => currentRaycastDirectionMode;
		int32_t L_0 = __this->get_currentRaycastDirectionMode_26();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  SolverHandler_get_GoalPosition_mB7BCC11B22CDDA506695DD37C65D28E427C7AE6C_inline (SolverHandler_t59B1037EA04BC8C41E82EAC219138D9DE50F7AC2 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 GoalPosition { get; set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_U3CGoalPositionU3Ek__BackingField_14();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3Smoothed_tD20A5F686B12E3C524D8C369DF09A20DAAEDB3D3  SolverHandler_get_AltScale_mA6848E5643047DABE31D22D0CA5C1E5DEB2B0FB6_inline (SolverHandler_t59B1037EA04BC8C41E82EAC219138D9DE50F7AC2 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3Smoothed AltScale { get; set; }
		Vector3Smoothed_tD20A5F686B12E3C524D8C369DF09A20DAAEDB3D3  L_0 = __this->get_U3CAltScaleU3Ek__BackingField_17();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3Smoothed_get_Current_m837C12DCFC8C6A4280D20705736250D8B023EB0B_inline (Vector3Smoothed_tD20A5F686B12E3C524D8C369DF09A20DAAEDB3D3 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 Current { get; private set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_U3CCurrentU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SurfaceMagnetism_get_KeepOrientationVertical_m092E225F8CD9B5C6A68EA6B9592FCCA7B4907F89_inline (SurfaceMagnetism_t23AC1508708E4CA5D97B38DEDEDD8DB5FE6E6161 * __this, const RuntimeMethod* method)
{
	{
		// get => keepOrientationVertical;
		bool L_0 = __this->get_keepOrientationVertical_29();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SurfaceMagnetism_get_CurrentOrientationMode_m38F671EC6081B269DBEC0AA089D46365D1DC3ADF_inline (SurfaceMagnetism_t23AC1508708E4CA5D97B38DEDEDD8DB5FE6E6161 * __this, const RuntimeMethod* method)
{
	{
		// get => orientationMode;
		int32_t L_0 = __this->get_orientationMode_27();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  SolverHandler_get_GoalRotation_m0DA74B5AF6CAA31239A28FC657BC99BA69648DB7_inline (SolverHandler_t59B1037EA04BC8C41E82EAC219138D9DE50F7AC2 * __this, const RuntimeMethod* method)
{
	{
		// public Quaternion GoalRotation { get; set; }
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_0 = __this->get_U3CGoalRotationU3Ek__BackingField_15();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  RayStep_get_Direction_m7D6703B9C3DC0D10655A7288A76BD7F029A0A9BA_inline (RayStep_t68267BADF85DF3BC948899D189E94EC8C2D87C6F * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 Direction { get; private set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_U3CDirectionU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SurfaceMagnetism_get_DebugEnabled_m140F20D05A7F8260927FFB5CE8ED3E6ADA1B1DCA_inline (SurfaceMagnetism_t23AC1508708E4CA5D97B38DEDEDD8DB5FE6E6161 * __this, const RuntimeMethod* method)
{
	{
		// get => debugEnabled;
		bool L_0 = __this->get_debugEnabled_30();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  RayStep_get_Origin_m4A2FBDEDA6BC36DC659AE2760E40F42128104F6C_inline (RayStep_t68267BADF85DF3BC948899D189E94EC8C2D87C6F * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 Origin { get; private set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_U3COriginU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  RayStep_get_Terminus_mBE0B27EF305C6079E6C8C6B7572C78630E332B7E_inline (RayStep_t68267BADF85DF3BC948899D189E94EC8C2D87C6F * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 Terminus { get; private set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_U3CTerminusU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SurfaceMagnetism_get_RaycastMode_m4938850E9FAA66EB4EE6B5F1FEC27446ADFCC1F6_inline (SurfaceMagnetism_t23AC1508708E4CA5D97B38DEDEDD8DB5FE6E6161 * __this, const RuntimeMethod* method)
{
	{
		// get => raycastMode;
		int32_t L_0 = __this->get_raycastMode_19();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_OnSurface_m7D14342CE400FC2C7B2A2ECDF33D97F56B778A82_inline (SurfaceMagnetism_t23AC1508708E4CA5D97B38DEDEDD8DB5FE6E6161 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool OnSurface { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3COnSurfaceU3Ek__BackingField_31(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SurfaceMagnetism_get_OnSurface_m31311A1A3DBA940622E39BB8CABD8933F8128976_inline (SurfaceMagnetism_t23AC1508708E4CA5D97B38DEDEDD8DB5FE6E6161 * __this, const RuntimeMethod* method)
{
	{
		// public bool OnSurface { get; private set; }
		bool L_0 = __this->get_U3COnSurfaceU3Ek__BackingField_31();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline (float ___d0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a1;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a1;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a1;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)((float)L_1/(float)L_2)), ((float)((float)L_4/(float)L_5)), ((float)((float)L_7/(float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TapToPlace_get_AutoStart_m41ADB5B237F328EF0064B9383F4046BAA23C97C3_inline (TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2 * __this, const RuntimeMethod* method)
{
	{
		// get => autoStart;
		bool L_0 = __this->get_autoStart_15();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SolverHandler_set_UpdateSolvers_m9B6784228879F3994A047B37CEAF9318057F7E32_inline (SolverHandler_t59B1037EA04BC8C41E82EAC219138D9DE50F7AC2 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set => updateSolvers = value;
		bool L_0 = ___value0;
		__this->set_updateSolvers_12(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TapToPlace_get_IsBeingPlaced_m25232DDC7097BC3FBAABFE12FB17D30693048EDC_inline (TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsBeingPlaced { get; protected set; }
		bool L_0 = __this->get_U3CIsBeingPlacedU3Ek__BackingField_18();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TapToPlace_set_GameObjectLayer_mDB28B91E3382B3EDB0DD60FE4C3375436844A7EF_inline (TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// protected internal int GameObjectLayer { get; protected set; }
		int32_t L_0 = ___value0;
		__this->set_U3CGameObjectLayerU3Ek__BackingField_27(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TapToPlace_set_IsBeingPlaced_m03A0BCB10A5E98BB0410035F7994A5CD38FB5B6D_inline (TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsBeingPlaced { get; protected set; }
		bool L_0 = ___value0;
		__this->set_U3CIsBeingPlacedU3Ek__BackingField_18(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * TapToPlace_get_OnPlacingStarted_m57E0514AB953B6A0BA42E2F5D572EFCE2A83E498_inline (TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2 * __this, const RuntimeMethod* method)
{
	{
		// get => onPlacingStarted;
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_0 = __this->get_onPlacingStarted_25();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TapToPlace_get_GameObjectLayer_mF5DBC31FA0B3C36B1BE307AEB52C2CDB050A9617_inline (TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2 * __this, const RuntimeMethod* method)
{
	{
		// protected internal int GameObjectLayer { get; protected set; }
		int32_t L_0 = __this->get_U3CGameObjectLayerU3Ek__BackingField_27();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * TapToPlace_get_OnPlacingStopped_mEC81B3BD90287C583B3A19D4F90FD26AC2D2B285_inline (TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2 * __this, const RuntimeMethod* method)
{
	{
		// get => onPlacingStopped;
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_0 = __this->get_onPlacingStopped_26();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TapToPlace_get_MaxRaycastDistance_m835DCA8B0B00761F571E21B62B75EBF6808B68BC_inline (TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2 * __this, const RuntimeMethod* method)
{
	{
		// get => maxRaycastDistance;
		float L_0 = __this->get_maxRaycastDistance_17();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F* TapToPlace_get_MagneticSurfaces_m4C567AAFA92858D23B59A5E29FC3D6BCBC6EE787_inline (TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2 * __this, const RuntimeMethod* method)
{
	{
		// get => magneticSurfaces;
		LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F* L_0 = __this->get_magneticSurfaces_23();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TapToPlace_get_UseDefaultSurfaceNormalOffset_m1FDFB6DBC6D5D0E9B2FBA4397BCAC77437628BD8_inline (TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2 * __this, const RuntimeMethod* method)
{
	{
		// get => useDefaultSurfaceNormalOffset;
		bool L_0 = __this->get_useDefaultSurfaceNormalOffset_20();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TapToPlace_get_SurfaceNormalOffset_m5380A9106B77116183123BA7D5E0E5B192663D00_inline (TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2 * __this, const RuntimeMethod* method)
{
	{
		// get => surfaceNormalOffset;
		float L_0 = __this->get_surfaceNormalOffset_19();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TapToPlace_get_DefaultPlacementDistance_m9C42566D8DC5FAD7D9B6645EC745D98F142A8887_inline (TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2 * __this, const RuntimeMethod* method)
{
	{
		// get => defaultPlacementDistance;
		float L_0 = __this->get_defaultPlacementDistance_16();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TapToPlace_get_KeepOrientationVertical_mAD456D2F0402A48461813F1BF92782AC42C1DA2A_inline (TapToPlace_tB4C32357A7FF4A31A7193A153B62293D02F598A2 * __this, const RuntimeMethod* method)
{
	{
		// get => keepOrientationVertical;
		bool L_0 = __this->get_keepOrientationVertical_21();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3Smoothed_set_Current_m784D4E4ABC2226BFAED8B69E52ECF3E8DD4E90BA_inline (Vector3Smoothed_tD20A5F686B12E3C524D8C369DF09A20DAAEDB3D3 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3 Current { get; private set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___value0;
		__this->set_U3CCurrentU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3Smoothed_get_Goal_mE9E7C4864F3EC2E9F43533C4706F9AA628041F1C_inline (Vector3Smoothed_tD20A5F686B12E3C524D8C369DF09A20DAAEDB3D3 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 Goal { get; set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_U3CGoalU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3Smoothed_set_Goal_m6440222B5AB93BC55F0AC8D3D744B7FCDF3A3021_inline (Vector3Smoothed_tD20A5F686B12E3C524D8C369DF09A20DAAEDB3D3 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3 Goal { get; set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___value0;
		__this->set_U3CGoalU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3Smoothed_get_SmoothTime_mC21D1385C4498DBB250C49AF1238F4E5119FBE59_inline (Vector3Smoothed_tD20A5F686B12E3C524D8C369DF09A20DAAEDB3D3 * __this, const RuntimeMethod* method)
{
	{
		// public float SmoothTime { get; set; }
		float L_0 = __this->get_U3CSmoothTimeU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3Smoothed_set_SmoothTime_mFF838A6B743BB5FF2581FABD9ED61267368F174A_inline (Vector3Smoothed_tD20A5F686B12E3C524D8C369DF09A20DAAEDB3D3 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float SmoothTime { get; set; }
		float L_0 = ___value0;
		__this->set_U3CSmoothTimeU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SolverHandler_get_CurrentTrackedHandedness_mF2D0953B090A0010C6E8659D5067178E8613A1A8_inline (SolverHandler_t59B1037EA04BC8C41E82EAC219138D9DE50F7AC2 * __this, const RuntimeMethod* method)
{
	{
		// public Handedness CurrentTrackedHandedness => currentTrackedHandedness;
		int32_t L_0 = __this->get_currentTrackedHandedness_19();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SolverHandler_get_UpdateSolvers_m153B69D1F6394B3DD43373A554C6A7B8FF1B2AC2_inline (SolverHandler_t59B1037EA04BC8C41E82EAC219138D9DE50F7AC2 * __this, const RuntimeMethod* method)
{
	{
		// get => updateSolvers;
		bool L_0 = __this->get_updateSolvers_12();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HandlePoint_t91E19093111D8B0BCA87EDF0F669B78522CA0164  List_1_get_Item_mF40959BD2A0D8F1CBDCE115BDA37F7E3767EB922_gshared_inline (List_1_t5B44A6C65ABA13F93E4D6EC9EC79567BB087CC9B * __this, int32_t ___index0, const RuntimeMethod* method)
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
		HandlePointU5BU5D_tF4198D52EE89D95AA3DAEA10800965485AB31C28* L_2 = (HandlePointU5BU5D_tF4198D52EE89D95AA3DAEA10800965485AB31C28*)__this->get__items_1();
		int32_t L_3 = ___index0;
		HandlePoint_t91E19093111D8B0BCA87EDF0F669B78522CA0164  L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((HandlePointU5BU5D_tF4198D52EE89D95AA3DAEA10800965485AB31C28*)L_2, (int32_t)L_3);
		return (HandlePoint_t91E19093111D8B0BCA87EDF0F669B78522CA0164 )L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m3336665B1EEF196DEE976CCC6504C965A9C4ECF0_gshared_inline (List_1_t5B44A6C65ABA13F93E4D6EC9EC79567BB087CC9B * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HandlePoint_t91E19093111D8B0BCA87EDF0F669B78522CA0164  Enumerator_get_Current_mC13697F6D9750E1DEA40C725761EE84AB6E7FC3F_gshared_inline (Enumerator_t26258AA2194D0AA0FCFD867C989EBA242854BD2B * __this, const RuntimeMethod* method)
{
	{
		HandlePoint_t91E19093111D8B0BCA87EDF0F669B78522CA0164  L_0 = (HandlePoint_t91E19093111D8B0BCA87EDF0F669B78522CA0164 )__this->get_current_3();
		return (HandlePoint_t91E19093111D8B0BCA87EDF0F669B78522CA0164 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_mED24A025DF95B8CE560C82EE94A2A96B990BA8B1_gshared_inline (Stack_1_tBBB21EE44D1282CA179A656956ED6B3BF9DD4B32 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_1();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m4C033F49F5318E94BC8CBA9CE5175EFDBFADEF9C_gshared_inline (Nullable_1_t64244F99361E39CBE565C5E89436C898F18DF5DC * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return (bool)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope__ctor_m4131730A501F687FF95B2963EABAC7844C6B9859_inline (AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * __this, intptr_t ___markerPtr0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___markerPtr0;
		__this->set_m_Ptr_0((intptr_t)L_0);
		intptr_t L_1 = ___markerPtr0;
		ProfilerUnsafeUtility_BeginSample_m1B2CAD1BC7C7C390514317A8D51FB798D4622AE4((intptr_t)L_1, /*hidden argument*/NULL);
		return;
	}
}
