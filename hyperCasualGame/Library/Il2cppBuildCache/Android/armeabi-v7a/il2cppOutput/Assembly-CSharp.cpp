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

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t34AA4AF4E7352129CA58045901530E41445AC16D;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t815A476B0A21E183042059E705F9E505478CD8AE;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
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
// UnityEngine.UI.Image[]
struct ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224;
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
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11;
// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149;
// ArenaSellection
struct ArenaSellection_t3B2C26DA7D530C043B40B4E0FA39AF4035038994;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86;
// AudioPlayerManager
struct AudioPlayerManager_t3A53F63D4321D80154C3402406E6A2C977996484;
// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// UnityEngine.BoxCollider
struct BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5;
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
// DeathLogPanelController
struct DeathLogPanelController_t87E4399AB36E6AB25976252311C792D0197C6D40;
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
// HeroHealthSystem
struct HeroHealthSystem_t8AF0A90EF619583E7080848DEF6A5E10979D77C7;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// InGameAudio
struct InGameAudio_t7ABBEBFA55614E7C60E1CFA24FF9ADBA36C13C27;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9;
// Joystick
struct Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873;
// JoystickPlayerExample
struct JoystickPlayerExample_t07673CB1C6FF2F83E4464AA7D01DE72B5DA8922B;
// JoystickSetterExample
struct JoystickSetterExample_tCCF610BB8D883F911E3868499E334A258844B73F;
// LoadingPage
struct LoadingPage_t741F6F646828DED519580999C7360B7B1EA55E0E;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.AI.NavMeshAgent
struct NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B;
// UnityEngine.AI.NavMeshObstacle
struct NavMeshObstacle_t628A64EBD843A34267C4276DF7EE19BECA2C230A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// PanelController
struct PanelController_t680C04009837CA28BD14657765EC2AAE385ED0EA;
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
// SceneInGameManager
struct SceneInGameManager_tEF7E7AA172EA89A9D721D1D0B4B72D703646F2ED;
// SceneLoader
struct SceneLoader_t3266812523B184D5AEDF27CA310452129C676B0D;
// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD;
// SettingsControl
struct SettingsControl_tA8506FCBD7BE51F887211F09160B4C366F85CEB6;
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
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958;
// LoadingPage/<LoadAsynchronously>d__3
struct U3CLoadAsynchronouslyU3Ed__3_tEC679E349F2E1391F257C32519B899B2914C2551;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780;
// attack/<Shake>d__32
struct U3CShakeU3Ed__32_tCF25518FAB5A1AF5E4B8C1D01CE213E18FDEC1E9;
// cameraShaker/<Shake>d__0
struct U3CShakeU3Ed__0_t56ABF31C41CA87AFA3AC45DD82CF6F23D6F283A7;

IL2CPP_EXTERN_C RuntimeClass* AiCanAttackCircle_t57AE50A882353B23FA5A30DF81FBEE01909E19B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AudioPlayerManager_t3A53F63D4321D80154C3402406E6A2C977996484_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DamageCircle_tB70A539EB31C5490ADB1DFA14B86E5E6953EF876_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tD40AE6D7A6AB19BD1993F05D20B4AB5EC723E6F9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PanelController_t680C04009837CA28BD14657765EC2AAE385ED0EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectTransformUtility_t829C94C0D38759683C2BED9FCE244D5EA9842396_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SettingsControl_tA8506FCBD7BE51F887211F09160B4C366F85CEB6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CLoadAsynchronouslyU3Ed__3_tEC679E349F2E1391F257C32519B899B2914C2551_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CShakeU3Ed__0_t56ABF31C41CA87AFA3AC45DD82CF6F23D6F283A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CShakeU3Ed__32_tCF25518FAB5A1AF5E4B8C1D01CE213E18FDEC1E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* enemyPathMovement_t2A082E51F0F47B4E09CD70F138BEF58C105BD216_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* move_tF5C934E0EAF4295D46D7DAA6C508AFAB1B699276_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral096F6061D64CCAD1C750343DCFC7A756F02A1955;
IL2CPP_EXTERN_C String_t* _stringLiteral0A2750E5B8E57EE3FBDD87D9399164909FF096B1;
IL2CPP_EXTERN_C String_t* _stringLiteral0C47036B8A57416ACEC1B5843771337465BF957E;
IL2CPP_EXTERN_C String_t* _stringLiteral0DFA9AA29082727751167EB3C54FCAD0F9EDC665;
IL2CPP_EXTERN_C String_t* _stringLiteral1198B4556FD70251AD276347D997EBD135F90877;
IL2CPP_EXTERN_C String_t* _stringLiteral1387CA5E3672B0B088B1C7438E3CB9614FEF2011;
IL2CPP_EXTERN_C String_t* _stringLiteral163645A82FC30F1504D822E5D958F72D799EBFF7;
IL2CPP_EXTERN_C String_t* _stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0;
IL2CPP_EXTERN_C String_t* _stringLiteral1A164A021450B2AB8421A7487A4B69493CD43DBB;
IL2CPP_EXTERN_C String_t* _stringLiteral2103E02F663B34B7C8054990E279FB3420E835DF;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral255BCC1A53692949FCC4A1A4B72B5983FC77E2DA;
IL2CPP_EXTERN_C String_t* _stringLiteral341872AF21C32D6A74449BC426100C98602C2E63;
IL2CPP_EXTERN_C String_t* _stringLiteral369EA7CB5F0300CDA271EB79E496C69F49A4E5F9;
IL2CPP_EXTERN_C String_t* _stringLiteral38809CA117CCA33BA8933F3362EBEC78BF6A8E1F;
IL2CPP_EXTERN_C String_t* _stringLiteral3BEDFE95B26BD2EC46D2FC820F567725B8F85A53;
IL2CPP_EXTERN_C String_t* _stringLiteral3C95DC36BC35028D124872E120F7701E290A66F6;
IL2CPP_EXTERN_C String_t* _stringLiteral3FD8F8AC6AC464169FFBE67A817A867D6B67538B;
IL2CPP_EXTERN_C String_t* _stringLiteral426D823B01142CA0DC607F0F90B3CD4AF686B2F4;
IL2CPP_EXTERN_C String_t* _stringLiteral4296EB386A58202EDFBE523C04BCA31DC7A0BE2F;
IL2CPP_EXTERN_C String_t* _stringLiteral495E264280E5C14253E511400B9ADE0D2C40FE9A;
IL2CPP_EXTERN_C String_t* _stringLiteral51EB9A5BEDA5B6435C1A69F45A0BBA6B786274B9;
IL2CPP_EXTERN_C String_t* _stringLiteral56D755507113B0D056C6E727D2B4E8FC6BBA2E48;
IL2CPP_EXTERN_C String_t* _stringLiteral65A5AB28932A11AF332680CE7BFB56F9598E7571;
IL2CPP_EXTERN_C String_t* _stringLiteral80BC82F1DD5166532AE66D07BA010008AA0FDE06;
IL2CPP_EXTERN_C String_t* _stringLiteral832AC43642A57DC400138A9C4D6B0D7C63AE528E;
IL2CPP_EXTERN_C String_t* _stringLiteral8546F53EE272D19109BF52ABA65764B3FF1AFE0B;
IL2CPP_EXTERN_C String_t* _stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2;
IL2CPP_EXTERN_C String_t* _stringLiteral8784BFD2F8CEAE585F003CBC254E8E26F9BB3445;
IL2CPP_EXTERN_C String_t* _stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7;
IL2CPP_EXTERN_C String_t* _stringLiteral9CCAD0804681D389662AE4D59666F2C220293CCE;
IL2CPP_EXTERN_C String_t* _stringLiteral9F24FB9F6B79BD601755A6710686857F7B86347B;
IL2CPP_EXTERN_C String_t* _stringLiteral9FBF31E575806B916FC0F7315D0359EC2699DCC2;
IL2CPP_EXTERN_C String_t* _stringLiteralA11BC0AB16491B5DAEE99EAA33CF52FE6BC826E3;
IL2CPP_EXTERN_C String_t* _stringLiteralA495962332F353CC8940282C897A60D2FCA09F6C;
IL2CPP_EXTERN_C String_t* _stringLiteralA50160048687C05C4A6257A7E3773F0E2F8B6A26;
IL2CPP_EXTERN_C String_t* _stringLiteralA787B2F90B6DB394AA87BD57BB47C7D0F302E573;
IL2CPP_EXTERN_C String_t* _stringLiteralAAC1109D6216B0F3500C82EE33EA82A343C4964A;
IL2CPP_EXTERN_C String_t* _stringLiteralAC6541F6BB318820350428597DC551D4F772C7C5;
IL2CPP_EXTERN_C String_t* _stringLiteralAF120D3ACD2B78C190ECC5D0D6CFA5211E11785C;
IL2CPP_EXTERN_C String_t* _stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF;
IL2CPP_EXTERN_C String_t* _stringLiteralC470C6E32564963D06544F2773FCAEF947A1AB3A;
IL2CPP_EXTERN_C String_t* _stringLiteralCC2E32FD05AF4664C2C796E146AE3226E276B8EB;
IL2CPP_EXTERN_C String_t* _stringLiteralD6E5AAE0E0842A00FBDDBEC69FC79A4266000F86;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDA7E8B88100AA34B19982A11B0554BAF879AFF81;
IL2CPP_EXTERN_C String_t* _stringLiteralEDC7DA317AC4027BE399B744AF03A8F9E239673D;
IL2CPP_EXTERN_C String_t* _stringLiteralF3AF3FBC14A12B1EDB016F449A57F0090BF81D2A;
IL2CPP_EXTERN_C String_t* _stringLiteralF998D3AB9D686E9713A36A7C8A1CE58AEC2033BA;
IL2CPP_EXTERN_C String_t* _stringLiteralFC0F1FE2DF85BDF608A021C026FA6E7DCF8B1CA5;
IL2CPP_EXTERN_C String_t* _stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0;
IL2CPP_EXTERN_C String_t* _stringLiteralFDA32DC2E96C00474CE484C62A98501A5FB8786E;
IL2CPP_EXTERN_C const RuntimeMethod* ArenaSellection_Map1ButtonFunc_m3D34DE971E2D7AED71DDE76146C8949943403EF9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArenaSellection_Map2ButtonFunc_m96F83A1F59BD083C382E9A3EF7DF48091270617F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArenaSellection_PlayButtonFunc_m69B2EE419C5D5F2F86BEE14580AF2E148E61F974_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisAiCanAttackCircle_t57AE50A882353B23FA5A30DF81FBEE01909E19B6_mBE6C3FB3D5ADB99D8FB079ABBC1B6AEAB1BDF807_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisSlider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A_mECB3B5A216AD4AAA7331E7F6731886264840D054_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_m79D616348A09F5E2973F405F4F9D944744FAD6A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_Tisai_t05DCF615948AD04F90BBCFF646B8389E83581B71_m40BF0CC7E6ACF189A29585DB7357AEAACDB39764_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisBoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5_m0D682A42739E30A25411905C0A712C2BEE81F861_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisNavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B_m15077FF184192C84FCF6B2A1FC8ECF53C9220F2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisNavMeshObstacle_t628A64EBD843A34267C4276DF7EE19BECA2C230A_m7F6EBD07A10FF9A1021B15B10E1FBB41F83DF11E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_Tisai_t05DCF615948AD04F90BBCFF646B8389E83581B71_m3AE4C964EDD0B5968A0ED31120D6896937CE1FEA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_Tisattack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C_m8B4136C5A1E4F5F48C36BB68463CF12B4AF2A4DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisenemyHealthSystem1_t9D32045CB414C7BF3B895294B1044F2D9FFA0029_m43B1E00A13972A750952D0E9B84D030B14DDBA2E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_Tismove_tF5C934E0EAF4295D46D7DAA6C508AFAB1B699276_m74D44FCC622E6D79067EBEDFCAF80A68C81D21D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m75CC9D1656BD67C760E6D5EA89403C89B728E8F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m7556907CF90B895FDFBEC11100A5F7AD5FAF1AA6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisDeathLogPanelController_t87E4399AB36E6AB25976252311C792D0197C6D40_m32ECC9AB44B3F5870FFDF95D1E1EA7CFE9CDF1D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSettingsControl_tA8506FCBD7BE51F887211F09160B4C366F85CEB6_m682D5431B51BD046C01CD1B69324CEF1F7BFC64C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisenemyHealthSystem1_t9D32045CB414C7BF3B895294B1044F2D9FFA0029_m5B396305C939F2D2FB91382E777713431F8E03C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentsInChildren_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m415C82AF86BFB083C5595CEFF8582A47CEB3EA11_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentsInChildren_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m5D162A911D8F5C1BAB92301936B1551BBA72BFF6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentsInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m01C51735078110D354DFDA5EB9685D44E6659287_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mA1AFE8F34DCB403F8053BD652DB42122C24271E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mC351223374416E4FB2D7FA59D7C2756212037C2C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCC0ACDFD7714C349891385D6AB31543DD9E72961_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m1AC3B723705A37FCA21B472D010674EA850933B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisJoystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873_m7209E3C1CAB57BED00FB7BEF8EEF44EBADFD5C7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PanelController_NextLevelButtonFunc_m094E587AB4B0A0396269A2008519AE2C96BE8FC1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PanelController_TurnToMenuButtonFunc_mA44A0895F66746928E0A3FBD4909517319648367_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SceneLoader_playButtonFunc_m205183C3D3BAF8029AA7F2AA2BE76C91A640E7EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsControl_MusicOffButtonFunc_mA9CFA67C0342922BC693218231C1C92A41DA6B9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsControl_MusicOnButtonFunc_m9516BF83790F8DE3DAF54E834C8CCD5707064008_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsControl_SettingsPanelFunc_m80DB860F9F744C79BE508A8BABD3425DFA44C859_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsControl_SoundOffButtonFunc_m07C26805BFC98B234559F11CA2B7800422B77309_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsControl_SoundOnButtonFunc_mB940A6388816979936BA2991AA4DD937A195C43D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLoadAsynchronouslyU3Ed__3_System_Collections_IEnumerator_Reset_mC4D6E8709A104EDD782FFB1B2D9BD0DDA5839CF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CShakeU3Ed__0_System_Collections_IEnumerator_Reset_m2F5C429A30F92CCDBECF253EC0C39158763E49E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CShakeU3Ed__32_System_Collections_IEnumerator_Reset_mAFA4906CE1FEABFB2254F67C8F4E162B58B19088_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* attack_Attack_m823084A7450D21C8D31F17596E980DBE08A2BC68_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* attack_fireAttackSelect_mBC35489D6ECB95A5CA6FF686220C89E152DEEB14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* attack_lightningAttackSelect_m56E141B947223BA517897DACA8714152A8DA3603_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* attack_waterAttackSelect_m6D27D566747B0B77457DFF440DDE2B909232CA49_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
struct ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224;
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


// System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>
struct Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14, ___list_0)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_list_0() const { return ___list_0; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14, ___current_3)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_current_3() const { return ___current_3; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
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


// UnityEngine.SceneManagement.Scene
struct Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
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


// attack/<Shake>d__32
struct U3CShakeU3Ed__32_tCF25518FAB5A1AF5E4B8C1D01CE213E18FDEC1E9  : public RuntimeObject
{
public:
	// System.Int32 attack/<Shake>d__32::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object attack/<Shake>d__32::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Single attack/<Shake>d__32::magnitude
	float ___magnitude_2;
	// System.Single attack/<Shake>d__32::duration
	float ___duration_3;
	// UnityEngine.Vector3 attack/<Shake>d__32::<originalPos>5__2
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CoriginalPosU3E5__2_4;
	// System.Single attack/<Shake>d__32::<elapsed>5__3
	float ___U3CelapsedU3E5__3_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CShakeU3Ed__32_tCF25518FAB5A1AF5E4B8C1D01CE213E18FDEC1E9, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CShakeU3Ed__32_tCF25518FAB5A1AF5E4B8C1D01CE213E18FDEC1E9, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_magnitude_2() { return static_cast<int32_t>(offsetof(U3CShakeU3Ed__32_tCF25518FAB5A1AF5E4B8C1D01CE213E18FDEC1E9, ___magnitude_2)); }
	inline float get_magnitude_2() const { return ___magnitude_2; }
	inline float* get_address_of_magnitude_2() { return &___magnitude_2; }
	inline void set_magnitude_2(float value)
	{
		___magnitude_2 = value;
	}

	inline static int32_t get_offset_of_duration_3() { return static_cast<int32_t>(offsetof(U3CShakeU3Ed__32_tCF25518FAB5A1AF5E4B8C1D01CE213E18FDEC1E9, ___duration_3)); }
	inline float get_duration_3() const { return ___duration_3; }
	inline float* get_address_of_duration_3() { return &___duration_3; }
	inline void set_duration_3(float value)
	{
		___duration_3 = value;
	}

	inline static int32_t get_offset_of_U3CoriginalPosU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CShakeU3Ed__32_tCF25518FAB5A1AF5E4B8C1D01CE213E18FDEC1E9, ___U3CoriginalPosU3E5__2_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CoriginalPosU3E5__2_4() const { return ___U3CoriginalPosU3E5__2_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CoriginalPosU3E5__2_4() { return &___U3CoriginalPosU3E5__2_4; }
	inline void set_U3CoriginalPosU3E5__2_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CoriginalPosU3E5__2_4 = value;
	}

	inline static int32_t get_offset_of_U3CelapsedU3E5__3_5() { return static_cast<int32_t>(offsetof(U3CShakeU3Ed__32_tCF25518FAB5A1AF5E4B8C1D01CE213E18FDEC1E9, ___U3CelapsedU3E5__3_5)); }
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


// UnityEngine.AudioBehaviour
struct AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
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


// UnityEngine.AI.NavMeshObstacle
struct NavMeshObstacle_t628A64EBD843A34267C4276DF7EE19BECA2C230A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
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
	// UnityEngine.UI.Button ArenaSellection::PlayButton
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___PlayButton_9;
	// UnityEngine.GameObject ArenaSellection::Playobject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Playobject_10;

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

	inline static int32_t get_offset_of_PlayButton_9() { return static_cast<int32_t>(offsetof(ArenaSellection_t3B2C26DA7D530C043B40B4E0FA39AF4035038994, ___PlayButton_9)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_PlayButton_9() const { return ___PlayButton_9; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_PlayButton_9() { return &___PlayButton_9; }
	inline void set_PlayButton_9(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___PlayButton_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PlayButton_9), (void*)value);
	}

	inline static int32_t get_offset_of_Playobject_10() { return static_cast<int32_t>(offsetof(ArenaSellection_t3B2C26DA7D530C043B40B4E0FA39AF4035038994, ___Playobject_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Playobject_10() const { return ___Playobject_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Playobject_10() { return &___Playobject_10; }
	inline void set_Playobject_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Playobject_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Playobject_10), (void*)value);
	}
};


// AudioPlayerManager
struct AudioPlayerManager_t3A53F63D4321D80154C3402406E6A2C977996484  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.AudioSource AudioPlayerManager::mainmenuaudio
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___mainmenuaudio_5;

public:
	inline static int32_t get_offset_of_mainmenuaudio_5() { return static_cast<int32_t>(offsetof(AudioPlayerManager_t3A53F63D4321D80154C3402406E6A2C977996484, ___mainmenuaudio_5)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_mainmenuaudio_5() const { return ___mainmenuaudio_5; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_mainmenuaudio_5() { return &___mainmenuaudio_5; }
	inline void set_mainmenuaudio_5(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___mainmenuaudio_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mainmenuaudio_5), (void*)value);
	}
};

struct AudioPlayerManager_t3A53F63D4321D80154C3402406E6A2C977996484_StaticFields
{
public:
	// AudioPlayerManager AudioPlayerManager::instance
	AudioPlayerManager_t3A53F63D4321D80154C3402406E6A2C977996484 * ___instance_4;
	// System.Single AudioPlayerManager::MusicLevelFromAudioPlayer
	float ___MusicLevelFromAudioPlayer_6;

public:
	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(AudioPlayerManager_t3A53F63D4321D80154C3402406E6A2C977996484_StaticFields, ___instance_4)); }
	inline AudioPlayerManager_t3A53F63D4321D80154C3402406E6A2C977996484 * get_instance_4() const { return ___instance_4; }
	inline AudioPlayerManager_t3A53F63D4321D80154C3402406E6A2C977996484 ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(AudioPlayerManager_t3A53F63D4321D80154C3402406E6A2C977996484 * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_4), (void*)value);
	}

	inline static int32_t get_offset_of_MusicLevelFromAudioPlayer_6() { return static_cast<int32_t>(offsetof(AudioPlayerManager_t3A53F63D4321D80154C3402406E6A2C977996484_StaticFields, ___MusicLevelFromAudioPlayer_6)); }
	inline float get_MusicLevelFromAudioPlayer_6() const { return ___MusicLevelFromAudioPlayer_6; }
	inline float* get_address_of_MusicLevelFromAudioPlayer_6() { return &___MusicLevelFromAudioPlayer_6; }
	inline void set_MusicLevelFromAudioPlayer_6(float value)
	{
		___MusicLevelFromAudioPlayer_6 = value;
	}
};


// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B  : public AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A
{
public:

public:
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


// GameMain
struct GameMain_t1257BA6D1B7168D049E99EB3B80136749D29CAA6  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// HeroHealthSystem
struct HeroHealthSystem_t8AF0A90EF619583E7080848DEF6A5E10979D77C7  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// HealthController HeroHealthSystem::healthController
	HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 * ___healthController_4;
	// UnityEngine.UI.Slider HeroHealthSystem::healthSlider
	Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * ___healthSlider_5;
	// UnityEngine.UI.Text HeroHealthSystem::maxHealthText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___maxHealthText_6;
	// UnityEngine.UI.Text HeroHealthSystem::currentHealthText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___currentHealthText_7;
	// UnityEngine.ParticleSystem HeroHealthSystem::poisionAnim
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___poisionAnim_8;
	// UnityEngine.ParticleSystem HeroHealthSystem::explosionAnim
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___explosionAnim_9;
	// UnityEngine.ParticleSystem HeroHealthSystem::freezingAnim
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___freezingAnim_10;
	// UnityEngine.Animator HeroHealthSystem::animator
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator_11;
	// UnityEngine.GameObject HeroHealthSystem::enemies
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___enemies_12;
	// UnityEngine.GameObject HeroHealthSystem::gravestone
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gravestone_13;
	// UnityEngine.UI.Text HeroHealthSystem::deneme
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___deneme_14;
	// System.Boolean HeroHealthSystem::graveStoneControl
	bool ___graveStoneControl_15;

public:
	inline static int32_t get_offset_of_healthController_4() { return static_cast<int32_t>(offsetof(HeroHealthSystem_t8AF0A90EF619583E7080848DEF6A5E10979D77C7, ___healthController_4)); }
	inline HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 * get_healthController_4() const { return ___healthController_4; }
	inline HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 ** get_address_of_healthController_4() { return &___healthController_4; }
	inline void set_healthController_4(HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 * value)
	{
		___healthController_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___healthController_4), (void*)value);
	}

	inline static int32_t get_offset_of_healthSlider_5() { return static_cast<int32_t>(offsetof(HeroHealthSystem_t8AF0A90EF619583E7080848DEF6A5E10979D77C7, ___healthSlider_5)); }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * get_healthSlider_5() const { return ___healthSlider_5; }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A ** get_address_of_healthSlider_5() { return &___healthSlider_5; }
	inline void set_healthSlider_5(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * value)
	{
		___healthSlider_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___healthSlider_5), (void*)value);
	}

	inline static int32_t get_offset_of_maxHealthText_6() { return static_cast<int32_t>(offsetof(HeroHealthSystem_t8AF0A90EF619583E7080848DEF6A5E10979D77C7, ___maxHealthText_6)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_maxHealthText_6() const { return ___maxHealthText_6; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_maxHealthText_6() { return &___maxHealthText_6; }
	inline void set_maxHealthText_6(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___maxHealthText_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___maxHealthText_6), (void*)value);
	}

	inline static int32_t get_offset_of_currentHealthText_7() { return static_cast<int32_t>(offsetof(HeroHealthSystem_t8AF0A90EF619583E7080848DEF6A5E10979D77C7, ___currentHealthText_7)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_currentHealthText_7() const { return ___currentHealthText_7; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_currentHealthText_7() { return &___currentHealthText_7; }
	inline void set_currentHealthText_7(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___currentHealthText_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentHealthText_7), (void*)value);
	}

	inline static int32_t get_offset_of_poisionAnim_8() { return static_cast<int32_t>(offsetof(HeroHealthSystem_t8AF0A90EF619583E7080848DEF6A5E10979D77C7, ___poisionAnim_8)); }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * get_poisionAnim_8() const { return ___poisionAnim_8; }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E ** get_address_of_poisionAnim_8() { return &___poisionAnim_8; }
	inline void set_poisionAnim_8(ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * value)
	{
		___poisionAnim_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___poisionAnim_8), (void*)value);
	}

	inline static int32_t get_offset_of_explosionAnim_9() { return static_cast<int32_t>(offsetof(HeroHealthSystem_t8AF0A90EF619583E7080848DEF6A5E10979D77C7, ___explosionAnim_9)); }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * get_explosionAnim_9() const { return ___explosionAnim_9; }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E ** get_address_of_explosionAnim_9() { return &___explosionAnim_9; }
	inline void set_explosionAnim_9(ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * value)
	{
		___explosionAnim_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___explosionAnim_9), (void*)value);
	}

	inline static int32_t get_offset_of_freezingAnim_10() { return static_cast<int32_t>(offsetof(HeroHealthSystem_t8AF0A90EF619583E7080848DEF6A5E10979D77C7, ___freezingAnim_10)); }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * get_freezingAnim_10() const { return ___freezingAnim_10; }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E ** get_address_of_freezingAnim_10() { return &___freezingAnim_10; }
	inline void set_freezingAnim_10(ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * value)
	{
		___freezingAnim_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___freezingAnim_10), (void*)value);
	}

	inline static int32_t get_offset_of_animator_11() { return static_cast<int32_t>(offsetof(HeroHealthSystem_t8AF0A90EF619583E7080848DEF6A5E10979D77C7, ___animator_11)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_animator_11() const { return ___animator_11; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_animator_11() { return &___animator_11; }
	inline void set_animator_11(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___animator_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___animator_11), (void*)value);
	}

	inline static int32_t get_offset_of_enemies_12() { return static_cast<int32_t>(offsetof(HeroHealthSystem_t8AF0A90EF619583E7080848DEF6A5E10979D77C7, ___enemies_12)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_enemies_12() const { return ___enemies_12; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_enemies_12() { return &___enemies_12; }
	inline void set_enemies_12(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___enemies_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enemies_12), (void*)value);
	}

	inline static int32_t get_offset_of_gravestone_13() { return static_cast<int32_t>(offsetof(HeroHealthSystem_t8AF0A90EF619583E7080848DEF6A5E10979D77C7, ___gravestone_13)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_gravestone_13() const { return ___gravestone_13; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_gravestone_13() { return &___gravestone_13; }
	inline void set_gravestone_13(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___gravestone_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gravestone_13), (void*)value);
	}

	inline static int32_t get_offset_of_deneme_14() { return static_cast<int32_t>(offsetof(HeroHealthSystem_t8AF0A90EF619583E7080848DEF6A5E10979D77C7, ___deneme_14)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_deneme_14() const { return ___deneme_14; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_deneme_14() { return &___deneme_14; }
	inline void set_deneme_14(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___deneme_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___deneme_14), (void*)value);
	}

	inline static int32_t get_offset_of_graveStoneControl_15() { return static_cast<int32_t>(offsetof(HeroHealthSystem_t8AF0A90EF619583E7080848DEF6A5E10979D77C7, ___graveStoneControl_15)); }
	inline bool get_graveStoneControl_15() const { return ___graveStoneControl_15; }
	inline bool* get_address_of_graveStoneControl_15() { return &___graveStoneControl_15; }
	inline void set_graveStoneControl_15(bool value)
	{
		___graveStoneControl_15 = value;
	}
};


// InGameAudio
struct InGameAudio_t7ABBEBFA55614E7C60E1CFA24FF9ADBA36C13C27  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.AudioSource InGameAudio::ingameaudio
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___ingameaudio_4;

public:
	inline static int32_t get_offset_of_ingameaudio_4() { return static_cast<int32_t>(offsetof(InGameAudio_t7ABBEBFA55614E7C60E1CFA24FF9ADBA36C13C27, ___ingameaudio_4)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_ingameaudio_4() const { return ___ingameaudio_4; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_ingameaudio_4() { return &___ingameaudio_4; }
	inline void set_ingameaudio_4(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___ingameaudio_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ingameaudio_4), (void*)value);
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


// LoadingPage
struct LoadingPage_t741F6F646828DED519580999C7360B7B1EA55E0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
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
	// UnityEngine.GameObject PanelController::_DeathLogPanel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ____DeathLogPanel_9;
	// UnityEngine.UI.Text PanelController::AliveCountText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___AliveCountText_10;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> PanelController::Panels
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___Panels_12;

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

	inline static int32_t get_offset_of__DeathLogPanel_9() { return static_cast<int32_t>(offsetof(PanelController_t680C04009837CA28BD14657765EC2AAE385ED0EA, ____DeathLogPanel_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get__DeathLogPanel_9() const { return ____DeathLogPanel_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of__DeathLogPanel_9() { return &____DeathLogPanel_9; }
	inline void set__DeathLogPanel_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		____DeathLogPanel_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____DeathLogPanel_9), (void*)value);
	}

	inline static int32_t get_offset_of_AliveCountText_10() { return static_cast<int32_t>(offsetof(PanelController_t680C04009837CA28BD14657765EC2AAE385ED0EA, ___AliveCountText_10)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_AliveCountText_10() const { return ___AliveCountText_10; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_AliveCountText_10() { return &___AliveCountText_10; }
	inline void set_AliveCountText_10(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___AliveCountText_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AliveCountText_10), (void*)value);
	}

	inline static int32_t get_offset_of_Panels_12() { return static_cast<int32_t>(offsetof(PanelController_t680C04009837CA28BD14657765EC2AAE385ED0EA, ___Panels_12)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_Panels_12() const { return ___Panels_12; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_Panels_12() { return &___Panels_12; }
	inline void set_Panels_12(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___Panels_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Panels_12), (void*)value);
	}
};

struct PanelController_t680C04009837CA28BD14657765EC2AAE385ED0EA_StaticFields
{
public:
	// PanelController PanelController::Instance
	PanelController_t680C04009837CA28BD14657765EC2AAE385ED0EA * ___Instance_4;
	// System.Int32 PanelController::AliveCountNumber
	int32_t ___AliveCountNumber_11;

public:
	inline static int32_t get_offset_of_Instance_4() { return static_cast<int32_t>(offsetof(PanelController_t680C04009837CA28BD14657765EC2AAE385ED0EA_StaticFields, ___Instance_4)); }
	inline PanelController_t680C04009837CA28BD14657765EC2AAE385ED0EA * get_Instance_4() const { return ___Instance_4; }
	inline PanelController_t680C04009837CA28BD14657765EC2AAE385ED0EA ** get_address_of_Instance_4() { return &___Instance_4; }
	inline void set_Instance_4(PanelController_t680C04009837CA28BD14657765EC2AAE385ED0EA * value)
	{
		___Instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_4), (void*)value);
	}

	inline static int32_t get_offset_of_AliveCountNumber_11() { return static_cast<int32_t>(offsetof(PanelController_t680C04009837CA28BD14657765EC2AAE385ED0EA_StaticFields, ___AliveCountNumber_11)); }
	inline int32_t get_AliveCountNumber_11() const { return ___AliveCountNumber_11; }
	inline int32_t* get_address_of_AliveCountNumber_11() { return &___AliveCountNumber_11; }
	inline void set_AliveCountNumber_11(int32_t value)
	{
		___AliveCountNumber_11 = value;
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


// SceneInGameManager
struct SceneInGameManager_tEF7E7AA172EA89A9D721D1D0B4B72D703646F2ED  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// SceneLoader
struct SceneLoader_t3266812523B184D5AEDF27CA310452129C676B0D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Button SceneLoader::playButton
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___playButton_4;

public:
	inline static int32_t get_offset_of_playButton_4() { return static_cast<int32_t>(offsetof(SceneLoader_t3266812523B184D5AEDF27CA310452129C676B0D, ___playButton_4)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_playButton_4() const { return ___playButton_4; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_playButton_4() { return &___playButton_4; }
	inline void set_playButton_4(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___playButton_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playButton_4), (void*)value);
	}
};


// SettingsControl
struct SettingsControl_tA8506FCBD7BE51F887211F09160B4C366F85CEB6  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject SettingsControl::SettingsPanel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___SettingsPanel_4;
	// AudioPlayerManager SettingsControl::AudioSC
	AudioPlayerManager_t3A53F63D4321D80154C3402406E6A2C977996484 * ___AudioSC_5;
	// UnityEngine.UI.Button SettingsControl::SettingsButton
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___SettingsButton_6;
	// UnityEngine.UI.Button SettingsControl::MusicOnButton
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___MusicOnButton_7;
	// UnityEngine.UI.Button SettingsControl::MusicOffButton
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___MusicOffButton_8;
	// UnityEngine.UI.Button SettingsControl::SoundOnButton
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___SoundOnButton_9;
	// UnityEngine.UI.Button SettingsControl::SoundOffButton
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___SoundOffButton_10;
	// UnityEngine.UI.Image SettingsControl::MusicOnImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___MusicOnImage_11;
	// UnityEngine.UI.Image SettingsControl::MusicOffImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___MusicOffImage_12;
	// UnityEngine.UI.Image SettingsControl::SoundOnImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___SoundOnImage_13;
	// UnityEngine.UI.Image SettingsControl::SoundOffImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___SoundOffImage_14;

public:
	inline static int32_t get_offset_of_SettingsPanel_4() { return static_cast<int32_t>(offsetof(SettingsControl_tA8506FCBD7BE51F887211F09160B4C366F85CEB6, ___SettingsPanel_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_SettingsPanel_4() const { return ___SettingsPanel_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_SettingsPanel_4() { return &___SettingsPanel_4; }
	inline void set_SettingsPanel_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___SettingsPanel_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SettingsPanel_4), (void*)value);
	}

	inline static int32_t get_offset_of_AudioSC_5() { return static_cast<int32_t>(offsetof(SettingsControl_tA8506FCBD7BE51F887211F09160B4C366F85CEB6, ___AudioSC_5)); }
	inline AudioPlayerManager_t3A53F63D4321D80154C3402406E6A2C977996484 * get_AudioSC_5() const { return ___AudioSC_5; }
	inline AudioPlayerManager_t3A53F63D4321D80154C3402406E6A2C977996484 ** get_address_of_AudioSC_5() { return &___AudioSC_5; }
	inline void set_AudioSC_5(AudioPlayerManager_t3A53F63D4321D80154C3402406E6A2C977996484 * value)
	{
		___AudioSC_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AudioSC_5), (void*)value);
	}

	inline static int32_t get_offset_of_SettingsButton_6() { return static_cast<int32_t>(offsetof(SettingsControl_tA8506FCBD7BE51F887211F09160B4C366F85CEB6, ___SettingsButton_6)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_SettingsButton_6() const { return ___SettingsButton_6; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_SettingsButton_6() { return &___SettingsButton_6; }
	inline void set_SettingsButton_6(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___SettingsButton_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SettingsButton_6), (void*)value);
	}

	inline static int32_t get_offset_of_MusicOnButton_7() { return static_cast<int32_t>(offsetof(SettingsControl_tA8506FCBD7BE51F887211F09160B4C366F85CEB6, ___MusicOnButton_7)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_MusicOnButton_7() const { return ___MusicOnButton_7; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_MusicOnButton_7() { return &___MusicOnButton_7; }
	inline void set_MusicOnButton_7(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___MusicOnButton_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MusicOnButton_7), (void*)value);
	}

	inline static int32_t get_offset_of_MusicOffButton_8() { return static_cast<int32_t>(offsetof(SettingsControl_tA8506FCBD7BE51F887211F09160B4C366F85CEB6, ___MusicOffButton_8)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_MusicOffButton_8() const { return ___MusicOffButton_8; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_MusicOffButton_8() { return &___MusicOffButton_8; }
	inline void set_MusicOffButton_8(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___MusicOffButton_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MusicOffButton_8), (void*)value);
	}

	inline static int32_t get_offset_of_SoundOnButton_9() { return static_cast<int32_t>(offsetof(SettingsControl_tA8506FCBD7BE51F887211F09160B4C366F85CEB6, ___SoundOnButton_9)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_SoundOnButton_9() const { return ___SoundOnButton_9; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_SoundOnButton_9() { return &___SoundOnButton_9; }
	inline void set_SoundOnButton_9(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___SoundOnButton_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SoundOnButton_9), (void*)value);
	}

	inline static int32_t get_offset_of_SoundOffButton_10() { return static_cast<int32_t>(offsetof(SettingsControl_tA8506FCBD7BE51F887211F09160B4C366F85CEB6, ___SoundOffButton_10)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_SoundOffButton_10() const { return ___SoundOffButton_10; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_SoundOffButton_10() { return &___SoundOffButton_10; }
	inline void set_SoundOffButton_10(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___SoundOffButton_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SoundOffButton_10), (void*)value);
	}

	inline static int32_t get_offset_of_MusicOnImage_11() { return static_cast<int32_t>(offsetof(SettingsControl_tA8506FCBD7BE51F887211F09160B4C366F85CEB6, ___MusicOnImage_11)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_MusicOnImage_11() const { return ___MusicOnImage_11; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_MusicOnImage_11() { return &___MusicOnImage_11; }
	inline void set_MusicOnImage_11(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___MusicOnImage_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MusicOnImage_11), (void*)value);
	}

	inline static int32_t get_offset_of_MusicOffImage_12() { return static_cast<int32_t>(offsetof(SettingsControl_tA8506FCBD7BE51F887211F09160B4C366F85CEB6, ___MusicOffImage_12)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_MusicOffImage_12() const { return ___MusicOffImage_12; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_MusicOffImage_12() { return &___MusicOffImage_12; }
	inline void set_MusicOffImage_12(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___MusicOffImage_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MusicOffImage_12), (void*)value);
	}

	inline static int32_t get_offset_of_SoundOnImage_13() { return static_cast<int32_t>(offsetof(SettingsControl_tA8506FCBD7BE51F887211F09160B4C366F85CEB6, ___SoundOnImage_13)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_SoundOnImage_13() const { return ___SoundOnImage_13; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_SoundOnImage_13() { return &___SoundOnImage_13; }
	inline void set_SoundOnImage_13(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___SoundOnImage_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SoundOnImage_13), (void*)value);
	}

	inline static int32_t get_offset_of_SoundOffImage_14() { return static_cast<int32_t>(offsetof(SettingsControl_tA8506FCBD7BE51F887211F09160B4C366F85CEB6, ___SoundOffImage_14)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_SoundOffImage_14() const { return ___SoundOffImage_14; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_SoundOffImage_14() { return &___SoundOffImage_14; }
	inline void set_SoundOffImage_14(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___SoundOffImage_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SoundOffImage_14), (void*)value);
	}
};

struct SettingsControl_tA8506FCBD7BE51F887211F09160B4C366F85CEB6_StaticFields
{
public:
	// System.Boolean SettingsControl::MusicState
	bool ___MusicState_15;
	// System.Boolean SettingsControl::SoundState
	bool ___SoundState_16;

public:
	inline static int32_t get_offset_of_MusicState_15() { return static_cast<int32_t>(offsetof(SettingsControl_tA8506FCBD7BE51F887211F09160B4C366F85CEB6_StaticFields, ___MusicState_15)); }
	inline bool get_MusicState_15() const { return ___MusicState_15; }
	inline bool* get_address_of_MusicState_15() { return &___MusicState_15; }
	inline void set_MusicState_15(bool value)
	{
		___MusicState_15 = value;
	}

	inline static int32_t get_offset_of_SoundState_16() { return static_cast<int32_t>(offsetof(SettingsControl_tA8506FCBD7BE51F887211F09160B4C366F85CEB6_StaticFields, ___SoundState_16)); }
	inline bool get_SoundState_16() const { return ___SoundState_16; }
	inline bool* get_address_of_SoundState_16() { return &___SoundState_16; }
	inline void set_SoundState_16(bool value)
	{
		___SoundState_16 = value;
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
	// System.Single ai::coolDownConstant
	float ___coolDownConstant_8;
	// System.Boolean ai::AttackCooldown
	bool ___AttackCooldown_9;
	// System.Boolean ai::attackStatus
	bool ___attackStatus_10;

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

	inline static int32_t get_offset_of_coolDownConstant_8() { return static_cast<int32_t>(offsetof(ai_t05DCF615948AD04F90BBCFF646B8389E83581B71, ___coolDownConstant_8)); }
	inline float get_coolDownConstant_8() const { return ___coolDownConstant_8; }
	inline float* get_address_of_coolDownConstant_8() { return &___coolDownConstant_8; }
	inline void set_coolDownConstant_8(float value)
	{
		___coolDownConstant_8 = value;
	}

	inline static int32_t get_offset_of_AttackCooldown_9() { return static_cast<int32_t>(offsetof(ai_t05DCF615948AD04F90BBCFF646B8389E83581B71, ___AttackCooldown_9)); }
	inline bool get_AttackCooldown_9() const { return ___AttackCooldown_9; }
	inline bool* get_address_of_AttackCooldown_9() { return &___AttackCooldown_9; }
	inline void set_AttackCooldown_9(bool value)
	{
		___AttackCooldown_9 = value;
	}

	inline static int32_t get_offset_of_attackStatus_10() { return static_cast<int32_t>(offsetof(ai_t05DCF615948AD04F90BBCFF646B8389E83581B71, ___attackStatus_10)); }
	inline bool get_attackStatus_10() const { return ___attackStatus_10; }
	inline bool* get_address_of_attackStatus_10() { return &___attackStatus_10; }
	inline void set_attackStatus_10(bool value)
	{
		___attackStatus_10 = value;
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
	// UnityEngine.UI.Button attack::attackButton
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___attackButton_12;
	// UnityEngine.UI.Button attack::fireAttackButton
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___fireAttackButton_13;
	// UnityEngine.UI.Button attack::waterAttackButton
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___waterAttackButton_14;
	// UnityEngine.UI.Button attack::lightningAttackButton
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___lightningAttackButton_15;
	// UnityEngine.GameObject attack::SkillSelectionPanel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___SkillSelectionPanel_16;
	// System.Boolean attack::attackStatus
	bool ___attackStatus_17;
	// System.Boolean attack::AttackCooldown
	bool ___AttackCooldown_18;
	// UnityEngine.UI.Text attack::coolDownText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___coolDownText_19;
	// System.Single attack::coolDownConstant
	float ___coolDownConstant_20;
	// System.Single attack::timeLeftCD
	float ___timeLeftCD_21;
	// System.Double attack::timeLeftrounded
	double ___timeLeftrounded_22;
	// System.Int32 attack::AttackSelectionIndex
	int32_t ___AttackSelectionIndex_23;
	// UnityEngine.Vector3 attack::TornadoAddingVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___TornadoAddingVector_25;

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

	inline static int32_t get_offset_of_attackButton_12() { return static_cast<int32_t>(offsetof(attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C, ___attackButton_12)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_attackButton_12() const { return ___attackButton_12; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_attackButton_12() { return &___attackButton_12; }
	inline void set_attackButton_12(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___attackButton_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___attackButton_12), (void*)value);
	}

	inline static int32_t get_offset_of_fireAttackButton_13() { return static_cast<int32_t>(offsetof(attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C, ___fireAttackButton_13)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_fireAttackButton_13() const { return ___fireAttackButton_13; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_fireAttackButton_13() { return &___fireAttackButton_13; }
	inline void set_fireAttackButton_13(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___fireAttackButton_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fireAttackButton_13), (void*)value);
	}

	inline static int32_t get_offset_of_waterAttackButton_14() { return static_cast<int32_t>(offsetof(attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C, ___waterAttackButton_14)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_waterAttackButton_14() const { return ___waterAttackButton_14; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_waterAttackButton_14() { return &___waterAttackButton_14; }
	inline void set_waterAttackButton_14(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___waterAttackButton_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___waterAttackButton_14), (void*)value);
	}

	inline static int32_t get_offset_of_lightningAttackButton_15() { return static_cast<int32_t>(offsetof(attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C, ___lightningAttackButton_15)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_lightningAttackButton_15() const { return ___lightningAttackButton_15; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_lightningAttackButton_15() { return &___lightningAttackButton_15; }
	inline void set_lightningAttackButton_15(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___lightningAttackButton_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lightningAttackButton_15), (void*)value);
	}

	inline static int32_t get_offset_of_SkillSelectionPanel_16() { return static_cast<int32_t>(offsetof(attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C, ___SkillSelectionPanel_16)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_SkillSelectionPanel_16() const { return ___SkillSelectionPanel_16; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_SkillSelectionPanel_16() { return &___SkillSelectionPanel_16; }
	inline void set_SkillSelectionPanel_16(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___SkillSelectionPanel_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SkillSelectionPanel_16), (void*)value);
	}

	inline static int32_t get_offset_of_attackStatus_17() { return static_cast<int32_t>(offsetof(attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C, ___attackStatus_17)); }
	inline bool get_attackStatus_17() const { return ___attackStatus_17; }
	inline bool* get_address_of_attackStatus_17() { return &___attackStatus_17; }
	inline void set_attackStatus_17(bool value)
	{
		___attackStatus_17 = value;
	}

	inline static int32_t get_offset_of_AttackCooldown_18() { return static_cast<int32_t>(offsetof(attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C, ___AttackCooldown_18)); }
	inline bool get_AttackCooldown_18() const { return ___AttackCooldown_18; }
	inline bool* get_address_of_AttackCooldown_18() { return &___AttackCooldown_18; }
	inline void set_AttackCooldown_18(bool value)
	{
		___AttackCooldown_18 = value;
	}

	inline static int32_t get_offset_of_coolDownText_19() { return static_cast<int32_t>(offsetof(attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C, ___coolDownText_19)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_coolDownText_19() const { return ___coolDownText_19; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_coolDownText_19() { return &___coolDownText_19; }
	inline void set_coolDownText_19(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___coolDownText_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___coolDownText_19), (void*)value);
	}

	inline static int32_t get_offset_of_coolDownConstant_20() { return static_cast<int32_t>(offsetof(attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C, ___coolDownConstant_20)); }
	inline float get_coolDownConstant_20() const { return ___coolDownConstant_20; }
	inline float* get_address_of_coolDownConstant_20() { return &___coolDownConstant_20; }
	inline void set_coolDownConstant_20(float value)
	{
		___coolDownConstant_20 = value;
	}

	inline static int32_t get_offset_of_timeLeftCD_21() { return static_cast<int32_t>(offsetof(attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C, ___timeLeftCD_21)); }
	inline float get_timeLeftCD_21() const { return ___timeLeftCD_21; }
	inline float* get_address_of_timeLeftCD_21() { return &___timeLeftCD_21; }
	inline void set_timeLeftCD_21(float value)
	{
		___timeLeftCD_21 = value;
	}

	inline static int32_t get_offset_of_timeLeftrounded_22() { return static_cast<int32_t>(offsetof(attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C, ___timeLeftrounded_22)); }
	inline double get_timeLeftrounded_22() const { return ___timeLeftrounded_22; }
	inline double* get_address_of_timeLeftrounded_22() { return &___timeLeftrounded_22; }
	inline void set_timeLeftrounded_22(double value)
	{
		___timeLeftrounded_22 = value;
	}

	inline static int32_t get_offset_of_AttackSelectionIndex_23() { return static_cast<int32_t>(offsetof(attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C, ___AttackSelectionIndex_23)); }
	inline int32_t get_AttackSelectionIndex_23() const { return ___AttackSelectionIndex_23; }
	inline int32_t* get_address_of_AttackSelectionIndex_23() { return &___AttackSelectionIndex_23; }
	inline void set_AttackSelectionIndex_23(int32_t value)
	{
		___AttackSelectionIndex_23 = value;
	}

	inline static int32_t get_offset_of_TornadoAddingVector_25() { return static_cast<int32_t>(offsetof(attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C, ___TornadoAddingVector_25)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_TornadoAddingVector_25() const { return ___TornadoAddingVector_25; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_TornadoAddingVector_25() { return &___TornadoAddingVector_25; }
	inline void set_TornadoAddingVector_25(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___TornadoAddingVector_25 = value;
	}
};

struct attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C_StaticFields
{
public:
	// UnityEngine.Vector3 attack::TornadoRotationCek
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___TornadoRotationCek_24;

public:
	inline static int32_t get_offset_of_TornadoRotationCek_24() { return static_cast<int32_t>(offsetof(attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C_StaticFields, ___TornadoRotationCek_24)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_TornadoRotationCek_24() const { return ___TornadoRotationCek_24; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_TornadoRotationCek_24() { return &___TornadoRotationCek_24; }
	inline void set_TornadoRotationCek_24(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___TornadoRotationCek_24 = value;
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
	// UnityEngine.UI.Text enemyHealthSystem1::deneme
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___deneme_14;
	// System.Boolean enemyHealthSystem1::graveStoneControl
	bool ___graveStoneControl_16;

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

	inline static int32_t get_offset_of_deneme_14() { return static_cast<int32_t>(offsetof(enemyHealthSystem1_t9D32045CB414C7BF3B895294B1044F2D9FFA0029, ___deneme_14)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_deneme_14() const { return ___deneme_14; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_deneme_14() { return &___deneme_14; }
	inline void set_deneme_14(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___deneme_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___deneme_14), (void*)value);
	}

	inline static int32_t get_offset_of_graveStoneControl_16() { return static_cast<int32_t>(offsetof(enemyHealthSystem1_t9D32045CB414C7BF3B895294B1044F2D9FFA0029, ___graveStoneControl_16)); }
	inline bool get_graveStoneControl_16() const { return ___graveStoneControl_16; }
	inline bool* get_address_of_graveStoneControl_16() { return &___graveStoneControl_16; }
	inline void set_graveStoneControl_16(bool value)
	{
		___graveStoneControl_16 = value;
	}
};

struct enemyHealthSystem1_t9D32045CB414C7BF3B895294B1044F2D9FFA0029_StaticFields
{
public:
	// System.Int32 enemyHealthSystem1::AliveCount
	int32_t ___AliveCount_15;

public:
	inline static int32_t get_offset_of_AliveCount_15() { return static_cast<int32_t>(offsetof(enemyHealthSystem1_t9D32045CB414C7BF3B895294B1044F2D9FFA0029_StaticFields, ___AliveCount_15)); }
	inline int32_t get_AliveCount_15() const { return ___AliveCount_15; }
	inline int32_t* get_address_of_AliveCount_15() { return &___AliveCount_15; }
	inline void set_AliveCount_15(int32_t value)
	{
		___AliveCount_15 = value;
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
// UnityEngine.UI.Image[]
struct ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * m_Items[1];

public:
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
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


// !!0 UnityEngine.Component::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponentInParent_TisRuntimeObject_mADA186D1675BEA6779C469918206294354385EC3_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
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
// !!0 UnityEngine.Component::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponentInChildren_TisRuntimeObject_mB377B32275A969E0D1A738DBC693DE8EB3593642_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Component_GetComponentsInChildren_TisRuntimeObject_mCA5B356D4B0824C6DE60A8E90E6A6D4188C56C2F_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared (const RuntimeMethod* method);

// System.Void UnityEngine.MonoBehaviour::print(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Component::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_CompareTag_m17D74EDCC81A10B18A0A588519F522E8DF1D7879 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, String_t* ___tag0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInParent<ai>()
inline ai_t05DCF615948AD04F90BBCFF646B8389E83581B71 * Component_GetComponentInParent_Tisai_t05DCF615948AD04F90BBCFF646B8389E83581B71_m40BF0CC7E6ACF189A29585DB7357AEAACDB39764 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  ai_t05DCF615948AD04F90BBCFF646B8389E83581B71 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_mADA186D1675BEA6779C469918206294354385EC3_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline (Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * __this, UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___call0, const RuntimeMethod* method);
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void ArenaSellection::LoadNextScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArenaSellection_LoadNextScene_mE3688688AEB821CF4C3E856D5B09C3F7308183C8 (ArenaSellection_t3B2C26DA7D530C043B40B4E0FA39AF4035038994 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<SettingsControl>()
inline SettingsControl_tA8506FCBD7BE51F887211F09160B4C366F85CEB6 * GameObject_GetComponent_TisSettingsControl_tA8506FCBD7BE51F887211F09160B4C366F85CEB6_m682D5431B51BD046C01CD1B69324CEF1F7BFC64C (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  SettingsControl_tA8506FCBD7BE51F887211F09160B4C366F85CEB6 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4 (const RuntimeMethod* method);
// System.Int32 UnityEngine.SceneManagement.Scene::get_buildIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_get_buildIndex_mE32CE766EA0790E4636A351BA353A7FD71A11DA4 (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5 (int32_t ___sceneBuildIndex0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___target0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_volume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, float ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.AudioSource::get_volume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_volume_mFD700932958E0A96199B012E28AE4E9F7D6C1556 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Screen::get_dpi()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Screen_get_dpi_m37167A82DE896C738517BBF75BFD70C616CCCF55 (const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
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
// System.Void UnityEngine.ParticleSystem::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Stop_m8CBF9268DE7B5A40952B4977462B857B5F5AFB9D (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * __this, const RuntimeMethod* method);
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
// !!0[] UnityEngine.GameObject::GetComponentsInChildren<UnityEngine.UI.Text>()
inline TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* GameObject_GetComponentsInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m01C51735078110D354DFDA5EB9685D44E6659287 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponentsInChildren_TisRuntimeObject_m6662AE3C936281A25097CCBD9098A9F85C69279A_gshared)(__this, method);
}
// !!0[] UnityEngine.GameObject::GetComponentsInChildren<UnityEngine.UI.Image>()
inline ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* GameObject_GetComponentsInChildren_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m415C82AF86BFB083C5595CEFF8582A47CEB3EA11 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponentsInChildren_TisRuntimeObject_m6662AE3C936281A25097CCBD9098A9F85C69279A_gshared)(__this, method);
}
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void DynamicJoystick::set_MoveThreshold(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicJoystick_set_MoveThreshold_m5A53DE83993960EA2650FB12F596E8C48C561199 (DynamicJoystick_t675DA15D6A912CB9638176139FD810B7B051E867 * __this, float ___value0, const RuntimeMethod* method);
// System.Void Joystick::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_Start_m3B4EEAA0389B5CCCA1479ACC4A167376E74BC275 (Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * __this, const RuntimeMethod* method);
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
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void HealthController::SetDie(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HealthController_SetDie_m65412C2AC0FCF88E6D6380F06AE6DA3DFC8C576B_inline (HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 * __this, bool ___die0, const RuntimeMethod* method);
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
// System.Void HeroHealthSystem::HealthUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeroHealthSystem_HealthUpdate_m70AD358758CDFBB3A2630C2809EC87E985719B07 (HeroHealthSystem_t8AF0A90EF619583E7080848DEF6A5E10979D77C7 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::FindGameObjectWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F (String_t* ___tag0, const RuntimeMethod* method);
// System.Single HealthController::GetHealthMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HealthController_GetHealthMax_m1AEB454DBA5B8AEA4353044AD37F7C9E7467760A (HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 * __this, const RuntimeMethod* method);
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010 (float* __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::InvokeRepeating(System.String,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_InvokeRepeating_mB77F4276826FBA696A150831D190875CB5802C70 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, String_t* ___methodName0, float ___time1, float ___repeatRate2, const RuntimeMethod* method);
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
// System.Void HeroHealthSystem::DeadStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeroHealthSystem_DeadStatus_m7CBBFFB1B463A2AAF8F790D4E916597480FDA080 (HeroHealthSystem_t8AF0A90EF619583E7080848DEF6A5E10979D77C7 * __this, const RuntimeMethod* method);
// System.Void HealthController::Damage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthController_Damage_m72DC74C513F1A4FB7DA30BAAE1154A53B686B832 (HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 * __this, int32_t ___amount0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Play_m28D27CC4CDC1D93195C75647E6F6DAECF8B6BC50 (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, String_t* ___methodName0, float ___time1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<move>()
inline move_tF5C934E0EAF4295D46D7DAA6C508AFAB1B699276 * Component_GetComponent_Tismove_tF5C934E0EAF4295D46D7DAA6C508AFAB1B699276_m74D44FCC622E6D79067EBEDFCAF80A68C81D21D2 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  move_tF5C934E0EAF4295D46D7DAA6C508AFAB1B699276 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<attack>()
inline attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C * Component_GetComponent_Tisattack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C_m8B4136C5A1E4F5F48C36BB68463CF12B4AF2A4DE (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.AI.NavMeshObstacle>()
inline NavMeshObstacle_t628A64EBD843A34267C4276DF7EE19BECA2C230A * Component_GetComponent_TisNavMeshObstacle_t628A64EBD843A34267C4276DF7EE19BECA2C230A_m7F6EBD07A10FF9A1021B15B10E1FBB41F83DF11E (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  NavMeshObstacle_t628A64EBD843A34267C4276DF7EE19BECA2C230A * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.BoxCollider>()
inline BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * Component_GetComponent_TisBoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5_m0D682A42739E30A25411905C0A712C2BEE81F861 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.Collider::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider_set_enabled_m047B4D830755CD36671F7A60BFAA9C0D61F6C4A1 (Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void PanelController::SetCloseOpenAllPanels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelController_SetCloseOpenAllPanels_mB5C3289166CC60EB22FE8B79CE30F2D95EAA2AB6 (PanelController_t680C04009837CA28BD14657765EC2AAE385ED0EA * __this, const RuntimeMethod* method);
// System.Void PanelController::SetFailPanel(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelController_SetFailPanel_m4261AF98D307FFD3AE9D19032DEC9CDCD3DA47F0 (PanelController_t680C04009837CA28BD14657765EC2AAE385ED0EA * __this, bool ___open0, const RuntimeMethod* method);
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void HealthController::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthController__ctor_mE7C9A5C8657BF0AA3875B191C910997CF701CCE1 (HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 * __this, int32_t ___healthMax0, int32_t ___healthCurrent1, const RuntimeMethod* method);
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
// System.Void LoadingPage::LoadLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadingPage_LoadLevel_mF4968915F17C211D1F18101A9501F26CA11B7E63 (LoadingPage_t741F6F646828DED519580999C7360B7B1EA55E0E * __this, int32_t ___sceneIndex0, const RuntimeMethod* method);
// System.Collections.IEnumerator LoadingPage::LoadAsynchronously(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LoadingPage_LoadAsynchronously_m418A1AB3D0FFAFABF48653A2E6B188F1159D6243 (LoadingPage_t741F6F646828DED519580999C7360B7B1EA55E0E * __this, int32_t ___sceneIndex0, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void LoadingPage/<LoadAsynchronously>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAsynchronouslyU3Ed__3__ctor_m22BAFEBE282657BBEDA0B771CFF2493311A952DC (U3CLoadAsynchronouslyU3Ed__3_tEC679E349F2E1391F257C32519B899B2914C2551 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Int32 System.Int32::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C (String_t* ___s0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(!0)
inline void List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3 (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void PanelController::SetDeathLogPanel(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelController_SetDeathLogPanel_m639128DA81D6A12DBD19EA57D935A8F743C86B8B (PanelController_t680C04009837CA28BD14657765EC2AAE385ED0EA * __this, bool ___open0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.GameObject>::GetEnumerator()
inline Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14  List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6 (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14  (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::get_Current()
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_inline (Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 * __this, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::MoveNext()
inline bool Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7 (Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::Dispose()
inline void Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9 (Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8 (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::CancelInvoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_CancelInvoke_mAF87B47704B16B114F82AC6914E4DA9AE034095D (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localEulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localEulerAngles_m4C442107F523737ADAB54855FDC1777A9B71D545 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localEulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localEulerAngles_mB63076996124DC76E6902A81677A6E3C814C693B (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void SceneInGameManager::LoadNextScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneInGameManager_LoadNextScene_m6458AABD94D5A2FEE939DFBEE827413C1F785D39 (SceneInGameManager_tEF7E7AA172EA89A9D721D1D0B4B72D703646F2ED * __this, const RuntimeMethod* method);
// System.Void SceneLoader::LoadNextScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneLoader_LoadNextScene_mC5788C7284067B6854739BC2F695F03F5A150C76 (SceneLoader_t3266812523B184D5AEDF27CA310452129C676B0D * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void AudioPlayerManager::MusicOffAudioController()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioPlayerManager_MusicOffAudioController_mA95E9EE6709420D5EEC104D5746D05E7E276D8AE (AudioPlayerManager_t3A53F63D4321D80154C3402406E6A2C977996484 * __this, const RuntimeMethod* method);
// System.Void AudioPlayerManager::MusicOnAudioController()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioPlayerManager_MusicOnAudioController_m87AEA12B53A63FFA74D23CD5AF84774DFB5697E2 (AudioPlayerManager_t3A53F63D4321D80154C3402406E6A2C977996484 * __this, const RuntimeMethod* method);
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
// !!0 UnityEngine.GameObject::GetComponent<enemyHealthSystem1>()
inline enemyHealthSystem1_t9D32045CB414C7BF3B895294B1044F2D9FFA0029 * GameObject_GetComponent_TisenemyHealthSystem1_t9D32045CB414C7BF3B895294B1044F2D9FFA0029_m5B396305C939F2D2FB91382E777713431F8E03C4 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  enemyHealthSystem1_t9D32045CB414C7BF3B895294B1044F2D9FFA0029 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Boolean enemyHealthSystem1::IsDead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool enemyHealthSystem1_IsDead_m37C895C0826251CDC7AA7D37CD1EAC5BF7409A7D (enemyHealthSystem1_t9D32045CB414C7BF3B895294B1044F2D9FFA0029 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_LookAt_m996FADE2327B0A4412FF4A5179B8BABD9EB849BA (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline (float ___d0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Quaternion_get_eulerAngles_m3DA616CAD670235A407E8A7A75925AA8E22338C3 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Selectable::set_interactable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40 (Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * __this, bool ___value0, const RuntimeMethod* method);
// System.Double System.Math::Round(System.Double,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Math_Round_m394EEE2C796B3A1578E65037E0D57B3D6F9B1C70 (double ___value0, int32_t ___digits1, const RuntimeMethod* method);
// System.String System.Double::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Double_ToString_m87E4A4DC004A167CF0AE1F2D271BC20A708CE57D (double* __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::CancelInvoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_CancelInvoke_mAD4E486A74AF79DC1AFA880691EF839CDDE630A9 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, String_t* ___methodName0, const RuntimeMethod* method);
// System.Void attack/<Shake>d__32::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShakeU3Ed__32__ctor_mF08FF4EFE4A39DD8D1448EFCA7D09A4A628A0462 (U3CShakeU3Ed__32_tCF25518FAB5A1AF5E4B8C1D01CE213E18FDEC1E9 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void cameraShaker/<Shake>d__0::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShakeU3Ed__0__ctor_m90531A490514EB236D09DAC7B3849112760C5426 (U3CShakeU3Ed__0_t56ABF31C41CA87AFA3AC45DD82CF6F23D6F283A7 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void enemyHealthSystem1::HealthUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void enemyHealthSystem1_HealthUpdate_m547DFFE79A4C0FBECC0AF4502AF0561C7BC5852E (enemyHealthSystem1_t9D32045CB414C7BF3B895294B1044F2D9FFA0029 * __this, const RuntimeMethod* method);
// System.Void enemyHealthSystem1::DeadStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void enemyHealthSystem1_DeadStatus_m49D678D7303CB34E2E605F0DF888C65AAAD38D55 (enemyHealthSystem1_t9D32045CB414C7BF3B895294B1044F2D9FFA0029 * __this, const RuntimeMethod* method);
// System.Void PanelController::AliveCountUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelController_AliveCountUpdate_m6772DD828E83FCCEE6913DDC1E8B7B98174058F1 (PanelController_t680C04009837CA28BD14657765EC2AAE385ED0EA * __this, const RuntimeMethod* method);
// System.Void enemyHealthSystem1::LevelPassed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void enemyHealthSystem1_LevelPassed_mDC339FFCEB56B3B5BC722DD148D23338CDA4E25E (enemyHealthSystem1_t9D32045CB414C7BF3B895294B1044F2D9FFA0029 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.Void enemyHealthSystem1::DeathLogTexts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void enemyHealthSystem1_DeathLogTexts_mE13D42D970FF0F9F1C106DBA124E80E2B30C587B (enemyHealthSystem1_t9D32045CB414C7BF3B895294B1044F2D9FFA0029 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<ai>()
inline ai_t05DCF615948AD04F90BBCFF646B8389E83581B71 * Component_GetComponent_Tisai_t05DCF615948AD04F90BBCFF646B8389E83581B71_m3AE4C964EDD0B5968A0ED31120D6896937CE1FEA (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  ai_t05DCF615948AD04F90BBCFF646B8389E83581B71 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<enemyHealthSystem1>()
inline enemyHealthSystem1_t9D32045CB414C7BF3B895294B1044F2D9FFA0029 * Component_GetComponent_TisenemyHealthSystem1_t9D32045CB414C7BF3B895294B1044F2D9FFA0029_m43B1E00A13972A750952D0E9B84D030B14DDBA2E (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  enemyHealthSystem1_t9D32045CB414C7BF3B895294B1044F2D9FFA0029 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponentInChildren<AiCanAttackCircle>()
inline AiCanAttackCircle_t57AE50A882353B23FA5A30DF81FBEE01909E19B6 * Component_GetComponentInChildren_TisAiCanAttackCircle_t57AE50A882353B23FA5A30DF81FBEE01909E19B6_mBE6C3FB3D5ADB99D8FB079ABBC1B6AEAB1BDF807 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  AiCanAttackCircle_t57AE50A882353B23FA5A30DF81FBEE01909E19B6 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mB377B32275A969E0D1A738DBC693DE8EB3593642_gshared)(__this, method);
}
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
// !!0 UnityEngine.Object::FindObjectOfType<Joystick>()
inline Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * Object_FindObjectOfType_TisJoystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873_m7209E3C1CAB57BED00FB7BEF8EEF44EBADFD5C7A (const RuntimeMethod* method)
{
	return ((  Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared)(method);
}
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
// System.Void UnityEngine.Transform::set_forward(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_forward_mAE46B156F55F2F90AB495B17F7C20BF59A5D7D4D (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloat_mD731F47ED44C2D629F8E1C6DB15629C3E1B992A0 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___name0, float ___value1, const RuntimeMethod* method);
// UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManager::LoadSceneAsync(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * SceneManager_LoadSceneAsync_mAB22F675FE16C405CBEC2CEF405493DBB6F0284E (int32_t ___sceneBuildIndex0, const RuntimeMethod* method);
// System.Boolean UnityEngine.AsyncOperation::get_isDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperation_get_isDone_m4592F121393149E539D2107239639A049493D877 (AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
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
// System.Void AiCanAttackCircle::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AiCanAttackCircle_OnTriggerEnter_mD6EB604CF4DBD2235D7EA27974935A9BDF559829 (AiCanAttackCircle_t57AE50A882353B23FA5A30DF81FBEE01909E19B6 * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_Tisai_t05DCF615948AD04F90BBCFF646B8389E83581B71_m40BF0CC7E6ACF189A29585DB7357AEAACDB39764_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C47036B8A57416ACEC1B5843771337465BF957E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1198B4556FD70251AD276347D997EBD135F90877);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral341872AF21C32D6A74449BC426100C98602C2E63);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral832AC43642A57DC400138A9C4D6B0D7C63AE528E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA495962332F353CC8940282C897A60D2FCA09F6C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// print("triggered.");
		MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(_stringLiteralA495962332F353CC8940282C897A60D2FCA09F6C, /*hidden argument*/NULL);
		// if (other.CompareTag("enemyWizard") || other.CompareTag("Wizard") || other.CompareTag("enemyWizardCanAttackCollider"))
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_0 = ___other0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Component_CompareTag_m17D74EDCC81A10B18A0A588519F522E8DF1D7879(L_0, _stringLiteral832AC43642A57DC400138A9C4D6B0D7C63AE528E, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0031;
		}
	}
	{
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_2 = ___other0;
		NullCheck(L_2);
		bool L_3;
		L_3 = Component_CompareTag_m17D74EDCC81A10B18A0A588519F522E8DF1D7879(L_2, _stringLiteral341872AF21C32D6A74449BC426100C98602C2E63, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0031;
		}
	}
	{
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_4 = ___other0;
		NullCheck(L_4);
		bool L_5;
		L_5 = Component_CompareTag_m17D74EDCC81A10B18A0A588519F522E8DF1D7879(L_4, _stringLiteral0C47036B8A57416ACEC1B5843771337465BF957E, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_004c;
		}
	}

IL_0031:
	{
		// GetComponentInParent<ai>().Target = other.gameObject;
		ai_t05DCF615948AD04F90BBCFF646B8389E83581B71 * L_6;
		L_6 = Component_GetComponentInParent_Tisai_t05DCF615948AD04F90BBCFF646B8389E83581B71_m40BF0CC7E6ACF189A29585DB7357AEAACDB39764(__this, /*hidden argument*/Component_GetComponentInParent_Tisai_t05DCF615948AD04F90BBCFF646B8389E83581B71_m40BF0CC7E6ACF189A29585DB7357AEAACDB39764_RuntimeMethod_var);
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_7 = ___other0;
		NullCheck(L_7);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		L_6->set_Target_5(L_8);
		// print("target changed.");
		MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(_stringLiteral1198B4556FD70251AD276347D997EBD135F90877, /*hidden argument*/NULL);
	}

IL_004c:
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
// System.Void ArenaSellection::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArenaSellection_Start_m152530B928C1CF473FF498841CDA91D73C026B07 (ArenaSellection_t3B2C26DA7D530C043B40B4E0FA39AF4035038994 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArenaSellection_Map1ButtonFunc_m3D34DE971E2D7AED71DDE76146C8949943403EF9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArenaSellection_Map2ButtonFunc_m96F83A1F59BD083C382E9A3EF7DF48091270617F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArenaSellection_PlayButtonFunc_m69B2EE419C5D5F2F86BEE14580AF2E148E61F974_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ArenaSellectionPanel.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_ArenaSellectionPanel_4();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// Map1Button.onClick.AddListener(Map1ButtonFunc);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_1 = __this->get_Map1Button_5();
		NullCheck(L_1);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_2;
		L_2 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_1, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_3 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_3, __this, (intptr_t)((intptr_t)ArenaSellection_Map1ButtonFunc_m3D34DE971E2D7AED71DDE76146C8949943403EF9_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_2);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_2, L_3, /*hidden argument*/NULL);
		// Map2Button.onClick.AddListener(Map2ButtonFunc);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_4 = __this->get_Map2Button_6();
		NullCheck(L_4);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_5;
		L_5 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_4, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_6 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_6, __this, (intptr_t)((intptr_t)ArenaSellection_Map2ButtonFunc_m96F83A1F59BD083C382E9A3EF7DF48091270617F_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_5);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_5, L_6, /*hidden argument*/NULL);
		// PlayButton.onClick.AddListener(PlayButtonFunc);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_7 = __this->get_PlayButton_9();
		NullCheck(L_7);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_8;
		L_8 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_7, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_9 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_9, __this, (intptr_t)((intptr_t)ArenaSellection_PlayButtonFunc_m69B2EE419C5D5F2F86BEE14580AF2E148E61F974_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_8);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_8, L_9, /*hidden argument*/NULL);
		// Map2Button.enabled=false;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_10 = __this->get_Map2Button_6();
		NullCheck(L_10);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_10, (bool)0, /*hidden argument*/NULL);
		// Map3Button.enabled=false;    //save sistemi gelince düzelt burayi
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_11 = __this->get_Map3Button_7();
		NullCheck(L_11);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_11, (bool)0, /*hidden argument*/NULL);
		// Map4Button.enabled=false;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_12 = __this->get_Map4Button_8();
		NullCheck(L_12);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_12, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ArenaSellection::Map1ButtonFunc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArenaSellection_Map1ButtonFunc_m3D34DE971E2D7AED71DDE76146C8949943403EF9 (ArenaSellection_t3B2C26DA7D530C043B40B4E0FA39AF4035038994 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8546F53EE272D19109BF52ABA65764B3FF1AFE0B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// print("map1calisti");
		MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(_stringLiteral8546F53EE272D19109BF52ABA65764B3FF1AFE0B, /*hidden argument*/NULL);
		// LoadNextScene();
		ArenaSellection_LoadNextScene_mE3688688AEB821CF4C3E856D5B09C3F7308183C8(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ArenaSellection::Map2ButtonFunc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArenaSellection_Map2ButtonFunc_m96F83A1F59BD083C382E9A3EF7DF48091270617F (ArenaSellection_t3B2C26DA7D530C043B40B4E0FA39AF4035038994 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral51EB9A5BEDA5B6435C1A69F45A0BBA6B786274B9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// print("map2calisti");
		MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(_stringLiteral51EB9A5BEDA5B6435C1A69F45A0BBA6B786274B9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ArenaSellection::PlayButtonFunc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArenaSellection_PlayButtonFunc_m69B2EE419C5D5F2F86BEE14580AF2E148E61F974 (ArenaSellection_t3B2C26DA7D530C043B40B4E0FA39AF4035038994 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSettingsControl_tA8506FCBD7BE51F887211F09160B4C366F85CEB6_m682D5431B51BD046C01CD1B69324CEF1F7BFC64C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3BEDFE95B26BD2EC46D2FC820F567725B8F85A53);
		s_Il2CppMethodInitialized = true;
	}
	{
		// print("playbuttoncalisti");
		MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(_stringLiteral3BEDFE95B26BD2EC46D2FC820F567725B8F85A53, /*hidden argument*/NULL);
		// ArenaSellectionPanel.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_ArenaSellectionPanel_4();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)1, /*hidden argument*/NULL);
		// SettingsControl SettingsDeneme=gameObject.GetComponent<SettingsControl>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		SettingsControl_tA8506FCBD7BE51F887211F09160B4C366F85CEB6 * L_2;
		L_2 = GameObject_GetComponent_TisSettingsControl_tA8506FCBD7BE51F887211F09160B4C366F85CEB6_m682D5431B51BD046C01CD1B69324CEF1F7BFC64C(L_1, /*hidden argument*/GameObject_GetComponent_TisSettingsControl_tA8506FCBD7BE51F887211F09160B4C366F85CEB6_m682D5431B51BD046C01CD1B69324CEF1F7BFC64C_RuntimeMethod_var);
		// SettingsDeneme.SettingsPanel.SetActive(false);
		SettingsControl_tA8506FCBD7BE51F887211F09160B4C366F85CEB6 * L_3 = L_2;
		NullCheck(L_3);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = L_3->get_SettingsPanel_4();
		NullCheck(L_4);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, (bool)0, /*hidden argument*/NULL);
		// SettingsDeneme.SettingsButton.gameObject.SetActive(false);
		NullCheck(L_3);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_5 = L_3->get_SettingsButton_6();
		NullCheck(L_5);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_6, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ArenaSellection::LoadNextScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArenaSellection_LoadNextScene_mE3688688AEB821CF4C3E856D5B09C3F7308183C8 (ArenaSellection_t3B2C26DA7D530C043B40B4E0FA39AF4035038994 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// int currentSceneIndex = SceneManager.GetActiveScene().buildIndex;
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_0;
		L_0 = SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4(/*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Scene_get_buildIndex_mE32CE766EA0790E4636A351BA353A7FD71A11DA4((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_0), /*hidden argument*/NULL);
		// SceneManager.LoadScene(currentSceneIndex + 1);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1)), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ArenaSellection::LoadStartScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArenaSellection_LoadStartScene_m7BE828398A27E403C4BB306970025450E8325B6D (ArenaSellection_t3B2C26DA7D530C043B40B4E0FA39AF4035038994 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(0);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ArenaSellection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArenaSellection__ctor_m3152273716CF623E5629D387B1641637A59547A5 (ArenaSellection_t3B2C26DA7D530C043B40B4E0FA39AF4035038994 * __this, const RuntimeMethod* method)
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
// System.Void AudioPlayerManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioPlayerManager_Awake_m19B1D3E81F8BA1EDA376C3DFD6C2A69B4BADF3F0 (AudioPlayerManager_t3A53F63D4321D80154C3402406E6A2C977996484 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioPlayerManager_t3A53F63D4321D80154C3402406E6A2C977996484_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance == null)
		IL2CPP_RUNTIME_CLASS_INIT(AudioPlayerManager_t3A53F63D4321D80154C3402406E6A2C977996484_il2cpp_TypeInfo_var);
		AudioPlayerManager_t3A53F63D4321D80154C3402406E6A2C977996484 * L_0 = ((AudioPlayerManager_t3A53F63D4321D80154C3402406E6A2C977996484_StaticFields*)il2cpp_codegen_static_fields_for(AudioPlayerManager_t3A53F63D4321D80154C3402406E6A2C977996484_il2cpp_TypeInfo_var))->get_instance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// instance = this;
		IL2CPP_RUNTIME_CLASS_INIT(AudioPlayerManager_t3A53F63D4321D80154C3402406E6A2C977996484_il2cpp_TypeInfo_var);
		((AudioPlayerManager_t3A53F63D4321D80154C3402406E6A2C977996484_StaticFields*)il2cpp_codegen_static_fields_for(AudioPlayerManager_t3A53F63D4321D80154C3402406E6A2C977996484_il2cpp_TypeInfo_var))->set_instance_4(__this);
		// DontDestroyOnLoad(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9(L_2, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_001f:
	{
		// if (instance == this) return;
		IL2CPP_RUNTIME_CLASS_INIT(AudioPlayerManager_t3A53F63D4321D80154C3402406E6A2C977996484_il2cpp_TypeInfo_var);
		AudioPlayerManager_t3A53F63D4321D80154C3402406E6A2C977996484 * L_3 = ((AudioPlayerManager_t3A53F63D4321D80154C3402406E6A2C977996484_StaticFields*)il2cpp_codegen_static_fields_for(AudioPlayerManager_t3A53F63D4321D80154C3402406E6A2C977996484_il2cpp_TypeInfo_var))->get_instance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_3, __this, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002d;
		}
	}
	{
		// if (instance == this) return;
		return;
	}

IL_002d:
	{
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AudioPlayerManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioPlayerManager_Start_mE0103BD40F1CD8F5136BF7B574658D10B2B9718A (AudioPlayerManager_t3A53F63D4321D80154C3402406E6A2C977996484 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mainmenuaudio = GetComponent<AudioSource>();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0;
		L_0 = Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		__this->set_mainmenuaudio_5(L_0);
		// mainmenuaudio.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_1 = __this->get_mainmenuaudio_5();
		NullCheck(L_1);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AudioPlayerManager::MusicOffAudioController()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioPlayerManager_MusicOffAudioController_mA95E9EE6709420D5EEC104D5746D05E7E276D8AE (AudioPlayerManager_t3A53F63D4321D80154C3402406E6A2C977996484 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioPlayerManager_t3A53F63D4321D80154C3402406E6A2C977996484_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mainmenuaudio.volume=0;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_mainmenuaudio_5();
		NullCheck(L_0);
		AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58(L_0, (0.0f), /*hidden argument*/NULL);
		// MusicLevelFromAudioPlayer=mainmenuaudio.volume;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_1 = __this->get_mainmenuaudio_5();
		NullCheck(L_1);
		float L_2;
		L_2 = AudioSource_get_volume_mFD700932958E0A96199B012E28AE4E9F7D6C1556(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(AudioPlayerManager_t3A53F63D4321D80154C3402406E6A2C977996484_il2cpp_TypeInfo_var);
		((AudioPlayerManager_t3A53F63D4321D80154C3402406E6A2C977996484_StaticFields*)il2cpp_codegen_static_fields_for(AudioPlayerManager_t3A53F63D4321D80154C3402406E6A2C977996484_il2cpp_TypeInfo_var))->set_MusicLevelFromAudioPlayer_6(L_2);
		// }
		return;
	}
}
// System.Void AudioPlayerManager::MusicOnAudioController()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioPlayerManager_MusicOnAudioController_m87AEA12B53A63FFA74D23CD5AF84774DFB5697E2 (AudioPlayerManager_t3A53F63D4321D80154C3402406E6A2C977996484 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioPlayerManager_t3A53F63D4321D80154C3402406E6A2C977996484_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mainmenuaudio.volume=0.2f;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_mainmenuaudio_5();
		NullCheck(L_0);
		AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58(L_0, (0.200000003f), /*hidden argument*/NULL);
		// MusicLevelFromAudioPlayer=mainmenuaudio.volume;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_1 = __this->get_mainmenuaudio_5();
		NullCheck(L_1);
		float L_2;
		L_2 = AudioSource_get_volume_mFD700932958E0A96199B012E28AE4E9F7D6C1556(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(AudioPlayerManager_t3A53F63D4321D80154C3402406E6A2C977996484_il2cpp_TypeInfo_var);
		((AudioPlayerManager_t3A53F63D4321D80154C3402406E6A2C977996484_StaticFields*)il2cpp_codegen_static_fields_for(AudioPlayerManager_t3A53F63D4321D80154C3402406E6A2C977996484_il2cpp_TypeInfo_var))->set_MusicLevelFromAudioPlayer_6(L_2);
		// }
		return;
	}
}
// System.Void AudioPlayerManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioPlayerManager__ctor_mAF7D8FBA1ABCA066C244A1B13D097558FD9FB0AB (AudioPlayerManager_t3A53F63D4321D80154C3402406E6A2C977996484 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AudioPlayerManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioPlayerManager__cctor_m1CECEED44D90464DDECB28AB29B4E1D037CC4FC6 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioPlayerManager_t3A53F63D4321D80154C3402406E6A2C977996484_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static AudioPlayerManager instance = null;
		((AudioPlayerManager_t3A53F63D4321D80154C3402406E6A2C977996484_StaticFields*)il2cpp_codegen_static_fields_for(AudioPlayerManager_t3A53F63D4321D80154C3402406E6A2C977996484_il2cpp_TypeInfo_var))->set_instance_4((AudioPlayerManager_t3A53F63D4321D80154C3402406E6A2C977996484 *)NULL);
		// public static float MusicLevelFromAudioPlayer=0.2f;
		((AudioPlayerManager_t3A53F63D4321D80154C3402406E6A2C977996484_StaticFields*)il2cpp_codegen_static_fields_for(AudioPlayerManager_t3A53F63D4321D80154C3402406E6A2C977996484_il2cpp_TypeInfo_var))->set_MusicLevelFromAudioPlayer_6((0.200000003f));
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
// System.Void DeathLogPanelController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeathLogPanelController_Start_m19C818181EE96A040E0D61EC4C8272B5FEB8EFE3 (DeathLogPanelController_t87E4399AB36E6AB25976252311C792D0197C6D40 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentsInChildren_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m415C82AF86BFB083C5595CEFF8582A47CEB3EA11_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentsInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m01C51735078110D354DFDA5EB9685D44E6659287_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DeathLogText1 = DeathLogPanel.GetComponentsInChildren<Text>()[0];
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_DeathLogPanel_4();
		NullCheck(L_0);
		TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* L_1;
		L_1 = GameObject_GetComponentsInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m01C51735078110D354DFDA5EB9685D44E6659287(L_0, /*hidden argument*/GameObject_GetComponentsInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m01C51735078110D354DFDA5EB9685D44E6659287_RuntimeMethod_var);
		NullCheck(L_1);
		int32_t L_2 = 0;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		__this->set_DeathLogText1_5(L_3);
		// DeathLogText2 = DeathLogPanel.GetComponentsInChildren<Text>()[1];
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_DeathLogPanel_4();
		NullCheck(L_4);
		TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* L_5;
		L_5 = GameObject_GetComponentsInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m01C51735078110D354DFDA5EB9685D44E6659287(L_4, /*hidden argument*/GameObject_GetComponentsInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m01C51735078110D354DFDA5EB9685D44E6659287_RuntimeMethod_var);
		NullCheck(L_5);
		int32_t L_6 = 1;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		__this->set_DeathLogText2_6(L_7);
		// DeathLogText3 = DeathLogPanel.GetComponentsInChildren<Text>()[2];
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = __this->get_DeathLogPanel_4();
		NullCheck(L_8);
		TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* L_9;
		L_9 = GameObject_GetComponentsInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m01C51735078110D354DFDA5EB9685D44E6659287(L_8, /*hidden argument*/GameObject_GetComponentsInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m01C51735078110D354DFDA5EB9685D44E6659287_RuntimeMethod_var);
		NullCheck(L_9);
		int32_t L_10 = 2;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		__this->set_DeathLogText3_7(L_11);
		// DeathSkull1 = DeathLogPanel.GetComponentsInChildren<Image>()[1];
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = __this->get_DeathLogPanel_4();
		NullCheck(L_12);
		ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* L_13;
		L_13 = GameObject_GetComponentsInChildren_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m415C82AF86BFB083C5595CEFF8582A47CEB3EA11(L_12, /*hidden argument*/GameObject_GetComponentsInChildren_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m415C82AF86BFB083C5595CEFF8582A47CEB3EA11_RuntimeMethod_var);
		NullCheck(L_13);
		int32_t L_14 = 1;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		__this->set_DeathSkull1_8(L_15);
		// DeathSkull2 = DeathLogPanel.GetComponentsInChildren<Image>()[2];
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = __this->get_DeathLogPanel_4();
		NullCheck(L_16);
		ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* L_17;
		L_17 = GameObject_GetComponentsInChildren_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m415C82AF86BFB083C5595CEFF8582A47CEB3EA11(L_16, /*hidden argument*/GameObject_GetComponentsInChildren_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m415C82AF86BFB083C5595CEFF8582A47CEB3EA11_RuntimeMethod_var);
		NullCheck(L_17);
		int32_t L_18 = 2;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		__this->set_DeathSkull2_9(L_19);
		// DeathSkull3 = DeathLogPanel.GetComponentsInChildren<Image>()[3];
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20 = __this->get_DeathLogPanel_4();
		NullCheck(L_20);
		ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* L_21;
		L_21 = GameObject_GetComponentsInChildren_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m415C82AF86BFB083C5595CEFF8582A47CEB3EA11(L_20, /*hidden argument*/GameObject_GetComponentsInChildren_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m415C82AF86BFB083C5595CEFF8582A47CEB3EA11_RuntimeMethod_var);
		NullCheck(L_21);
		int32_t L_22 = 3;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		__this->set_DeathSkull3_10(L_23);
		// DeathSkull1.enabled = false;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_24 = __this->get_DeathSkull1_8();
		NullCheck(L_24);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_24, (bool)0, /*hidden argument*/NULL);
		// DeathSkull2.enabled = false;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_25 = __this->get_DeathSkull2_9();
		NullCheck(L_25);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_25, (bool)0, /*hidden argument*/NULL);
		// DeathSkull3.enabled = false;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_26 = __this->get_DeathSkull3_10();
		NullCheck(L_26);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_26, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DeathLogPanelController::DeadStatus(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeathLogPanelController_DeadStatus_m234E2175A57033CAC1C615ECC882117B1CE2D924 (DeathLogPanelController_t87E4399AB36E6AB25976252311C792D0197C6D40 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if ( DeathLogText1.text == "")
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_DeathLogText1_5();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_0);
		bool L_2;
		L_2 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0030;
		}
	}
	{
		// DeathSkull1.enabled = true;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_3 = __this->get_DeathSkull1_8();
		NullCheck(L_3);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_3, (bool)1, /*hidden argument*/NULL);
		// DeathLogText1.text = name;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_4 = __this->get_DeathLogText1_5();
		String_t* L_5 = ___name0;
		NullCheck(L_4);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_5);
		// }
		return;
	}

IL_0030:
	{
		// else if ( DeathLogText2.text == "")
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_6 = __this->get_DeathLogText2_6();
		NullCheck(L_6);
		String_t* L_7;
		L_7 = VirtFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_6);
		bool L_8;
		L_8 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_7, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0060;
		}
	}
	{
		// DeathSkull2.enabled = true;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_9 = __this->get_DeathSkull2_9();
		NullCheck(L_9);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_9, (bool)1, /*hidden argument*/NULL);
		// DeathLogText2.text = name;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_10 = __this->get_DeathLogText2_6();
		String_t* L_11 = ___name0;
		NullCheck(L_10);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_10, L_11);
		// }
		return;
	}

IL_0060:
	{
		// else if ( DeathLogText3.text == "")
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_12 = __this->get_DeathLogText3_7();
		NullCheck(L_12);
		String_t* L_13;
		L_13 = VirtFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_12);
		bool L_14;
		L_14 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_13, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0090;
		}
	}
	{
		// DeathSkull3.enabled = true;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_15 = __this->get_DeathSkull3_10();
		NullCheck(L_15);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_15, (bool)1, /*hidden argument*/NULL);
		// DeathLogText3.text = name;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_16 = __this->get_DeathLogText3_7();
		String_t* L_17 = ___name0;
		NullCheck(L_16);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_16, L_17);
		// }
		return;
	}

IL_0090:
	{
		// DeathSkull1.enabled = false;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_18 = __this->get_DeathSkull1_8();
		NullCheck(L_18);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_18, (bool)0, /*hidden argument*/NULL);
		// DeathSkull2.enabled = false;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_19 = __this->get_DeathSkull2_9();
		NullCheck(L_19);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_19, (bool)0, /*hidden argument*/NULL);
		// DeathSkull3.enabled = false;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_20 = __this->get_DeathSkull3_10();
		NullCheck(L_20);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_20, (bool)0, /*hidden argument*/NULL);
		// DeathLogText1.text = name;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_21 = __this->get_DeathLogText1_5();
		String_t* L_22 = ___name0;
		NullCheck(L_21);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_21, L_22);
		// DeathLogText2.text = "";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_23 = __this->get_DeathLogText2_6();
		NullCheck(L_23);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_23, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// DeathLogText3.text = "";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_24 = __this->get_DeathLogText3_7();
		NullCheck(L_24);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_24, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// }
		return;
	}
}
// System.Void DeathLogPanelController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeathLogPanelController__ctor_m5DAC4BC00A67832D5E5D92E516E88A2D104E2003 (DeathLogPanelController_t87E4399AB36E6AB25976252311C792D0197C6D40 * __this, const RuntimeMethod* method)
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
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.healthMax = healthMax;
		int32_t L_0 = ___healthMax0;
		__this->set_healthMax_0(L_0);
		// this.healthCurrent = healthCurrent;
		int32_t L_1 = ___healthCurrent1;
		__this->set_healthCurrent_1(L_1);
		// this.die = false;
		__this->set_die_2((bool)0);
		// }
		return;
	}
}
// System.Single HealthController::GetHealthMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HealthController_GetHealthMax_m1AEB454DBA5B8AEA4353044AD37F7C9E7467760A (HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 * __this, const RuntimeMethod* method)
{
	{
		// return healthMax;
		int32_t L_0 = __this->get_healthMax_0();
		return ((float)((float)L_0));
	}
}
// System.Void HealthController::SetHealthMax(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthController_SetHealthMax_mC15B91DC9C889548E6599409850067A35829C433 (HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 * __this, int32_t ___healthMax0, const RuntimeMethod* method)
{
	{
		// this.healthMax = healthMax;
		int32_t L_0 = ___healthMax0;
		__this->set_healthMax_0(L_0);
		// }
		return;
	}
}
// System.Int32 HealthController::GetHealthCurrent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HealthController_GetHealthCurrent_m0A98300D4D5C8BDEE92DC8D4D66C409CA4F4B9D7 (HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 * __this, const RuntimeMethod* method)
{
	{
		// return healthCurrent;
		int32_t L_0 = __this->get_healthCurrent_1();
		return L_0;
	}
}
// System.Void HealthController::SetHealthCurrent(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthController_SetHealthCurrent_m12D6C1AA3D0AE94CCD65B02523F6FDEC3704C042 (HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 * __this, int32_t ___healthCurrent0, const RuntimeMethod* method)
{
	{
		// this.healthCurrent = healthCurrent;
		int32_t L_0 = ___healthCurrent0;
		__this->set_healthCurrent_1(L_0);
		// }
		return;
	}
}
// System.Boolean HealthController::IsDead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HealthController_IsDead_mE7D0AA18C03226E2D5371D73C67C9F7CF86995D6 (HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 * __this, const RuntimeMethod* method)
{
	{
		// return die;
		bool L_0 = __this->get_die_2();
		return L_0;
	}
}
// System.Void HealthController::SetDie(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthController_SetDie_m65412C2AC0FCF88E6D6380F06AE6DA3DFC8C576B (HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 * __this, bool ___die0, const RuntimeMethod* method)
{
	{
		// this.die = die;
		bool L_0 = ___die0;
		__this->set_die_2(L_0);
		// }
		return;
	}
}
// System.Single HealthController::GetHealthPercent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HealthController_GetHealthPercent_m99966C6902598D1CDD3D406A9D4FBD661B5C03EA (HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 * __this, const RuntimeMethod* method)
{
	{
		// return (float) healthCurrent / healthMax;
		int32_t L_0 = __this->get_healthCurrent_1();
		int32_t L_1 = __this->get_healthMax_0();
		return ((float)((float)((float)((float)L_0))/(float)((float)((float)L_1))));
	}
}
// System.Void HealthController::Heal(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthController_Heal_m035C470DC4E78F9E21345281E897BBF99F3A3459 (HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 * __this, int32_t ___amount0, const RuntimeMethod* method)
{
	{
		// healthCurrent += amount;
		int32_t L_0 = __this->get_healthCurrent_1();
		int32_t L_1 = ___amount0;
		__this->set_healthCurrent_1(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)));
		// if (healthCurrent >= healthMax)
		int32_t L_2 = __this->get_healthCurrent_1();
		int32_t L_3 = __this->get_healthMax_0();
		if ((((int32_t)L_2) < ((int32_t)L_3)))
		{
			goto IL_0028;
		}
	}
	{
		// healthCurrent = healthMax;
		int32_t L_4 = __this->get_healthMax_0();
		__this->set_healthCurrent_1(L_4);
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
		int32_t L_0 = __this->get_healthCurrent_1();
		int32_t L_1 = ___amount0;
		__this->set_healthCurrent_1(((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1)));
		// if (healthCurrent <= 0)
		int32_t L_2 = __this->get_healthCurrent_1();
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		// healthCurrent = 0;
		__this->set_healthCurrent_1(0);
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
// System.Void HeroHealthSystem::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeroHealthSystem_Awake_m64C2136AF58679FCD60996EB7F75DD2AC7996757 (HeroHealthSystem_t8AF0A90EF619583E7080848DEF6A5E10979D77C7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisSlider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A_mECB3B5A216AD4AAA7331E7F6731886264840D054_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m75CC9D1656BD67C760E6D5EA89403C89B728E8F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m7556907CF90B895FDFBEC11100A5F7AD5FAF1AA6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral096F6061D64CCAD1C750343DCFC7A756F02A1955);
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
		// poisionAnim = GetComponentsInChildren<ParticleSystem>()[1];
		ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7* L_7;
		L_7 = Component_GetComponentsInChildren_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m75CC9D1656BD67C760E6D5EA89403C89B728E8F6(__this, /*hidden argument*/Component_GetComponentsInChildren_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m75CC9D1656BD67C760E6D5EA89403C89B728E8F6_RuntimeMethod_var);
		NullCheck(L_7);
		int32_t L_8 = 1;
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		__this->set_poisionAnim_8(L_9);
		// explosionAnim = GetComponentsInChildren<ParticleSystem>()[2];
		ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7* L_10;
		L_10 = Component_GetComponentsInChildren_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m75CC9D1656BD67C760E6D5EA89403C89B728E8F6(__this, /*hidden argument*/Component_GetComponentsInChildren_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m75CC9D1656BD67C760E6D5EA89403C89B728E8F6_RuntimeMethod_var);
		NullCheck(L_10);
		int32_t L_11 = 2;
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		__this->set_explosionAnim_9(L_12);
		// freezingAnim = GetComponentsInChildren<ParticleSystem>()[3];
		ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7* L_13;
		L_13 = Component_GetComponentsInChildren_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m75CC9D1656BD67C760E6D5EA89403C89B728E8F6(__this, /*hidden argument*/Component_GetComponentsInChildren_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m75CC9D1656BD67C760E6D5EA89403C89B728E8F6_RuntimeMethod_var);
		NullCheck(L_13);
		int32_t L_14 = 3;
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		__this->set_freezingAnim_10(L_15);
		// HealthUpdate();
		HeroHealthSystem_HealthUpdate_m70AD358758CDFBB3A2630C2809EC87E985719B07(__this, /*hidden argument*/NULL);
		// poisionAnim.Stop();
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_16 = __this->get_poisionAnim_8();
		NullCheck(L_16);
		ParticleSystem_Stop_m8CBF9268DE7B5A40952B4977462B857B5F5AFB9D(L_16, /*hidden argument*/NULL);
		// explosionAnim.Stop();
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_17 = __this->get_explosionAnim_9();
		NullCheck(L_17);
		ParticleSystem_Stop_m8CBF9268DE7B5A40952B4977462B857B5F5AFB9D(L_17, /*hidden argument*/NULL);
		// freezingAnim.Stop();
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_18 = __this->get_freezingAnim_10();
		NullCheck(L_18);
		ParticleSystem_Stop_m8CBF9268DE7B5A40952B4977462B857B5F5AFB9D(L_18, /*hidden argument*/NULL);
		// gravestone = GameObject.FindGameObjectWithTag("Gravestone");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19;
		L_19 = GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F(_stringLiteral096F6061D64CCAD1C750343DCFC7A756F02A1955, /*hidden argument*/NULL);
		__this->set_gravestone_13(L_19);
		// healthSlider.value = healthController.GetHealthMax();
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_20 = __this->get_healthSlider_5();
		HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 * L_21 = __this->get_healthController_4();
		NullCheck(L_21);
		float L_22;
		L_22 = HealthController_GetHealthMax_m1AEB454DBA5B8AEA4353044AD37F7C9E7467760A(L_21, /*hidden argument*/NULL);
		NullCheck(L_20);
		VirtActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_20, L_22);
		// maxHealthText.text = "" + healthController.GetHealthMax();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_23 = __this->get_maxHealthText_6();
		HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 * L_24 = __this->get_healthController_4();
		NullCheck(L_24);
		float L_25;
		L_25 = HealthController_GetHealthMax_m1AEB454DBA5B8AEA4353044AD37F7C9E7467760A(L_24, /*hidden argument*/NULL);
		V_0 = L_25;
		String_t* L_26;
		L_26 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)(&V_0), /*hidden argument*/NULL);
		String_t* L_27 = L_26;
		G_B1_0 = L_27;
		G_B1_1 = L_23;
		if (L_27)
		{
			G_B2_0 = L_27;
			G_B2_1 = L_23;
			goto IL_00c1;
		}
	}
	{
		G_B2_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B2_1 = G_B1_1;
	}

IL_00c1:
	{
		NullCheck(G_B2_1);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B2_1, G_B2_0);
		// InvokeRepeating("InvokeDamage", 1 , 1);
		MonoBehaviour_InvokeRepeating_mB77F4276826FBA696A150831D190875CB5802C70(__this, _stringLiteral255BCC1A53692949FCC4A1A4B72B5983FC77E2DA, (1.0f), (1.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void HeroHealthSystem::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeroHealthSystem_Update_mA2DBD742FFD6A549EA190C4E31937BBCE8DB1420 (HeroHealthSystem_t8AF0A90EF619583E7080848DEF6A5E10979D77C7 * __this, const RuntimeMethod* method)
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
		HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 * L_3 = __this->get_healthController_4();
		NullCheck(L_3);
		bool L_4;
		L_4 = HealthController_IsDead_mE7D0AA18C03226E2D5371D73C67C9F7CF86995D6_inline(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_002a;
		}
	}
	{
		// poisionAnim.Stop();  // poision kesintisiz olsun diye loop olarak başlatılıp sonra durduruluyor.
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_5 = __this->get_poisionAnim_8();
		NullCheck(L_5);
		ParticleSystem_Stop_m8CBF9268DE7B5A40952B4977462B857B5F5AFB9D(L_5, /*hidden argument*/NULL);
	}

IL_002a:
	{
		// if (!explosionAnim.isPlaying)
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_6 = __this->get_explosionAnim_9();
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
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_8 = __this->get_explosionAnim_9();
		NullCheck(L_8);
		ParticleSystem_Stop_m8CBF9268DE7B5A40952B4977462B857B5F5AFB9D(L_8, /*hidden argument*/NULL);
	}

IL_0042:
	{
		// }
		return;
	}
}
// System.Void HeroHealthSystem::HealthUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeroHealthSystem_HealthUpdate_m70AD358758CDFBB3A2630C2809EC87E985719B07 (HeroHealthSystem_t8AF0A90EF619583E7080848DEF6A5E10979D77C7 * __this, const RuntimeMethod* method)
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
		// if (healthController.IsDead() && graveStoneControl)
		HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 * L_8 = __this->get_healthController_4();
		NullCheck(L_8);
		bool L_9;
		L_9 = HealthController_IsDead_mE7D0AA18C03226E2D5371D73C67C9F7CF86995D6_inline(L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0060;
		}
	}
	{
		bool L_10 = __this->get_graveStoneControl_15();
		if (!L_10)
		{
			goto IL_0060;
		}
	}
	{
		// DeadStatus();
		HeroHealthSystem_DeadStatus_m7CBBFFB1B463A2AAF8F790D4E916597480FDA080(__this, /*hidden argument*/NULL);
		// graveStoneControl = false;
		__this->set_graveStoneControl_15((bool)0);
	}

IL_0060:
	{
		// }
		return;
	}
}
// System.Void HeroHealthSystem::InvokeDamage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeroHealthSystem_InvokeDamage_m94A171E22A85DF2D929775EEBD96A0EC5A9CF86C (HeroHealthSystem_t8AF0A90EF619583E7080848DEF6A5E10979D77C7 * __this, const RuntimeMethod* method)
{
	{
		// if (DamageCircle.IsOutsideCircle(transform.position) && !healthController.IsDead())
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
		HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 * L_3 = __this->get_healthController_4();
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
		HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 * L_5 = __this->get_healthController_4();
		NullCheck(L_5);
		HealthController_Damage_m72DC74C513F1A4FB7DA30BAAE1154A53B686B832(L_5, 5, /*hidden argument*/NULL);
		// HealthUpdate();
		HeroHealthSystem_HealthUpdate_m70AD358758CDFBB3A2630C2809EC87E985719B07(__this, /*hidden argument*/NULL);
		// poisionAnim.Play();
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_6 = __this->get_poisionAnim_8();
		NullCheck(L_6);
		ParticleSystem_Play_m28D27CC4CDC1D93195C75647E6F6DAECF8B6BC50(L_6, /*hidden argument*/NULL);
	}

IL_003c:
	{
		// }
		return;
	}
}
// System.Void HeroHealthSystem::DeadStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeroHealthSystem_DeadStatus_m7CBBFFB1B463A2AAF8F790D4E916597480FDA080 (HeroHealthSystem_t8AF0A90EF619583E7080848DEF6A5E10979D77C7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5_m0D682A42739E30A25411905C0A712C2BEE81F861_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisNavMeshObstacle_t628A64EBD843A34267C4276DF7EE19BECA2C230A_m7F6EBD07A10FF9A1021B15B10E1FBB41F83DF11E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_Tisattack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C_m8B4136C5A1E4F5F48C36BB68463CF12B4AF2A4DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_Tismove_tF5C934E0EAF4295D46D7DAA6C508AFAB1B699276_m74D44FCC622E6D79067EBEDFCAF80A68C81D21D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PanelController_t680C04009837CA28BD14657765EC2AAE385ED0EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9FBF31E575806B916FC0F7315D0359EC2699DCC2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// animator.SetBool("die", true);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0 = __this->get_animator_11();
		NullCheck(L_0);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_0, _stringLiteral9FBF31E575806B916FC0F7315D0359EC2699DCC2, (bool)1, /*hidden argument*/NULL);
		// Invoke("", 2);
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (2.0f), /*hidden argument*/NULL);
		// GetComponent<Animator>().enabled = false;
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_1;
		L_1 = Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		NullCheck(L_1);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_1, (bool)0, /*hidden argument*/NULL);
		// GetComponent<move>().enabled = false;
		move_tF5C934E0EAF4295D46D7DAA6C508AFAB1B699276 * L_2;
		L_2 = Component_GetComponent_Tismove_tF5C934E0EAF4295D46D7DAA6C508AFAB1B699276_m74D44FCC622E6D79067EBEDFCAF80A68C81D21D2(__this, /*hidden argument*/Component_GetComponent_Tismove_tF5C934E0EAF4295D46D7DAA6C508AFAB1B699276_m74D44FCC622E6D79067EBEDFCAF80A68C81D21D2_RuntimeMethod_var);
		NullCheck(L_2);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_2, (bool)0, /*hidden argument*/NULL);
		// GetComponent<attack>().enabled = false;
		attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C * L_3;
		L_3 = Component_GetComponent_Tisattack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C_m8B4136C5A1E4F5F48C36BB68463CF12B4AF2A4DE(__this, /*hidden argument*/Component_GetComponent_Tisattack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C_m8B4136C5A1E4F5F48C36BB68463CF12B4AF2A4DE_RuntimeMethod_var);
		NullCheck(L_3);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_3, (bool)0, /*hidden argument*/NULL);
		// GetComponent<NavMeshObstacle>().enabled = false;
		NavMeshObstacle_t628A64EBD843A34267C4276DF7EE19BECA2C230A * L_4;
		L_4 = Component_GetComponent_TisNavMeshObstacle_t628A64EBD843A34267C4276DF7EE19BECA2C230A_m7F6EBD07A10FF9A1021B15B10E1FBB41F83DF11E(__this, /*hidden argument*/Component_GetComponent_TisNavMeshObstacle_t628A64EBD843A34267C4276DF7EE19BECA2C230A_m7F6EBD07A10FF9A1021B15B10E1FBB41F83DF11E_RuntimeMethod_var);
		NullCheck(L_4);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_4, (bool)0, /*hidden argument*/NULL);
		// GetComponent<BoxCollider>().enabled = false;
		BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * L_5;
		L_5 = Component_GetComponent_TisBoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5_m0D682A42739E30A25411905C0A712C2BEE81F861(__this, /*hidden argument*/Component_GetComponent_TisBoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5_m0D682A42739E30A25411905C0A712C2BEE81F861_RuntimeMethod_var);
		NullCheck(L_5);
		Collider_set_enabled_m047B4D830755CD36671F7A60BFAA9C0D61F6C4A1(L_5, (bool)0, /*hidden argument*/NULL);
		// PanelController.Instance.SetCloseOpenAllPanels();
		PanelController_t680C04009837CA28BD14657765EC2AAE385ED0EA * L_6 = ((PanelController_t680C04009837CA28BD14657765EC2AAE385ED0EA_StaticFields*)il2cpp_codegen_static_fields_for(PanelController_t680C04009837CA28BD14657765EC2AAE385ED0EA_il2cpp_TypeInfo_var))->get_Instance_4();
		NullCheck(L_6);
		PanelController_SetCloseOpenAllPanels_mB5C3289166CC60EB22FE8B79CE30F2D95EAA2AB6(L_6, /*hidden argument*/NULL);
		// PanelController.Instance.SetFailPanel(true);
		PanelController_t680C04009837CA28BD14657765EC2AAE385ED0EA * L_7 = ((PanelController_t680C04009837CA28BD14657765EC2AAE385ED0EA_StaticFields*)il2cpp_codegen_static_fields_for(PanelController_t680C04009837CA28BD14657765EC2AAE385ED0EA_il2cpp_TypeInfo_var))->get_Instance_4();
		NullCheck(L_7);
		PanelController_SetFailPanel_m4261AF98D307FFD3AE9D19032DEC9CDCD3DA47F0(L_7, (bool)1, /*hidden argument*/NULL);
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_8, /*hidden argument*/NULL);
		// Destroy(enemies);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = __this->get_enemies_12();
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void HeroHealthSystem::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeroHealthSystem_OnTriggerEnter_m81305C951103616153C9ED29E71EE46108CFF192 (HeroHealthSystem_t8AF0A90EF619583E7080848DEF6A5E10979D77C7 * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___other0, const RuntimeMethod* method)
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
		HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 * L_4 = __this->get_healthController_4();
		NullCheck(L_4);
		HealthController_Damage_m72DC74C513F1A4FB7DA30BAAE1154A53B686B832(L_4, ((int32_t)10), /*hidden argument*/NULL);
		// HealthUpdate();
		HeroHealthSystem_HealthUpdate_m70AD358758CDFBB3A2630C2809EC87E985719B07(__this, /*hidden argument*/NULL);
		// explosionAnim.Play();
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_5 = __this->get_explosionAnim_9();
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
		HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 * L_10 = __this->get_healthController_4();
		NullCheck(L_10);
		HealthController_Damage_m72DC74C513F1A4FB7DA30BAAE1154A53B686B832(L_10, ((int32_t)25), /*hidden argument*/NULL);
		// HealthUpdate();
		HeroHealthSystem_HealthUpdate_m70AD358758CDFBB3A2630C2809EC87E985719B07(__this, /*hidden argument*/NULL);
		// explosionAnim.Play();
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_11 = __this->get_explosionAnim_9();
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
		HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 * L_16 = __this->get_healthController_4();
		NullCheck(L_16);
		HealthController_Damage_m72DC74C513F1A4FB7DA30BAAE1154A53B686B832(L_16, ((int32_t)37), /*hidden argument*/NULL);
		// HealthUpdate();
		HeroHealthSystem_HealthUpdate_m70AD358758CDFBB3A2630C2809EC87E985719B07(__this, /*hidden argument*/NULL);
		// explosionAnim.Play();
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_17 = __this->get_explosionAnim_9();
		NullCheck(L_17);
		ParticleSystem_Play_m28D27CC4CDC1D93195C75647E6F6DAECF8B6BC50(L_17, /*hidden argument*/NULL);
	}

IL_00a1:
	{
		// }
		return;
	}
}
// System.Void HeroHealthSystem::OnTriggerStay(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeroHealthSystem_OnTriggerStay_mBAC108C064E4B4AD2A2FB17B34ABF417BE1D9615 (HeroHealthSystem_t8AF0A90EF619583E7080848DEF6A5E10979D77C7 * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___other0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void HeroHealthSystem::OnParticleCollision(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeroHealthSystem_OnParticleCollision_m0E3F5B3B78D8BF4ADEBA3D6295C942A068243611 (HeroHealthSystem_t8AF0A90EF619583E7080848DEF6A5E10979D77C7 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral369EA7CB5F0300CDA271EB79E496C69F49A4E5F9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56D755507113B0D056C6E727D2B4E8FC6BBA2E48);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral80BC82F1DD5166532AE66D07BA010008AA0FDE06);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC470C6E32564963D06544F2773FCAEF947A1AB3A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6E5AAE0E0842A00FBDDBEC69FC79A4266000F86);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.tag == "DefaultBallAnim" || other.gameObject.tag == "DefaultBallAnimAI")
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___other0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, _stringLiteral80BC82F1DD5166532AE66D07BA010008AA0FDE06, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_002e;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = ___other0;
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		String_t* L_6;
		L_6 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_5, /*hidden argument*/NULL);
		bool L_7;
		L_7 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_6, _stringLiteralC470C6E32564963D06544F2773FCAEF947A1AB3A, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_004d;
		}
	}

IL_002e:
	{
		// healthController.Damage(50);
		HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 * L_8 = __this->get_healthController_4();
		NullCheck(L_8);
		HealthController_Damage_m72DC74C513F1A4FB7DA30BAAE1154A53B686B832(L_8, ((int32_t)50), /*hidden argument*/NULL);
		// HealthUpdate();
		HeroHealthSystem_HealthUpdate_m70AD358758CDFBB3A2630C2809EC87E985719B07(__this, /*hidden argument*/NULL);
		// explosionAnim.Play();
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_9 = __this->get_explosionAnim_9();
		NullCheck(L_9);
		ParticleSystem_Play_m28D27CC4CDC1D93195C75647E6F6DAECF8B6BC50(L_9, /*hidden argument*/NULL);
		// }
		return;
	}

IL_004d:
	{
		// else if (other.gameObject.tag == "FireballAnim")
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = ___other0;
		NullCheck(L_10);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11;
		L_11 = GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		String_t* L_12;
		L_12 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_11, /*hidden argument*/NULL);
		bool L_13;
		L_13 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_12, _stringLiteralD6E5AAE0E0842A00FBDDBEC69FC79A4266000F86, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0083;
		}
	}
	{
		// healthController.Damage(43);
		HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 * L_14 = __this->get_healthController_4();
		NullCheck(L_14);
		HealthController_Damage_m72DC74C513F1A4FB7DA30BAAE1154A53B686B832(L_14, ((int32_t)43), /*hidden argument*/NULL);
		// HealthUpdate();
		HeroHealthSystem_HealthUpdate_m70AD358758CDFBB3A2630C2809EC87E985719B07(__this, /*hidden argument*/NULL);
		// explosionAnim.Play();
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_15 = __this->get_explosionAnim_9();
		NullCheck(L_15);
		ParticleSystem_Play_m28D27CC4CDC1D93195C75647E6F6DAECF8B6BC50(L_15, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0083:
	{
		// else if (other.gameObject.tag == "WaterballAnim")
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = ___other0;
		NullCheck(L_16);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17;
		L_17 = GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		String_t* L_18;
		L_18 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_17, /*hidden argument*/NULL);
		bool L_19;
		L_19 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_18, _stringLiteral56D755507113B0D056C6E727D2B4E8FC6BBA2E48, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_00b9;
		}
	}
	{
		// healthController.Damage(33);
		HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 * L_20 = __this->get_healthController_4();
		NullCheck(L_20);
		HealthController_Damage_m72DC74C513F1A4FB7DA30BAAE1154A53B686B832(L_20, ((int32_t)33), /*hidden argument*/NULL);
		// HealthUpdate();
		HeroHealthSystem_HealthUpdate_m70AD358758CDFBB3A2630C2809EC87E985719B07(__this, /*hidden argument*/NULL);
		// freezingAnim.Play();
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_21 = __this->get_freezingAnim_10();
		NullCheck(L_21);
		ParticleSystem_Play_m28D27CC4CDC1D93195C75647E6F6DAECF8B6BC50(L_21, /*hidden argument*/NULL);
		// }
		return;
	}

IL_00b9:
	{
		// else if (other.gameObject.tag == "LightningballAnim")
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22 = ___other0;
		NullCheck(L_22);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23;
		L_23 = GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6(L_22, /*hidden argument*/NULL);
		NullCheck(L_23);
		String_t* L_24;
		L_24 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_23, /*hidden argument*/NULL);
		bool L_25;
		L_25 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_24, _stringLiteral369EA7CB5F0300CDA271EB79E496C69F49A4E5F9, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_00ee;
		}
	}
	{
		// healthController.Damage(23);
		HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 * L_26 = __this->get_healthController_4();
		NullCheck(L_26);
		HealthController_Damage_m72DC74C513F1A4FB7DA30BAAE1154A53B686B832(L_26, ((int32_t)23), /*hidden argument*/NULL);
		// HealthUpdate();
		HeroHealthSystem_HealthUpdate_m70AD358758CDFBB3A2630C2809EC87E985719B07(__this, /*hidden argument*/NULL);
		// explosionAnim.Play();
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_27 = __this->get_explosionAnim_9();
		NullCheck(L_27);
		ParticleSystem_Play_m28D27CC4CDC1D93195C75647E6F6DAECF8B6BC50(L_27, /*hidden argument*/NULL);
	}

IL_00ee:
	{
		// }
		return;
	}
}
// System.Void HeroHealthSystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeroHealthSystem__ctor_mF6B8F4679A4E86755FDB15973C4B9547F13BCA35 (HeroHealthSystem_t8AF0A90EF619583E7080848DEF6A5E10979D77C7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// HealthController healthController = new HealthController(300, 300);
		HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 * L_0 = (HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 *)il2cpp_codegen_object_new(HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7_il2cpp_TypeInfo_var);
		HealthController__ctor_mE7C9A5C8657BF0AA3875B191C910997CF701CCE1(L_0, ((int32_t)300), ((int32_t)300), /*hidden argument*/NULL);
		__this->set_healthController_4(L_0);
		// bool graveStoneControl = true; //s�rekli graveStone koymas�n diye
		__this->set_graveStoneControl_15((bool)1);
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
// System.Void InGameAudio::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InGameAudio_Start_m35FBBCF6E4D386253B744CE801505C01A8A60124 (InGameAudio_t7ABBEBFA55614E7C60E1CFA24FF9ADBA36C13C27 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioPlayerManager_t3A53F63D4321D80154C3402406E6A2C977996484_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF998D3AB9D686E9713A36A7C8A1CE58AEC2033BA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(GameObject.FindGameObjectWithTag("mainmenumusic"));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F(_stringLiteralF998D3AB9D686E9713A36A7C8A1CE58AEC2033BA, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_0, /*hidden argument*/NULL);
		// ingameaudio = GetComponent<AudioSource>();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_1;
		L_1 = Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		__this->set_ingameaudio_4(L_1);
		// ingameaudio.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_2 = __this->get_ingameaudio_4();
		NullCheck(L_2);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_2, /*hidden argument*/NULL);
		// ingameaudio.volume=AudioPlayerManager.MusicLevelFromAudioPlayer;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_3 = __this->get_ingameaudio_4();
		IL2CPP_RUNTIME_CLASS_INIT(AudioPlayerManager_t3A53F63D4321D80154C3402406E6A2C977996484_il2cpp_TypeInfo_var);
		float L_4 = ((AudioPlayerManager_t3A53F63D4321D80154C3402406E6A2C977996484_StaticFields*)il2cpp_codegen_static_fields_for(AudioPlayerManager_t3A53F63D4321D80154C3402406E6A2C977996484_il2cpp_TypeInfo_var))->get_MusicLevelFromAudioPlayer_6();
		NullCheck(L_3);
		AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58(L_3, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void InGameAudio::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InGameAudio_Update_m8B0C18DEFB0C4CE7CF236FFD98D2DB59348F1508 (InGameAudio_t7ABBEBFA55614E7C60E1CFA24FF9ADBA36C13C27 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void InGameAudio::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InGameAudio__ctor_mF848736370A9505A68A64BED0B11CBE7A835230B (InGameAudio_t7ABBEBFA55614E7C60E1CFA24FF9ADBA36C13C27 * __this, const RuntimeMethod* method)
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
// System.Void LoadingPage::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadingPage_Start_mAC5E2BEEED0824FEC998D16DD4E231593263C508 (LoadingPage_t741F6F646828DED519580999C7360B7B1EA55E0E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral426D823B01142CA0DC607F0F90B3CD4AF686B2F4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Invoke("LoadLevelInvoke",1);
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteral426D823B01142CA0DC607F0F90B3CD4AF686B2F4, (1.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LoadingPage::LoadLevelInvoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadingPage_LoadLevelInvoke_m47DFE3CA1C04A11A14D24AD986BCFE9E1B1F3295 (LoadingPage_t741F6F646828DED519580999C7360B7B1EA55E0E * __this, const RuntimeMethod* method)
{
	{
		// LoadLevel(2);
		LoadingPage_LoadLevel_mF4968915F17C211D1F18101A9501F26CA11B7E63(__this, 2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LoadingPage::LoadLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadingPage_LoadLevel_mF4968915F17C211D1F18101A9501F26CA11B7E63 (LoadingPage_t741F6F646828DED519580999C7360B7B1EA55E0E * __this, int32_t ___sceneIndex0, const RuntimeMethod* method)
{
	{
		// StartCoroutine(LoadAsynchronously(sceneIndex));
		int32_t L_0 = ___sceneIndex0;
		RuntimeObject* L_1;
		L_1 = LoadingPage_LoadAsynchronously_m418A1AB3D0FFAFABF48653A2E6B188F1159D6243(__this, L_0, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_2;
		L_2 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator LoadingPage::LoadAsynchronously(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LoadingPage_LoadAsynchronously_m418A1AB3D0FFAFABF48653A2E6B188F1159D6243 (LoadingPage_t741F6F646828DED519580999C7360B7B1EA55E0E * __this, int32_t ___sceneIndex0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CLoadAsynchronouslyU3Ed__3_tEC679E349F2E1391F257C32519B899B2914C2551_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CLoadAsynchronouslyU3Ed__3_tEC679E349F2E1391F257C32519B899B2914C2551 * L_0 = (U3CLoadAsynchronouslyU3Ed__3_tEC679E349F2E1391F257C32519B899B2914C2551 *)il2cpp_codegen_object_new(U3CLoadAsynchronouslyU3Ed__3_tEC679E349F2E1391F257C32519B899B2914C2551_il2cpp_TypeInfo_var);
		U3CLoadAsynchronouslyU3Ed__3__ctor_m22BAFEBE282657BBEDA0B771CFF2493311A952DC(L_0, 0, /*hidden argument*/NULL);
		U3CLoadAsynchronouslyU3Ed__3_tEC679E349F2E1391F257C32519B899B2914C2551 * L_1 = L_0;
		int32_t L_2 = ___sceneIndex0;
		NullCheck(L_1);
		L_1->set_sceneIndex_2(L_2);
		return L_1;
	}
}
// System.Void LoadingPage::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadingPage_Update_m932022A4612BA8910F2EE6D5B839C96ED48FDE74 (LoadingPage_t741F6F646828DED519580999C7360B7B1EA55E0E * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void LoadingPage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadingPage__ctor_mFC8F4CAE9C874A9947FA506FC4D02600D40EC87E (LoadingPage_t741F6F646828DED519580999C7360B7B1EA55E0E * __this, const RuntimeMethod* method)
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
// System.Void PanelController::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelController_Awake_m1DEB5B95C5920FF90D987FC04EEC009EE81948D2 (PanelController_t680C04009837CA28BD14657765EC2AAE385ED0EA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PanelController_t680C04009837CA28BD14657765EC2AAE385ED0EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instance = this;
		((PanelController_t680C04009837CA28BD14657765EC2AAE385ED0EA_StaticFields*)il2cpp_codegen_static_fields_for(PanelController_t680C04009837CA28BD14657765EC2AAE385ED0EA_il2cpp_TypeInfo_var))->set_Instance_4(__this);
		// AliveCountNumber=int.Parse(AliveCountText.text);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_AliveCountText_10();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_0);
		int32_t L_2;
		L_2 = Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C(L_1, /*hidden argument*/NULL);
		((PanelController_t680C04009837CA28BD14657765EC2AAE385ED0EA_StaticFields*)il2cpp_codegen_static_fields_for(PanelController_t680C04009837CA28BD14657765EC2AAE385ED0EA_il2cpp_TypeInfo_var))->set_AliveCountNumber_11(L_2);
		// }
		return;
	}
}
// System.Void PanelController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelController_Start_m53EA8349DD186D05DD6065081FDAD41736DC93BE (PanelController_t680C04009837CA28BD14657765EC2AAE385ED0EA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PanelController_NextLevelButtonFunc_m094E587AB4B0A0396269A2008519AE2C96BE8FC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PanelController_TurnToMenuButtonFunc_mA44A0895F66746928E0A3FBD4909517319648367_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TurnToMenuButton.onClick.AddListener(TurnToMenuButtonFunc);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_0 = __this->get_TurnToMenuButton_7();
		NullCheck(L_0);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_1;
		L_1 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_0, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_2 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_2, __this, (intptr_t)((intptr_t)PanelController_TurnToMenuButtonFunc_mA44A0895F66746928E0A3FBD4909517319648367_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_1);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_1, L_2, /*hidden argument*/NULL);
		// NextLevelButton.onClick.AddListener(NextLevelButtonFunc);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_3 = __this->get_NextLevelButton_8();
		NullCheck(L_3);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_4;
		L_4 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_3, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_5 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_5, __this, (intptr_t)((intptr_t)PanelController_NextLevelButtonFunc_m094E587AB4B0A0396269A2008519AE2C96BE8FC1_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_4);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_4, L_5, /*hidden argument*/NULL);
		// Panels.Add(_FailPanel);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_6 = __this->get_Panels_12();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = __this->get__FailPanel_5();
		NullCheck(L_6);
		List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3(L_6, L_7, /*hidden argument*/List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		// Panels.Add(_SuccessPanel);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_8 = __this->get_Panels_12();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = __this->get__SuccessPanel_6();
		NullCheck(L_8);
		List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3(L_8, L_9, /*hidden argument*/List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		// Panels.Add(_DeathLogPanel);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_10 = __this->get_Panels_12();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = __this->get__DeathLogPanel_9();
		NullCheck(L_10);
		List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3(L_10, L_11, /*hidden argument*/List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		// SetCloseOpenAllPanels();
		PanelController_SetCloseOpenAllPanels_mB5C3289166CC60EB22FE8B79CE30F2D95EAA2AB6(__this, /*hidden argument*/NULL);
		// SetDeathLogPanel(true);
		PanelController_SetDeathLogPanel_m639128DA81D6A12DBD19EA57D935A8F743C86B8B(__this, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PanelController::TurnToMenuButtonFunc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelController_TurnToMenuButtonFunc_mA44A0895F66746928E0A3FBD4909517319648367 (PanelController_t680C04009837CA28BD14657765EC2AAE385ED0EA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8546F53EE272D19109BF52ABA65764B3FF1AFE0B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// print("map1calisti");
		MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(_stringLiteral8546F53EE272D19109BF52ABA65764B3FF1AFE0B, /*hidden argument*/NULL);
		// SceneManager.LoadScene(0);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PanelController::NextLevelButtonFunc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelController_NextLevelButtonFunc_m094E587AB4B0A0396269A2008519AE2C96BE8FC1 (PanelController_t680C04009837CA28BD14657765EC2AAE385ED0EA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8546F53EE272D19109BF52ABA65764B3FF1AFE0B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// print("map1calisti");
		MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(_stringLiteral8546F53EE272D19109BF52ABA65764B3FF1AFE0B, /*hidden argument*/NULL);
		// SceneManager.LoadScene(0);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PanelController::AliveCountUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelController_AliveCountUpdate_m6772DD828E83FCCEE6913DDC1E8B7B98174058F1 (PanelController_t680C04009837CA28BD14657765EC2AAE385ED0EA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PanelController_t680C04009837CA28BD14657765EC2AAE385ED0EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AliveCountText.text=AliveCountNumber.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_AliveCountText_10();
		String_t* L_1;
		L_1 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(((PanelController_t680C04009837CA28BD14657765EC2AAE385ED0EA_StaticFields*)il2cpp_codegen_static_fields_for(PanelController_t680C04009837CA28BD14657765EC2AAE385ED0EA_il2cpp_TypeInfo_var))->get_address_of_AliveCountNumber_11()), /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void PanelController::SetFailPanel(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelController_SetFailPanel_m4261AF98D307FFD3AE9D19032DEC9CDCD3DA47F0 (PanelController_t680C04009837CA28BD14657765EC2AAE385ED0EA * __this, bool ___open0, const RuntimeMethod* method)
{
	{
		// _FailPanel.SetActive(open);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get__FailPanel_5();
		bool L_1 = ___open0;
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PanelController::SetSuccessPanel(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelController_SetSuccessPanel_m7DC4BB00704448F0F4AD2E3AA1E710FC8953CFB0 (PanelController_t680C04009837CA28BD14657765EC2AAE385ED0EA * __this, bool ___open0, const RuntimeMethod* method)
{
	{
		// _SuccessPanel.SetActive(open);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get__SuccessPanel_6();
		bool L_1 = ___open0;
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PanelController::SetDeathLogPanel(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelController_SetDeathLogPanel_m639128DA81D6A12DBD19EA57D935A8F743C86B8B (PanelController_t680C04009837CA28BD14657765EC2AAE385ED0EA * __this, bool ___open0, const RuntimeMethod* method)
{
	{
		// _DeathLogPanel.SetActive(open);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get__DeathLogPanel_9();
		bool L_1 = ___open0;
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PanelController::SetCloseOpenAllPanels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelController_SetCloseOpenAllPanels_mB5C3289166CC60EB22FE8B79CE30F2D95EAA2AB6 (PanelController_t680C04009837CA28BD14657765EC2AAE385ED0EA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// foreach (GameObject panel in Panels)
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_0 = __this->get_Panels_12();
		NullCheck(L_0);
		Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14  L_1;
		L_1 = List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6(L_0, /*hidden argument*/List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_001b;
		}

IL_000e:
		{
			// foreach (GameObject panel in Panels)
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
			L_2 = Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_inline((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_0), /*hidden argument*/Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_RuntimeMethod_var);
			// panel.SetActive(false);
			NullCheck(L_2);
			GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)0, /*hidden argument*/NULL);
		}

IL_001b:
		{
			// foreach (GameObject panel in Panels)
			bool L_3;
			L_3 = Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7_RuntimeMethod_var);
			if (L_3)
			{
				goto IL_000e;
			}
		}

IL_0024:
		{
			IL2CPP_LEAVE(0x34, FINALLY_0026);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0026;
	}

FINALLY_0026:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9_RuntimeMethod_var);
		IL2CPP_END_FINALLY(38)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(38)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x34, IL_0034)
	}

IL_0034:
	{
		// }
		return;
	}
}
// System.Void PanelController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelController__ctor_m7F6193FDAB0DF995BF33332880B6E629368C6AD1 (PanelController_t680C04009837CA28BD14657765EC2AAE385ED0EA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// List<GameObject> Panels = new List<GameObject>();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_0 = (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)il2cpp_codegen_object_new(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var);
		List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8(L_0, /*hidden argument*/List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var);
		__this->set_Panels_12(L_0);
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
// System.Void SceneInGameManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneInGameManager_Start_mDC6A1EE313FDD12A9E3FB27EA50E5B02E0D131D9 (SceneInGameManager_tEF7E7AA172EA89A9D721D1D0B4B72D703646F2ED * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCC2E32FD05AF4664C2C796E146AE3226E276B8EB);
		s_Il2CppMethodInitialized = true;
	}
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (SceneManager.GetActiveScene().buildIndex==5)
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_0;
		L_0 = SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4(/*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Scene_get_buildIndex_mE32CE766EA0790E4636A351BA353A7FD71A11DA4((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)5))))
		{
			goto IL_0020;
		}
	}
	{
		// Invoke("LoadNextScene",1);
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteralCC2E32FD05AF4664C2C796E146AE3226E276B8EB, (1.0f), /*hidden argument*/NULL);
	}

IL_0020:
	{
		// }
		return;
	}
}
// System.Void SceneInGameManager::playButtonFunc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneInGameManager_playButtonFunc_m0B434BA8D49D469E75769DE697E6E12164D5F870 (SceneInGameManager_tEF7E7AA172EA89A9D721D1D0B4B72D703646F2ED * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8784BFD2F8CEAE585F003CBC254E8E26F9BB3445);
		s_Il2CppMethodInitialized = true;
	}
	{
		// print("selam");
		MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(_stringLiteral8784BFD2F8CEAE585F003CBC254E8E26F9BB3445, /*hidden argument*/NULL);
		// LoadNextScene();
		SceneInGameManager_LoadNextScene_m6458AABD94D5A2FEE939DFBEE827413C1F785D39(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SceneInGameManager::LoadNextScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneInGameManager_LoadNextScene_m6458AABD94D5A2FEE939DFBEE827413C1F785D39 (SceneInGameManager_tEF7E7AA172EA89A9D721D1D0B4B72D703646F2ED * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// int currentSceneIndex = SceneManager.GetActiveScene().buildIndex;
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_0;
		L_0 = SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4(/*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Scene_get_buildIndex_mE32CE766EA0790E4636A351BA353A7FD71A11DA4((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_0), /*hidden argument*/NULL);
		// SceneManager.LoadScene(currentSceneIndex + 1);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1)), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SceneInGameManager::LoadStartScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneInGameManager_LoadStartScene_m553C271DA4AB7700EF443FC59D7DB83BB4DB000A (SceneInGameManager_tEF7E7AA172EA89A9D721D1D0B4B72D703646F2ED * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(0);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SceneInGameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneInGameManager__ctor_m41A7EC8A5AFD321E6096F8DA482879B71FDE81B2 (SceneInGameManager_tEF7E7AA172EA89A9D721D1D0B4B72D703646F2ED * __this, const RuntimeMethod* method)
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
// System.Void SceneLoader::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneLoader_Start_m0C1135363F132F29168A105548C5C06AF2B7D682 (SceneLoader_t3266812523B184D5AEDF27CA310452129C676B0D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneLoader_playButtonFunc_m205183C3D3BAF8029AA7F2AA2BE76C91A640E7EE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCC2E32FD05AF4664C2C796E146AE3226E276B8EB);
		s_Il2CppMethodInitialized = true;
	}
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// playButton.onClick.AddListener(playButtonFunc);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_0 = __this->get_playButton_4();
		NullCheck(L_0);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_1;
		L_1 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_0, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_2 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_2, __this, (intptr_t)((intptr_t)SceneLoader_playButtonFunc_m205183C3D3BAF8029AA7F2AA2BE76C91A640E7EE_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_1);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_1, L_2, /*hidden argument*/NULL);
		// if (SceneManager.GetActiveScene().buildIndex==5)
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_3;
		L_3 = SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4(/*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4;
		L_4 = Scene_get_buildIndex_mE32CE766EA0790E4636A351BA353A7FD71A11DA4((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_4) == ((uint32_t)5))))
		{
			goto IL_003c;
		}
	}
	{
		// Invoke("LoadNextScene",1);
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteralCC2E32FD05AF4664C2C796E146AE3226E276B8EB, (1.0f), /*hidden argument*/NULL);
	}

IL_003c:
	{
		// }
		return;
	}
}
// System.Void SceneLoader::playButtonFunc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneLoader_playButtonFunc_m205183C3D3BAF8029AA7F2AA2BE76C91A640E7EE (SceneLoader_t3266812523B184D5AEDF27CA310452129C676B0D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8784BFD2F8CEAE585F003CBC254E8E26F9BB3445);
		s_Il2CppMethodInitialized = true;
	}
	{
		// print("selam");
		MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(_stringLiteral8784BFD2F8CEAE585F003CBC254E8E26F9BB3445, /*hidden argument*/NULL);
		// LoadNextScene();
		SceneLoader_LoadNextScene_mC5788C7284067B6854739BC2F695F03F5A150C76(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SceneLoader::LoadNextScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneLoader_LoadNextScene_mC5788C7284067B6854739BC2F695F03F5A150C76 (SceneLoader_t3266812523B184D5AEDF27CA310452129C676B0D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// int currentSceneIndex = SceneManager.GetActiveScene().buildIndex;
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_0;
		L_0 = SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4(/*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Scene_get_buildIndex_mE32CE766EA0790E4636A351BA353A7FD71A11DA4((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_0), /*hidden argument*/NULL);
		// SceneManager.LoadScene(currentSceneIndex + 1);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1)), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SceneLoader::LoadStartScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneLoader_LoadStartScene_m0C85A3759B2410B1439CF566C06DB088CFB49F82 (SceneLoader_t3266812523B184D5AEDF27CA310452129C676B0D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(0);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SceneLoader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneLoader__ctor_m8708D080848349110CEA260D8779F30BD5823912 (SceneLoader_t3266812523B184D5AEDF27CA310452129C676B0D * __this, const RuntimeMethod* method)
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
// System.Void SettingsControl::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsControl_Start_mEA391DE27D096F0371E350BEAE8A6D108B54E6C4 (SettingsControl_tA8506FCBD7BE51F887211F09160B4C366F85CEB6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsControl_MusicOffButtonFunc_mA9CFA67C0342922BC693218231C1C92A41DA6B9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsControl_MusicOnButtonFunc_m9516BF83790F8DE3DAF54E834C8CCD5707064008_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsControl_SettingsPanelFunc_m80DB860F9F744C79BE508A8BABD3425DFA44C859_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsControl_SoundOffButtonFunc_m07C26805BFC98B234559F11CA2B7800422B77309_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsControl_SoundOnButtonFunc_mB940A6388816979936BA2991AA4DD937A195C43D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SettingsButton.gameObject.SetActive(true);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_0 = __this->get_SettingsButton_6();
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)1, /*hidden argument*/NULL);
		// SettingsPanel.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_SettingsPanel_4();
		NullCheck(L_2);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)0, /*hidden argument*/NULL);
		// MusicOnImage.enabled=false;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_3 = __this->get_MusicOnImage_11();
		NullCheck(L_3);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_3, (bool)0, /*hidden argument*/NULL);
		// MusicOffImage.enabled=false;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_4 = __this->get_MusicOffImage_12();
		NullCheck(L_4);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_4, (bool)0, /*hidden argument*/NULL);
		// SoundOnImage.enabled=false;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_5 = __this->get_SoundOnImage_13();
		NullCheck(L_5);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_5, (bool)0, /*hidden argument*/NULL);
		// SoundOffImage.enabled=false;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_6 = __this->get_SoundOffImage_14();
		NullCheck(L_6);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_6, (bool)0, /*hidden argument*/NULL);
		// MusicOnButton.gameObject.SetActive(false);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_7 = __this->get_MusicOnButton_7();
		NullCheck(L_7);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_8, (bool)0, /*hidden argument*/NULL);
		// MusicOffButton.gameObject.SetActive(false);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_9 = __this->get_MusicOffButton_8();
		NullCheck(L_9);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10;
		L_10 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_10, (bool)0, /*hidden argument*/NULL);
		// SoundOnButton.gameObject.SetActive(false);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_11 = __this->get_SoundOnButton_9();
		NullCheck(L_11);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12;
		L_12 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_12, (bool)0, /*hidden argument*/NULL);
		// SoundOffButton.gameObject.SetActive(false);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_13 = __this->get_SoundOffButton_10();
		NullCheck(L_13);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14;
		L_14 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_14, (bool)0, /*hidden argument*/NULL);
		// SettingsButton.onClick.AddListener(SettingsPanelFunc);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_15 = __this->get_SettingsButton_6();
		NullCheck(L_15);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_16;
		L_16 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_15, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_17 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_17, __this, (intptr_t)((intptr_t)SettingsControl_SettingsPanelFunc_m80DB860F9F744C79BE508A8BABD3425DFA44C859_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_16);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_16, L_17, /*hidden argument*/NULL);
		// MusicOnButton.onClick.AddListener(MusicOnButtonFunc);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_18 = __this->get_MusicOnButton_7();
		NullCheck(L_18);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_19;
		L_19 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_18, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_20 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_20, __this, (intptr_t)((intptr_t)SettingsControl_MusicOnButtonFunc_m9516BF83790F8DE3DAF54E834C8CCD5707064008_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_19);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_19, L_20, /*hidden argument*/NULL);
		// MusicOffButton.onClick.AddListener(MusicOffButtonFunc);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_21 = __this->get_MusicOffButton_8();
		NullCheck(L_21);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_22;
		L_22 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_21, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_23 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_23, __this, (intptr_t)((intptr_t)SettingsControl_MusicOffButtonFunc_mA9CFA67C0342922BC693218231C1C92A41DA6B9C_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_22);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_22, L_23, /*hidden argument*/NULL);
		// SoundOnButton.onClick.AddListener(SoundOnButtonFunc);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_24 = __this->get_SoundOnButton_9();
		NullCheck(L_24);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_25;
		L_25 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_24, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_26 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_26, __this, (intptr_t)((intptr_t)SettingsControl_SoundOnButtonFunc_mB940A6388816979936BA2991AA4DD937A195C43D_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_25);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_25, L_26, /*hidden argument*/NULL);
		// SoundOffButton.onClick.AddListener(SoundOffButtonFunc);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_27 = __this->get_SoundOffButton_10();
		NullCheck(L_27);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_28;
		L_28 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_27, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_29 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_29, __this, (intptr_t)((intptr_t)SettingsControl_SoundOffButtonFunc_m07C26805BFC98B234559F11CA2B7800422B77309_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_28);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_28, L_29, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SettingsControl::SettingsPanelFunc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsControl_SettingsPanelFunc_m80DB860F9F744C79BE508A8BABD3425DFA44C859 (SettingsControl_tA8506FCBD7BE51F887211F09160B4C366F85CEB6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsControl_tA8506FCBD7BE51F887211F09160B4C366F85CEB6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!SettingsPanel.activeSelf)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_SettingsPanel_4();
		NullCheck(L_0);
		bool L_1;
		L_1 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0233;
		}
	}
	{
		// SettingsPanel.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_SettingsPanel_4();
		NullCheck(L_2);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)1, /*hidden argument*/NULL);
		// if (MusicState==true & SoundState==true )
		IL2CPP_RUNTIME_CLASS_INIT(SettingsControl_tA8506FCBD7BE51F887211F09160B4C366F85CEB6_il2cpp_TypeInfo_var);
		bool L_3 = ((SettingsControl_tA8506FCBD7BE51F887211F09160B4C366F85CEB6_StaticFields*)il2cpp_codegen_static_fields_for(SettingsControl_tA8506FCBD7BE51F887211F09160B4C366F85CEB6_il2cpp_TypeInfo_var))->get_MusicState_15();
		bool L_4 = ((SettingsControl_tA8506FCBD7BE51F887211F09160B4C366F85CEB6_StaticFields*)il2cpp_codegen_static_fields_for(SettingsControl_tA8506FCBD7BE51F887211F09160B4C366F85CEB6_il2cpp_TypeInfo_var))->get_SoundState_16();
		if (!((int32_t)((int32_t)L_3&(int32_t)L_4)))
		{
			goto IL_009e;
		}
	}
	{
		// MusicOnImage.enabled=true;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_5 = __this->get_MusicOnImage_11();
		NullCheck(L_5);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_5, (bool)1, /*hidden argument*/NULL);
		// MusicOffImage.enabled=false;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_6 = __this->get_MusicOffImage_12();
		NullCheck(L_6);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_6, (bool)0, /*hidden argument*/NULL);
		// SoundOnImage.enabled=true;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_7 = __this->get_SoundOnImage_13();
		NullCheck(L_7);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_7, (bool)1, /*hidden argument*/NULL);
		// SoundOffImage.enabled=false;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_8 = __this->get_SoundOffImage_14();
		NullCheck(L_8);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_8, (bool)0, /*hidden argument*/NULL);
		// MusicOnButton.gameObject.SetActive(true);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_9 = __this->get_MusicOnButton_7();
		NullCheck(L_9);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10;
		L_10 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_10, (bool)1, /*hidden argument*/NULL);
		// MusicOffButton.gameObject.SetActive(false);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_11 = __this->get_MusicOffButton_8();
		NullCheck(L_11);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12;
		L_12 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_12, (bool)0, /*hidden argument*/NULL);
		// SoundOnButton.gameObject.SetActive(true);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_13 = __this->get_SoundOnButton_9();
		NullCheck(L_13);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14;
		L_14 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_14, (bool)1, /*hidden argument*/NULL);
		// SoundOffButton.gameObject.SetActive(false);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_15 = __this->get_SoundOffButton_10();
		NullCheck(L_15);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16;
		L_16 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_16, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}

IL_009e:
	{
		// else if (MusicState==true & SoundState==false )
		IL2CPP_RUNTIME_CLASS_INIT(SettingsControl_tA8506FCBD7BE51F887211F09160B4C366F85CEB6_il2cpp_TypeInfo_var);
		bool L_17 = ((SettingsControl_tA8506FCBD7BE51F887211F09160B4C366F85CEB6_StaticFields*)il2cpp_codegen_static_fields_for(SettingsControl_tA8506FCBD7BE51F887211F09160B4C366F85CEB6_il2cpp_TypeInfo_var))->get_MusicState_15();
		bool L_18 = ((SettingsControl_tA8506FCBD7BE51F887211F09160B4C366F85CEB6_StaticFields*)il2cpp_codegen_static_fields_for(SettingsControl_tA8506FCBD7BE51F887211F09160B4C366F85CEB6_il2cpp_TypeInfo_var))->get_SoundState_16();
		if (!((int32_t)((int32_t)L_17&(int32_t)((((int32_t)L_18) == ((int32_t)0))? 1 : 0))))
		{
			goto IL_0123;
		}
	}
	{
		// MusicOnImage.enabled=true;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_19 = __this->get_MusicOnImage_11();
		NullCheck(L_19);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_19, (bool)1, /*hidden argument*/NULL);
		// MusicOffImage.enabled=false;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_20 = __this->get_MusicOffImage_12();
		NullCheck(L_20);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_20, (bool)0, /*hidden argument*/NULL);
		// SoundOnImage.enabled=false;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_21 = __this->get_SoundOnImage_13();
		NullCheck(L_21);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_21, (bool)0, /*hidden argument*/NULL);
		// SoundOffImage.enabled=true;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_22 = __this->get_SoundOffImage_14();
		NullCheck(L_22);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_22, (bool)1, /*hidden argument*/NULL);
		// MusicOnButton.gameObject.SetActive(true);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_23 = __this->get_MusicOnButton_7();
		NullCheck(L_23);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_24;
		L_24 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_23, /*hidden argument*/NULL);
		NullCheck(L_24);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_24, (bool)1, /*hidden argument*/NULL);
		// MusicOffButton.gameObject.SetActive(false);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_25 = __this->get_MusicOffButton_8();
		NullCheck(L_25);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_26;
		L_26 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_25, /*hidden argument*/NULL);
		NullCheck(L_26);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_26, (bool)0, /*hidden argument*/NULL);
		// SoundOnButton.gameObject.SetActive(false);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_27 = __this->get_SoundOnButton_9();
		NullCheck(L_27);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_28;
		L_28 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_27, /*hidden argument*/NULL);
		NullCheck(L_28);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_28, (bool)0, /*hidden argument*/NULL);
		// SoundOffButton.gameObject.SetActive(true);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_29 = __this->get_SoundOffButton_10();
		NullCheck(L_29);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_30;
		L_30 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_29, /*hidden argument*/NULL);
		NullCheck(L_30);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_30, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0123:
	{
		// else if (MusicState==false & SoundState==true )
		IL2CPP_RUNTIME_CLASS_INIT(SettingsControl_tA8506FCBD7BE51F887211F09160B4C366F85CEB6_il2cpp_TypeInfo_var);
		bool L_31 = ((SettingsControl_tA8506FCBD7BE51F887211F09160B4C366F85CEB6_StaticFields*)il2cpp_codegen_static_fields_for(SettingsControl_tA8506FCBD7BE51F887211F09160B4C366F85CEB6_il2cpp_TypeInfo_var))->get_MusicState_15();
		bool L_32 = ((SettingsControl_tA8506FCBD7BE51F887211F09160B4C366F85CEB6_StaticFields*)il2cpp_codegen_static_fields_for(SettingsControl_tA8506FCBD7BE51F887211F09160B4C366F85CEB6_il2cpp_TypeInfo_var))->get_SoundState_16();
		if (!((int32_t)((int32_t)((((int32_t)L_31) == ((int32_t)0))? 1 : 0)&(int32_t)L_32)))
		{
			goto IL_01a8;
		}
	}
	{
		// MusicOnImage.enabled=false;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_33 = __this->get_MusicOnImage_11();
		NullCheck(L_33);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_33, (bool)0, /*hidden argument*/NULL);
		// MusicOffImage.enabled=true;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_34 = __this->get_MusicOffImage_12();
		NullCheck(L_34);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_34, (bool)1, /*hidden argument*/NULL);
		// SoundOnImage.enabled=true;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_35 = __this->get_SoundOnImage_13();
		NullCheck(L_35);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_35, (bool)1, /*hidden argument*/NULL);
		// SoundOffImage.enabled=false;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_36 = __this->get_SoundOffImage_14();
		NullCheck(L_36);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_36, (bool)0, /*hidden argument*/NULL);
		// MusicOnButton.gameObject.SetActive(false);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_37 = __this->get_MusicOnButton_7();
		NullCheck(L_37);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_38;
		L_38 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_37, /*hidden argument*/NULL);
		NullCheck(L_38);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_38, (bool)0, /*hidden argument*/NULL);
		// MusicOffButton.gameObject.SetActive(true);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_39 = __this->get_MusicOffButton_8();
		NullCheck(L_39);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_40;
		L_40 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_39, /*hidden argument*/NULL);
		NullCheck(L_40);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_40, (bool)1, /*hidden argument*/NULL);
		// SoundOnButton.gameObject.SetActive(true);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_41 = __this->get_SoundOnButton_9();
		NullCheck(L_41);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_42;
		L_42 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_41, /*hidden argument*/NULL);
		NullCheck(L_42);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_42, (bool)1, /*hidden argument*/NULL);
		// SoundOffButton.gameObject.SetActive(false);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_43 = __this->get_SoundOffButton_10();
		NullCheck(L_43);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_44;
		L_44 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_43, /*hidden argument*/NULL);
		NullCheck(L_44);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_44, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}

IL_01a8:
	{
		// else if (MusicState==false & SoundState==false )
		IL2CPP_RUNTIME_CLASS_INIT(SettingsControl_tA8506FCBD7BE51F887211F09160B4C366F85CEB6_il2cpp_TypeInfo_var);
		bool L_45 = ((SettingsControl_tA8506FCBD7BE51F887211F09160B4C366F85CEB6_StaticFields*)il2cpp_codegen_static_fields_for(SettingsControl_tA8506FCBD7BE51F887211F09160B4C366F85CEB6_il2cpp_TypeInfo_var))->get_MusicState_15();
		bool L_46 = ((SettingsControl_tA8506FCBD7BE51F887211F09160B4C366F85CEB6_StaticFields*)il2cpp_codegen_static_fields_for(SettingsControl_tA8506FCBD7BE51F887211F09160B4C366F85CEB6_il2cpp_TypeInfo_var))->get_SoundState_16();
		if (!((int32_t)((int32_t)((((int32_t)L_45) == ((int32_t)0))? 1 : 0)&(int32_t)((((int32_t)L_46) == ((int32_t)0))? 1 : 0))))
		{
			goto IL_023f;
		}
	}
	{
		// MusicOnImage.enabled=false;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_47 = __this->get_MusicOnImage_11();
		NullCheck(L_47);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_47, (bool)0, /*hidden argument*/NULL);
		// MusicOffImage.enabled=true;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_48 = __this->get_MusicOffImage_12();
		NullCheck(L_48);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_48, (bool)1, /*hidden argument*/NULL);
		// SoundOnImage.enabled=false;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_49 = __this->get_SoundOnImage_13();
		NullCheck(L_49);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_49, (bool)0, /*hidden argument*/NULL);
		// SoundOffImage.enabled=true;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_50 = __this->get_SoundOffImage_14();
		NullCheck(L_50);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_50, (bool)1, /*hidden argument*/NULL);
		// MusicOnButton.gameObject.SetActive(false);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_51 = __this->get_MusicOnButton_7();
		NullCheck(L_51);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_52;
		L_52 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_51, /*hidden argument*/NULL);
		NullCheck(L_52);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_52, (bool)0, /*hidden argument*/NULL);
		// MusicOffButton.gameObject.SetActive(true);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_53 = __this->get_MusicOffButton_8();
		NullCheck(L_53);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_54;
		L_54 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_53, /*hidden argument*/NULL);
		NullCheck(L_54);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_54, (bool)1, /*hidden argument*/NULL);
		// SoundOnButton.gameObject.SetActive(false);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_55 = __this->get_SoundOnButton_9();
		NullCheck(L_55);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_56;
		L_56 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_55, /*hidden argument*/NULL);
		NullCheck(L_56);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_56, (bool)0, /*hidden argument*/NULL);
		// SoundOffButton.gameObject.SetActive(true);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_57 = __this->get_SoundOffButton_10();
		NullCheck(L_57);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_58;
		L_58 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_57, /*hidden argument*/NULL);
		NullCheck(L_58);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_58, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0233:
	{
		// SettingsPanel.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_59 = __this->get_SettingsPanel_4();
		NullCheck(L_59);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_59, (bool)0, /*hidden argument*/NULL);
	}

IL_023f:
	{
		// }
		return;
	}
}
// System.Void SettingsControl::MusicOnButtonFunc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsControl_MusicOnButtonFunc_m9516BF83790F8DE3DAF54E834C8CCD5707064008 (SettingsControl_tA8506FCBD7BE51F887211F09160B4C366F85CEB6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsControl_tA8506FCBD7BE51F887211F09160B4C366F85CEB6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MusicState=false;
		IL2CPP_RUNTIME_CLASS_INIT(SettingsControl_tA8506FCBD7BE51F887211F09160B4C366F85CEB6_il2cpp_TypeInfo_var);
		((SettingsControl_tA8506FCBD7BE51F887211F09160B4C366F85CEB6_StaticFields*)il2cpp_codegen_static_fields_for(SettingsControl_tA8506FCBD7BE51F887211F09160B4C366F85CEB6_il2cpp_TypeInfo_var))->set_MusicState_15((bool)0);
		// MusicOnImage.enabled=false;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_0 = __this->get_MusicOnImage_11();
		NullCheck(L_0);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_0, (bool)0, /*hidden argument*/NULL);
		// MusicOffImage.enabled=true;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_1 = __this->get_MusicOffImage_12();
		NullCheck(L_1);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_1, (bool)1, /*hidden argument*/NULL);
		// MusicOnButton.gameObject.SetActive(false);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_2 = __this->get_MusicOnButton_7();
		NullCheck(L_2);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)0, /*hidden argument*/NULL);
		// MusicOffButton.gameObject.SetActive(true);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_4 = __this->get_MusicOffButton_8();
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_5, (bool)1, /*hidden argument*/NULL);
		// AudioSC.MusicOffAudioController();
		AudioPlayerManager_t3A53F63D4321D80154C3402406E6A2C977996484 * L_6 = __this->get_AudioSC_5();
		NullCheck(L_6);
		AudioPlayerManager_MusicOffAudioController_mA95E9EE6709420D5EEC104D5746D05E7E276D8AE(L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SettingsControl::MusicOffButtonFunc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsControl_MusicOffButtonFunc_mA9CFA67C0342922BC693218231C1C92A41DA6B9C (SettingsControl_tA8506FCBD7BE51F887211F09160B4C366F85CEB6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsControl_tA8506FCBD7BE51F887211F09160B4C366F85CEB6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MusicState=true;
		IL2CPP_RUNTIME_CLASS_INIT(SettingsControl_tA8506FCBD7BE51F887211F09160B4C366F85CEB6_il2cpp_TypeInfo_var);
		((SettingsControl_tA8506FCBD7BE51F887211F09160B4C366F85CEB6_StaticFields*)il2cpp_codegen_static_fields_for(SettingsControl_tA8506FCBD7BE51F887211F09160B4C366F85CEB6_il2cpp_TypeInfo_var))->set_MusicState_15((bool)1);
		// MusicOnImage.enabled=true;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_0 = __this->get_MusicOnImage_11();
		NullCheck(L_0);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_0, (bool)1, /*hidden argument*/NULL);
		// MusicOffImage.enabled=false;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_1 = __this->get_MusicOffImage_12();
		NullCheck(L_1);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_1, (bool)0, /*hidden argument*/NULL);
		// MusicOnButton.gameObject.SetActive(true);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_2 = __this->get_MusicOnButton_7();
		NullCheck(L_2);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)1, /*hidden argument*/NULL);
		// MusicOffButton.gameObject.SetActive(false);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_4 = __this->get_MusicOffButton_8();
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_5, (bool)0, /*hidden argument*/NULL);
		// AudioSC.MusicOnAudioController();
		AudioPlayerManager_t3A53F63D4321D80154C3402406E6A2C977996484 * L_6 = __this->get_AudioSC_5();
		NullCheck(L_6);
		AudioPlayerManager_MusicOnAudioController_m87AEA12B53A63FFA74D23CD5AF84774DFB5697E2(L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SettingsControl::SoundOnButtonFunc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsControl_SoundOnButtonFunc_mB940A6388816979936BA2991AA4DD937A195C43D (SettingsControl_tA8506FCBD7BE51F887211F09160B4C366F85CEB6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsControl_tA8506FCBD7BE51F887211F09160B4C366F85CEB6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SoundState=false;
		IL2CPP_RUNTIME_CLASS_INIT(SettingsControl_tA8506FCBD7BE51F887211F09160B4C366F85CEB6_il2cpp_TypeInfo_var);
		((SettingsControl_tA8506FCBD7BE51F887211F09160B4C366F85CEB6_StaticFields*)il2cpp_codegen_static_fields_for(SettingsControl_tA8506FCBD7BE51F887211F09160B4C366F85CEB6_il2cpp_TypeInfo_var))->set_SoundState_16((bool)0);
		// SoundOnImage.enabled=false;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_0 = __this->get_SoundOnImage_13();
		NullCheck(L_0);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_0, (bool)0, /*hidden argument*/NULL);
		// SoundOffImage.enabled=true;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_1 = __this->get_SoundOffImage_14();
		NullCheck(L_1);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_1, (bool)1, /*hidden argument*/NULL);
		// SoundOnButton.gameObject.SetActive(false);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_2 = __this->get_SoundOnButton_9();
		NullCheck(L_2);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)0, /*hidden argument*/NULL);
		// SoundOffButton.gameObject.SetActive(true);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_4 = __this->get_SoundOffButton_10();
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_5, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SettingsControl::SoundOffButtonFunc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsControl_SoundOffButtonFunc_m07C26805BFC98B234559F11CA2B7800422B77309 (SettingsControl_tA8506FCBD7BE51F887211F09160B4C366F85CEB6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsControl_tA8506FCBD7BE51F887211F09160B4C366F85CEB6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SoundState=true;
		IL2CPP_RUNTIME_CLASS_INIT(SettingsControl_tA8506FCBD7BE51F887211F09160B4C366F85CEB6_il2cpp_TypeInfo_var);
		((SettingsControl_tA8506FCBD7BE51F887211F09160B4C366F85CEB6_StaticFields*)il2cpp_codegen_static_fields_for(SettingsControl_tA8506FCBD7BE51F887211F09160B4C366F85CEB6_il2cpp_TypeInfo_var))->set_SoundState_16((bool)1);
		// SoundOnImage.enabled=true;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_0 = __this->get_SoundOnImage_13();
		NullCheck(L_0);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_0, (bool)1, /*hidden argument*/NULL);
		// SoundOffImage.enabled=false;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_1 = __this->get_SoundOffImage_14();
		NullCheck(L_1);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_1, (bool)0, /*hidden argument*/NULL);
		// SoundOnButton.gameObject.SetActive(true);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_2 = __this->get_SoundOnButton_9();
		NullCheck(L_2);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)1, /*hidden argument*/NULL);
		// SoundOffButton.gameObject.SetActive(false);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_4 = __this->get_SoundOffButton_10();
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_5, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SettingsControl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsControl__ctor_m6CE73BFD94AB1F1552CA6328F25699EAF27C6211 (SettingsControl_tA8506FCBD7BE51F887211F09160B4C366F85CEB6 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SettingsControl::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsControl__cctor_m9332ACBFE5B3ADD3D1F60C60E5C67523F311C68A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsControl_tA8506FCBD7BE51F887211F09160B4C366F85CEB6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool MusicState=true;
		((SettingsControl_tA8506FCBD7BE51F887211F09160B4C366F85CEB6_StaticFields*)il2cpp_codegen_static_fields_for(SettingsControl_tA8506FCBD7BE51F887211F09160B4C366F85CEB6_il2cpp_TypeInfo_var))->set_MusicState_15((bool)1);
		// public static bool SoundState=true;
		((SettingsControl_tA8506FCBD7BE51F887211F09160B4C366F85CEB6_StaticFields*)il2cpp_codegen_static_fields_for(SettingsControl_tA8506FCBD7BE51F887211F09160B4C366F85CEB6_il2cpp_TypeInfo_var))->set_SoundState_16((bool)1);
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisenemyHealthSystem1_t9D32045CB414C7BF3B895294B1044F2D9FFA0029_m5B396305C939F2D2FB91382E777713431F8E03C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1387CA5E3672B0B088B1C7438E3CB9614FEF2011);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4296EB386A58202EDFBE523C04BCA31DC7A0BE2F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F24FB9F6B79BD601755A6710686857F7B86347B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&enemyPathMovement_t2A082E51F0F47B4E09CD70F138BEF58C105BD216_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B2_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B5_0 = NULL;
	String_t* G_B4_0 = NULL;
	{
		// print("" + Target);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_Target_5();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000d;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		goto IL_0012;
	}

IL_000d:
	{
		NullCheck(G_B2_0);
		String_t* L_2;
		L_2 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B2_0);
		G_B3_0 = L_2;
	}

IL_0012:
	{
		String_t* L_3 = G_B3_0;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_001b;
		}
	}
	{
		G_B5_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_001b:
	{
		MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(G_B5_0, /*hidden argument*/NULL);
		// animator.SetBool("attack", attackStatus);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_4 = __this->get_animator_6();
		bool L_5 = __this->get_attackStatus_10();
		NullCheck(L_4);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_4, _stringLiteral1387CA5E3672B0B088B1C7438E3CB9614FEF2011, L_5, /*hidden argument*/NULL);
		// attackStatus = false;
		__this->set_attackStatus_10((bool)0);
		// if (!agent.hasPath)
		NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * L_6 = __this->get_agent_4();
		NullCheck(L_6);
		bool L_7;
		L_7 = NavMeshAgent_get_hasPath_m0FD535ACA98272F1C5082C7EE600ECCB66F044CB(L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0078;
		}
	}
	{
		// agent.SetDestination(enemyPathMovement.Instance.GetRandomPoint());
		NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * L_8 = __this->get_agent_4();
		enemyPathMovement_t2A082E51F0F47B4E09CD70F138BEF58C105BD216 * L_9 = ((enemyPathMovement_t2A082E51F0F47B4E09CD70F138BEF58C105BD216_StaticFields*)il2cpp_codegen_static_fields_for(enemyPathMovement_t2A082E51F0F47B4E09CD70F138BEF58C105BD216_il2cpp_TypeInfo_var))->get_Instance_4();
		NullCheck(L_9);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = enemyPathMovement_GetRandomPoint_m3147C4277C2F26076E374C37EC4EF33557D5498B(L_9, (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)NULL, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = NavMeshAgent_SetDestination_m244EFBCDB717576303DA711EE39572B865F43747(L_8, L_10, /*hidden argument*/NULL);
		// animator.SetBool("run", true);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_12 = __this->get_animator_6();
		NullCheck(L_12);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_12, _stringLiteral9F24FB9F6B79BD601755A6710686857F7B86347B, (bool)1, /*hidden argument*/NULL);
		// }else if(Target != null || !Target.GetComponent<enemyHealthSystem1>().IsDead())
		return;
	}

IL_0078:
	{
		// }else if(Target != null || !Target.GetComponent<enemyHealthSystem1>().IsDead())
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = __this->get_Target_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_13, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_14)
		{
			goto IL_009b;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = __this->get_Target_5();
		NullCheck(L_15);
		enemyHealthSystem1_t9D32045CB414C7BF3B895294B1044F2D9FFA0029 * L_16;
		L_16 = GameObject_GetComponent_TisenemyHealthSystem1_t9D32045CB414C7BF3B895294B1044F2D9FFA0029_m5B396305C939F2D2FB91382E777713431F8E03C4(L_15, /*hidden argument*/GameObject_GetComponent_TisenemyHealthSystem1_t9D32045CB414C7BF3B895294B1044F2D9FFA0029_m5B396305C939F2D2FB91382E777713431F8E03C4_RuntimeMethod_var);
		NullCheck(L_16);
		bool L_17;
		L_17 = enemyHealthSystem1_IsDead_m37C895C0826251CDC7AA7D37CD1EAC5BF7409A7D(L_16, /*hidden argument*/NULL);
		if (L_17)
		{
			goto IL_01fd;
		}
	}

IL_009b:
	{
		// if (AttackCooldown)
		bool L_18 = __this->get_AttackCooldown_9();
		if (!L_18)
		{
			goto IL_01eb;
		}
	}
	{
		// agent.SetDestination(Target.transform.position);
		NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * L_19 = __this->get_agent_4();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20 = __this->get_Target_5();
		NullCheck(L_20);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21;
		L_21 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_20, /*hidden argument*/NULL);
		NullCheck(L_21);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		L_22 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_21, /*hidden argument*/NULL);
		NullCheck(L_19);
		bool L_23;
		L_23 = NavMeshAgent_SetDestination_m244EFBCDB717576303DA711EE39572B865F43747(L_19, L_22, /*hidden argument*/NULL);
		// transform.LookAt(Target.transform.position);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24;
		L_24 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25 = __this->get_Target_5();
		NullCheck(L_25);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_26;
		L_26 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_25, /*hidden argument*/NULL);
		NullCheck(L_26);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
		L_27 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_26, /*hidden argument*/NULL);
		NullCheck(L_24);
		Transform_LookAt_m996FADE2327B0A4412FF4A5179B8BABD9EB849BA(L_24, L_27, /*hidden argument*/NULL);
		// DefaultSkill.transform.position = new Vector3(transform.position.x, transform.position.y + 1, transform.position.z);
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_28 = __this->get_DefaultSkill_7();
		NullCheck(L_28);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_29;
		L_29 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_28, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_30;
		L_30 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_30);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31;
		L_31 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_30, /*hidden argument*/NULL);
		float L_32 = L_31.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_33;
		L_33 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_33);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34;
		L_34 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_33, /*hidden argument*/NULL);
		float L_35 = L_34.get_y_3();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_36;
		L_36 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_36);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37;
		L_37 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_36, /*hidden argument*/NULL);
		float L_38 = L_37.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_39;
		memset((&L_39), 0, sizeof(L_39));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_39), L_32, ((float)il2cpp_codegen_add((float)L_35, (float)(1.0f))), L_38, /*hidden argument*/NULL);
		NullCheck(L_29);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_29, L_39, /*hidden argument*/NULL);
		// DefaultSkill.transform.position += 1.25f * transform.forward;   //at�lan skill kendi collider �na �arp�yor diye
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_40 = __this->get_DefaultSkill_7();
		NullCheck(L_40);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_41;
		L_41 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_40, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_42 = L_41;
		NullCheck(L_42);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_43;
		L_43 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_42, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_44;
		L_44 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_44);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_45;
		L_45 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_44, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_46;
		L_46 = Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline((1.25f), L_45, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_47;
		L_47 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_43, L_46, /*hidden argument*/NULL);
		NullCheck(L_42);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_42, L_47, /*hidden argument*/NULL);
		// DefaultSkill.transform.localScale = new Vector3(4, 2, 4);
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_48 = __this->get_DefaultSkill_7();
		NullCheck(L_48);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_49;
		L_49 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_48, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_50;
		memset((&L_50), 0, sizeof(L_50));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_50), (4.0f), (2.0f), (4.0f), /*hidden argument*/NULL);
		NullCheck(L_49);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_49, L_50, /*hidden argument*/NULL);
		// DefaultSkill.transform.rotation = Quaternion.Euler(transform.localEulerAngles.x, transform.localEulerAngles.y, transform.localEulerAngles.z);
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_51 = __this->get_DefaultSkill_7();
		NullCheck(L_51);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_52;
		L_52 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_51, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_53;
		L_53 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_53);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_54;
		L_54 = Transform_get_localEulerAngles_m4C442107F523737ADAB54855FDC1777A9B71D545(L_53, /*hidden argument*/NULL);
		float L_55 = L_54.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_56;
		L_56 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_56);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_57;
		L_57 = Transform_get_localEulerAngles_m4C442107F523737ADAB54855FDC1777A9B71D545(L_56, /*hidden argument*/NULL);
		float L_58 = L_57.get_y_3();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_59;
		L_59 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_59);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_60;
		L_60 = Transform_get_localEulerAngles_m4C442107F523737ADAB54855FDC1777A9B71D545(L_59, /*hidden argument*/NULL);
		float L_61 = L_60.get_z_4();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_62;
		L_62 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3(L_55, L_58, L_61, /*hidden argument*/NULL);
		NullCheck(L_52);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_52, L_62, /*hidden argument*/NULL);
		// DefaultSkill.Play();
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_63 = __this->get_DefaultSkill_7();
		NullCheck(L_63);
		ParticleSystem_Play_m28D27CC4CDC1D93195C75647E6F6DAECF8B6BC50(L_63, /*hidden argument*/NULL);
		// attackStatus = true;
		__this->set_attackStatus_10((bool)1);
		// AttackCooldown = false;
		__this->set_AttackCooldown_9((bool)0);
		// Invoke("ResetCooldown", coolDownConstant);
		float L_64 = __this->get_coolDownConstant_8();
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteral4296EB386A58202EDFBE523C04BCA31DC7A0BE2F, L_64, /*hidden argument*/NULL);
	}

IL_01eb:
	{
		// animator.SetBool("run", true);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_65 = __this->get_animator_6();
		NullCheck(L_65);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_65, _stringLiteral9F24FB9F6B79BD601755A6710686857F7B86347B, (bool)1, /*hidden argument*/NULL);
		// }else
		return;
	}

IL_01fd:
	{
		// animator.SetBool("run", false);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_66 = __this->get_animator_6();
		NullCheck(L_66);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_66, _stringLiteral9F24FB9F6B79BD601755A6710686857F7B86347B, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ai::ResetCooldown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ai_ResetCooldown_m2D460B4671F376F967A2886530ABD4570BCDB8F0 (ai_t05DCF615948AD04F90BBCFF646B8389E83581B71 * __this, const RuntimeMethod* method)
{
	{
		// AttackCooldown = true;
		__this->set_AttackCooldown_9((bool)1);
		// }
		return;
	}
}
// System.Void ai::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ai__ctor_m104A4608CD0A7DBD89850B967DFF40E9EDD24354 (ai_t05DCF615948AD04F90BBCFF646B8389E83581B71 * __this, const RuntimeMethod* method)
{
	{
		// private float coolDownConstant = 3f;
		__this->set_coolDownConstant_8((3.0f));
		// private bool AttackCooldown = true;
		__this->set_AttackCooldown_9((bool)1);
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
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_0 = __this->get_attackButton_12();
		NullCheck(L_0);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_1;
		L_1 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_0, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_2 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_2, __this, (intptr_t)((intptr_t)attack_Attack_m823084A7450D21C8D31F17596E980DBE08A2BC68_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_1);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_1, L_2, /*hidden argument*/NULL);
		// fireAttackButton.onClick.AddListener(fireAttackSelect);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_3 = __this->get_fireAttackButton_13();
		NullCheck(L_3);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_4;
		L_4 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_3, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_5 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_5, __this, (intptr_t)((intptr_t)attack_fireAttackSelect_mBC35489D6ECB95A5CA6FF686220C89E152DEEB14_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_4);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_4, L_5, /*hidden argument*/NULL);
		// waterAttackButton.onClick.AddListener(waterAttackSelect);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_6 = __this->get_waterAttackButton_14();
		NullCheck(L_6);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_7;
		L_7 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_6, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_8 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_8, __this, (intptr_t)((intptr_t)attack_waterAttackSelect_m6D27D566747B0B77457DFF440DDE2B909232CA49_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_7);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_7, L_8, /*hidden argument*/NULL);
		// lightningAttackButton.onClick.AddListener(lightningAttackSelect);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_9 = __this->get_lightningAttackButton_15();
		NullCheck(L_9);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_10;
		L_10 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_9, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_11 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_11, __this, (intptr_t)((intptr_t)attack_lightningAttackSelect_m56E141B947223BA517897DACA8714152A8DA3603_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_10);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_10, L_11, /*hidden argument*/NULL);
		// SkillSelectionPanel.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = __this->get_SkillSelectionPanel_16();
		NullCheck(L_12);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_12, (bool)0, /*hidden argument*/NULL);
		// FireBall.Stop();
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_13 = __this->get_FireBall_7();
		NullCheck(L_13);
		ParticleSystem_Stop_m8CBF9268DE7B5A40952B4977462B857B5F5AFB9D(L_13, /*hidden argument*/NULL);
		// WaterBall.Stop();
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_14 = __this->get_WaterBall_8();
		NullCheck(L_14);
		ParticleSystem_Stop_m8CBF9268DE7B5A40952B4977462B857B5F5AFB9D(L_14, /*hidden argument*/NULL);
		// LightningBall.Stop();
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_15 = __this->get_LightningBall_9();
		NullCheck(L_15);
		ParticleSystem_Stop_m8CBF9268DE7B5A40952B4977462B857B5F5AFB9D(L_15, /*hidden argument*/NULL);
		// DefaultBall.Stop();
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_16 = __this->get_DefaultBall_6();
		NullCheck(L_16);
		ParticleSystem_Stop_m8CBF9268DE7B5A40952B4977462B857B5F5AFB9D(L_16, /*hidden argument*/NULL);
		// AttackSelectionIndex = 0; //default skill
		__this->set_AttackSelectionIndex_23(0);
		// }
		return;
	}
}
// System.Void attack::lightningAttackSelect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void attack_lightningAttackSelect_m56E141B947223BA517897DACA8714152A8DA3603 (attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C * __this, const RuntimeMethod* method)
{
	{
		// AttackSelectionIndex = 3;
		__this->set_AttackSelectionIndex_23(3);
		// SkillSelectionPanel.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_SkillSelectionPanel_16();
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
		// AttackSelectionIndex = 2;
		__this->set_AttackSelectionIndex_23(2);
		// SkillSelectionPanel.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_SkillSelectionPanel_16();
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
		// AttackSelectionIndex = 1;
		__this->set_AttackSelectionIndex_23(1);
		// SkillSelectionPanel.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_SkillSelectionPanel_16();
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
		bool L_1 = __this->get_attackStatus_17();
		NullCheck(L_0);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_0, _stringLiteral1387CA5E3672B0B088B1C7438E3CB9614FEF2011, L_1, /*hidden argument*/NULL);
		// attackStatus = false;
		__this->set_attackStatus_17((bool)0);
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
		bool L_0 = __this->get_AttackCooldown_18();
		if (L_0)
		{
			goto IL_054b;
		}
	}
	{
		// SkillSelectionPanel.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_SkillSelectionPanel_16();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)1, /*hidden argument*/NULL);
		// attackStatus = true;
		__this->set_attackStatus_17((bool)1);
		// switch(AttackSelectionIndex)
		int32_t L_2 = __this->get_AttackSelectionIndex_23();
		V_0 = L_2;
		int32_t L_3 = V_0;
		switch (L_3)
		{
			case 0:
			{
				goto IL_0044;
			}
			case 1:
			{
				goto IL_0138;
			}
			case 2:
			{
				goto IL_022c;
			}
			case 3:
			{
				goto IL_0320;
			}
			case 4:
			{
				goto IL_0414;
			}
		}
	}
	{
		goto IL_0506;
	}

IL_0044:
	{
		// DefaultBall.transform.position = new Vector3(transform.position.x, transform.position.y+1, transform.position.z);
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_4 = __this->get_DefaultBall_6();
		NullCheck(L_4);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_4, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_6, /*hidden argument*/NULL);
		float L_8 = L_7.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_9, /*hidden argument*/NULL);
		float L_11 = L_10.get_y_3();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_12, /*hidden argument*/NULL);
		float L_14 = L_13.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_15), L_8, ((float)il2cpp_codegen_add((float)L_11, (float)(1.0f))), L_14, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_5, L_15, /*hidden argument*/NULL);
		// DefaultBall.transform.position += 1.2f * transform.forward;   //collider carpmaması icin offset
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_16 = __this->get_DefaultBall_6();
		NullCheck(L_16);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
		L_17 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_16, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18 = L_17;
		NullCheck(L_18);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_18, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20;
		L_20 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_20);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_20, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		L_22 = Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline((1.20000005f), L_21, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_19, L_22, /*hidden argument*/NULL);
		NullCheck(L_18);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_18, L_23, /*hidden argument*/NULL);
		// DefaultBall.transform.localScale = new Vector3(2,2,2);
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_24 = __this->get_DefaultBall_6();
		NullCheck(L_24);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25;
		L_25 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_24, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		memset((&L_26), 0, sizeof(L_26));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_26), (2.0f), (2.0f), (2.0f), /*hidden argument*/NULL);
		NullCheck(L_25);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_25, L_26, /*hidden argument*/NULL);
		// DefaultBall.transform.rotation = Quaternion.Euler(transform.localEulerAngles.x,transform.localEulerAngles.y,transform.localEulerAngles.z);
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_27 = __this->get_DefaultBall_6();
		NullCheck(L_27);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_28;
		L_28 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_27, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_29;
		L_29 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_29);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30;
		L_30 = Transform_get_localEulerAngles_m4C442107F523737ADAB54855FDC1777A9B71D545(L_29, /*hidden argument*/NULL);
		float L_31 = L_30.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_32;
		L_32 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_32);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33;
		L_33 = Transform_get_localEulerAngles_m4C442107F523737ADAB54855FDC1777A9B71D545(L_32, /*hidden argument*/NULL);
		float L_34 = L_33.get_y_3();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_35;
		L_35 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_35);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36;
		L_36 = Transform_get_localEulerAngles_m4C442107F523737ADAB54855FDC1777A9B71D545(L_35, /*hidden argument*/NULL);
		float L_37 = L_36.get_z_4();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_38;
		L_38 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3(L_31, L_34, L_37, /*hidden argument*/NULL);
		NullCheck(L_28);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_28, L_38, /*hidden argument*/NULL);
		// DefaultBall.Play();
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_39 = __this->get_DefaultBall_6();
		NullCheck(L_39);
		ParticleSystem_Play_m28D27CC4CDC1D93195C75647E6F6DAECF8B6BC50(L_39, /*hidden argument*/NULL);
		// break;
		goto IL_0506;
	}

IL_0138:
	{
		// FireBall.transform.position = new Vector3(transform.position.x, transform.position.y+1, transform.position.z);
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_40 = __this->get_FireBall_7();
		NullCheck(L_40);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_41;
		L_41 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_40, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_42;
		L_42 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_42);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_43;
		L_43 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_42, /*hidden argument*/NULL);
		float L_44 = L_43.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_45;
		L_45 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_45);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_46;
		L_46 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_45, /*hidden argument*/NULL);
		float L_47 = L_46.get_y_3();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_48;
		L_48 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_48);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_49;
		L_49 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_48, /*hidden argument*/NULL);
		float L_50 = L_49.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_51;
		memset((&L_51), 0, sizeof(L_51));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_51), L_44, ((float)il2cpp_codegen_add((float)L_47, (float)(1.0f))), L_50, /*hidden argument*/NULL);
		NullCheck(L_41);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_41, L_51, /*hidden argument*/NULL);
		// FireBall.transform.position += 1.2f * transform.forward;   //collider carpmaması icin offset
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_52 = __this->get_FireBall_7();
		NullCheck(L_52);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_53;
		L_53 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_52, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_54 = L_53;
		NullCheck(L_54);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_55;
		L_55 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_54, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_56;
		L_56 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_56);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_57;
		L_57 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_56, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_58;
		L_58 = Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline((1.20000005f), L_57, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_59;
		L_59 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_55, L_58, /*hidden argument*/NULL);
		NullCheck(L_54);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_54, L_59, /*hidden argument*/NULL);
		// FireBall.transform.localScale = new Vector3(3,2,3);
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_60 = __this->get_FireBall_7();
		NullCheck(L_60);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_61;
		L_61 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_60, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_62;
		memset((&L_62), 0, sizeof(L_62));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_62), (3.0f), (2.0f), (3.0f), /*hidden argument*/NULL);
		NullCheck(L_61);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_61, L_62, /*hidden argument*/NULL);
		// FireBall.transform.rotation = Quaternion.Euler(transform.localEulerAngles.x,transform.localEulerAngles.y,transform.localEulerAngles.z);
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_63 = __this->get_FireBall_7();
		NullCheck(L_63);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_64;
		L_64 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_63, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_65;
		L_65 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_65);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_66;
		L_66 = Transform_get_localEulerAngles_m4C442107F523737ADAB54855FDC1777A9B71D545(L_65, /*hidden argument*/NULL);
		float L_67 = L_66.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_68;
		L_68 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_68);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_69;
		L_69 = Transform_get_localEulerAngles_m4C442107F523737ADAB54855FDC1777A9B71D545(L_68, /*hidden argument*/NULL);
		float L_70 = L_69.get_y_3();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_71;
		L_71 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_71);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_72;
		L_72 = Transform_get_localEulerAngles_m4C442107F523737ADAB54855FDC1777A9B71D545(L_71, /*hidden argument*/NULL);
		float L_73 = L_72.get_z_4();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_74;
		L_74 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3(L_67, L_70, L_73, /*hidden argument*/NULL);
		NullCheck(L_64);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_64, L_74, /*hidden argument*/NULL);
		// FireBall.Play();
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_75 = __this->get_FireBall_7();
		NullCheck(L_75);
		ParticleSystem_Play_m28D27CC4CDC1D93195C75647E6F6DAECF8B6BC50(L_75, /*hidden argument*/NULL);
		// break;
		goto IL_0506;
	}

IL_022c:
	{
		// WaterBall.transform.position = new Vector3(transform.position.x, transform.position.y+1, transform.position.z);
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_76 = __this->get_WaterBall_8();
		NullCheck(L_76);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_77;
		L_77 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_76, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_78;
		L_78 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_78);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_79;
		L_79 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_78, /*hidden argument*/NULL);
		float L_80 = L_79.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_81;
		L_81 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_81);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_82;
		L_82 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_81, /*hidden argument*/NULL);
		float L_83 = L_82.get_y_3();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_84;
		L_84 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_84);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_85;
		L_85 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_84, /*hidden argument*/NULL);
		float L_86 = L_85.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_87;
		memset((&L_87), 0, sizeof(L_87));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_87), L_80, ((float)il2cpp_codegen_add((float)L_83, (float)(1.0f))), L_86, /*hidden argument*/NULL);
		NullCheck(L_77);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_77, L_87, /*hidden argument*/NULL);
		// WaterBall.transform.position += 1.2f * transform.forward;   //collider carpmaması icin offset
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_88 = __this->get_WaterBall_8();
		NullCheck(L_88);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_89;
		L_89 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_88, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_90 = L_89;
		NullCheck(L_90);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_91;
		L_91 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_90, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_92;
		L_92 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_92);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_93;
		L_93 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_92, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_94;
		L_94 = Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline((1.20000005f), L_93, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_95;
		L_95 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_91, L_94, /*hidden argument*/NULL);
		NullCheck(L_90);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_90, L_95, /*hidden argument*/NULL);
		// WaterBall.transform.localScale = new Vector3(3,2,3);
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_96 = __this->get_WaterBall_8();
		NullCheck(L_96);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_97;
		L_97 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_96, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_98;
		memset((&L_98), 0, sizeof(L_98));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_98), (3.0f), (2.0f), (3.0f), /*hidden argument*/NULL);
		NullCheck(L_97);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_97, L_98, /*hidden argument*/NULL);
		// WaterBall.transform.rotation = Quaternion.Euler(transform.localEulerAngles.x,transform.localEulerAngles.y,transform.localEulerAngles.z);
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_99 = __this->get_WaterBall_8();
		NullCheck(L_99);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_100;
		L_100 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_99, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_101;
		L_101 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_101);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_102;
		L_102 = Transform_get_localEulerAngles_m4C442107F523737ADAB54855FDC1777A9B71D545(L_101, /*hidden argument*/NULL);
		float L_103 = L_102.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_104;
		L_104 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_104);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_105;
		L_105 = Transform_get_localEulerAngles_m4C442107F523737ADAB54855FDC1777A9B71D545(L_104, /*hidden argument*/NULL);
		float L_106 = L_105.get_y_3();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_107;
		L_107 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_107);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_108;
		L_108 = Transform_get_localEulerAngles_m4C442107F523737ADAB54855FDC1777A9B71D545(L_107, /*hidden argument*/NULL);
		float L_109 = L_108.get_z_4();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_110;
		L_110 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3(L_103, L_106, L_109, /*hidden argument*/NULL);
		NullCheck(L_100);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_100, L_110, /*hidden argument*/NULL);
		// WaterBall.Play();
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_111 = __this->get_WaterBall_8();
		NullCheck(L_111);
		ParticleSystem_Play_m28D27CC4CDC1D93195C75647E6F6DAECF8B6BC50(L_111, /*hidden argument*/NULL);
		// break;
		goto IL_0506;
	}

IL_0320:
	{
		// LightningBall.transform.position = new Vector3(transform.position.x, transform.position.y+1, transform.position.z);
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_112 = __this->get_LightningBall_9();
		NullCheck(L_112);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_113;
		L_113 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_112, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_114;
		L_114 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_114);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_115;
		L_115 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_114, /*hidden argument*/NULL);
		float L_116 = L_115.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_117;
		L_117 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_117);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_118;
		L_118 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_117, /*hidden argument*/NULL);
		float L_119 = L_118.get_y_3();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_120;
		L_120 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_120);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_121;
		L_121 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_120, /*hidden argument*/NULL);
		float L_122 = L_121.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_123;
		memset((&L_123), 0, sizeof(L_123));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_123), L_116, ((float)il2cpp_codegen_add((float)L_119, (float)(1.0f))), L_122, /*hidden argument*/NULL);
		NullCheck(L_113);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_113, L_123, /*hidden argument*/NULL);
		// LightningBall.transform.position += 1.2f * transform.forward;   //collider carpmaması icin offset
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_124 = __this->get_LightningBall_9();
		NullCheck(L_124);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_125;
		L_125 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_124, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_126 = L_125;
		NullCheck(L_126);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_127;
		L_127 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_126, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_128;
		L_128 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_128);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_129;
		L_129 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_128, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_130;
		L_130 = Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline((1.20000005f), L_129, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_131;
		L_131 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_127, L_130, /*hidden argument*/NULL);
		NullCheck(L_126);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_126, L_131, /*hidden argument*/NULL);
		// LightningBall.transform.localScale = new Vector3(3,2,3);
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_132 = __this->get_LightningBall_9();
		NullCheck(L_132);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_133;
		L_133 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_132, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_134;
		memset((&L_134), 0, sizeof(L_134));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_134), (3.0f), (2.0f), (3.0f), /*hidden argument*/NULL);
		NullCheck(L_133);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_133, L_134, /*hidden argument*/NULL);
		// LightningBall.transform.rotation = Quaternion.Euler(transform.localEulerAngles.x,transform.localEulerAngles.y,transform.localEulerAngles.z);
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_135 = __this->get_LightningBall_9();
		NullCheck(L_135);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_136;
		L_136 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_135, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_137;
		L_137 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_137);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_138;
		L_138 = Transform_get_localEulerAngles_m4C442107F523737ADAB54855FDC1777A9B71D545(L_137, /*hidden argument*/NULL);
		float L_139 = L_138.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_140;
		L_140 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_140);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_141;
		L_141 = Transform_get_localEulerAngles_m4C442107F523737ADAB54855FDC1777A9B71D545(L_140, /*hidden argument*/NULL);
		float L_142 = L_141.get_y_3();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_143;
		L_143 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_143);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_144;
		L_144 = Transform_get_localEulerAngles_m4C442107F523737ADAB54855FDC1777A9B71D545(L_143, /*hidden argument*/NULL);
		float L_145 = L_144.get_z_4();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_146;
		L_146 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3(L_139, L_142, L_145, /*hidden argument*/NULL);
		NullCheck(L_136);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_136, L_146, /*hidden argument*/NULL);
		// LightningBall.Play();
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_147 = __this->get_LightningBall_9();
		NullCheck(L_147);
		ParticleSystem_Play_m28D27CC4CDC1D93195C75647E6F6DAECF8B6BC50(L_147, /*hidden argument*/NULL);
		// break;
		goto IL_0506;
	}

IL_0414:
	{
		// TornadoObject.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_148 = __this->get_TornadoObject_11();
		NullCheck(L_148);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_148, (bool)1, /*hidden argument*/NULL);
		// TornadoRotationCek =new Vector3(0,0,0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_149;
		memset((&L_149), 0, sizeof(L_149));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_149), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		((attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C_StaticFields*)il2cpp_codegen_static_fields_for(attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C_il2cpp_TypeInfo_var))->set_TornadoRotationCek_24(L_149);
		// TornadoRotationCek.x=this.transform.localRotation.eulerAngles.y;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_150;
		L_150 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_150);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_151;
		L_151 = Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5(L_150, /*hidden argument*/NULL);
		V_1 = L_151;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_152;
		L_152 = Quaternion_get_eulerAngles_m3DA616CAD670235A407E8A7A75925AA8E22338C3((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&V_1), /*hidden argument*/NULL);
		float L_153 = L_152.get_y_3();
		(((attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C_StaticFields*)il2cpp_codegen_static_fields_for(attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C_il2cpp_TypeInfo_var))->get_address_of_TornadoRotationCek_24())->set_x_2(L_153);
		// Tornado.transform.position = new Vector3(this.transform.position.x, this.transform.position.y+1, this.transform.position.z);
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_154 = __this->get_Tornado_10();
		NullCheck(L_154);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_155;
		L_155 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_154, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_156;
		L_156 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_156);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_157;
		L_157 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_156, /*hidden argument*/NULL);
		float L_158 = L_157.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_159;
		L_159 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_159);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_160;
		L_160 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_159, /*hidden argument*/NULL);
		float L_161 = L_160.get_y_3();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_162;
		L_162 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_162);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_163;
		L_163 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_162, /*hidden argument*/NULL);
		float L_164 = L_163.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_165;
		memset((&L_165), 0, sizeof(L_165));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_165), L_158, ((float)il2cpp_codegen_add((float)L_161, (float)(1.0f))), L_164, /*hidden argument*/NULL);
		NullCheck(L_155);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_155, L_165, /*hidden argument*/NULL);
		// Tornado.transform.position += 2 * transform.forward;
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_166 = __this->get_Tornado_10();
		NullCheck(L_166);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_167;
		L_167 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_166, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_168 = L_167;
		NullCheck(L_168);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_169;
		L_169 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_168, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_170;
		L_170 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_170);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_171;
		L_171 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_170, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_172;
		L_172 = Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline((2.0f), L_171, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_173;
		L_173 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_169, L_172, /*hidden argument*/NULL);
		NullCheck(L_168);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_168, L_173, /*hidden argument*/NULL);
		// Tornado.Play();
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_174 = __this->get_Tornado_10();
		NullCheck(L_174);
		ParticleSystem_Play_m28D27CC4CDC1D93195C75647E6F6DAECF8B6BC50(L_174, /*hidden argument*/NULL);
		// InvokeRepeating("TornadoMove",0f,0.01f);
		MonoBehaviour_InvokeRepeating_mB77F4276826FBA696A150831D190875CB5802C70(__this, _stringLiteral495E264280E5C14253E511400B9ADE0D2C40FE9A, (0.0f), (0.00999999978f), /*hidden argument*/NULL);
		// Invoke("cancelTornado",3f);
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteralFC0F1FE2DF85BDF608A021C026FA6E7DCF8B1CA5, (3.0f), /*hidden argument*/NULL);
	}

IL_0506:
	{
		// Invoke("ResetCooldown",coolDownConstant);
		float L_175 = __this->get_coolDownConstant_20();
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteral4296EB386A58202EDFBE523C04BCA31DC7A0BE2F, L_175, /*hidden argument*/NULL);
		// InvokeRepeating("CoolDownText",0.0f,0.1f);
		MonoBehaviour_InvokeRepeating_mB77F4276826FBA696A150831D190875CB5802C70(__this, _stringLiteralF3AF3FBC14A12B1EDB016F449A57F0090BF81D2A, (0.0f), (0.100000001f), /*hidden argument*/NULL);
		// AttackCooldown=true;
		__this->set_AttackCooldown_18((bool)1);
		// attackButton.interactable=false;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_176 = __this->get_attackButton_12();
		NullCheck(L_176);
		Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40(L_176, (bool)0, /*hidden argument*/NULL);
		// timeLeftCD=coolDownConstant;
		float L_177 = __this->get_coolDownConstant_20();
		__this->set_timeLeftCD_21(L_177);
	}

IL_054b:
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
		__this->set_AttackCooldown_18((bool)0);
		// attackButton.interactable=true;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_0 = __this->get_attackButton_12();
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
		float L_0 = __this->get_timeLeftCD_21();
		__this->set_timeLeftCD_21(((float)il2cpp_codegen_subtract((float)L_0, (float)(0.100000001f))));
		// timeLeftrounded=System.Math.Round(timeLeftCD,2);
		float L_1 = __this->get_timeLeftCD_21();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_2;
		L_2 = Math_Round_m394EEE2C796B3A1578E65037E0D57B3D6F9B1C70(((double)((double)L_1)), 2, /*hidden argument*/NULL);
		__this->set_timeLeftrounded_22(L_2);
		// coolDownText.text=(timeLeftrounded).ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_3 = __this->get_coolDownText_19();
		double* L_4 = __this->get_address_of_timeLeftrounded_22();
		String_t* L_5;
		L_5 = Double_ToString_m87E4A4DC004A167CF0AE1F2D271BC20A708CE57D((double*)L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_5);
		// if(timeLeftCD<=0)
		float L_6 = __this->get_timeLeftCD_21();
		if ((!(((float)L_6) <= ((float)(0.0f)))))
		{
			goto IL_006e;
		}
	}
	{
		// CancelInvoke("CoolDownText");
		MonoBehaviour_CancelInvoke_mAD4E486A74AF79DC1AFA880691EF839CDDE630A9(__this, _stringLiteralF3AF3FBC14A12B1EDB016F449A57F0090BF81D2A, /*hidden argument*/NULL);
		// timeLeftCD=0.0f;
		__this->set_timeLeftCD_21((0.0f));
		// coolDownText.text=" ";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_7 = __this->get_coolDownText_19();
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
		// TornadoObject.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_TornadoObject_11();
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
		// print(TornadoRotationCek.x);
		float L_0 = (((attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C_StaticFields*)il2cpp_codegen_static_fields_for(attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C_il2cpp_TypeInfo_var))->get_address_of_TornadoRotationCek_24())->get_x_2();
		float L_1 = L_0;
		RuntimeObject * L_2 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_1);
		MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(L_2, /*hidden argument*/NULL);
		// TornadoAddingVector=new Vector3(1f,0,1f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_3), (1.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		__this->set_TornadoAddingVector_25(L_3);
		// TornadoAddingVector.x=TornadoAddingVector.x*Mathf.Sin((TornadoRotationCek.x*Mathf.PI)/180);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_4 = __this->get_address_of_TornadoAddingVector_25();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_5 = __this->get_address_of_TornadoAddingVector_25();
		float L_6 = L_5->get_x_2();
		float L_7 = (((attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C_StaticFields*)il2cpp_codegen_static_fields_for(attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C_il2cpp_TypeInfo_var))->get_address_of_TornadoRotationCek_24())->get_x_2();
		float L_8;
		L_8 = sinf(((float)((float)((float)il2cpp_codegen_multiply((float)L_7, (float)(3.14159274f)))/(float)(180.0f))));
		L_4->set_x_2(((float)il2cpp_codegen_multiply((float)L_6, (float)L_8)));
		// TornadoAddingVector.z=TornadoAddingVector.z*Mathf.Cos((TornadoRotationCek.x*Mathf.PI)/180);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_9 = __this->get_address_of_TornadoAddingVector_25();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_10 = __this->get_address_of_TornadoAddingVector_25();
		float L_11 = L_10->get_z_4();
		float L_12 = (((attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C_StaticFields*)il2cpp_codegen_static_fields_for(attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C_il2cpp_TypeInfo_var))->get_address_of_TornadoRotationCek_24())->get_x_2();
		float L_13;
		L_13 = cosf(((float)((float)((float)il2cpp_codegen_multiply((float)L_12, (float)(3.14159274f)))/(float)(180.0f))));
		L_9->set_z_4(((float)il2cpp_codegen_multiply((float)L_11, (float)L_13)));
		// print(Mathf.Sin((TornadoRotationCek.x*Mathf.PI)/180));
		float L_14 = (((attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C_StaticFields*)il2cpp_codegen_static_fields_for(attack_tAA8111D4CC7AC1BBCA97265CCF162AAC1F86E94C_il2cpp_TypeInfo_var))->get_address_of_TornadoRotationCek_24())->get_x_2();
		float L_15;
		L_15 = sinf(((float)((float)((float)il2cpp_codegen_multiply((float)L_14, (float)(3.14159274f)))/(float)(180.0f))));
		float L_16 = L_15;
		RuntimeObject * L_17 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_16);
		MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(L_17, /*hidden argument*/NULL);
		// Tornado.transform.position=Tornado.transform.position+(TornadoAddingVector/20);
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_18 = __this->get_Tornado_10();
		NullCheck(L_18);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19;
		L_19 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_18, /*hidden argument*/NULL);
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_20 = __this->get_Tornado_10();
		NullCheck(L_20);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21;
		L_21 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_20, /*hidden argument*/NULL);
		NullCheck(L_21);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		L_22 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_21, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23 = __this->get_TornadoAddingVector_25();
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CShakeU3Ed__32_tCF25518FAB5A1AF5E4B8C1D01CE213E18FDEC1E9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CShakeU3Ed__32_tCF25518FAB5A1AF5E4B8C1D01CE213E18FDEC1E9 * L_0 = (U3CShakeU3Ed__32_tCF25518FAB5A1AF5E4B8C1D01CE213E18FDEC1E9 *)il2cpp_codegen_object_new(U3CShakeU3Ed__32_tCF25518FAB5A1AF5E4B8C1D01CE213E18FDEC1E9_il2cpp_TypeInfo_var);
		U3CShakeU3Ed__32__ctor_mF08FF4EFE4A39DD8D1448EFCA7D09A4A628A0462(L_0, 0, /*hidden argument*/NULL);
		U3CShakeU3Ed__32_tCF25518FAB5A1AF5E4B8C1D01CE213E18FDEC1E9 * L_1 = L_0;
		float L_2 = ___duration0;
		NullCheck(L_1);
		L_1->set_duration_3(L_2);
		U3CShakeU3Ed__32_tCF25518FAB5A1AF5E4B8C1D01CE213E18FDEC1E9 * L_3 = L_1;
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
		__this->set_coolDownConstant_20((1.0f));
		// int AttackSelectionIndex = -1;
		__this->set_AttackSelectionIndex_23((-1));
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
// System.Void enemyHealthSystem1::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void enemyHealthSystem1_Awake_m2197A5C272179D8292B87FF1E5C307C153441043 (enemyHealthSystem1_t9D32045CB414C7BF3B895294B1044F2D9FFA0029 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisSlider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A_mECB3B5A216AD4AAA7331E7F6731886264840D054_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m75CC9D1656BD67C760E6D5EA89403C89B728E8F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m7556907CF90B895FDFBEC11100A5F7AD5FAF1AA6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral096F6061D64CCAD1C750343DCFC7A756F02A1955);
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
		// gravestone = GameObject.FindGameObjectWithTag("Gravestone");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19;
		L_19 = GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F(_stringLiteral096F6061D64CCAD1C750343DCFC7A756F02A1955, /*hidden argument*/NULL);
		__this->set_gravestone_13(L_19);
		// healthSlider.value = healthController.GetHealthMax();
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_20 = __this->get_healthSlider_6();
		HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 * L_21 = __this->get_healthController_5();
		NullCheck(L_21);
		float L_22;
		L_22 = HealthController_GetHealthMax_m1AEB454DBA5B8AEA4353044AD37F7C9E7467760A(L_21, /*hidden argument*/NULL);
		NullCheck(L_20);
		VirtActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_20, L_22);
		// maxHealthText.text = "" + healthController.GetHealthMax();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_23 = __this->get_maxHealthText_7();
		HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 * L_24 = __this->get_healthController_5();
		NullCheck(L_24);
		float L_25;
		L_25 = HealthController_GetHealthMax_m1AEB454DBA5B8AEA4353044AD37F7C9E7467760A(L_24, /*hidden argument*/NULL);
		V_0 = L_25;
		String_t* L_26;
		L_26 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)(&V_0), /*hidden argument*/NULL);
		String_t* L_27 = L_26;
		G_B1_0 = L_27;
		G_B1_1 = L_23;
		if (L_27)
		{
			G_B2_0 = L_27;
			G_B2_1 = L_23;
			goto IL_00c1;
		}
	}
	{
		G_B2_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B2_1 = G_B1_1;
	}

IL_00c1:
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
		bool L_9 = __this->get_graveStoneControl_16();
		if (!L_9)
		{
			goto IL_005b;
		}
	}
	{
		// DeadStatus();
		enemyHealthSystem1_DeadStatus_m49D678D7303CB34E2E605F0DF888C65AAAD38D55(__this, /*hidden argument*/NULL);
		// graveStoneControl = false;
		__this->set_graveStoneControl_16((bool)0);
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
		int32_t L_0 = ((PanelController_t680C04009837CA28BD14657765EC2AAE385ED0EA_StaticFields*)il2cpp_codegen_static_fields_for(PanelController_t680C04009837CA28BD14657765EC2AAE385ED0EA_il2cpp_TypeInfo_var))->get_AliveCountNumber_11();
		((PanelController_t680C04009837CA28BD14657765EC2AAE385ED0EA_StaticFields*)il2cpp_codegen_static_fields_for(PanelController_t680C04009837CA28BD14657765EC2AAE385ED0EA_il2cpp_TypeInfo_var))->set_AliveCountNumber_11(((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1)));
		// PanelSc.AliveCountUpdate();
		PanelController_t680C04009837CA28BD14657765EC2AAE385ED0EA * L_1 = __this->get_PanelSc_4();
		NullCheck(L_1);
		PanelController_AliveCountUpdate_m6772DD828E83FCCEE6913DDC1E8B7B98174058F1(L_1, /*hidden argument*/NULL);
		// if (PanelController.AliveCountNumber==1)
		int32_t L_2 = ((PanelController_t680C04009837CA28BD14657765EC2AAE385ED0EA_StaticFields*)il2cpp_codegen_static_fields_for(PanelController_t680C04009837CA28BD14657765EC2AAE385ED0EA_il2cpp_TypeInfo_var))->get_AliveCountNumber_11();
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
		// GameObject graveStone = GameObject.Instantiate(gravestone);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = __this->get_gravestone_13();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14;
		L_14 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_13, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		// graveStone.transform.position = transform.position;
		NullCheck(L_14);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_14, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_16);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_16, /*hidden argument*/NULL);
		NullCheck(L_15);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_15, L_17, /*hidden argument*/NULL);
		// if (PanelController.AliveCountNumber==1)            //son büyücü ölünce buraya girsin ?
		int32_t L_18 = ((PanelController_t680C04009837CA28BD14657765EC2AAE385ED0EA_StaticFields*)il2cpp_codegen_static_fields_for(PanelController_t680C04009837CA28BD14657765EC2AAE385ED0EA_il2cpp_TypeInfo_var))->get_AliveCountNumber_11();
		if ((!(((uint32_t)L_18) == ((uint32_t)1))))
		{
			goto IL_00dc;
		}
	}
	{
		// LevelPassed();
		enemyHealthSystem1_LevelPassed_mDC339FFCEB56B3B5BC722DD148D23338CDA4E25E(__this, /*hidden argument*/NULL);
	}

IL_00dc:
	{
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PanelController_t680C04009837CA28BD14657765EC2AAE385ED0EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PanelController.Instance.SetCloseOpenAllPanels();
		PanelController_t680C04009837CA28BD14657765EC2AAE385ED0EA * L_0 = ((PanelController_t680C04009837CA28BD14657765EC2AAE385ED0EA_StaticFields*)il2cpp_codegen_static_fields_for(PanelController_t680C04009837CA28BD14657765EC2AAE385ED0EA_il2cpp_TypeInfo_var))->get_Instance_4();
		NullCheck(L_0);
		PanelController_SetCloseOpenAllPanels_mB5C3289166CC60EB22FE8B79CE30F2D95EAA2AB6(L_0, /*hidden argument*/NULL);
		// PanelController.Instance.SetSuccessPanel(true);
		PanelController_t680C04009837CA28BD14657765EC2AAE385ED0EA * L_1 = ((PanelController_t680C04009837CA28BD14657765EC2AAE385ED0EA_StaticFields*)il2cpp_codegen_static_fields_for(PanelController_t680C04009837CA28BD14657765EC2AAE385ED0EA_il2cpp_TypeInfo_var))->get_Instance_4();
		NullCheck(L_1);
		PanelController_SetSuccessPanel_m7DC4BB00704448F0F4AD2E3AA1E710FC8953CFB0(L_1, (bool)1, /*hidden argument*/NULL);
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral369EA7CB5F0300CDA271EB79E496C69F49A4E5F9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56D755507113B0D056C6E727D2B4E8FC6BBA2E48);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral80BC82F1DD5166532AE66D07BA010008AA0FDE06);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC470C6E32564963D06544F2773FCAEF947A1AB3A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6E5AAE0E0842A00FBDDBEC69FC79A4266000F86);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.tag == "DefaultBallAnim" || other.gameObject.tag=="DefaultBallAnimAI")
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___other0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, _stringLiteral80BC82F1DD5166532AE66D07BA010008AA0FDE06, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_002e;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = ___other0;
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		String_t* L_6;
		L_6 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_5, /*hidden argument*/NULL);
		bool L_7;
		L_7 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_6, _stringLiteralC470C6E32564963D06544F2773FCAEF947A1AB3A, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_004d;
		}
	}

IL_002e:
	{
		// healthController.Damage(50);
		HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 * L_8 = __this->get_healthController_5();
		NullCheck(L_8);
		HealthController_Damage_m72DC74C513F1A4FB7DA30BAAE1154A53B686B832(L_8, ((int32_t)50), /*hidden argument*/NULL);
		// HealthUpdate();
		enemyHealthSystem1_HealthUpdate_m547DFFE79A4C0FBECC0AF4502AF0561C7BC5852E(__this, /*hidden argument*/NULL);
		// explosionAnim.Play();
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_9 = __this->get_explosionAnim_10();
		NullCheck(L_9);
		ParticleSystem_Play_m28D27CC4CDC1D93195C75647E6F6DAECF8B6BC50(L_9, /*hidden argument*/NULL);
		// }
		return;
	}

IL_004d:
	{
		// else if (other.gameObject.tag=="FireballAnim")
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = ___other0;
		NullCheck(L_10);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11;
		L_11 = GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		String_t* L_12;
		L_12 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_11, /*hidden argument*/NULL);
		bool L_13;
		L_13 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_12, _stringLiteralD6E5AAE0E0842A00FBDDBEC69FC79A4266000F86, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0083;
		}
	}
	{
		// healthController.Damage(43);
		HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 * L_14 = __this->get_healthController_5();
		NullCheck(L_14);
		HealthController_Damage_m72DC74C513F1A4FB7DA30BAAE1154A53B686B832(L_14, ((int32_t)43), /*hidden argument*/NULL);
		// HealthUpdate();
		enemyHealthSystem1_HealthUpdate_m547DFFE79A4C0FBECC0AF4502AF0561C7BC5852E(__this, /*hidden argument*/NULL);
		// explosionAnim.Play();
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_15 = __this->get_explosionAnim_10();
		NullCheck(L_15);
		ParticleSystem_Play_m28D27CC4CDC1D93195C75647E6F6DAECF8B6BC50(L_15, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0083:
	{
		// else if (other.gameObject.tag=="WaterballAnim")
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = ___other0;
		NullCheck(L_16);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17;
		L_17 = GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		String_t* L_18;
		L_18 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_17, /*hidden argument*/NULL);
		bool L_19;
		L_19 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_18, _stringLiteral56D755507113B0D056C6E727D2B4E8FC6BBA2E48, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_00b9;
		}
	}
	{
		// healthController.Damage(33);
		HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 * L_20 = __this->get_healthController_5();
		NullCheck(L_20);
		HealthController_Damage_m72DC74C513F1A4FB7DA30BAAE1154A53B686B832(L_20, ((int32_t)33), /*hidden argument*/NULL);
		// HealthUpdate();
		enemyHealthSystem1_HealthUpdate_m547DFFE79A4C0FBECC0AF4502AF0561C7BC5852E(__this, /*hidden argument*/NULL);
		// freezingAnim.Play();
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_21 = __this->get_freezingAnim_11();
		NullCheck(L_21);
		ParticleSystem_Play_m28D27CC4CDC1D93195C75647E6F6DAECF8B6BC50(L_21, /*hidden argument*/NULL);
		// }
		return;
	}

IL_00b9:
	{
		// else if (other.gameObject.tag=="LightningballAnim")
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22 = ___other0;
		NullCheck(L_22);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23;
		L_23 = GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6(L_22, /*hidden argument*/NULL);
		NullCheck(L_23);
		String_t* L_24;
		L_24 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_23, /*hidden argument*/NULL);
		bool L_25;
		L_25 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_24, _stringLiteral369EA7CB5F0300CDA271EB79E496C69F49A4E5F9, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_00ee;
		}
	}
	{
		// healthController.Damage(23);
		HealthController_tECDB2B7B65B23AF81773EBEED08D0CA01252D8D7 * L_26 = __this->get_healthController_5();
		NullCheck(L_26);
		HealthController_Damage_m72DC74C513F1A4FB7DA30BAAE1154A53B686B832(L_26, ((int32_t)23), /*hidden argument*/NULL);
		// HealthUpdate();
		enemyHealthSystem1_HealthUpdate_m547DFFE79A4C0FBECC0AF4502AF0561C7BC5852E(__this, /*hidden argument*/NULL);
		// explosionAnim.Play();
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_27 = __this->get_explosionAnim_10();
		NullCheck(L_27);
		ParticleSystem_Play_m28D27CC4CDC1D93195C75647E6F6DAECF8B6BC50(L_27, /*hidden argument*/NULL);
	}

IL_00ee:
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
		__this->set_graveStoneControl_16((bool)1);
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
// System.Void attack/<Shake>d__32::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShakeU3Ed__32__ctor_mF08FF4EFE4A39DD8D1448EFCA7D09A4A628A0462 (U3CShakeU3Ed__32_tCF25518FAB5A1AF5E4B8C1D01CE213E18FDEC1E9 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void attack/<Shake>d__32::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShakeU3Ed__32_System_IDisposable_Dispose_mB28E71C92D2A66C4B7D031626D1A419FABD95BED (U3CShakeU3Ed__32_tCF25518FAB5A1AF5E4B8C1D01CE213E18FDEC1E9 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean attack/<Shake>d__32::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CShakeU3Ed__32_MoveNext_mB16BBC08723D1B14E5413F187F5AF1C4A564CBBA (U3CShakeU3Ed__32_tCF25518FAB5A1AF5E4B8C1D01CE213E18FDEC1E9 * __this, const RuntimeMethod* method)
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
// System.Object attack/<Shake>d__32::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CShakeU3Ed__32_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m5D660489216753B133AEAE2AB64697CEABD8D01A (U3CShakeU3Ed__32_tCF25518FAB5A1AF5E4B8C1D01CE213E18FDEC1E9 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void attack/<Shake>d__32::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShakeU3Ed__32_System_Collections_IEnumerator_Reset_mAFA4906CE1FEABFB2254F67C8F4E162B58B19088 (U3CShakeU3Ed__32_tCF25518FAB5A1AF5E4B8C1D01CE213E18FDEC1E9 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CShakeU3Ed__32_System_Collections_IEnumerator_Reset_mAFA4906CE1FEABFB2254F67C8F4E162B58B19088_RuntimeMethod_var)));
	}
}
// System.Object attack/<Shake>d__32::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CShakeU3Ed__32_System_Collections_IEnumerator_get_Current_mCD6D109C225581BE5B79E27D7FCA177D1954E143 (U3CShakeU3Ed__32_tCF25518FAB5A1AF5E4B8C1D01CE213E18FDEC1E9 * __this, const RuntimeMethod* method)
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline (Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * __this, const RuntimeMethod* method)
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_0 = __this->get_m_OnClick_20();
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
		__this->set_die_2(L_0);
		// }
		return;
	}
}
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
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
