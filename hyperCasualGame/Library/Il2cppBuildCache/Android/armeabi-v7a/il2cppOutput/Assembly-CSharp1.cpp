#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t34AA4AF4E7352129CA58045901530E41445AC16D;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.ParticleSystem[]
struct ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// UnityEngine.UI.Text[]
struct TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F;
// UnityEngine.Transform[]
struct TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// AiCanAttackCircle
struct AiCanAttackCircle_t57AE50A882353B23FA5A30DF81FBEE01909E19B6;
// UnityEngine.Animation
struct Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8;
// UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11;
// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149;
// UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// UnityEngine.BoxCollider
struct BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5;
// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// CameraShakeSimpleScript
struct CameraShakeSimpleScript_t948411B88D6F43F322BCE831BCF7E5405604259A;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02;
// UnityEngine.Collision
struct Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// DeathLogPanelController
struct DeathLogPanelController_t87E4399AB36E6AB25976252311C792D0197C6D40;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// HealthController
struct HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// Joystick
struct Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.AI.NavMeshAgent
struct NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// PanelController
struct PanelController_t680C04009837CA28BD14657765EC2AAE385ED0EA;
// UnityEngine.ParticleSystem
struct ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E;
// ProjectileMoveScript
struct ProjectileMoveScript_t8E5328E659143159EA6BDE95FD65EC7A674B237E;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.Rigidbody
struct Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A;
// RotateToMouseScript
struct RotateToMouseScript_t484F9391662B1A307753F7AE65E5DC8BDB6764E9;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD;
// UnityEngine.UI.Slider
struct Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// ai
struct ai_t05DCF615948AD04F90BBCFF646B8389E83581B71;
// attack
struct attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C;
// cameraShaker
struct cameraShaker_t9CE5FEB9CB9D54949F9CA55EBB612EDA135EDF32;
// enemyHealthSystem1
struct enemyHealthSystem1_t9D32045CB414C7BF3B895294B1044F2D9FFA0029;
// enemyPathMovement
struct enemyPathMovement_t2A082E51F0F47B4E09CD70F138BEF58C105BD216;
// lookAtCam
struct lookAtCam_t64131884DEED4BA8406F72036C9D4F5B245BA14C;
// move
struct move_tF5C934E0EAF4295D46D7DAA6C508AFAB1B699276;
// scriptTexttest
struct scriptTexttest_t5DA02D7FF2D49D1970E133E3A0E2D37B2E4D90F8;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// CameraShakeSimpleScript/<Shake>d__5
struct U3CShakeU3Ed__5_t4D78750F530E974ECA1E718C81F0AC4A03284EB6;
// LoadingPage/<LoadAsynchronously>d__3
struct U3CLoadAsynchronouslyU3Ed__3_tEC679E349F2E1391F257C32519B899B2914C2551;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// ProjectileMoveScript/<DestroyParticle>d__21
struct U3CDestroyParticleU3Ed__21_tB5537FC9F989A65C210D9C078C1025D7530EA976;
// ProjectileMoveScript/<DestroyParticleIfDontHit>d__22
struct U3CDestroyParticleIfDontHitU3Ed__22_tC33BDA9F0E02008663734E4929A94C85729D00CB;
// RotateToMouseScript/<UpdateRay>d__9
struct U3CUpdateRayU3Ed__9_tAF42C0C52B4ACFDCDC70E2B1A1F726AA6756614C;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780;
// attack/<Shake>d__38
struct U3CShakeU3Ed__38_t4E7C35392CD4D28A64E7CB425C9C546FDA8F51FC;
// cameraShaker/<Shake>d__0
struct U3CShakeU3Ed__0_t56ABF31C41CA87AFA3AC45DD82CF6F23D6F283A7;

IL2CPP_EXTERN_C RuntimeClass* ArenaSellection_t3B2C26DA7D530C043B40B4E0FA39AF4035038994_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PanelController_t680C04009837CA28BD14657765EC2AAE385ED0EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CShakeU3Ed__0_t56ABF31C41CA87AFA3AC45DD82CF6F23D6F283A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* enemyPathMovement_t2A082E51F0F47B4E09CD70F138BEF58C105BD216_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* move_tF5C934E0EAF4295D46D7DAA6C508AFAB1B699276_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0166B729D0847BFF2B54C5AADC089A2F0C6EB1CD;
IL2CPP_EXTERN_C String_t* _stringLiteral0CBBD18F8C88EC0D00ADB2B37B18AC09AD3B77B9;
IL2CPP_EXTERN_C String_t* _stringLiteral18D585E9BDEB94D032ACFBA24D6F623FC9B2B2FC;
IL2CPP_EXTERN_C String_t* _stringLiteral2103E02F663B34B7C8054990E279FB3420E835DF;
IL2CPP_EXTERN_C String_t* _stringLiteral255BCC1A53692949FCC4A1A4B72B5983FC77E2DA;
IL2CPP_EXTERN_C String_t* _stringLiteral2568C43845DEEC50FE47BEFB0B904AE9FF1FEA25;
IL2CPP_EXTERN_C String_t* _stringLiteral341872AF21C32D6A74449BC426100C98602C2E63;
IL2CPP_EXTERN_C String_t* _stringLiteral38809CA117CCA33BA8933F3362EBEC78BF6A8E1F;
IL2CPP_EXTERN_C String_t* _stringLiteral3B085C3D47665C0E5A70C7A2475DEF7A655F30B3;
IL2CPP_EXTERN_C String_t* _stringLiteral48E4CC100C213DF2B5D397CC5CF4A327E3356D4F;
IL2CPP_EXTERN_C String_t* _stringLiteral544E8A453765685AA792580EEAB651B27F01E024;
IL2CPP_EXTERN_C String_t* _stringLiteral57A30A8B3941573CA39D1B17D681DE5DFD76091E;
IL2CPP_EXTERN_C String_t* _stringLiteral60825F916DEE1CD3D51CF0776EFD9A4DC0889DB1;
IL2CPP_EXTERN_C String_t* _stringLiteral64DA3AB49BD4A30D8DFAF1CE8FBB03A5700B8A7A;
IL2CPP_EXTERN_C String_t* _stringLiteral758BB5EC1495433B8639A7B28454DD315FB3B747;
IL2CPP_EXTERN_C String_t* _stringLiteral770137FA8A298E99C782183F7BFA1DB8235515C7;
IL2CPP_EXTERN_C String_t* _stringLiteral8857C3E1FFEB7E77373A99F4755ED8BF28ECBC64;
IL2CPP_EXTERN_C String_t* _stringLiteral8BA91AB297BCB7B3D41CECE50BD50476A49EF81D;
IL2CPP_EXTERN_C String_t* _stringLiteral940D4C1D9C3ED31FAF49AE7789CDEF8256223B8F;
IL2CPP_EXTERN_C String_t* _stringLiteral98D1B162005C82A6351012D2FEBB8ABBEADFB458;
IL2CPP_EXTERN_C String_t* _stringLiteral99F8385E86F9A594795915717EE6639D9AB80324;
IL2CPP_EXTERN_C String_t* _stringLiteral9CCAD0804681D389662AE4D59666F2C220293CCE;
IL2CPP_EXTERN_C String_t* _stringLiteral9F0F847A9C98CAC53E9608EBD9FB868149DF8F15;
IL2CPP_EXTERN_C String_t* _stringLiteral9FBF31E575806B916FC0F7315D0359EC2699DCC2;
IL2CPP_EXTERN_C String_t* _stringLiteralA50160048687C05C4A6257A7E3773F0E2F8B6A26;
IL2CPP_EXTERN_C String_t* _stringLiteralA787B2F90B6DB394AA87BD57BB47C7D0F302E573;
IL2CPP_EXTERN_C String_t* _stringLiteralAAC1109D6216B0F3500C82EE33EA82A343C4964A;
IL2CPP_EXTERN_C String_t* _stringLiteralAF120D3ACD2B78C190ECC5D0D6CFA5211E11785C;
IL2CPP_EXTERN_C String_t* _stringLiteralBA3404FE970656CDBAB1F0D3E3F1550052F084B3;
IL2CPP_EXTERN_C String_t* _stringLiteralBD121E2E551B83A0EAD630CA78330E7D21A41AD3;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDA7E8B88100AA34B19982A11B0554BAF879AFF81;
IL2CPP_EXTERN_C String_t* _stringLiteralE6C03ECA0E8B21A86DB488BD71CD9A4622EB7985;
IL2CPP_EXTERN_C String_t* _stringLiteralEDC7DA317AC4027BE399B744AF03A8F9E239673D;
IL2CPP_EXTERN_C String_t* _stringLiteralF0F6F73D75D1F075FBF018CC4DF0D3DE567D3DE9;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisAiCanAttackCircle_t57AE50A882353B23FA5A30DF81FBEE01909E19B6_mBE6C3FB3D5ADB99D8FB079ABBC1B6AEAB1BDF807_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisSlider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A_mECB3B5A216AD4AAA7331E7F6731886264840D054_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisBoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5_m0D682A42739E30A25411905C0A712C2BEE81F861_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisNavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B_m15077FF184192C84FCF6B2A1FC8ECF53C9220F2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m91CE0171326B90198E69EAFA60F45473CAC6E0C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_Tisai_t05DCF615948AD04F90BBCFF646B8389E83581B71_m3AE4C964EDD0B5968A0ED31120D6896937CE1FEA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisenemyHealthSystem1_t9D32045CB414C7BF3B895294B1044F2D9FFA0029_m43B1E00A13972A750952D0E9B84D030B14DDBA2E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m75CC9D1656BD67C760E6D5EA89403C89B728E8F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m7556907CF90B895FDFBEC11100A5F7AD5FAF1AA6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisDeathLogPanelController_t87E4399AB36E6AB25976252311C792D0197C6D40_m32ECC9AB44B3F5870FFDF95D1E1EA7CFE9CDF1D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m538EA9E269978336C890E5FA90908BF7249AB395_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisProjectileMoveScript_t8E5328E659143159EA6BDE95FD65EC7A674B237E_mEB7BE1C64D5652FCA8203DDEC1A7179C65325D65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_Tisai_t05DCF615948AD04F90BBCFF646B8389E83581B71_m1777513B730827DD343C6947A74DF512795EE90F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_Tisattack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C_m81C01CBE5561AC69191BF28F07430FDBCD508A7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m7AB707ADE023585729593334A399B3FF485A7982_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mF1D464BA700E6389AEA8AF2F197270F387D9A41F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m82AF14687C6FA2B1572D859A551E3ADBCBADC3C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8B222F262DF0C4B49E12B4E87AB2162202744499_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisJoystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873_m7209E3C1CAB57BED00FB7BEF8EEF44EBADFD5C7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDestroyParticleIfDontHitU3Ed__22_System_Collections_IEnumerator_Reset_m4E44C382400EFEF56EDC62A03ADCB18E4EDF5AAE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDestroyParticleU3Ed__21_System_Collections_IEnumerator_Reset_m3A6420E6E3D304AF7765C67220543020FA068C93_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLoadAsynchronouslyU3Ed__3_System_Collections_IEnumerator_Reset_mC4D6E8709A104EDD782FFB1B2D9BD0DDA5839CF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CShakeU3Ed__0_System_Collections_IEnumerator_Reset_m2F5C429A30F92CCDBECF253EC0C39158763E49E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CShakeU3Ed__38_System_Collections_IEnumerator_Reset_m6CE4EB7654293DC8FB13F52D4425B4D8D6D9183F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CShakeU3Ed__5_System_Collections_IEnumerator_Reset_m84CD7308C3D7700156AADBB3E5FD3ECAB36CE0A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CUpdateRayU3Ed__9_System_Collections_IEnumerator_Reset_m25D63F3001C98BE581B5B039926E0EAF8B406774_RuntimeMethod_var;
struct ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 ;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7;
struct TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


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


// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0, ____items_1)); }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* get__items_1() const { return ____items_1; }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0_StaticFields, ____emptyArray_5)); }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* get__emptyArray_5() const { return ____emptyArray_5; }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// HealthController
struct HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7  : public RuntimeObject
{
public:
	// System.Int32 HealthController::healthMax
	int32_t ___healthMax_0;
	// System.Int32 HealthController::healthCurrent
	int32_t ___healthCurrent_1;
	// System.Boolean HealthController::die
	bool ___die_2;

public:
	inline static int32_t get_offset_of_healthMax_0() { return static_cast<int32_t>(offsetof(HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7, ___healthMax_0)); }
	inline int32_t get_healthMax_0() const { return ___healthMax_0; }
	inline int32_t* get_address_of_healthMax_0() { return &___healthMax_0; }
	inline void set_healthMax_0(int32_t value)
	{
		___healthMax_0 = value;
	}

	inline static int32_t get_offset_of_healthCurrent_1() { return static_cast<int32_t>(offsetof(HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7, ___healthCurrent_1)); }
	inline int32_t get_healthCurrent_1() const { return ___healthCurrent_1; }
	inline int32_t* get_address_of_healthCurrent_1() { return &___healthCurrent_1; }
	inline void set_healthCurrent_1(int32_t value)
	{
		___healthCurrent_1 = value;
	}

	inline static int32_t get_offset_of_die_2() { return static_cast<int32_t>(offsetof(HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7, ___die_2)); }
	inline bool get_die_2() const { return ___die_2; }
	inline bool* get_address_of_die_2() { return &___die_2; }
	inline void set_die_2(bool value)
	{
		___die_2 = value;
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

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// LoadingPage/<LoadAsynchronously>d__3
struct U3CLoadAsynchronouslyU3Ed__3_tEC679E349F2E1391F257C32519B899B2914C2551  : public RuntimeObject
{
public:
	// System.Int32 LoadingPage/<LoadAsynchronously>d__3::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object LoadingPage/<LoadAsynchronously>d__3::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Int32 LoadingPage/<LoadAsynchronously>d__3::sceneIndex
	int32_t ___sceneIndex_2;
	// UnityEngine.AsyncOperation LoadingPage/<LoadAsynchronously>d__3::<operation>5__2
	AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * ___U3CoperationU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CLoadAsynchronouslyU3Ed__3_tEC679E349F2E1391F257C32519B899B2914C2551, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CLoadAsynchronouslyU3Ed__3_tEC679E349F2E1391F257C32519B899B2914C2551, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_sceneIndex_2() { return static_cast<int32_t>(offsetof(U3CLoadAsynchronouslyU3Ed__3_tEC679E349F2E1391F257C32519B899B2914C2551, ___sceneIndex_2)); }
	inline int32_t get_sceneIndex_2() const { return ___sceneIndex_2; }
	inline int32_t* get_address_of_sceneIndex_2() { return &___sceneIndex_2; }
	inline void set_sceneIndex_2(int32_t value)
	{
		___sceneIndex_2 = value;
	}

	inline static int32_t get_offset_of_U3CoperationU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CLoadAsynchronouslyU3Ed__3_tEC679E349F2E1391F257C32519B899B2914C2551, ___U3CoperationU3E5__2_3)); }
	inline AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * get_U3CoperationU3E5__2_3() const { return ___U3CoperationU3E5__2_3; }
	inline AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 ** get_address_of_U3CoperationU3E5__2_3() { return &___U3CoperationU3E5__2_3; }
	inline void set_U3CoperationU3E5__2_3(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * value)
	{
		___U3CoperationU3E5__2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CoperationU3E5__2_3), (void*)value);
	}
};


// ProjectileMoveScript/<DestroyParticle>d__21
struct U3CDestroyParticleU3Ed__21_tB5537FC9F989A65C210D9C078C1025D7530EA976  : public RuntimeObject
{
public:
	// System.Int32 ProjectileMoveScript/<DestroyParticle>d__21::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ProjectileMoveScript/<DestroyParticle>d__21::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// ProjectileMoveScript ProjectileMoveScript/<DestroyParticle>d__21::<>4__this
	ProjectileMoveScript_t8E5328E659143159EA6BDE95FD65EC7A674B237E * ___U3CU3E4__this_2;
	// System.Single ProjectileMoveScript/<DestroyParticle>d__21::waitTime
	float ___waitTime_3;
	// System.Collections.Generic.List`1<UnityEngine.Transform> ProjectileMoveScript/<DestroyParticle>d__21::<tList>5__2
	List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * ___U3CtListU3E5__2_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDestroyParticleU3Ed__21_tB5537FC9F989A65C210D9C078C1025D7530EA976, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CDestroyParticleU3Ed__21_tB5537FC9F989A65C210D9C078C1025D7530EA976, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CDestroyParticleU3Ed__21_tB5537FC9F989A65C210D9C078C1025D7530EA976, ___U3CU3E4__this_2)); }
	inline ProjectileMoveScript_t8E5328E659143159EA6BDE95FD65EC7A674B237E * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline ProjectileMoveScript_t8E5328E659143159EA6BDE95FD65EC7A674B237E ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(ProjectileMoveScript_t8E5328E659143159EA6BDE95FD65EC7A674B237E * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_waitTime_3() { return static_cast<int32_t>(offsetof(U3CDestroyParticleU3Ed__21_tB5537FC9F989A65C210D9C078C1025D7530EA976, ___waitTime_3)); }
	inline float get_waitTime_3() const { return ___waitTime_3; }
	inline float* get_address_of_waitTime_3() { return &___waitTime_3; }
	inline void set_waitTime_3(float value)
	{
		___waitTime_3 = value;
	}

	inline static int32_t get_offset_of_U3CtListU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CDestroyParticleU3Ed__21_tB5537FC9F989A65C210D9C078C1025D7530EA976, ___U3CtListU3E5__2_4)); }
	inline List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * get_U3CtListU3E5__2_4() const { return ___U3CtListU3E5__2_4; }
	inline List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 ** get_address_of_U3CtListU3E5__2_4() { return &___U3CtListU3E5__2_4; }
	inline void set_U3CtListU3E5__2_4(List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * value)
	{
		___U3CtListU3E5__2_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtListU3E5__2_4), (void*)value);
	}
};


// ProjectileMoveScript/<DestroyParticleIfDontHit>d__22
struct U3CDestroyParticleIfDontHitU3Ed__22_tC33BDA9F0E02008663734E4929A94C85729D00CB  : public RuntimeObject
{
public:
	// System.Int32 ProjectileMoveScript/<DestroyParticleIfDontHit>d__22::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ProjectileMoveScript/<DestroyParticleIfDontHit>d__22::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Single ProjectileMoveScript/<DestroyParticleIfDontHit>d__22::waitTime
	float ___waitTime_2;
	// ProjectileMoveScript ProjectileMoveScript/<DestroyParticleIfDontHit>d__22::<>4__this
	ProjectileMoveScript_t8E5328E659143159EA6BDE95FD65EC7A674B237E * ___U3CU3E4__this_3;
	// System.Collections.Generic.List`1<UnityEngine.Transform> ProjectileMoveScript/<DestroyParticleIfDontHit>d__22::<tList>5__2
	List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * ___U3CtListU3E5__2_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDestroyParticleIfDontHitU3Ed__22_tC33BDA9F0E02008663734E4929A94C85729D00CB, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CDestroyParticleIfDontHitU3Ed__22_tC33BDA9F0E02008663734E4929A94C85729D00CB, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_waitTime_2() { return static_cast<int32_t>(offsetof(U3CDestroyParticleIfDontHitU3Ed__22_tC33BDA9F0E02008663734E4929A94C85729D00CB, ___waitTime_2)); }
	inline float get_waitTime_2() const { return ___waitTime_2; }
	inline float* get_address_of_waitTime_2() { return &___waitTime_2; }
	inline void set_waitTime_2(float value)
	{
		___waitTime_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CDestroyParticleIfDontHitU3Ed__22_tC33BDA9F0E02008663734E4929A94C85729D00CB, ___U3CU3E4__this_3)); }
	inline ProjectileMoveScript_t8E5328E659143159EA6BDE95FD65EC7A674B237E * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline ProjectileMoveScript_t8E5328E659143159EA6BDE95FD65EC7A674B237E ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(ProjectileMoveScript_t8E5328E659143159EA6BDE95FD65EC7A674B237E * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtListU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CDestroyParticleIfDontHitU3Ed__22_tC33BDA9F0E02008663734E4929A94C85729D00CB, ___U3CtListU3E5__2_4)); }
	inline List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * get_U3CtListU3E5__2_4() const { return ___U3CtListU3E5__2_4; }
	inline List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 ** get_address_of_U3CtListU3E5__2_4() { return &___U3CtListU3E5__2_4; }
	inline void set_U3CtListU3E5__2_4(List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * value)
	{
		___U3CtListU3E5__2_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtListU3E5__2_4), (void*)value);
	}
};


// RotateToMouseScript/<UpdateRay>d__9
struct U3CUpdateRayU3Ed__9_tAF42C0C52B4ACFDCDC70E2B1A1F726AA6756614C  : public RuntimeObject
{
public:
	// System.Int32 RotateToMouseScript/<UpdateRay>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object RotateToMouseScript/<UpdateRay>d__9::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// RotateToMouseScript RotateToMouseScript/<UpdateRay>d__9::<>4__this
	RotateToMouseScript_t484F9391662B1A307753F7AE65E5DC8BDB6764E9 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CUpdateRayU3Ed__9_tAF42C0C52B4ACFDCDC70E2B1A1F726AA6756614C, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CUpdateRayU3Ed__9_tAF42C0C52B4ACFDCDC70E2B1A1F726AA6756614C, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CUpdateRayU3Ed__9_tAF42C0C52B4ACFDCDC70E2B1A1F726AA6756614C, ___U3CU3E4__this_2)); }
	inline RotateToMouseScript_t484F9391662B1A307753F7AE65E5DC8BDB6764E9 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline RotateToMouseScript_t484F9391662B1A307753F7AE65E5DC8BDB6764E9 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(RotateToMouseScript_t484F9391662B1A307753F7AE65E5DC8BDB6764E9 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
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


// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2__padding[1];
	};

public:
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


// UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E 
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


// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// CameraHolder/SVA
struct SVA_tF4D04A570299D8106DD273E4C6850A570B85E56E 
{
public:
	// System.Single CameraHolder/SVA::S
	float ___S_0;
	// System.Single CameraHolder/SVA::V
	float ___V_1;
	// System.Single CameraHolder/SVA::A
	float ___A_2;

public:
	inline static int32_t get_offset_of_S_0() { return static_cast<int32_t>(offsetof(SVA_tF4D04A570299D8106DD273E4C6850A570B85E56E, ___S_0)); }
	inline float get_S_0() const { return ___S_0; }
	inline float* get_address_of_S_0() { return &___S_0; }
	inline void set_S_0(float value)
	{
		___S_0 = value;
	}

	inline static int32_t get_offset_of_V_1() { return static_cast<int32_t>(offsetof(SVA_tF4D04A570299D8106DD273E4C6850A570B85E56E, ___V_1)); }
	inline float get_V_1() const { return ___V_1; }
	inline float* get_address_of_V_1() { return &___V_1; }
	inline void set_V_1(float value)
	{
		___V_1 = value;
	}

	inline static int32_t get_offset_of_A_2() { return static_cast<int32_t>(offsetof(SVA_tF4D04A570299D8106DD273E4C6850A570B85E56E, ___A_2)); }
	inline float get_A_2() const { return ___A_2; }
	inline float* get_address_of_A_2() { return &___A_2; }
	inline void set_A_2(float value)
	{
		___A_2 = value;
	}
};


// UnityEngine.ParticleSystem/MainModule
struct MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B 
{
public:
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/MainModule::m_ParticleSystem
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___m_ParticleSystem_0;

public:
	inline static int32_t get_offset_of_m_ParticleSystem_0() { return static_cast<int32_t>(offsetof(MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B, ___m_ParticleSystem_0)); }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * get_m_ParticleSystem_0() const { return ___m_ParticleSystem_0; }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E ** get_address_of_m_ParticleSystem_0() { return &___m_ParticleSystem_0; }
	inline void set_m_ParticleSystem_0(ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * value)
	{
		___m_ParticleSystem_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParticleSystem_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/MainModule
struct MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B_marshaled_pinvoke
{
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/MainModule
struct MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B_marshaled_com
{
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___m_ParticleSystem_0;
};

// UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * ___m_completeCallback_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_completeCallback_1() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_completeCallback_1)); }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * get_m_completeCallback_1() const { return ___m_completeCallback_1; }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 ** get_address_of_m_completeCallback_1() { return &___m_completeCallback_1; }
	inline void set_m_completeCallback_1(Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * value)
	{
		___m_completeCallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_completeCallback_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// AxisOptions
struct AxisOptions_tBA55DF2DF082DD4057B8F9CF10A86CD579BE9582 
{
public:
	// System.Int32 AxisOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AxisOptions_tBA55DF2DF082DD4057B8F9CF10A86CD579BE9582, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Collision
struct Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_RelativeVelocity_1;
	// UnityEngine.Component UnityEngine.Collision::m_Body
	Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * ___m_Body_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___m_Collider_3;
	// System.Int32 UnityEngine.Collision::m_ContactCount
	int32_t ___m_ContactCount_4;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_ReusedContacts
	ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* ___m_ReusedContacts_5;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_LegacyContacts
	ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* ___m_LegacyContacts_6;

public:
	inline static int32_t get_offset_of_m_Impulse_0() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_Impulse_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Impulse_0() const { return ___m_Impulse_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Impulse_0() { return &___m_Impulse_0; }
	inline void set_m_Impulse_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Impulse_0 = value;
	}

	inline static int32_t get_offset_of_m_RelativeVelocity_1() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_RelativeVelocity_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_RelativeVelocity_1() const { return ___m_RelativeVelocity_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_RelativeVelocity_1() { return &___m_RelativeVelocity_1; }
	inline void set_m_RelativeVelocity_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_RelativeVelocity_1 = value;
	}

	inline static int32_t get_offset_of_m_Body_2() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_Body_2)); }
	inline Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * get_m_Body_2() const { return ___m_Body_2; }
	inline Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 ** get_address_of_m_Body_2() { return &___m_Body_2; }
	inline void set_m_Body_2(Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * value)
	{
		___m_Body_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Body_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Collider_3() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_Collider_3)); }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * get_m_Collider_3() const { return ___m_Collider_3; }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 ** get_address_of_m_Collider_3() { return &___m_Collider_3; }
	inline void set_m_Collider_3(Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * value)
	{
		___m_Collider_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Collider_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_ContactCount_4() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_ContactCount_4)); }
	inline int32_t get_m_ContactCount_4() const { return ___m_ContactCount_4; }
	inline int32_t* get_address_of_m_ContactCount_4() { return &___m_ContactCount_4; }
	inline void set_m_ContactCount_4(int32_t value)
	{
		___m_ContactCount_4 = value;
	}

	inline static int32_t get_offset_of_m_ReusedContacts_5() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_ReusedContacts_5)); }
	inline ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* get_m_ReusedContacts_5() const { return ___m_ReusedContacts_5; }
	inline ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B** get_address_of_m_ReusedContacts_5() { return &___m_ReusedContacts_5; }
	inline void set_m_ReusedContacts_5(ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* value)
	{
		___m_ReusedContacts_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ReusedContacts_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_LegacyContacts_6() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_LegacyContacts_6)); }
	inline ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* get_m_LegacyContacts_6() const { return ___m_LegacyContacts_6; }
	inline ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B** get_address_of_m_LegacyContacts_6() { return &___m_LegacyContacts_6; }
	inline void set_m_LegacyContacts_6(ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* value)
	{
		___m_LegacyContacts_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LegacyContacts_6), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Collision
struct Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0_marshaled_pinvoke
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Impulse_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_RelativeVelocity_1;
	Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * ___m_Body_2;
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * ___m_ReusedContacts_5;
	ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * ___m_LegacyContacts_6;
};
// Native definition for COM marshalling of UnityEngine.Collision
struct Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0_marshaled_com
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Impulse_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_RelativeVelocity_1;
	Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * ___m_Body_2;
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * ___m_ReusedContacts_5;
	ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * ___m_LegacyContacts_6;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 
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


// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// UnityEngine.AI.NavMeshHit
struct NavMeshHit_t62B242C636F3B036AE65C266EC79A2B62330FF9D 
{
public:
	// UnityEngine.Vector3 UnityEngine.AI.NavMeshHit::m_Position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Position_0;
	// UnityEngine.Vector3 UnityEngine.AI.NavMeshHit::m_Normal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Normal_1;
	// System.Single UnityEngine.AI.NavMeshHit::m_Distance
	float ___m_Distance_2;
	// System.Int32 UnityEngine.AI.NavMeshHit::m_Mask
	int32_t ___m_Mask_3;
	// System.Int32 UnityEngine.AI.NavMeshHit::m_Hit
	int32_t ___m_Hit_4;

public:
	inline static int32_t get_offset_of_m_Position_0() { return static_cast<int32_t>(offsetof(NavMeshHit_t62B242C636F3B036AE65C266EC79A2B62330FF9D, ___m_Position_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Position_0() const { return ___m_Position_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Position_0() { return &___m_Position_0; }
	inline void set_m_Position_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Position_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(NavMeshHit_t62B242C636F3B036AE65C266EC79A2B62330FF9D, ___m_Normal_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_Distance_2() { return static_cast<int32_t>(offsetof(NavMeshHit_t62B242C636F3B036AE65C266EC79A2B62330FF9D, ___m_Distance_2)); }
	inline float get_m_Distance_2() const { return ___m_Distance_2; }
	inline float* get_address_of_m_Distance_2() { return &___m_Distance_2; }
	inline void set_m_Distance_2(float value)
	{
		___m_Distance_2 = value;
	}

	inline static int32_t get_offset_of_m_Mask_3() { return static_cast<int32_t>(offsetof(NavMeshHit_t62B242C636F3B036AE65C266EC79A2B62330FF9D, ___m_Mask_3)); }
	inline int32_t get_m_Mask_3() const { return ___m_Mask_3; }
	inline int32_t* get_address_of_m_Mask_3() { return &___m_Mask_3; }
	inline void set_m_Mask_3(int32_t value)
	{
		___m_Mask_3 = value;
	}

	inline static int32_t get_offset_of_m_Hit_4() { return static_cast<int32_t>(offsetof(NavMeshHit_t62B242C636F3B036AE65C266EC79A2B62330FF9D, ___m_Hit_4)); }
	inline int32_t get_m_Hit_4() const { return ___m_Hit_4; }
	inline int32_t* get_address_of_m_Hit_4() { return &___m_Hit_4; }
	inline void set_m_Hit_4(int32_t value)
	{
		___m_Hit_4 = value;
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

// UnityEngine.ParticleSystemCurveMode
struct ParticleSystemCurveMode_t1B9D50590BC22BDD142A21664B8E2F9475409342 
{
public:
	// System.Int32 UnityEngine.ParticleSystemCurveMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ParticleSystemCurveMode_t1B9D50590BC22BDD142A21664B8E2F9475409342, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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


// CameraShakeSimpleScript/<Shake>d__5
struct U3CShakeU3Ed__5_t4D78750F530E974ECA1E718C81F0AC4A03284EB6  : public RuntimeObject
{
public:
	// System.Int32 CameraShakeSimpleScript/<Shake>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object CameraShakeSimpleScript/<Shake>d__5::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// CameraShakeSimpleScript CameraShakeSimpleScript/<Shake>d__5::<>4__this
	CameraShakeSimpleScript_t948411B88D6F43F322BCE831BCF7E5405604259A * ___U3CU3E4__this_2;
	// System.Single CameraShakeSimpleScript/<Shake>d__5::amount
	float ___amount_3;
	// System.Single CameraShakeSimpleScript/<Shake>d__5::duration
	float ___duration_4;
	// UnityEngine.Vector3 CameraShakeSimpleScript/<Shake>d__5::<originalPos>5__2
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CoriginalPosU3E5__2_5;
	// System.Int32 CameraShakeSimpleScript/<Shake>d__5::<counter>5__3
	int32_t ___U3CcounterU3E5__3_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CShakeU3Ed__5_t4D78750F530E974ECA1E718C81F0AC4A03284EB6, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CShakeU3Ed__5_t4D78750F530E974ECA1E718C81F0AC4A03284EB6, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CShakeU3Ed__5_t4D78750F530E974ECA1E718C81F0AC4A03284EB6, ___U3CU3E4__this_2)); }
	inline CameraShakeSimpleScript_t948411B88D6F43F322BCE831BCF7E5405604259A * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline CameraShakeSimpleScript_t948411B88D6F43F322BCE831BCF7E5405604259A ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(CameraShakeSimpleScript_t948411B88D6F43F322BCE831BCF7E5405604259A * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_amount_3() { return static_cast<int32_t>(offsetof(U3CShakeU3Ed__5_t4D78750F530E974ECA1E718C81F0AC4A03284EB6, ___amount_3)); }
	inline float get_amount_3() const { return ___amount_3; }
	inline float* get_address_of_amount_3() { return &___amount_3; }
	inline void set_amount_3(float value)
	{
		___amount_3 = value;
	}

	inline static int32_t get_offset_of_duration_4() { return static_cast<int32_t>(offsetof(U3CShakeU3Ed__5_t4D78750F530E974ECA1E718C81F0AC4A03284EB6, ___duration_4)); }
	inline float get_duration_4() const { return ___duration_4; }
	inline float* get_address_of_duration_4() { return &___duration_4; }
	inline void set_duration_4(float value)
	{
		___duration_4 = value;
	}

	inline static int32_t get_offset_of_U3CoriginalPosU3E5__2_5() { return static_cast<int32_t>(offsetof(U3CShakeU3Ed__5_t4D78750F530E974ECA1E718C81F0AC4A03284EB6, ___U3CoriginalPosU3E5__2_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CoriginalPosU3E5__2_5() const { return ___U3CoriginalPosU3E5__2_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CoriginalPosU3E5__2_5() { return &___U3CoriginalPosU3E5__2_5; }
	inline void set_U3CoriginalPosU3E5__2_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CoriginalPosU3E5__2_5 = value;
	}

	inline static int32_t get_offset_of_U3CcounterU3E5__3_6() { return static_cast<int32_t>(offsetof(U3CShakeU3Ed__5_t4D78750F530E974ECA1E718C81F0AC4A03284EB6, ___U3CcounterU3E5__3_6)); }
	inline int32_t get_U3CcounterU3E5__3_6() const { return ___U3CcounterU3E5__3_6; }
	inline int32_t* get_address_of_U3CcounterU3E5__3_6() { return &___U3CcounterU3E5__3_6; }
	inline void set_U3CcounterU3E5__3_6(int32_t value)
	{
		___U3CcounterU3E5__3_6 = value;
	}
};


// UnityEngine.UI.Navigation/Mode
struct Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F 
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


// UnityEngine.UI.Selectable/Transition
struct Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14 
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


// UnityEngine.UI.Slider/Direction
struct Direction_tFC329DCFF9844C052301C90100CA0F5FA9C65961 
{
public:
	// System.Int32 UnityEngine.UI.Slider/Direction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Direction_tFC329DCFF9844C052301C90100CA0F5FA9C65961, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// attack/<Shake>d__38
struct U3CShakeU3Ed__38_t4E7C35392CD4D28A64E7CB425C9C546FDA8F51FC  : public RuntimeObject
{
public:
	// System.Int32 attack/<Shake>d__38::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object attack/<Shake>d__38::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Single attack/<Shake>d__38::magnitude
	float ___magnitude_2;
	// System.Single attack/<Shake>d__38::duration
	float ___duration_3;
	// UnityEngine.Vector3 attack/<Shake>d__38::<originalPos>5__2
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CoriginalPosU3E5__2_4;
	// System.Single attack/<Shake>d__38::<elapsed>5__3
	float ___U3CelapsedU3E5__3_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CShakeU3Ed__38_t4E7C35392CD4D28A64E7CB425C9C546FDA8F51FC, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CShakeU3Ed__38_t4E7C35392CD4D28A64E7CB425C9C546FDA8F51FC, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_magnitude_2() { return static_cast<int32_t>(offsetof(U3CShakeU3Ed__38_t4E7C35392CD4D28A64E7CB425C9C546FDA8F51FC, ___magnitude_2)); }
	inline float get_magnitude_2() const { return ___magnitude_2; }
	inline float* get_address_of_magnitude_2() { return &___magnitude_2; }
	inline void set_magnitude_2(float value)
	{
		___magnitude_2 = value;
	}

	inline static int32_t get_offset_of_duration_3() { return static_cast<int32_t>(offsetof(U3CShakeU3Ed__38_t4E7C35392CD4D28A64E7CB425C9C546FDA8F51FC, ___duration_3)); }
	inline float get_duration_3() const { return ___duration_3; }
	inline float* get_address_of_duration_3() { return &___duration_3; }
	inline void set_duration_3(float value)
	{
		___duration_3 = value;
	}

	inline static int32_t get_offset_of_U3CoriginalPosU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CShakeU3Ed__38_t4E7C35392CD4D28A64E7CB425C9C546FDA8F51FC, ___U3CoriginalPosU3E5__2_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CoriginalPosU3E5__2_4() const { return ___U3CoriginalPosU3E5__2_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CoriginalPosU3E5__2_4() { return &___U3CoriginalPosU3E5__2_4; }
	inline void set_U3CoriginalPosU3E5__2_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CoriginalPosU3E5__2_4 = value;
	}

	inline static int32_t get_offset_of_U3CelapsedU3E5__3_5() { return static_cast<int32_t>(offsetof(U3CShakeU3Ed__38_t4E7C35392CD4D28A64E7CB425C9C546FDA8F51FC, ___U3CelapsedU3E5__3_5)); }
	inline float get_U3CelapsedU3E5__3_5() const { return ___U3CelapsedU3E5__3_5; }
	inline float* get_address_of_U3CelapsedU3E5__3_5() { return &___U3CelapsedU3E5__3_5; }
	inline void set_U3CelapsedU3E5__3_5(float value)
	{
		___U3CelapsedU3E5__3_5 = value;
	}
};


// cameraShaker/<Shake>d__0
struct U3CShakeU3Ed__0_t56ABF31C41CA87AFA3AC45DD82CF6F23D6F283A7  : public RuntimeObject
{
public:
	// System.Int32 cameraShaker/<Shake>d__0::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object cameraShaker/<Shake>d__0::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// cameraShaker cameraShaker/<Shake>d__0::<>4__this
	cameraShaker_t9CE5FEB9CB9D54949F9CA55EBB612EDA135EDF32 * ___U3CU3E4__this_2;
	// System.Single cameraShaker/<Shake>d__0::magnitude
	float ___magnitude_3;
	// System.Single cameraShaker/<Shake>d__0::duration
	float ___duration_4;
	// UnityEngine.Vector3 cameraShaker/<Shake>d__0::<originalPos>5__2
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CoriginalPosU3E5__2_5;
	// System.Single cameraShaker/<Shake>d__0::<elapsed>5__3
	float ___U3CelapsedU3E5__3_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CShakeU3Ed__0_t56ABF31C41CA87AFA3AC45DD82CF6F23D6F283A7, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CShakeU3Ed__0_t56ABF31C41CA87AFA3AC45DD82CF6F23D6F283A7, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CShakeU3Ed__0_t56ABF31C41CA87AFA3AC45DD82CF6F23D6F283A7, ___U3CU3E4__this_2)); }
	inline cameraShaker_t9CE5FEB9CB9D54949F9CA55EBB612EDA135EDF32 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline cameraShaker_t9CE5FEB9CB9D54949F9CA55EBB612EDA135EDF32 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(cameraShaker_t9CE5FEB9CB9D54949F9CA55EBB612EDA135EDF32 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_magnitude_3() { return static_cast<int32_t>(offsetof(U3CShakeU3Ed__0_t56ABF31C41CA87AFA3AC45DD82CF6F23D6F283A7, ___magnitude_3)); }
	inline float get_magnitude_3() const { return ___magnitude_3; }
	inline float* get_address_of_magnitude_3() { return &___magnitude_3; }
	inline void set_magnitude_3(float value)
	{
		___magnitude_3 = value;
	}

	inline static int32_t get_offset_of_duration_4() { return static_cast<int32_t>(offsetof(U3CShakeU3Ed__0_t56ABF31C41CA87AFA3AC45DD82CF6F23D6F283A7, ___duration_4)); }
	inline float get_duration_4() const { return ___duration_4; }
	inline float* get_address_of_duration_4() { return &___duration_4; }
	inline void set_duration_4(float value)
	{
		___duration_4 = value;
	}

	inline static int32_t get_offset_of_U3CoriginalPosU3E5__2_5() { return static_cast<int32_t>(offsetof(U3CShakeU3Ed__0_t56ABF31C41CA87AFA3AC45DD82CF6F23D6F283A7, ___U3CoriginalPosU3E5__2_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CoriginalPosU3E5__2_5() const { return ___U3CoriginalPosU3E5__2_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CoriginalPosU3E5__2_5() { return &___U3CoriginalPosU3E5__2_5; }
	inline void set_U3CoriginalPosU3E5__2_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CoriginalPosU3E5__2_5 = value;
	}

	inline static int32_t get_offset_of_U3CelapsedU3E5__3_6() { return static_cast<int32_t>(offsetof(U3CShakeU3Ed__0_t56ABF31C41CA87AFA3AC45DD82CF6F23D6F283A7, ___U3CelapsedU3E5__3_6)); }
	inline float get_U3CelapsedU3E5__3_6() const { return ___U3CelapsedU3E5__3_6; }
	inline float* get_address_of_U3CelapsedU3E5__3_6() { return &___U3CelapsedU3E5__3_6; }
	inline void set_U3CelapsedU3E5__3_6(float value)
	{
		___U3CelapsedU3E5__3_6 = value;
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


// UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A 
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

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.ParticleSystem/MinMaxCurve
struct MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD 
{
public:
	// UnityEngine.ParticleSystemCurveMode UnityEngine.ParticleSystem/MinMaxCurve::m_Mode
	int32_t ___m_Mode_0;
	// System.Single UnityEngine.ParticleSystem/MinMaxCurve::m_CurveMultiplier
	float ___m_CurveMultiplier_1;
	// UnityEngine.AnimationCurve UnityEngine.ParticleSystem/MinMaxCurve::m_CurveMin
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___m_CurveMin_2;
	// UnityEngine.AnimationCurve UnityEngine.ParticleSystem/MinMaxCurve::m_CurveMax
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___m_CurveMax_3;
	// System.Single UnityEngine.ParticleSystem/MinMaxCurve::m_ConstantMin
	float ___m_ConstantMin_4;
	// System.Single UnityEngine.ParticleSystem/MinMaxCurve::m_ConstantMax
	float ___m_ConstantMax_5;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_CurveMultiplier_1() { return static_cast<int32_t>(offsetof(MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD, ___m_CurveMultiplier_1)); }
	inline float get_m_CurveMultiplier_1() const { return ___m_CurveMultiplier_1; }
	inline float* get_address_of_m_CurveMultiplier_1() { return &___m_CurveMultiplier_1; }
	inline void set_m_CurveMultiplier_1(float value)
	{
		___m_CurveMultiplier_1 = value;
	}

	inline static int32_t get_offset_of_m_CurveMin_2() { return static_cast<int32_t>(offsetof(MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD, ___m_CurveMin_2)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_m_CurveMin_2() const { return ___m_CurveMin_2; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_m_CurveMin_2() { return &___m_CurveMin_2; }
	inline void set_m_CurveMin_2(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___m_CurveMin_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurveMin_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurveMax_3() { return static_cast<int32_t>(offsetof(MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD, ___m_CurveMax_3)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_m_CurveMax_3() const { return ___m_CurveMax_3; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_m_CurveMax_3() { return &___m_CurveMax_3; }
	inline void set_m_CurveMax_3(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___m_CurveMax_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurveMax_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_ConstantMin_4() { return static_cast<int32_t>(offsetof(MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD, ___m_ConstantMin_4)); }
	inline float get_m_ConstantMin_4() const { return ___m_ConstantMin_4; }
	inline float* get_address_of_m_ConstantMin_4() { return &___m_ConstantMin_4; }
	inline void set_m_ConstantMin_4(float value)
	{
		___m_ConstantMin_4 = value;
	}

	inline static int32_t get_offset_of_m_ConstantMax_5() { return static_cast<int32_t>(offsetof(MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD, ___m_ConstantMax_5)); }
	inline float get_m_ConstantMax_5() const { return ___m_ConstantMax_5; }
	inline float* get_address_of_m_ConstantMax_5() { return &___m_ConstantMax_5; }
	inline void set_m_ConstantMax_5(float value)
	{
		___m_ConstantMax_5 = value;
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


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.ParticleSystem
struct ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Rigidbody
struct Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
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


// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
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


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.AI.NavMeshAgent
struct NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// AiCanAttackCircle
struct AiCanAttackCircle_t57AE50A882353B23FA5A30DF81FBEE01909E19B6  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};

struct AiCanAttackCircle_t57AE50A882353B23FA5A30DF81FBEE01909E19B6_StaticFields
{
public:
	// AiCanAttackCircle AiCanAttackCircle::Instance
	AiCanAttackCircle_t57AE50A882353B23FA5A30DF81FBEE01909E19B6 * ___Instance_4;

public:
	inline static int32_t get_offset_of_Instance_4() { return static_cast<int32_t>(offsetof(AiCanAttackCircle_t57AE50A882353B23FA5A30DF81FBEE01909E19B6_StaticFields, ___Instance_4)); }
	inline AiCanAttackCircle_t57AE50A882353B23FA5A30DF81FBEE01909E19B6 * get_Instance_4() const { return ___Instance_4; }
	inline AiCanAttackCircle_t57AE50A882353B23FA5A30DF81FBEE01909E19B6 ** get_address_of_Instance_4() { return &___Instance_4; }
	inline void set_Instance_4(AiCanAttackCircle_t57AE50A882353B23FA5A30DF81FBEE01909E19B6 * value)
	{
		___Instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_4), (void*)value);
	}
};


// ArenaSellection
struct ArenaSellection_t3B2C26DA7D530C043B40B4E0FA39AF4035038994  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject ArenaSellection::ArenaSellectionPanel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___ArenaSellectionPanel_4;
	// UnityEngine.UI.Button ArenaSellection::Map1Button
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___Map1Button_5;
	// UnityEngine.UI.Button ArenaSellection::Map2Button
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___Map2Button_6;
	// UnityEngine.UI.Button ArenaSellection::Map3Button
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___Map3Button_7;
	// UnityEngine.UI.Button ArenaSellection::Map4Button
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___Map4Button_8;
	// UnityEngine.UI.Button ArenaSellection::Map5Button
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___Map5Button_9;
	// UnityEngine.UI.Button ArenaSellection::PlayButton
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___PlayButton_10;
	// UnityEngine.GameObject ArenaSellection::Map1StarImage
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Map1StarImage_11;
	// UnityEngine.GameObject ArenaSellection::Map2StarImage
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Map2StarImage_12;
	// UnityEngine.GameObject ArenaSellection::Map3StarImage
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Map3StarImage_13;
	// UnityEngine.GameObject ArenaSellection::Map4StarImage
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Map4StarImage_14;
	// UnityEngine.GameObject ArenaSellection::Map5StarImage
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Map5StarImage_15;
	// UnityEngine.GameObject ArenaSellection::Map1StarImageDead
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Map1StarImageDead_16;
	// UnityEngine.GameObject ArenaSellection::Map2StarImageDead
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Map2StarImageDead_17;
	// UnityEngine.GameObject ArenaSellection::Map3StarImageDead
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Map3StarImageDead_18;
	// UnityEngine.GameObject ArenaSellection::Map4StarImageDead
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Map4StarImageDead_19;
	// UnityEngine.GameObject ArenaSellection::Map5StarImageDead
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Map5StarImageDead_20;
	// UnityEngine.GameObject ArenaSellection::Map2LockImage
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Map2LockImage_21;
	// UnityEngine.GameObject ArenaSellection::Map3LockImage
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Map3LockImage_22;
	// UnityEngine.GameObject ArenaSellection::Map4LockImage
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Map4LockImage_23;
	// UnityEngine.GameObject ArenaSellection::Map5LockImage
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Map5LockImage_24;
	// UnityEngine.GameObject ArenaSellection::Playobject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Playobject_25;

public:
	inline static int32_t get_offset_of_ArenaSellectionPanel_4() { return static_cast<int32_t>(offsetof(ArenaSellection_t3B2C26DA7D530C043B40B4E0FA39AF4035038994, ___ArenaSellectionPanel_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_ArenaSellectionPanel_4() const { return ___ArenaSellectionPanel_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_ArenaSellectionPanel_4() { return &___ArenaSellectionPanel_4; }
	inline void set_ArenaSellectionPanel_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___ArenaSellectionPanel_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ArenaSellectionPanel_4), (void*)value);
	}

	inline static int32_t get_offset_of_Map1Button_5() { return static_cast<int32_t>(offsetof(ArenaSellection_t3B2C26DA7D530C043B40B4E0FA39AF4035038994, ___Map1Button_5)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_Map1Button_5() const { return ___Map1Button_5; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_Map1Button_5() { return &___Map1Button_5; }
	inline void set_Map1Button_5(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___Map1Button_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Map1Button_5), (void*)value);
	}

	inline static int32_t get_offset_of_Map2Button_6() { return static_cast<int32_t>(offsetof(ArenaSellection_t3B2C26DA7D530C043B40B4E0FA39AF4035038994, ___Map2Button_6)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_Map2Button_6() const { return ___Map2Button_6; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_Map2Button_6() { return &___Map2Button_6; }
	inline void set_Map2Button_6(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___Map2Button_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Map2Button_6), (void*)value);
	}

	inline static int32_t get_offset_of_Map3Button_7() { return static_cast<int32_t>(offsetof(ArenaSellection_t3B2C26DA7D530C043B40B4E0FA39AF4035038994, ___Map3Button_7)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_Map3Button_7() const { return ___Map3Button_7; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_Map3Button_7() { return &___Map3Button_7; }
	inline void set_Map3Button_7(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___Map3Button_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Map3Button_7), (void*)value);
	}

	inline static int32_t get_offset_of_Map4Button_8() { return static_cast<int32_t>(offsetof(ArenaSellection_t3B2C26DA7D530C043B40B4E0FA39AF4035038994, ___Map4Button_8)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_Map4Button_8() const { return ___Map4Button_8; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_Map4Button_8() { return &___Map4Button_8; }
	inline void set_Map4Button_8(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___Map4Button_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Map4Button_8), (void*)value);
	}

	inline static int32_t get_offset_of_Map5Button_9() { return static_cast<int32_t>(offsetof(ArenaSellection_t3B2C26DA7D530C043B40B4E0FA39AF4035038994, ___Map5Button_9)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_Map5Button_9() const { return ___Map5Button_9; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_Map5Button_9() { return &___Map5Button_9; }
	inline void set_Map5Button_9(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___Map5Button_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Map5Button_9), (void*)value);
	}

	inline static int32_t get_offset_of_PlayButton_10() { return static_cast<int32_t>(offsetof(ArenaSellection_t3B2C26DA7D530C043B40B4E0FA39AF4035038994, ___PlayButton_10)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_PlayButton_10() const { return ___PlayButton_10; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_PlayButton_10() { return &___PlayButton_10; }
	inline void set_PlayButton_10(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___PlayButton_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PlayButton_10), (void*)value);
	}

	inline static int32_t get_offset_of_Map1StarImage_11() { return static_cast<int32_t>(offsetof(ArenaSellection_t3B2C26DA7D530C043B40B4E0FA39AF4035038994, ___Map1StarImage_11)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Map1StarImage_11() const { return ___Map1StarImage_11; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Map1StarImage_11() { return &___Map1StarImage_11; }
	inline void set_Map1StarImage_11(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Map1StarImage_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Map1StarImage_11), (void*)value);
	}

	inline static int32_t get_offset_of_Map2StarImage_12() { return static_cast<int32_t>(offsetof(ArenaSellection_t3B2C26DA7D530C043B40B4E0FA39AF4035038994, ___Map2StarImage_12)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Map2StarImage_12() const { return ___Map2StarImage_12; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Map2StarImage_12() { return &___Map2StarImage_12; }
	inline void set_Map2StarImage_12(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Map2StarImage_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Map2StarImage_12), (void*)value);
	}

	inline static int32_t get_offset_of_Map3StarImage_13() { return static_cast<int32_t>(offsetof(ArenaSellection_t3B2C26DA7D530C043B40B4E0FA39AF4035038994, ___Map3StarImage_13)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Map3StarImage_13() const { return ___Map3StarImage_13; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Map3StarImage_13() { return &___Map3StarImage_13; }
	inline void set_Map3StarImage_13(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Map3StarImage_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Map3StarImage_13), (void*)value);
	}

	inline static int32_t get_offset_of_Map4StarImage_14() { return static_cast<int32_t>(offsetof(ArenaSellection_t3B2C26DA7D530C043B40B4E0FA39AF4035038994, ___Map4StarImage_14)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Map4StarImage_14() const { return ___Map4StarImage_14; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Map4StarImage_14() { return &___Map4StarImage_14; }
	inline void set_Map4StarImage_14(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Map4StarImage_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Map4StarImage_14), (void*)value);
	}

	inline static int32_t get_offset_of_Map5StarImage_15() { return static_cast<int32_t>(offsetof(ArenaSellection_t3B2C26DA7D530C043B40B4E0FA39AF4035038994, ___Map5StarImage_15)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Map5StarImage_15() const { return ___Map5StarImage_15; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Map5StarImage_15() { return &___Map5StarImage_15; }
	inline void set_Map5StarImage_15(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Map5StarImage_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Map5StarImage_15), (void*)value);
	}

	inline static int32_t get_offset_of_Map1StarImageDead_16() { return static_cast<int32_t>(offsetof(ArenaSellection_t3B2C26DA7D530C043B40B4E0FA39AF4035038994, ___Map1StarImageDead_16)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Map1StarImageDead_16() const { return ___Map1StarImageDead_16; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Map1StarImageDead_16() { return &___Map1StarImageDead_16; }
	inline void set_Map1StarImageDead_16(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Map1StarImageDead_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Map1StarImageDead_16), (void*)value);
	}

	inline static int32_t get_offset_of_Map2StarImageDead_17() { return static_cast<int32_t>(offsetof(ArenaSellection_t3B2C26DA7D530C043B40B4E0FA39AF4035038994, ___Map2StarImageDead_17)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Map2StarImageDead_17() const { return ___Map2StarImageDead_17; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Map2StarImageDead_17() { return &___Map2StarImageDead_17; }
	inline void set_Map2StarImageDead_17(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Map2StarImageDead_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Map2StarImageDead_17), (void*)value);
	}

	inline static int32_t get_offset_of_Map3StarImageDead_18() { return static_cast<int32_t>(offsetof(ArenaSellection_t3B2C26DA7D530C043B40B4E0FA39AF4035038994, ___Map3StarImageDead_18)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Map3StarImageDead_18() const { return ___Map3StarImageDead_18; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Map3StarImageDead_18() { return &___Map3StarImageDead_18; }
	inline void set_Map3StarImageDead_18(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Map3StarImageDead_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Map3StarImageDead_18), (void*)value);
	}

	inline static int32_t get_offset_of_Map4StarImageDead_19() { return static_cast<int32_t>(offsetof(ArenaSellection_t3B2C26DA7D530C043B40B4E0FA39AF4035038994, ___Map4StarImageDead_19)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Map4StarImageDead_19() const { return ___Map4StarImageDead_19; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Map4StarImageDead_19() { return &___Map4StarImageDead_19; }
	inline void set_Map4StarImageDead_19(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Map4StarImageDead_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Map4StarImageDead_19), (void*)value);
	}

	inline static int32_t get_offset_of_Map5StarImageDead_20() { return static_cast<int32_t>(offsetof(ArenaSellection_t3B2C26DA7D530C043B40B4E0FA39AF4035038994, ___Map5StarImageDead_20)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Map5StarImageDead_20() const { return ___Map5StarImageDead_20; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Map5StarImageDead_20() { return &___Map5StarImageDead_20; }
	inline void set_Map5StarImageDead_20(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Map5StarImageDead_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Map5StarImageDead_20), (void*)value);
	}

	inline static int32_t get_offset_of_Map2LockImage_21() { return static_cast<int32_t>(offsetof(ArenaSellection_t3B2C26DA7D530C043B40B4E0FA39AF4035038994, ___Map2LockImage_21)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Map2LockImage_21() const { return ___Map2LockImage_21; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Map2LockImage_21() { return &___Map2LockImage_21; }
	inline void set_Map2LockImage_21(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Map2LockImage_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Map2LockImage_21), (void*)value);
	}

	inline static int32_t get_offset_of_Map3LockImage_22() { return static_cast<int32_t>(offsetof(ArenaSellection_t3B2C26DA7D530C043B40B4E0FA39AF4035038994, ___Map3LockImage_22)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Map3LockImage_22() const { return ___Map3LockImage_22; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Map3LockImage_22() { return &___Map3LockImage_22; }
	inline void set_Map3LockImage_22(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Map3LockImage_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Map3LockImage_22), (void*)value);
	}

	inline static int32_t get_offset_of_Map4LockImage_23() { return static_cast<int32_t>(offsetof(ArenaSellection_t3B2C26DA7D530C043B40B4E0FA39AF4035038994, ___Map4LockImage_23)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Map4LockImage_23() const { return ___Map4LockImage_23; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Map4LockImage_23() { return &___Map4LockImage_23; }
	inline void set_Map4LockImage_23(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Map4LockImage_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Map4LockImage_23), (void*)value);
	}

	inline static int32_t get_offset_of_Map5LockImage_24() { return static_cast<int32_t>(offsetof(ArenaSellection_t3B2C26DA7D530C043B40B4E0FA39AF4035038994, ___Map5LockImage_24)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Map5LockImage_24() const { return ___Map5LockImage_24; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Map5LockImage_24() { return &___Map5LockImage_24; }
	inline void set_Map5LockImage_24(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Map5LockImage_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Map5LockImage_24), (void*)value);
	}

	inline static int32_t get_offset_of_Playobject_25() { return static_cast<int32_t>(offsetof(ArenaSellection_t3B2C26DA7D530C043B40B4E0FA39AF4035038994, ___Playobject_25)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Playobject_25() const { return ___Playobject_25; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Playobject_25() { return &___Playobject_25; }
	inline void set_Playobject_25(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Playobject_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Playobject_25), (void*)value);
	}
};

struct ArenaSellection_t3B2C26DA7D530C043B40B4E0FA39AF4035038994_StaticFields
{
public:
	// System.Int32 ArenaSellection::SavedMapIndex
	int32_t ___SavedMapIndex_26;
	// System.Int32 ArenaSellection::CurrentMapIndex
	int32_t ___CurrentMapIndex_27;
	// System.Int32 ArenaSellection::GelecekSceneIndex
	int32_t ___GelecekSceneIndex_28;
	// System.Int32 ArenaSellection::CurrentStageIndex
	int32_t ___CurrentStageIndex_29;

public:
	inline static int32_t get_offset_of_SavedMapIndex_26() { return static_cast<int32_t>(offsetof(ArenaSellection_t3B2C26DA7D530C043B40B4E0FA39AF4035038994_StaticFields, ___SavedMapIndex_26)); }
	inline int32_t get_SavedMapIndex_26() const { return ___SavedMapIndex_26; }
	inline int32_t* get_address_of_SavedMapIndex_26() { return &___SavedMapIndex_26; }
	inline void set_SavedMapIndex_26(int32_t value)
	{
		___SavedMapIndex_26 = value;
	}

	inline static int32_t get_offset_of_CurrentMapIndex_27() { return static_cast<int32_t>(offsetof(ArenaSellection_t3B2C26DA7D530C043B40B4E0FA39AF4035038994_StaticFields, ___CurrentMapIndex_27)); }
	inline int32_t get_CurrentMapIndex_27() const { return ___CurrentMapIndex_27; }
	inline int32_t* get_address_of_CurrentMapIndex_27() { return &___CurrentMapIndex_27; }
	inline void set_CurrentMapIndex_27(int32_t value)
	{
		___CurrentMapIndex_27 = value;
	}

	inline static int32_t get_offset_of_GelecekSceneIndex_28() { return static_cast<int32_t>(offsetof(ArenaSellection_t3B2C26DA7D530C043B40B4E0FA39AF4035038994_StaticFields, ___GelecekSceneIndex_28)); }
	inline int32_t get_GelecekSceneIndex_28() const { return ___GelecekSceneIndex_28; }
	inline int32_t* get_address_of_GelecekSceneIndex_28() { return &___GelecekSceneIndex_28; }
	inline void set_GelecekSceneIndex_28(int32_t value)
	{
		___GelecekSceneIndex_28 = value;
	}

	inline static int32_t get_offset_of_CurrentStageIndex_29() { return static_cast<int32_t>(offsetof(ArenaSellection_t3B2C26DA7D530C043B40B4E0FA39AF4035038994_StaticFields, ___CurrentStageIndex_29)); }
	inline int32_t get_CurrentStageIndex_29() const { return ___CurrentStageIndex_29; }
	inline int32_t* get_address_of_CurrentStageIndex_29() { return &___CurrentStageIndex_29; }
	inline void set_CurrentStageIndex_29(int32_t value)
	{
		___CurrentStageIndex_29 = value;
	}
};


// CameraShakeSimpleScript
struct CameraShakeSimpleScript_t948411B88D6F43F322BCE831BCF7E5405604259A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean CameraShakeSimpleScript::isRunning
	bool ___isRunning_4;
	// UnityEngine.Animation CameraShakeSimpleScript::anim
	Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * ___anim_5;

public:
	inline static int32_t get_offset_of_isRunning_4() { return static_cast<int32_t>(offsetof(CameraShakeSimpleScript_t948411B88D6F43F322BCE831BCF7E5405604259A, ___isRunning_4)); }
	inline bool get_isRunning_4() const { return ___isRunning_4; }
	inline bool* get_address_of_isRunning_4() { return &___isRunning_4; }
	inline void set_isRunning_4(bool value)
	{
		___isRunning_4 = value;
	}

	inline static int32_t get_offset_of_anim_5() { return static_cast<int32_t>(offsetof(CameraShakeSimpleScript_t948411B88D6F43F322BCE831BCF7E5405604259A, ___anim_5)); }
	inline Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * get_anim_5() const { return ___anim_5; }
	inline Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 ** get_address_of_anim_5() { return &___anim_5; }
	inline void set_anim_5(Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * value)
	{
		___anim_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___anim_5), (void*)value);
	}
};


// DeathLogPanelController
struct DeathLogPanelController_t87E4399AB36E6AB25976252311C792D0197C6D40  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject DeathLogPanelController::DeathLogPanel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___DeathLogPanel_4;
	// UnityEngine.UI.Text DeathLogPanelController::DeathLogText1
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___DeathLogText1_5;
	// UnityEngine.UI.Text DeathLogPanelController::DeathLogText2
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___DeathLogText2_6;
	// UnityEngine.UI.Text DeathLogPanelController::DeathLogText3
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___DeathLogText3_7;
	// UnityEngine.UI.Image DeathLogPanelController::DeathSkull1
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___DeathSkull1_8;
	// UnityEngine.UI.Image DeathLogPanelController::DeathSkull2
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___DeathSkull2_9;
	// UnityEngine.UI.Image DeathLogPanelController::DeathSkull3
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___DeathSkull3_10;

public:
	inline static int32_t get_offset_of_DeathLogPanel_4() { return static_cast<int32_t>(offsetof(DeathLogPanelController_t87E4399AB36E6AB25976252311C792D0197C6D40, ___DeathLogPanel_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_DeathLogPanel_4() const { return ___DeathLogPanel_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_DeathLogPanel_4() { return &___DeathLogPanel_4; }
	inline void set_DeathLogPanel_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___DeathLogPanel_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DeathLogPanel_4), (void*)value);
	}

	inline static int32_t get_offset_of_DeathLogText1_5() { return static_cast<int32_t>(offsetof(DeathLogPanelController_t87E4399AB36E6AB25976252311C792D0197C6D40, ___DeathLogText1_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_DeathLogText1_5() const { return ___DeathLogText1_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_DeathLogText1_5() { return &___DeathLogText1_5; }
	inline void set_DeathLogText1_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___DeathLogText1_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DeathLogText1_5), (void*)value);
	}

	inline static int32_t get_offset_of_DeathLogText2_6() { return static_cast<int32_t>(offsetof(DeathLogPanelController_t87E4399AB36E6AB25976252311C792D0197C6D40, ___DeathLogText2_6)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_DeathLogText2_6() const { return ___DeathLogText2_6; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_DeathLogText2_6() { return &___DeathLogText2_6; }
	inline void set_DeathLogText2_6(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___DeathLogText2_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DeathLogText2_6), (void*)value);
	}

	inline static int32_t get_offset_of_DeathLogText3_7() { return static_cast<int32_t>(offsetof(DeathLogPanelController_t87E4399AB36E6AB25976252311C792D0197C6D40, ___DeathLogText3_7)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_DeathLogText3_7() const { return ___DeathLogText3_7; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_DeathLogText3_7() { return &___DeathLogText3_7; }
	inline void set_DeathLogText3_7(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___DeathLogText3_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DeathLogText3_7), (void*)value);
	}

	inline static int32_t get_offset_of_DeathSkull1_8() { return static_cast<int32_t>(offsetof(DeathLogPanelController_t87E4399AB36E6AB25976252311C792D0197C6D40, ___DeathSkull1_8)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_DeathSkull1_8() const { return ___DeathSkull1_8; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_DeathSkull1_8() { return &___DeathSkull1_8; }
	inline void set_DeathSkull1_8(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___DeathSkull1_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DeathSkull1_8), (void*)value);
	}

	inline static int32_t get_offset_of_DeathSkull2_9() { return static_cast<int32_t>(offsetof(DeathLogPanelController_t87E4399AB36E6AB25976252311C792D0197C6D40, ___DeathSkull2_9)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_DeathSkull2_9() const { return ___DeathSkull2_9; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_DeathSkull2_9() { return &___DeathSkull2_9; }
	inline void set_DeathSkull2_9(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___DeathSkull2_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DeathSkull2_9), (void*)value);
	}

	inline static int32_t get_offset_of_DeathSkull3_10() { return static_cast<int32_t>(offsetof(DeathLogPanelController_t87E4399AB36E6AB25976252311C792D0197C6D40, ___DeathSkull3_10)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_DeathSkull3_10() const { return ___DeathSkull3_10; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_DeathSkull3_10() { return &___DeathSkull3_10; }
	inline void set_DeathSkull3_10(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___DeathSkull3_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DeathSkull3_10), (void*)value);
	}
};


// Joystick
struct Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single Joystick::handleRange
	float ___handleRange_4;
	// System.Single Joystick::deadZone
	float ___deadZone_5;
	// AxisOptions Joystick::axisOptions
	int32_t ___axisOptions_6;
	// System.Boolean Joystick::snapX
	bool ___snapX_7;
	// System.Boolean Joystick::snapY
	bool ___snapY_8;
	// UnityEngine.RectTransform Joystick::background
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___background_9;
	// UnityEngine.RectTransform Joystick::handle
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___handle_10;
	// UnityEngine.RectTransform Joystick::baseRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___baseRect_11;
	// UnityEngine.Canvas Joystick::canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___canvas_12;
	// UnityEngine.Camera Joystick::cam
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___cam_13;
	// UnityEngine.Vector2 Joystick::input
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___input_14;

public:
	inline static int32_t get_offset_of_handleRange_4() { return static_cast<int32_t>(offsetof(Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873, ___handleRange_4)); }
	inline float get_handleRange_4() const { return ___handleRange_4; }
	inline float* get_address_of_handleRange_4() { return &___handleRange_4; }
	inline void set_handleRange_4(float value)
	{
		___handleRange_4 = value;
	}

	inline static int32_t get_offset_of_deadZone_5() { return static_cast<int32_t>(offsetof(Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873, ___deadZone_5)); }
	inline float get_deadZone_5() const { return ___deadZone_5; }
	inline float* get_address_of_deadZone_5() { return &___deadZone_5; }
	inline void set_deadZone_5(float value)
	{
		___deadZone_5 = value;
	}

	inline static int32_t get_offset_of_axisOptions_6() { return static_cast<int32_t>(offsetof(Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873, ___axisOptions_6)); }
	inline int32_t get_axisOptions_6() const { return ___axisOptions_6; }
	inline int32_t* get_address_of_axisOptions_6() { return &___axisOptions_6; }
	inline void set_axisOptions_6(int32_t value)
	{
		___axisOptions_6 = value;
	}

	inline static int32_t get_offset_of_snapX_7() { return static_cast<int32_t>(offsetof(Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873, ___snapX_7)); }
	inline bool get_snapX_7() const { return ___snapX_7; }
	inline bool* get_address_of_snapX_7() { return &___snapX_7; }
	inline void set_snapX_7(bool value)
	{
		___snapX_7 = value;
	}

	inline static int32_t get_offset_of_snapY_8() { return static_cast<int32_t>(offsetof(Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873, ___snapY_8)); }
	inline bool get_snapY_8() const { return ___snapY_8; }
	inline bool* get_address_of_snapY_8() { return &___snapY_8; }
	inline void set_snapY_8(bool value)
	{
		___snapY_8 = value;
	}

	inline static int32_t get_offset_of_background_9() { return static_cast<int32_t>(offsetof(Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873, ___background_9)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_background_9() const { return ___background_9; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_background_9() { return &___background_9; }
	inline void set_background_9(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___background_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___background_9), (void*)value);
	}

	inline static int32_t get_offset_of_handle_10() { return static_cast<int32_t>(offsetof(Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873, ___handle_10)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_handle_10() const { return ___handle_10; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_handle_10() { return &___handle_10; }
	inline void set_handle_10(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___handle_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handle_10), (void*)value);
	}

	inline static int32_t get_offset_of_baseRect_11() { return static_cast<int32_t>(offsetof(Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873, ___baseRect_11)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_baseRect_11() const { return ___baseRect_11; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_baseRect_11() { return &___baseRect_11; }
	inline void set_baseRect_11(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___baseRect_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___baseRect_11), (void*)value);
	}

	inline static int32_t get_offset_of_canvas_12() { return static_cast<int32_t>(offsetof(Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873, ___canvas_12)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_canvas_12() const { return ___canvas_12; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_canvas_12() { return &___canvas_12; }
	inline void set_canvas_12(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___canvas_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___canvas_12), (void*)value);
	}

	inline static int32_t get_offset_of_cam_13() { return static_cast<int32_t>(offsetof(Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873, ___cam_13)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_cam_13() const { return ___cam_13; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_cam_13() { return &___cam_13; }
	inline void set_cam_13(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___cam_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cam_13), (void*)value);
	}

	inline static int32_t get_offset_of_input_14() { return static_cast<int32_t>(offsetof(Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873, ___input_14)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_input_14() const { return ___input_14; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_input_14() { return &___input_14; }
	inline void set_input_14(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___input_14 = value;
	}
};


// PanelController
struct PanelController_t680C04009837CA28BD14657765EC2AAE385ED0EA  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject PanelController::_FailPanel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ____FailPanel_5;
	// UnityEngine.GameObject PanelController::_SuccessPanel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ____SuccessPanel_6;
	// UnityEngine.UI.Button PanelController::TurnToMenuButton
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___TurnToMenuButton_7;
	// UnityEngine.UI.Button PanelController::NextLevelButton
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___NextLevelButton_8;
	// UnityEngine.UI.Button PanelController::MapCompletedButton
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___MapCompletedButton_9;
	// UnityEngine.GameObject PanelController::_DeathLogPanel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ____DeathLogPanel_10;
	// UnityEngine.GameObject PanelController::_FullHpPanel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ____FullHpPanel_11;
	// UnityEngine.GameObject PanelController::_MageBuffPanel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ____MageBuffPanel_12;
	// UnityEngine.GameObject PanelController::_MapCompletedPanel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ____MapCompletedPanel_13;
	// UnityEngine.UI.Text PanelController::AliveCountText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___AliveCountText_14;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> PanelController::Panels
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___Panels_16;

public:
	inline static int32_t get_offset_of__FailPanel_5() { return static_cast<int32_t>(offsetof(PanelController_t680C04009837CA28BD14657765EC2AAE385ED0EA, ____FailPanel_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get__FailPanel_5() const { return ____FailPanel_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of__FailPanel_5() { return &____FailPanel_5; }
	inline void set__FailPanel_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		____FailPanel_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____FailPanel_5), (void*)value);
	}

	inline static int32_t get_offset_of__SuccessPanel_6() { return static_cast<int32_t>(offsetof(PanelController_t680C04009837CA28BD14657765EC2AAE385ED0EA, ____SuccessPanel_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get__SuccessPanel_6() const { return ____SuccessPanel_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of__SuccessPanel_6() { return &____SuccessPanel_6; }
	inline void set__SuccessPanel_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		____SuccessPanel_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____SuccessPanel_6), (void*)value);
	}

	inline static int32_t get_offset_of_TurnToMenuButton_7() { return static_cast<int32_t>(offsetof(PanelController_t680C04009837CA28BD14657765EC2AAE385ED0EA, ___TurnToMenuButton_7)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_TurnToMenuButton_7() const { return ___TurnToMenuButton_7; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_TurnToMenuButton_7() { return &___TurnToMenuButton_7; }
	inline void set_TurnToMenuButton_7(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___TurnToMenuButton_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TurnToMenuButton_7), (void*)value);
	}

	inline static int32_t get_offset_of_NextLevelButton_8() { return static_cast<int32_t>(offsetof(PanelController_t680C04009837CA28BD14657765EC2AAE385ED0EA, ___NextLevelButton_8)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_NextLevelButton_8() const { return ___NextLevelButton_8; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_NextLevelButton_8() { return &___NextLevelButton_8; }
	inline void set_NextLevelButton_8(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___NextLevelButton_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NextLevelButton_8), (void*)value);
	}

	inline static int32_t get_offset_of_MapCompletedButton_9() { return static_cast<int32_t>(offsetof(PanelController_t680C04009837CA28BD14657765EC2AAE385ED0EA, ___MapCompletedButton_9)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_MapCompletedButton_9() const { return ___MapCompletedButton_9; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_MapCompletedButton_9() { return &___MapCompletedButton_9; }
	inline void set_MapCompletedButton_9(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___MapCompletedButton_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MapCompletedButton_9), (void*)value);
	}

	inline static int32_t get_offset_of__DeathLogPanel_10() { return static_cast<int32_t>(offsetof(PanelController_t680C04009837CA28BD14657765EC2AAE385ED0EA, ____DeathLogPanel_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get__DeathLogPanel_10() const { return ____DeathLogPanel_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of__DeathLogPanel_10() { return &____DeathLogPanel_10; }
	inline void set__DeathLogPanel_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		____DeathLogPanel_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____DeathLogPanel_10), (void*)value);
	}

	inline static int32_t get_offset_of__FullHpPanel_11() { return static_cast<int32_t>(offsetof(PanelController_t680C04009837CA28BD14657765EC2AAE385ED0EA, ____FullHpPanel_11)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get__FullHpPanel_11() const { return ____FullHpPanel_11; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of__FullHpPanel_11() { return &____FullHpPanel_11; }
	inline void set__FullHpPanel_11(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		____FullHpPanel_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____FullHpPanel_11), (void*)value);
	}

	inline static int32_t get_offset_of__MageBuffPanel_12() { return static_cast<int32_t>(offsetof(PanelController_t680C04009837CA28BD14657765EC2AAE385ED0EA, ____MageBuffPanel_12)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get__MageBuffPanel_12() const { return ____MageBuffPanel_12; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of__MageBuffPanel_12() { return &____MageBuffPanel_12; }
	inline void set__MageBuffPanel_12(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		____MageBuffPanel_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____MageBuffPanel_12), (void*)value);
	}

	inline static int32_t get_offset_of__MapCompletedPanel_13() { return static_cast<int32_t>(offsetof(PanelController_t680C04009837CA28BD14657765EC2AAE385ED0EA, ____MapCompletedPanel_13)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get__MapCompletedPanel_13() const { return ____MapCompletedPanel_13; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of__MapCompletedPanel_13() { return &____MapCompletedPanel_13; }
	inline void set__MapCompletedPanel_13(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		____MapCompletedPanel_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____MapCompletedPanel_13), (void*)value);
	}

	inline static int32_t get_offset_of_AliveCountText_14() { return static_cast<int32_t>(offsetof(PanelController_t680C04009837CA28BD14657765EC2AAE385ED0EA, ___AliveCountText_14)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_AliveCountText_14() const { return ___AliveCountText_14; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_AliveCountText_14() { return &___AliveCountText_14; }
	inline void set_AliveCountText_14(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___AliveCountText_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AliveCountText_14), (void*)value);
	}

	inline static int32_t get_offset_of_Panels_16() { return static_cast<int32_t>(offsetof(PanelController_t680C04009837CA28BD14657765EC2AAE385ED0EA, ___Panels_16)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_Panels_16() const { return ___Panels_16; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_Panels_16() { return &___Panels_16; }
	inline void set_Panels_16(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___Panels_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Panels_16), (void*)value);
	}
};

struct PanelController_t680C04009837CA28BD14657765EC2AAE385ED0EA_StaticFields
{
public:
	// PanelController PanelController::Instance
	PanelController_t680C04009837CA28BD14657765EC2AAE385ED0EA * ___Instance_4;
	// System.Int32 PanelController::AliveCountNumber
	int32_t ___AliveCountNumber_15;

public:
	inline static int32_t get_offset_of_Instance_4() { return static_cast<int32_t>(offsetof(PanelController_t680C04009837CA28BD14657765EC2AAE385ED0EA_StaticFields, ___Instance_4)); }
	inline PanelController_t680C04009837CA28BD14657765EC2AAE385ED0EA * get_Instance_4() const { return ___Instance_4; }
	inline PanelController_t680C04009837CA28BD14657765EC2AAE385ED0EA ** get_address_of_Instance_4() { return &___Instance_4; }
	inline void set_Instance_4(PanelController_t680C04009837CA28BD14657765EC2AAE385ED0EA * value)
	{
		___Instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_4), (void*)value);
	}

	inline static int32_t get_offset_of_AliveCountNumber_15() { return static_cast<int32_t>(offsetof(PanelController_t680C04009837CA28BD14657765EC2AAE385ED0EA_StaticFields, ___AliveCountNumber_15)); }
	inline int32_t get_AliveCountNumber_15() const { return ___AliveCountNumber_15; }
	inline int32_t* get_address_of_AliveCountNumber_15() { return &___AliveCountNumber_15; }
	inline void set_AliveCountNumber_15(int32_t value)
	{
		___AliveCountNumber_15 = value;
	}
};


// ProjectileMoveScript
struct ProjectileMoveScript_t8E5328E659143159EA6BDE95FD65EC7A674B237E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean ProjectileMoveScript::rotate
	bool ___rotate_4;
	// System.Single ProjectileMoveScript::rotateAmount
	float ___rotateAmount_5;
	// System.Boolean ProjectileMoveScript::bounce
	bool ___bounce_6;
	// System.Single ProjectileMoveScript::bounceForce
	float ___bounceForce_7;
	// System.Single ProjectileMoveScript::speed
	float ___speed_8;
	// System.Single ProjectileMoveScript::accuracy
	float ___accuracy_9;
	// System.Single ProjectileMoveScript::fireRate
	float ___fireRate_10;
	// System.String ProjectileMoveScript::ProjectileAtanKisi
	String_t* ___ProjectileAtanKisi_11;
	// UnityEngine.GameObject ProjectileMoveScript::muzzlePrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___muzzlePrefab_12;
	// UnityEngine.GameObject ProjectileMoveScript::hitPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___hitPrefab_13;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> ProjectileMoveScript::trails
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___trails_14;
	// UnityEngine.Vector3 ProjectileMoveScript::startPos
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___startPos_15;
	// System.Single ProjectileMoveScript::speedRandomness
	float ___speedRandomness_16;
	// UnityEngine.Vector3 ProjectileMoveScript::offset
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___offset_17;
	// System.Boolean ProjectileMoveScript::collided
	bool ___collided_18;
	// UnityEngine.Rigidbody ProjectileMoveScript::rb
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___rb_19;
	// RotateToMouseScript ProjectileMoveScript::rotateToMouse
	RotateToMouseScript_t484F9391662B1A307753F7AE65E5DC8BDB6764E9 * ___rotateToMouse_20;
	// UnityEngine.GameObject ProjectileMoveScript::target
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___target_21;

public:
	inline static int32_t get_offset_of_rotate_4() { return static_cast<int32_t>(offsetof(ProjectileMoveScript_t8E5328E659143159EA6BDE95FD65EC7A674B237E, ___rotate_4)); }
	inline bool get_rotate_4() const { return ___rotate_4; }
	inline bool* get_address_of_rotate_4() { return &___rotate_4; }
	inline void set_rotate_4(bool value)
	{
		___rotate_4 = value;
	}

	inline static int32_t get_offset_of_rotateAmount_5() { return static_cast<int32_t>(offsetof(ProjectileMoveScript_t8E5328E659143159EA6BDE95FD65EC7A674B237E, ___rotateAmount_5)); }
	inline float get_rotateAmount_5() const { return ___rotateAmount_5; }
	inline float* get_address_of_rotateAmount_5() { return &___rotateAmount_5; }
	inline void set_rotateAmount_5(float value)
	{
		___rotateAmount_5 = value;
	}

	inline static int32_t get_offset_of_bounce_6() { return static_cast<int32_t>(offsetof(ProjectileMoveScript_t8E5328E659143159EA6BDE95FD65EC7A674B237E, ___bounce_6)); }
	inline bool get_bounce_6() const { return ___bounce_6; }
	inline bool* get_address_of_bounce_6() { return &___bounce_6; }
	inline void set_bounce_6(bool value)
	{
		___bounce_6 = value;
	}

	inline static int32_t get_offset_of_bounceForce_7() { return static_cast<int32_t>(offsetof(ProjectileMoveScript_t8E5328E659143159EA6BDE95FD65EC7A674B237E, ___bounceForce_7)); }
	inline float get_bounceForce_7() const { return ___bounceForce_7; }
	inline float* get_address_of_bounceForce_7() { return &___bounceForce_7; }
	inline void set_bounceForce_7(float value)
	{
		___bounceForce_7 = value;
	}

	inline static int32_t get_offset_of_speed_8() { return static_cast<int32_t>(offsetof(ProjectileMoveScript_t8E5328E659143159EA6BDE95FD65EC7A674B237E, ___speed_8)); }
	inline float get_speed_8() const { return ___speed_8; }
	inline float* get_address_of_speed_8() { return &___speed_8; }
	inline void set_speed_8(float value)
	{
		___speed_8 = value;
	}

	inline static int32_t get_offset_of_accuracy_9() { return static_cast<int32_t>(offsetof(ProjectileMoveScript_t8E5328E659143159EA6BDE95FD65EC7A674B237E, ___accuracy_9)); }
	inline float get_accuracy_9() const { return ___accuracy_9; }
	inline float* get_address_of_accuracy_9() { return &___accuracy_9; }
	inline void set_accuracy_9(float value)
	{
		___accuracy_9 = value;
	}

	inline static int32_t get_offset_of_fireRate_10() { return static_cast<int32_t>(offsetof(ProjectileMoveScript_t8E5328E659143159EA6BDE95FD65EC7A674B237E, ___fireRate_10)); }
	inline float get_fireRate_10() const { return ___fireRate_10; }
	inline float* get_address_of_fireRate_10() { return &___fireRate_10; }
	inline void set_fireRate_10(float value)
	{
		___fireRate_10 = value;
	}

	inline static int32_t get_offset_of_ProjectileAtanKisi_11() { return static_cast<int32_t>(offsetof(ProjectileMoveScript_t8E5328E659143159EA6BDE95FD65EC7A674B237E, ___ProjectileAtanKisi_11)); }
	inline String_t* get_ProjectileAtanKisi_11() const { return ___ProjectileAtanKisi_11; }
	inline String_t** get_address_of_ProjectileAtanKisi_11() { return &___ProjectileAtanKisi_11; }
	inline void set_ProjectileAtanKisi_11(String_t* value)
	{
		___ProjectileAtanKisi_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ProjectileAtanKisi_11), (void*)value);
	}

	inline static int32_t get_offset_of_muzzlePrefab_12() { return static_cast<int32_t>(offsetof(ProjectileMoveScript_t8E5328E659143159EA6BDE95FD65EC7A674B237E, ___muzzlePrefab_12)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_muzzlePrefab_12() const { return ___muzzlePrefab_12; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_muzzlePrefab_12() { return &___muzzlePrefab_12; }
	inline void set_muzzlePrefab_12(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___muzzlePrefab_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___muzzlePrefab_12), (void*)value);
	}

	inline static int32_t get_offset_of_hitPrefab_13() { return static_cast<int32_t>(offsetof(ProjectileMoveScript_t8E5328E659143159EA6BDE95FD65EC7A674B237E, ___hitPrefab_13)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_hitPrefab_13() const { return ___hitPrefab_13; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_hitPrefab_13() { return &___hitPrefab_13; }
	inline void set_hitPrefab_13(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___hitPrefab_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hitPrefab_13), (void*)value);
	}

	inline static int32_t get_offset_of_trails_14() { return static_cast<int32_t>(offsetof(ProjectileMoveScript_t8E5328E659143159EA6BDE95FD65EC7A674B237E, ___trails_14)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_trails_14() const { return ___trails_14; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_trails_14() { return &___trails_14; }
	inline void set_trails_14(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___trails_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trails_14), (void*)value);
	}

	inline static int32_t get_offset_of_startPos_15() { return static_cast<int32_t>(offsetof(ProjectileMoveScript_t8E5328E659143159EA6BDE95FD65EC7A674B237E, ___startPos_15)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_startPos_15() const { return ___startPos_15; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_startPos_15() { return &___startPos_15; }
	inline void set_startPos_15(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___startPos_15 = value;
	}

	inline static int32_t get_offset_of_speedRandomness_16() { return static_cast<int32_t>(offsetof(ProjectileMoveScript_t8E5328E659143159EA6BDE95FD65EC7A674B237E, ___speedRandomness_16)); }
	inline float get_speedRandomness_16() const { return ___speedRandomness_16; }
	inline float* get_address_of_speedRandomness_16() { return &___speedRandomness_16; }
	inline void set_speedRandomness_16(float value)
	{
		___speedRandomness_16 = value;
	}

	inline static int32_t get_offset_of_offset_17() { return static_cast<int32_t>(offsetof(ProjectileMoveScript_t8E5328E659143159EA6BDE95FD65EC7A674B237E, ___offset_17)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_offset_17() const { return ___offset_17; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_offset_17() { return &___offset_17; }
	inline void set_offset_17(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___offset_17 = value;
	}

	inline static int32_t get_offset_of_collided_18() { return static_cast<int32_t>(offsetof(ProjectileMoveScript_t8E5328E659143159EA6BDE95FD65EC7A674B237E, ___collided_18)); }
	inline bool get_collided_18() const { return ___collided_18; }
	inline bool* get_address_of_collided_18() { return &___collided_18; }
	inline void set_collided_18(bool value)
	{
		___collided_18 = value;
	}

	inline static int32_t get_offset_of_rb_19() { return static_cast<int32_t>(offsetof(ProjectileMoveScript_t8E5328E659143159EA6BDE95FD65EC7A674B237E, ___rb_19)); }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * get_rb_19() const { return ___rb_19; }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** get_address_of_rb_19() { return &___rb_19; }
	inline void set_rb_19(Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * value)
	{
		___rb_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rb_19), (void*)value);
	}

	inline static int32_t get_offset_of_rotateToMouse_20() { return static_cast<int32_t>(offsetof(ProjectileMoveScript_t8E5328E659143159EA6BDE95FD65EC7A674B237E, ___rotateToMouse_20)); }
	inline RotateToMouseScript_t484F9391662B1A307753F7AE65E5DC8BDB6764E9 * get_rotateToMouse_20() const { return ___rotateToMouse_20; }
	inline RotateToMouseScript_t484F9391662B1A307753F7AE65E5DC8BDB6764E9 ** get_address_of_rotateToMouse_20() { return &___rotateToMouse_20; }
	inline void set_rotateToMouse_20(RotateToMouseScript_t484F9391662B1A307753F7AE65E5DC8BDB6764E9 * value)
	{
		___rotateToMouse_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rotateToMouse_20), (void*)value);
	}

	inline static int32_t get_offset_of_target_21() { return static_cast<int32_t>(offsetof(ProjectileMoveScript_t8E5328E659143159EA6BDE95FD65EC7A674B237E, ___target_21)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_target_21() const { return ___target_21; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_target_21() { return &___target_21; }
	inline void set_target_21(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___target_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_21), (void*)value);
	}
};


// RotateToMouseScript
struct RotateToMouseScript_t484F9391662B1A307753F7AE65E5DC8BDB6764E9  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single RotateToMouseScript::maximumLenght
	float ___maximumLenght_4;
	// System.Boolean RotateToMouseScript::use2D
	bool ___use2D_5;
	// UnityEngine.Ray RotateToMouseScript::rayMouse
	Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___rayMouse_6;
	// UnityEngine.Vector3 RotateToMouseScript::pos
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos_7;
	// UnityEngine.Vector3 RotateToMouseScript::direction
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___direction_8;
	// UnityEngine.Quaternion RotateToMouseScript::rotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation_9;
	// UnityEngine.Camera RotateToMouseScript::cam
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___cam_10;
	// UnityEngine.WaitForSeconds RotateToMouseScript::updateTime
	WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * ___updateTime_11;

public:
	inline static int32_t get_offset_of_maximumLenght_4() { return static_cast<int32_t>(offsetof(RotateToMouseScript_t484F9391662B1A307753F7AE65E5DC8BDB6764E9, ___maximumLenght_4)); }
	inline float get_maximumLenght_4() const { return ___maximumLenght_4; }
	inline float* get_address_of_maximumLenght_4() { return &___maximumLenght_4; }
	inline void set_maximumLenght_4(float value)
	{
		___maximumLenght_4 = value;
	}

	inline static int32_t get_offset_of_use2D_5() { return static_cast<int32_t>(offsetof(RotateToMouseScript_t484F9391662B1A307753F7AE65E5DC8BDB6764E9, ___use2D_5)); }
	inline bool get_use2D_5() const { return ___use2D_5; }
	inline bool* get_address_of_use2D_5() { return &___use2D_5; }
	inline void set_use2D_5(bool value)
	{
		___use2D_5 = value;
	}

	inline static int32_t get_offset_of_rayMouse_6() { return static_cast<int32_t>(offsetof(RotateToMouseScript_t484F9391662B1A307753F7AE65E5DC8BDB6764E9, ___rayMouse_6)); }
	inline Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  get_rayMouse_6() const { return ___rayMouse_6; }
	inline Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * get_address_of_rayMouse_6() { return &___rayMouse_6; }
	inline void set_rayMouse_6(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  value)
	{
		___rayMouse_6 = value;
	}

	inline static int32_t get_offset_of_pos_7() { return static_cast<int32_t>(offsetof(RotateToMouseScript_t484F9391662B1A307753F7AE65E5DC8BDB6764E9, ___pos_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_pos_7() const { return ___pos_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_pos_7() { return &___pos_7; }
	inline void set_pos_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___pos_7 = value;
	}

	inline static int32_t get_offset_of_direction_8() { return static_cast<int32_t>(offsetof(RotateToMouseScript_t484F9391662B1A307753F7AE65E5DC8BDB6764E9, ___direction_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_direction_8() const { return ___direction_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_direction_8() { return &___direction_8; }
	inline void set_direction_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___direction_8 = value;
	}

	inline static int32_t get_offset_of_rotation_9() { return static_cast<int32_t>(offsetof(RotateToMouseScript_t484F9391662B1A307753F7AE65E5DC8BDB6764E9, ___rotation_9)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_rotation_9() const { return ___rotation_9; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_rotation_9() { return &___rotation_9; }
	inline void set_rotation_9(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___rotation_9 = value;
	}

	inline static int32_t get_offset_of_cam_10() { return static_cast<int32_t>(offsetof(RotateToMouseScript_t484F9391662B1A307753F7AE65E5DC8BDB6764E9, ___cam_10)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_cam_10() const { return ___cam_10; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_cam_10() { return &___cam_10; }
	inline void set_cam_10(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___cam_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cam_10), (void*)value);
	}

	inline static int32_t get_offset_of_updateTime_11() { return static_cast<int32_t>(offsetof(RotateToMouseScript_t484F9391662B1A307753F7AE65E5DC8BDB6764E9, ___updateTime_11)); }
	inline WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * get_updateTime_11() const { return ___updateTime_11; }
	inline WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 ** get_address_of_updateTime_11() { return &___updateTime_11; }
	inline void set_updateTime_11(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * value)
	{
		___updateTime_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___updateTime_11), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// ai
struct ai_t05DCF615948AD04F90BBCFF646B8389E83581B71  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.AI.NavMeshAgent ai::agent
	NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * ___agent_4;
	// UnityEngine.GameObject ai::Target
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Target_5;
	// UnityEngine.Animator ai::animator
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator_6;
	// UnityEngine.ParticleSystem ai::DefaultSkill
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___DefaultSkill_7;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> ai::VFXs
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___VFXs_8;
	// System.Int32 ai::AiKillCount
	int32_t ___AiKillCount_9;
	// System.Single ai::coolDownConstant
	float ___coolDownConstant_10;
	// System.Boolean ai::AttackCooldown
	bool ___AttackCooldown_11;
	// System.Boolean ai::attackStatus
	bool ___attackStatus_12;
	// System.Boolean ai::setDestinationControl
	bool ___setDestinationControl_13;
	// System.Boolean ai::setDestinationControlForAttackCooldown
	bool ___setDestinationControlForAttackCooldown_14;
	// System.Int32 ai::lastFrameCount
	int32_t ___lastFrameCount_15;
	// UnityEngine.Vector3 ai::firstTransformPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___firstTransformPosition_16;

public:
	inline static int32_t get_offset_of_agent_4() { return static_cast<int32_t>(offsetof(ai_t05DCF615948AD04F90BBCFF646B8389E83581B71, ___agent_4)); }
	inline NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * get_agent_4() const { return ___agent_4; }
	inline NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B ** get_address_of_agent_4() { return &___agent_4; }
	inline void set_agent_4(NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * value)
	{
		___agent_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___agent_4), (void*)value);
	}

	inline static int32_t get_offset_of_Target_5() { return static_cast<int32_t>(offsetof(ai_t05DCF615948AD04F90BBCFF646B8389E83581B71, ___Target_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Target_5() const { return ___Target_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Target_5() { return &___Target_5; }
	inline void set_Target_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Target_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Target_5), (void*)value);
	}

	inline static int32_t get_offset_of_animator_6() { return static_cast<int32_t>(offsetof(ai_t05DCF615948AD04F90BBCFF646B8389E83581B71, ___animator_6)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_animator_6() const { return ___animator_6; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_animator_6() { return &___animator_6; }
	inline void set_animator_6(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___animator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___animator_6), (void*)value);
	}

	inline static int32_t get_offset_of_DefaultSkill_7() { return static_cast<int32_t>(offsetof(ai_t05DCF615948AD04F90BBCFF646B8389E83581B71, ___DefaultSkill_7)); }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * get_DefaultSkill_7() const { return ___DefaultSkill_7; }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E ** get_address_of_DefaultSkill_7() { return &___DefaultSkill_7; }
	inline void set_DefaultSkill_7(ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * value)
	{
		___DefaultSkill_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DefaultSkill_7), (void*)value);
	}

	inline static int32_t get_offset_of_VFXs_8() { return static_cast<int32_t>(offsetof(ai_t05DCF615948AD04F90BBCFF646B8389E83581B71, ___VFXs_8)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_VFXs_8() const { return ___VFXs_8; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_VFXs_8() { return &___VFXs_8; }
	inline void set_VFXs_8(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___VFXs_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___VFXs_8), (void*)value);
	}

	inline static int32_t get_offset_of_AiKillCount_9() { return static_cast<int32_t>(offsetof(ai_t05DCF615948AD04F90BBCFF646B8389E83581B71, ___AiKillCount_9)); }
	inline int32_t get_AiKillCount_9() const { return ___AiKillCount_9; }
	inline int32_t* get_address_of_AiKillCount_9() { return &___AiKillCount_9; }
	inline void set_AiKillCount_9(int32_t value)
	{
		___AiKillCount_9 = value;
	}

	inline static int32_t get_offset_of_coolDownConstant_10() { return static_cast<int32_t>(offsetof(ai_t05DCF615948AD04F90BBCFF646B8389E83581B71, ___coolDownConstant_10)); }
	inline float get_coolDownConstant_10() const { return ___coolDownConstant_10; }
	inline float* get_address_of_coolDownConstant_10() { return &___coolDownConstant_10; }
	inline void set_coolDownConstant_10(float value)
	{
		___coolDownConstant_10 = value;
	}

	inline static int32_t get_offset_of_AttackCooldown_11() { return static_cast<int32_t>(offsetof(ai_t05DCF615948AD04F90BBCFF646B8389E83581B71, ___AttackCooldown_11)); }
	inline bool get_AttackCooldown_11() const { return ___AttackCooldown_11; }
	inline bool* get_address_of_AttackCooldown_11() { return &___AttackCooldown_11; }
	inline void set_AttackCooldown_11(bool value)
	{
		___AttackCooldown_11 = value;
	}

	inline static int32_t get_offset_of_attackStatus_12() { return static_cast<int32_t>(offsetof(ai_t05DCF615948AD04F90BBCFF646B8389E83581B71, ___attackStatus_12)); }
	inline bool get_attackStatus_12() const { return ___attackStatus_12; }
	inline bool* get_address_of_attackStatus_12() { return &___attackStatus_12; }
	inline void set_attackStatus_12(bool value)
	{
		___attackStatus_12 = value;
	}

	inline static int32_t get_offset_of_setDestinationControl_13() { return static_cast<int32_t>(offsetof(ai_t05DCF615948AD04F90BBCFF646B8389E83581B71, ___setDestinationControl_13)); }
	inline bool get_setDestinationControl_13() const { return ___setDestinationControl_13; }
	inline bool* get_address_of_setDestinationControl_13() { return &___setDestinationControl_13; }
	inline void set_setDestinationControl_13(bool value)
	{
		___setDestinationControl_13 = value;
	}

	inline static int32_t get_offset_of_setDestinationControlForAttackCooldown_14() { return static_cast<int32_t>(offsetof(ai_t05DCF615948AD04F90BBCFF646B8389E83581B71, ___setDestinationControlForAttackCooldown_14)); }
	inline bool get_setDestinationControlForAttackCooldown_14() const { return ___setDestinationControlForAttackCooldown_14; }
	inline bool* get_address_of_setDestinationControlForAttackCooldown_14() { return &___setDestinationControlForAttackCooldown_14; }
	inline void set_setDestinationControlForAttackCooldown_14(bool value)
	{
		___setDestinationControlForAttackCooldown_14 = value;
	}

	inline static int32_t get_offset_of_lastFrameCount_15() { return static_cast<int32_t>(offsetof(ai_t05DCF615948AD04F90BBCFF646B8389E83581B71, ___lastFrameCount_15)); }
	inline int32_t get_lastFrameCount_15() const { return ___lastFrameCount_15; }
	inline int32_t* get_address_of_lastFrameCount_15() { return &___lastFrameCount_15; }
	inline void set_lastFrameCount_15(int32_t value)
	{
		___lastFrameCount_15 = value;
	}

	inline static int32_t get_offset_of_firstTransformPosition_16() { return static_cast<int32_t>(offsetof(ai_t05DCF615948AD04F90BBCFF646B8389E83581B71, ___firstTransformPosition_16)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_firstTransformPosition_16() const { return ___firstTransformPosition_16; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_firstTransformPosition_16() { return &___firstTransformPosition_16; }
	inline void set_firstTransformPosition_16(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___firstTransformPosition_16 = value;
	}
};


// attack
struct attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// cameraShaker attack::shaker
	cameraShaker_t9CE5FEB9CB9D54949F9CA55EBB612EDA135EDF32 * ___shaker_4;
	// UnityEngine.Animator attack::animator
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator_5;
	// UnityEngine.ParticleSystem attack::DefaultBall
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___DefaultBall_6;
	// UnityEngine.ParticleSystem attack::FireBall
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___FireBall_7;
	// UnityEngine.ParticleSystem attack::WaterBall
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___WaterBall_8;
	// UnityEngine.ParticleSystem attack::LightningBall
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___LightningBall_9;
	// UnityEngine.ParticleSystem attack::Tornado
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___Tornado_10;
	// UnityEngine.GameObject attack::TornadoObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___TornadoObject_11;
	// UnityEngine.GameObject attack::BlackHoleBall
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___BlackHoleBall_12;
	// System.Int32 attack::wizardKillCount
	int32_t ___wizardKillCount_13;
	// UnityEngine.UI.Text attack::wizardKillText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___wizardKillText_14;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> attack::VFXs
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___VFXs_15;
	// UnityEngine.UI.Button attack::attackButton
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___attackButton_16;
	// UnityEngine.UI.Button attack::FireSelectButton
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___FireSelectButton_17;
	// UnityEngine.UI.Button attack::IceSelectButton
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___IceSelectButton_18;
	// UnityEngine.UI.Button attack::ArcaneSelectButton
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___ArcaneSelectButton_19;
	// UnityEngine.GameObject attack::SkillSelectionPanel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___SkillSelectionPanel_20;
	// System.Boolean attack::attackStatus
	bool ___attackStatus_21;
	// System.Boolean attack::AttackCooldown
	bool ___AttackCooldown_22;
	// UnityEngine.UI.Text attack::coolDownText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___coolDownText_23;
	// System.Single attack::coolDownConstant
	float ___coolDownConstant_24;
	// System.Single attack::timeLeftCD
	float ___timeLeftCD_25;
	// System.Double attack::timeLeftrounded
	double ___timeLeftrounded_26;
	// System.Int32 attack::AttackSelectionIndex
	int32_t ___AttackSelectionIndex_27;
	// UnityEngine.Vector3 attack::TornadoAddingVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___TornadoAddingVector_29;

public:
	inline static int32_t get_offset_of_shaker_4() { return static_cast<int32_t>(offsetof(attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C, ___shaker_4)); }
	inline cameraShaker_t9CE5FEB9CB9D54949F9CA55EBB612EDA135EDF32 * get_shaker_4() const { return ___shaker_4; }
	inline cameraShaker_t9CE5FEB9CB9D54949F9CA55EBB612EDA135EDF32 ** get_address_of_shaker_4() { return &___shaker_4; }
	inline void set_shaker_4(cameraShaker_t9CE5FEB9CB9D54949F9CA55EBB612EDA135EDF32 * value)
	{
		___shaker_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shaker_4), (void*)value);
	}

	inline static int32_t get_offset_of_animator_5() { return static_cast<int32_t>(offsetof(attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C, ___animator_5)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_animator_5() const { return ___animator_5; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_animator_5() { return &___animator_5; }
	inline void set_animator_5(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___animator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___animator_5), (void*)value);
	}

	inline static int32_t get_offset_of_DefaultBall_6() { return static_cast<int32_t>(offsetof(attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C, ___DefaultBall_6)); }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * get_DefaultBall_6() const { return ___DefaultBall_6; }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E ** get_address_of_DefaultBall_6() { return &___DefaultBall_6; }
	inline void set_DefaultBall_6(ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * value)
	{
		___DefaultBall_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DefaultBall_6), (void*)value);
	}

	inline static int32_t get_offset_of_FireBall_7() { return static_cast<int32_t>(offsetof(attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C, ___FireBall_7)); }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * get_FireBall_7() const { return ___FireBall_7; }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E ** get_address_of_FireBall_7() { return &___FireBall_7; }
	inline void set_FireBall_7(ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * value)
	{
		___FireBall_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FireBall_7), (void*)value);
	}

	inline static int32_t get_offset_of_WaterBall_8() { return static_cast<int32_t>(offsetof(attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C, ___WaterBall_8)); }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * get_WaterBall_8() const { return ___WaterBall_8; }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E ** get_address_of_WaterBall_8() { return &___WaterBall_8; }
	inline void set_WaterBall_8(ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * value)
	{
		___WaterBall_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WaterBall_8), (void*)value);
	}

	inline static int32_t get_offset_of_LightningBall_9() { return static_cast<int32_t>(offsetof(attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C, ___LightningBall_9)); }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * get_LightningBall_9() const { return ___LightningBall_9; }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E ** get_address_of_LightningBall_9() { return &___LightningBall_9; }
	inline void set_LightningBall_9(ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * value)
	{
		___LightningBall_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LightningBall_9), (void*)value);
	}

	inline static int32_t get_offset_of_Tornado_10() { return static_cast<int32_t>(offsetof(attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C, ___Tornado_10)); }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * get_Tornado_10() const { return ___Tornado_10; }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E ** get_address_of_Tornado_10() { return &___Tornado_10; }
	inline void set_Tornado_10(ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * value)
	{
		___Tornado_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Tornado_10), (void*)value);
	}

	inline static int32_t get_offset_of_TornadoObject_11() { return static_cast<int32_t>(offsetof(attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C, ___TornadoObject_11)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_TornadoObject_11() const { return ___TornadoObject_11; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_TornadoObject_11() { return &___TornadoObject_11; }
	inline void set_TornadoObject_11(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___TornadoObject_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TornadoObject_11), (void*)value);
	}

	inline static int32_t get_offset_of_BlackHoleBall_12() { return static_cast<int32_t>(offsetof(attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C, ___BlackHoleBall_12)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_BlackHoleBall_12() const { return ___BlackHoleBall_12; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_BlackHoleBall_12() { return &___BlackHoleBall_12; }
	inline void set_BlackHoleBall_12(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___BlackHoleBall_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BlackHoleBall_12), (void*)value);
	}

	inline static int32_t get_offset_of_wizardKillCount_13() { return static_cast<int32_t>(offsetof(attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C, ___wizardKillCount_13)); }
	inline int32_t get_wizardKillCount_13() const { return ___wizardKillCount_13; }
	inline int32_t* get_address_of_wizardKillCount_13() { return &___wizardKillCount_13; }
	inline void set_wizardKillCount_13(int32_t value)
	{
		___wizardKillCount_13 = value;
	}

	inline static int32_t get_offset_of_wizardKillText_14() { return static_cast<int32_t>(offsetof(attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C, ___wizardKillText_14)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_wizardKillText_14() const { return ___wizardKillText_14; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_wizardKillText_14() { return &___wizardKillText_14; }
	inline void set_wizardKillText_14(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___wizardKillText_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___wizardKillText_14), (void*)value);
	}

	inline static int32_t get_offset_of_VFXs_15() { return static_cast<int32_t>(offsetof(attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C, ___VFXs_15)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_VFXs_15() const { return ___VFXs_15; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_VFXs_15() { return &___VFXs_15; }
	inline void set_VFXs_15(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___VFXs_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___VFXs_15), (void*)value);
	}

	inline static int32_t get_offset_of_attackButton_16() { return static_cast<int32_t>(offsetof(attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C, ___attackButton_16)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_attackButton_16() const { return ___attackButton_16; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_attackButton_16() { return &___attackButton_16; }
	inline void set_attackButton_16(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___attackButton_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___attackButton_16), (void*)value);
	}

	inline static int32_t get_offset_of_FireSelectButton_17() { return static_cast<int32_t>(offsetof(attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C, ___FireSelectButton_17)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_FireSelectButton_17() const { return ___FireSelectButton_17; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_FireSelectButton_17() { return &___FireSelectButton_17; }
	inline void set_FireSelectButton_17(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___FireSelectButton_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FireSelectButton_17), (void*)value);
	}

	inline static int32_t get_offset_of_IceSelectButton_18() { return static_cast<int32_t>(offsetof(attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C, ___IceSelectButton_18)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_IceSelectButton_18() const { return ___IceSelectButton_18; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_IceSelectButton_18() { return &___IceSelectButton_18; }
	inline void set_IceSelectButton_18(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___IceSelectButton_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IceSelectButton_18), (void*)value);
	}

	inline static int32_t get_offset_of_ArcaneSelectButton_19() { return static_cast<int32_t>(offsetof(attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C, ___ArcaneSelectButton_19)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_ArcaneSelectButton_19() const { return ___ArcaneSelectButton_19; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_ArcaneSelectButton_19() { return &___ArcaneSelectButton_19; }
	inline void set_ArcaneSelectButton_19(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___ArcaneSelectButton_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ArcaneSelectButton_19), (void*)value);
	}

	inline static int32_t get_offset_of_SkillSelectionPanel_20() { return static_cast<int32_t>(offsetof(attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C, ___SkillSelectionPanel_20)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_SkillSelectionPanel_20() const { return ___SkillSelectionPanel_20; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_SkillSelectionPanel_20() { return &___SkillSelectionPanel_20; }
	inline void set_SkillSelectionPanel_20(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___SkillSelectionPanel_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SkillSelectionPanel_20), (void*)value);
	}

	inline static int32_t get_offset_of_attackStatus_21() { return static_cast<int32_t>(offsetof(attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C, ___attackStatus_21)); }
	inline bool get_attackStatus_21() const { return ___attackStatus_21; }
	inline bool* get_address_of_attackStatus_21() { return &___attackStatus_21; }
	inline void set_attackStatus_21(bool value)
	{
		___attackStatus_21 = value;
	}

	inline static int32_t get_offset_of_AttackCooldown_22() { return static_cast<int32_t>(offsetof(attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C, ___AttackCooldown_22)); }
	inline bool get_AttackCooldown_22() const { return ___AttackCooldown_22; }
	inline bool* get_address_of_AttackCooldown_22() { return &___AttackCooldown_22; }
	inline void set_AttackCooldown_22(bool value)
	{
		___AttackCooldown_22 = value;
	}

	inline static int32_t get_offset_of_coolDownText_23() { return static_cast<int32_t>(offsetof(attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C, ___coolDownText_23)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_coolDownText_23() const { return ___coolDownText_23; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_coolDownText_23() { return &___coolDownText_23; }
	inline void set_coolDownText_23(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___coolDownText_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___coolDownText_23), (void*)value);
	}

	inline static int32_t get_offset_of_coolDownConstant_24() { return static_cast<int32_t>(offsetof(attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C, ___coolDownConstant_24)); }
	inline float get_coolDownConstant_24() const { return ___coolDownConstant_24; }
	inline float* get_address_of_coolDownConstant_24() { return &___coolDownConstant_24; }
	inline void set_coolDownConstant_24(float value)
	{
		___coolDownConstant_24 = value;
	}

	inline static int32_t get_offset_of_timeLeftCD_25() { return static_cast<int32_t>(offsetof(attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C, ___timeLeftCD_25)); }
	inline float get_timeLeftCD_25() const { return ___timeLeftCD_25; }
	inline float* get_address_of_timeLeftCD_25() { return &___timeLeftCD_25; }
	inline void set_timeLeftCD_25(float value)
	{
		___timeLeftCD_25 = value;
	}

	inline static int32_t get_offset_of_timeLeftrounded_26() { return static_cast<int32_t>(offsetof(attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C, ___timeLeftrounded_26)); }
	inline double get_timeLeftrounded_26() const { return ___timeLeftrounded_26; }
	inline double* get_address_of_timeLeftrounded_26() { return &___timeLeftrounded_26; }
	inline void set_timeLeftrounded_26(double value)
	{
		___timeLeftrounded_26 = value;
	}

	inline static int32_t get_offset_of_AttackSelectionIndex_27() { return static_cast<int32_t>(offsetof(attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C, ___AttackSelectionIndex_27)); }
	inline int32_t get_AttackSelectionIndex_27() const { return ___AttackSelectionIndex_27; }
	inline int32_t* get_address_of_AttackSelectionIndex_27() { return &___AttackSelectionIndex_27; }
	inline void set_AttackSelectionIndex_27(int32_t value)
	{
		___AttackSelectionIndex_27 = value;
	}

	inline static int32_t get_offset_of_TornadoAddingVector_29() { return static_cast<int32_t>(offsetof(attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C, ___TornadoAddingVector_29)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_TornadoAddingVector_29() const { return ___TornadoAddingVector_29; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_TornadoAddingVector_29() { return &___TornadoAddingVector_29; }
	inline void set_TornadoAddingVector_29(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___TornadoAddingVector_29 = value;
	}
};

struct attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C_StaticFields
{
public:
	// UnityEngine.Vector3 attack::TornadoRotationCek
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___TornadoRotationCek_28;

public:
	inline static int32_t get_offset_of_TornadoRotationCek_28() { return static_cast<int32_t>(offsetof(attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C_StaticFields, ___TornadoRotationCek_28)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_TornadoRotationCek_28() const { return ___TornadoRotationCek_28; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_TornadoRotationCek_28() { return &___TornadoRotationCek_28; }
	inline void set_TornadoRotationCek_28(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___TornadoRotationCek_28 = value;
	}
};


// cameraShaker
struct cameraShaker_t9CE5FEB9CB9D54949F9CA55EBB612EDA135EDF32  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// enemyHealthSystem1
struct enemyHealthSystem1_t9D32045CB414C7BF3B895294B1044F2D9FFA0029  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// PanelController enemyHealthSystem1::PanelSc
	PanelController_t680C04009837CA28BD14657765EC2AAE385ED0EA * ___PanelSc_4;
	// HealthController enemyHealthSystem1::healthController
	HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 * ___healthController_5;
	// UnityEngine.UI.Slider enemyHealthSystem1::healthSlider
	Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * ___healthSlider_6;
	// UnityEngine.UI.Text enemyHealthSystem1::maxHealthText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___maxHealthText_7;
	// UnityEngine.UI.Text enemyHealthSystem1::currentHealthText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___currentHealthText_8;
	// UnityEngine.ParticleSystem enemyHealthSystem1::poisonAnim
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___poisonAnim_9;
	// UnityEngine.ParticleSystem enemyHealthSystem1::explosionAnim
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___explosionAnim_10;
	// UnityEngine.ParticleSystem enemyHealthSystem1::freezingAnim
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___freezingAnim_11;
	// UnityEngine.Animator enemyHealthSystem1::animator
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator_12;
	// UnityEngine.GameObject enemyHealthSystem1::gravestone
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gravestone_13;
	// UnityEngine.GameObject enemyHealthSystem1::AttackScripterisim
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___AttackScripterisim_14;
	// UnityEngine.GameObject enemyHealthSystem1::aiScriptErisim
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___aiScriptErisim_15;
	// UnityEngine.UI.Text enemyHealthSystem1::deneme
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___deneme_16;
	// System.Boolean enemyHealthSystem1::graveStoneControl
	bool ___graveStoneControl_18;

public:
	inline static int32_t get_offset_of_PanelSc_4() { return static_cast<int32_t>(offsetof(enemyHealthSystem1_t9D32045CB414C7BF3B895294B1044F2D9FFA0029, ___PanelSc_4)); }
	inline PanelController_t680C04009837CA28BD14657765EC2AAE385ED0EA * get_PanelSc_4() const { return ___PanelSc_4; }
	inline PanelController_t680C04009837CA28BD14657765EC2AAE385ED0EA ** get_address_of_PanelSc_4() { return &___PanelSc_4; }
	inline void set_PanelSc_4(PanelController_t680C04009837CA28BD14657765EC2AAE385ED0EA * value)
	{
		___PanelSc_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PanelSc_4), (void*)value);
	}

	inline static int32_t get_offset_of_healthController_5() { return static_cast<int32_t>(offsetof(enemyHealthSystem1_t9D32045CB414C7BF3B895294B1044F2D9FFA0029, ___healthController_5)); }
	inline HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 * get_healthController_5() const { return ___healthController_5; }
	inline HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 ** get_address_of_healthController_5() { return &___healthController_5; }
	inline void set_healthController_5(HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 * value)
	{
		___healthController_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___healthController_5), (void*)value);
	}

	inline static int32_t get_offset_of_healthSlider_6() { return static_cast<int32_t>(offsetof(enemyHealthSystem1_t9D32045CB414C7BF3B895294B1044F2D9FFA0029, ___healthSlider_6)); }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * get_healthSlider_6() const { return ___healthSlider_6; }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A ** get_address_of_healthSlider_6() { return &___healthSlider_6; }
	inline void set_healthSlider_6(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * value)
	{
		___healthSlider_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___healthSlider_6), (void*)value);
	}

	inline static int32_t get_offset_of_maxHealthText_7() { return static_cast<int32_t>(offsetof(enemyHealthSystem1_t9D32045CB414C7BF3B895294B1044F2D9FFA0029, ___maxHealthText_7)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_maxHealthText_7() const { return ___maxHealthText_7; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_maxHealthText_7() { return &___maxHealthText_7; }
	inline void set_maxHealthText_7(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___maxHealthText_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___maxHealthText_7), (void*)value);
	}

	inline static int32_t get_offset_of_currentHealthText_8() { return static_cast<int32_t>(offsetof(enemyHealthSystem1_t9D32045CB414C7BF3B895294B1044F2D9FFA0029, ___currentHealthText_8)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_currentHealthText_8() const { return ___currentHealthText_8; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_currentHealthText_8() { return &___currentHealthText_8; }
	inline void set_currentHealthText_8(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___currentHealthText_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentHealthText_8), (void*)value);
	}

	inline static int32_t get_offset_of_poisonAnim_9() { return static_cast<int32_t>(offsetof(enemyHealthSystem1_t9D32045CB414C7BF3B895294B1044F2D9FFA0029, ___poisonAnim_9)); }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * get_poisonAnim_9() const { return ___poisonAnim_9; }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E ** get_address_of_poisonAnim_9() { return &___poisonAnim_9; }
	inline void set_poisonAnim_9(ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * value)
	{
		___poisonAnim_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___poisonAnim_9), (void*)value);
	}

	inline static int32_t get_offset_of_explosionAnim_10() { return static_cast<int32_t>(offsetof(enemyHealthSystem1_t9D32045CB414C7BF3B895294B1044F2D9FFA0029, ___explosionAnim_10)); }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * get_explosionAnim_10() const { return ___explosionAnim_10; }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E ** get_address_of_explosionAnim_10() { return &___explosionAnim_10; }
	inline void set_explosionAnim_10(ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * value)
	{
		___explosionAnim_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___explosionAnim_10), (void*)value);
	}

	inline static int32_t get_offset_of_freezingAnim_11() { return static_cast<int32_t>(offsetof(enemyHealthSystem1_t9D32045CB414C7BF3B895294B1044F2D9FFA0029, ___freezingAnim_11)); }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * get_freezingAnim_11() const { return ___freezingAnim_11; }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E ** get_address_of_freezingAnim_11() { return &___freezingAnim_11; }
	inline void set_freezingAnim_11(ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * value)
	{
		___freezingAnim_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___freezingAnim_11), (void*)value);
	}

	inline static int32_t get_offset_of_animator_12() { return static_cast<int32_t>(offsetof(enemyHealthSystem1_t9D32045CB414C7BF3B895294B1044F2D9FFA0029, ___animator_12)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_animator_12() const { return ___animator_12; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_animator_12() { return &___animator_12; }
	inline void set_animator_12(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___animator_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___animator_12), (void*)value);
	}

	inline static int32_t get_offset_of_gravestone_13() { return static_cast<int32_t>(offsetof(enemyHealthSystem1_t9D32045CB414C7BF3B895294B1044F2D9FFA0029, ___gravestone_13)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_gravestone_13() const { return ___gravestone_13; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_gravestone_13() { return &___gravestone_13; }
	inline void set_gravestone_13(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___gravestone_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gravestone_13), (void*)value);
	}

	inline static int32_t get_offset_of_AttackScripterisim_14() { return static_cast<int32_t>(offsetof(enemyHealthSystem1_t9D32045CB414C7BF3B895294B1044F2D9FFA0029, ___AttackScripterisim_14)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_AttackScripterisim_14() const { return ___AttackScripterisim_14; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_AttackScripterisim_14() { return &___AttackScripterisim_14; }
	inline void set_AttackScripterisim_14(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___AttackScripterisim_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AttackScripterisim_14), (void*)value);
	}

	inline static int32_t get_offset_of_aiScriptErisim_15() { return static_cast<int32_t>(offsetof(enemyHealthSystem1_t9D32045CB414C7BF3B895294B1044F2D9FFA0029, ___aiScriptErisim_15)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_aiScriptErisim_15() const { return ___aiScriptErisim_15; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_aiScriptErisim_15() { return &___aiScriptErisim_15; }
	inline void set_aiScriptErisim_15(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___aiScriptErisim_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___aiScriptErisim_15), (void*)value);
	}

	inline static int32_t get_offset_of_deneme_16() { return static_cast<int32_t>(offsetof(enemyHealthSystem1_t9D32045CB414C7BF3B895294B1044F2D9FFA0029, ___deneme_16)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_deneme_16() const { return ___deneme_16; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_deneme_16() { return &___deneme_16; }
	inline void set_deneme_16(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___deneme_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___deneme_16), (void*)value);
	}

	inline static int32_t get_offset_of_graveStoneControl_18() { return static_cast<int32_t>(offsetof(enemyHealthSystem1_t9D32045CB414C7BF3B895294B1044F2D9FFA0029, ___graveStoneControl_18)); }
	inline bool get_graveStoneControl_18() const { return ___graveStoneControl_18; }
	inline bool* get_address_of_graveStoneControl_18() { return &___graveStoneControl_18; }
	inline void set_graveStoneControl_18(bool value)
	{
		___graveStoneControl_18 = value;
	}
};

struct enemyHealthSystem1_t9D32045CB414C7BF3B895294B1044F2D9FFA0029_StaticFields
{
public:
	// System.Int32 enemyHealthSystem1::AliveCount
	int32_t ___AliveCount_17;

public:
	inline static int32_t get_offset_of_AliveCount_17() { return static_cast<int32_t>(offsetof(enemyHealthSystem1_t9D32045CB414C7BF3B895294B1044F2D9FFA0029_StaticFields, ___AliveCount_17)); }
	inline int32_t get_AliveCount_17() const { return ___AliveCount_17; }
	inline int32_t* get_address_of_AliveCount_17() { return &___AliveCount_17; }
	inline void set_AliveCount_17(int32_t value)
	{
		___AliveCount_17 = value;
	}
};


// enemyPathMovement
struct enemyPathMovement_t2A082E51F0F47B4E09CD70F138BEF58C105BD216  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single enemyPathMovement::Range
	float ___Range_5;

public:
	inline static int32_t get_offset_of_Range_5() { return static_cast<int32_t>(offsetof(enemyPathMovement_t2A082E51F0F47B4E09CD70F138BEF58C105BD216, ___Range_5)); }
	inline float get_Range_5() const { return ___Range_5; }
	inline float* get_address_of_Range_5() { return &___Range_5; }
	inline void set_Range_5(float value)
	{
		___Range_5 = value;
	}
};

struct enemyPathMovement_t2A082E51F0F47B4E09CD70F138BEF58C105BD216_StaticFields
{
public:
	// enemyPathMovement enemyPathMovement::Instance
	enemyPathMovement_t2A082E51F0F47B4E09CD70F138BEF58C105BD216 * ___Instance_4;

public:
	inline static int32_t get_offset_of_Instance_4() { return static_cast<int32_t>(offsetof(enemyPathMovement_t2A082E51F0F47B4E09CD70F138BEF58C105BD216_StaticFields, ___Instance_4)); }
	inline enemyPathMovement_t2A082E51F0F47B4E09CD70F138BEF58C105BD216 * get_Instance_4() const { return ___Instance_4; }
	inline enemyPathMovement_t2A082E51F0F47B4E09CD70F138BEF58C105BD216 ** get_address_of_Instance_4() { return &___Instance_4; }
	inline void set_Instance_4(enemyPathMovement_t2A082E51F0F47B4E09CD70F138BEF58C105BD216 * value)
	{
		___Instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_4), (void*)value);
	}
};


// lookAtCam
struct lookAtCam_t64131884DEED4BA8406F72036C9D4F5B245BA14C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Transform lookAtCam::cam
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___cam_4;

public:
	inline static int32_t get_offset_of_cam_4() { return static_cast<int32_t>(offsetof(lookAtCam_t64131884DEED4BA8406F72036C9D4F5B245BA14C, ___cam_4)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_cam_4() const { return ___cam_4; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_cam_4() { return &___cam_4; }
	inline void set_cam_4(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___cam_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cam_4), (void*)value);
	}
};


// move
struct move_tF5C934E0EAF4295D46D7DAA6C508AFAB1B699276  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Joystick move::joystick
	Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * ___joystick_4;
	// System.Single move::horizontal
	float ___horizontal_5;
	// System.Single move::vertical
	float ___vertical_6;
	// UnityEngine.Vector3 move::FirstPoint
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___FirstPoint_7;
	// UnityEngine.Vector3 move::SecondPoint
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___SecondPoint_8;
	// System.Single move::xAngle
	float ___xAngle_9;
	// UnityEngine.ParticleSystem move::walkSmoke
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___walkSmoke_10;
	// UnityEngine.Animator move::animator
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator_11;
	// UnityEngine.GameObject move::wizard
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___wizard_12;
	// System.Single move::moveSpeed
	float ___moveSpeed_16;

public:
	inline static int32_t get_offset_of_joystick_4() { return static_cast<int32_t>(offsetof(move_tF5C934E0EAF4295D46D7DAA6C508AFAB1B699276, ___joystick_4)); }
	inline Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * get_joystick_4() const { return ___joystick_4; }
	inline Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 ** get_address_of_joystick_4() { return &___joystick_4; }
	inline void set_joystick_4(Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * value)
	{
		___joystick_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___joystick_4), (void*)value);
	}

	inline static int32_t get_offset_of_horizontal_5() { return static_cast<int32_t>(offsetof(move_tF5C934E0EAF4295D46D7DAA6C508AFAB1B699276, ___horizontal_5)); }
	inline float get_horizontal_5() const { return ___horizontal_5; }
	inline float* get_address_of_horizontal_5() { return &___horizontal_5; }
	inline void set_horizontal_5(float value)
	{
		___horizontal_5 = value;
	}

	inline static int32_t get_offset_of_vertical_6() { return static_cast<int32_t>(offsetof(move_tF5C934E0EAF4295D46D7DAA6C508AFAB1B699276, ___vertical_6)); }
	inline float get_vertical_6() const { return ___vertical_6; }
	inline float* get_address_of_vertical_6() { return &___vertical_6; }
	inline void set_vertical_6(float value)
	{
		___vertical_6 = value;
	}

	inline static int32_t get_offset_of_FirstPoint_7() { return static_cast<int32_t>(offsetof(move_tF5C934E0EAF4295D46D7DAA6C508AFAB1B699276, ___FirstPoint_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_FirstPoint_7() const { return ___FirstPoint_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_FirstPoint_7() { return &___FirstPoint_7; }
	inline void set_FirstPoint_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___FirstPoint_7 = value;
	}

	inline static int32_t get_offset_of_SecondPoint_8() { return static_cast<int32_t>(offsetof(move_tF5C934E0EAF4295D46D7DAA6C508AFAB1B699276, ___SecondPoint_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_SecondPoint_8() const { return ___SecondPoint_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_SecondPoint_8() { return &___SecondPoint_8; }
	inline void set_SecondPoint_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___SecondPoint_8 = value;
	}

	inline static int32_t get_offset_of_xAngle_9() { return static_cast<int32_t>(offsetof(move_tF5C934E0EAF4295D46D7DAA6C508AFAB1B699276, ___xAngle_9)); }
	inline float get_xAngle_9() const { return ___xAngle_9; }
	inline float* get_address_of_xAngle_9() { return &___xAngle_9; }
	inline void set_xAngle_9(float value)
	{
		___xAngle_9 = value;
	}

	inline static int32_t get_offset_of_walkSmoke_10() { return static_cast<int32_t>(offsetof(move_tF5C934E0EAF4295D46D7DAA6C508AFAB1B699276, ___walkSmoke_10)); }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * get_walkSmoke_10() const { return ___walkSmoke_10; }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E ** get_address_of_walkSmoke_10() { return &___walkSmoke_10; }
	inline void set_walkSmoke_10(ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * value)
	{
		___walkSmoke_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___walkSmoke_10), (void*)value);
	}

	inline static int32_t get_offset_of_animator_11() { return static_cast<int32_t>(offsetof(move_tF5C934E0EAF4295D46D7DAA6C508AFAB1B699276, ___animator_11)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_animator_11() const { return ___animator_11; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_animator_11() { return &___animator_11; }
	inline void set_animator_11(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___animator_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___animator_11), (void*)value);
	}

	inline static int32_t get_offset_of_wizard_12() { return static_cast<int32_t>(offsetof(move_tF5C934E0EAF4295D46D7DAA6C508AFAB1B699276, ___wizard_12)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_wizard_12() const { return ___wizard_12; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_wizard_12() { return &___wizard_12; }
	inline void set_wizard_12(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___wizard_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___wizard_12), (void*)value);
	}

	inline static int32_t get_offset_of_moveSpeed_16() { return static_cast<int32_t>(offsetof(move_tF5C934E0EAF4295D46D7DAA6C508AFAB1B699276, ___moveSpeed_16)); }
	inline float get_moveSpeed_16() const { return ___moveSpeed_16; }
	inline float* get_address_of_moveSpeed_16() { return &___moveSpeed_16; }
	inline void set_moveSpeed_16(float value)
	{
		___moveSpeed_16 = value;
	}
};

struct move_tF5C934E0EAF4295D46D7DAA6C508AFAB1B699276_StaticFields
{
public:
	// UnityEngine.Vector3 move::forward
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forward_13;
	// UnityEngine.Vector3 move::right
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___right_14;
	// UnityEngine.Vector3 move::heading
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___heading_15;

public:
	inline static int32_t get_offset_of_forward_13() { return static_cast<int32_t>(offsetof(move_tF5C934E0EAF4295D46D7DAA6C508AFAB1B699276_StaticFields, ___forward_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forward_13() const { return ___forward_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forward_13() { return &___forward_13; }
	inline void set_forward_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forward_13 = value;
	}

	inline static int32_t get_offset_of_right_14() { return static_cast<int32_t>(offsetof(move_tF5C934E0EAF4295D46D7DAA6C508AFAB1B699276_StaticFields, ___right_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_right_14() const { return ___right_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_right_14() { return &___right_14; }
	inline void set_right_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___right_14 = value;
	}

	inline static int32_t get_offset_of_heading_15() { return static_cast<int32_t>(offsetof(move_tF5C934E0EAF4295D46D7DAA6C508AFAB1B699276_StaticFields, ___heading_15)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_heading_15() const { return ___heading_15; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_heading_15() { return &___heading_15; }
	inline void set_heading_15(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___heading_15 = value;
	}
};


// scriptTexttest
struct scriptTexttest_t5DA02D7FF2D49D1970E133E3A0E2D37B2E4D90F8  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text scriptTexttest::bubbleText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___bubbleText_4;
	// UnityEngine.UI.Text scriptTexttest::bubbleTitleTxt
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___bubbleTitleTxt_5;
	// UnityEngine.GameObject scriptTexttest::bubble
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___bubble_6;
	// UnityEngine.GameObject scriptTexttest::bubbleTitle
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___bubbleTitle_7;

public:
	inline static int32_t get_offset_of_bubbleText_4() { return static_cast<int32_t>(offsetof(scriptTexttest_t5DA02D7FF2D49D1970E133E3A0E2D37B2E4D90F8, ___bubbleText_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_bubbleText_4() const { return ___bubbleText_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_bubbleText_4() { return &___bubbleText_4; }
	inline void set_bubbleText_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___bubbleText_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bubbleText_4), (void*)value);
	}

	inline static int32_t get_offset_of_bubbleTitleTxt_5() { return static_cast<int32_t>(offsetof(scriptTexttest_t5DA02D7FF2D49D1970E133E3A0E2D37B2E4D90F8, ___bubbleTitleTxt_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_bubbleTitleTxt_5() const { return ___bubbleTitleTxt_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_bubbleTitleTxt_5() { return &___bubbleTitleTxt_5; }
	inline void set_bubbleTitleTxt_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___bubbleTitleTxt_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bubbleTitleTxt_5), (void*)value);
	}

	inline static int32_t get_offset_of_bubble_6() { return static_cast<int32_t>(offsetof(scriptTexttest_t5DA02D7FF2D49D1970E133E3A0E2D37B2E4D90F8, ___bubble_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_bubble_6() const { return ___bubble_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_bubble_6() { return &___bubble_6; }
	inline void set_bubble_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___bubble_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bubble_6), (void*)value);
	}

	inline static int32_t get_offset_of_bubbleTitle_7() { return static_cast<int32_t>(offsetof(scriptTexttest_t5DA02D7FF2D49D1970E133E3A0E2D37B2E4D90F8, ___bubbleTitle_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_bubbleTitle_7() const { return ___bubbleTitle_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_bubbleTitle_7() { return &___bubbleTitle_7; }
	inline void set_bubbleTitle_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___bubbleTitle_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bubbleTitle_7), (void*)value);
	}
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


// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
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


// UnityEngine.UI.Slider
struct Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;

public:
	inline static int32_t get_offset_of_m_FillRect_20() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillRect_20)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_FillRect_20() const { return ___m_FillRect_20; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_FillRect_20() { return &___m_FillRect_20; }
	inline void set_m_FillRect_20(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_FillRect_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillRect_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleRect_21() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleRect_21)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_HandleRect_21() const { return ___m_HandleRect_21; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_HandleRect_21() { return &___m_HandleRect_21; }
	inline void set_m_HandleRect_21(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_HandleRect_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleRect_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_Direction_22() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Direction_22)); }
	inline int32_t get_m_Direction_22() const { return ___m_Direction_22; }
	inline int32_t* get_address_of_m_Direction_22() { return &___m_Direction_22; }
	inline void set_m_Direction_22(int32_t value)
	{
		___m_Direction_22 = value;
	}

	inline static int32_t get_offset_of_m_MinValue_23() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_MinValue_23)); }
	inline float get_m_MinValue_23() const { return ___m_MinValue_23; }
	inline float* get_address_of_m_MinValue_23() { return &___m_MinValue_23; }
	inline void set_m_MinValue_23(float value)
	{
		___m_MinValue_23 = value;
	}

	inline static int32_t get_offset_of_m_MaxValue_24() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_MaxValue_24)); }
	inline float get_m_MaxValue_24() const { return ___m_MaxValue_24; }
	inline float* get_address_of_m_MaxValue_24() { return &___m_MaxValue_24; }
	inline void set_m_MaxValue_24(float value)
	{
		___m_MaxValue_24 = value;
	}

	inline static int32_t get_offset_of_m_WholeNumbers_25() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_WholeNumbers_25)); }
	inline bool get_m_WholeNumbers_25() const { return ___m_WholeNumbers_25; }
	inline bool* get_address_of_m_WholeNumbers_25() { return &___m_WholeNumbers_25; }
	inline void set_m_WholeNumbers_25(bool value)
	{
		___m_WholeNumbers_25 = value;
	}

	inline static int32_t get_offset_of_m_Value_26() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Value_26)); }
	inline float get_m_Value_26() const { return ___m_Value_26; }
	inline float* get_address_of_m_Value_26() { return &___m_Value_26; }
	inline void set_m_Value_26(float value)
	{
		___m_Value_26 = value;
	}

	inline static int32_t get_offset_of_m_OnValueChanged_27() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_OnValueChanged_27)); }
	inline SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * get_m_OnValueChanged_27() const { return ___m_OnValueChanged_27; }
	inline SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 ** get_address_of_m_OnValueChanged_27() { return &___m_OnValueChanged_27; }
	inline void set_m_OnValueChanged_27(SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * value)
	{
		___m_OnValueChanged_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValueChanged_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillImage_28() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillImage_28)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_m_FillImage_28() const { return ___m_FillImage_28; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_m_FillImage_28() { return &___m_FillImage_28; }
	inline void set_m_FillImage_28(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___m_FillImage_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillImage_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillTransform_29() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillTransform_29)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_FillTransform_29() const { return ___m_FillTransform_29; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_FillTransform_29() { return &___m_FillTransform_29; }
	inline void set_m_FillTransform_29(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_FillTransform_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillTransform_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillContainerRect_30() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillContainerRect_30)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_FillContainerRect_30() const { return ___m_FillContainerRect_30; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_FillContainerRect_30() { return &___m_FillContainerRect_30; }
	inline void set_m_FillContainerRect_30(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_FillContainerRect_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillContainerRect_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleTransform_31() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleTransform_31)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_HandleTransform_31() const { return ___m_HandleTransform_31; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_HandleTransform_31() { return &___m_HandleTransform_31; }
	inline void set_m_HandleTransform_31(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_HandleTransform_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleTransform_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleContainerRect_32() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleContainerRect_32)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_HandleContainerRect_32() const { return ___m_HandleContainerRect_32; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_HandleContainerRect_32() { return &___m_HandleContainerRect_32; }
	inline void set_m_HandleContainerRect_32(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_HandleContainerRect_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleContainerRect_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_Offset_33() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Offset_33)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Offset_33() const { return ___m_Offset_33; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Offset_33() { return &___m_Offset_33; }
	inline void set_m_Offset_33(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Offset_33 = value;
	}

	inline static int32_t get_offset_of_m_Tracker_34() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Tracker_34)); }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  get_m_Tracker_34() const { return ___m_Tracker_34; }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 * get_address_of_m_Tracker_34() { return &___m_Tracker_34; }
	inline void set_m_Tracker_34(DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  value)
	{
		___m_Tracker_34 = value;
	}

	inline static int32_t get_offset_of_m_DelayedUpdateVisuals_35() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_DelayedUpdateVisuals_35)); }
	inline bool get_m_DelayedUpdateVisuals_35() const { return ___m_DelayedUpdateVisuals_35; }
	inline bool* get_address_of_m_DelayedUpdateVisuals_35() { return &___m_DelayedUpdateVisuals_35; }
	inline void set_m_DelayedUpdateVisuals_35(bool value)
	{
		___m_DelayedUpdateVisuals_35 = value;
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.UI.Text[]
struct TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * m_Items[1];

public:
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.ParticleSystem[]
struct ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * m_Items[1];

public:
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * value)
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


// !!0 UnityEngine.Component::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponentInChildren_TisRuntimeObject_mB377B32275A969E0D1A738DBC693DE8EB3593642_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Component_GetComponentsInChildren_TisRuntimeObject_mCA5B356D4B0824C6DE60A8E90E6A6D4188C56C2F_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared (RuntimeObject * ___original0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared (const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared (RuntimeObject * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method);

// System.Void cameraShaker/<Shake>d__0::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShakeU3Ed__0__ctor_m90531A490514EB236D09DAC7B3849112760C5426 (U3CShakeU3Ed__0_t56ABF31C41CA87AFA3AC45DD82CF6F23D6F283A7 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInChildren<UnityEngine.UI.Slider>()
inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * Component_GetComponentInChildren_TisSlider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A_mECB3B5A216AD4AAA7331E7F6731886264840D054 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mB377B32275A969E0D1A738DBC693DE8EB3593642_gshared)(__this, method);
}
// !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.UI.Text>()
inline TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* Component_GetComponentsInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m7556907CF90B895FDFBEC11100A5F7AD5FAF1AA6 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_mCA5B356D4B0824C6DE60A8E90E6A6D4188C56C2F_gshared)(__this, method);
}
// !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.ParticleSystem>()
inline ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7* Component_GetComponentsInChildren_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m75CC9D1656BD67C760E6D5EA89403C89B728E8F6 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7* (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_mCA5B356D4B0824C6DE60A8E90E6A6D4188C56C2F_gshared)(__this, method);
}
// System.Void enemyHealthSystem1::HealthUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void enemyHealthSystem1_HealthUpdate_m547DFFE79A4C0FBECC0AF4502AF0561C7BC5852E (enemyHealthSystem1_t9D32045CB414C7BF3B895294B1044F2D9FFA0029 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Stop_m8CBF9268DE7B5A40952B4977462B857B5F5AFB9D (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * __this, const RuntimeMethod* method);
// System.Single HealthController::GetHealthMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HealthController_GetHealthMax_m1AEB454DBA5B8AEA4353044AD37F7C9E7467760A (HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 * __this, const RuntimeMethod* method);
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010 (float* __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::InvokeRepeating(System.String,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_InvokeRepeating_mB77F4276826FBA696A150831D190875CB5802C70 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, String_t* ___methodName0, float ___time1, float ___repeatRate2, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Boolean DamageCircle::IsOutsideCircle(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DamageCircle_IsOutsideCircle_mD44C47C9E57CD4F1EF449B065B84CC55624F78D7 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// System.Boolean HealthController::IsDead()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool HealthController_IsDead_mE7D0AA18C03226E2D5371D73C67C9F7CF86995D6_inline (HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.ParticleSystem::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ParticleSystem_get_isPlaying_m36FD03CBF99EE4C243B01F37D77CB6B1CFA526BA (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * __this, const RuntimeMethod* method);
// System.Int32 HealthController::GetHealthCurrent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HealthController_GetHealthCurrent_m0A98300D4D5C8BDEE92DC8D4D66C409CA4F4B9D7_inline (HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 * __this, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.Boolean enemyHealthSystem1::IsDead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool enemyHealthSystem1_IsDead_m37C895C0826251CDC7AA7D37CD1EAC5BF7409A7D (enemyHealthSystem1_t9D32045CB414C7BF3B895294B1044F2D9FFA0029 * __this, const RuntimeMethod* method);
// System.Void enemyHealthSystem1::DeadStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void enemyHealthSystem1_DeadStatus_m49D678D7303CB34E2E605F0DF888C65AAAD38D55 (enemyHealthSystem1_t9D32045CB414C7BF3B895294B1044F2D9FFA0029 * __this, const RuntimeMethod* method);
// System.Void HealthController::Damage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthController_Damage_m72DC74C513F1A4FB7DA30BAAE1154A53B686B832 (HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 * __this, int32_t ___amount0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Play_m28D27CC4CDC1D93195C75647E6F6DAECF8B6BC50 (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * __this, const RuntimeMethod* method);
// System.Void PanelController::AliveCountUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelController_AliveCountUpdate_m6772DD828E83FCCEE6913DDC1E8B7B98174058F1 (PanelController_t680C04009837CA28BD14657765EC2AAE385ED0EA * __this, const RuntimeMethod* method);
// System.Void enemyHealthSystem1::LevelPassed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void enemyHealthSystem1_LevelPassed_mDC339FFCEB56B3B5BC722DD148D23338CDA4E25E (enemyHealthSystem1_t9D32045CB414C7BF3B895294B1044F2D9FFA0029 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::print(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090 (RuntimeObject * ___message0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void enemyHealthSystem1::DeathLogTexts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void enemyHealthSystem1_DeathLogTexts_mE13D42D970FF0F9F1C106DBA124E80E2B30C587B (enemyHealthSystem1_t9D32045CB414C7BF3B895294B1044F2D9FFA0029 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, String_t* ___methodName0, float ___time1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<ai>()
inline ai_t05DCF615948AD04F90BBCFF646B8389E83581B71 * Component_GetComponent_Tisai_t05DCF615948AD04F90BBCFF646B8389E83581B71_m3AE4C964EDD0B5968A0ED31120D6896937CE1FEA (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  ai_t05DCF615948AD04F90BBCFF646B8389E83581B71 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, bool ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<enemyHealthSystem1>()
inline enemyHealthSystem1_t9D32045CB414C7BF3B895294B1044F2D9FFA0029 * Component_GetComponent_TisenemyHealthSystem1_t9D32045CB414C7BF3B895294B1044F2D9FFA0029_m43B1E00A13972A750952D0E9B84D030B14DDBA2E (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  enemyHealthSystem1_t9D32045CB414C7BF3B895294B1044F2D9FFA0029 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.AI.NavMeshAgent>()
inline NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * Component_GetComponent_TisNavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B_m15077FF184192C84FCF6B2A1FC8ECF53C9220F2F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.BoxCollider>()
inline BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * Component_GetComponent_TisBoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5_m0D682A42739E30A25411905C0A712C2BEE81F861 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.Collider::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider_set_enabled_m047B4D830755CD36671F7A60BFAA9C0D61F6C4A1 (Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * __this, bool ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInChildren<AiCanAttackCircle>()
inline AiCanAttackCircle_t57AE50A882353B23FA5A30DF81FBEE01909E19B6 * Component_GetComponentInChildren_TisAiCanAttackCircle_t57AE50A882353B23FA5A30DF81FBEE01909E19B6_mBE6C3FB3D5ADB99D8FB079ABBC1B6AEAB1BDF807 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  AiCanAttackCircle_t57AE50A882353B23FA5A30DF81FBEE01909E19B6 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mB377B32275A969E0D1A738DBC693DE8EB3593642_gshared)(__this, method);
}
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared)(___original0, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void PanelController::SetCloseOpenAllPanels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelController_SetCloseOpenAllPanels_mB5C3289166CC60EB22FE8B79CE30F2D95EAA2AB6 (PanelController_t680C04009837CA28BD14657765EC2AAE385ED0EA * __this, const RuntimeMethod* method);
// System.Void PanelController::SetMapCompletedPanel(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelController_SetMapCompletedPanel_mE667338F6449374E6275ED9AE868D3F3AC7CF259 (PanelController_t680C04009837CA28BD14657765EC2AAE385ED0EA * __this, bool ___open0, const RuntimeMethod* method);
// System.Void PanelController::SetSuccessPanel(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelController_SetSuccessPanel_m7DC4BB00704448F0F4AD2E3AA1E710FC8953CFB0 (PanelController_t680C04009837CA28BD14657765EC2AAE385ED0EA * __this, bool ___open0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B (String_t* ___name0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<DeathLogPanelController>()
inline DeathLogPanelController_t87E4399AB36E6AB25976252311C792D0197C6D40 * GameObject_GetComponent_TisDeathLogPanelController_t87E4399AB36E6AB25976252311C792D0197C6D40_m32ECC9AB44B3F5870FFDF95D1E1EA7CFE9CDF1D6 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  DeathLogPanelController_t87E4399AB36E6AB25976252311C792D0197C6D40 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void DeathLogPanelController::DeadStatus(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeathLogPanelController_DeadStatus_m234E2175A57033CAC1C615ECC882117B1CE2D924 (DeathLogPanelController_t87E4399AB36E6AB25976252311C792D0197C6D40 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Collision::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Collision_get_gameObject_m5682F872FD28419AA36F0651CE8B19825A21859D (Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * __this, const RuntimeMethod* method);
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_mD94B0E22EF32AD3DFD277ED8E911B5DFA4CDB91E (String_t* ___s0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<ProjectileMoveScript>()
inline ProjectileMoveScript_t8E5328E659143159EA6BDE95FD65EC7A674B237E * GameObject_GetComponent_TisProjectileMoveScript_t8E5328E659143159EA6BDE95FD65EC7A674B237E_mEB7BE1C64D5652FCA8203DDEC1A7179C65325D65 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  ProjectileMoveScript_t8E5328E659143159EA6BDE95FD65EC7A674B237E * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<attack>()
inline attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C * GameObject_GetComponent_Tisattack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C_m81C01CBE5561AC69191BF28F07430FDBCD508A7A (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void attack::wizardKillMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void attack_wizardKillMethod_mC96570A5894983EA3DBCC1F4EF2BB0EEEB0F1998 (attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<ai>()
inline ai_t05DCF615948AD04F90BBCFF646B8389E83581B71 * GameObject_GetComponent_Tisai_t05DCF615948AD04F90BBCFF646B8389E83581B71_m1777513B730827DD343C6947A74DF512795EE90F (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  ai_t05DCF615948AD04F90BBCFF646B8389E83581B71 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void ai::aiKillMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ai_aiKillMethod_mBD051C32DE5A975ED706D14C6FDA0C842421C776 (ai_t05DCF615948AD04F90BBCFF646B8389E83581B71 * __this, const RuntimeMethod* method);
// System.Void HealthController::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthController__ctor_mE7C9A5C8657BF0AA3875B191C910997CF701CCE1 (HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 * __this, int32_t ___healthMax0, int32_t ___healthCurrent1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Random::get_insideUnitSphere()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Random_get_insideUnitSphere_m43E5AE1F6A6CFA892BAE6E3ED71BEBFCE308CE90 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Boolean UnityEngine.AI.NavMesh::SamplePosition(UnityEngine.Vector3,UnityEngine.AI.NavMeshHit&,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMesh_SamplePosition_m9675E148D95E1D92ED75DC608CAA33E75ABCA05E (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___sourcePosition0, NavMeshHit_t62B242C636F3B036AE65C266EC79A2B62330FF9D * ___hit1, float ___maxDistance2, int32_t ___areaMask3, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.AI.NavMeshHit::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  NavMeshHit_get_position_m66845935ED76B2480F72EE6628EFD9D6BF35B39A (NavMeshHit_t62B242C636F3B036AE65C266EC79A2B62330FF9D * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Boolean enemyPathMovement::RandomPoint(UnityEngine.Vector3,System.Single,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool enemyPathMovement_RandomPoint_m384C5A48C2FE2C91DCF89B25BAFC394E2F4571E9 (enemyPathMovement_t2A082E51F0F47B4E09CD70F138BEF58C105BD216 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___center0, float ___range1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___result2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50 (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_black()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_black_m67E91EB7017FC74D9AB5ADEF6B6929B7EFC9A982 (const RuntimeMethod* method);
// System.Void UnityEngine.Debug::DrawRay(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_DrawRay_m3954B3FFA675C0660ED438E8B705B45EDE393C60 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___start0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___dir1, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color2, float ___duration3, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_LookAt_m996FADE2327B0A4412FF4A5179B8BABD9EB849BA (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<Joystick>()
inline Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * Object_FindObjectOfType_TisJoystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873_m7209E3C1CAB57BED00FB7BEF8EEF44EBADFD5C7A (const RuntimeMethod* method)
{
	return ((  Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared)(method);
}
// UnityEngine.GameObject UnityEngine.GameObject::FindWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_FindWithTag_mEF75D1FF1E55B338A77161FDCB68ED0A2A911DF3 (String_t* ___tag0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Animator>()
inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Normalize_m7C9B0E84BCB84D54A16D1212F3DE5AB2A386FCD9 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_right_mA8EB1882CCE8759766544448308C88D9200F06CE (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void move::movement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void move_movement_m07515DDC4F7DB85882E26C61AFA52D393F815932 (move_tF5C934E0EAF4295D46D7DAA6C508AFAB1B699276 * __this, const RuntimeMethod* method);
// System.Single Joystick::get_Horizontal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_get_Horizontal_m1AE640531EE5E28A63A8D5AC757F9753DDA56321 (Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * __this, const RuntimeMethod* method);
// System.Single Joystick::get_Vertical()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_get_Vertical_m56B4D1C75DABA23923EF2E9C20543858E90D23C2 (Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_forward(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_forward_mAE46B156F55F2F90AB495B17F7C20BF59A5D7D4D (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloat_mD731F47ED44C2D629F8E1C6DB15629C3E1B992A0 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___name0, float ___value1, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManager::LoadSceneAsync(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * SceneManager_LoadSceneAsync_mAB22F675FE16C405CBEC2CEF405493DBB6F0284E (int32_t ___sceneBuildIndex0, const RuntimeMethod* method);
// System.Boolean UnityEngine.AsyncOperation::get_isDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperation_get_isDone_m4592F121393149E539D2107239639A049493D877 (AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::.ctor()
inline void List_1__ctor_mF1D464BA700E6389AEA8AF2F197270F387D9A41F (List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Transform_GetEnumerator_mBA0E884A69F0AA05FCB69F4EE5F700177F75DD7E (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::Add(!0)
inline void List_1_Add_m7AB707ADE023585729593334A399B3FF485A7982 (List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 *, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Transform>::get_Item(System.Int32)
inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * List_1_get_Item_m8B222F262DF0C4B49E12B4E87AB2162202744499_inline (List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * (*) (List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Transform>::get_Count()
inline int32_t List_1_get_Count_m82AF14687C6FA2B1572D859A551E3ADBCBADC3C0_inline (List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
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
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.ParticleSystem>()
inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * GameObject_GetComponent_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m538EA9E269978336C890E5FA90908BF7249AB395 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.ParticleSystem/MainModule UnityEngine.ParticleSystem::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B  ParticleSystem_get_main_m8F17DCC63679B15CE548BE83332FDB6635AE74A0 (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * __this, const RuntimeMethod* method);
// System.Single UnityEngine.ParticleSystem/MainModule::get_duration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MainModule_get_duration_mD516595EFDD66C83A727BDD7EF495069B4EB6132 (MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B * __this, const RuntimeMethod* method);
// UnityEngine.ParticleSystem/MinMaxCurve UnityEngine.ParticleSystem/MainModule::get_startLifetime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  MainModule_get_startLifetime_m5E45F78E690E61E6FC758FA927E0743FFC3262FA (MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B * __this, const RuntimeMethod* method);
// System.Single UnityEngine.ParticleSystem/MinMaxCurve::get_constantMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MinMaxCurve_get_constantMax_m602968BE6C8603F219BB3279114F0AF61358DD27 (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mAAAA103F4911E9FA18634BF9605C28559F5E2AC7 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, float ___t1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.Rigidbody::set_isKinematic(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_isKinematic_mCF74D680205544826F2DE2CAB929C9F25409A311 (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::FromToRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_FromToRotation_mD0EBB9993FC7C6A45724D0365B09F11F1CEADB80 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___fromDirection0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___toDirection1, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared)(___original0, ___position1, ___rotation2, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.ParticleSystem>()
inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * Component_GetComponent_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m91CE0171326B90198E69EAFA60F45473CAC6E0C3 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToWorldPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// System.Void UnityEngine.Quaternion::set_eulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quaternion_set_eulerAngles_m8EC47544D5D909682498552C6A13BD0B13EA9277 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  Camera_ScreenPointToRay_mD385213935A81030EDC604A39FD64761077CFBAB (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Ray::get_origin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Ray_get_origin_m0C1B2BFF99CDF5231AC29AC031C161F55B53C1D0 (Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Ray::get_direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Ray_get_direction_m2B31F86F19B64474A901B28D3808011AE7A13EFC (Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m18E12C65F127D1AA50D196623F04F81CB138FD12 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___origin0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___direction1, RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * ___hitInfo2, float ___maxDistance3, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  RaycastHit_get_point_m32F7282CBB2E13393A33BAD046BDA218E48DD21E (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * __this, const RuntimeMethod* method);
// System.Void RotateToMouseScript::RotateToMouse(UnityEngine.GameObject,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotateToMouseScript_RotateToMouse_m070898E14C467EAD236938E2D615F0C7A6B2BCAF (RotateToMouseScript_t484F9391662B1A307753F7AE65E5DC8BDB6764E9 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___obj0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___destination1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Ray::GetPoint(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Ray_GetPoint_mC92464E32E42603B7B3444938E8BB8ADA43AB240 (Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * __this, float ___distance0, const RuntimeMethod* method);
// System.Collections.IEnumerator RotateToMouseScript::UpdateRay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RotateToMouseScript_UpdateRay_m189BAF74F72D7118405984C537604D8BE919F383 (RotateToMouseScript_t484F9391662B1A307753F7AE65E5DC8BDB6764E9 * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C (float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.IEnumerator cameraShaker::Shake(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* cameraShaker_Shake_mA0CEFA8338BCDD686C25840BABC80D961209E33E (cameraShaker_t9CE5FEB9CB9D54949F9CA55EBB612EDA135EDF32 * __this, float ___duration0, float ___magnitude1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CShakeU3Ed__0_t56ABF31C41CA87AFA3AC45DD82CF6F23D6F283A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CShakeU3Ed__0_t56ABF31C41CA87AFA3AC45DD82CF6F23D6F283A7 * L_0 = (U3CShakeU3Ed__0_t56ABF31C41CA87AFA3AC45DD82CF6F23D6F283A7 *)il2cpp_codegen_object_new(U3CShakeU3Ed__0_t56ABF31C41CA87AFA3AC45DD82CF6F23D6F283A7_il2cpp_TypeInfo_var);
		U3CShakeU3Ed__0__ctor_m90531A490514EB236D09DAC7B3849112760C5426(L_0, 0, /*hidden argument*/NULL);
		U3CShakeU3Ed__0_t56ABF31C41CA87AFA3AC45DD82CF6F23D6F283A7 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		U3CShakeU3Ed__0_t56ABF31C41CA87AFA3AC45DD82CF6F23D6F283A7 * L_2 = L_1;
		float L_3 = ___duration0;
		NullCheck(L_2);
		L_2->set_duration_4(L_3);
		U3CShakeU3Ed__0_t56ABF31C41CA87AFA3AC45DD82CF6F23D6F283A7 * L_4 = L_2;
		float L_5 = ___magnitude1;
		NullCheck(L_4);
		L_4->set_magnitude_3(L_5);
		return L_4;
	}
}
// System.Void cameraShaker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cameraShaker__ctor_m28811CF4CA7502595260A97A76A9CAD393EC78DE (cameraShaker_t9CE5FEB9CB9D54949F9CA55EBB612EDA135EDF32 * __this, const RuntimeMethod* method)
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
// System.Void enemyHealthSystem1::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void enemyHealthSystem1_Awake_m2197A5C272179D8292B87FF1E5C307C153441043 (enemyHealthSystem1_t9D32045CB414C7BF3B895294B1044F2D9FFA0029 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisSlider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A_mECB3B5A216AD4AAA7331E7F6731886264840D054_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m75CC9D1656BD67C760E6D5EA89403C89B728E8F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m7556907CF90B895FDFBEC11100A5F7AD5FAF1AA6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral255BCC1A53692949FCC4A1A4B72B5983FC77E2DA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	String_t* G_B2_0 = NULL;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B1_1 = NULL;
	{
		// healthSlider = GetComponentInChildren<Slider>();
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_0;
		L_0 = Component_GetComponentInChildren_TisSlider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A_mECB3B5A216AD4AAA7331E7F6731886264840D054(__this, /*hidden argument*/Component_GetComponentInChildren_TisSlider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A_mECB3B5A216AD4AAA7331E7F6731886264840D054_RuntimeMethod_var);
		__this->set_healthSlider_6(L_0);
		// maxHealthText = GetComponentsInChildren<Text>()[2];
		TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* L_1;
		L_1 = Component_GetComponentsInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m7556907CF90B895FDFBEC11100A5F7AD5FAF1AA6(__this, /*hidden argument*/Component_GetComponentsInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m7556907CF90B895FDFBEC11100A5F7AD5FAF1AA6_RuntimeMethod_var);
		NullCheck(L_1);
		int32_t L_2 = 2;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		__this->set_maxHealthText_7(L_3);
		// currentHealthText = GetComponentsInChildren<Text>()[0];
		TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* L_4;
		L_4 = Component_GetComponentsInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m7556907CF90B895FDFBEC11100A5F7AD5FAF1AA6(__this, /*hidden argument*/Component_GetComponentsInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m7556907CF90B895FDFBEC11100A5F7AD5FAF1AA6_RuntimeMethod_var);
		NullCheck(L_4);
		int32_t L_5 = 0;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		__this->set_currentHealthText_8(L_6);
		// poisonAnim = GetComponentsInChildren<ParticleSystem>()[1];
		ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7* L_7;
		L_7 = Component_GetComponentsInChildren_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m75CC9D1656BD67C760E6D5EA89403C89B728E8F6(__this, /*hidden argument*/Component_GetComponentsInChildren_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m75CC9D1656BD67C760E6D5EA89403C89B728E8F6_RuntimeMethod_var);
		NullCheck(L_7);
		int32_t L_8 = 1;
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		__this->set_poisonAnim_9(L_9);
		// explosionAnim = GetComponentsInChildren<ParticleSystem>()[2];
		ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7* L_10;
		L_10 = Component_GetComponentsInChildren_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m75CC9D1656BD67C760E6D5EA89403C89B728E8F6(__this, /*hidden argument*/Component_GetComponentsInChildren_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m75CC9D1656BD67C760E6D5EA89403C89B728E8F6_RuntimeMethod_var);
		NullCheck(L_10);
		int32_t L_11 = 2;
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		__this->set_explosionAnim_10(L_12);
		// freezingAnim = GetComponentsInChildren<ParticleSystem>()[3];
		ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7* L_13;
		L_13 = Component_GetComponentsInChildren_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m75CC9D1656BD67C760E6D5EA89403C89B728E8F6(__this, /*hidden argument*/Component_GetComponentsInChildren_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m75CC9D1656BD67C760E6D5EA89403C89B728E8F6_RuntimeMethod_var);
		NullCheck(L_13);
		int32_t L_14 = 3;
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		__this->set_freezingAnim_11(L_15);
		// HealthUpdate();
		enemyHealthSystem1_HealthUpdate_m547DFFE79A4C0FBECC0AF4502AF0561C7BC5852E(__this, /*hidden argument*/NULL);
		// poisonAnim.Stop();
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_16 = __this->get_poisonAnim_9();
		NullCheck(L_16);
		ParticleSystem_Stop_m8CBF9268DE7B5A40952B4977462B857B5F5AFB9D(L_16, /*hidden argument*/NULL);
		// explosionAnim.Stop();
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_17 = __this->get_explosionAnim_10();
		NullCheck(L_17);
		ParticleSystem_Stop_m8CBF9268DE7B5A40952B4977462B857B5F5AFB9D(L_17, /*hidden argument*/NULL);
		// freezingAnim.Stop();
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_18 = __this->get_freezingAnim_11();
		NullCheck(L_18);
		ParticleSystem_Stop_m8CBF9268DE7B5A40952B4977462B857B5F5AFB9D(L_18, /*hidden argument*/NULL);
		// healthSlider.value = healthController.GetHealthMax();
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_19 = __this->get_healthSlider_6();
		HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 * L_20 = __this->get_healthController_5();
		NullCheck(L_20);
		float L_21;
		L_21 = HealthController_GetHealthMax_m1AEB454DBA5B8AEA4353044AD37F7C9E7467760A(L_20, /*hidden argument*/NULL);
		NullCheck(L_19);
		VirtActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_19, L_21);
		// maxHealthText.text = "" + healthController.GetHealthMax();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_22 = __this->get_maxHealthText_7();
		HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 * L_23 = __this->get_healthController_5();
		NullCheck(L_23);
		float L_24;
		L_24 = HealthController_GetHealthMax_m1AEB454DBA5B8AEA4353044AD37F7C9E7467760A(L_23, /*hidden argument*/NULL);
		V_0 = L_24;
		String_t* L_25;
		L_25 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)(&V_0), /*hidden argument*/NULL);
		String_t* L_26 = L_25;
		G_B1_0 = L_26;
		G_B1_1 = L_22;
		if (L_26)
		{
			G_B2_0 = L_26;
			G_B2_1 = L_22;
			goto IL_00b1;
		}
	}
	{
		G_B2_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B2_1 = G_B1_1;
	}

IL_00b1:
	{
		NullCheck(G_B2_1);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B2_1, G_B2_0);
		// InvokeRepeating("InvokeDamage", 1 , 1);
		MonoBehaviour_InvokeRepeating_mB77F4276826FBA696A150831D190875CB5802C70(__this, _stringLiteral255BCC1A53692949FCC4A1A4B72B5983FC77E2DA, (1.0f), (1.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void enemyHealthSystem1::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void enemyHealthSystem1_Update_m6204CB4D20BDA2876EA6A422949E51B7BF4531B3 (enemyHealthSystem1_t9D32045CB414C7BF3B895294B1044F2D9FFA0029 * __this, const RuntimeMethod* method)
{
	{
		// if (!DamageCircle.IsOutsideCircle(transform.position) && !healthController.IsDead())
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = DamageCircle_IsOutsideCircle_mD44C47C9E57CD4F1EF449B065B84CC55624F78D7(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_002a;
		}
	}
	{
		HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 * L_3 = __this->get_healthController_5();
		NullCheck(L_3);
		bool L_4;
		L_4 = HealthController_IsDead_mE7D0AA18C03226E2D5371D73C67C9F7CF86995D6_inline(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_002a;
		}
	}
	{
		// poisonAnim.Stop();  // poision kesintisiz olsun diye loop olarak başlatılıp sonra durduruluyor.
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_5 = __this->get_poisonAnim_9();
		NullCheck(L_5);
		ParticleSystem_Stop_m8CBF9268DE7B5A40952B4977462B857B5F5AFB9D(L_5, /*hidden argument*/NULL);
	}

IL_002a:
	{
		// if (!explosionAnim.isPlaying)
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_6 = __this->get_explosionAnim_10();
		NullCheck(L_6);
		bool L_7;
		L_7 = ParticleSystem_get_isPlaying_m36FD03CBF99EE4C243B01F37D77CB6B1CFA526BA(L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0042;
		}
	}
	{
		// explosionAnim.Stop();
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_8 = __this->get_explosionAnim_10();
		NullCheck(L_8);
		ParticleSystem_Stop_m8CBF9268DE7B5A40952B4977462B857B5F5AFB9D(L_8, /*hidden argument*/NULL);
	}

IL_0042:
	{
		// }
		return;
	}
}
// System.Boolean enemyHealthSystem1::IsDead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool enemyHealthSystem1_IsDead_m37C895C0826251CDC7AA7D37CD1EAC5BF7409A7D (enemyHealthSystem1_t9D32045CB414C7BF3B895294B1044F2D9FFA0029 * __this, const RuntimeMethod* method)
{
	{
		// return healthController.IsDead();
		HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 * L_0 = __this->get_healthController_5();
		NullCheck(L_0);
		bool L_1;
		L_1 = HealthController_IsDead_mE7D0AA18C03226E2D5371D73C67C9F7CF86995D6_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void enemyHealthSystem1::HealthUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void enemyHealthSystem1_HealthUpdate_m547DFFE79A4C0FBECC0AF4502AF0561C7BC5852E (enemyHealthSystem1_t9D32045CB414C7BF3B895294B1044F2D9FFA0029 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* G_B2_0 = NULL;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B1_1 = NULL;
	{
		// healthSlider.value = healthController.GetHealthCurrent();
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_0 = __this->get_healthSlider_6();
		HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 * L_1 = __this->get_healthController_5();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = HealthController_GetHealthCurrent_m0A98300D4D5C8BDEE92DC8D4D66C409CA4F4B9D7_inline(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_0, ((float)((float)L_2)));
		// currentHealthText.text = "" + healthController.GetHealthCurrent();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_3 = __this->get_currentHealthText_8();
		HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 * L_4 = __this->get_healthController_5();
		NullCheck(L_4);
		int32_t L_5;
		L_5 = HealthController_GetHealthCurrent_m0A98300D4D5C8BDEE92DC8D4D66C409CA4F4B9D7_inline(L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		String_t* L_6;
		L_6 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_7 = L_6;
		G_B1_0 = L_7;
		G_B1_1 = L_3;
		if (L_7)
		{
			G_B2_0 = L_7;
			G_B2_1 = L_3;
			goto IL_0039;
		}
	}
	{
		G_B2_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B2_1 = G_B1_1;
	}

IL_0039:
	{
		NullCheck(G_B2_1);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B2_1, G_B2_0);
		// if (IsDead() && graveStoneControl)
		bool L_8;
		L_8 = enemyHealthSystem1_IsDead_m37C895C0826251CDC7AA7D37CD1EAC5BF7409A7D(__this, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_005b;
		}
	}
	{
		bool L_9 = __this->get_graveStoneControl_18();
		if (!L_9)
		{
			goto IL_005b;
		}
	}
	{
		// DeadStatus();
		enemyHealthSystem1_DeadStatus_m49D678D7303CB34E2E605F0DF888C65AAAD38D55(__this, /*hidden argument*/NULL);
		// graveStoneControl = false;
		__this->set_graveStoneControl_18((bool)0);
	}

IL_005b:
	{
		// }
		return;
	}
}
// System.Void enemyHealthSystem1::InvokeDamage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void enemyHealthSystem1_InvokeDamage_mF257F3AA3CB9BEE6C2E091675B384D6F4B7D3177 (enemyHealthSystem1_t9D32045CB414C7BF3B895294B1044F2D9FFA0029 * __this, const RuntimeMethod* method)
{
	{
		// if(DamageCircle.IsOutsideCircle(transform.position) && !healthController.IsDead())
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = DamageCircle_IsOutsideCircle_mD44C47C9E57CD4F1EF449B065B84CC55624F78D7(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_003c;
		}
	}
	{
		HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 * L_3 = __this->get_healthController_5();
		NullCheck(L_3);
		bool L_4;
		L_4 = HealthController_IsDead_mE7D0AA18C03226E2D5371D73C67C9F7CF86995D6_inline(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_003c;
		}
	}
	{
		// healthController.Damage(5);
		HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 * L_5 = __this->get_healthController_5();
		NullCheck(L_5);
		HealthController_Damage_m72DC74C513F1A4FB7DA30BAAE1154A53B686B832(L_5, 5, /*hidden argument*/NULL);
		// HealthUpdate();
		enemyHealthSystem1_HealthUpdate_m547DFFE79A4C0FBECC0AF4502AF0561C7BC5852E(__this, /*hidden argument*/NULL);
		// poisonAnim.Play();
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_6 = __this->get_poisonAnim_9();
		NullCheck(L_6);
		ParticleSystem_Play_m28D27CC4CDC1D93195C75647E6F6DAECF8B6BC50(L_6, /*hidden argument*/NULL);
	}

IL_003c:
	{
		// }
		return;
	}
}
// System.Void enemyHealthSystem1::DeadStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void enemyHealthSystem1_DeadStatus_m49D678D7303CB34E2E605F0DF888C65AAAD38D55 (enemyHealthSystem1_t9D32045CB414C7BF3B895294B1044F2D9FFA0029 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisAiCanAttackCircle_t57AE50A882353B23FA5A30DF81FBEE01909E19B6_mBE6C3FB3D5ADB99D8FB079ABBC1B6AEAB1BDF807_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5_m0D682A42739E30A25411905C0A712C2BEE81F861_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisNavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B_m15077FF184192C84FCF6B2A1FC8ECF53C9220F2F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_Tisai_t05DCF615948AD04F90BBCFF646B8389E83581B71_m3AE4C964EDD0B5968A0ED31120D6896937CE1FEA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisenemyHealthSystem1_t9D32045CB414C7BF3B895294B1044F2D9FFA0029_m43B1E00A13972A750952D0E9B84D030B14DDBA2E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PanelController_t680C04009837CA28BD14657765EC2AAE385ED0EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9FBF31E575806B916FC0F7315D0359EC2699DCC2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA787B2F90B6DB394AA87BD57BB47C7D0F302E573);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PanelController.AliveCountNumber=PanelController.AliveCountNumber-1;
		int32_t L_0 = ((PanelController_t680C04009837CA28BD14657765EC2AAE385ED0EA_StaticFields*)il2cpp_codegen_static_fields_for(PanelController_t680C04009837CA28BD14657765EC2AAE385ED0EA_il2cpp_TypeInfo_var))->get_AliveCountNumber_15();
		((PanelController_t680C04009837CA28BD14657765EC2AAE385ED0EA_StaticFields*)il2cpp_codegen_static_fields_for(PanelController_t680C04009837CA28BD14657765EC2AAE385ED0EA_il2cpp_TypeInfo_var))->set_AliveCountNumber_15(((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1)));
		// PanelSc.AliveCountUpdate();
		PanelController_t680C04009837CA28BD14657765EC2AAE385ED0EA * L_1 = __this->get_PanelSc_4();
		NullCheck(L_1);
		PanelController_AliveCountUpdate_m6772DD828E83FCCEE6913DDC1E8B7B98174058F1(L_1, /*hidden argument*/NULL);
		// if (PanelController.AliveCountNumber==1)
		int32_t L_2 = ((PanelController_t680C04009837CA28BD14657765EC2AAE385ED0EA_StaticFields*)il2cpp_codegen_static_fields_for(PanelController_t680C04009837CA28BD14657765EC2AAE385ED0EA_il2cpp_TypeInfo_var))->get_AliveCountNumber_15();
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_0025;
		}
	}
	{
		// LevelPassed();
		enemyHealthSystem1_LevelPassed_mDC339FFCEB56B3B5BC722DD148D23338CDA4E25E(__this, /*hidden argument*/NULL);
	}

IL_0025:
	{
		// print(this.name + "is dead");
		String_t* L_3;
		L_3 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(__this, /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_3, _stringLiteralA787B2F90B6DB394AA87BD57BB47C7D0F302E573, /*hidden argument*/NULL);
		MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(L_4, /*hidden argument*/NULL);
		// this.healthSlider.gameObject.SetActive(false);
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_5 = __this->get_healthSlider_6();
		NullCheck(L_5);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_6, (bool)0, /*hidden argument*/NULL);
		// DeathLogTexts();
		enemyHealthSystem1_DeathLogTexts_mE13D42D970FF0F9F1C106DBA124E80E2B30C587B(__this, /*hidden argument*/NULL);
		// animator.SetBool("die", true);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_7 = __this->get_animator_12();
		NullCheck(L_7);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_7, _stringLiteral9FBF31E575806B916FC0F7315D0359EC2699DCC2, (bool)1, /*hidden argument*/NULL);
		// Invoke("",2);
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (2.0f), /*hidden argument*/NULL);
		// GetComponent<ai>().enabled = false;
		ai_t05DCF615948AD04F90BBCFF646B8389E83581B71 * L_8;
		L_8 = Component_GetComponent_Tisai_t05DCF615948AD04F90BBCFF646B8389E83581B71_m3AE4C964EDD0B5968A0ED31120D6896937CE1FEA(__this, /*hidden argument*/Component_GetComponent_Tisai_t05DCF615948AD04F90BBCFF646B8389E83581B71_m3AE4C964EDD0B5968A0ED31120D6896937CE1FEA_RuntimeMethod_var);
		NullCheck(L_8);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_8, (bool)0, /*hidden argument*/NULL);
		// GetComponent<enemyHealthSystem1>().enabled = false;
		enemyHealthSystem1_t9D32045CB414C7BF3B895294B1044F2D9FFA0029 * L_9;
		L_9 = Component_GetComponent_TisenemyHealthSystem1_t9D32045CB414C7BF3B895294B1044F2D9FFA0029_m43B1E00A13972A750952D0E9B84D030B14DDBA2E(__this, /*hidden argument*/Component_GetComponent_TisenemyHealthSystem1_t9D32045CB414C7BF3B895294B1044F2D9FFA0029_m43B1E00A13972A750952D0E9B84D030B14DDBA2E_RuntimeMethod_var);
		NullCheck(L_9);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_9, (bool)0, /*hidden argument*/NULL);
		// GetComponent<NavMeshAgent>().enabled = false;
		NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * L_10;
		L_10 = Component_GetComponent_TisNavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B_m15077FF184192C84FCF6B2A1FC8ECF53C9220F2F(__this, /*hidden argument*/Component_GetComponent_TisNavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B_m15077FF184192C84FCF6B2A1FC8ECF53C9220F2F_RuntimeMethod_var);
		NullCheck(L_10);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_10, (bool)0, /*hidden argument*/NULL);
		// GetComponent<BoxCollider>().enabled = false;
		BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * L_11;
		L_11 = Component_GetComponent_TisBoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5_m0D682A42739E30A25411905C0A712C2BEE81F861(__this, /*hidden argument*/Component_GetComponent_TisBoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5_m0D682A42739E30A25411905C0A712C2BEE81F861_RuntimeMethod_var);
		NullCheck(L_11);
		Collider_set_enabled_m047B4D830755CD36671F7A60BFAA9C0D61F6C4A1(L_11, (bool)0, /*hidden argument*/NULL);
		// GetComponentInChildren<AiCanAttackCircle>().enabled = false;
		AiCanAttackCircle_t57AE50A882353B23FA5A30DF81FBEE01909E19B6 * L_12;
		L_12 = Component_GetComponentInChildren_TisAiCanAttackCircle_t57AE50A882353B23FA5A30DF81FBEE01909E19B6_mBE6C3FB3D5ADB99D8FB079ABBC1B6AEAB1BDF807(__this, /*hidden argument*/Component_GetComponentInChildren_TisAiCanAttackCircle_t57AE50A882353B23FA5A30DF81FBEE01909E19B6_mBE6C3FB3D5ADB99D8FB079ABBC1B6AEAB1BDF807_RuntimeMethod_var);
		NullCheck(L_12);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_12, (bool)0, /*hidden argument*/NULL);
		// GetComponentInChildren<AiCanAttackCircle>().GetComponent<BoxCollider>().enabled = false;
		AiCanAttackCircle_t57AE50A882353B23FA5A30DF81FBEE01909E19B6 * L_13;
		L_13 = Component_GetComponentInChildren_TisAiCanAttackCircle_t57AE50A882353B23FA5A30DF81FBEE01909E19B6_mBE6C3FB3D5ADB99D8FB079ABBC1B6AEAB1BDF807(__this, /*hidden argument*/Component_GetComponentInChildren_TisAiCanAttackCircle_t57AE50A882353B23FA5A30DF81FBEE01909E19B6_mBE6C3FB3D5ADB99D8FB079ABBC1B6AEAB1BDF807_RuntimeMethod_var);
		NullCheck(L_13);
		BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * L_14;
		L_14 = Component_GetComponent_TisBoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5_m0D682A42739E30A25411905C0A712C2BEE81F861(L_13, /*hidden argument*/Component_GetComponent_TisBoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5_m0D682A42739E30A25411905C0A712C2BEE81F861_RuntimeMethod_var);
		NullCheck(L_14);
		Collider_set_enabled_m047B4D830755CD36671F7A60BFAA9C0D61F6C4A1(L_14, (bool)0, /*hidden argument*/NULL);
		// GameObject graveStone = GameObject.Instantiate(gravestone);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = __this->get_gravestone_13();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16;
		L_16 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_15, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		// graveStone.transform.position = transform.position;
		NullCheck(L_16);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
		L_17 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_16, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18;
		L_18 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_18);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_18, /*hidden argument*/NULL);
		NullCheck(L_17);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_17, L_19, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void enemyHealthSystem1::LevelPassed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void enemyHealthSystem1_LevelPassed_mDC339FFCEB56B3B5BC722DD148D23338CDA4E25E (enemyHealthSystem1_t9D32045CB414C7BF3B895294B1044F2D9FFA0029 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArenaSellection_t3B2C26DA7D530C043B40B4E0FA39AF4035038994_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PanelController_t680C04009837CA28BD14657765EC2AAE385ED0EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PanelController.Instance.SetCloseOpenAllPanels();
		PanelController_t680C04009837CA28BD14657765EC2AAE385ED0EA * L_0 = ((PanelController_t680C04009837CA28BD14657765EC2AAE385ED0EA_StaticFields*)il2cpp_codegen_static_fields_for(PanelController_t680C04009837CA28BD14657765EC2AAE385ED0EA_il2cpp_TypeInfo_var))->get_Instance_4();
		NullCheck(L_0);
		PanelController_SetCloseOpenAllPanels_mB5C3289166CC60EB22FE8B79CE30F2D95EAA2AB6(L_0, /*hidden argument*/NULL);
		// if (ArenaSellection.CurrentStageIndex==3)
		IL2CPP_RUNTIME_CLASS_INIT(ArenaSellection_t3B2C26DA7D530C043B40B4E0FA39AF4035038994_il2cpp_TypeInfo_var);
		int32_t L_1 = ((ArenaSellection_t3B2C26DA7D530C043B40B4E0FA39AF4035038994_StaticFields*)il2cpp_codegen_static_fields_for(ArenaSellection_t3B2C26DA7D530C043B40B4E0FA39AF4035038994_il2cpp_TypeInfo_var))->get_CurrentStageIndex_29();
		if ((!(((uint32_t)L_1) == ((uint32_t)3))))
		{
			goto IL_0039;
		}
	}
	{
		// ArenaSellection.SavedMapIndex=ArenaSellection.SavedMapIndex+1;
		IL2CPP_RUNTIME_CLASS_INIT(ArenaSellection_t3B2C26DA7D530C043B40B4E0FA39AF4035038994_il2cpp_TypeInfo_var);
		int32_t L_2 = ((ArenaSellection_t3B2C26DA7D530C043B40B4E0FA39AF4035038994_StaticFields*)il2cpp_codegen_static_fields_for(ArenaSellection_t3B2C26DA7D530C043B40B4E0FA39AF4035038994_il2cpp_TypeInfo_var))->get_SavedMapIndex_26();
		((ArenaSellection_t3B2C26DA7D530C043B40B4E0FA39AF4035038994_StaticFields*)il2cpp_codegen_static_fields_for(ArenaSellection_t3B2C26DA7D530C043B40B4E0FA39AF4035038994_il2cpp_TypeInfo_var))->set_SavedMapIndex_26(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)));
		// print(ArenaSellection.SavedMapIndex);
		int32_t L_3 = ((ArenaSellection_t3B2C26DA7D530C043B40B4E0FA39AF4035038994_StaticFields*)il2cpp_codegen_static_fields_for(ArenaSellection_t3B2C26DA7D530C043B40B4E0FA39AF4035038994_il2cpp_TypeInfo_var))->get_SavedMapIndex_26();
		int32_t L_4 = L_3;
		RuntimeObject * L_5 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_4);
		MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(L_5, /*hidden argument*/NULL);
		// PanelController.Instance.SetMapCompletedPanel(true);
		PanelController_t680C04009837CA28BD14657765EC2AAE385ED0EA * L_6 = ((PanelController_t680C04009837CA28BD14657765EC2AAE385ED0EA_StaticFields*)il2cpp_codegen_static_fields_for(PanelController_t680C04009837CA28BD14657765EC2AAE385ED0EA_il2cpp_TypeInfo_var))->get_Instance_4();
		NullCheck(L_6);
		PanelController_SetMapCompletedPanel_mE667338F6449374E6275ED9AE868D3F3AC7CF259(L_6, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0039:
	{
		// PanelController.Instance.SetSuccessPanel(true);
		PanelController_t680C04009837CA28BD14657765EC2AAE385ED0EA * L_7 = ((PanelController_t680C04009837CA28BD14657765EC2AAE385ED0EA_StaticFields*)il2cpp_codegen_static_fields_for(PanelController_t680C04009837CA28BD14657765EC2AAE385ED0EA_il2cpp_TypeInfo_var))->get_Instance_4();
		NullCheck(L_7);
		PanelController_SetSuccessPanel_m7DC4BB00704448F0F4AD2E3AA1E710FC8953CFB0(L_7, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void enemyHealthSystem1::DeathLogTexts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void enemyHealthSystem1_DeathLogTexts_mE13D42D970FF0F9F1C106DBA124E80E2B30C587B (enemyHealthSystem1_t9D32045CB414C7BF3B895294B1044F2D9FFA0029 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisDeathLogPanelController_t87E4399AB36E6AB25976252311C792D0197C6D40_m32ECC9AB44B3F5870FFDF95D1E1EA7CFE9CDF1D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA7E8B88100AA34B19982A11B0554BAF879AFF81);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject xd = GameObject.Find("Main Camera");  //game main'den deathlogtextleri cekmek icin yapildi(main cam'de game main)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralDA7E8B88100AA34B19982A11B0554BAF879AFF81, /*hidden argument*/NULL);
		// DeathLogPanelController deathLog = xd.GetComponent<DeathLogPanelController>();
		NullCheck(L_0);
		DeathLogPanelController_t87E4399AB36E6AB25976252311C792D0197C6D40 * L_1;
		L_1 = GameObject_GetComponent_TisDeathLogPanelController_t87E4399AB36E6AB25976252311C792D0197C6D40_m32ECC9AB44B3F5870FFDF95D1E1EA7CFE9CDF1D6(L_0, /*hidden argument*/GameObject_GetComponent_TisDeathLogPanelController_t87E4399AB36E6AB25976252311C792D0197C6D40_m32ECC9AB44B3F5870FFDF95D1E1EA7CFE9CDF1D6_RuntimeMethod_var);
		// deathLog.DeadStatus(this.name);
		String_t* L_2;
		L_2 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		DeathLogPanelController_DeadStatus_m234E2175A57033CAC1C615ECC882117B1CE2D924(L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void enemyHealthSystem1::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void enemyHealthSystem1_OnTriggerEnter_mC2E598AB819385FF1CF4404FFA957A487762EC56 (enemyHealthSystem1_t9D32045CB414C7BF3B895294B1044F2D9FFA0029 * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2103E02F663B34B7C8054990E279FB3420E835DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38809CA117CCA33BA8933F3362EBEC78BF6A8E1F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF120D3ACD2B78C190ECC5D0D6CFA5211E11785C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.tag == "tornadoAnim")
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_0 = ___other0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, _stringLiteral2103E02F663B34B7C8054990E279FB3420E835DF, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		// healthController.Damage(10);
		HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 * L_4 = __this->get_healthController_5();
		NullCheck(L_4);
		HealthController_Damage_m72DC74C513F1A4FB7DA30BAAE1154A53B686B832(L_4, ((int32_t)10), /*hidden argument*/NULL);
		// HealthUpdate();
		enemyHealthSystem1_HealthUpdate_m547DFFE79A4C0FBECC0AF4502AF0561C7BC5852E(__this, /*hidden argument*/NULL);
		// explosionAnim.Play();
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_5 = __this->get_explosionAnim_10();
		NullCheck(L_5);
		ParticleSystem_Play_m28D27CC4CDC1D93195C75647E6F6DAECF8B6BC50(L_5, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0036:
	{
		// else if (other.gameObject.tag == "spikesAnim")
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_6 = ___other0;
		NullCheck(L_6);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		String_t* L_8;
		L_8 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_7, /*hidden argument*/NULL);
		bool L_9;
		L_9 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_8, _stringLiteral38809CA117CCA33BA8933F3362EBEC78BF6A8E1F, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_006c;
		}
	}
	{
		// healthController.Damage(25);
		HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 * L_10 = __this->get_healthController_5();
		NullCheck(L_10);
		HealthController_Damage_m72DC74C513F1A4FB7DA30BAAE1154A53B686B832(L_10, ((int32_t)25), /*hidden argument*/NULL);
		// HealthUpdate();
		enemyHealthSystem1_HealthUpdate_m547DFFE79A4C0FBECC0AF4502AF0561C7BC5852E(__this, /*hidden argument*/NULL);
		// explosionAnim.Play();
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_11 = __this->get_explosionAnim_10();
		NullCheck(L_11);
		ParticleSystem_Play_m28D27CC4CDC1D93195C75647E6F6DAECF8B6BC50(L_11, /*hidden argument*/NULL);
		// }
		return;
	}

IL_006c:
	{
		// else if (other.gameObject.tag == "lightningAnim")
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_12 = ___other0;
		NullCheck(L_12);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13;
		L_13 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		String_t* L_14;
		L_14 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_13, /*hidden argument*/NULL);
		bool L_15;
		L_15 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_14, _stringLiteralAF120D3ACD2B78C190ECC5D0D6CFA5211E11785C, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_00a1;
		}
	}
	{
		// healthController.Damage(37);
		HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 * L_16 = __this->get_healthController_5();
		NullCheck(L_16);
		HealthController_Damage_m72DC74C513F1A4FB7DA30BAAE1154A53B686B832(L_16, ((int32_t)37), /*hidden argument*/NULL);
		// HealthUpdate();
		enemyHealthSystem1_HealthUpdate_m547DFFE79A4C0FBECC0AF4502AF0561C7BC5852E(__this, /*hidden argument*/NULL);
		// explosionAnim.Play();
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_17 = __this->get_explosionAnim_10();
		NullCheck(L_17);
		ParticleSystem_Play_m28D27CC4CDC1D93195C75647E6F6DAECF8B6BC50(L_17, /*hidden argument*/NULL);
	}

IL_00a1:
	{
		// }
		return;
	}
}
// System.Void enemyHealthSystem1::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void enemyHealthSystem1_OnCollisionEnter_m844A1A774CB09ABD08DA9143909D603BEE6C6402 (enemyHealthSystem1_t9D32045CB414C7BF3B895294B1044F2D9FFA0029 * __this, Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisProjectileMoveScript_t8E5328E659143159EA6BDE95FD65EC7A674B237E_mEB7BE1C64D5652FCA8203DDEC1A7179C65325D65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_Tisai_t05DCF615948AD04F90BBCFF646B8389E83581B71_m1777513B730827DD343C6947A74DF512795EE90F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_Tisattack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C_m81C01CBE5561AC69191BF28F07430FDBCD508A7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0166B729D0847BFF2B54C5AADC089A2F0C6EB1CD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0CBBD18F8C88EC0D00ADB2B37B18AC09AD3B77B9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral18D585E9BDEB94D032ACFBA24D6F623FC9B2B2FC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2568C43845DEEC50FE47BEFB0B904AE9FF1FEA25);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral341872AF21C32D6A74449BC426100C98602C2E63);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B085C3D47665C0E5A70C7A2475DEF7A655F30B3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral48E4CC100C213DF2B5D397CC5CF4A327E3356D4F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral544E8A453765685AA792580EEAB651B27F01E024);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral57A30A8B3941573CA39D1B17D681DE5DFD76091E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60825F916DEE1CD3D51CF0776EFD9A4DC0889DB1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64DA3AB49BD4A30D8DFAF1CE8FBB03A5700B8A7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758BB5EC1495433B8639A7B28454DD315FB3B747);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral770137FA8A298E99C782183F7BFA1DB8235515C7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8857C3E1FFEB7E77373A99F4755ED8BF28ECBC64);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8BA91AB297BCB7B3D41CECE50BD50476A49EF81D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral940D4C1D9C3ED31FAF49AE7789CDEF8256223B8F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99F8385E86F9A594795915717EE6639D9AB80324);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F0F847A9C98CAC53E9608EBD9FB868149DF8F15);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA3404FE970656CDBAB1F0D3E3F1550052F084B3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD121E2E551B83A0EAD630CA78330E7D21A41AD3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE6C03ECA0E8B21A86DB488BD71CD9A4622EB7985);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF0F6F73D75D1F075FBF018CC4DF0D3DE567D3DE9);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	uint32_t V_1 = 0;
	{
		// switch(other.gameObject.tag)
		Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * L_0 = ___other0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Collision_get_gameObject_m5682F872FD28419AA36F0651CE8B19825A21859D(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3 = V_0;
		if (!L_3)
		{
			goto IL_04bd;
		}
	}
	{
		String_t* L_4 = V_0;
		uint32_t L_5;
		L_5 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mD94B0E22EF32AD3DFD277ED8E911B5DFA4CDB91E(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		uint32_t L_6 = V_1;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)1544163623)))))
		{
			goto IL_00ae;
		}
	}
	{
		uint32_t L_7 = V_1;
		if ((!(((uint32_t)L_7) <= ((uint32_t)((int32_t)1393165052)))))
		{
			goto IL_006d;
		}
	}
	{
		uint32_t L_8 = V_1;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)1342832195)))))
		{
			goto IL_004b;
		}
	}
	{
		uint32_t L_9 = V_1;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1326054576))))
		{
			goto IL_0225;
		}
	}
	{
		uint32_t L_10 = V_1;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)1342832195))))
		{
			goto IL_0214;
		}
	}
	{
		return;
	}

IL_004b:
	{
		uint32_t L_11 = V_1;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1359609814))))
		{
			goto IL_0247;
		}
	}
	{
		uint32_t L_12 = V_1;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1376387433))))
		{
			goto IL_0236;
		}
	}
	{
		uint32_t L_13 = V_1;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1393165052))))
		{
			goto IL_01e1;
		}
	}
	{
		return;
	}

IL_006d:
	{
		uint32_t L_14 = V_1;
		if ((!(((uint32_t)L_14) <= ((uint32_t)((int32_t)1426720290)))))
		{
			goto IL_008c;
		}
	}
	{
		uint32_t L_15 = V_1;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)1409942671))))
		{
			goto IL_01d0;
		}
	}
	{
		uint32_t L_16 = V_1;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)1426720290))))
		{
			goto IL_0203;
		}
	}
	{
		return;
	}

IL_008c:
	{
		uint32_t L_17 = V_1;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)1443497909))))
		{
			goto IL_01f2;
		}
	}
	{
		uint32_t L_18 = V_1;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)1527386004))))
		{
			goto IL_0269;
		}
	}
	{
		uint32_t L_19 = V_1;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)1544163623))))
		{
			goto IL_0258;
		}
	}
	{
		return;
	}

IL_00ae:
	{
		uint32_t L_20 = V_1;
		if ((!(((uint32_t)L_20) <= ((uint32_t)((int32_t)-395659578)))))
		{
			goto IL_00f7;
		}
	}
	{
		uint32_t L_21 = V_1;
		if ((!(((uint32_t)L_21) <= ((uint32_t)((int32_t)-486369561)))))
		{
			goto IL_00d5;
		}
	}
	{
		uint32_t L_22 = V_1;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-503147180))))
		{
			goto IL_027a;
		}
	}
	{
		uint32_t L_23 = V_1;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-486369561))))
		{
			goto IL_028b;
		}
	}
	{
		return;
	}

IL_00d5:
	{
		uint32_t L_24 = V_1;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-429214816))))
		{
			goto IL_019d;
		}
	}
	{
		uint32_t L_25 = V_1;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-412437197))))
		{
			goto IL_01ae;
		}
	}
	{
		uint32_t L_26 = V_1;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)-395659578))))
		{
			goto IL_017b;
		}
	}
	{
		return;
	}

IL_00f7:
	{
		uint32_t L_27 = V_1;
		if ((!(((uint32_t)L_27) <= ((uint32_t)((int32_t)-345326721)))))
		{
			goto IL_011b;
		}
	}
	{
		uint32_t L_28 = V_1;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)-378881959))))
		{
			goto IL_018c;
		}
	}
	{
		uint32_t L_29 = V_1;
		if ((((int32_t)L_29) == ((int32_t)((int32_t)-362104340))))
		{
			goto IL_0159;
		}
	}
	{
		uint32_t L_30 = V_1;
		if ((((int32_t)L_30) == ((int32_t)((int32_t)-345326721))))
		{
			goto IL_016a;
		}
	}
	{
		return;
	}

IL_011b:
	{
		uint32_t L_31 = V_1;
		if ((((int32_t)L_31) == ((int32_t)((int32_t)-328549102))))
		{
			goto IL_0137;
		}
	}
	{
		uint32_t L_32 = V_1;
		if ((((int32_t)L_32) == ((int32_t)((int32_t)-311771483))))
		{
			goto IL_0148;
		}
	}
	{
		uint32_t L_33 = V_1;
		if ((((int32_t)L_33) == ((int32_t)((int32_t)-177550531))))
		{
			goto IL_01bf;
		}
	}
	{
		return;
	}

IL_0137:
	{
		String_t* L_34 = V_0;
		bool L_35;
		L_35 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_34, _stringLiteral0CBBD18F8C88EC0D00ADB2B37B18AC09AD3B77B9, /*hidden argument*/NULL);
		if (L_35)
		{
			goto IL_029c;
		}
	}
	{
		return;
	}

IL_0148:
	{
		String_t* L_36 = V_0;
		bool L_37;
		L_37 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_36, _stringLiteral99F8385E86F9A594795915717EE6639D9AB80324, /*hidden argument*/NULL);
		if (L_37)
		{
			goto IL_032e;
		}
	}
	{
		return;
	}

IL_0159:
	{
		String_t* L_38 = V_0;
		bool L_39;
		L_39 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_38, _stringLiteral8857C3E1FFEB7E77373A99F4755ED8BF28ECBC64, /*hidden argument*/NULL);
		if (L_39)
		{
			goto IL_0342;
		}
	}
	{
		return;
	}

IL_016a:
	{
		String_t* L_40 = V_0;
		bool L_41;
		L_41 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_40, _stringLiteral8BA91AB297BCB7B3D41CECE50BD50476A49EF81D, /*hidden argument*/NULL);
		if (L_41)
		{
			goto IL_0356;
		}
	}
	{
		return;
	}

IL_017b:
	{
		String_t* L_42 = V_0;
		bool L_43;
		L_43 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_42, _stringLiteral57A30A8B3941573CA39D1B17D681DE5DFD76091E, /*hidden argument*/NULL);
		if (L_43)
		{
			goto IL_036a;
		}
	}
	{
		return;
	}

IL_018c:
	{
		String_t* L_44 = V_0;
		bool L_45;
		L_45 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_44, _stringLiteral64DA3AB49BD4A30D8DFAF1CE8FBB03A5700B8A7A, /*hidden argument*/NULL);
		if (L_45)
		{
			goto IL_037e;
		}
	}
	{
		return;
	}

IL_019d:
	{
		String_t* L_46 = V_0;
		bool L_47;
		L_47 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_46, _stringLiteral3B085C3D47665C0E5A70C7A2475DEF7A655F30B3, /*hidden argument*/NULL);
		if (L_47)
		{
			goto IL_0392;
		}
	}
	{
		return;
	}

IL_01ae:
	{
		String_t* L_48 = V_0;
		bool L_49;
		L_49 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_48, _stringLiteral770137FA8A298E99C782183F7BFA1DB8235515C7, /*hidden argument*/NULL);
		if (L_49)
		{
			goto IL_03a6;
		}
	}
	{
		return;
	}

IL_01bf:
	{
		String_t* L_50 = V_0;
		bool L_51;
		L_51 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_50, _stringLiteral2568C43845DEEC50FE47BEFB0B904AE9FF1FEA25, /*hidden argument*/NULL);
		if (L_51)
		{
			goto IL_03ba;
		}
	}
	{
		return;
	}

IL_01d0:
	{
		String_t* L_52 = V_0;
		bool L_53;
		L_53 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_52, _stringLiteral758BB5EC1495433B8639A7B28454DD315FB3B747, /*hidden argument*/NULL);
		if (L_53)
		{
			goto IL_03ce;
		}
	}
	{
		return;
	}

IL_01e1:
	{
		String_t* L_54 = V_0;
		bool L_55;
		L_55 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_54, _stringLiteral0166B729D0847BFF2B54C5AADC089A2F0C6EB1CD, /*hidden argument*/NULL);
		if (L_55)
		{
			goto IL_03e2;
		}
	}
	{
		return;
	}

IL_01f2:
	{
		String_t* L_56 = V_0;
		bool L_57;
		L_57 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_56, _stringLiteralE6C03ECA0E8B21A86DB488BD71CD9A4622EB7985, /*hidden argument*/NULL);
		if (L_57)
		{
			goto IL_03f6;
		}
	}
	{
		return;
	}

IL_0203:
	{
		String_t* L_58 = V_0;
		bool L_59;
		L_59 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_58, _stringLiteralF0F6F73D75D1F075FBF018CC4DF0D3DE567D3DE9, /*hidden argument*/NULL);
		if (L_59)
		{
			goto IL_040a;
		}
	}
	{
		return;
	}

IL_0214:
	{
		String_t* L_60 = V_0;
		bool L_61;
		L_61 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_60, _stringLiteralBA3404FE970656CDBAB1F0D3E3F1550052F084B3, /*hidden argument*/NULL);
		if (L_61)
		{
			goto IL_041e;
		}
	}
	{
		return;
	}

IL_0225:
	{
		String_t* L_62 = V_0;
		bool L_63;
		L_63 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_62, _stringLiteral9F0F847A9C98CAC53E9608EBD9FB868149DF8F15, /*hidden argument*/NULL);
		if (L_63)
		{
			goto IL_0432;
		}
	}
	{
		return;
	}

IL_0236:
	{
		String_t* L_64 = V_0;
		bool L_65;
		L_65 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_64, _stringLiteralBD121E2E551B83A0EAD630CA78330E7D21A41AD3, /*hidden argument*/NULL);
		if (L_65)
		{
			goto IL_0446;
		}
	}
	{
		return;
	}

IL_0247:
	{
		String_t* L_66 = V_0;
		bool L_67;
		L_67 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_66, _stringLiteral48E4CC100C213DF2B5D397CC5CF4A327E3356D4F, /*hidden argument*/NULL);
		if (L_67)
		{
			goto IL_045a;
		}
	}
	{
		return;
	}

IL_0258:
	{
		String_t* L_68 = V_0;
		bool L_69;
		L_69 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_68, _stringLiteral18D585E9BDEB94D032ACFBA24D6F623FC9B2B2FC, /*hidden argument*/NULL);
		if (L_69)
		{
			goto IL_046e;
		}
	}
	{
		return;
	}

IL_0269:
	{
		String_t* L_70 = V_0;
		bool L_71;
		L_71 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_70, _stringLiteral60825F916DEE1CD3D51CF0776EFD9A4DC0889DB1, /*hidden argument*/NULL);
		if (L_71)
		{
			goto IL_0482;
		}
	}
	{
		return;
	}

IL_027a:
	{
		String_t* L_72 = V_0;
		bool L_73;
		L_73 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_72, _stringLiteral544E8A453765685AA792580EEAB651B27F01E024, /*hidden argument*/NULL);
		if (L_73)
		{
			goto IL_0496;
		}
	}
	{
		return;
	}

IL_028b:
	{
		String_t* L_74 = V_0;
		bool L_75;
		L_75 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_74, _stringLiteral940D4C1D9C3ED31FAF49AE7789CDEF8256223B8F, /*hidden argument*/NULL);
		if (L_75)
		{
			goto IL_04aa;
		}
	}
	{
		return;
	}

IL_029c:
	{
		// healthController.Damage(73);
		HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 * L_76 = __this->get_healthController_5();
		NullCheck(L_76);
		HealthController_Damage_m72DC74C513F1A4FB7DA30BAAE1154A53B686B832(L_76, ((int32_t)73), /*hidden argument*/NULL);
		// HealthUpdate();
		enemyHealthSystem1_HealthUpdate_m547DFFE79A4C0FBECC0AF4502AF0561C7BC5852E(__this, /*hidden argument*/NULL);
		// freezingAnim.Play();
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_77 = __this->get_freezingAnim_11();
		NullCheck(L_77);
		ParticleSystem_Play_m28D27CC4CDC1D93195C75647E6F6DAECF8B6BC50(L_77, /*hidden argument*/NULL);
		// if (IsDead())
		bool L_78;
		L_78 = enemyHealthSystem1_IsDead_m37C895C0826251CDC7AA7D37CD1EAC5BF7409A7D(__this, /*hidden argument*/NULL);
		if (!L_78)
		{
			goto IL_04bd;
		}
	}
	{
		// if (other.gameObject.GetComponent<ProjectileMoveScript>().ProjectileAtanKisi=="Wizard")
		Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * L_79 = ___other0;
		NullCheck(L_79);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_80;
		L_80 = Collision_get_gameObject_m5682F872FD28419AA36F0651CE8B19825A21859D(L_79, /*hidden argument*/NULL);
		NullCheck(L_80);
		ProjectileMoveScript_t8E5328E659143159EA6BDE95FD65EC7A674B237E * L_81;
		L_81 = GameObject_GetComponent_TisProjectileMoveScript_t8E5328E659143159EA6BDE95FD65EC7A674B237E_mEB7BE1C64D5652FCA8203DDEC1A7179C65325D65(L_80, /*hidden argument*/GameObject_GetComponent_TisProjectileMoveScript_t8E5328E659143159EA6BDE95FD65EC7A674B237E_mEB7BE1C64D5652FCA8203DDEC1A7179C65325D65_RuntimeMethod_var);
		NullCheck(L_81);
		String_t* L_82 = L_81->get_ProjectileAtanKisi_11();
		bool L_83;
		L_83 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_82, _stringLiteral341872AF21C32D6A74449BC426100C98602C2E63, /*hidden argument*/NULL);
		if (!L_83)
		{
			goto IL_0302;
		}
	}
	{
		// AttackScripterisim = GameObject.Find("Wizard");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_84;
		L_84 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral341872AF21C32D6A74449BC426100C98602C2E63, /*hidden argument*/NULL);
		__this->set_AttackScripterisim_14(L_84);
		// AttackScripterisim.GetComponent<attack>().wizardKillMethod();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_85 = __this->get_AttackScripterisim_14();
		NullCheck(L_85);
		attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C * L_86;
		L_86 = GameObject_GetComponent_Tisattack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C_m81C01CBE5561AC69191BF28F07430FDBCD508A7A(L_85, /*hidden argument*/GameObject_GetComponent_Tisattack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C_m81C01CBE5561AC69191BF28F07430FDBCD508A7A_RuntimeMethod_var);
		NullCheck(L_86);
		attack_wizardKillMethod_mC96570A5894983EA3DBCC1F4EF2BB0EEEB0F1998(L_86, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0302:
	{
		// aiScriptErisim=GameObject.Find(other.gameObject.GetComponent<ProjectileMoveScript>().ProjectileAtanKisi);
		Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * L_87 = ___other0;
		NullCheck(L_87);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_88;
		L_88 = Collision_get_gameObject_m5682F872FD28419AA36F0651CE8B19825A21859D(L_87, /*hidden argument*/NULL);
		NullCheck(L_88);
		ProjectileMoveScript_t8E5328E659143159EA6BDE95FD65EC7A674B237E * L_89;
		L_89 = GameObject_GetComponent_TisProjectileMoveScript_t8E5328E659143159EA6BDE95FD65EC7A674B237E_mEB7BE1C64D5652FCA8203DDEC1A7179C65325D65(L_88, /*hidden argument*/GameObject_GetComponent_TisProjectileMoveScript_t8E5328E659143159EA6BDE95FD65EC7A674B237E_mEB7BE1C64D5652FCA8203DDEC1A7179C65325D65_RuntimeMethod_var);
		NullCheck(L_89);
		String_t* L_90 = L_89->get_ProjectileAtanKisi_11();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_91;
		L_91 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(L_90, /*hidden argument*/NULL);
		__this->set_aiScriptErisim_15(L_91);
		// aiScriptErisim.GetComponent<ai>().aiKillMethod();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_92 = __this->get_aiScriptErisim_15();
		NullCheck(L_92);
		ai_t05DCF615948AD04F90BBCFF646B8389E83581B71 * L_93;
		L_93 = GameObject_GetComponent_Tisai_t05DCF615948AD04F90BBCFF646B8389E83581B71_m1777513B730827DD343C6947A74DF512795EE90F(L_92, /*hidden argument*/GameObject_GetComponent_Tisai_t05DCF615948AD04F90BBCFF646B8389E83581B71_m1777513B730827DD343C6947A74DF512795EE90F_RuntimeMethod_var);
		NullCheck(L_93);
		ai_aiKillMethod_mBD051C32DE5A975ED706D14C6FDA0C842421C776(L_93, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_032e:
	{
		// healthController.Damage(10);
		HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 * L_94 = __this->get_healthController_5();
		NullCheck(L_94);
		HealthController_Damage_m72DC74C513F1A4FB7DA30BAAE1154A53B686B832(L_94, ((int32_t)10), /*hidden argument*/NULL);
		// HealthUpdate();
		enemyHealthSystem1_HealthUpdate_m547DFFE79A4C0FBECC0AF4502AF0561C7BC5852E(__this, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0342:
	{
		// healthController.Damage(10);
		HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 * L_95 = __this->get_healthController_5();
		NullCheck(L_95);
		HealthController_Damage_m72DC74C513F1A4FB7DA30BAAE1154A53B686B832(L_95, ((int32_t)10), /*hidden argument*/NULL);
		// HealthUpdate();
		enemyHealthSystem1_HealthUpdate_m547DFFE79A4C0FBECC0AF4502AF0561C7BC5852E(__this, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0356:
	{
		// healthController.Damage(10);
		HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 * L_96 = __this->get_healthController_5();
		NullCheck(L_96);
		HealthController_Damage_m72DC74C513F1A4FB7DA30BAAE1154A53B686B832(L_96, ((int32_t)10), /*hidden argument*/NULL);
		// HealthUpdate();
		enemyHealthSystem1_HealthUpdate_m547DFFE79A4C0FBECC0AF4502AF0561C7BC5852E(__this, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_036a:
	{
		// healthController.Damage(10);
		HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 * L_97 = __this->get_healthController_5();
		NullCheck(L_97);
		HealthController_Damage_m72DC74C513F1A4FB7DA30BAAE1154A53B686B832(L_97, ((int32_t)10), /*hidden argument*/NULL);
		// HealthUpdate();
		enemyHealthSystem1_HealthUpdate_m547DFFE79A4C0FBECC0AF4502AF0561C7BC5852E(__this, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_037e:
	{
		// healthController.Damage(10);
		HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 * L_98 = __this->get_healthController_5();
		NullCheck(L_98);
		HealthController_Damage_m72DC74C513F1A4FB7DA30BAAE1154A53B686B832(L_98, ((int32_t)10), /*hidden argument*/NULL);
		// HealthUpdate();
		enemyHealthSystem1_HealthUpdate_m547DFFE79A4C0FBECC0AF4502AF0561C7BC5852E(__this, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0392:
	{
		// healthController.Damage(10);
		HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 * L_99 = __this->get_healthController_5();
		NullCheck(L_99);
		HealthController_Damage_m72DC74C513F1A4FB7DA30BAAE1154A53B686B832(L_99, ((int32_t)10), /*hidden argument*/NULL);
		// HealthUpdate();
		enemyHealthSystem1_HealthUpdate_m547DFFE79A4C0FBECC0AF4502AF0561C7BC5852E(__this, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_03a6:
	{
		// healthController.Damage(10);
		HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 * L_100 = __this->get_healthController_5();
		NullCheck(L_100);
		HealthController_Damage_m72DC74C513F1A4FB7DA30BAAE1154A53B686B832(L_100, ((int32_t)10), /*hidden argument*/NULL);
		// HealthUpdate();
		enemyHealthSystem1_HealthUpdate_m547DFFE79A4C0FBECC0AF4502AF0561C7BC5852E(__this, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_03ba:
	{
		// healthController.Damage(10);
		HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 * L_101 = __this->get_healthController_5();
		NullCheck(L_101);
		HealthController_Damage_m72DC74C513F1A4FB7DA30BAAE1154A53B686B832(L_101, ((int32_t)10), /*hidden argument*/NULL);
		// HealthUpdate();
		enemyHealthSystem1_HealthUpdate_m547DFFE79A4C0FBECC0AF4502AF0561C7BC5852E(__this, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_03ce:
	{
		// healthController.Damage(10);
		HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 * L_102 = __this->get_healthController_5();
		NullCheck(L_102);
		HealthController_Damage_m72DC74C513F1A4FB7DA30BAAE1154A53B686B832(L_102, ((int32_t)10), /*hidden argument*/NULL);
		// HealthUpdate();
		enemyHealthSystem1_HealthUpdate_m547DFFE79A4C0FBECC0AF4502AF0561C7BC5852E(__this, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_03e2:
	{
		// healthController.Damage(10);
		HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 * L_103 = __this->get_healthController_5();
		NullCheck(L_103);
		HealthController_Damage_m72DC74C513F1A4FB7DA30BAAE1154A53B686B832(L_103, ((int32_t)10), /*hidden argument*/NULL);
		// HealthUpdate();
		enemyHealthSystem1_HealthUpdate_m547DFFE79A4C0FBECC0AF4502AF0561C7BC5852E(__this, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_03f6:
	{
		// healthController.Damage(10);
		HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 * L_104 = __this->get_healthController_5();
		NullCheck(L_104);
		HealthController_Damage_m72DC74C513F1A4FB7DA30BAAE1154A53B686B832(L_104, ((int32_t)10), /*hidden argument*/NULL);
		// HealthUpdate();
		enemyHealthSystem1_HealthUpdate_m547DFFE79A4C0FBECC0AF4502AF0561C7BC5852E(__this, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_040a:
	{
		// healthController.Damage(10);
		HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 * L_105 = __this->get_healthController_5();
		NullCheck(L_105);
		HealthController_Damage_m72DC74C513F1A4FB7DA30BAAE1154A53B686B832(L_105, ((int32_t)10), /*hidden argument*/NULL);
		// HealthUpdate();
		enemyHealthSystem1_HealthUpdate_m547DFFE79A4C0FBECC0AF4502AF0561C7BC5852E(__this, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_041e:
	{
		// healthController.Damage(10);
		HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 * L_106 = __this->get_healthController_5();
		NullCheck(L_106);
		HealthController_Damage_m72DC74C513F1A4FB7DA30BAAE1154A53B686B832(L_106, ((int32_t)10), /*hidden argument*/NULL);
		// HealthUpdate();
		enemyHealthSystem1_HealthUpdate_m547DFFE79A4C0FBECC0AF4502AF0561C7BC5852E(__this, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0432:
	{
		// healthController.Damage(10);
		HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 * L_107 = __this->get_healthController_5();
		NullCheck(L_107);
		HealthController_Damage_m72DC74C513F1A4FB7DA30BAAE1154A53B686B832(L_107, ((int32_t)10), /*hidden argument*/NULL);
		// HealthUpdate();
		enemyHealthSystem1_HealthUpdate_m547DFFE79A4C0FBECC0AF4502AF0561C7BC5852E(__this, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0446:
	{
		// healthController.Damage(10);
		HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 * L_108 = __this->get_healthController_5();
		NullCheck(L_108);
		HealthController_Damage_m72DC74C513F1A4FB7DA30BAAE1154A53B686B832(L_108, ((int32_t)10), /*hidden argument*/NULL);
		// HealthUpdate();
		enemyHealthSystem1_HealthUpdate_m547DFFE79A4C0FBECC0AF4502AF0561C7BC5852E(__this, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_045a:
	{
		// healthController.Damage(10);
		HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 * L_109 = __this->get_healthController_5();
		NullCheck(L_109);
		HealthController_Damage_m72DC74C513F1A4FB7DA30BAAE1154A53B686B832(L_109, ((int32_t)10), /*hidden argument*/NULL);
		// HealthUpdate();
		enemyHealthSystem1_HealthUpdate_m547DFFE79A4C0FBECC0AF4502AF0561C7BC5852E(__this, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_046e:
	{
		// healthController.Damage(10);
		HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 * L_110 = __this->get_healthController_5();
		NullCheck(L_110);
		HealthController_Damage_m72DC74C513F1A4FB7DA30BAAE1154A53B686B832(L_110, ((int32_t)10), /*hidden argument*/NULL);
		// HealthUpdate();
		enemyHealthSystem1_HealthUpdate_m547DFFE79A4C0FBECC0AF4502AF0561C7BC5852E(__this, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0482:
	{
		// healthController.Damage(10);
		HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 * L_111 = __this->get_healthController_5();
		NullCheck(L_111);
		HealthController_Damage_m72DC74C513F1A4FB7DA30BAAE1154A53B686B832(L_111, ((int32_t)10), /*hidden argument*/NULL);
		// HealthUpdate();
		enemyHealthSystem1_HealthUpdate_m547DFFE79A4C0FBECC0AF4502AF0561C7BC5852E(__this, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0496:
	{
		// healthController.Damage(10);
		HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 * L_112 = __this->get_healthController_5();
		NullCheck(L_112);
		HealthController_Damage_m72DC74C513F1A4FB7DA30BAAE1154A53B686B832(L_112, ((int32_t)10), /*hidden argument*/NULL);
		// HealthUpdate();
		enemyHealthSystem1_HealthUpdate_m547DFFE79A4C0FBECC0AF4502AF0561C7BC5852E(__this, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_04aa:
	{
		// healthController.Damage(10);
		HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 * L_113 = __this->get_healthController_5();
		NullCheck(L_113);
		HealthController_Damage_m72DC74C513F1A4FB7DA30BAAE1154A53B686B832(L_113, ((int32_t)10), /*hidden argument*/NULL);
		// HealthUpdate();
		enemyHealthSystem1_HealthUpdate_m547DFFE79A4C0FBECC0AF4502AF0561C7BC5852E(__this, /*hidden argument*/NULL);
	}

IL_04bd:
	{
		// }
		return;
	}
}
// System.Void enemyHealthSystem1::OnTriggerStay(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void enemyHealthSystem1_OnTriggerStay_m03C67323C82DAA974A3F04A0878FF7CDB028536B (enemyHealthSystem1_t9D32045CB414C7BF3B895294B1044F2D9FFA0029 * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___other0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void enemyHealthSystem1::OnParticleCollision(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void enemyHealthSystem1_OnParticleCollision_m5310C319E165E01D6B397BD314D0267087B71649 (enemyHealthSystem1_t9D32045CB414C7BF3B895294B1044F2D9FFA0029 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___other0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void enemyHealthSystem1::KillKimdeKaldi()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void enemyHealthSystem1_KillKimdeKaldi_mAD953FA1B81C5BD5A8DA79D6BCA5D6E13F88BA71 (enemyHealthSystem1_t9D32045CB414C7BF3B895294B1044F2D9FFA0029 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void enemyHealthSystem1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void enemyHealthSystem1__ctor_mBB9596712C5E6CE433214948408C6DAA7FFFD77E (enemyHealthSystem1_t9D32045CB414C7BF3B895294B1044F2D9FFA0029 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// HealthController healthController = new HealthController(100, 100);
		HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 * L_0 = (HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 *)il2cpp_codegen_object_new(HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7_il2cpp_TypeInfo_var);
		HealthController__ctor_mE7C9A5C8657BF0AA3875B191C910997CF701CCE1(L_0, ((int32_t)100), ((int32_t)100), /*hidden argument*/NULL);
		__this->set_healthController_5(L_0);
		// bool graveStoneControl = true; //s�rekli graveStone koymas�n diye
		__this->set_graveStoneControl_18((bool)1);
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
// System.Void enemyPathMovement::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void enemyPathMovement_Awake_m9B0F46F72E5BB92ED3F243006091561F0C3C0151 (enemyPathMovement_t2A082E51F0F47B4E09CD70F138BEF58C105BD216 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&enemyPathMovement_t2A082E51F0F47B4E09CD70F138BEF58C105BD216_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instance = this;
		((enemyPathMovement_t2A082E51F0F47B4E09CD70F138BEF58C105BD216_StaticFields*)il2cpp_codegen_static_fields_for(enemyPathMovement_t2A082E51F0F47B4E09CD70F138BEF58C105BD216_il2cpp_TypeInfo_var))->set_Instance_4(__this);
		// }
		return;
	}
}
// System.Boolean enemyPathMovement::RandomPoint(UnityEngine.Vector3,System.Single,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool enemyPathMovement_RandomPoint_m384C5A48C2FE2C91DCF89B25BAFC394E2F4571E9 (enemyPathMovement_t2A082E51F0F47B4E09CD70F138BEF58C105BD216 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___center0, float ___range1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___result2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	NavMeshHit_t62B242C636F3B036AE65C266EC79A2B62330FF9D  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// for(int i=0; i<30; i++)
		V_0 = 0;
		goto IL_0037;
	}

IL_0004:
	{
		// Vector3 randomPoint = center + Random.insideUnitSphere * range;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___center0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Random_get_insideUnitSphere_m43E5AE1F6A6CFA892BAE6E3ED71BEBFCE308CE90(/*hidden argument*/NULL);
		float L_2 = ___range1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_1, L_2, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_0, L_3, /*hidden argument*/NULL);
		// if(NavMesh.SamplePosition(randomPoint, out hit , 1.0f , NavMesh.AllAreas))
		bool L_5;
		L_5 = NavMesh_SamplePosition_m9675E148D95E1D92ED75DC608CAA33E75ABCA05E(L_4, (NavMeshHit_t62B242C636F3B036AE65C266EC79A2B62330FF9D *)(&V_1), (1.0f), (-1), /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0033;
		}
	}
	{
		// result = hit.position;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_6 = ___result2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = NavMeshHit_get_position_m66845935ED76B2480F72EE6628EFD9D6BF35B39A((NavMeshHit_t62B242C636F3B036AE65C266EC79A2B62330FF9D *)(&V_1), /*hidden argument*/NULL);
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_6 = L_7;
		// return true;
		return (bool)1;
	}

IL_0033:
	{
		// for(int i=0; i<30; i++)
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0037:
	{
		// for(int i=0; i<30; i++)
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) < ((int32_t)((int32_t)30))))
		{
			goto IL_0004;
		}
	}
	{
		// result = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_10 = ___result2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_10 = L_11;
		// return false;
		return (bool)0;
	}
}
// UnityEngine.Vector3 enemyPathMovement::GetRandomPoint(UnityEngine.Transform,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  enemyPathMovement_GetRandomPoint_m3147C4277C2F26076E374C37EC4EF33557D5498B (enemyPathMovement_t2A082E51F0F47B4E09CD70F138BEF58C105BD216 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___point0, float ___radius1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	enemyPathMovement_t2A082E51F0F47B4E09CD70F138BEF58C105BD216 * G_B2_0 = NULL;
	enemyPathMovement_t2A082E51F0F47B4E09CD70F138BEF58C105BD216 * G_B1_0 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	enemyPathMovement_t2A082E51F0F47B4E09CD70F138BEF58C105BD216 * G_B3_1 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  G_B5_0;
	memset((&G_B5_0), 0, sizeof(G_B5_0));
	enemyPathMovement_t2A082E51F0F47B4E09CD70F138BEF58C105BD216 * G_B5_1 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	enemyPathMovement_t2A082E51F0F47B4E09CD70F138BEF58C105BD216 * G_B4_1 = NULL;
	float G_B6_0 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  G_B6_1;
	memset((&G_B6_1), 0, sizeof(G_B6_1));
	enemyPathMovement_t2A082E51F0F47B4E09CD70F138BEF58C105BD216 * G_B6_2 = NULL;
	{
		// if(RandomPoint(point == null ? transform.position : point.position , radius == 0 ? Range : radius , out _point))
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = ___point0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		G_B1_0 = __this;
		if (L_1)
		{
			G_B2_0 = __this;
			goto IL_0012;
		}
	}
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = ___point0;
		NullCheck(L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		G_B3_0 = L_3;
		G_B3_1 = G_B1_0;
		goto IL_001d;
	}

IL_0012:
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
	}

IL_001d:
	{
		float L_6 = ___radius1;
		G_B4_0 = G_B3_0;
		G_B4_1 = G_B3_1;
		if ((((float)L_6) == ((float)(0.0f))))
		{
			G_B5_0 = G_B3_0;
			G_B5_1 = G_B3_1;
			goto IL_0028;
		}
	}
	{
		float L_7 = ___radius1;
		G_B6_0 = L_7;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		goto IL_002e;
	}

IL_0028:
	{
		float L_8 = __this->get_Range_5();
		G_B6_0 = L_8;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
	}

IL_002e:
	{
		NullCheck(G_B6_2);
		bool L_9;
		L_9 = enemyPathMovement_RandomPoint_m384C5A48C2FE2C91DCF89B25BAFC394E2F4571E9(G_B6_2, G_B6_1, G_B6_0, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		// Debug.DrawRay(_point, Vector3.up, Color.black, 1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_12;
		L_12 = Color_get_black_m67E91EB7017FC74D9AB5ADEF6B6929B7EFC9A982(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_DrawRay_m3954B3FFA675C0660ED438E8B705B45EDE393C60(L_10, L_11, L_12, (1.0f), /*hidden argument*/NULL);
		// return _point;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}

IL_004e:
	{
		// return point == null ? Vector3.zero : point.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14 = ___point0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_14, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_005e;
		}
	}
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16 = ___point0;
		NullCheck(L_16);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_16, /*hidden argument*/NULL);
		return L_17;
	}

IL_005e:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		return L_18;
	}
}
// System.Single enemyPathMovement::getRange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float enemyPathMovement_getRange_m41E717CC901171B46D57CF25B09281D2C9B67107 (enemyPathMovement_t2A082E51F0F47B4E09CD70F138BEF58C105BD216 * __this, const RuntimeMethod* method)
{
	{
		// return Range;
		float L_0 = __this->get_Range_5();
		return L_0;
	}
}
// System.Void enemyPathMovement::setRange(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void enemyPathMovement_setRange_m1A3ACA9C6161883AD4D6D253839489631750C624 (enemyPathMovement_t2A082E51F0F47B4E09CD70F138BEF58C105BD216 * __this, float ___Range0, const RuntimeMethod* method)
{
	{
		// this.Range = Range;
		float L_0 = ___Range0;
		__this->set_Range_5(L_0);
		// }
		return;
	}
}
// System.Void enemyPathMovement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void enemyPathMovement__ctor_mB891C6880444E7833C497171EC0FD6548014DB14 (enemyPathMovement_t2A082E51F0F47B4E09CD70F138BEF58C105BD216 * __this, const RuntimeMethod* method)
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
// System.Void lookAtCam::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void lookAtCam_Update_mAF934688A917A4A8B8DBCA5CEC479C94F24A8A83 (lookAtCam_t64131884DEED4BA8406F72036C9D4F5B245BA14C * __this, const RuntimeMethod* method)
{
	{
		// transform.LookAt(transform.position + cam.forward);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = __this->get_cam_4();
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_3, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_2, L_4, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_LookAt_m996FADE2327B0A4412FF4A5179B8BABD9EB849BA(L_0, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void lookAtCam::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void lookAtCam__ctor_m45CD64887991D07DBB6D2052AFE7FC2A77217C51 (lookAtCam_t64131884DEED4BA8406F72036C9D4F5B245BA14C * __this, const RuntimeMethod* method)
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
// System.Void move::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void move_Start_m68C6847F59645AD1B22C2CB5742DB521F7792586 (move_tF5C934E0EAF4295D46D7DAA6C508AFAB1B699276 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisJoystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873_m7209E3C1CAB57BED00FB7BEF8EEF44EBADFD5C7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral341872AF21C32D6A74449BC426100C98602C2E63);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&move_tF5C934E0EAF4295D46D7DAA6C508AFAB1B699276_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// joystick = FindObjectOfType<Joystick>();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * L_0;
		L_0 = Object_FindObjectOfType_TisJoystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873_m7209E3C1CAB57BED00FB7BEF8EEF44EBADFD5C7A(/*hidden argument*/Object_FindObjectOfType_TisJoystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873_m7209E3C1CAB57BED00FB7BEF8EEF44EBADFD5C7A_RuntimeMethod_var);
		__this->set_joystick_4(L_0);
		// wizard = GameObject.FindWithTag("Wizard");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = GameObject_FindWithTag_mEF75D1FF1E55B338A77161FDCB68ED0A2A911DF3(_stringLiteral341872AF21C32D6A74449BC426100C98602C2E63, /*hidden argument*/NULL);
		__this->set_wizard_12(L_1);
		// animator = wizard.GetComponent<Animator>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_wizard_12();
		NullCheck(L_2);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_3;
		L_3 = GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36(L_2, /*hidden argument*/GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36_RuntimeMethod_var);
		__this->set_animator_11(L_3);
		// walkSmoke.Stop();
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_4 = __this->get_walkSmoke_10();
		NullCheck(L_4);
		ParticleSystem_Stop_m8CBF9268DE7B5A40952B4977462B857B5F5AFB9D(L_4, /*hidden argument*/NULL);
		// forward = Camera.main.transform.forward;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_5;
		L_5 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_6, /*hidden argument*/NULL);
		((move_tF5C934E0EAF4295D46D7DAA6C508AFAB1B699276_StaticFields*)il2cpp_codegen_static_fields_for(move_tF5C934E0EAF4295D46D7DAA6C508AFAB1B699276_il2cpp_TypeInfo_var))->set_forward_13(L_7);
		// forward.y = 0;
		(((move_tF5C934E0EAF4295D46D7DAA6C508AFAB1B699276_StaticFields*)il2cpp_codegen_static_fields_for(move_tF5C934E0EAF4295D46D7DAA6C508AFAB1B699276_il2cpp_TypeInfo_var))->get_address_of_forward_13())->set_y_3((0.0f));
		// forward = Vector3.Normalize(forward);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ((move_tF5C934E0EAF4295D46D7DAA6C508AFAB1B699276_StaticFields*)il2cpp_codegen_static_fields_for(move_tF5C934E0EAF4295D46D7DAA6C508AFAB1B699276_il2cpp_TypeInfo_var))->get_forward_13();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Vector3_Normalize_m7C9B0E84BCB84D54A16D1212F3DE5AB2A386FCD9(L_8, /*hidden argument*/NULL);
		((move_tF5C934E0EAF4295D46D7DAA6C508AFAB1B699276_StaticFields*)il2cpp_codegen_static_fields_for(move_tF5C934E0EAF4295D46D7DAA6C508AFAB1B699276_il2cpp_TypeInfo_var))->set_forward_13(L_9);
		// right = Camera.main.transform.right;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_10;
		L_10 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Transform_get_right_mA8EB1882CCE8759766544448308C88D9200F06CE(L_11, /*hidden argument*/NULL);
		((move_tF5C934E0EAF4295D46D7DAA6C508AFAB1B699276_StaticFields*)il2cpp_codegen_static_fields_for(move_tF5C934E0EAF4295D46D7DAA6C508AFAB1B699276_il2cpp_TypeInfo_var))->set_right_14(L_12);
		// right.y = 0;
		(((move_tF5C934E0EAF4295D46D7DAA6C508AFAB1B699276_StaticFields*)il2cpp_codegen_static_fields_for(move_tF5C934E0EAF4295D46D7DAA6C508AFAB1B699276_il2cpp_TypeInfo_var))->get_address_of_right_14())->set_y_3((0.0f));
		// right = Vector3.Normalize(right);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = ((move_tF5C934E0EAF4295D46D7DAA6C508AFAB1B699276_StaticFields*)il2cpp_codegen_static_fields_for(move_tF5C934E0EAF4295D46D7DAA6C508AFAB1B699276_il2cpp_TypeInfo_var))->get_right_14();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Vector3_Normalize_m7C9B0E84BCB84D54A16D1212F3DE5AB2A386FCD9(L_13, /*hidden argument*/NULL);
		((move_tF5C934E0EAF4295D46D7DAA6C508AFAB1B699276_StaticFields*)il2cpp_codegen_static_fields_for(move_tF5C934E0EAF4295D46D7DAA6C508AFAB1B699276_il2cpp_TypeInfo_var))->set_right_14(L_14);
		// }
		return;
	}
}
// System.Void move::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void move_FixedUpdate_m213E5780C060913D97B39F2E1AEC66A04C9BD193 (move_tF5C934E0EAF4295D46D7DAA6C508AFAB1B699276 * __this, const RuntimeMethod* method)
{
	{
		// movement();
		move_movement_m07515DDC4F7DB85882E26C61AFA52D393F815932(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void move::movement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void move_movement_m07515DDC4F7DB85882E26C61AFA52D393F815932 (move_tF5C934E0EAF4295D46D7DAA6C508AFAB1B699276 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CCAD0804681D389662AE4D59666F2C220293CCE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA50160048687C05C4A6257A7E3773F0E2F8B6A26);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&move_tF5C934E0EAF4295D46D7DAA6C508AFAB1B699276_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// horizontal = joystick.Horizontal;
		Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * L_0 = __this->get_joystick_4();
		NullCheck(L_0);
		float L_1;
		L_1 = Joystick_get_Horizontal_m1AE640531EE5E28A63A8D5AC757F9753DDA56321(L_0, /*hidden argument*/NULL);
		__this->set_horizontal_5(L_1);
		// vertical = joystick.Vertical;
		Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * L_2 = __this->get_joystick_4();
		NullCheck(L_2);
		float L_3;
		L_3 = Joystick_get_Vertical_m56B4D1C75DABA23923EF2E9C20543858E90D23C2(L_2, /*hidden argument*/NULL);
		__this->set_vertical_6(L_3);
		// if (horizontal <= 0.1 && horizontal >= -0.1 && vertical <= 0.1 && vertical >= -0.1)
		float L_4 = __this->get_horizontal_5();
		if ((!(((double)((double)((double)L_4))) <= ((double)(0.10000000000000001)))))
		{
			goto IL_008d;
		}
	}
	{
		float L_5 = __this->get_horizontal_5();
		if ((!(((double)((double)((double)L_5))) >= ((double)(-0.10000000000000001)))))
		{
			goto IL_008d;
		}
	}
	{
		float L_6 = __this->get_vertical_6();
		if ((!(((double)((double)((double)L_6))) <= ((double)(0.10000000000000001)))))
		{
			goto IL_008d;
		}
	}
	{
		float L_7 = __this->get_vertical_6();
		if ((!(((double)((double)((double)L_7))) >= ((double)(-0.10000000000000001)))))
		{
			goto IL_008d;
		}
	}
	{
		// horizontal = 0;
		__this->set_horizontal_5((0.0f));
		// vertical = 0;
		__this->set_vertical_6((0.0f));
		// walkSmoke.Stop();
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_8 = __this->get_walkSmoke_10();
		NullCheck(L_8);
		ParticleSystem_Stop_m8CBF9268DE7B5A40952B4977462B857B5F5AFB9D(L_8, /*hidden argument*/NULL);
		// }
		goto IL_00a5;
	}

IL_008d:
	{
		// else if(!walkSmoke.isPlaying)
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_9 = __this->get_walkSmoke_10();
		NullCheck(L_9);
		bool L_10;
		L_10 = ParticleSystem_get_isPlaying_m36FD03CBF99EE4C243B01F37D77CB6B1CFA526BA(L_9, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_00a5;
		}
	}
	{
		// walkSmoke.Play();
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_11 = __this->get_walkSmoke_10();
		NullCheck(L_11);
		ParticleSystem_Play_m28D27CC4CDC1D93195C75647E6F6DAECF8B6BC50(L_11, /*hidden argument*/NULL);
	}

IL_00a5:
	{
		// Vector3 direction = new Vector3(horizontal, 0, vertical);
		float L_12 = __this->get_horizontal_5();
		float L_13 = __this->get_vertical_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_14), L_12, (0.0f), L_13, /*hidden argument*/NULL);
		// Vector3 rightMovement = right * moveSpeed * Time.deltaTime * horizontal;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15 = ((move_tF5C934E0EAF4295D46D7DAA6C508AFAB1B699276_StaticFields*)il2cpp_codegen_static_fields_for(move_tF5C934E0EAF4295D46D7DAA6C508AFAB1B699276_il2cpp_TypeInfo_var))->get_right_14();
		float L_16 = __this->get_moveSpeed_16();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_15, L_16, /*hidden argument*/NULL);
		float L_18;
		L_18 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_17, L_18, /*hidden argument*/NULL);
		float L_20 = __this->get_horizontal_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_19, L_20, /*hidden argument*/NULL);
		V_0 = L_21;
		// Vector3 upMovement = forward * moveSpeed *Time.deltaTime * vertical;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22 = ((move_tF5C934E0EAF4295D46D7DAA6C508AFAB1B699276_StaticFields*)il2cpp_codegen_static_fields_for(move_tF5C934E0EAF4295D46D7DAA6C508AFAB1B699276_il2cpp_TypeInfo_var))->get_forward_13();
		float L_23 = __this->get_moveSpeed_16();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
		L_24 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_22, L_23, /*hidden argument*/NULL);
		float L_25;
		L_25 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		L_26 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_24, L_25, /*hidden argument*/NULL);
		float L_27 = __this->get_vertical_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		L_28 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_26, L_27, /*hidden argument*/NULL);
		V_1 = L_28;
		// heading = Vector3.Normalize(rightMovement + upMovement);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31;
		L_31 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_29, L_30, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32;
		L_32 = Vector3_Normalize_m7C9B0E84BCB84D54A16D1212F3DE5AB2A386FCD9(L_31, /*hidden argument*/NULL);
		((move_tF5C934E0EAF4295D46D7DAA6C508AFAB1B699276_StaticFields*)il2cpp_codegen_static_fields_for(move_tF5C934E0EAF4295D46D7DAA6C508AFAB1B699276_il2cpp_TypeInfo_var))->set_heading_15(L_32);
		// transform.forward += heading;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_33;
		L_33 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_34 = L_33;
		NullCheck(L_34);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35;
		L_35 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_34, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36 = ((move_tF5C934E0EAF4295D46D7DAA6C508AFAB1B699276_StaticFields*)il2cpp_codegen_static_fields_for(move_tF5C934E0EAF4295D46D7DAA6C508AFAB1B699276_il2cpp_TypeInfo_var))->get_heading_15();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37;
		L_37 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_35, L_36, /*hidden argument*/NULL);
		NullCheck(L_34);
		Transform_set_forward_mAE46B156F55F2F90AB495B17F7C20BF59A5D7D4D(L_34, L_37, /*hidden argument*/NULL);
		// transform.position += rightMovement;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_38;
		L_38 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_39 = L_38;
		NullCheck(L_39);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_40;
		L_40 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_39, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_41 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_42;
		L_42 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_40, L_41, /*hidden argument*/NULL);
		NullCheck(L_39);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_39, L_42, /*hidden argument*/NULL);
		// transform.position += upMovement;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_43;
		L_43 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_44 = L_43;
		NullCheck(L_44);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_45;
		L_45 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_44, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_46 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_47;
		L_47 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_45, L_46, /*hidden argument*/NULL);
		NullCheck(L_44);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_44, L_47, /*hidden argument*/NULL);
		// Camera.main.transform.position = new Vector3(transform.position.x-10, transform.position.y+7, transform.position.z-8);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_48;
		L_48 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		NullCheck(L_48);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_49;
		L_49 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_48, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_50;
		L_50 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_50);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_51;
		L_51 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_50, /*hidden argument*/NULL);
		float L_52 = L_51.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_53;
		L_53 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_53);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_54;
		L_54 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_53, /*hidden argument*/NULL);
		float L_55 = L_54.get_y_3();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_56;
		L_56 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_56);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_57;
		L_57 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_56, /*hidden argument*/NULL);
		float L_58 = L_57.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_59;
		memset((&L_59), 0, sizeof(L_59));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_59), ((float)il2cpp_codegen_subtract((float)L_52, (float)(10.0f))), ((float)il2cpp_codegen_add((float)L_55, (float)(7.0f))), ((float)il2cpp_codegen_subtract((float)L_58, (float)(8.0f))), /*hidden argument*/NULL);
		NullCheck(L_49);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_49, L_59, /*hidden argument*/NULL);
		// animator.SetFloat("horizontal", horizontal);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_60 = __this->get_animator_11();
		float L_61 = __this->get_horizontal_5();
		NullCheck(L_60);
		Animator_SetFloat_mD731F47ED44C2D629F8E1C6DB15629C3E1B992A0(L_60, _stringLiteralA50160048687C05C4A6257A7E3773F0E2F8B6A26, L_61, /*hidden argument*/NULL);
		// animator.SetFloat("vertical", vertical);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_62 = __this->get_animator_11();
		float L_63 = __this->get_vertical_6();
		NullCheck(L_62);
		Animator_SetFloat_mD731F47ED44C2D629F8E1C6DB15629C3E1B992A0(L_62, _stringLiteral9CCAD0804681D389662AE4D59666F2C220293CCE, L_63, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void move::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void move__ctor_mEA4EAF1DF04BED632395EC3F0721A0273A838739 (move_tF5C934E0EAF4295D46D7DAA6C508AFAB1B699276 * __this, const RuntimeMethod* method)
{
	{
		// float moveSpeed = 6f;
		__this->set_moveSpeed_16((6.0f));
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
// System.Void scriptTexttest::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void scriptTexttest_Start_m818344CB709FC7E46ECC80F88D875AD0A90437DE (scriptTexttest_t5DA02D7FF2D49D1970E133E3A0E2D37B2E4D90F8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAAC1109D6216B0F3500C82EE33EA82A343C4964A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEDC7DA317AC4027BE399B744AF03A8F9E239673D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// bubbleTitleTxt.text = "Font JazzCreate Bubble";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_bubbleTitleTxt_5();
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteralEDC7DA317AC4027BE399B744AF03A8F9E239673D);
		// bubbleText.text = "☺☻♥♦♣♠•◘○◙♂♀♪♫☼►◄↕‼▬↨↑↓→←\n" + "∟↔▲▼!#$%&'()*+,-./0123456789:;<=>?@\n"
		//     + "ABCDEFGHIJKLMNOPQRSTUVWXYZ\n`abcdefghijklmnopqrstuvwxyz\nîìÄÅÉæÆôöòûùÿÖÜ \n ¢£¥ƒáíóúñÑªº¿¬½¼¡«»░▒▓\n "
		//         + "│┤╣║╗┐└┴┬├─┼╚╔╩╦╣║╗•§©®¶" + "\nThanks for using fonts from JazzCreates2015©.";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1 = __this->get_bubbleText_4();
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, _stringLiteralAAC1109D6216B0F3500C82EE33EA82A343C4964A);
		// }
		return;
	}
}
// System.Void scriptTexttest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void scriptTexttest__ctor_mB24E71ACFC0F06D88E7DAC07D1B1BAA9E36F794F (scriptTexttest_t5DA02D7FF2D49D1970E133E3A0E2D37B2E4D90F8 * __this, const RuntimeMethod* method)
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CameraShakeSimpleScript/<Shake>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShakeU3Ed__5__ctor_m5D29E1AE6E04D92D16729B96B800C084006CB5D4 (U3CShakeU3Ed__5_t4D78750F530E974ECA1E718C81F0AC4A03284EB6 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void CameraShakeSimpleScript/<Shake>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShakeU3Ed__5_System_IDisposable_Dispose_mC4197FEC180AA9152C9C30B75E072D8A38432F20 (U3CShakeU3Ed__5_t4D78750F530E974ECA1E718C81F0AC4A03284EB6 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean CameraShakeSimpleScript/<Shake>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CShakeU3Ed__5_MoveNext_m86661EE0D69AE9AAC2CF6DDE6E5CA48C106F14AA (U3CShakeU3Ed__5_t4D78750F530E974ECA1E718C81F0AC4A03284EB6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	CameraShakeSimpleScript_t948411B88D6F43F322BCE831BCF7E5405604259A * V_1 = NULL;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		CameraShakeSimpleScript_t948411B88D6F43F322BCE831BCF7E5405604259A * L_1 = __this->get_U3CU3E4__this_2();
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
			goto IL_010a;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// isRunning = true;
		CameraShakeSimpleScript_t948411B88D6F43F322BCE831BCF7E5405604259A * L_4 = V_1;
		NullCheck(L_4);
		L_4->set_isRunning_4((bool)1);
		// Vector3 originalPos = transform.localPosition;
		CameraShakeSimpleScript_t948411B88D6F43F322BCE831BCF7E5405604259A * L_5 = V_1;
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_6, /*hidden argument*/NULL);
		__this->set_U3CoriginalPosU3E5__2_5(L_7);
		// int counter = 0;
		__this->set_U3CcounterU3E5__3_6(0);
		goto IL_0111;
	}

IL_0045:
	{
		// counter++;
		int32_t L_8 = __this->get_U3CcounterU3E5__3_6();
		V_4 = L_8;
		int32_t L_9 = V_4;
		__this->set_U3CcounterU3E5__3_6(((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1)));
		// var x = Random.Range (-1f, 1f) * (amount/counter);
		float L_10;
		L_10 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((-1.0f), (1.0f), /*hidden argument*/NULL);
		float L_11 = __this->get_amount_3();
		int32_t L_12 = __this->get_U3CcounterU3E5__3_6();
		V_2 = ((float)il2cpp_codegen_multiply((float)L_10, (float)((float)((float)L_11/(float)((float)((float)L_12))))));
		// var y = Random.Range (-1f, 1f) * (amount/counter);
		float L_13;
		L_13 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((-1.0f), (1.0f), /*hidden argument*/NULL);
		float L_14 = __this->get_amount_3();
		int32_t L_15 = __this->get_U3CcounterU3E5__3_6();
		V_3 = ((float)il2cpp_codegen_multiply((float)L_13, (float)((float)((float)L_14/(float)((float)((float)L_15))))));
		// transform.localPosition = Vector3.Lerp (transform.localPosition, new Vector3 (originalPos.x + x, originalPos.y + y, originalPos.z), 0.5f);
		CameraShakeSimpleScript_t948411B88D6F43F322BCE831BCF7E5405604259A * L_16 = V_1;
		NullCheck(L_16);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
		L_17 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_16, /*hidden argument*/NULL);
		CameraShakeSimpleScript_t948411B88D6F43F322BCE831BCF7E5405604259A * L_18 = V_1;
		NullCheck(L_18);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19;
		L_19 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_19, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_21 = __this->get_address_of_U3CoriginalPosU3E5__2_5();
		float L_22 = L_21->get_x_2();
		float L_23 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_24 = __this->get_address_of_U3CoriginalPosU3E5__2_5();
		float L_25 = L_24->get_y_3();
		float L_26 = V_3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_27 = __this->get_address_of_U3CoriginalPosU3E5__2_5();
		float L_28 = L_27->get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29;
		memset((&L_29), 0, sizeof(L_29));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_29), ((float)il2cpp_codegen_add((float)L_22, (float)L_23)), ((float)il2cpp_codegen_add((float)L_25, (float)L_26)), L_28, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30;
		L_30 = Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline(L_20, L_29, (0.5f), /*hidden argument*/NULL);
		NullCheck(L_17);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_17, L_30, /*hidden argument*/NULL);
		// duration -= Time.deltaTime;
		float L_31 = __this->get_duration_4();
		float L_32;
		L_32 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_duration_4(((float)il2cpp_codegen_subtract((float)L_31, (float)L_32)));
		// yield return new WaitForSeconds (0.1f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_33 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_33, (0.100000001f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_33);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_010a:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0111:
	{
		// while (duration > 0.01f) {
		float L_34 = __this->get_duration_4();
		if ((((float)L_34) > ((float)(0.00999999978f))))
		{
			goto IL_0045;
		}
	}
	{
		// transform.localPosition = originalPos;
		CameraShakeSimpleScript_t948411B88D6F43F322BCE831BCF7E5405604259A * L_35 = V_1;
		NullCheck(L_35);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_36;
		L_36 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_35, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37 = __this->get_U3CoriginalPosU3E5__2_5();
		NullCheck(L_36);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_36, L_37, /*hidden argument*/NULL);
		// isRunning = false;
		CameraShakeSimpleScript_t948411B88D6F43F322BCE831BCF7E5405604259A * L_38 = V_1;
		NullCheck(L_38);
		L_38->set_isRunning_4((bool)0);
		// }
		return (bool)0;
	}
}
// System.Object CameraShakeSimpleScript/<Shake>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CShakeU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m9688D01BD1B73DA02BCB535D7C43C2BA45DAF9DE (U3CShakeU3Ed__5_t4D78750F530E974ECA1E718C81F0AC4A03284EB6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void CameraShakeSimpleScript/<Shake>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShakeU3Ed__5_System_Collections_IEnumerator_Reset_m84CD7308C3D7700156AADBB3E5FD3ECAB36CE0A1 (U3CShakeU3Ed__5_t4D78750F530E974ECA1E718C81F0AC4A03284EB6 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CShakeU3Ed__5_System_Collections_IEnumerator_Reset_m84CD7308C3D7700156AADBB3E5FD3ECAB36CE0A1_RuntimeMethod_var)));
	}
}
// System.Object CameraShakeSimpleScript/<Shake>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CShakeU3Ed__5_System_Collections_IEnumerator_get_Current_m15B1182C1BF75FAD4CAFB859C4AAB9FAE6D87FB8 (U3CShakeU3Ed__5_t4D78750F530E974ECA1E718C81F0AC4A03284EB6 * __this, const RuntimeMethod* method)
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
// System.Void LoadingPage/<LoadAsynchronously>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAsynchronouslyU3Ed__3__ctor_m22BAFEBE282657BBEDA0B771CFF2493311A952DC (U3CLoadAsynchronouslyU3Ed__3_tEC679E349F2E1391F257C32519B899B2914C2551 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void LoadingPage/<LoadAsynchronously>d__3::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAsynchronouslyU3Ed__3_System_IDisposable_Dispose_m3DC77364E78C74DE3C165D0C93A7185C4BC995F9 (U3CLoadAsynchronouslyU3Ed__3_tEC679E349F2E1391F257C32519B899B2914C2551 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean LoadingPage/<LoadAsynchronously>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CLoadAsynchronouslyU3Ed__3_MoveNext_m50DD2E85C1057F407B563BC95138A7CF5D7DCF91 (U3CLoadAsynchronouslyU3Ed__3_tEC679E349F2E1391F257C32519B899B2914C2551 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_003a;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		// AsyncOperation operation=SceneManager.LoadSceneAsync(sceneIndex);
		int32_t L_3 = __this->get_sceneIndex_2();
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * L_4;
		L_4 = SceneManager_LoadSceneAsync_mAB22F675FE16C405CBEC2CEF405493DBB6F0284E(L_3, /*hidden argument*/NULL);
		__this->set_U3CoperationU3E5__2_3(L_4);
		goto IL_0041;
	}

IL_002a:
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_003a:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0041:
	{
		// while(!operation.isDone)
		AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * L_5 = __this->get_U3CoperationU3E5__2_3();
		NullCheck(L_5);
		bool L_6;
		L_6 = AsyncOperation_get_isDone_m4592F121393149E539D2107239639A049493D877(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_002a;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object LoadingPage/<LoadAsynchronously>d__3::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CLoadAsynchronouslyU3Ed__3_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mC63653E544A633707BC2277F2C0D8AC55584D7C1 (U3CLoadAsynchronouslyU3Ed__3_tEC679E349F2E1391F257C32519B899B2914C2551 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void LoadingPage/<LoadAsynchronously>d__3::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAsynchronouslyU3Ed__3_System_Collections_IEnumerator_Reset_mC4D6E8709A104EDD782FFB1B2D9BD0DDA5839CF2 (U3CLoadAsynchronouslyU3Ed__3_tEC679E349F2E1391F257C32519B899B2914C2551 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CLoadAsynchronouslyU3Ed__3_System_Collections_IEnumerator_Reset_mC4D6E8709A104EDD782FFB1B2D9BD0DDA5839CF2_RuntimeMethod_var)));
	}
}
// System.Object LoadingPage/<LoadAsynchronously>d__3::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CLoadAsynchronouslyU3Ed__3_System_Collections_IEnumerator_get_Current_m7D40CEBDADF75F26F42A7C5628776783167D8F07 (U3CLoadAsynchronouslyU3Ed__3_tEC679E349F2E1391F257C32519B899B2914C2551 * __this, const RuntimeMethod* method)
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
// System.Void ProjectileMoveScript/<DestroyParticle>d__21::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDestroyParticleU3Ed__21__ctor_m8DFD073BB8E9E84121A00D073056BC000BC0A2F4 (U3CDestroyParticleU3Ed__21_tB5537FC9F989A65C210D9C078C1025D7530EA976 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void ProjectileMoveScript/<DestroyParticle>d__21::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDestroyParticleU3Ed__21_System_IDisposable_Dispose_m4B78A7DC5973A1F549F3FEE4E28B4DB8844C5BFB (U3CDestroyParticleU3Ed__21_tB5537FC9F989A65C210D9C078C1025D7530EA976 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean ProjectileMoveScript/<DestroyParticle>d__21::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDestroyParticleU3Ed__21_MoveNext_mE6E94CC5E9FEAA741AD5613AC4D41918442281CE (U3CDestroyParticleU3Ed__21_tB5537FC9F989A65C210D9C078C1025D7530EA976 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m7AB707ADE023585729593334A399B3FF485A7982_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF1D464BA700E6389AEA8AF2F197270F387D9A41F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m82AF14687C6FA2B1572D859A551E3ADBCBADC3C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8B222F262DF0C4B49E12B4E87AB2162202744499_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ProjectileMoveScript_t8E5328E659143159EA6BDE95FD65EC7A674B237E * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		ProjectileMoveScript_t8E5328E659143159EA6BDE95FD65EC7A674B237E * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_00c0;
			}
			case 2:
			{
				goto IL_0183;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (transform.childCount > 0 && waitTime != 0) {
		ProjectileMoveScript_t8E5328E659143159EA6BDE95FD65EC7A674B237E * L_3 = V_1;
		NullCheck(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05(L_4, /*hidden argument*/NULL);
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0169;
		}
	}
	{
		float L_6 = __this->get_waitTime_3();
		if ((((float)L_6) == ((float)(0.0f))))
		{
			goto IL_0169;
		}
	}
	{
		// List<Transform> tList = new List<Transform> ();
		List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * L_7 = (List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 *)il2cpp_codegen_object_new(List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0_il2cpp_TypeInfo_var);
		List_1__ctor_mF1D464BA700E6389AEA8AF2F197270F387D9A41F(L_7, /*hidden argument*/List_1__ctor_mF1D464BA700E6389AEA8AF2F197270F387D9A41F_RuntimeMethod_var);
		__this->set_U3CtListU3E5__2_4(L_7);
		// foreach (Transform t in transform.GetChild(0).transform) {
		ProjectileMoveScript_t8E5328E659143159EA6BDE95FD65EC7A674B237E * L_8 = V_1;
		NullCheck(L_8);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_9, 0, /*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		RuntimeObject* L_12;
		L_12 = Transform_GetEnumerator_mBA0E884A69F0AA05FCB69F4EE5F700177F75DD7E(L_11, /*hidden argument*/NULL);
		V_2 = L_12;
	}

IL_006c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0086;
		}

IL_006e:
		{
			// foreach (Transform t in transform.GetChild(0).transform) {
			RuntimeObject* L_13 = V_2;
			NullCheck(L_13);
			RuntimeObject * L_14;
			L_14 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_13);
			V_3 = ((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)CastclassClass((RuntimeObject*)L_14, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var));
			// tList.Add (t);
			List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * L_15 = __this->get_U3CtListU3E5__2_4();
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16 = V_3;
			NullCheck(L_15);
			List_1_Add_m7AB707ADE023585729593334A399B3FF485A7982(L_15, L_16, /*hidden argument*/List_1_Add_m7AB707ADE023585729593334A399B3FF485A7982_RuntimeMethod_var);
		}

IL_0086:
		{
			// foreach (Transform t in transform.GetChild(0).transform) {
			RuntimeObject* L_17 = V_2;
			NullCheck(L_17);
			bool L_18;
			L_18 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_17);
			if (L_18)
			{
				goto IL_006e;
			}
		}

IL_008e:
		{
			IL2CPP_LEAVE(0x142, FINALLY_0093);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0093;
	}

FINALLY_0093:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_19 = V_2;
			V_4 = ((RuntimeObject*)IsInst((RuntimeObject*)L_19, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_20 = V_4;
			if (!L_20)
			{
				goto IL_00a6;
			}
		}

IL_009f:
		{
			RuntimeObject* L_21 = V_4;
			NullCheck(L_21);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_21);
		}

IL_00a6:
		{
			IL2CPP_END_FINALLY(147)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(147)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x142, IL_0142)
	}

IL_00a7:
	{
		// yield return new WaitForSeconds (0.01f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_22 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_22, (0.00999999978f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_22);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00c0:
	{
		__this->set_U3CU3E1__state_0((-1));
		// transform.GetChild(0).localScale -= new Vector3 (0.1f, 0.1f, 0.1f);
		ProjectileMoveScript_t8E5328E659143159EA6BDE95FD65EC7A674B237E * L_23 = V_1;
		NullCheck(L_23);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24;
		L_24 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_23, /*hidden argument*/NULL);
		NullCheck(L_24);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25;
		L_25 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_24, 0, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_26 = L_25;
		NullCheck(L_26);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
		L_27 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_26, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		memset((&L_28), 0, sizeof(L_28));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_28), (0.100000001f), (0.100000001f), (0.100000001f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29;
		L_29 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_27, L_28, /*hidden argument*/NULL);
		NullCheck(L_26);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_26, L_29, /*hidden argument*/NULL);
		// for (int i = 0; i < tList.Count; i++) {
		V_5 = 0;
		goto IL_0133;
	}

IL_00fc:
	{
		// tList[i].localScale -= new Vector3 (0.1f, 0.1f, 0.1f);
		List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * L_30 = __this->get_U3CtListU3E5__2_4();
		int32_t L_31 = V_5;
		NullCheck(L_30);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_32;
		L_32 = List_1_get_Item_m8B222F262DF0C4B49E12B4E87AB2162202744499_inline(L_30, L_31, /*hidden argument*/List_1_get_Item_m8B222F262DF0C4B49E12B4E87AB2162202744499_RuntimeMethod_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_33 = L_32;
		NullCheck(L_33);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34;
		L_34 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_33, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35;
		memset((&L_35), 0, sizeof(L_35));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_35), (0.100000001f), (0.100000001f), (0.100000001f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36;
		L_36 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_34, L_35, /*hidden argument*/NULL);
		NullCheck(L_33);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_33, L_36, /*hidden argument*/NULL);
		// for (int i = 0; i < tList.Count; i++) {
		int32_t L_37 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)1));
	}

IL_0133:
	{
		// for (int i = 0; i < tList.Count; i++) {
		int32_t L_38 = V_5;
		List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * L_39 = __this->get_U3CtListU3E5__2_4();
		NullCheck(L_39);
		int32_t L_40;
		L_40 = List_1_get_Count_m82AF14687C6FA2B1572D859A551E3ADBCBADC3C0_inline(L_39, /*hidden argument*/List_1_get_Count_m82AF14687C6FA2B1572D859A551E3ADBCBADC3C0_RuntimeMethod_var);
		if ((((int32_t)L_38) < ((int32_t)L_40)))
		{
			goto IL_00fc;
		}
	}

IL_0142:
	{
		// while (transform.GetChild(0).localScale.x > 0) {
		ProjectileMoveScript_t8E5328E659143159EA6BDE95FD65EC7A674B237E * L_41 = V_1;
		NullCheck(L_41);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_42;
		L_42 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_41, /*hidden argument*/NULL);
		NullCheck(L_42);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_43;
		L_43 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_42, 0, /*hidden argument*/NULL);
		NullCheck(L_43);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_44;
		L_44 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_43, /*hidden argument*/NULL);
		float L_45 = L_44.get_x_2();
		if ((((float)L_45) > ((float)(0.0f))))
		{
			goto IL_00a7;
		}
	}
	{
		// }
		__this->set_U3CtListU3E5__2_4((List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 *)NULL);
	}

IL_0169:
	{
		// yield return new WaitForSeconds (waitTime);
		float L_46 = __this->get_waitTime_3();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_47 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_47, L_46, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_47);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_0183:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Destroy (gameObject);
		ProjectileMoveScript_t8E5328E659143159EA6BDE95FD65EC7A674B237E * L_48 = V_1;
		NullCheck(L_48);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_49;
		L_49 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_48, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_49, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object ProjectileMoveScript/<DestroyParticle>d__21::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDestroyParticleU3Ed__21_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mC707C737C6B66C6D63DDECE7D00981FABDFBF4E8 (U3CDestroyParticleU3Ed__21_tB5537FC9F989A65C210D9C078C1025D7530EA976 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void ProjectileMoveScript/<DestroyParticle>d__21::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDestroyParticleU3Ed__21_System_Collections_IEnumerator_Reset_m3A6420E6E3D304AF7765C67220543020FA068C93 (U3CDestroyParticleU3Ed__21_tB5537FC9F989A65C210D9C078C1025D7530EA976 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDestroyParticleU3Ed__21_System_Collections_IEnumerator_Reset_m3A6420E6E3D304AF7765C67220543020FA068C93_RuntimeMethod_var)));
	}
}
// System.Object ProjectileMoveScript/<DestroyParticle>d__21::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDestroyParticleU3Ed__21_System_Collections_IEnumerator_get_Current_m461C13A88FE6D9154BD04EAE398970D82488FEE2 (U3CDestroyParticleU3Ed__21_tB5537FC9F989A65C210D9C078C1025D7530EA976 * __this, const RuntimeMethod* method)
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
// System.Void ProjectileMoveScript/<DestroyParticleIfDontHit>d__22::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDestroyParticleIfDontHitU3Ed__22__ctor_m12B61790D2A32E28C8648842DC7CAB826396B64E (U3CDestroyParticleIfDontHitU3Ed__22_tC33BDA9F0E02008663734E4929A94C85729D00CB * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void ProjectileMoveScript/<DestroyParticleIfDontHit>d__22::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDestroyParticleIfDontHitU3Ed__22_System_IDisposable_Dispose_mA463930A6A41A78785D0FA33B66FFFD66D54F3F1 (U3CDestroyParticleIfDontHitU3Ed__22_tC33BDA9F0E02008663734E4929A94C85729D00CB * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean ProjectileMoveScript/<DestroyParticleIfDontHit>d__22::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDestroyParticleIfDontHitU3Ed__22_MoveNext_m11B14F528C244282084C6512B9A8FB858208365B (U3CDestroyParticleIfDontHitU3Ed__22_tC33BDA9F0E02008663734E4929A94C85729D00CB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m91CE0171326B90198E69EAFA60F45473CAC6E0C3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m538EA9E269978336C890E5FA90908BF7249AB395_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m7AB707ADE023585729593334A399B3FF485A7982_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF1D464BA700E6389AEA8AF2F197270F387D9A41F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m82AF14687C6FA2B1572D859A551E3ADBCBADC3C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8B222F262DF0C4B49E12B4E87AB2162202744499_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ProjectileMoveScript_t8E5328E659143159EA6BDE95FD65EC7A674B237E * V_1 = NULL;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * V_4 = NULL;
	int32_t V_5 = 0;
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * V_6 = NULL;
	MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B  V_7;
	memset((&V_7), 0, sizeof(V_7));
	MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  V_8;
	memset((&V_8), 0, sizeof(V_8));
	RuntimeObject* V_9 = NULL;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_10 = NULL;
	RuntimeObject* V_11 = NULL;
	int32_t V_12 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		ProjectileMoveScript_t8E5328E659143159EA6BDE95FD65EC7A674B237E * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0026;
			}
			case 1:
			{
				goto IL_0047;
			}
			case 2:
			{
				goto IL_01ea;
			}
			case 3:
			{
				goto IL_02ac;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0026:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(waitTime);
		float L_3 = __this->get_waitTime_2();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_4 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_4, L_3, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0047:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (trails.Count > 0)
		ProjectileMoveScript_t8E5328E659143159EA6BDE95FD65EC7A674B237E * L_5 = V_1;
		NullCheck(L_5);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_6 = L_5->get_trails_14();
		NullCheck(L_6);
		int32_t L_7;
		L_7 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_6, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_00ef;
		}
	}
	{
		// for (int i = 0; i < trails.Count; i++)
		V_5 = 0;
		goto IL_00dd;
	}

IL_0064:
	{
		// trails[i].transform.parent = null;
		ProjectileMoveScript_t8E5328E659143159EA6BDE95FD65EC7A674B237E * L_8 = V_1;
		NullCheck(L_8);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_9 = L_8->get_trails_14();
		int32_t L_10 = V_5;
		NullCheck(L_9);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11;
		L_11 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_9, L_10, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		NullCheck(L_11);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_12, (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)NULL, /*hidden argument*/NULL);
		// var ps = trails[i].GetComponent<ParticleSystem>();
		ProjectileMoveScript_t8E5328E659143159EA6BDE95FD65EC7A674B237E * L_13 = V_1;
		NullCheck(L_13);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_14 = L_13->get_trails_14();
		int32_t L_15 = V_5;
		NullCheck(L_14);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16;
		L_16 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_14, L_15, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		NullCheck(L_16);
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_17;
		L_17 = GameObject_GetComponent_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m538EA9E269978336C890E5FA90908BF7249AB395(L_16, /*hidden argument*/GameObject_GetComponent_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m538EA9E269978336C890E5FA90908BF7249AB395_RuntimeMethod_var);
		V_6 = L_17;
		// if (ps != null)
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_18 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_18, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_00d7;
		}
	}
	{
		// ps.Stop();
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_20 = V_6;
		NullCheck(L_20);
		ParticleSystem_Stop_m8CBF9268DE7B5A40952B4977462B857B5F5AFB9D(L_20, /*hidden argument*/NULL);
		// Destroy(ps.gameObject, ps.main.duration + ps.main.startLifetime.constantMax);
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_21 = V_6;
		NullCheck(L_21);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22;
		L_22 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_21, /*hidden argument*/NULL);
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_23 = V_6;
		NullCheck(L_23);
		MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B  L_24;
		L_24 = ParticleSystem_get_main_m8F17DCC63679B15CE548BE83332FDB6635AE74A0(L_23, /*hidden argument*/NULL);
		V_7 = L_24;
		float L_25;
		L_25 = MainModule_get_duration_mD516595EFDD66C83A727BDD7EF495069B4EB6132((MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B *)(&V_7), /*hidden argument*/NULL);
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_26 = V_6;
		NullCheck(L_26);
		MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B  L_27;
		L_27 = ParticleSystem_get_main_m8F17DCC63679B15CE548BE83332FDB6635AE74A0(L_26, /*hidden argument*/NULL);
		V_7 = L_27;
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_28;
		L_28 = MainModule_get_startLifetime_m5E45F78E690E61E6FC758FA927E0743FFC3262FA((MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B *)(&V_7), /*hidden argument*/NULL);
		V_8 = L_28;
		float L_29;
		L_29 = MinMaxCurve_get_constantMax_m602968BE6C8603F219BB3279114F0AF61358DD27((MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD *)(&V_8), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_mAAAA103F4911E9FA18634BF9605C28559F5E2AC7(L_22, ((float)il2cpp_codegen_add((float)L_25, (float)L_29)), /*hidden argument*/NULL);
	}

IL_00d7:
	{
		// for (int i = 0; i < trails.Count; i++)
		int32_t L_30 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1));
	}

IL_00dd:
	{
		// for (int i = 0; i < trails.Count; i++)
		int32_t L_31 = V_5;
		ProjectileMoveScript_t8E5328E659143159EA6BDE95FD65EC7A674B237E * L_32 = V_1;
		NullCheck(L_32);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_33 = L_32->get_trails_14();
		NullCheck(L_33);
		int32_t L_34;
		L_34 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_33, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		if ((((int32_t)L_31) < ((int32_t)L_34)))
		{
			goto IL_0064;
		}
	}

IL_00ef:
	{
		// speed = 0;
		ProjectileMoveScript_t8E5328E659143159EA6BDE95FD65EC7A674B237E * L_35 = V_1;
		NullCheck(L_35);
		L_35->set_speed_8((0.0f));
		// GetComponent<Rigidbody>().isKinematic = true;
		ProjectileMoveScript_t8E5328E659143159EA6BDE95FD65EC7A674B237E * L_36 = V_1;
		NullCheck(L_36);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_37;
		L_37 = Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE(L_36, /*hidden argument*/Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var);
		NullCheck(L_37);
		Rigidbody_set_isKinematic_mCF74D680205544826F2DE2CAB929C9F25409A311(L_37, (bool)1, /*hidden argument*/NULL);
		// Quaternion rot = Quaternion.FromToRotation(Vector3.up, transform.position);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38;
		L_38 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		ProjectileMoveScript_t8E5328E659143159EA6BDE95FD65EC7A674B237E * L_39 = V_1;
		NullCheck(L_39);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_40;
		L_40 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_39, /*hidden argument*/NULL);
		NullCheck(L_40);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_41;
		L_41 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_40, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_42;
		L_42 = Quaternion_FromToRotation_mD0EBB9993FC7C6A45724D0365B09F11F1CEADB80(L_38, L_41, /*hidden argument*/NULL);
		V_2 = L_42;
		// Vector3 pos = transform.position;
		ProjectileMoveScript_t8E5328E659143159EA6BDE95FD65EC7A674B237E * L_43 = V_1;
		NullCheck(L_43);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_44;
		L_44 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_43, /*hidden argument*/NULL);
		NullCheck(L_44);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_45;
		L_45 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_44, /*hidden argument*/NULL);
		V_3 = L_45;
		// var hitVFX = Instantiate(hitPrefab, pos, rot) as GameObject;
		ProjectileMoveScript_t8E5328E659143159EA6BDE95FD65EC7A674B237E * L_46 = V_1;
		NullCheck(L_46);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_47 = L_46->get_hitPrefab_13();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_48 = V_3;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_49 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_50;
		L_50 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_47, L_48, L_49, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// var psChild = hitVFX.transform.GetChild(0).GetComponent<ParticleSystem>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_51 = L_50;
		NullCheck(L_51);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_52;
		L_52 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_51, /*hidden argument*/NULL);
		NullCheck(L_52);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_53;
		L_53 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_52, 0, /*hidden argument*/NULL);
		NullCheck(L_53);
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_54;
		L_54 = Component_GetComponent_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m91CE0171326B90198E69EAFA60F45473CAC6E0C3(L_53, /*hidden argument*/Component_GetComponent_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m91CE0171326B90198E69EAFA60F45473CAC6E0C3_RuntimeMethod_var);
		V_4 = L_54;
		// Destroy(hitVFX, psChild.main.duration);
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_55 = V_4;
		NullCheck(L_55);
		MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B  L_56;
		L_56 = ParticleSystem_get_main_m8F17DCC63679B15CE548BE83332FDB6635AE74A0(L_55, /*hidden argument*/NULL);
		V_7 = L_56;
		float L_57;
		L_57 = MainModule_get_duration_mD516595EFDD66C83A727BDD7EF495069B4EB6132((MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B *)(&V_7), /*hidden argument*/NULL);
		Object_Destroy_mAAAA103F4911E9FA18634BF9605C28559F5E2AC7(L_51, L_57, /*hidden argument*/NULL);
		// if (transform.childCount > 0)
		ProjectileMoveScript_t8E5328E659143159EA6BDE95FD65EC7A674B237E * L_58 = V_1;
		NullCheck(L_58);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_59;
		L_59 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_58, /*hidden argument*/NULL);
		NullCheck(L_59);
		int32_t L_60;
		L_60 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05(L_59, /*hidden argument*/NULL);
		if ((((int32_t)L_60) <= ((int32_t)0)))
		{
			goto IL_0293;
		}
	}
	{
		// List<Transform> tList = new List<Transform>();
		List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * L_61 = (List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 *)il2cpp_codegen_object_new(List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0_il2cpp_TypeInfo_var);
		List_1__ctor_mF1D464BA700E6389AEA8AF2F197270F387D9A41F(L_61, /*hidden argument*/List_1__ctor_mF1D464BA700E6389AEA8AF2F197270F387D9A41F_RuntimeMethod_var);
		__this->set_U3CtListU3E5__2_4(L_61);
		// foreach (Transform t in transform.GetChild(0).transform)
		ProjectileMoveScript_t8E5328E659143159EA6BDE95FD65EC7A674B237E * L_62 = V_1;
		NullCheck(L_62);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_63;
		L_63 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_62, /*hidden argument*/NULL);
		NullCheck(L_63);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_64;
		L_64 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_63, 0, /*hidden argument*/NULL);
		NullCheck(L_64);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_65;
		L_65 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_64, /*hidden argument*/NULL);
		NullCheck(L_65);
		RuntimeObject* L_66;
		L_66 = Transform_GetEnumerator_mBA0E884A69F0AA05FCB69F4EE5F700177F75DD7E(L_65, /*hidden argument*/NULL);
		V_9 = L_66;
	}

IL_0191:
	try
	{ // begin try (depth: 1)
		{
			goto IL_01ae;
		}

IL_0193:
		{
			// foreach (Transform t in transform.GetChild(0).transform)
			RuntimeObject* L_67 = V_9;
			NullCheck(L_67);
			RuntimeObject * L_68;
			L_68 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_67);
			V_10 = ((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)CastclassClass((RuntimeObject*)L_68, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var));
			// tList.Add(t);
			List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * L_69 = __this->get_U3CtListU3E5__2_4();
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_70 = V_10;
			NullCheck(L_69);
			List_1_Add_m7AB707ADE023585729593334A399B3FF485A7982(L_69, L_70, /*hidden argument*/List_1_Add_m7AB707ADE023585729593334A399B3FF485A7982_RuntimeMethod_var);
		}

IL_01ae:
		{
			// foreach (Transform t in transform.GetChild(0).transform)
			RuntimeObject* L_71 = V_9;
			NullCheck(L_71);
			bool L_72;
			L_72 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_71);
			if (L_72)
			{
				goto IL_0193;
			}
		}

IL_01b7:
		{
			IL2CPP_LEAVE(0x26C, FINALLY_01bc);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_01bc;
	}

FINALLY_01bc:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_73 = V_9;
			V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_73, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_74 = V_11;
			if (!L_74)
			{
				goto IL_01d0;
			}
		}

IL_01c9:
		{
			RuntimeObject* L_75 = V_11;
			NullCheck(L_75);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_75);
		}

IL_01d0:
		{
			IL2CPP_END_FINALLY(444)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(444)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x26C, IL_026c)
	}

IL_01d1:
	{
		// yield return new WaitForSeconds(0.01f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_76 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_76, (0.00999999978f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_76);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_01ea:
	{
		__this->set_U3CU3E1__state_0((-1));
		// transform.GetChild(0).localScale -= new Vector3(0.1f, 0.1f, 0.1f);
		ProjectileMoveScript_t8E5328E659143159EA6BDE95FD65EC7A674B237E * L_77 = V_1;
		NullCheck(L_77);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_78;
		L_78 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_77, /*hidden argument*/NULL);
		NullCheck(L_78);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_79;
		L_79 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_78, 0, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_80 = L_79;
		NullCheck(L_80);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_81;
		L_81 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_80, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_82;
		memset((&L_82), 0, sizeof(L_82));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_82), (0.100000001f), (0.100000001f), (0.100000001f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_83;
		L_83 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_81, L_82, /*hidden argument*/NULL);
		NullCheck(L_80);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_80, L_83, /*hidden argument*/NULL);
		// for (int i = 0; i < tList.Count; i++)
		V_12 = 0;
		goto IL_025d;
	}

IL_0226:
	{
		// tList[i].localScale -= new Vector3(0.1f, 0.1f, 0.1f);
		List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * L_84 = __this->get_U3CtListU3E5__2_4();
		int32_t L_85 = V_12;
		NullCheck(L_84);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_86;
		L_86 = List_1_get_Item_m8B222F262DF0C4B49E12B4E87AB2162202744499_inline(L_84, L_85, /*hidden argument*/List_1_get_Item_m8B222F262DF0C4B49E12B4E87AB2162202744499_RuntimeMethod_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_87 = L_86;
		NullCheck(L_87);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_88;
		L_88 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_87, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_89;
		memset((&L_89), 0, sizeof(L_89));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_89), (0.100000001f), (0.100000001f), (0.100000001f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_90;
		L_90 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_88, L_89, /*hidden argument*/NULL);
		NullCheck(L_87);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_87, L_90, /*hidden argument*/NULL);
		// for (int i = 0; i < tList.Count; i++)
		int32_t L_91 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_91, (int32_t)1));
	}

IL_025d:
	{
		// for (int i = 0; i < tList.Count; i++)
		int32_t L_92 = V_12;
		List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * L_93 = __this->get_U3CtListU3E5__2_4();
		NullCheck(L_93);
		int32_t L_94;
		L_94 = List_1_get_Count_m82AF14687C6FA2B1572D859A551E3ADBCBADC3C0_inline(L_93, /*hidden argument*/List_1_get_Count_m82AF14687C6FA2B1572D859A551E3ADBCBADC3C0_RuntimeMethod_var);
		if ((((int32_t)L_92) < ((int32_t)L_94)))
		{
			goto IL_0226;
		}
	}

IL_026c:
	{
		// while (transform.GetChild(0).localScale.x > 0)
		ProjectileMoveScript_t8E5328E659143159EA6BDE95FD65EC7A674B237E * L_95 = V_1;
		NullCheck(L_95);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_96;
		L_96 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_95, /*hidden argument*/NULL);
		NullCheck(L_96);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_97;
		L_97 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_96, 0, /*hidden argument*/NULL);
		NullCheck(L_97);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_98;
		L_98 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_97, /*hidden argument*/NULL);
		float L_99 = L_98.get_x_2();
		if ((((float)L_99) > ((float)(0.0f))))
		{
			goto IL_01d1;
		}
	}
	{
		// }
		__this->set_U3CtListU3E5__2_4((List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 *)NULL);
	}

IL_0293:
	{
		// yield return new WaitForSeconds(0f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_100 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_100, (0.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_100);
		__this->set_U3CU3E1__state_0(3);
		return (bool)1;
	}

IL_02ac:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Destroy(gameObject);
		ProjectileMoveScript_t8E5328E659143159EA6BDE95FD65EC7A674B237E * L_101 = V_1;
		NullCheck(L_101);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_102;
		L_102 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_101, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_102, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object ProjectileMoveScript/<DestroyParticleIfDontHit>d__22::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDestroyParticleIfDontHitU3Ed__22_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mB6CA91D6FA36972DE9816B5E6DF21E330ACC579B (U3CDestroyParticleIfDontHitU3Ed__22_tC33BDA9F0E02008663734E4929A94C85729D00CB * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void ProjectileMoveScript/<DestroyParticleIfDontHit>d__22::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDestroyParticleIfDontHitU3Ed__22_System_Collections_IEnumerator_Reset_m4E44C382400EFEF56EDC62A03ADCB18E4EDF5AAE (U3CDestroyParticleIfDontHitU3Ed__22_tC33BDA9F0E02008663734E4929A94C85729D00CB * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDestroyParticleIfDontHitU3Ed__22_System_Collections_IEnumerator_Reset_m4E44C382400EFEF56EDC62A03ADCB18E4EDF5AAE_RuntimeMethod_var)));
	}
}
// System.Object ProjectileMoveScript/<DestroyParticleIfDontHit>d__22::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDestroyParticleIfDontHitU3Ed__22_System_Collections_IEnumerator_get_Current_m4C984E8232CDB78DEFEAEBAA3D9AA7BA155EFD6D (U3CDestroyParticleIfDontHitU3Ed__22_tC33BDA9F0E02008663734E4929A94C85729D00CB * __this, const RuntimeMethod* method)
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
// System.Void RotateToMouseScript/<UpdateRay>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateRayU3Ed__9__ctor_m3C424ED7532D389836FDAC227F621D2561122C80 (U3CUpdateRayU3Ed__9_tAF42C0C52B4ACFDCDC70E2B1A1F726AA6756614C * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void RotateToMouseScript/<UpdateRay>d__9::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateRayU3Ed__9_System_IDisposable_Dispose_m18B52E52265964D921527AB34EF9B2D69B377033 (U3CUpdateRayU3Ed__9_tAF42C0C52B4ACFDCDC70E2B1A1F726AA6756614C * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean RotateToMouseScript/<UpdateRay>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CUpdateRayU3Ed__9_MoveNext_m3CB4EFF220BE356E1F36C9588CD515F774B333B4 (U3CUpdateRayU3Ed__9_tAF42C0C52B4ACFDCDC70E2B1A1F726AA6756614C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral98D1B162005C82A6351012D2FEBB8ABBEADFB458);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RotateToMouseScript_t484F9391662B1A307753F7AE65E5DC8BDB6764E9 * V_1 = NULL;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		RotateToMouseScript_t484F9391662B1A307753F7AE65E5DC8BDB6764E9 * L_1 = __this->get_U3CU3E4__this_2();
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
			goto IL_0140;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (cam != null) {
		RotateToMouseScript_t484F9391662B1A307753F7AE65E5DC8BDB6764E9 * L_4 = V_1;
		NullCheck(L_4);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_5 = L_4->get_cam_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_5, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0156;
		}
	}
	{
		// if (use2D) {
		RotateToMouseScript_t484F9391662B1A307753F7AE65E5DC8BDB6764E9 * L_7 = V_1;
		NullCheck(L_7);
		bool L_8 = L_7->get_use2D_5();
		if (!L_8)
		{
			goto IL_00b6;
		}
	}
	{
		// Vector2 direction = Camera.main.ScreenToWorldPoint (Input.mousePosition) - transform.position;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_9;
		L_9 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		NullCheck(L_9);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6(L_9, L_10, /*hidden argument*/NULL);
		RotateToMouseScript_t484F9391662B1A307753F7AE65E5DC8BDB6764E9 * L_12 = V_1;
		NullCheck(L_12);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_13, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_11, L_14, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_16;
		L_16 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_15, /*hidden argument*/NULL);
		V_2 = L_16;
		// float angle = Mathf.Atan2 (direction.y, direction.x) * Mathf.Rad2Deg;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_17 = V_2;
		float L_18 = L_17.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_19 = V_2;
		float L_20 = L_19.get_x_0();
		float L_21;
		L_21 = atan2f(L_18, L_20);
		V_3 = ((float)il2cpp_codegen_multiply((float)L_21, (float)(57.2957802f)));
		// if (angle > 180) angle -= 360;
		float L_22 = V_3;
		if ((!(((float)L_22) > ((float)(180.0f)))))
		{
			goto IL_0087;
		}
	}
	{
		// if (angle > 180) angle -= 360;
		float L_23 = V_3;
		V_3 = ((float)il2cpp_codegen_subtract((float)L_23, (float)(360.0f)));
	}

IL_0087:
	{
		// rotation.eulerAngles = new Vector3 (-angle, 90, 0); // use different values to lock on different axis
		RotateToMouseScript_t484F9391662B1A307753F7AE65E5DC8BDB6764E9 * L_24 = V_1;
		NullCheck(L_24);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * L_25 = L_24->get_address_of_rotation_9();
		float L_26 = V_3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
		memset((&L_27), 0, sizeof(L_27));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_27), ((-L_26)), (90.0f), (0.0f), /*hidden argument*/NULL);
		Quaternion_set_eulerAngles_m8EC47544D5D909682498552C6A13BD0B13EA9277((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)L_25, L_27, /*hidden argument*/NULL);
		// transform.rotation = rotation;
		RotateToMouseScript_t484F9391662B1A307753F7AE65E5DC8BDB6764E9 * L_28 = V_1;
		NullCheck(L_28);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_29;
		L_29 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_28, /*hidden argument*/NULL);
		RotateToMouseScript_t484F9391662B1A307753F7AE65E5DC8BDB6764E9 * L_30 = V_1;
		NullCheck(L_30);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_31 = L_30->get_rotation_9();
		NullCheck(L_29);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_29, L_31, /*hidden argument*/NULL);
		// } else {
		goto IL_012b;
	}

IL_00b6:
	{
		// var mousePos = Input.mousePosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32;
		L_32 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		V_5 = L_32;
		// rayMouse = cam.ScreenPointToRay (mousePos);
		RotateToMouseScript_t484F9391662B1A307753F7AE65E5DC8BDB6764E9 * L_33 = V_1;
		RotateToMouseScript_t484F9391662B1A307753F7AE65E5DC8BDB6764E9 * L_34 = V_1;
		NullCheck(L_34);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_35 = L_34->get_cam_10();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36 = V_5;
		NullCheck(L_35);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_37;
		L_37 = Camera_ScreenPointToRay_mD385213935A81030EDC604A39FD64761077CFBAB(L_35, L_36, /*hidden argument*/NULL);
		NullCheck(L_33);
		L_33->set_rayMouse_6(L_37);
		// if (Physics.Raycast (rayMouse.origin, rayMouse.direction, out hit, maximumLenght)) {
		RotateToMouseScript_t484F9391662B1A307753F7AE65E5DC8BDB6764E9 * L_38 = V_1;
		NullCheck(L_38);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * L_39 = L_38->get_address_of_rayMouse_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_40;
		L_40 = Ray_get_origin_m0C1B2BFF99CDF5231AC29AC031C161F55B53C1D0((Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 *)L_39, /*hidden argument*/NULL);
		RotateToMouseScript_t484F9391662B1A307753F7AE65E5DC8BDB6764E9 * L_41 = V_1;
		NullCheck(L_41);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * L_42 = L_41->get_address_of_rayMouse_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_43;
		L_43 = Ray_get_direction_m2B31F86F19B64474A901B28D3808011AE7A13EFC((Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 *)L_42, /*hidden argument*/NULL);
		RotateToMouseScript_t484F9391662B1A307753F7AE65E5DC8BDB6764E9 * L_44 = V_1;
		NullCheck(L_44);
		float L_45 = L_44->get_maximumLenght_4();
		bool L_46;
		L_46 = Physics_Raycast_m18E12C65F127D1AA50D196623F04F81CB138FD12(L_40, L_43, (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_4), L_45, /*hidden argument*/NULL);
		if (!L_46)
		{
			goto IL_010a;
		}
	}
	{
		// RotateToMouse (gameObject, hit.point);
		RotateToMouseScript_t484F9391662B1A307753F7AE65E5DC8BDB6764E9 * L_47 = V_1;
		RotateToMouseScript_t484F9391662B1A307753F7AE65E5DC8BDB6764E9 * L_48 = V_1;
		NullCheck(L_48);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_49;
		L_49 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_48, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_50;
		L_50 = RaycastHit_get_point_m32F7282CBB2E13393A33BAD046BDA218E48DD21E((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_4), /*hidden argument*/NULL);
		NullCheck(L_47);
		RotateToMouseScript_RotateToMouse_m070898E14C467EAD236938E2D615F0C7A6B2BCAF(L_47, L_49, L_50, /*hidden argument*/NULL);
		// } else {
		goto IL_012b;
	}

IL_010a:
	{
		// var pos = rayMouse.GetPoint (maximumLenght);
		RotateToMouseScript_t484F9391662B1A307753F7AE65E5DC8BDB6764E9 * L_51 = V_1;
		NullCheck(L_51);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * L_52 = L_51->get_address_of_rayMouse_6();
		RotateToMouseScript_t484F9391662B1A307753F7AE65E5DC8BDB6764E9 * L_53 = V_1;
		NullCheck(L_53);
		float L_54 = L_53->get_maximumLenght_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_55;
		L_55 = Ray_GetPoint_mC92464E32E42603B7B3444938E8BB8ADA43AB240((Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 *)L_52, L_54, /*hidden argument*/NULL);
		V_6 = L_55;
		// RotateToMouse (gameObject, pos);
		RotateToMouseScript_t484F9391662B1A307753F7AE65E5DC8BDB6764E9 * L_56 = V_1;
		RotateToMouseScript_t484F9391662B1A307753F7AE65E5DC8BDB6764E9 * L_57 = V_1;
		NullCheck(L_57);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_58;
		L_58 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_57, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_59 = V_6;
		NullCheck(L_56);
		RotateToMouseScript_RotateToMouse_m070898E14C467EAD236938E2D615F0C7A6B2BCAF(L_56, L_58, L_59, /*hidden argument*/NULL);
	}

IL_012b:
	{
		// yield return updateTime;
		RotateToMouseScript_t484F9391662B1A307753F7AE65E5DC8BDB6764E9 * L_60 = V_1;
		NullCheck(L_60);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_61 = L_60->get_updateTime_11();
		__this->set_U3CU3E2__current_1(L_61);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0140:
	{
		__this->set_U3CU3E1__state_0((-1));
		// StartCoroutine (UpdateRay ());
		RotateToMouseScript_t484F9391662B1A307753F7AE65E5DC8BDB6764E9 * L_62 = V_1;
		RotateToMouseScript_t484F9391662B1A307753F7AE65E5DC8BDB6764E9 * L_63 = V_1;
		NullCheck(L_63);
		RuntimeObject* L_64;
		L_64 = RotateToMouseScript_UpdateRay_m189BAF74F72D7118405984C537604D8BE919F383(L_63, /*hidden argument*/NULL);
		NullCheck(L_62);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_65;
		L_65 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(L_62, L_64, /*hidden argument*/NULL);
		// } else
		goto IL_0160;
	}

IL_0156:
	{
		// Debug.Log ("Camera not set");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral98D1B162005C82A6351012D2FEBB8ABBEADFB458, /*hidden argument*/NULL);
	}

IL_0160:
	{
		// }
		return (bool)0;
	}
}
// System.Object RotateToMouseScript/<UpdateRay>d__9::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CUpdateRayU3Ed__9_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m0DC77B6D548F360FF981E72C8AB1930A2E066091 (U3CUpdateRayU3Ed__9_tAF42C0C52B4ACFDCDC70E2B1A1F726AA6756614C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void RotateToMouseScript/<UpdateRay>d__9::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateRayU3Ed__9_System_Collections_IEnumerator_Reset_m25D63F3001C98BE581B5B039926E0EAF8B406774 (U3CUpdateRayU3Ed__9_tAF42C0C52B4ACFDCDC70E2B1A1F726AA6756614C * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CUpdateRayU3Ed__9_System_Collections_IEnumerator_Reset_m25D63F3001C98BE581B5B039926E0EAF8B406774_RuntimeMethod_var)));
	}
}
// System.Object RotateToMouseScript/<UpdateRay>d__9::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CUpdateRayU3Ed__9_System_Collections_IEnumerator_get_Current_mDA0F9789BA24799B4B1A8BE256F36C6C4BCA517B (U3CUpdateRayU3Ed__9_tAF42C0C52B4ACFDCDC70E2B1A1F726AA6756614C * __this, const RuntimeMethod* method)
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
// System.Void attack/<Shake>d__38::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShakeU3Ed__38__ctor_mB71332B5D07BA0F9ECC7F8EF47E9A7195238FFE2 (U3CShakeU3Ed__38_t4E7C35392CD4D28A64E7CB425C9C546FDA8F51FC * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void attack/<Shake>d__38::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShakeU3Ed__38_System_IDisposable_Dispose_mF73DE3CBFCF13F23FFB46A6A6AB116B379992A8C (U3CShakeU3Ed__38_t4E7C35392CD4D28A64E7CB425C9C546FDA8F51FC * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean attack/<Shake>d__38::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CShakeU3Ed__38_MoveNext_m9EA91461167C1C78A005743A5F54D9C3AC0B2C6F (U3CShakeU3Ed__38_t4E7C35392CD4D28A64E7CB425C9C546FDA8F51FC * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_00c8;
		}
	}
	{
		return (bool)0;
	}

IL_0013:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Vector3 originalPos = Camera.main.transform.localPosition;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_3;
		L_3 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_4, /*hidden argument*/NULL);
		__this->set_U3CoriginalPosU3E5__2_4(L_5);
		// float elapsed = 0.0f;
		__this->set_U3CelapsedU3E5__3_5((0.0f));
		goto IL_00cf;
	}

IL_003f:
	{
		// float x = Random.Range(-.1f, .1f) * magnitude;
		float L_6;
		L_6 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((-0.100000001f), (0.100000001f), /*hidden argument*/NULL);
		float L_7 = __this->get_magnitude_2();
		V_1 = ((float)il2cpp_codegen_multiply((float)L_6, (float)L_7));
		// float y = Random.Range(-.1f, .1f) * magnitude;
		float L_8;
		L_8 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((-0.100000001f), (0.100000001f), /*hidden argument*/NULL);
		float L_9 = __this->get_magnitude_2();
		V_2 = ((float)il2cpp_codegen_multiply((float)L_8, (float)L_9));
		// float z = Random.Range(-.1f, .1f) * magnitude;
		float L_10;
		L_10 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((-0.100000001f), (0.100000001f), /*hidden argument*/NULL);
		float L_11 = __this->get_magnitude_2();
		V_3 = ((float)il2cpp_codegen_multiply((float)L_10, (float)L_11));
		// Camera.main.transform.localPosition = originalPos + new Vector3(x, y, z);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_12;
		L_12 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		NullCheck(L_12);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_12, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = __this->get_U3CoriginalPosU3E5__2_4();
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_18), L_15, L_16, L_17, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_14, L_18, /*hidden argument*/NULL);
		NullCheck(L_13);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_13, L_19, /*hidden argument*/NULL);
		// elapsed += Time.deltaTime;
		float L_20 = __this->get_U3CelapsedU3E5__3_5();
		float L_21;
		L_21 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_U3CelapsedU3E5__3_5(((float)il2cpp_codegen_add((float)L_20, (float)L_21)));
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00c8:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_00cf:
	{
		// while (elapsed < duration)
		float L_22 = __this->get_U3CelapsedU3E5__3_5();
		float L_23 = __this->get_duration_3();
		if ((((float)L_22) < ((float)L_23)))
		{
			goto IL_003f;
		}
	}
	{
		// Camera.main.transform.localPosition = originalPos;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_24;
		L_24 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		NullCheck(L_24);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25;
		L_25 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_24, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26 = __this->get_U3CoriginalPosU3E5__2_4();
		NullCheck(L_25);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_25, L_26, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object attack/<Shake>d__38::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CShakeU3Ed__38_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m11939C58F7ABCCA6A7D58B29BE38E965DEE18A5E (U3CShakeU3Ed__38_t4E7C35392CD4D28A64E7CB425C9C546FDA8F51FC * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void attack/<Shake>d__38::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShakeU3Ed__38_System_Collections_IEnumerator_Reset_m6CE4EB7654293DC8FB13F52D4425B4D8D6D9183F (U3CShakeU3Ed__38_t4E7C35392CD4D28A64E7CB425C9C546FDA8F51FC * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CShakeU3Ed__38_System_Collections_IEnumerator_Reset_m6CE4EB7654293DC8FB13F52D4425B4D8D6D9183F_RuntimeMethod_var)));
	}
}
// System.Object attack/<Shake>d__38::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CShakeU3Ed__38_System_Collections_IEnumerator_get_Current_mE1AB340653378055C60245703AC37C64453516B3 (U3CShakeU3Ed__38_t4E7C35392CD4D28A64E7CB425C9C546FDA8F51FC * __this, const RuntimeMethod* method)
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
// System.Void cameraShaker/<Shake>d__0::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShakeU3Ed__0__ctor_m90531A490514EB236D09DAC7B3849112760C5426 (U3CShakeU3Ed__0_t56ABF31C41CA87AFA3AC45DD82CF6F23D6F283A7 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void cameraShaker/<Shake>d__0::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShakeU3Ed__0_System_IDisposable_Dispose_mB7935B4F81BDB935FB89DFD591F8D4DC6C888893 (U3CShakeU3Ed__0_t56ABF31C41CA87AFA3AC45DD82CF6F23D6F283A7 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean cameraShaker/<Shake>d__0::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CShakeU3Ed__0_MoveNext_m7AFDA19A69278FB7010B6EFBC4F4A763A4A0A747 (U3CShakeU3Ed__0_t56ABF31C41CA87AFA3AC45DD82CF6F23D6F283A7 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	cameraShaker_t9CE5FEB9CB9D54949F9CA55EBB612EDA135EDF32 * V_1 = NULL;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		cameraShaker_t9CE5FEB9CB9D54949F9CA55EBB612EDA135EDF32 * L_1 = __this->get_U3CU3E4__this_2();
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
			goto IL_00ac;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Vector3 originalPos = transform.localPosition;
		cameraShaker_t9CE5FEB9CB9D54949F9CA55EBB612EDA135EDF32 * L_4 = V_1;
		NullCheck(L_4);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_5, /*hidden argument*/NULL);
		__this->set_U3CoriginalPosU3E5__2_5(L_6);
		// float elapsed = 0.0f;
		__this->set_U3CelapsedU3E5__3_6((0.0f));
		goto IL_00b3;
	}

IL_003f:
	{
		// float x = Random.Range(-1f, 1f) * magnitude;
		float L_7;
		L_7 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((-1.0f), (1.0f), /*hidden argument*/NULL);
		float L_8 = __this->get_magnitude_3();
		V_2 = ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8));
		// float y = Random.Range(-1f, 1f) * magnitude;
		float L_9;
		L_9 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((-1.0f), (1.0f), /*hidden argument*/NULL);
		float L_10 = __this->get_magnitude_3();
		V_3 = ((float)il2cpp_codegen_multiply((float)L_9, (float)L_10));
		// transform.localPosition = new Vector3(x, y, originalPos.z);
		cameraShaker_t9CE5FEB9CB9D54949F9CA55EBB612EDA135EDF32 * L_11 = V_1;
		NullCheck(L_11);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_11, /*hidden argument*/NULL);
		float L_13 = V_2;
		float L_14 = V_3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_15 = __this->get_address_of_U3CoriginalPosU3E5__2_5();
		float L_16 = L_15->get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_17), L_13, L_14, L_16, /*hidden argument*/NULL);
		NullCheck(L_12);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_12, L_17, /*hidden argument*/NULL);
		// elapsed += Time.deltaTime;
		float L_18 = __this->get_U3CelapsedU3E5__3_6();
		float L_19;
		L_19 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_U3CelapsedU3E5__3_6(((float)il2cpp_codegen_add((float)L_18, (float)L_19)));
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00ac:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_00b3:
	{
		// while(elapsed < duration)
		float L_20 = __this->get_U3CelapsedU3E5__3_6();
		float L_21 = __this->get_duration_4();
		if ((((float)L_20) < ((float)L_21)))
		{
			goto IL_003f;
		}
	}
	{
		// transform.localPosition = originalPos;
		cameraShaker_t9CE5FEB9CB9D54949F9CA55EBB612EDA135EDF32 * L_22 = V_1;
		NullCheck(L_22);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_23;
		L_23 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_22, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = __this->get_U3CoriginalPosU3E5__2_5();
		NullCheck(L_23);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_23, L_24, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object cameraShaker/<Shake>d__0::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CShakeU3Ed__0_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m6CACACAD01CEEC44F6773E19EABABDF9AE09128D (U3CShakeU3Ed__0_t56ABF31C41CA87AFA3AC45DD82CF6F23D6F283A7 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void cameraShaker/<Shake>d__0::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShakeU3Ed__0_System_Collections_IEnumerator_Reset_m2F5C429A30F92CCDBECF253EC0C39158763E49E4 (U3CShakeU3Ed__0_t56ABF31C41CA87AFA3AC45DD82CF6F23D6F283A7 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CShakeU3Ed__0_System_Collections_IEnumerator_Reset_m2F5C429A30F92CCDBECF253EC0C39158763E49E4_RuntimeMethod_var)));
	}
}
// System.Object cameraShaker/<Shake>d__0::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CShakeU3Ed__0_System_Collections_IEnumerator_get_Current_mC30D6C884AB59E754395F913D9356C06B9C722E6 (U3CShakeU3Ed__0_t56ABF31C41CA87AFA3AC45DD82CF6F23D6F283A7 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool HealthController_IsDead_mE7D0AA18C03226E2D5371D73C67C9F7CF86995D6_inline (HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 * __this, const RuntimeMethod* method)
{
	{
		// return die;
		bool L_0 = __this->get_die_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HealthController_GetHealthCurrent_m0A98300D4D5C8BDEE92DC8D4D66C409CA4F4B9D7_inline (HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 * __this, const RuntimeMethod* method)
{
	{
		// return healthCurrent;
		int32_t L_0 = __this->get_healthCurrent_1();
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
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
