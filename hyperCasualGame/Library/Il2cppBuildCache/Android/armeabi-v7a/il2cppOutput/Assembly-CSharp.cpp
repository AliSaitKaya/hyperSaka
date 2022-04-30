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
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct VirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};

// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t34AA4AF4E7352129CA58045901530E41445AC16D;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t815A476B0A21E183042059E705F9E505478CD8AE;
// System.Collections.Generic.List`1<CameraHolder/SVA>
struct List_1_tD40AE6D7A6AB19BD1993F05D20B4AB5EC723E6F9;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
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
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// UnityEngine.UI.Text[]
struct TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// CameraHolder/SVA[]
struct SVAU5BU5D_t91B041CB8F6D15D10C4FDF864146CEA041F286A4;
// AiCanAttackCircle
struct AiCanAttackCircle_t57AE50A882353B23FA5A30DF81FBEE01909E19B6;
// AnimationController
struct AnimationController_t8EE5B6538AC1173041A0CCFDBC4B61897DA03B67;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11;
// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// CameraHolder
struct CameraHolder_tA0DB3BD91D8E35159E794BEE6A382FE2B9188A10;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// DamageCircle
struct DamageCircle_tB70A539EB31C5490ADB1DFA14B86E5E6953EF876;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// DynamicJoystick
struct DynamicJoystick_t675DA15D6A912CB9638176139FD810B7B051E867;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C;
// FixedJoystick
struct FixedJoystick_tDB74F76D3F9FBD9C43F508B2F306958915E6F5B2;
// FloatingJoystick
struct FloatingJoystick_tC4079BB6845C914906FF088E283633AFA9C93607;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// GameMain
struct GameMain_t1257BA6D1B7168D049E99EB3B80136749D29CAA6;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.Gradient
struct Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// HealthController
struct HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7;
// HealthSystem
struct HealthSystem_t534958B833E6A966FF53C62231D4C34A751947D8;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9;
// Joystick
struct Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873;
// JoystickPlayerExample
struct JoystickPlayerExample_t07673CB1C6FF2F83E4464AA7D01DE72B5DA8922B;
// JoystickSetterExample
struct JoystickSetterExample_tCCF610BB8D883F911E3868499E334A258844B73F;
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
// UnityEngine.AI.NavMeshAgent
struct NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.ParticleSystem
struct ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.Rigidbody
struct Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A;
// Rotator
struct Rotator_t0B568907CEDD93A471CDE3AC3640E1770EF170A6;
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
// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4;
// VariableJoystick
struct VariableJoystick_tEA2A86D8EE903904A4F3D9FA53B8F4B065A9EB9B;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// ai
struct ai_t05DCF615948AD04F90BBCFF646B8389E83581B71;
// attack
struct attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C;
// cameraShaker
struct cameraShaker_t9CE5FEB9CB9D54949F9CA55EBB612EDA135EDF32;
// enemyHealthSystem
struct enemyHealthSystem_tD9957A42AEA49305BD2A45987B6A98EB509800A8;
// enemyHealthSystem1
struct enemyHealthSystem1_t9D32045CB414C7BF3B895294B1044F2D9FFA0029;
// enemyPathMovement
struct enemyPathMovement_t2A082E51F0F47B4E09CD70F138BEF58C105BD216;
// lookAtCam
struct lookAtCam_t64131884DEED4BA8406F72036C9D4F5B245BA14C;
// move
struct move_tF5C934E0EAF4295D46D7DAA6C508AFAB1B699276;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780;
// attack/<Shake>d__31
struct U3CShakeU3Ed__31_tBAA002366DCAAB6F476A4FFBA668E6574340243D;
// cameraShaker/<Shake>d__0
struct U3CShakeU3Ed__0_t56ABF31C41CA87AFA3AC45DD82CF6F23D6F283A7;

IL2CPP_EXTERN_C RuntimeClass* AiCanAttackCircle_t57AE50A882353B23FA5A30DF81FBEE01909E19B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DamageCircle_tB70A539EB31C5490ADB1DFA14B86E5E6953EF876_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HealthSystem_t534958B833E6A966FF53C62231D4C34A751947D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tD40AE6D7A6AB19BD1993F05D20B4AB5EC723E6F9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectTransformUtility_t829C94C0D38759683C2BED9FCE244D5EA9842396_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CShakeU3Ed__0_t56ABF31C41CA87AFA3AC45DD82CF6F23D6F283A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CShakeU3Ed__31_tBAA002366DCAAB6F476A4FFBA668E6574340243D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* enemyPathMovement_t2A082E51F0F47B4E09CD70F138BEF58C105BD216_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* move_tF5C934E0EAF4295D46D7DAA6C508AFAB1B699276_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0A2750E5B8E57EE3FBDD87D9399164909FF096B1;
IL2CPP_EXTERN_C String_t* _stringLiteral0DFA9AA29082727751167EB3C54FCAD0F9EDC665;
IL2CPP_EXTERN_C String_t* _stringLiteral1387CA5E3672B0B088B1C7438E3CB9614FEF2011;
IL2CPP_EXTERN_C String_t* _stringLiteral163645A82FC30F1504D822E5D958F72D799EBFF7;
IL2CPP_EXTERN_C String_t* _stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0;
IL2CPP_EXTERN_C String_t* _stringLiteral1A164A021450B2AB8421A7487A4B69493CD43DBB;
IL2CPP_EXTERN_C String_t* _stringLiteral2103E02F663B34B7C8054990E279FB3420E835DF;
IL2CPP_EXTERN_C String_t* _stringLiteral22892F8CC79C6CDCC3A35033A7FEDB069D75D297;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral255BCC1A53692949FCC4A1A4B72B5983FC77E2DA;
IL2CPP_EXTERN_C String_t* _stringLiteral2619A50D640D12F7EAED94CD5A39DFCD03B99E2A;
IL2CPP_EXTERN_C String_t* _stringLiteral341872AF21C32D6A74449BC426100C98602C2E63;
IL2CPP_EXTERN_C String_t* _stringLiteral38809CA117CCA33BA8933F3362EBEC78BF6A8E1F;
IL2CPP_EXTERN_C String_t* _stringLiteral3C95DC36BC35028D124872E120F7701E290A66F6;
IL2CPP_EXTERN_C String_t* _stringLiteral3FD8F8AC6AC464169FFBE67A817A867D6B67538B;
IL2CPP_EXTERN_C String_t* _stringLiteral4296EB386A58202EDFBE523C04BCA31DC7A0BE2F;
IL2CPP_EXTERN_C String_t* _stringLiteral495E264280E5C14253E511400B9ADE0D2C40FE9A;
IL2CPP_EXTERN_C String_t* _stringLiteral5BEF220375834A6164542D235CF7C29F3404EFC6;
IL2CPP_EXTERN_C String_t* _stringLiteral65A5AB28932A11AF332680CE7BFB56F9598E7571;
IL2CPP_EXTERN_C String_t* _stringLiteral74EBEC30E667023205227F3CDD7B95BAC4BB8344;
IL2CPP_EXTERN_C String_t* _stringLiteral77FA92AA52090642F17B6CD85CBD6A0480B62309;
IL2CPP_EXTERN_C String_t* _stringLiteral832AC43642A57DC400138A9C4D6B0D7C63AE528E;
IL2CPP_EXTERN_C String_t* _stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2;
IL2CPP_EXTERN_C String_t* _stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7;
IL2CPP_EXTERN_C String_t* _stringLiteral9CCAD0804681D389662AE4D59666F2C220293CCE;
IL2CPP_EXTERN_C String_t* _stringLiteral9F24FB9F6B79BD601755A6710686857F7B86347B;
IL2CPP_EXTERN_C String_t* _stringLiteral9FBF31E575806B916FC0F7315D0359EC2699DCC2;
IL2CPP_EXTERN_C String_t* _stringLiteralA11BC0AB16491B5DAEE99EAA33CF52FE6BC826E3;
IL2CPP_EXTERN_C String_t* _stringLiteralA50160048687C05C4A6257A7E3773F0E2F8B6A26;
IL2CPP_EXTERN_C String_t* _stringLiteralAC6541F6BB318820350428597DC551D4F772C7C5;
IL2CPP_EXTERN_C String_t* _stringLiteralAF120D3ACD2B78C190ECC5D0D6CFA5211E11785C;
IL2CPP_EXTERN_C String_t* _stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE547DCFAE57EBF4EF674D47C429C6D24AA8E0A60;
IL2CPP_EXTERN_C String_t* _stringLiteralF3AF3FBC14A12B1EDB016F449A57F0090BF81D2A;
IL2CPP_EXTERN_C String_t* _stringLiteralFC0F1FE2DF85BDF608A021C026FA6E7DCF8B1CA5;
IL2CPP_EXTERN_C String_t* _stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0;
IL2CPP_EXTERN_C String_t* _stringLiteralFDA32DC2E96C00474CE484C62A98501A5FB8786E;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_mA69550F4BF195DDCCCBC2BB18AFC20D10B68DB78_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisSlider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A_mECB3B5A216AD4AAA7331E7F6731886264840D054_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_m79D616348A09F5E2973F405F4F9D944744FAD6A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisNavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B_m15077FF184192C84FCF6B2A1FC8ECF53C9220F2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m75CC9D1656BD67C760E6D5EA89403C89B728E8F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m7556907CF90B895FDFBEC11100A5F7AD5FAF1AA6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentsInChildren_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m5D162A911D8F5C1BAB92301936B1551BBA72BFF6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mA1AFE8F34DCB403F8053BD652DB42122C24271E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mC351223374416E4FB2D7FA59D7C2756212037C2C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCC0ACDFD7714C349891385D6AB31543DD9E72961_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m1AC3B723705A37FCA21B472D010674EA850933B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisJoystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873_m7209E3C1CAB57BED00FB7BEF8EEF44EBADFD5C7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CShakeU3Ed__0_System_Collections_IEnumerator_Reset_m2F5C429A30F92CCDBECF253EC0C39158763E49E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CShakeU3Ed__31_System_Collections_IEnumerator_Reset_mB43F4EB9BA46E3306C87EE51102DB0532A64B4D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* attack_Attack_m823084A7450D21C8D31F17596E980DBE08A2BC68_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* attack_fireAttackSelect_mBC35489D6ECB95A5CA6FF686220C89E152DEEB14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* attack_lightningAttackSelect_m56E141B947223BA517897DACA8714152A8DA3603_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* attack_waterAttackSelect_m6D27D566747B0B77457DFF440DDE2B909232CA49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
struct ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7;
struct SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77;
struct TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F;
struct SVAU5BU5D_t91B041CB8F6D15D10C4FDF864146CEA041F286A4;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// System.Collections.Generic.List`1<CameraHolder/SVA>
struct List_1_tD40AE6D7A6AB19BD1993F05D20B4AB5EC723E6F9  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	SVAU5BU5D_t91B041CB8F6D15D10C4FDF864146CEA041F286A4* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tD40AE6D7A6AB19BD1993F05D20B4AB5EC723E6F9, ____items_1)); }
	inline SVAU5BU5D_t91B041CB8F6D15D10C4FDF864146CEA041F286A4* get__items_1() const { return ____items_1; }
	inline SVAU5BU5D_t91B041CB8F6D15D10C4FDF864146CEA041F286A4** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(SVAU5BU5D_t91B041CB8F6D15D10C4FDF864146CEA041F286A4* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tD40AE6D7A6AB19BD1993F05D20B4AB5EC723E6F9, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tD40AE6D7A6AB19BD1993F05D20B4AB5EC723E6F9, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tD40AE6D7A6AB19BD1993F05D20B4AB5EC723E6F9, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tD40AE6D7A6AB19BD1993F05D20B4AB5EC723E6F9_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	SVAU5BU5D_t91B041CB8F6D15D10C4FDF864146CEA041F286A4* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tD40AE6D7A6AB19BD1993F05D20B4AB5EC723E6F9_StaticFields, ____emptyArray_5)); }
	inline SVAU5BU5D_t91B041CB8F6D15D10C4FDF864146CEA041F286A4* get__emptyArray_5() const { return ____emptyArray_5; }
	inline SVAU5BU5D_t91B041CB8F6D15D10C4FDF864146CEA041F286A4** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(SVAU5BU5D_t91B041CB8F6D15D10C4FDF864146CEA041F286A4* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;

public:
	inline static int32_t get_offset_of_m_Used_0() { return static_cast<int32_t>(offsetof(AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF, ___m_Used_0)); }
	inline bool get_m_Used_0() const { return ___m_Used_0; }
	inline bool* get_address_of_m_Used_0() { return &___m_Used_0; }
	inline void set_m_Used_0(bool value)
	{
		___m_Used_0 = value;
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

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E  : public AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E, ___m_EventSystem_1)); }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystem_1), (void*)value);
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


// UnityEngine.Rect
struct Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
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

// UnityEngine.CursorLockMode
struct CursorLockMode_t247B41EE9632E4AD759EDADDB351AE0075162D04 
{
public:
	// System.Int32 UnityEngine.CursorLockMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CursorLockMode_t247B41EE9632E4AD759EDADDB351AE0075162D04, ___value___2)); }
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

// UnityEngine.ForceMode
struct ForceMode_t7778317A4C46140D50D98811D65A7B22E38163D5 
{
public:
	// System.Int32 UnityEngine.ForceMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ForceMode_t7778317A4C46140D50D98811D65A7B22E38163D5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// JoystickType
struct JoystickType_tECFD3828A2B1A2D40861C9426AD88888B2C028F9 
{
public:
	// System.Int32 JoystickType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(JoystickType_tECFD3828A2B1A2D40861C9426AD88888B2C028F9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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

// UnityEngine.ParticleSystemGradientMode
struct ParticleSystemGradientMode_tCF15644F35B8D166D1A9C073E758D24794895497 
{
public:
	// System.Int32 UnityEngine.ParticleSystemGradientMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ParticleSystemGradientMode_tCF15644F35B8D166D1A9C073E758D24794895497, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE 
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;

public:
	inline static int32_t get_offset_of_m_GameObject_0() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___m_GameObject_0)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_GameObject_0() const { return ___m_GameObject_0; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_GameObject_0() { return &___m_GameObject_0; }
	inline void set_m_GameObject_0(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_GameObject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GameObject_0), (void*)value);
	}

	inline static int32_t get_offset_of_module_1() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___module_1)); }
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * get_module_1() const { return ___module_1; }
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 ** get_address_of_module_1() { return &___module_1; }
	inline void set_module_1(BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * value)
	{
		___module_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___module_1), (void*)value);
	}

	inline static int32_t get_offset_of_distance_2() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___distance_2)); }
	inline float get_distance_2() const { return ___distance_2; }
	inline float* get_address_of_distance_2() { return &___distance_2; }
	inline void set_distance_2(float value)
	{
		___distance_2 = value;
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___index_3)); }
	inline float get_index_3() const { return ___index_3; }
	inline float* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(float value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_depth_4() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___depth_4)); }
	inline int32_t get_depth_4() const { return ___depth_4; }
	inline int32_t* get_address_of_depth_4() { return &___depth_4; }
	inline void set_depth_4(int32_t value)
	{
		___depth_4 = value;
	}

	inline static int32_t get_offset_of_sortingLayer_5() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___sortingLayer_5)); }
	inline int32_t get_sortingLayer_5() const { return ___sortingLayer_5; }
	inline int32_t* get_address_of_sortingLayer_5() { return &___sortingLayer_5; }
	inline void set_sortingLayer_5(int32_t value)
	{
		___sortingLayer_5 = value;
	}

	inline static int32_t get_offset_of_sortingOrder_6() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___sortingOrder_6)); }
	inline int32_t get_sortingOrder_6() const { return ___sortingOrder_6; }
	inline int32_t* get_address_of_sortingOrder_6() { return &___sortingOrder_6; }
	inline void set_sortingOrder_6(int32_t value)
	{
		___sortingOrder_6 = value;
	}

	inline static int32_t get_offset_of_worldPosition_7() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___worldPosition_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_worldPosition_7() const { return ___worldPosition_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_worldPosition_7() { return &___worldPosition_7; }
	inline void set_worldPosition_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___worldPosition_7 = value;
	}

	inline static int32_t get_offset_of_worldNormal_8() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___worldNormal_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_worldNormal_8() const { return ___worldNormal_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_worldNormal_8() { return &___worldNormal_8; }
	inline void set_worldNormal_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___worldNormal_8 = value;
	}

	inline static int32_t get_offset_of_screenPosition_9() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___screenPosition_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_screenPosition_9() const { return ___screenPosition_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_screenPosition_9() { return &___screenPosition_9; }
	inline void set_screenPosition_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___screenPosition_9 = value;
	}

	inline static int32_t get_offset_of_displayIndex_10() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___displayIndex_10)); }
	inline int32_t get_displayIndex_10() const { return ___displayIndex_10; }
	inline int32_t* get_address_of_displayIndex_10() { return &___displayIndex_10; }
	inline void set_displayIndex_10(int32_t value)
	{
		___displayIndex_10 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshaled_pinvoke
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshaled_com
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// UnityEngine.RenderMode
struct RenderMode_tFF8E9ABC771ACEBD5ACC2D9DFB02264E0EA6CDBF 
{
public:
	// System.Int32 UnityEngine.RenderMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderMode_tFF8E9ABC771ACEBD5ACC2D9DFB02264E0EA6CDBF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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


// UnityEngine.ScaleMode
struct ScaleMode_t2D41D186D047D8156791981072D8E7F8759ABB49 
{
public:
	// System.Int32 UnityEngine.ScaleMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ScaleMode_t2D41D186D047D8156791981072D8E7F8759ABB49, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F  : public UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4
{
public:

public:
};


// UnityEngine.UI.Image/FillMethod
struct FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2 
{
public:
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/Type
struct Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12 
{
public:
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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


// UnityEngine.EventSystems.PointerEventData/InputButton
struct InputButton_tA5409FE587ADC841D2BF80835D04074A89C59A9D 
{
public:
	// System.Int32 UnityEngine.EventSystems.PointerEventData/InputButton::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputButton_tA5409FE587ADC841D2BF80835D04074A89C59A9D, ___value___2)); }
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


// attack/<Shake>d__31
struct U3CShakeU3Ed__31_tBAA002366DCAAB6F476A4FFBA668E6574340243D  : public RuntimeObject
{
public:
	// System.Int32 attack/<Shake>d__31::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object attack/<Shake>d__31::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Single attack/<Shake>d__31::magnitude
	float ___magnitude_2;
	// System.Single attack/<Shake>d__31::duration
	float ___duration_3;
	// UnityEngine.Vector3 attack/<Shake>d__31::<originalPos>5__2
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CoriginalPosU3E5__2_4;
	// System.Single attack/<Shake>d__31::<elapsed>5__3
	float ___U3CelapsedU3E5__3_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CShakeU3Ed__31_tBAA002366DCAAB6F476A4FFBA668E6574340243D, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CShakeU3Ed__31_tBAA002366DCAAB6F476A4FFBA668E6574340243D, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_magnitude_2() { return static_cast<int32_t>(offsetof(U3CShakeU3Ed__31_tBAA002366DCAAB6F476A4FFBA668E6574340243D, ___magnitude_2)); }
	inline float get_magnitude_2() const { return ___magnitude_2; }
	inline float* get_address_of_magnitude_2() { return &___magnitude_2; }
	inline void set_magnitude_2(float value)
	{
		___magnitude_2 = value;
	}

	inline static int32_t get_offset_of_duration_3() { return static_cast<int32_t>(offsetof(U3CShakeU3Ed__31_tBAA002366DCAAB6F476A4FFBA668E6574340243D, ___duration_3)); }
	inline float get_duration_3() const { return ___duration_3; }
	inline float* get_address_of_duration_3() { return &___duration_3; }
	inline void set_duration_3(float value)
	{
		___duration_3 = value;
	}

	inline static int32_t get_offset_of_U3CoriginalPosU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CShakeU3Ed__31_tBAA002366DCAAB6F476A4FFBA668E6574340243D, ___U3CoriginalPosU3E5__2_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CoriginalPosU3E5__2_4() const { return ___U3CoriginalPosU3E5__2_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CoriginalPosU3E5__2_4() { return &___U3CoriginalPosU3E5__2_4; }
	inline void set_U3CoriginalPosU3E5__2_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CoriginalPosU3E5__2_4 = value;
	}

	inline static int32_t get_offset_of_U3CelapsedU3E5__3_5() { return static_cast<int32_t>(offsetof(U3CShakeU3Ed__31_tBAA002366DCAAB6F476A4FFBA668E6574340243D, ___U3CelapsedU3E5__3_5)); }
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

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954  : public BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;

public:
	inline static int32_t get_offset_of_U3CpointerEnterU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerEnterU3Ek__BackingField_2)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerEnterU3Ek__BackingField_2() const { return ___U3CpointerEnterU3Ek__BackingField_2; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerEnterU3Ek__BackingField_2() { return &___U3CpointerEnterU3Ek__BackingField_2; }
	inline void set_U3CpointerEnterU3Ek__BackingField_2(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerEnterU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerEnterU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_PointerPress_3() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___m_PointerPress_3)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_PointerPress_3() const { return ___m_PointerPress_3; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_PointerPress_3() { return &___m_PointerPress_3; }
	inline void set_m_PointerPress_3(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_PointerPress_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PointerPress_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3ClastPressU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3ClastPressU3Ek__BackingField_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3ClastPressU3Ek__BackingField_4() const { return ___U3ClastPressU3Ek__BackingField_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3ClastPressU3Ek__BackingField_4() { return &___U3ClastPressU3Ek__BackingField_4; }
	inline void set_U3ClastPressU3Ek__BackingField_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3ClastPressU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ClastPressU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrawPointerPressU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CrawPointerPressU3Ek__BackingField_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CrawPointerPressU3Ek__BackingField_5() const { return ___U3CrawPointerPressU3Ek__BackingField_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CrawPointerPressU3Ek__BackingField_5() { return &___U3CrawPointerPressU3Ek__BackingField_5; }
	inline void set_U3CrawPointerPressU3Ek__BackingField_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CrawPointerPressU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrawPointerPressU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerDragU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerDragU3Ek__BackingField_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerDragU3Ek__BackingField_6() const { return ___U3CpointerDragU3Ek__BackingField_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerDragU3Ek__BackingField_6() { return &___U3CpointerDragU3Ek__BackingField_6; }
	inline void set_U3CpointerDragU3Ek__BackingField_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerDragU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerDragU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerClickU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerClickU3Ek__BackingField_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerClickU3Ek__BackingField_7() const { return ___U3CpointerClickU3Ek__BackingField_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerClickU3Ek__BackingField_7() { return &___U3CpointerClickU3Ek__BackingField_7; }
	inline void set_U3CpointerClickU3Ek__BackingField_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerClickU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerClickU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerCurrentRaycastU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerCurrentRaycastU3Ek__BackingField_8)); }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  get_U3CpointerCurrentRaycastU3Ek__BackingField_8() const { return ___U3CpointerCurrentRaycastU3Ek__BackingField_8; }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * get_address_of_U3CpointerCurrentRaycastU3Ek__BackingField_8() { return &___U3CpointerCurrentRaycastU3Ek__BackingField_8; }
	inline void set_U3CpointerCurrentRaycastU3Ek__BackingField_8(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  value)
	{
		___U3CpointerCurrentRaycastU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerCurrentRaycastU3Ek__BackingField_8))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerCurrentRaycastU3Ek__BackingField_8))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CpointerPressRaycastU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerPressRaycastU3Ek__BackingField_9)); }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  get_U3CpointerPressRaycastU3Ek__BackingField_9() const { return ___U3CpointerPressRaycastU3Ek__BackingField_9; }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * get_address_of_U3CpointerPressRaycastU3Ek__BackingField_9() { return &___U3CpointerPressRaycastU3Ek__BackingField_9; }
	inline void set_U3CpointerPressRaycastU3Ek__BackingField_9(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  value)
	{
		___U3CpointerPressRaycastU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerPressRaycastU3Ek__BackingField_9))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerPressRaycastU3Ek__BackingField_9))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_hovered_10() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___hovered_10)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_hovered_10() const { return ___hovered_10; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_hovered_10() { return &___hovered_10; }
	inline void set_hovered_10(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___hovered_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hovered_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CeligibleForClickU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CeligibleForClickU3Ek__BackingField_11)); }
	inline bool get_U3CeligibleForClickU3Ek__BackingField_11() const { return ___U3CeligibleForClickU3Ek__BackingField_11; }
	inline bool* get_address_of_U3CeligibleForClickU3Ek__BackingField_11() { return &___U3CeligibleForClickU3Ek__BackingField_11; }
	inline void set_U3CeligibleForClickU3Ek__BackingField_11(bool value)
	{
		___U3CeligibleForClickU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CpointerIdU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerIdU3Ek__BackingField_12)); }
	inline int32_t get_U3CpointerIdU3Ek__BackingField_12() const { return ___U3CpointerIdU3Ek__BackingField_12; }
	inline int32_t* get_address_of_U3CpointerIdU3Ek__BackingField_12() { return &___U3CpointerIdU3Ek__BackingField_12; }
	inline void set_U3CpointerIdU3Ek__BackingField_12(int32_t value)
	{
		___U3CpointerIdU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CpositionU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpositionU3Ek__BackingField_13)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CpositionU3Ek__BackingField_13() const { return ___U3CpositionU3Ek__BackingField_13; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CpositionU3Ek__BackingField_13() { return &___U3CpositionU3Ek__BackingField_13; }
	inline void set_U3CpositionU3Ek__BackingField_13(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CpositionU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CdeltaU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CdeltaU3Ek__BackingField_14)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CdeltaU3Ek__BackingField_14() const { return ___U3CdeltaU3Ek__BackingField_14; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CdeltaU3Ek__BackingField_14() { return &___U3CdeltaU3Ek__BackingField_14; }
	inline void set_U3CdeltaU3Ek__BackingField_14(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CdeltaU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CpressPositionU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpressPositionU3Ek__BackingField_15)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CpressPositionU3Ek__BackingField_15() const { return ___U3CpressPositionU3Ek__BackingField_15; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CpressPositionU3Ek__BackingField_15() { return &___U3CpressPositionU3Ek__BackingField_15; }
	inline void set_U3CpressPositionU3Ek__BackingField_15(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CpressPositionU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CworldPositionU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CworldPositionU3Ek__BackingField_16)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CworldPositionU3Ek__BackingField_16() const { return ___U3CworldPositionU3Ek__BackingField_16; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CworldPositionU3Ek__BackingField_16() { return &___U3CworldPositionU3Ek__BackingField_16; }
	inline void set_U3CworldPositionU3Ek__BackingField_16(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CworldPositionU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CworldNormalU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CworldNormalU3Ek__BackingField_17)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CworldNormalU3Ek__BackingField_17() const { return ___U3CworldNormalU3Ek__BackingField_17; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CworldNormalU3Ek__BackingField_17() { return &___U3CworldNormalU3Ek__BackingField_17; }
	inline void set_U3CworldNormalU3Ek__BackingField_17(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CworldNormalU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CclickTimeU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CclickTimeU3Ek__BackingField_18)); }
	inline float get_U3CclickTimeU3Ek__BackingField_18() const { return ___U3CclickTimeU3Ek__BackingField_18; }
	inline float* get_address_of_U3CclickTimeU3Ek__BackingField_18() { return &___U3CclickTimeU3Ek__BackingField_18; }
	inline void set_U3CclickTimeU3Ek__BackingField_18(float value)
	{
		___U3CclickTimeU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CclickCountU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CclickCountU3Ek__BackingField_19)); }
	inline int32_t get_U3CclickCountU3Ek__BackingField_19() const { return ___U3CclickCountU3Ek__BackingField_19; }
	inline int32_t* get_address_of_U3CclickCountU3Ek__BackingField_19() { return &___U3CclickCountU3Ek__BackingField_19; }
	inline void set_U3CclickCountU3Ek__BackingField_19(int32_t value)
	{
		___U3CclickCountU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CscrollDeltaU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CscrollDeltaU3Ek__BackingField_20)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CscrollDeltaU3Ek__BackingField_20() const { return ___U3CscrollDeltaU3Ek__BackingField_20; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CscrollDeltaU3Ek__BackingField_20() { return &___U3CscrollDeltaU3Ek__BackingField_20; }
	inline void set_U3CscrollDeltaU3Ek__BackingField_20(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CscrollDeltaU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CuseDragThresholdU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CuseDragThresholdU3Ek__BackingField_21)); }
	inline bool get_U3CuseDragThresholdU3Ek__BackingField_21() const { return ___U3CuseDragThresholdU3Ek__BackingField_21; }
	inline bool* get_address_of_U3CuseDragThresholdU3Ek__BackingField_21() { return &___U3CuseDragThresholdU3Ek__BackingField_21; }
	inline void set_U3CuseDragThresholdU3Ek__BackingField_21(bool value)
	{
		___U3CuseDragThresholdU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CdraggingU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CdraggingU3Ek__BackingField_22)); }
	inline bool get_U3CdraggingU3Ek__BackingField_22() const { return ___U3CdraggingU3Ek__BackingField_22; }
	inline bool* get_address_of_U3CdraggingU3Ek__BackingField_22() { return &___U3CdraggingU3Ek__BackingField_22; }
	inline void set_U3CdraggingU3Ek__BackingField_22(bool value)
	{
		___U3CdraggingU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_U3CbuttonU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CbuttonU3Ek__BackingField_23)); }
	inline int32_t get_U3CbuttonU3Ek__BackingField_23() const { return ___U3CbuttonU3Ek__BackingField_23; }
	inline int32_t* get_address_of_U3CbuttonU3Ek__BackingField_23() { return &___U3CbuttonU3Ek__BackingField_23; }
	inline void set_U3CbuttonU3Ek__BackingField_23(int32_t value)
	{
		___U3CbuttonU3Ek__BackingField_23 = value;
	}
};


// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
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


// UnityEngine.ParticleSystem/MinMaxGradient
struct MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 
{
public:
	// UnityEngine.ParticleSystemGradientMode UnityEngine.ParticleSystem/MinMaxGradient::m_Mode
	int32_t ___m_Mode_0;
	// UnityEngine.Gradient UnityEngine.ParticleSystem/MinMaxGradient::m_GradientMin
	Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 * ___m_GradientMin_1;
	// UnityEngine.Gradient UnityEngine.ParticleSystem/MinMaxGradient::m_GradientMax
	Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 * ___m_GradientMax_2;
	// UnityEngine.Color UnityEngine.ParticleSystem/MinMaxGradient::m_ColorMin
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_ColorMin_3;
	// UnityEngine.Color UnityEngine.ParticleSystem/MinMaxGradient::m_ColorMax
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_ColorMax_4;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_GradientMin_1() { return static_cast<int32_t>(offsetof(MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7, ___m_GradientMin_1)); }
	inline Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 * get_m_GradientMin_1() const { return ___m_GradientMin_1; }
	inline Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 ** get_address_of_m_GradientMin_1() { return &___m_GradientMin_1; }
	inline void set_m_GradientMin_1(Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 * value)
	{
		___m_GradientMin_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GradientMin_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_GradientMax_2() { return static_cast<int32_t>(offsetof(MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7, ___m_GradientMax_2)); }
	inline Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 * get_m_GradientMax_2() const { return ___m_GradientMax_2; }
	inline Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 ** get_address_of_m_GradientMax_2() { return &___m_GradientMax_2; }
	inline void set_m_GradientMax_2(Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 * value)
	{
		___m_GradientMax_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GradientMax_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorMin_3() { return static_cast<int32_t>(offsetof(MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7, ___m_ColorMin_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_ColorMin_3() const { return ___m_ColorMin_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_ColorMin_3() { return &___m_ColorMin_3; }
	inline void set_m_ColorMin_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_ColorMin_3 = value;
	}

	inline static int32_t get_offset_of_m_ColorMax_4() { return static_cast<int32_t>(offsetof(MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7, ___m_ColorMax_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_ColorMax_4() const { return ___m_ColorMax_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_ColorMax_4() { return &___m_ColorMax_4; }
	inline void set_m_ColorMax_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_ColorMax_4 = value;
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


// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099  : public MulticastDelegate_t
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


// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_StaticFields
{
public:
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::preWillRenderCanvases
	WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * ___preWillRenderCanvases_4;
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * ___willRenderCanvases_5;

public:
	inline static int32_t get_offset_of_preWillRenderCanvases_4() { return static_cast<int32_t>(offsetof(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_StaticFields, ___preWillRenderCanvases_4)); }
	inline WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * get_preWillRenderCanvases_4() const { return ___preWillRenderCanvases_4; }
	inline WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 ** get_address_of_preWillRenderCanvases_4() { return &___preWillRenderCanvases_4; }
	inline void set_preWillRenderCanvases_4(WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * value)
	{
		___preWillRenderCanvases_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___preWillRenderCanvases_4), (void*)value);
	}

	inline static int32_t get_offset_of_willRenderCanvases_5() { return static_cast<int32_t>(offsetof(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_StaticFields, ___willRenderCanvases_5)); }
	inline WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * get_willRenderCanvases_5() const { return ___willRenderCanvases_5; }
	inline WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 ** get_address_of_willRenderCanvases_5() { return &___willRenderCanvases_5; }
	inline void set_willRenderCanvases_5(WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * value)
	{
		___willRenderCanvases_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___willRenderCanvases_5), (void*)value);
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


// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072  : public Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1
{
public:

public:
};

struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_StaticFields
{
public:
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * ___reapplyDrivenProperties_4;

public:
	inline static int32_t get_offset_of_reapplyDrivenProperties_4() { return static_cast<int32_t>(offsetof(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_StaticFields, ___reapplyDrivenProperties_4)); }
	inline ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * get_reapplyDrivenProperties_4() const { return ___reapplyDrivenProperties_4; }
	inline ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE ** get_address_of_reapplyDrivenProperties_4() { return &___reapplyDrivenProperties_4; }
	inline void set_reapplyDrivenProperties_4(ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * value)
	{
		___reapplyDrivenProperties_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reapplyDrivenProperties_4), (void*)value);
	}
};


// AiCanAttackCircle
struct AiCanAttackCircle_t57AE50A882353B23FA5A30DF81FBEE01909E19B6  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single AiCanAttackCircle::Range
	float ___Range_5;

public:
	inline static int32_t get_offset_of_Range_5() { return static_cast<int32_t>(offsetof(AiCanAttackCircle_t57AE50A882353B23FA5A30DF81FBEE01909E19B6, ___Range_5)); }
	inline float get_Range_5() const { return ___Range_5; }
	inline float* get_address_of_Range_5() { return &___Range_5; }
	inline void set_Range_5(float value)
	{
		___Range_5 = value;
	}
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


// AnimationController
struct AnimationController_t8EE5B6538AC1173041A0CCFDBC4B61897DA03B67  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Animator AnimationController::animator
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator_4;
	// UnityEngine.ParticleSystem AnimationController::walkSmoke
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___walkSmoke_5;
	// UnityEngine.ParticleSystem AnimationController::bloodingAnim
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___bloodingAnim_6;

public:
	inline static int32_t get_offset_of_animator_4() { return static_cast<int32_t>(offsetof(AnimationController_t8EE5B6538AC1173041A0CCFDBC4B61897DA03B67, ___animator_4)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_animator_4() const { return ___animator_4; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_animator_4() { return &___animator_4; }
	inline void set_animator_4(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___animator_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___animator_4), (void*)value);
	}

	inline static int32_t get_offset_of_walkSmoke_5() { return static_cast<int32_t>(offsetof(AnimationController_t8EE5B6538AC1173041A0CCFDBC4B61897DA03B67, ___walkSmoke_5)); }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * get_walkSmoke_5() const { return ___walkSmoke_5; }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E ** get_address_of_walkSmoke_5() { return &___walkSmoke_5; }
	inline void set_walkSmoke_5(ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * value)
	{
		___walkSmoke_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___walkSmoke_5), (void*)value);
	}

	inline static int32_t get_offset_of_bloodingAnim_6() { return static_cast<int32_t>(offsetof(AnimationController_t8EE5B6538AC1173041A0CCFDBC4B61897DA03B67, ___bloodingAnim_6)); }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * get_bloodingAnim_6() const { return ___bloodingAnim_6; }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E ** get_address_of_bloodingAnim_6() { return &___bloodingAnim_6; }
	inline void set_bloodingAnim_6(ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * value)
	{
		___bloodingAnim_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bloodingAnim_6), (void*)value);
	}
};


// CameraHolder
struct CameraHolder_tA0DB3BD91D8E35159E794BEE6A382FE2B9188A10  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Transform CameraHolder::Holder
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___Holder_4;
	// System.Single CameraHolder::currDistance
	float ___currDistance_5;
	// System.Single CameraHolder::xRotate
	float ___xRotate_6;
	// System.Single CameraHolder::yRotate
	float ___yRotate_7;
	// System.Single CameraHolder::yMinLimit
	float ___yMinLimit_8;
	// System.Single CameraHolder::yMaxLimit
	float ___yMaxLimit_9;
	// System.Single CameraHolder::prevDistance
	float ___prevDistance_10;
	// System.Single CameraHolder::x
	float ___x_11;
	// System.Single CameraHolder::y
	float ___y_12;
	// System.Single CameraHolder::windowDpi
	float ___windowDpi_13;
	// UnityEngine.GameObject[] CameraHolder::Prefabs
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___Prefabs_14;
	// System.Int32 CameraHolder::Prefab
	int32_t ___Prefab_15;
	// UnityEngine.GameObject CameraHolder::Instance
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Instance_16;
	// System.Single CameraHolder::StartColor
	float ___StartColor_17;
	// System.Single CameraHolder::HueColor
	float ___HueColor_18;
	// UnityEngine.Texture CameraHolder::HueTexture
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___HueTexture_19;
	// UnityEngine.ParticleSystem[] CameraHolder::particleSystems
	ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7* ___particleSystems_20;
	// System.Collections.Generic.List`1<CameraHolder/SVA> CameraHolder::svList
	List_1_tD40AE6D7A6AB19BD1993F05D20B4AB5EC723E6F9 * ___svList_21;
	// System.Single CameraHolder::H
	float ___H_22;

public:
	inline static int32_t get_offset_of_Holder_4() { return static_cast<int32_t>(offsetof(CameraHolder_tA0DB3BD91D8E35159E794BEE6A382FE2B9188A10, ___Holder_4)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_Holder_4() const { return ___Holder_4; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_Holder_4() { return &___Holder_4; }
	inline void set_Holder_4(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___Holder_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Holder_4), (void*)value);
	}

	inline static int32_t get_offset_of_currDistance_5() { return static_cast<int32_t>(offsetof(CameraHolder_tA0DB3BD91D8E35159E794BEE6A382FE2B9188A10, ___currDistance_5)); }
	inline float get_currDistance_5() const { return ___currDistance_5; }
	inline float* get_address_of_currDistance_5() { return &___currDistance_5; }
	inline void set_currDistance_5(float value)
	{
		___currDistance_5 = value;
	}

	inline static int32_t get_offset_of_xRotate_6() { return static_cast<int32_t>(offsetof(CameraHolder_tA0DB3BD91D8E35159E794BEE6A382FE2B9188A10, ___xRotate_6)); }
	inline float get_xRotate_6() const { return ___xRotate_6; }
	inline float* get_address_of_xRotate_6() { return &___xRotate_6; }
	inline void set_xRotate_6(float value)
	{
		___xRotate_6 = value;
	}

	inline static int32_t get_offset_of_yRotate_7() { return static_cast<int32_t>(offsetof(CameraHolder_tA0DB3BD91D8E35159E794BEE6A382FE2B9188A10, ___yRotate_7)); }
	inline float get_yRotate_7() const { return ___yRotate_7; }
	inline float* get_address_of_yRotate_7() { return &___yRotate_7; }
	inline void set_yRotate_7(float value)
	{
		___yRotate_7 = value;
	}

	inline static int32_t get_offset_of_yMinLimit_8() { return static_cast<int32_t>(offsetof(CameraHolder_tA0DB3BD91D8E35159E794BEE6A382FE2B9188A10, ___yMinLimit_8)); }
	inline float get_yMinLimit_8() const { return ___yMinLimit_8; }
	inline float* get_address_of_yMinLimit_8() { return &___yMinLimit_8; }
	inline void set_yMinLimit_8(float value)
	{
		___yMinLimit_8 = value;
	}

	inline static int32_t get_offset_of_yMaxLimit_9() { return static_cast<int32_t>(offsetof(CameraHolder_tA0DB3BD91D8E35159E794BEE6A382FE2B9188A10, ___yMaxLimit_9)); }
	inline float get_yMaxLimit_9() const { return ___yMaxLimit_9; }
	inline float* get_address_of_yMaxLimit_9() { return &___yMaxLimit_9; }
	inline void set_yMaxLimit_9(float value)
	{
		___yMaxLimit_9 = value;
	}

	inline static int32_t get_offset_of_prevDistance_10() { return static_cast<int32_t>(offsetof(CameraHolder_tA0DB3BD91D8E35159E794BEE6A382FE2B9188A10, ___prevDistance_10)); }
	inline float get_prevDistance_10() const { return ___prevDistance_10; }
	inline float* get_address_of_prevDistance_10() { return &___prevDistance_10; }
	inline void set_prevDistance_10(float value)
	{
		___prevDistance_10 = value;
	}

	inline static int32_t get_offset_of_x_11() { return static_cast<int32_t>(offsetof(CameraHolder_tA0DB3BD91D8E35159E794BEE6A382FE2B9188A10, ___x_11)); }
	inline float get_x_11() const { return ___x_11; }
	inline float* get_address_of_x_11() { return &___x_11; }
	inline void set_x_11(float value)
	{
		___x_11 = value;
	}

	inline static int32_t get_offset_of_y_12() { return static_cast<int32_t>(offsetof(CameraHolder_tA0DB3BD91D8E35159E794BEE6A382FE2B9188A10, ___y_12)); }
	inline float get_y_12() const { return ___y_12; }
	inline float* get_address_of_y_12() { return &___y_12; }
	inline void set_y_12(float value)
	{
		___y_12 = value;
	}

	inline static int32_t get_offset_of_windowDpi_13() { return static_cast<int32_t>(offsetof(CameraHolder_tA0DB3BD91D8E35159E794BEE6A382FE2B9188A10, ___windowDpi_13)); }
	inline float get_windowDpi_13() const { return ___windowDpi_13; }
	inline float* get_address_of_windowDpi_13() { return &___windowDpi_13; }
	inline void set_windowDpi_13(float value)
	{
		___windowDpi_13 = value;
	}

	inline static int32_t get_offset_of_Prefabs_14() { return static_cast<int32_t>(offsetof(CameraHolder_tA0DB3BD91D8E35159E794BEE6A382FE2B9188A10, ___Prefabs_14)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_Prefabs_14() const { return ___Prefabs_14; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_Prefabs_14() { return &___Prefabs_14; }
	inline void set_Prefabs_14(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___Prefabs_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Prefabs_14), (void*)value);
	}

	inline static int32_t get_offset_of_Prefab_15() { return static_cast<int32_t>(offsetof(CameraHolder_tA0DB3BD91D8E35159E794BEE6A382FE2B9188A10, ___Prefab_15)); }
	inline int32_t get_Prefab_15() const { return ___Prefab_15; }
	inline int32_t* get_address_of_Prefab_15() { return &___Prefab_15; }
	inline void set_Prefab_15(int32_t value)
	{
		___Prefab_15 = value;
	}

	inline static int32_t get_offset_of_Instance_16() { return static_cast<int32_t>(offsetof(CameraHolder_tA0DB3BD91D8E35159E794BEE6A382FE2B9188A10, ___Instance_16)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Instance_16() const { return ___Instance_16; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Instance_16() { return &___Instance_16; }
	inline void set_Instance_16(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Instance_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_16), (void*)value);
	}

	inline static int32_t get_offset_of_StartColor_17() { return static_cast<int32_t>(offsetof(CameraHolder_tA0DB3BD91D8E35159E794BEE6A382FE2B9188A10, ___StartColor_17)); }
	inline float get_StartColor_17() const { return ___StartColor_17; }
	inline float* get_address_of_StartColor_17() { return &___StartColor_17; }
	inline void set_StartColor_17(float value)
	{
		___StartColor_17 = value;
	}

	inline static int32_t get_offset_of_HueColor_18() { return static_cast<int32_t>(offsetof(CameraHolder_tA0DB3BD91D8E35159E794BEE6A382FE2B9188A10, ___HueColor_18)); }
	inline float get_HueColor_18() const { return ___HueColor_18; }
	inline float* get_address_of_HueColor_18() { return &___HueColor_18; }
	inline void set_HueColor_18(float value)
	{
		___HueColor_18 = value;
	}

	inline static int32_t get_offset_of_HueTexture_19() { return static_cast<int32_t>(offsetof(CameraHolder_tA0DB3BD91D8E35159E794BEE6A382FE2B9188A10, ___HueTexture_19)); }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * get_HueTexture_19() const { return ___HueTexture_19; }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE ** get_address_of_HueTexture_19() { return &___HueTexture_19; }
	inline void set_HueTexture_19(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * value)
	{
		___HueTexture_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HueTexture_19), (void*)value);
	}

	inline static int32_t get_offset_of_particleSystems_20() { return static_cast<int32_t>(offsetof(CameraHolder_tA0DB3BD91D8E35159E794BEE6A382FE2B9188A10, ___particleSystems_20)); }
	inline ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7* get_particleSystems_20() const { return ___particleSystems_20; }
	inline ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7** get_address_of_particleSystems_20() { return &___particleSystems_20; }
	inline void set_particleSystems_20(ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7* value)
	{
		___particleSystems_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___particleSystems_20), (void*)value);
	}

	inline static int32_t get_offset_of_svList_21() { return static_cast<int32_t>(offsetof(CameraHolder_tA0DB3BD91D8E35159E794BEE6A382FE2B9188A10, ___svList_21)); }
	inline List_1_tD40AE6D7A6AB19BD1993F05D20B4AB5EC723E6F9 * get_svList_21() const { return ___svList_21; }
	inline List_1_tD40AE6D7A6AB19BD1993F05D20B4AB5EC723E6F9 ** get_address_of_svList_21() { return &___svList_21; }
	inline void set_svList_21(List_1_tD40AE6D7A6AB19BD1993F05D20B4AB5EC723E6F9 * value)
	{
		___svList_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___svList_21), (void*)value);
	}

	inline static int32_t get_offset_of_H_22() { return static_cast<int32_t>(offsetof(CameraHolder_tA0DB3BD91D8E35159E794BEE6A382FE2B9188A10, ___H_22)); }
	inline float get_H_22() const { return ___H_22; }
	inline float* get_address_of_H_22() { return &___H_22; }
	inline void set_H_22(float value)
	{
		___H_22 = value;
	}
};


// DamageCircle
struct DamageCircle_tB70A539EB31C5490ADB1DFA14B86E5E6953EF876  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Transform DamageCircle::targetCircleTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___targetCircleTransform_4;
	// UnityEngine.Transform DamageCircle::circleTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___circleTransform_6;
	// UnityEngine.Transform DamageCircle::topTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___topTransform_7;
	// UnityEngine.Transform DamageCircle::bottomTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___bottomTransform_8;
	// UnityEngine.Transform DamageCircle::leftTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___leftTransform_9;
	// UnityEngine.Transform DamageCircle::rightTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___rightTransform_10;
	// UnityEngine.Vector3 DamageCircle::targetCircleSize
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___targetCircleSize_13;
	// UnityEngine.Vector3 DamageCircle::targetCirclePosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___targetCirclePosition_14;
	// System.Single DamageCircle::circleShrinkSpeed
	float ___circleShrinkSpeed_15;
	// System.Single DamageCircle::shrinkTimer
	float ___shrinkTimer_16;
	// UnityEngine.GameObject DamageCircle::wizard
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___wizard_17;
	// UnityEngine.ParticleSystem DamageCircle::bloodAnim
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___bloodAnim_18;
	// UnityEngine.GameObject DamageCircle::enemyCanWalkingCircleArea
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___enemyCanWalkingCircleArea_19;

public:
	inline static int32_t get_offset_of_targetCircleTransform_4() { return static_cast<int32_t>(offsetof(DamageCircle_tB70A539EB31C5490ADB1DFA14B86E5E6953EF876, ___targetCircleTransform_4)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_targetCircleTransform_4() const { return ___targetCircleTransform_4; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_targetCircleTransform_4() { return &___targetCircleTransform_4; }
	inline void set_targetCircleTransform_4(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___targetCircleTransform_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___targetCircleTransform_4), (void*)value);
	}

	inline static int32_t get_offset_of_circleTransform_6() { return static_cast<int32_t>(offsetof(DamageCircle_tB70A539EB31C5490ADB1DFA14B86E5E6953EF876, ___circleTransform_6)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_circleTransform_6() const { return ___circleTransform_6; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_circleTransform_6() { return &___circleTransform_6; }
	inline void set_circleTransform_6(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___circleTransform_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___circleTransform_6), (void*)value);
	}

	inline static int32_t get_offset_of_topTransform_7() { return static_cast<int32_t>(offsetof(DamageCircle_tB70A539EB31C5490ADB1DFA14B86E5E6953EF876, ___topTransform_7)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_topTransform_7() const { return ___topTransform_7; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_topTransform_7() { return &___topTransform_7; }
	inline void set_topTransform_7(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___topTransform_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___topTransform_7), (void*)value);
	}

	inline static int32_t get_offset_of_bottomTransform_8() { return static_cast<int32_t>(offsetof(DamageCircle_tB70A539EB31C5490ADB1DFA14B86E5E6953EF876, ___bottomTransform_8)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_bottomTransform_8() const { return ___bottomTransform_8; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_bottomTransform_8() { return &___bottomTransform_8; }
	inline void set_bottomTransform_8(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___bottomTransform_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bottomTransform_8), (void*)value);
	}

	inline static int32_t get_offset_of_leftTransform_9() { return static_cast<int32_t>(offsetof(DamageCircle_tB70A539EB31C5490ADB1DFA14B86E5E6953EF876, ___leftTransform_9)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_leftTransform_9() const { return ___leftTransform_9; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_leftTransform_9() { return &___leftTransform_9; }
	inline void set_leftTransform_9(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___leftTransform_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___leftTransform_9), (void*)value);
	}

	inline static int32_t get_offset_of_rightTransform_10() { return static_cast<int32_t>(offsetof(DamageCircle_tB70A539EB31C5490ADB1DFA14B86E5E6953EF876, ___rightTransform_10)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_rightTransform_10() const { return ___rightTransform_10; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_rightTransform_10() { return &___rightTransform_10; }
	inline void set_rightTransform_10(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___rightTransform_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rightTransform_10), (void*)value);
	}

	inline static int32_t get_offset_of_targetCircleSize_13() { return static_cast<int32_t>(offsetof(DamageCircle_tB70A539EB31C5490ADB1DFA14B86E5E6953EF876, ___targetCircleSize_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_targetCircleSize_13() const { return ___targetCircleSize_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_targetCircleSize_13() { return &___targetCircleSize_13; }
	inline void set_targetCircleSize_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___targetCircleSize_13 = value;
	}

	inline static int32_t get_offset_of_targetCirclePosition_14() { return static_cast<int32_t>(offsetof(DamageCircle_tB70A539EB31C5490ADB1DFA14B86E5E6953EF876, ___targetCirclePosition_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_targetCirclePosition_14() const { return ___targetCirclePosition_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_targetCirclePosition_14() { return &___targetCirclePosition_14; }
	inline void set_targetCirclePosition_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___targetCirclePosition_14 = value;
	}

	inline static int32_t get_offset_of_circleShrinkSpeed_15() { return static_cast<int32_t>(offsetof(DamageCircle_tB70A539EB31C5490ADB1DFA14B86E5E6953EF876, ___circleShrinkSpeed_15)); }
	inline float get_circleShrinkSpeed_15() const { return ___circleShrinkSpeed_15; }
	inline float* get_address_of_circleShrinkSpeed_15() { return &___circleShrinkSpeed_15; }
	inline void set_circleShrinkSpeed_15(float value)
	{
		___circleShrinkSpeed_15 = value;
	}

	inline static int32_t get_offset_of_shrinkTimer_16() { return static_cast<int32_t>(offsetof(DamageCircle_tB70A539EB31C5490ADB1DFA14B86E5E6953EF876, ___shrinkTimer_16)); }
	inline float get_shrinkTimer_16() const { return ___shrinkTimer_16; }
	inline float* get_address_of_shrinkTimer_16() { return &___shrinkTimer_16; }
	inline void set_shrinkTimer_16(float value)
	{
		___shrinkTimer_16 = value;
	}

	inline static int32_t get_offset_of_wizard_17() { return static_cast<int32_t>(offsetof(DamageCircle_tB70A539EB31C5490ADB1DFA14B86E5E6953EF876, ___wizard_17)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_wizard_17() const { return ___wizard_17; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_wizard_17() { return &___wizard_17; }
	inline void set_wizard_17(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___wizard_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___wizard_17), (void*)value);
	}

	inline static int32_t get_offset_of_bloodAnim_18() { return static_cast<int32_t>(offsetof(DamageCircle_tB70A539EB31C5490ADB1DFA14B86E5E6953EF876, ___bloodAnim_18)); }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * get_bloodAnim_18() const { return ___bloodAnim_18; }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E ** get_address_of_bloodAnim_18() { return &___bloodAnim_18; }
	inline void set_bloodAnim_18(ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * value)
	{
		___bloodAnim_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bloodAnim_18), (void*)value);
	}

	inline static int32_t get_offset_of_enemyCanWalkingCircleArea_19() { return static_cast<int32_t>(offsetof(DamageCircle_tB70A539EB31C5490ADB1DFA14B86E5E6953EF876, ___enemyCanWalkingCircleArea_19)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_enemyCanWalkingCircleArea_19() const { return ___enemyCanWalkingCircleArea_19; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_enemyCanWalkingCircleArea_19() { return &___enemyCanWalkingCircleArea_19; }
	inline void set_enemyCanWalkingCircleArea_19(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___enemyCanWalkingCircleArea_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enemyCanWalkingCircleArea_19), (void*)value);
	}
};

struct DamageCircle_tB70A539EB31C5490ADB1DFA14B86E5E6953EF876_StaticFields
{
public:
	// DamageCircle DamageCircle::instance
	DamageCircle_tB70A539EB31C5490ADB1DFA14B86E5E6953EF876 * ___instance_5;
	// UnityEngine.Vector3 DamageCircle::circleSize
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___circleSize_11;
	// UnityEngine.Vector3 DamageCircle::circlePosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___circlePosition_12;

public:
	inline static int32_t get_offset_of_instance_5() { return static_cast<int32_t>(offsetof(DamageCircle_tB70A539EB31C5490ADB1DFA14B86E5E6953EF876_StaticFields, ___instance_5)); }
	inline DamageCircle_tB70A539EB31C5490ADB1DFA14B86E5E6953EF876 * get_instance_5() const { return ___instance_5; }
	inline DamageCircle_tB70A539EB31C5490ADB1DFA14B86E5E6953EF876 ** get_address_of_instance_5() { return &___instance_5; }
	inline void set_instance_5(DamageCircle_tB70A539EB31C5490ADB1DFA14B86E5E6953EF876 * value)
	{
		___instance_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_5), (void*)value);
	}

	inline static int32_t get_offset_of_circleSize_11() { return static_cast<int32_t>(offsetof(DamageCircle_tB70A539EB31C5490ADB1DFA14B86E5E6953EF876_StaticFields, ___circleSize_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_circleSize_11() const { return ___circleSize_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_circleSize_11() { return &___circleSize_11; }
	inline void set_circleSize_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___circleSize_11 = value;
	}

	inline static int32_t get_offset_of_circlePosition_12() { return static_cast<int32_t>(offsetof(DamageCircle_tB70A539EB31C5490ADB1DFA14B86E5E6953EF876_StaticFields, ___circlePosition_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_circlePosition_12() const { return ___circlePosition_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_circlePosition_12() { return &___circlePosition_12; }
	inline void set_circlePosition_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___circlePosition_12 = value;
	}
};


// GameMain
struct GameMain_t1257BA6D1B7168D049E99EB3B80136749D29CAA6  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// HealthController
struct HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 HealthController::healthMax
	int32_t ___healthMax_4;
	// System.Int32 HealthController::healthCurrent
	int32_t ___healthCurrent_5;
	// System.Boolean HealthController::die
	bool ___die_6;

public:
	inline static int32_t get_offset_of_healthMax_4() { return static_cast<int32_t>(offsetof(HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7, ___healthMax_4)); }
	inline int32_t get_healthMax_4() const { return ___healthMax_4; }
	inline int32_t* get_address_of_healthMax_4() { return &___healthMax_4; }
	inline void set_healthMax_4(int32_t value)
	{
		___healthMax_4 = value;
	}

	inline static int32_t get_offset_of_healthCurrent_5() { return static_cast<int32_t>(offsetof(HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7, ___healthCurrent_5)); }
	inline int32_t get_healthCurrent_5() const { return ___healthCurrent_5; }
	inline int32_t* get_address_of_healthCurrent_5() { return &___healthCurrent_5; }
	inline void set_healthCurrent_5(int32_t value)
	{
		___healthCurrent_5 = value;
	}

	inline static int32_t get_offset_of_die_6() { return static_cast<int32_t>(offsetof(HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7, ___die_6)); }
	inline bool get_die_6() const { return ___die_6; }
	inline bool* get_address_of_die_6() { return &___die_6; }
	inline void set_die_6(bool value)
	{
		___die_6 = value;
	}
};


// HealthSystem
struct HealthSystem_t534958B833E6A966FF53C62231D4C34A751947D8  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Slider HealthSystem::HealthSlider
	Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * ___HealthSlider_4;
	// UnityEngine.UI.Text HealthSystem::CurrentHealth
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___CurrentHealth_5;
	// UnityEngine.UI.Text HealthSystem::MaxHealth
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___MaxHealth_6;
	// System.Int32 HealthSystem::healthMax
	int32_t ___healthMax_7;
	// System.Int32 HealthSystem::health
	int32_t ___health_8;
	// UnityEngine.GameObject HealthSystem::LevelFailedPanel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___LevelFailedPanel_9;
	// UnityEngine.GameObject HealthSystem::wizard
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___wizard_10;
	// UnityEngine.Animator HealthSystem::animator
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator_11;

public:
	inline static int32_t get_offset_of_HealthSlider_4() { return static_cast<int32_t>(offsetof(HealthSystem_t534958B833E6A966FF53C62231D4C34A751947D8, ___HealthSlider_4)); }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * get_HealthSlider_4() const { return ___HealthSlider_4; }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A ** get_address_of_HealthSlider_4() { return &___HealthSlider_4; }
	inline void set_HealthSlider_4(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * value)
	{
		___HealthSlider_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HealthSlider_4), (void*)value);
	}

	inline static int32_t get_offset_of_CurrentHealth_5() { return static_cast<int32_t>(offsetof(HealthSystem_t534958B833E6A966FF53C62231D4C34A751947D8, ___CurrentHealth_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_CurrentHealth_5() const { return ___CurrentHealth_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_CurrentHealth_5() { return &___CurrentHealth_5; }
	inline void set_CurrentHealth_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___CurrentHealth_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CurrentHealth_5), (void*)value);
	}

	inline static int32_t get_offset_of_MaxHealth_6() { return static_cast<int32_t>(offsetof(HealthSystem_t534958B833E6A966FF53C62231D4C34A751947D8, ___MaxHealth_6)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_MaxHealth_6() const { return ___MaxHealth_6; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_MaxHealth_6() { return &___MaxHealth_6; }
	inline void set_MaxHealth_6(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___MaxHealth_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MaxHealth_6), (void*)value);
	}

	inline static int32_t get_offset_of_healthMax_7() { return static_cast<int32_t>(offsetof(HealthSystem_t534958B833E6A966FF53C62231D4C34A751947D8, ___healthMax_7)); }
	inline int32_t get_healthMax_7() const { return ___healthMax_7; }
	inline int32_t* get_address_of_healthMax_7() { return &___healthMax_7; }
	inline void set_healthMax_7(int32_t value)
	{
		___healthMax_7 = value;
	}

	inline static int32_t get_offset_of_health_8() { return static_cast<int32_t>(offsetof(HealthSystem_t534958B833E6A966FF53C62231D4C34A751947D8, ___health_8)); }
	inline int32_t get_health_8() const { return ___health_8; }
	inline int32_t* get_address_of_health_8() { return &___health_8; }
	inline void set_health_8(int32_t value)
	{
		___health_8 = value;
	}

	inline static int32_t get_offset_of_LevelFailedPanel_9() { return static_cast<int32_t>(offsetof(HealthSystem_t534958B833E6A966FF53C62231D4C34A751947D8, ___LevelFailedPanel_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_LevelFailedPanel_9() const { return ___LevelFailedPanel_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_LevelFailedPanel_9() { return &___LevelFailedPanel_9; }
	inline void set_LevelFailedPanel_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___LevelFailedPanel_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LevelFailedPanel_9), (void*)value);
	}

	inline static int32_t get_offset_of_wizard_10() { return static_cast<int32_t>(offsetof(HealthSystem_t534958B833E6A966FF53C62231D4C34A751947D8, ___wizard_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_wizard_10() const { return ___wizard_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_wizard_10() { return &___wizard_10; }
	inline void set_wizard_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___wizard_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___wizard_10), (void*)value);
	}

	inline static int32_t get_offset_of_animator_11() { return static_cast<int32_t>(offsetof(HealthSystem_t534958B833E6A966FF53C62231D4C34A751947D8, ___animator_11)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_animator_11() const { return ___animator_11; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_animator_11() { return &___animator_11; }
	inline void set_animator_11(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___animator_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___animator_11), (void*)value);
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


// JoystickPlayerExample
struct JoystickPlayerExample_t07673CB1C6FF2F83E4464AA7D01DE72B5DA8922B  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single JoystickPlayerExample::speed
	float ___speed_4;
	// VariableJoystick JoystickPlayerExample::variableJoystick
	VariableJoystick_tEA2A86D8EE903904A4F3D9FA53B8F4B065A9EB9B * ___variableJoystick_5;
	// UnityEngine.Rigidbody JoystickPlayerExample::rb
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___rb_6;

public:
	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(JoystickPlayerExample_t07673CB1C6FF2F83E4464AA7D01DE72B5DA8922B, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}

	inline static int32_t get_offset_of_variableJoystick_5() { return static_cast<int32_t>(offsetof(JoystickPlayerExample_t07673CB1C6FF2F83E4464AA7D01DE72B5DA8922B, ___variableJoystick_5)); }
	inline VariableJoystick_tEA2A86D8EE903904A4F3D9FA53B8F4B065A9EB9B * get_variableJoystick_5() const { return ___variableJoystick_5; }
	inline VariableJoystick_tEA2A86D8EE903904A4F3D9FA53B8F4B065A9EB9B ** get_address_of_variableJoystick_5() { return &___variableJoystick_5; }
	inline void set_variableJoystick_5(VariableJoystick_tEA2A86D8EE903904A4F3D9FA53B8F4B065A9EB9B * value)
	{
		___variableJoystick_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___variableJoystick_5), (void*)value);
	}

	inline static int32_t get_offset_of_rb_6() { return static_cast<int32_t>(offsetof(JoystickPlayerExample_t07673CB1C6FF2F83E4464AA7D01DE72B5DA8922B, ___rb_6)); }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * get_rb_6() const { return ___rb_6; }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** get_address_of_rb_6() { return &___rb_6; }
	inline void set_rb_6(Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * value)
	{
		___rb_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rb_6), (void*)value);
	}
};


// JoystickSetterExample
struct JoystickSetterExample_tCCF610BB8D883F911E3868499E334A258844B73F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// VariableJoystick JoystickSetterExample::variableJoystick
	VariableJoystick_tEA2A86D8EE903904A4F3D9FA53B8F4B065A9EB9B * ___variableJoystick_4;
	// UnityEngine.UI.Text JoystickSetterExample::valueText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___valueText_5;
	// UnityEngine.UI.Image JoystickSetterExample::background
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___background_6;
	// UnityEngine.Sprite[] JoystickSetterExample::axisSprites
	SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* ___axisSprites_7;

public:
	inline static int32_t get_offset_of_variableJoystick_4() { return static_cast<int32_t>(offsetof(JoystickSetterExample_tCCF610BB8D883F911E3868499E334A258844B73F, ___variableJoystick_4)); }
	inline VariableJoystick_tEA2A86D8EE903904A4F3D9FA53B8F4B065A9EB9B * get_variableJoystick_4() const { return ___variableJoystick_4; }
	inline VariableJoystick_tEA2A86D8EE903904A4F3D9FA53B8F4B065A9EB9B ** get_address_of_variableJoystick_4() { return &___variableJoystick_4; }
	inline void set_variableJoystick_4(VariableJoystick_tEA2A86D8EE903904A4F3D9FA53B8F4B065A9EB9B * value)
	{
		___variableJoystick_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___variableJoystick_4), (void*)value);
	}

	inline static int32_t get_offset_of_valueText_5() { return static_cast<int32_t>(offsetof(JoystickSetterExample_tCCF610BB8D883F911E3868499E334A258844B73F, ___valueText_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_valueText_5() const { return ___valueText_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_valueText_5() { return &___valueText_5; }
	inline void set_valueText_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___valueText_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___valueText_5), (void*)value);
	}

	inline static int32_t get_offset_of_background_6() { return static_cast<int32_t>(offsetof(JoystickSetterExample_tCCF610BB8D883F911E3868499E334A258844B73F, ___background_6)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_background_6() const { return ___background_6; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_background_6() { return &___background_6; }
	inline void set_background_6(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___background_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___background_6), (void*)value);
	}

	inline static int32_t get_offset_of_axisSprites_7() { return static_cast<int32_t>(offsetof(JoystickSetterExample_tCCF610BB8D883F911E3868499E334A258844B73F, ___axisSprites_7)); }
	inline SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* get_axisSprites_7() const { return ___axisSprites_7; }
	inline SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77** get_address_of_axisSprites_7() { return &___axisSprites_7; }
	inline void set_axisSprites_7(SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* value)
	{
		___axisSprites_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___axisSprites_7), (void*)value);
	}
};


// Rotator
struct Rotator_t0B568907CEDD93A471CDE3AC3640E1770EF170A6  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single Rotator::x
	float ___x_4;
	// System.Single Rotator::y
	float ___y_5;
	// System.Single Rotator::z
	float ___z_6;

public:
	inline static int32_t get_offset_of_x_4() { return static_cast<int32_t>(offsetof(Rotator_t0B568907CEDD93A471CDE3AC3640E1770EF170A6, ___x_4)); }
	inline float get_x_4() const { return ___x_4; }
	inline float* get_address_of_x_4() { return &___x_4; }
	inline void set_x_4(float value)
	{
		___x_4 = value;
	}

	inline static int32_t get_offset_of_y_5() { return static_cast<int32_t>(offsetof(Rotator_t0B568907CEDD93A471CDE3AC3640E1770EF170A6, ___y_5)); }
	inline float get_y_5() const { return ___y_5; }
	inline float* get_address_of_y_5() { return &___y_5; }
	inline void set_y_5(float value)
	{
		___y_5 = value;
	}

	inline static int32_t get_offset_of_z_6() { return static_cast<int32_t>(offsetof(Rotator_t0B568907CEDD93A471CDE3AC3640E1770EF170A6, ___z_6)); }
	inline float get_z_6() const { return ___z_6; }
	inline float* get_address_of_z_6() { return &___z_6; }
	inline void set_z_6(float value)
	{
		___z_6 = value;
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
	// System.Single ai::radius
	float ___radius_5;
	// System.Single ai::distanceTargetPlayer
	float ___distanceTargetPlayer_6;
	// UnityEngine.GameObject ai::Target
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Target_7;
	// System.Boolean ai::follow
	bool ___follow_8;
	// UnityEngine.Animator ai::animator
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator_9;
	// UnityEngine.ParticleSystem ai::DefaultSkill
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___DefaultSkill_10;
	// System.Single ai::coolDownConstant
	float ___coolDownConstant_11;
	// System.Boolean ai::AttackCooldown
	bool ___AttackCooldown_12;
	// System.Int32 ai::canAttackDistance
	int32_t ___canAttackDistance_13;
	// System.Boolean ai::attackStatus
	bool ___attackStatus_14;

public:
	inline static int32_t get_offset_of_agent_4() { return static_cast<int32_t>(offsetof(ai_t05DCF615948AD04F90BBCFF646B8389E83581B71, ___agent_4)); }
	inline NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * get_agent_4() const { return ___agent_4; }
	inline NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B ** get_address_of_agent_4() { return &___agent_4; }
	inline void set_agent_4(NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * value)
	{
		___agent_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___agent_4), (void*)value);
	}

	inline static int32_t get_offset_of_radius_5() { return static_cast<int32_t>(offsetof(ai_t05DCF615948AD04F90BBCFF646B8389E83581B71, ___radius_5)); }
	inline float get_radius_5() const { return ___radius_5; }
	inline float* get_address_of_radius_5() { return &___radius_5; }
	inline void set_radius_5(float value)
	{
		___radius_5 = value;
	}

	inline static int32_t get_offset_of_distanceTargetPlayer_6() { return static_cast<int32_t>(offsetof(ai_t05DCF615948AD04F90BBCFF646B8389E83581B71, ___distanceTargetPlayer_6)); }
	inline float get_distanceTargetPlayer_6() const { return ___distanceTargetPlayer_6; }
	inline float* get_address_of_distanceTargetPlayer_6() { return &___distanceTargetPlayer_6; }
	inline void set_distanceTargetPlayer_6(float value)
	{
		___distanceTargetPlayer_6 = value;
	}

	inline static int32_t get_offset_of_Target_7() { return static_cast<int32_t>(offsetof(ai_t05DCF615948AD04F90BBCFF646B8389E83581B71, ___Target_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Target_7() const { return ___Target_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Target_7() { return &___Target_7; }
	inline void set_Target_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Target_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Target_7), (void*)value);
	}

	inline static int32_t get_offset_of_follow_8() { return static_cast<int32_t>(offsetof(ai_t05DCF615948AD04F90BBCFF646B8389E83581B71, ___follow_8)); }
	inline bool get_follow_8() const { return ___follow_8; }
	inline bool* get_address_of_follow_8() { return &___follow_8; }
	inline void set_follow_8(bool value)
	{
		___follow_8 = value;
	}

	inline static int32_t get_offset_of_animator_9() { return static_cast<int32_t>(offsetof(ai_t05DCF615948AD04F90BBCFF646B8389E83581B71, ___animator_9)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_animator_9() const { return ___animator_9; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_animator_9() { return &___animator_9; }
	inline void set_animator_9(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___animator_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___animator_9), (void*)value);
	}

	inline static int32_t get_offset_of_DefaultSkill_10() { return static_cast<int32_t>(offsetof(ai_t05DCF615948AD04F90BBCFF646B8389E83581B71, ___DefaultSkill_10)); }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * get_DefaultSkill_10() const { return ___DefaultSkill_10; }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E ** get_address_of_DefaultSkill_10() { return &___DefaultSkill_10; }
	inline void set_DefaultSkill_10(ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * value)
	{
		___DefaultSkill_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DefaultSkill_10), (void*)value);
	}

	inline static int32_t get_offset_of_coolDownConstant_11() { return static_cast<int32_t>(offsetof(ai_t05DCF615948AD04F90BBCFF646B8389E83581B71, ___coolDownConstant_11)); }
	inline float get_coolDownConstant_11() const { return ___coolDownConstant_11; }
	inline float* get_address_of_coolDownConstant_11() { return &___coolDownConstant_11; }
	inline void set_coolDownConstant_11(float value)
	{
		___coolDownConstant_11 = value;
	}

	inline static int32_t get_offset_of_AttackCooldown_12() { return static_cast<int32_t>(offsetof(ai_t05DCF615948AD04F90BBCFF646B8389E83581B71, ___AttackCooldown_12)); }
	inline bool get_AttackCooldown_12() const { return ___AttackCooldown_12; }
	inline bool* get_address_of_AttackCooldown_12() { return &___AttackCooldown_12; }
	inline void set_AttackCooldown_12(bool value)
	{
		___AttackCooldown_12 = value;
	}

	inline static int32_t get_offset_of_canAttackDistance_13() { return static_cast<int32_t>(offsetof(ai_t05DCF615948AD04F90BBCFF646B8389E83581B71, ___canAttackDistance_13)); }
	inline int32_t get_canAttackDistance_13() const { return ___canAttackDistance_13; }
	inline int32_t* get_address_of_canAttackDistance_13() { return &___canAttackDistance_13; }
	inline void set_canAttackDistance_13(int32_t value)
	{
		___canAttackDistance_13 = value;
	}

	inline static int32_t get_offset_of_attackStatus_14() { return static_cast<int32_t>(offsetof(ai_t05DCF615948AD04F90BBCFF646B8389E83581B71, ___attackStatus_14)); }
	inline bool get_attackStatus_14() const { return ___attackStatus_14; }
	inline bool* get_address_of_attackStatus_14() { return &___attackStatus_14; }
	inline void set_attackStatus_14(bool value)
	{
		___attackStatus_14 = value;
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
	// UnityEngine.ParticleSystem attack::fire
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___fire_6;
	// UnityEngine.GameObject attack::fireobject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___fireobject_7;
	// UnityEngine.ParticleSystem attack::water
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___water_8;
	// UnityEngine.ParticleSystem attack::lightning
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___lightning_9;
	// UnityEngine.ParticleSystem attack::DefaultSkill
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___DefaultSkill_10;
	// UnityEngine.UI.Button attack::attackButton
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___attackButton_11;
	// UnityEngine.UI.Button attack::fireAttackButton
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___fireAttackButton_12;
	// UnityEngine.UI.Button attack::waterAttackButton
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___waterAttackButton_13;
	// UnityEngine.UI.Button attack::lightningAttackButton
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___lightningAttackButton_14;
	// UnityEngine.GameObject attack::SkillSelectionPanel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___SkillSelectionPanel_15;
	// System.Boolean attack::attackStatus
	bool ___attackStatus_16;
	// System.Boolean attack::AttackCooldown
	bool ___AttackCooldown_17;
	// UnityEngine.UI.Text attack::coolDownText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___coolDownText_18;
	// System.Single attack::coolDownConstant
	float ___coolDownConstant_19;
	// System.Single attack::timeLeftCD
	float ___timeLeftCD_20;
	// System.Double attack::timeLeftrounded
	double ___timeLeftrounded_21;
	// System.Int32 attack::AttackSelectionIndex
	int32_t ___AttackSelectionIndex_22;
	// UnityEngine.Vector3 attack::AddingVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___AddingVector_24;

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

	inline static int32_t get_offset_of_fire_6() { return static_cast<int32_t>(offsetof(attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C, ___fire_6)); }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * get_fire_6() const { return ___fire_6; }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E ** get_address_of_fire_6() { return &___fire_6; }
	inline void set_fire_6(ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * value)
	{
		___fire_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fire_6), (void*)value);
	}

	inline static int32_t get_offset_of_fireobject_7() { return static_cast<int32_t>(offsetof(attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C, ___fireobject_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_fireobject_7() const { return ___fireobject_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_fireobject_7() { return &___fireobject_7; }
	inline void set_fireobject_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___fireobject_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fireobject_7), (void*)value);
	}

	inline static int32_t get_offset_of_water_8() { return static_cast<int32_t>(offsetof(attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C, ___water_8)); }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * get_water_8() const { return ___water_8; }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E ** get_address_of_water_8() { return &___water_8; }
	inline void set_water_8(ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * value)
	{
		___water_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___water_8), (void*)value);
	}

	inline static int32_t get_offset_of_lightning_9() { return static_cast<int32_t>(offsetof(attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C, ___lightning_9)); }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * get_lightning_9() const { return ___lightning_9; }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E ** get_address_of_lightning_9() { return &___lightning_9; }
	inline void set_lightning_9(ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * value)
	{
		___lightning_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lightning_9), (void*)value);
	}

	inline static int32_t get_offset_of_DefaultSkill_10() { return static_cast<int32_t>(offsetof(attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C, ___DefaultSkill_10)); }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * get_DefaultSkill_10() const { return ___DefaultSkill_10; }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E ** get_address_of_DefaultSkill_10() { return &___DefaultSkill_10; }
	inline void set_DefaultSkill_10(ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * value)
	{
		___DefaultSkill_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DefaultSkill_10), (void*)value);
	}

	inline static int32_t get_offset_of_attackButton_11() { return static_cast<int32_t>(offsetof(attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C, ___attackButton_11)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_attackButton_11() const { return ___attackButton_11; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_attackButton_11() { return &___attackButton_11; }
	inline void set_attackButton_11(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___attackButton_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___attackButton_11), (void*)value);
	}

	inline static int32_t get_offset_of_fireAttackButton_12() { return static_cast<int32_t>(offsetof(attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C, ___fireAttackButton_12)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_fireAttackButton_12() const { return ___fireAttackButton_12; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_fireAttackButton_12() { return &___fireAttackButton_12; }
	inline void set_fireAttackButton_12(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___fireAttackButton_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fireAttackButton_12), (void*)value);
	}

	inline static int32_t get_offset_of_waterAttackButton_13() { return static_cast<int32_t>(offsetof(attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C, ___waterAttackButton_13)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_waterAttackButton_13() const { return ___waterAttackButton_13; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_waterAttackButton_13() { return &___waterAttackButton_13; }
	inline void set_waterAttackButton_13(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___waterAttackButton_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___waterAttackButton_13), (void*)value);
	}

	inline static int32_t get_offset_of_lightningAttackButton_14() { return static_cast<int32_t>(offsetof(attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C, ___lightningAttackButton_14)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_lightningAttackButton_14() const { return ___lightningAttackButton_14; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_lightningAttackButton_14() { return &___lightningAttackButton_14; }
	inline void set_lightningAttackButton_14(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___lightningAttackButton_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lightningAttackButton_14), (void*)value);
	}

	inline static int32_t get_offset_of_SkillSelectionPanel_15() { return static_cast<int32_t>(offsetof(attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C, ___SkillSelectionPanel_15)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_SkillSelectionPanel_15() const { return ___SkillSelectionPanel_15; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_SkillSelectionPanel_15() { return &___SkillSelectionPanel_15; }
	inline void set_SkillSelectionPanel_15(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___SkillSelectionPanel_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SkillSelectionPanel_15), (void*)value);
	}

	inline static int32_t get_offset_of_attackStatus_16() { return static_cast<int32_t>(offsetof(attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C, ___attackStatus_16)); }
	inline bool get_attackStatus_16() const { return ___attackStatus_16; }
	inline bool* get_address_of_attackStatus_16() { return &___attackStatus_16; }
	inline void set_attackStatus_16(bool value)
	{
		___attackStatus_16 = value;
	}

	inline static int32_t get_offset_of_AttackCooldown_17() { return static_cast<int32_t>(offsetof(attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C, ___AttackCooldown_17)); }
	inline bool get_AttackCooldown_17() const { return ___AttackCooldown_17; }
	inline bool* get_address_of_AttackCooldown_17() { return &___AttackCooldown_17; }
	inline void set_AttackCooldown_17(bool value)
	{
		___AttackCooldown_17 = value;
	}

	inline static int32_t get_offset_of_coolDownText_18() { return static_cast<int32_t>(offsetof(attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C, ___coolDownText_18)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_coolDownText_18() const { return ___coolDownText_18; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_coolDownText_18() { return &___coolDownText_18; }
	inline void set_coolDownText_18(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___coolDownText_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___coolDownText_18), (void*)value);
	}

	inline static int32_t get_offset_of_coolDownConstant_19() { return static_cast<int32_t>(offsetof(attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C, ___coolDownConstant_19)); }
	inline float get_coolDownConstant_19() const { return ___coolDownConstant_19; }
	inline float* get_address_of_coolDownConstant_19() { return &___coolDownConstant_19; }
	inline void set_coolDownConstant_19(float value)
	{
		___coolDownConstant_19 = value;
	}

	inline static int32_t get_offset_of_timeLeftCD_20() { return static_cast<int32_t>(offsetof(attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C, ___timeLeftCD_20)); }
	inline float get_timeLeftCD_20() const { return ___timeLeftCD_20; }
	inline float* get_address_of_timeLeftCD_20() { return &___timeLeftCD_20; }
	inline void set_timeLeftCD_20(float value)
	{
		___timeLeftCD_20 = value;
	}

	inline static int32_t get_offset_of_timeLeftrounded_21() { return static_cast<int32_t>(offsetof(attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C, ___timeLeftrounded_21)); }
	inline double get_timeLeftrounded_21() const { return ___timeLeftrounded_21; }
	inline double* get_address_of_timeLeftrounded_21() { return &___timeLeftrounded_21; }
	inline void set_timeLeftrounded_21(double value)
	{
		___timeLeftrounded_21 = value;
	}

	inline static int32_t get_offset_of_AttackSelectionIndex_22() { return static_cast<int32_t>(offsetof(attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C, ___AttackSelectionIndex_22)); }
	inline int32_t get_AttackSelectionIndex_22() const { return ___AttackSelectionIndex_22; }
	inline int32_t* get_address_of_AttackSelectionIndex_22() { return &___AttackSelectionIndex_22; }
	inline void set_AttackSelectionIndex_22(int32_t value)
	{
		___AttackSelectionIndex_22 = value;
	}

	inline static int32_t get_offset_of_AddingVector_24() { return static_cast<int32_t>(offsetof(attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C, ___AddingVector_24)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_AddingVector_24() const { return ___AddingVector_24; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_AddingVector_24() { return &___AddingVector_24; }
	inline void set_AddingVector_24(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___AddingVector_24 = value;
	}
};

struct attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C_StaticFields
{
public:
	// UnityEngine.Vector3 attack::AddingVectorDeneme
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___AddingVectorDeneme_23;

public:
	inline static int32_t get_offset_of_AddingVectorDeneme_23() { return static_cast<int32_t>(offsetof(attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C_StaticFields, ___AddingVectorDeneme_23)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_AddingVectorDeneme_23() const { return ___AddingVectorDeneme_23; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_AddingVectorDeneme_23() { return &___AddingVectorDeneme_23; }
	inline void set_AddingVectorDeneme_23(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___AddingVectorDeneme_23 = value;
	}
};


// cameraShaker
struct cameraShaker_t9CE5FEB9CB9D54949F9CA55EBB612EDA135EDF32  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// enemyHealthSystem
struct enemyHealthSystem_tD9957A42AEA49305BD2A45987B6A98EB509800A8  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Slider enemyHealthSystem::HealthSlider
	Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * ___HealthSlider_4;
	// UnityEngine.UI.Text enemyHealthSystem::CurrentHealth
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___CurrentHealth_5;
	// UnityEngine.UI.Text enemyHealthSystem::MaxHealth
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___MaxHealth_6;
	// System.Int32 enemyHealthSystem::healthMax
	int32_t ___healthMax_7;
	// System.Int32 enemyHealthSystem::health
	int32_t ___health_8;
	// UnityEngine.GameObject enemyHealthSystem::wizard
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___wizard_9;
	// UnityEngine.Animator enemyHealthSystem::animator
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator_10;

public:
	inline static int32_t get_offset_of_HealthSlider_4() { return static_cast<int32_t>(offsetof(enemyHealthSystem_tD9957A42AEA49305BD2A45987B6A98EB509800A8, ___HealthSlider_4)); }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * get_HealthSlider_4() const { return ___HealthSlider_4; }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A ** get_address_of_HealthSlider_4() { return &___HealthSlider_4; }
	inline void set_HealthSlider_4(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * value)
	{
		___HealthSlider_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HealthSlider_4), (void*)value);
	}

	inline static int32_t get_offset_of_CurrentHealth_5() { return static_cast<int32_t>(offsetof(enemyHealthSystem_tD9957A42AEA49305BD2A45987B6A98EB509800A8, ___CurrentHealth_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_CurrentHealth_5() const { return ___CurrentHealth_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_CurrentHealth_5() { return &___CurrentHealth_5; }
	inline void set_CurrentHealth_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___CurrentHealth_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CurrentHealth_5), (void*)value);
	}

	inline static int32_t get_offset_of_MaxHealth_6() { return static_cast<int32_t>(offsetof(enemyHealthSystem_tD9957A42AEA49305BD2A45987B6A98EB509800A8, ___MaxHealth_6)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_MaxHealth_6() const { return ___MaxHealth_6; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_MaxHealth_6() { return &___MaxHealth_6; }
	inline void set_MaxHealth_6(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___MaxHealth_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MaxHealth_6), (void*)value);
	}

	inline static int32_t get_offset_of_healthMax_7() { return static_cast<int32_t>(offsetof(enemyHealthSystem_tD9957A42AEA49305BD2A45987B6A98EB509800A8, ___healthMax_7)); }
	inline int32_t get_healthMax_7() const { return ___healthMax_7; }
	inline int32_t* get_address_of_healthMax_7() { return &___healthMax_7; }
	inline void set_healthMax_7(int32_t value)
	{
		___healthMax_7 = value;
	}

	inline static int32_t get_offset_of_health_8() { return static_cast<int32_t>(offsetof(enemyHealthSystem_tD9957A42AEA49305BD2A45987B6A98EB509800A8, ___health_8)); }
	inline int32_t get_health_8() const { return ___health_8; }
	inline int32_t* get_address_of_health_8() { return &___health_8; }
	inline void set_health_8(int32_t value)
	{
		___health_8 = value;
	}

	inline static int32_t get_offset_of_wizard_9() { return static_cast<int32_t>(offsetof(enemyHealthSystem_tD9957A42AEA49305BD2A45987B6A98EB509800A8, ___wizard_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_wizard_9() const { return ___wizard_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_wizard_9() { return &___wizard_9; }
	inline void set_wizard_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___wizard_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___wizard_9), (void*)value);
	}

	inline static int32_t get_offset_of_animator_10() { return static_cast<int32_t>(offsetof(enemyHealthSystem_tD9957A42AEA49305BD2A45987B6A98EB509800A8, ___animator_10)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_animator_10() const { return ___animator_10; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_animator_10() { return &___animator_10; }
	inline void set_animator_10(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___animator_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___animator_10), (void*)value);
	}
};


// enemyHealthSystem1
struct enemyHealthSystem1_t9D32045CB414C7BF3B895294B1044F2D9FFA0029  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// HealthController enemyHealthSystem1::healthController
	HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 * ___healthController_4;
	// UnityEngine.UI.Slider enemyHealthSystem1::healthSlider
	Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * ___healthSlider_5;
	// UnityEngine.UI.Text enemyHealthSystem1::maxHealthText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___maxHealthText_6;
	// UnityEngine.UI.Text enemyHealthSystem1::currentHealthText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___currentHealthText_7;
	// UnityEngine.ParticleSystem enemyHealthSystem1::bloodingAnim
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___bloodingAnim_8;
	// UnityEngine.ParticleSystem enemyHealthSystem1::explosionAnim
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___explosionAnim_9;

public:
	inline static int32_t get_offset_of_healthController_4() { return static_cast<int32_t>(offsetof(enemyHealthSystem1_t9D32045CB414C7BF3B895294B1044F2D9FFA0029, ___healthController_4)); }
	inline HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 * get_healthController_4() const { return ___healthController_4; }
	inline HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 ** get_address_of_healthController_4() { return &___healthController_4; }
	inline void set_healthController_4(HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 * value)
	{
		___healthController_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___healthController_4), (void*)value);
	}

	inline static int32_t get_offset_of_healthSlider_5() { return static_cast<int32_t>(offsetof(enemyHealthSystem1_t9D32045CB414C7BF3B895294B1044F2D9FFA0029, ___healthSlider_5)); }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * get_healthSlider_5() const { return ___healthSlider_5; }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A ** get_address_of_healthSlider_5() { return &___healthSlider_5; }
	inline void set_healthSlider_5(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * value)
	{
		___healthSlider_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___healthSlider_5), (void*)value);
	}

	inline static int32_t get_offset_of_maxHealthText_6() { return static_cast<int32_t>(offsetof(enemyHealthSystem1_t9D32045CB414C7BF3B895294B1044F2D9FFA0029, ___maxHealthText_6)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_maxHealthText_6() const { return ___maxHealthText_6; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_maxHealthText_6() { return &___maxHealthText_6; }
	inline void set_maxHealthText_6(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___maxHealthText_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___maxHealthText_6), (void*)value);
	}

	inline static int32_t get_offset_of_currentHealthText_7() { return static_cast<int32_t>(offsetof(enemyHealthSystem1_t9D32045CB414C7BF3B895294B1044F2D9FFA0029, ___currentHealthText_7)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_currentHealthText_7() const { return ___currentHealthText_7; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_currentHealthText_7() { return &___currentHealthText_7; }
	inline void set_currentHealthText_7(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___currentHealthText_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentHealthText_7), (void*)value);
	}

	inline static int32_t get_offset_of_bloodingAnim_8() { return static_cast<int32_t>(offsetof(enemyHealthSystem1_t9D32045CB414C7BF3B895294B1044F2D9FFA0029, ___bloodingAnim_8)); }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * get_bloodingAnim_8() const { return ___bloodingAnim_8; }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E ** get_address_of_bloodingAnim_8() { return &___bloodingAnim_8; }
	inline void set_bloodingAnim_8(ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * value)
	{
		___bloodingAnim_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bloodingAnim_8), (void*)value);
	}

	inline static int32_t get_offset_of_explosionAnim_9() { return static_cast<int32_t>(offsetof(enemyHealthSystem1_t9D32045CB414C7BF3B895294B1044F2D9FFA0029, ___explosionAnim_9)); }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * get_explosionAnim_9() const { return ___explosionAnim_9; }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E ** get_address_of_explosionAnim_9() { return &___explosionAnim_9; }
	inline void set_explosionAnim_9(ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * value)
	{
		___explosionAnim_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___explosionAnim_9), (void*)value);
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


// DynamicJoystick
struct DynamicJoystick_t675DA15D6A912CB9638176139FD810B7B051E867  : public Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873
{
public:
	// System.Single DynamicJoystick::moveThreshold
	float ___moveThreshold_15;

public:
	inline static int32_t get_offset_of_moveThreshold_15() { return static_cast<int32_t>(offsetof(DynamicJoystick_t675DA15D6A912CB9638176139FD810B7B051E867, ___moveThreshold_15)); }
	inline float get_moveThreshold_15() const { return ___moveThreshold_15; }
	inline float* get_address_of_moveThreshold_15() { return &___moveThreshold_15; }
	inline void set_moveThreshold_15(float value)
	{
		___moveThreshold_15 = value;
	}
};


// FixedJoystick
struct FixedJoystick_tDB74F76D3F9FBD9C43F508B2F306958915E6F5B2  : public Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873
{
public:

public:
};


// FloatingJoystick
struct FloatingJoystick_tC4079BB6845C914906FF088E283633AFA9C93607  : public Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873
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


// VariableJoystick
struct VariableJoystick_tEA2A86D8EE903904A4F3D9FA53B8F4B065A9EB9B  : public Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873
{
public:
	// System.Single VariableJoystick::moveThreshold
	float ___moveThreshold_15;
	// JoystickType VariableJoystick::joystickType
	int32_t ___joystickType_16;
	// UnityEngine.Vector2 VariableJoystick::fixedPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___fixedPosition_17;

public:
	inline static int32_t get_offset_of_moveThreshold_15() { return static_cast<int32_t>(offsetof(VariableJoystick_tEA2A86D8EE903904A4F3D9FA53B8F4B065A9EB9B, ___moveThreshold_15)); }
	inline float get_moveThreshold_15() const { return ___moveThreshold_15; }
	inline float* get_address_of_moveThreshold_15() { return &___moveThreshold_15; }
	inline void set_moveThreshold_15(float value)
	{
		___moveThreshold_15 = value;
	}

	inline static int32_t get_offset_of_joystickType_16() { return static_cast<int32_t>(offsetof(VariableJoystick_tEA2A86D8EE903904A4F3D9FA53B8F4B065A9EB9B, ___joystickType_16)); }
	inline int32_t get_joystickType_16() const { return ___joystickType_16; }
	inline int32_t* get_address_of_joystickType_16() { return &___joystickType_16; }
	inline void set_joystickType_16(int32_t value)
	{
		___joystickType_16 = value;
	}

	inline static int32_t get_offset_of_fixedPosition_17() { return static_cast<int32_t>(offsetof(VariableJoystick_tEA2A86D8EE903904A4F3D9FA53B8F4B065A9EB9B, ___fixedPosition_17)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_fixedPosition_17() const { return ___fixedPosition_17; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_fixedPosition_17() { return &___fixedPosition_17; }
	inline void set_fixedPosition_17(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___fixedPosition_17 = value;
	}
};


// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * ___m_OnClick_20;

public:
	inline static int32_t get_offset_of_m_OnClick_20() { return static_cast<int32_t>(offsetof(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D, ___m_OnClick_20)); }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * get_m_OnClick_20() const { return ___m_OnClick_20; }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F ** get_address_of_m_OnClick_20() { return &___m_OnClick_20; }
	inline void set_m_OnClick_20(ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * value)
	{
		___m_OnClick_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnClick_20), (void*)value);
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


// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;

public:
	inline static int32_t get_offset_of_m_Sprite_37() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Sprite_37)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_Sprite_37() const { return ___m_Sprite_37; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_Sprite_37() { return &___m_Sprite_37; }
	inline void set_m_Sprite_37(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_Sprite_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Sprite_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_38() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_OverrideSprite_38)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_OverrideSprite_38() const { return ___m_OverrideSprite_38; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_OverrideSprite_38() { return &___m_OverrideSprite_38; }
	inline void set_m_OverrideSprite_38(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_OverrideSprite_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideSprite_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_39() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Type_39)); }
	inline int32_t get_m_Type_39() const { return ___m_Type_39; }
	inline int32_t* get_address_of_m_Type_39() { return &___m_Type_39; }
	inline void set_m_Type_39(int32_t value)
	{
		___m_Type_39 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_40() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PreserveAspect_40)); }
	inline bool get_m_PreserveAspect_40() const { return ___m_PreserveAspect_40; }
	inline bool* get_address_of_m_PreserveAspect_40() { return &___m_PreserveAspect_40; }
	inline void set_m_PreserveAspect_40(bool value)
	{
		___m_PreserveAspect_40 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_41() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillCenter_41)); }
	inline bool get_m_FillCenter_41() const { return ___m_FillCenter_41; }
	inline bool* get_address_of_m_FillCenter_41() { return &___m_FillCenter_41; }
	inline void set_m_FillCenter_41(bool value)
	{
		___m_FillCenter_41 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_42() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillMethod_42)); }
	inline int32_t get_m_FillMethod_42() const { return ___m_FillMethod_42; }
	inline int32_t* get_address_of_m_FillMethod_42() { return &___m_FillMethod_42; }
	inline void set_m_FillMethod_42(int32_t value)
	{
		___m_FillMethod_42 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_43() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillAmount_43)); }
	inline float get_m_FillAmount_43() const { return ___m_FillAmount_43; }
	inline float* get_address_of_m_FillAmount_43() { return &___m_FillAmount_43; }
	inline void set_m_FillAmount_43(float value)
	{
		___m_FillAmount_43 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_44() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillClockwise_44)); }
	inline bool get_m_FillClockwise_44() const { return ___m_FillClockwise_44; }
	inline bool* get_address_of_m_FillClockwise_44() { return &___m_FillClockwise_44; }
	inline void set_m_FillClockwise_44(bool value)
	{
		___m_FillClockwise_44 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_45() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillOrigin_45)); }
	inline int32_t get_m_FillOrigin_45() const { return ___m_FillOrigin_45; }
	inline int32_t* get_address_of_m_FillOrigin_45() { return &___m_FillOrigin_45; }
	inline void set_m_FillOrigin_45(int32_t value)
	{
		___m_FillOrigin_45 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_46() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_AlphaHitTestMinimumThreshold_46)); }
	inline float get_m_AlphaHitTestMinimumThreshold_46() const { return ___m_AlphaHitTestMinimumThreshold_46; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_46() { return &___m_AlphaHitTestMinimumThreshold_46; }
	inline void set_m_AlphaHitTestMinimumThreshold_46(float value)
	{
		___m_AlphaHitTestMinimumThreshold_46 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_47() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Tracked_47)); }
	inline bool get_m_Tracked_47() const { return ___m_Tracked_47; }
	inline bool* get_address_of_m_Tracked_47() { return &___m_Tracked_47; }
	inline void set_m_Tracked_47(bool value)
	{
		___m_Tracked_47 = value;
	}

	inline static int32_t get_offset_of_m_UseSpriteMesh_48() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_UseSpriteMesh_48)); }
	inline bool get_m_UseSpriteMesh_48() const { return ___m_UseSpriteMesh_48; }
	inline bool* get_address_of_m_UseSpriteMesh_48() { return &___m_UseSpriteMesh_48; }
	inline void set_m_UseSpriteMesh_48(bool value)
	{
		___m_UseSpriteMesh_48 = value;
	}

	inline static int32_t get_offset_of_m_PixelsPerUnitMultiplier_49() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PixelsPerUnitMultiplier_49)); }
	inline float get_m_PixelsPerUnitMultiplier_49() const { return ___m_PixelsPerUnitMultiplier_49; }
	inline float* get_address_of_m_PixelsPerUnitMultiplier_49() { return &___m_PixelsPerUnitMultiplier_49; }
	inline void set_m_PixelsPerUnitMultiplier_49(float value)
	{
		___m_PixelsPerUnitMultiplier_49 = value;
	}

	inline static int32_t get_offset_of_m_CachedReferencePixelsPerUnit_50() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_CachedReferencePixelsPerUnit_50)); }
	inline float get_m_CachedReferencePixelsPerUnit_50() const { return ___m_CachedReferencePixelsPerUnit_50; }
	inline float* get_address_of_m_CachedReferencePixelsPerUnit_50() { return &___m_CachedReferencePixelsPerUnit_50; }
	inline void set_m_CachedReferencePixelsPerUnit_50(float value)
	{
		___m_CachedReferencePixelsPerUnit_50 = value;
	}
};

struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_t815A476B0A21E183042059E705F9E505478CD8AE * ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_36() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_ETC1DefaultUI_36)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_ETC1DefaultUI_36() const { return ___s_ETC1DefaultUI_36; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_ETC1DefaultUI_36() { return &___s_ETC1DefaultUI_36; }
	inline void set_s_ETC1DefaultUI_36(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_ETC1DefaultUI_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ETC1DefaultUI_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertScratch_51() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_VertScratch_51)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_VertScratch_51() const { return ___s_VertScratch_51; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_VertScratch_51() { return &___s_VertScratch_51; }
	inline void set_s_VertScratch_51(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_VertScratch_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertScratch_51), (void*)value);
	}

	inline static int32_t get_offset_of_s_UVScratch_52() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_UVScratch_52)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_UVScratch_52() const { return ___s_UVScratch_52; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_UVScratch_52() { return &___s_UVScratch_52; }
	inline void set_s_UVScratch_52(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_UVScratch_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UVScratch_52), (void*)value);
	}

	inline static int32_t get_offset_of_s_Xy_53() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Xy_53)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Xy_53() const { return ___s_Xy_53; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Xy_53() { return &___s_Xy_53; }
	inline void set_s_Xy_53(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Xy_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Xy_53), (void*)value);
	}

	inline static int32_t get_offset_of_s_Uv_54() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Uv_54)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Uv_54() const { return ___s_Uv_54; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Uv_54() { return &___s_Uv_54; }
	inline void set_s_Uv_54(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Uv_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Uv_54), (void*)value);
	}

	inline static int32_t get_offset_of_m_TrackedTexturelessImages_55() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___m_TrackedTexturelessImages_55)); }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE * get_m_TrackedTexturelessImages_55() const { return ___m_TrackedTexturelessImages_55; }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE ** get_address_of_m_TrackedTexturelessImages_55() { return &___m_TrackedTexturelessImages_55; }
	inline void set_m_TrackedTexturelessImages_55(List_1_t815A476B0A21E183042059E705F9E505478CD8AE * value)
	{
		___m_TrackedTexturelessImages_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedTexturelessImages_55), (void*)value);
	}

	inline static int32_t get_offset_of_s_Initialized_56() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Initialized_56)); }
	inline bool get_s_Initialized_56() const { return ___s_Initialized_56; }
	inline bool* get_address_of_s_Initialized_56() { return &___s_Initialized_56; }
	inline void set_s_Initialized_56(bool value)
	{
		___s_Initialized_56 = value;
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
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * m_Items[1];

public:
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * m_Items[1];

public:
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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
// CameraHolder/SVA[]
struct SVAU5BU5D_t91B041CB8F6D15D10C4FDF864146CEA041F286A4  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) SVA_tF4D04A570299D8106DD273E4C6850A570B85E56E  m_Items[1];

public:
	inline SVA_tF4D04A570299D8106DD273E4C6850A570B85E56E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SVA_tF4D04A570299D8106DD273E4C6850A570B85E56E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SVA_tF4D04A570299D8106DD273E4C6850A570B85E56E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline SVA_tF4D04A570299D8106DD273E4C6850A570B85E56E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SVA_tF4D04A570299D8106DD273E4C6850A570B85E56E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SVA_tF4D04A570299D8106DD273E4C6850A570B85E56E  value)
	{
		m_Items[index] = value;
	}
};


// !!0 UnityEngine.Component::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponentInChildren_TisRuntimeObject_mB377B32275A969E0D1A738DBC693DE8EB3593642_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<CameraHolder/SVA>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SVA_tF4D04A570299D8106DD273E4C6850A570B85E56E  List_1_get_Item_m1AC3B723705A37FCA21B472D010674EA850933B3_gshared_inline (List_1_tD40AE6D7A6AB19BD1993F05D20B4AB5EC723E6F9 * __this, int32_t ___index0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared (RuntimeObject * ___original0, const RuntimeMethod* method);
// !!0[] UnityEngine.GameObject::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* GameObject_GetComponentsInChildren_TisRuntimeObject_m6662AE3C936281A25097CCBD9098A9F85C69279A_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<CameraHolder/SVA>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_mC351223374416E4FB2D7FA59D7C2756212037C2C_gshared (List_1_tD40AE6D7A6AB19BD1993F05D20B4AB5EC723E6F9 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<CameraHolder/SVA>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mA1AFE8F34DCB403F8053BD652DB42122C24271E7_gshared (List_1_tD40AE6D7A6AB19BD1993F05D20B4AB5EC723E6F9 * __this, SVA_tF4D04A570299D8106DD273E4C6850A570B85E56E  ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<CameraHolder/SVA>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mCC0ACDFD7714C349891385D6AB31543DD9E72961_gshared (List_1_tD40AE6D7A6AB19BD1993F05D20B4AB5EC723E6F9 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponentInParent_TisRuntimeObject_mADA186D1675BEA6779C469918206294354385EC3_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Component_GetComponentsInChildren_TisRuntimeObject_mCA5B356D4B0824C6DE60A8E90E6A6D4188C56C2F_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared (const RuntimeMethod* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, int32_t ___index0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInChildren<UnityEngine.ParticleSystem>()
inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * Component_GetComponentInChildren_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_mA69550F4BF195DDCCCBC2BB18AFC20D10B68DB78 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mB377B32275A969E0D1A738DBC693DE8EB3593642_gshared)(__this, method);
}
// System.Void UnityEngine.ParticleSystem::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Stop_m8CBF9268DE7B5A40952B4977462B857B5F5AFB9D (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method);
// System.Boolean UnityEngine.ParticleSystem::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ParticleSystem_get_isPlaying_m36FD03CBF99EE4C243B01F37D77CB6B1CFA526BA (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Play_m28D27CC4CDC1D93195C75647E6F6DAECF8B6BC50 (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloat_mD731F47ED44C2D629F8E1C6DB15629C3E1B992A0 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___name0, float ___value1, const RuntimeMethod* method);
// System.Single UnityEngine.Screen::get_dpi()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Screen_get_dpi_m37167A82DE896C738517BBF75BFD70C616CCCF55 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void CameraHolder::Counter(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraHolder_Counter_mC0EA99ADEA2FE4E92B1477759C01B4C3AD7608D7 (CameraHolder_tA0DB3BD91D8E35159E794BEE6A382FE2B9188A10 * __this, int32_t ___count0, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method);
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUI_Button_m668EE382521BDEA241D719A9CF39B6672E2CA23F (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___position0, String_t* ___text1, const RuntimeMethod* method);
// System.Single UnityEngine.GUI::HorizontalSlider(UnityEngine.Rect,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GUI_HorizontalSlider_mC018F8CE4598BB5EFA2DA2253EF3818263E15BAF (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___position0, float ___value1, float ___leftValue2, float ___rightValue3, const RuntimeMethod* method);
// System.Void UnityEngine.GUI::DrawTexture(UnityEngine.Rect,UnityEngine.Texture,UnityEngine.ScaleMode,System.Boolean,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_DrawTexture_m080EEA5AC2C45C5FD36DDDC117B228DB84215FFD (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___position0, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___image1, int32_t ___scaleMode2, bool ___alphaBlend3, float ___imageAspect4, const RuntimeMethod* method);
// UnityEngine.ParticleSystem/MainModule UnityEngine.ParticleSystem::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B  ParticleSystem_get_main_m8F17DCC63679B15CE548BE83332FDB6635AE74A0 (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<CameraHolder/SVA>::get_Item(System.Int32)
inline SVA_tF4D04A570299D8106DD273E4C6850A570B85E56E  List_1_get_Item_m1AC3B723705A37FCA21B472D010674EA850933B3_inline (List_1_tD40AE6D7A6AB19BD1993F05D20B4AB5EC723E6F9 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  SVA_tF4D04A570299D8106DD273E4C6850A570B85E56E  (*) (List_1_tD40AE6D7A6AB19BD1993F05D20B4AB5EC723E6F9 *, int32_t, const RuntimeMethod*))List_1_get_Item_m1AC3B723705A37FCA21B472D010674EA850933B3_gshared_inline)(__this, ___index0, method);
}
// UnityEngine.Color UnityEngine.Color::HSVToRGB(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_HSVToRGB_m8B61783B65A70BC889424B9A64FD40D48E735FEF (float ___H0, float ___S1, float ___V2, const RuntimeMethod* method);
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method);
// UnityEngine.ParticleSystem/MinMaxGradient UnityEngine.ParticleSystem/MinMaxGradient::op_Implicit(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7  MinMaxGradient_op_Implicit_m5F938B5644AF6BE5DF525839E922B88456B614FA (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/MainModule::set_startColor(UnityEngine.ParticleSystem/MinMaxGradient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_startColor_m19663CAE16C6A546B7BC4B949EBA0CCE3DD51A42 (MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B * __this, MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7  ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared)(___original0, method);
}
// !!0[] UnityEngine.GameObject::GetComponentsInChildren<UnityEngine.ParticleSystem>()
inline ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7* GameObject_GetComponentsInChildren_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m5D162A911D8F5C1BAB92301936B1551BBA72BFF6 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7* (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponentsInChildren_TisRuntimeObject_m6662AE3C936281A25097CCBD9098A9F85C69279A_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<CameraHolder/SVA>::Clear()
inline void List_1_Clear_mC351223374416E4FB2D7FA59D7C2756212037C2C (List_1_tD40AE6D7A6AB19BD1993F05D20B4AB5EC723E6F9 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD40AE6D7A6AB19BD1993F05D20B4AB5EC723E6F9 *, const RuntimeMethod*))List_1_Clear_mC351223374416E4FB2D7FA59D7C2756212037C2C_gshared)(__this, method);
}
// UnityEngine.ParticleSystem/MinMaxGradient UnityEngine.ParticleSystem/MainModule::get_startColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7  MainModule_get_startColor_mC8BAD25B55ACF9586BAFEECF047CCE5268123DD4 (MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B * __this, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.ParticleSystem/MinMaxGradient::get_color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  MinMaxGradient_get_color_m8FA2F2F1E0B9C9E1DFE40CEA325BC5E863C59C90 (MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Color::RGBToHSV(UnityEngine.Color,System.Single&,System.Single&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color_RGBToHSV_mDC3A14DCF9D4A898AF97613CD07D94BFF8402194 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___rgbColor0, float* ___H1, float* ___S2, float* ___V3, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<CameraHolder/SVA>::Add(!0)
inline void List_1_Add_mA1AFE8F34DCB403F8053BD652DB42122C24271E7 (List_1_tD40AE6D7A6AB19BD1993F05D20B4AB5EC723E6F9 * __this, SVA_tF4D04A570299D8106DD273E4C6850A570B85E56E  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD40AE6D7A6AB19BD1993F05D20B4AB5EC723E6F9 *, SVA_tF4D04A570299D8106DD273E4C6850A570B85E56E , const RuntimeMethod*))List_1_Add_mA1AFE8F34DCB403F8053BD652DB42122C24271E7_gshared)(__this, ___item0, method);
}
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326 (String_t* ___axisName0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButton_m27BF2DDBF38A38787B83A13D3E6F0F88F7C834C1 (int32_t ___button0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E (const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE (const RuntimeMethod* method);
// System.Void UnityEngine.Cursor::set_visible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cursor_set_visible_m4747F0DC20D06D1932EC740C5CCC738C1664903D (bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Cursor::set_lockState(UnityEngine.CursorLockMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cursor_set_lockState_mC0739186A04F4C278F02E8C1714D99B491E3A217 (int32_t ___value0, const RuntimeMethod* method);
// System.Single CameraHolder::ClampAngle(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CameraHolder_ClampAngle_m4DA4FFCCE42FA8FB6BEDCDFB3380C4366FAA82AE (float ___angle0, float ___min1, float ___max2, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3 (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87 (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<CameraHolder/SVA>::.ctor()
inline void List_1__ctor_mCC0ACDFD7714C349891385D6AB31543DD9E72961 (List_1_tD40AE6D7A6AB19BD1993F05D20B4AB5EC723E6F9 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD40AE6D7A6AB19BD1993F05D20B4AB5EC723E6F9 *, const RuntimeMethod*))List_1__ctor_mCC0ACDFD7714C349891385D6AB31543DD9E72961_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.GameObject::FindWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_FindWithTag_mEF75D1FF1E55B338A77161FDCB68ED0A2A911DF3 (String_t* ___tag0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Void DamageCircle::SetCircleSize(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DamageCircle_SetCircleSize_m2E397908DB2EBA236A698BE84583FD355554D6E8 (DamageCircle_tB70A539EB31C5490ADB1DFA14B86E5E6953EF876 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___size1, const RuntimeMethod* method);
// System.Void DamageCircle::SetTargetCircle(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DamageCircle_SetTargetCircle_m6985DA2EF9BA51FDE3FCDDE7F79194F454CEEF80 (DamageCircle_tB70A539EB31C5490ADB1DFA14B86E5E6953EF876 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___size1, float ___shrinkTimer2, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void DamageCircle::SetAiCanAttackCirclePosSize(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DamageCircle_SetAiCanAttackCirclePosSize_mC7D523F83F23A1853A7EE9365E030DB5F98D8FF8 (DamageCircle_tB70A539EB31C5490ADB1DFA14B86E5E6953EF876 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___size1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Void DamageCircle::GenerateTargetCircleDeneme()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DamageCircle_GenerateTargetCircleDeneme_m2C3B48B1D5D14A0B21E0C0524E99E7D080C003C1 (DamageCircle_tB70A539EB31C5490ADB1DFA14B86E5E6953EF876 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB (const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void enemyPathMovement::setRange(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void enemyPathMovement_setRange_m1A3ACA9C6161883AD4D6D253839489631750C624_inline (enemyPathMovement_t2A082E51F0F47B4E09CD70F138BEF58C105BD216 * __this, float ___Range0, const RuntimeMethod* method);
// System.Void DynamicJoystick::set_MoveThreshold(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicJoystick_set_MoveThreshold_m5A53DE83993960EA2650FB12F596E8C48C561199 (DynamicJoystick_t675DA15D6A912CB9638176139FD810B7B051E867 * __this, float ___value0, const RuntimeMethod* method);
// System.Void Joystick::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_Start_m3B4EEAA0389B5CCCA1479ACC4A167376E74BC275 (Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_position()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  PointerEventData_get_position_mE65C1CF448C935678F7C2A6265B4F3906FD9D651_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 Joystick::ScreenPointToAnchoredPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Joystick_ScreenPointToAnchoredPosition_mAD769BA610FABC0D9C47294736AB0832C558D3FD (Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition0, const RuntimeMethod* method);
// System.Void UnityEngine.RectTransform::set_anchoredPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchoredPosition_m8143009B7D2B786DF8309D1D319F2212EFD24905 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// System.Void Joystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnPointerDown_mB2A665CAD2B74565B6A1ACE2CA5A98A66020CE18 (Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method);
// System.Void Joystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnPointerUp_m84FA57FCD3325BDEE02FED329B1C963C4DA2A037 (Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_m98AA5AF174918812B6E0C201C850FABB4A526813_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.RectTransform::get_anchoredPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  RectTransform_get_anchoredPosition_mFDC4F160F99634B2FBC73FE5FB1F4F4127CDD975 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method);
// System.Void Joystick::HandleInput(System.Single,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_HandleInput_m38CE2907CF406D1F4B327F197E0CCED1C6DD8CC7 (Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * __this, float ___magnitude0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___normalised1, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___radius2, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___cam3, const RuntimeMethod* method);
// System.Void Joystick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick__ctor_mF7C14D62A9A6B3BD77F6365BB88DE406A9CE4E08 (Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * __this, const RuntimeMethod* method);
// System.Void HealthController::SetDie(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HealthController_SetDie_m65412C2AC0FCF88E6D6380F06AE6DA3DFC8C576B_inline (HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 * __this, bool ___die0, const RuntimeMethod* method);
// System.Void HealthSystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthSystem__ctor_m0C9A993355EB5C4187AED5B1DB5C84A1B5833F7C (HealthSystem_t534958B833E6A966FF53C62231D4C34A751947D8 * __this, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// UnityEngine.Object UnityEngine.Object::FindObjectOfType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * Object_FindObjectOfType_m07215A5C789FC7C88754B64DFCF1313C55E2F6D2 (Type_t * ___type0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::FindGameObjectWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F (String_t* ___tag0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Text>()
inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010 (float* __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Animator>()
inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void HealthSystem::Die()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthSystem_Die_m10EE67C97BCB5506840DD454C617509378D5D6AD (HealthSystem_t534958B833E6A966FF53C62231D4C34A751947D8 * __this, const RuntimeMethod* method);
// System.Single Joystick::SnapFloat(System.Single,AxisOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_SnapFloat_m0A47278C9A57AC4A6696C0C13450F8F404580C19 (Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * __this, float ___value0, int32_t ___snapAxis1, const RuntimeMethod* method);
// System.Single Joystick::get_Horizontal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_get_Horizontal_m1AE640531EE5E28A63A8D5AC757F9753DDA56321 (Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * __this, const RuntimeMethod* method);
// System.Single Joystick::get_Vertical()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_get_Vertical_m56B4D1C75DABA23923EF2E9C20543858E90D23C2 (Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// AxisOptions Joystick::get_AxisOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Joystick_get_AxisOptions_m3098305D1A5F1F48444A1ADAEC7BD46E980E274B (Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * __this, const RuntimeMethod* method);
// System.Void Joystick::set_HandleRange(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_set_HandleRange_m7C2C550DE23BA7D39DD2015EFAC0DBB53087E0DD (Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * __this, float ___value0, const RuntimeMethod* method);
// System.Void Joystick::set_DeadZone(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_set_DeadZone_m9A107FE7A8EF41E9FBEB6979B1B17FD79C3F127C (Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * __this, float ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponentInParent<UnityEngine.Canvas>()
inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * Component_GetComponentInParent_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_m79D616348A09F5E2973F405F4F9D944744FAD6A5 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_mADA186D1675BEA6779C469918206294354385EC3_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.RectTransform::set_pivot(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_pivot_m94F32EF88DC4EC9CA96721F8EDD8BFBC4FD07335 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.RectTransform::set_anchorMin(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchorMin_mD9E6E95890B701A5190C12F5AE42E622246AF798 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.RectTransform::set_anchorMax(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchorMax_m67E04F54B5122804E32019D5FAE50C21CC67651D (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828 (const RuntimeMethod* method);
// System.Void Joystick::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnDrag_m1127276AFCEF63DE869AC5156DE7712810B6C46D (Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method);
// UnityEngine.RenderMode UnityEngine.Canvas::get_renderMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Canvas_get_renderMode_mAEC8A341577CC74EC89D5890E6D6E4A82B03574D (Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * __this, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Canvas::get_worldCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Canvas_get_worldCamera_mFE4C9FDA7996FE20AC5CA3CB45B4190C40122D51 (Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.RectTransformUtility::WorldToScreenPoint(UnityEngine.Camera,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  RectTransformUtility_WorldToScreenPoint_m92E801861EE14D73219C34A6175847C4A46105E1 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___cam0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPoint1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.RectTransform::get_sizeDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  RectTransform_get_sizeDelta_mCFAE8C916280C173AB79BE32B910376E310D1C50 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Division_m9E0ABD4CB731137B84249278B80D4C2624E58AC6_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Canvas::get_scaleFactor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Canvas_get_scaleFactor_m3F0D7E3B97B0493F4E98B2BBCA7A57BC1E1CB710 (Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Division_m63A593A281BC0B6C36FCFF399056E1DE9F4C01E0_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method);
// System.Void Joystick::FormatInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_FormatInput_m6EAB109EE0C7D5EB1389E2277AD72335EF140826 (Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2_get_magnitude_mD30DB8EB73C4A5CD395745AE1CA1C38DC61D2E85 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_normalized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_normalized_m1F7F7AA3B7AC2414F245395C3785880B847BF7F5 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_up_mCEC23A0CF0FC3A2070C557AFD9F84F3D9991866C (const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::Angle(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Angle_mEAAD1B809A8CF1CC22C54EF2ADC702B11DA704A9_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___from0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___to1, const RuntimeMethod* method);
// System.Boolean UnityEngine.RectTransformUtility::ScreenPointToLocalPointInRectangle(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RectTransformUtility_ScreenPointToLocalPointInRectangle_m9A7DB8DE3636CE91CDF6CE088A21B5DDF2678F03 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___rect0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPoint1, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___cam2, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * ___localPoint3, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.RectTransform::get_pivot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  RectTransform_get_pivot_m146F0BB5D3873FCEF3606DAFB8994BFA978095EE (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.RectTransform::get_anchorMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  RectTransform_get_anchorMax_mC1577047A20870209C9A6801B75FE6930AE56F1E (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_right_mF5A51F81961474E0A7A31C2757FD00921FB79C44 (const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_fixedDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_fixedDeltaTime_m8E94ECFF6A6A1D9B5D60BF82D116D540852484E5 (const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3,UnityEngine.ForceMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_m78B9D94F505E19F3C63461362AD6DE7EA0836700 (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___force0, int32_t ___mode1, const RuntimeMethod* method);
// System.Void VariableJoystick::SetMode(JoystickType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick_SetMode_m600C4C6E1FA830CF452EE33155AD60671BBEB04C (VariableJoystick_tEA2A86D8EE903904A4F3D9FA53B8F4B065A9EB9B * __this, int32_t ___joystickType0, const RuntimeMethod* method);
// System.Void Joystick::set_AxisOptions(AxisOptions)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Joystick_set_AxisOptions_m671D494CBF07962B24BF4024059715FA650BB9EF_inline (Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4 (Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * __this, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___value0, const RuntimeMethod* method);
// System.Void Joystick::set_SnapX(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Joystick_set_SnapX_m710022BEA478442D17908F10F5BA53375705AC3B_inline (Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Joystick::set_SnapY(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Joystick_set_SnapY_mAD4C6843FD698B99D23F21C3A15D9CE928289508_inline (Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 Joystick::get_Direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Joystick_get_Direction_mF002E7B698C393FF866864D4A552357C535D36C5 (Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Vector2::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector2_ToString_mBD48EFCDB703ACCDC29E86AEB0D4D62FBA50F840 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::InvokeRepeating(System.String,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_InvokeRepeating_mB77F4276826FBA696A150831D190875CB5802C70 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, String_t* ___methodName0, float ___time1, float ___repeatRate2, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::CancelInvoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_CancelInvoke_mAF87B47704B16B114F82AC6914E4DA9AE034095D (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localEulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localEulerAngles_m4C442107F523737ADAB54855FDC1777A9B71D545 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localEulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localEulerAngles_mB63076996124DC76E6902A81677A6E3C814C693B (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.AI.NavMeshAgent>()
inline NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * Component_GetComponent_TisNavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B_m15077FF184192C84FCF6B2A1FC8ECF53C9220F2F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Boolean UnityEngine.AI.NavMeshAgent::get_hasPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMeshAgent_get_hasPath_m0FD535ACA98272F1C5082C7EE600ECCB66F044CB (NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 enemyPathMovement::GetRandomPoint(UnityEngine.Transform,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  enemyPathMovement_GetRandomPoint_m3147C4277C2F26076E374C37EC4EF33557D5498B (enemyPathMovement_t2A082E51F0F47B4E09CD70F138BEF58C105BD216 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___point0, float ___radius1, const RuntimeMethod* method);
// System.Boolean UnityEngine.AI.NavMeshAgent::SetDestination(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMeshAgent_SetDestination_m244EFBCDB717576303DA711EE39572B865F43747 (NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___target0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline (float ___d0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a1, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, String_t* ___methodName0, float ___time1, const RuntimeMethod* method);
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline (Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * __this, UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___call0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Quaternion_get_eulerAngles_m3DA616CAD670235A407E8A7A75925AA8E22338C3 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::print(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Collections.IEnumerator attack::Shake(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* attack_Shake_m50B9EEA383EE1B738B8EBB3723D67874078E9B2B (attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C * __this, float ___duration0, float ___magnitude1, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Selectable::set_interactable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40 (Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * __this, bool ___value0, const RuntimeMethod* method);
// System.Double System.Math::Round(System.Double,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Math_Round_m394EEE2C796B3A1578E65037E0D57B3D6F9B1C70 (double ___value0, int32_t ___digits1, const RuntimeMethod* method);
// System.String System.Double::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Double_ToString_m87E4A4DC004A167CF0AE1F2D271BC20A708CE57D (double* __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::CancelInvoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_CancelInvoke_mAD4E486A74AF79DC1AFA880691EF839CDDE630A9 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, String_t* ___methodName0, const RuntimeMethod* method);
// System.Void attack/<Shake>d__31::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShakeU3Ed__31__ctor_m6D1D6C7CDEA9C2A1C97A6CF9994202273ECA3593 (U3CShakeU3Ed__31_tBAA002366DCAAB6F476A4FFBA668E6574340243D * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void cameraShaker/<Shake>d__0::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShakeU3Ed__0__ctor_m90531A490514EB236D09DAC7B3849112760C5426 (U3CShakeU3Ed__0_t56ABF31C41CA87AFA3AC45DD82CF6F23D6F283A7 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void enemyHealthSystem::Die()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void enemyHealthSystem_Die_mE7109B277F7937E55D690877CA130348960C24C7 (enemyHealthSystem_tD9957A42AEA49305BD2A45987B6A98EB509800A8 * __this, const RuntimeMethod* method);
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
// System.Single HealthController::GetHealthMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HealthController_GetHealthMax_m1AEB454DBA5B8AEA4353044AD37F7C9E7467760A (HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 * __this, const RuntimeMethod* method);
// System.Int32 HealthController::GetHealthCurrent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HealthController_GetHealthCurrent_m0A98300D4D5C8BDEE92DC8D4D66C409CA4F4B9D7_inline (HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 * __this, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.Void enemyHealthSystem1::DeadStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void enemyHealthSystem1_DeadStatus_m49D678D7303CB34E2E605F0DF888C65AAAD38D55 (enemyHealthSystem1_t9D32045CB414C7BF3B895294B1044F2D9FFA0029 * __this, const RuntimeMethod* method);
// System.Boolean DamageCircle::IsOutsideCircle(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DamageCircle_IsOutsideCircle_mD44C47C9E57CD4F1EF449B065B84CC55624F78D7 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// System.Boolean HealthController::IsDead()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool HealthController_IsDead_mE7D0AA18C03226E2D5371D73C67C9F7CF86995D6_inline (HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 * __this, const RuntimeMethod* method);
// System.Void HealthController::Damage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthController_Damage_m72DC74C513F1A4FB7DA30BAAE1154A53B686B832 (HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 * __this, int32_t ___amount0, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void HealthController::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthController__ctor_mE7C9A5C8657BF0AA3875B191C910997CF701CCE1 (HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 * __this, int32_t ___healthMax0, int32_t ___healthCurrent1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Random::get_insideUnitSphere()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Random_get_insideUnitSphere_m43E5AE1F6A6CFA892BAE6E3ED71BEBFCE308CE90 (const RuntimeMethod* method);
// System.Boolean UnityEngine.AI.NavMesh::SamplePosition(UnityEngine.Vector3,UnityEngine.AI.NavMeshHit&,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMesh_SamplePosition_m9675E148D95E1D92ED75DC608CAA33E75ABCA05E (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___sourcePosition0, NavMeshHit_t62B242C636F3B036AE65C266EC79A2B62330FF9D * ___hit1, float ___maxDistance2, int32_t ___areaMask3, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.AI.NavMeshHit::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  NavMeshHit_get_position_m66845935ED76B2480F72EE6628EFD9D6BF35B39A (NavMeshHit_t62B242C636F3B036AE65C266EC79A2B62330FF9D * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// System.Boolean enemyPathMovement::RandomPoint(UnityEngine.Vector3,System.Single,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool enemyPathMovement_RandomPoint_m384C5A48C2FE2C91DCF89B25BAFC394E2F4571E9 (enemyPathMovement_t2A082E51F0F47B4E09CD70F138BEF58C105BD216 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___center0, float ___range1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___result2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50 (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_black()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_black_m67E91EB7017FC74D9AB5ADEF6B6929B7EFC9A982 (const RuntimeMethod* method);
// System.Void UnityEngine.Debug::DrawRay(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_DrawRay_m3954B3FFA675C0660ED438E8B705B45EDE393C60 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___start0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___dir1, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color2, float ___duration3, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_LookAt_m996FADE2327B0A4412FF4A5179B8BABD9EB849BA (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<Joystick>()
inline Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * Object_FindObjectOfType_TisJoystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873_m7209E3C1CAB57BED00FB7BEF8EEF44EBADFD5C7A (const RuntimeMethod* method)
{
	return ((  Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared)(method);
}
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Normalize_m7C9B0E84BCB84D54A16D1212F3DE5AB2A386FCD9 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_right_mA8EB1882CCE8759766544448308C88D9200F06CE (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void move::movement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void move_movement_m07515DDC4F7DB85882E26C61AFA52D393F815932 (move_tF5C934E0EAF4295D46D7DAA6C508AFAB1B699276 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_forward(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_forward_mAE46B156F55F2F90AB495B17F7C20BF59A5D7D4D (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::get_sqrMagnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mF489F0EF7E88FF046BA36767ECC50B89674C925A (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::Dot(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Dot_mB2DFFDDA2881BA755F0B75CB530A39E8EBE70B48_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___lhs0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rhs1, const RuntimeMethod* method);
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
// System.Void AiCanAttackCircle::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AiCanAttackCircle_Awake_mF4E09E554D2F1B97F0F67BB8E3BB9AE0149AA0EF (AiCanAttackCircle_t57AE50A882353B23FA5A30DF81FBEE01909E19B6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AiCanAttackCircle_t57AE50A882353B23FA5A30DF81FBEE01909E19B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instance = this;
		((AiCanAttackCircle_t57AE50A882353B23FA5A30DF81FBEE01909E19B6_StaticFields*)il2cpp_codegen_static_fields_for(AiCanAttackCircle_t57AE50A882353B23FA5A30DF81FBEE01909E19B6_il2cpp_TypeInfo_var))->set_Instance_4(__this);
		// }
		return;
	}
}
// System.Void AiCanAttackCircle::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AiCanAttackCircle_Update_m5D606AE8B6A36A4B0A471CD1C9015DC9BAC9B170 (AiCanAttackCircle_t57AE50A882353B23FA5A30DF81FBEE01909E19B6 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void AiCanAttackCircle::OnDrawGizmosSelected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AiCanAttackCircle_OnDrawGizmosSelected_m48D616AAD18BBD9123E30226E1F82DE58D4462BC (AiCanAttackCircle_t57AE50A882353B23FA5A30DF81FBEE01909E19B6 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void AiCanAttackCircle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AiCanAttackCircle__ctor_m970EE8FCA4EBCC06D2CAE42D5D620F474CCF94DD (AiCanAttackCircle_t57AE50A882353B23FA5A30DF81FBEE01909E19B6 * __this, const RuntimeMethod* method)
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
// System.Void AnimationController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationController_Start_mC4FA2010CE819DE174F849DF8E31BD919545D818 (AnimationController_t8EE5B6538AC1173041A0CCFDBC4B61897DA03B67 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_mA69550F4BF195DDCCCBC2BB18AFC20D10B68DB78_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// walkSmoke = transform.GetChild(3).GetComponentInChildren<ParticleSystem>();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_0, 3, /*hidden argument*/NULL);
		NullCheck(L_1);
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_2;
		L_2 = Component_GetComponentInChildren_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_mA69550F4BF195DDCCCBC2BB18AFC20D10B68DB78(L_1, /*hidden argument*/Component_GetComponentInChildren_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_mA69550F4BF195DDCCCBC2BB18AFC20D10B68DB78_RuntimeMethod_var);
		__this->set_walkSmoke_5(L_2);
		// bloodingAnim = transform.GetChild(4).GetComponentInChildren<ParticleSystem>();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_3, 4, /*hidden argument*/NULL);
		NullCheck(L_4);
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_5;
		L_5 = Component_GetComponentInChildren_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_mA69550F4BF195DDCCCBC2BB18AFC20D10B68DB78(L_4, /*hidden argument*/Component_GetComponentInChildren_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_mA69550F4BF195DDCCCBC2BB18AFC20D10B68DB78_RuntimeMethod_var);
		__this->set_bloodingAnim_6(L_5);
		// bloodingAnim.Stop();
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_6 = __this->get_bloodingAnim_6();
		NullCheck(L_6);
		ParticleSystem_Stop_m8CBF9268DE7B5A40952B4977462B857B5F5AFB9D(L_6, /*hidden argument*/NULL);
		// walkSmoke.Stop();
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_7 = __this->get_walkSmoke_5();
		NullCheck(L_7);
		ParticleSystem_Stop_m8CBF9268DE7B5A40952B4977462B857B5F5AFB9D(L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AnimationController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationController_Update_m4EF665B6FD8E3F9E7D1805E4897DDED1B28CA98F (AnimationController_t8EE5B6538AC1173041A0CCFDBC4B61897DA03B67 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void AnimationController::Attack(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationController_Attack_m7593A3BFBC9F5C80B3C5D93DCF9C701DEF300CFF (AnimationController_t8EE5B6538AC1173041A0CCFDBC4B61897DA03B67 * __this, bool ___attackStatus0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1387CA5E3672B0B088B1C7438E3CB9614FEF2011);
		s_Il2CppMethodInitialized = true;
	}
	{
		// animator.SetBool("attack", attackStatus);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0 = __this->get_animator_4();
		bool L_1 = ___attackStatus0;
		NullCheck(L_0);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_0, _stringLiteral1387CA5E3672B0B088B1C7438E3CB9614FEF2011, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AnimationController::Move(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationController_Move_m2D73D95D8C6AD40C222E55398FB346BACB97DD1D (AnimationController_t8EE5B6538AC1173041A0CCFDBC4B61897DA03B67 * __this, float ___horizontal0, float ___vertical1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CCAD0804681D389662AE4D59666F2C220293CCE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA50160048687C05C4A6257A7E3773F0E2F8B6A26);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (horizontal <= 0.3 && horizontal >= -0.3 && vertical <= 0.3 && vertical >= -0.3)
		float L_0 = ___horizontal0;
		if ((!(((double)((double)((double)L_0))) <= ((double)(0.29999999999999999)))))
		{
			goto IL_0041;
		}
	}
	{
		float L_1 = ___horizontal0;
		if ((!(((double)((double)((double)L_1))) >= ((double)(-0.29999999999999999)))))
		{
			goto IL_0041;
		}
	}
	{
		float L_2 = ___vertical1;
		if ((!(((double)((double)((double)L_2))) <= ((double)(0.29999999999999999)))))
		{
			goto IL_0041;
		}
	}
	{
		float L_3 = ___vertical1;
		if ((!(((double)((double)((double)L_3))) >= ((double)(-0.29999999999999999)))))
		{
			goto IL_0041;
		}
	}
	{
		// walkSmoke.Stop();
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_4 = __this->get_walkSmoke_5();
		NullCheck(L_4);
		ParticleSystem_Stop_m8CBF9268DE7B5A40952B4977462B857B5F5AFB9D(L_4, /*hidden argument*/NULL);
		// }
		goto IL_0059;
	}

IL_0041:
	{
		// else if (!walkSmoke.isPlaying)
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_5 = __this->get_walkSmoke_5();
		NullCheck(L_5);
		bool L_6;
		L_6 = ParticleSystem_get_isPlaying_m36FD03CBF99EE4C243B01F37D77CB6B1CFA526BA(L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0059;
		}
	}
	{
		// walkSmoke.Play();
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_7 = __this->get_walkSmoke_5();
		NullCheck(L_7);
		ParticleSystem_Play_m28D27CC4CDC1D93195C75647E6F6DAECF8B6BC50(L_7, /*hidden argument*/NULL);
	}

IL_0059:
	{
		// animator.SetFloat("horizontal", horizontal);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_8 = __this->get_animator_4();
		float L_9 = ___horizontal0;
		NullCheck(L_8);
		Animator_SetFloat_mD731F47ED44C2D629F8E1C6DB15629C3E1B992A0(L_8, _stringLiteralA50160048687C05C4A6257A7E3773F0E2F8B6A26, L_9, /*hidden argument*/NULL);
		// animator.SetFloat("vertical", vertical);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_10 = __this->get_animator_4();
		float L_11 = ___vertical1;
		NullCheck(L_10);
		Animator_SetFloat_mD731F47ED44C2D629F8E1C6DB15629C3E1B992A0(L_10, _stringLiteral9CCAD0804681D389662AE4D59666F2C220293CCE, L_11, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AnimationController::GetDamage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationController_GetDamage_mD76E35362B1261F9BCB7A8D04D00EEC4EADA765E (AnimationController_t8EE5B6538AC1173041A0CCFDBC4B61897DA03B67 * __this, const RuntimeMethod* method)
{
	{
		// if(!bloodingAnim.isPlaying)
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_0 = __this->get_bloodingAnim_6();
		NullCheck(L_0);
		bool L_1;
		L_1 = ParticleSystem_get_isPlaying_m36FD03CBF99EE4C243B01F37D77CB6B1CFA526BA(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		// bloodingAnim.Play();
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_2 = __this->get_bloodingAnim_6();
		NullCheck(L_2);
		ParticleSystem_Play_m28D27CC4CDC1D93195C75647E6F6DAECF8B6BC50(L_2, /*hidden argument*/NULL);
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Void AnimationController::Dodge()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationController_Dodge_mC85841F7C7D8B9BC02B9169E7FC0B7B6DC03597C (AnimationController_t8EE5B6538AC1173041A0CCFDBC4B61897DA03B67 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void AnimationController::Die()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationController_Die_m97463A6CF2D21F29AE504F078D926FE8F2A7CD00 (AnimationController_t8EE5B6538AC1173041A0CCFDBC4B61897DA03B67 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9FBF31E575806B916FC0F7315D0359EC2699DCC2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// animator.SetBool("die", true);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0 = __this->get_animator_4();
		NullCheck(L_0);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_0, _stringLiteral9FBF31E575806B916FC0F7315D0359EC2699DCC2, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AnimationController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationController__ctor_mD70B26881DF564CDFD37D6E5EEABFC975DC2368C (AnimationController_t8EE5B6538AC1173041A0CCFDBC4B61897DA03B67 * __this, const RuntimeMethod* method)
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
// System.Void CameraHolder::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraHolder_Start_m2A51750F0F69DE0DBE0FAD3B841EF913C80377CA (CameraHolder_tA0DB3BD91D8E35159E794BEE6A382FE2B9188A10 * __this, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (Screen.dpi < 1) windowDpi = 1;
		float L_0;
		L_0 = Screen_get_dpi_m37167A82DE896C738517BBF75BFD70C616CCCF55(/*hidden argument*/NULL);
		if ((!(((float)L_0) < ((float)(1.0f)))))
		{
			goto IL_0017;
		}
	}
	{
		// if (Screen.dpi < 1) windowDpi = 1;
		__this->set_windowDpi_13((1.0f));
	}

IL_0017:
	{
		// if (Screen.dpi < 200) windowDpi = 1;
		float L_1;
		L_1 = Screen_get_dpi_m37167A82DE896C738517BBF75BFD70C616CCCF55(/*hidden argument*/NULL);
		if ((!(((float)L_1) < ((float)(200.0f)))))
		{
			goto IL_0030;
		}
	}
	{
		// if (Screen.dpi < 200) windowDpi = 1;
		__this->set_windowDpi_13((1.0f));
		goto IL_0041;
	}

IL_0030:
	{
		// else windowDpi = Screen.dpi / 200f;
		float L_2;
		L_2 = Screen_get_dpi_m37167A82DE896C738517BBF75BFD70C616CCCF55(/*hidden argument*/NULL);
		__this->set_windowDpi_13(((float)((float)L_2/(float)(200.0f))));
	}

IL_0041:
	{
		// var angles = transform.eulerAngles;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// x = angles.y;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_0;
		float L_6 = L_5.get_y_3();
		__this->set_x_11(L_6);
		// y = angles.x;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = V_0;
		float L_8 = L_7.get_x_2();
		__this->set_y_12(L_8);
		// Counter(0);
		CameraHolder_Counter_mC0EA99ADEA2FE4E92B1477759C01B4C3AD7608D7(__this, 0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CameraHolder::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraHolder_OnGUI_mADB7FDC6E933C2591E5168BA12A41F4AB336057D (CameraHolder_tA0DB3BD91D8E35159E794BEE6A382FE2B9188A10 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1AC3B723705A37FCA21B472D010674EA850933B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A2750E5B8E57EE3FBDD87D9399164909FF096B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65A5AB28932A11AF332680CE7BFB56F9598E7571);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAC6541F6BB318820350428597DC551D4F772C7C5);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7* V_1 = NULL;
	int32_t V_2 = 0;
	MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// if (GUI.Button(new Rect(5 * windowDpi, 5 * windowDpi, 110 * windowDpi, 35 * windowDpi), "Previous effect"))
		float L_0 = __this->get_windowDpi_13();
		float L_1 = __this->get_windowDpi_13();
		float L_2 = __this->get_windowDpi_13();
		float L_3 = __this->get_windowDpi_13();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_4), ((float)il2cpp_codegen_multiply((float)(5.0f), (float)L_0)), ((float)il2cpp_codegen_multiply((float)(5.0f), (float)L_1)), ((float)il2cpp_codegen_multiply((float)(110.0f), (float)L_2)), ((float)il2cpp_codegen_multiply((float)(35.0f), (float)L_3)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = GUI_Button_m668EE382521BDEA241D719A9CF39B6672E2CA23F(L_4, _stringLiteral65A5AB28932A11AF332680CE7BFB56F9598E7571, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0048;
		}
	}
	{
		// Counter(-1);
		CameraHolder_Counter_mC0EA99ADEA2FE4E92B1477759C01B4C3AD7608D7(__this, (-1), /*hidden argument*/NULL);
	}

IL_0048:
	{
		// if (GUI.Button(new Rect(120 * windowDpi, 5 * windowDpi, 110 * windowDpi, 35 * windowDpi), "Play again"))
		float L_6 = __this->get_windowDpi_13();
		float L_7 = __this->get_windowDpi_13();
		float L_8 = __this->get_windowDpi_13();
		float L_9 = __this->get_windowDpi_13();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_10;
		memset((&L_10), 0, sizeof(L_10));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_10), ((float)il2cpp_codegen_multiply((float)(120.0f), (float)L_6)), ((float)il2cpp_codegen_multiply((float)(5.0f), (float)L_7)), ((float)il2cpp_codegen_multiply((float)(110.0f), (float)L_8)), ((float)il2cpp_codegen_multiply((float)(35.0f), (float)L_9)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = GUI_Button_m668EE382521BDEA241D719A9CF39B6672E2CA23F(L_10, _stringLiteral0A2750E5B8E57EE3FBDD87D9399164909FF096B1, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0090;
		}
	}
	{
		// Counter(0);
		CameraHolder_Counter_mC0EA99ADEA2FE4E92B1477759C01B4C3AD7608D7(__this, 0, /*hidden argument*/NULL);
	}

IL_0090:
	{
		// if (GUI.Button(new Rect(235 * windowDpi, 5 * windowDpi, 110 * windowDpi, 35 * windowDpi), "Next effect"))
		float L_12 = __this->get_windowDpi_13();
		float L_13 = __this->get_windowDpi_13();
		float L_14 = __this->get_windowDpi_13();
		float L_15 = __this->get_windowDpi_13();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_16;
		memset((&L_16), 0, sizeof(L_16));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_16), ((float)il2cpp_codegen_multiply((float)(235.0f), (float)L_12)), ((float)il2cpp_codegen_multiply((float)(5.0f), (float)L_13)), ((float)il2cpp_codegen_multiply((float)(110.0f), (float)L_14)), ((float)il2cpp_codegen_multiply((float)(35.0f), (float)L_15)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = GUI_Button_m668EE382521BDEA241D719A9CF39B6672E2CA23F(L_16, _stringLiteralAC6541F6BB318820350428597DC551D4F772C7C5, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_00d8;
		}
	}
	{
		// Counter(+1);
		CameraHolder_Counter_mC0EA99ADEA2FE4E92B1477759C01B4C3AD7608D7(__this, 1, /*hidden argument*/NULL);
	}

IL_00d8:
	{
		// StartColor = HueColor;
		float L_18 = __this->get_HueColor_18();
		__this->set_StartColor_17(L_18);
		// HueColor = GUI.HorizontalSlider(new Rect(5 * windowDpi, 45 * windowDpi, 340 * windowDpi, 35 * windowDpi), HueColor, 0, 1);
		float L_19 = __this->get_windowDpi_13();
		float L_20 = __this->get_windowDpi_13();
		float L_21 = __this->get_windowDpi_13();
		float L_22 = __this->get_windowDpi_13();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_23;
		memset((&L_23), 0, sizeof(L_23));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_23), ((float)il2cpp_codegen_multiply((float)(5.0f), (float)L_19)), ((float)il2cpp_codegen_multiply((float)(45.0f), (float)L_20)), ((float)il2cpp_codegen_multiply((float)(340.0f), (float)L_21)), ((float)il2cpp_codegen_multiply((float)(35.0f), (float)L_22)), /*hidden argument*/NULL);
		float L_24 = __this->get_HueColor_18();
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		float L_25;
		L_25 = GUI_HorizontalSlider_mC018F8CE4598BB5EFA2DA2253EF3818263E15BAF(L_23, L_24, (0.0f), (1.0f), /*hidden argument*/NULL);
		__this->set_HueColor_18(L_25);
		// GUI.DrawTexture(new Rect(5 * windowDpi, 65 * windowDpi, 340 * windowDpi, 15 * windowDpi), HueTexture, ScaleMode.StretchToFill, false, 0);
		float L_26 = __this->get_windowDpi_13();
		float L_27 = __this->get_windowDpi_13();
		float L_28 = __this->get_windowDpi_13();
		float L_29 = __this->get_windowDpi_13();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_30;
		memset((&L_30), 0, sizeof(L_30));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_30), ((float)il2cpp_codegen_multiply((float)(5.0f), (float)L_26)), ((float)il2cpp_codegen_multiply((float)(65.0f), (float)L_27)), ((float)il2cpp_codegen_multiply((float)(340.0f), (float)L_28)), ((float)il2cpp_codegen_multiply((float)(15.0f), (float)L_29)), /*hidden argument*/NULL);
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_31 = __this->get_HueTexture_19();
		GUI_DrawTexture_m080EEA5AC2C45C5FD36DDDC117B228DB84215FFD(L_30, L_31, 0, (bool)0, (0.0f), /*hidden argument*/NULL);
		// if (HueColor != StartColor)
		float L_32 = __this->get_HueColor_18();
		float L_33 = __this->get_StartColor_17();
		if ((((float)L_32) == ((float)L_33)))
		{
			goto IL_0229;
		}
	}
	{
		// int i = 0;
		V_0 = 0;
		// foreach (var ps in particleSystems)
		ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7* L_34 = __this->get_particleSystems_20();
		V_1 = L_34;
		V_2 = 0;
		goto IL_0220;
	}

IL_019c:
	{
		// foreach (var ps in particleSystems)
		ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7* L_35 = V_1;
		int32_t L_36 = V_2;
		NullCheck(L_35);
		int32_t L_37 = L_36;
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		// var main = ps.main;
		NullCheck(L_38);
		MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B  L_39;
		L_39 = ParticleSystem_get_main_m8F17DCC63679B15CE548BE83332FDB6635AE74A0(L_38, /*hidden argument*/NULL);
		V_3 = L_39;
		// Color colorHSV = Color.HSVToRGB(HueColor + H * 0, svList[i].S, svList[i].V);
		float L_40 = __this->get_HueColor_18();
		float L_41 = __this->get_H_22();
		List_1_tD40AE6D7A6AB19BD1993F05D20B4AB5EC723E6F9 * L_42 = __this->get_svList_21();
		int32_t L_43 = V_0;
		NullCheck(L_42);
		SVA_tF4D04A570299D8106DD273E4C6850A570B85E56E  L_44;
		L_44 = List_1_get_Item_m1AC3B723705A37FCA21B472D010674EA850933B3_inline(L_42, L_43, /*hidden argument*/List_1_get_Item_m1AC3B723705A37FCA21B472D010674EA850933B3_RuntimeMethod_var);
		float L_45 = L_44.get_S_0();
		List_1_tD40AE6D7A6AB19BD1993F05D20B4AB5EC723E6F9 * L_46 = __this->get_svList_21();
		int32_t L_47 = V_0;
		NullCheck(L_46);
		SVA_tF4D04A570299D8106DD273E4C6850A570B85E56E  L_48;
		L_48 = List_1_get_Item_m1AC3B723705A37FCA21B472D010674EA850933B3_inline(L_46, L_47, /*hidden argument*/List_1_get_Item_m1AC3B723705A37FCA21B472D010674EA850933B3_RuntimeMethod_var);
		float L_49 = L_48.get_V_1();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_50;
		L_50 = Color_HSVToRGB_m8B61783B65A70BC889424B9A64FD40D48E735FEF(((float)il2cpp_codegen_add((float)L_40, (float)((float)il2cpp_codegen_multiply((float)L_41, (float)(0.0f))))), L_45, L_49, /*hidden argument*/NULL);
		V_4 = L_50;
		// main.startColor = new Color(colorHSV.r, colorHSV.g, colorHSV.b, svList[i].A);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_51 = V_4;
		float L_52 = L_51.get_r_0();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_53 = V_4;
		float L_54 = L_53.get_g_1();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_55 = V_4;
		float L_56 = L_55.get_b_2();
		List_1_tD40AE6D7A6AB19BD1993F05D20B4AB5EC723E6F9 * L_57 = __this->get_svList_21();
		int32_t L_58 = V_0;
		NullCheck(L_57);
		SVA_tF4D04A570299D8106DD273E4C6850A570B85E56E  L_59;
		L_59 = List_1_get_Item_m1AC3B723705A37FCA21B472D010674EA850933B3_inline(L_57, L_58, /*hidden argument*/List_1_get_Item_m1AC3B723705A37FCA21B472D010674EA850933B3_RuntimeMethod_var);
		float L_60 = L_59.get_A_2();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_61;
		memset((&L_61), 0, sizeof(L_61));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_61), L_52, L_54, L_56, L_60, /*hidden argument*/NULL);
		MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7  L_62;
		L_62 = MinMaxGradient_op_Implicit_m5F938B5644AF6BE5DF525839E922B88456B614FA(L_61, /*hidden argument*/NULL);
		MainModule_set_startColor_m19663CAE16C6A546B7BC4B949EBA0CCE3DD51A42((MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B *)(&V_3), L_62, /*hidden argument*/NULL);
		// i++;
		int32_t L_63 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_63, (int32_t)1));
		int32_t L_64 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_64, (int32_t)1));
	}

IL_0220:
	{
		// foreach (var ps in particleSystems)
		int32_t L_65 = V_2;
		ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7* L_66 = V_1;
		NullCheck(L_66);
		if ((((int32_t)L_65) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_66)->max_length))))))
		{
			goto IL_019c;
		}
	}

IL_0229:
	{
		// }
		return;
	}
}
// System.Void CameraHolder::Counter(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraHolder_Counter_mC0EA99ADEA2FE4E92B1477759C01B4C3AD7608D7 (CameraHolder_tA0DB3BD91D8E35159E794BEE6A382FE2B9188A10 * __this, int32_t ___count0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentsInChildren_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m5D162A911D8F5C1BAB92301936B1551BBA72BFF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mA1AFE8F34DCB403F8053BD652DB42122C24271E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mC351223374416E4FB2D7FA59D7C2756212037C2C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7* V_0 = NULL;
	int32_t V_1 = 0;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_2;
	memset((&V_2), 0, sizeof(V_2));
	SVA_tF4D04A570299D8106DD273E4C6850A570B85E56E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B  V_4;
	memset((&V_4), 0, sizeof(V_4));
	MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7  V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// Prefab += count;
		int32_t L_0 = __this->get_Prefab_15();
		int32_t L_1 = ___count0;
		__this->set_Prefab_15(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)));
		// if (Prefab > Prefabs.Length - 1)
		int32_t L_2 = __this->get_Prefab_15();
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_3 = __this->get_Prefabs_14();
		NullCheck(L_3);
		if ((((int32_t)L_2) <= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))), (int32_t)1)))))
		{
			goto IL_0029;
		}
	}
	{
		// Prefab = 0;
		__this->set_Prefab_15(0);
		// }
		goto IL_0042;
	}

IL_0029:
	{
		// else if (Prefab < 0)
		int32_t L_4 = __this->get_Prefab_15();
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_0042;
		}
	}
	{
		// Prefab = Prefabs.Length - 1;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_5 = __this->get_Prefabs_14();
		NullCheck(L_5);
		__this->set_Prefab_15(((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))), (int32_t)1)));
	}

IL_0042:
	{
		// if (Instance != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_Instance_16();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_6, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_005b;
		}
	}
	{
		// Destroy(Instance);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = __this->get_Instance_16();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_8, /*hidden argument*/NULL);
	}

IL_005b:
	{
		// Instance = Instantiate(Prefabs[Prefab]);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_9 = __this->get_Prefabs_14();
		int32_t L_10 = __this->get_Prefab_15();
		NullCheck(L_9);
		int32_t L_11 = L_10;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13;
		L_13 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_12, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		__this->set_Instance_16(L_13);
		// particleSystems = Instance.GetComponentsInChildren<ParticleSystem>(); //Get color from current instance
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = __this->get_Instance_16();
		NullCheck(L_14);
		ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7* L_15;
		L_15 = GameObject_GetComponentsInChildren_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m5D162A911D8F5C1BAB92301936B1551BBA72BFF6(L_14, /*hidden argument*/GameObject_GetComponentsInChildren_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m5D162A911D8F5C1BAB92301936B1551BBA72BFF6_RuntimeMethod_var);
		__this->set_particleSystems_20(L_15);
		// svList.Clear();
		List_1_tD40AE6D7A6AB19BD1993F05D20B4AB5EC723E6F9 * L_16 = __this->get_svList_21();
		NullCheck(L_16);
		List_1_Clear_mC351223374416E4FB2D7FA59D7C2756212037C2C(L_16, /*hidden argument*/List_1_Clear_mC351223374416E4FB2D7FA59D7C2756212037C2C_RuntimeMethod_var);
		// foreach (var ps in particleSystems)
		ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7* L_17 = __this->get_particleSystems_20();
		V_0 = L_17;
		V_1 = 0;
		goto IL_00f4;
	}

IL_009a:
	{
		// foreach (var ps in particleSystems)
		ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7* L_18 = V_0;
		int32_t L_19 = V_1;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		// Color baseColor = ps.main.startColor.color;
		NullCheck(L_21);
		MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B  L_22;
		L_22 = ParticleSystem_get_main_m8F17DCC63679B15CE548BE83332FDB6635AE74A0(L_21, /*hidden argument*/NULL);
		V_4 = L_22;
		MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7  L_23;
		L_23 = MainModule_get_startColor_mC8BAD25B55ACF9586BAFEECF047CCE5268123DD4((MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B *)(&V_4), /*hidden argument*/NULL);
		V_5 = L_23;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_24;
		L_24 = MinMaxGradient_get_color_m8FA2F2F1E0B9C9E1DFE40CEA325BC5E863C59C90((MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 *)(&V_5), /*hidden argument*/NULL);
		V_2 = L_24;
		// SVA baseSVA = new SVA();
		il2cpp_codegen_initobj((&V_3), sizeof(SVA_tF4D04A570299D8106DD273E4C6850A570B85E56E ));
		// Color.RGBToHSV(baseColor, out H, out baseSVA.S, out baseSVA.V);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_25 = V_2;
		float* L_26 = __this->get_address_of_H_22();
		float* L_27 = (&V_3)->get_address_of_S_0();
		float* L_28 = (&V_3)->get_address_of_V_1();
		Color_RGBToHSV_mDC3A14DCF9D4A898AF97613CD07D94BFF8402194(L_25, (float*)L_26, (float*)L_27, (float*)L_28, /*hidden argument*/NULL);
		// baseSVA.A = baseColor.a;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_29 = V_2;
		float L_30 = L_29.get_a_3();
		(&V_3)->set_A_2(L_30);
		// svList.Add(baseSVA);
		List_1_tD40AE6D7A6AB19BD1993F05D20B4AB5EC723E6F9 * L_31 = __this->get_svList_21();
		SVA_tF4D04A570299D8106DD273E4C6850A570B85E56E  L_32 = V_3;
		NullCheck(L_31);
		List_1_Add_mA1AFE8F34DCB403F8053BD652DB42122C24271E7(L_31, L_32, /*hidden argument*/List_1_Add_mA1AFE8F34DCB403F8053BD652DB42122C24271E7_RuntimeMethod_var);
		int32_t L_33 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1));
	}

IL_00f4:
	{
		// foreach (var ps in particleSystems)
		int32_t L_34 = V_1;
		ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7* L_35 = V_0;
		NullCheck(L_35);
		if ((((int32_t)L_34) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_35)->max_length))))))
		{
			goto IL_009a;
		}
	}
	{
		// }
		return;
	}
}
// System.Void CameraHolder::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraHolder_LateUpdate_m1D9AF7E927E8770D3F460F512226D2409A440DBE (CameraHolder_tA0DB3BD91D8E35159E794BEE6A382FE2B9188A10 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// if (currDistance < 2)
		float L_0 = __this->get_currDistance_5();
		if ((!(((float)L_0) < ((float)(2.0f)))))
		{
			goto IL_0018;
		}
	}
	{
		// currDistance = 2;
		__this->set_currDistance_5((2.0f));
	}

IL_0018:
	{
		// currDistance -= Input.GetAxis("Mouse ScrollWheel") * 2;
		float L_1 = __this->get_currDistance_5();
		float L_2;
		L_2 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0, /*hidden argument*/NULL);
		__this->set_currDistance_5(((float)il2cpp_codegen_subtract((float)L_1, (float)((float)il2cpp_codegen_multiply((float)L_2, (float)(2.0f))))));
		// if (Holder && (Input.GetMouseButton(0) || Input.GetMouseButton(1)))
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = __this->get_Holder_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0197;
		}
	}
	{
		bool L_5;
		L_5 = Input_GetMouseButton_m27BF2DDBF38A38787B83A13D3E6F0F88F7C834C1(0, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0058;
		}
	}
	{
		bool L_6;
		L_6 = Input_GetMouseButton_m27BF2DDBF38A38787B83A13D3E6F0F88F7C834C1(1, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0197;
		}
	}

IL_0058:
	{
		// var pos = Input.mousePosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		V_0 = L_7;
		// float dpiScale = 1;
		V_1 = (1.0f);
		// if (Screen.dpi < 1) dpiScale = 1;
		float L_8;
		L_8 = Screen_get_dpi_m37167A82DE896C738517BBF75BFD70C616CCCF55(/*hidden argument*/NULL);
		if ((!(((float)L_8) < ((float)(1.0f)))))
		{
			goto IL_0076;
		}
	}
	{
		// if (Screen.dpi < 1) dpiScale = 1;
		V_1 = (1.0f);
	}

IL_0076:
	{
		// if (Screen.dpi < 200) dpiScale = 1;
		float L_9;
		L_9 = Screen_get_dpi_m37167A82DE896C738517BBF75BFD70C616CCCF55(/*hidden argument*/NULL);
		if ((!(((float)L_9) < ((float)(200.0f)))))
		{
			goto IL_008a;
		}
	}
	{
		// if (Screen.dpi < 200) dpiScale = 1;
		V_1 = (1.0f);
		goto IL_0096;
	}

IL_008a:
	{
		// else dpiScale = Screen.dpi / 200f;
		float L_10;
		L_10 = Screen_get_dpi_m37167A82DE896C738517BBF75BFD70C616CCCF55(/*hidden argument*/NULL);
		V_1 = ((float)((float)L_10/(float)(200.0f)));
	}

IL_0096:
	{
		// if (pos.x < 380 * dpiScale && Screen.height - pos.y < 250 * dpiScale) return;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = V_0;
		float L_12 = L_11.get_x_2();
		float L_13 = V_1;
		if ((!(((float)L_12) < ((float)((float)il2cpp_codegen_multiply((float)(380.0f), (float)L_13))))))
		{
			goto IL_00bc;
		}
	}
	{
		int32_t L_14;
		L_14 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15 = V_0;
		float L_16 = L_15.get_y_3();
		float L_17 = V_1;
		if ((!(((float)((float)il2cpp_codegen_subtract((float)((float)((float)L_14)), (float)L_16))) < ((float)((float)il2cpp_codegen_multiply((float)(250.0f), (float)L_17))))))
		{
			goto IL_00bc;
		}
	}
	{
		// if (pos.x < 380 * dpiScale && Screen.height - pos.y < 250 * dpiScale) return;
		return;
	}

IL_00bc:
	{
		// Cursor.visible = false;
		Cursor_set_visible_m4747F0DC20D06D1932EC740C5CCC738C1664903D((bool)0, /*hidden argument*/NULL);
		// Cursor.lockState = CursorLockMode.Locked;
		Cursor_set_lockState_mC0739186A04F4C278F02E8C1714D99B491E3A217(1, /*hidden argument*/NULL);
		// x += (float)(Input.GetAxis("Mouse X") * xRotate * 0.02);
		float L_18 = __this->get_x_11();
		float L_19;
		L_19 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7, /*hidden argument*/NULL);
		float L_20 = __this->get_xRotate_6();
		__this->set_x_11(((float)il2cpp_codegen_add((float)L_18, (float)((float)((float)((double)il2cpp_codegen_multiply((double)((double)((double)((float)il2cpp_codegen_multiply((float)L_19, (float)L_20)))), (double)(0.02))))))));
		// y -= (float)(Input.GetAxis("Mouse Y") * yRotate * 0.02);
		float L_21 = __this->get_y_12();
		float L_22;
		L_22 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0, /*hidden argument*/NULL);
		float L_23 = __this->get_yRotate_7();
		__this->set_y_12(((float)il2cpp_codegen_subtract((float)L_21, (float)((float)((float)((double)il2cpp_codegen_multiply((double)((double)((double)((float)il2cpp_codegen_multiply((float)L_22, (float)L_23)))), (double)(0.02))))))));
		// y = ClampAngle(y, yMinLimit, yMaxLimit);
		float L_24 = __this->get_y_12();
		float L_25 = __this->get_yMinLimit_8();
		float L_26 = __this->get_yMaxLimit_9();
		float L_27;
		L_27 = CameraHolder_ClampAngle_m4DA4FFCCE42FA8FB6BEDCDFB3380C4366FAA82AE(L_24, L_25, L_26, /*hidden argument*/NULL);
		__this->set_y_12(L_27);
		// var rotation = Quaternion.Euler(y, x, 0);
		float L_28 = __this->get_y_12();
		float L_29 = __this->get_x_11();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_30;
		L_30 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3(L_28, L_29, (0.0f), /*hidden argument*/NULL);
		V_2 = L_30;
		// var position = rotation * new Vector3(0, 0, -currDistance) + Holder.position;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_31 = V_2;
		float L_32 = __this->get_currDistance_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33;
		memset((&L_33), 0, sizeof(L_33));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_33), (0.0f), (0.0f), ((-L_32)), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34;
		L_34 = Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D(L_31, L_33, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_35 = __this->get_Holder_4();
		NullCheck(L_35);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36;
		L_36 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_35, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37;
		L_37 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_34, L_36, /*hidden argument*/NULL);
		V_3 = L_37;
		// transform.rotation = rotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_38;
		L_38 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_39 = V_2;
		NullCheck(L_38);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_38, L_39, /*hidden argument*/NULL);
		// transform.position = position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_40;
		L_40 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_41 = V_3;
		NullCheck(L_40);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_40, L_41, /*hidden argument*/NULL);
		// }
		goto IL_01a3;
	}

IL_0197:
	{
		// Cursor.visible = true;
		Cursor_set_visible_m4747F0DC20D06D1932EC740C5CCC738C1664903D((bool)1, /*hidden argument*/NULL);
		// Cursor.lockState = CursorLockMode.None;
		Cursor_set_lockState_mC0739186A04F4C278F02E8C1714D99B491E3A217(0, /*hidden argument*/NULL);
	}

IL_01a3:
	{
		// if (prevDistance != currDistance)
		float L_42 = __this->get_prevDistance_10();
		float L_43 = __this->get_currDistance_5();
		if ((((float)L_42) == ((float)L_43)))
		{
			goto IL_021e;
		}
	}
	{
		// prevDistance = currDistance;
		float L_44 = __this->get_currDistance_5();
		__this->set_prevDistance_10(L_44);
		// var rot = Quaternion.Euler(y, x, 0);
		float L_45 = __this->get_y_12();
		float L_46 = __this->get_x_11();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_47;
		L_47 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3(L_45, L_46, (0.0f), /*hidden argument*/NULL);
		V_4 = L_47;
		// var po = rot * new Vector3(0, 0, -currDistance) + Holder.position;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_48 = V_4;
		float L_49 = __this->get_currDistance_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_50;
		memset((&L_50), 0, sizeof(L_50));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_50), (0.0f), (0.0f), ((-L_49)), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_51;
		L_51 = Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D(L_48, L_50, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_52 = __this->get_Holder_4();
		NullCheck(L_52);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_53;
		L_53 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_52, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_54;
		L_54 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_51, L_53, /*hidden argument*/NULL);
		V_5 = L_54;
		// transform.rotation = rot;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_55;
		L_55 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_56 = V_4;
		NullCheck(L_55);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_55, L_56, /*hidden argument*/NULL);
		// transform.position = po;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_57;
		L_57 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_58 = V_5;
		NullCheck(L_57);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_57, L_58, /*hidden argument*/NULL);
	}

IL_021e:
	{
		// }
		return;
	}
}
// System.Single CameraHolder::ClampAngle(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CameraHolder_ClampAngle_m4DA4FFCCE42FA8FB6BEDCDFB3380C4366FAA82AE (float ___angle0, float ___min1, float ___max2, const RuntimeMethod* method)
{
	{
		// if (angle < -360)
		float L_0 = ___angle0;
		if ((!(((float)L_0) < ((float)(-360.0f)))))
		{
			goto IL_0011;
		}
	}
	{
		// angle += 360;
		float L_1 = ___angle0;
		___angle0 = ((float)il2cpp_codegen_add((float)L_1, (float)(360.0f)));
	}

IL_0011:
	{
		// if (angle > 360)
		float L_2 = ___angle0;
		if ((!(((float)L_2) > ((float)(360.0f)))))
		{
			goto IL_0022;
		}
	}
	{
		// angle -= 360;
		float L_3 = ___angle0;
		___angle0 = ((float)il2cpp_codegen_subtract((float)L_3, (float)(360.0f)));
	}

IL_0022:
	{
		// return Mathf.Clamp(angle, min, max);
		float L_4 = ___angle0;
		float L_5 = ___min1;
		float L_6 = ___max2;
		float L_7;
		L_7 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(L_4, L_5, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Void CameraHolder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraHolder__ctor_m7A3AEF6C1B67768B3C50B37261F10ECA42194F83 (CameraHolder_tA0DB3BD91D8E35159E794BEE6A382FE2B9188A10 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCC0ACDFD7714C349891385D6AB31543DD9E72961_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tD40AE6D7A6AB19BD1993F05D20B4AB5EC723E6F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float currDistance = 5.0f;
		__this->set_currDistance_5((5.0f));
		// public float xRotate = 250.0f;
		__this->set_xRotate_6((250.0f));
		// public float yRotate = 120.0f;
		__this->set_yRotate_7((120.0f));
		// public float yMinLimit = -20f;
		__this->set_yMinLimit_8((-20.0f));
		// public float yMaxLimit = 80f;
		__this->set_yMaxLimit_9((80.0f));
		// private ParticleSystem[] particleSystems = new ParticleSystem[0];
		ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7* L_0 = (ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7*)(ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7*)SZArrayNew(ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->set_particleSystems_20(L_0);
		// private List<SVA> svList = new List<SVA>();
		List_1_tD40AE6D7A6AB19BD1993F05D20B4AB5EC723E6F9 * L_1 = (List_1_tD40AE6D7A6AB19BD1993F05D20B4AB5EC723E6F9 *)il2cpp_codegen_object_new(List_1_tD40AE6D7A6AB19BD1993F05D20B4AB5EC723E6F9_il2cpp_TypeInfo_var);
		List_1__ctor_mCC0ACDFD7714C349891385D6AB31543DD9E72961(L_1, /*hidden argument*/List_1__ctor_mCC0ACDFD7714C349891385D6AB31543DD9E72961_RuntimeMethod_var);
		__this->set_svList_21(L_1);
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
// System.Void DamageCircle::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DamageCircle_Awake_m88321FD01225030B0DC7A96DE83BB53797C5B876 (DamageCircle_tB70A539EB31C5490ADB1DFA14B86E5E6953EF876 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DamageCircle_tB70A539EB31C5490ADB1DFA14B86E5E6953EF876_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DFA9AA29082727751167EB3C54FCAD0F9EDC665);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral163645A82FC30F1504D822E5D958F72D799EBFF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A164A021450B2AB8421A7487A4B69493CD43DBB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral341872AF21C32D6A74449BC426100C98602C2E63);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA11BC0AB16491B5DAEE99EAA33CF52FE6BC826E3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instance = this;
		((DamageCircle_tB70A539EB31C5490ADB1DFA14B86E5E6953EF876_StaticFields*)il2cpp_codegen_static_fields_for(DamageCircle_tB70A539EB31C5490ADB1DFA14B86E5E6953EF876_il2cpp_TypeInfo_var))->set_instance_5(__this);
		// bloodAnim.Stop();
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_0 = __this->get_bloodAnim_18();
		NullCheck(L_0);
		ParticleSystem_Stop_m8CBF9268DE7B5A40952B4977462B857B5F5AFB9D(L_0, /*hidden argument*/NULL);
		// circleTransform = GameObject.FindWithTag("circle").transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = GameObject_FindWithTag_mEF75D1FF1E55B338A77161FDCB68ED0A2A911DF3(_stringLiteral163645A82FC30F1504D822E5D958F72D799EBFF7, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_1, /*hidden argument*/NULL);
		__this->set_circleTransform_6(L_2);
		// topTransform = GameObject.FindWithTag("top").transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = GameObject_FindWithTag_mEF75D1FF1E55B338A77161FDCB68ED0A2A911DF3(_stringLiteralA11BC0AB16491B5DAEE99EAA33CF52FE6BC826E3, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_3, /*hidden argument*/NULL);
		__this->set_topTransform_7(L_4);
		// bottomTransform = GameObject.FindWithTag("bottom").transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = GameObject_FindWithTag_mEF75D1FF1E55B338A77161FDCB68ED0A2A911DF3(_stringLiteral0DFA9AA29082727751167EB3C54FCAD0F9EDC665, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_5, /*hidden argument*/NULL);
		__this->set_bottomTransform_8(L_6);
		// leftTransform = GameObject.FindWithTag("left").transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = GameObject_FindWithTag_mEF75D1FF1E55B338A77161FDCB68ED0A2A911DF3(_stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_7, /*hidden argument*/NULL);
		__this->set_leftTransform_9(L_8);
		// rightTransform = GameObject.FindWithTag("right").transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = GameObject_FindWithTag_mEF75D1FF1E55B338A77161FDCB68ED0A2A911DF3(_stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF, /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_9, /*hidden argument*/NULL);
		__this->set_rightTransform_10(L_10);
		// wizard = GameObject.FindWithTag("Wizard");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11;
		L_11 = GameObject_FindWithTag_mEF75D1FF1E55B338A77161FDCB68ED0A2A911DF3(_stringLiteral341872AF21C32D6A74449BC426100C98602C2E63, /*hidden argument*/NULL);
		__this->set_wizard_17(L_11);
		// enemyCanWalkingCircleArea = GameObject.FindWithTag("EnemyCanWalkingCircleArea");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12;
		L_12 = GameObject_FindWithTag_mEF75D1FF1E55B338A77161FDCB68ED0A2A911DF3(_stringLiteral1A164A021450B2AB8421A7487A4B69493CD43DBB, /*hidden argument*/NULL);
		__this->set_enemyCanWalkingCircleArea_19(L_12);
		// SetCircleSize(new Vector3(0, 0.1f, 0), new Vector3(120, 120));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_13), (0.0f), (0.100000001f), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_14), (120.0f), (120.0f), /*hidden argument*/NULL);
		DamageCircle_SetCircleSize_m2E397908DB2EBA236A698BE84583FD355554D6E8(__this, L_13, L_14, /*hidden argument*/NULL);
		// SetTargetCircle(new Vector3(0,0.1f, 0), new Vector3(60, 60), 5f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_15), (0.0f), (0.100000001f), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_16), (60.0f), (60.0f), /*hidden argument*/NULL);
		DamageCircle_SetTargetCircle_m6985DA2EF9BA51FDE3FCDDE7F79194F454CEEF80(__this, L_15, L_16, (5.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DamageCircle::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DamageCircle_Update_mE2554D059FD64B3CFB191CCD957A64F9E0679C13 (DamageCircle_tB70A539EB31C5490ADB1DFA14B86E5E6953EF876 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DamageCircle_tB70A539EB31C5490ADB1DFA14B86E5E6953EF876_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// shrinkTimer -= Time.deltaTime;
		float L_0 = __this->get_shrinkTimer_16();
		float L_1;
		L_1 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_shrinkTimer_16(((float)il2cpp_codegen_subtract((float)L_0, (float)L_1)));
		// if (shrinkTimer < 0) {
		float L_2 = __this->get_shrinkTimer_16();
		if ((!(((float)L_2) < ((float)(0.0f)))))
		{
			goto IL_00df;
		}
	}
	{
		// Vector3 sizeChangeVector = (targetCircleSize - circleSize).normalized;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = __this->get_targetCircleSize_13();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ((DamageCircle_tB70A539EB31C5490ADB1DFA14B86E5E6953EF876_StaticFields*)il2cpp_codegen_static_fields_for(DamageCircle_tB70A539EB31C5490ADB1DFA14B86E5E6953EF876_il2cpp_TypeInfo_var))->get_circleSize_11();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_3, L_4, /*hidden argument*/NULL);
		V_5 = L_5;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_5), /*hidden argument*/NULL);
		V_0 = L_6;
		// Vector3 newCircleSize = circleSize + sizeChangeVector * Time.deltaTime * circleShrinkSpeed;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = ((DamageCircle_tB70A539EB31C5490ADB1DFA14B86E5E6953EF876_StaticFields*)il2cpp_codegen_static_fields_for(DamageCircle_tB70A539EB31C5490ADB1DFA14B86E5E6953EF876_il2cpp_TypeInfo_var))->get_circleSize_11();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = V_0;
		float L_9;
		L_9 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_8, L_9, /*hidden argument*/NULL);
		float L_11 = __this->get_circleShrinkSpeed_15();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_10, L_11, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_7, L_12, /*hidden argument*/NULL);
		V_1 = L_13;
		// Vector3 circleMoveDir = (targetCirclePosition - circlePosition).normalized;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = __this->get_targetCirclePosition_14();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15 = ((DamageCircle_tB70A539EB31C5490ADB1DFA14B86E5E6953EF876_StaticFields*)il2cpp_codegen_static_fields_for(DamageCircle_tB70A539EB31C5490ADB1DFA14B86E5E6953EF876_il2cpp_TypeInfo_var))->get_circlePosition_12();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_14, L_15, /*hidden argument*/NULL);
		V_5 = L_16;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_5), /*hidden argument*/NULL);
		V_2 = L_17;
		// Vector3 newCirclePosition = circlePosition + circleMoveDir * Time.deltaTime * circleShrinkSpeed;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = ((DamageCircle_tB70A539EB31C5490ADB1DFA14B86E5E6953EF876_StaticFields*)il2cpp_codegen_static_fields_for(DamageCircle_tB70A539EB31C5490ADB1DFA14B86E5E6953EF876_il2cpp_TypeInfo_var))->get_circlePosition_12();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19 = V_2;
		float L_20;
		L_20 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_19, L_20, /*hidden argument*/NULL);
		float L_22 = __this->get_circleShrinkSpeed_15();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_21, L_22, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
		L_24 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_18, L_23, /*hidden argument*/NULL);
		V_3 = L_24;
		// SetCircleSize(newCirclePosition, newCircleSize);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25 = V_3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26 = V_1;
		DamageCircle_SetCircleSize_m2E397908DB2EBA236A698BE84583FD355554D6E8(__this, L_25, L_26, /*hidden argument*/NULL);
		// SetAiCanAttackCirclePosSize(newCirclePosition, newCircleSize/2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27 = V_3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29;
		L_29 = Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline(L_28, (2.0f), /*hidden argument*/NULL);
		DamageCircle_SetAiCanAttackCirclePosSize_mC7D523F83F23A1853A7EE9365E030DB5F98D8FF8(__this, L_27, L_29, /*hidden argument*/NULL);
		// float distanceTestAmount = .1f;
		V_4 = (0.100000001f);
		// if (Vector3.Distance(newCircleSize, targetCircleSize) < distanceTestAmount && Vector3.Distance(newCirclePosition, targetCirclePosition) < distanceTestAmount) {
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31 = __this->get_targetCircleSize_13();
		float L_32;
		L_32 = Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677(L_30, L_31, /*hidden argument*/NULL);
		float L_33 = V_4;
		if ((!(((float)L_32) < ((float)L_33))))
		{
			goto IL_00df;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34 = V_3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35 = __this->get_targetCirclePosition_14();
		float L_36;
		L_36 = Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677(L_34, L_35, /*hidden argument*/NULL);
		float L_37 = V_4;
		if ((!(((float)L_36) < ((float)L_37))))
		{
			goto IL_00df;
		}
	}
	{
		// GenerateTargetCircleDeneme();
		DamageCircle_GenerateTargetCircleDeneme_m2C3B48B1D5D14A0B21E0C0524E99E7D080C003C1(__this, /*hidden argument*/NULL);
	}

IL_00df:
	{
		// }
		return;
	}
}
// System.Void DamageCircle::GenerateTargetCircle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DamageCircle_GenerateTargetCircle_mCA75A0C7F82C38147BC17F291747D769A72C5C1E (DamageCircle_tB70A539EB31C5490ADB1DFA14B86E5E6953EF876 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DamageCircle_tB70A539EB31C5490ADB1DFA14B86E5E6953EF876_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	{
		// float shrinkSizeAmount = Random.Range(3f, 12f);
		float L_0;
		L_0 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((3.0f), (12.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		// Vector3 generatedTargetCircleSize = circleSize - new Vector3(shrinkSizeAmount, shrinkSizeAmount) * 2f;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ((DamageCircle_tB70A539EB31C5490ADB1DFA14B86E5E6953EF876_StaticFields*)il2cpp_codegen_static_fields_for(DamageCircle_tB70A539EB31C5490ADB1DFA14B86E5E6953EF876_il2cpp_TypeInfo_var))->get_circleSize_11();
		float L_2 = V_0;
		float L_3 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_4), L_2, L_3, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_4, (2.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_1, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		// if (generatedTargetCircleSize.x < 10f) generatedTargetCircleSize = Vector3.one * 10f;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = V_1;
		float L_8 = L_7.get_x_2();
		if ((!(((float)L_8) < ((float)(10.0f)))))
		{
			goto IL_0049;
		}
	}
	{
		// if (generatedTargetCircleSize.x < 10f) generatedTargetCircleSize = Vector3.one * 10f;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_9, (10.0f), /*hidden argument*/NULL);
		V_1 = L_10;
	}

IL_0049:
	{
		// Vector3 generatedTargetCirclePosition = circlePosition +
		//     new Vector3(Random.Range(-shrinkSizeAmount, shrinkSizeAmount),0, Random.Range(-shrinkSizeAmount, shrinkSizeAmount));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = ((DamageCircle_tB70A539EB31C5490ADB1DFA14B86E5E6953EF876_StaticFields*)il2cpp_codegen_static_fields_for(DamageCircle_tB70A539EB31C5490ADB1DFA14B86E5E6953EF876_il2cpp_TypeInfo_var))->get_circlePosition_12();
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14;
		L_14 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(((-L_12)), L_13, /*hidden argument*/NULL);
		float L_15 = V_0;
		float L_16 = V_0;
		float L_17;
		L_17 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(((-L_15)), L_16, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_18), L_14, (0.0f), L_17, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_11, L_18, /*hidden argument*/NULL);
		V_2 = L_19;
		// float shrinkTime = Random.Range(1f, 6f);
		float L_20;
		L_20 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((1.0f), (6.0f), /*hidden argument*/NULL);
		V_3 = L_20;
		// generatedTargetCirclePosition.z=generatedTargetCirclePosition.y-40f;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21 = V_2;
		float L_22 = L_21.get_y_3();
		(&V_2)->set_z_4(((float)il2cpp_codegen_subtract((float)L_22, (float)(40.0f))));
		// generatedTargetCirclePosition.y=0;
		(&V_2)->set_y_3((0.0f));
		// SetTargetCircle(generatedTargetCirclePosition, generatedTargetCircleSize, shrinkTime);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = V_1;
		float L_25 = V_3;
		DamageCircle_SetTargetCircle_m6985DA2EF9BA51FDE3FCDDE7F79194F454CEEF80(__this, L_23, L_24, L_25, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DamageCircle::GenerateTargetCircleDeneme()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DamageCircle_GenerateTargetCircleDeneme_m2C3B48B1D5D14A0B21E0C0524E99E7D080C003C1 (DamageCircle_tB70A539EB31C5490ADB1DFA14B86E5E6953EF876 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DamageCircle_tB70A539EB31C5490ADB1DFA14B86E5E6953EF876_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	{
		// float shrinkSizeAmount = Random.Range(8f, 10f);
		float L_0;
		L_0 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((8.0f), (10.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		// Vector3 generatedTargetCircleSize = circleSize - new Vector3(shrinkSizeAmount, shrinkSizeAmount) * 2f;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ((DamageCircle_tB70A539EB31C5490ADB1DFA14B86E5E6953EF876_StaticFields*)il2cpp_codegen_static_fields_for(DamageCircle_tB70A539EB31C5490ADB1DFA14B86E5E6953EF876_il2cpp_TypeInfo_var))->get_circleSize_11();
		float L_2 = V_0;
		float L_3 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_4), L_2, L_3, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_4, (2.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_1, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		// if (generatedTargetCircleSize.x < 10f) generatedTargetCircleSize = Vector3.one * 10f;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = V_1;
		float L_8 = L_7.get_x_2();
		if ((!(((float)L_8) < ((float)(10.0f)))))
		{
			goto IL_0049;
		}
	}
	{
		// if (generatedTargetCircleSize.x < 10f) generatedTargetCircleSize = Vector3.one * 10f;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_9, (10.0f), /*hidden argument*/NULL);
		V_1 = L_10;
	}

IL_0049:
	{
		// Vector3 generatedTargetCirclePosition = circlePosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = ((DamageCircle_tB70A539EB31C5490ADB1DFA14B86E5E6953EF876_StaticFields*)il2cpp_codegen_static_fields_for(DamageCircle_tB70A539EB31C5490ADB1DFA14B86E5E6953EF876_il2cpp_TypeInfo_var))->get_circlePosition_12();
		V_2 = L_11;
		// float shrinkTime = Random.Range(4f, 8f);
		float L_12;
		L_12 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((4.0f), (8.0f), /*hidden argument*/NULL);
		V_3 = L_12;
		// generatedTargetCirclePosition.x= circlePosition.x+Random.Range(-(circleSize.x)/5,(circleSize.x)/5);
		float L_13 = (((DamageCircle_tB70A539EB31C5490ADB1DFA14B86E5E6953EF876_StaticFields*)il2cpp_codegen_static_fields_for(DamageCircle_tB70A539EB31C5490ADB1DFA14B86E5E6953EF876_il2cpp_TypeInfo_var))->get_address_of_circlePosition_12())->get_x_2();
		float L_14 = (((DamageCircle_tB70A539EB31C5490ADB1DFA14B86E5E6953EF876_StaticFields*)il2cpp_codegen_static_fields_for(DamageCircle_tB70A539EB31C5490ADB1DFA14B86E5E6953EF876_il2cpp_TypeInfo_var))->get_address_of_circleSize_11())->get_x_2();
		float L_15 = (((DamageCircle_tB70A539EB31C5490ADB1DFA14B86E5E6953EF876_StaticFields*)il2cpp_codegen_static_fields_for(DamageCircle_tB70A539EB31C5490ADB1DFA14B86E5E6953EF876_il2cpp_TypeInfo_var))->get_address_of_circleSize_11())->get_x_2();
		float L_16;
		L_16 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(((float)((float)((-L_14))/(float)(5.0f))), ((float)((float)L_15/(float)(5.0f))), /*hidden argument*/NULL);
		(&V_2)->set_x_2(((float)il2cpp_codegen_add((float)L_13, (float)L_16)));
		// generatedTargetCirclePosition.z= circlePosition.z+Random.Range(-(circleSize.x)/5,(circleSize.x)/5);
		float L_17 = (((DamageCircle_tB70A539EB31C5490ADB1DFA14B86E5E6953EF876_StaticFields*)il2cpp_codegen_static_fields_for(DamageCircle_tB70A539EB31C5490ADB1DFA14B86E5E6953EF876_il2cpp_TypeInfo_var))->get_address_of_circlePosition_12())->get_z_4();
		float L_18 = (((DamageCircle_tB70A539EB31C5490ADB1DFA14B86E5E6953EF876_StaticFields*)il2cpp_codegen_static_fields_for(DamageCircle_tB70A539EB31C5490ADB1DFA14B86E5E6953EF876_il2cpp_TypeInfo_var))->get_address_of_circleSize_11())->get_x_2();
		float L_19 = (((DamageCircle_tB70A539EB31C5490ADB1DFA14B86E5E6953EF876_StaticFields*)il2cpp_codegen_static_fields_for(DamageCircle_tB70A539EB31C5490ADB1DFA14B86E5E6953EF876_il2cpp_TypeInfo_var))->get_address_of_circleSize_11())->get_x_2();
		float L_20;
		L_20 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(((float)((float)((-L_18))/(float)(5.0f))), ((float)((float)L_19/(float)(5.0f))), /*hidden argument*/NULL);
		(&V_2)->set_z_4(((float)il2cpp_codegen_add((float)L_17, (float)L_20)));
		// generatedTargetCirclePosition.y=0.1f;
		(&V_2)->set_y_3((0.100000001f));
		// SetTargetCircle(generatedTargetCirclePosition, generatedTargetCircleSize, shrinkTime);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22 = V_1;
		float L_23 = V_3;
		DamageCircle_SetTargetCircle_m6985DA2EF9BA51FDE3FCDDE7F79194F454CEEF80(__this, L_21, L_22, L_23, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DamageCircle::SetCircleSize(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DamageCircle_SetCircleSize_m2E397908DB2EBA236A698BE84583FD355554D6E8 (DamageCircle_tB70A539EB31C5490ADB1DFA14B86E5E6953EF876 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___size1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DamageCircle_tB70A539EB31C5490ADB1DFA14B86E5E6953EF876_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// circlePosition = position;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___position0;
		((DamageCircle_tB70A539EB31C5490ADB1DFA14B86E5E6953EF876_StaticFields*)il2cpp_codegen_static_fields_for(DamageCircle_tB70A539EB31C5490ADB1DFA14B86E5E6953EF876_il2cpp_TypeInfo_var))->set_circlePosition_12(L_0);
		// circleSize = size;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___size1;
		((DamageCircle_tB70A539EB31C5490ADB1DFA14B86E5E6953EF876_StaticFields*)il2cpp_codegen_static_fields_for(DamageCircle_tB70A539EB31C5490ADB1DFA14B86E5E6953EF876_il2cpp_TypeInfo_var))->set_circleSize_11(L_1);
		// circleTransform.position = position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = __this->get_circleTransform_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___position0;
		NullCheck(L_2);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_2, L_3, /*hidden argument*/NULL);
		// circleTransform.localScale = size;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4 = __this->get_circleTransform_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = ___size1;
		NullCheck(L_4);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_4, L_5, /*hidden argument*/NULL);
		// topTransform.localScale = new Vector3(300,300);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6 = __this->get_topTransform_7();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_7), (300.0f), (300.0f), /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_6, L_7, /*hidden argument*/NULL);
		// topTransform.localPosition = new Vector3(circleTransform.position.x+topTransform.localScale.x*0.5f+size.x*0.5f,topTransform.position.y,circleTransform.position.z);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8 = __this->get_topTransform_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9 = __this->get_circleTransform_6();
		NullCheck(L_9);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_9, /*hidden argument*/NULL);
		float L_11 = L_10.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12 = __this->get_topTransform_7();
		NullCheck(L_12);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_12, /*hidden argument*/NULL);
		float L_14 = L_13.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15 = ___size1;
		float L_16 = L_15.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17 = __this->get_topTransform_7();
		NullCheck(L_17);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_17, /*hidden argument*/NULL);
		float L_19 = L_18.get_y_3();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20 = __this->get_circleTransform_6();
		NullCheck(L_20);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_20, /*hidden argument*/NULL);
		float L_22 = L_21.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_23), ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_11, (float)((float)il2cpp_codegen_multiply((float)L_14, (float)(0.5f))))), (float)((float)il2cpp_codegen_multiply((float)L_16, (float)(0.5f))))), L_19, L_22, /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_8, L_23, /*hidden argument*/NULL);
		// bottomTransform.localScale = new Vector3(300, 300);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24 = __this->get_bottomTransform_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
		memset((&L_25), 0, sizeof(L_25));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_25), (300.0f), (300.0f), /*hidden argument*/NULL);
		NullCheck(L_24);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_24, L_25, /*hidden argument*/NULL);
		// bottomTransform.localPosition = new Vector3(circleTransform.position.x-bottomTransform.localScale.x*0.5f-size.x*0.5f,bottomTransform.position.y,circleTransform.position.z);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_26 = __this->get_bottomTransform_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_27 = __this->get_circleTransform_6();
		NullCheck(L_27);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		L_28 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_27, /*hidden argument*/NULL);
		float L_29 = L_28.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_30 = __this->get_bottomTransform_8();
		NullCheck(L_30);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31;
		L_31 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_30, /*hidden argument*/NULL);
		float L_32 = L_31.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33 = ___size1;
		float L_34 = L_33.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_35 = __this->get_bottomTransform_8();
		NullCheck(L_35);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36;
		L_36 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_35, /*hidden argument*/NULL);
		float L_37 = L_36.get_y_3();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_38 = __this->get_circleTransform_6();
		NullCheck(L_38);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_39;
		L_39 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_38, /*hidden argument*/NULL);
		float L_40 = L_39.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_41;
		memset((&L_41), 0, sizeof(L_41));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_41), ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_subtract((float)L_29, (float)((float)il2cpp_codegen_multiply((float)L_32, (float)(0.5f))))), (float)((float)il2cpp_codegen_multiply((float)L_34, (float)(0.5f))))), L_37, L_40, /*hidden argument*/NULL);
		NullCheck(L_26);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_26, L_41, /*hidden argument*/NULL);
		// leftTransform.localScale = new Vector3(300, 300);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_42 = __this->get_leftTransform_9();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_43;
		memset((&L_43), 0, sizeof(L_43));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_43), (300.0f), (300.0f), /*hidden argument*/NULL);
		NullCheck(L_42);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_42, L_43, /*hidden argument*/NULL);
		// leftTransform.localPosition = new Vector3(circleTransform.position.x,leftTransform.position.y,circleTransform.position.z+leftTransform.localScale.y*0.5f+size.y*0.5f);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_44 = __this->get_leftTransform_9();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_45 = __this->get_circleTransform_6();
		NullCheck(L_45);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_46;
		L_46 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_45, /*hidden argument*/NULL);
		float L_47 = L_46.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_48 = __this->get_leftTransform_9();
		NullCheck(L_48);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_49;
		L_49 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_48, /*hidden argument*/NULL);
		float L_50 = L_49.get_y_3();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_51 = __this->get_circleTransform_6();
		NullCheck(L_51);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_52;
		L_52 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_51, /*hidden argument*/NULL);
		float L_53 = L_52.get_z_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_54 = __this->get_leftTransform_9();
		NullCheck(L_54);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_55;
		L_55 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_54, /*hidden argument*/NULL);
		float L_56 = L_55.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_57 = ___size1;
		float L_58 = L_57.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_59;
		memset((&L_59), 0, sizeof(L_59));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_59), L_47, L_50, ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_53, (float)((float)il2cpp_codegen_multiply((float)L_56, (float)(0.5f))))), (float)((float)il2cpp_codegen_multiply((float)L_58, (float)(0.5f))))), /*hidden argument*/NULL);
		NullCheck(L_44);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_44, L_59, /*hidden argument*/NULL);
		// rightTransform.localScale = new Vector3(300, 300);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_60 = __this->get_rightTransform_10();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_61;
		memset((&L_61), 0, sizeof(L_61));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_61), (300.0f), (300.0f), /*hidden argument*/NULL);
		NullCheck(L_60);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_60, L_61, /*hidden argument*/NULL);
		// rightTransform.localPosition = new Vector3(circleTransform.position.x,rightTransform.position.y,circleTransform.position.z-rightTransform.localScale.y*0.5f-size.y*0.5f);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_62 = __this->get_rightTransform_10();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_63 = __this->get_circleTransform_6();
		NullCheck(L_63);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_64;
		L_64 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_63, /*hidden argument*/NULL);
		float L_65 = L_64.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_66 = __this->get_rightTransform_10();
		NullCheck(L_66);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_67;
		L_67 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_66, /*hidden argument*/NULL);
		float L_68 = L_67.get_y_3();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_69 = __this->get_circleTransform_6();
		NullCheck(L_69);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_70;
		L_70 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_69, /*hidden argument*/NULL);
		float L_71 = L_70.get_z_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_72 = __this->get_rightTransform_10();
		NullCheck(L_72);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_73;
		L_73 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_72, /*hidden argument*/NULL);
		float L_74 = L_73.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_75 = ___size1;
		float L_76 = L_75.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_77;
		memset((&L_77), 0, sizeof(L_77));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_77), L_65, L_68, ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_subtract((float)L_71, (float)((float)il2cpp_codegen_multiply((float)L_74, (float)(0.5f))))), (float)((float)il2cpp_codegen_multiply((float)L_76, (float)(0.5f))))), /*hidden argument*/NULL);
		NullCheck(L_62);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_62, L_77, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DamageCircle::SetTargetCircle(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DamageCircle_SetTargetCircle_m6985DA2EF9BA51FDE3FCDDE7F79194F454CEEF80 (DamageCircle_tB70A539EB31C5490ADB1DFA14B86E5E6953EF876 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___size1, float ___shrinkTimer2, const RuntimeMethod* method)
{
	{
		// this.shrinkTimer = shrinkTimer;
		float L_0 = ___shrinkTimer2;
		__this->set_shrinkTimer_16(L_0);
		// targetCircleTransform.position = position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = __this->get_targetCircleTransform_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___position0;
		NullCheck(L_1);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_1, L_2, /*hidden argument*/NULL);
		// targetCircleTransform.localScale = size;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = __this->get_targetCircleTransform_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___size1;
		NullCheck(L_3);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_3, L_4, /*hidden argument*/NULL);
		// targetCirclePosition = position;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = ___position0;
		__this->set_targetCirclePosition_14(L_5);
		// targetCircleSize = size;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___size1;
		__this->set_targetCircleSize_13(L_6);
		// }
		return;
	}
}
// System.Void DamageCircle::SetAiCanAttackCirclePosSize(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DamageCircle_SetAiCanAttackCirclePosSize_mC7D523F83F23A1853A7EE9365E030DB5F98D8FF8 (DamageCircle_tB70A539EB31C5490ADB1DFA14B86E5E6953EF876 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___size1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&enemyPathMovement_t2A082E51F0F47B4E09CD70F138BEF58C105BD216_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// enemyCanWalkingCircleArea.transform.position = position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_enemyCanWalkingCircleArea_19();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___position0;
		NullCheck(L_1);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_1, L_2, /*hidden argument*/NULL);
		// enemyPathMovement.Instance.setRange(size.x -5);
		enemyPathMovement_t2A082E51F0F47B4E09CD70F138BEF58C105BD216 * L_3 = ((enemyPathMovement_t2A082E51F0F47B4E09CD70F138BEF58C105BD216_StaticFields*)il2cpp_codegen_static_fields_for(enemyPathMovement_t2A082E51F0F47B4E09CD70F138BEF58C105BD216_il2cpp_TypeInfo_var))->get_Instance_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___size1;
		float L_5 = L_4.get_x_2();
		NullCheck(L_3);
		enemyPathMovement_setRange_m1A3ACA9C6161883AD4D6D253839489631750C624_inline(L_3, ((float)il2cpp_codegen_subtract((float)L_5, (float)(5.0f))), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean DamageCircle::IsOutsideCircle(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DamageCircle_IsOutsideCircle_mD44C47C9E57CD4F1EF449B065B84CC55624F78D7 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DamageCircle_tB70A539EB31C5490ADB1DFA14B86E5E6953EF876_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Vector3.Distance(position, circlePosition) > circleSize.x * .5f;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___position0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ((DamageCircle_tB70A539EB31C5490ADB1DFA14B86E5E6953EF876_StaticFields*)il2cpp_codegen_static_fields_for(DamageCircle_tB70A539EB31C5490ADB1DFA14B86E5E6953EF876_il2cpp_TypeInfo_var))->get_circlePosition_12();
		float L_2;
		L_2 = Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677(L_0, L_1, /*hidden argument*/NULL);
		float L_3 = (((DamageCircle_tB70A539EB31C5490ADB1DFA14B86E5E6953EF876_StaticFields*)il2cpp_codegen_static_fields_for(DamageCircle_tB70A539EB31C5490ADB1DFA14B86E5E6953EF876_il2cpp_TypeInfo_var))->get_address_of_circleSize_11())->get_x_2();
		return (bool)((((float)L_2) > ((float)((float)il2cpp_codegen_multiply((float)L_3, (float)(0.5f)))))? 1 : 0);
	}
}
// System.Void DamageCircle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DamageCircle__ctor_m14650E2DBCF6C20828D5EEB88DBF9B4D2C22BC09 (DamageCircle_tB70A539EB31C5490ADB1DFA14B86E5E6953EF876 * __this, const RuntimeMethod* method)
{
	{
		// private float circleShrinkSpeed = 2f;
		__this->set_circleShrinkSpeed_15((2.0f));
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
// System.Single DynamicJoystick::get_MoveThreshold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DynamicJoystick_get_MoveThreshold_m58D7166511D10A9933A62403E6BD58A85A22FE11 (DynamicJoystick_t675DA15D6A912CB9638176139FD810B7B051E867 * __this, const RuntimeMethod* method)
{
	{
		// public float MoveThreshold { get { return moveThreshold; } set { moveThreshold = Mathf.Abs(value); } }
		float L_0 = __this->get_moveThreshold_15();
		return L_0;
	}
}
// System.Void DynamicJoystick::set_MoveThreshold(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicJoystick_set_MoveThreshold_m5A53DE83993960EA2650FB12F596E8C48C561199 (DynamicJoystick_t675DA15D6A912CB9638176139FD810B7B051E867 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float MoveThreshold { get { return moveThreshold; } set { moveThreshold = Mathf.Abs(value); } }
		float L_0 = ___value0;
		float L_1;
		L_1 = fabsf(L_0);
		__this->set_moveThreshold_15(L_1);
		// public float MoveThreshold { get { return moveThreshold; } set { moveThreshold = Mathf.Abs(value); } }
		return;
	}
}
// System.Void DynamicJoystick::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicJoystick_Start_mA61574C0A57F93B6604DFD076E6D2B8959637FF6 (DynamicJoystick_t675DA15D6A912CB9638176139FD810B7B051E867 * __this, const RuntimeMethod* method)
{
	{
		// MoveThreshold = moveThreshold;
		float L_0 = __this->get_moveThreshold_15();
		DynamicJoystick_set_MoveThreshold_m5A53DE83993960EA2650FB12F596E8C48C561199(__this, L_0, /*hidden argument*/NULL);
		// base.Start();
		Joystick_Start_m3B4EEAA0389B5CCCA1479ACC4A167376E74BC275(__this, /*hidden argument*/NULL);
		// background.gameObject.SetActive(false);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_1 = ((Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 *)__this)->get_background_9();
		NullCheck(L_1);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DynamicJoystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicJoystick_OnPointerDown_m86184227C74C293693A120601730591FE892D477 (DynamicJoystick_t675DA15D6A912CB9638176139FD810B7B051E867 * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method)
{
	{
		// background.anchoredPosition = ScreenPointToAnchoredPosition(eventData.position);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0 = ((Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 *)__this)->get_background_9();
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_1 = ___eventData0;
		NullCheck(L_1);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		L_2 = PointerEventData_get_position_mE65C1CF448C935678F7C2A6265B4F3906FD9D651_inline(L_1, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		L_3 = Joystick_ScreenPointToAnchoredPosition_mAD769BA610FABC0D9C47294736AB0832C558D3FD(__this, L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		RectTransform_set_anchoredPosition_m8143009B7D2B786DF8309D1D319F2212EFD24905(L_0, L_3, /*hidden argument*/NULL);
		// background.gameObject.SetActive(true);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_4 = ((Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 *)__this)->get_background_9();
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_5, (bool)1, /*hidden argument*/NULL);
		// base.OnPointerDown(eventData);
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_6 = ___eventData0;
		Joystick_OnPointerDown_mB2A665CAD2B74565B6A1ACE2CA5A98A66020CE18(__this, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DynamicJoystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicJoystick_OnPointerUp_m19326842BD55962349FA84108425A679F320166A (DynamicJoystick_t675DA15D6A912CB9638176139FD810B7B051E867 * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method)
{
	{
		// background.gameObject.SetActive(false);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0 = ((Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 *)__this)->get_background_9();
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)0, /*hidden argument*/NULL);
		// base.OnPointerUp(eventData);
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_2 = ___eventData0;
		Joystick_OnPointerUp_m84FA57FCD3325BDEE02FED329B1C963C4DA2A037(__this, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DynamicJoystick::HandleInput(System.Single,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicJoystick_HandleInput_m9E141917F78D7887B05AEE4933F803D43F8A82AA (DynamicJoystick_t675DA15D6A912CB9638176139FD810B7B051E867 * __this, float ___magnitude0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___normalised1, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___radius2, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___cam3, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (magnitude > moveThreshold)
		float L_0 = ___magnitude0;
		float L_1 = __this->get_moveThreshold_15();
		if ((!(((float)L_0) > ((float)L_1))))
		{
			goto IL_0035;
		}
	}
	{
		// Vector2 difference = normalised * (magnitude - moveThreshold) * radius;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___normalised1;
		float L_3 = ___magnitude0;
		float L_4 = __this->get_moveThreshold_15();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5;
		L_5 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_2, ((float)il2cpp_codegen_subtract((float)L_3, (float)L_4)), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___radius2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7;
		L_7 = Vector2_op_Multiply_m98AA5AF174918812B6E0C201C850FABB4A526813_inline(L_5, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		// background.anchoredPosition += difference;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_8 = ((Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 *)__this)->get_background_9();
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_9 = L_8;
		NullCheck(L_9);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_10;
		L_10 = RectTransform_get_anchoredPosition_mFDC4F160F99634B2FBC73FE5FB1F4F4127CDD975(L_9, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_11 = V_0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_12;
		L_12 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_10, L_11, /*hidden argument*/NULL);
		NullCheck(L_9);
		RectTransform_set_anchoredPosition_m8143009B7D2B786DF8309D1D319F2212EFD24905(L_9, L_12, /*hidden argument*/NULL);
	}

IL_0035:
	{
		// base.HandleInput(magnitude, normalised, radius, cam);
		float L_13 = ___magnitude0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_14 = ___normalised1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_15 = ___radius2;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_16 = ___cam3;
		Joystick_HandleInput_m38CE2907CF406D1F4B327F197E0CCED1C6DD8CC7(__this, L_13, L_14, L_15, L_16, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DynamicJoystick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicJoystick__ctor_m30E27EBE028214E9F514F3788463A74511DC651D (DynamicJoystick_t675DA15D6A912CB9638176139FD810B7B051E867 * __this, const RuntimeMethod* method)
{
	{
		// [SerializeField] private float moveThreshold = 1;
		__this->set_moveThreshold_15((1.0f));
		Joystick__ctor_mF7C14D62A9A6B3BD77F6365BB88DE406A9CE4E08(__this, /*hidden argument*/NULL);
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
// System.Void FixedJoystick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FixedJoystick__ctor_mC4A98EB3129E3091007AD83B5B93672E7E9151B6 (FixedJoystick_tDB74F76D3F9FBD9C43F508B2F306958915E6F5B2 * __this, const RuntimeMethod* method)
{
	{
		Joystick__ctor_mF7C14D62A9A6B3BD77F6365BB88DE406A9CE4E08(__this, /*hidden argument*/NULL);
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
// System.Void FloatingJoystick::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatingJoystick_Start_m290C93EC665E6DB28F837EE06CA2606EBA99C016 (FloatingJoystick_tC4079BB6845C914906FF088E283633AFA9C93607 * __this, const RuntimeMethod* method)
{
	{
		// base.Start();
		Joystick_Start_m3B4EEAA0389B5CCCA1479ACC4A167376E74BC275(__this, /*hidden argument*/NULL);
		// background.gameObject.SetActive(false);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0 = ((Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 *)__this)->get_background_9();
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void FloatingJoystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatingJoystick_OnPointerDown_m8C00303A73289775A64DC879CCC9182B5BC849C5 (FloatingJoystick_tC4079BB6845C914906FF088E283633AFA9C93607 * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method)
{
	{
		// background.anchoredPosition = ScreenPointToAnchoredPosition(eventData.position);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0 = ((Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 *)__this)->get_background_9();
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_1 = ___eventData0;
		NullCheck(L_1);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		L_2 = PointerEventData_get_position_mE65C1CF448C935678F7C2A6265B4F3906FD9D651_inline(L_1, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		L_3 = Joystick_ScreenPointToAnchoredPosition_mAD769BA610FABC0D9C47294736AB0832C558D3FD(__this, L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		RectTransform_set_anchoredPosition_m8143009B7D2B786DF8309D1D319F2212EFD24905(L_0, L_3, /*hidden argument*/NULL);
		// background.gameObject.SetActive(true);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_4 = ((Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 *)__this)->get_background_9();
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_5, (bool)1, /*hidden argument*/NULL);
		// base.OnPointerDown(eventData);
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_6 = ___eventData0;
		Joystick_OnPointerDown_mB2A665CAD2B74565B6A1ACE2CA5A98A66020CE18(__this, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void FloatingJoystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatingJoystick_OnPointerUp_m26F0DEE158E1947EE053FE21B01ADA413FF3D4A2 (FloatingJoystick_tC4079BB6845C914906FF088E283633AFA9C93607 * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method)
{
	{
		// background.gameObject.SetActive(false);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0 = ((Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 *)__this)->get_background_9();
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)0, /*hidden argument*/NULL);
		// base.OnPointerUp(eventData);
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_2 = ___eventData0;
		Joystick_OnPointerUp_m84FA57FCD3325BDEE02FED329B1C963C4DA2A037(__this, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void FloatingJoystick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatingJoystick__ctor_mA6F4B5F4A0C881759BFAD91256D5BE5E90399F8F (FloatingJoystick_tC4079BB6845C914906FF088E283633AFA9C93607 * __this, const RuntimeMethod* method)
{
	{
		Joystick__ctor_mF7C14D62A9A6B3BD77F6365BB88DE406A9CE4E08(__this, /*hidden argument*/NULL);
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
// System.Void GameMain::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameMain_Start_mF35A4D909FCB90F08DF34B9BC16CD82734E89592 (GameMain_t1257BA6D1B7168D049E99EB3B80136749D29CAA6 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void GameMain::PlayerHealth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameMain_PlayerHealth_mF9196DDBCF11FA4DA299C0E5C0C1FCE0EB044047 (GameMain_t1257BA6D1B7168D049E99EB3B80136749D29CAA6 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void GameMain::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameMain_Update_mAA4B70FA6FDE52C993990950E9D721CF7FF219E8 (GameMain_t1257BA6D1B7168D049E99EB3B80136749D29CAA6 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void GameMain::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameMain__ctor_mAB5AC52AD69AF4E416ED70DFAADD188C5CAC3BA9 (GameMain_t1257BA6D1B7168D049E99EB3B80136749D29CAA6 * __this, const RuntimeMethod* method)
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
// System.Void HealthController::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthController__ctor_mE7C9A5C8657BF0AA3875B191C910997CF701CCE1 (HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 * __this, int32_t ___healthMax0, int32_t ___healthCurrent1, const RuntimeMethod* method)
{
	{
		// public HealthController(int healthMax , int healthCurrent)
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		// this.healthMax = healthMax;
		int32_t L_0 = ___healthMax0;
		__this->set_healthMax_4(L_0);
		// this.healthCurrent = healthCurrent;
		int32_t L_1 = ___healthCurrent1;
		__this->set_healthCurrent_5(L_1);
		// this.die = false;
		__this->set_die_6((bool)0);
		// }
		return;
	}
}
// System.Single HealthController::GetHealthMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HealthController_GetHealthMax_m1AEB454DBA5B8AEA4353044AD37F7C9E7467760A (HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 * __this, const RuntimeMethod* method)
{
	{
		// return healthMax;
		int32_t L_0 = __this->get_healthMax_4();
		return ((float)((float)L_0));
	}
}
// System.Void HealthController::SetHealthMax(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthController_SetHealthMax_mC15B91DC9C889548E6599409850067A35829C433 (HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 * __this, int32_t ___healthMax0, const RuntimeMethod* method)
{
	{
		// this.healthMax = healthMax;
		int32_t L_0 = ___healthMax0;
		__this->set_healthMax_4(L_0);
		// }
		return;
	}
}
// System.Int32 HealthController::GetHealthCurrent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HealthController_GetHealthCurrent_m0A98300D4D5C8BDEE92DC8D4D66C409CA4F4B9D7 (HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 * __this, const RuntimeMethod* method)
{
	{
		// return healthCurrent;
		int32_t L_0 = __this->get_healthCurrent_5();
		return L_0;
	}
}
// System.Void HealthController::SetHealthCurrent(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthController_SetHealthCurrent_m12D6C1AA3D0AE94CCD65B02523F6FDEC3704C042 (HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 * __this, int32_t ___healthCurrent0, const RuntimeMethod* method)
{
	{
		// this.healthCurrent = healthCurrent;
		int32_t L_0 = ___healthCurrent0;
		__this->set_healthCurrent_5(L_0);
		// }
		return;
	}
}
// System.Boolean HealthController::IsDead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HealthController_IsDead_mE7D0AA18C03226E2D5371D73C67C9F7CF86995D6 (HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 * __this, const RuntimeMethod* method)
{
	{
		// return die;
		bool L_0 = __this->get_die_6();
		return L_0;
	}
}
// System.Void HealthController::SetDie(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthController_SetDie_m65412C2AC0FCF88E6D6380F06AE6DA3DFC8C576B (HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 * __this, bool ___die0, const RuntimeMethod* method)
{
	{
		// this.die = die;
		bool L_0 = ___die0;
		__this->set_die_6(L_0);
		// }
		return;
	}
}
// System.Single HealthController::GetHealthPercent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HealthController_GetHealthPercent_m99966C6902598D1CDD3D406A9D4FBD661B5C03EA (HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 * __this, const RuntimeMethod* method)
{
	{
		// return (float) healthCurrent / healthMax;
		int32_t L_0 = __this->get_healthCurrent_5();
		int32_t L_1 = __this->get_healthMax_4();
		return ((float)((float)((float)((float)L_0))/(float)((float)((float)L_1))));
	}
}
// System.Void HealthController::Heal(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthController_Heal_m035C470DC4E78F9E21345281E897BBF99F3A3459 (HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 * __this, int32_t ___amount0, const RuntimeMethod* method)
{
	{
		// healthCurrent += amount;
		int32_t L_0 = __this->get_healthCurrent_5();
		int32_t L_1 = ___amount0;
		__this->set_healthCurrent_5(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)));
		// if (healthCurrent >= healthMax)
		int32_t L_2 = __this->get_healthCurrent_5();
		int32_t L_3 = __this->get_healthMax_4();
		if ((((int32_t)L_2) < ((int32_t)L_3)))
		{
			goto IL_0028;
		}
	}
	{
		// healthCurrent = healthMax;
		int32_t L_4 = __this->get_healthMax_4();
		__this->set_healthCurrent_5(L_4);
	}

IL_0028:
	{
		// }
		return;
	}
}
// System.Void HealthController::Damage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthController_Damage_m72DC74C513F1A4FB7DA30BAAE1154A53B686B832 (HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 * __this, int32_t ___amount0, const RuntimeMethod* method)
{
	{
		// healthCurrent -= amount;
		int32_t L_0 = __this->get_healthCurrent_5();
		int32_t L_1 = ___amount0;
		__this->set_healthCurrent_5(((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1)));
		// if (healthCurrent <= 0)
		int32_t L_2 = __this->get_healthCurrent_5();
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		// healthCurrent = 0;
		__this->set_healthCurrent_5(0);
		// SetDie(true);
		HealthController_SetDie_m65412C2AC0FCF88E6D6380F06AE6DA3DFC8C576B_inline(__this, (bool)1, /*hidden argument*/NULL);
	}

IL_0025:
	{
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
// System.Void HealthSystem::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthSystem_Start_m65BB037CAFB535E5E3EFB62B83FC588F421A220F (HealthSystem_t534958B833E6A966FF53C62231D4C34A751947D8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HealthSystem_t534958B833E6A966FF53C62231D4C34A751947D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral341872AF21C32D6A74449BC426100C98602C2E63);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral74EBEC30E667023205227F3CDD7B95BAC4BB8344);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77FA92AA52090642F17B6CD85CBD6A0480B62309);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	String_t* G_B2_0 = NULL;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B1_1 = NULL;
	String_t* G_B4_0 = NULL;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B4_1 = NULL;
	String_t* G_B3_0 = NULL;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B3_1 = NULL;
	{
		// HealthSystem healthObj=new HealthSystem();
		HealthSystem_t534958B833E6A966FF53C62231D4C34A751947D8 * L_0 = (HealthSystem_t534958B833E6A966FF53C62231D4C34A751947D8 *)il2cpp_codegen_object_new(HealthSystem_t534958B833E6A966FF53C62231D4C34A751947D8_il2cpp_TypeInfo_var);
		HealthSystem__ctor_m0C9A993355EB5C4187AED5B1DB5C84A1B5833F7C(L_0, /*hidden argument*/NULL);
		// HealthSlider = (Slider) FindObjectOfType(typeof (Slider)); // her zaman ilk slider'ı cagırır cok dikkatli olalım :D
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_3;
		L_3 = Object_FindObjectOfType_m07215A5C789FC7C88754B64DFCF1313C55E2F6D2(L_2, /*hidden argument*/NULL);
		__this->set_HealthSlider_4(((Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A *)CastclassClass((RuntimeObject*)L_3, Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A_il2cpp_TypeInfo_var)));
		// HealthSlider.value=100f;
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_4 = __this->get_HealthSlider_4();
		NullCheck(L_4);
		VirtActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_4, (100.0f));
		// health=(int) HealthSlider.value;
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_5 = __this->get_HealthSlider_4();
		NullCheck(L_5);
		float L_6;
		L_6 = VirtFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_5);
		__this->set_health_8(il2cpp_codegen_cast_double_to_int<int32_t>(L_6));
		// CurrentHealth = GameObject.FindGameObjectWithTag("CurrentHealth").GetComponent<Text>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F(_stringLiteral74EBEC30E667023205227F3CDD7B95BAC4BB8344, /*hidden argument*/NULL);
		NullCheck(L_7);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_8;
		L_8 = GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65(L_7, /*hidden argument*/GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		__this->set_CurrentHealth_5(L_8);
		// MaxHealth = GameObject.FindGameObjectWithTag("MaxHealth").GetComponent<Text>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F(_stringLiteral77FA92AA52090642F17B6CD85CBD6A0480B62309, /*hidden argument*/NULL);
		NullCheck(L_9);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_10;
		L_10 = GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65(L_9, /*hidden argument*/GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		__this->set_MaxHealth_6(L_10);
		// CurrentHealth.text=""+HealthSlider.value;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_11 = __this->get_CurrentHealth_5();
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_12 = __this->get_HealthSlider_4();
		NullCheck(L_12);
		float L_13;
		L_13 = VirtFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_12);
		V_0 = L_13;
		String_t* L_14;
		L_14 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)(&V_0), /*hidden argument*/NULL);
		String_t* L_15 = L_14;
		G_B1_0 = L_15;
		G_B1_1 = L_11;
		if (L_15)
		{
			G_B2_0 = L_15;
			G_B2_1 = L_11;
			goto IL_008e;
		}
	}
	{
		G_B2_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B2_1 = G_B1_1;
	}

IL_008e:
	{
		NullCheck(G_B2_1);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B2_1, G_B2_0);
		// MaxHealth.text=""+HealthSlider.value;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_16 = __this->get_MaxHealth_6();
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_17 = __this->get_HealthSlider_4();
		NullCheck(L_17);
		float L_18;
		L_18 = VirtFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_17);
		V_0 = L_18;
		String_t* L_19;
		L_19 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)(&V_0), /*hidden argument*/NULL);
		String_t* L_20 = L_19;
		G_B3_0 = L_20;
		G_B3_1 = L_16;
		if (L_20)
		{
			G_B4_0 = L_20;
			G_B4_1 = L_16;
			goto IL_00b5;
		}
	}
	{
		G_B4_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B4_1 = G_B3_1;
	}

IL_00b5:
	{
		NullCheck(G_B4_1);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B4_1, G_B4_0);
		// wizard = GameObject.FindWithTag("Wizard");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21;
		L_21 = GameObject_FindWithTag_mEF75D1FF1E55B338A77161FDCB68ED0A2A911DF3(_stringLiteral341872AF21C32D6A74449BC426100C98602C2E63, /*hidden argument*/NULL);
		__this->set_wizard_10(L_21);
		// animator = wizard.GetComponent<Animator>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22 = __this->get_wizard_10();
		NullCheck(L_22);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_23;
		L_23 = GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36(L_22, /*hidden argument*/GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36_RuntimeMethod_var);
		__this->set_animator_11(L_23);
		// }
		return;
	}
}
// System.Void HealthSystem::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthSystem_Update_m886D70035579B97B81D6B41144E9062FFA6EF848 (HealthSystem_t534958B833E6A966FF53C62231D4C34A751947D8 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Single HealthSystem::GetHealthPercent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HealthSystem_GetHealthPercent_m386113975EDB23D3B1AEA5E0D31803DE7CAEAE62 (HealthSystem_t534958B833E6A966FF53C62231D4C34A751947D8 * __this, const RuntimeMethod* method)
{
	{
		// return (float)health / healthMax;
		int32_t L_0 = __this->get_health_8();
		int32_t L_1 = __this->get_healthMax_7();
		return ((float)((float)((float)((float)L_0))/(float)((float)((float)L_1))));
	}
}
// System.Void HealthSystem::Damage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthSystem_Damage_m8F75D5037AD5BEF1A0F5071E464E655A16BA0FF3 (HealthSystem_t534958B833E6A966FF53C62231D4C34A751947D8 * __this, int32_t ___amount0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	String_t* G_B2_0 = NULL;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B1_1 = NULL;
	{
		// health -= amount;
		int32_t L_0 = __this->get_health_8();
		int32_t L_1 = ___amount0;
		__this->set_health_8(((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1)));
		// HealthSlider.value=health;
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_2 = __this->get_HealthSlider_4();
		int32_t L_3 = __this->get_health_8();
		NullCheck(L_2);
		VirtActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_2, ((float)((float)L_3)));
		// CurrentHealth.text=""+HealthSlider.value;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_4 = __this->get_CurrentHealth_5();
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_5 = __this->get_HealthSlider_4();
		NullCheck(L_5);
		float L_6;
		L_6 = VirtFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_5);
		V_0 = L_6;
		String_t* L_7;
		L_7 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)(&V_0), /*hidden argument*/NULL);
		String_t* L_8 = L_7;
		G_B1_0 = L_8;
		G_B1_1 = L_4;
		if (L_8)
		{
			G_B2_0 = L_8;
			G_B2_1 = L_4;
			goto IL_0042;
		}
	}
	{
		G_B2_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B2_1 = G_B1_1;
	}

IL_0042:
	{
		NullCheck(G_B2_1);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B2_1, G_B2_0);
		// if (health < 0) {
		int32_t L_9 = __this->get_health_8();
		if ((((int32_t)L_9) >= ((int32_t)0)))
		{
			goto IL_0057;
		}
	}
	{
		// health = 0;
		__this->set_health_8(0);
	}

IL_0057:
	{
		// if (health <= 0 ) {
		int32_t L_10 = __this->get_health_8();
		if ((((int32_t)L_10) > ((int32_t)0)))
		{
			goto IL_0066;
		}
	}
	{
		// Die();
		HealthSystem_Die_m10EE67C97BCB5506840DD454C617509378D5D6AD(__this, /*hidden argument*/NULL);
	}

IL_0066:
	{
		// }
		return;
	}
}
// System.Void HealthSystem::Die()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthSystem_Die_m10EE67C97BCB5506840DD454C617509378D5D6AD (HealthSystem_t534958B833E6A966FF53C62231D4C34A751947D8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9FBF31E575806B916FC0F7315D0359EC2699DCC2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// animator.SetBool("die",true);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0 = __this->get_animator_11();
		NullCheck(L_0);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_0, _stringLiteral9FBF31E575806B916FC0F7315D0359EC2699DCC2, (bool)1, /*hidden argument*/NULL);
		// LevelFailedPanel.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_LevelFailedPanel_9();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean HealthSystem::IsDead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HealthSystem_IsDead_mFBBD908589CC1C98461629E837F99D9CB0825CAE (HealthSystem_t534958B833E6A966FF53C62231D4C34A751947D8 * __this, const RuntimeMethod* method)
{
	{
		// return health <= 0;
		int32_t L_0 = __this->get_health_8();
		return (bool)((((int32_t)((((int32_t)L_0) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void HealthSystem::Heal(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthSystem_Heal_mD75531D4497900E4C994A2201D686CC920D3F467 (HealthSystem_t534958B833E6A966FF53C62231D4C34A751947D8 * __this, int32_t ___amount0, const RuntimeMethod* method)
{
	{
		// health += amount;
		int32_t L_0 = __this->get_health_8();
		int32_t L_1 = ___amount0;
		__this->set_health_8(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)));
		// if (health > healthMax) {
		int32_t L_2 = __this->get_health_8();
		int32_t L_3 = __this->get_healthMax_7();
		if ((((int32_t)L_2) <= ((int32_t)L_3)))
		{
			goto IL_0028;
		}
	}
	{
		// health = healthMax;
		int32_t L_4 = __this->get_healthMax_7();
		__this->set_health_8(L_4);
	}

IL_0028:
	{
		// }
		return;
	}
}
// System.Void HealthSystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthSystem__ctor_m0C9A993355EB5C4187AED5B1DB5C84A1B5833F7C (HealthSystem_t534958B833E6A966FF53C62231D4C34A751947D8 * __this, const RuntimeMethod* method)
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
// System.Single Joystick::get_Horizontal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_get_Horizontal_m1AE640531EE5E28A63A8D5AC757F9753DDA56321 (Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * __this, const RuntimeMethod* method)
{
	{
		// public float Horizontal { get { return (snapX) ? SnapFloat(input.x, AxisOptions.Horizontal) : input.x; } }
		bool L_0 = __this->get_snapX_7();
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_1 = __this->get_address_of_input_14();
		float L_2 = L_1->get_x_0();
		return L_2;
	}

IL_0014:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_3 = __this->get_address_of_input_14();
		float L_4 = L_3->get_x_0();
		float L_5;
		L_5 = Joystick_SnapFloat_m0A47278C9A57AC4A6696C0C13450F8F404580C19(__this, L_4, 1, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Single Joystick::get_Vertical()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_get_Vertical_m56B4D1C75DABA23923EF2E9C20543858E90D23C2 (Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * __this, const RuntimeMethod* method)
{
	{
		// public float Vertical { get { return (snapY) ? SnapFloat(input.y, AxisOptions.Vertical) : input.y; } }
		bool L_0 = __this->get_snapY_8();
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_1 = __this->get_address_of_input_14();
		float L_2 = L_1->get_y_1();
		return L_2;
	}

IL_0014:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_3 = __this->get_address_of_input_14();
		float L_4 = L_3->get_y_1();
		float L_5;
		L_5 = Joystick_SnapFloat_m0A47278C9A57AC4A6696C0C13450F8F404580C19(__this, L_4, 2, /*hidden argument*/NULL);
		return L_5;
	}
}
// UnityEngine.Vector2 Joystick::get_Direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Joystick_get_Direction_mF002E7B698C393FF866864D4A552357C535D36C5 (Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * __this, const RuntimeMethod* method)
{
	{
		// public Vector2 Direction { get { return new Vector2(Horizontal, Vertical); } }
		float L_0;
		L_0 = Joystick_get_Horizontal_m1AE640531EE5E28A63A8D5AC757F9753DDA56321(__this, /*hidden argument*/NULL);
		float L_1;
		L_1 = Joystick_get_Vertical_m56B4D1C75DABA23923EF2E9C20543858E90D23C2(__this, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_2), L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Single Joystick::get_HandleRange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_get_HandleRange_mF0843B8C3E187FB08DD7EFF63F4AA4E9D30F4C99 (Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * __this, const RuntimeMethod* method)
{
	{
		// get { return handleRange; }
		float L_0 = __this->get_handleRange_4();
		return L_0;
	}
}
// System.Void Joystick::set_HandleRange(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_set_HandleRange_m7C2C550DE23BA7D39DD2015EFAC0DBB53087E0DD (Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { handleRange = Mathf.Abs(value); }
		float L_0 = ___value0;
		float L_1;
		L_1 = fabsf(L_0);
		__this->set_handleRange_4(L_1);
		// set { handleRange = Mathf.Abs(value); }
		return;
	}
}
// System.Single Joystick::get_DeadZone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_get_DeadZone_m9CFD309045AF6FC6F40430F2E84B04AF644A7355 (Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * __this, const RuntimeMethod* method)
{
	{
		// get { return deadZone; }
		float L_0 = __this->get_deadZone_5();
		return L_0;
	}
}
// System.Void Joystick::set_DeadZone(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_set_DeadZone_m9A107FE7A8EF41E9FBEB6979B1B17FD79C3F127C (Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { deadZone = Mathf.Abs(value); }
		float L_0 = ___value0;
		float L_1;
		L_1 = fabsf(L_0);
		__this->set_deadZone_5(L_1);
		// set { deadZone = Mathf.Abs(value); }
		return;
	}
}
// AxisOptions Joystick::get_AxisOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Joystick_get_AxisOptions_m3098305D1A5F1F48444A1ADAEC7BD46E980E274B (Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * __this, const RuntimeMethod* method)
{
	{
		// public AxisOptions AxisOptions { get { return AxisOptions; } set { axisOptions = value; } }
		int32_t L_0;
		L_0 = Joystick_get_AxisOptions_m3098305D1A5F1F48444A1ADAEC7BD46E980E274B(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void Joystick::set_AxisOptions(AxisOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_set_AxisOptions_m671D494CBF07962B24BF4024059715FA650BB9EF (Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public AxisOptions AxisOptions { get { return AxisOptions; } set { axisOptions = value; } }
		int32_t L_0 = ___value0;
		__this->set_axisOptions_6(L_0);
		// public AxisOptions AxisOptions { get { return AxisOptions; } set { axisOptions = value; } }
		return;
	}
}
// System.Boolean Joystick::get_SnapX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Joystick_get_SnapX_mE645B0DB8C99081261ED3DF264B9AB41E92769E6 (Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * __this, const RuntimeMethod* method)
{
	{
		// public bool SnapX { get { return snapX; } set { snapX = value; } }
		bool L_0 = __this->get_snapX_7();
		return L_0;
	}
}
// System.Void Joystick::set_SnapX(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_set_SnapX_m710022BEA478442D17908F10F5BA53375705AC3B (Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool SnapX { get { return snapX; } set { snapX = value; } }
		bool L_0 = ___value0;
		__this->set_snapX_7(L_0);
		// public bool SnapX { get { return snapX; } set { snapX = value; } }
		return;
	}
}
// System.Boolean Joystick::get_SnapY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Joystick_get_SnapY_mF8086B253937812A6BF0BA6D0818313899CBA564 (Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * __this, const RuntimeMethod* method)
{
	{
		// public bool SnapY { get { return snapY; } set { snapY = value; } }
		bool L_0 = __this->get_snapY_8();
		return L_0;
	}
}
// System.Void Joystick::set_SnapY(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_set_SnapY_mAD4C6843FD698B99D23F21C3A15D9CE928289508 (Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool SnapY { get { return snapY; } set { snapY = value; } }
		bool L_0 = ___value0;
		__this->set_snapY_8(L_0);
		// public bool SnapY { get { return snapY; } set { snapY = value; } }
		return;
	}
}
// System.Void Joystick::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_Start_m3B4EEAA0389B5CCCA1479ACC4A167376E74BC275 (Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_m79D616348A09F5E2973F405F4F9D944744FAD6A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C95DC36BC35028D124872E120F7701E290A66F6);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// HandleRange = handleRange;
		float L_0 = __this->get_handleRange_4();
		Joystick_set_HandleRange_m7C2C550DE23BA7D39DD2015EFAC0DBB53087E0DD(__this, L_0, /*hidden argument*/NULL);
		// DeadZone = deadZone;
		float L_1 = __this->get_deadZone_5();
		Joystick_set_DeadZone_m9A107FE7A8EF41E9FBEB6979B1B17FD79C3F127C(__this, L_1, /*hidden argument*/NULL);
		// baseRect = GetComponent<RectTransform>();
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_2;
		L_2 = Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79(__this, /*hidden argument*/Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var);
		__this->set_baseRect_11(L_2);
		// canvas = GetComponentInParent<Canvas>();
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_3;
		L_3 = Component_GetComponentInParent_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_m79D616348A09F5E2973F405F4F9D944744FAD6A5(__this, /*hidden argument*/Component_GetComponentInParent_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_m79D616348A09F5E2973F405F4F9D944744FAD6A5_RuntimeMethod_var);
		__this->set_canvas_12(L_3);
		// if (canvas == null)
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_4 = __this->get_canvas_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0048;
		}
	}
	{
		// Debug.LogError("The Joystick is not placed inside a canvas");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral3C95DC36BC35028D124872E120F7701E290A66F6, /*hidden argument*/NULL);
	}

IL_0048:
	{
		// Vector2 center = new Vector2(0.5f, 0.5f);
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_0), (0.5f), (0.5f), /*hidden argument*/NULL);
		// background.pivot = center;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_6 = __this->get_background_9();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = V_0;
		NullCheck(L_6);
		RectTransform_set_pivot_m94F32EF88DC4EC9CA96721F8EDD8BFBC4FD07335(L_6, L_7, /*hidden argument*/NULL);
		// handle.anchorMin = center;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_8 = __this->get_handle_10();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = V_0;
		NullCheck(L_8);
		RectTransform_set_anchorMin_mD9E6E95890B701A5190C12F5AE42E622246AF798(L_8, L_9, /*hidden argument*/NULL);
		// handle.anchorMax = center;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_10 = __this->get_handle_10();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_11 = V_0;
		NullCheck(L_10);
		RectTransform_set_anchorMax_m67E04F54B5122804E32019D5FAE50C21CC67651D(L_10, L_11, /*hidden argument*/NULL);
		// handle.pivot = center;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_12 = __this->get_handle_10();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_13 = V_0;
		NullCheck(L_12);
		RectTransform_set_pivot_m94F32EF88DC4EC9CA96721F8EDD8BFBC4FD07335(L_12, L_13, /*hidden argument*/NULL);
		// handle.anchoredPosition = Vector2.zero;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_14 = __this->get_handle_10();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_15;
		L_15 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		NullCheck(L_14);
		RectTransform_set_anchoredPosition_m8143009B7D2B786DF8309D1D319F2212EFD24905(L_14, L_15, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Joystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnPointerDown_mB2A665CAD2B74565B6A1ACE2CA5A98A66020CE18 (Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method)
{
	{
		// OnDrag(eventData);
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_0 = ___eventData0;
		Joystick_OnDrag_m1127276AFCEF63DE869AC5156DE7712810B6C46D(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Joystick::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnDrag_m1127276AFCEF63DE869AC5156DE7712810B6C46D (Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransformUtility_t829C94C0D38759683C2BED9FCE244D5EA9842396_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// cam = null;
		__this->set_cam_13((Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)NULL);
		// if (canvas.renderMode == RenderMode.ScreenSpaceCamera)
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_0 = __this->get_canvas_12();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Canvas_get_renderMode_mAEC8A341577CC74EC89D5890E6D6E4A82B03574D(L_0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0026;
		}
	}
	{
		// cam = canvas.worldCamera;
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_2 = __this->get_canvas_12();
		NullCheck(L_2);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_3;
		L_3 = Canvas_get_worldCamera_mFE4C9FDA7996FE20AC5CA3CB45B4190C40122D51(L_2, /*hidden argument*/NULL);
		__this->set_cam_13(L_3);
	}

IL_0026:
	{
		// Vector2 position = RectTransformUtility.WorldToScreenPoint(cam, background.position);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_4 = __this->get_cam_13();
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_5 = __this->get_background_9();
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t829C94C0D38759683C2BED9FCE244D5EA9842396_il2cpp_TypeInfo_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7;
		L_7 = RectTransformUtility_WorldToScreenPoint_m92E801861EE14D73219C34A6175847C4A46105E1(L_4, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		// Vector2 radius = background.sizeDelta / 2;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_8 = __this->get_background_9();
		NullCheck(L_8);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9;
		L_9 = RectTransform_get_sizeDelta_mCFAE8C916280C173AB79BE32B910376E310D1C50(L_8, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_10;
		L_10 = Vector2_op_Division_m9E0ABD4CB731137B84249278B80D4C2624E58AC6_inline(L_9, (2.0f), /*hidden argument*/NULL);
		V_1 = L_10;
		// input = (eventData.position - position) / (radius * canvas.scaleFactor);
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_11 = ___eventData0;
		NullCheck(L_11);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_12;
		L_12 = PointerEventData_get_position_mE65C1CF448C935678F7C2A6265B4F3906FD9D651_inline(L_11, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_13 = V_0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_14;
		L_14 = Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline(L_12, L_13, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_15 = V_1;
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_16 = __this->get_canvas_12();
		NullCheck(L_16);
		float L_17;
		L_17 = Canvas_get_scaleFactor_m3F0D7E3B97B0493F4E98B2BBCA7A57BC1E1CB710(L_16, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_18;
		L_18 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_15, L_17, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_19;
		L_19 = Vector2_op_Division_m63A593A281BC0B6C36FCFF399056E1DE9F4C01E0_inline(L_14, L_18, /*hidden argument*/NULL);
		__this->set_input_14(L_19);
		// FormatInput();
		Joystick_FormatInput_m6EAB109EE0C7D5EB1389E2277AD72335EF140826(__this, /*hidden argument*/NULL);
		// HandleInput(input.magnitude, input.normalized, radius, cam);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_20 = __this->get_address_of_input_14();
		float L_21;
		L_21 = Vector2_get_magnitude_mD30DB8EB73C4A5CD395745AE1CA1C38DC61D2E85((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)L_20, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_22 = __this->get_address_of_input_14();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_23;
		L_23 = Vector2_get_normalized_m1F7F7AA3B7AC2414F245395C3785880B847BF7F5((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)L_22, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_24 = V_1;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_25 = __this->get_cam_13();
		VirtActionInvoker4< float, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 , Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 , Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * >::Invoke(9 /* System.Void Joystick::HandleInput(System.Single,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Camera) */, __this, L_21, L_23, L_24, L_25);
		// handle.anchoredPosition = input * radius * handleRange;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_26 = __this->get_handle_10();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_27 = __this->get_input_14();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_28 = V_1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_29;
		L_29 = Vector2_op_Multiply_m98AA5AF174918812B6E0C201C850FABB4A526813_inline(L_27, L_28, /*hidden argument*/NULL);
		float L_30 = __this->get_handleRange_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_31;
		L_31 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_29, L_30, /*hidden argument*/NULL);
		NullCheck(L_26);
		RectTransform_set_anchoredPosition_m8143009B7D2B786DF8309D1D319F2212EFD24905(L_26, L_31, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Joystick::HandleInput(System.Single,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_HandleInput_m38CE2907CF406D1F4B327F197E0CCED1C6DD8CC7 (Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * __this, float ___magnitude0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___normalised1, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___radius2, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___cam3, const RuntimeMethod* method)
{
	{
		// if (magnitude > deadZone)
		float L_0 = ___magnitude0;
		float L_1 = __this->get_deadZone_5();
		if ((!(((float)L_0) > ((float)L_1))))
		{
			goto IL_0019;
		}
	}
	{
		// if (magnitude > 1)
		float L_2 = ___magnitude0;
		if ((!(((float)L_2) > ((float)(1.0f)))))
		{
			goto IL_0024;
		}
	}
	{
		// input = normalised;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = ___normalised1;
		__this->set_input_14(L_3);
		// }
		return;
	}

IL_0019:
	{
		// input = Vector2.zero;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		L_4 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		__this->set_input_14(L_4);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void Joystick::FormatInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_FormatInput_m6EAB109EE0C7D5EB1389E2277AD72335EF140826 (Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * __this, const RuntimeMethod* method)
{
	{
		// if (axisOptions == AxisOptions.Horizontal)
		int32_t L_0 = __this->get_axisOptions_6();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0025;
		}
	}
	{
		// input = new Vector2(input.x, 0f);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_1 = __this->get_address_of_input_14();
		float L_2 = L_1->get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_3), L_2, (0.0f), /*hidden argument*/NULL);
		__this->set_input_14(L_3);
		return;
	}

IL_0025:
	{
		// else if (axisOptions == AxisOptions.Vertical)
		int32_t L_4 = __this->get_axisOptions_6();
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0049;
		}
	}
	{
		// input = new Vector2(0f, input.y);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_5 = __this->get_address_of_input_14();
		float L_6 = L_5->get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_7), (0.0f), L_6, /*hidden argument*/NULL);
		__this->set_input_14(L_7);
	}

IL_0049:
	{
		// }
		return;
	}
}
// System.Single Joystick::SnapFloat(System.Single,AxisOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_SnapFloat_m0A47278C9A57AC4A6696C0C13450F8F404580C19 (Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * __this, float ___value0, int32_t ___snapAxis1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	int32_t G_B10_0 = 0;
	int32_t G_B18_0 = 0;
	{
		// if (value == 0)
		float L_0 = ___value0;
		if ((!(((float)L_0) == ((float)(0.0f)))))
		{
			goto IL_000a;
		}
	}
	{
		// return value;
		float L_1 = ___value0;
		return L_1;
	}

IL_000a:
	{
		// if (axisOptions == AxisOptions.Both)
		int32_t L_2 = __this->get_axisOptions_6();
		if (L_2)
		{
			goto IL_0075;
		}
	}
	{
		// float angle = Vector2.Angle(input, Vector2.up);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = __this->get_input_14();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		L_4 = Vector2_get_up_mCEC23A0CF0FC3A2070C557AFD9F84F3D9991866C(/*hidden argument*/NULL);
		float L_5;
		L_5 = Vector2_Angle_mEAAD1B809A8CF1CC22C54EF2ADC702B11DA704A9_inline(L_3, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		// if (snapAxis == AxisOptions.Horizontal)
		int32_t L_6 = ___snapAxis1;
		if ((!(((uint32_t)L_6) == ((uint32_t)1))))
		{
			goto IL_004b;
		}
	}
	{
		// if (angle < 22.5f || angle > 157.5f)
		float L_7 = V_0;
		if ((((float)L_7) < ((float)(22.5f))))
		{
			goto IL_0037;
		}
	}
	{
		float L_8 = V_0;
		if ((!(((float)L_8) > ((float)(157.5f)))))
		{
			goto IL_003d;
		}
	}

IL_0037:
	{
		// return 0;
		return (0.0f);
	}

IL_003d:
	{
		// return (value > 0) ? 1 : -1;
		float L_9 = ___value0;
		if ((((float)L_9) > ((float)(0.0f))))
		{
			goto IL_0048;
		}
	}
	{
		G_B10_0 = (-1);
		goto IL_0049;
	}

IL_0048:
	{
		G_B10_0 = 1;
	}

IL_0049:
	{
		return ((float)((float)G_B10_0));
	}

IL_004b:
	{
		// else if (snapAxis == AxisOptions.Vertical)
		int32_t L_10 = ___snapAxis1;
		if ((!(((uint32_t)L_10) == ((uint32_t)2))))
		{
			goto IL_0073;
		}
	}
	{
		// if (angle > 67.5f && angle < 112.5f)
		float L_11 = V_0;
		if ((!(((float)L_11) > ((float)(67.5f)))))
		{
			goto IL_0065;
		}
	}
	{
		float L_12 = V_0;
		if ((!(((float)L_12) < ((float)(112.5f)))))
		{
			goto IL_0065;
		}
	}
	{
		// return 0;
		return (0.0f);
	}

IL_0065:
	{
		// return (value > 0) ? 1 : -1;
		float L_13 = ___value0;
		if ((((float)L_13) > ((float)(0.0f))))
		{
			goto IL_0070;
		}
	}
	{
		G_B18_0 = (-1);
		goto IL_0071;
	}

IL_0070:
	{
		G_B18_0 = 1;
	}

IL_0071:
	{
		return ((float)((float)G_B18_0));
	}

IL_0073:
	{
		// return value;
		float L_14 = ___value0;
		return L_14;
	}

IL_0075:
	{
		// if (value > 0)
		float L_15 = ___value0;
		if ((!(((float)L_15) > ((float)(0.0f)))))
		{
			goto IL_0083;
		}
	}
	{
		// return 1;
		return (1.0f);
	}

IL_0083:
	{
		// if (value < 0)
		float L_16 = ___value0;
		if ((!(((float)L_16) < ((float)(0.0f)))))
		{
			goto IL_0091;
		}
	}
	{
		// return -1;
		return (-1.0f);
	}

IL_0091:
	{
		// return 0;
		return (0.0f);
	}
}
// System.Void Joystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnPointerUp_m84FA57FCD3325BDEE02FED329B1C963C4DA2A037 (Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method)
{
	{
		// input = Vector2.zero;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0;
		L_0 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		__this->set_input_14(L_0);
		// handle.anchoredPosition = Vector2.zero;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_1 = __this->get_handle_10();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		L_2 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		NullCheck(L_1);
		RectTransform_set_anchoredPosition_m8143009B7D2B786DF8309D1D319F2212EFD24905(L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.Vector2 Joystick::ScreenPointToAnchoredPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Joystick_ScreenPointToAnchoredPosition_mAD769BA610FABC0D9C47294736AB0832C558D3FD (Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransformUtility_t829C94C0D38759683C2BED9FCE244D5EA9842396_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector2 localPoint = Vector2.zero;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0;
		L_0 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		V_0 = L_0;
		// if (RectTransformUtility.ScreenPointToLocalPointInRectangle(baseRect, screenPosition, cam, out localPoint))
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_1 = __this->get_baseRect_11();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___screenPosition0;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_3 = __this->get_cam_13();
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t829C94C0D38759683C2BED9FCE244D5EA9842396_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = RectTransformUtility_ScreenPointToLocalPointInRectangle_m9A7DB8DE3636CE91CDF6CE088A21B5DDF2678F03(L_1, L_2, L_3, (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_0), /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0060;
		}
	}
	{
		// Vector2 pivotOffset = baseRect.pivot * baseRect.sizeDelta;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_5 = __this->get_baseRect_11();
		NullCheck(L_5);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		L_6 = RectTransform_get_pivot_m146F0BB5D3873FCEF3606DAFB8994BFA978095EE(L_5, /*hidden argument*/NULL);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_7 = __this->get_baseRect_11();
		NullCheck(L_7);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		L_8 = RectTransform_get_sizeDelta_mCFAE8C916280C173AB79BE32B910376E310D1C50(L_7, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9;
		L_9 = Vector2_op_Multiply_m98AA5AF174918812B6E0C201C850FABB4A526813_inline(L_6, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		// return localPoint - (background.anchorMax * baseRect.sizeDelta) + pivotOffset;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_10 = V_0;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_11 = __this->get_background_9();
		NullCheck(L_11);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_12;
		L_12 = RectTransform_get_anchorMax_mC1577047A20870209C9A6801B75FE6930AE56F1E(L_11, /*hidden argument*/NULL);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_13 = __this->get_baseRect_11();
		NullCheck(L_13);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_14;
		L_14 = RectTransform_get_sizeDelta_mCFAE8C916280C173AB79BE32B910376E310D1C50(L_13, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_15;
		L_15 = Vector2_op_Multiply_m98AA5AF174918812B6E0C201C850FABB4A526813_inline(L_12, L_14, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_16;
		L_16 = Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline(L_10, L_15, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_17 = V_1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_18;
		L_18 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_16, L_17, /*hidden argument*/NULL);
		return L_18;
	}

IL_0060:
	{
		// return Vector2.zero;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_19;
		L_19 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		return L_19;
	}
}
// System.Void Joystick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick__ctor_mF7C14D62A9A6B3BD77F6365BB88DE406A9CE4E08 (Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * __this, const RuntimeMethod* method)
{
	{
		// [SerializeField] private float handleRange = 1;
		__this->set_handleRange_4((1.0f));
		// private Vector2 input = Vector2.zero;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0;
		L_0 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		__this->set_input_14(L_0);
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
// System.Void JoystickPlayerExample::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickPlayerExample_FixedUpdate_m3D7D2B1BE8C20574423088EF0C338700444B04B2 (JoystickPlayerExample_t07673CB1C6FF2F83E4464AA7D01DE72B5DA8922B * __this, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 direction = Vector3.forward * variableJoystick.Vertical + Vector3.right * variableJoystick.Horizontal;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90(/*hidden argument*/NULL);
		VariableJoystick_tEA2A86D8EE903904A4F3D9FA53B8F4B065A9EB9B * L_1 = __this->get_variableJoystick_5();
		NullCheck(L_1);
		float L_2;
		L_2 = Joystick_get_Vertical_m56B4D1C75DABA23923EF2E9C20543858E90D23C2(L_1, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_0, L_2, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_get_right_mF5A51F81961474E0A7A31C2757FD00921FB79C44(/*hidden argument*/NULL);
		VariableJoystick_tEA2A86D8EE903904A4F3D9FA53B8F4B065A9EB9B * L_5 = __this->get_variableJoystick_5();
		NullCheck(L_5);
		float L_6;
		L_6 = Joystick_get_Horizontal_m1AE640531EE5E28A63A8D5AC757F9753DDA56321(L_5, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_4, L_6, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_3, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		// rb.AddForce(direction * speed * Time.fixedDeltaTime, ForceMode.VelocityChange);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_9 = __this->get_rb_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		float L_11 = __this->get_speed_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_10, L_11, /*hidden argument*/NULL);
		float L_13;
		L_13 = Time_get_fixedDeltaTime_m8E94ECFF6A6A1D9B5D60BF82D116D540852484E5(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_12, L_13, /*hidden argument*/NULL);
		NullCheck(L_9);
		Rigidbody_AddForce_m78B9D94F505E19F3C63461362AD6DE7EA0836700(L_9, L_14, 2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void JoystickPlayerExample::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickPlayerExample__ctor_mEE8014E341485D43F0629DE22DB9F407E47FC49B (JoystickPlayerExample_t07673CB1C6FF2F83E4464AA7D01DE72B5DA8922B * __this, const RuntimeMethod* method)
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
// System.Void JoystickSetterExample::ModeChanged(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickSetterExample_ModeChanged_m79A8E404B1B30FAEECF0A21A55933659F664249B (JoystickSetterExample_tCCF610BB8D883F911E3868499E334A258844B73F * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0013;
			}
			case 1:
			{
				goto IL_0020;
			}
			case 2:
			{
				goto IL_002d;
			}
		}
	}
	{
		return;
	}

IL_0013:
	{
		// variableJoystick.SetMode(JoystickType.Fixed);
		VariableJoystick_tEA2A86D8EE903904A4F3D9FA53B8F4B065A9EB9B * L_1 = __this->get_variableJoystick_4();
		NullCheck(L_1);
		VariableJoystick_SetMode_m600C4C6E1FA830CF452EE33155AD60671BBEB04C(L_1, 0, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0020:
	{
		// variableJoystick.SetMode(JoystickType.Floating);
		VariableJoystick_tEA2A86D8EE903904A4F3D9FA53B8F4B065A9EB9B * L_2 = __this->get_variableJoystick_4();
		NullCheck(L_2);
		VariableJoystick_SetMode_m600C4C6E1FA830CF452EE33155AD60671BBEB04C(L_2, 1, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_002d:
	{
		// variableJoystick.SetMode(JoystickType.Dynamic);
		VariableJoystick_tEA2A86D8EE903904A4F3D9FA53B8F4B065A9EB9B * L_3 = __this->get_variableJoystick_4();
		NullCheck(L_3);
		VariableJoystick_SetMode_m600C4C6E1FA830CF452EE33155AD60671BBEB04C(L_3, 2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void JoystickSetterExample::AxisChanged(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickSetterExample_AxisChanged_mE5DDF00D9E76A95282555A47E8789961A708642F (JoystickSetterExample_tCCF610BB8D883F911E3868499E334A258844B73F * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0013;
			}
			case 1:
			{
				goto IL_0033;
			}
			case 2:
			{
				goto IL_0053;
			}
		}
	}
	{
		return;
	}

IL_0013:
	{
		// variableJoystick.AxisOptions = AxisOptions.Both;
		VariableJoystick_tEA2A86D8EE903904A4F3D9FA53B8F4B065A9EB9B * L_1 = __this->get_variableJoystick_4();
		NullCheck(L_1);
		Joystick_set_AxisOptions_m671D494CBF07962B24BF4024059715FA650BB9EF_inline(L_1, 0, /*hidden argument*/NULL);
		// background.sprite = axisSprites[index];
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_2 = __this->get_background_6();
		SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* L_3 = __this->get_axisSprites_7();
		int32_t L_4 = ___index0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_2);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_2, L_6, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0033:
	{
		// variableJoystick.AxisOptions = AxisOptions.Horizontal;
		VariableJoystick_tEA2A86D8EE903904A4F3D9FA53B8F4B065A9EB9B * L_7 = __this->get_variableJoystick_4();
		NullCheck(L_7);
		Joystick_set_AxisOptions_m671D494CBF07962B24BF4024059715FA650BB9EF_inline(L_7, 1, /*hidden argument*/NULL);
		// background.sprite = axisSprites[index];
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_8 = __this->get_background_6();
		SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* L_9 = __this->get_axisSprites_7();
		int32_t L_10 = ___index0;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_8);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_8, L_12, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0053:
	{
		// variableJoystick.AxisOptions = AxisOptions.Vertical;
		VariableJoystick_tEA2A86D8EE903904A4F3D9FA53B8F4B065A9EB9B * L_13 = __this->get_variableJoystick_4();
		NullCheck(L_13);
		Joystick_set_AxisOptions_m671D494CBF07962B24BF4024059715FA650BB9EF_inline(L_13, 2, /*hidden argument*/NULL);
		// background.sprite = axisSprites[index];
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_14 = __this->get_background_6();
		SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* L_15 = __this->get_axisSprites_7();
		int32_t L_16 = ___index0;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_14);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_14, L_18, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void JoystickSetterExample::SnapX(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickSetterExample_SnapX_mD9AF3A51530489B40CACB5C4CE390B7BB930D7C7 (JoystickSetterExample_tCCF610BB8D883F911E3868499E334A258844B73F * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// variableJoystick.SnapX = value;
		VariableJoystick_tEA2A86D8EE903904A4F3D9FA53B8F4B065A9EB9B * L_0 = __this->get_variableJoystick_4();
		bool L_1 = ___value0;
		NullCheck(L_0);
		Joystick_set_SnapX_m710022BEA478442D17908F10F5BA53375705AC3B_inline(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void JoystickSetterExample::SnapY(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickSetterExample_SnapY_m16DC4EBA6DAFCDDEF054FCF901169B33AB7B01BF (JoystickSetterExample_tCCF610BB8D883F911E3868499E334A258844B73F * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// variableJoystick.SnapY = value;
		VariableJoystick_tEA2A86D8EE903904A4F3D9FA53B8F4B065A9EB9B * L_0 = __this->get_variableJoystick_4();
		bool L_1 = ___value0;
		NullCheck(L_0);
		Joystick_set_SnapY_mAD4C6843FD698B99D23F21C3A15D9CE928289508_inline(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void JoystickSetterExample::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickSetterExample_Update_m0DEB8289C3A0133C8FAE885C6698C6082C51E3F6 (JoystickSetterExample_tCCF610BB8D883F911E3868499E334A258844B73F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFDA32DC2E96C00474CE484C62A98501A5FB8786E);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// valueText.text = "Current Value: " + variableJoystick.Direction;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_valueText_5();
		VariableJoystick_tEA2A86D8EE903904A4F3D9FA53B8F4B065A9EB9B * L_1 = __this->get_variableJoystick_4();
		NullCheck(L_1);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		L_2 = Joystick_get_Direction_mF002E7B698C393FF866864D4A552357C535D36C5(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3;
		L_3 = Vector2_ToString_mBD48EFCDB703ACCDC29E86AEB0D4D62FBA50F840((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_0), /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralFDA32DC2E96C00474CE484C62A98501A5FB8786E, L_3, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_4);
		// }
		return;
	}
}
// System.Void JoystickSetterExample::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickSetterExample__ctor_m2E65CFF997EC9703B4049E1F3870FC0AB3739C84 (JoystickSetterExample_tCCF610BB8D883F911E3868499E334A258844B73F * __this, const RuntimeMethod* method)
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
// System.Void Rotator::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rotator_OnEnable_m2A831C127162D5166AD103FB9E8217993C256486 (Rotator_t0B568907CEDD93A471CDE3AC3640E1770EF170A6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3FD8F8AC6AC464169FFBE67A817A867D6B67538B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// InvokeRepeating("Rotate", 0f, 0.0167f);
		MonoBehaviour_InvokeRepeating_mB77F4276826FBA696A150831D190875CB5802C70(__this, _stringLiteral3FD8F8AC6AC464169FFBE67A817A867D6B67538B, (0.0f), (0.0166999996f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Rotator::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rotator_OnDisable_mADEDF1AA8431773C04485F1EEA4BB7BDD7D1F797 (Rotator_t0B568907CEDD93A471CDE3AC3640E1770EF170A6 * __this, const RuntimeMethod* method)
{
	{
		// CancelInvoke();
		MonoBehaviour_CancelInvoke_mAF87B47704B16B114F82AC6914E4DA9AE034095D(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Rotator::Rotate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rotator_Rotate_m1408FD9056A2290E4985D438D1176523050E64AF (Rotator_t0B568907CEDD93A471CDE3AC3640E1770EF170A6 * __this, const RuntimeMethod* method)
{
	{
		// this.transform.localEulerAngles += new Vector3(x,y,z);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = L_0;
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_localEulerAngles_m4C442107F523737ADAB54855FDC1777A9B71D545(L_1, /*hidden argument*/NULL);
		float L_3 = __this->get_x_4();
		float L_4 = __this->get_y_5();
		float L_5 = __this->get_z_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_6), L_3, L_4, L_5, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_2, L_6, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_localEulerAngles_mB63076996124DC76E6902A81677A6E3C814C693B(L_1, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Rotator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rotator__ctor_mBB7C78CE11B1B78DD832ECEA175A9F8FF08355F7 (Rotator_t0B568907CEDD93A471CDE3AC3640E1770EF170A6 * __this, const RuntimeMethod* method)
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
// System.Single VariableJoystick::get_MoveThreshold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VariableJoystick_get_MoveThreshold_m417DCAF09D8B811441FED64D4AE2854B00217EFA (VariableJoystick_tEA2A86D8EE903904A4F3D9FA53B8F4B065A9EB9B * __this, const RuntimeMethod* method)
{
	{
		// public float MoveThreshold { get { return moveThreshold; } set { moveThreshold = Mathf.Abs(value); } }
		float L_0 = __this->get_moveThreshold_15();
		return L_0;
	}
}
// System.Void VariableJoystick::set_MoveThreshold(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick_set_MoveThreshold_mBF85E683260C0609A921EE7A1AD636E34B8FF5A0 (VariableJoystick_tEA2A86D8EE903904A4F3D9FA53B8F4B065A9EB9B * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float MoveThreshold { get { return moveThreshold; } set { moveThreshold = Mathf.Abs(value); } }
		float L_0 = ___value0;
		float L_1;
		L_1 = fabsf(L_0);
		__this->set_moveThreshold_15(L_1);
		// public float MoveThreshold { get { return moveThreshold; } set { moveThreshold = Mathf.Abs(value); } }
		return;
	}
}
// System.Void VariableJoystick::SetMode(JoystickType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick_SetMode_m600C4C6E1FA830CF452EE33155AD60671BBEB04C (VariableJoystick_tEA2A86D8EE903904A4F3D9FA53B8F4B065A9EB9B * __this, int32_t ___joystickType0, const RuntimeMethod* method)
{
	{
		// this.joystickType = joystickType;
		int32_t L_0 = ___joystickType0;
		__this->set_joystickType_16(L_0);
		// if(joystickType == JoystickType.Fixed)
		int32_t L_1 = ___joystickType0;
		if (L_1)
		{
			goto IL_002d;
		}
	}
	{
		// background.anchoredPosition = fixedPosition;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_2 = ((Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 *)__this)->get_background_9();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = __this->get_fixedPosition_17();
		NullCheck(L_2);
		RectTransform_set_anchoredPosition_m8143009B7D2B786DF8309D1D319F2212EFD24905(L_2, L_3, /*hidden argument*/NULL);
		// background.gameObject.SetActive(true);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_4 = ((Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 *)__this)->get_background_9();
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_5, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}

IL_002d:
	{
		// background.gameObject.SetActive(false);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_6 = ((Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 *)__this)->get_background_9();
		NullCheck(L_6);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_7, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void VariableJoystick::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick_Start_m6BDC051D277BBFA7C373186E2825DE5429219169 (VariableJoystick_tEA2A86D8EE903904A4F3D9FA53B8F4B065A9EB9B * __this, const RuntimeMethod* method)
{
	{
		// base.Start();
		Joystick_Start_m3B4EEAA0389B5CCCA1479ACC4A167376E74BC275(__this, /*hidden argument*/NULL);
		// fixedPosition = background.anchoredPosition;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0 = ((Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 *)__this)->get_background_9();
		NullCheck(L_0);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		L_1 = RectTransform_get_anchoredPosition_mFDC4F160F99634B2FBC73FE5FB1F4F4127CDD975(L_0, /*hidden argument*/NULL);
		__this->set_fixedPosition_17(L_1);
		// SetMode(joystickType);
		int32_t L_2 = __this->get_joystickType_16();
		VariableJoystick_SetMode_m600C4C6E1FA830CF452EE33155AD60671BBEB04C(__this, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void VariableJoystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick_OnPointerDown_m1C27A5FF5BB7149FB39CC27B69DCBF3FB4F45ADB (VariableJoystick_tEA2A86D8EE903904A4F3D9FA53B8F4B065A9EB9B * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method)
{
	{
		// if(joystickType != JoystickType.Fixed)
		int32_t L_0 = __this->get_joystickType_16();
		if (!L_0)
		{
			goto IL_0030;
		}
	}
	{
		// background.anchoredPosition = ScreenPointToAnchoredPosition(eventData.position);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_1 = ((Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 *)__this)->get_background_9();
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_2 = ___eventData0;
		NullCheck(L_2);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		L_3 = PointerEventData_get_position_mE65C1CF448C935678F7C2A6265B4F3906FD9D651_inline(L_2, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		L_4 = Joystick_ScreenPointToAnchoredPosition_mAD769BA610FABC0D9C47294736AB0832C558D3FD(__this, L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		RectTransform_set_anchoredPosition_m8143009B7D2B786DF8309D1D319F2212EFD24905(L_1, L_4, /*hidden argument*/NULL);
		// background.gameObject.SetActive(true);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_5 = ((Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 *)__this)->get_background_9();
		NullCheck(L_5);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_6, (bool)1, /*hidden argument*/NULL);
	}

IL_0030:
	{
		// base.OnPointerDown(eventData);
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_7 = ___eventData0;
		Joystick_OnPointerDown_mB2A665CAD2B74565B6A1ACE2CA5A98A66020CE18(__this, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void VariableJoystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick_OnPointerUp_mFD7BF52D93B0B573E9227D5E971778EC003A1AC2 (VariableJoystick_tEA2A86D8EE903904A4F3D9FA53B8F4B065A9EB9B * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method)
{
	{
		// if(joystickType != JoystickType.Fixed)
		int32_t L_0 = __this->get_joystickType_16();
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		// background.gameObject.SetActive(false);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_1 = ((Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 *)__this)->get_background_9();
		NullCheck(L_1);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)0, /*hidden argument*/NULL);
	}

IL_0019:
	{
		// base.OnPointerUp(eventData);
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_3 = ___eventData0;
		Joystick_OnPointerUp_m84FA57FCD3325BDEE02FED329B1C963C4DA2A037(__this, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void VariableJoystick::HandleInput(System.Single,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick_HandleInput_m868BD21C589C135310923B8C794AD5BA316C2D3A (VariableJoystick_tEA2A86D8EE903904A4F3D9FA53B8F4B065A9EB9B * __this, float ___magnitude0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___normalised1, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___radius2, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___cam3, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (joystickType == JoystickType.Dynamic && magnitude > moveThreshold)
		int32_t L_0 = __this->get_joystickType_16();
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_003e;
		}
	}
	{
		float L_1 = ___magnitude0;
		float L_2 = __this->get_moveThreshold_15();
		if ((!(((float)L_1) > ((float)L_2))))
		{
			goto IL_003e;
		}
	}
	{
		// Vector2 difference = normalised * (magnitude - moveThreshold) * radius;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = ___normalised1;
		float L_4 = ___magnitude0;
		float L_5 = __this->get_moveThreshold_15();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		L_6 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_3, ((float)il2cpp_codegen_subtract((float)L_4, (float)L_5)), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = ___radius2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		L_8 = Vector2_op_Multiply_m98AA5AF174918812B6E0C201C850FABB4A526813_inline(L_6, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		// background.anchoredPosition += difference;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_9 = ((Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 *)__this)->get_background_9();
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_10 = L_9;
		NullCheck(L_10);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_11;
		L_11 = RectTransform_get_anchoredPosition_mFDC4F160F99634B2FBC73FE5FB1F4F4127CDD975(L_10, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_12 = V_0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_13;
		L_13 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_11, L_12, /*hidden argument*/NULL);
		NullCheck(L_10);
		RectTransform_set_anchoredPosition_m8143009B7D2B786DF8309D1D319F2212EFD24905(L_10, L_13, /*hidden argument*/NULL);
	}

IL_003e:
	{
		// base.HandleInput(magnitude, normalised, radius, cam);
		float L_14 = ___magnitude0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_15 = ___normalised1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_16 = ___radius2;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_17 = ___cam3;
		Joystick_HandleInput_m38CE2907CF406D1F4B327F197E0CCED1C6DD8CC7(__this, L_14, L_15, L_16, L_17, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void VariableJoystick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick__ctor_m1E03B9859AAB8461C7A42706AE4E31606969C25F (VariableJoystick_tEA2A86D8EE903904A4F3D9FA53B8F4B065A9EB9B * __this, const RuntimeMethod* method)
{
	{
		// [SerializeField] private float moveThreshold = 1;
		__this->set_moveThreshold_15((1.0f));
		// private Vector2 fixedPosition = Vector2.zero;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0;
		L_0 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		__this->set_fixedPosition_17(L_0);
		Joystick__ctor_mF7C14D62A9A6B3BD77F6365BB88DE406A9CE4E08(__this, /*hidden argument*/NULL);
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
// System.Void ai::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ai_Start_m2AC9269675D61F91B5DD9AF4A2A7A1AB5423DD41 (ai_t05DCF615948AD04F90BBCFF646B8389E83581B71 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisNavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B_m15077FF184192C84FCF6B2A1FC8ECF53C9220F2F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// agent = GetComponent<NavMeshAgent>();
		NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * L_0;
		L_0 = Component_GetComponent_TisNavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B_m15077FF184192C84FCF6B2A1FC8ECF53C9220F2F(__this, /*hidden argument*/Component_GetComponent_TisNavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B_m15077FF184192C84FCF6B2A1FC8ECF53C9220F2F_RuntimeMethod_var);
		__this->set_agent_4(L_0);
		// }
		return;
	}
}
// System.Void ai::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ai_Update_m240FB6B9F15B9BC44B5EBEDF1A6F95C7DFB55DF4 (ai_t05DCF615948AD04F90BBCFF646B8389E83581B71 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1387CA5E3672B0B088B1C7438E3CB9614FEF2011);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4296EB386A58202EDFBE523C04BCA31DC7A0BE2F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F24FB9F6B79BD601755A6710686857F7B86347B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&enemyPathMovement_t2A082E51F0F47B4E09CD70F138BEF58C105BD216_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// animator.SetBool("attack", attackStatus);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0 = __this->get_animator_9();
		bool L_1 = __this->get_attackStatus_14();
		NullCheck(L_0);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_0, _stringLiteral1387CA5E3672B0B088B1C7438E3CB9614FEF2011, L_1, /*hidden argument*/NULL);
		// attackStatus = false;
		__this->set_attackStatus_14((bool)0);
		// distanceTargetPlayer = Vector3.Distance(Target.transform.position, transform.position);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_Target_7();
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_5, /*hidden argument*/NULL);
		float L_7;
		L_7 = Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677(L_4, L_6, /*hidden argument*/NULL);
		__this->set_distanceTargetPlayer_6(L_7);
		// if (distanceTargetPlayer <= canAttackDistance)
		float L_8 = __this->get_distanceTargetPlayer_6();
		int32_t L_9 = __this->get_canAttackDistance_13();
		if ((!(((float)L_8) <= ((float)((float)((float)L_9))))))
		{
			goto IL_0059;
		}
	}
	{
		// follow = true;
		__this->set_follow_8((bool)1);
	}

IL_0059:
	{
		// if (!agent.hasPath && !follow)
		NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * L_10 = __this->get_agent_4();
		NullCheck(L_10);
		bool L_11;
		L_11 = NavMeshAgent_get_hasPath_m0FD535ACA98272F1C5082C7EE600ECCB66F044CB(L_10, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_00a3;
		}
	}
	{
		bool L_12 = __this->get_follow_8();
		if (L_12)
		{
			goto IL_00a3;
		}
	}
	{
		// agent.SetDestination(enemyPathMovement.Instance.GetRandomPoint());
		NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * L_13 = __this->get_agent_4();
		enemyPathMovement_t2A082E51F0F47B4E09CD70F138BEF58C105BD216 * L_14 = ((enemyPathMovement_t2A082E51F0F47B4E09CD70F138BEF58C105BD216_StaticFields*)il2cpp_codegen_static_fields_for(enemyPathMovement_t2A082E51F0F47B4E09CD70F138BEF58C105BD216_il2cpp_TypeInfo_var))->get_Instance_4();
		NullCheck(L_14);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = enemyPathMovement_GetRandomPoint_m3147C4277C2F26076E374C37EC4EF33557D5498B(L_14, (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)NULL, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_13);
		bool L_16;
		L_16 = NavMeshAgent_SetDestination_m244EFBCDB717576303DA711EE39572B865F43747(L_13, L_15, /*hidden argument*/NULL);
		// animator.SetBool("run", true);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_17 = __this->get_animator_9();
		NullCheck(L_17);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_17, _stringLiteral9F24FB9F6B79BD601755A6710686857F7B86347B, (bool)1, /*hidden argument*/NULL);
		// follow = false;
		__this->set_follow_8((bool)0);
		// }else if(follow)
		return;
	}

IL_00a3:
	{
		// }else if(follow)
		bool L_18 = __this->get_follow_8();
		if (!L_18)
		{
			goto IL_01fc;
		}
	}
	{
		// if (AttackCooldown)
		bool L_19 = __this->get_AttackCooldown_12();
		if (!L_19)
		{
			goto IL_01ea;
		}
	}
	{
		// agent.SetDestination(Target.transform.position);
		NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * L_20 = __this->get_agent_4();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21 = __this->get_Target_7();
		NullCheck(L_21);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22;
		L_22 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_21, /*hidden argument*/NULL);
		NullCheck(L_22);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_22, /*hidden argument*/NULL);
		NullCheck(L_20);
		bool L_24;
		L_24 = NavMeshAgent_SetDestination_m244EFBCDB717576303DA711EE39572B865F43747(L_20, L_23, /*hidden argument*/NULL);
		// DefaultSkill.transform.position = new Vector3(transform.position.x, transform.position.y + 1, transform.position.z);
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_25 = __this->get_DefaultSkill_10();
		NullCheck(L_25);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_26;
		L_26 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_25, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_27;
		L_27 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_27);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		L_28 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_27, /*hidden argument*/NULL);
		float L_29 = L_28.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_30;
		L_30 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_30);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31;
		L_31 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_30, /*hidden argument*/NULL);
		float L_32 = L_31.get_y_3();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_33;
		L_33 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_33);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34;
		L_34 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_33, /*hidden argument*/NULL);
		float L_35 = L_34.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36;
		memset((&L_36), 0, sizeof(L_36));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_36), L_29, ((float)il2cpp_codegen_add((float)L_32, (float)(1.0f))), L_35, /*hidden argument*/NULL);
		NullCheck(L_26);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_26, L_36, /*hidden argument*/NULL);
		// DefaultSkill.transform.position += 1.2f * transform.forward;   //at�lan skill kendi collider �na �arp�yor diye
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_37 = __this->get_DefaultSkill_10();
		NullCheck(L_37);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_38;
		L_38 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_37, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_39 = L_38;
		NullCheck(L_39);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_40;
		L_40 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_39, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_41;
		L_41 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_41);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_42;
		L_42 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_41, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_43;
		L_43 = Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline((1.20000005f), L_42, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_44;
		L_44 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_40, L_43, /*hidden argument*/NULL);
		NullCheck(L_39);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_39, L_44, /*hidden argument*/NULL);
		// DefaultSkill.transform.localScale = new Vector3(2, 2, 2);
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_45 = __this->get_DefaultSkill_10();
		NullCheck(L_45);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_46;
		L_46 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_45, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_47;
		memset((&L_47), 0, sizeof(L_47));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_47), (2.0f), (2.0f), (2.0f), /*hidden argument*/NULL);
		NullCheck(L_46);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_46, L_47, /*hidden argument*/NULL);
		// DefaultSkill.transform.rotation = Quaternion.Euler(transform.localEulerAngles.x, transform.localEulerAngles.y, transform.localEulerAngles.z);
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_48 = __this->get_DefaultSkill_10();
		NullCheck(L_48);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_49;
		L_49 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_48, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_50;
		L_50 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_50);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_51;
		L_51 = Transform_get_localEulerAngles_m4C442107F523737ADAB54855FDC1777A9B71D545(L_50, /*hidden argument*/NULL);
		float L_52 = L_51.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_53;
		L_53 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_53);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_54;
		L_54 = Transform_get_localEulerAngles_m4C442107F523737ADAB54855FDC1777A9B71D545(L_53, /*hidden argument*/NULL);
		float L_55 = L_54.get_y_3();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_56;
		L_56 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_56);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_57;
		L_57 = Transform_get_localEulerAngles_m4C442107F523737ADAB54855FDC1777A9B71D545(L_56, /*hidden argument*/NULL);
		float L_58 = L_57.get_z_4();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_59;
		L_59 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3(L_52, L_55, L_58, /*hidden argument*/NULL);
		NullCheck(L_49);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_49, L_59, /*hidden argument*/NULL);
		// DefaultSkill.Play();
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_60 = __this->get_DefaultSkill_10();
		NullCheck(L_60);
		ParticleSystem_Play_m28D27CC4CDC1D93195C75647E6F6DAECF8B6BC50(L_60, /*hidden argument*/NULL);
		// attackStatus = true;
		__this->set_attackStatus_14((bool)1);
		// AttackCooldown = false;
		__this->set_AttackCooldown_12((bool)0);
		// follow = false;
		__this->set_follow_8((bool)0);
		// Invoke("ResetCooldown", coolDownConstant);
		float L_61 = __this->get_coolDownConstant_11();
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteral4296EB386A58202EDFBE523C04BCA31DC7A0BE2F, L_61, /*hidden argument*/NULL);
	}

IL_01ea:
	{
		// animator.SetBool("run", true);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_62 = __this->get_animator_9();
		NullCheck(L_62);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_62, _stringLiteral9F24FB9F6B79BD601755A6710686857F7B86347B, (bool)1, /*hidden argument*/NULL);
		// }else
		return;
	}

IL_01fc:
	{
		// animator.SetBool("run", false);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_63 = __this->get_animator_9();
		NullCheck(L_63);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_63, _stringLiteral9F24FB9F6B79BD601755A6710686857F7B86347B, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ai::ResetCooldown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ai_ResetCooldown_m2D460B4671F376F967A2886530ABD4570BCDB8F0 (ai_t05DCF615948AD04F90BBCFF646B8389E83581B71 * __this, const RuntimeMethod* method)
{
	{
		// AttackCooldown = true;
		__this->set_AttackCooldown_12((bool)1);
		// }
		return;
	}
}
// System.Void ai::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ai__ctor_m104A4608CD0A7DBD89850B967DFF40E9EDD24354 (ai_t05DCF615948AD04F90BBCFF646B8389E83581B71 * __this, const RuntimeMethod* method)
{
	{
		// private float coolDownConstant = 3f;
		__this->set_coolDownConstant_11((3.0f));
		// private bool AttackCooldown = true;
		__this->set_AttackCooldown_12((bool)1);
		// int canAttackDistance = 5;  // sald�rabilece�i max uzakl�k.
		__this->set_canAttackDistance_13(5);
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
// System.Void attack::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void attack_Start_mD100C19A5A0C450CB6948A4AC777380D70DF9A4C (attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&attack_Attack_m823084A7450D21C8D31F17596E980DBE08A2BC68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&attack_fireAttackSelect_mBC35489D6ECB95A5CA6FF686220C89E152DEEB14_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&attack_lightningAttackSelect_m56E141B947223BA517897DACA8714152A8DA3603_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&attack_waterAttackSelect_m6D27D566747B0B77457DFF440DDE2B909232CA49_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// attackButton.onClick.AddListener(Attack);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_0 = __this->get_attackButton_11();
		NullCheck(L_0);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_1;
		L_1 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_0, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_2 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_2, __this, (intptr_t)((intptr_t)attack_Attack_m823084A7450D21C8D31F17596E980DBE08A2BC68_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_1);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_1, L_2, /*hidden argument*/NULL);
		// fireAttackButton.onClick.AddListener(fireAttackSelect);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_3 = __this->get_fireAttackButton_12();
		NullCheck(L_3);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_4;
		L_4 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_3, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_5 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_5, __this, (intptr_t)((intptr_t)attack_fireAttackSelect_mBC35489D6ECB95A5CA6FF686220C89E152DEEB14_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_4);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_4, L_5, /*hidden argument*/NULL);
		// waterAttackButton.onClick.AddListener(waterAttackSelect);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_6 = __this->get_waterAttackButton_13();
		NullCheck(L_6);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_7;
		L_7 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_6, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_8 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_8, __this, (intptr_t)((intptr_t)attack_waterAttackSelect_m6D27D566747B0B77457DFF440DDE2B909232CA49_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_7);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_7, L_8, /*hidden argument*/NULL);
		// lightningAttackButton.onClick.AddListener(lightningAttackSelect);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_9 = __this->get_lightningAttackButton_14();
		NullCheck(L_9);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_10;
		L_10 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_9, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_11 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_11, __this, (intptr_t)((intptr_t)attack_lightningAttackSelect_m56E141B947223BA517897DACA8714152A8DA3603_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_10);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_10, L_11, /*hidden argument*/NULL);
		// SkillSelectionPanel.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = __this->get_SkillSelectionPanel_15();
		NullCheck(L_12);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_12, (bool)0, /*hidden argument*/NULL);
		// fire.Stop();
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_13 = __this->get_fire_6();
		NullCheck(L_13);
		ParticleSystem_Stop_m8CBF9268DE7B5A40952B4977462B857B5F5AFB9D(L_13, /*hidden argument*/NULL);
		// water.Stop();
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_14 = __this->get_water_8();
		NullCheck(L_14);
		ParticleSystem_Stop_m8CBF9268DE7B5A40952B4977462B857B5F5AFB9D(L_14, /*hidden argument*/NULL);
		// lightning.Stop();
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_15 = __this->get_lightning_9();
		NullCheck(L_15);
		ParticleSystem_Stop_m8CBF9268DE7B5A40952B4977462B857B5F5AFB9D(L_15, /*hidden argument*/NULL);
		// DefaultSkill.Stop();
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_16 = __this->get_DefaultSkill_10();
		NullCheck(L_16);
		ParticleSystem_Stop_m8CBF9268DE7B5A40952B4977462B857B5F5AFB9D(L_16, /*hidden argument*/NULL);
		// AttackSelectionIndex = 3; //default skill
		__this->set_AttackSelectionIndex_22(3);
		// }
		return;
	}
}
// System.Void attack::lightningAttackSelect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void attack_lightningAttackSelect_m56E141B947223BA517897DACA8714152A8DA3603 (attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C * __this, const RuntimeMethod* method)
{
	{
		// AttackSelectionIndex = 2;
		__this->set_AttackSelectionIndex_22(2);
		// SkillSelectionPanel.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_SkillSelectionPanel_15();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void attack::waterAttackSelect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void attack_waterAttackSelect_m6D27D566747B0B77457DFF440DDE2B909232CA49 (attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C * __this, const RuntimeMethod* method)
{
	{
		// AttackSelectionIndex = 1;
		__this->set_AttackSelectionIndex_22(1);
		// SkillSelectionPanel.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_SkillSelectionPanel_15();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void attack::fireAttackSelect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void attack_fireAttackSelect_mBC35489D6ECB95A5CA6FF686220C89E152DEEB14 (attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C * __this, const RuntimeMethod* method)
{
	{
		// AttackSelectionIndex = 0;
		__this->set_AttackSelectionIndex_22(0);
		// SkillSelectionPanel.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_SkillSelectionPanel_15();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void attack::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void attack_Update_m62DFF09503512CC42DDD2CDF5915844A0E3163AC (attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1387CA5E3672B0B088B1C7438E3CB9614FEF2011);
		s_Il2CppMethodInitialized = true;
	}
	{
		// animator.SetBool("attack", attackStatus);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0 = __this->get_animator_5();
		bool L_1 = __this->get_attackStatus_16();
		NullCheck(L_0);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_0, _stringLiteral1387CA5E3672B0B088B1C7438E3CB9614FEF2011, L_1, /*hidden argument*/NULL);
		// attackStatus = false;
		__this->set_attackStatus_16((bool)0);
		// }
		return;
	}
}
// System.Void attack::Attack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void attack_Attack_m823084A7450D21C8D31F17596E980DBE08A2BC68 (attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4296EB386A58202EDFBE523C04BCA31DC7A0BE2F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral495E264280E5C14253E511400B9ADE0D2C40FE9A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3AF3FBC14A12B1EDB016F449A57F0090BF81D2A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC0F1FE2DF85BDF608A021C026FA6E7DCF8B1CA5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (AttackCooldown==false)
		bool L_0 = __this->get_AttackCooldown_17();
		if (L_0)
		{
			goto IL_0376;
		}
	}
	{
		// SkillSelectionPanel.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_SkillSelectionPanel_15();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)1, /*hidden argument*/NULL);
		// attackStatus = true;
		__this->set_attackStatus_16((bool)1);
		// switch(AttackSelectionIndex)
		int32_t L_2 = __this->get_AttackSelectionIndex_22();
		V_0 = L_2;
		int32_t L_3 = V_0;
		switch (L_3)
		{
			case 0:
			{
				goto IL_0040;
			}
			case 1:
			{
				goto IL_0107;
			}
			case 2:
			{
				goto IL_018c;
			}
			case 3:
			{
				goto IL_0211;
			}
		}
	}
	{
		goto IL_031a;
	}

IL_0040:
	{
		// fireobject.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_fireobject_7();
		NullCheck(L_4);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, (bool)1, /*hidden argument*/NULL);
		// AddingVectorDeneme =new Vector3(0,0,0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_5), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		((attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C_StaticFields*)il2cpp_codegen_static_fields_for(attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C_il2cpp_TypeInfo_var))->set_AddingVectorDeneme_23(L_5);
		// AddingVectorDeneme.x=this.transform.localRotation.eulerAngles.y;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_7;
		L_7 = Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5(L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Quaternion_get_eulerAngles_m3DA616CAD670235A407E8A7A75925AA8E22338C3((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&V_1), /*hidden argument*/NULL);
		float L_9 = L_8.get_y_3();
		(((attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C_StaticFields*)il2cpp_codegen_static_fields_for(attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C_il2cpp_TypeInfo_var))->get_address_of_AddingVectorDeneme_23())->set_x_2(L_9);
		// fire.transform.position = new Vector3(this.transform.position.x, this.transform.position.y+1, this.transform.position.z);
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_10 = __this->get_fire_6();
		NullCheck(L_10);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_10, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_12, /*hidden argument*/NULL);
		float L_14 = L_13.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_15);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_15, /*hidden argument*/NULL);
		float L_17 = L_16.get_y_3();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18;
		L_18 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_18);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_18, /*hidden argument*/NULL);
		float L_20 = L_19.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_21), L_14, ((float)il2cpp_codegen_add((float)L_17, (float)(1.0f))), L_20, /*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_11, L_21, /*hidden argument*/NULL);
		// fire.Play();
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_22 = __this->get_fire_6();
		NullCheck(L_22);
		ParticleSystem_Play_m28D27CC4CDC1D93195C75647E6F6DAECF8B6BC50(L_22, /*hidden argument*/NULL);
		// InvokeRepeating("TornadoMove",0f,0.01f);
		MonoBehaviour_InvokeRepeating_mB77F4276826FBA696A150831D190875CB5802C70(__this, _stringLiteral495E264280E5C14253E511400B9ADE0D2C40FE9A, (0.0f), (0.00999999978f), /*hidden argument*/NULL);
		// Invoke("cancelTornado",3f);
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteralFC0F1FE2DF85BDF608A021C026FA6E7DCF8B1CA5, (3.0f), /*hidden argument*/NULL);
		// break;
		goto IL_031a;
	}

IL_0107:
	{
		// water.transform.position = new Vector3(transform.position.x, transform.position.y, transform.position.z);
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_23 = __this->get_water_8();
		NullCheck(L_23);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24;
		L_24 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_23, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25;
		L_25 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_25);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		L_26 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_25, /*hidden argument*/NULL);
		float L_27 = L_26.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_28;
		L_28 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_28);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29;
		L_29 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_28, /*hidden argument*/NULL);
		float L_30 = L_29.get_y_3();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_31;
		L_31 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_31);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32;
		L_32 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_31, /*hidden argument*/NULL);
		float L_33 = L_32.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34;
		memset((&L_34), 0, sizeof(L_34));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_34), L_27, L_30, L_33, /*hidden argument*/NULL);
		NullCheck(L_24);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_24, L_34, /*hidden argument*/NULL);
		// water.transform.position += 9 * transform.forward;
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_35 = __this->get_water_8();
		NullCheck(L_35);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_36;
		L_36 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_35, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_37 = L_36;
		NullCheck(L_37);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38;
		L_38 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_37, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_39;
		L_39 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_39);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_40;
		L_40 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_39, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_41;
		L_41 = Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline((9.0f), L_40, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_42;
		L_42 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_38, L_41, /*hidden argument*/NULL);
		NullCheck(L_37);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_37, L_42, /*hidden argument*/NULL);
		// water.Play();
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_43 = __this->get_water_8();
		NullCheck(L_43);
		ParticleSystem_Play_m28D27CC4CDC1D93195C75647E6F6DAECF8B6BC50(L_43, /*hidden argument*/NULL);
		// break;
		goto IL_031a;
	}

IL_018c:
	{
		// lightning.transform.position = new Vector3(transform.position.x, transform.position.y, transform.position.z);
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_44 = __this->get_lightning_9();
		NullCheck(L_44);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_45;
		L_45 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_44, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_46;
		L_46 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_46);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_47;
		L_47 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_46, /*hidden argument*/NULL);
		float L_48 = L_47.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_49;
		L_49 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_49);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_50;
		L_50 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_49, /*hidden argument*/NULL);
		float L_51 = L_50.get_y_3();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_52;
		L_52 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_52);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_53;
		L_53 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_52, /*hidden argument*/NULL);
		float L_54 = L_53.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_55;
		memset((&L_55), 0, sizeof(L_55));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_55), L_48, L_51, L_54, /*hidden argument*/NULL);
		NullCheck(L_45);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_45, L_55, /*hidden argument*/NULL);
		// lightning.transform.position += 6 * transform.forward;
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_56 = __this->get_lightning_9();
		NullCheck(L_56);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_57;
		L_57 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_56, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_58 = L_57;
		NullCheck(L_58);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_59;
		L_59 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_58, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_60;
		L_60 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_60);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_61;
		L_61 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_60, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_62;
		L_62 = Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline((6.0f), L_61, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_63;
		L_63 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_59, L_62, /*hidden argument*/NULL);
		NullCheck(L_58);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_58, L_63, /*hidden argument*/NULL);
		// lightning.Play();
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_64 = __this->get_lightning_9();
		NullCheck(L_64);
		ParticleSystem_Play_m28D27CC4CDC1D93195C75647E6F6DAECF8B6BC50(L_64, /*hidden argument*/NULL);
		// break;
		goto IL_031a;
	}

IL_0211:
	{
		// DefaultSkill.transform.position = new Vector3(transform.position.x, transform.position.y+1, transform.position.z);
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_65 = __this->get_DefaultSkill_10();
		NullCheck(L_65);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_66;
		L_66 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_65, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_67;
		L_67 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_67);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_68;
		L_68 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_67, /*hidden argument*/NULL);
		float L_69 = L_68.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_70;
		L_70 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_70);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_71;
		L_71 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_70, /*hidden argument*/NULL);
		float L_72 = L_71.get_y_3();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_73;
		L_73 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_73);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_74;
		L_74 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_73, /*hidden argument*/NULL);
		float L_75 = L_74.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_76;
		memset((&L_76), 0, sizeof(L_76));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_76), L_69, ((float)il2cpp_codegen_add((float)L_72, (float)(1.0f))), L_75, /*hidden argument*/NULL);
		NullCheck(L_66);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_66, L_76, /*hidden argument*/NULL);
		// DefaultSkill.transform.position += 1.2f * transform.forward;   //at�lan skill kendi collider �na �arp�yor diye
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_77 = __this->get_DefaultSkill_10();
		NullCheck(L_77);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_78;
		L_78 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_77, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_79 = L_78;
		NullCheck(L_79);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_80;
		L_80 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_79, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_81;
		L_81 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_81);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_82;
		L_82 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_81, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_83;
		L_83 = Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline((1.20000005f), L_82, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_84;
		L_84 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_80, L_83, /*hidden argument*/NULL);
		NullCheck(L_79);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_79, L_84, /*hidden argument*/NULL);
		// DefaultSkill.transform.localScale = new Vector3(2,2,2);
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_85 = __this->get_DefaultSkill_10();
		NullCheck(L_85);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_86;
		L_86 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_85, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_87;
		memset((&L_87), 0, sizeof(L_87));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_87), (2.0f), (2.0f), (2.0f), /*hidden argument*/NULL);
		NullCheck(L_86);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_86, L_87, /*hidden argument*/NULL);
		// DefaultSkill.transform.rotation = Quaternion.Euler(transform.localEulerAngles.x,transform.localEulerAngles.y,transform.localEulerAngles.z);
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_88 = __this->get_DefaultSkill_10();
		NullCheck(L_88);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_89;
		L_89 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_88, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_90;
		L_90 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_90);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_91;
		L_91 = Transform_get_localEulerAngles_m4C442107F523737ADAB54855FDC1777A9B71D545(L_90, /*hidden argument*/NULL);
		float L_92 = L_91.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_93;
		L_93 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_93);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_94;
		L_94 = Transform_get_localEulerAngles_m4C442107F523737ADAB54855FDC1777A9B71D545(L_93, /*hidden argument*/NULL);
		float L_95 = L_94.get_y_3();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_96;
		L_96 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_96);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_97;
		L_97 = Transform_get_localEulerAngles_m4C442107F523737ADAB54855FDC1777A9B71D545(L_96, /*hidden argument*/NULL);
		float L_98 = L_97.get_z_4();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_99;
		L_99 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3(L_92, L_95, L_98, /*hidden argument*/NULL);
		NullCheck(L_89);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_89, L_99, /*hidden argument*/NULL);
		// print(DefaultSkill.transform.rotation);
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_100 = __this->get_DefaultSkill_10();
		NullCheck(L_100);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_101;
		L_101 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_100, /*hidden argument*/NULL);
		NullCheck(L_101);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_102;
		L_102 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_101, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_103 = L_102;
		RuntimeObject * L_104 = Box(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var, &L_103);
		MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(L_104, /*hidden argument*/NULL);
		// DefaultSkill.Play();
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_105 = __this->get_DefaultSkill_10();
		NullCheck(L_105);
		ParticleSystem_Play_m28D27CC4CDC1D93195C75647E6F6DAECF8B6BC50(L_105, /*hidden argument*/NULL);
	}

IL_031a:
	{
		// StartCoroutine(Shake(.15f, 2f));
		RuntimeObject* L_106;
		L_106 = attack_Shake_m50B9EEA383EE1B738B8EBB3723D67874078E9B2B(__this, (0.150000006f), (2.0f), /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_107;
		L_107 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_106, /*hidden argument*/NULL);
		// Invoke("ResetCooldown",coolDownConstant);
		float L_108 = __this->get_coolDownConstant_19();
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteral4296EB386A58202EDFBE523C04BCA31DC7A0BE2F, L_108, /*hidden argument*/NULL);
		// InvokeRepeating("CoolDownText",0.0f,0.1f);
		MonoBehaviour_InvokeRepeating_mB77F4276826FBA696A150831D190875CB5802C70(__this, _stringLiteralF3AF3FBC14A12B1EDB016F449A57F0090BF81D2A, (0.0f), (0.100000001f), /*hidden argument*/NULL);
		// AttackCooldown=true;
		__this->set_AttackCooldown_17((bool)1);
		// attackButton.interactable=false;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_109 = __this->get_attackButton_11();
		NullCheck(L_109);
		Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40(L_109, (bool)0, /*hidden argument*/NULL);
		// timeLeftCD=coolDownConstant;
		float L_110 = __this->get_coolDownConstant_19();
		__this->set_timeLeftCD_20(L_110);
	}

IL_0376:
	{
		// }
		return;
	}
}
// System.Void attack::ResetCooldown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void attack_ResetCooldown_m33A3FB4606B497922C83436CB9D64BD60393D9E4 (attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C * __this, const RuntimeMethod* method)
{
	{
		// AttackCooldown = false;
		__this->set_AttackCooldown_17((bool)0);
		// attackButton.interactable=true;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_0 = __this->get_attackButton_11();
		NullCheck(L_0);
		Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40(L_0, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void attack::CoolDownText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void attack_CoolDownText_mB2E36D664AB3BA62E7CAF71CE3BAB3FF678F2BEB (attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3AF3FBC14A12B1EDB016F449A57F0090BF81D2A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// timeLeftCD=timeLeftCD-0.1f;
		float L_0 = __this->get_timeLeftCD_20();
		__this->set_timeLeftCD_20(((float)il2cpp_codegen_subtract((float)L_0, (float)(0.100000001f))));
		// timeLeftrounded=System.Math.Round(timeLeftCD,2);
		float L_1 = __this->get_timeLeftCD_20();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_2;
		L_2 = Math_Round_m394EEE2C796B3A1578E65037E0D57B3D6F9B1C70(((double)((double)L_1)), 2, /*hidden argument*/NULL);
		__this->set_timeLeftrounded_21(L_2);
		// coolDownText.text=(timeLeftrounded).ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_3 = __this->get_coolDownText_18();
		double* L_4 = __this->get_address_of_timeLeftrounded_21();
		String_t* L_5;
		L_5 = Double_ToString_m87E4A4DC004A167CF0AE1F2D271BC20A708CE57D((double*)L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_5);
		// if(timeLeftCD<=0)
		float L_6 = __this->get_timeLeftCD_20();
		if ((!(((float)L_6) <= ((float)(0.0f)))))
		{
			goto IL_006e;
		}
	}
	{
		// CancelInvoke("CoolDownText");
		MonoBehaviour_CancelInvoke_mAD4E486A74AF79DC1AFA880691EF839CDDE630A9(__this, _stringLiteralF3AF3FBC14A12B1EDB016F449A57F0090BF81D2A, /*hidden argument*/NULL);
		// timeLeftCD=0.0f;
		__this->set_timeLeftCD_20((0.0f));
		// coolDownText.text=" ";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_7 = __this->get_coolDownText_18();
		NullCheck(L_7);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_7, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
	}

IL_006e:
	{
		// }
		return;
	}
}
// System.Void attack::cancelTornado()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void attack_cancelTornado_mD0373C596F480F3D934BAA1872D4589FC72B528B (attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral495E264280E5C14253E511400B9ADE0D2C40FE9A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// fireobject.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_fireobject_7();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// CancelInvoke("TornadoMove");
		MonoBehaviour_CancelInvoke_mAD4E486A74AF79DC1AFA880691EF839CDDE630A9(__this, _stringLiteral495E264280E5C14253E511400B9ADE0D2C40FE9A, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void attack::TornadoMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void attack_TornadoMove_m2B0050EB3FECF3F1CE56B5B1FF99490EBF5AD8BA (attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// print(AddingVectorDeneme.x);
		float L_0 = (((attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C_StaticFields*)il2cpp_codegen_static_fields_for(attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C_il2cpp_TypeInfo_var))->get_address_of_AddingVectorDeneme_23())->get_x_2();
		float L_1 = L_0;
		RuntimeObject * L_2 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_1);
		MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(L_2, /*hidden argument*/NULL);
		// AddingVector=new Vector3(1f,0,1f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_3), (1.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		__this->set_AddingVector_24(L_3);
		// AddingVector.x=AddingVector.x*Mathf.Sin((AddingVectorDeneme.x*Mathf.PI)/180);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_4 = __this->get_address_of_AddingVector_24();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_5 = __this->get_address_of_AddingVector_24();
		float L_6 = L_5->get_x_2();
		float L_7 = (((attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C_StaticFields*)il2cpp_codegen_static_fields_for(attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C_il2cpp_TypeInfo_var))->get_address_of_AddingVectorDeneme_23())->get_x_2();
		float L_8;
		L_8 = sinf(((float)((float)((float)il2cpp_codegen_multiply((float)L_7, (float)(3.14159274f)))/(float)(180.0f))));
		L_4->set_x_2(((float)il2cpp_codegen_multiply((float)L_6, (float)L_8)));
		// AddingVector.z=AddingVector.z*Mathf.Cos((AddingVectorDeneme.x*Mathf.PI)/180);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_9 = __this->get_address_of_AddingVector_24();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_10 = __this->get_address_of_AddingVector_24();
		float L_11 = L_10->get_z_4();
		float L_12 = (((attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C_StaticFields*)il2cpp_codegen_static_fields_for(attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C_il2cpp_TypeInfo_var))->get_address_of_AddingVectorDeneme_23())->get_x_2();
		float L_13;
		L_13 = cosf(((float)((float)((float)il2cpp_codegen_multiply((float)L_12, (float)(3.14159274f)))/(float)(180.0f))));
		L_9->set_z_4(((float)il2cpp_codegen_multiply((float)L_11, (float)L_13)));
		// print(Mathf.Sin((AddingVectorDeneme.x*Mathf.PI)/180));
		float L_14 = (((attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C_StaticFields*)il2cpp_codegen_static_fields_for(attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C_il2cpp_TypeInfo_var))->get_address_of_AddingVectorDeneme_23())->get_x_2();
		float L_15;
		L_15 = sinf(((float)((float)((float)il2cpp_codegen_multiply((float)L_14, (float)(3.14159274f)))/(float)(180.0f))));
		float L_16 = L_15;
		RuntimeObject * L_17 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_16);
		MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(L_17, /*hidden argument*/NULL);
		// fire.transform.position=fire.transform.position+(AddingVector/20);
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_18 = __this->get_fire_6();
		NullCheck(L_18);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19;
		L_19 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_18, /*hidden argument*/NULL);
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_20 = __this->get_fire_6();
		NullCheck(L_20);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21;
		L_21 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_20, /*hidden argument*/NULL);
		NullCheck(L_21);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		L_22 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_21, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23 = __this->get_AddingVector_24();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
		L_24 = Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline(L_23, (20.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
		L_25 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_22, L_24, /*hidden argument*/NULL);
		NullCheck(L_19);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_19, L_25, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator attack::Shake(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* attack_Shake_m50B9EEA383EE1B738B8EBB3723D67874078E9B2B (attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C * __this, float ___duration0, float ___magnitude1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CShakeU3Ed__31_tBAA002366DCAAB6F476A4FFBA668E6574340243D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CShakeU3Ed__31_tBAA002366DCAAB6F476A4FFBA668E6574340243D * L_0 = (U3CShakeU3Ed__31_tBAA002366DCAAB6F476A4FFBA668E6574340243D *)il2cpp_codegen_object_new(U3CShakeU3Ed__31_tBAA002366DCAAB6F476A4FFBA668E6574340243D_il2cpp_TypeInfo_var);
		U3CShakeU3Ed__31__ctor_m6D1D6C7CDEA9C2A1C97A6CF9994202273ECA3593(L_0, 0, /*hidden argument*/NULL);
		U3CShakeU3Ed__31_tBAA002366DCAAB6F476A4FFBA668E6574340243D * L_1 = L_0;
		float L_2 = ___duration0;
		NullCheck(L_1);
		L_1->set_duration_3(L_2);
		U3CShakeU3Ed__31_tBAA002366DCAAB6F476A4FFBA668E6574340243D * L_3 = L_1;
		float L_4 = ___magnitude1;
		NullCheck(L_3);
		L_3->set_magnitude_2(L_4);
		return L_3;
	}
}
// System.Void attack::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void attack__ctor_m0D93581194CAE5950431AC15DD5F3CBE8F74DE06 (attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C * __this, const RuntimeMethod* method)
{
	{
		// private float coolDownConstant=1.0f;
		__this->set_coolDownConstant_19((1.0f));
		// int AttackSelectionIndex = -1;
		__this->set_AttackSelectionIndex_22((-1));
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
// System.Void enemyHealthSystem::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void enemyHealthSystem_Start_m543EE0007871F0CC3B2B99D8E64805B8A48357B2 (enemyHealthSystem_tD9957A42AEA49305BD2A45987B6A98EB509800A8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22892F8CC79C6CDCC3A35033A7FEDB069D75D297);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEF220375834A6164542D235CF7C29F3404EFC6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral832AC43642A57DC400138A9C4D6B0D7C63AE528E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	String_t* G_B2_0 = NULL;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B1_1 = NULL;
	String_t* G_B4_0 = NULL;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B4_1 = NULL;
	String_t* G_B3_0 = NULL;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B3_1 = NULL;
	{
		// HealthSlider.value = 100f;
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_0 = __this->get_HealthSlider_4();
		NullCheck(L_0);
		VirtActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_0, (100.0f));
		// health = (int)HealthSlider.value;
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_1 = __this->get_HealthSlider_4();
		NullCheck(L_1);
		float L_2;
		L_2 = VirtFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_1);
		__this->set_health_8(il2cpp_codegen_cast_double_to_int<int32_t>(L_2));
		// CurrentHealth = GameObject.FindGameObjectWithTag("EnemyCurrentHealth").GetComponent<Text>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F(_stringLiteral5BEF220375834A6164542D235CF7C29F3404EFC6, /*hidden argument*/NULL);
		NullCheck(L_3);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_4;
		L_4 = GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65(L_3, /*hidden argument*/GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		__this->set_CurrentHealth_5(L_4);
		// MaxHealth = GameObject.FindGameObjectWithTag("EnemyMaxHealth").GetComponent<Text>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F(_stringLiteral22892F8CC79C6CDCC3A35033A7FEDB069D75D297, /*hidden argument*/NULL);
		NullCheck(L_5);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_6;
		L_6 = GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65(L_5, /*hidden argument*/GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		__this->set_MaxHealth_6(L_6);
		// CurrentHealth.text = "" + HealthSlider.value;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_7 = __this->get_CurrentHealth_5();
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_8 = __this->get_HealthSlider_4();
		NullCheck(L_8);
		float L_9;
		L_9 = VirtFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_8);
		V_0 = L_9;
		String_t* L_10;
		L_10 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)(&V_0), /*hidden argument*/NULL);
		String_t* L_11 = L_10;
		G_B1_0 = L_11;
		G_B1_1 = L_7;
		if (L_11)
		{
			G_B2_0 = L_11;
			G_B2_1 = L_7;
			goto IL_006e;
		}
	}
	{
		G_B2_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B2_1 = G_B1_1;
	}

IL_006e:
	{
		NullCheck(G_B2_1);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B2_1, G_B2_0);
		// MaxHealth.text = "" + HealthSlider.value;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_12 = __this->get_MaxHealth_6();
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_13 = __this->get_HealthSlider_4();
		NullCheck(L_13);
		float L_14;
		L_14 = VirtFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_13);
		V_0 = L_14;
		String_t* L_15;
		L_15 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)(&V_0), /*hidden argument*/NULL);
		String_t* L_16 = L_15;
		G_B3_0 = L_16;
		G_B3_1 = L_12;
		if (L_16)
		{
			G_B4_0 = L_16;
			G_B4_1 = L_12;
			goto IL_0095;
		}
	}
	{
		G_B4_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B4_1 = G_B3_1;
	}

IL_0095:
	{
		NullCheck(G_B4_1);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B4_1, G_B4_0);
		// wizard = GameObject.FindWithTag("enemyWizard");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17;
		L_17 = GameObject_FindWithTag_mEF75D1FF1E55B338A77161FDCB68ED0A2A911DF3(_stringLiteral832AC43642A57DC400138A9C4D6B0D7C63AE528E, /*hidden argument*/NULL);
		__this->set_wizard_9(L_17);
		// animator = wizard.GetComponent<Animator>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18 = __this->get_wizard_9();
		NullCheck(L_18);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_19;
		L_19 = GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36(L_18, /*hidden argument*/GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36_RuntimeMethod_var);
		__this->set_animator_10(L_19);
		// }
		return;
	}
}
// System.Single enemyHealthSystem::GetHealthPercent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float enemyHealthSystem_GetHealthPercent_m49755675C7C75A27B3CA0201BC4CFE703219B29A (enemyHealthSystem_tD9957A42AEA49305BD2A45987B6A98EB509800A8 * __this, const RuntimeMethod* method)
{
	{
		// return (float)health / healthMax;
		int32_t L_0 = __this->get_health_8();
		int32_t L_1 = __this->get_healthMax_7();
		return ((float)((float)((float)((float)L_0))/(float)((float)((float)L_1))));
	}
}
// System.Void enemyHealthSystem::Damage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void enemyHealthSystem_Damage_m95212E0C4FD7B26E062C4A08509B6CDE69CF9309 (enemyHealthSystem_tD9957A42AEA49305BD2A45987B6A98EB509800A8 * __this, int32_t ___amount0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	String_t* G_B2_0 = NULL;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B1_1 = NULL;
	{
		// health -= amount;
		int32_t L_0 = __this->get_health_8();
		int32_t L_1 = ___amount0;
		__this->set_health_8(((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1)));
		// HealthSlider.value = health;
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_2 = __this->get_HealthSlider_4();
		int32_t L_3 = __this->get_health_8();
		NullCheck(L_2);
		VirtActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_2, ((float)((float)L_3)));
		// CurrentHealth.text = "" + HealthSlider.value;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_4 = __this->get_CurrentHealth_5();
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_5 = __this->get_HealthSlider_4();
		NullCheck(L_5);
		float L_6;
		L_6 = VirtFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_5);
		V_0 = L_6;
		String_t* L_7;
		L_7 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)(&V_0), /*hidden argument*/NULL);
		String_t* L_8 = L_7;
		G_B1_0 = L_8;
		G_B1_1 = L_4;
		if (L_8)
		{
			G_B2_0 = L_8;
			G_B2_1 = L_4;
			goto IL_0042;
		}
	}
	{
		G_B2_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B2_1 = G_B1_1;
	}

IL_0042:
	{
		NullCheck(G_B2_1);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B2_1, G_B2_0);
		// if (health < 0)
		int32_t L_9 = __this->get_health_8();
		if ((((int32_t)L_9) >= ((int32_t)0)))
		{
			goto IL_0057;
		}
	}
	{
		// health = 0;
		__this->set_health_8(0);
	}

IL_0057:
	{
		// if (health <= 0 )
		int32_t L_10 = __this->get_health_8();
		if ((((int32_t)L_10) > ((int32_t)0)))
		{
			goto IL_0066;
		}
	}
	{
		// Die();
		enemyHealthSystem_Die_mE7109B277F7937E55D690877CA130348960C24C7(__this, /*hidden argument*/NULL);
	}

IL_0066:
	{
		// }
		return;
	}
}
// System.Void enemyHealthSystem::Die()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void enemyHealthSystem_Die_mE7109B277F7937E55D690877CA130348960C24C7 (enemyHealthSystem_tD9957A42AEA49305BD2A45987B6A98EB509800A8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9FBF31E575806B916FC0F7315D0359EC2699DCC2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// animator.SetBool("die", true);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0 = __this->get_animator_10();
		NullCheck(L_0);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_0, _stringLiteral9FBF31E575806B916FC0F7315D0359EC2699DCC2, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean enemyHealthSystem::IsDead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool enemyHealthSystem_IsDead_mBC3BE179F84DB549B5C72F678890B90263763F59 (enemyHealthSystem_tD9957A42AEA49305BD2A45987B6A98EB509800A8 * __this, const RuntimeMethod* method)
{
	{
		// return health <= 0;
		int32_t L_0 = __this->get_health_8();
		return (bool)((((int32_t)((((int32_t)L_0) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void enemyHealthSystem::Heal(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void enemyHealthSystem_Heal_m1BEA7317BE4D926F3F795BDDF6961BF42A5C3A52 (enemyHealthSystem_tD9957A42AEA49305BD2A45987B6A98EB509800A8 * __this, int32_t ___amount0, const RuntimeMethod* method)
{
	{
		// health += amount;
		int32_t L_0 = __this->get_health_8();
		int32_t L_1 = ___amount0;
		__this->set_health_8(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)));
		// if (health > healthMax)
		int32_t L_2 = __this->get_health_8();
		int32_t L_3 = __this->get_healthMax_7();
		if ((((int32_t)L_2) <= ((int32_t)L_3)))
		{
			goto IL_0028;
		}
	}
	{
		// health = healthMax;
		int32_t L_4 = __this->get_healthMax_7();
		__this->set_health_8(L_4);
	}

IL_0028:
	{
		// }
		return;
	}
}
// System.Void enemyHealthSystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void enemyHealthSystem__ctor_m3284941422CDC55981276E75996E413A9D99CAF1 (enemyHealthSystem_tD9957A42AEA49305BD2A45987B6A98EB509800A8 * __this, const RuntimeMethod* method)
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
		__this->set_healthSlider_5(L_0);
		// maxHealthText = GetComponentsInChildren<Text>()[2];
		TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* L_1;
		L_1 = Component_GetComponentsInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m7556907CF90B895FDFBEC11100A5F7AD5FAF1AA6(__this, /*hidden argument*/Component_GetComponentsInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m7556907CF90B895FDFBEC11100A5F7AD5FAF1AA6_RuntimeMethod_var);
		NullCheck(L_1);
		int32_t L_2 = 2;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		__this->set_maxHealthText_6(L_3);
		// currentHealthText = GetComponentsInChildren<Text>()[0];
		TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* L_4;
		L_4 = Component_GetComponentsInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m7556907CF90B895FDFBEC11100A5F7AD5FAF1AA6(__this, /*hidden argument*/Component_GetComponentsInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m7556907CF90B895FDFBEC11100A5F7AD5FAF1AA6_RuntimeMethod_var);
		NullCheck(L_4);
		int32_t L_5 = 0;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		__this->set_currentHealthText_7(L_6);
		// bloodingAnim = GetComponentsInChildren<ParticleSystem>()[1];
		ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7* L_7;
		L_7 = Component_GetComponentsInChildren_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m75CC9D1656BD67C760E6D5EA89403C89B728E8F6(__this, /*hidden argument*/Component_GetComponentsInChildren_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m75CC9D1656BD67C760E6D5EA89403C89B728E8F6_RuntimeMethod_var);
		NullCheck(L_7);
		int32_t L_8 = 1;
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		__this->set_bloodingAnim_8(L_9);
		// explosionAnim = GetComponentsInChildren<ParticleSystem>()[2];
		ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7* L_10;
		L_10 = Component_GetComponentsInChildren_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m75CC9D1656BD67C760E6D5EA89403C89B728E8F6(__this, /*hidden argument*/Component_GetComponentsInChildren_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m75CC9D1656BD67C760E6D5EA89403C89B728E8F6_RuntimeMethod_var);
		NullCheck(L_10);
		int32_t L_11 = 2;
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		__this->set_explosionAnim_9(L_12);
		// bloodingAnim.Stop();
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_13 = __this->get_bloodingAnim_8();
		NullCheck(L_13);
		ParticleSystem_Stop_m8CBF9268DE7B5A40952B4977462B857B5F5AFB9D(L_13, /*hidden argument*/NULL);
		// explosionAnim.Stop();
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_14 = __this->get_explosionAnim_9();
		NullCheck(L_14);
		ParticleSystem_Stop_m8CBF9268DE7B5A40952B4977462B857B5F5AFB9D(L_14, /*hidden argument*/NULL);
		// healthSlider.value = healthController.GetHealthMax();
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_15 = __this->get_healthSlider_5();
		HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 * L_16 = __this->get_healthController_4();
		NullCheck(L_16);
		float L_17;
		L_17 = HealthController_GetHealthMax_m1AEB454DBA5B8AEA4353044AD37F7C9E7467760A(L_16, /*hidden argument*/NULL);
		NullCheck(L_15);
		VirtActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_15, L_17);
		// maxHealthText.text = "" + healthController.GetHealthMax();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_18 = __this->get_maxHealthText_6();
		HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 * L_19 = __this->get_healthController_4();
		NullCheck(L_19);
		float L_20;
		L_20 = HealthController_GetHealthMax_m1AEB454DBA5B8AEA4353044AD37F7C9E7467760A(L_19, /*hidden argument*/NULL);
		V_0 = L_20;
		String_t* L_21;
		L_21 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)(&V_0), /*hidden argument*/NULL);
		String_t* L_22 = L_21;
		G_B1_0 = L_22;
		G_B1_1 = L_18;
		if (L_22)
		{
			G_B2_0 = L_22;
			G_B2_1 = L_18;
			goto IL_0092;
		}
	}
	{
		G_B2_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B2_1 = G_B1_1;
	}

IL_0092:
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
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_0 = __this->get_healthSlider_5();
		HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 * L_1 = __this->get_healthController_4();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = HealthController_GetHealthCurrent_m0A98300D4D5C8BDEE92DC8D4D66C409CA4F4B9D7_inline(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_0, ((float)((float)L_2)));
		// currentHealthText.text = "" + healthController.GetHealthCurrent();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_3 = __this->get_currentHealthText_7();
		HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 * L_4 = __this->get_healthController_4();
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
		// if (healthSlider.value<=0)
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_8 = __this->get_healthSlider_5();
		NullCheck(L_8);
		float L_9;
		L_9 = VirtFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_8);
		if ((!(((float)L_9) <= ((float)(0.0f)))))
		{
			goto IL_0056;
		}
	}
	{
		// DeadStatus();
		enemyHealthSystem1_DeadStatus_m49D678D7303CB34E2E605F0DF888C65AAAD38D55(__this, /*hidden argument*/NULL);
	}

IL_0056:
	{
		// if (!bloodingAnim.isPlaying)
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_10 = __this->get_bloodingAnim_8();
		NullCheck(L_10);
		bool L_11;
		L_11 = ParticleSystem_get_isPlaying_m36FD03CBF99EE4C243B01F37D77CB6B1CFA526BA(L_10, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_006e;
		}
	}
	{
		// bloodingAnim.Stop();
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_12 = __this->get_bloodingAnim_8();
		NullCheck(L_12);
		ParticleSystem_Stop_m8CBF9268DE7B5A40952B4977462B857B5F5AFB9D(L_12, /*hidden argument*/NULL);
	}

IL_006e:
	{
		// if (!explosionAnim.isPlaying)
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_13 = __this->get_explosionAnim_9();
		NullCheck(L_13);
		bool L_14;
		L_14 = ParticleSystem_get_isPlaying_m36FD03CBF99EE4C243B01F37D77CB6B1CFA526BA(L_13, /*hidden argument*/NULL);
		if (L_14)
		{
			goto IL_0086;
		}
	}
	{
		// explosionAnim.Stop();
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_15 = __this->get_explosionAnim_9();
		NullCheck(L_15);
		ParticleSystem_Stop_m8CBF9268DE7B5A40952B4977462B857B5F5AFB9D(L_15, /*hidden argument*/NULL);
	}

IL_0086:
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
			goto IL_0043;
		}
	}
	{
		HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 * L_3 = __this->get_healthController_4();
		NullCheck(L_3);
		bool L_4;
		L_4 = HealthController_IsDead_mE7D0AA18C03226E2D5371D73C67C9F7CF86995D6_inline(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0043;
		}
	}
	{
		// healthController.Damage(5);
		HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 * L_5 = __this->get_healthController_4();
		NullCheck(L_5);
		HealthController_Damage_m72DC74C513F1A4FB7DA30BAAE1154A53B686B832(L_5, 5, /*hidden argument*/NULL);
		// if(!bloodingAnim.isPlaying)
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_6 = __this->get_bloodingAnim_8();
		NullCheck(L_6);
		bool L_7;
		L_7 = ParticleSystem_get_isPlaying_m36FD03CBF99EE4C243B01F37D77CB6B1CFA526BA(L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0043;
		}
	}
	{
		// bloodingAnim.Play();
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_8 = __this->get_bloodingAnim_8();
		NullCheck(L_8);
		ParticleSystem_Play_m28D27CC4CDC1D93195C75647E6F6DAECF8B6BC50(L_8, /*hidden argument*/NULL);
	}

IL_0043:
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2619A50D640D12F7EAED94CD5A39DFCD03B99E2A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// print(this.name);
		String_t* L_0;
		L_0 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(__this, /*hidden argument*/NULL);
		MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(L_0, /*hidden argument*/NULL);
		// print("dead");
		MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(_stringLiteral2619A50D640D12F7EAED94CD5A39DFCD03B99E2A, /*hidden argument*/NULL);
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_1, /*hidden argument*/NULL);
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
			goto IL_003b;
		}
	}
	{
		// healthController.Damage(10);
		HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 * L_4 = __this->get_healthController_4();
		NullCheck(L_4);
		HealthController_Damage_m72DC74C513F1A4FB7DA30BAAE1154A53B686B832(L_4, ((int32_t)10), /*hidden argument*/NULL);
		// bloodingAnim.Play();
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_5 = __this->get_bloodingAnim_8();
		NullCheck(L_5);
		ParticleSystem_Play_m28D27CC4CDC1D93195C75647E6F6DAECF8B6BC50(L_5, /*hidden argument*/NULL);
		// explosionAnim.Play();
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_6 = __this->get_explosionAnim_9();
		NullCheck(L_6);
		ParticleSystem_Play_m28D27CC4CDC1D93195C75647E6F6DAECF8B6BC50(L_6, /*hidden argument*/NULL);
		// }
		return;
	}

IL_003b:
	{
		// else if (other.gameObject.tag == "spikesAnim")
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_7 = ___other0;
		NullCheck(L_7);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		String_t* L_9;
		L_9 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_8, /*hidden argument*/NULL);
		bool L_10;
		L_10 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_9, _stringLiteral38809CA117CCA33BA8933F3362EBEC78BF6A8E1F, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0076;
		}
	}
	{
		// healthController.Damage(25);
		HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 * L_11 = __this->get_healthController_4();
		NullCheck(L_11);
		HealthController_Damage_m72DC74C513F1A4FB7DA30BAAE1154A53B686B832(L_11, ((int32_t)25), /*hidden argument*/NULL);
		// bloodingAnim.Play();
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_12 = __this->get_bloodingAnim_8();
		NullCheck(L_12);
		ParticleSystem_Play_m28D27CC4CDC1D93195C75647E6F6DAECF8B6BC50(L_12, /*hidden argument*/NULL);
		// explosionAnim.Play();
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_13 = __this->get_explosionAnim_9();
		NullCheck(L_13);
		ParticleSystem_Play_m28D27CC4CDC1D93195C75647E6F6DAECF8B6BC50(L_13, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0076:
	{
		// else if (other.gameObject.tag == "lightningAnim")
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_14 = ___other0;
		NullCheck(L_14);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15;
		L_15 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		String_t* L_16;
		L_16 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_15, /*hidden argument*/NULL);
		bool L_17;
		L_17 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_16, _stringLiteralAF120D3ACD2B78C190ECC5D0D6CFA5211E11785C, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_00b0;
		}
	}
	{
		// healthController.Damage(37);
		HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 * L_18 = __this->get_healthController_4();
		NullCheck(L_18);
		HealthController_Damage_m72DC74C513F1A4FB7DA30BAAE1154A53B686B832(L_18, ((int32_t)37), /*hidden argument*/NULL);
		// bloodingAnim.Play();
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_19 = __this->get_bloodingAnim_8();
		NullCheck(L_19);
		ParticleSystem_Play_m28D27CC4CDC1D93195C75647E6F6DAECF8B6BC50(L_19, /*hidden argument*/NULL);
		// explosionAnim.Play();
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_20 = __this->get_explosionAnim_9();
		NullCheck(L_20);
		ParticleSystem_Play_m28D27CC4CDC1D93195C75647E6F6DAECF8B6BC50(L_20, /*hidden argument*/NULL);
	}

IL_00b0:
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
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE547DCFAE57EBF4EF674D47C429C6D24AA8E0A60);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.tag == "fireballAnim")
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___other0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, _stringLiteralE547DCFAE57EBF4EF674D47C429C6D24AA8E0A60, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0039;
		}
	}
	{
		// healthController.Damage(7);
		HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 * L_4 = __this->get_healthController_4();
		NullCheck(L_4);
		HealthController_Damage_m72DC74C513F1A4FB7DA30BAAE1154A53B686B832(L_4, 7, /*hidden argument*/NULL);
		// bloodingAnim.Play();
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_5 = __this->get_bloodingAnim_8();
		NullCheck(L_5);
		ParticleSystem_Play_m28D27CC4CDC1D93195C75647E6F6DAECF8B6BC50(L_5, /*hidden argument*/NULL);
		// explosionAnim.Play();
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_6 = __this->get_explosionAnim_9();
		NullCheck(L_6);
		ParticleSystem_Play_m28D27CC4CDC1D93195C75647E6F6DAECF8B6BC50(L_6, /*hidden argument*/NULL);
	}

IL_0039:
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
		__this->set_healthController_4(L_0);
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
		// if (horizontal <= 0.3 && horizontal >= -0.3 && vertical <= 0.3 && vertical >= -0.3)
		float L_4 = __this->get_horizontal_5();
		if ((!(((double)((double)((double)L_4))) <= ((double)(0.29999999999999999)))))
		{
			goto IL_008d;
		}
	}
	{
		float L_5 = __this->get_horizontal_5();
		if ((!(((double)((double)((double)L_5))) >= ((double)(-0.29999999999999999)))))
		{
			goto IL_008d;
		}
	}
	{
		float L_6 = __this->get_vertical_6();
		if ((!(((double)((double)((double)L_6))) <= ((double)(0.29999999999999999)))))
		{
			goto IL_008d;
		}
	}
	{
		float L_7 = __this->get_vertical_6();
		if ((!(((double)((double)((double)L_7))) >= ((double)(-0.29999999999999999)))))
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void attack/<Shake>d__31::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShakeU3Ed__31__ctor_m6D1D6C7CDEA9C2A1C97A6CF9994202273ECA3593 (U3CShakeU3Ed__31_tBAA002366DCAAB6F476A4FFBA668E6574340243D * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void attack/<Shake>d__31::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShakeU3Ed__31_System_IDisposable_Dispose_m62E0820737D701009BA5DEAE0893F3A493128FD7 (U3CShakeU3Ed__31_tBAA002366DCAAB6F476A4FFBA668E6574340243D * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean attack/<Shake>d__31::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CShakeU3Ed__31_MoveNext_mAE4733B7B08A999DBDC705E46FA8E68727A828BA (U3CShakeU3Ed__31_tBAA002366DCAAB6F476A4FFBA668E6574340243D * __this, const RuntimeMethod* method)
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
// System.Object attack/<Shake>d__31::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CShakeU3Ed__31_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD2CFA8FAEA13620CEBEC87ECD3692C53B867E819 (U3CShakeU3Ed__31_tBAA002366DCAAB6F476A4FFBA668E6574340243D * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void attack/<Shake>d__31::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShakeU3Ed__31_System_Collections_IEnumerator_Reset_mB43F4EB9BA46E3306C87EE51102DB0532A64B4D3 (U3CShakeU3Ed__31_tBAA002366DCAAB6F476A4FFBA668E6574340243D * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CShakeU3Ed__31_System_Collections_IEnumerator_Reset_mB43F4EB9BA46E3306C87EE51102DB0532A64B4D3_RuntimeMethod_var)));
	}
}
// System.Object attack/<Shake>d__31::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CShakeU3Ed__31_System_Collections_IEnumerator_get_Current_m7639DC894BD0AD570E73C29A0AAE4AD81432AC3F (U3CShakeU3Ed__31_tBAA002366DCAAB6F476A4FFBA668E6574340243D * __this, const RuntimeMethod* method)
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		__this->set_z_4((0.0f));
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void enemyPathMovement_setRange_m1A3ACA9C6161883AD4D6D253839489631750C624_inline (enemyPathMovement_t2A082E51F0F47B4E09CD70F138BEF58C105BD216 * __this, float ___Range0, const RuntimeMethod* method)
{
	{
		// this.Range = Range;
		float L_0 = ___Range0;
		__this->set_Range_5(L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  PointerEventData_get_position_mE65C1CF448C935678F7C2A6265B4F3906FD9D651_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, const RuntimeMethod* method)
{
	{
		// public Vector2 position { get; set; }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = __this->get_U3CpositionU3Ek__BackingField_13();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		float L_2 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = ___a0;
		float L_4 = L_3.get_y_1();
		float L_5 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_6), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_m98AA5AF174918812B6E0C201C850FABB4A526813_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method)
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
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_8), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_3)), ((float)il2cpp_codegen_multiply((float)L_5, (float)L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method)
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
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_8), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HealthController_SetDie_m65412C2AC0FCF88E6D6380F06AE6DA3DFC8C576B_inline (HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 * __this, bool ___die0, const RuntimeMethod* method)
{
	{
		// this.die = die;
		bool L_0 = ___die0;
		__this->set_die_6(L_0);
		// }
		return;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Division_m9E0ABD4CB731137B84249278B80D4C2624E58AC6_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		float L_2 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = ___a0;
		float L_4 = L_3.get_y_1();
		float L_5 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_6), ((float)((float)L_1/(float)L_2)), ((float)((float)L_4/(float)L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = V_0;
		return L_7;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Division_m63A593A281BC0B6C36FCFF399056E1DE9F4C01E0_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method)
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
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_8), ((float)((float)L_1/(float)L_3)), ((float)((float)L_5/(float)L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Angle_mEAAD1B809A8CF1CC22C54EF2ADC702B11DA704A9_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___from0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___to1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	float V_3 = 0.0f;
	{
		float L_0;
		L_0 = Vector2_get_sqrMagnitude_mF489F0EF7E88FF046BA36767ECC50B89674C925A((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&___from0), /*hidden argument*/NULL);
		float L_1;
		L_1 = Vector2_get_sqrMagnitude_mF489F0EF7E88FF046BA36767ECC50B89674C925A((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&___to1), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_2;
		L_2 = sqrt(((double)((double)((float)il2cpp_codegen_multiply((float)L_0, (float)L_1)))));
		V_0 = ((float)((float)L_2));
		float L_3 = V_0;
		V_2 = (bool)((((float)L_3) < ((float)(1.0E-15f)))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		V_3 = (0.0f);
		goto IL_0056;
	}

IL_002c:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = ___from0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___to1;
		float L_7;
		L_7 = Vector2_Dot_mB2DFFDDA2881BA755F0B75CB530A39E8EBE70B48_inline(L_5, L_6, /*hidden argument*/NULL);
		float L_8 = V_0;
		float L_9;
		L_9 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)((float)L_7/(float)L_8)), (-1.0f), (1.0f), /*hidden argument*/NULL);
		V_1 = L_9;
		float L_10 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_11;
		L_11 = acos(((double)((double)L_10)));
		V_3 = ((float)il2cpp_codegen_multiply((float)((float)((float)L_11)), (float)(57.2957802f)));
		goto IL_0056;
	}

IL_0056:
	{
		float L_12 = V_3;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Joystick_set_AxisOptions_m671D494CBF07962B24BF4024059715FA650BB9EF_inline (Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public AxisOptions AxisOptions { get { return AxisOptions; } set { axisOptions = value; } }
		int32_t L_0 = ___value0;
		__this->set_axisOptions_6(L_0);
		// public AxisOptions AxisOptions { get { return AxisOptions; } set { axisOptions = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Joystick_set_SnapX_m710022BEA478442D17908F10F5BA53375705AC3B_inline (Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool SnapX { get { return snapX; } set { snapX = value; } }
		bool L_0 = ___value0;
		__this->set_snapX_7(L_0);
		// public bool SnapX { get { return snapX; } set { snapX = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Joystick_set_SnapY_mAD4C6843FD698B99D23F21C3A15D9CE928289508_inline (Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool SnapY { get { return snapY; } set { snapY = value; } }
		bool L_0 = ___value0;
		__this->set_snapY_8(L_0);
		// public bool SnapY { get { return snapY; } set { snapY = value; } }
		return;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline (Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * __this, const RuntimeMethod* method)
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_0 = __this->get_m_OnClick_20();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HealthController_GetHealthCurrent_m0A98300D4D5C8BDEE92DC8D4D66C409CA4F4B9D7_inline (HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 * __this, const RuntimeMethod* method)
{
	{
		// return healthCurrent;
		int32_t L_0 = __this->get_healthCurrent_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool HealthController_IsDead_mE7D0AA18C03226E2D5371D73C67C9F7CF86995D6_inline (HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 * __this, const RuntimeMethod* method)
{
	{
		// return die;
		bool L_0 = __this->get_die_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SVA_tF4D04A570299D8106DD273E4C6850A570B85E56E  List_1_get_Item_m1AC3B723705A37FCA21B472D010674EA850933B3_gshared_inline (List_1_tD40AE6D7A6AB19BD1993F05D20B4AB5EC723E6F9 * __this, int32_t ___index0, const RuntimeMethod* method)
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
		SVAU5BU5D_t91B041CB8F6D15D10C4FDF864146CEA041F286A4* L_2 = (SVAU5BU5D_t91B041CB8F6D15D10C4FDF864146CEA041F286A4*)__this->get__items_1();
		int32_t L_3 = ___index0;
		SVA_tF4D04A570299D8106DD273E4C6850A570B85E56E  L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((SVAU5BU5D_t91B041CB8F6D15D10C4FDF864146CEA041F286A4*)L_2, (int32_t)L_3);
		return (SVA_tF4D04A570299D8106DD273E4C6850A570B85E56E )L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Dot_mB2DFFDDA2881BA755F0B75CB530A39E8EBE70B48_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___lhs0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rhs1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___lhs0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___rhs1;
		float L_3 = L_2.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___lhs0;
		float L_5 = L_4.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___rhs1;
		float L_7 = L_6.get_y_1();
		V_0 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_1, (float)L_3)), (float)((float)il2cpp_codegen_multiply((float)L_5, (float)L_7))));
		goto IL_001f;
	}

IL_001f:
	{
		float L_8 = V_0;
		return L_8;
	}
}
